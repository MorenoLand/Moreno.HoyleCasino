#include "protos.h"

void f_005e6890(void) /* CasinoHallOfFameDialog::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e6890);
    /* 005e6890: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e6891: mov ebp, esp */ r_ebp = r_esp;
    /* 005e6893: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e6895: push 0x6a9958 */ { u32 v = 0x6a9958u; r_esp -= 4; W32(r_esp, v); }
    /* 005e689a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005e68a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e68a1: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e68a4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005e68a9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e68ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e68ac: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005e68af: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005e68b5: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005e68b8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e68ba: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e68bc: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e68bf: call 0x5f71f0 */ r_esp -= 4; W32(r_esp, 0x5e68c4u); f_005f71f0();
    /* 005e68c4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e68cb: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e68ce: mov dword ptr [eax], 0x6d5c0c */ W32((u32)(r_eax), 0x6d5c0cu);
    /* 005e68d4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e68d7: mov byte ptr [ecx + 0x1bc], 0 */ W8((u32)(r_ecx+0x1bcu), 0x0u);
    /* 005e68de: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005e68e5: jmp 0x5e68f0 */ goto L_005e68f0;
L_005e68e7:; BB(0x005e68e7);
    /* 005e68e7: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e68ea: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e68ed: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_005e68f0:; BB(0x005e68f0);
    /* 005e68f0: cmp dword ptr [ebp - 0x10], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e68f4: jge 0x5e692b */ if ((fS==fO)) goto L_005e692b;
L_005e68f6:; BB(0x005e68f6);
    /* 005e68f6: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e68f9: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e68fc: mov dword ptr [ecx + eax*4 + 0x1c0], 0 */ W32((u32)(r_ecx+r_eax*4+0x1c0u), 0x0u);
    /* 005e6907: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e690a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e690d: mov dword ptr [eax + edx*4 + 0x1e8], 0 */ W32((u32)(r_eax+r_edx*4+0x1e8u), 0x0u);
    /* 005e6918: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e691b: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e691e: mov dword ptr [edx + ecx*4 + 0x210], 0 */ W32((u32)(r_edx+r_ecx*4+0x210u), 0x0u);
    /* 005e6929: jmp 0x5e68e7 */ goto L_005e68e7;
L_005e692b:; BB(0x005e692b);
    /* 005e692b: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 005e692d: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5e6932u); f_00686d82();
    /* 005e6932: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e6935: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005e6938: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e693b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e693e: mov dword ptr [eax + 0x238], ecx */ W32((u32)(r_eax+0x238u), r_ecx);
    /* 005e6944: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005e694b: jmp 0x5e6956 */ goto L_005e6956;
L_005e694d:; BB(0x005e694d);
    /* 005e694d: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e6950: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e6953: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_005e6956:; BB(0x005e6956);
    /* 005e6956: cmp dword ptr [ebp - 0x10], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e695a: jge 0x5e69ae */ if ((fS==fO)) goto L_005e69ae;
L_005e695c:; BB(0x005e695c);
    /* 005e695c: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005e6961: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e6963: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005e6969: mov eax, dword ptr [edx + 0x31c] */ r_eax = R32((u32)(r_edx+0x31cu));
    /* 005e696f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e6971u); call_ind(t); }
    /* 005e6971: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e6974: mov edx, dword ptr [ecx + 0x238] */ r_edx = R32((u32)(r_ecx+0x238u));
    /* 005e697a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e697d: mov dword ptr [edx + ecx*4], eax */ W32((u32)(r_edx+r_ecx*4), r_eax);
    /* 005e6980: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e6983: mov eax, dword ptr [edx + 0x238] */ r_eax = R32((u32)(r_edx+0x238u));
    /* 005e6989: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e698c: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 005e698f: mov dword ptr [edx + 0x20], 0 */ W32((u32)(r_edx+0x20u), 0x0u);
    /* 005e6996: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e6999: mov ecx, dword ptr [eax + 0x238] */ r_ecx = R32((u32)(r_eax+0x238u));
    /* 005e699f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e69a2: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 005e69a5: mov dword ptr [eax + 0xc], 0xffffffff */ W32((u32)(r_eax+0xcu), 0xffffffffu);
    /* 005e69ac: jmp 0x5e694d */ goto L_005e694d;
L_005e69ae:; BB(0x005e69ae);
    /* 005e69ae: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005e69b5: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e69b8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e69bb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005e69c2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e69c3: mov esp, ebp */ r_esp = r_ebp;
    /* 005e69c5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e69c6: ret  */ FN_RET(0x005e6890); r_esp += 4; return;
}

void f_005e69d0(void) /* CasinoHallOfFameDialog::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e69d0);
    /* 005e69d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e69d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005e69d3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e69d5: push 0x6a997b */ { u32 v = 0x6a997bu; r_esp -= 4; W32(r_esp, v); }
    /* 005e69da: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005e69e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e69e1: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e69e4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005e69e9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e69eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e69ec: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005e69ef: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005e69f5: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 005e69f8: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005e69fb: mov dword ptr [eax], 0x6d5c0c */ W32((u32)(r_eax), 0x6d5c0cu);
    /* 005e6a01: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e6a08: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005e6a0f: jmp 0x5e6a1a */ goto L_005e6a1a;
L_005e6a11:; BB(0x005e6a11);
    /* 005e6a11: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e6a14: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e6a17: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_005e6a1a:; BB(0x005e6a1a);
    /* 005e6a1a: cmp dword ptr [ebp - 0x10], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e6a1e: jge 0x5e6a79 */ if ((fS==fO)) goto L_005e6a79;
L_005e6a20:; BB(0x005e6a20);
    /* 005e6a20: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e6a23: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005e6a26: cmp dword ptr [eax + edx*4 + 0x1c0], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x1c0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e6a2e: je 0x5e6a77 */ if (fZ) goto L_005e6a77;
L_005e6a30:; BB(0x005e6a30);
    /* 005e6a30: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e6a33: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005e6a36: mov eax, dword ptr [edx + ecx*4 + 0x1c0] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x1c0u));
    /* 005e6a3d: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005e6a40: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e6a43: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005e6a46: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e6a4a: je 0x5e6a5f */ if (fZ) goto L_005e6a5f;
L_005e6a4c:; BB(0x005e6a4c);
    /* 005e6a4c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6a4e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e6a51: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e6a53: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e6a56: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e6a58: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5e6a5au); call_ind(t); }
    /* 005e6a5a: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005e6a5d: jmp 0x5e6a66 */ goto L_005e6a66;
L_005e6a5f:; BB(0x005e6a5f);
    /* 005e6a5f: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_005e6a66:; BB(0x005e6a66);
    /* 005e6a66: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e6a69: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005e6a6c: mov dword ptr [ecx + eax*4 + 0x1c0], 0 */ W32((u32)(r_ecx+r_eax*4+0x1c0u), 0x0u);
L_005e6a77:; BB(0x005e6a77);
    /* 005e6a77: jmp 0x5e6a11 */ goto L_005e6a11;
L_005e6a79:; BB(0x005e6a79);
    /* 005e6a79: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005e6a80: jmp 0x5e6a8b */ goto L_005e6a8b;
L_005e6a82:; BB(0x005e6a82);
    /* 005e6a82: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e6a85: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e6a88: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_005e6a8b:; BB(0x005e6a8b);
    /* 005e6a8b: cmp dword ptr [ebp - 0x10], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e6a8f: jge 0x5e6adf */ if ((fS==fO)) goto L_005e6adf;
L_005e6a91:; BB(0x005e6a91);
    /* 005e6a91: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005e6a94: mov ecx, dword ptr [eax + 0x238] */ r_ecx = R32((u32)(r_eax+0x238u));
    /* 005e6a9a: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e6a9d: mov ecx, dword ptr [ecx + edx*4] */ r_ecx = R32((u32)(r_ecx+r_edx*4));
    /* 005e6aa0: call 0x63a2a0 */ r_esp -= 4; W32(r_esp, 0x5e6aa5u); f_0063a2a0();
    /* 005e6aa5: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005e6aa8: mov ecx, dword ptr [eax + 0x238] */ r_ecx = R32((u32)(r_eax+0x238u));
    /* 005e6aae: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e6ab1: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 005e6ab4: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005e6ab7: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e6aba: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005e6abd: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e6ac1: je 0x5e6ad6 */ if (fZ) goto L_005e6ad6;
L_005e6ac3:; BB(0x005e6ac3);
    /* 005e6ac3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6ac5: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e6ac8: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e6aca: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e6acd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e6acf: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5e6ad1u); call_ind(t); }
    /* 005e6ad1: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005e6ad4: jmp 0x5e6add */ goto L_005e6add;
L_005e6ad6:; BB(0x005e6ad6);
    /* 005e6ad6: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_005e6add:; BB(0x005e6add);
    /* 005e6add: jmp 0x5e6a82 */ goto L_005e6a82;
L_005e6adf:; BB(0x005e6adf);
    /* 005e6adf: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005e6ae2: cmp dword ptr [eax + 0x238], 0 */ {  u32 a = R32((u32)(r_eax+0x238u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e6ae9: je 0x5e6b03 */ if (fZ) goto L_005e6b03;
L_005e6aeb:; BB(0x005e6aeb);
    /* 005e6aeb: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005e6aee: mov edx, dword ptr [ecx + 0x238] */ r_edx = R32((u32)(r_ecx+0x238u));
    /* 005e6af4: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 005e6af7: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005e6afa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e6afb: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5e6b00u); f_00686cae();
    /* 005e6b00: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005e6b03:; BB(0x005e6b03);
    /* 005e6b03: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005e6b0a: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005e6b0d: call 0x5f7260 */ r_esp -= 4; W32(r_esp, 0x5e6b12u); f_005f7260();
    /* 005e6b12: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e6b15: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005e6b1c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e6b1d: mov esp, ebp */ r_esp = r_ebp;
    /* 005e6b1f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e6b20: ret  */ FN_RET(0x005e69d0); r_esp += 4; return;
}

void f_005e6b30(void) /* CasinoHallOfFameDialog::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e6b30);
    /* 005e6b30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e6b31: mov ebp, esp */ r_ebp = r_esp;
    /* 005e6b33: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e6b36: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005e6b39: mov ecx, dword ptr [0x79506c] */ r_ecx = R32((u32)(0x79506cu));
    /* 005e6b3f: call 0x5e7ac0 */ r_esp -= 4; W32(r_esp, 0x5e6b44u); f_005e7ac0();
    /* 005e6b44: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6b46: push 0x30f0ee */ { u32 v = 0x30f0eeu; r_esp -= 4; W32(r_esp, v); }
    /* 005e6b4b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e6b4e: call 0x5f83d0 */ r_esp -= 4; W32(r_esp, 0x5e6b53u); f_005f83d0();
    /* 005e6b53: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6b55: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e6b5a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6b5c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6b5e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6b60: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6b62: push 0x30f0f0 */ { u32 v = 0x30f0f0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6b67: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6b69: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6b6b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e6b6e: call 0x5f9ce0 */ r_esp -= 4; W32(r_esp, 0x5e6b73u); f_005f9ce0();
    /* 005e6b73: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6b75: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e6b7a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6b7c: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6b81: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6b83: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6b85: push 0x30f0ef */ { u32 v = 0x30f0efu; r_esp -= 4; W32(r_esp, v); }
    /* 005e6b8a: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6b8c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6b8e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e6b91: call 0x5f9ce0 */ r_esp -= 4; W32(r_esp, 0x5e6b96u); f_005f9ce0();
    /* 005e6b96: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e6b9d: jmp 0x5e6ba8 */ goto L_005e6ba8;
L_005e6b9f:; BB(0x005e6b9f);
    /* 005e6b9f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6ba2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e6ba5: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005e6ba8:; BB(0x005e6ba8);
    /* 005e6ba8: cmp dword ptr [ebp - 4], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e6bac: jge 0x5e6bbc */ if ((fS==fO)) goto L_005e6bbc;
L_005e6bae:; BB(0x005e6bae);
    /* 005e6bae: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e6bb1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e6bb2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e6bb5: call 0x5e6bc0 */ r_esp -= 4; W32(r_esp, 0x5e6bbau); f_005e6bc0();
    /* 005e6bba: jmp 0x5e6b9f */ goto L_005e6b9f;
L_005e6bbc:; BB(0x005e6bbc);
    /* 005e6bbc: mov esp, ebp */ r_esp = r_ebp;
    /* 005e6bbe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e6bbf: ret  */ FN_RET(0x005e6b30); r_esp += 4; return;
}

void f_005e7390(void) /* CasinoHallOfFameDialog::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e7390);
    /* 005e7390: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e7391: mov ebp, esp */ r_ebp = r_esp;
    /* 005e7393: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e7396: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005e7399: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e739c: movzx ecx, byte ptr [eax + 4] */ r_ecx = (u32)R8((u32)(r_eax+0x4u));
    /* 005e73a0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e73a2: jne 0x5e73b3 */ if (!fZ) goto L_005e73b3;
L_005e73a4:; BB(0x005e73a4);
    /* 005e73a4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e73a7: call 0x5f88f0 */ r_esp -= 4; W32(r_esp, 0x5e73acu); f_005f88f0();
    /* 005e73ac: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005e73af: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e73b1: je 0x5e73b8 */ if (fZ) goto L_005e73b8;
L_005e73b3:; BB(0x005e73b3);
    /* 005e73b3: jmp 0x5e7446 */ goto L_005e7446;
L_005e73b8:; BB(0x005e73b8);
    /* 005e73b8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e73bb: cmp dword ptr [eax + 0x18], 4 */ {  u32 a = R32((u32)(r_eax+0x18u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e73bf: jne 0x5e73d7 */ if (!fZ) goto L_005e73d7;
L_005e73c1:; BB(0x005e73c1);
    /* 005e73c1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e73c4: movsx edx, byte ptr [ecx + 0x14] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x14u));
    /* 005e73c8: cmp edx, 0x1b */ {  u32 a = r_edx; u32 b = 0x1bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e73cb: jne 0x5e73d7 */ if (!fZ) goto L_005e73d7;
L_005e73cd:; BB(0x005e73cd);
    /* 005e73cd: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e73d0: mov byte ptr [eax + 0x1bc], 1 */ W8((u32)(r_eax+0x1bcu), 0x1u);
L_005e73d7:; BB(0x005e73d7);
    /* 005e73d7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e73da: cmp dword ptr [ecx + 0x18], 1 */ {  u32 a = R32((u32)(r_ecx+0x18u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e73de: jne 0x5e73ea */ if (!fZ) goto L_005e73ea;
L_005e73e0:; BB(0x005e73e0);
    /* 005e73e0: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e73e3: mov byte ptr [edx + 0x1bc], 1 */ W8((u32)(r_edx+0x1bcu), 0x1u);
L_005e73ea:; BB(0x005e73ea);
    /* 005e73ea: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e73ed: movzx ecx, byte ptr [eax + 0x1bc] */ r_ecx = (u32)R8((u32)(r_eax+0x1bcu));
    /* 005e73f4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e73f6: je 0x5e7446 */ if (fZ) goto L_005e7446;
L_005e73f8:; BB(0x005e73f8);
    /* 005e73f8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e73ff: jmp 0x5e740a */ goto L_005e740a;
L_005e7401:; BB(0x005e7401);
    /* 005e7401: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7404: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e7407: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_005e740a:; BB(0x005e740a);
    /* 005e740a: cmp dword ptr [ebp - 4], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e740e: jge 0x5e743b */ if ((fS==fO)) goto L_005e743b;
L_005e7410:; BB(0x005e7410);
    /* 005e7410: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e7413: mov ecx, dword ptr [eax + 0x238] */ r_ecx = R32((u32)(r_eax+0x238u));
    /* 005e7419: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e741c: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 005e741f: cmp dword ptr [eax + 0x20], 0 */ {  u32 a = R32((u32)(r_eax+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e7423: je 0x5e7439 */ if (fZ) goto L_005e7439;
L_005e7425:; BB(0x005e7425);
    /* 005e7425: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e7428: mov edx, dword ptr [ecx + 0x238] */ r_edx = R32((u32)(r_ecx+0x238u));
    /* 005e742e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7431: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 005e7434: call 0x63b2d0 */ r_esp -= 4; W32(r_esp, 0x5e7439u); f_0063b2d0();
L_005e7439:; BB(0x005e7439);
    /* 005e7439: jmp 0x5e7401 */ goto L_005e7401;
L_005e743b:; BB(0x005e743b);
    /* 005e743b: mov ecx, dword ptr [0x79506c] */ r_ecx = R32((u32)(0x79506cu));
    /* 005e7441: call 0x5e75c0 */ r_esp -= 4; W32(r_esp, 0x5e7446u); f_005e75c0();
L_005e7446:; BB(0x005e7446);
    /* 005e7446: mov esp, ebp */ r_esp = r_ebp;
    /* 005e7448: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e7449: ret 4 */ FN_RET(0x005e7390); r_esp += 8; return;
}

