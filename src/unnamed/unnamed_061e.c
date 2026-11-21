#include "protos.h"

void f_0061e4f0(void) /* sub_61E4F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061e4f0);
    /* 0061e4f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061e4f1: mov ebp, esp */ r_ebp = r_esp;
    /* 0061e4f3: sub esp, 0x21c */ {  u32 a = r_esp; u32 b = 0x21cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061e4f9: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0061e4fe: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061e500: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0061e503: mov dword ptr [ebp - 0x21c], ecx */ W32((u32)(r_ebp+0xfffffde4u), r_ecx);
    /* 0061e509: mov eax, dword ptr [ebp - 0x21c] */ r_eax = R32((u32)(r_ebp+0xfffffde4u));
    /* 0061e50f: mov dword ptr [eax + 0x14c], 0 */ W32((u32)(r_eax+0x14cu), 0x0u);
    /* 0061e519: mov ecx, dword ptr [ebp - 0x21c] */ r_ecx = R32((u32)(r_ebp+0xfffffde4u));
    /* 0061e51f: mov ecx, dword ptr [ecx + 0x150] */ r_ecx = R32((u32)(r_ecx+0x150u));
    /* 0061e525: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061e528: call 0x62ac30 */ r_esp -= 4; W32(r_esp, 0x61e52du); f_0062ac30();
    /* 0061e52d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0061e530:; BB(0x0061e530);
    /* 0061e530: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e534: je 0x61e636 */ if (fZ) goto L_0061e636;
L_0061e53a:; BB(0x0061e53a);
    /* 0061e53a: mov edx, dword ptr [ebp - 0x21c] */ r_edx = R32((u32)(r_ebp+0xfffffde4u));
    /* 0061e540: add edx, 0x14c */ {  u32 a = r_edx; u32 b = 0x14cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061e546: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e547: mov eax, dword ptr [ebp - 0x21c] */ r_eax = R32((u32)(r_ebp+0xfffffde4u));
    /* 0061e54d: add eax, 0x158 */ {  u32 a = r_eax; u32 b = 0x158u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061e552: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061e553: mov ecx, dword ptr [ebp - 0x21c] */ r_ecx = R32((u32)(r_ebp+0xfffffde4u));
    /* 0061e559: mov edx, dword ptr [ecx + 0x34] */ r_edx = R32((u32)(r_ecx+0x34u));
    /* 0061e55c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e55d: mov eax, dword ptr [ebp - 0x21c] */ r_eax = R32((u32)(r_ebp+0xfffffde4u));
    /* 0061e563: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0061e566: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e567: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061e56a: call 0x62b220 */ r_esp -= 4; W32(r_esp, 0x61e56fu); f_0062b220();
    /* 0061e56f: mov edx, dword ptr [ebp - 0x21c] */ r_edx = R32((u32)(r_ebp+0xfffffde4u));
    /* 0061e575: cmp dword ptr [edx + 0x158], 0 */ {  u32 a = R32((u32)(r_edx+0x158u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e57c: je 0x61e5f8 */ if (fZ) goto L_0061e5f8;
L_0061e57e:; BB(0x0061e57e);
    /* 0061e57e: movzx eax, byte ptr [0x795fb2] */ r_eax = (u32)R8((u32)(0x795fb2u));
    /* 0061e585: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e587: je 0x61e5ef */ if (fZ) goto L_0061e5ef;
L_0061e589:; BB(0x0061e589);
    /* 0061e589: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061e58c: add ecx, 0x19 */ {  u32 a = r_ecx; u32 b = 0x19u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061e58f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e590: mov edx, dword ptr [ebp - 0x21c] */ r_edx = R32((u32)(r_ebp+0xfffffde4u));
    /* 0061e596: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 0061e599: sar eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0061e59c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061e59d: mov ecx, dword ptr [ebp - 0x21c] */ r_ecx = R32((u32)(r_ebp+0xfffffde4u));
    /* 0061e5a3: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 0061e5a6: sar edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0061e5a9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e5aa: mov eax, dword ptr [ebp - 0x21c] */ r_eax = R32((u32)(r_ebp+0xfffffde4u));
    /* 0061e5b0: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0061e5b3: sar ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0061e5b6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e5b7: mov edx, dword ptr [ebp - 0x21c] */ r_edx = R32((u32)(r_ebp+0xfffffde4u));
    /* 0061e5bd: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 0061e5c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061e5c1: mov ecx, dword ptr [ebp - 0x21c] */ r_ecx = R32((u32)(r_ebp+0xfffffde4u));
    /* 0061e5c7: mov edx, dword ptr [ecx + 0x34] */ r_edx = R32((u32)(r_ecx+0x34u));
    /* 0061e5ca: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e5cb: push 0x6d8c80 */ { u32 v = 0x6d8c80u; r_esp -= 4; W32(r_esp, v); }
    /* 0061e5d0: lea eax, [ebp - 0x110] */ r_eax = (u32)(r_ebp+0xfffffef0u);
    /* 0061e5d6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061e5d7: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x61e5ddu); call_ind(t); }
    /* 0061e5dd: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061e5e0: lea ecx, [ebp - 0x110] */ r_ecx = (u32)(r_ebp+0xfffffef0u);
    /* 0061e5e6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e5e7: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x61e5ecu); f_0062fde0();
    /* 0061e5ec: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0061e5ef:; BB(0x0061e5ef);
    /* 0061e5ef: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061e5f6: jmp 0x61e631 */ goto L_0061e631;
L_0061e5f8:; BB(0x0061e5f8);
    /* 0061e5f8: mov edx, dword ptr [ebp - 0x21c] */ r_edx = R32((u32)(r_ebp+0xfffffde4u));
    /* 0061e5fe: mov ecx, dword ptr [edx + 0x150] */ r_ecx = R32((u32)(r_edx+0x150u));
    /* 0061e604: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061e607: call 0x62ace0 */ r_esp -= 4; W32(r_esp, 0x61e60cu); f_0062ace0();
    /* 0061e60c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0061e60f: cmp dword ptr [0x7960d8], 0 */ {  u32 a = R32((u32)(0x7960d8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e616: je 0x61e631 */ if (fZ) goto L_0061e631;
L_0061e618:; BB(0x0061e618);
    /* 0061e618: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 0061e61d: cmp dword ptr [eax + 8], 0 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e621: je 0x61e631 */ if (fZ) goto L_0061e631;
L_0061e623:; BB(0x0061e623);
    /* 0061e623: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 0061e629: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 0061e62c: call 0x60acc0 */ r_esp -= 4; W32(r_esp, 0x61e631u); f_0060acc0();
L_0061e631:; BB(0x0061e631);
    /* 0061e631: jmp 0x61e530 */ goto L_0061e530;
L_0061e636:; BB(0x0061e636);
    /* 0061e636: mov edx, dword ptr [ebp - 0x21c] */ r_edx = R32((u32)(r_ebp+0xfffffde4u));
    /* 0061e63c: cmp dword ptr [edx + 0x158], 0 */ {  u32 a = R32((u32)(r_edx+0x158u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e643: jne 0x61e6af */ if (!fZ) goto L_0061e6af;
L_0061e645:; BB(0x0061e645);
    /* 0061e645: movzx eax, byte ptr [0x795fb2] */ r_eax = (u32)R8((u32)(0x795fb2u));
    /* 0061e64c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e64e: je 0x61e6af */ if (fZ) goto L_0061e6af;
L_0061e650:; BB(0x0061e650);
    /* 0061e650: mov ecx, dword ptr [ebp - 0x21c] */ r_ecx = R32((u32)(r_ebp+0xfffffde4u));
    /* 0061e656: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 0061e659: sar edx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0061e65c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e65d: mov eax, dword ptr [ebp - 0x21c] */ r_eax = R32((u32)(r_ebp+0xfffffde4u));
    /* 0061e663: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0061e666: sar ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0061e669: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e66a: mov edx, dword ptr [ebp - 0x21c] */ r_edx = R32((u32)(r_ebp+0xfffffde4u));
    /* 0061e670: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 0061e673: sar eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0061e676: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061e677: mov ecx, dword ptr [ebp - 0x21c] */ r_ecx = R32((u32)(r_ebp+0xfffffde4u));
    /* 0061e67d: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 0061e680: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e681: mov eax, dword ptr [ebp - 0x21c] */ r_eax = R32((u32)(r_ebp+0xfffffde4u));
    /* 0061e687: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0061e68a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e68b: push 0x6d8c58 */ { u32 v = 0x6d8c58u; r_esp -= 4; W32(r_esp, v); }
    /* 0061e690: lea edx, [ebp - 0x218] */ r_edx = (u32)(r_ebp+0xfffffde8u);
    /* 0061e696: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e697: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x61e69du); call_ind(t); }
    /* 0061e69d: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061e6a0: lea eax, [ebp - 0x218] */ r_eax = (u32)(r_ebp+0xfffffde8u);
    /* 0061e6a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061e6a7: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x61e6acu); f_0062fde0();
    /* 0061e6ac: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0061e6af:; BB(0x0061e6af);
    /* 0061e6af: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061e6b2: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0061e6b4: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x61e6b9u); f_00686d72();
    /* 0061e6b9: mov esp, ebp */ r_esp = r_ebp;
    /* 0061e6bb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061e6bc: ret  */ FN_RET(0x0061e4f0); r_esp += 4; return;
}

void f_0061e6c0(void) /* sub_61E6C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061e6c0);
    /* 0061e6c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061e6c1: mov ebp, esp */ r_ebp = r_esp;
    /* 0061e6c3: sub esp, 0x11c */ {  u32 a = r_esp; u32 b = 0x11cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061e6c9: mov dword ptr [ebp - 0x11c], ecx */ W32((u32)(r_ebp+0xfffffee4u), r_ecx);
    /* 0061e6cf: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0061e6d6: mov eax, dword ptr [ebp - 0x11c] */ r_eax = R32((u32)(r_ebp+0xfffffee4u));
    /* 0061e6dc: cmp dword ptr [eax + 0x30], 0x20584554 */ {  u32 a = R32((u32)(r_eax+0x30u)); u32 b = 0x20584554u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e6e3: jne 0x61e709 */ if (!fZ) goto L_0061e709;
L_0061e6e5:; BB(0x0061e6e5);
    /* 0061e6e5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061e6e7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061e6e9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061e6ec: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e6ed: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0061e6f3: call 0x616c20 */ r_esp -= 4; W32(r_esp, 0x61e6f8u); f_00616c20();
    /* 0061e6f8: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0061e6fb: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e6ff: je 0x61e709 */ if (fZ) goto L_0061e709;
L_0061e701:; BB(0x0061e701);
    /* 0061e701: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061e704: jmp 0x61ebbb */ goto L_0061ebbb;
L_0061e709:; BB(0x0061e709);
    /* 0061e709: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_0061e710:; BB(0x0061e710);
    /* 0061e710: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061e713: cmp dword ptr [edx*4 + 0x796400], 0 */ {  u32 a = R32((u32)(r_edx*4+0x796400u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e71b: je 0x61ebb8 */ if (fZ) goto L_0061ebb8;
L_0061e721:; BB(0x0061e721);
    /* 0061e721: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e725: jne 0x61ebb8 */ if (!fZ) goto L_0061ebb8;
L_0061e72b:; BB(0x0061e72b);
    /* 0061e72b: mov eax, dword ptr [ebp - 0x11c] */ r_eax = R32((u32)(r_ebp+0xfffffee4u));
    /* 0061e731: cmp dword ptr [eax + 0x150], 0 */ {  u32 a = R32((u32)(r_eax+0x150u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e738: je 0x61e85f */ if (fZ) goto L_0061e85f;
L_0061e73e:; BB(0x0061e73e);
    /* 0061e73e: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0061e744: mov ecx, dword ptr [ecx + 0x150] */ r_ecx = R32((u32)(r_ecx+0x150u));
    /* 0061e74a: call 0x6044e0 */ r_esp -= 4; W32(r_esp, 0x61e74fu); f_006044e0();
    /* 0061e74f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e751: je 0x61e85f */ if (fZ) goto L_0061e85f;
L_0061e757:; BB(0x0061e757);
    /* 0061e757: mov edx, dword ptr [ebp - 0x11c] */ r_edx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0061e75d: cmp dword ptr [edx + 0x34], 0 */ {  u32 a = R32((u32)(r_edx+0x34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e761: je 0x61e7d1 */ if (fZ) goto L_0061e7d1;
L_0061e763:; BB(0x0061e763);
    /* 0061e763: mov eax, dword ptr [ebp - 0x11c] */ r_eax = R32((u32)(r_ebp+0xfffffee4u));
    /* 0061e769: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0061e76c: sar ecx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0061e76f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e770: mov edx, dword ptr [ebp - 0x11c] */ r_edx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0061e776: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 0061e779: sar eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0061e77c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061e77d: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0061e783: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 0061e786: sar edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0061e789: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e78a: mov eax, dword ptr [ebp - 0x11c] */ r_eax = R32((u32)(r_ebp+0xfffffee4u));
    /* 0061e790: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0061e793: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e794: mov edx, dword ptr [ebp - 0x11c] */ r_edx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0061e79a: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 0061e79d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061e79e: push 0x5c */ { u32 v = 0x5cu; r_esp -= 4; W32(r_esp, v); }
    /* 0061e7a0: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0061e7a6: mov ecx, dword ptr [ecx + 0x150] */ r_ecx = R32((u32)(r_ecx+0x150u));
    /* 0061e7ac: call 0x6044e0 */ r_esp -= 4; W32(r_esp, 0x61e7b1u); f_006044e0();
    /* 0061e7b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061e7b2: push 0x5c */ { u32 v = 0x5cu; r_esp -= 4; W32(r_esp, v); }
    /* 0061e7b4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061e7b7: mov eax, dword ptr [edx*4 + 0x796400] */ r_eax = R32((u32)(r_edx*4+0x796400u));
    /* 0061e7be: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061e7bf: push 0x6d8d50 */ { u32 v = 0x6d8d50u; r_esp -= 4; W32(r_esp, v); }
    /* 0061e7c4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061e7c7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e7c8: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x61e7ceu); call_ind(t); }
    /* 0061e7ce: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0061e7d1:; BB(0x0061e7d1);
    /* 0061e7d1: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0061e7d6: mov edx, dword ptr [ebp - 0x11c] */ r_edx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0061e7dc: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061e7df: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e7e0: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x61e7e5u); f_00686ec0();
    /* 0061e7e5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061e7e8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e7ea: je 0x61e85a */ if (fZ) goto L_0061e85a;
L_0061e7ec:; BB(0x0061e7ec);
    /* 0061e7ec: mov eax, dword ptr [ebp - 0x11c] */ r_eax = R32((u32)(r_ebp+0xfffffee4u));
    /* 0061e7f2: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0061e7f5: sar ecx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0061e7f8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e7f9: mov edx, dword ptr [ebp - 0x11c] */ r_edx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0061e7ff: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 0061e802: sar eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0061e805: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061e806: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0061e80c: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 0061e80f: sar edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0061e812: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e813: mov eax, dword ptr [ebp - 0x11c] */ r_eax = R32((u32)(r_ebp+0xfffffee4u));
    /* 0061e819: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0061e81c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e81d: mov edx, dword ptr [ebp - 0x11c] */ r_edx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0061e823: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061e826: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e827: push 0x5c */ { u32 v = 0x5cu; r_esp -= 4; W32(r_esp, v); }
    /* 0061e829: mov eax, dword ptr [ebp - 0x11c] */ r_eax = R32((u32)(r_ebp+0xfffffee4u));
    /* 0061e82f: mov ecx, dword ptr [eax + 0x150] */ r_ecx = R32((u32)(r_eax+0x150u));
    /* 0061e835: call 0x6044e0 */ r_esp -= 4; W32(r_esp, 0x61e83au); f_006044e0();
    /* 0061e83a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061e83b: push 0x5c */ { u32 v = 0x5cu; r_esp -= 4; W32(r_esp, v); }
    /* 0061e83d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061e840: mov edx, dword ptr [ecx*4 + 0x796400] */ r_edx = R32((u32)(r_ecx*4+0x796400u));
    /* 0061e847: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e848: push 0x6d8d3c */ { u32 v = 0x6d8d3cu; r_esp -= 4; W32(r_esp, v); }
    /* 0061e84d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061e850: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061e851: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x61e857u); call_ind(t); }
    /* 0061e857: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0061e85a:; BB(0x0061e85a);
    /* 0061e85a: jmp 0x61e93a */ goto L_0061e93a;
L_0061e85f:; BB(0x0061e85f);
    /* 0061e85f: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0061e865: cmp dword ptr [ecx + 0x34], 0 */ {  u32 a = R32((u32)(r_ecx+0x34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e869: je 0x61e8c5 */ if (fZ) goto L_0061e8c5;
L_0061e86b:; BB(0x0061e86b);
    /* 0061e86b: mov edx, dword ptr [ebp - 0x11c] */ r_edx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0061e871: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 0061e874: sar eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0061e877: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061e878: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0061e87e: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 0061e881: sar edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0061e884: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e885: mov eax, dword ptr [ebp - 0x11c] */ r_eax = R32((u32)(r_ebp+0xfffffee4u));
    /* 0061e88b: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0061e88e: sar ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0061e891: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e892: mov edx, dword ptr [ebp - 0x11c] */ r_edx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0061e898: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 0061e89b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061e89c: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0061e8a2: mov edx, dword ptr [ecx + 0x34] */ r_edx = R32((u32)(r_ecx+0x34u));
    /* 0061e8a5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e8a6: push 0x5c */ { u32 v = 0x5cu; r_esp -= 4; W32(r_esp, v); }
    /* 0061e8a8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061e8ab: mov ecx, dword ptr [eax*4 + 0x796400] */ r_ecx = R32((u32)(r_eax*4+0x796400u));
    /* 0061e8b2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e8b3: push 0x6d8d2c */ { u32 v = 0x6d8d2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0061e8b8: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061e8bb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e8bc: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x61e8c2u); call_ind(t); }
    /* 0061e8c2: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0061e8c5:; BB(0x0061e8c5);
    /* 0061e8c5: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0061e8ca: mov eax, dword ptr [ebp - 0x11c] */ r_eax = R32((u32)(r_ebp+0xfffffee4u));
    /* 0061e8d0: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061e8d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061e8d4: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x61e8d9u); f_00686ec0();
    /* 0061e8d9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061e8dc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e8de: je 0x61e93a */ if (fZ) goto L_0061e93a;
L_0061e8e0:; BB(0x0061e8e0);
    /* 0061e8e0: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0061e8e6: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 0061e8e9: sar edx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0061e8ec: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e8ed: mov eax, dword ptr [ebp - 0x11c] */ r_eax = R32((u32)(r_ebp+0xfffffee4u));
    /* 0061e8f3: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0061e8f6: sar ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0061e8f9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e8fa: mov edx, dword ptr [ebp - 0x11c] */ r_edx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0061e900: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 0061e903: sar eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0061e906: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061e907: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0061e90d: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 0061e910: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e911: mov eax, dword ptr [ebp - 0x11c] */ r_eax = R32((u32)(r_ebp+0xfffffee4u));
    /* 0061e917: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061e91a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061e91b: push 0x5c */ { u32 v = 0x5cu; r_esp -= 4; W32(r_esp, v); }
    /* 0061e91d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061e920: mov edx, dword ptr [ecx*4 + 0x796400] */ r_edx = R32((u32)(r_ecx*4+0x796400u));
    /* 0061e927: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e928: push 0x6d8d1c */ { u32 v = 0x6d8d1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0061e92d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061e930: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061e931: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x61e937u); call_ind(t); }
    /* 0061e937: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0061e93a:; BB(0x0061e93a);
    /* 0061e93a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061e93d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e93e: call 0x5ea5b0 */ r_esp -= 4; W32(r_esp, 0x61e943u); f_005ea5b0();
    /* 0061e943: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061e946: push 0x6c2d28 */ { u32 v = 0x6c2d28u; r_esp -= 4; W32(r_esp, v); }
    /* 0061e94b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061e94e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e94f: call 0x5ea9c0 */ r_esp -= 4; W32(r_esp, 0x61e954u); f_005ea9c0();
    /* 0061e954: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061e957: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0061e95a: movzx eax, byte ptr [0x795f94] */ r_eax = (u32)R8((u32)(0x795f94u));
    /* 0061e961: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e963: jne 0x61ebaa */ if (!fZ) goto L_0061ebaa;
L_0061e969:; BB(0x0061e969);
    /* 0061e969: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e96d: jne 0x61ebaa */ if (!fZ) goto L_0061ebaa;
L_0061e973:; BB(0x0061e973);
    /* 0061e973: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0061e979: cmp dword ptr [ecx + 0x150], 0 */ {  u32 a = R32((u32)(r_ecx+0x150u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e980: je 0x61eaab */ if (fZ) goto L_0061eaab;
L_0061e986:; BB(0x0061e986);
    /* 0061e986: mov edx, dword ptr [ebp - 0x11c] */ r_edx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0061e98c: mov ecx, dword ptr [edx + 0x150] */ r_ecx = R32((u32)(r_edx+0x150u));
    /* 0061e992: call 0x6044e0 */ r_esp -= 4; W32(r_esp, 0x61e997u); f_006044e0();
    /* 0061e997: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e999: je 0x61eaab */ if (fZ) goto L_0061eaab;
L_0061e99f:; BB(0x0061e99f);
    /* 0061e99f: mov eax, dword ptr [ebp - 0x11c] */ r_eax = R32((u32)(r_ebp+0xfffffee4u));
    /* 0061e9a5: cmp dword ptr [eax + 0x34], 0 */ {  u32 a = R32((u32)(r_eax+0x34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e9a9: je 0x61ea1b */ if (fZ) goto L_0061ea1b;
L_0061e9ab:; BB(0x0061e9ab);
    /* 0061e9ab: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0061e9b1: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 0061e9b4: sar edx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0061e9b7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e9b8: mov eax, dword ptr [ebp - 0x11c] */ r_eax = R32((u32)(r_ebp+0xfffffee4u));
    /* 0061e9be: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0061e9c1: sar ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0061e9c4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e9c5: mov edx, dword ptr [ebp - 0x11c] */ r_edx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0061e9cb: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 0061e9ce: sar eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0061e9d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061e9d2: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0061e9d8: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 0061e9db: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e9dc: mov eax, dword ptr [ebp - 0x11c] */ r_eax = R32((u32)(r_ebp+0xfffffee4u));
    /* 0061e9e2: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0061e9e5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e9e6: push 0x5c */ { u32 v = 0x5cu; r_esp -= 4; W32(r_esp, v); }
    /* 0061e9e8: push 0x5c */ { u32 v = 0x5cu; r_esp -= 4; W32(r_esp, v); }
    /* 0061e9ea: mov edx, dword ptr [ebp - 0x11c] */ r_edx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0061e9f0: mov ecx, dword ptr [edx + 0x150] */ r_ecx = R32((u32)(r_edx+0x150u));
    /* 0061e9f6: call 0x6044e0 */ r_esp -= 4; W32(r_esp, 0x61e9fbu); f_006044e0();
    /* 0061e9fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061e9fc: push 0x5c */ { u32 v = 0x5cu; r_esp -= 4; W32(r_esp, v); }
    /* 0061e9fe: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061ea01: mov ecx, dword ptr [eax*4 + 0x796400] */ r_ecx = R32((u32)(r_eax*4+0x796400u));
    /* 0061ea08: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061ea09: push 0x6d8cfc */ { u32 v = 0x6d8cfcu; r_esp -= 4; W32(r_esp, v); }
    /* 0061ea0e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061ea11: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061ea12: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x61ea18u); call_ind(t); }
    /* 0061ea18: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0061ea1b:; BB(0x0061ea1b);
    /* 0061ea1b: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0061ea20: mov eax, dword ptr [ebp - 0x11c] */ r_eax = R32((u32)(r_ebp+0xfffffee4u));
    /* 0061ea26: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061ea29: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061ea2a: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x61ea2fu); f_00686ec0();
    /* 0061ea2f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061ea32: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061ea34: je 0x61eaa6 */ if (fZ) goto L_0061eaa6;
L_0061ea36:; BB(0x0061ea36);
    /* 0061ea36: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0061ea3c: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 0061ea3f: sar edx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0061ea42: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061ea43: mov eax, dword ptr [ebp - 0x11c] */ r_eax = R32((u32)(r_ebp+0xfffffee4u));
    /* 0061ea49: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0061ea4c: sar ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0061ea4f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061ea50: mov edx, dword ptr [ebp - 0x11c] */ r_edx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0061ea56: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 0061ea59: sar eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0061ea5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061ea5d: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0061ea63: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 0061ea66: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061ea67: mov eax, dword ptr [ebp - 0x11c] */ r_eax = R32((u32)(r_ebp+0xfffffee4u));
    /* 0061ea6d: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061ea70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061ea71: push 0x5c */ { u32 v = 0x5cu; r_esp -= 4; W32(r_esp, v); }
    /* 0061ea73: push 0x5c */ { u32 v = 0x5cu; r_esp -= 4; W32(r_esp, v); }
    /* 0061ea75: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0061ea7b: mov ecx, dword ptr [ecx + 0x150] */ r_ecx = R32((u32)(r_ecx+0x150u));
    /* 0061ea81: call 0x6044e0 */ r_esp -= 4; W32(r_esp, 0x61ea86u); f_006044e0();
    /* 0061ea86: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061ea87: push 0x5c */ { u32 v = 0x5cu; r_esp -= 4; W32(r_esp, v); }
    /* 0061ea89: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061ea8c: mov eax, dword ptr [edx*4 + 0x796400] */ r_eax = R32((u32)(r_edx*4+0x796400u));
    /* 0061ea93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061ea94: push 0x6d8cdc */ { u32 v = 0x6d8cdcu; r_esp -= 4; W32(r_esp, v); }
    /* 0061ea99: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061ea9c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061ea9d: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x61eaa3u); call_ind(t); }
    /* 0061eaa3: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0061eaa6:; BB(0x0061eaa6);
    /* 0061eaa6: jmp 0x61eb8a */ goto L_0061eb8a;
L_0061eaab:; BB(0x0061eaab);
    /* 0061eaab: mov edx, dword ptr [ebp - 0x11c] */ r_edx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0061eab1: cmp dword ptr [edx + 0x34], 0 */ {  u32 a = R32((u32)(r_edx+0x34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061eab5: je 0x61eb13 */ if (fZ) goto L_0061eb13;
L_0061eab7:; BB(0x0061eab7);
    /* 0061eab7: mov eax, dword ptr [ebp - 0x11c] */ r_eax = R32((u32)(r_ebp+0xfffffee4u));
    /* 0061eabd: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0061eac0: sar ecx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0061eac3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061eac4: mov edx, dword ptr [ebp - 0x11c] */ r_edx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0061eaca: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 0061eacd: sar eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0061ead0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061ead1: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0061ead7: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 0061eada: sar edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0061eadd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061eade: mov eax, dword ptr [ebp - 0x11c] */ r_eax = R32((u32)(r_ebp+0xfffffee4u));
    /* 0061eae4: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0061eae7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061eae8: mov edx, dword ptr [ebp - 0x11c] */ r_edx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0061eaee: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 0061eaf1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061eaf2: push 0x5c */ { u32 v = 0x5cu; r_esp -= 4; W32(r_esp, v); }
    /* 0061eaf4: push 0x5c */ { u32 v = 0x5cu; r_esp -= 4; W32(r_esp, v); }
    /* 0061eaf6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061eaf9: mov edx, dword ptr [ecx*4 + 0x796400] */ r_edx = R32((u32)(r_ecx*4+0x796400u));
    /* 0061eb00: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061eb01: push 0x6d8cc0 */ { u32 v = 0x6d8cc0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061eb06: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061eb09: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061eb0a: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x61eb10u); call_ind(t); }
    /* 0061eb10: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0061eb13:; BB(0x0061eb13);
    /* 0061eb13: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0061eb18: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0061eb1e: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061eb21: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061eb22: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x61eb27u); f_00686ec0();
    /* 0061eb27: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061eb2a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061eb2c: je 0x61eb8a */ if (fZ) goto L_0061eb8a;
L_0061eb2e:; BB(0x0061eb2e);
    /* 0061eb2e: mov edx, dword ptr [ebp - 0x11c] */ r_edx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0061eb34: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 0061eb37: sar eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0061eb3a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061eb3b: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0061eb41: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 0061eb44: sar edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0061eb47: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061eb48: mov eax, dword ptr [ebp - 0x11c] */ r_eax = R32((u32)(r_ebp+0xfffffee4u));
    /* 0061eb4e: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0061eb51: sar ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0061eb54: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061eb55: mov edx, dword ptr [ebp - 0x11c] */ r_edx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0061eb5b: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 0061eb5e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061eb5f: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0061eb65: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061eb68: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061eb69: push 0x5c */ { u32 v = 0x5cu; r_esp -= 4; W32(r_esp, v); }
    /* 0061eb6b: push 0x5c */ { u32 v = 0x5cu; r_esp -= 4; W32(r_esp, v); }
    /* 0061eb6d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061eb70: mov eax, dword ptr [edx*4 + 0x796400] */ r_eax = R32((u32)(r_edx*4+0x796400u));
    /* 0061eb77: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061eb78: push 0x6d8ca4 */ { u32 v = 0x6d8ca4u; r_esp -= 4; W32(r_esp, v); }
    /* 0061eb7d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061eb80: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061eb81: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x61eb87u); call_ind(t); }
    /* 0061eb87: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0061eb8a:; BB(0x0061eb8a);
    /* 0061eb8a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061eb8d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061eb8e: call 0x5ea5b0 */ r_esp -= 4; W32(r_esp, 0x61eb93u); f_005ea5b0();
    /* 0061eb93: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061eb96: push 0x6c2d28 */ { u32 v = 0x6c2d28u; r_esp -= 4; W32(r_esp, v); }
    /* 0061eb9b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061eb9e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061eb9f: call 0x5ea9c0 */ r_esp -= 4; W32(r_esp, 0x61eba4u); f_005ea9c0();
    /* 0061eba4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061eba7: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0061ebaa:; BB(0x0061ebaa);
    /* 0061ebaa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061ebad: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061ebb0: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061ebb3: jmp 0x61e710 */ goto L_0061e710;
L_0061ebb8:; BB(0x0061ebb8);
    /* 0061ebb8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
L_0061ebbb:; BB(0x0061ebbb);
    /* 0061ebbb: mov esp, ebp */ r_esp = r_ebp;
    /* 0061ebbd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061ebbe: ret 4 */ FN_RET(0x0061e6c0); r_esp += 8; return;
}

void f_0061edc0(void) /* sub_61EDC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061edc0);
    /* 0061edc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061edc1: mov ebp, esp */ r_ebp = r_esp;
    /* 0061edc3: sub esp, 0x21c */ {  u32 a = r_esp; u32 b = 0x21cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061edc9: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0061edce: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061edd0: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0061edd3: mov dword ptr [ebp - 0x21c], ecx */ W32((u32)(r_ebp+0xfffffde4u), r_ecx);
    /* 0061edd9: mov eax, dword ptr [ebp - 0x21c] */ r_eax = R32((u32)(r_ebp+0xfffffde4u));
    /* 0061eddf: mov dword ptr [eax + 0x14c], 0 */ W32((u32)(r_eax+0x14cu), 0x0u);
    /* 0061ede9: mov ecx, dword ptr [ebp - 0x21c] */ r_ecx = R32((u32)(r_ebp+0xfffffde4u));
    /* 0061edef: mov ecx, dword ptr [ecx + 0x150] */ r_ecx = R32((u32)(r_ecx+0x150u));
    /* 0061edf5: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061edf8: call 0x62ac30 */ r_esp -= 4; W32(r_esp, 0x61edfdu); f_0062ac30();
    /* 0061edfd: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0061ee00: mov edx, dword ptr [ebp - 0x21c] */ r_edx = R32((u32)(r_ebp+0xfffffde4u));
    /* 0061ee06: mov byte ptr [edx + 0x154], 0 */ W8((u32)(r_edx+0x154u), 0x0u);
L_0061ee0d:; BB(0x0061ee0d);
    /* 0061ee0d: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061ee11: je 0x61ef30 */ if (fZ) goto L_0061ef30;
L_0061ee17:; BB(0x0061ee17);
    /* 0061ee17: mov eax, dword ptr [ebp - 0x21c] */ r_eax = R32((u32)(r_ebp+0xfffffde4u));
    /* 0061ee1d: add eax, 0x144 */ {  u32 a = r_eax; u32 b = 0x144u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061ee22: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061ee23: mov ecx, dword ptr [ebp - 0x21c] */ r_ecx = R32((u32)(r_ebp+0xfffffde4u));
    /* 0061ee29: add ecx, 0x140 */ {  u32 a = r_ecx; u32 b = 0x140u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061ee2f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061ee30: mov edx, dword ptr [ebp - 0x21c] */ r_edx = R32((u32)(r_ebp+0xfffffde4u));
    /* 0061ee36: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 0061ee39: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061ee3a: mov ecx, dword ptr [ebp - 0x21c] */ r_ecx = R32((u32)(r_ebp+0xfffffde4u));
    /* 0061ee40: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 0061ee43: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061ee44: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061ee47: call 0x62b430 */ r_esp -= 4; W32(r_esp, 0x61ee4cu); f_0062b430();
    /* 0061ee4c: mov ecx, dword ptr [ebp - 0x21c] */ r_ecx = R32((u32)(r_ebp+0xfffffde4u));
    /* 0061ee52: mov dword ptr [ecx + 0x13c], eax */ W32((u32)(r_ecx+0x13cu), r_eax);
    /* 0061ee58: mov edx, dword ptr [ebp - 0x21c] */ r_edx = R32((u32)(r_ebp+0xfffffde4u));
    /* 0061ee5e: cmp dword ptr [edx + 0x13c], 0 */ {  u32 a = R32((u32)(r_edx+0x13cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061ee65: je 0x61eee1 */ if (fZ) goto L_0061eee1;
L_0061ee67:; BB(0x0061ee67);
    /* 0061ee67: movzx eax, byte ptr [0x795fb2] */ r_eax = (u32)R8((u32)(0x795fb2u));
    /* 0061ee6e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061ee70: je 0x61eed8 */ if (fZ) goto L_0061eed8;
L_0061ee72:; BB(0x0061ee72);
    /* 0061ee72: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061ee75: add ecx, 0x19 */ {  u32 a = r_ecx; u32 b = 0x19u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061ee78: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061ee79: mov edx, dword ptr [ebp - 0x21c] */ r_edx = R32((u32)(r_ebp+0xfffffde4u));
    /* 0061ee7f: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 0061ee82: sar eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0061ee85: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061ee86: mov ecx, dword ptr [ebp - 0x21c] */ r_ecx = R32((u32)(r_ebp+0xfffffde4u));
    /* 0061ee8c: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 0061ee8f: sar edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0061ee92: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061ee93: mov eax, dword ptr [ebp - 0x21c] */ r_eax = R32((u32)(r_ebp+0xfffffde4u));
    /* 0061ee99: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0061ee9c: sar ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0061ee9f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061eea0: mov edx, dword ptr [ebp - 0x21c] */ r_edx = R32((u32)(r_ebp+0xfffffde4u));
    /* 0061eea6: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 0061eea9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061eeaa: mov ecx, dword ptr [ebp - 0x21c] */ r_ecx = R32((u32)(r_ebp+0xfffffde4u));
    /* 0061eeb0: mov edx, dword ptr [ecx + 0x34] */ r_edx = R32((u32)(r_ecx+0x34u));
    /* 0061eeb3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061eeb4: push 0x6d8dd8 */ { u32 v = 0x6d8dd8u; r_esp -= 4; W32(r_esp, v); }
    /* 0061eeb9: lea eax, [ebp - 0x110] */ r_eax = (u32)(r_ebp+0xfffffef0u);
    /* 0061eebf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061eec0: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x61eec6u); call_ind(t); }
    /* 0061eec6: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061eec9: lea ecx, [ebp - 0x110] */ r_ecx = (u32)(r_ebp+0xfffffef0u);
    /* 0061eecf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061eed0: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x61eed5u); f_0062fde0();
    /* 0061eed5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0061eed8:; BB(0x0061eed8);
    /* 0061eed8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061eedf: jmp 0x61ef2b */ goto L_0061ef2b;
L_0061eee1:; BB(0x0061eee1);
    /* 0061eee1: mov edx, dword ptr [ebp - 0x21c] */ r_edx = R32((u32)(r_ebp+0xfffffde4u));
    /* 0061eee7: mov dword ptr [edx + 0x13c], 0 */ W32((u32)(r_edx+0x13cu), 0x0u);
    /* 0061eef1: mov eax, dword ptr [ebp - 0x21c] */ r_eax = R32((u32)(r_ebp+0xfffffde4u));
    /* 0061eef7: mov ecx, dword ptr [eax + 0x150] */ r_ecx = R32((u32)(r_eax+0x150u));
    /* 0061eefd: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061ef00: call 0x62ace0 */ r_esp -= 4; W32(r_esp, 0x61ef05u); f_0062ace0();
    /* 0061ef05: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0061ef08: cmp dword ptr [0x7960d8], 0 */ {  u32 a = R32((u32)(0x7960d8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061ef0f: je 0x61ef2b */ if (fZ) goto L_0061ef2b;
L_0061ef11:; BB(0x0061ef11);
    /* 0061ef11: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 0061ef17: cmp dword ptr [ecx + 8], 0 */ {  u32 a = R32((u32)(r_ecx+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061ef1b: je 0x61ef2b */ if (fZ) goto L_0061ef2b;
L_0061ef1d:; BB(0x0061ef1d);
    /* 0061ef1d: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 0061ef23: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 0061ef26: call 0x60acc0 */ r_esp -= 4; W32(r_esp, 0x61ef2bu); f_0060acc0();
L_0061ef2b:; BB(0x0061ef2b);
    /* 0061ef2b: jmp 0x61ee0d */ goto L_0061ee0d;
L_0061ef30:; BB(0x0061ef30);
    /* 0061ef30: mov eax, dword ptr [ebp - 0x21c] */ r_eax = R32((u32)(r_ebp+0xfffffde4u));
    /* 0061ef36: cmp dword ptr [eax + 0x13c], 0 */ {  u32 a = R32((u32)(r_eax+0x13cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061ef3d: jne 0x61efa9 */ if (!fZ) goto L_0061efa9;
L_0061ef3f:; BB(0x0061ef3f);
    /* 0061ef3f: movzx ecx, byte ptr [0x795fb2] */ r_ecx = (u32)R8((u32)(0x795fb2u));
    /* 0061ef46: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061ef48: je 0x61efa9 */ if (fZ) goto L_0061efa9;
L_0061ef4a:; BB(0x0061ef4a);
    /* 0061ef4a: mov edx, dword ptr [ebp - 0x21c] */ r_edx = R32((u32)(r_ebp+0xfffffde4u));
    /* 0061ef50: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 0061ef53: sar eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0061ef56: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061ef57: mov ecx, dword ptr [ebp - 0x21c] */ r_ecx = R32((u32)(r_ebp+0xfffffde4u));
    /* 0061ef5d: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 0061ef60: sar edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0061ef63: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061ef64: mov eax, dword ptr [ebp - 0x21c] */ r_eax = R32((u32)(r_ebp+0xfffffde4u));
    /* 0061ef6a: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0061ef6d: sar ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0061ef70: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061ef71: mov edx, dword ptr [ebp - 0x21c] */ r_edx = R32((u32)(r_ebp+0xfffffde4u));
    /* 0061ef77: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 0061ef7a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061ef7b: mov ecx, dword ptr [ebp - 0x21c] */ r_ecx = R32((u32)(r_ebp+0xfffffde4u));
    /* 0061ef81: mov edx, dword ptr [ecx + 0x34] */ r_edx = R32((u32)(r_ecx+0x34u));
    /* 0061ef84: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061ef85: push 0x6d8c58 */ { u32 v = 0x6d8c58u; r_esp -= 4; W32(r_esp, v); }
    /* 0061ef8a: lea eax, [ebp - 0x218] */ r_eax = (u32)(r_ebp+0xfffffde8u);
    /* 0061ef90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061ef91: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x61ef97u); call_ind(t); }
    /* 0061ef97: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061ef9a: lea ecx, [ebp - 0x218] */ r_ecx = (u32)(r_ebp+0xfffffde8u);
    /* 0061efa0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061efa1: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x61efa6u); f_0062fde0();
    /* 0061efa6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0061efa9:; BB(0x0061efa9);
    /* 0061efa9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061efac: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0061efae: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x61efb3u); f_00686d72();
    /* 0061efb3: mov esp, ebp */ r_esp = r_ebp;
    /* 0061efb5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061efb6: ret  */ FN_RET(0x0061edc0); r_esp += 4; return;
}

void f_0061efc0(void) /* sub_61EFC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061efc0);
    /* 0061efc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061efc1: mov ebp, esp */ r_ebp = r_esp;
    /* 0061efc3: sub esp, 0x384 */ {  u32 a = r_esp; u32 b = 0x384u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061efc9: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0061efce: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061efd0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0061efd3: mov dword ptr [ebp - 0x384], ecx */ W32((u32)(r_ebp+0xfffffc7cu), r_ecx);
    /* 0061efd9: mov byte ptr [ebp - 0x110], 0 */ W8((u32)(r_ebp+0xfffffef0u), 0x0u);
    /* 0061efe0: lea eax, [ebp - 0x110] */ r_eax = (u32)(r_ebp+0xfffffef0u);
    /* 0061efe6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061efe7: mov ecx, dword ptr [ebp - 0x384] */ r_ecx = R32((u32)(r_ebp+0xfffffc7cu));
    /* 0061efed: call 0x61e6c0 */ r_esp -= 4; W32(r_esp, 0x61eff2u); f_0061e6c0();
    /* 0061eff2: mov ecx, dword ptr [ebp - 0x384] */ r_ecx = R32((u32)(r_ebp+0xfffffc7cu));
    /* 0061eff8: mov dword ptr [ecx + 0x13c], eax */ W32((u32)(r_ecx+0x13cu), r_eax);
    /* 0061effe: mov edx, dword ptr [ebp - 0x384] */ r_edx = R32((u32)(r_ebp+0xfffffc7cu));
    /* 0061f004: cmp dword ptr [edx + 0x13c], 0 */ {  u32 a = R32((u32)(r_edx+0x13cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061f00b: je 0x61f0af */ if (fZ) goto L_0061f0af;
L_0061f011:; BB(0x0061f011);
    /* 0061f011: mov eax, dword ptr [ebp - 0x384] */ r_eax = R32((u32)(r_ebp+0xfffffc7cu));
    /* 0061f017: mov ecx, dword ptr [eax + 0x13c] */ r_ecx = R32((u32)(r_eax+0x13cu));
    /* 0061f01d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061f01e: call 0x5e9fd0 */ r_esp -= 4; W32(r_esp, 0x61f023u); f_005e9fd0();
    /* 0061f023: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061f026: mov edx, dword ptr [ebp - 0x384] */ r_edx = R32((u32)(r_ebp+0xfffffc7cu));
    /* 0061f02c: mov dword ptr [edx + 0x14c], eax */ W32((u32)(r_edx+0x14cu), r_eax);
    /* 0061f032: mov eax, dword ptr [ebp - 0x384] */ r_eax = R32((u32)(r_ebp+0xfffffc7cu));
    /* 0061f038: mov dword ptr [eax + 0x140], 0 */ W32((u32)(r_eax+0x140u), 0x0u);
    /* 0061f042: mov ecx, dword ptr [ebp - 0x384] */ r_ecx = R32((u32)(r_ebp+0xfffffc7cu));
    /* 0061f048: mov edx, dword ptr [ebp - 0x384] */ r_edx = R32((u32)(r_ebp+0xfffffc7cu));
    /* 0061f04e: mov eax, dword ptr [edx + 0x14c] */ r_eax = R32((u32)(r_edx+0x14cu));
    /* 0061f054: mov dword ptr [ecx + 0x144], eax */ W32((u32)(r_ecx+0x144u), r_eax);
    /* 0061f05a: mov ecx, dword ptr [ebp - 0x384] */ r_ecx = R32((u32)(r_ebp+0xfffffc7cu));
    /* 0061f060: mov dword ptr [ecx + 0x148], 0 */ W32((u32)(r_ecx+0x148u), 0x0u);
    /* 0061f06a: mov edx, dword ptr [ebp - 0x384] */ r_edx = R32((u32)(r_ebp+0xfffffc7cu));
    /* 0061f070: mov byte ptr [edx + 0x154], 1 */ W8((u32)(r_edx+0x154u), 0x1u);
    /* 0061f077: movzx eax, byte ptr [0x795fb2] */ r_eax = (u32)R8((u32)(0x795fb2u));
    /* 0061f07e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061f080: je 0x61f0ad */ if (fZ) goto L_0061f0ad;
L_0061f082:; BB(0x0061f082);
    /* 0061f082: lea ecx, [ebp - 0x110] */ r_ecx = (u32)(r_ebp+0xfffffef0u);
    /* 0061f088: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061f089: push 0x6d8dfc */ { u32 v = 0x6d8dfcu; r_esp -= 4; W32(r_esp, v); }
    /* 0061f08e: lea edx, [ebp - 0x248] */ r_edx = (u32)(r_ebp+0xfffffdb8u);
    /* 0061f094: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061f095: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x61f09bu); call_ind(t); }
    /* 0061f09b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061f09e: lea eax, [ebp - 0x248] */ r_eax = (u32)(r_ebp+0xfffffdb8u);
    /* 0061f0a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061f0a5: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x61f0aau); f_0062fde0();
    /* 0061f0aa: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0061f0ad:; BB(0x0061f0ad);
    /* 0061f0ad: jmp 0x61f119 */ goto L_0061f119;
L_0061f0af:; BB(0x0061f0af);
    /* 0061f0af: movzx ecx, byte ptr [0x795fb2] */ r_ecx = (u32)R8((u32)(0x795fb2u));
    /* 0061f0b6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061f0b8: je 0x61f119 */ if (fZ) goto L_0061f119;
L_0061f0ba:; BB(0x0061f0ba);
    /* 0061f0ba: mov edx, dword ptr [ebp - 0x384] */ r_edx = R32((u32)(r_ebp+0xfffffc7cu));
    /* 0061f0c0: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 0061f0c3: sar eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0061f0c6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061f0c7: mov ecx, dword ptr [ebp - 0x384] */ r_ecx = R32((u32)(r_ebp+0xfffffc7cu));
    /* 0061f0cd: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 0061f0d0: sar edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0061f0d3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061f0d4: mov eax, dword ptr [ebp - 0x384] */ r_eax = R32((u32)(r_ebp+0xfffffc7cu));
    /* 0061f0da: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0061f0dd: sar ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0061f0e0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061f0e1: mov edx, dword ptr [ebp - 0x384] */ r_edx = R32((u32)(r_ebp+0xfffffc7cu));
    /* 0061f0e7: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 0061f0ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061f0eb: mov ecx, dword ptr [ebp - 0x384] */ r_ecx = R32((u32)(r_ebp+0xfffffc7cu));
    /* 0061f0f1: mov edx, dword ptr [ecx + 0x34] */ r_edx = R32((u32)(r_ecx+0x34u));
    /* 0061f0f4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061f0f5: push 0x6d8d64 */ { u32 v = 0x6d8d64u; r_esp -= 4; W32(r_esp, v); }
    /* 0061f0fa: lea eax, [ebp - 0x380] */ r_eax = (u32)(r_ebp+0xfffffc80u);
    /* 0061f100: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061f101: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x61f107u); call_ind(t); }
    /* 0061f107: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061f10a: lea ecx, [ebp - 0x380] */ r_ecx = (u32)(r_ebp+0xfffffc80u);
    /* 0061f110: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061f111: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x61f116u); f_0062fde0();
    /* 0061f116: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0061f119:; BB(0x0061f119);
    /* 0061f119: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061f11c: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0061f11e: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x61f123u); f_00686d72();
    /* 0061f123: mov esp, ebp */ r_esp = r_ebp;
    /* 0061f125: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061f126: ret  */ FN_RET(0x0061efc0); r_esp += 4; return;
}

