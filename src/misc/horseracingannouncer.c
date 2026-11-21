#include "protos.h"

void f_0043d7a0(void) /* horseracingannouncer::func_0043d7a0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043d7a0);
    /* 0043d7a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043d7a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0043d7a3: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043d7a6: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0043d7a9: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0043d7ac: call 0x43d350 */ r_esp -= 4; W32(r_esp, 0x43d7b1u); f_0043d350();
    /* 0043d7b1: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0043d7b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d7b6: jne 0x43d7bd */ if (!fZ) goto L_0043d7bd;
L_0043d7b8:; BB(0x0043d7b8);
    /* 0043d7b8: jmp 0x43d921 */ goto L_0043d921;
L_0043d7bd:; BB(0x0043d7bd);
    /* 0043d7bd: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0043d7c0: mov byte ptr [ecx + 0x188], 1 */ W8((u32)(r_ecx+0x188u), 0x1u);
    /* 0043d7c7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0043d7ca: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0043d7cd: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0043d7d0: mov ecx, dword ptr [eax + 0x184] */ r_ecx = R32((u32)(r_eax+0x184u));
    /* 0043d7d6: imul ecx, ecx, 0x2710 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x2710u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0043d7dc: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0043d7df: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0043d7e6: jmp 0x43d7f1 */ goto L_0043d7f1;
L_0043d7e8:; BB(0x0043d7e8);
    /* 0043d7e8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d7eb: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043d7ee: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0043d7f1:; BB(0x0043d7f1);
    /* 0043d7f1: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043d7f5: jge 0x43d8c4 */ if ((fS==fO)) goto L_0043d8c4;
L_0043d7fb:; BB(0x0043d7fb);
    /* 0043d7fb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d7fe: mov dword ptr [ebp + eax*4 - 0x18], 0 */ W32((u32)(r_ebp+r_eax*4+0xffffffe8u), 0x0u);
    /* 0043d806: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d809: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0043d80c: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d810: je 0x43d820 */ if (fZ) goto L_0043d820;
L_0043d812:; BB(0x0043d812);
    /* 0043d812: cmp dword ptr [ebp - 0x20], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d816: je 0x43d828 */ if (fZ) goto L_0043d828;
L_0043d818:; BB(0x0043d818);
    /* 0043d818: cmp dword ptr [ebp - 0x20], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d81c: je 0x43d830 */ if (fZ) goto L_0043d830;
L_0043d81e:; BB(0x0043d81e);
    /* 0043d81e: jmp 0x43d836 */ goto L_0043d836;
L_0043d820:; BB(0x0043d820);
    /* 0043d820: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0043d823: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0043d826: jmp 0x43d836 */ goto L_0043d836;
L_0043d828:; BB(0x0043d828);
    /* 0043d828: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0043d82b: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0043d82e: jmp 0x43d836 */ goto L_0043d836;
L_0043d830:; BB(0x0043d830);
    /* 0043d830: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0043d833: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_0043d836:; BB(0x0043d836);
    /* 0043d836: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043d839: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0043d83c: cmp dword ptr [ebp - 0x24], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0043d840: ja 0x43d8a4 */ if ((!fC&&!fZ)) goto L_0043d8a4;
L_0043d842:; BB(0x0043d842);
    /* 0043d842: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0043d845: jmp dword ptr [eax*4 + 0x43d928] */ { u32 t = R32((u32)(r_eax*4+0x43d928u)); switch (t) { case 0x43d84cu: goto L_0043d84c; case 0x43d85eu: goto L_0043d85e; case 0x43d86fu: goto L_0043d86f; case 0x43d881u: goto L_0043d881; case 0x43d893u: goto L_0043d893; default: UNSUP(0x0043d845, "jump table entry is not a known target"); } }
L_0043d84c:; BB(0x0043d84c);
    /* 0043d84c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043d84f: add ecx, 0x24a52 */ {  u32 a = r_ecx; u32 b = 0x24a52u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043d855: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d858: mov dword ptr [ebp + edx*4 - 0x18], ecx */ W32((u32)(r_ebp+r_edx*4+0xffffffe8u), r_ecx);
    /* 0043d85c: jmp 0x43d8bf */ goto L_0043d8bf;
L_0043d85e:; BB(0x0043d85e);
    /* 0043d85e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043d861: add eax, 0x24a51 */ {  u32 a = r_eax; u32 b = 0x24a51u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043d866: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d869: mov dword ptr [ebp + ecx*4 - 0x18], eax */ W32((u32)(r_ebp+r_ecx*4+0xffffffe8u), r_eax);
    /* 0043d86d: jmp 0x43d8bf */ goto L_0043d8bf;
L_0043d86f:; BB(0x0043d86f);
    /* 0043d86f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043d872: add edx, 0x24a50 */ {  u32 a = r_edx; u32 b = 0x24a50u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043d878: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d87b: mov dword ptr [ebp + eax*4 - 0x18], edx */ W32((u32)(r_ebp+r_eax*4+0xffffffe8u), r_edx);
    /* 0043d87f: jmp 0x43d8bf */ goto L_0043d8bf;
L_0043d881:; BB(0x0043d881);
    /* 0043d881: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043d884: add ecx, 0x24a4f */ {  u32 a = r_ecx; u32 b = 0x24a4fu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043d88a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d88d: mov dword ptr [ebp + edx*4 - 0x18], ecx */ W32((u32)(r_ebp+r_edx*4+0xffffffe8u), r_ecx);
    /* 0043d891: jmp 0x43d8bf */ goto L_0043d8bf;
L_0043d893:; BB(0x0043d893);
    /* 0043d893: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043d896: add eax, 0x24a4e */ {  u32 a = r_eax; u32 b = 0x24a4eu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043d89b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d89e: mov dword ptr [ebp + ecx*4 - 0x18], eax */ W32((u32)(r_ebp+r_ecx*4+0xffffffe8u), r_eax);
    /* 0043d8a2: jmp 0x43d8bf */ goto L_0043d8bf;
L_0043d8a4:; BB(0x0043d8a4);
    /* 0043d8a4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0043d8a6: jne 0x43d8bf */ if (!fZ) goto L_0043d8bf;
L_0043d8a8:; BB(0x0043d8a8);
    /* 0043d8a8: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d8ad: push 0x6b82b4 */ { u32 v = 0x6b82b4u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d8b2: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d8b7: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x43d8bcu); f_005e9f20();
    /* 0043d8bc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0043d8bf:; BB(0x0043d8bf);
    /* 0043d8bf: jmp 0x43d7e8 */ goto L_0043d7e8;
L_0043d8c4:; BB(0x0043d8c4);
    /* 0043d8c4: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0043d8c6: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0043d8c9: mov edx, dword ptr [ecx + 0x1ec] */ r_edx = R32((u32)(r_ecx+0x1ecu));
    /* 0043d8cf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043d8d0: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043d8d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043d8d4: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0043d8d7: mov edx, dword ptr [ecx + 0x1e8] */ r_edx = R32((u32)(r_ecx+0x1e8u));
    /* 0043d8dd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043d8de: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043d8e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043d8e2: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0043d8e5: mov edx, dword ptr [ecx + 0x1e4] */ r_edx = R32((u32)(r_ecx+0x1e4u));
    /* 0043d8eb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043d8ec: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043d8ef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043d8f0: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0043d8f3: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0043d8f9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043d8fa: call 0x43f1b0 */ r_esp -= 4; W32(r_esp, 0x43d8ffu); f_0043f1b0();
    /* 0043d8ff: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043d902: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d904: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d906: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0043d909: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0043d90f: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0043d912: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 0043d918: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043d91a: mov ecx, eax */ r_ecx = r_eax;
    /* 0043d91c: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0043d91f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x43d921u); call_ind(t); }
L_0043d921:; BB(0x0043d921);
    /* 0043d921: mov esp, ebp */ r_esp = r_ebp;
    /* 0043d923: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043d924: ret 0xc */ FN_RET(0x0043d7a0); r_esp += 16; return;
}

void f_0043d9b0(void) /* horseracingannouncer::func_0043d9b0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043d9b0);
    /* 0043d9b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043d9b1: mov ebp, esp */ r_ebp = r_esp;
    /* 0043d9b3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043d9b6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043d9b9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043d9bc: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0043d9bf: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0043d9c3: ja 0x43da06 */ if ((!fC&&!fZ)) goto L_0043da06;
L_0043d9c5:; BB(0x0043d9c5);
    /* 0043d9c5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043d9c8: jmp dword ptr [ecx*4 + 0x43da2c] */ { u32 t = R32((u32)(r_ecx*4+0x43da2cu)); switch (t) { case 0x43d9cfu: goto L_0043d9cf; case 0x43d9dau: goto L_0043d9da; case 0x43d9e5u: goto L_0043d9e5; case 0x43d9f0u: goto L_0043d9f0; case 0x43d9fbu: goto L_0043d9fb; default: UNSUP(0x0043d9c8, "jump table entry is not a known target"); } }
L_0043d9cf:; BB(0x0043d9cf);
    /* 0043d9cf: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d9d2: mov eax, dword ptr [edx + 0x19c] */ r_eax = R32((u32)(r_edx+0x19cu));
    /* 0043d9d8: jmp 0x43da23 */ goto L_0043da23;
L_0043d9da:; BB(0x0043d9da);
    /* 0043d9da: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d9dd: mov eax, dword ptr [eax + 0x198] */ r_eax = R32((u32)(r_eax+0x198u));
    /* 0043d9e3: jmp 0x43da23 */ goto L_0043da23;
L_0043d9e5:; BB(0x0043d9e5);
    /* 0043d9e5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d9e8: mov eax, dword ptr [ecx + 0x194] */ r_eax = R32((u32)(r_ecx+0x194u));
    /* 0043d9ee: jmp 0x43da23 */ goto L_0043da23;
L_0043d9f0:; BB(0x0043d9f0);
    /* 0043d9f0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d9f3: mov eax, dword ptr [edx + 0x190] */ r_eax = R32((u32)(r_edx+0x190u));
    /* 0043d9f9: jmp 0x43da23 */ goto L_0043da23;
L_0043d9fb:; BB(0x0043d9fb);
    /* 0043d9fb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d9fe: mov eax, dword ptr [eax + 0x18c] */ r_eax = R32((u32)(r_eax+0x18cu));
    /* 0043da04: jmp 0x43da23 */ goto L_0043da23;
L_0043da06:; BB(0x0043da06);
    /* 0043da06: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0043da08: jne 0x43da21 */ if (!fZ) goto L_0043da21;
L_0043da0a:; BB(0x0043da0a);
    /* 0043da0a: push 0x1a6 */ { u32 v = 0x1a6u; r_esp -= 4; W32(r_esp, v); }
    /* 0043da0f: push 0x6b82b4 */ { u32 v = 0x6b82b4u; r_esp -= 4; W32(r_esp, v); }
    /* 0043da14: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0043da19: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x43da1eu); f_005e9f20();
    /* 0043da1e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0043da21:; BB(0x0043da21);
    /* 0043da21: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0043da23:; BB(0x0043da23);
    /* 0043da23: mov esp, ebp */ r_esp = r_ebp;
    /* 0043da25: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043da26: ret 4 */ FN_RET(0x0043d9b0); r_esp += 8; return;
}

