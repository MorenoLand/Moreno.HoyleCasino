#include "protos.h"

void f_005d8110(void) /* sub_5D8110 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d8110);
    /* 005d8110: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d8111: mov ebp, esp */ r_ebp = r_esp;
    /* 005d8113: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d8116: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005d8119: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005d8120: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 005d8123: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d8124: call dword ptr [0x6b229c] */ { u32 t = R32((u32)(0x6b229cu)); r_esp -= 4; W32(r_esp, 0x5d812au); call_ind(t); }
    /* 005d812a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d812d: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 005d8130: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d8131: call dword ptr [0x6b2298] */ { u32 t = R32((u32)(0x6b2298u)); r_esp -= 4; W32(r_esp, 0x5d8137u); call_ind(t); }
    /* 005d8137: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d813a: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005d813d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d8140: cmp dword ptr [edx + 8], 0x16 */ {  u32 a = R32((u32)(r_edx+0x8u)); u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d8144: jge 0x5d814f */ if ((fS==fO)) goto L_005d814f;
L_005d8146:; BB(0x005d8146);
    /* 005d8146: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d8149: cmp dword ptr [eax + 8], 3 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d814d: jg 0x5d8156 */ if ((!fZ&&fS==fO)) goto L_005d8156;
L_005d814f:; BB(0x005d814f);
    /* 005d814f: mov dword ptr [ebp - 4], 0x406 */ W32((u32)(r_ebp+0xfffffffcu), 0x406u);
L_005d8156:; BB(0x005d8156);
    /* 005d8156: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d8159: cmp dword ptr [ecx + 8], 5 */ {  u32 a = R32((u32)(r_ecx+0x8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d815d: jl 0x5d816f */ if ((fS!=fO)) goto L_005d816f;
L_005d815f:; BB(0x005d815f);
    /* 005d815f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d8162: cmp dword ptr [edx + 8], 0xa */ {  u32 a = R32((u32)(r_edx+0x8u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d8166: jge 0x5d816f */ if ((fS==fO)) goto L_005d816f;
L_005d8168:; BB(0x005d8168);
    /* 005d8168: mov dword ptr [ebp - 4], 0x408 */ W32((u32)(r_ebp+0xfffffffcu), 0x408u);
L_005d816f:; BB(0x005d816f);
    /* 005d816f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d8172: cmp dword ptr [eax + 8], 0xc */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8176: jne 0x5d817f */ if (!fZ) goto L_005d817f;
L_005d8178:; BB(0x005d8178);
    /* 005d8178: mov dword ptr [ebp - 4], 0x407 */ W32((u32)(r_ebp+0xfffffffcu), 0x407u);
L_005d817f:; BB(0x005d817f);
    /* 005d817f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d8182: cmp dword ptr [ecx + 8], 0x11 */ {  u32 a = R32((u32)(r_ecx+0x8u)); u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d8186: jl 0x5d8198 */ if ((fS!=fO)) goto L_005d8198;
L_005d8188:; BB(0x005d8188);
    /* 005d8188: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d818b: cmp dword ptr [edx + 0x18], 5 */ {  u32 a = R32((u32)(r_edx+0x18u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d818f: jne 0x5d8198 */ if (!fZ) goto L_005d8198;
L_005d8191:; BB(0x005d8191);
    /* 005d8191: mov dword ptr [ebp - 4], 0x405 */ W32((u32)(r_ebp+0xfffffffcu), 0x405u);
L_005d8198:; BB(0x005d8198);
    /* 005d8198: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d819c: je 0x5d81ac */ if (fZ) goto L_005d81ac;
L_005d819e:; BB(0x005d819e);
    /* 005d819e: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005d81a0: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5d81a5u); f_0062fbf0();
    /* 005d81a5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d81a8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d81aa: jne 0x5d8202 */ if (!fZ) goto L_005d8202;
L_005d81ac:; BB(0x005d81ac);
    /* 005d81ac: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d81af: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 005d81b2: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005d81b5: cmp dword ptr [ebp - 0x18], 6 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005d81b9: ja 0x5d8202 */ if ((!fC&&!fZ)) goto L_005d8202;
L_005d81bb:; BB(0x005d81bb);
    /* 005d81bb: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d81be: jmp dword ptr [edx*4 + 0x5d820c] */ { u32 t = R32((u32)(r_edx*4+0x5d820cu)); switch (t) { case 0x5d81c5u: goto L_005d81c5; case 0x5d81ceu: goto L_005d81ce; case 0x5d81d7u: goto L_005d81d7; case 0x5d81e0u: goto L_005d81e0; case 0x5d81e9u: goto L_005d81e9; case 0x5d81f2u: goto L_005d81f2; case 0x5d81fbu: goto L_005d81fb; default: UNSUP(0x005d81be, "jump table entry is not a known target"); } }
L_005d81c5:; BB(0x005d81c5);
    /* 005d81c5: mov dword ptr [ebp - 4], 0x3ec */ W32((u32)(r_ebp+0xfffffffcu), 0x3ecu);
    /* 005d81cc: jmp 0x5d8202 */ goto L_005d8202;
L_005d81ce:; BB(0x005d81ce);
    /* 005d81ce: mov dword ptr [ebp - 4], 0x3ea */ W32((u32)(r_ebp+0xfffffffcu), 0x3eau);
    /* 005d81d5: jmp 0x5d8202 */ goto L_005d8202;
L_005d81d7:; BB(0x005d81d7);
    /* 005d81d7: mov dword ptr [ebp - 4], 0x3ee */ W32((u32)(r_ebp+0xfffffffcu), 0x3eeu);
    /* 005d81de: jmp 0x5d8202 */ goto L_005d8202;
L_005d81e0:; BB(0x005d81e0);
    /* 005d81e0: mov dword ptr [ebp - 4], 0x3ef */ W32((u32)(r_ebp+0xfffffffcu), 0x3efu);
    /* 005d81e7: jmp 0x5d8202 */ goto L_005d8202;
L_005d81e9:; BB(0x005d81e9);
    /* 005d81e9: mov dword ptr [ebp - 4], 0x3ed */ W32((u32)(r_ebp+0xfffffffcu), 0x3edu);
    /* 005d81f0: jmp 0x5d8202 */ goto L_005d8202;
L_005d81f2:; BB(0x005d81f2);
    /* 005d81f2: mov dword ptr [ebp - 4], 0x3e9 */ W32((u32)(r_ebp+0xfffffffcu), 0x3e9u);
    /* 005d81f9: jmp 0x5d8202 */ goto L_005d8202;
L_005d81fb:; BB(0x005d81fb);
    /* 005d81fb: mov dword ptr [ebp - 4], 0x3eb */ W32((u32)(r_ebp+0xfffffffcu), 0x3ebu);
L_005d8202:; BB(0x005d8202);
    /* 005d8202: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d8205: mov esp, ebp */ r_esp = r_ebp;
    /* 005d8207: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d8208: ret  */ FN_RET(0x005d8110); r_esp += 4; return;
}

void f_005d85e0(void) /* sub_5D85E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d85e0);
    /* 005d85e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d85e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005d85e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d85e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d85e7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d85ea: call 0x5da810 */ r_esp -= 4; W32(r_esp, 0x5d85efu); f_005da810();
    /* 005d85ef: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005d85f2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d85f4: jne 0x5d85f8 */ if (!fZ) goto L_005d85f8;
L_005d85f6:; BB(0x005d85f6);
    /* 005d85f6: jmp 0x5d866b */ goto L_005d866b;
L_005d85f8:; BB(0x005d85f8);
    /* 005d85f8: push 0x1391 */ { u32 v = 0x1391u; r_esp -= 4; W32(r_esp, v); }
    /* 005d85fd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d8600: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x5d8605u); f_005f2ba0();
    /* 005d8605: push 0x139b */ { u32 v = 0x139bu; r_esp -= 4; W32(r_esp, v); }
    /* 005d860a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d860d: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x5d8612u); f_005f2ba0();
    /* 005d8612: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d8615: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d8617: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d861a: mov eax, dword ptr [edx + 0x2f0] */ r_eax = R32((u32)(r_edx+0x2f0u));
    /* 005d8620: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d8622u); call_ind(t); }
    /* 005d8622: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005d8628: movzx edx, byte ptr [ecx + 0x4eea] */ r_edx = (u32)R8((u32)(r_ecx+0x4eeau));
    /* 005d862f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8631: je 0x5d8651 */ if (fZ) goto L_005d8651;
L_005d8633:; BB(0x005d8633);
    /* 005d8633: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 005d8638: mov byte ptr [eax + 0x4eea], 0 */ W8((u32)(r_eax+0x4eeau), 0x0u);
    /* 005d863f: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005d8641: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d8644: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d8646: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d8649: mov eax, dword ptr [edx + 0x174] */ r_eax = R32((u32)(r_edx+0x174u));
    /* 005d864f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d8651u); call_ind(t); }
L_005d8651:; BB(0x005d8651);
    /* 005d8651: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005d8657: mov byte ptr [ecx + 0x4ee9], 0 */ W8((u32)(r_ecx+0x4ee9u), 0x0u);
    /* 005d865e: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 005d8664: mov byte ptr [edx + 0x4ee8], 1 */ W8((u32)(r_edx+0x4ee8u), 0x1u);
L_005d866b:; BB(0x005d866b);
    /* 005d866b: mov esp, ebp */ r_esp = r_ebp;
    /* 005d866d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d866e: ret  */ FN_RET(0x005d85e0); r_esp += 4; return;
}

void f_005d8850(void) /* sub_5D8850 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d8850);
    /* 005d8850: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d8851: mov ebp, esp */ r_ebp = r_esp;
    /* 005d8853: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d8856: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005d8859: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 005d885b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005d8861: call 0x635cb0 */ r_esp -= 4; W32(r_esp, 0x5d8866u); f_00635cb0();
    /* 005d8866: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005d8869: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d886b: je 0x5d8892 */ if (fZ) goto L_005d8892;
L_005d886d:; BB(0x005d886d);
    /* 005d886d: cmp dword ptr [0x793584], 0 */ {  u32 a = R32((u32)(0x793584u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8874: jne 0x5d8892 */ if (!fZ) goto L_005d8892;
L_005d8876:; BB(0x005d8876);
    /* 005d8876: mov ecx, dword ptr [0x79357c] */ r_ecx = R32((u32)(0x79357cu));
    /* 005d887c: mov dl, byte ptr [ecx + 0x88] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x88u))) & 0xffu);
    /* 005d8882: mov byte ptr [ebp - 5], dl */ W8((u32)(r_ebp+0xfffffffbu), (u8)r_edx);
    /* 005d8885: movzx eax, byte ptr [ebp - 5] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffffbu));
    /* 005d8889: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d888b: je 0x5d8892 */ if (fZ) goto L_005d8892;
L_005d888d:; BB(0x005d888d);
    /* 005d888d: jmp 0x5d898a */ goto L_005d898a;
L_005d8892:; BB(0x005d8892);
    /* 005d8892: cmp dword ptr [0x793584], 0 */ {  u32 a = R32((u32)(0x793584u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8899: je 0x5d88af */ if (fZ) goto L_005d88af;
L_005d889b:; BB(0x005d889b);
    /* 005d889b: mov ecx, dword ptr [0x793584] */ r_ecx = R32((u32)(0x793584u));
    /* 005d88a1: cmp dword ptr [ecx + 0x3c0c], 0 */ {  u32 a = R32((u32)(r_ecx+0x3c0cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d88a8: je 0x5d88af */ if (fZ) goto L_005d88af;
L_005d88aa:; BB(0x005d88aa);
    /* 005d88aa: jmp 0x5d898a */ goto L_005d898a;
L_005d88af:; BB(0x005d88af);
    /* 005d88af: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005d88b5: call 0x5e2f60 */ r_esp -= 4; W32(r_esp, 0x5d88bau); f_005e2f60();
    /* 005d88ba: movsx edx, al */ r_edx = (u32)(i32)(i8)(u8)r_eax;
    /* 005d88bd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d88bf: je 0x5d8974 */ if (fZ) goto L_005d8974;
L_005d88c5:; BB(0x005d88c5);
    /* 005d88c5: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005d88cb: call 0x5f3e50 */ r_esp -= 4; W32(r_esp, 0x5d88d0u); f_005f3e50();
    /* 005d88d0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005d88d3: cmp dword ptr [0x75d7ac], -1 */ {  u32 a = R32((u32)(0x75d7acu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d88da: jne 0x5d88f8 */ if (!fZ) goto L_005d88f8;
L_005d88dc:; BB(0x005d88dc);
    /* 005d88dc: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005d88e2: call 0x5e2f60 */ r_esp -= 4; W32(r_esp, 0x5d88e7u); f_005e2f60();
    /* 005d88e7: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 005d88ea: imul eax, eax, 0xe10 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xe10u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d88f0: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d88f3: mov dword ptr [0x75d7ac], eax */ W32((u32)(0x75d7acu), r_eax);
L_005d88f8:; BB(0x005d88f8);
    /* 005d88f8: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005d88fe: call 0x5f3e50 */ r_esp -= 4; W32(r_esp, 0x5d8903u); f_005f3e50();
    /* 005d8903: cmp eax, dword ptr [0x75d7ac] */ {  u32 a = r_eax; u32 b = R32((u32)(0x75d7acu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d8909: jl 0x5d8954 */ if ((fS!=fO)) goto L_005d8954;
L_005d890b:; BB(0x005d890b);
    /* 005d890b: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005d8911: call 0x5e0ea0 */ r_esp -= 4; W32(r_esp, 0x5d8916u); f_005e0ea0();
    /* 005d8916: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005d891c: call 0x5e2f60 */ r_esp -= 4; W32(r_esp, 0x5d8921u); f_005e2f60();
    /* 005d8921: movsx ecx, al */ r_ecx = (u32)(i32)(i8)(u8)r_eax;
    /* 005d8924: imul ecx, ecx, 0xe10 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xe10u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d892a: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d892d: mov dword ptr [0x75d7ac], ecx */ W32((u32)(0x75d7acu), r_ecx);
    /* 005d8933: cmp dword ptr [0x793584], 0 */ {  u32 a = R32((u32)(0x793584u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d893a: je 0x5d8954 */ if (fZ) goto L_005d8954;
L_005d893c:; BB(0x005d893c);
    /* 005d893c: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 005d8942: mov eax, dword ptr [edx + 0x98] */ r_eax = R32((u32)(r_edx+0x98u));
    /* 005d8948: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d8949: mov ecx, dword ptr [0x793584] */ r_ecx = R32((u32)(0x793584u));
    /* 005d894f: call 0x589050 */ r_esp -= 4; W32(r_esp, 0x5d8954u); f_00589050();
L_005d8954:; BB(0x005d8954);
    /* 005d8954: cmp dword ptr [0x793584], 0 */ {  u32 a = R32((u32)(0x793584u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d895b: je 0x5d8972 */ if (fZ) goto L_005d8972;
L_005d895d:; BB(0x005d895d);
    /* 005d895d: mov ecx, dword ptr [0x75d7ac] */ r_ecx = R32((u32)(0x75d7acu));
    /* 005d8963: sub ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005d8966: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d8967: mov ecx, dword ptr [0x793584] */ r_ecx = R32((u32)(0x793584u));
    /* 005d896d: call 0x5890f0 */ r_esp -= 4; W32(r_esp, 0x5d8972u); f_005890f0();
L_005d8972:; BB(0x005d8972);
    /* 005d8972: jmp 0x5d898a */ goto L_005d898a;
L_005d8974:; BB(0x005d8974);
    /* 005d8974: cmp dword ptr [0x793584], 0 */ {  u32 a = R32((u32)(0x793584u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d897b: je 0x5d898a */ if (fZ) goto L_005d898a;
L_005d897d:; BB(0x005d897d);
    /* 005d897d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d897f: mov ecx, dword ptr [0x793584] */ r_ecx = R32((u32)(0x793584u));
    /* 005d8985: call 0x5890f0 */ r_esp -= 4; W32(r_esp, 0x5d898au); f_005890f0();
L_005d898a:; BB(0x005d898a);
    /* 005d898a: mov esp, ebp */ r_esp = r_ebp;
    /* 005d898c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d898d: ret  */ FN_RET(0x005d8850); r_esp += 4; return;
}

void f_005d89b0(void) /* sub_5D89B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d89b0);
    /* 005d89b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d89b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005d89b3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d89b6: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005d89b9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d89c0: jmp 0x5d89cb */ goto L_005d89cb;
L_005d89c2:; BB(0x005d89c2);
    /* 005d89c2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d89c5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d89c8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005d89cb:; BB(0x005d89cb);
    /* 005d89cb: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005d89d1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d89d3: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005d89d9: mov eax, dword ptr [edx + 0x10c] */ r_eax = R32((u32)(r_edx+0x10cu));
    /* 005d89df: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d89e1u); call_ind(t); }
    /* 005d89e1: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d89e4: jge 0x5d8a16 */ if ((fS==fO)) goto L_005d8a16;
L_005d89e6:; BB(0x005d89e6);
    /* 005d89e6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d89e9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d89ea: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5d89efu); f_005dcb00();
    /* 005d89ef: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d89f2: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005d89f5: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d89f8: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 005d89fb: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005d89fe: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d8a01: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8a04: jne 0x5d8a14 */ if (!fZ) goto L_005d8a14;
L_005d8a06:; BB(0x005d8a06);
    /* 005d8a06: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d8a09: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d8a0a: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5d8a0fu); f_005dcb00();
    /* 005d8a0f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d8a12: jmp 0x5d8a18 */ goto L_005d8a18;
L_005d8a14:; BB(0x005d8a14);
    /* 005d8a14: jmp 0x5d89c2 */ goto L_005d89c2;
L_005d8a16:; BB(0x005d8a16);
    /* 005d8a16: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005d8a18:; BB(0x005d8a18);
    /* 005d8a18: mov esp, ebp */ r_esp = r_ebp;
    /* 005d8a1a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d8a1b: ret 4 */ FN_RET(0x005d89b0); r_esp += 8; return;
}

void f_005d8f50(void) /* sub_5D8F50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d8f50);
    /* 005d8f50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d8f51: mov ebp, esp */ r_ebp = r_esp;
    /* 005d8f53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d8f54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d8f57: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d8f5a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d8f5c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d8f5f: mov eax, dword ptr [edx + 0x268] */ r_eax = R32((u32)(r_edx+0x268u));
    /* 005d8f65: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d8f67u); call_ind(t); }
    /* 005d8f67: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005d8f6a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8f6c: je 0x5d8f78 */ if (fZ) goto L_005d8f78;
L_005d8f6e:; BB(0x005d8f6e);
    /* 005d8f6e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d8f71: call 0x5d8f90 */ r_esp -= 4; W32(r_esp, 0x5d8f76u); f_005d8f90();
    /* 005d8f76: jmp 0x5d8f86 */ goto L_005d8f86;
L_005d8f78:; BB(0x005d8f78);
    /* 005d8f78: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d8f7a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005d8f7d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d8f7e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d8f81: call 0x5d9180 */ r_esp -= 4; W32(r_esp, 0x5d8f86u); f_005d9180();
L_005d8f86:; BB(0x005d8f86);
    /* 005d8f86: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005d8f88: mov esp, ebp */ r_esp = r_ebp;
    /* 005d8f8a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d8f8b: ret 4 */ FN_RET(0x005d8f50); r_esp += 8; return;
}

void f_005d8f90(void) /* sub_5D8F90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d8f90);
    /* 005d8f90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d8f91: mov ebp, esp */ r_ebp = r_esp;
    /* 005d8f93: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d8f95: push 0x6a91cb */ { u32 v = 0x6a91cbu; r_esp -= 4; W32(r_esp, v); }
    /* 005d8f9a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005d8fa0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d8fa1: sub esp, 0x68 */ {  u32 a = r_esp; u32 b = 0x68u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d8fa4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005d8fa9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d8fab: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005d8fae: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005d8faf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d8fb0: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005d8fb3: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005d8fb9: mov dword ptr [ebp - 0x6c], ecx */ W32((u32)(r_ebp+0xffffff94u), r_ecx);
    /* 005d8fbc: lea eax, [ebp - 0x4c] */ r_eax = (u32)(r_ebp+0xffffffb4u);
    /* 005d8fbf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d8fc0: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005d8fc6: call 0x5de600 */ r_esp -= 4; W32(r_esp, 0x5d8fcbu); f_005de600();
    /* 005d8fcb: mov ecx, eax */ r_ecx = r_eax;
    /* 005d8fcd: call 0x5d5a90 */ r_esp -= 4; W32(r_esp, 0x5d8fd2u); f_005d5a90();
    /* 005d8fd2: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 005d8fd5: mov ecx, dword ptr [ecx + 0x70] */ r_ecx = R32((u32)(r_ecx+0x70u));
    /* 005d8fd8: call 0x5eafc0 */ r_esp -= 4; W32(r_esp, 0x5d8fddu); f_005eafc0();
    /* 005d8fdd: sub eax, 0x30d414 */ {  u32 a = r_eax; u32 b = 0x30d414u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005d8fe2: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 005d8fe4: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 005d8fe6: and eax, 0xffffffc7 */ {  u32 a = r_eax; u32 b = 0xffffffc7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005d8fe9: add eax, 0xe9 */ {  u32 a = r_eax; u32 b = 0xe9u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d8fee: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 005d8ff1: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 005d8ff4: mov ecx, dword ptr [edx + 0x70] */ r_ecx = R32((u32)(r_edx+0x70u));
    /* 005d8ff7: call 0x5eb220 */ r_esp -= 4; W32(r_esp, 0x5d8ffcu); f_005eb220();
    /* 005d8ffc: mov esi, eax */ r_esi = r_eax;
    /* 005d8ffe: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 005d9001: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 005d9004: call 0x5eb240 */ r_esp -= 4; W32(r_esp, 0x5d9009u); f_005eb240();
    /* 005d9009: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d900b: je 0x5d9012 */ if (fZ) goto L_005d9012;
L_005d900d:; BB(0x005d900d);
    /* 005d900d: jmp 0x5d915c */ goto L_005d915c;
L_005d9012:; BB(0x005d9012);
    /* 005d9012: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d9014: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d9016: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d9018: lea ecx, [ebp - 0x44] */ r_ecx = (u32)(r_ebp+0xffffffbcu);
    /* 005d901b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d901c: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005d901f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9020: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005d9023: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d9024: call 0x64c8d0 */ r_esp -= 4; W32(r_esp, 0x5d9029u); f_0064c8d0();
    /* 005d9029: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d902c: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 005d902f: cmp dword ptr [ecx + 0x74], 0 */ {  u32 a = R32((u32)(r_ecx+0x74u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9033: jne 0x5d907c */ if (!fZ) goto L_005d907c;
L_005d9035:; BB(0x005d9035);
    /* 005d9035: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d903a: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5d903fu); f_00686d82();
    /* 005d903f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d9042: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 005d9045: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d904c: cmp dword ptr [ebp - 0x58], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9050: je 0x5d905f */ if (fZ) goto L_005d905f;
L_005d9052:; BB(0x005d9052);
    /* 005d9052: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005d9055: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x5d905au); f_005ec5a0();
    /* 005d905a: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 005d905d: jmp 0x5d9066 */ goto L_005d9066;
L_005d905f:; BB(0x005d905f);
    /* 005d905f: mov dword ptr [ebp - 0x70], 0 */ W32((u32)(r_ebp+0xffffff90u), 0x0u);
L_005d9066:; BB(0x005d9066);
    /* 005d9066: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 005d9069: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 005d906c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005d9073: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 005d9076: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005d9079: mov dword ptr [eax + 0x74], ecx */ W32((u32)(r_eax+0x74u), r_ecx);
L_005d907c:; BB(0x005d907c);
    /* 005d907c: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005d9082: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x5d9087u); f_006375b0();
    /* 005d9087: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 005d908a: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 005d908d: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5d9092u); f_0063aac0();
    /* 005d9092: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d9095: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 005d9098: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d909a: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 005d909c: push 0x2710 */ { u32 v = 0x2710u; r_esp -= 4; W32(r_esp, v); }
    /* 005d90a1: push 0x1c5 */ { u32 v = 0x1c5u; r_esp -= 4; W32(r_esp, v); }
    /* 005d90a6: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005d90a9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d90aa: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 005d90ac: push 0x76 */ { u32 v = 0x76u; r_esp -= 4; W32(r_esp, v); }
    /* 005d90ae: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 005d90b0: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 005d90b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d90b4: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 005d90b7: mov ecx, dword ptr [ecx + 0x74] */ r_ecx = R32((u32)(r_ecx+0x74u));
    /* 005d90ba: call 0x5ec8f0 */ r_esp -= 4; W32(r_esp, 0x5d90bfu); f_005ec8f0();
    /* 005d90bf: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 005d90c2: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005d90c5: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 005d90c8: mov ecx, dword ptr [ecx + 0x74] */ r_ecx = R32((u32)(r_ecx+0x74u));
    /* 005d90cb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d90cd: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005d90d0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d90d2u); call_ind(t); }
    /* 005d90d2: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 005d90d5: cmp dword ptr [ecx + 0x78], 0 */ {  u32 a = R32((u32)(r_ecx+0x78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d90d9: jne 0x5d9122 */ if (!fZ) goto L_005d9122;
L_005d90db:; BB(0x005d90db);
    /* 005d90db: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d90e0: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5d90e5u); f_00686d82();
    /* 005d90e5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d90e8: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 005d90eb: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005d90f2: cmp dword ptr [ebp - 0x60], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d90f6: je 0x5d9105 */ if (fZ) goto L_005d9105;
L_005d90f8:; BB(0x005d90f8);
    /* 005d90f8: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 005d90fb: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x5d9100u); f_005ec5a0();
    /* 005d9100: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 005d9103: jmp 0x5d910c */ goto L_005d910c;
L_005d9105:; BB(0x005d9105);
    /* 005d9105: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
L_005d910c:; BB(0x005d910c);
    /* 005d910c: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 005d910f: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 005d9112: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005d9119: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 005d911c: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005d911f: mov dword ptr [eax + 0x78], ecx */ W32((u32)(r_eax+0x78u), r_ecx);
L_005d9122:; BB(0x005d9122);
    /* 005d9122: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d9124: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 005d9126: push 0x2711 */ { u32 v = 0x2711u; r_esp -= 4; W32(r_esp, v); }
    /* 005d912b: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d9130: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005d9133: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9134: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 005d9136: push 0x76 */ { u32 v = 0x76u; r_esp -= 4; W32(r_esp, v); }
    /* 005d9138: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 005d913a: lea eax, [ebp - 0x44] */ r_eax = (u32)(r_ebp+0xffffffbcu);
    /* 005d913d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d913e: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 005d9141: mov ecx, dword ptr [ecx + 0x78] */ r_ecx = R32((u32)(r_ecx+0x78u));
    /* 005d9144: call 0x5ec8f0 */ r_esp -= 4; W32(r_esp, 0x5d9149u); f_005ec8f0();
    /* 005d9149: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 005d914c: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 005d914f: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 005d9152: mov ecx, dword ptr [ecx + 0x78] */ r_ecx = R32((u32)(r_ecx+0x78u));
    /* 005d9155: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d9157: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005d915a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d915cu); call_ind(t); }
L_005d915c:; BB(0x005d915c);
    /* 005d915c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d915f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005d9166: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d9167: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d9168: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d916b: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005d916d: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x5d9172u); f_00686d72();
    /* 005d9172: mov esp, ebp */ r_esp = r_ebp;
    /* 005d9174: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d9175: ret  */ FN_RET(0x005d8f90); r_esp += 4; return;
}

