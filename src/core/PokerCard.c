#include "protos.h"

void f_00464130(void) /* PokerCard::func_00464130 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00464130);
    /* 00464130: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00464131: mov ebp, esp */ r_ebp = r_esp;
    /* 00464133: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00464134: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00464137: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0046413a: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 0046413d: movzx edx, byte ptr [0x79077b] */ r_edx = (u32)R8((u32)(0x79077bu));
    /* 00464144: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00464146: je 0x464159 */ if (fZ) goto L_00464159;
L_00464148:; BB(0x00464148);
    /* 00464148: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0046414b: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 0046414e: movzx edx, byte ptr [0x79074f] */ r_edx = (u32)R8((u32)(0x79074fu));
    /* 00464155: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00464157: jne 0x46418f */ if (!fZ) goto L_0046418f;
L_00464159:; BB(0x00464159);
    /* 00464159: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0046415c: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 0046415f: movzx edx, byte ptr [0x79077b] */ r_edx = (u32)R8((u32)(0x79077bu));
    /* 00464166: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00464168: jne 0x46417b */ if (!fZ) goto L_0046417b;
L_0046416a:; BB(0x0046416a);
    /* 0046416a: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0046416d: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 00464170: movzx edx, byte ptr [0x79074f] */ r_edx = (u32)R8((u32)(0x79074fu));
    /* 00464177: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00464179: je 0x46418f */ if (fZ) goto L_0046418f;
L_0046417b:; BB(0x0046417b);
    /* 0046417b: push 0x77 */ { u32 v = 0x77u; r_esp -= 4; W32(r_esp, v); }
    /* 0046417d: push 0x6baa20 */ { u32 v = 0x6baa20u; r_esp -= 4; W32(r_esp, v); }
    /* 00464182: push 0x6ba990 */ { u32 v = 0x6ba990u; r_esp -= 4; W32(r_esp, v); }
    /* 00464187: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x46418cu); f_005e9f20();
    /* 0046418c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0046418f:; BB(0x0046418f);
    /* 0046418f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00464192: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 00464195: movzx eax, byte ptr [0x7907a2] */ r_eax = (u32)R8((u32)(0x7907a2u));
    /* 0046419c: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046419e: je 0x4641b1 */ if (fZ) goto L_004641b1;
L_004641a0:; BB(0x004641a0);
    /* 004641a0: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 004641a3: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 004641a6: movzx eax, byte ptr [0x79075e] */ r_eax = (u32)R8((u32)(0x79075eu));
    /* 004641ad: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004641af: jne 0x4641e7 */ if (!fZ) goto L_004641e7;
L_004641b1:; BB(0x004641b1);
    /* 004641b1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004641b4: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 004641b7: movzx eax, byte ptr [0x7907a2] */ r_eax = (u32)R8((u32)(0x7907a2u));
    /* 004641be: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004641c0: jne 0x4641d3 */ if (!fZ) goto L_004641d3;
L_004641c2:; BB(0x004641c2);
    /* 004641c2: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 004641c5: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 004641c8: movzx eax, byte ptr [0x79075e] */ r_eax = (u32)R8((u32)(0x79075eu));
    /* 004641cf: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004641d1: je 0x4641e7 */ if (fZ) goto L_004641e7;
L_004641d3:; BB(0x004641d3);
    /* 004641d3: push 0x79 */ { u32 v = 0x79u; r_esp -= 4; W32(r_esp, v); }
    /* 004641d5: push 0x6baa20 */ { u32 v = 0x6baa20u; r_esp -= 4; W32(r_esp, v); }
    /* 004641da: push 0x6ba900 */ { u32 v = 0x6ba900u; r_esp -= 4; W32(r_esp, v); }
    /* 004641df: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4641e4u); f_005e9f20();
    /* 004641e4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004641e7:; BB(0x004641e7);
    /* 004641e7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004641ea: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 004641ed: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 004641f0: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 004641f3: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004641f5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004641f8: mov byte ptr [ecx], al */ W8((u32)(r_ecx), (u8)r_eax);
    /* 004641fa: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004641fd: mov esp, ebp */ r_esp = r_ebp;
    /* 004641ff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00464200: ret 8 */ FN_RET(0x00464130); r_esp += 12; return;
}

void f_00464220(void) /* PokerCard::func_00464220 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00464220);
    /* 00464220: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00464221: mov ebp, esp */ r_ebp = r_esp;
    /* 00464223: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00464224: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00464227: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0046422a: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 0046422d: movzx edx, byte ptr [0x79077b] */ r_edx = (u32)R8((u32)(0x79077bu));
    /* 00464234: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00464236: je 0x464249 */ if (fZ) goto L_00464249;
L_00464238:; BB(0x00464238);
    /* 00464238: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0046423b: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 0046423e: movzx edx, byte ptr [0x79074f] */ r_edx = (u32)R8((u32)(0x79074fu));
    /* 00464245: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00464247: jne 0x464282 */ if (!fZ) goto L_00464282;
L_00464249:; BB(0x00464249);
    /* 00464249: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0046424c: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 0046424f: movzx edx, byte ptr [0x79077b] */ r_edx = (u32)R8((u32)(0x79077bu));
    /* 00464256: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00464258: jne 0x46426b */ if (!fZ) goto L_0046426b;
L_0046425a:; BB(0x0046425a);
    /* 0046425a: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0046425d: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 00464260: movzx edx, byte ptr [0x79074f] */ r_edx = (u32)R8((u32)(0x79074fu));
    /* 00464267: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00464269: je 0x464282 */ if (fZ) goto L_00464282;
L_0046426b:; BB(0x0046426b);
    /* 0046426b: push 0x88 */ { u32 v = 0x88u; r_esp -= 4; W32(r_esp, v); }
    /* 00464270: push 0x6baa20 */ { u32 v = 0x6baa20u; r_esp -= 4; W32(r_esp, v); }
    /* 00464275: push 0x6ba990 */ { u32 v = 0x6ba990u; r_esp -= 4; W32(r_esp, v); }
    /* 0046427a: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x46427fu); f_005e9f20();
    /* 0046427f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00464282:; BB(0x00464282);
    /* 00464282: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00464285: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 00464288: movzx eax, byte ptr [0x7907a2] */ r_eax = (u32)R8((u32)(0x7907a2u));
    /* 0046428f: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00464291: je 0x4642a4 */ if (fZ) goto L_004642a4;
L_00464293:; BB(0x00464293);
    /* 00464293: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00464296: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 00464299: movzx eax, byte ptr [0x79075e] */ r_eax = (u32)R8((u32)(0x79075eu));
    /* 004642a0: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004642a2: jne 0x4642dd */ if (!fZ) goto L_004642dd;
L_004642a4:; BB(0x004642a4);
    /* 004642a4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004642a7: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 004642aa: movzx eax, byte ptr [0x7907a2] */ r_eax = (u32)R8((u32)(0x7907a2u));
    /* 004642b1: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004642b3: jne 0x4642c6 */ if (!fZ) goto L_004642c6;
L_004642b5:; BB(0x004642b5);
    /* 004642b5: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 004642b8: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 004642bb: movzx eax, byte ptr [0x79075e] */ r_eax = (u32)R8((u32)(0x79075eu));
    /* 004642c2: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004642c4: je 0x4642dd */ if (fZ) goto L_004642dd;
L_004642c6:; BB(0x004642c6);
    /* 004642c6: push 0x8a */ { u32 v = 0x8au; r_esp -= 4; W32(r_esp, v); }
    /* 004642cb: push 0x6baa20 */ { u32 v = 0x6baa20u; r_esp -= 4; W32(r_esp, v); }
    /* 004642d0: push 0x6ba900 */ { u32 v = 0x6ba900u; r_esp -= 4; W32(r_esp, v); }
    /* 004642d5: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4642dau); f_005e9f20();
    /* 004642da: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004642dd:; BB(0x004642dd);
    /* 004642dd: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004642e0: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 004642e3: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 004642e6: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 004642e9: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004642eb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004642ee: mov byte ptr [ecx], al */ W8((u32)(r_ecx), (u8)r_eax);
    /* 004642f0: mov esp, ebp */ r_esp = r_ebp;
    /* 004642f2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004642f3: ret 8 */ FN_RET(0x00464220); r_esp += 12; return;
}

void f_00464300(void) /* PokerCard::func_00464300 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00464300);
    /* 00464300: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00464301: mov ebp, esp */ r_ebp = r_esp;
    /* 00464303: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00464304: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00464307: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0046430a: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 0046430d: movzx edx, byte ptr [0x79074f] */ r_edx = (u32)R8((u32)(0x79074fu));
    /* 00464314: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00464316: jne 0x46432f */ if (!fZ) goto L_0046432f;
L_00464318:; BB(0x00464318);
    /* 00464318: push 0x92 */ { u32 v = 0x92u; r_esp -= 4; W32(r_esp, v); }
    /* 0046431d: push 0x6baa20 */ { u32 v = 0x6baa20u; r_esp -= 4; W32(r_esp, v); }
    /* 00464322: push 0x6baa58 */ { u32 v = 0x6baa58u; r_esp -= 4; W32(r_esp, v); }
    /* 00464327: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x46432cu); f_005e9f20();
    /* 0046432c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0046432f:; BB(0x0046432f);
    /* 0046432f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00464332: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 00464335: movzx eax, byte ptr [0x79075e] */ r_eax = (u32)R8((u32)(0x79075eu));
    /* 0046433c: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046433e: jne 0x464357 */ if (!fZ) goto L_00464357;
L_00464340:; BB(0x00464340);
    /* 00464340: push 0x93 */ { u32 v = 0x93u; r_esp -= 4; W32(r_esp, v); }
    /* 00464345: push 0x6baa20 */ { u32 v = 0x6baa20u; r_esp -= 4; W32(r_esp, v); }
    /* 0046434a: push 0x6baa38 */ { u32 v = 0x6baa38u; r_esp -= 4; W32(r_esp, v); }
    /* 0046434f: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x464354u); f_005e9f20();
    /* 00464354: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00464357:; BB(0x00464357);
    /* 00464357: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046435a: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 0046435d: and eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00464360: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00464363: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 00464366: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00464368: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046436b: mov byte ptr [ecx], al */ W8((u32)(r_ecx), (u8)r_eax);
    /* 0046436d: mov esp, ebp */ r_esp = r_ebp;
    /* 0046436f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00464370: ret 4 */ FN_RET(0x00464300); r_esp += 8; return;
}

void f_00464380(void) /* PokerCard::func_00464380 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00464380);
    /* 00464380: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00464381: mov ebp, esp */ r_ebp = r_esp;
    /* 00464383: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00464384: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00464387: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0046438a: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 0046438d: movzx edx, byte ptr [0x79077b] */ r_edx = (u32)R8((u32)(0x79077bu));
    /* 00464394: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00464396: jne 0x4643af */ if (!fZ) goto L_004643af;
L_00464398:; BB(0x00464398);
    /* 00464398: push 0x9b */ { u32 v = 0x9bu; r_esp -= 4; W32(r_esp, v); }
    /* 0046439d: push 0x6baa20 */ { u32 v = 0x6baa20u; r_esp -= 4; W32(r_esp, v); }
    /* 004643a2: push 0x6baa98 */ { u32 v = 0x6baa98u; r_esp -= 4; W32(r_esp, v); }
    /* 004643a7: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4643acu); f_005e9f20();
    /* 004643ac: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004643af:; BB(0x004643af);
    /* 004643af: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004643b2: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 004643b5: movzx eax, byte ptr [0x7907a2] */ r_eax = (u32)R8((u32)(0x7907a2u));
    /* 004643bc: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004643be: jne 0x4643d7 */ if (!fZ) goto L_004643d7;
L_004643c0:; BB(0x004643c0);
    /* 004643c0: push 0x9c */ { u32 v = 0x9cu; r_esp -= 4; W32(r_esp, v); }
    /* 004643c5: push 0x6baa20 */ { u32 v = 0x6baa20u; r_esp -= 4; W32(r_esp, v); }
    /* 004643ca: push 0x6baa78 */ { u32 v = 0x6baa78u; r_esp -= 4; W32(r_esp, v); }
    /* 004643cf: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4643d4u); f_005e9f20();
    /* 004643d4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004643d7:; BB(0x004643d7);
    /* 004643d7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004643da: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 004643dd: and eax, 0xf0 */ {  u32 a = r_eax; u32 b = 0xf0u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004643e2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004643e5: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 004643e8: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004643ea: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004643ed: mov byte ptr [ecx], al */ W8((u32)(r_ecx), (u8)r_eax);
    /* 004643ef: mov esp, ebp */ r_esp = r_ebp;
    /* 004643f1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004643f2: ret 4 */ FN_RET(0x00464380); r_esp += 8; return;
}

void f_00464400(void) /* PokerCard::func_00464400 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00464400);
    /* 00464400: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00464401: mov ebp, esp */ r_ebp = r_esp;
    /* 00464403: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00464406: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00464409: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046440c: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 0046440f: and ecx, 0xf */ {  u32 a = r_ecx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00464412: cmp ecx, 0xf */ {  u32 a = r_ecx; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00464415: jne 0x46442e */ if (!fZ) goto L_0046442e;
L_00464417:; BB(0x00464417);
    /* 00464417: push 0xa2 */ { u32 v = 0xa2u; r_esp -= 4; W32(r_esp, v); }
    /* 0046441c: push 0x6baa20 */ { u32 v = 0x6baa20u; r_esp -= 4; W32(r_esp, v); }
    /* 00464421: push 0x6baadc */ { u32 v = 0x6baadcu; r_esp -= 4; W32(r_esp, v); }
    /* 00464426: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x46442bu); f_005e9f20();
    /* 0046442b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0046442e:; BB(0x0046442e);
    /* 0046442e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00464431: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 00464434: and ecx, 0xf0 */ {  u32 a = r_ecx; u32 b = 0xf0u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0046443a: cmp ecx, 0xf0 */ {  u32 a = r_ecx; u32 b = 0xf0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00464440: jne 0x464459 */ if (!fZ) goto L_00464459;
L_00464442:; BB(0x00464442);
    /* 00464442: push 0xa3 */ { u32 v = 0xa3u; r_esp -= 4; W32(r_esp, v); }
    /* 00464447: push 0x6baa20 */ { u32 v = 0x6baa20u; r_esp -= 4; W32(r_esp, v); }
    /* 0046444c: push 0x6baab8 */ { u32 v = 0x6baab8u; r_esp -= 4; W32(r_esp, v); }
    /* 00464451: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x464456u); f_005e9f20();
    /* 00464456: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00464459:; BB(0x00464459);
    /* 00464459: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046445c: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 0046445f: and ecx, 0xf0 */ {  u32 a = r_ecx; u32 b = 0xf0u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00464465: mov byte ptr [ebp - 1], cl */ W8((u32)(r_ebp+0xffffffffu), (u8)r_ecx);
    /* 00464468: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0046446b: mov al, byte ptr [ebp - 1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffffu))) & 0xffu);
    /* 0046446e: mov byte ptr [edx], al */ W8((u32)(r_edx), (u8)r_eax);
    /* 00464470: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00464473: mov esp, ebp */ r_esp = r_ebp;
    /* 00464475: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00464476: ret 4 */ FN_RET(0x00464400); r_esp += 8; return;
}

void f_00464480(void) /* PokerCard::func_00464480 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00464480);
    /* 00464480: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00464481: mov ebp, esp */ r_ebp = r_esp;
    /* 00464483: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00464486: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00464489: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046448c: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 0046448f: and ecx, 0xf */ {  u32 a = r_ecx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00464492: cmp ecx, 0xf */ {  u32 a = r_ecx; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00464495: jne 0x4644ae */ if (!fZ) goto L_004644ae;
L_00464497:; BB(0x00464497);
    /* 00464497: push 0xaa */ { u32 v = 0xaau; r_esp -= 4; W32(r_esp, v); }
    /* 0046449c: push 0x6baa20 */ { u32 v = 0x6baa20u; r_esp -= 4; W32(r_esp, v); }
    /* 004644a1: push 0x6baadc */ { u32 v = 0x6baadcu; r_esp -= 4; W32(r_esp, v); }
    /* 004644a6: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4644abu); f_005e9f20();
    /* 004644ab: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004644ae:; BB(0x004644ae);
    /* 004644ae: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004644b1: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 004644b4: and ecx, 0xf0 */ {  u32 a = r_ecx; u32 b = 0xf0u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 004644ba: cmp ecx, 0xf0 */ {  u32 a = r_ecx; u32 b = 0xf0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004644c0: jne 0x4644d9 */ if (!fZ) goto L_004644d9;
L_004644c2:; BB(0x004644c2);
    /* 004644c2: push 0xab */ { u32 v = 0xabu; r_esp -= 4; W32(r_esp, v); }
    /* 004644c7: push 0x6baa20 */ { u32 v = 0x6baa20u; r_esp -= 4; W32(r_esp, v); }
    /* 004644cc: push 0x6baab8 */ { u32 v = 0x6baab8u; r_esp -= 4; W32(r_esp, v); }
    /* 004644d1: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4644d6u); f_005e9f20();
    /* 004644d6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004644d9:; BB(0x004644d9);
    /* 004644d9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004644dc: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 004644df: and ecx, 0xf */ {  u32 a = r_ecx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 004644e2: mov byte ptr [ebp - 1], cl */ W8((u32)(r_ebp+0xffffffffu), (u8)r_ecx);
    /* 004644e5: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004644e8: mov al, byte ptr [ebp - 1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffffu))) & 0xffu);
    /* 004644eb: mov byte ptr [edx], al */ W8((u32)(r_edx), (u8)r_eax);
    /* 004644ed: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004644f0: mov esp, ebp */ r_esp = r_ebp;
    /* 004644f2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004644f3: ret 4 */ FN_RET(0x00464480); r_esp += 8; return;
}

void f_00464500(void) /* PokerCard::func_00464500 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00464500);
    /* 00464500: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00464501: mov ebp, esp */ r_ebp = r_esp;
    /* 00464503: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00464504: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00464507: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046450a: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 0046450d: and ecx, 0xf */ {  u32 a = r_ecx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00464510: cmp ecx, 0xf */ {  u32 a = r_ecx; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00464513: jne 0x46452c */ if (!fZ) goto L_0046452c;
L_00464515:; BB(0x00464515);
    /* 00464515: push 0xb4 */ { u32 v = 0xb4u; r_esp -= 4; W32(r_esp, v); }
    /* 0046451a: push 0x6baa20 */ { u32 v = 0x6baa20u; r_esp -= 4; W32(r_esp, v); }
    /* 0046451f: push 0x6baadc */ { u32 v = 0x6baadcu; r_esp -= 4; W32(r_esp, v); }
    /* 00464524: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x464529u); f_005e9f20();
    /* 00464529: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0046452c:; BB(0x0046452c);
    /* 0046452c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046452f: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 00464532: and ecx, 0xf0 */ {  u32 a = r_ecx; u32 b = 0xf0u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00464538: cmp ecx, 0xf0 */ {  u32 a = r_ecx; u32 b = 0xf0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046453e: jne 0x464557 */ if (!fZ) goto L_00464557;
L_00464540:; BB(0x00464540);
    /* 00464540: push 0xb5 */ { u32 v = 0xb5u; r_esp -= 4; W32(r_esp, v); }
    /* 00464545: push 0x6baa20 */ { u32 v = 0x6baa20u; r_esp -= 4; W32(r_esp, v); }
    /* 0046454a: push 0x6baab8 */ { u32 v = 0x6baab8u; r_esp -= 4; W32(r_esp, v); }
    /* 0046454f: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x464554u); f_005e9f20();
    /* 00464554: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00464557:; BB(0x00464557);
    /* 00464557: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0046455a: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 0046455d: and ecx, 0xf */ {  u32 a = r_ecx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00464560: cmp ecx, 0xf */ {  u32 a = r_ecx; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00464563: jne 0x46457c */ if (!fZ) goto L_0046457c;
L_00464565:; BB(0x00464565);
    /* 00464565: push 0xb6 */ { u32 v = 0xb6u; r_esp -= 4; W32(r_esp, v); }
    /* 0046456a: push 0x6baa20 */ { u32 v = 0x6baa20u; r_esp -= 4; W32(r_esp, v); }
    /* 0046456f: push 0x6bab28 */ { u32 v = 0x6bab28u; r_esp -= 4; W32(r_esp, v); }
    /* 00464574: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x464579u); f_005e9f20();
    /* 00464579: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0046457c:; BB(0x0046457c);
    /* 0046457c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0046457f: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 00464582: and ecx, 0xf0 */ {  u32 a = r_ecx; u32 b = 0xf0u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00464588: cmp ecx, 0xf0 */ {  u32 a = r_ecx; u32 b = 0xf0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046458e: jne 0x4645a7 */ if (!fZ) goto L_004645a7;
L_00464590:; BB(0x00464590);
    /* 00464590: push 0xb7 */ { u32 v = 0xb7u; r_esp -= 4; W32(r_esp, v); }
    /* 00464595: push 0x6baa20 */ { u32 v = 0x6baa20u; r_esp -= 4; W32(r_esp, v); }
    /* 0046459a: push 0x6bab00 */ { u32 v = 0x6bab00u; r_esp -= 4; W32(r_esp, v); }
    /* 0046459f: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4645a4u); f_005e9f20();
    /* 004645a4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004645a7:; BB(0x004645a7);
    /* 004645a7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004645aa: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 004645ad: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004645b0: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 004645b3: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004645b5: jne 0x4645bd */ if (!fZ) goto L_004645bd;
L_004645b7:; BB(0x004645b7);
    /* 004645b7: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 004645b9: jmp 0x4645bf */ goto L_004645bf;
L_004645bd:; BB(0x004645bd);
    /* 004645bd: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_004645bf:; BB(0x004645bf);
    /* 004645bf: mov esp, ebp */ r_esp = r_ebp;
    /* 004645c1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004645c2: ret 4 */ FN_RET(0x00464500); r_esp += 8; return;
}

