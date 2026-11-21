#include "protos.h"

void f_0055e2e0(void) /* sub_55E2E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0055e2e0);
    /* 0055e2e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0055e2e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0055e2e3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0055e2e6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0055e2e9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0055e2f0: jmp 0x55e2fb */ goto L_0055e2fb;
L_0055e2f2:; BB(0x0055e2f2);
    /* 0055e2f2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055e2f5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055e2f8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0055e2fb:; BB(0x0055e2fb);
    /* 0055e2fb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055e2fe: call 0x559380 */ r_esp -= 4; W32(r_esp, 0x55e303u); f_00559380();
    /* 0055e303: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055e306: jge 0x55e346 */ if ((fS==fO)) goto L_0055e346;
L_0055e308:; BB(0x0055e308);
    /* 0055e308: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055e30b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055e30e: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0055e313: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055e314: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055e317: call 0x5593d0 */ r_esp -= 4; W32(r_esp, 0x55e31cu); f_005593d0();
    /* 0055e31c: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055e31f: je 0x55e340 */ if (fZ) goto L_0055e340;
L_0055e321:; BB(0x0055e321);
    /* 0055e321: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055e324: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055e327: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0055e32c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055e32d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055e330: call 0x5593d0 */ r_esp -= 4; W32(r_esp, 0x55e335u); f_005593d0();
    /* 0055e335: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055e338: jne 0x55e344 */ if (!fZ) goto L_0055e344;
L_0055e33a:; BB(0x0055e33a);
    /* 0055e33a: cmp dword ptr [ebp + 8], 1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055e33e: jne 0x55e344 */ if (!fZ) goto L_0055e344;
L_0055e340:; BB(0x0055e340);
    /* 0055e340: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0055e342: jmp 0x55e348 */ goto L_0055e348;
L_0055e344:; BB(0x0055e344);
    /* 0055e344: jmp 0x55e2f2 */ goto L_0055e2f2;
L_0055e346:; BB(0x0055e346);
    /* 0055e346: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0055e348:; BB(0x0055e348);
    /* 0055e348: mov esp, ebp */ r_esp = r_ebp;
    /* 0055e34a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055e34b: ret 4 */ FN_RET(0x0055e2e0); r_esp += 8; return;
}

void f_0055e350(void) /* sub_55E350 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0055e350);
    /* 0055e350: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0055e351: mov ebp, esp */ r_ebp = r_esp;
    /* 0055e353: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0055e356: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0055e359: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0055e360: jmp 0x55e36b */ goto L_0055e36b;
L_0055e362:; BB(0x0055e362);
    /* 0055e362: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055e365: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055e368: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0055e36b:; BB(0x0055e36b);
    /* 0055e36b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055e36e: call 0x559380 */ r_esp -= 4; W32(r_esp, 0x55e373u); f_00559380();
    /* 0055e373: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055e376: jge 0x55e3cf */ if ((fS==fO)) goto L_0055e3cf;
L_0055e378:; BB(0x0055e378);
    /* 0055e378: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055e37b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055e37e: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0055e383: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055e384: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055e387: call 0x5593d0 */ r_esp -= 4; W32(r_esp, 0x55e38cu); f_005593d0();
    /* 0055e38c: cmp eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055e38f: je 0x55e3b0 */ if (fZ) goto L_0055e3b0;
L_0055e391:; BB(0x0055e391);
    /* 0055e391: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055e394: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055e397: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0055e39c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055e39d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055e3a0: call 0x5593d0 */ r_esp -= 4; W32(r_esp, 0x55e3a5u); f_005593d0();
    /* 0055e3a5: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055e3a8: jne 0x55e3cd */ if (!fZ) goto L_0055e3cd;
L_0055e3aa:; BB(0x0055e3aa);
    /* 0055e3aa: cmp dword ptr [ebp + 0xc], 1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055e3ae: jne 0x55e3cd */ if (!fZ) goto L_0055e3cd;
L_0055e3b0:; BB(0x0055e3b0);
    /* 0055e3b0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055e3b3: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055e3b6: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0055e3bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055e3bc: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x55e3c1u); f_00641290();
    /* 0055e3c1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055e3c4: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055e3c7: jne 0x55e3cd */ if (!fZ) goto L_0055e3cd;
L_0055e3c9:; BB(0x0055e3c9);
    /* 0055e3c9: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0055e3cb: jmp 0x55e3d1 */ goto L_0055e3d1;
L_0055e3cd:; BB(0x0055e3cd);
    /* 0055e3cd: jmp 0x55e362 */ goto L_0055e362;
L_0055e3cf:; BB(0x0055e3cf);
    /* 0055e3cf: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0055e3d1:; BB(0x0055e3d1);
    /* 0055e3d1: mov esp, ebp */ r_esp = r_ebp;
    /* 0055e3d3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055e3d4: ret 8 */ FN_RET(0x0055e350); r_esp += 12; return;
}

void f_0055e3e0(void) /* sub_55E3E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0055e3e0);
    /* 0055e3e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0055e3e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0055e3e3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0055e3e6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0055e3e9: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0055e3f0: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0055e3f7: jmp 0x55e402 */ goto L_0055e402;
L_0055e3f9:; BB(0x0055e3f9);
    /* 0055e3f9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055e3fc: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055e3ff: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0055e402:; BB(0x0055e402);
    /* 0055e402: cmp dword ptr [ebp - 4], 0xf */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055e406: jge 0x55e42a */ if ((fS==fO)) goto L_0055e42a;
L_0055e408:; BB(0x0055e408);
    /* 0055e408: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055e40b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055e40c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0055e40f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055e410: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055e413: call 0x55e350 */ r_esp -= 4; W32(r_esp, 0x55e418u); f_0055e350();
    /* 0055e418: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0055e41b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055e41d: je 0x55e428 */ if (fZ) goto L_0055e428;
L_0055e41f:; BB(0x0055e41f);
    /* 0055e41f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055e422: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055e425: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0055e428:; BB(0x0055e428);
    /* 0055e428: jmp 0x55e3f9 */ goto L_0055e3f9;
L_0055e42a:; BB(0x0055e42a);
    /* 0055e42a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055e42d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0055e42f: cmp edx, dword ptr [ebp + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055e432: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0055e435: mov esp, ebp */ r_esp = r_ebp;
    /* 0055e437: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055e438: ret 8 */ FN_RET(0x0055e3e0); r_esp += 12; return;
}

void f_0055e440(void) /* sub_55E440 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0055e440);
    /* 0055e440: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0055e441: mov ebp, esp */ r_ebp = r_esp;
    /* 0055e443: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0055e446: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0055e449: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0055e450: cmp dword ptr [ebp + 0xc], 0xb */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055e454: jl 0x55e45a */ if ((fS!=fO)) goto L_0055e45a;
L_0055e456:; BB(0x0055e456);
    /* 0055e456: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0055e458: jmp 0x55e4af */ goto L_0055e4af;
L_0055e45a:; BB(0x0055e45a);
    /* 0055e45a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0055e461: jmp 0x55e46c */ goto L_0055e46c;
L_0055e463:; BB(0x0055e463);
    /* 0055e463: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055e466: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055e469: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0055e46c:; BB(0x0055e46c);
    /* 0055e46c: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055e470: jge 0x55e4a4 */ if ((fS==fO)) goto L_0055e4a4;
L_0055e472:; BB(0x0055e472);
    /* 0055e472: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0055e475: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055e478: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055e479: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055e47c: call 0x55e2e0 */ r_esp -= 4; W32(r_esp, 0x55e481u); f_0055e2e0();
    /* 0055e481: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0055e484: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055e486: je 0x55e493 */ if (fZ) goto L_0055e493;
L_0055e488:; BB(0x0055e488);
    /* 0055e488: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055e48b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055e48e: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0055e491: jmp 0x55e4a2 */ goto L_0055e4a2;
L_0055e493:; BB(0x0055e493);
    /* 0055e493: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055e496: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055e499: je 0x55e4a2 */ if (fZ) goto L_0055e4a2;
L_0055e49b:; BB(0x0055e49b);
    /* 0055e49b: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_0055e4a2:; BB(0x0055e4a2);
    /* 0055e4a2: jmp 0x55e463 */ goto L_0055e463;
L_0055e4a4:; BB(0x0055e4a4);
    /* 0055e4a4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055e4a7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0055e4a9: cmp edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055e4ac: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
L_0055e4af:; BB(0x0055e4af);
    /* 0055e4af: mov esp, ebp */ r_esp = r_ebp;
    /* 0055e4b1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055e4b2: ret 8 */ FN_RET(0x0055e440); r_esp += 12; return;
}

void f_0055e4c0(void) /* sub_55E4C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0055e4c0);
    /* 0055e4c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0055e4c1: mov ebp, esp */ r_ebp = r_esp;
    /* 0055e4c3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0055e4c6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0055e4c9: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0055e4d0: mov eax, 5 */ r_eax = 0x5u;
    /* 0055e4d5: sub eax, dword ptr [ebp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0055e4d8: add eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055e4db: cmp dword ptr [ebp + 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055e4de: jl 0x55e4e4 */ if ((fS!=fO)) goto L_0055e4e4;
L_0055e4e0:; BB(0x0055e4e0);
    /* 0055e4e0: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0055e4e2: jmp 0x55e52c */ goto L_0055e52c;
L_0055e4e4:; BB(0x0055e4e4);
    /* 0055e4e4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0055e4eb: jmp 0x55e4f6 */ goto L_0055e4f6;
L_0055e4ed:; BB(0x0055e4ed);
    /* 0055e4ed: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055e4f0: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055e4f3: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0055e4f6:; BB(0x0055e4f6);
    /* 0055e4f6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055e4f9: cmp edx, dword ptr [ebp + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055e4fc: jge 0x55e51f */ if ((fS==fO)) goto L_0055e51f;
L_0055e4fe:; BB(0x0055e4fe);
    /* 0055e4fe: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0055e501: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055e504: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055e505: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055e508: call 0x55e2e0 */ r_esp -= 4; W32(r_esp, 0x55e50du); f_0055e2e0();
    /* 0055e50d: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0055e510: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055e512: je 0x55e51d */ if (fZ) goto L_0055e51d;
L_0055e514:; BB(0x0055e514);
    /* 0055e514: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055e517: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055e51a: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0055e51d:; BB(0x0055e51d);
    /* 0055e51d: jmp 0x55e4ed */ goto L_0055e4ed;
L_0055e51f:; BB(0x0055e51f);
    /* 0055e51f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055e522: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0055e524: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055e527: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0055e52a: mov al, cl */ r_eax = (r_eax & 0xffffff00u) | (((u8)r_ecx) & 0xffu);
L_0055e52c:; BB(0x0055e52c);
    /* 0055e52c: mov esp, ebp */ r_esp = r_ebp;
    /* 0055e52e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055e52f: ret 0xc */ FN_RET(0x0055e4c0); r_esp += 16; return;
}

void f_0055e540(void) /* sub_55E540 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0055e540);
    /* 0055e540: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0055e541: mov ebp, esp */ r_ebp = r_esp;
    /* 0055e543: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0055e546: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0055e549: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0055e550: cmp dword ptr [ebp + 0x10], 0xb */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055e554: jl 0x55e55a */ if ((fS!=fO)) goto L_0055e55a;
L_0055e556:; BB(0x0055e556);
    /* 0055e556: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0055e558: jmp 0x55e5b5 */ goto L_0055e5b5;
L_0055e55a:; BB(0x0055e55a);
    /* 0055e55a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0055e561: jmp 0x55e56c */ goto L_0055e56c;
L_0055e563:; BB(0x0055e563);
    /* 0055e563: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055e566: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055e569: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0055e56c:; BB(0x0055e56c);
    /* 0055e56c: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055e570: jge 0x55e5a8 */ if ((fS==fO)) goto L_0055e5a8;
L_0055e572:; BB(0x0055e572);
    /* 0055e572: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0055e575: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055e578: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055e579: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0055e57c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055e57d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055e580: call 0x55e350 */ r_esp -= 4; W32(r_esp, 0x55e585u); f_0055e350();
    /* 0055e585: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0055e588: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055e58a: je 0x55e597 */ if (fZ) goto L_0055e597;
L_0055e58c:; BB(0x0055e58c);
    /* 0055e58c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055e58f: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055e592: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0055e595: jmp 0x55e5a6 */ goto L_0055e5a6;
L_0055e597:; BB(0x0055e597);
    /* 0055e597: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055e59a: cmp edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055e59d: je 0x55e5a6 */ if (fZ) goto L_0055e5a6;
L_0055e59f:; BB(0x0055e59f);
    /* 0055e59f: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_0055e5a6:; BB(0x0055e5a6);
    /* 0055e5a6: jmp 0x55e563 */ goto L_0055e563;
L_0055e5a8:; BB(0x0055e5a8);
    /* 0055e5a8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055e5ab: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0055e5ad: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055e5b0: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0055e5b3: mov al, cl */ r_eax = (r_eax & 0xffffff00u) | (((u8)r_ecx) & 0xffu);
L_0055e5b5:; BB(0x0055e5b5);
    /* 0055e5b5: mov esp, ebp */ r_esp = r_ebp;
    /* 0055e5b7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055e5b8: ret 0xc */ FN_RET(0x0055e540); r_esp += 16; return;
}

void f_0055e5c0(void) /* sub_55E5C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0055e5c0);
    /* 0055e5c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0055e5c1: mov ebp, esp */ r_ebp = r_esp;
    /* 0055e5c3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0055e5c6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0055e5c9: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0055e5d0: mov eax, 5 */ r_eax = 0x5u;
    /* 0055e5d5: sub eax, dword ptr [ebp + 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x14u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0055e5d8: add eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055e5db: cmp dword ptr [ebp + 0x10], eax */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055e5de: jl 0x55e5e4 */ if ((fS!=fO)) goto L_0055e5e4;
L_0055e5e0:; BB(0x0055e5e0);
    /* 0055e5e0: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0055e5e2: jmp 0x55e62e */ goto L_0055e62e;
L_0055e5e4:; BB(0x0055e5e4);
    /* 0055e5e4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0055e5eb: jmp 0x55e5f6 */ goto L_0055e5f6;
L_0055e5ed:; BB(0x0055e5ed);
    /* 0055e5ed: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055e5f0: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055e5f3: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0055e5f6:; BB(0x0055e5f6);
    /* 0055e5f6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055e5f9: cmp edx, dword ptr [ebp + 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x14u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055e5fc: jge 0x55e623 */ if ((fS==fO)) goto L_0055e623;
L_0055e5fe:; BB(0x0055e5fe);
    /* 0055e5fe: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0055e601: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055e604: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055e605: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0055e608: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055e609: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055e60c: call 0x55e350 */ r_esp -= 4; W32(r_esp, 0x55e611u); f_0055e350();
    /* 0055e611: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0055e614: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055e616: je 0x55e621 */ if (fZ) goto L_0055e621;
L_0055e618:; BB(0x0055e618);
    /* 0055e618: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055e61b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055e61e: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0055e621:; BB(0x0055e621);
    /* 0055e621: jmp 0x55e5ed */ goto L_0055e5ed;
L_0055e623:; BB(0x0055e623);
    /* 0055e623: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055e626: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0055e628: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055e62b: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
L_0055e62e:; BB(0x0055e62e);
    /* 0055e62e: mov esp, ebp */ r_esp = r_ebp;
    /* 0055e630: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055e631: ret 0x10 */ FN_RET(0x0055e5c0); r_esp += 20; return;
}

void f_0055e640(void) /* sub_55E640 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0055e640);
    /* 0055e640: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0055e641: mov ebp, esp */ r_ebp = r_esp;
    /* 0055e643: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0055e646: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0055e649: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0055e650: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 0055e657: jmp 0x55e662 */ goto L_0055e662;
L_0055e659:; BB(0x0055e659);
    /* 0055e659: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055e65c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055e65f: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0055e662:; BB(0x0055e662);
    /* 0055e662: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055e666: jg 0x55e782 */ if ((!fZ&&fS==fO)) goto L_0055e782;
L_0055e66c:; BB(0x0055e66c);
    /* 0055e66c: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0055e66f: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0055e672: jmp 0x55e67d */ goto L_0055e67d;
L_0055e674:; BB(0x0055e674);
    /* 0055e674: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055e677: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055e67a: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_0055e67d:; BB(0x0055e67d);
    /* 0055e67d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055e680: cmp eax, dword ptr [ebp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055e683: jge 0x55e77d */ if ((fS==fO)) goto L_0055e77d;
L_0055e689:; BB(0x0055e689);
    /* 0055e689: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055e68c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055e68d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055e690: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055e691: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0055e694: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055e695: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0055e698: call 0x55e540 */ r_esp -= 4; W32(r_esp, 0x55e69du); f_0055e540();
    /* 0055e69d: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0055e6a0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055e6a2: je 0x55e778 */ if (fZ) goto L_0055e778;
L_0055e6a8:; BB(0x0055e6a8);
    /* 0055e6a8: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0055e6af: jmp 0x55e6ba */ goto L_0055e6ba;
L_0055e6b1:; BB(0x0055e6b1);
    /* 0055e6b1: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055e6b4: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055e6b7: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_0055e6ba:; BB(0x0055e6ba);
    /* 0055e6ba: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0055e6bd: call 0x559380 */ r_esp -= 4; W32(r_esp, 0x55e6c2u); f_00559380();
    /* 0055e6c2: cmp dword ptr [ebp - 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055e6c5: jge 0x55e771 */ if ((fS==fO)) goto L_0055e771;
L_0055e6cb:; BB(0x0055e6cb);
    /* 0055e6cb: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055e6ce: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0055e6d1: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 0055e6d6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055e6d7: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0055e6da: call 0x5593d0 */ r_esp -= 4; W32(r_esp, 0x55e6dfu); f_005593d0();
    /* 0055e6df: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055e6e2: je 0x55e76c */ if (fZ) goto L_0055e76c;
L_0055e6e8:; BB(0x0055e6e8);
    /* 0055e6e8: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055e6eb: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0055e6ee: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 0055e6f3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055e6f4: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55e6f9u); f_00641280();
    /* 0055e6f9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055e6fc: cmp eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055e6ff: jl 0x55e71f */ if ((fS!=fO)) goto L_0055e71f;
L_0055e701:; BB(0x0055e701);
    /* 0055e701: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055e704: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0055e707: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 0055e70c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055e70d: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55e712u); f_00641280();
    /* 0055e712: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055e715: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055e718: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055e71b: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055e71d: jle 0x55e73e */ if ((fZ||fS!=fO)) goto L_0055e73e;
L_0055e71f:; BB(0x0055e71f);
    /* 0055e71f: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055e722: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0055e725: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 0055e72a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055e72b: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55e730u); f_00641280();
    /* 0055e730: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055e733: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055e736: jne 0x55e76c */ if (!fZ) goto L_0055e76c;
L_0055e738:; BB(0x0055e738);
    /* 0055e738: cmp dword ptr [ebp - 0x10], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055e73c: jne 0x55e76c */ if (!fZ) goto L_0055e76c;
L_0055e73e:; BB(0x0055e73e);
    /* 0055e73e: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055e741: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0055e744: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 0055e749: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055e74a: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x55e74fu); f_00641290();
    /* 0055e74f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055e752: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055e755: jne 0x55e76c */ if (!fZ) goto L_0055e76c;
L_0055e757:; BB(0x0055e757);
    /* 0055e757: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0055e75a: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055e75d: mov al, byte ptr [ebp - 0xc] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff4u))) & 0xffu);
    /* 0055e760: mov byte ptr [edx + 0x14], al */ W8((u32)(r_edx+0x14u), (u8)r_eax);
    /* 0055e763: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055e766: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055e769: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0055e76c:; BB(0x0055e76c);
    /* 0055e76c: jmp 0x55e6b1 */ goto L_0055e6b1;
L_0055e771:; BB(0x0055e771);
    /* 0055e771: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0055e773: jmp 0x55e8d8 */ goto L_0055e8d8;
L_0055e778:; BB(0x0055e778);
    /* 0055e778: jmp 0x55e674 */ goto L_0055e674;
L_0055e77d:; BB(0x0055e77d);
    /* 0055e77d: jmp 0x55e659 */ goto L_0055e659;
L_0055e782:; BB(0x0055e782);
    /* 0055e782: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 0055e789: jmp 0x55e794 */ goto L_0055e794;
L_0055e78b:; BB(0x0055e78b);
    /* 0055e78b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055e78e: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055e791: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0055e794:; BB(0x0055e794);
    /* 0055e794: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055e798: jg 0x55e8d6 */ if ((!fZ&&fS==fO)) goto L_0055e8d6;
L_0055e79e:; BB(0x0055e79e);
    /* 0055e79e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0055e7a1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055e7a4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_0055e7a7:; BB(0x0055e7a7);
    /* 0055e7a7: cmp dword ptr [ebp - 0x14], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055e7ab: jg 0x55e8d1 */ if ((!fZ&&fS==fO)) goto L_0055e8d1;
L_0055e7b1:; BB(0x0055e7b1);
    /* 0055e7b1: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0055e7b4: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0055e7b7: jmp 0x55e7c2 */ goto L_0055e7c2;
L_0055e7b9:; BB(0x0055e7b9);
    /* 0055e7b9: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055e7bc: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055e7bf: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_0055e7c2:; BB(0x0055e7c2);
    /* 0055e7c2: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055e7c5: cmp eax, dword ptr [ebp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055e7c8: jge 0x55e8c3 */ if ((fS==fO)) goto L_0055e8c3;
L_0055e7ce:; BB(0x0055e7ce);
    /* 0055e7ce: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055e7d1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055e7d2: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055e7d5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055e7d6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055e7d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055e7da: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0055e7dd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055e7de: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0055e7e1: call 0x55e5c0 */ r_esp -= 4; W32(r_esp, 0x55e7e6u); f_0055e5c0();
    /* 0055e7e6: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0055e7e9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055e7eb: je 0x55e8be */ if (fZ) goto L_0055e8be;
L_0055e7f1:; BB(0x0055e7f1);
    /* 0055e7f1: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0055e7f8: jmp 0x55e803 */ goto L_0055e803;
L_0055e7fa:; BB(0x0055e7fa);
    /* 0055e7fa: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055e7fd: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055e800: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_0055e803:; BB(0x0055e803);
    /* 0055e803: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0055e806: call 0x559380 */ r_esp -= 4; W32(r_esp, 0x55e80bu); f_00559380();
    /* 0055e80b: cmp dword ptr [ebp - 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055e80e: jge 0x55e8ba */ if ((fS==fO)) goto L_0055e8ba;
L_0055e814:; BB(0x0055e814);
    /* 0055e814: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055e817: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0055e81a: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0055e81f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055e820: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0055e823: call 0x5593d0 */ r_esp -= 4; W32(r_esp, 0x55e828u); f_005593d0();
    /* 0055e828: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055e82b: je 0x55e8b5 */ if (fZ) goto L_0055e8b5;
L_0055e831:; BB(0x0055e831);
    /* 0055e831: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055e834: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0055e837: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0055e83c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055e83d: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55e842u); f_00641280();
    /* 0055e842: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055e845: cmp eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055e848: jl 0x55e868 */ if ((fS!=fO)) goto L_0055e868;
L_0055e84a:; BB(0x0055e84a);
    /* 0055e84a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055e84d: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0055e850: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0055e855: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055e856: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55e85bu); f_00641280();
    /* 0055e85b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055e85e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055e861: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055e864: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055e866: jle 0x55e887 */ if ((fZ||fS!=fO)) goto L_0055e887;
L_0055e868:; BB(0x0055e868);
    /* 0055e868: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055e86b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0055e86e: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 0055e873: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055e874: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55e879u); f_00641280();
    /* 0055e879: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055e87c: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055e87f: jne 0x55e8b5 */ if (!fZ) goto L_0055e8b5;
L_0055e881:; BB(0x0055e881);
    /* 0055e881: cmp dword ptr [ebp - 0x10], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055e885: jne 0x55e8b5 */ if (!fZ) goto L_0055e8b5;
L_0055e887:; BB(0x0055e887);
    /* 0055e887: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055e88a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0055e88d: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 0055e892: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055e893: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x55e898u); f_00641290();
    /* 0055e898: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055e89b: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055e89e: jne 0x55e8b5 */ if (!fZ) goto L_0055e8b5;
L_0055e8a0:; BB(0x0055e8a0);
    /* 0055e8a0: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0055e8a3: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055e8a6: mov al, byte ptr [ebp - 0xc] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff4u))) & 0xffu);
    /* 0055e8a9: mov byte ptr [edx + 0x14], al */ W8((u32)(r_edx+0x14u), (u8)r_eax);
    /* 0055e8ac: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055e8af: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055e8b2: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0055e8b5:; BB(0x0055e8b5);
    /* 0055e8b5: jmp 0x55e7fa */ goto L_0055e7fa;
L_0055e8ba:; BB(0x0055e8ba);
    /* 0055e8ba: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0055e8bc: jmp 0x55e8d8 */ goto L_0055e8d8;
L_0055e8be:; BB(0x0055e8be);
    /* 0055e8be: jmp 0x55e7b9 */ goto L_0055e7b9;
L_0055e8c3:; BB(0x0055e8c3);
    /* 0055e8c3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055e8c6: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055e8c9: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0055e8cc: jmp 0x55e7a7 */ goto L_0055e7a7;
L_0055e8d1:; BB(0x0055e8d1);
    /* 0055e8d1: jmp 0x55e78b */ goto L_0055e78b;
L_0055e8d6:; BB(0x0055e8d6);
    /* 0055e8d6: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0055e8d8:; BB(0x0055e8d8);
    /* 0055e8d8: mov esp, ebp */ r_esp = r_ebp;
    /* 0055e8da: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055e8db: ret 0xc */ FN_RET(0x0055e640); r_esp += 16; return;
}

void f_0055e8e0(void) /* sub_55E8E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0055e8e0);
    /* 0055e8e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0055e8e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0055e8e3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0055e8e6: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0055e8e9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0055e8f0: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 0055e8f7: jmp 0x55e902 */ goto L_0055e902;
L_0055e8f9:; BB(0x0055e8f9);
    /* 0055e8f9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055e8fc: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055e8ff: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0055e902:; BB(0x0055e902);
    /* 0055e902: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055e906: jg 0x55e972 */ if ((!fZ&&fS==fO)) goto L_0055e972;
L_0055e908:; BB(0x0055e908);
    /* 0055e908: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0055e90a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055e90d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055e90e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055e911: call 0x55e3e0 */ r_esp -= 4; W32(r_esp, 0x55e916u); f_0055e3e0();
    /* 0055e916: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0055e919: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055e91b: je 0x55e970 */ if (fZ) goto L_0055e970;
L_0055e91d:; BB(0x0055e91d);
    /* 0055e91d: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0055e924: jmp 0x55e92f */ goto L_0055e92f;
L_0055e926:; BB(0x0055e926);
    /* 0055e926: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055e929: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055e92c: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_0055e92f:; BB(0x0055e92f);
    /* 0055e92f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055e932: call 0x559380 */ r_esp -= 4; W32(r_esp, 0x55e937u); f_00559380();
    /* 0055e937: cmp dword ptr [ebp - 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055e93a: jge 0x55e96c */ if ((fS==fO)) goto L_0055e96c;
L_0055e93c:; BB(0x0055e93c);
    /* 0055e93c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055e93f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055e942: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0055e947: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055e948: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x55e94du); f_00641290();
    /* 0055e94d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055e950: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055e953: jne 0x55e96a */ if (!fZ) goto L_0055e96a;
L_0055e955:; BB(0x0055e955);
    /* 0055e955: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055e958: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055e95b: mov dl, byte ptr [ebp - 0xc] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff4u))) & 0xffu);
    /* 0055e95e: mov byte ptr [ecx + 0x14], dl */ W8((u32)(r_ecx+0x14u), (u8)r_edx);
    /* 0055e961: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055e964: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055e967: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0055e96a:; BB(0x0055e96a);
    /* 0055e96a: jmp 0x55e926 */ goto L_0055e926;
L_0055e96c:; BB(0x0055e96c);
    /* 0055e96c: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0055e96e: jmp 0x55e974 */ goto L_0055e974;
L_0055e970:; BB(0x0055e970);
    /* 0055e970: jmp 0x55e8f9 */ goto L_0055e8f9;
L_0055e972:; BB(0x0055e972);
    /* 0055e972: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0055e974:; BB(0x0055e974);
    /* 0055e974: mov esp, ebp */ r_esp = r_ebp;
    /* 0055e976: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055e977: ret  */ FN_RET(0x0055e8e0); r_esp += 4; return;
}

void f_0055e980(void) /* sub_55E980 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0055e980);
    /* 0055e980: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0055e981: mov ebp, esp */ r_ebp = r_esp;
    /* 0055e983: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0055e986: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0055e989: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0055e990: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0055e993: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0055e996: jmp 0x55e9a1 */ goto L_0055e9a1;
L_0055e998:; BB(0x0055e998);
    /* 0055e998: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055e99b: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055e99e: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_0055e9a1:; BB(0x0055e9a1);
    /* 0055e9a1: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055e9a4: cmp edx, dword ptr [ebp + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055e9a7: jge 0x55ea80 */ if ((fS==fO)) goto L_0055ea80;
L_0055e9ad:; BB(0x0055e9ad);
    /* 0055e9ad: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055e9b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055e9b1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0055e9b4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055e9b5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055e9b8: call 0x55e440 */ r_esp -= 4; W32(r_esp, 0x55e9bdu); f_0055e440();
    /* 0055e9bd: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0055e9c0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055e9c2: je 0x55ea7b */ if (fZ) goto L_0055ea7b;
L_0055e9c8:; BB(0x0055e9c8);
    /* 0055e9c8: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0055e9cf: jmp 0x55e9da */ goto L_0055e9da;
L_0055e9d1:; BB(0x0055e9d1);
    /* 0055e9d1: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055e9d4: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055e9d7: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_0055e9da:; BB(0x0055e9da);
    /* 0055e9da: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055e9dd: call 0x559380 */ r_esp -= 4; W32(r_esp, 0x55e9e2u); f_00559380();
    /* 0055e9e2: cmp dword ptr [ebp - 0x10], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055e9e5: jge 0x55ea74 */ if ((fS==fO)) goto L_0055ea74;
L_0055e9eb:; BB(0x0055e9eb);
    /* 0055e9eb: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055e9ee: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055e9f1: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0055e9f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055e9f7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055e9fa: call 0x5593d0 */ r_esp -= 4; W32(r_esp, 0x55e9ffu); f_005593d0();
    /* 0055e9ff: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ea02: je 0x55ea6f */ if (fZ) goto L_0055ea6f;
L_0055ea04:; BB(0x0055ea04);
    /* 0055ea04: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055ea07: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055ea0a: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0055ea0f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055ea10: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55ea15u); f_00641280();
    /* 0055ea15: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055ea18: cmp eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055ea1b: jl 0x55ea3b */ if ((fS!=fO)) goto L_0055ea3b;
L_0055ea1d:; BB(0x0055ea1d);
    /* 0055ea1d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055ea20: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055ea23: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0055ea28: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055ea29: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55ea2eu); f_00641280();
    /* 0055ea2e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055ea31: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055ea34: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055ea37: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055ea39: jle 0x55ea5a */ if ((fZ||fS!=fO)) goto L_0055ea5a;
L_0055ea3b:; BB(0x0055ea3b);
    /* 0055ea3b: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055ea3e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0055ea41: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 0055ea46: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055ea47: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55ea4cu); f_00641280();
    /* 0055ea4c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055ea4f: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ea52: jne 0x55ea6f */ if (!fZ) goto L_0055ea6f;
L_0055ea54:; BB(0x0055ea54);
    /* 0055ea54: cmp dword ptr [ebp - 0xc], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ea58: jne 0x55ea6f */ if (!fZ) goto L_0055ea6f;
L_0055ea5a:; BB(0x0055ea5a);
    /* 0055ea5a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055ea5d: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055ea60: mov al, byte ptr [ebp - 0x10] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff0u))) & 0xffu);
    /* 0055ea63: mov byte ptr [edx + 0x14], al */ W8((u32)(r_edx+0x14u), (u8)r_eax);
    /* 0055ea66: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055ea69: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055ea6c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0055ea6f:; BB(0x0055ea6f);
    /* 0055ea6f: jmp 0x55e9d1 */ goto L_0055e9d1;
L_0055ea74:; BB(0x0055ea74);
    /* 0055ea74: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0055ea76: jmp 0x55eb94 */ goto L_0055eb94;
L_0055ea7b:; BB(0x0055ea7b);
    /* 0055ea7b: jmp 0x55e998 */ goto L_0055e998;
L_0055ea80:; BB(0x0055ea80);
    /* 0055ea80: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0055ea83: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055ea86: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0055ea89:; BB(0x0055ea89);
    /* 0055ea89: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055ea8d: jg 0x55eb92 */ if ((!fZ&&fS==fO)) goto L_0055eb92;
L_0055ea93:; BB(0x0055ea93);
    /* 0055ea93: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0055ea96: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0055ea99: jmp 0x55eaa4 */ goto L_0055eaa4;
L_0055ea9b:; BB(0x0055ea9b);
    /* 0055ea9b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055ea9e: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055eaa1: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_0055eaa4:; BB(0x0055eaa4);
    /* 0055eaa4: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055eaa7: cmp edx, dword ptr [ebp + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055eaaa: jge 0x55eb84 */ if ((fS==fO)) goto L_0055eb84;
L_0055eab0:; BB(0x0055eab0);
    /* 0055eab0: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055eab3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055eab4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055eab7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055eab8: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0055eabb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055eabc: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055eabf: call 0x55e4c0 */ r_esp -= 4; W32(r_esp, 0x55eac4u); f_0055e4c0();
    /* 0055eac4: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0055eac7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055eac9: je 0x55eb7f */ if (fZ) goto L_0055eb7f;
L_0055eacf:; BB(0x0055eacf);
    /* 0055eacf: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0055ead6: jmp 0x55eae1 */ goto L_0055eae1;
L_0055ead8:; BB(0x0055ead8);
    /* 0055ead8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055eadb: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055eade: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0055eae1:; BB(0x0055eae1);
    /* 0055eae1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055eae4: call 0x559380 */ r_esp -= 4; W32(r_esp, 0x55eae9u); f_00559380();
    /* 0055eae9: cmp dword ptr [ebp - 0x10], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055eaec: jge 0x55eb7b */ if ((fS==fO)) goto L_0055eb7b;
L_0055eaf2:; BB(0x0055eaf2);
    /* 0055eaf2: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055eaf5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0055eaf8: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 0055eafd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055eafe: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055eb01: call 0x5593d0 */ r_esp -= 4; W32(r_esp, 0x55eb06u); f_005593d0();
    /* 0055eb06: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055eb09: je 0x55eb76 */ if (fZ) goto L_0055eb76;
L_0055eb0b:; BB(0x0055eb0b);
    /* 0055eb0b: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055eb0e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0055eb11: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 0055eb16: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055eb17: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55eb1cu); f_00641280();
    /* 0055eb1c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055eb1f: cmp eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055eb22: jl 0x55eb42 */ if ((fS!=fO)) goto L_0055eb42;
L_0055eb24:; BB(0x0055eb24);
    /* 0055eb24: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055eb27: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0055eb2a: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 0055eb2f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055eb30: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55eb35u); f_00641280();
    /* 0055eb35: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055eb38: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055eb3b: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055eb3e: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055eb40: jle 0x55eb61 */ if ((fZ||fS!=fO)) goto L_0055eb61;
L_0055eb42:; BB(0x0055eb42);
    /* 0055eb42: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055eb45: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055eb48: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 0055eb4d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055eb4e: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55eb53u); f_00641280();
    /* 0055eb53: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055eb56: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055eb59: jne 0x55eb76 */ if (!fZ) goto L_0055eb76;
L_0055eb5b:; BB(0x0055eb5b);
    /* 0055eb5b: cmp dword ptr [ebp - 0xc], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055eb5f: jne 0x55eb76 */ if (!fZ) goto L_0055eb76;
L_0055eb61:; BB(0x0055eb61);
    /* 0055eb61: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0055eb64: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055eb67: mov cl, byte ptr [ebp - 0x10] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff0u))) & 0xffu);
    /* 0055eb6a: mov byte ptr [eax + 0x14], cl */ W8((u32)(r_eax+0x14u), (u8)r_ecx);
    /* 0055eb6d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055eb70: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055eb73: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0055eb76:; BB(0x0055eb76);
    /* 0055eb76: jmp 0x55ead8 */ goto L_0055ead8;
L_0055eb7b:; BB(0x0055eb7b);
    /* 0055eb7b: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0055eb7d: jmp 0x55eb94 */ goto L_0055eb94;
L_0055eb7f:; BB(0x0055eb7f);
    /* 0055eb7f: jmp 0x55ea9b */ goto L_0055ea9b;
L_0055eb84:; BB(0x0055eb84);
    /* 0055eb84: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055eb87: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055eb8a: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0055eb8d: jmp 0x55ea89 */ goto L_0055ea89;
L_0055eb92:; BB(0x0055eb92);
    /* 0055eb92: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0055eb94:; BB(0x0055eb94);
    /* 0055eb94: mov esp, ebp */ r_esp = r_ebp;
    /* 0055eb96: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055eb97: ret 0xc */ FN_RET(0x0055e980); r_esp += 16; return;
}

void f_0055eba0(void) /* sub_55EBA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0055eba0);
    /* 0055eba0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0055eba1: mov ebp, esp */ r_ebp = r_esp;
    /* 0055eba3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0055eba6: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0055eba9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0055ebb0: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0055ebb7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055ebba: call 0x5596e0 */ r_esp -= 4; W32(r_esp, 0x55ebbfu); f_005596e0();
    /* 0055ebbf: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0055ebc2: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ebc6: je 0x55ec1b */ if (fZ) goto L_0055ec1b;
L_0055ebc8:; BB(0x0055ebc8);
    /* 0055ebc8: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0055ebcf: jmp 0x55ebda */ goto L_0055ebda;
L_0055ebd1:; BB(0x0055ebd1);
    /* 0055ebd1: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055ebd4: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055ebd7: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_0055ebda:; BB(0x0055ebda);
    /* 0055ebda: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055ebdd: call 0x559380 */ r_esp -= 4; W32(r_esp, 0x55ebe2u); f_00559380();
    /* 0055ebe2: cmp dword ptr [ebp - 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055ebe5: jge 0x55ec17 */ if ((fS==fO)) goto L_0055ec17;
L_0055ebe7:; BB(0x0055ebe7);
    /* 0055ebe7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055ebea: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055ebed: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0055ebf2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055ebf3: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55ebf8u); f_00641280();
    /* 0055ebf8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055ebfb: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ebfe: jne 0x55ec15 */ if (!fZ) goto L_0055ec15;
L_0055ec00:; BB(0x0055ec00);
    /* 0055ec00: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055ec03: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055ec06: mov dl, byte ptr [ebp - 0xc] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff4u))) & 0xffu);
    /* 0055ec09: mov byte ptr [ecx + 0x14], dl */ W8((u32)(r_ecx+0x14u), (u8)r_edx);
    /* 0055ec0c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055ec0f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055ec12: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0055ec15:; BB(0x0055ec15);
    /* 0055ec15: jmp 0x55ebd1 */ goto L_0055ebd1;
L_0055ec17:; BB(0x0055ec17);
    /* 0055ec17: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0055ec19: jmp 0x55ec1d */ goto L_0055ec1d;
L_0055ec1b:; BB(0x0055ec1b);
    /* 0055ec1b: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0055ec1d:; BB(0x0055ec1d);
    /* 0055ec1d: mov esp, ebp */ r_esp = r_ebp;
    /* 0055ec1f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055ec20: ret  */ FN_RET(0x0055eba0); r_esp += 4; return;
}

void f_0055ec30(void) /* sub_55EC30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0055ec30);
    /* 0055ec30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0055ec31: mov ebp, esp */ r_ebp = r_esp;
    /* 0055ec33: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0055ec36: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0055ec39: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0055ec40: jmp 0x55ec4b */ goto L_0055ec4b;
L_0055ec42:; BB(0x0055ec42);
    /* 0055ec42: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055ec45: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055ec48: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0055ec4b:; BB(0x0055ec4b);
    /* 0055ec4b: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055ec4f: jge 0x55ec5f */ if ((fS==fO)) goto L_0055ec5f;
L_0055ec51:; BB(0x0055ec51);
    /* 0055ec51: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055ec54: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055ec57: mov dl, byte ptr [ebp - 4] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffffcu))) & 0xffu);
    /* 0055ec5a: mov byte ptr [ecx + 0x14], dl */ W8((u32)(r_ecx+0x14u), (u8)r_edx);
    /* 0055ec5d: jmp 0x55ec42 */ goto L_0055ec42;
L_0055ec5f:; BB(0x0055ec5f);
    /* 0055ec5f: mov esp, ebp */ r_esp = r_ebp;
    /* 0055ec61: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055ec62: ret  */ FN_RET(0x0055ec30); r_esp += 4; return;
}

void f_0055ec70(void) /* sub_55EC70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0055ec70);
    /* 0055ec70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0055ec71: mov ebp, esp */ r_ebp = r_esp;
    /* 0055ec73: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0055ec76: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0055ec79: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0055ec80: jmp 0x55ec8b */ goto L_0055ec8b;
L_0055ec82:; BB(0x0055ec82);
    /* 0055ec82: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055ec85: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055ec88: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0055ec8b:; BB(0x0055ec8b);
    /* 0055ec8b: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055ec8f: jge 0x55ec9d */ if ((fS==fO)) goto L_0055ec9d;
L_0055ec91:; BB(0x0055ec91);
    /* 0055ec91: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055ec94: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055ec97: mov byte ptr [ecx + 0x14], 0xff */ W8((u32)(r_ecx+0x14u), 0xffu);
    /* 0055ec9b: jmp 0x55ec82 */ goto L_0055ec82;
L_0055ec9d:; BB(0x0055ec9d);
    /* 0055ec9d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0055ec9f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055eca2: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55eca7u); f_0055ecb0();
    /* 0055eca7: mov esp, ebp */ r_esp = r_ebp;
    /* 0055eca9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055ecaa: ret  */ FN_RET(0x0055ec70); r_esp += 4; return;
}

void f_0055ecb0(void) /* sub_55ECB0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0055ecb0);
    /* 0055ecb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0055ecb1: mov ebp, esp */ r_ebp = r_esp;
    /* 0055ecb3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055ecb4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0055ecb7: movsx eax, byte ptr [ebp + 8] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0x8u));
    /* 0055ecbb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ecbd: jne 0x55ecca */ if (!fZ) goto L_0055ecca;
L_0055ecbf:; BB(0x0055ecbf);
    /* 0055ecbf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055ecc2: mov dl, byte ptr [ebp + 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 0055ecc5: mov byte ptr [ecx + 0x19], dl */ W8((u32)(r_ecx+0x19u), (u8)r_edx);
    /* 0055ecc8: jmp 0x55ecde */ goto L_0055ecde;
L_0055ecca:; BB(0x0055ecca);
    /* 0055ecca: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055eccd: movsx ecx, byte ptr [eax + 0x19] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x19u));
    /* 0055ecd1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ecd3: jne 0x55ecde */ if (!fZ) goto L_0055ecde;
L_0055ecd5:; BB(0x0055ecd5);
    /* 0055ecd5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055ecd8: mov al, byte ptr [ebp + 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 0055ecdb: mov byte ptr [edx + 0x19], al */ W8((u32)(r_edx+0x19u), (u8)r_eax);
L_0055ecde:; BB(0x0055ecde);
    /* 0055ecde: mov esp, ebp */ r_esp = r_ebp;
    /* 0055ece0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055ece1: ret 4 */ FN_RET(0x0055ecb0); r_esp += 8; return;
}

void f_0055ecf0(void) /* sub_55ECF0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0055ecf0);
    /* 0055ecf0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0055ecf1: mov ebp, esp */ r_ebp = r_esp;
    /* 0055ecf3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0055ecf6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0055ecf7: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0055ecfa: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0055ecfc: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0055ecfe: call 0x641230 */ r_esp -= 4; W32(r_esp, 0x55ed03u); f_00641230();
    /* 0055ed03: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055ed06: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055ed07: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055ed0a: call 0x5593d0 */ r_esp -= 4; W32(r_esp, 0x55ed0fu); f_005593d0();
    /* 0055ed0f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0055ed11: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ed14: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0055ed17: mov byte ptr [ebp - 5], cl */ W8((u32)(r_ebp+0xfffffffbu), (u8)r_ecx);
    /* 0055ed1a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0055ed21: jmp 0x55ed2c */ goto L_0055ed2c;
L_0055ed23:; BB(0x0055ed23);
    /* 0055ed23: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055ed26: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055ed29: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0055ed2c:; BB(0x0055ed2c);
    /* 0055ed2c: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055ed30: jge 0x55ee52 */ if ((fS==fO)) goto L_0055ee52;
L_0055ed36:; BB(0x0055ed36);
    /* 0055ed36: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055ed39: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055ed3c: movsx ecx, byte ptr [eax + 0x14] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x14u));
    /* 0055ed40: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ed43: je 0x55ee4d */ if (fZ) goto L_0055ee4d;
L_0055ed49:; BB(0x0055ed49);
    /* 0055ed49: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055ed4c: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055ed4f: movsx eax, byte ptr [edx + 0x15] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x15u));
    /* 0055ed53: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ed56: je 0x55ee4d */ if (fZ) goto L_0055ee4d;
L_0055ed5c:; BB(0x0055ed5c);
    /* 0055ed5c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055ed5f: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055ed62: movsx edx, byte ptr [ecx + 0x14] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x14u));
    /* 0055ed66: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055ed69: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 0055ed6e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055ed6f: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55ed74u); f_00641280();
    /* 0055ed74: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055ed77: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ed7a: jne 0x55ed83 */ if (!fZ) goto L_0055ed83;
L_0055ed7c:; BB(0x0055ed7c);
    /* 0055ed7c: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0055ed7e: jmp 0x55ee54 */ goto L_0055ee54;
L_0055ed83:; BB(0x0055ed83);
    /* 0055ed83: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055ed86: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055ed89: movsx eax, byte ptr [edx + 0x15] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x15u));
    /* 0055ed8d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055ed90: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 0055ed95: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055ed96: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55ed9bu); f_00641280();
    /* 0055ed9b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055ed9e: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055eda1: jne 0x55edaa */ if (!fZ) goto L_0055edaa;
L_0055eda3:; BB(0x0055eda3);
    /* 0055eda3: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0055eda5: jmp 0x55ee54 */ goto L_0055ee54;
L_0055edaa:; BB(0x0055edaa);
    /* 0055edaa: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055edad: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055edb0: movsx ecx, byte ptr [eax + 0x14] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x14u));
    /* 0055edb4: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055edb7: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0055edbc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055edbd: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55edc2u); f_00641280();
    /* 0055edc2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055edc5: movzx ecx, byte ptr [ebp - 5] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffffbu));
    /* 0055edc9: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 0055edcb: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 0055edcd: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0055edcf: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055edd2: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055edd4: jne 0x55edda */ if (!fZ) goto L_0055edda;
L_0055edd6:; BB(0x0055edd6);
    /* 0055edd6: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0055edd8: jmp 0x55ee54 */ goto L_0055ee54;
L_0055edda:; BB(0x0055edda);
    /* 0055edda: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055eddd: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055ede0: movsx eax, byte ptr [edx + 0x15] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x15u));
    /* 0055ede4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055ede7: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 0055edec: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055eded: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55edf2u); f_00641280();
    /* 0055edf2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055edf5: movzx ecx, byte ptr [ebp - 5] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffffbu));
    /* 0055edf9: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 0055edfb: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 0055edfd: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0055edff: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055ee02: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ee04: jne 0x55ee0a */ if (!fZ) goto L_0055ee0a;
L_0055ee06:; BB(0x0055ee06);
    /* 0055ee06: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0055ee08: jmp 0x55ee54 */ goto L_0055ee54;
L_0055ee0a:; BB(0x0055ee0a);
    /* 0055ee0a: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055ee0d: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055ee10: movsx eax, byte ptr [edx + 0x14] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x14u));
    /* 0055ee14: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055ee17: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 0055ee1c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055ee1d: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55ee22u); f_00641280();
    /* 0055ee22: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055ee25: mov esi, eax */ r_esi = r_eax;
    /* 0055ee27: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0055ee2a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055ee2d: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055ee30: movsx ecx, byte ptr [eax + 0x15] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x15u));
    /* 0055ee34: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055ee37: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0055ee3c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055ee3d: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55ee42u); f_00641280();
    /* 0055ee42: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055ee45: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ee47: je 0x55ee4d */ if (fZ) goto L_0055ee4d;
L_0055ee49:; BB(0x0055ee49);
    /* 0055ee49: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0055ee4b: jmp 0x55ee54 */ goto L_0055ee54;
L_0055ee4d:; BB(0x0055ee4d);
    /* 0055ee4d: jmp 0x55ed23 */ goto L_0055ed23;
L_0055ee52:; BB(0x0055ee52);
    /* 0055ee52: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_0055ee54:; BB(0x0055ee54);
    /* 0055ee54: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0055ee55: mov esp, ebp */ r_esp = r_ebp;
    /* 0055ee57: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055ee58: ret  */ FN_RET(0x0055ecf0); r_esp += 4; return;
}

void f_0055ee60(void) /* sub_55EE60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0055ee60);
    /* 0055ee60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0055ee61: mov ebp, esp */ r_ebp = r_esp;
    /* 0055ee63: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0055ee66: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0055ee69: mov byte ptr [ebp - 1], 0 */ W8((u32)(r_ebp+0xffffffffu), 0x0u);
    /* 0055ee6d: mov dword ptr [ebp - 0x18], 0xffffffff */ W32((u32)(r_ebp+0xffffffe8u), 0xffffffffu);
    /* 0055ee74: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0055ee77: movsx ecx, byte ptr [eax + 0x14] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x14u));
    /* 0055ee7b: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0055ee7e: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0055ee83: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055ee84: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55ee89u); f_00641280();
    /* 0055ee89: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055ee8c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0055ee8f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0055ee92: movsx edx, byte ptr [ecx + 0x16] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x16u));
    /* 0055ee96: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0055ee99: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 0055ee9e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055ee9f: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55eea4u); f_00641280();
    /* 0055eea4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055eea7: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0055eeaa: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0055eeb1: jmp 0x55eebc */ goto L_0055eebc;
L_0055eeb3:; BB(0x0055eeb3);
    /* 0055eeb3: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055eeb6: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055eeb9: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_0055eebc:; BB(0x0055eebc);
    /* 0055eebc: cmp dword ptr [ebp - 0xc], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055eec0: jge 0x55eeea */ if ((fS==fO)) goto L_0055eeea;
L_0055eec2:; BB(0x0055eec2);
    /* 0055eec2: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0055eec5: add eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055eec8: movsx ecx, byte ptr [eax + 0x14] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x14u));
    /* 0055eecc: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0055eecf: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0055eed4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055eed5: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55eedau); f_00641280();
    /* 0055eeda: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055eedd: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055eee0: jne 0x55eee8 */ if (!fZ) goto L_0055eee8;
L_0055eee2:; BB(0x0055eee2);
    /* 0055eee2: mov byte ptr [ebp - 1], 1 */ W8((u32)(r_ebp+0xffffffffu), 0x1u);
    /* 0055eee6: jmp 0x55eeea */ goto L_0055eeea;
L_0055eee8:; BB(0x0055eee8);
    /* 0055eee8: jmp 0x55eeb3 */ goto L_0055eeb3;
L_0055eeea:; BB(0x0055eeea);
    /* 0055eeea: movzx ecx, byte ptr [ebp - 1] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 0055eeee: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055eef0: je 0x55ef50 */ if (fZ) goto L_0055ef50;
L_0055eef2:; BB(0x0055eef2);
    /* 0055eef2: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0055eef9: jmp 0x55ef04 */ goto L_0055ef04;
L_0055eefb:; BB(0x0055eefb);
    /* 0055eefb: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055eefe: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055ef01: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_0055ef04:; BB(0x0055ef04);
    /* 0055ef04: cmp dword ptr [ebp - 0xc], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055ef08: jge 0x55ef50 */ if ((fS==fO)) goto L_0055ef50;
L_0055ef0a:; BB(0x0055ef0a);
    /* 0055ef0a: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0055ef0d: add eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055ef10: movsx ecx, byte ptr [eax + 0x14] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x14u));
    /* 0055ef14: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0055ef17: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0055ef1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055ef1d: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55ef22u); f_00641280();
    /* 0055ef22: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055ef25: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ef28: je 0x55ef4e */ if (fZ) goto L_0055ef4e;
L_0055ef2a:; BB(0x0055ef2a);
    /* 0055ef2a: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0055ef2d: add ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055ef30: movsx edx, byte ptr [ecx + 0x14] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x14u));
    /* 0055ef34: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0055ef37: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 0055ef3c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055ef3d: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55ef42u); f_00641280();
    /* 0055ef42: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055ef45: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ef48: jne 0x55ef4e */ if (!fZ) goto L_0055ef4e;
L_0055ef4a:; BB(0x0055ef4a);
    /* 0055ef4a: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0055ef4c: jmp 0x55ef7a */ goto L_0055ef7a;
L_0055ef4e:; BB(0x0055ef4e);
    /* 0055ef4e: jmp 0x55eefb */ goto L_0055eefb;
L_0055ef50:; BB(0x0055ef50);
    /* 0055ef50: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055ef53: cmp edx, dword ptr [ebp - 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055ef56: jle 0x55ef6a */ if ((fZ||fS!=fO)) goto L_0055ef6a;
L_0055ef58:; BB(0x0055ef58);
    /* 0055ef58: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055ef5b: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0055ef5e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055ef61: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0055ef64: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055ef67: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
L_0055ef6a:; BB(0x0055ef6a);
    /* 0055ef6a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055ef6d: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055ef70: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0055ef72: cmp eax, dword ptr [ebp - 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ef75: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0055ef78: mov al, cl */ r_eax = (r_eax & 0xffffff00u) | (((u8)r_ecx) & 0xffu);
L_0055ef7a:; BB(0x0055ef7a);
    /* 0055ef7a: mov esp, ebp */ r_esp = r_ebp;
    /* 0055ef7c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055ef7d: ret 8 */ FN_RET(0x0055ee60); r_esp += 12; return;
}

void f_0055ef80(void) /* sub_55EF80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0055ef80);
    /* 0055ef80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0055ef81: mov ebp, esp */ r_ebp = r_esp;
    /* 0055ef83: sub esp, 0x434 */ {  u32 a = r_esp; u32 b = 0x434u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0055ef89: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0055ef8e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0055ef90: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0055ef93: mov dword ptr [ebp - 0x430], ecx */ W32((u32)(r_ebp+0xfffffbd0u), r_ecx);
    /* 0055ef99: mov eax, dword ptr [ebp - 0x430] */ r_eax = R32((u32)(r_ebp+0xfffffbd0u));
    /* 0055ef9f: movsx ecx, byte ptr [eax + 0x19] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x19u));
    /* 0055efa3: mov dword ptr [ebp - 0x434], ecx */ W32((u32)(r_ebp+0xfffffbccu), r_ecx);
    /* 0055efa9: cmp dword ptr [ebp - 0x434], 0x34 */ {  u32 a = R32((u32)(r_ebp+0xfffffbccu)); u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0055efb0: ja 0x55f823 */ if ((!fC&&!fZ)) goto L_0055f823;
L_0055efb6:; BB(0x0055efb6);
    /* 0055efb6: mov edx, dword ptr [ebp - 0x434] */ r_edx = R32((u32)(r_ebp+0xfffffbccu));
    /* 0055efbc: jmp dword ptr [edx*4 + 0x55f854] */ { u32 t = R32((u32)(r_edx*4+0x55f854u)); switch (t) { case 0x55efc3u: goto L_0055efc3; case 0x55efe5u: goto L_0055efe5; case 0x55f007u: goto L_0055f007; case 0x55f0b1u: goto L_0055f0b1; case 0x55f06du: goto L_0055f06d; case 0x55f029u: goto L_0055f029; case 0x55f08fu: goto L_0055f08f; case 0x55f04bu: goto L_0055f04b; case 0x55f0d3u: goto L_0055f0d3; case 0x55f0f5u: goto L_0055f0f5; case 0x55f15bu: goto L_0055f15b; case 0x55f205u: goto L_0055f205; case 0x55f117u: goto L_0055f117; case 0x55f19fu: goto L_0055f19f; case 0x55f1c1u: goto L_0055f1c1; case 0x55f1e3u: goto L_0055f1e3; case 0x55f227u: goto L_0055f227; case 0x55f17du: goto L_0055f17d; case 0x55f139u: goto L_0055f139; case 0x55f249u: goto L_0055f249; case 0x55f26bu: goto L_0055f26b; case 0x55f28du: goto L_0055f28d; case 0x55f2afu: goto L_0055f2af; case 0x55f2d1u: goto L_0055f2d1; case 0x55f315u: goto L_0055f315; case 0x55f337u: goto L_0055f337; case 0x55f359u: goto L_0055f359; case 0x55f37bu: goto L_0055f37b; case 0x55f39du: goto L_0055f39d; case 0x55f3bfu: goto L_0055f3bf; case 0x55f3e1u: goto L_0055f3e1; case 0x55f403u: goto L_0055f403; case 0x55f425u: goto L_0055f425; case 0x55f447u: goto L_0055f447; case 0x55f2f3u: goto L_0055f2f3; case 0x55f469u: goto L_0055f469; case 0x55f4adu: goto L_0055f4ad; case 0x55f509u: goto L_0055f509; case 0x55f48bu: goto L_0055f48b; case 0x55f52bu: goto L_0055f52b; case 0x55f54du: goto L_0055f54d; case 0x55f56fu: goto L_0055f56f; case 0x55f591u: goto L_0055f591; case 0x55f5b3u: goto L_0055f5b3; case 0x55f6afu: goto L_0055f6af; case 0x55f724u: goto L_0055f724; case 0x55f746u: goto L_0055f746; case 0x55f768u: goto L_0055f768; case 0x55f78au: goto L_0055f78a; case 0x55f7a9u: goto L_0055f7a9; case 0x55f7c8u: goto L_0055f7c8; case 0x55f7e7u: goto L_0055f7e7; case 0x55f806u: goto L_0055f806; default: UNSUP(0x0055efbc, "jump table entry is not a known target"); } }
L_0055efc3:; BB(0x0055efc3);
    /* 0055efc3: push 0x6c96d8 */ { u32 v = 0x6c96d8u; r_esp -= 4; W32(r_esp, v); }
    /* 0055efc8: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x55efcdu); f_00630f40();
    /* 0055efcd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055efd0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055efd1: lea eax, [ebp - 0x408] */ r_eax = (u32)(r_ebp+0xfffffbf8u);
    /* 0055efd7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055efd8: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x55efddu); f_00686d8e();
    /* 0055efdd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055efe0: jmp 0x55f823 */ goto L_0055f823;
L_0055efe5:; BB(0x0055efe5);
    /* 0055efe5: push 0x6c96b8 */ { u32 v = 0x6c96b8u; r_esp -= 4; W32(r_esp, v); }
    /* 0055efea: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x55efefu); f_00630f40();
    /* 0055efef: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055eff2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055eff3: lea ecx, [ebp - 0x408] */ r_ecx = (u32)(r_ebp+0xfffffbf8u);
    /* 0055eff9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055effa: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x55efffu); f_00686d8e();
    /* 0055efff: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f002: jmp 0x55f823 */ goto L_0055f823;
L_0055f007:; BB(0x0055f007);
    /* 0055f007: push 0x6c9694 */ { u32 v = 0x6c9694u; r_esp -= 4; W32(r_esp, v); }
    /* 0055f00c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x55f011u); f_00630f40();
    /* 0055f011: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f014: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055f015: lea edx, [ebp - 0x408] */ r_edx = (u32)(r_ebp+0xfffffbf8u);
    /* 0055f01b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055f01c: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x55f021u); f_00686d8e();
    /* 0055f021: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f024: jmp 0x55f823 */ goto L_0055f823;
L_0055f029:; BB(0x0055f029);
    /* 0055f029: push 0x6c9670 */ { u32 v = 0x6c9670u; r_esp -= 4; W32(r_esp, v); }
    /* 0055f02e: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x55f033u); f_00630f40();
    /* 0055f033: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f036: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055f037: lea eax, [ebp - 0x408] */ r_eax = (u32)(r_ebp+0xfffffbf8u);
    /* 0055f03d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055f03e: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x55f043u); f_00686d8e();
    /* 0055f043: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f046: jmp 0x55f823 */ goto L_0055f823;
L_0055f04b:; BB(0x0055f04b);
    /* 0055f04b: push 0x6c9650 */ { u32 v = 0x6c9650u; r_esp -= 4; W32(r_esp, v); }
    /* 0055f050: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x55f055u); f_00630f40();
    /* 0055f055: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f058: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055f059: lea ecx, [ebp - 0x408] */ r_ecx = (u32)(r_ebp+0xfffffbf8u);
    /* 0055f05f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055f060: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x55f065u); f_00686d8e();
    /* 0055f065: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f068: jmp 0x55f823 */ goto L_0055f823;
L_0055f06d:; BB(0x0055f06d);
    /* 0055f06d: push 0x6c9628 */ { u32 v = 0x6c9628u; r_esp -= 4; W32(r_esp, v); }
    /* 0055f072: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x55f077u); f_00630f40();
    /* 0055f077: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f07a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055f07b: lea edx, [ebp - 0x408] */ r_edx = (u32)(r_ebp+0xfffffbf8u);
    /* 0055f081: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055f082: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x55f087u); f_00686d8e();
    /* 0055f087: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f08a: jmp 0x55f823 */ goto L_0055f823;
L_0055f08f:; BB(0x0055f08f);
    /* 0055f08f: push 0x6c9600 */ { u32 v = 0x6c9600u; r_esp -= 4; W32(r_esp, v); }
    /* 0055f094: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x55f099u); f_00630f40();
    /* 0055f099: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f09c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055f09d: lea eax, [ebp - 0x408] */ r_eax = (u32)(r_ebp+0xfffffbf8u);
    /* 0055f0a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055f0a4: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x55f0a9u); f_00686d8e();
    /* 0055f0a9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f0ac: jmp 0x55f823 */ goto L_0055f823;
L_0055f0b1:; BB(0x0055f0b1);
    /* 0055f0b1: push 0x6c95d4 */ { u32 v = 0x6c95d4u; r_esp -= 4; W32(r_esp, v); }
    /* 0055f0b6: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x55f0bbu); f_00630f40();
    /* 0055f0bb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f0be: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055f0bf: lea ecx, [ebp - 0x408] */ r_ecx = (u32)(r_ebp+0xfffffbf8u);
    /* 0055f0c5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055f0c6: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x55f0cbu); f_00686d8e();
    /* 0055f0cb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f0ce: jmp 0x55f823 */ goto L_0055f823;
L_0055f0d3:; BB(0x0055f0d3);
    /* 0055f0d3: push 0x6c95a8 */ { u32 v = 0x6c95a8u; r_esp -= 4; W32(r_esp, v); }
    /* 0055f0d8: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x55f0ddu); f_00630f40();
    /* 0055f0dd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f0e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055f0e1: lea edx, [ebp - 0x408] */ r_edx = (u32)(r_ebp+0xfffffbf8u);
    /* 0055f0e7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055f0e8: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x55f0edu); f_00686d8e();
    /* 0055f0ed: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f0f0: jmp 0x55f823 */ goto L_0055f823;
L_0055f0f5:; BB(0x0055f0f5);
    /* 0055f0f5: push 0x6c9588 */ { u32 v = 0x6c9588u; r_esp -= 4; W32(r_esp, v); }
    /* 0055f0fa: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x55f0ffu); f_00630f40();
    /* 0055f0ff: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f102: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055f103: lea eax, [ebp - 0x408] */ r_eax = (u32)(r_ebp+0xfffffbf8u);
    /* 0055f109: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055f10a: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x55f10fu); f_00686d8e();
    /* 0055f10f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f112: jmp 0x55f823 */ goto L_0055f823;
L_0055f117:; BB(0x0055f117);
    /* 0055f117: push 0x6c9568 */ { u32 v = 0x6c9568u; r_esp -= 4; W32(r_esp, v); }
    /* 0055f11c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x55f121u); f_00630f40();
    /* 0055f121: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f124: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055f125: lea ecx, [ebp - 0x408] */ r_ecx = (u32)(r_ebp+0xfffffbf8u);
    /* 0055f12b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055f12c: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x55f131u); f_00686d8e();
    /* 0055f131: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f134: jmp 0x55f823 */ goto L_0055f823;
L_0055f139:; BB(0x0055f139);
    /* 0055f139: push 0x6c9548 */ { u32 v = 0x6c9548u; r_esp -= 4; W32(r_esp, v); }
    /* 0055f13e: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x55f143u); f_00630f40();
    /* 0055f143: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f146: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055f147: lea edx, [ebp - 0x408] */ r_edx = (u32)(r_ebp+0xfffffbf8u);
    /* 0055f14d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055f14e: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x55f153u); f_00686d8e();
    /* 0055f153: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f156: jmp 0x55f823 */ goto L_0055f823;
L_0055f15b:; BB(0x0055f15b);
    /* 0055f15b: push 0x6c9524 */ { u32 v = 0x6c9524u; r_esp -= 4; W32(r_esp, v); }
    /* 0055f160: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x55f165u); f_00630f40();
    /* 0055f165: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f168: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055f169: lea eax, [ebp - 0x408] */ r_eax = (u32)(r_ebp+0xfffffbf8u);
    /* 0055f16f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055f170: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x55f175u); f_00686d8e();
    /* 0055f175: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f178: jmp 0x55f823 */ goto L_0055f823;
L_0055f17d:; BB(0x0055f17d);
    /* 0055f17d: push 0x6c9500 */ { u32 v = 0x6c9500u; r_esp -= 4; W32(r_esp, v); }
    /* 0055f182: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x55f187u); f_00630f40();
    /* 0055f187: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f18a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055f18b: lea ecx, [ebp - 0x408] */ r_ecx = (u32)(r_ebp+0xfffffbf8u);
    /* 0055f191: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055f192: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x55f197u); f_00686d8e();
    /* 0055f197: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f19a: jmp 0x55f823 */ goto L_0055f823;
L_0055f19f:; BB(0x0055f19f);
    /* 0055f19f: push 0x6c94d8 */ { u32 v = 0x6c94d8u; r_esp -= 4; W32(r_esp, v); }
    /* 0055f1a4: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x55f1a9u); f_00630f40();
    /* 0055f1a9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f1ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055f1ad: lea edx, [ebp - 0x408] */ r_edx = (u32)(r_ebp+0xfffffbf8u);
    /* 0055f1b3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055f1b4: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x55f1b9u); f_00686d8e();
    /* 0055f1b9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f1bc: jmp 0x55f823 */ goto L_0055f823;
L_0055f1c1:; BB(0x0055f1c1);
    /* 0055f1c1: push 0x6c94b0 */ { u32 v = 0x6c94b0u; r_esp -= 4; W32(r_esp, v); }
    /* 0055f1c6: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x55f1cbu); f_00630f40();
    /* 0055f1cb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f1ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055f1cf: lea eax, [ebp - 0x408] */ r_eax = (u32)(r_ebp+0xfffffbf8u);
    /* 0055f1d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055f1d6: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x55f1dbu); f_00686d8e();
    /* 0055f1db: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f1de: jmp 0x55f823 */ goto L_0055f823;
L_0055f1e3:; BB(0x0055f1e3);
    /* 0055f1e3: push 0x6c9484 */ { u32 v = 0x6c9484u; r_esp -= 4; W32(r_esp, v); }
    /* 0055f1e8: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x55f1edu); f_00630f40();
    /* 0055f1ed: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f1f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055f1f1: lea ecx, [ebp - 0x408] */ r_ecx = (u32)(r_ebp+0xfffffbf8u);
    /* 0055f1f7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055f1f8: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x55f1fdu); f_00686d8e();
    /* 0055f1fd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f200: jmp 0x55f823 */ goto L_0055f823;
L_0055f205:; BB(0x0055f205);
    /* 0055f205: push 0x6c945c */ { u32 v = 0x6c945cu; r_esp -= 4; W32(r_esp, v); }
    /* 0055f20a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x55f20fu); f_00630f40();
    /* 0055f20f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f212: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055f213: lea edx, [ebp - 0x408] */ r_edx = (u32)(r_ebp+0xfffffbf8u);
    /* 0055f219: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055f21a: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x55f21fu); f_00686d8e();
    /* 0055f21f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f222: jmp 0x55f823 */ goto L_0055f823;
L_0055f227:; BB(0x0055f227);
    /* 0055f227: push 0x6c9434 */ { u32 v = 0x6c9434u; r_esp -= 4; W32(r_esp, v); }
    /* 0055f22c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x55f231u); f_00630f40();
    /* 0055f231: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f234: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055f235: lea eax, [ebp - 0x408] */ r_eax = (u32)(r_ebp+0xfffffbf8u);
    /* 0055f23b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055f23c: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x55f241u); f_00686d8e();
    /* 0055f241: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f244: jmp 0x55f823 */ goto L_0055f823;
L_0055f249:; BB(0x0055f249);
    /* 0055f249: push 0x6c9410 */ { u32 v = 0x6c9410u; r_esp -= 4; W32(r_esp, v); }
    /* 0055f24e: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x55f253u); f_00630f40();
    /* 0055f253: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f256: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055f257: lea ecx, [ebp - 0x408] */ r_ecx = (u32)(r_ebp+0xfffffbf8u);
    /* 0055f25d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055f25e: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x55f263u); f_00686d8e();
    /* 0055f263: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f266: jmp 0x55f823 */ goto L_0055f823;
L_0055f26b:; BB(0x0055f26b);
    /* 0055f26b: push 0x6c93e8 */ { u32 v = 0x6c93e8u; r_esp -= 4; W32(r_esp, v); }
    /* 0055f270: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x55f275u); f_00630f40();
    /* 0055f275: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f278: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055f279: lea edx, [ebp - 0x408] */ r_edx = (u32)(r_ebp+0xfffffbf8u);
    /* 0055f27f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055f280: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x55f285u); f_00686d8e();
    /* 0055f285: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f288: jmp 0x55f823 */ goto L_0055f823;
L_0055f28d:; BB(0x0055f28d);
    /* 0055f28d: push 0x6c93bc */ { u32 v = 0x6c93bcu; r_esp -= 4; W32(r_esp, v); }
    /* 0055f292: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x55f297u); f_00630f40();
    /* 0055f297: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f29a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055f29b: lea eax, [ebp - 0x408] */ r_eax = (u32)(r_ebp+0xfffffbf8u);
    /* 0055f2a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055f2a2: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x55f2a7u); f_00686d8e();
    /* 0055f2a7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f2aa: jmp 0x55f823 */ goto L_0055f823;
L_0055f2af:; BB(0x0055f2af);
    /* 0055f2af: push 0x6c939c */ { u32 v = 0x6c939cu; r_esp -= 4; W32(r_esp, v); }
    /* 0055f2b4: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x55f2b9u); f_00630f40();
    /* 0055f2b9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f2bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055f2bd: lea ecx, [ebp - 0x408] */ r_ecx = (u32)(r_ebp+0xfffffbf8u);
    /* 0055f2c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055f2c4: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x55f2c9u); f_00686d8e();
    /* 0055f2c9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f2cc: jmp 0x55f823 */ goto L_0055f823;
L_0055f2d1:; BB(0x0055f2d1);
    /* 0055f2d1: push 0x6c937c */ { u32 v = 0x6c937cu; r_esp -= 4; W32(r_esp, v); }
    /* 0055f2d6: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x55f2dbu); f_00630f40();
    /* 0055f2db: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f2de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055f2df: lea edx, [ebp - 0x408] */ r_edx = (u32)(r_ebp+0xfffffbf8u);
    /* 0055f2e5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055f2e6: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x55f2ebu); f_00686d8e();
    /* 0055f2eb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f2ee: jmp 0x55f823 */ goto L_0055f823;
L_0055f2f3:; BB(0x0055f2f3);
    /* 0055f2f3: push 0x6c9358 */ { u32 v = 0x6c9358u; r_esp -= 4; W32(r_esp, v); }
    /* 0055f2f8: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x55f2fdu); f_00630f40();
    /* 0055f2fd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f300: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055f301: lea eax, [ebp - 0x408] */ r_eax = (u32)(r_ebp+0xfffffbf8u);
    /* 0055f307: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055f308: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x55f30du); f_00686d8e();
    /* 0055f30d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f310: jmp 0x55f823 */ goto L_0055f823;
L_0055f315:; BB(0x0055f315);
    /* 0055f315: push 0x6c9334 */ { u32 v = 0x6c9334u; r_esp -= 4; W32(r_esp, v); }
    /* 0055f31a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x55f31fu); f_00630f40();
    /* 0055f31f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f322: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055f323: lea ecx, [ebp - 0x408] */ r_ecx = (u32)(r_ebp+0xfffffbf8u);
    /* 0055f329: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055f32a: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x55f32fu); f_00686d8e();
    /* 0055f32f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f332: jmp 0x55f823 */ goto L_0055f823;
L_0055f337:; BB(0x0055f337);
    /* 0055f337: push 0x6c9310 */ { u32 v = 0x6c9310u; r_esp -= 4; W32(r_esp, v); }
    /* 0055f33c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x55f341u); f_00630f40();
    /* 0055f341: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f344: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055f345: lea edx, [ebp - 0x408] */ r_edx = (u32)(r_ebp+0xfffffbf8u);
    /* 0055f34b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055f34c: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x55f351u); f_00686d8e();
    /* 0055f351: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f354: jmp 0x55f823 */ goto L_0055f823;
L_0055f359:; BB(0x0055f359);
    /* 0055f359: push 0x6c92ec */ { u32 v = 0x6c92ecu; r_esp -= 4; W32(r_esp, v); }
    /* 0055f35e: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x55f363u); f_00630f40();
    /* 0055f363: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f366: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055f367: lea eax, [ebp - 0x408] */ r_eax = (u32)(r_ebp+0xfffffbf8u);
    /* 0055f36d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055f36e: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x55f373u); f_00686d8e();
    /* 0055f373: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f376: jmp 0x55f823 */ goto L_0055f823;
L_0055f37b:; BB(0x0055f37b);
    /* 0055f37b: push 0x6c92c8 */ { u32 v = 0x6c92c8u; r_esp -= 4; W32(r_esp, v); }
    /* 0055f380: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x55f385u); f_00630f40();
    /* 0055f385: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f388: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055f389: lea ecx, [ebp - 0x408] */ r_ecx = (u32)(r_ebp+0xfffffbf8u);
    /* 0055f38f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055f390: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x55f395u); f_00686d8e();
    /* 0055f395: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f398: jmp 0x55f823 */ goto L_0055f823;
L_0055f39d:; BB(0x0055f39d);
    /* 0055f39d: push 0x6c9294 */ { u32 v = 0x6c9294u; r_esp -= 4; W32(r_esp, v); }
    /* 0055f3a2: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x55f3a7u); f_00630f40();
    /* 0055f3a7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f3aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055f3ab: lea edx, [ebp - 0x408] */ r_edx = (u32)(r_ebp+0xfffffbf8u);
    /* 0055f3b1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055f3b2: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x55f3b7u); f_00686d8e();
    /* 0055f3b7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f3ba: jmp 0x55f823 */ goto L_0055f823;
L_0055f3bf:; BB(0x0055f3bf);
    /* 0055f3bf: push 0x6c9260 */ { u32 v = 0x6c9260u; r_esp -= 4; W32(r_esp, v); }
    /* 0055f3c4: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x55f3c9u); f_00630f40();
    /* 0055f3c9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f3cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055f3cd: lea eax, [ebp - 0x408] */ r_eax = (u32)(r_ebp+0xfffffbf8u);
    /* 0055f3d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055f3d4: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x55f3d9u); f_00686d8e();
    /* 0055f3d9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f3dc: jmp 0x55f823 */ goto L_0055f823;
L_0055f3e1:; BB(0x0055f3e1);
    /* 0055f3e1: push 0x6c9234 */ { u32 v = 0x6c9234u; r_esp -= 4; W32(r_esp, v); }
    /* 0055f3e6: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x55f3ebu); f_00630f40();
    /* 0055f3eb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f3ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055f3ef: lea ecx, [ebp - 0x408] */ r_ecx = (u32)(r_ebp+0xfffffbf8u);
    /* 0055f3f5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055f3f6: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x55f3fbu); f_00686d8e();
    /* 0055f3fb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f3fe: jmp 0x55f823 */ goto L_0055f823;
L_0055f403:; BB(0x0055f403);
    /* 0055f403: push 0x6c9200 */ { u32 v = 0x6c9200u; r_esp -= 4; W32(r_esp, v); }
    /* 0055f408: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x55f40du); f_00630f40();
    /* 0055f40d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f410: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055f411: lea edx, [ebp - 0x408] */ r_edx = (u32)(r_ebp+0xfffffbf8u);
    /* 0055f417: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055f418: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x55f41du); f_00686d8e();
    /* 0055f41d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f420: jmp 0x55f823 */ goto L_0055f823;
L_0055f425:; BB(0x0055f425);
    /* 0055f425: push 0x6c91d0 */ { u32 v = 0x6c91d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0055f42a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x55f42fu); f_00630f40();
    /* 0055f42f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f432: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055f433: lea eax, [ebp - 0x408] */ r_eax = (u32)(r_ebp+0xfffffbf8u);
    /* 0055f439: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055f43a: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x55f43fu); f_00686d8e();
    /* 0055f43f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f442: jmp 0x55f823 */ goto L_0055f823;
L_0055f447:; BB(0x0055f447);
    /* 0055f447: push 0x6c91a0 */ { u32 v = 0x6c91a0u; r_esp -= 4; W32(r_esp, v); }
    /* 0055f44c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x55f451u); f_00630f40();
    /* 0055f451: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f454: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055f455: lea ecx, [ebp - 0x408] */ r_ecx = (u32)(r_ebp+0xfffffbf8u);
    /* 0055f45b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055f45c: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x55f461u); f_00686d8e();
    /* 0055f461: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f464: jmp 0x55f823 */ goto L_0055f823;
L_0055f469:; BB(0x0055f469);
    /* 0055f469: push 0x6c917c */ { u32 v = 0x6c917cu; r_esp -= 4; W32(r_esp, v); }
    /* 0055f46e: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x55f473u); f_00630f40();
    /* 0055f473: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f476: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055f477: lea edx, [ebp - 0x408] */ r_edx = (u32)(r_ebp+0xfffffbf8u);
    /* 0055f47d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055f47e: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x55f483u); f_00686d8e();
    /* 0055f483: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f486: jmp 0x55f823 */ goto L_0055f823;
L_0055f48b:; BB(0x0055f48b);
    /* 0055f48b: push 0x6c9158 */ { u32 v = 0x6c9158u; r_esp -= 4; W32(r_esp, v); }
    /* 0055f490: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x55f495u); f_00630f40();
    /* 0055f495: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f498: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055f499: lea eax, [ebp - 0x408] */ r_eax = (u32)(r_ebp+0xfffffbf8u);
    /* 0055f49f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055f4a0: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x55f4a5u); f_00686d8e();
    /* 0055f4a5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f4a8: jmp 0x55f823 */ goto L_0055f823;
L_0055f4ad:; BB(0x0055f4ad);
    /* 0055f4ad: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0055f4b3: mov edx, dword ptr [ecx + 0x4f14] */ r_edx = R32((u32)(r_ecx+0x4f14u));
    /* 0055f4b9: mov dword ptr [ebp - 0x40c], edx */ W32((u32)(r_ebp+0xfffffbf4u), r_edx);
    /* 0055f4bf: cmp dword ptr [ebp - 0x40c], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffbf4u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055f4c6: jne 0x55f4e7 */ if (!fZ) goto L_0055f4e7;
L_0055f4c8:; BB(0x0055f4c8);
    /* 0055f4c8: push 0x6c9130 */ { u32 v = 0x6c9130u; r_esp -= 4; W32(r_esp, v); }
    /* 0055f4cd: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x55f4d2u); f_00630f40();
    /* 0055f4d2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f4d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055f4d6: lea eax, [ebp - 0x408] */ r_eax = (u32)(r_ebp+0xfffffbf8u);
    /* 0055f4dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055f4dd: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x55f4e2u); f_00686d8e();
    /* 0055f4e2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f4e5: jmp 0x55f504 */ goto L_0055f504;
L_0055f4e7:; BB(0x0055f4e7);
    /* 0055f4e7: push 0x6c9108 */ { u32 v = 0x6c9108u; r_esp -= 4; W32(r_esp, v); }
    /* 0055f4ec: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x55f4f1u); f_00630f40();
    /* 0055f4f1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f4f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055f4f5: lea ecx, [ebp - 0x408] */ r_ecx = (u32)(r_ebp+0xfffffbf8u);
    /* 0055f4fb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055f4fc: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x55f501u); f_00686d8e();
    /* 0055f501: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0055f504:; BB(0x0055f504);
    /* 0055f504: jmp 0x55f823 */ goto L_0055f823;
L_0055f509:; BB(0x0055f509);
    /* 0055f509: push 0x6c90d8 */ { u32 v = 0x6c90d8u; r_esp -= 4; W32(r_esp, v); }
    /* 0055f50e: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x55f513u); f_00630f40();
    /* 0055f513: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f516: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055f517: lea edx, [ebp - 0x408] */ r_edx = (u32)(r_ebp+0xfffffbf8u);
    /* 0055f51d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055f51e: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x55f523u); f_00686d8e();
    /* 0055f523: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f526: jmp 0x55f823 */ goto L_0055f823;
L_0055f52b:; BB(0x0055f52b);
    /* 0055f52b: push 0x6c90b4 */ { u32 v = 0x6c90b4u; r_esp -= 4; W32(r_esp, v); }
    /* 0055f530: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x55f535u); f_00630f40();
    /* 0055f535: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f538: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055f539: lea eax, [ebp - 0x408] */ r_eax = (u32)(r_ebp+0xfffffbf8u);
    /* 0055f53f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055f540: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x55f545u); f_00686d8e();
    /* 0055f545: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f548: jmp 0x55f823 */ goto L_0055f823;
L_0055f54d:; BB(0x0055f54d);
    /* 0055f54d: push 0x6c908c */ { u32 v = 0x6c908cu; r_esp -= 4; W32(r_esp, v); }
    /* 0055f552: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x55f557u); f_00630f40();
    /* 0055f557: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f55a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055f55b: lea ecx, [ebp - 0x408] */ r_ecx = (u32)(r_ebp+0xfffffbf8u);
    /* 0055f561: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055f562: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x55f567u); f_00686d8e();
    /* 0055f567: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f56a: jmp 0x55f823 */ goto L_0055f823;
L_0055f56f:; BB(0x0055f56f);
    /* 0055f56f: push 0x6c9064 */ { u32 v = 0x6c9064u; r_esp -= 4; W32(r_esp, v); }
    /* 0055f574: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x55f579u); f_00630f40();
    /* 0055f579: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f57c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055f57d: lea edx, [ebp - 0x408] */ r_edx = (u32)(r_ebp+0xfffffbf8u);
    /* 0055f583: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055f584: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x55f589u); f_00686d8e();
    /* 0055f589: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f58c: jmp 0x55f823 */ goto L_0055f823;
L_0055f591:; BB(0x0055f591);
    /* 0055f591: push 0x6c9044 */ { u32 v = 0x6c9044u; r_esp -= 4; W32(r_esp, v); }
    /* 0055f596: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x55f59bu); f_00630f40();
    /* 0055f59b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f59e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055f59f: lea eax, [ebp - 0x408] */ r_eax = (u32)(r_ebp+0xfffffbf8u);
    /* 0055f5a5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055f5a6: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x55f5abu); f_00686d8e();
    /* 0055f5ab: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f5ae: jmp 0x55f823 */ goto L_0055f823;
L_0055f5b3:; BB(0x0055f5b3);
    /* 0055f5b3: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0055f5b9: mov edx, dword ptr [ecx + 0x4f14] */ r_edx = R32((u32)(r_ecx+0x4f14u));
    /* 0055f5bf: mov dword ptr [ebp - 0x410], edx */ W32((u32)(r_ebp+0xfffffbf0u), r_edx);
    /* 0055f5c5: cmp dword ptr [ebp - 0x410], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffbf0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055f5cc: je 0x55f5e8 */ if (fZ) goto L_0055f5e8;
L_0055f5ce:; BB(0x0055f5ce);
    /* 0055f5ce: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 0055f5d3: mov ecx, dword ptr [eax + 0x4f14] */ r_ecx = R32((u32)(r_eax+0x4f14u));
    /* 0055f5d9: mov dword ptr [ebp - 0x414], ecx */ W32((u32)(r_ebp+0xfffffbecu), r_ecx);
    /* 0055f5df: cmp dword ptr [ebp - 0x414], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffbecu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055f5e6: jne 0x55f605 */ if (!fZ) goto L_0055f605;
L_0055f5e8:; BB(0x0055f5e8);
    /* 0055f5e8: push 0x6c9020 */ { u32 v = 0x6c9020u; r_esp -= 4; W32(r_esp, v); }
    /* 0055f5ed: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x55f5f2u); f_00630f40();
    /* 0055f5f2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f5f5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055f5f6: lea edx, [ebp - 0x408] */ r_edx = (u32)(r_ebp+0xfffffbf8u);
    /* 0055f5fc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055f5fd: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x55f602u); f_00686d8e();
    /* 0055f602: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0055f605:; BB(0x0055f605);
    /* 0055f605: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 0055f60a: mov ecx, dword ptr [eax + 0x4f14] */ r_ecx = R32((u32)(r_eax+0x4f14u));
    /* 0055f610: mov dword ptr [ebp - 0x418], ecx */ W32((u32)(r_ebp+0xfffffbe8u), r_ecx);
    /* 0055f616: cmp dword ptr [ebp - 0x418], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffbe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055f61d: je 0x55f655 */ if (fZ) goto L_0055f655;
L_0055f61f:; BB(0x0055f61f);
    /* 0055f61f: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 0055f625: mov eax, dword ptr [edx + 0x4f14] */ r_eax = R32((u32)(r_edx+0x4f14u));
    /* 0055f62b: mov dword ptr [ebp - 0x41c], eax */ W32((u32)(r_ebp+0xfffffbe4u), r_eax);
    /* 0055f631: cmp dword ptr [ebp - 0x41c], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffbe4u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055f638: je 0x55f655 */ if (fZ) goto L_0055f655;
L_0055f63a:; BB(0x0055f63a);
    /* 0055f63a: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0055f640: mov edx, dword ptr [ecx + 0x4f14] */ r_edx = R32((u32)(r_ecx+0x4f14u));
    /* 0055f646: mov dword ptr [ebp - 0x420], edx */ W32((u32)(r_ebp+0xfffffbe0u), r_edx);
    /* 0055f64c: cmp dword ptr [ebp - 0x420], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffbe0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055f653: jne 0x55f672 */ if (!fZ) goto L_0055f672;
L_0055f655:; BB(0x0055f655);
    /* 0055f655: push 0x6c8ff8 */ { u32 v = 0x6c8ff8u; r_esp -= 4; W32(r_esp, v); }
    /* 0055f65a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x55f65fu); f_00630f40();
    /* 0055f65f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f662: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055f663: lea eax, [ebp - 0x408] */ r_eax = (u32)(r_ebp+0xfffffbf8u);
    /* 0055f669: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055f66a: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x55f66fu); f_00686d8e();
    /* 0055f66f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0055f672:; BB(0x0055f672);
    /* 0055f672: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0055f678: mov edx, dword ptr [ecx + 0x4f14] */ r_edx = R32((u32)(r_ecx+0x4f14u));
    /* 0055f67e: mov dword ptr [ebp - 0x424], edx */ W32((u32)(r_ebp+0xfffffbdcu), r_edx);
    /* 0055f684: cmp dword ptr [ebp - 0x424], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffbdcu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055f68b: jne 0x55f6aa */ if (!fZ) goto L_0055f6aa;
L_0055f68d:; BB(0x0055f68d);
    /* 0055f68d: push 0x6c8fd0 */ { u32 v = 0x6c8fd0u; r_esp -= 4; W32(r_esp, v); }
    /* 0055f692: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x55f697u); f_00630f40();
    /* 0055f697: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f69a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055f69b: lea eax, [ebp - 0x408] */ r_eax = (u32)(r_ebp+0xfffffbf8u);
    /* 0055f6a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055f6a2: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x55f6a7u); f_00686d8e();
    /* 0055f6a7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0055f6aa:; BB(0x0055f6aa);
    /* 0055f6aa: jmp 0x55f823 */ goto L_0055f823;
L_0055f6af:; BB(0x0055f6af);
    /* 0055f6af: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0055f6b5: mov edx, dword ptr [ecx + 0x4f14] */ r_edx = R32((u32)(r_ecx+0x4f14u));
    /* 0055f6bb: mov dword ptr [ebp - 0x428], edx */ W32((u32)(r_ebp+0xfffffbd8u), r_edx);
    /* 0055f6c1: cmp dword ptr [ebp - 0x428], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffbd8u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055f6c8: jne 0x55f6e7 */ if (!fZ) goto L_0055f6e7;
L_0055f6ca:; BB(0x0055f6ca);
    /* 0055f6ca: push 0x6c8fa4 */ { u32 v = 0x6c8fa4u; r_esp -= 4; W32(r_esp, v); }
    /* 0055f6cf: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x55f6d4u); f_00630f40();
    /* 0055f6d4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f6d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055f6d8: lea eax, [ebp - 0x408] */ r_eax = (u32)(r_ebp+0xfffffbf8u);
    /* 0055f6de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055f6df: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x55f6e4u); f_00686d8e();
    /* 0055f6e4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0055f6e7:; BB(0x0055f6e7);
    /* 0055f6e7: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0055f6ed: mov edx, dword ptr [ecx + 0x4f14] */ r_edx = R32((u32)(r_ecx+0x4f14u));
    /* 0055f6f3: mov dword ptr [ebp - 0x42c], edx */ W32((u32)(r_ebp+0xfffffbd4u), r_edx);
    /* 0055f6f9: cmp dword ptr [ebp - 0x42c], 9 */ {  u32 a = R32((u32)(r_ebp+0xfffffbd4u)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055f700: jne 0x55f71f */ if (!fZ) goto L_0055f71f;
L_0055f702:; BB(0x0055f702);
    /* 0055f702: push 0x6c8f78 */ { u32 v = 0x6c8f78u; r_esp -= 4; W32(r_esp, v); }
    /* 0055f707: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x55f70cu); f_00630f40();
    /* 0055f70c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f70f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055f710: lea eax, [ebp - 0x408] */ r_eax = (u32)(r_ebp+0xfffffbf8u);
    /* 0055f716: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055f717: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x55f71cu); f_00686d8e();
    /* 0055f71c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0055f71f:; BB(0x0055f71f);
    /* 0055f71f: jmp 0x55f823 */ goto L_0055f823;
L_0055f724:; BB(0x0055f724);
    /* 0055f724: push 0x6c8f58 */ { u32 v = 0x6c8f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0055f729: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x55f72eu); f_00630f40();
    /* 0055f72e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f731: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055f732: lea ecx, [ebp - 0x408] */ r_ecx = (u32)(r_ebp+0xfffffbf8u);
    /* 0055f738: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055f739: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x55f73eu); f_00686d8e();
    /* 0055f73e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f741: jmp 0x55f823 */ goto L_0055f823;
L_0055f746:; BB(0x0055f746);
    /* 0055f746: push 0x6c8f38 */ { u32 v = 0x6c8f38u; r_esp -= 4; W32(r_esp, v); }
    /* 0055f74b: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x55f750u); f_00630f40();
    /* 0055f750: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f753: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055f754: lea edx, [ebp - 0x408] */ r_edx = (u32)(r_ebp+0xfffffbf8u);
    /* 0055f75a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055f75b: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x55f760u); f_00686d8e();
    /* 0055f760: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f763: jmp 0x55f823 */ goto L_0055f823;
L_0055f768:; BB(0x0055f768);
    /* 0055f768: push 0x6c8f14 */ { u32 v = 0x6c8f14u; r_esp -= 4; W32(r_esp, v); }
    /* 0055f76d: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x55f772u); f_00630f40();
    /* 0055f772: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f775: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055f776: lea eax, [ebp - 0x408] */ r_eax = (u32)(r_ebp+0xfffffbf8u);
    /* 0055f77c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055f77d: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x55f782u); f_00686d8e();
    /* 0055f782: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f785: jmp 0x55f823 */ goto L_0055f823;
L_0055f78a:; BB(0x0055f78a);
    /* 0055f78a: push 0x6c8ef0 */ { u32 v = 0x6c8ef0u; r_esp -= 4; W32(r_esp, v); }
    /* 0055f78f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x55f794u); f_00630f40();
    /* 0055f794: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f797: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055f798: lea ecx, [ebp - 0x408] */ r_ecx = (u32)(r_ebp+0xfffffbf8u);
    /* 0055f79e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055f79f: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x55f7a4u); f_00686d8e();
    /* 0055f7a4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f7a7: jmp 0x55f823 */ goto L_0055f823;
L_0055f7a9:; BB(0x0055f7a9);
    /* 0055f7a9: push 0x6c8ecc */ { u32 v = 0x6c8eccu; r_esp -= 4; W32(r_esp, v); }
    /* 0055f7ae: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x55f7b3u); f_00630f40();
    /* 0055f7b3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f7b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055f7b7: lea edx, [ebp - 0x408] */ r_edx = (u32)(r_ebp+0xfffffbf8u);
    /* 0055f7bd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055f7be: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x55f7c3u); f_00686d8e();
    /* 0055f7c3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f7c6: jmp 0x55f823 */ goto L_0055f823;
L_0055f7c8:; BB(0x0055f7c8);
    /* 0055f7c8: push 0x6c8eac */ { u32 v = 0x6c8eacu; r_esp -= 4; W32(r_esp, v); }
    /* 0055f7cd: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x55f7d2u); f_00630f40();
    /* 0055f7d2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f7d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055f7d6: lea eax, [ebp - 0x408] */ r_eax = (u32)(r_ebp+0xfffffbf8u);
    /* 0055f7dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055f7dd: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x55f7e2u); f_00686d8e();
    /* 0055f7e2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f7e5: jmp 0x55f823 */ goto L_0055f823;
L_0055f7e7:; BB(0x0055f7e7);
    /* 0055f7e7: push 0x6c8e8c */ { u32 v = 0x6c8e8cu; r_esp -= 4; W32(r_esp, v); }
    /* 0055f7ec: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x55f7f1u); f_00630f40();
    /* 0055f7f1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f7f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055f7f5: lea ecx, [ebp - 0x408] */ r_ecx = (u32)(r_ebp+0xfffffbf8u);
    /* 0055f7fb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055f7fc: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x55f801u); f_00686d8e();
    /* 0055f801: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f804: jmp 0x55f823 */ goto L_0055f823;
L_0055f806:; BB(0x0055f806);
    /* 0055f806: push 0x6c8e68 */ { u32 v = 0x6c8e68u; r_esp -= 4; W32(r_esp, v); }
    /* 0055f80b: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x55f810u); f_00630f40();
    /* 0055f810: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f813: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055f814: lea edx, [ebp - 0x408] */ r_edx = (u32)(r_ebp+0xfffffbf8u);
    /* 0055f81a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055f81b: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x55f820u); f_00686d8e();
    /* 0055f820: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0055f823:; BB(0x0055f823);
    /* 0055f823: lea eax, [ebp - 0x408] */ r_eax = (u32)(r_ebp+0xfffffbf8u);
    /* 0055f829: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055f82a: push 0x6b678c */ { u32 v = 0x6b678cu; r_esp -= 4; W32(r_esp, v); }
    /* 0055f82f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x55f834u); f_00630f40();
    /* 0055f834: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f837: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055f838: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055f83a: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 0055f840: call 0x57be80 */ r_esp -= 4; W32(r_esp, 0x55f845u); f_0057be80();
    /* 0055f845: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055f848: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0055f84a: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x55f84fu); f_00686d72();
    /* 0055f84f: mov esp, ebp */ r_esp = r_ebp;
    /* 0055f851: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055f852: ret  */ FN_RET(0x0055ef80); r_esp += 4; return;
}

