#include "protos.h"

void f_0053a770(void) /* ThreeCardPokerDisplay::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053a770);
    /* 0053a770: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053a771: mov ebp, esp */ r_ebp = r_esp;
    /* 0053a773: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053a776: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0053a779: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0053a77c: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x53a781u); f_005e9e20();
    /* 0053a781: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0053a784: mov dword ptr [eax], 0x6c5a98 */ W32((u32)(r_eax), 0x6c5a98u);
    /* 0053a78a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0053a791: jmp 0x53a79c */ goto L_0053a79c;
L_0053a793:; BB(0x0053a793);
    /* 0053a793: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053a796: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0053a799: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0053a79c:; BB(0x0053a79c);
    /* 0053a79c: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053a7a0: jge 0x53a7c3 */ if ((fS==fO)) goto L_0053a7c3;
L_0053a7a2:; BB(0x0053a7a2);
    /* 0053a7a2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053a7a5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0053a7a8: mov dword ptr [eax + edx*4 + 4], 0 */ W32((u32)(r_eax+r_edx*4+0x4u), 0x0u);
    /* 0053a7b0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053a7b3: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0053a7b6: mov dword ptr [edx + ecx*4 + 0x80], 0 */ W32((u32)(r_edx+r_ecx*4+0x80u), 0x0u);
    /* 0053a7c1: jmp 0x53a793 */ goto L_0053a793;
L_0053a7c3:; BB(0x0053a7c3);
    /* 0053a7c3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0053a7ca: jmp 0x53a7d5 */ goto L_0053a7d5;
L_0053a7cc:; BB(0x0053a7cc);
    /* 0053a7cc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053a7cf: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0053a7d2: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0053a7d5:; BB(0x0053a7d5);
    /* 0053a7d5: cmp dword ptr [ebp - 4], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053a7d9: jge 0x53a7f9 */ if ((fS==fO)) goto L_0053a7f9;
L_0053a7db:; BB(0x0053a7db);
    /* 0053a7db: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053a7de: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0053a7e1: mov dword ptr [edx + ecx*4 + 0x18], 0 */ W32((u32)(r_edx+r_ecx*4+0x18u), 0x0u);
    /* 0053a7e9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053a7ec: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0053a7ef: mov dword ptr [ecx + eax*4 + 0x50], 0 */ W32((u32)(r_ecx+r_eax*4+0x50u), 0x0u);
    /* 0053a7f7: jmp 0x53a7cc */ goto L_0053a7cc;
L_0053a7f9:; BB(0x0053a7f9);
    /* 0053a7f9: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0053a7fc: mov dword ptr [edx + 0x48], 0 */ W32((u32)(r_edx+0x48u), 0x0u);
    /* 0053a803: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0053a806: mov dword ptr [eax + 0x94], 0 */ W32((u32)(r_eax+0x94u), 0x0u);
    /* 0053a810: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0053a813: mov dword ptr [ecx + 0x98], 0 */ W32((u32)(r_ecx+0x98u), 0x0u);
    /* 0053a81d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0053a820: mov dword ptr [edx + 0x9c], 0 */ W32((u32)(r_edx+0x9cu), 0x0u);
    /* 0053a82a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0053a82d: mov dword ptr [eax + 0x4c], 0 */ W32((u32)(r_eax+0x4cu), 0x0u);
    /* 0053a834: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0053a837: mov esp, ebp */ r_esp = r_ebp;
    /* 0053a839: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053a83a: ret  */ FN_RET(0x0053a770); r_esp += 4; return;
}

void f_0053a840(void) /* ThreeCardPokerDisplay::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053a840);
    /* 0053a840: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053a841: mov ebp, esp */ r_ebp = r_esp;
    /* 0053a843: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0053a845: push 0x6a4ac8 */ { u32 v = 0x6a4ac8u; r_esp -= 4; W32(r_esp, v); }
    /* 0053a84a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0053a850: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053a851: sub esp, 0x74 */ {  u32 a = r_esp; u32 b = 0x74u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053a854: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0053a859: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0053a85b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053a85c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0053a85f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0053a865: mov dword ptr [ebp - 0x5c], ecx */ W32((u32)(r_ebp+0xffffffa4u), r_ecx);
    /* 0053a868: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 0053a86b: mov dword ptr [eax], 0x6c5a98 */ W32((u32)(r_eax), 0x6c5a98u);
    /* 0053a871: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0053a878: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0053a87f: jmp 0x53a88a */ goto L_0053a88a;
L_0053a881:; BB(0x0053a881);
    /* 0053a881: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0053a884: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0053a887: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0053a88a:; BB(0x0053a88a);
    /* 0053a88a: cmp dword ptr [ebp - 0x10], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053a88e: jge 0x53a8fb */ if ((fS==fO)) goto L_0053a8fb;
L_0053a890:; BB(0x0053a890);
    /* 0053a890: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0053a893: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 0053a896: mov ecx, dword ptr [eax + edx*4 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 0053a89a: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0053a89d: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053a8a0: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0053a8a3: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053a8a7: je 0x53a8bc */ if (fZ) goto L_0053a8bc;
L_0053a8a9:; BB(0x0053a8a9);
    /* 0053a8a9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0053a8ab: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0053a8ae: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0053a8b0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0053a8b3: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0053a8b5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53a8b7u); call_ind(t); }
    /* 0053a8b7: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 0053a8ba: jmp 0x53a8c3 */ goto L_0053a8c3;
L_0053a8bc:; BB(0x0053a8bc);
    /* 0053a8bc: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
L_0053a8c3:; BB(0x0053a8c3);
    /* 0053a8c3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0053a8c6: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0053a8c9: mov eax, dword ptr [edx + ecx*4 + 0x80] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x80u));
    /* 0053a8d0: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0053a8d3: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053a8d6: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0053a8d9: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053a8dd: je 0x53a8f2 */ if (fZ) goto L_0053a8f2;
L_0053a8df:; BB(0x0053a8df);
    /* 0053a8df: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0053a8e1: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053a8e4: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0053a8e6: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053a8e9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0053a8eb: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x53a8edu); call_ind(t); }
    /* 0053a8ed: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 0053a8f0: jmp 0x53a8f9 */ goto L_0053a8f9;
L_0053a8f2:; BB(0x0053a8f2);
    /* 0053a8f2: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
L_0053a8f9:; BB(0x0053a8f9);
    /* 0053a8f9: jmp 0x53a881 */ goto L_0053a881;
L_0053a8fb:; BB(0x0053a8fb);
    /* 0053a8fb: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0053a902: jmp 0x53a90d */ goto L_0053a90d;
L_0053a904:; BB(0x0053a904);
    /* 0053a904: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0053a907: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0053a90a: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_0053a90d:; BB(0x0053a90d);
    /* 0053a90d: cmp dword ptr [ebp - 0x10], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053a911: jge 0x53a97b */ if ((fS==fO)) goto L_0053a97b;
L_0053a913:; BB(0x0053a913);
    /* 0053a913: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0053a916: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0053a919: mov eax, dword ptr [edx + ecx*4 + 0x18] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x18u));
    /* 0053a91d: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0053a920: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0053a923: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0053a926: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053a92a: je 0x53a93f */ if (fZ) goto L_0053a93f;
L_0053a92c:; BB(0x0053a92c);
    /* 0053a92c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0053a92e: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0053a931: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0053a933: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0053a936: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0053a938: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x53a93au); call_ind(t); }
    /* 0053a93a: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 0053a93d: jmp 0x53a946 */ goto L_0053a946;
L_0053a93f:; BB(0x0053a93f);
    /* 0053a93f: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
L_0053a946:; BB(0x0053a946);
    /* 0053a946: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0053a949: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0053a94c: mov edx, dword ptr [ecx + eax*4 + 0x50] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x50u));
    /* 0053a950: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 0053a953: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0053a956: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0053a959: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053a95d: je 0x53a972 */ if (fZ) goto L_0053a972;
L_0053a95f:; BB(0x0053a95f);
    /* 0053a95f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0053a961: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0053a964: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0053a966: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0053a969: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0053a96b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53a96du); call_ind(t); }
    /* 0053a96d: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 0053a970: jmp 0x53a979 */ goto L_0053a979;
L_0053a972:; BB(0x0053a972);
    /* 0053a972: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
L_0053a979:; BB(0x0053a979);
    /* 0053a979: jmp 0x53a904 */ goto L_0053a904;
L_0053a97b:; BB(0x0053a97b);
    /* 0053a97b: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0053a97e: mov edx, dword ptr [ecx + 0x48] */ r_edx = R32((u32)(r_ecx+0x48u));
    /* 0053a981: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 0053a984: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0053a987: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0053a98a: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053a98e: je 0x53a9a3 */ if (fZ) goto L_0053a9a3;
L_0053a990:; BB(0x0053a990);
    /* 0053a990: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0053a992: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0053a995: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0053a997: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0053a99a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0053a99c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53a99eu); call_ind(t); }
    /* 0053a99e: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 0053a9a1: jmp 0x53a9aa */ goto L_0053a9aa;
L_0053a9a3:; BB(0x0053a9a3);
    /* 0053a9a3: mov dword ptr [ebp - 0x70], 0 */ W32((u32)(r_ebp+0xffffff90u), 0x0u);
L_0053a9aa:; BB(0x0053a9aa);
    /* 0053a9aa: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0053a9ad: mov edx, dword ptr [ecx + 0x94] */ r_edx = R32((u32)(r_ecx+0x94u));
    /* 0053a9b3: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 0053a9b6: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0053a9b9: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0053a9bc: cmp dword ptr [ebp - 0x3c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053a9c0: je 0x53a9d5 */ if (fZ) goto L_0053a9d5;
L_0053a9c2:; BB(0x0053a9c2);
    /* 0053a9c2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0053a9c4: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0053a9c7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0053a9c9: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0053a9cc: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0053a9ce: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53a9d0u); call_ind(t); }
    /* 0053a9d0: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 0053a9d3: jmp 0x53a9dc */ goto L_0053a9dc;
L_0053a9d5:; BB(0x0053a9d5);
    /* 0053a9d5: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
L_0053a9dc:; BB(0x0053a9dc);
    /* 0053a9dc: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0053a9df: mov edx, dword ptr [ecx + 0x98] */ r_edx = R32((u32)(r_ecx+0x98u));
    /* 0053a9e5: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 0053a9e8: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0053a9eb: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0053a9ee: cmp dword ptr [ebp - 0x44], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053a9f2: je 0x53aa07 */ if (fZ) goto L_0053aa07;
L_0053a9f4:; BB(0x0053a9f4);
    /* 0053a9f4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0053a9f6: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0053a9f9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0053a9fb: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0053a9fe: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0053aa00: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53aa02u); call_ind(t); }
    /* 0053aa02: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 0053aa05: jmp 0x53aa0e */ goto L_0053aa0e;
L_0053aa07:; BB(0x0053aa07);
    /* 0053aa07: mov dword ptr [ebp - 0x78], 0 */ W32((u32)(r_ebp+0xffffff88u), 0x0u);
L_0053aa0e:; BB(0x0053aa0e);
    /* 0053aa0e: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0053aa11: mov edx, dword ptr [ecx + 0x9c] */ r_edx = R32((u32)(r_ecx+0x9cu));
    /* 0053aa17: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 0053aa1a: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 0053aa1d: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0053aa20: cmp dword ptr [ebp - 0x4c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053aa24: je 0x53aa39 */ if (fZ) goto L_0053aa39;
L_0053aa26:; BB(0x0053aa26);
    /* 0053aa26: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0053aa28: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0053aa2b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0053aa2d: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0053aa30: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0053aa32: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53aa34u); call_ind(t); }
    /* 0053aa34: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 0053aa37: jmp 0x53aa40 */ goto L_0053aa40;
L_0053aa39:; BB(0x0053aa39);
    /* 0053aa39: mov dword ptr [ebp - 0x7c], 0 */ W32((u32)(r_ebp+0xffffff84u), 0x0u);
L_0053aa40:; BB(0x0053aa40);
    /* 0053aa40: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0053aa43: mov edx, dword ptr [ecx + 0x4c] */ r_edx = R32((u32)(r_ecx+0x4cu));
    /* 0053aa46: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 0053aa49: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0053aa4c: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 0053aa4f: cmp dword ptr [ebp - 0x54], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffacu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053aa53: je 0x53aa68 */ if (fZ) goto L_0053aa68;
L_0053aa55:; BB(0x0053aa55);
    /* 0053aa55: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0053aa57: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0053aa5a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0053aa5c: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0053aa5f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0053aa61: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53aa63u); call_ind(t); }
    /* 0053aa63: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 0053aa66: jmp 0x53aa6f */ goto L_0053aa6f;
L_0053aa68:; BB(0x0053aa68);
    /* 0053aa68: mov dword ptr [ebp - 0x80], 0 */ W32((u32)(r_ebp+0xffffff80u), 0x0u);
L_0053aa6f:; BB(0x0053aa6f);
    /* 0053aa6f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0053aa76: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0053aa79: call 0x5e9e40 */ r_esp -= 4; W32(r_esp, 0x53aa7eu); f_005e9e40();
    /* 0053aa7e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053aa81: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0053aa88: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0053aa89: mov esp, ebp */ r_esp = r_ebp;
    /* 0053aa8b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053aa8c: ret  */ FN_RET(0x0053a840); r_esp += 4; return;
}

