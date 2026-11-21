#include "protos.h"

void f_005980c0(void) /* sub_5980C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005980c0);
    /* 005980c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005980c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005980c3: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005980c6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005980c7: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005980ca: mov dword ptr [ebp - 0x14], 2 */ W32((u32)(r_ebp+0xffffffecu), 0x2u);
    /* 005980d1: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005980d8: mov dword ptr [ebp - 0xc], 1 */ W32((u32)(r_ebp+0xfffffff4u), 0x1u);
    /* 005980df: mov dword ptr [ebp - 8], 3 */ W32((u32)(r_ebp+0xfffffff8u), 0x3u);
    /* 005980e6: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 005980ed: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 005980f4: jmp 0x5980ff */ goto L_005980ff;
L_005980f6:; BB(0x005980f6);
    /* 005980f6: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005980f9: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005980fc: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_005980ff:; BB(0x005980ff);
    /* 005980ff: cmp dword ptr [ebp - 0x18], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00598103: jge 0x5981a2 */ if ((fS==fO)) goto L_005981a2;
L_00598109:; BB(0x00598109);
    /* 00598109: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0059810c: cmp dword ptr [ebp + ecx*4 - 0x14], 4 */ {  u32 a = R32((u32)(r_ebp+r_ecx*4+0xffffffecu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00598111: jne 0x598131 */ if (!fZ) goto L_00598131;
L_00598113:; BB(0x00598113);
    /* 00598113: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00598116: mov eax, dword ptr [ebp + edx*4 - 0x14] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffffecu));
    /* 0059811a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059811b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0059811e: call 0x5983c0 */ r_esp -= 4; W32(r_esp, 0x598123u); f_005983c0();
    /* 00598123: mov esi, eax */ r_esi = r_eax;
    /* 00598125: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00598128: call 0x597fd0 */ r_esp -= 4; W32(r_esp, 0x59812du); f_00597fd0();
    /* 0059812d: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059812f: jl 0x598194 */ if ((fS!=fO)) goto L_00598194;
L_00598131:; BB(0x00598131);
    /* 00598131: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00598134: mov edx, dword ptr [ebp + ecx*4 - 0x14] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffecu));
    /* 00598138: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00598139: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x59813eu); f_005dcb00();
    /* 0059813e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00598141: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00598144: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00598147: mov cl, byte ptr [eax + 0x4a0] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x4a0u))) & 0xffu);
    /* 0059814d: mov byte ptr [ebp - 0x1d], cl */ W8((u32)(r_ebp+0xffffffe3u), (u8)r_ecx);
    /* 00598150: movzx edx, byte ptr [ebp - 0x1d] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffe3u));
    /* 00598154: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00598156: je 0x59819d */ if (fZ) goto L_0059819d;
L_00598158:; BB(0x00598158);
    /* 00598158: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0059815b: mov ecx, dword ptr [ebp + eax*4 - 0x14] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffecu));
    /* 0059815f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00598160: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00598163: call 0x5983c0 */ r_esp -= 4; W32(r_esp, 0x598168u); f_005983c0();
    /* 00598168: mov esi, eax */ r_esi = r_eax;
    /* 0059816a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0059816d: call 0x597fd0 */ r_esp -= 4; W32(r_esp, 0x598172u); f_00597fd0();
    /* 00598172: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00598174: jge 0x59819d */ if ((fS==fO)) goto L_0059819d;
L_00598176:; BB(0x00598176);
    /* 00598176: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00598179: mov eax, dword ptr [ebp + edx*4 - 0x14] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffffecu));
    /* 0059817d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059817e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00598181: call 0x5983c0 */ r_esp -= 4; W32(r_esp, 0x598186u); f_005983c0();
    /* 00598186: mov esi, eax */ r_esi = r_eax;
    /* 00598188: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0059818b: call 0x597f30 */ r_esp -= 4; W32(r_esp, 0x598190u); f_00597f30();
    /* 00598190: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00598192: jne 0x59819d */ if (!fZ) goto L_0059819d;
L_00598194:; BB(0x00598194);
    /* 00598194: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00598197: mov eax, dword ptr [ebp + ecx*4 - 0x14] */ r_eax = R32((u32)(r_ebp+r_ecx*4+0xffffffecu));
    /* 0059819b: jmp 0x5981a5 */ goto L_005981a5;
L_0059819d:; BB(0x0059819d);
    /* 0059819d: jmp 0x5980f6 */ goto L_005980f6;
L_005981a2:; BB(0x005981a2);
    /* 005981a2: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_005981a5:; BB(0x005981a5);
    /* 005981a5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005981a6: mov esp, ebp */ r_esp = r_ebp;
    /* 005981a8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005981a9: ret  */ FN_RET(0x005980c0); r_esp += 4; return;
}

void f_005981b0(void) /* sub_5981B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005981b0);
    /* 005981b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005981b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005981b3: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005981b6: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 005981b9: mov dword ptr [ebp - 0x10], 2 */ W32((u32)(r_ebp+0xfffffff0u), 0x2u);
    /* 005981c0: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005981c7: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 005981ce: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 005981d5: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 005981dc: jmp 0x5981e7 */ goto L_005981e7;
L_005981de:; BB(0x005981de);
    /* 005981de: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005981e1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005981e4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_005981e7:; BB(0x005981e7);
    /* 005981e7: cmp dword ptr [ebp - 0x14], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005981eb: jge 0x59827d */ if ((fS==fO)) goto L_0059827d;
L_005981f1:; BB(0x005981f1);
    /* 005981f1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005981f4: mov edx, dword ptr [ebp + ecx*4 - 0x10] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xfffffff0u));
    /* 005981f8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005981f9: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5981feu); f_005dcb00();
    /* 005981fe: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00598201: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00598204: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00598207: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x59820cu); f_0063aac0();
    /* 0059820c: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0059820e: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00598211: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00598213: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00598217: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0059821a: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 0059821d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059821f: jne 0x598278 */ if (!fZ) goto L_00598278;
L_00598221:; BB(0x00598221);
    /* 00598221: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00598224: mov ecx, dword ptr [ebp + eax*4 - 0x10] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xfffffff0u));
    /* 00598228: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00598229: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x59822eu); f_005dcb00();
    /* 0059822e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00598231: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00598234: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00598237: mov al, byte ptr [edx + 0x4a0] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x4a0u))) & 0xffu);
    /* 0059823d: mov byte ptr [ebp - 0x21], al */ W8((u32)(r_ebp+0xffffffdfu), (u8)r_eax);
    /* 00598240: movzx ecx, byte ptr [ebp - 0x21] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffdfu));
    /* 00598244: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00598246: jne 0x598278 */ if (!fZ) goto L_00598278;
L_00598248:; BB(0x00598248);
    /* 00598248: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0059824b: mov eax, dword ptr [ebp + edx*4 - 0x10] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xfffffff0u));
    /* 0059824f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00598250: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x598255u); f_005dcb00();
    /* 00598255: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00598258: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0059825b: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0059825e: mov dl, byte ptr [ecx + 0x4a1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x4a1u))) & 0xffu);
    /* 00598264: mov byte ptr [ebp - 0x29], dl */ W8((u32)(r_ebp+0xffffffd7u), (u8)r_edx);
    /* 00598267: movzx eax, byte ptr [ebp - 0x29] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffd7u));
    /* 0059826b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059826d: jne 0x598278 */ if (!fZ) goto L_00598278;
L_0059826f:; BB(0x0059826f);
    /* 0059826f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00598272: mov eax, dword ptr [ebp + ecx*4 - 0x10] */ r_eax = R32((u32)(r_ebp+r_ecx*4+0xfffffff0u));
    /* 00598276: jmp 0x598280 */ goto L_00598280;
L_00598278:; BB(0x00598278);
    /* 00598278: jmp 0x5981de */ goto L_005981de;
L_0059827d:; BB(0x0059827d);
    /* 0059827d: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_00598280:; BB(0x00598280);
    /* 00598280: mov esp, ebp */ r_esp = r_ebp;
    /* 00598282: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00598283: ret  */ FN_RET(0x005981b0); r_esp += 4; return;
}

void f_00598290(void) /* sub_598290 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00598290);
    /* 00598290: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00598291: mov ebp, esp */ r_ebp = r_esp;
    /* 00598293: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00598296: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00598299: mov dword ptr [ebp - 0x10], 2 */ W32((u32)(r_ebp+0xfffffff0u), 0x2u);
    /* 005982a0: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005982a7: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 005982ae: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 005982b5: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 005982bc: jmp 0x5982c7 */ goto L_005982c7;
L_005982be:; BB(0x005982be);
    /* 005982be: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005982c1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005982c4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_005982c7:; BB(0x005982c7);
    /* 005982c7: cmp dword ptr [ebp - 0x14], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005982cb: jge 0x598364 */ if ((fS==fO)) goto L_00598364;
L_005982d1:; BB(0x005982d1);
    /* 005982d1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005982d4: mov edx, dword ptr [ebp + ecx*4 - 0x10] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xfffffff0u));
    /* 005982d8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005982d9: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5982deu); f_005dcb00();
    /* 005982de: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005982e1: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005982e4: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005982e7: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5982ecu); f_0063aac0();
    /* 005982ec: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005982ee: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005982f1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005982f3: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005982f7: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 005982fa: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 005982fd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005982ff: jne 0x59835f */ if (!fZ) goto L_0059835f;
L_00598301:; BB(0x00598301);
    /* 00598301: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00598304: mov ecx, dword ptr [ebp + eax*4 - 0x10] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xfffffff0u));
    /* 00598308: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00598309: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x59830eu); f_005dcb00();
    /* 0059830e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00598311: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00598314: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00598317: mov al, byte ptr [edx + 0x4a1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x4a1u))) & 0xffu);
    /* 0059831d: mov byte ptr [ebp - 0x21], al */ W8((u32)(r_ebp+0xffffffdfu), (u8)r_eax);
    /* 00598320: movzx ecx, byte ptr [ebp - 0x21] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffdfu));
    /* 00598324: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00598326: jne 0x59835f */ if (!fZ) goto L_0059835f;
L_00598328:; BB(0x00598328);
    /* 00598328: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0059832b: mov eax, dword ptr [ebp + edx*4 - 0x10] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xfffffff0u));
    /* 0059832f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00598330: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00598333: call 0x5984d0 */ r_esp -= 4; W32(r_esp, 0x598338u); f_005984d0();
    /* 00598338: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0059833b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059833d: jne 0x59835f */ if (!fZ) goto L_0059835f;
L_0059833f:; BB(0x0059833f);
    /* 0059833f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00598342: mov eax, dword ptr [ebp + edx*4 - 0x10] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xfffffff0u));
    /* 00598346: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00598347: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0059834a: call 0x599020 */ r_esp -= 4; W32(r_esp, 0x59834fu); f_00599020();
    /* 0059834f: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00598352: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00598354: je 0x59835f */ if (fZ) goto L_0059835f;
L_00598356:; BB(0x00598356);
    /* 00598356: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00598359: mov eax, dword ptr [ebp + edx*4 - 0x10] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xfffffff0u));
    /* 0059835d: jmp 0x598367 */ goto L_00598367;
L_0059835f:; BB(0x0059835f);
    /* 0059835f: jmp 0x5982be */ goto L_005982be;
L_00598364:; BB(0x00598364);
    /* 00598364: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_00598367:; BB(0x00598367);
    /* 00598367: mov esp, ebp */ r_esp = r_ebp;
    /* 00598369: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059836a: ret  */ FN_RET(0x00598290); r_esp += 4; return;
}

void f_00598370(void) /* sub_598370 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00598370);
    /* 00598370: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00598371: mov ebp, esp */ r_ebp = r_esp;
    /* 00598373: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00598376: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00598379: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00598380: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00598387: jmp 0x598392 */ goto L_00598392;
L_00598389:; BB(0x00598389);
    /* 00598389: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0059838c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0059838f: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_00598392:; BB(0x00598392);
    /* 00598392: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00598396: jge 0x5983ac */ if ((fS==fO)) goto L_005983ac;
L_00598398:; BB(0x00598398);
    /* 00598398: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0059839b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059839c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059839f: call 0x5983c0 */ r_esp -= 4; W32(r_esp, 0x5983a4u); f_005983c0();
    /* 005983a4: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005983a7: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005983aa: jmp 0x598389 */ goto L_00598389;
L_005983ac:; BB(0x005983ac);
    /* 005983ac: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005983af: mov esp, ebp */ r_esp = r_ebp;
    /* 005983b1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005983b2: ret  */ FN_RET(0x00598370); r_esp += 4; return;
}

void f_005983c0(void) /* sub_5983C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005983c0);
    /* 005983c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005983c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005983c3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005983c6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005983c9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005983d0: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005983d7: jmp 0x5983e2 */ goto L_005983e2;
L_005983d9:; BB(0x005983d9);
    /* 005983d9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005983dc: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005983df: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_005983e2:; BB(0x005983e2);
    /* 005983e2: cmp dword ptr [ebp - 8], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005983e6: jge 0x59840a */ if ((fS==fO)) goto L_0059840a;
L_005983e8:; BB(0x005983e8);
    /* 005983e8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005983eb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005983ec: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005983ef: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005983f0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005983f3: call 0x598420 */ r_esp -= 4; W32(r_esp, 0x5983f8u); f_00598420();
    /* 005983f8: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 005983fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005983fd: je 0x598408 */ if (fZ) goto L_00598408;
L_005983ff:; BB(0x005983ff);
    /* 005983ff: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00598402: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00598405: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00598408:; BB(0x00598408);
    /* 00598408: jmp 0x5983d9 */ goto L_005983d9;
L_0059840a:; BB(0x0059840a);
    /* 0059840a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059840d: mov esp, ebp */ r_esp = r_ebp;
    /* 0059840f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00598410: ret 4 */ FN_RET(0x005983c0); r_esp += 8; return;
}

void f_00598420(void) /* sub_598420 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00598420);
    /* 00598420: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00598421: mov ebp, esp */ r_ebp = r_esp;
    /* 00598423: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00598424: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00598427: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0059842a: imul eax, eax, 0xc */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xcu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0059842d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00598430: lea edx, [ecx + eax + 0xc8] */ r_edx = (u32)(r_ecx+r_eax+0xc8u);
    /* 00598437: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0059843a: mov ax, word ptr [edx + eax*2] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2))) & 0xffffu);
    /* 0059843e: mov esp, ebp */ r_esp = r_ebp;
    /* 00598440: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00598441: ret 8 */ FN_RET(0x00598420); r_esp += 12; return;
}

void f_00598470(void) /* sub_598470 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00598470);
    /* 00598470: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00598471: mov ebp, esp */ r_ebp = r_esp;
    /* 00598473: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00598476: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00598479: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0059847c: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0059847f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00598482: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00598489: jmp 0x598494 */ goto L_00598494;
L_0059848b:; BB(0x0059848b);
    /* 0059848b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0059848e: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00598491: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_00598494:; BB(0x00598494);
    /* 00598494: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00598498: jge 0x5984bf */ if ((fS==fO)) goto L_005984bf;
L_0059849a:; BB(0x0059849a);
    /* 0059849a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059849c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0059849f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005984a0: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005984a3: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005984a6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005984a9: mov ecx, dword ptr [ecx + eax*4 + 8] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 005984ad: call 0x5cb7d0 */ r_esp -= 4; W32(r_esp, 0x5984b2u); f_005cb7d0();
    /* 005984b2: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005984b5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005984b7: je 0x5984bd */ if (fZ) goto L_005984bd;
L_005984b9:; BB(0x005984b9);
    /* 005984b9: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005984bb: jmp 0x5984c1 */ goto L_005984c1;
L_005984bd:; BB(0x005984bd);
    /* 005984bd: jmp 0x59848b */ goto L_0059848b;
L_005984bf:; BB(0x005984bf);
    /* 005984bf: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_005984c1:; BB(0x005984c1);
    /* 005984c1: mov esp, ebp */ r_esp = r_ebp;
    /* 005984c3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005984c4: ret 4 */ FN_RET(0x00598470); r_esp += 8; return;
}

void f_005984d0(void) /* sub_5984D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005984d0);
    /* 005984d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005984d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005984d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005984d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005984d7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005984da: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005984dd: mov al, byte ptr [eax + 0x10e] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x10eu))) & 0xffu);
    /* 005984e3: mov esp, ebp */ r_esp = r_ebp;
    /* 005984e5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005984e6: ret 4 */ FN_RET(0x005984d0); r_esp += 8; return;
}

void f_005984f0(void) /* sub_5984F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005984f0);
    /* 005984f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005984f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005984f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005984f5: push 0x6a7459 */ { u32 v = 0x6a7459u; r_esp -= 4; W32(r_esp, v); }
    /* 005984fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00598500: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00598501: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00598504: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00598509: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0059850b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059850c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0059850f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00598515: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 00598518: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0059851b: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059851f: jne 0x598568 */ if (!fZ) goto L_00598568;
L_00598521:; BB(0x00598521);
    /* 00598521: push 0x810 */ { u32 v = 0x810u; r_esp -= 4; W32(r_esp, v); }
    /* 00598526: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x59852bu); f_00686d82();
    /* 0059852b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059852e: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00598531: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00598538: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059853c: je 0x59854b */ if (fZ) goto L_0059854b;
L_0059853e:; BB(0x0059853e);
    /* 0059853e: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00598541: call 0x642e10 */ r_esp -= 4; W32(r_esp, 0x598546u); f_00642e10();
    /* 00598546: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00598549: jmp 0x598552 */ goto L_00598552;
L_0059854b:; BB(0x0059854b);
    /* 0059854b: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_00598552:; BB(0x00598552);
    /* 00598552: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00598555: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00598558: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0059855f: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00598562: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00598565: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
L_00598568:; BB(0x00598568);
    /* 00598568: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059856a: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0059856d: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00598570: call 0x642e70 */ r_esp -= 4; W32(r_esp, 0x598575u); f_00642e70();
    /* 00598575: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00598577: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00598579: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0059857c: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 0059857f: call 0x6437d0 */ r_esp -= 4; W32(r_esp, 0x598584u); f_006437d0();
    /* 00598584: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0059858b: jmp 0x598596 */ goto L_00598596;
L_0059858d:; BB(0x0059858d);
    /* 0059858d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00598590: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00598593: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_00598596:; BB(0x00598596);
    /* 00598596: cmp dword ptr [ebp - 0x10], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059859a: jge 0x598629 */ if ((fS==fO)) goto L_00598629;
L_005985a0:; BB(0x005985a0);
    /* 005985a0: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 005985a5: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5985aau); f_00686d82();
    /* 005985aa: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005985ad: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005985b0: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005985b7: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005985bb: je 0x5985ca */ if (fZ) goto L_005985ca;
L_005985bd:; BB(0x005985bd);
    /* 005985bd: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005985c0: call 0x599bb0 */ r_esp -= 4; W32(r_esp, 0x5985c5u); f_00599bb0();
    /* 005985c5: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 005985c8: jmp 0x5985d1 */ goto L_005985d1;
L_005985ca:; BB(0x005985ca);
    /* 005985ca: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_005985d1:; BB(0x005985d1);
    /* 005985d1: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005985d4: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005985d7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005985de: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005985e1: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005985e4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005985e7: mov dword ptr [eax + edx*4 + 8], ecx */ W32((u32)(r_eax+r_edx*4+0x8u), r_ecx);
    /* 005985eb: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005985ee: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005985ef: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005985f2: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005985f5: mov ecx, dword ptr [ecx + eax*4 + 8] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 005985f9: call 0x5f53e0 */ r_esp -= 4; W32(r_esp, 0x5985feu); f_005f53e0();
    /* 005985fe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00598600: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00598602: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x598607u); f_0064c8a0();
    /* 00598607: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059860a: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0059860d: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 00598610: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00598613: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00598616: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00598619: mov dword ptr [eax + edx*8 + 0x38], ecx */ W32((u32)(r_eax+r_edx*8+0x38u), r_ecx);
    /* 0059861d: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00598620: mov dword ptr [eax + edx*8 + 0x3c], ecx */ W32((u32)(r_eax+r_edx*8+0x3cu), r_ecx);
    /* 00598624: jmp 0x59858d */ goto L_0059858d;
L_00598629:; BB(0x00598629);
    /* 00598629: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 00598630: jmp 0x59863b */ goto L_0059863b;
L_00598632:; BB(0x00598632);
    /* 00598632: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00598635: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00598638: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
L_0059863b:; BB(0x0059863b);
    /* 0059863b: cmp dword ptr [ebp - 0x14], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059863f: jge 0x598670 */ if ((fS==fO)) goto L_00598670;
L_00598641:; BB(0x00598641);
    /* 00598641: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00598643: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00598645: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x59864au); f_0064c8a0();
    /* 0059864a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059864d: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00598650: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 00598653: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00598656: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00598657: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0059865a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059865b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0059865e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059865f: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x598664u); f_005dcb00();
    /* 00598664: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00598667: mov ecx, eax */ r_ecx = r_eax;
    /* 00598669: call 0x5d6050 */ r_esp -= 4; W32(r_esp, 0x59866eu); f_005d6050();
    /* 0059866e: jmp 0x598632 */ goto L_00598632;
L_00598670:; BB(0x00598670);
    /* 00598670: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00598673: call 0x599210 */ r_esp -= 4; W32(r_esp, 0x598678u); f_00599210();
    /* 00598678: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0059867b: mov byte ptr [eax + 0x116], 0 */ W8((u32)(r_eax+0x116u), 0x0u);
    /* 00598682: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00598685: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0059868c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059868d: mov esp, ebp */ r_esp = r_ebp;
    /* 0059868f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00598690: ret  */ FN_RET(0x005984f0); r_esp += 4; return;
}

void f_005986a0(void) /* sub_5986A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005986a0);
    /* 005986a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005986a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005986a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005986a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005986a7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005986a9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005986ac: call 0x597d50 */ r_esp -= 4; W32(r_esp, 0x5986b1u); f_00597d50();
    /* 005986b1: mov al, byte ptr [eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 005986b3: mov esp, ebp */ r_esp = r_ebp;
    /* 005986b5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005986b6: ret  */ FN_RET(0x005986a0); r_esp += 4; return;
}

void f_005986c0(void) /* sub_5986C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005986c0);
    /* 005986c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005986c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005986c3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005986c6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005986c9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005986d0: jmp 0x5986db */ goto L_005986db;
L_005986d2:; BB(0x005986d2);
    /* 005986d2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005986d5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005986d8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005986db:; BB(0x005986db);
    /* 005986db: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005986df: jge 0x5986f7 */ if ((fS==fO)) goto L_005986f7;
L_005986e1:; BB(0x005986e1);
    /* 005986e1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005986e4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005986e5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005986e8: call 0x5983c0 */ r_esp -= 4; W32(r_esp, 0x5986edu); f_005983c0();
    /* 005986ed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005986ef: jle 0x5986f5 */ if ((fZ||fS!=fO)) goto L_005986f5;
L_005986f1:; BB(0x005986f1);
    /* 005986f1: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005986f3: jmp 0x5986f9 */ goto L_005986f9;
L_005986f5:; BB(0x005986f5);
    /* 005986f5: jmp 0x5986d2 */ goto L_005986d2;
L_005986f7:; BB(0x005986f7);
    /* 005986f7: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_005986f9:; BB(0x005986f9);
    /* 005986f9: mov esp, ebp */ r_esp = r_ebp;
    /* 005986fb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005986fc: ret  */ FN_RET(0x005986c0); r_esp += 4; return;
}

void f_00598700(void) /* sub_598700 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00598700);
    /* 00598700: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00598701: mov ebp, esp */ r_ebp = r_esp;
    /* 00598703: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00598706: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00598709: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0059870c: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0059870f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00598712: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00598719: jmp 0x598724 */ goto L_00598724;
L_0059871b:; BB(0x0059871b);
    /* 0059871b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0059871e: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00598721: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_00598724:; BB(0x00598724);
    /* 00598724: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00598728: jge 0x598740 */ if ((fS==fO)) goto L_00598740;
L_0059872a:; BB(0x0059872a);
    /* 0059872a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0059872d: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00598730: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00598733: cmp dword ptr [eax + edx*8 + 0x38], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*8+0x38u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00598738: jle 0x59873e */ if ((fZ||fS!=fO)) goto L_0059873e;
L_0059873a:; BB(0x0059873a);
    /* 0059873a: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0059873c: jmp 0x598742 */ goto L_00598742;
L_0059873e:; BB(0x0059873e);
    /* 0059873e: jmp 0x59871b */ goto L_0059871b;
L_00598740:; BB(0x00598740);
    /* 00598740: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_00598742:; BB(0x00598742);
    /* 00598742: mov esp, ebp */ r_esp = r_ebp;
    /* 00598744: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00598745: ret 4 */ FN_RET(0x00598700); r_esp += 8; return;
}

void f_00598750(void) /* sub_598750 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00598750);
    /* 00598750: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00598751: mov ebp, esp */ r_ebp = r_esp;
    /* 00598753: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00598756: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00598757: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0059875a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0059875c: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00598762: call 0x5df7b0 */ r_esp -= 4; W32(r_esp, 0x598767u); f_005df7b0();
    /* 00598767: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0059876a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059876c: je 0x598804 */ if (fZ) goto L_00598804;
L_00598772:; BB(0x00598772);
    /* 00598772: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00598775: movzx edx, byte ptr [ecx + 0x108] */ r_edx = (u32)R8((u32)(r_ecx+0x108u));
    /* 0059877c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059877e: jne 0x598804 */ if (!fZ) goto L_00598804;
L_00598784:; BB(0x00598784);
    /* 00598784: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00598787: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00598788: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x59878du); f_005dcb00();
    /* 0059878d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00598790: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00598793: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00598796: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x59879bu); f_0063aac0();
    /* 0059879b: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0059879d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005987a0: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005987a4: je 0x5987c2 */ if (fZ) goto L_005987c2;
L_005987a6:; BB(0x005987a6);
    /* 005987a6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005987a9: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5987aeu); f_0063aac0();
    /* 005987ae: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005987b0: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005987b3: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005987b7: je 0x5987c2 */ if (fZ) goto L_005987c2;
L_005987b9:; BB(0x005987b9);
    /* 005987b9: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 005987c0: jmp 0x5987c9 */ goto L_005987c9;
L_005987c2:; BB(0x005987c2);
    /* 005987c2: mov dword ptr [ebp - 0x14], 1 */ W32((u32)(r_ebp+0xffffffecu), 0x1u);
L_005987c9:; BB(0x005987c9);
    /* 005987c9: movzx eax, byte ptr [ebp - 0x14] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffecu));
    /* 005987cd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005987cf: je 0x598804 */ if (fZ) goto L_00598804;
L_005987d1:; BB(0x005987d1);
    /* 005987d1: movzx esi, byte ptr [ebp + 0xc] */ r_esi = (u32)R8((u32)(r_ebp+0xcu));
    /* 005987d5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005987d8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005987d9: mov ecx, dword ptr [0x793598] */ r_ecx = R32((u32)(0x793598u));
    /* 005987df: call 0x590850 */ r_esp -= 4; W32(r_esp, 0x5987e4u); f_00590850();
    /* 005987e4: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005987e7: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005987e9: je 0x598804 */ if (fZ) goto L_00598804;
L_005987eb:; BB(0x005987eb);
    /* 005987eb: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005987ee: mov byte ptr [eax + 0x108], 1 */ W8((u32)(r_eax+0x108u), 0x1u);
    /* 005987f5: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 005987fb: call 0x57c140 */ r_esp -= 4; W32(r_esp, 0x598800u); f_0057c140();
    /* 00598800: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00598802: jmp 0x598806 */ goto L_00598806;
L_00598804:; BB(0x00598804);
    /* 00598804: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_00598806:; BB(0x00598806);
    /* 00598806: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00598807: mov esp, ebp */ r_esp = r_ebp;
    /* 00598809: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059880a: ret 8 */ FN_RET(0x00598750); r_esp += 12; return;
}

void f_00598810(void) /* sub_598810 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00598810);
    /* 00598810: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00598811: mov ebp, esp */ r_ebp = r_esp;
    /* 00598813: sub esp, 0x100 */ {  u32 a = r_esp; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00598819: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0059881e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00598820: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00598823: mov dword ptr [ebp - 0xe4], ecx */ W32((u32)(r_ebp+0xffffff1cu), r_ecx);
    /* 00598829: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0059882c: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0059882f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00598832: mov dword ptr [ebp - 0x18], 0xffffffff */ W32((u32)(r_ebp+0xffffffe8u), 0xffffffffu);
    /* 00598839: mov dword ptr [ebp - 0x1c], 0xffffffff */ W32((u32)(r_ebp+0xffffffe4u), 0xffffffffu);
    /* 00598840: mov byte ptr [ebp - 1], 0 */ W8((u32)(r_ebp+0xffffffffu), 0x0u);
    /* 00598844: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00598846: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00598848: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x59884du); f_0064c8a0();
    /* 0059884d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00598850: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 00598853: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 00598856: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00598859: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059885a: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0059885d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059885e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00598861: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00598862: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x598867u); f_005dcb00();
    /* 00598867: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059886a: mov ecx, eax */ r_ecx = r_eax;
    /* 0059886c: call 0x5d6050 */ r_esp -= 4; W32(r_esp, 0x598871u); f_005d6050();
    /* 00598871: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00598874: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00598875: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x59887au); f_005dcb00();
    /* 0059887a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059887d: mov dword ptr [ebp - 0xcc], eax */ W32((u32)(r_ebp+0xffffff34u), r_eax);
    /* 00598883: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 00598889: call 0x5d52e0 */ r_esp -= 4; W32(r_esp, 0x59888eu); f_005d52e0();
    /* 0059888e: mov dl, byte ptr [eax + 0x2a] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+0x2au))) & 0xffu);
    /* 00598891: mov byte ptr [ebp - 0xcd], dl */ W8((u32)(r_ebp+0xffffff33u), (u8)r_edx);
    /* 00598897: movsx eax, byte ptr [ebp - 0xcd] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffff33u));
    /* 0059889e: mov ecx, dword ptr [ebp - 0xe4] */ r_ecx = R32((u32)(r_ebp+0xffffff1cu));
    /* 005988a4: mov dword ptr [ecx + 0x124], eax */ W32((u32)(r_ecx+0x124u), r_eax);
    /* 005988aa: mov edx, dword ptr [ebp - 0xe4] */ r_edx = R32((u32)(r_ebp+0xffffff1cu));
    /* 005988b0: mov dword ptr [edx + 0x128], 0xffffffff */ W32((u32)(r_edx+0x128u), 0xffffffffu);
    /* 005988ba: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 005988c1: jmp 0x5988cc */ goto L_005988cc;
L_005988c3:; BB(0x005988c3);
    /* 005988c3: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005988c6: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005988c9: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_005988cc:; BB(0x005988cc);
    /* 005988cc: cmp dword ptr [ebp - 0x20], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005988d0: jge 0x5988de */ if ((fS==fO)) goto L_005988de;
L_005988d2:; BB(0x005988d2);
    /* 005988d2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005988d5: mov word ptr [ebp + ecx*2 - 0x10], 0 */ W16((u32)(r_ebp+r_ecx*2+0xfffffff0u), 0x0u);
    /* 005988dc: jmp 0x5988c3 */ goto L_005988c3;
L_005988de:; BB(0x005988de);
    /* 005988de: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 005988e1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005988e2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005988e4: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005988e8: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 005988eb: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005988ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005988ef: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005988f2: imul ecx, ecx, 0xc */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xcu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005988f5: mov edx, dword ptr [ebp - 0xe4] */ r_edx = R32((u32)(r_ebp+0xffffff1cu));
    /* 005988fb: lea eax, [edx + ecx + 0xc8] */ r_eax = (u32)(r_edx+r_ecx+0xc8u);
    /* 00598902: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00598903: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00598905: call 0x462a40 */ r_esp -= 4; W32(r_esp, 0x59890au); f_00462a40();
    /* 0059890a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059890d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00598910: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00598911: mov ecx, dword ptr [ebp - 0xe4] */ r_ecx = R32((u32)(r_ebp+0xffffff1cu));
    /* 00598917: call 0x599020 */ r_esp -= 4; W32(r_esp, 0x59891cu); f_00599020();
    /* 0059891c: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0059891f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00598921: je 0x598c1f */ if (fZ) goto L_00598c1f;
L_00598927:; BB(0x00598927);
    /* 00598927: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0059892a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059892b: mov ecx, dword ptr [ebp - 0xe4] */ r_ecx = R32((u32)(r_ebp+0xffffff1cu));
    /* 00598931: call 0x597d90 */ r_esp -= 4; W32(r_esp, 0x598936u); f_00597d90();
    /* 00598936: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00598939: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059893b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059893d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059893f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00598942: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00598943: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00598946: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00598947: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0059894a: mov ecx, dword ptr [ebp - 0xe4] */ r_ecx = R32((u32)(r_ebp+0xffffff1cu));
    /* 00598950: mov ecx, dword ptr [ecx + eax*4 + 8] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 00598954: call 0x59a150 */ r_esp -= 4; W32(r_esp, 0x598959u); f_0059a150();
    /* 00598959: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059895b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0059895d: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 00598960: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00598961: call 0x462ba0 */ r_esp -= 4; W32(r_esp, 0x598966u); f_00462ba0();
    /* 00598966: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00598969: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0059896c: cmp dword ptr [ebp - 0x1c], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00598970: je 0x59898a */ if (fZ) goto L_0059898a;
L_00598972:; BB(0x00598972);
    /* 00598972: cmp dword ptr [ebp - 0x1c], 9 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00598976: je 0x59898a */ if (fZ) goto L_0059898a;
L_00598978:; BB(0x00598978);
    /* 00598978: cmp dword ptr [ebp - 0x1c], 8 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059897c: je 0x59898a */ if (fZ) goto L_0059898a;
L_0059897e:; BB(0x0059897e);
    /* 0059897e: mov dword ptr [ebp - 0xe8], 0 */ W32((u32)(r_ebp+0xffffff18u), 0x0u);
    /* 00598988: jmp 0x598994 */ goto L_00598994;
L_0059898a:; BB(0x0059898a);
    /* 0059898a: mov dword ptr [ebp - 0xe8], 1 */ W32((u32)(r_ebp+0xffffff18u), 0x1u);
L_00598994:; BB(0x00598994);
    /* 00598994: mov al, byte ptr [ebp - 0xe8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff18u))) & 0xffu);
    /* 0059899a: mov byte ptr [ebp - 0x21], al */ W8((u32)(r_ebp+0xffffffdfu), (u8)r_eax);
    /* 0059899d: movzx ecx, byte ptr [ebp - 0x21] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffdfu));
    /* 005989a1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005989a3: je 0x5989c5 */ if (fZ) goto L_005989c5;
L_005989a5:; BB(0x005989a5);
    /* 005989a5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005989a7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005989a9: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005989ac: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005989ad: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005989af: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005989b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005989b3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005989b6: mov edx, dword ptr [ebp - 0xe4] */ r_edx = R32((u32)(r_ebp+0xffffff1cu));
    /* 005989bc: mov ecx, dword ptr [edx + ecx*4 + 0xc] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0xcu));
    /* 005989c0: call 0x59a150 */ r_esp -= 4; W32(r_esp, 0x5989c5u); f_0059a150();
L_005989c5:; BB(0x005989c5);
    /* 005989c5: mov eax, dword ptr [ebp - 0xe4] */ r_eax = R32((u32)(r_ebp+0xffffff1cu));
    /* 005989cb: mov ecx, dword ptr [ebp - 0xe4] */ r_ecx = R32((u32)(r_ebp+0xffffff1cu));
    /* 005989d1: mov edx, dword ptr [eax + 0x124] */ r_edx = R32((u32)(r_eax+0x124u));
    /* 005989d7: cmp edx, dword ptr [ecx + 0x128] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x128u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005989dd: je 0x5989fa */ if (fZ) goto L_005989fa;
L_005989df:; BB(0x005989df);
    /* 005989df: mov eax, dword ptr [ebp - 0xe4] */ r_eax = R32((u32)(r_ebp+0xffffff1cu));
    /* 005989e5: cmp dword ptr [eax + 0x128], 0 */ {  u32 a = R32((u32)(r_eax+0x128u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005989ec: jne 0x5989fa */ if (!fZ) goto L_005989fa;
L_005989ee:; BB(0x005989ee);
    /* 005989ee: mov dword ptr [ebp - 0xec], 1 */ W32((u32)(r_ebp+0xffffff14u), 0x1u);
    /* 005989f8: jmp 0x598a04 */ goto L_00598a04;
L_005989fa:; BB(0x005989fa);
    /* 005989fa: mov dword ptr [ebp - 0xec], 0 */ W32((u32)(r_ebp+0xffffff14u), 0x0u);
L_00598a04:; BB(0x00598a04);
    /* 00598a04: mov cl, byte ptr [ebp - 0xec] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff14u))) & 0xffu);
    /* 00598a0a: mov byte ptr [ebp - 1], cl */ W8((u32)(r_ebp+0xffffffffu), (u8)r_ecx);
    /* 00598a0d: movzx edx, byte ptr [ebp - 1] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 00598a11: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00598a13: je 0x598a88 */ if (fZ) goto L_00598a88;
L_00598a15:; BB(0x00598a15);
    /* 00598a15: push 0xf4240 */ { u32 v = 0xf4240u; r_esp -= 4; W32(r_esp, v); }
    /* 00598a1a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00598a1c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00598a1f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00598a20: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x598a25u); f_005dcb00();
    /* 00598a25: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00598a28: mov ecx, eax */ r_ecx = r_eax;
    /* 00598a2a: call 0x5d70e0 */ r_esp -= 4; W32(r_esp, 0x598a2fu); f_005d70e0();
    /* 00598a2f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00598a32: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00598a33: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x598a38u); f_005dcb00();
    /* 00598a38: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00598a3b: mov dword ptr [ebp - 0xf0], eax */ W32((u32)(r_ebp+0xffffff10u), r_eax);
    /* 00598a41: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00598a43: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 00598a49: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00598a4b: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 00598a51: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00598a54: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x598a56u); call_ind(t); }
    /* 00598a56: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00598a58: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00598a5a: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x598a5fu); f_0064c8a0();
    /* 00598a5f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00598a62: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 00598a65: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 00598a68: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 00598a6b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00598a6c: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 00598a6f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00598a70: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00598a73: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00598a74: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x598a79u); f_005dcb00();
    /* 00598a79: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00598a7c: mov ecx, eax */ r_ecx = r_eax;
    /* 00598a7e: call 0x5d6050 */ r_esp -= 4; W32(r_esp, 0x598a83u); f_005d6050();
    /* 00598a83: jmp 0x598fdc */ goto L_00598fdc;
L_00598a88:; BB(0x00598a88);
    /* 00598a88: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00598a8a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00598a8c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00598a8e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00598a91: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00598a92: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00598a95: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00598a96: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00598a99: mov eax, dword ptr [ebp - 0xe4] */ r_eax = R32((u32)(r_ebp+0xffffff1cu));
    /* 00598a9f: mov ecx, dword ptr [eax + edx*4 + 0xc] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xcu));
    /* 00598aa3: call 0x59a150 */ r_esp -= 4; W32(r_esp, 0x598aa8u); f_0059a150();
    /* 00598aa8: movzx ecx, byte ptr [ebp - 0x21] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffdfu));
    /* 00598aac: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00598aae: je 0x598c1f */ if (fZ) goto L_00598c1f;
L_00598ab4:; BB(0x00598ab4);
    /* 00598ab4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00598ab6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00598ab8: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x598abdu); f_0064c8a0();
    /* 00598abd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00598ac0: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 00598ac3: mov dword ptr [ebp - 0x6c], edx */ W32((u32)(r_ebp+0xffffff94u), r_edx);
    /* 00598ac6: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 00598ac9: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 00598acc: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 00598acf: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00598ad2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00598ad4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00598ad6: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x598adbu); f_0064c8a0();
    /* 00598adb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00598ade: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 00598ae1: mov dword ptr [ebp - 0x74], edx */ W32((u32)(r_ebp+0xffffff8cu), r_edx);
    /* 00598ae4: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 00598ae7: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 00598aea: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 00598aed: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 00598af0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00598af2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00598af4: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x598af9u); f_0064c8a0();
    /* 00598af9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00598afc: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 00598aff: mov dword ptr [ebp - 0x7c], edx */ W32((u32)(r_ebp+0xffffff84u), r_edx);
    /* 00598b02: mov eax, dword ptr [ebp - 0x80] */ r_eax = R32((u32)(r_ebp+0xffffff80u));
    /* 00598b05: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00598b08: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 00598b0b: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00598b0e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00598b11: mov eax, dword ptr [ebp - 0xe4] */ r_eax = R32((u32)(r_ebp+0xffffff1cu));
    /* 00598b17: mov ecx, dword ptr [eax + edx*4 + 0xc] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xcu));
    /* 00598b1b: mov dword ptr [ebp - 0xd4], ecx */ W32((u32)(r_ebp+0xffffff2cu), r_ecx);
    /* 00598b21: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00598b24: shl edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00598b27: mov eax, dword ptr [ebp - 0xd4] */ r_eax = R32((u32)(r_ebp+0xffffff2cu));
    /* 00598b2d: lea ecx, [eax + edx + 0x48] */ r_ecx = (u32)(r_eax+r_edx+0x48u);
    /* 00598b31: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00598b33: shl edx, 3 */ { u32 c = (3u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00598b36: mov eax, dword ptr [ecx + edx] */ r_eax = R32((u32)(r_ecx+r_edx));
    /* 00598b39: mov ecx, dword ptr [ecx + edx + 4] */ r_ecx = R32((u32)(r_ecx+r_edx+0x4u));
    /* 00598b3d: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00598b40: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 00598b43: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00598b46: mov eax, dword ptr [ebp - 0xe4] */ r_eax = R32((u32)(r_ebp+0xffffff1cu));
    /* 00598b4c: mov ecx, dword ptr [eax + edx*4 + 0xc] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xcu));
    /* 00598b50: mov dword ptr [ebp - 0xd8], ecx */ W32((u32)(r_ebp+0xffffff28u), r_ecx);
    /* 00598b56: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00598b59: shl edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00598b5c: mov eax, dword ptr [ebp - 0xd8] */ r_eax = R32((u32)(r_ebp+0xffffff28u));
    /* 00598b62: lea ecx, [eax + edx + 0x48] */ r_ecx = (u32)(r_eax+r_edx+0x48u);
    /* 00598b66: mov edx, 1 */ r_edx = 0x1u;
    /* 00598b6b: shl edx, 3 */ { u32 c = (3u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00598b6e: mov eax, dword ptr [ecx + edx] */ r_eax = R32((u32)(r_ecx+r_edx));
    /* 00598b71: mov ecx, dword ptr [ecx + edx + 4] */ r_ecx = R32((u32)(r_ecx+r_edx+0x4u));
    /* 00598b75: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00598b78: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 00598b7b: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00598b7e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00598b7f: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00598b82: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00598b83: lea ecx, [ebp - 0x88] */ r_ecx = (u32)(r_ebp+0xffffff78u);
    /* 00598b89: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00598b8a: lea ecx, [ebp - 0x34] */ r_ecx = (u32)(r_ebp+0xffffffccu);
    /* 00598b8d: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x598b92u); f_0064c5c0();
    /* 00598b92: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00598b94: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00598b97: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 00598b9a: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00598b9d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00598b9f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00598ba2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00598ba3: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00598ba6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00598ba7: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00598baa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00598bab: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00598bae: mov edx, dword ptr [ebp - 0xe4] */ r_edx = R32((u32)(r_ebp+0xffffff1cu));
    /* 00598bb4: mov eax, dword ptr [edx + ecx*4 + 0xc] */ r_eax = R32((u32)(r_edx+r_ecx*4+0xcu));
    /* 00598bb8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00598bbb: mov edx, dword ptr [ebp - 0xe4] */ r_edx = R32((u32)(r_ebp+0xffffff1cu));
    /* 00598bc1: mov ecx, dword ptr [edx + ecx*4 + 0xc] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0xcu));
    /* 00598bc5: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00598bc7: mov edx, dword ptr [eax + 0xb8] */ r_edx = R32((u32)(r_eax+0xb8u));
    /* 00598bcd: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x598bcfu); call_ind(t); }
    /* 00598bcf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00598bd1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00598bd3: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x598bd8u); f_0064c8a0();
    /* 00598bd8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00598bdb: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 00598be1: mov dword ptr [ebp - 0x8c], edx */ W32((u32)(r_ebp+0xffffff74u), r_edx);
    /* 00598be7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00598be9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00598bec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00598bed: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 00598bf3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00598bf4: mov edx, dword ptr [ebp - 0x90] */ r_edx = R32((u32)(r_ebp+0xffffff70u));
    /* 00598bfa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00598bfb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00598bfe: mov ecx, dword ptr [ebp - 0xe4] */ r_ecx = R32((u32)(r_ebp+0xffffff1cu));
    /* 00598c04: mov edx, dword ptr [ecx + eax*4 + 0xc] */ r_edx = R32((u32)(r_ecx+r_eax*4+0xcu));
    /* 00598c08: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00598c0b: mov ecx, dword ptr [ebp - 0xe4] */ r_ecx = R32((u32)(r_ebp+0xffffff1cu));
    /* 00598c11: mov ecx, dword ptr [ecx + eax*4 + 0xc] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0xcu));
    /* 00598c15: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00598c17: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 00598c1d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x598c1fu); call_ind(t); }
L_00598c1f:; BB(0x00598c1f);
    /* 00598c1f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00598c22: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00598c23: mov ecx, dword ptr [ebp - 0xe4] */ r_ecx = R32((u32)(r_ebp+0xffffff1cu));
    /* 00598c29: call 0x598ff0 */ r_esp -= 4; W32(r_esp, 0x598c2eu); f_00598ff0();
    /* 00598c2e: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00598c31: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00598c33: je 0x598f12 */ if (fZ) goto L_00598f12;
L_00598c39:; BB(0x00598c39);
    /* 00598c39: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00598c3b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00598c3d: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 00598c40: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00598c41: call 0x462ba0 */ r_esp -= 4; W32(r_esp, 0x598c46u); f_00462ba0();
    /* 00598c46: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00598c49: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00598c4c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00598c4f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00598c50: mov ecx, dword ptr [ebp - 0xe4] */ r_ecx = R32((u32)(r_ebp+0xffffff1cu));
    /* 00598c56: call 0x599a70 */ r_esp -= 4; W32(r_esp, 0x598c5bu); f_00599a70();
    /* 00598c5b: mov byte ptr [ebp - 0x3d], al */ W8((u32)(r_ebp+0xffffffc3u), (u8)r_eax);
    /* 00598c5e: movzx edx, byte ptr [ebp - 0x3d] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffc3u));
    /* 00598c62: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00598c64: je 0x598c88 */ if (fZ) goto L_00598c88;
L_00598c66:; BB(0x00598c66);
    /* 00598c66: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00598c68: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00598c6a: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00598c6d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00598c6e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00598c70: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00598c73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00598c74: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00598c77: mov eax, dword ptr [ebp - 0xe4] */ r_eax = R32((u32)(r_ebp+0xffffff1cu));
    /* 00598c7d: mov ecx, dword ptr [eax + edx*4 + 0x10] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x10u));
    /* 00598c81: call 0x59a150 */ r_esp -= 4; W32(r_esp, 0x598c86u); f_0059a150();
    /* 00598c86: jmp 0x598ca8 */ goto L_00598ca8;
L_00598c88:; BB(0x00598c88);
    /* 00598c88: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00598c8a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00598c8c: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00598c8f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00598c90: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00598c92: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00598c95: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00598c96: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00598c99: mov ecx, dword ptr [ebp - 0xe4] */ r_ecx = R32((u32)(r_ebp+0xffffff1cu));
    /* 00598c9f: mov ecx, dword ptr [ecx + eax*4 + 0x10] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x10u));
    /* 00598ca3: call 0x59a150 */ r_esp -= 4; W32(r_esp, 0x598ca8u); f_0059a150();
L_00598ca8:; BB(0x00598ca8);
    /* 00598ca8: mov edx, dword ptr [ebp - 0xe4] */ r_edx = R32((u32)(r_ebp+0xffffff1cu));
    /* 00598cae: mov eax, dword ptr [ebp - 0xe4] */ r_eax = R32((u32)(r_ebp+0xffffff1cu));
    /* 00598cb4: mov ecx, dword ptr [edx + 0x124] */ r_ecx = R32((u32)(r_edx+0x124u));
    /* 00598cba: cmp ecx, dword ptr [eax + 0x128] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x128u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00598cc0: je 0x598cdd */ if (fZ) goto L_00598cdd;
L_00598cc2:; BB(0x00598cc2);
    /* 00598cc2: mov edx, dword ptr [ebp - 0xe4] */ r_edx = R32((u32)(r_ebp+0xffffff1cu));
    /* 00598cc8: cmp dword ptr [edx + 0x128], 0 */ {  u32 a = R32((u32)(r_edx+0x128u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00598ccf: jne 0x598cdd */ if (!fZ) goto L_00598cdd;
L_00598cd1:; BB(0x00598cd1);
    /* 00598cd1: mov dword ptr [ebp - 0xf4], 1 */ W32((u32)(r_ebp+0xffffff0cu), 0x1u);
    /* 00598cdb: jmp 0x598ce7 */ goto L_00598ce7;
L_00598cdd:; BB(0x00598cdd);
    /* 00598cdd: mov dword ptr [ebp - 0xf4], 0 */ W32((u32)(r_ebp+0xffffff0cu), 0x0u);
L_00598ce7:; BB(0x00598ce7);
    /* 00598ce7: mov al, byte ptr [ebp - 0xf4] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff0cu))) & 0xffu);
    /* 00598ced: mov byte ptr [ebp - 1], al */ W8((u32)(r_ebp+0xffffffffu), (u8)r_eax);
    /* 00598cf0: movzx ecx, byte ptr [ebp - 1] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 00598cf4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00598cf6: je 0x598d77 */ if (fZ) goto L_00598d77;
L_00598cf8:; BB(0x00598cf8);
    /* 00598cf8: push 0xf4240 */ { u32 v = 0xf4240u; r_esp -= 4; W32(r_esp, v); }
    /* 00598cfd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00598cff: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00598d02: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00598d03: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x598d08u); f_005dcb00();
    /* 00598d08: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00598d0b: mov ecx, eax */ r_ecx = r_eax;
    /* 00598d0d: call 0x5d70e0 */ r_esp -= 4; W32(r_esp, 0x598d12u); f_005d70e0();
    /* 00598d12: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00598d15: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00598d16: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x598d1bu); f_005dcb00();
    /* 00598d1b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00598d1e: mov dword ptr [ebp - 0xf8], eax */ W32((u32)(r_ebp+0xffffff08u), r_eax);
    /* 00598d24: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00598d26: mov ecx, dword ptr [ebp - 0xf8] */ r_ecx = R32((u32)(r_ebp+0xffffff08u));
    /* 00598d2c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00598d2e: mov ecx, dword ptr [ebp - 0xf8] */ r_ecx = R32((u32)(r_ebp+0xffffff08u));
    /* 00598d34: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00598d37: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x598d39u); call_ind(t); }
    /* 00598d39: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00598d3b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00598d3d: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x598d42u); f_0064c8a0();
    /* 00598d42: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00598d45: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 00598d4b: mov dword ptr [ebp - 0x94], edx */ W32((u32)(r_ebp+0xffffff6cu), r_edx);
    /* 00598d51: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 00598d57: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00598d58: mov edx, dword ptr [ebp - 0x98] */ r_edx = R32((u32)(r_ebp+0xffffff68u));
    /* 00598d5e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00598d5f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00598d62: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00598d63: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x598d68u); f_005dcb00();
    /* 00598d68: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00598d6b: mov ecx, eax */ r_ecx = r_eax;
    /* 00598d6d: call 0x5d6050 */ r_esp -= 4; W32(r_esp, 0x598d72u); f_005d6050();
    /* 00598d72: jmp 0x598fdc */ goto L_00598fdc;
L_00598d77:; BB(0x00598d77);
    /* 00598d77: movzx ecx, byte ptr [ebp - 0x3d] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffc3u));
    /* 00598d7b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00598d7d: je 0x598f12 */ if (fZ) goto L_00598f12;
L_00598d83:; BB(0x00598d83);
    /* 00598d83: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00598d85: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00598d87: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x598d8cu); f_0064c8a0();
    /* 00598d8c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00598d8f: mov dword ptr [ebp - 0xa0], eax */ W32((u32)(r_ebp+0xffffff60u), r_eax);
    /* 00598d95: mov dword ptr [ebp - 0x9c], edx */ W32((u32)(r_ebp+0xffffff64u), r_edx);
    /* 00598d9b: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 00598da1: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 00598da4: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 00598daa: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00598dad: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00598daf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00598db1: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x598db6u); f_0064c8a0();
    /* 00598db6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00598db9: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 00598dbf: mov dword ptr [ebp - 0xa4], edx */ W32((u32)(r_ebp+0xffffff5cu), r_edx);
    /* 00598dc5: mov ecx, dword ptr [ebp - 0xa8] */ r_ecx = R32((u32)(r_ebp+0xffffff58u));
    /* 00598dcb: mov dword ptr [ebp - 0x58], ecx */ W32((u32)(r_ebp+0xffffffa8u), r_ecx);
    /* 00598dce: mov edx, dword ptr [ebp - 0xa4] */ r_edx = R32((u32)(r_ebp+0xffffff5cu));
    /* 00598dd4: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 00598dd7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00598dd9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00598ddb: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x598de0u); f_0064c8a0();
    /* 00598de0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00598de3: mov dword ptr [ebp - 0xb0], eax */ W32((u32)(r_ebp+0xffffff50u), r_eax);
    /* 00598de9: mov dword ptr [ebp - 0xac], edx */ W32((u32)(r_ebp+0xffffff54u), r_edx);
    /* 00598def: mov eax, dword ptr [ebp - 0xb0] */ r_eax = R32((u32)(r_ebp+0xffffff50u));
    /* 00598df5: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 00598df8: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 00598dfe: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 00598e01: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00598e04: mov eax, dword ptr [ebp - 0xe4] */ r_eax = R32((u32)(r_ebp+0xffffff1cu));
    /* 00598e0a: mov ecx, dword ptr [eax + edx*4 + 0x10] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x10u));
    /* 00598e0e: mov dword ptr [ebp - 0xdc], ecx */ W32((u32)(r_ebp+0xffffff24u), r_ecx);
    /* 00598e14: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00598e17: shl edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00598e1a: mov eax, dword ptr [ebp - 0xdc] */ r_eax = R32((u32)(r_ebp+0xffffff24u));
    /* 00598e20: lea ecx, [eax + edx + 0x48] */ r_ecx = (u32)(r_eax+r_edx+0x48u);
    /* 00598e24: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00598e26: shl edx, 3 */ { u32 c = (3u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00598e29: mov eax, dword ptr [ecx + edx] */ r_eax = R32((u32)(r_ecx+r_edx));
    /* 00598e2c: mov ecx, dword ptr [ecx + edx + 4] */ r_ecx = R32((u32)(r_ecx+r_edx+0x4u));
    /* 00598e30: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 00598e33: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 00598e36: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00598e39: mov eax, dword ptr [ebp - 0xe4] */ r_eax = R32((u32)(r_ebp+0xffffff1cu));
    /* 00598e3f: mov ecx, dword ptr [eax + edx*4 + 0x10] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x10u));
    /* 00598e43: mov dword ptr [ebp - 0xe0], ecx */ W32((u32)(r_ebp+0xffffff20u), r_ecx);
    /* 00598e49: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00598e4c: shl edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00598e4f: mov eax, dword ptr [ebp - 0xe0] */ r_eax = R32((u32)(r_ebp+0xffffff20u));
    /* 00598e55: lea ecx, [eax + edx + 0x48] */ r_ecx = (u32)(r_eax+r_edx+0x48u);
    /* 00598e59: mov edx, 1 */ r_edx = 0x1u;
    /* 00598e5e: shl edx, 3 */ { u32 c = (3u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00598e61: mov eax, dword ptr [ecx + edx] */ r_eax = R32((u32)(r_ecx+r_edx));
    /* 00598e64: mov ecx, dword ptr [ecx + edx + 4] */ r_ecx = R32((u32)(r_ecx+r_edx+0x4u));
    /* 00598e68: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 00598e6b: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
    /* 00598e6e: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 00598e71: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00598e72: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00598e75: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00598e76: lea ecx, [ebp - 0xb8] */ r_ecx = (u32)(r_ebp+0xffffff48u);
    /* 00598e7c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00598e7d: lea ecx, [ebp - 0x48] */ r_ecx = (u32)(r_ebp+0xffffffb8u);
    /* 00598e80: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x598e85u); f_0064c5c0();
    /* 00598e85: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00598e87: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00598e8a: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 00598e8d: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00598e90: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00598e92: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00598e95: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00598e96: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00598e99: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00598e9a: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 00598e9d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00598e9e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00598ea1: mov edx, dword ptr [ebp - 0xe4] */ r_edx = R32((u32)(r_ebp+0xffffff1cu));
    /* 00598ea7: mov eax, dword ptr [edx + ecx*4 + 0x10] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x10u));
    /* 00598eab: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00598eae: mov edx, dword ptr [ebp - 0xe4] */ r_edx = R32((u32)(r_ebp+0xffffff1cu));
    /* 00598eb4: mov ecx, dword ptr [edx + ecx*4 + 0x10] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x10u));
    /* 00598eb8: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00598eba: mov edx, dword ptr [eax + 0xb8] */ r_edx = R32((u32)(r_eax+0xb8u));
    /* 00598ec0: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x598ec2u); call_ind(t); }
    /* 00598ec2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00598ec4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00598ec6: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x598ecbu); f_0064c8a0();
    /* 00598ecb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00598ece: mov dword ptr [ebp - 0xc0], eax */ W32((u32)(r_ebp+0xffffff40u), r_eax);
    /* 00598ed4: mov dword ptr [ebp - 0xbc], edx */ W32((u32)(r_ebp+0xffffff44u), r_edx);
    /* 00598eda: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00598edc: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00598edf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00598ee0: mov ecx, dword ptr [ebp - 0xbc] */ r_ecx = R32((u32)(r_ebp+0xffffff44u));
    /* 00598ee6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00598ee7: mov edx, dword ptr [ebp - 0xc0] */ r_edx = R32((u32)(r_ebp+0xffffff40u));
    /* 00598eed: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00598eee: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00598ef1: mov ecx, dword ptr [ebp - 0xe4] */ r_ecx = R32((u32)(r_ebp+0xffffff1cu));
    /* 00598ef7: mov edx, dword ptr [ecx + eax*4 + 0x10] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x10u));
    /* 00598efb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00598efe: mov ecx, dword ptr [ebp - 0xe4] */ r_ecx = R32((u32)(r_ebp+0xffffff1cu));
    /* 00598f04: mov ecx, dword ptr [ecx + eax*4 + 0x10] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x10u));
    /* 00598f08: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00598f0a: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 00598f10: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x598f12u); call_ind(t); }
L_00598f12:; BB(0x00598f12);
    /* 00598f12: mov ecx, dword ptr [ebp - 0xe4] */ r_ecx = R32((u32)(r_ebp+0xffffff1cu));
    /* 00598f18: mov edx, dword ptr [ebp - 0xe4] */ r_edx = R32((u32)(r_ebp+0xffffff1cu));
    /* 00598f1e: mov eax, dword ptr [ecx + 0x124] */ r_eax = R32((u32)(r_ecx+0x124u));
    /* 00598f24: cmp eax, dword ptr [edx + 0x128] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x128u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00598f2a: je 0x598f47 */ if (fZ) goto L_00598f47;
L_00598f2c:; BB(0x00598f2c);
    /* 00598f2c: mov ecx, dword ptr [ebp - 0xe4] */ r_ecx = R32((u32)(r_ebp+0xffffff1cu));
    /* 00598f32: cmp dword ptr [ecx + 0x128], 0 */ {  u32 a = R32((u32)(r_ecx+0x128u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00598f39: jne 0x598f47 */ if (!fZ) goto L_00598f47;
L_00598f3b:; BB(0x00598f3b);
    /* 00598f3b: mov dword ptr [ebp - 0xfc], 1 */ W32((u32)(r_ebp+0xffffff04u), 0x1u);
    /* 00598f45: jmp 0x598f51 */ goto L_00598f51;
L_00598f47:; BB(0x00598f47);
    /* 00598f47: mov dword ptr [ebp - 0xfc], 0 */ W32((u32)(r_ebp+0xffffff04u), 0x0u);
L_00598f51:; BB(0x00598f51);
    /* 00598f51: mov dl, byte ptr [ebp - 0xfc] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff04u))) & 0xffu);
    /* 00598f57: mov byte ptr [ebp - 1], dl */ W8((u32)(r_ebp+0xffffffffu), (u8)r_edx);
    /* 00598f5a: movzx eax, byte ptr [ebp - 1] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 00598f5e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00598f60: je 0x598fdc */ if (fZ) goto L_00598fdc;
L_00598f62:; BB(0x00598f62);
    /* 00598f62: push 0xf4240 */ { u32 v = 0xf4240u; r_esp -= 4; W32(r_esp, v); }
    /* 00598f67: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00598f69: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00598f6c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00598f6d: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x598f72u); f_005dcb00();
    /* 00598f72: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00598f75: mov ecx, eax */ r_ecx = r_eax;
    /* 00598f77: call 0x5d70e0 */ r_esp -= 4; W32(r_esp, 0x598f7cu); f_005d70e0();
    /* 00598f7c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00598f7f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00598f80: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x598f85u); f_005dcb00();
    /* 00598f85: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00598f88: mov dword ptr [ebp - 0x100], eax */ W32((u32)(r_ebp+0xffffff00u), r_eax);
    /* 00598f8e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00598f90: mov eax, dword ptr [ebp - 0x100] */ r_eax = R32((u32)(r_ebp+0xffffff00u));
    /* 00598f96: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00598f98: mov ecx, dword ptr [ebp - 0x100] */ r_ecx = R32((u32)(r_ebp+0xffffff00u));
    /* 00598f9e: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00598fa1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x598fa3u); call_ind(t); }
    /* 00598fa3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00598fa5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00598fa7: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x598facu); f_0064c8a0();
    /* 00598fac: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00598faf: mov dword ptr [ebp - 0xc8], eax */ W32((u32)(r_ebp+0xffffff38u), r_eax);
    /* 00598fb5: mov dword ptr [ebp - 0xc4], edx */ W32((u32)(r_ebp+0xffffff3cu), r_edx);
    /* 00598fbb: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 00598fc1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00598fc2: mov edx, dword ptr [ebp - 0xc8] */ r_edx = R32((u32)(r_ebp+0xffffff38u));
    /* 00598fc8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00598fc9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00598fcc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00598fcd: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x598fd2u); f_005dcb00();
    /* 00598fd2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00598fd5: mov ecx, eax */ r_ecx = r_eax;
    /* 00598fd7: call 0x5d6050 */ r_esp -= 4; W32(r_esp, 0x598fdcu); f_005d6050();
L_00598fdc:; BB(0x00598fdc);
    /* 00598fdc: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00598fdf: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00598fe1: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x598fe6u); f_00686d72();
    /* 00598fe6: mov esp, ebp */ r_esp = r_ebp;
    /* 00598fe8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00598fe9: ret 4 */ FN_RET(0x00598810); r_esp += 8; return;
}

void f_00598ff0(void) /* sub_598FF0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00598ff0);
    /* 00598ff0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00598ff1: mov ebp, esp */ r_ebp = r_esp;
    /* 00598ff3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00598ff6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00598ff9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00598ffc: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00598fff: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00599002: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00599004: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00599007: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00599008: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059900b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0059900e: mov ecx, dword ptr [eax + edx*4 + 0x10] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x10u));
    /* 00599012: call 0x5cb7d0 */ r_esp -= 4; W32(r_esp, 0x599017u); f_005cb7d0();
    /* 00599017: mov esp, ebp */ r_esp = r_ebp;
    /* 00599019: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059901a: ret 4 */ FN_RET(0x00598ff0); r_esp += 8; return;
}

