#include "protos.h"

void f_0057f820(void) /* KenoTicketHand::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0057f820);
    /* 0057f820: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057f821: mov ebp, esp */ r_ebp = r_esp;
    /* 0057f823: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0057f825: push 0x6a6a7e */ { u32 v = 0x6a6a7eu; r_esp -= 4; W32(r_esp, v); }
    /* 0057f82a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0057f830: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057f831: sub esp, 0x100 */ {  u32 a = r_esp; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0057f837: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0057f83c: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0057f83e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057f83f: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0057f842: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0057f848: mov dword ptr [ebp - 0xcc], ecx */ W32((u32)(r_ebp+0xffffff34u), r_ecx);
    /* 0057f84e: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 0057f854: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x57f859u); f_005eaaf0();
    /* 0057f859: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0057f860: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 0057f866: mov dword ptr [eax], 0x6cc054 */ W32((u32)(r_eax), 0x6cc054u);
    /* 0057f86c: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 0057f872: mov dword ptr [ecx + 0x4078], 0 */ W32((u32)(r_ecx+0x4078u), 0x0u);
    /* 0057f87c: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 0057f882: mov dword ptr [edx + 0x407c], 0 */ W32((u32)(r_edx+0x407cu), 0x0u);
    /* 0057f88c: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0057f893: jmp 0x57f89e */ goto L_0057f89e;
L_0057f895:; BB(0x0057f895);
    /* 0057f895: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057f898: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0057f89b: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_0057f89e:; BB(0x0057f89e);
    /* 0057f89e: cmp dword ptr [ebp - 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057f8a2: jge 0x57f91a */ if ((fS==fO)) goto L_0057f91a;
L_0057f8a4:; BB(0x0057f8a4);
    /* 0057f8a4: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0057f8a9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057f8ac: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0057f8af: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 0057f8b5: lea eax, [edx + ecx + 0x39b8] */ r_eax = (u32)(r_edx+r_ecx+0x39b8u);
    /* 0057f8bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057f8bd: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x57f8c2u); f_00686d8e();
    /* 0057f8c2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057f8c5: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057f8c8: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 0057f8ce: mov dword ptr [edx + ecx*4 + 0x4068], 0 */ W32((u32)(r_edx+r_ecx*4+0x4068u), 0x0u);
    /* 0057f8d9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057f8dc: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 0057f8e2: mov dword ptr [ecx + eax*4 + 0x39f8], 0 */ W32((u32)(r_ecx+r_eax*4+0x39f8u), 0x0u);
    /* 0057f8ed: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057f8f0: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 0057f8f6: mov dword ptr [eax + edx*4 + 0x3a08], 0 */ W32((u32)(r_eax+r_edx*4+0x3a08u), 0x0u);
    /* 0057f901: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057f904: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 0057f90a: mov dword ptr [edx + ecx*4 + 0x3a18], 0 */ W32((u32)(r_edx+r_ecx*4+0x3a18u), 0x0u);
    /* 0057f915: jmp 0x57f895 */ goto L_0057f895;
L_0057f91a:; BB(0x0057f91a);
    /* 0057f91a: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0057f921: jmp 0x57f92c */ goto L_0057f92c;
L_0057f923:; BB(0x0057f923);
    /* 0057f923: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0057f926: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0057f929: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
L_0057f92c:; BB(0x0057f92c);
    /* 0057f92c: cmp dword ptr [ebp - 0x30], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057f930: jge 0x57f96e */ if ((fS==fO)) goto L_0057f96e;
L_0057f932:; BB(0x0057f932);
    /* 0057f932: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0057f939: jmp 0x57f944 */ goto L_0057f944;
L_0057f93b:; BB(0x0057f93b);
    /* 0057f93b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057f93e: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0057f941: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0057f944:; BB(0x0057f944);
    /* 0057f944: cmp dword ptr [ebp - 0x10], 0x64 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057f948: jge 0x57f96c */ if ((fS==fO)) goto L_0057f96c;
L_0057f94a:; BB(0x0057f94a);
    /* 0057f94a: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0057f94d: imul edx, edx, 0x190 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x190u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0057f953: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 0057f959: lea ecx, [eax + edx + 0x3a28] */ r_ecx = (u32)(r_eax+r_edx+0x3a28u);
    /* 0057f960: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057f963: mov dword ptr [ecx + edx*4], 0 */ W32((u32)(r_ecx+r_edx*4), 0x0u);
    /* 0057f96a: jmp 0x57f93b */ goto L_0057f93b;
L_0057f96c:; BB(0x0057f96c);
    /* 0057f96c: jmp 0x57f923 */ goto L_0057f923;
L_0057f96e:; BB(0x0057f96e);
    /* 0057f96e: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0057f975: jmp 0x57f980 */ goto L_0057f980;
L_0057f977:; BB(0x0057f977);
    /* 0057f977: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057f97a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0057f97d: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_0057f980:; BB(0x0057f980);
    /* 0057f980: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0057f986: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0057f988: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0057f98e: mov eax, dword ptr [edx + 0x10c] */ r_eax = R32((u32)(r_edx+0x10cu));
    /* 0057f994: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57f996u); call_ind(t); }
    /* 0057f996: cmp dword ptr [ebp - 0x10], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057f999: jge 0x57fb38 */ if ((fS==fO)) goto L_0057fb38;
L_0057f99f:; BB(0x0057f99f);
    /* 0057f99f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057f9a2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057f9a3: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x57f9a8u); f_005dcb00();
    /* 0057f9a8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057f9ab: mov dword ptr [ebp - 0xbc], eax */ W32((u32)(r_ebp+0xffffff44u), r_eax);
    /* 0057f9b1: mov ecx, dword ptr [ebp - 0xbc] */ r_ecx = R32((u32)(r_ebp+0xffffff44u));
    /* 0057f9b7: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x57f9bcu); f_0063aac0();
    /* 0057f9bc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0057f9be: mov dword ptr [ebp - 0xb4], edx */ W32((u32)(r_ebp+0xffffff4cu), r_edx);
    /* 0057f9c4: cmp dword ptr [ebp - 0xb4], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff4cu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057f9cb: je 0x57f9f5 */ if (fZ) goto L_0057f9f5;
L_0057f9cd:; BB(0x0057f9cd);
    /* 0057f9cd: mov ecx, dword ptr [ebp - 0xbc] */ r_ecx = R32((u32)(r_ebp+0xffffff44u));
    /* 0057f9d3: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x57f9d8u); f_0063aac0();
    /* 0057f9d8: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0057f9da: mov dword ptr [ebp - 0xb8], eax */ W32((u32)(r_ebp+0xffffff48u), r_eax);
    /* 0057f9e0: cmp dword ptr [ebp - 0xb8], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff48u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057f9e7: je 0x57f9f5 */ if (fZ) goto L_0057f9f5;
L_0057f9e9:; BB(0x0057f9e9);
    /* 0057f9e9: mov dword ptr [ebp - 0xd0], 0 */ W32((u32)(r_ebp+0xffffff30u), 0x0u);
    /* 0057f9f3: jmp 0x57f9ff */ goto L_0057f9ff;
L_0057f9f5:; BB(0x0057f9f5);
    /* 0057f9f5: mov dword ptr [ebp - 0xd0], 1 */ W32((u32)(r_ebp+0xffffff30u), 0x1u);
L_0057f9ff:; BB(0x0057f9ff);
    /* 0057f9ff: movzx ecx, byte ptr [ebp - 0xd0] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffff30u));
    /* 0057fa06: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057fa08: je 0x57fb33 */ if (fZ) goto L_0057fb33;
L_0057fa0e:; BB(0x0057fa0e);
    /* 0057fa0e: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 0057fa14: cmp dword ptr [edx + 0x4078], 3 */ {  u32 a = R32((u32)(r_edx+0x4078u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057fa1b: jge 0x57fa4c */ if ((fS==fO)) goto L_0057fa4c;
L_0057fa1d:; BB(0x0057fa1d);
    /* 0057fa1d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057fa20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057fa21: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x57fa26u); f_005dcb00();
    /* 0057fa26: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057fa29: mov ecx, eax */ r_ecx = r_eax;
    /* 0057fa2b: call 0x5d5780 */ r_esp -= 4; W32(r_esp, 0x57fa30u); f_005d5780();
    /* 0057fa30: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0057fa33: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 0057fa39: mov eax, dword ptr [edx + 0x4078] */ r_eax = R32((u32)(r_edx+0x4078u));
    /* 0057fa3f: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 0057fa45: mov dword ptr [edx + eax*4 + 0x4068], ecx */ W32((u32)(r_edx+r_eax*4+0x4068u), r_ecx);
L_0057fa4c:; BB(0x0057fa4c);
    /* 0057fa4c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057fa4f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057fa50: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x57fa55u); f_005dcb00();
    /* 0057fa55: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057fa58: mov dword ptr [ebp - 0xc0], eax */ W32((u32)(r_ebp+0xffffff40u), r_eax);
    /* 0057fa5e: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 0057fa64: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x57fa69u); f_0063aac0();
    /* 0057fa69: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0057fa6c: mov dword ptr [ebp - 0xc4], eax */ W32((u32)(r_ebp+0xffffff3cu), r_eax);
    /* 0057fa72: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 0057fa78: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057fa79: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 0057fa7f: mov eax, dword ptr [edx + 0x4078] */ r_eax = R32((u32)(r_edx+0x4078u));
    /* 0057fa85: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0057fa88: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 0057fa8e: lea edx, [ecx + eax + 0x39b8] */ r_edx = (u32)(r_ecx+r_eax+0x39b8u);
    /* 0057fa95: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057fa96: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x57fa9bu); f_00686ec0();
    /* 0057fa9b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057fa9e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057faa0: je 0x57fb0f */ if (fZ) goto L_0057fb0f;
L_0057faa2:; BB(0x0057faa2);
    /* 0057faa2: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 0057faa8: mov ecx, dword ptr [eax + 0x4078] */ r_ecx = R32((u32)(r_eax+0x4078u));
    /* 0057faae: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0057fab1: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 0057fab7: lea eax, [edx + ecx + 0x39b8] */ r_eax = (u32)(r_edx+r_ecx+0x39b8u);
    /* 0057fabe: mov dword ptr [ebp - 0xd4], eax */ W32((u32)(r_ebp+0xffffff2cu), r_eax);
    /* 0057fac4: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 0057faca: mov edx, dword ptr [ecx + 0x4078] */ r_edx = R32((u32)(r_ecx+0x4078u));
    /* 0057fad0: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0057fad3: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 0057fad9: mov dword ptr [eax + 0x4078], edx */ W32((u32)(r_eax+0x4078u), r_edx);
    /* 0057fadf: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057fae2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057fae3: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x57fae8u); f_005dcb00();
    /* 0057fae8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057faeb: mov dword ptr [ebp - 0xc8], eax */ W32((u32)(r_ebp+0xffffff38u), r_eax);
    /* 0057faf1: mov ecx, dword ptr [ebp - 0xc8] */ r_ecx = R32((u32)(r_ebp+0xffffff38u));
    /* 0057faf7: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x57fafcu); f_0063aac0();
    /* 0057fafc: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0057faff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057fb00: mov edx, dword ptr [ebp - 0xd4] */ r_edx = R32((u32)(r_ebp+0xffffff2cu));
    /* 0057fb06: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057fb07: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x57fb0cu); f_00686d8e();
    /* 0057fb0c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0057fb0f:; BB(0x0057fb0f);
    /* 0057fb0f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057fb12: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057fb13: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x57fb18u); f_005dcb00();
    /* 0057fb18: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057fb1b: mov ecx, eax */ r_ecx = r_eax;
    /* 0057fb1d: call 0x5d5780 */ r_esp -= 4; W32(r_esp, 0x57fb22u); f_005d5780();
    /* 0057fb22: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0057fb25: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057fb26: push 0x6cc044 */ { u32 v = 0x6cc044u; r_esp -= 4; W32(r_esp, v); }
    /* 0057fb2b: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x57fb30u); f_0062fde0();
    /* 0057fb30: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0057fb33:; BB(0x0057fb33);
    /* 0057fb33: jmp 0x57f977 */ goto L_0057f977;
L_0057fb38:; BB(0x0057fb38);
    /* 0057fb38: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0057fb3f: jmp 0x57fb4a */ goto L_0057fb4a;
L_0057fb41:; BB(0x0057fb41);
    /* 0057fb41: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057fb44: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0057fb47: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_0057fb4a:; BB(0x0057fb4a);
    /* 0057fb4a: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 0057fb50: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057fb53: cmp ecx, dword ptr [eax + 0x4078] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4078u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057fb59: jge 0x57fb95 */ if ((fS==fO)) goto L_0057fb95;
L_0057fb5b:; BB(0x0057fb5b);
    /* 0057fb5b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0057fb5d: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057fb60: imul edx, edx, 0xe10 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xe10u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0057fb66: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 0057fb6c: lea ecx, [eax + edx + 0x178] */ r_ecx = (u32)(r_eax+r_edx+0x178u);
    /* 0057fb73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057fb74: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057fb77: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0057fb7a: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 0057fb80: lea ecx, [eax + edx + 0x39b8] */ r_ecx = (u32)(r_eax+r_edx+0x39b8u);
    /* 0057fb87: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057fb88: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0057fb8e: call 0x5e2b90 */ r_esp -= 4; W32(r_esp, 0x57fb93u); f_005e2b90();
    /* 0057fb93: jmp 0x57fb41 */ goto L_0057fb41;
L_0057fb95:; BB(0x0057fb95);
    /* 0057fb95: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 0057fb9b: mov eax, dword ptr [edx + 0x98] */ r_eax = R32((u32)(r_edx+0x98u));
    /* 0057fba1: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0057fba4: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0057fbab: jmp 0x57fbb6 */ goto L_0057fbb6;
L_0057fbad:; BB(0x0057fbad);
    /* 0057fbad: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057fbb0: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0057fbb3: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0057fbb6:; BB(0x0057fbb6);
    /* 0057fbb6: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 0057fbbc: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057fbbf: cmp eax, dword ptr [edx + 0x4078] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4078u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057fbc5: jge 0x57fd35 */ if ((fS==fO)) goto L_0057fd35;
L_0057fbcb:; BB(0x0057fbcb);
    /* 0057fbcb: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0057fbd2: jmp 0x57fbdd */ goto L_0057fbdd;
L_0057fbd4:; BB(0x0057fbd4);
    /* 0057fbd4: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0057fbd7: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0057fbda: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
L_0057fbdd:; BB(0x0057fbdd);
    /* 0057fbdd: cmp dword ptr [ebp - 0x30], 0x64 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057fbe1: jge 0x57fd30 */ if ((fS==fO)) goto L_0057fd30;
L_0057fbe7:; BB(0x0057fbe7);
    /* 0057fbe7: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057fbea: imul edx, edx, 0xe10 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xe10u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0057fbf0: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 0057fbf6: lea ecx, [eax + edx + 0x178] */ r_ecx = (u32)(r_eax+r_edx+0x178u);
    /* 0057fbfd: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0057fc00: imul edx, edx, 0x24 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x24u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0057fc03: cmp dword ptr [ecx + edx + 0x1c], 0 */ {  u32 a = R32((u32)(r_ecx+r_edx+0x1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057fc08: je 0x57fd2b */ if (fZ) goto L_0057fd2b;
L_0057fc0e:; BB(0x0057fc0e);
    /* 0057fc0e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057fc11: imul eax, eax, 0xe10 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xe10u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0057fc17: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 0057fc1d: lea edx, [ecx + eax + 0x178] */ r_edx = (u32)(r_ecx+r_eax+0x178u);
    /* 0057fc24: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0057fc27: imul eax, eax, 0x24 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x24u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0057fc2a: movsx ecx, byte ptr [edx + eax + 4] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+r_eax+0x4u));
    /* 0057fc2f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057fc31: jne 0x57fd2b */ if (!fZ) goto L_0057fd2b;
L_0057fc37:; BB(0x0057fc37);
    /* 0057fc37: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057fc3a: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 0057fc40: mov ecx, dword ptr [eax + edx*4 + 0x3a08] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x3a08u));
    /* 0057fc47: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0057fc4a: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057fc4d: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 0057fc53: mov dword ptr [eax + edx*4 + 0x3a08], ecx */ W32((u32)(r_eax+r_edx*4+0x3a08u), r_ecx);
    /* 0057fc5a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057fc5d: imul ecx, ecx, 0xe10 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xe10u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0057fc63: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 0057fc69: lea eax, [edx + ecx + 0x178] */ r_eax = (u32)(r_edx+r_ecx+0x178u);
    /* 0057fc70: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0057fc73: imul ecx, ecx, 0x24 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x24u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0057fc76: mov edx, dword ptr [eax + ecx + 0x1c] */ r_edx = R32((u32)(r_eax+r_ecx+0x1cu));
    /* 0057fc7a: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 0057fc7d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057fc80: imul eax, eax, 0xe10 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xe10u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0057fc86: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 0057fc8c: lea edx, [ecx + eax + 0x178] */ r_edx = (u32)(r_ecx+r_eax+0x178u);
    /* 0057fc93: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0057fc96: imul eax, eax, 0x24 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x24u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0057fc99: movsx ecx, byte ptr [edx + eax + 2] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+r_eax+0x2u));
    /* 0057fc9e: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 0057fca1: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0057fca4: cmp edx, dword ptr [ebp - 0x34] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffccu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057fca7: jl 0x57fcb8 */ if ((fS!=fO)) goto L_0057fcb8;
L_0057fca9:; BB(0x0057fca9);
    /* 0057fca9: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0057fcac: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0057fcaf: lea edx, [ecx + eax - 1] */ r_edx = (u32)(r_ecx+r_eax+0xffffffffu);
    /* 0057fcb3: cmp dword ptr [ebp - 0x1c], edx */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057fcb6: jle 0x57fcdc */ if ((fZ||fS!=fO)) goto L_0057fcdc;
L_0057fcb8:; BB(0x0057fcb8);
    /* 0057fcb8: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0057fcbb: add eax, 0x3e8 */ {  u32 a = r_eax; u32 b = 0x3e8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0057fcc0: cmp eax, dword ptr [ebp - 0x34] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffccu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057fcc3: jl 0x57fd2b */ if ((fS!=fO)) goto L_0057fd2b;
L_0057fcc5:; BB(0x0057fcc5);
    /* 0057fcc5: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0057fcc8: add ecx, 0x3e8 */ {  u32 a = r_ecx; u32 b = 0x3e8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0057fcce: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0057fcd1: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0057fcd4: lea edx, [eax + edx - 1] */ r_edx = (u32)(r_eax+r_edx+0xffffffffu);
    /* 0057fcd8: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057fcda: jg 0x57fd2b */ if ((!fZ&&fS==fO)) goto L_0057fd2b;
L_0057fcdc:; BB(0x0057fcdc);
    /* 0057fcdc: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057fcdf: imul eax, eax, 0x190 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x190u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0057fce5: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 0057fceb: lea edx, [ecx + eax + 0x3a28] */ r_edx = (u32)(r_ecx+r_eax+0x3a28u);
    /* 0057fcf2: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057fcf5: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 0057fcfb: mov eax, dword ptr [ecx + eax*4 + 0x3a18] */ r_eax = R32((u32)(r_ecx+r_eax*4+0x3a18u));
    /* 0057fd02: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0057fd05: mov dword ptr [edx + eax*4], ecx */ W32((u32)(r_edx+r_eax*4), r_ecx);
    /* 0057fd08: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057fd0b: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 0057fd11: mov ecx, dword ptr [eax + edx*4 + 0x3a18] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x3a18u));
    /* 0057fd18: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0057fd1b: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057fd1e: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 0057fd24: mov dword ptr [eax + edx*4 + 0x3a18], ecx */ W32((u32)(r_eax+r_edx*4+0x3a18u), r_ecx);
L_0057fd2b:; BB(0x0057fd2b);
    /* 0057fd2b: jmp 0x57fbd4 */ goto L_0057fbd4;
L_0057fd30:; BB(0x0057fd30);
    /* 0057fd30: jmp 0x57fbad */ goto L_0057fbad;
L_0057fd35:; BB(0x0057fd35);
    /* 0057fd35: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057fd37: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 0057fd3d: call 0x581610 */ r_esp -= 4; W32(r_esp, 0x57fd42u); f_00581610();
    /* 0057fd42: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0057fd44: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 0057fd4a: call 0x5f5300 */ r_esp -= 4; W32(r_esp, 0x57fd4fu); f_005f5300();
    /* 0057fd4f: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 0057fd55: call 0x5eacb0 */ r_esp -= 4; W32(r_esp, 0x57fd5au); f_005eacb0();
    /* 0057fd5a: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 0057fd60: call 0x5eb570 */ r_esp -= 4; W32(r_esp, 0x57fd65u); f_005eb570();
    /* 0057fd65: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057fd6a: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x57fd6fu); f_00686d82();
    /* 0057fd6f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057fd72: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0057fd75: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0057fd79: cmp dword ptr [ebp - 0x48], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057fd7d: je 0x57fd8f */ if (fZ) goto L_0057fd8f;
L_0057fd7f:; BB(0x0057fd7f);
    /* 0057fd7f: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0057fd82: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x57fd87u); f_005ec5a0();
    /* 0057fd87: mov dword ptr [ebp - 0xd8], eax */ W32((u32)(r_ebp+0xffffff28u), r_eax);
    /* 0057fd8d: jmp 0x57fd99 */ goto L_0057fd99;
L_0057fd8f:; BB(0x0057fd8f);
    /* 0057fd8f: mov dword ptr [ebp - 0xd8], 0 */ W32((u32)(r_ebp+0xffffff28u), 0x0u);
L_0057fd99:; BB(0x0057fd99);
    /* 0057fd99: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 0057fd9f: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 0057fda2: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0057fda6: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 0057fdac: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0057fdaf: mov dword ptr [edx + 0x4080], eax */ W32((u32)(r_edx+0x4080u), r_eax);
    /* 0057fdb5: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0057fdba: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 0057fdc0: mov edx, dword ptr [ecx + 0x4080] */ r_edx = R32((u32)(r_ecx+0x4080u));
    /* 0057fdc6: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 0057fdcc: mov ecx, dword ptr [eax + 0x4080] */ r_ecx = R32((u32)(r_eax+0x4080u));
    /* 0057fdd2: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057fdd4: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0057fdda: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57fddcu); call_ind(t); }
    /* 0057fddc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057fddd: mov ecx, esp */ r_ecx = r_esp;
    /* 0057fddf: mov dx, word ptr [0x75ee1c] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 0057fde6: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
    /* 0057fde9: mov al, byte ptr [0x75ee1e] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 0057fdee: mov byte ptr [ecx + 2], al */ W8((u32)(r_ecx+0x2u), (u8)r_eax);
    /* 0057fdf1: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0057fdf3: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 0057fdf5: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 0057fdfb: mov ecx, dword ptr [ecx + 0x4080] */ r_ecx = R32((u32)(r_ecx+0x4080u));
    /* 0057fe01: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x57fe06u); f_005ecd00();
    /* 0057fe06: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 0057fe0c: mov eax, dword ptr [edx + 0x4080] */ r_eax = R32((u32)(r_edx+0x4080u));
    /* 0057fe12: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 0057fe18: mov ecx, dword ptr [ecx + 0x4080] */ r_ecx = R32((u32)(r_ecx+0x4080u));
    /* 0057fe1e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0057fe20: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0057fe23: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57fe25u); call_ind(t); }
    /* 0057fe25: push 0x52 */ { u32 v = 0x52u; r_esp -= 4; W32(r_esp, v); }
    /* 0057fe27: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 0057fe2d: mov ecx, dword ptr [ecx + 0x4080] */ r_ecx = R32((u32)(r_ecx+0x4080u));
    /* 0057fe33: call 0x5ecc60 */ r_esp -= 4; W32(r_esp, 0x57fe38u); f_005ecc60();
    /* 0057fe38: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0057fe3a: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 0057fe40: mov ecx, dword ptr [edx + 0x4080] */ r_ecx = R32((u32)(r_edx+0x4080u));
    /* 0057fe46: call 0x5eccb0 */ r_esp -= 4; W32(r_esp, 0x57fe4bu); f_005eccb0();
    /* 0057fe4b: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 0057fe50: push 0x159 */ { u32 v = 0x159u; r_esp -= 4; W32(r_esp, v); }
    /* 0057fe55: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 0057fe5b: mov ecx, dword ptr [eax + 0x4080] */ r_ecx = R32((u32)(r_eax+0x4080u));
    /* 0057fe61: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 0057fe67: mov eax, dword ptr [edx + 0x4080] */ r_eax = R32((u32)(r_edx+0x4080u));
    /* 0057fe6d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0057fe6f: mov ecx, eax */ r_ecx = r_eax;
    /* 0057fe71: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0057fe74: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57fe76u); call_ind(t); }
    /* 0057fe76: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 0057fe7c: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0057fe7f: add edx, 0x32 */ {  u32 a = r_edx; u32 b = 0x32u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0057fe82: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057fe83: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 0057fe89: mov ecx, dword ptr [eax + 0x4080] */ r_ecx = R32((u32)(r_eax+0x4080u));
    /* 0057fe8f: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 0057fe95: mov eax, dword ptr [edx + 0x4080] */ r_eax = R32((u32)(r_edx+0x4080u));
    /* 0057fe9b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0057fe9d: mov ecx, eax */ r_ecx = r_eax;
    /* 0057fe9f: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0057fea2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57fea4u); call_ind(t); }
    /* 0057fea4: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 0057feaa: mov edx, dword ptr [ecx + 0x4080] */ r_edx = R32((u32)(r_ecx+0x4080u));
    /* 0057feb0: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 0057feb6: mov ecx, dword ptr [eax + 0x4080] */ r_ecx = R32((u32)(r_eax+0x4080u));
    /* 0057febc: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057febe: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0057fec1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57fec3u); call_ind(t); }
    /* 0057fec3: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057fec8: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x57fecdu); f_00686d82();
    /* 0057fecd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057fed0: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 0057fed3: mov byte ptr [ebp - 4], 2 */ W8((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0057fed7: cmp dword ptr [ebp - 0x50], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057fedb: je 0x57feed */ if (fZ) goto L_0057feed;
L_0057fedd:; BB(0x0057fedd);
    /* 0057fedd: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0057fee0: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x57fee5u); f_005ec5a0();
    /* 0057fee5: mov dword ptr [ebp - 0xdc], eax */ W32((u32)(r_ebp+0xffffff24u), r_eax);
    /* 0057feeb: jmp 0x57fef7 */ goto L_0057fef7;
L_0057feed:; BB(0x0057feed);
    /* 0057feed: mov dword ptr [ebp - 0xdc], 0 */ W32((u32)(r_ebp+0xffffff24u), 0x0u);
L_0057fef7:; BB(0x0057fef7);
    /* 0057fef7: mov ecx, dword ptr [ebp - 0xdc] */ r_ecx = R32((u32)(r_ebp+0xffffff24u));
    /* 0057fefd: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 0057ff00: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0057ff04: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 0057ff0a: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0057ff0d: mov dword ptr [edx + 0x4084], eax */ W32((u32)(r_edx+0x4084u), r_eax);
    /* 0057ff13: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0057ff18: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 0057ff1e: mov edx, dword ptr [ecx + 0x4084] */ r_edx = R32((u32)(r_ecx+0x4084u));
    /* 0057ff24: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 0057ff2a: mov ecx, dword ptr [eax + 0x4084] */ r_ecx = R32((u32)(r_eax+0x4084u));
    /* 0057ff30: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057ff32: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0057ff38: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57ff3au); call_ind(t); }
    /* 0057ff3a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057ff3b: mov ecx, esp */ r_ecx = r_esp;
    /* 0057ff3d: mov dx, word ptr [0x75ee1c] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 0057ff44: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
    /* 0057ff47: mov al, byte ptr [0x75ee1e] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 0057ff4c: mov byte ptr [ecx + 2], al */ W8((u32)(r_ecx+0x2u), (u8)r_eax);
    /* 0057ff4f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0057ff51: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 0057ff53: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 0057ff59: mov ecx, dword ptr [ecx + 0x4084] */ r_ecx = R32((u32)(r_ecx+0x4084u));
    /* 0057ff5f: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x57ff64u); f_005ecd00();
    /* 0057ff64: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 0057ff6a: mov eax, dword ptr [edx + 0x4084] */ r_eax = R32((u32)(r_edx+0x4084u));
    /* 0057ff70: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 0057ff76: mov ecx, dword ptr [ecx + 0x4084] */ r_ecx = R32((u32)(r_ecx+0x4084u));
    /* 0057ff7c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0057ff7e: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0057ff81: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57ff83u); call_ind(t); }
    /* 0057ff83: push 0x82 */ { u32 v = 0x82u; r_esp -= 4; W32(r_esp, v); }
    /* 0057ff88: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 0057ff8e: mov ecx, dword ptr [ecx + 0x4084] */ r_ecx = R32((u32)(r_ecx+0x4084u));
    /* 0057ff94: call 0x5ecc60 */ r_esp -= 4; W32(r_esp, 0x57ff99u); f_005ecc60();
    /* 0057ff99: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 0057ff9b: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 0057ffa1: mov ecx, dword ptr [edx + 0x4084] */ r_ecx = R32((u32)(r_edx+0x4084u));
    /* 0057ffa7: call 0x5eccb0 */ r_esp -= 4; W32(r_esp, 0x57ffacu); f_005eccb0();
    /* 0057ffac: push 0x17a */ { u32 v = 0x17au; r_esp -= 4; W32(r_esp, v); }
    /* 0057ffb1: push 0x176 */ { u32 v = 0x176u; r_esp -= 4; W32(r_esp, v); }
    /* 0057ffb6: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 0057ffbc: mov ecx, dword ptr [eax + 0x4084] */ r_ecx = R32((u32)(r_eax+0x4084u));
    /* 0057ffc2: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 0057ffc8: mov eax, dword ptr [edx + 0x4084] */ r_eax = R32((u32)(r_edx+0x4084u));
    /* 0057ffce: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0057ffd0: mov ecx, eax */ r_ecx = r_eax;
    /* 0057ffd2: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0057ffd5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57ffd7u); call_ind(t); }
    /* 0057ffd7: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 0057ffdd: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0057ffe0: add edx, 0x32 */ {  u32 a = r_edx; u32 b = 0x32u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0057ffe3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057ffe4: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 0057ffea: mov ecx, dword ptr [eax + 0x4084] */ r_ecx = R32((u32)(r_eax+0x4084u));
    /* 0057fff0: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 0057fff6: mov eax, dword ptr [edx + 0x4084] */ r_eax = R32((u32)(r_edx+0x4084u));
    /* 0057fffc: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0057fffe: mov ecx, eax */ r_ecx = r_eax;
    /* 00580000: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00580003: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x580005u); call_ind(t); }
    /* 00580005: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 0058000b: mov edx, dword ptr [ecx + 0x4084] */ r_edx = R32((u32)(r_ecx+0x4084u));
    /* 00580011: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 00580017: mov ecx, dword ptr [eax + 0x4084] */ r_ecx = R32((u32)(r_eax+0x4084u));
    /* 0058001d: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0058001f: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00580022: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x580024u); call_ind(t); }
    /* 00580024: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 00580029: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x58002eu); f_00686d82();
    /* 0058002e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00580031: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 00580034: mov byte ptr [ebp - 4], 3 */ W8((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00580038: cmp dword ptr [ebp - 0x58], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058003c: je 0x58004e */ if (fZ) goto L_0058004e;
L_0058003e:; BB(0x0058003e);
    /* 0058003e: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00580041: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x580046u); f_005ec5a0();
    /* 00580046: mov dword ptr [ebp - 0xe0], eax */ W32((u32)(r_ebp+0xffffff20u), r_eax);
    /* 0058004c: jmp 0x580058 */ goto L_00580058;
L_0058004e:; BB(0x0058004e);
    /* 0058004e: mov dword ptr [ebp - 0xe0], 0 */ W32((u32)(r_ebp+0xffffff20u), 0x0u);
L_00580058:; BB(0x00580058);
    /* 00580058: mov ecx, dword ptr [ebp - 0xe0] */ r_ecx = R32((u32)(r_ebp+0xffffff20u));
    /* 0058005e: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
    /* 00580061: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00580065: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 0058006b: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 0058006e: mov dword ptr [edx + 0x4088], eax */ W32((u32)(r_edx+0x4088u), r_eax);
    /* 00580074: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00580079: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 0058007f: mov edx, dword ptr [ecx + 0x4088] */ r_edx = R32((u32)(r_ecx+0x4088u));
    /* 00580085: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 0058008b: mov ecx, dword ptr [eax + 0x4088] */ r_ecx = R32((u32)(r_eax+0x4088u));
    /* 00580091: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00580093: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00580099: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58009bu); call_ind(t); }
    /* 0058009b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0058009c: mov ecx, esp */ r_ecx = r_esp;
    /* 0058009e: mov dx, word ptr [0x75ee1c] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 005800a5: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
    /* 005800a8: mov al, byte ptr [0x75ee1e] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 005800ad: mov byte ptr [ecx + 2], al */ W8((u32)(r_ecx+0x2u), (u8)r_eax);
    /* 005800b0: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005800b2: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 005800b4: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 005800ba: mov ecx, dword ptr [ecx + 0x4088] */ r_ecx = R32((u32)(r_ecx+0x4088u));
    /* 005800c0: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x5800c5u); f_005ecd00();
    /* 005800c5: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 005800cb: mov eax, dword ptr [edx + 0x4088] */ r_eax = R32((u32)(r_edx+0x4088u));
    /* 005800d1: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 005800d7: mov ecx, dword ptr [ecx + 0x4088] */ r_ecx = R32((u32)(r_ecx+0x4088u));
    /* 005800dd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005800df: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 005800e2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5800e4u); call_ind(t); }
    /* 005800e4: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 005800e6: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 005800ec: mov ecx, dword ptr [ecx + 0x4088] */ r_ecx = R32((u32)(r_ecx+0x4088u));
    /* 005800f2: call 0x5ecc60 */ r_esp -= 4; W32(r_esp, 0x5800f7u); f_005ecc60();
    /* 005800f7: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 005800f9: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 005800ff: mov ecx, dword ptr [edx + 0x4088] */ r_ecx = R32((u32)(r_edx+0x4088u));
    /* 00580105: call 0x5eccb0 */ r_esp -= 4; W32(r_esp, 0x58010au); f_005eccb0();
    /* 0058010a: push 0x10a */ { u32 v = 0x10au; r_esp -= 4; W32(r_esp, v); }
    /* 0058010f: push 0x13a */ { u32 v = 0x13au; r_esp -= 4; W32(r_esp, v); }
    /* 00580114: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 0058011a: mov ecx, dword ptr [eax + 0x4088] */ r_ecx = R32((u32)(r_eax+0x4088u));
    /* 00580120: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 00580126: mov eax, dword ptr [edx + 0x4088] */ r_eax = R32((u32)(r_edx+0x4088u));
    /* 0058012c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0058012e: mov ecx, eax */ r_ecx = r_eax;
    /* 00580130: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00580133: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x580135u); call_ind(t); }
    /* 00580135: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 0058013b: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0058013e: add edx, 0x32 */ {  u32 a = r_edx; u32 b = 0x32u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00580141: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00580142: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 00580148: mov ecx, dword ptr [eax + 0x4088] */ r_ecx = R32((u32)(r_eax+0x4088u));
    /* 0058014e: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 00580154: mov eax, dword ptr [edx + 0x4088] */ r_eax = R32((u32)(r_edx+0x4088u));
    /* 0058015a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0058015c: mov ecx, eax */ r_ecx = r_eax;
    /* 0058015e: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00580161: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x580163u); call_ind(t); }
    /* 00580163: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 00580169: mov edx, dword ptr [ecx + 0x4088] */ r_edx = R32((u32)(r_ecx+0x4088u));
    /* 0058016f: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 00580175: mov ecx, dword ptr [eax + 0x4088] */ r_ecx = R32((u32)(r_eax+0x4088u));
    /* 0058017b: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0058017d: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00580180: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x580182u); call_ind(t); }
    /* 00580182: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 00580187: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x58018cu); f_00686d82();
    /* 0058018c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058018f: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 00580192: mov byte ptr [ebp - 4], 4 */ W8((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 00580196: cmp dword ptr [ebp - 0x60], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058019a: je 0x5801ac */ if (fZ) goto L_005801ac;
L_0058019c:; BB(0x0058019c);
    /* 0058019c: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0058019f: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x5801a4u); f_005ec5a0();
    /* 005801a4: mov dword ptr [ebp - 0xe4], eax */ W32((u32)(r_ebp+0xffffff1cu), r_eax);
    /* 005801aa: jmp 0x5801b6 */ goto L_005801b6;
L_005801ac:; BB(0x005801ac);
    /* 005801ac: mov dword ptr [ebp - 0xe4], 0 */ W32((u32)(r_ebp+0xffffff1cu), 0x0u);
L_005801b6:; BB(0x005801b6);
    /* 005801b6: mov ecx, dword ptr [ebp - 0xe4] */ r_ecx = R32((u32)(r_ebp+0xffffff1cu));
    /* 005801bc: mov dword ptr [ebp - 0x5c], ecx */ W32((u32)(r_ebp+0xffffffa4u), r_ecx);
    /* 005801bf: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005801c3: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 005801c9: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 005801cc: mov dword ptr [edx + 0x408c], eax */ W32((u32)(r_edx+0x408cu), r_eax);
    /* 005801d2: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 005801d7: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 005801dd: mov edx, dword ptr [ecx + 0x408c] */ r_edx = R32((u32)(r_ecx+0x408cu));
    /* 005801e3: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 005801e9: mov ecx, dword ptr [eax + 0x408c] */ r_ecx = R32((u32)(r_eax+0x408cu));
    /* 005801ef: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005801f1: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 005801f7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5801f9u); call_ind(t); }
    /* 005801f9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005801fa: mov ecx, esp */ r_ecx = r_esp;
    /* 005801fc: mov dx, word ptr [0x75ee1c] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 00580203: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
    /* 00580206: mov al, byte ptr [0x75ee1e] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 0058020b: mov byte ptr [ecx + 2], al */ W8((u32)(r_ecx+0x2u), (u8)r_eax);
    /* 0058020e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00580210: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 00580212: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 00580218: mov ecx, dword ptr [ecx + 0x408c] */ r_ecx = R32((u32)(r_ecx+0x408cu));
    /* 0058021e: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x580223u); f_005ecd00();
    /* 00580223: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 00580229: mov eax, dword ptr [edx + 0x408c] */ r_eax = R32((u32)(r_edx+0x408cu));
    /* 0058022f: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 00580235: mov ecx, dword ptr [ecx + 0x408c] */ r_ecx = R32((u32)(r_ecx+0x408cu));
    /* 0058023b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0058023d: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00580240: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x580242u); call_ind(t); }
    /* 00580242: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 00580244: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 0058024a: mov ecx, dword ptr [ecx + 0x408c] */ r_ecx = R32((u32)(r_ecx+0x408cu));
    /* 00580250: call 0x5ecc60 */ r_esp -= 4; W32(r_esp, 0x580255u); f_005ecc60();
    /* 00580255: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 00580257: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 0058025d: mov ecx, dword ptr [edx + 0x408c] */ r_ecx = R32((u32)(r_edx+0x408cu));
    /* 00580263: call 0x5eccb0 */ r_esp -= 4; W32(r_esp, 0x580268u); f_005eccb0();
    /* 00580268: push 0x11c */ { u32 v = 0x11cu; r_esp -= 4; W32(r_esp, v); }
    /* 0058026d: push 0x169 */ { u32 v = 0x169u; r_esp -= 4; W32(r_esp, v); }
    /* 00580272: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 00580278: mov ecx, dword ptr [eax + 0x408c] */ r_ecx = R32((u32)(r_eax+0x408cu));
    /* 0058027e: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 00580284: mov eax, dword ptr [edx + 0x408c] */ r_eax = R32((u32)(r_edx+0x408cu));
    /* 0058028a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0058028c: mov ecx, eax */ r_ecx = r_eax;
    /* 0058028e: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00580291: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x580293u); call_ind(t); }
    /* 00580293: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 00580299: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0058029c: add edx, 0x32 */ {  u32 a = r_edx; u32 b = 0x32u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0058029f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005802a0: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 005802a6: mov ecx, dword ptr [eax + 0x408c] */ r_ecx = R32((u32)(r_eax+0x408cu));
    /* 005802ac: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 005802b2: mov eax, dword ptr [edx + 0x408c] */ r_eax = R32((u32)(r_edx+0x408cu));
    /* 005802b8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005802ba: mov ecx, eax */ r_ecx = r_eax;
    /* 005802bc: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 005802bf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5802c1u); call_ind(t); }
    /* 005802c1: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 005802c7: mov edx, dword ptr [ecx + 0x408c] */ r_edx = R32((u32)(r_ecx+0x408cu));
    /* 005802cd: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 005802d3: mov ecx, dword ptr [eax + 0x408c] */ r_ecx = R32((u32)(r_eax+0x408cu));
    /* 005802d9: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005802db: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005802de: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5802e0u); call_ind(t); }
    /* 005802e0: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 005802e5: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5802eau); f_00686d82();
    /* 005802ea: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005802ed: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 005802f0: mov byte ptr [ebp - 4], 5 */ W8((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 005802f4: cmp dword ptr [ebp - 0x68], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff98u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005802f8: je 0x58030a */ if (fZ) goto L_0058030a;
L_005802fa:; BB(0x005802fa);
    /* 005802fa: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 005802fd: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x580302u); f_005ec5a0();
    /* 00580302: mov dword ptr [ebp - 0xe8], eax */ W32((u32)(r_ebp+0xffffff18u), r_eax);
    /* 00580308: jmp 0x580314 */ goto L_00580314;
L_0058030a:; BB(0x0058030a);
    /* 0058030a: mov dword ptr [ebp - 0xe8], 0 */ W32((u32)(r_ebp+0xffffff18u), 0x0u);
L_00580314:; BB(0x00580314);
    /* 00580314: mov ecx, dword ptr [ebp - 0xe8] */ r_ecx = R32((u32)(r_ebp+0xffffff18u));
    /* 0058031a: mov dword ptr [ebp - 0x64], ecx */ W32((u32)(r_ebp+0xffffff9cu), r_ecx);
    /* 0058031d: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00580321: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 00580327: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 0058032a: mov dword ptr [edx + 0x4090], eax */ W32((u32)(r_edx+0x4090u), r_eax);
    /* 00580330: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00580335: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 0058033b: mov edx, dword ptr [ecx + 0x4090] */ r_edx = R32((u32)(r_ecx+0x4090u));
    /* 00580341: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 00580347: mov ecx, dword ptr [eax + 0x4090] */ r_ecx = R32((u32)(r_eax+0x4090u));
    /* 0058034d: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0058034f: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00580355: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x580357u); call_ind(t); }
    /* 00580357: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00580358: mov ecx, esp */ r_ecx = r_esp;
    /* 0058035a: mov dx, word ptr [0x75ee1c] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 00580361: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
    /* 00580364: mov al, byte ptr [0x75ee1e] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 00580369: mov byte ptr [ecx + 2], al */ W8((u32)(r_ecx+0x2u), (u8)r_eax);
    /* 0058036c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0058036e: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 00580370: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 00580376: mov ecx, dword ptr [ecx + 0x4090] */ r_ecx = R32((u32)(r_ecx+0x4090u));
    /* 0058037c: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x580381u); f_005ecd00();
    /* 00580381: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 00580387: mov eax, dword ptr [edx + 0x4090] */ r_eax = R32((u32)(r_edx+0x4090u));
    /* 0058038d: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 00580393: mov ecx, dword ptr [ecx + 0x4090] */ r_ecx = R32((u32)(r_ecx+0x4090u));
    /* 00580399: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0058039b: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0058039e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5803a0u); call_ind(t); }
    /* 005803a0: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 005803a2: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 005803a8: mov ecx, dword ptr [ecx + 0x4090] */ r_ecx = R32((u32)(r_ecx+0x4090u));
    /* 005803ae: call 0x5ecc60 */ r_esp -= 4; W32(r_esp, 0x5803b3u); f_005ecc60();
    /* 005803b3: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 005803b5: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 005803bb: mov ecx, dword ptr [edx + 0x4090] */ r_ecx = R32((u32)(r_edx+0x4090u));
    /* 005803c1: call 0x5eccb0 */ r_esp -= 4; W32(r_esp, 0x5803c6u); f_005eccb0();
    /* 005803c6: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 005803cb: push 0x1b6 */ { u32 v = 0x1b6u; r_esp -= 4; W32(r_esp, v); }
    /* 005803d0: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 005803d6: mov ecx, dword ptr [eax + 0x4090] */ r_ecx = R32((u32)(r_eax+0x4090u));
    /* 005803dc: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 005803e2: mov eax, dword ptr [edx + 0x4090] */ r_eax = R32((u32)(r_edx+0x4090u));
    /* 005803e8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005803ea: mov ecx, eax */ r_ecx = r_eax;
    /* 005803ec: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005803ef: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5803f1u); call_ind(t); }
    /* 005803f1: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 005803f7: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 005803fa: add edx, 0x32 */ {  u32 a = r_edx; u32 b = 0x32u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005803fd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005803fe: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 00580404: mov ecx, dword ptr [eax + 0x4090] */ r_ecx = R32((u32)(r_eax+0x4090u));
    /* 0058040a: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 00580410: mov eax, dword ptr [edx + 0x4090] */ r_eax = R32((u32)(r_edx+0x4090u));
    /* 00580416: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00580418: mov ecx, eax */ r_ecx = r_eax;
    /* 0058041a: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0058041d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58041fu); call_ind(t); }
    /* 0058041f: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 00580425: mov edx, dword ptr [ecx + 0x4090] */ r_edx = R32((u32)(r_ecx+0x4090u));
    /* 0058042b: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 00580431: mov ecx, dword ptr [eax + 0x4090] */ r_ecx = R32((u32)(r_eax+0x4090u));
    /* 00580437: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00580439: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0058043c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58043eu); call_ind(t); }
    /* 0058043e: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 00580443: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x580448u); f_00686d82();
    /* 00580448: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058044b: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 0058044e: mov byte ptr [ebp - 4], 6 */ W8((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 00580452: cmp dword ptr [ebp - 0x70], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00580456: je 0x580468 */ if (fZ) goto L_00580468;
L_00580458:; BB(0x00580458);
    /* 00580458: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 0058045b: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x580460u); f_005ec5a0();
    /* 00580460: mov dword ptr [ebp - 0xec], eax */ W32((u32)(r_ebp+0xffffff14u), r_eax);
    /* 00580466: jmp 0x580472 */ goto L_00580472;
L_00580468:; BB(0x00580468);
    /* 00580468: mov dword ptr [ebp - 0xec], 0 */ W32((u32)(r_ebp+0xffffff14u), 0x0u);
L_00580472:; BB(0x00580472);
    /* 00580472: mov ecx, dword ptr [ebp - 0xec] */ r_ecx = R32((u32)(r_ebp+0xffffff14u));
    /* 00580478: mov dword ptr [ebp - 0x6c], ecx */ W32((u32)(r_ebp+0xffffff94u), r_ecx);
    /* 0058047b: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0058047f: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 00580485: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 00580488: mov dword ptr [edx + 0x4094], eax */ W32((u32)(r_edx+0x4094u), r_eax);
    /* 0058048e: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00580493: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 00580499: mov edx, dword ptr [ecx + 0x4094] */ r_edx = R32((u32)(r_ecx+0x4094u));
    /* 0058049f: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 005804a5: mov ecx, dword ptr [eax + 0x4094] */ r_ecx = R32((u32)(r_eax+0x4094u));
    /* 005804ab: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005804ad: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 005804b3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5804b5u); call_ind(t); }
    /* 005804b5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005804b6: mov ecx, esp */ r_ecx = r_esp;
    /* 005804b8: mov dx, word ptr [0x75ee1c] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 005804bf: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
    /* 005804c2: mov al, byte ptr [0x75ee1e] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 005804c7: mov byte ptr [ecx + 2], al */ W8((u32)(r_ecx+0x2u), (u8)r_eax);
    /* 005804ca: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005804cc: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 005804ce: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 005804d4: mov ecx, dword ptr [ecx + 0x4094] */ r_ecx = R32((u32)(r_ecx+0x4094u));
    /* 005804da: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x5804dfu); f_005ecd00();
    /* 005804df: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 005804e5: mov eax, dword ptr [edx + 0x4094] */ r_eax = R32((u32)(r_edx+0x4094u));
    /* 005804eb: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 005804f1: mov ecx, dword ptr [ecx + 0x4094] */ r_ecx = R32((u32)(r_ecx+0x4094u));
    /* 005804f7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005804f9: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 005804fc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5804feu); call_ind(t); }
    /* 005804fe: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 00580500: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 00580506: mov ecx, dword ptr [ecx + 0x4094] */ r_ecx = R32((u32)(r_ecx+0x4094u));
    /* 0058050c: call 0x5ecc60 */ r_esp -= 4; W32(r_esp, 0x580511u); f_005ecc60();
    /* 00580511: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 00580513: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 00580519: mov ecx, dword ptr [edx + 0x4094] */ r_ecx = R32((u32)(r_edx+0x4094u));
    /* 0058051f: call 0x5eccb0 */ r_esp -= 4; W32(r_esp, 0x580524u); f_005eccb0();
    /* 00580524: push 0x11c */ { u32 v = 0x11cu; r_esp -= 4; W32(r_esp, v); }
    /* 00580529: push 0x1b6 */ { u32 v = 0x1b6u; r_esp -= 4; W32(r_esp, v); }
    /* 0058052e: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 00580534: mov ecx, dword ptr [eax + 0x4094] */ r_ecx = R32((u32)(r_eax+0x4094u));
    /* 0058053a: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 00580540: mov eax, dword ptr [edx + 0x4094] */ r_eax = R32((u32)(r_edx+0x4094u));
    /* 00580546: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00580548: mov ecx, eax */ r_ecx = r_eax;
    /* 0058054a: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0058054d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58054fu); call_ind(t); }
    /* 0058054f: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 00580555: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00580558: add edx, 0x32 */ {  u32 a = r_edx; u32 b = 0x32u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0058055b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058055c: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 00580562: mov ecx, dword ptr [eax + 0x4094] */ r_ecx = R32((u32)(r_eax+0x4094u));
    /* 00580568: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 0058056e: mov eax, dword ptr [edx + 0x4094] */ r_eax = R32((u32)(r_edx+0x4094u));
    /* 00580574: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00580576: mov ecx, eax */ r_ecx = r_eax;
    /* 00580578: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0058057b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58057du); call_ind(t); }
    /* 0058057d: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 00580583: mov edx, dword ptr [ecx + 0x4094] */ r_edx = R32((u32)(r_ecx+0x4094u));
    /* 00580589: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 0058058f: mov ecx, dword ptr [eax + 0x4094] */ r_ecx = R32((u32)(r_eax+0x4094u));
    /* 00580595: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00580597: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0058059a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58059cu); call_ind(t); }
    /* 0058059c: push 0x1e0 */ { u32 v = 0x1e0u; r_esp -= 4; W32(r_esp, v); }
    /* 005805a1: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5805a6u); f_00686d82();
    /* 005805a6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005805a9: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 005805ac: mov byte ptr [ebp - 4], 7 */ W8((u32)(r_ebp+0xfffffffcu), 0x7u);
    /* 005805b0: cmp dword ptr [ebp - 0x78], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff88u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005805b4: je 0x5805cd */ if (fZ) goto L_005805cd;
L_005805b6:; BB(0x005805b6);
    /* 005805b6: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 005805bc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005805bd: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 005805c0: call 0x582610 */ r_esp -= 4; W32(r_esp, 0x5805c5u); f_00582610();
    /* 005805c5: mov dword ptr [ebp - 0xf0], eax */ W32((u32)(r_ebp+0xffffff10u), r_eax);
    /* 005805cb: jmp 0x5805d7 */ goto L_005805d7;
L_005805cd:; BB(0x005805cd);
    /* 005805cd: mov dword ptr [ebp - 0xf0], 0 */ W32((u32)(r_ebp+0xffffff10u), 0x0u);
L_005805d7:; BB(0x005805d7);
    /* 005805d7: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 005805dd: mov dword ptr [ebp - 0x74], edx */ W32((u32)(r_ebp+0xffffff8cu), r_edx);
    /* 005805e0: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005805e4: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 005805ea: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 005805ed: mov dword ptr [eax + 0x4320], ecx */ W32((u32)(r_eax+0x4320u), r_ecx);
    /* 005805f3: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 005805f9: mov eax, dword ptr [edx + 0x4320] */ r_eax = R32((u32)(r_edx+0x4320u));
    /* 005805ff: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 00580605: mov ecx, dword ptr [ecx + 0x4320] */ r_ecx = R32((u32)(r_ecx+0x4320u));
    /* 0058060b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0058060d: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00580610: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x580612u); call_ind(t); }
    /* 00580612: push 0x30dfbd */ { u32 v = 0x30dfbdu; r_esp -= 4; W32(r_esp, v); }
    /* 00580617: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 0058061d: mov edx, dword ptr [ecx + 0x4320] */ r_edx = R32((u32)(r_ecx+0x4320u));
    /* 00580623: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 00580629: mov ecx, dword ptr [eax + 0x4320] */ r_ecx = R32((u32)(r_eax+0x4320u));
    /* 0058062f: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00580631: mov eax, dword ptr [edx + 0xc8] */ r_eax = R32((u32)(r_edx+0xc8u));
    /* 00580637: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x580639u); call_ind(t); }
    /* 00580639: push 0x101 */ { u32 v = 0x101u; r_esp -= 4; W32(r_esp, v); }
    /* 0058063e: push 0x1a2 */ { u32 v = 0x1a2u; r_esp -= 4; W32(r_esp, v); }
    /* 00580643: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 00580649: mov edx, dword ptr [ecx + 0x4320] */ r_edx = R32((u32)(r_ecx+0x4320u));
    /* 0058064f: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 00580655: mov ecx, dword ptr [eax + 0x4320] */ r_ecx = R32((u32)(r_eax+0x4320u));
    /* 0058065b: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0058065d: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00580660: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x580662u); call_ind(t); }
    /* 00580662: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 00580668: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0058066b: add edx, 0x32 */ {  u32 a = r_edx; u32 b = 0x32u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0058066e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058066f: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 00580675: mov ecx, dword ptr [eax + 0x4320] */ r_ecx = R32((u32)(r_eax+0x4320u));
    /* 0058067b: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 00580681: mov eax, dword ptr [edx + 0x4320] */ r_eax = R32((u32)(r_edx+0x4320u));
    /* 00580687: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00580689: mov ecx, eax */ r_ecx = r_eax;
    /* 0058068b: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0058068e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x580690u); call_ind(t); }
    /* 00580690: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00580692: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 00580698: mov ecx, dword ptr [ecx + 0x4320] */ r_ecx = R32((u32)(r_ecx+0x4320u));
    /* 0058069e: call 0x5f53e0 */ r_esp -= 4; W32(r_esp, 0x5806a3u); f_005f53e0();
    /* 005806a3: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 005806a9: mov eax, dword ptr [edx + 0x4320] */ r_eax = R32((u32)(r_edx+0x4320u));
    /* 005806af: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 005806b5: mov ecx, dword ptr [ecx + 0x4320] */ r_ecx = R32((u32)(r_ecx+0x4320u));
    /* 005806bb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005806bd: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005806c0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5806c2u); call_ind(t); }
    /* 005806c2: push 0x1e0 */ { u32 v = 0x1e0u; r_esp -= 4; W32(r_esp, v); }
    /* 005806c7: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5806ccu); f_00686d82();
    /* 005806cc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005806cf: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 005806d2: mov byte ptr [ebp - 4], 8 */ W8((u32)(r_ebp+0xfffffffcu), 0x8u);
    /* 005806d6: cmp dword ptr [ebp - 0x80], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff80u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005806da: je 0x5806f3 */ if (fZ) goto L_005806f3;
L_005806dc:; BB(0x005806dc);
    /* 005806dc: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 005806e2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005806e3: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 005806e6: call 0x582610 */ r_esp -= 4; W32(r_esp, 0x5806ebu); f_00582610();
    /* 005806eb: mov dword ptr [ebp - 0xf4], eax */ W32((u32)(r_ebp+0xffffff0cu), r_eax);
    /* 005806f1: jmp 0x5806fd */ goto L_005806fd;
L_005806f3:; BB(0x005806f3);
    /* 005806f3: mov dword ptr [ebp - 0xf4], 0 */ W32((u32)(r_ebp+0xffffff0cu), 0x0u);
L_005806fd:; BB(0x005806fd);
    /* 005806fd: mov edx, dword ptr [ebp - 0xf4] */ r_edx = R32((u32)(r_ebp+0xffffff0cu));
    /* 00580703: mov dword ptr [ebp - 0x7c], edx */ W32((u32)(r_ebp+0xffffff84u), r_edx);
    /* 00580706: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0058070a: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 00580710: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 00580713: mov dword ptr [eax + 0x4324], ecx */ W32((u32)(r_eax+0x4324u), r_ecx);
    /* 00580719: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 0058071f: mov eax, dword ptr [edx + 0x4324] */ r_eax = R32((u32)(r_edx+0x4324u));
    /* 00580725: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 0058072b: mov ecx, dword ptr [ecx + 0x4324] */ r_ecx = R32((u32)(r_ecx+0x4324u));
    /* 00580731: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00580733: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00580736: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x580738u); call_ind(t); }
    /* 00580738: push 0x30dfbe */ { u32 v = 0x30dfbeu; r_esp -= 4; W32(r_esp, v); }
    /* 0058073d: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 00580743: mov edx, dword ptr [ecx + 0x4324] */ r_edx = R32((u32)(r_ecx+0x4324u));
    /* 00580749: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 0058074f: mov ecx, dword ptr [eax + 0x4324] */ r_ecx = R32((u32)(r_eax+0x4324u));
    /* 00580755: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00580757: mov eax, dword ptr [edx + 0xc8] */ r_eax = R32((u32)(r_edx+0xc8u));
    /* 0058075d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58075fu); call_ind(t); }
    /* 0058075f: push 0x113 */ { u32 v = 0x113u; r_esp -= 4; W32(r_esp, v); }
    /* 00580764: push 0x1a2 */ { u32 v = 0x1a2u; r_esp -= 4; W32(r_esp, v); }
    /* 00580769: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 0058076f: mov edx, dword ptr [ecx + 0x4324] */ r_edx = R32((u32)(r_ecx+0x4324u));
    /* 00580775: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 0058077b: mov ecx, dword ptr [eax + 0x4324] */ r_ecx = R32((u32)(r_eax+0x4324u));
    /* 00580781: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00580783: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00580786: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x580788u); call_ind(t); }
    /* 00580788: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 0058078e: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00580791: add edx, 0x32 */ {  u32 a = r_edx; u32 b = 0x32u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00580794: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00580795: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 0058079b: mov ecx, dword ptr [eax + 0x4324] */ r_ecx = R32((u32)(r_eax+0x4324u));
    /* 005807a1: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 005807a7: mov eax, dword ptr [edx + 0x4324] */ r_eax = R32((u32)(r_edx+0x4324u));
    /* 005807ad: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005807af: mov ecx, eax */ r_ecx = r_eax;
    /* 005807b1: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 005807b4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5807b6u); call_ind(t); }
    /* 005807b6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005807b8: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 005807be: mov ecx, dword ptr [ecx + 0x4324] */ r_ecx = R32((u32)(r_ecx+0x4324u));
    /* 005807c4: call 0x5f53e0 */ r_esp -= 4; W32(r_esp, 0x5807c9u); f_005f53e0();
    /* 005807c9: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 005807cf: mov eax, dword ptr [edx + 0x4324] */ r_eax = R32((u32)(r_edx+0x4324u));
    /* 005807d5: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 005807db: mov ecx, dword ptr [ecx + 0x4324] */ r_ecx = R32((u32)(r_ecx+0x4324u));
    /* 005807e1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005807e3: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005807e6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5807e8u); call_ind(t); }
    /* 005807e8: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 005807ee: mov ecx, dword ptr [ecx + 0x4324] */ r_ecx = R32((u32)(r_ecx+0x4324u));
    /* 005807f4: call 0x602420 */ r_esp -= 4; W32(r_esp, 0x5807f9u); f_00602420();
    /* 005807f9: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 005807fe: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x580803u); f_00686d82();
    /* 00580803: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00580806: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 0058080c: mov byte ptr [ebp - 4], 9 */ W8((u32)(r_ebp+0xfffffffcu), 0x9u);
    /* 00580810: cmp dword ptr [ebp - 0x88], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00580817: je 0x58082c */ if (fZ) goto L_0058082c;
L_00580819:; BB(0x00580819);
    /* 00580819: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0058081f: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x580824u); f_005eaaf0();
    /* 00580824: mov dword ptr [ebp - 0xf8], eax */ W32((u32)(r_ebp+0xffffff08u), r_eax);
    /* 0058082a: jmp 0x580836 */ goto L_00580836;
L_0058082c:; BB(0x0058082c);
    /* 0058082c: mov dword ptr [ebp - 0xf8], 0 */ W32((u32)(r_ebp+0xffffff08u), 0x0u);
L_00580836:; BB(0x00580836);
    /* 00580836: mov edx, dword ptr [ebp - 0xf8] */ r_edx = R32((u32)(r_ebp+0xffffff08u));
    /* 0058083c: mov dword ptr [ebp - 0x84], edx */ W32((u32)(r_ebp+0xffffff7cu), r_edx);
    /* 00580842: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00580846: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 0058084c: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 00580852: mov dword ptr [eax + 0x4318], ecx */ W32((u32)(r_eax+0x4318u), r_ecx);
    /* 00580858: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 0058085e: mov eax, dword ptr [edx + 0x4318] */ r_eax = R32((u32)(r_edx+0x4318u));
    /* 00580864: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 0058086a: mov ecx, dword ptr [ecx + 0x4318] */ r_ecx = R32((u32)(r_ecx+0x4318u));
    /* 00580870: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00580872: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00580875: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x580877u); call_ind(t); }
    /* 00580877: push 0x30dfef */ { u32 v = 0x30dfefu; r_esp -= 4; W32(r_esp, v); }
    /* 0058087c: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 00580882: mov ecx, dword ptr [ecx + 0x4318] */ r_ecx = R32((u32)(r_ecx+0x4318u));
    /* 00580888: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x58088du); f_005eaf00();
    /* 0058088d: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 00580893: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 00580896: add eax, 0x32 */ {  u32 a = r_eax; u32 b = 0x32u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00580899: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058089a: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 005808a0: mov edx, dword ptr [ecx + 0x4318] */ r_edx = R32((u32)(r_ecx+0x4318u));
    /* 005808a6: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 005808ac: mov ecx, dword ptr [eax + 0x4318] */ r_ecx = R32((u32)(r_eax+0x4318u));
    /* 005808b2: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005808b4: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 005808b7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5808b9u); call_ind(t); }
    /* 005808b9: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 005808bf: mov edx, dword ptr [ecx + 0x4318] */ r_edx = R32((u32)(r_ecx+0x4318u));
    /* 005808c5: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 005808cb: mov ecx, dword ptr [eax + 0x4318] */ r_ecx = R32((u32)(r_eax+0x4318u));
    /* 005808d1: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005808d3: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005808d6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5808d8u); call_ind(t); }
    /* 005808d8: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 005808dd: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5808e2u); f_00686d82();
    /* 005808e2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005808e5: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 005808eb: mov byte ptr [ebp - 4], 0xa */ W8((u32)(r_ebp+0xfffffffcu), 0xau);
    /* 005808ef: cmp dword ptr [ebp - 0x90], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff70u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005808f6: je 0x58090b */ if (fZ) goto L_0058090b;
L_005808f8:; BB(0x005808f8);
    /* 005808f8: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 005808fe: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x580903u); f_005eaaf0();
    /* 00580903: mov dword ptr [ebp - 0xfc], eax */ W32((u32)(r_ebp+0xffffff04u), r_eax);
    /* 00580909: jmp 0x580915 */ goto L_00580915;
L_0058090b:; BB(0x0058090b);
    /* 0058090b: mov dword ptr [ebp - 0xfc], 0 */ W32((u32)(r_ebp+0xffffff04u), 0x0u);
L_00580915:; BB(0x00580915);
    /* 00580915: mov ecx, dword ptr [ebp - 0xfc] */ r_ecx = R32((u32)(r_ebp+0xffffff04u));
    /* 0058091b: mov dword ptr [ebp - 0x8c], ecx */ W32((u32)(r_ebp+0xffffff74u), r_ecx);
    /* 00580921: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00580925: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 0058092b: mov eax, dword ptr [ebp - 0x8c] */ r_eax = R32((u32)(r_ebp+0xffffff74u));
    /* 00580931: mov dword ptr [edx + 0x431c], eax */ W32((u32)(r_edx+0x431cu), r_eax);
    /* 00580937: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 0058093d: mov edx, dword ptr [ecx + 0x431c] */ r_edx = R32((u32)(r_ecx+0x431cu));
    /* 00580943: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 00580949: mov ecx, dword ptr [eax + 0x431c] */ r_ecx = R32((u32)(r_eax+0x431cu));
    /* 0058094f: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00580951: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00580954: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x580956u); call_ind(t); }
    /* 00580956: push 0x30dfea */ { u32 v = 0x30dfeau; r_esp -= 4; W32(r_esp, v); }
    /* 0058095b: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 00580961: mov ecx, dword ptr [ecx + 0x431c] */ r_ecx = R32((u32)(r_ecx+0x431cu));
    /* 00580967: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x58096cu); f_005eaf00();
    /* 0058096c: push 0xec */ { u32 v = 0xecu; r_esp -= 4; W32(r_esp, v); }
    /* 00580971: push 0x13f */ { u32 v = 0x13fu; r_esp -= 4; W32(r_esp, v); }
    /* 00580976: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 0058097c: mov eax, dword ptr [edx + 0x431c] */ r_eax = R32((u32)(r_edx+0x431cu));
    /* 00580982: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 00580988: mov ecx, dword ptr [ecx + 0x431c] */ r_ecx = R32((u32)(r_ecx+0x431cu));
    /* 0058098e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00580990: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00580993: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x580995u); call_ind(t); }
    /* 00580995: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 0058099b: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0058099e: add edx, 0x32 */ {  u32 a = r_edx; u32 b = 0x32u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005809a1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005809a2: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 005809a8: mov ecx, dword ptr [eax + 0x431c] */ r_ecx = R32((u32)(r_eax+0x431cu));
    /* 005809ae: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 005809b4: mov eax, dword ptr [edx + 0x431c] */ r_eax = R32((u32)(r_edx+0x431cu));
    /* 005809ba: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005809bc: mov ecx, eax */ r_ecx = r_eax;
    /* 005809be: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 005809c1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5809c3u); call_ind(t); }
    /* 005809c3: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 005809c9: mov edx, dword ptr [ecx + 0x431c] */ r_edx = R32((u32)(r_ecx+0x431cu));
    /* 005809cf: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 005809d5: mov ecx, dword ptr [eax + 0x431c] */ r_ecx = R32((u32)(r_eax+0x431cu));
    /* 005809db: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005809dd: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005809e0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5809e2u); call_ind(t); }
    /* 005809e2: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005809e9: jmp 0x5809f4 */ goto L_005809f4;
L_005809eb:; BB(0x005809eb);
    /* 005809eb: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005809ee: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005809f1: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_005809f4:; BB(0x005809f4);
    /* 005809f4: cmp dword ptr [ebp - 0x10], 0x50 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005809f8: jge 0x580b73 */ if ((fS==fO)) goto L_00580b73;
L_005809fe:; BB(0x005809fe);
    /* 005809fe: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 00580a03: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x580a08u); f_00686d82();
    /* 00580a08: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00580a0b: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 00580a11: mov byte ptr [ebp - 4], 0xb */ W8((u32)(r_ebp+0xfffffffcu), 0xbu);
    /* 00580a15: cmp dword ptr [ebp - 0x98], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff68u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00580a1c: je 0x580a31 */ if (fZ) goto L_00580a31;
L_00580a1e:; BB(0x00580a1e);
    /* 00580a1e: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 00580a24: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x580a29u); f_005ec5a0();
    /* 00580a29: mov dword ptr [ebp - 0x100], eax */ W32((u32)(r_ebp+0xffffff00u), r_eax);
    /* 00580a2f: jmp 0x580a3b */ goto L_00580a3b;
L_00580a31:; BB(0x00580a31);
    /* 00580a31: mov dword ptr [ebp - 0x100], 0 */ W32((u32)(r_ebp+0xffffff00u), 0x0u);
L_00580a3b:; BB(0x00580a3b);
    /* 00580a3b: mov edx, dword ptr [ebp - 0x100] */ r_edx = R32((u32)(r_ebp+0xffffff00u));
    /* 00580a41: mov dword ptr [ebp - 0x94], edx */ W32((u32)(r_ebp+0xffffff6cu), r_edx);
    /* 00580a47: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00580a4b: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00580a4e: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 00580a54: mov edx, dword ptr [ebp - 0x94] */ r_edx = R32((u32)(r_ebp+0xffffff6cu));
    /* 00580a5a: mov dword ptr [ecx + eax*4 + 0x4098], edx */ W32((u32)(r_ecx+r_eax*4+0x4098u), r_edx);
    /* 00580a61: push 0x6cc040 */ { u32 v = 0x6cc040u; r_esp -= 4; W32(r_esp, v); }
    /* 00580a66: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00580a69: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 00580a6f: mov edx, dword ptr [ecx + eax*4 + 0x4098] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x4098u));
    /* 00580a76: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00580a79: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 00580a7f: mov ecx, dword ptr [ecx + eax*4 + 0x4098] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x4098u));
    /* 00580a86: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00580a88: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00580a8e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x580a90u); call_ind(t); }
    /* 00580a90: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00580a91: mov ecx, esp */ r_ecx = r_esp;
    /* 00580a93: mov dx, word ptr [0x75ee1c] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 00580a9a: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
    /* 00580a9d: mov al, byte ptr [0x75ee1e] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 00580aa2: mov byte ptr [ecx + 2], al */ W8((u32)(r_ecx+0x2u), (u8)r_eax);
    /* 00580aa5: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00580aa7: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 00580aa9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00580aac: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 00580ab2: mov ecx, dword ptr [edx + ecx*4 + 0x4098] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x4098u));
    /* 00580ab9: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x580abeu); f_005ecd00();
    /* 00580abe: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00580ac1: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 00580ac7: mov edx, dword ptr [ecx + eax*4 + 0x4098] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x4098u));
    /* 00580ace: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00580ad1: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 00580ad7: mov ecx, dword ptr [ecx + eax*4 + 0x4098] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x4098u));
    /* 00580ade: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00580ae0: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00580ae3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x580ae5u); call_ind(t); }
    /* 00580ae5: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 00580ae7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00580aea: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 00580af0: mov ecx, dword ptr [edx + ecx*4 + 0x4098] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x4098u));
    /* 00580af7: call 0x5ecc60 */ r_esp -= 4; W32(r_esp, 0x580afcu); f_005ecc60();
    /* 00580afc: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 00580afe: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00580b01: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 00580b07: mov ecx, dword ptr [ecx + eax*4 + 0x4098] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x4098u));
    /* 00580b0e: call 0x5eccb0 */ r_esp -= 4; W32(r_esp, 0x580b13u); f_005eccb0();
    /* 00580b13: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 00580b19: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 00580b1c: add eax, 0x32 */ {  u32 a = r_eax; u32 b = 0x32u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00580b1f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00580b20: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00580b23: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 00580b29: mov eax, dword ptr [edx + ecx*4 + 0x4098] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x4098u));
    /* 00580b30: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00580b33: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 00580b39: mov ecx, dword ptr [edx + ecx*4 + 0x4098] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x4098u));
    /* 00580b40: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00580b42: mov edx, dword ptr [eax + 0x6c] */ r_edx = R32((u32)(r_eax+0x6cu));
    /* 00580b45: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x580b47u); call_ind(t); }
    /* 00580b47: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00580b4a: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 00580b50: mov edx, dword ptr [ecx + eax*4 + 0x4098] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x4098u));
    /* 00580b57: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00580b5a: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 00580b60: mov ecx, dword ptr [ecx + eax*4 + 0x4098] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x4098u));
    /* 00580b67: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00580b69: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00580b6c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x580b6eu); call_ind(t); }
    /* 00580b6e: jmp 0x5809eb */ goto L_005809eb;
L_00580b73:; BB(0x00580b73);
    /* 00580b73: mov dword ptr [ebp - 0x28], 0x15 */ W32((u32)(r_ebp+0xffffffd8u), 0x15u);
    /* 00580b7a: mov dword ptr [ebp - 0x24], 0x13 */ W32((u32)(r_ebp+0xffffffdcu), 0x13u);
    /* 00580b81: mov dword ptr [ebp - 0x20], 0x134 */ W32((u32)(r_ebp+0xffffffe0u), 0x134u);
    /* 00580b88: mov dword ptr [ebp - 0x18], 0x12d */ W32((u32)(r_ebp+0xffffffe8u), 0x12du);
    /* 00580b8f: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00580b96: jmp 0x580ba1 */ goto L_00580ba1;
L_00580b98:; BB(0x00580b98);
    /* 00580b98: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00580b9b: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00580b9e: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_00580ba1:; BB(0x00580ba1);
    /* 00580ba1: cmp dword ptr [ebp - 0x10], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00580ba5: jge 0x580c3e */ if ((fS==fO)) goto L_00580c3e;
L_00580bab:; BB(0x00580bab);
    /* 00580bab: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00580bb2: jmp 0x580bbd */ goto L_00580bbd;
L_00580bb4:; BB(0x00580bb4);
    /* 00580bb4: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00580bb7: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00580bba: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
L_00580bbd:; BB(0x00580bbd);
    /* 00580bbd: cmp dword ptr [ebp - 0x30], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00580bc1: jge 0x580c32 */ if ((fS==fO)) goto L_00580c32;
L_00580bc3:; BB(0x00580bc3);
    /* 00580bc3: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00580bca: jmp 0x580bd5 */ goto L_00580bd5;
L_00580bcc:; BB(0x00580bcc);
    /* 00580bcc: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00580bcf: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00580bd2: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
L_00580bd5:; BB(0x00580bd5);
    /* 00580bd5: cmp dword ptr [ebp - 0x2c], 0xa */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00580bd9: jge 0x580c30 */ if ((fS==fO)) goto L_00580c30;
L_00580bdb:; BB(0x00580bdb);
    /* 00580bdb: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00580bde: imul ecx, ecx, 0x28 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x28u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00580be1: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00580be4: imul edx, edx, 0xa */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xau; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00580be7: add ecx, dword ptr [ebp - 0x2c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffd4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00580bea: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00580bec: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 00580bef: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00580bf2: imul eax, dword ptr [ebp - 0x24] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xffffffdcu)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00580bf6: add eax, dword ptr [ebp - 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00580bf9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00580bfa: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00580bfd: imul ecx, dword ptr [ebp - 0x28] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xffffffd8u)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00580c01: add ecx, dword ptr [ebp - 0x20] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00580c04: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00580c05: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00580c08: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 00580c0e: mov ecx, dword ptr [eax + edx*4 + 0x4098] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4098u));
    /* 00580c15: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00580c18: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 00580c1e: mov edx, dword ptr [eax + edx*4 + 0x4098] */ r_edx = R32((u32)(r_eax+r_edx*4+0x4098u));
    /* 00580c25: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00580c27: mov ecx, edx */ r_ecx = r_edx;
    /* 00580c29: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 00580c2c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x580c2eu); call_ind(t); }
    /* 00580c2e: jmp 0x580bcc */ goto L_00580bcc;
L_00580c30:; BB(0x00580c30);
    /* 00580c30: jmp 0x580bb4 */ goto L_00580bb4;
L_00580c32:; BB(0x00580c32);
    /* 00580c32: mov dword ptr [ebp - 0x18], 0x185 */ W32((u32)(r_ebp+0xffffffe8u), 0x185u);
    /* 00580c39: jmp 0x580b98 */ goto L_00580b98;
L_00580c3e:; BB(0x00580c3e);
    /* 00580c3e: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00580c45: jmp 0x580c50 */ goto L_00580c50;
L_00580c47:; BB(0x00580c47);
    /* 00580c47: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00580c4a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00580c4d: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_00580c50:; BB(0x00580c50);
    /* 00580c50: cmp dword ptr [ebp - 0x10], 0x50 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00580c54: jge 0x580d60 */ if ((fS==fO)) goto L_00580d60;
L_00580c5a:; BB(0x00580c5a);
    /* 00580c5a: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 00580c5f: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x580c64u); f_00686d82();
    /* 00580c64: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00580c67: mov dword ptr [ebp - 0xa0], eax */ W32((u32)(r_ebp+0xffffff60u), r_eax);
    /* 00580c6d: mov byte ptr [ebp - 4], 0xc */ W8((u32)(r_ebp+0xfffffffcu), 0xcu);
    /* 00580c71: cmp dword ptr [ebp - 0xa0], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff60u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00580c78: je 0x580c8d */ if (fZ) goto L_00580c8d;
L_00580c7a:; BB(0x00580c7a);
    /* 00580c7a: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 00580c80: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x580c85u); f_005eaaf0();
    /* 00580c85: mov dword ptr [ebp - 0x104], eax */ W32((u32)(r_ebp+0xfffffefcu), r_eax);
    /* 00580c8b: jmp 0x580c97 */ goto L_00580c97;
L_00580c8d:; BB(0x00580c8d);
    /* 00580c8d: mov dword ptr [ebp - 0x104], 0 */ W32((u32)(r_ebp+0xfffffefcu), 0x0u);
L_00580c97:; BB(0x00580c97);
    /* 00580c97: mov ecx, dword ptr [ebp - 0x104] */ r_ecx = R32((u32)(r_ebp+0xfffffefcu));
    /* 00580c9d: mov dword ptr [ebp - 0x9c], ecx */ W32((u32)(r_ebp+0xffffff64u), r_ecx);
    /* 00580ca3: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00580ca7: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00580caa: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 00580cb0: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00580cb6: mov dword ptr [eax + edx*4 + 0x41d8], ecx */ W32((u32)(r_eax+r_edx*4+0x41d8u), r_ecx);
    /* 00580cbd: push 0x30dfee */ { u32 v = 0x30dfeeu; r_esp -= 4; W32(r_esp, v); }
    /* 00580cc2: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00580cc5: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 00580ccb: mov ecx, dword ptr [eax + edx*4 + 0x41d8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x41d8u));
    /* 00580cd2: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x580cd7u); f_005eaf00();
    /* 00580cd7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00580cda: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 00580ce0: mov eax, dword ptr [edx + ecx*4 + 0x41d8] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x41d8u));
    /* 00580ce7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00580cea: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 00580cf0: mov ecx, dword ptr [edx + ecx*4 + 0x41d8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x41d8u));
    /* 00580cf7: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00580cf9: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 00580cfc: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x580cfeu); call_ind(t); }
    /* 00580cfe: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 00580d04: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00580d07: add ecx, 0x32 */ {  u32 a = r_ecx; u32 b = 0x32u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00580d0a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00580d0b: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00580d0e: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 00580d14: mov ecx, dword ptr [eax + edx*4 + 0x41d8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x41d8u));
    /* 00580d1b: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00580d1e: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 00580d24: mov edx, dword ptr [eax + edx*4 + 0x41d8] */ r_edx = R32((u32)(r_eax+r_edx*4+0x41d8u));
    /* 00580d2b: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00580d2d: mov ecx, edx */ r_ecx = r_edx;
    /* 00580d2f: mov edx, dword ptr [eax + 0x6c] */ r_edx = R32((u32)(r_eax+0x6cu));
    /* 00580d32: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x580d34u); call_ind(t); }
    /* 00580d34: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00580d37: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 00580d3d: mov edx, dword ptr [ecx + eax*4 + 0x41d8] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x41d8u));
    /* 00580d44: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00580d47: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 00580d4d: mov ecx, dword ptr [ecx + eax*4 + 0x41d8] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x41d8u));
    /* 00580d54: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00580d56: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00580d59: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x580d5bu); call_ind(t); }
    /* 00580d5b: jmp 0x580c47 */ goto L_00580c47;
L_00580d60:; BB(0x00580d60);
    /* 00580d60: mov dword ptr [ebp - 0x28], 0x15 */ W32((u32)(r_ebp+0xffffffd8u), 0x15u);
    /* 00580d67: mov dword ptr [ebp - 0x24], 0x13 */ W32((u32)(r_ebp+0xffffffdcu), 0x13u);
    /* 00580d6e: mov dword ptr [ebp - 0x20], 0x132 */ W32((u32)(r_ebp+0xffffffe0u), 0x132u);
    /* 00580d75: mov dword ptr [ebp - 0x18], 0x131 */ W32((u32)(r_ebp+0xffffffe8u), 0x131u);
    /* 00580d7c: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00580d83: jmp 0x580d8e */ goto L_00580d8e;
L_00580d85:; BB(0x00580d85);
    /* 00580d85: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00580d88: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00580d8b: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_00580d8e:; BB(0x00580d8e);
    /* 00580d8e: cmp dword ptr [ebp - 0x10], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00580d92: jge 0x580e2b */ if ((fS==fO)) goto L_00580e2b;
L_00580d98:; BB(0x00580d98);
    /* 00580d98: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00580d9f: jmp 0x580daa */ goto L_00580daa;
L_00580da1:; BB(0x00580da1);
    /* 00580da1: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00580da4: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00580da7: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
L_00580daa:; BB(0x00580daa);
    /* 00580daa: cmp dword ptr [ebp - 0x30], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00580dae: jge 0x580e1f */ if ((fS==fO)) goto L_00580e1f;
L_00580db0:; BB(0x00580db0);
    /* 00580db0: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00580db7: jmp 0x580dc2 */ goto L_00580dc2;
L_00580db9:; BB(0x00580db9);
    /* 00580db9: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00580dbc: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00580dbf: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
L_00580dc2:; BB(0x00580dc2);
    /* 00580dc2: cmp dword ptr [ebp - 0x2c], 0xa */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00580dc6: jge 0x580e1d */ if ((fS==fO)) goto L_00580e1d;
L_00580dc8:; BB(0x00580dc8);
    /* 00580dc8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00580dcb: imul ecx, ecx, 0x28 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x28u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00580dce: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00580dd1: imul edx, edx, 0xa */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xau; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00580dd4: add ecx, dword ptr [ebp - 0x2c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffd4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00580dd7: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00580dd9: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 00580ddc: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00580ddf: imul eax, dword ptr [ebp - 0x24] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xffffffdcu)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00580de3: add eax, dword ptr [ebp - 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00580de6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00580de7: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00580dea: imul ecx, dword ptr [ebp - 0x28] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xffffffd8u)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00580dee: add ecx, dword ptr [ebp - 0x20] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00580df1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00580df2: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00580df5: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 00580dfb: mov ecx, dword ptr [eax + edx*4 + 0x41d8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x41d8u));
    /* 00580e02: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00580e05: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 00580e0b: mov edx, dword ptr [eax + edx*4 + 0x41d8] */ r_edx = R32((u32)(r_eax+r_edx*4+0x41d8u));
    /* 00580e12: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00580e14: mov ecx, edx */ r_ecx = r_edx;
    /* 00580e16: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 00580e19: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x580e1bu); call_ind(t); }
    /* 00580e1b: jmp 0x580db9 */ goto L_00580db9;
L_00580e1d:; BB(0x00580e1d);
    /* 00580e1d: jmp 0x580da1 */ goto L_00580da1;
L_00580e1f:; BB(0x00580e1f);
    /* 00580e1f: mov dword ptr [ebp - 0x18], 0x189 */ W32((u32)(r_ebp+0xffffffe8u), 0x189u);
    /* 00580e26: jmp 0x580d85 */ goto L_00580d85;
L_00580e2b:; BB(0x00580e2b);
    /* 00580e2b: push 0x1e0 */ { u32 v = 0x1e0u; r_esp -= 4; W32(r_esp, v); }
    /* 00580e30: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x580e35u); f_00686d82();
    /* 00580e35: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00580e38: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 00580e3e: mov byte ptr [ebp - 4], 0xd */ W8((u32)(r_ebp+0xfffffffcu), 0xdu);
    /* 00580e42: cmp dword ptr [ebp - 0xa8], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff58u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00580e49: je 0x580e65 */ if (fZ) goto L_00580e65;
L_00580e4b:; BB(0x00580e4b);
    /* 00580e4b: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 00580e51: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00580e52: mov ecx, dword ptr [ebp - 0xa8] */ r_ecx = R32((u32)(r_ebp+0xffffff58u));
    /* 00580e58: call 0x582610 */ r_esp -= 4; W32(r_esp, 0x580e5du); f_00582610();
    /* 00580e5d: mov dword ptr [ebp - 0x108], eax */ W32((u32)(r_ebp+0xfffffef8u), r_eax);
    /* 00580e63: jmp 0x580e6f */ goto L_00580e6f;
L_00580e65:; BB(0x00580e65);
    /* 00580e65: mov dword ptr [ebp - 0x108], 0 */ W32((u32)(r_ebp+0xfffffef8u), 0x0u);
L_00580e6f:; BB(0x00580e6f);
    /* 00580e6f: mov ecx, dword ptr [ebp - 0x108] */ r_ecx = R32((u32)(r_ebp+0xfffffef8u));
    /* 00580e75: mov dword ptr [ebp - 0xa4], ecx */ W32((u32)(r_ebp+0xffffff5cu), r_ecx);
    /* 00580e7b: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00580e7f: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 00580e85: mov eax, dword ptr [ebp - 0xa4] */ r_eax = R32((u32)(r_ebp+0xffffff5cu));
    /* 00580e8b: mov dword ptr [edx + 0x4328], eax */ W32((u32)(r_edx+0x4328u), r_eax);
    /* 00580e91: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 00580e97: mov edx, dword ptr [ecx + 0x4328] */ r_edx = R32((u32)(r_ecx+0x4328u));
    /* 00580e9d: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 00580ea3: mov ecx, dword ptr [eax + 0x4328] */ r_ecx = R32((u32)(r_eax+0x4328u));
    /* 00580ea9: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00580eab: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00580eae: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x580eb0u); call_ind(t); }
    /* 00580eb0: push 0x30dfeb */ { u32 v = 0x30dfebu; r_esp -= 4; W32(r_esp, v); }
    /* 00580eb5: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 00580ebb: mov edx, dword ptr [ecx + 0x4328] */ r_edx = R32((u32)(r_ecx+0x4328u));
    /* 00580ec1: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 00580ec7: mov ecx, dword ptr [eax + 0x4328] */ r_ecx = R32((u32)(r_eax+0x4328u));
    /* 00580ecd: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00580ecf: mov eax, dword ptr [edx + 0xc8] */ r_eax = R32((u32)(r_edx+0xc8u));
    /* 00580ed5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x580ed7u); call_ind(t); }
    /* 00580ed7: push 0xf1 */ { u32 v = 0xf1u; r_esp -= 4; W32(r_esp, v); }
    /* 00580edc: push 0x11d */ { u32 v = 0x11du; r_esp -= 4; W32(r_esp, v); }
    /* 00580ee1: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 00580ee7: mov edx, dword ptr [ecx + 0x4328] */ r_edx = R32((u32)(r_ecx+0x4328u));
    /* 00580eed: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 00580ef3: mov ecx, dword ptr [eax + 0x4328] */ r_ecx = R32((u32)(r_eax+0x4328u));
    /* 00580ef9: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00580efb: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00580efe: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x580f00u); call_ind(t); }
    /* 00580f00: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 00580f06: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00580f09: add edx, 0x32 */ {  u32 a = r_edx; u32 b = 0x32u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00580f0c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00580f0d: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 00580f13: mov ecx, dword ptr [eax + 0x4328] */ r_ecx = R32((u32)(r_eax+0x4328u));
    /* 00580f19: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 00580f1f: mov eax, dword ptr [edx + 0x4328] */ r_eax = R32((u32)(r_edx+0x4328u));
    /* 00580f25: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00580f27: mov ecx, eax */ r_ecx = r_eax;
    /* 00580f29: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00580f2c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x580f2eu); call_ind(t); }
    /* 00580f2e: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00580f30: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 00580f36: mov ecx, dword ptr [ecx + 0x4328] */ r_ecx = R32((u32)(r_ecx+0x4328u));
    /* 00580f3c: call 0x5f53e0 */ r_esp -= 4; W32(r_esp, 0x580f41u); f_005f53e0();
    /* 00580f41: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 00580f47: mov eax, dword ptr [edx + 0x4328] */ r_eax = R32((u32)(r_edx+0x4328u));
    /* 00580f4d: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 00580f53: mov ecx, dword ptr [ecx + 0x4328] */ r_ecx = R32((u32)(r_ecx+0x4328u));
    /* 00580f59: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00580f5b: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00580f5e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x580f60u); call_ind(t); }
    /* 00580f60: push 0x1e0 */ { u32 v = 0x1e0u; r_esp -= 4; W32(r_esp, v); }
    /* 00580f65: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x580f6au); f_00686d82();
    /* 00580f6a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00580f6d: mov dword ptr [ebp - 0xb0], eax */ W32((u32)(r_ebp+0xffffff50u), r_eax);
    /* 00580f73: mov byte ptr [ebp - 4], 0xe */ W8((u32)(r_ebp+0xfffffffcu), 0xeu);
    /* 00580f77: cmp dword ptr [ebp - 0xb0], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff50u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00580f7e: je 0x580f9a */ if (fZ) goto L_00580f9a;
L_00580f80:; BB(0x00580f80);
    /* 00580f80: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 00580f86: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00580f87: mov ecx, dword ptr [ebp - 0xb0] */ r_ecx = R32((u32)(r_ebp+0xffffff50u));
    /* 00580f8d: call 0x582610 */ r_esp -= 4; W32(r_esp, 0x580f92u); f_00582610();
    /* 00580f92: mov dword ptr [ebp - 0x10c], eax */ W32((u32)(r_ebp+0xfffffef4u), r_eax);
    /* 00580f98: jmp 0x580fa4 */ goto L_00580fa4;
L_00580f9a:; BB(0x00580f9a);
    /* 00580f9a: mov dword ptr [ebp - 0x10c], 0 */ W32((u32)(r_ebp+0xfffffef4u), 0x0u);
L_00580fa4:; BB(0x00580fa4);
    /* 00580fa4: mov edx, dword ptr [ebp - 0x10c] */ r_edx = R32((u32)(r_ebp+0xfffffef4u));
    /* 00580faa: mov dword ptr [ebp - 0xac], edx */ W32((u32)(r_ebp+0xffffff54u), r_edx);
    /* 00580fb0: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00580fb4: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 00580fba: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 00580fc0: mov dword ptr [eax + 0x432c], ecx */ W32((u32)(r_eax+0x432cu), r_ecx);
    /* 00580fc6: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 00580fcc: mov eax, dword ptr [edx + 0x432c] */ r_eax = R32((u32)(r_edx+0x432cu));
    /* 00580fd2: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 00580fd8: mov ecx, dword ptr [ecx + 0x432c] */ r_ecx = R32((u32)(r_ecx+0x432cu));
    /* 00580fde: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00580fe0: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00580fe3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x580fe5u); call_ind(t); }
    /* 00580fe5: push 0x30dfec */ { u32 v = 0x30dfecu; r_esp -= 4; W32(r_esp, v); }
    /* 00580fea: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 00580ff0: mov edx, dword ptr [ecx + 0x432c] */ r_edx = R32((u32)(r_ecx+0x432cu));
    /* 00580ff6: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 00580ffc: mov ecx, dword ptr [eax + 0x432c] */ r_ecx = R32((u32)(r_eax+0x432cu));
    /* 00581002: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00581004: mov eax, dword ptr [edx + 0xc8] */ r_eax = R32((u32)(r_edx+0xc8u));
    /* 0058100a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58100cu); call_ind(t); }
    /* 0058100c: push 0xf1 */ { u32 v = 0xf1u; r_esp -= 4; W32(r_esp, v); }
    /* 00581011: push 0x20f */ { u32 v = 0x20fu; r_esp -= 4; W32(r_esp, v); }
    /* 00581016: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 0058101c: mov edx, dword ptr [ecx + 0x432c] */ r_edx = R32((u32)(r_ecx+0x432cu));
    /* 00581022: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 00581028: mov ecx, dword ptr [eax + 0x432c] */ r_ecx = R32((u32)(r_eax+0x432cu));
    /* 0058102e: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00581030: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00581033: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x581035u); call_ind(t); }
    /* 00581035: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 0058103b: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0058103e: add edx, 0x32 */ {  u32 a = r_edx; u32 b = 0x32u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00581041: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00581042: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 00581048: mov ecx, dword ptr [eax + 0x432c] */ r_ecx = R32((u32)(r_eax+0x432cu));
    /* 0058104e: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 00581054: mov eax, dword ptr [edx + 0x432c] */ r_eax = R32((u32)(r_edx+0x432cu));
    /* 0058105a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0058105c: mov ecx, eax */ r_ecx = r_eax;
    /* 0058105e: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00581061: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x581063u); call_ind(t); }
    /* 00581063: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00581065: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 0058106b: mov ecx, dword ptr [ecx + 0x432c] */ r_ecx = R32((u32)(r_ecx+0x432cu));
    /* 00581071: call 0x5f53e0 */ r_esp -= 4; W32(r_esp, 0x581076u); f_005f53e0();
    /* 00581076: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 0058107c: mov eax, dword ptr [edx + 0x432c] */ r_eax = R32((u32)(r_edx+0x432cu));
    /* 00581082: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 00581088: mov ecx, dword ptr [ecx + 0x432c] */ r_ecx = R32((u32)(r_ecx+0x432cu));
    /* 0058108e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00581090: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00581093: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x581095u); call_ind(t); }
    /* 00581095: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 0058109b: mov dword ptr [ecx + 0x4078], 0 */ W32((u32)(r_ecx+0x4078u), 0x0u);
    /* 005810a5: mov dword ptr [ebp - 0x14], 0xffffffff */ W32((u32)(r_ebp+0xffffffecu), 0xffffffffu);
    /* 005810ac: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005810b3: jmp 0x5810be */ goto L_005810be;
L_005810b5:; BB(0x005810b5);
    /* 005810b5: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005810b8: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005810bb: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_005810be:; BB(0x005810be);
    /* 005810be: cmp dword ptr [ebp - 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005810c2: jge 0x581100 */ if ((fS==fO)) goto L_00581100;
L_005810c4:; BB(0x005810c4);
    /* 005810c4: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005810c7: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 005810cd: cmp dword ptr [ecx + eax*4 + 0x3a18], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x3a18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005810d5: je 0x5810fe */ if (fZ) goto L_005810fe;
L_005810d7:; BB(0x005810d7);
    /* 005810d7: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 005810dd: mov eax, dword ptr [edx + 0x4078] */ r_eax = R32((u32)(r_edx+0x4078u));
    /* 005810e3: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005810e6: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 005810ec: mov dword ptr [ecx + 0x4078], eax */ W32((u32)(r_ecx+0x4078u), r_eax);
    /* 005810f2: cmp dword ptr [ebp - 0x14], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005810f6: jne 0x5810fe */ if (!fZ) goto L_005810fe;
L_005810f8:; BB(0x005810f8);
    /* 005810f8: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005810fb: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
L_005810fe:; BB(0x005810fe);
    /* 005810fe: jmp 0x5810b5 */ goto L_005810b5;
L_00581100:; BB(0x00581100);
    /* 00581100: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 00581106: cmp dword ptr [eax + 0x4078], 0 */ {  u32 a = R32((u32)(r_eax+0x4078u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058110d: je 0x581136 */ if (fZ) goto L_00581136;
L_0058110f:; BB(0x0058110f);
    /* 0058110f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00581112: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00581113: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 00581119: call 0x581610 */ r_esp -= 4; W32(r_esp, 0x58111eu); f_00581610();
    /* 0058111e: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 00581124: call 0x5822e0 */ r_esp -= 4; W32(r_esp, 0x581129u); f_005822e0();
    /* 00581129: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 0058112f: call 0x581b70 */ r_esp -= 4; W32(r_esp, 0x581134u); f_00581b70();
    /* 00581134: jmp 0x58114c */ goto L_0058114c;
L_00581136:; BB(0x00581136);
    /* 00581136: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 0058113c: call 0x5815a0 */ r_esp -= 4; W32(r_esp, 0x581141u); f_005815a0();
    /* 00581141: mov ecx, dword ptr [0x79357c] */ r_ecx = R32((u32)(0x79357cu));
    /* 00581147: call 0x5dc610 */ r_esp -= 4; W32(r_esp, 0x58114cu); f_005dc610();
L_0058114c:; BB(0x0058114c);
    /* 0058114c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00581153: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 00581159: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058115c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00581163: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00581164: mov esp, ebp */ r_esp = r_ebp;
    /* 00581166: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00581167: ret  */ FN_RET(0x0057f820); r_esp += 4; return;
}

void f_00581170(void) /* KenoTicketHand::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00581170);
    /* 00581170: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00581171: mov ebp, esp */ r_ebp = r_esp;
    /* 00581173: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00581175: push 0x6a6aa4 */ { u32 v = 0x6a6aa4u; r_esp -= 4; W32(r_esp, v); }
    /* 0058117a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00581180: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00581181: sub esp, 0x8c */ {  u32 a = r_esp; u32 b = 0x8cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00581187: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0058118c: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0058118e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058118f: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00581192: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00581198: mov dword ptr [ebp - 0x6c], ecx */ W32((u32)(r_ebp+0xffffff94u), r_ecx);
    /* 0058119b: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 0058119e: mov dword ptr [eax], 0x6cc054 */ W32((u32)(r_eax), 0x6cc054u);
    /* 005811a4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005811ab: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005811b2: jmp 0x5811bd */ goto L_005811bd;
L_005811b4:; BB(0x005811b4);
    /* 005811b4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005811b7: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005811ba: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_005811bd:; BB(0x005811bd);
    /* 005811bd: cmp dword ptr [ebp - 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005811c1: jge 0x58121c */ if ((fS==fO)) goto L_0058121c;
L_005811c3:; BB(0x005811c3);
    /* 005811c3: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005811c6: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 005811c9: cmp dword ptr [eax + edx*4 + 0x4320], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x4320u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005811d1: je 0x58121a */ if (fZ) goto L_0058121a;
L_005811d3:; BB(0x005811d3);
    /* 005811d3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005811d6: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 005811d9: mov eax, dword ptr [edx + ecx*4 + 0x4320] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x4320u));
    /* 005811e0: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005811e3: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005811e6: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005811e9: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005811ed: je 0x581202 */ if (fZ) goto L_00581202;
L_005811ef:; BB(0x005811ef);
    /* 005811ef: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005811f1: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005811f4: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005811f6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005811f9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005811fb: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5811fdu); call_ind(t); }
    /* 005811fd: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 00581200: jmp 0x581209 */ goto L_00581209;
L_00581202:; BB(0x00581202);
    /* 00581202: mov dword ptr [ebp - 0x70], 0 */ W32((u32)(r_ebp+0xffffff90u), 0x0u);
L_00581209:; BB(0x00581209);
    /* 00581209: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0058120c: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0058120f: mov dword ptr [ecx + eax*4 + 0x4320], 0 */ W32((u32)(r_ecx+r_eax*4+0x4320u), 0x0u);
L_0058121a:; BB(0x0058121a);
    /* 0058121a: jmp 0x5811b4 */ goto L_005811b4;
L_0058121c:; BB(0x0058121c);
    /* 0058121c: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 0058121f: cmp dword ptr [edx + 0x4080], 0 */ {  u32 a = R32((u32)(r_edx+0x4080u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00581226: je 0x581267 */ if (fZ) goto L_00581267;
L_00581228:; BB(0x00581228);
    /* 00581228: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 0058122b: mov ecx, dword ptr [eax + 0x4080] */ r_ecx = R32((u32)(r_eax+0x4080u));
    /* 00581231: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00581234: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00581237: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0058123a: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058123e: je 0x581253 */ if (fZ) goto L_00581253;
L_00581240:; BB(0x00581240);
    /* 00581240: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00581242: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00581245: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00581247: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0058124a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0058124c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58124eu); call_ind(t); }
    /* 0058124e: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 00581251: jmp 0x58125a */ goto L_0058125a;
L_00581253:; BB(0x00581253);
    /* 00581253: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
L_0058125a:; BB(0x0058125a);
    /* 0058125a: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0058125d: mov dword ptr [ecx + 0x4080], 0 */ W32((u32)(r_ecx+0x4080u), 0x0u);
L_00581267:; BB(0x00581267);
    /* 00581267: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 0058126a: cmp dword ptr [edx + 0x4084], 0 */ {  u32 a = R32((u32)(r_edx+0x4084u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00581271: je 0x5812b2 */ if (fZ) goto L_005812b2;
L_00581273:; BB(0x00581273);
    /* 00581273: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 00581276: mov ecx, dword ptr [eax + 0x4084] */ r_ecx = R32((u32)(r_eax+0x4084u));
    /* 0058127c: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0058127f: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00581282: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 00581285: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00581289: je 0x58129e */ if (fZ) goto L_0058129e;
L_0058128b:; BB(0x0058128b);
    /* 0058128b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0058128d: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00581290: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00581292: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00581295: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00581297: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x581299u); call_ind(t); }
    /* 00581299: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 0058129c: jmp 0x5812a5 */ goto L_005812a5;
L_0058129e:; BB(0x0058129e);
    /* 0058129e: mov dword ptr [ebp - 0x78], 0 */ W32((u32)(r_ebp+0xffffff88u), 0x0u);
L_005812a5:; BB(0x005812a5);
    /* 005812a5: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 005812a8: mov dword ptr [ecx + 0x4084], 0 */ W32((u32)(r_ecx+0x4084u), 0x0u);
L_005812b2:; BB(0x005812b2);
    /* 005812b2: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 005812b5: cmp dword ptr [edx + 0x4088], 0 */ {  u32 a = R32((u32)(r_edx+0x4088u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005812bc: je 0x5812fd */ if (fZ) goto L_005812fd;
L_005812be:; BB(0x005812be);
    /* 005812be: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 005812c1: mov ecx, dword ptr [eax + 0x4088] */ r_ecx = R32((u32)(r_eax+0x4088u));
    /* 005812c7: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 005812ca: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005812cd: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 005812d0: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005812d4: je 0x5812e9 */ if (fZ) goto L_005812e9;
L_005812d6:; BB(0x005812d6);
    /* 005812d6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005812d8: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005812db: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005812dd: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005812e0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005812e2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5812e4u); call_ind(t); }
    /* 005812e4: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 005812e7: jmp 0x5812f0 */ goto L_005812f0;
L_005812e9:; BB(0x005812e9);
    /* 005812e9: mov dword ptr [ebp - 0x7c], 0 */ W32((u32)(r_ebp+0xffffff84u), 0x0u);
L_005812f0:; BB(0x005812f0);
    /* 005812f0: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 005812f3: mov dword ptr [ecx + 0x4088], 0 */ W32((u32)(r_ecx+0x4088u), 0x0u);
L_005812fd:; BB(0x005812fd);
    /* 005812fd: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 00581300: cmp dword ptr [edx + 0x408c], 0 */ {  u32 a = R32((u32)(r_edx+0x408cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00581307: je 0x581348 */ if (fZ) goto L_00581348;
L_00581309:; BB(0x00581309);
    /* 00581309: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 0058130c: mov ecx, dword ptr [eax + 0x408c] */ r_ecx = R32((u32)(r_eax+0x408cu));
    /* 00581312: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 00581315: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00581318: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 0058131b: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058131f: je 0x581334 */ if (fZ) goto L_00581334;
L_00581321:; BB(0x00581321);
    /* 00581321: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00581323: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00581326: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00581328: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0058132b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0058132d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58132fu); call_ind(t); }
    /* 0058132f: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 00581332: jmp 0x58133b */ goto L_0058133b;
L_00581334:; BB(0x00581334);
    /* 00581334: mov dword ptr [ebp - 0x80], 0 */ W32((u32)(r_ebp+0xffffff80u), 0x0u);
L_0058133b:; BB(0x0058133b);
    /* 0058133b: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0058133e: mov dword ptr [ecx + 0x408c], 0 */ W32((u32)(r_ecx+0x408cu), 0x0u);
L_00581348:; BB(0x00581348);
    /* 00581348: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 0058134b: cmp dword ptr [edx + 0x4090], 0 */ {  u32 a = R32((u32)(r_edx+0x4090u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00581352: je 0x581399 */ if (fZ) goto L_00581399;
L_00581354:; BB(0x00581354);
    /* 00581354: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 00581357: mov ecx, dword ptr [eax + 0x4090] */ r_ecx = R32((u32)(r_eax+0x4090u));
    /* 0058135d: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 00581360: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00581363: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 00581366: cmp dword ptr [ebp - 0x3c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058136a: je 0x581382 */ if (fZ) goto L_00581382;
L_0058136c:; BB(0x0058136c);
    /* 0058136c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0058136e: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00581371: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00581373: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00581376: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00581378: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58137au); call_ind(t); }
    /* 0058137a: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 00581380: jmp 0x58138c */ goto L_0058138c;
L_00581382:; BB(0x00581382);
    /* 00581382: mov dword ptr [ebp - 0x84], 0 */ W32((u32)(r_ebp+0xffffff7cu), 0x0u);
L_0058138c:; BB(0x0058138c);
    /* 0058138c: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0058138f: mov dword ptr [ecx + 0x4090], 0 */ W32((u32)(r_ecx+0x4090u), 0x0u);
L_00581399:; BB(0x00581399);
    /* 00581399: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 0058139c: cmp dword ptr [edx + 0x4094], 0 */ {  u32 a = R32((u32)(r_edx+0x4094u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005813a3: je 0x5813ea */ if (fZ) goto L_005813ea;
L_005813a5:; BB(0x005813a5);
    /* 005813a5: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 005813a8: mov ecx, dword ptr [eax + 0x4094] */ r_ecx = R32((u32)(r_eax+0x4094u));
    /* 005813ae: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 005813b1: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005813b4: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 005813b7: cmp dword ptr [ebp - 0x44], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005813bb: je 0x5813d3 */ if (fZ) goto L_005813d3;
L_005813bd:; BB(0x005813bd);
    /* 005813bd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005813bf: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 005813c2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005813c4: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005813c7: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005813c9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5813cbu); call_ind(t); }
    /* 005813cb: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 005813d1: jmp 0x5813dd */ goto L_005813dd;
L_005813d3:; BB(0x005813d3);
    /* 005813d3: mov dword ptr [ebp - 0x88], 0 */ W32((u32)(r_ebp+0xffffff78u), 0x0u);
L_005813dd:; BB(0x005813dd);
    /* 005813dd: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 005813e0: mov dword ptr [ecx + 0x4094], 0 */ W32((u32)(r_ecx+0x4094u), 0x0u);
L_005813ea:; BB(0x005813ea);
    /* 005813ea: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 005813ed: cmp dword ptr [edx + 0x4318], 0 */ {  u32 a = R32((u32)(r_edx+0x4318u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005813f4: je 0x58143b */ if (fZ) goto L_0058143b;
L_005813f6:; BB(0x005813f6);
    /* 005813f6: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 005813f9: mov ecx, dword ptr [eax + 0x4318] */ r_ecx = R32((u32)(r_eax+0x4318u));
    /* 005813ff: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 00581402: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00581405: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 00581408: cmp dword ptr [ebp - 0x4c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058140c: je 0x581424 */ if (fZ) goto L_00581424;
L_0058140e:; BB(0x0058140e);
    /* 0058140e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00581410: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00581413: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00581415: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00581418: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0058141a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58141cu); call_ind(t); }
    /* 0058141c: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 00581422: jmp 0x58142e */ goto L_0058142e;
L_00581424:; BB(0x00581424);
    /* 00581424: mov dword ptr [ebp - 0x8c], 0 */ W32((u32)(r_ebp+0xffffff74u), 0x0u);
L_0058142e:; BB(0x0058142e);
    /* 0058142e: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 00581431: mov dword ptr [ecx + 0x4318], 0 */ W32((u32)(r_ecx+0x4318u), 0x0u);
L_0058143b:; BB(0x0058143b);
    /* 0058143b: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 0058143e: cmp dword ptr [edx + 0x431c], 0 */ {  u32 a = R32((u32)(r_edx+0x431cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00581445: je 0x58148c */ if (fZ) goto L_0058148c;
L_00581447:; BB(0x00581447);
    /* 00581447: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 0058144a: mov ecx, dword ptr [eax + 0x431c] */ r_ecx = R32((u32)(r_eax+0x431cu));
    /* 00581450: mov dword ptr [ebp - 0x58], ecx */ W32((u32)(r_ebp+0xffffffa8u), r_ecx);
    /* 00581453: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00581456: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 00581459: cmp dword ptr [ebp - 0x54], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffacu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058145d: je 0x581475 */ if (fZ) goto L_00581475;
L_0058145f:; BB(0x0058145f);
    /* 0058145f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00581461: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 00581464: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00581466: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00581469: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0058146b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58146du); call_ind(t); }
    /* 0058146d: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 00581473: jmp 0x58147f */ goto L_0058147f;
L_00581475:; BB(0x00581475);
    /* 00581475: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
L_0058147f:; BB(0x0058147f);
    /* 0058147f: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 00581482: mov dword ptr [ecx + 0x431c], 0 */ W32((u32)(r_ecx+0x431cu), 0x0u);
L_0058148c:; BB(0x0058148c);
    /* 0058148c: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00581493: jmp 0x58149e */ goto L_0058149e;
L_00581495:; BB(0x00581495);
    /* 00581495: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00581498: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0058149b: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_0058149e:; BB(0x0058149e);
    /* 0058149e: cmp dword ptr [ebp - 0x10], 0x50 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005814a2: jge 0x581567 */ if ((fS==fO)) goto L_00581567;
L_005814a8:; BB(0x005814a8);
    /* 005814a8: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005814ab: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 005814ae: cmp dword ptr [ecx + eax*4 + 0x4098], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x4098u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005814b6: je 0x581505 */ if (fZ) goto L_00581505;
L_005814b8:; BB(0x005814b8);
    /* 005814b8: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005814bb: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 005814be: mov ecx, dword ptr [eax + edx*4 + 0x4098] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4098u));
    /* 005814c5: mov dword ptr [ebp - 0x60], ecx */ W32((u32)(r_ebp+0xffffffa0u), r_ecx);
    /* 005814c8: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 005814cb: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 005814ce: cmp dword ptr [ebp - 0x5c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005814d2: je 0x5814ea */ if (fZ) goto L_005814ea;
L_005814d4:; BB(0x005814d4);
    /* 005814d4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005814d6: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 005814d9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005814db: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005814de: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005814e0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5814e2u); call_ind(t); }
    /* 005814e2: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 005814e8: jmp 0x5814f4 */ goto L_005814f4;
L_005814ea:; BB(0x005814ea);
    /* 005814ea: mov dword ptr [ebp - 0x94], 0 */ W32((u32)(r_ebp+0xffffff6cu), 0x0u);
L_005814f4:; BB(0x005814f4);
    /* 005814f4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005814f7: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 005814fa: mov dword ptr [edx + ecx*4 + 0x4098], 0 */ W32((u32)(r_edx+r_ecx*4+0x4098u), 0x0u);
L_00581505:; BB(0x00581505);
    /* 00581505: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00581508: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0058150b: cmp dword ptr [ecx + eax*4 + 0x41d8], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x41d8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00581513: je 0x581562 */ if (fZ) goto L_00581562;
L_00581515:; BB(0x00581515);
    /* 00581515: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00581518: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 0058151b: mov ecx, dword ptr [eax + edx*4 + 0x41d8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x41d8u));
    /* 00581522: mov dword ptr [ebp - 0x68], ecx */ W32((u32)(r_ebp+0xffffff98u), r_ecx);
    /* 00581525: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 00581528: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 0058152b: cmp dword ptr [ebp - 0x64], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff9cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058152f: je 0x581547 */ if (fZ) goto L_00581547;
L_00581531:; BB(0x00581531);
    /* 00581531: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00581533: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 00581536: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00581538: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0058153b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0058153d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58153fu); call_ind(t); }
    /* 0058153f: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 00581545: jmp 0x581551 */ goto L_00581551;
L_00581547:; BB(0x00581547);
    /* 00581547: mov dword ptr [ebp - 0x98], 0 */ W32((u32)(r_ebp+0xffffff68u), 0x0u);
L_00581551:; BB(0x00581551);
    /* 00581551: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00581554: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 00581557: mov dword ptr [edx + ecx*4 + 0x41d8], 0 */ W32((u32)(r_edx+r_ecx*4+0x41d8u), 0x0u);
L_00581562:; BB(0x00581562);
    /* 00581562: jmp 0x581495 */ goto L_00581495;
L_00581567:; BB(0x00581567);
    /* 00581567: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0058156e: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 00581571: call 0x5eac00 */ r_esp -= 4; W32(r_esp, 0x581576u); f_005eac00();
    /* 00581576: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00581579: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00581580: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00581581: mov esp, ebp */ r_esp = r_ebp;
    /* 00581583: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00581584: ret  */ FN_RET(0x00581170); r_esp += 4; return;
}

void f_005815a0(void) /* KenoTicketHand::vfunc28 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005815a0);
    /* 005815a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005815a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005815a3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005815a6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005815a9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005815ac: call 0x5eb5a0 */ r_esp -= 4; W32(r_esp, 0x5815b1u); f_005eb5a0();
    /* 005815b1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005815b4: mov ecx, dword ptr [eax + 0x4080] */ r_ecx = R32((u32)(r_eax+0x4080u));
    /* 005815ba: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005815bd: mov eax, dword ptr [edx + 0x4080] */ r_eax = R32((u32)(r_edx+0x4080u));
    /* 005815c3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005815c5: mov ecx, eax */ r_ecx = r_eax;
    /* 005815c7: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005815ca: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5815ccu); call_ind(t); }
    /* 005815cc: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005815cf: call 0x582410 */ r_esp -= 4; W32(r_esp, 0x5815d4u); f_00582410();
    /* 005815d4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005815d7: call 0x582540 */ r_esp -= 4; W32(r_esp, 0x5815dcu); f_00582540();
    /* 005815dc: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005815e3: jmp 0x5815ee */ goto L_005815ee;
L_005815e5:; BB(0x005815e5);
    /* 005815e5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005815e8: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005815eb: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005815ee:; BB(0x005815ee);
    /* 005815ee: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005815f2: jge 0x581608 */ if ((fS==fO)) goto L_00581608;
L_005815f4:; BB(0x005815f4);
    /* 005815f4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005815f7: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005815fa: mov ecx, dword ptr [eax + edx*4 + 0x4320] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4320u));
    /* 00581601: call 0x582750 */ r_esp -= 4; W32(r_esp, 0x581606u); f_00582750();
    /* 00581606: jmp 0x5815e5 */ goto L_005815e5;
L_00581608:; BB(0x00581608);
    /* 00581608: mov esp, ebp */ r_esp = r_ebp;
    /* 0058160a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058160b: ret  */ FN_RET(0x005815a0); r_esp += 4; return;
}

