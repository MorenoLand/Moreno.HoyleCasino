#include "protos.h"

void f_004a1f30(void) /* PokerHandValue::func_004a1f30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004a1f30);
    /* 004a1f30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a1f31: mov ebp, esp */ r_ebp = r_esp;
    /* 004a1f33: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a1f36: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004a1f39: mov eax, dword ptr [0x7913d0] */ r_eax = R32((u32)(0x7913d0u));
    /* 004a1f3e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a1f3f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004a1f42: call 0x4a1fe0 */ r_esp -= 4; W32(r_esp, 0x4a1f47u); f_004a1fe0();
    /* 004a1f47: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004a1f4a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a1f4c: jne 0x4a1f62 */ if (!fZ) goto L_004a1f62;
L_004a1f4e:; BB(0x004a1f4e);
    /* 004a1f4e: push 0x74 */ { u32 v = 0x74u; r_esp -= 4; W32(r_esp, v); }
    /* 004a1f50: push 0x6be42c */ { u32 v = 0x6be42cu; r_esp -= 4; W32(r_esp, v); }
    /* 004a1f55: push 0x6be418 */ { u32 v = 0x6be418u; r_esp -= 4; W32(r_esp, v); }
    /* 004a1f5a: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4a1f5fu); f_005e9f20();
    /* 004a1f5f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004a1f62:; BB(0x004a1f62);
    /* 004a1f62: mov eax, dword ptr [0x7913b4] */ r_eax = R32((u32)(0x7913b4u));
    /* 004a1f67: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a1f68: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004a1f6b: call 0x4a1fb0 */ r_esp -= 4; W32(r_esp, 0x4a1f70u); f_004a1fb0();
    /* 004a1f70: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004a1f73: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a1f75: je 0x4a1f8b */ if (fZ) goto L_004a1f8b;
L_004a1f77:; BB(0x004a1f77);
    /* 004a1f77: mov edx, dword ptr [0x7907a4] */ r_edx = R32((u32)(0x7907a4u));
    /* 004a1f7d: mov al, byte ptr [edx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 004a1f7f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004a1f82: mov byte ptr [ecx], al */ W8((u32)(r_ecx), (u8)r_eax);
    /* 004a1f84: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004a1f87: jmp 0x4a1fa2 */ goto L_004a1fa2;
L_004a1f8b:; BB(0x004a1f8b);
    /* 004a1f8b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004a1f8e: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 004a1f91: sub eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004a1f94: mov byte ptr [ebp - 1], al */ W8((u32)(r_ebp+0xffffffffu), (u8)r_eax);
    /* 004a1f97: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004a1f9a: mov dl, byte ptr [ebp - 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffffu))) & 0xffu);
    /* 004a1f9d: mov byte ptr [ecx], dl */ W8((u32)(r_ecx), (u8)r_edx);
    /* 004a1f9f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
L_004a1fa2:; BB(0x004a1fa2);
    /* 004a1fa2: mov esp, ebp */ r_esp = r_ebp;
    /* 004a1fa4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a1fa5: ret 4 */ FN_RET(0x004a1f30); r_esp += 8; return;
}

void f_004a2160(void) /* PokerHandValue::func_004a2160 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004a2160);
    /* 004a2160: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a2161: mov ebp, esp */ r_ebp = r_esp;
    /* 004a2163: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a2166: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004a2169: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004a216c: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 004a216f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a2171: jne 0x4a218a */ if (!fZ) goto L_004a218a;
L_004a2173:; BB(0x004a2173);
    /* 004a2173: push 0x187 */ { u32 v = 0x187u; r_esp -= 4; W32(r_esp, v); }
    /* 004a2178: push 0x6be42c */ { u32 v = 0x6be42cu; r_esp -= 4; W32(r_esp, v); }
    /* 004a217d: push 0x6be44c */ { u32 v = 0x6be44cu; r_esp -= 4; W32(r_esp, v); }
    /* 004a2182: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4a2187u); f_005e9f20();
    /* 004a2187: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004a218a:; BB(0x004a218a);
    /* 004a218a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004a218d: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 004a2190: and ecx, 0xf0 */ {  u32 a = r_ecx; u32 b = 0xf0u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 004a2196: mov byte ptr [ebp - 1], cl */ W8((u32)(r_ebp+0xffffffffu), (u8)r_ecx);
    /* 004a2199: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004a219c: mov al, byte ptr [ebp - 1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffffu))) & 0xffu);
    /* 004a219f: mov byte ptr [edx], al */ W8((u32)(r_edx), (u8)r_eax);
    /* 004a21a1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004a21a4: mov esp, ebp */ r_esp = r_ebp;
    /* 004a21a6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a21a7: ret 4 */ FN_RET(0x004a2160); r_esp += 8; return;
}

void f_004a21b0(void) /* PokerHandValue::func_004a21b0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004a21b0);
    /* 004a21b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a21b1: mov ebp, esp */ r_ebp = r_esp;
    /* 004a21b3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a21b6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004a21b9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004a21bc: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 004a21bf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a21c1: jne 0x4a21da */ if (!fZ) goto L_004a21da;
L_004a21c3:; BB(0x004a21c3);
    /* 004a21c3: push 0x18e */ { u32 v = 0x18eu; r_esp -= 4; W32(r_esp, v); }
    /* 004a21c8: push 0x6be42c */ { u32 v = 0x6be42cu; r_esp -= 4; W32(r_esp, v); }
    /* 004a21cd: push 0x6be44c */ { u32 v = 0x6be44cu; r_esp -= 4; W32(r_esp, v); }
    /* 004a21d2: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4a21d7u); f_005e9f20();
    /* 004a21d7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004a21da:; BB(0x004a21da);
    /* 004a21da: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004a21dd: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 004a21e0: and ecx, 0xf */ {  u32 a = r_ecx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 004a21e3: mov byte ptr [ebp - 1], cl */ W8((u32)(r_ebp+0xffffffffu), (u8)r_ecx);
    /* 004a21e6: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004a21e9: mov al, byte ptr [ebp - 1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffffu))) & 0xffu);
    /* 004a21ec: mov byte ptr [edx], al */ W8((u32)(r_edx), (u8)r_eax);
    /* 004a21ee: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004a21f1: mov esp, ebp */ r_esp = r_ebp;
    /* 004a21f3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a21f4: ret 4 */ FN_RET(0x004a21b0); r_esp += 8; return;
}

void f_004a2200(void) /* PokerHandValue::func_004a2200 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004a2200);
    /* 004a2200: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a2201: mov ebp, esp */ r_ebp = r_esp;
    /* 004a2203: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a2206: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004a2209: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004a220c: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 004a220f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a2211: jne 0x4a222a */ if (!fZ) goto L_004a222a;
L_004a2213:; BB(0x004a2213);
    /* 004a2213: push 0x195 */ { u32 v = 0x195u; r_esp -= 4; W32(r_esp, v); }
    /* 004a2218: push 0x6be42c */ { u32 v = 0x6be42cu; r_esp -= 4; W32(r_esp, v); }
    /* 004a221d: push 0x6be44c */ { u32 v = 0x6be44cu; r_esp -= 4; W32(r_esp, v); }
    /* 004a2222: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4a2227u); f_005e9f20();
    /* 004a2227: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004a222a:; BB(0x004a222a);
    /* 004a222a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004a222d: movzx ecx, word ptr [eax + 2] */ r_ecx = (u32)R16((u32)(r_eax+0x2u));
    /* 004a2231: and ecx, 0xf000 */ {  u32 a = r_ecx; u32 b = 0xf000u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 004a2237: sar ecx, 0xc */ { u32 c = (12u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 004a223a: mov byte ptr [ebp - 1], cl */ W8((u32)(r_ebp+0xffffffffu), (u8)r_ecx);
    /* 004a223d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004a2240: mov al, byte ptr [ebp - 1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffffu))) & 0xffu);
    /* 004a2243: mov byte ptr [edx], al */ W8((u32)(r_edx), (u8)r_eax);
    /* 004a2245: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004a2248: mov esp, ebp */ r_esp = r_ebp;
    /* 004a224a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a224b: ret 4 */ FN_RET(0x004a2200); r_esp += 8; return;
}

void f_004a2250(void) /* PokerHandValue::func_004a2250 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004a2250);
    /* 004a2250: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a2251: mov ebp, esp */ r_ebp = r_esp;
    /* 004a2253: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a2256: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004a2259: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004a225c: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 004a225f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a2261: jne 0x4a227a */ if (!fZ) goto L_004a227a;
L_004a2263:; BB(0x004a2263);
    /* 004a2263: push 0x19c */ { u32 v = 0x19cu; r_esp -= 4; W32(r_esp, v); }
    /* 004a2268: push 0x6be42c */ { u32 v = 0x6be42cu; r_esp -= 4; W32(r_esp, v); }
    /* 004a226d: push 0x6be44c */ { u32 v = 0x6be44cu; r_esp -= 4; W32(r_esp, v); }
    /* 004a2272: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4a2277u); f_005e9f20();
    /* 004a2277: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004a227a:; BB(0x004a227a);
    /* 004a227a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004a227d: movzx ecx, word ptr [eax + 2] */ r_ecx = (u32)R16((u32)(r_eax+0x2u));
    /* 004a2281: and ecx, 0xf00 */ {  u32 a = r_ecx; u32 b = 0xf00u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 004a2287: sar ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 004a228a: mov byte ptr [ebp - 1], cl */ W8((u32)(r_ebp+0xffffffffu), (u8)r_ecx);
    /* 004a228d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004a2290: mov al, byte ptr [ebp - 1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffffu))) & 0xffu);
    /* 004a2293: mov byte ptr [edx], al */ W8((u32)(r_edx), (u8)r_eax);
    /* 004a2295: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004a2298: mov esp, ebp */ r_esp = r_ebp;
    /* 004a229a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a229b: ret 4 */ FN_RET(0x004a2250); r_esp += 8; return;
}

void f_004a22a0(void) /* PokerHandValue::func_004a22a0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004a22a0);
    /* 004a22a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a22a1: mov ebp, esp */ r_ebp = r_esp;
    /* 004a22a3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a22a6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004a22a9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004a22ac: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 004a22af: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a22b1: jne 0x4a22ca */ if (!fZ) goto L_004a22ca;
L_004a22b3:; BB(0x004a22b3);
    /* 004a22b3: push 0x1a3 */ { u32 v = 0x1a3u; r_esp -= 4; W32(r_esp, v); }
    /* 004a22b8: push 0x6be42c */ { u32 v = 0x6be42cu; r_esp -= 4; W32(r_esp, v); }
    /* 004a22bd: push 0x6be44c */ { u32 v = 0x6be44cu; r_esp -= 4; W32(r_esp, v); }
    /* 004a22c2: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4a22c7u); f_005e9f20();
    /* 004a22c7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004a22ca:; BB(0x004a22ca);
    /* 004a22ca: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004a22cd: movzx ecx, word ptr [eax + 2] */ r_ecx = (u32)R16((u32)(r_eax+0x2u));
    /* 004a22d1: and ecx, 0xf0 */ {  u32 a = r_ecx; u32 b = 0xf0u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 004a22d7: sar ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 004a22da: mov byte ptr [ebp - 1], cl */ W8((u32)(r_ebp+0xffffffffu), (u8)r_ecx);
    /* 004a22dd: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004a22e0: mov al, byte ptr [ebp - 1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffffu))) & 0xffu);
    /* 004a22e3: mov byte ptr [edx], al */ W8((u32)(r_edx), (u8)r_eax);
    /* 004a22e5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004a22e8: mov esp, ebp */ r_esp = r_ebp;
    /* 004a22ea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a22eb: ret 4 */ FN_RET(0x004a22a0); r_esp += 8; return;
}

void f_004a22f0(void) /* PokerHandValue::func_004a22f0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004a22f0);
    /* 004a22f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a22f1: mov ebp, esp */ r_ebp = r_esp;
    /* 004a22f3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a22f6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004a22f9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004a22fc: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 004a22ff: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a2301: jne 0x4a231a */ if (!fZ) goto L_004a231a;
L_004a2303:; BB(0x004a2303);
    /* 004a2303: push 0x1aa */ { u32 v = 0x1aau; r_esp -= 4; W32(r_esp, v); }
    /* 004a2308: push 0x6be42c */ { u32 v = 0x6be42cu; r_esp -= 4; W32(r_esp, v); }
    /* 004a230d: push 0x6be44c */ { u32 v = 0x6be44cu; r_esp -= 4; W32(r_esp, v); }
    /* 004a2312: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4a2317u); f_005e9f20();
    /* 004a2317: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004a231a:; BB(0x004a231a);
    /* 004a231a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004a231d: movzx ecx, word ptr [eax + 2] */ r_ecx = (u32)R16((u32)(r_eax+0x2u));
    /* 004a2321: and ecx, 0xf */ {  u32 a = r_ecx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 004a2324: mov byte ptr [ebp - 1], cl */ W8((u32)(r_ebp+0xffffffffu), (u8)r_ecx);
    /* 004a2327: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004a232a: mov al, byte ptr [ebp - 1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffffu))) & 0xffu);
    /* 004a232d: mov byte ptr [edx], al */ W8((u32)(r_edx), (u8)r_eax);
    /* 004a232f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004a2332: mov esp, ebp */ r_esp = r_ebp;
    /* 004a2334: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a2335: ret 4 */ FN_RET(0x004a22f0); r_esp += 8; return;
}

void f_004a2340(void) /* PokerHandValue::func_004a2340 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004a2340);
    /* 004a2340: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a2341: mov ebp, esp */ r_ebp = r_esp;
    /* 004a2343: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a2344: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004a2347: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004a234a: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 004a234d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a234f: jne 0x4a2368 */ if (!fZ) goto L_004a2368;
L_004a2351:; BB(0x004a2351);
    /* 004a2351: push 0x1b3 */ { u32 v = 0x1b3u; r_esp -= 4; W32(r_esp, v); }
    /* 004a2356: push 0x6be42c */ { u32 v = 0x6be42cu; r_esp -= 4; W32(r_esp, v); }
    /* 004a235b: push 0x6be44c */ { u32 v = 0x6be44cu; r_esp -= 4; W32(r_esp, v); }
    /* 004a2360: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4a2365u); f_005e9f20();
    /* 004a2365: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004a2368:; BB(0x004a2368);
    /* 004a2368: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004a236b: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 004a236e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a2370: jne 0x4a2389 */ if (!fZ) goto L_004a2389;
L_004a2372:; BB(0x004a2372);
    /* 004a2372: push 0x1b4 */ { u32 v = 0x1b4u; r_esp -= 4; W32(r_esp, v); }
    /* 004a2377: push 0x6be42c */ { u32 v = 0x6be42cu; r_esp -= 4; W32(r_esp, v); }
    /* 004a237c: push 0x6be468 */ { u32 v = 0x6be468u; r_esp -= 4; W32(r_esp, v); }
    /* 004a2381: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4a2386u); f_005e9f20();
    /* 004a2386: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004a2389:; BB(0x004a2389);
    /* 004a2389: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004a238c: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 004a238f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004a2392: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 004a2395: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a2397: jne 0x4a23b1 */ if (!fZ) goto L_004a23b1;
L_004a2399:; BB(0x004a2399);
    /* 004a2399: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004a239c: movzx edx, word ptr [ecx + 2] */ r_edx = (u32)R16((u32)(r_ecx+0x2u));
    /* 004a23a0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004a23a3: movzx ecx, word ptr [eax + 2] */ r_ecx = (u32)R16((u32)(r_eax+0x2u));
    /* 004a23a7: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a23a9: jne 0x4a23b1 */ if (!fZ) goto L_004a23b1;
L_004a23ab:; BB(0x004a23ab);
    /* 004a23ab: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 004a23ad: jmp 0x4a23b3 */ goto L_004a23b3;
L_004a23b1:; BB(0x004a23b1);
    /* 004a23b1: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_004a23b3:; BB(0x004a23b3);
    /* 004a23b3: mov esp, ebp */ r_esp = r_ebp;
    /* 004a23b5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a23b6: ret 4 */ FN_RET(0x004a2340); r_esp += 8; return;
}

void f_004a23c0(void) /* PokerHandValue::func_004a23c0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004a23c0);
    /* 004a23c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a23c1: mov ebp, esp */ r_ebp = r_esp;
    /* 004a23c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a23c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004a23c7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004a23ca: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 004a23cd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a23cf: jne 0x4a23e8 */ if (!fZ) goto L_004a23e8;
L_004a23d1:; BB(0x004a23d1);
    /* 004a23d1: push 0x1c1 */ { u32 v = 0x1c1u; r_esp -= 4; W32(r_esp, v); }
    /* 004a23d6: push 0x6be42c */ { u32 v = 0x6be42cu; r_esp -= 4; W32(r_esp, v); }
    /* 004a23db: push 0x6be44c */ { u32 v = 0x6be44cu; r_esp -= 4; W32(r_esp, v); }
    /* 004a23e0: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4a23e5u); f_005e9f20();
    /* 004a23e5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004a23e8:; BB(0x004a23e8);
    /* 004a23e8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004a23eb: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 004a23ee: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a23f0: jne 0x4a2409 */ if (!fZ) goto L_004a2409;
L_004a23f2:; BB(0x004a23f2);
    /* 004a23f2: push 0x1c2 */ { u32 v = 0x1c2u; r_esp -= 4; W32(r_esp, v); }
    /* 004a23f7: push 0x6be42c */ { u32 v = 0x6be42cu; r_esp -= 4; W32(r_esp, v); }
    /* 004a23fc: push 0x6be468 */ { u32 v = 0x6be468u; r_esp -= 4; W32(r_esp, v); }
    /* 004a2401: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4a2406u); f_005e9f20();
    /* 004a2406: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004a2409:; BB(0x004a2409);
    /* 004a2409: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004a240c: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 004a240f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004a2412: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 004a2415: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a2417: jne 0x4a242b */ if (!fZ) goto L_004a242b;
L_004a2419:; BB(0x004a2419);
    /* 004a2419: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004a241c: movzx edx, word ptr [ecx + 2] */ r_edx = (u32)R16((u32)(r_ecx+0x2u));
    /* 004a2420: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004a2423: movzx ecx, word ptr [eax + 2] */ r_ecx = (u32)R16((u32)(r_eax+0x2u));
    /* 004a2427: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a2429: je 0x4a2431 */ if (fZ) goto L_004a2431;
L_004a242b:; BB(0x004a242b);
    /* 004a242b: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 004a242d: jmp 0x4a2433 */ goto L_004a2433;
L_004a2431:; BB(0x004a2431);
    /* 004a2431: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_004a2433:; BB(0x004a2433);
    /* 004a2433: mov esp, ebp */ r_esp = r_ebp;
    /* 004a2435: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a2436: ret 4 */ FN_RET(0x004a23c0); r_esp += 8; return;
}

void f_004a2440(void) /* PokerHandValue::func_004a2440 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004a2440);
    /* 004a2440: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a2441: mov ebp, esp */ r_ebp = r_esp;
    /* 004a2443: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a2444: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004a2447: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004a244a: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 004a244d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a244f: jne 0x4a2468 */ if (!fZ) goto L_004a2468;
L_004a2451:; BB(0x004a2451);
    /* 004a2451: push 0x1cf */ { u32 v = 0x1cfu; r_esp -= 4; W32(r_esp, v); }
    /* 004a2456: push 0x6be42c */ { u32 v = 0x6be42cu; r_esp -= 4; W32(r_esp, v); }
    /* 004a245b: push 0x6be44c */ { u32 v = 0x6be44cu; r_esp -= 4; W32(r_esp, v); }
    /* 004a2460: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4a2465u); f_005e9f20();
    /* 004a2465: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004a2468:; BB(0x004a2468);
    /* 004a2468: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004a246b: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 004a246e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a2470: jne 0x4a2489 */ if (!fZ) goto L_004a2489;
L_004a2472:; BB(0x004a2472);
    /* 004a2472: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 004a2477: push 0x6be42c */ { u32 v = 0x6be42cu; r_esp -= 4; W32(r_esp, v); }
    /* 004a247c: push 0x6be468 */ { u32 v = 0x6be468u; r_esp -= 4; W32(r_esp, v); }
    /* 004a2481: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4a2486u); f_005e9f20();
    /* 004a2486: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004a2489:; BB(0x004a2489);
    /* 004a2489: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004a248c: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 004a248f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004a2492: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 004a2495: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a2497: jg 0x4a24bb */ if ((!fZ&&fS==fO)) goto L_004a24bb;
L_004a2499:; BB(0x004a2499);
    /* 004a2499: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004a249c: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 004a249f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004a24a2: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 004a24a5: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a24a7: jne 0x4a24c1 */ if (!fZ) goto L_004a24c1;
L_004a24a9:; BB(0x004a24a9);
    /* 004a24a9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004a24ac: movzx eax, word ptr [edx + 2] */ r_eax = (u32)R16((u32)(r_edx+0x2u));
    /* 004a24b0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004a24b3: movzx edx, word ptr [ecx + 2] */ r_edx = (u32)R16((u32)(r_ecx+0x2u));
    /* 004a24b7: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a24b9: jle 0x4a24c1 */ if ((fZ||fS!=fO)) goto L_004a24c1;
L_004a24bb:; BB(0x004a24bb);
    /* 004a24bb: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 004a24bd: jmp 0x4a24c3 */ goto L_004a24c3;
L_004a24c1:; BB(0x004a24c1);
    /* 004a24c1: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_004a24c3:; BB(0x004a24c3);
    /* 004a24c3: mov esp, ebp */ r_esp = r_ebp;
    /* 004a24c5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a24c6: ret 4 */ FN_RET(0x004a2440); r_esp += 8; return;
}

void f_004a24d0(void) /* PokerHandValue::func_004a24d0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004a24d0);
    /* 004a24d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a24d1: mov ebp, esp */ r_ebp = r_esp;
    /* 004a24d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a24d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004a24d7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004a24da: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 004a24dd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a24df: jne 0x4a24f8 */ if (!fZ) goto L_004a24f8;
L_004a24e1:; BB(0x004a24e1);
    /* 004a24e1: push 0x1de */ { u32 v = 0x1deu; r_esp -= 4; W32(r_esp, v); }
    /* 004a24e6: push 0x6be42c */ { u32 v = 0x6be42cu; r_esp -= 4; W32(r_esp, v); }
    /* 004a24eb: push 0x6be44c */ { u32 v = 0x6be44cu; r_esp -= 4; W32(r_esp, v); }
    /* 004a24f0: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4a24f5u); f_005e9f20();
    /* 004a24f5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004a24f8:; BB(0x004a24f8);
    /* 004a24f8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004a24fb: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 004a24fe: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a2500: jne 0x4a2519 */ if (!fZ) goto L_004a2519;
L_004a2502:; BB(0x004a2502);
    /* 004a2502: push 0x1df */ { u32 v = 0x1dfu; r_esp -= 4; W32(r_esp, v); }
    /* 004a2507: push 0x6be42c */ { u32 v = 0x6be42cu; r_esp -= 4; W32(r_esp, v); }
    /* 004a250c: push 0x6be468 */ { u32 v = 0x6be468u; r_esp -= 4; W32(r_esp, v); }
    /* 004a2511: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4a2516u); f_005e9f20();
    /* 004a2516: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004a2519:; BB(0x004a2519);
    /* 004a2519: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004a251c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a251d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004a2520: call 0x4a2340 */ r_esp -= 4; W32(r_esp, 0x4a2525u); f_004a2340();
    /* 004a2525: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004a2528: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a252a: jne 0x4a253f */ if (!fZ) goto L_004a253f;
L_004a252c:; BB(0x004a252c);
    /* 004a252c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004a252f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a2530: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004a2533: call 0x4a2440 */ r_esp -= 4; W32(r_esp, 0x4a2538u); f_004a2440();
    /* 004a2538: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004a253b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a253d: je 0x4a2545 */ if (fZ) goto L_004a2545;
L_004a253f:; BB(0x004a253f);
    /* 004a253f: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 004a2541: jmp 0x4a2547 */ goto L_004a2547;
L_004a2545:; BB(0x004a2545);
    /* 004a2545: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_004a2547:; BB(0x004a2547);
    /* 004a2547: mov esp, ebp */ r_esp = r_ebp;
    /* 004a2549: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a254a: ret 4 */ FN_RET(0x004a24d0); r_esp += 8; return;
}

