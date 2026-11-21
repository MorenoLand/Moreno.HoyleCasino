#include "protos.h"

void f_00480070(void) /* sub_480070 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00480070);
    /* 00480070: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00480071: mov ebp, esp */ r_ebp = r_esp;
    /* 00480073: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00480076: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00480077: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0048007a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00480081: jmp 0x48008c */ goto L_0048008c;
L_00480083:; BB(0x00480083);
    /* 00480083: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00480086: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00480089: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0048008c:; BB(0x0048008c);
    /* 0048008c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048008f: cmp ecx, dword ptr [ebp + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00480092: jge 0x48010f */ if ((fS==fO)) goto L_0048010f;
L_00480094:; BB(0x00480094);
    /* 00480094: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0048009b: jmp 0x4800a6 */ goto L_004800a6;
L_0048009d:; BB(0x0048009d);
    /* 0048009d: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004800a0: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004800a3: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_004800a6:; BB(0x004800a6);
    /* 004800a6: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004800a9: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004800ac: cmp dword ptr [ebp - 0x10], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004800af: jge 0x48010a */ if ((fS==fO)) goto L_0048010a;
L_004800b1:; BB(0x004800b1);
    /* 004800b1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004800b4: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004800b7: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004800ba: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 004800bd: mov ecx, dword ptr [edx + ecx*8] */ r_ecx = R32((u32)(r_edx+r_ecx*8));
    /* 004800c0: cmp ecx, dword ptr [esi + eax*8 + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esi+r_eax*8+0x8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004800c4: jge 0x480108 */ if ((fS==fO)) goto L_00480108;
L_004800c6:; BB(0x004800c6);
    /* 004800c6: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004800c9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004800cc: mov ecx, dword ptr [eax + edx*8] */ r_ecx = R32((u32)(r_eax+r_edx*8));
    /* 004800cf: mov edx, dword ptr [eax + edx*8 + 4] */ r_edx = R32((u32)(r_eax+r_edx*8+0x4u));
    /* 004800d3: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004800d6: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 004800d9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004800dc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004800df: mov edx, dword ptr [ecx + eax*8 + 8] */ r_edx = R32((u32)(r_ecx+r_eax*8+0x8u));
    /* 004800e3: mov eax, dword ptr [ecx + eax*8 + 0xc] */ r_eax = R32((u32)(r_ecx+r_eax*8+0xcu));
    /* 004800e7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004800ea: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 004800ed: mov dword ptr [esi + ecx*8], edx */ W32((u32)(r_esi+r_ecx*8), r_edx);
    /* 004800f0: mov dword ptr [esi + ecx*8 + 4], eax */ W32((u32)(r_esi+r_ecx*8+0x4u), r_eax);
    /* 004800f4: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004800f7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004800fa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004800fd: mov dword ptr [eax + edx*8 + 8], ecx */ W32((u32)(r_eax+r_edx*8+0x8u), r_ecx);
    /* 00480101: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00480104: mov dword ptr [eax + edx*8 + 0xc], ecx */ W32((u32)(r_eax+r_edx*8+0xcu), r_ecx);
L_00480108:; BB(0x00480108);
    /* 00480108: jmp 0x48009d */ goto L_0048009d;
L_0048010a:; BB(0x0048010a);
    /* 0048010a: jmp 0x480083 */ goto L_00480083;
L_0048010f:; BB(0x0048010f);
    /* 0048010f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00480110: mov esp, ebp */ r_esp = r_ebp;
    /* 00480112: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00480113: ret 8 */ FN_RET(0x00480070); r_esp += 12; return;
}

void f_004803d0(void) /* sub_4803D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004803d0);
    /* 004803d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004803d1: mov ebp, esp */ r_ebp = r_esp;
    /* 004803d3: sub esp, 0x118 */ {  u32 a = r_esp; u32 b = 0x118u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004803d9: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 004803de: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004803e0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004803e3: mov dword ptr [ebp - 0x118], ecx */ W32((u32)(r_ebp+0xfffffee8u), r_ecx);
    /* 004803e9: mov eax, dword ptr [ebp - 0x118] */ r_eax = R32((u32)(r_ebp+0xfffffee8u));
    /* 004803ef: mov ecx, dword ptr [eax + 0xfc] */ r_ecx = R32((u32)(r_eax+0xfcu));
    /* 004803f5: mov dword ptr [ebp - 0x10c], ecx */ W32((u32)(r_ebp+0xfffffef4u), r_ecx);
    /* 004803fb: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004803fd: cmp dword ptr [ebp - 0x10c], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffef4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00480404: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00480407: mov byte ptr [ebp - 0x111], dl */ W8((u32)(r_ebp+0xfffffeefu), (u8)r_edx);
    /* 0048040d: mov ecx, dword ptr [ebp - 0x118] */ r_ecx = R32((u32)(r_ebp+0xfffffee8u));
    /* 00480413: call 0x480f80 */ r_esp -= 4; W32(r_esp, 0x480418u); f_00480f80();
    /* 00480418: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0048041b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048041d: jne 0x4804af */ if (!fZ) goto L_004804af;
L_00480423:; BB(0x00480423);
    /* 00480423: cmp dword ptr [ebp - 0x10c], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffef4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048042a: jne 0x480461 */ if (!fZ) goto L_00480461;
L_0048042c:; BB(0x0048042c);
    /* 0048042c: mov ecx, dword ptr [ebp - 0x118] */ r_ecx = R32((u32)(r_ebp+0xfffffee8u));
    /* 00480432: call 0x4806f0 */ r_esp -= 4; W32(r_esp, 0x480437u); f_004806f0();
    /* 00480437: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00480438: call 0x520870 */ r_esp -= 4; W32(r_esp, 0x48043du); f_00520870();
    /* 0048043d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00480440: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00480441: push 0x6bce24 */ { u32 v = 0x6bce24u; r_esp -= 4; W32(r_esp, v); }
    /* 00480446: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x48044bu); f_00630f40();
    /* 0048044b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048044e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048044f: lea ecx, [ebp - 0x108] */ r_ecx = (u32)(r_ebp+0xfffffef8u);
    /* 00480455: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00480456: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x48045cu); call_ind(t); }
    /* 0048045c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048045f: jmp 0x48047f */ goto L_0048047f;
L_00480461:; BB(0x00480461);
    /* 00480461: push 0x6bcdf4 */ { u32 v = 0x6bcdf4u; r_esp -= 4; W32(r_esp, v); }
    /* 00480466: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x48046bu); f_00630f40();
    /* 0048046b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048046e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048046f: lea edx, [ebp - 0x108] */ r_edx = (u32)(r_ebp+0xfffffef8u);
    /* 00480475: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00480476: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x48047cu); call_ind(t); }
    /* 0048047c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0048047f:; BB(0x0048047f);
    /* 0048047f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00480481: push 0x6bcdd8 */ { u32 v = 0x6bcdd8u; r_esp -= 4; W32(r_esp, v); }
    /* 00480486: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x48048bu); f_00630f40();
    /* 0048048b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048048e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048048f: lea eax, [ebp - 0x108] */ r_eax = (u32)(r_ebp+0xfffffef8u);
    /* 00480495: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00480496: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x48049bu); f_0062ff10();
    /* 0048049b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048049e: mov dword ptr [ebp - 0x110], eax */ W32((u32)(r_ebp+0xfffffef0u), r_eax);
    /* 004804a4: cmp dword ptr [ebp - 0x110], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffef0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004804ab: jne 0x4804af */ if (!fZ) goto L_004804af;
L_004804ad:; BB(0x004804ad);
    /* 004804ad: jmp 0x4804d6 */ goto L_004804d6;
L_004804af:; BB(0x004804af);
    /* 004804af: movzx ecx, byte ptr [ebp - 0x111] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffeefu));
    /* 004804b6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004804b8: je 0x4804c9 */ if (fZ) goto L_004804c9;
L_004804ba:; BB(0x004804ba);
    /* 004804ba: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004804bc: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 004804c2: call 0x4fcb30 */ r_esp -= 4; W32(r_esp, 0x4804c7u); f_004fcb30();
    /* 004804c7: jmp 0x4804d6 */ goto L_004804d6;
L_004804c9:; BB(0x004804c9);
    /* 004804c9: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004804cb: mov ecx, dword ptr [ebp - 0x118] */ r_ecx = R32((u32)(r_ebp+0xfffffee8u));
    /* 004804d1: call 0x47fb90 */ r_esp -= 4; W32(r_esp, 0x4804d6u); f_0047fb90();
L_004804d6:; BB(0x004804d6);
    /* 004804d6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004804d9: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004804db: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x4804e0u); f_00686d72();
    /* 004804e0: mov esp, ebp */ r_esp = r_ebp;
    /* 004804e2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004804e3: ret  */ FN_RET(0x004803d0); r_esp += 4; return;
}

void f_004804f0(void) /* sub_4804F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004804f0);
    /* 004804f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004804f1: mov ebp, esp */ r_ebp = r_esp;
    /* 004804f3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004804f6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004804f9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00480500: jmp 0x48050b */ goto L_0048050b;
L_00480502:; BB(0x00480502);
    /* 00480502: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00480505: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00480508: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0048050b:; BB(0x0048050b);
    /* 0048050b: cmp dword ptr [ebp - 4], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048050f: jge 0x480529 */ if ((fS==fO)) goto L_00480529;
L_00480511:; BB(0x00480511);
    /* 00480511: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00480514: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00480517: mov eax, dword ptr [edx + ecx*4 + 0x3e4] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x3e4u));
    /* 0048051e: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00480521: jne 0x480527 */ if (!fZ) goto L_00480527;
L_00480523:; BB(0x00480523);
    /* 00480523: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00480525: jmp 0x48052b */ goto L_0048052b;
L_00480527:; BB(0x00480527);
    /* 00480527: jmp 0x480502 */ goto L_00480502;
L_00480529:; BB(0x00480529);
    /* 00480529: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0048052b:; BB(0x0048052b);
    /* 0048052b: mov esp, ebp */ r_esp = r_ebp;
    /* 0048052d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048052e: ret 4 */ FN_RET(0x004804f0); r_esp += 8; return;
}

void f_00480540(void) /* sub_480540 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00480540);
    /* 00480540: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00480541: mov ebp, esp */ r_ebp = r_esp;
    /* 00480543: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00480546: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00480549: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00480550: jmp 0x48055b */ goto L_0048055b;
L_00480552:; BB(0x00480552);
    /* 00480552: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00480555: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00480558: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0048055b:; BB(0x0048055b);
    /* 0048055b: cmp dword ptr [ebp - 4], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048055f: jge 0x480577 */ if ((fS==fO)) goto L_00480577;
L_00480561:; BB(0x00480561);
    /* 00480561: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00480564: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00480567: cmp dword ptr [edx + ecx*4 + 0x3e4], -1 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x3e4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048056f: jne 0x480575 */ if (!fZ) goto L_00480575;
L_00480571:; BB(0x00480571);
    /* 00480571: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00480573: jmp 0x480579 */ goto L_00480579;
L_00480575:; BB(0x00480575);
    /* 00480575: jmp 0x480552 */ goto L_00480552;
L_00480577:; BB(0x00480577);
    /* 00480577: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_00480579:; BB(0x00480579);
    /* 00480579: mov esp, ebp */ r_esp = r_ebp;
    /* 0048057b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048057c: ret  */ FN_RET(0x00480540); r_esp += 4; return;
}

void f_00480580(void) /* sub_480580 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00480580);
    /* 00480580: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00480581: mov ebp, esp */ r_ebp = r_esp;
    /* 00480583: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00480586: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00480589: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0048058c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048058d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00480590: call 0x4804f0 */ r_esp -= 4; W32(r_esp, 0x480595u); f_004804f0();
    /* 00480595: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00480598: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048059a: je 0x48059e */ if (fZ) goto L_0048059e;
L_0048059c:; BB(0x0048059c);
    /* 0048059c: jmp 0x4805d6 */ goto L_004805d6;
L_0048059e:; BB(0x0048059e);
    /* 0048059e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004805a1: call 0x4806b0 */ r_esp -= 4; W32(r_esp, 0x4805a6u); f_004806b0();
    /* 004805a6: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004805a9: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004805ac: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004805af: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004805b2: mov dword ptr [eax + edx*4 + 0x3e4], ecx */ W32((u32)(r_eax+r_edx*4+0x3e4u), r_ecx);
    /* 004805b9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004805bc: call 0x4805e0 */ r_esp -= 4; W32(r_esp, 0x4805c1u); f_004805e0();
    /* 004805c1: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004805c4: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004805c8: je 0x4805d6 */ if (fZ) goto L_004805d6;
L_004805ca:; BB(0x004805ca);
    /* 004805ca: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004805cd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004805d0: mov dword ptr [edx + 0x3fc], eax */ W32((u32)(r_edx+0x3fcu), r_eax);
L_004805d6:; BB(0x004805d6);
    /* 004805d6: mov esp, ebp */ r_esp = r_ebp;
    /* 004805d8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004805d9: ret 4 */ FN_RET(0x00480580); r_esp += 8; return;
}

void f_004805e0(void) /* sub_4805E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004805e0);
    /* 004805e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004805e1: mov ebp, esp */ r_ebp = r_esp;
    /* 004805e3: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004805e6: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 004805eb: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004805ed: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004805f0: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 004805f3: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 004805fa: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 00480601: jmp 0x48060c */ goto L_0048060c;
L_00480603:; BB(0x00480603);
    /* 00480603: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00480606: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00480609: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_0048060c:; BB(0x0048060c);
    /* 0048060c: cmp dword ptr [ebp - 0x14], 7 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00480610: jge 0x48061c */ if ((fS==fO)) goto L_0048061c;
L_00480612:; BB(0x00480612);
    /* 00480612: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00480615: mov byte ptr [ebp + ecx - 0x10], 0 */ W8((u32)(r_ebp+r_ecx+0xfffffff0u), 0x0u);
    /* 0048061a: jmp 0x480603 */ goto L_00480603;
L_0048061c:; BB(0x0048061c);
    /* 0048061c: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 00480623: jmp 0x48062e */ goto L_0048062e;
L_00480625:; BB(0x00480625);
    /* 00480625: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00480628: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0048062b: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
L_0048062e:; BB(0x0048062e);
    /* 0048062e: cmp dword ptr [ebp - 0x14], 7 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00480632: jge 0x48065f */ if ((fS==fO)) goto L_0048065f;
L_00480634:; BB(0x00480634);
    /* 00480634: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00480637: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048063a: mov edx, dword ptr [ecx + eax*4 + 0x3e4] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x3e4u));
    /* 00480641: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00480644: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00480648: jne 0x48064c */ if (!fZ) goto L_0048064c;
L_0048064a:; BB(0x0048064a);
    /* 0048064a: jmp 0x480625 */ goto L_00480625;
L_0048064c:; BB(0x0048064c);
    /* 0048064c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0048064f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00480652: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00480655: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00480658: mov byte ptr [ebp + ecx - 0x10], 1 */ W8((u32)(r_ebp+r_ecx+0xfffffff0u), 0x1u);
    /* 0048065d: jmp 0x480625 */ goto L_00480625;
L_0048065f:; BB(0x0048065f);
    /* 0048065f: cmp dword ptr [ebp - 0x18], 6 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00480663: jne 0x480690 */ if (!fZ) goto L_00480690;
L_00480665:; BB(0x00480665);
    /* 00480665: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0048066c: jmp 0x480677 */ goto L_00480677;
L_0048066e:; BB(0x0048066e);
    /* 0048066e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00480671: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00480674: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
L_00480677:; BB(0x00480677);
    /* 00480677: cmp dword ptr [ebp - 0x14], 7 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048067b: jge 0x480690 */ if ((fS==fO)) goto L_00480690;
L_0048067d:; BB(0x0048067d);
    /* 0048067d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00480680: movzx ecx, byte ptr [ebp + eax - 0x10] */ r_ecx = (u32)R8((u32)(r_ebp+r_eax+0xfffffff0u));
    /* 00480685: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00480687: jne 0x48068e */ if (!fZ) goto L_0048068e;
L_00480689:; BB(0x00480689);
    /* 00480689: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0048068c: jmp 0x480693 */ goto L_00480693;
L_0048068e:; BB(0x0048068e);
    /* 0048068e: jmp 0x48066e */ goto L_0048066e;
L_00480690:; BB(0x00480690);
    /* 00480690: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_00480693:; BB(0x00480693);
    /* 00480693: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00480696: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00480698: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x48069du); f_00686d72();
    /* 0048069d: mov esp, ebp */ r_esp = r_ebp;
    /* 0048069f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004806a0: ret  */ FN_RET(0x004805e0); r_esp += 4; return;
}

void f_004806b0(void) /* sub_4806B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004806b0);
    /* 004806b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004806b1: mov ebp, esp */ r_ebp = r_esp;
    /* 004806b3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004806b6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004806b9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004806c0: jmp 0x4806cb */ goto L_004806cb;
L_004806c2:; BB(0x004806c2);
    /* 004806c2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004806c5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004806c8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_004806cb:; BB(0x004806cb);
    /* 004806cb: cmp dword ptr [ebp - 4], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004806cf: jge 0x4806e8 */ if ((fS==fO)) goto L_004806e8;
L_004806d1:; BB(0x004806d1);
    /* 004806d1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004806d4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004806d7: cmp dword ptr [edx + ecx*4 + 0x3e4], -1 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x3e4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004806df: jne 0x4806e6 */ if (!fZ) goto L_004806e6;
L_004806e1:; BB(0x004806e1);
    /* 004806e1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004806e4: jmp 0x4806ea */ goto L_004806ea;
L_004806e6:; BB(0x004806e6);
    /* 004806e6: jmp 0x4806c2 */ goto L_004806c2;
L_004806e8:; BB(0x004806e8);
    /* 004806e8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004806ea:; BB(0x004806ea);
    /* 004806ea: mov esp, ebp */ r_esp = r_ebp;
    /* 004806ec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004806ed: ret  */ FN_RET(0x004806b0); r_esp += 4; return;
}

void f_004806f0(void) /* sub_4806F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004806f0);
    /* 004806f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004806f1: mov ebp, esp */ r_ebp = r_esp;
    /* 004806f3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004806f6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004806f9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004806fc: call 0x4806b0 */ r_esp -= 4; W32(r_esp, 0x480701u); f_004806b0();
    /* 00480701: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00480704: mov eax, 7 */ r_eax = 0x7u;
    /* 00480709: sub eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0048070c: mov esp, ebp */ r_esp = r_ebp;
    /* 0048070e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048070f: ret  */ FN_RET(0x004806f0); r_esp += 4; return;
}

void f_00480710(void) /* sub_480710 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00480710);
    /* 00480710: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00480711: mov ebp, esp */ r_ebp = r_esp;
    /* 00480713: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00480714: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00480717: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048071a: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 0048071d: mov byte ptr [eax + 0x3d0], cl */ W8((u32)(r_eax+0x3d0u), (u8)r_ecx);
    /* 00480723: movzx edx, byte ptr [ebp + 8] */ r_edx = (u32)R8((u32)(r_ebp+0x8u));
    /* 00480727: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00480729: je 0x480735 */ if (fZ) goto L_00480735;
L_0048072b:; BB(0x0048072b);
    /* 0048072b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048072d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00480730: call 0x480c10 */ r_esp -= 4; W32(r_esp, 0x480735u); f_00480c10();
L_00480735:; BB(0x00480735);
    /* 00480735: mov esp, ebp */ r_esp = r_ebp;
    /* 00480737: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00480738: ret 4 */ FN_RET(0x00480710); r_esp += 8; return;
}

void f_004807e0(void) /* sub_4807E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004807e0);
    /* 004807e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004807e1: mov ebp, esp */ r_ebp = r_esp;
    /* 004807e3: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004807e6: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004807e9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004807f0: cmp dword ptr [ebp + 8], 1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004807f4: jne 0x480896 */ if (!fZ) goto L_00480896;
L_004807fa:; BB(0x004807fa);
    /* 004807fa: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00480801: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00480808: jmp 0x480813 */ goto L_00480813;
L_0048080a:; BB(0x0048080a);
    /* 0048080a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048080d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00480810: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_00480813:; BB(0x00480813);
    /* 00480813: cmp dword ptr [ebp - 8], 0x21 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00480817: jge 0x480894 */ if ((fS==fO)) goto L_00480894;
L_00480819:; BB(0x00480819);
    /* 00480819: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048081c: imul ecx, ecx, 0x14 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x14u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0048081f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00480822: mov dword ptr [edx + ecx + 0x120], 0xffffffff */ W32((u32)(r_edx+r_ecx+0x120u), 0xffffffffu);
    /* 0048082d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00480830: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00480833: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00480836: mov dword ptr [ecx + eax + 0x12c], 0xffffffff */ W32((u32)(r_ecx+r_eax+0x12cu), 0xffffffffu);
    /* 00480841: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00480844: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00480847: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0048084a: mov dword ptr [eax + edx + 0x124], 0 */ W32((u32)(r_eax+r_edx+0x124u), 0x0u);
    /* 00480855: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00480858: imul ecx, ecx, 0xc */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xcu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0048085b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048085e: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00480861: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00480864: mov ecx, dword ptr [ecx + 0x72064c] */ r_ecx = R32((u32)(r_ecx+0x72064cu));
    /* 0048086a: mov dword ptr [eax + edx + 0x130], ecx */ W32((u32)(r_eax+r_edx+0x130u), r_ecx);
    /* 00480871: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00480874: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00480877: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0048087a: mov byte ptr [eax + edx + 0x128], 0 */ W8((u32)(r_eax+r_edx+0x128u), 0x0u);
    /* 00480882: cmp dword ptr [ebp - 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00480886: jl 0x48088f */ if ((fS!=fO)) goto L_0048088f;
L_00480888:; BB(0x00480888);
    /* 00480888: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_0048088f:; BB(0x0048088f);
    /* 0048088f: jmp 0x48080a */ goto L_0048080a;
L_00480894:; BB(0x00480894);
    /* 00480894: jmp 0x4808ed */ goto L_004808ed;
L_00480896:; BB(0x00480896);
    /* 00480896: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0048089d: jmp 0x4808a8 */ goto L_004808a8;
L_0048089f:; BB(0x0048089f);
    /* 0048089f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004808a2: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004808a5: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_004808a8:; BB(0x004808a8);
    /* 004808a8: cmp dword ptr [ebp - 8], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004808ac: jge 0x4808ed */ if ((fS==fO)) goto L_004808ed;
L_004808ae:; BB(0x004808ae);
    /* 004808ae: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004808b1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004808b4: mov ecx, dword ptr [eax + edx*4 + 0x3b4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x3b4u));
    /* 004808bb: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004808be: cmp dword ptr [ebp - 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004808c2: je 0x4808eb */ if (fZ) goto L_004808eb;
L_004808c4:; BB(0x004808c4);
    /* 004808c4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004808c7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004808c8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004808cb: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4808d0u); f_0047e390();
    /* 004808d0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004808d3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004808d6: call 0x4c6a70 */ r_esp -= 4; W32(r_esp, 0x4808dbu); f_004c6a70();
    /* 004808db: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004808de: imul ecx, ecx, 0x14 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x14u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004808e1: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004808e4: mov dword ptr [edx + ecx + 0x120], eax */ W32((u32)(r_edx+r_ecx+0x120u), r_eax);
L_004808eb:; BB(0x004808eb);
    /* 004808eb: jmp 0x48089f */ goto L_0048089f;
L_004808ed:; BB(0x004808ed);
    /* 004808ed: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 004808f4: jmp 0x4808ff */ goto L_004808ff;
L_004808f6:; BB(0x004808f6);
    /* 004808f6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004808f9: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004808fc: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_004808ff:; BB(0x004808ff);
    /* 004808ff: cmp dword ptr [ebp - 8], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00480903: jge 0x480918 */ if ((fS==fO)) goto L_00480918;
L_00480905:; BB(0x00480905);
    /* 00480905: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00480908: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0048090b: mov dword ptr [edx + ecx*4 + 0x3b4], 0xffffffff */ W32((u32)(r_edx+r_ecx*4+0x3b4u), 0xffffffffu);
    /* 00480916: jmp 0x4808f6 */ goto L_004808f6;
L_00480918:; BB(0x00480918);
    /* 00480918: mov esp, ebp */ r_esp = r_ebp;
    /* 0048091a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048091b: ret 4 */ FN_RET(0x004807e0); r_esp += 8; return;
}

void f_00480970(void) /* sub_480970 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00480970);
    /* 00480970: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00480971: mov ebp, esp */ r_ebp = r_esp;
    /* 00480973: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00480976: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00480977: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 0048097a: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 0048097f: mov ecx, dword ptr [eax + 0x4efc] */ r_ecx = R32((u32)(r_eax+0x4efcu));
    /* 00480985: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00480988: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0048098b: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0048098e: mov dword ptr [edx + 0xf4], eax */ W32((u32)(r_edx+0xf4u), r_eax);
    /* 00480994: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0048099a: mov edx, dword ptr [ecx + 0x4f00] */ r_edx = R32((u32)(r_ecx+0x4f00u));
    /* 004809a0: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 004809a3: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 004809a6: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004809a9: mov dword ptr [eax + 0xf8], ecx */ W32((u32)(r_eax+0xf8u), r_ecx);
    /* 004809af: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004809b1: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4809b6u); f_005dcb00();
    /* 004809b6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004809b9: mov esi, eax */ r_esi = r_eax;
    /* 004809bb: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004809be: call 0x480920 */ r_esp -= 4; W32(r_esp, 0x4809c3u); f_00480920();
    /* 004809c3: mov edx, dword ptr [esi + 0x4b4] */ r_edx = R32((u32)(r_esi+0x4b4u));
    /* 004809c9: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004809cb: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 004809ce: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004809d0: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004809d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004809d4: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x4809d9u); f_0064c8a0();
    /* 004809d9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004809dc: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 004809df: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 004809e2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004809e4: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4809e9u); f_005dcb00();
    /* 004809e9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004809ec: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004809ef: mov dword ptr [eax + 0x4b4], ecx */ W32((u32)(r_eax+0x4b4u), r_ecx);
    /* 004809f5: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004809f8: mov dword ptr [eax + 0x4b8], edx */ W32((u32)(r_eax+0x4b8u), r_edx);
    /* 004809fe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00480a00: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00480a03: call 0x480920 */ r_esp -= 4; W32(r_esp, 0x480a08u); f_00480920();
    /* 00480a08: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00480a09: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x480a0eu); f_0064c8a0();
    /* 00480a0e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00480a11: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00480a14: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00480a17: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00480a1a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00480a1b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00480a1e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00480a1f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00480a21: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x480a26u); f_005dcb00();
    /* 00480a26: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00480a29: mov ecx, eax */ r_ecx = r_eax;
    /* 00480a2b: call 0x5d5af0 */ r_esp -= 4; W32(r_esp, 0x480a30u); f_005d5af0();
    /* 00480a30: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00480a32: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00480a35: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00480a36: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x480a3bu); f_0064c8a0();
    /* 00480a3b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00480a3e: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00480a41: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00480a44: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00480a47: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00480a48: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00480a4b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00480a4c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00480a4e: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x480a53u); f_005dcb00();
    /* 00480a53: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00480a56: mov ecx, eax */ r_ecx = r_eax;
    /* 00480a58: call 0x5d59e0 */ r_esp -= 4; W32(r_esp, 0x480a5du); f_005d59e0();
    /* 00480a5d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00480a5f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00480a61: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x480a66u); f_0064c8a0();
    /* 00480a66: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00480a69: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00480a6c: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 00480a6f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00480a71: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x480a76u); f_005dcb00();
    /* 00480a76: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00480a79: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00480a7c: mov dword ptr [eax + 0x4dc], edx */ W32((u32)(r_eax+0x4dcu), r_edx);
    /* 00480a82: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00480a85: mov dword ptr [eax + 0x4e0], ecx */ W32((u32)(r_eax+0x4e0u), r_ecx);
    /* 00480a8b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00480a8d: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00480a90: call 0x480710 */ r_esp -= 4; W32(r_esp, 0x480a95u); f_00480710();
    /* 00480a95: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00480a97: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00480a9a: call 0x480c10 */ r_esp -= 4; W32(r_esp, 0x480a9fu); f_00480c10();
    /* 00480a9f: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00480aa2: mov dword ptr [edx + 0xfc], 1 */ W32((u32)(r_edx+0xfcu), 0x1u);
    /* 00480aac: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00480ab3: jmp 0x480abe */ goto L_00480abe;
L_00480ab5:; BB(0x00480ab5);
    /* 00480ab5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00480ab8: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00480abb: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00480abe:; BB(0x00480abe);
    /* 00480abe: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00480ac2: jge 0x480ad7 */ if ((fS==fO)) goto L_00480ad7;
L_00480ac4:; BB(0x00480ac4);
    /* 00480ac4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00480ac7: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00480aca: mov dword ptr [edx + ecx*4 + 0x108], 1 */ W32((u32)(r_edx+r_ecx*4+0x108u), 0x1u);
    /* 00480ad5: jmp 0x480ab5 */ goto L_00480ab5;
L_00480ad7:; BB(0x00480ad7);
    /* 00480ad7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00480ade: jmp 0x480ae9 */ goto L_00480ae9;
L_00480ae0:; BB(0x00480ae0);
    /* 00480ae0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00480ae3: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00480ae6: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00480ae9:; BB(0x00480ae9);
    /* 00480ae9: cmp dword ptr [ebp - 4], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00480aed: jge 0x480b02 */ if ((fS==fO)) goto L_00480b02;
L_00480aef:; BB(0x00480aef);
    /* 00480aef: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00480af2: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00480af5: mov dword ptr [edx + ecx*4 + 0x3e4], 0xffffffff */ W32((u32)(r_edx+r_ecx*4+0x3e4u), 0xffffffffu);
    /* 00480b00: jmp 0x480ae0 */ goto L_00480ae0;
L_00480b02:; BB(0x00480b02);
    /* 00480b02: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00480b05: mov dword ptr [eax + 0x400], 0xffffffff */ W32((u32)(r_eax+0x400u), 0xffffffffu);
    /* 00480b0f: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00480b12: mov dword ptr [ecx + 0xec], 0 */ W32((u32)(r_ecx+0xecu), 0x0u);
    /* 00480b1c: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00480b1f: mov dword ptr [edx + 0xf0], 0xffffffff */ W32((u32)(r_edx+0xf0u), 0xffffffffu);
    /* 00480b29: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00480b30: jmp 0x480b3b */ goto L_00480b3b;
L_00480b32:; BB(0x00480b32);
    /* 00480b32: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00480b35: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00480b38: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00480b3b:; BB(0x00480b3b);
    /* 00480b3b: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00480b3f: jge 0x480b54 */ if ((fS==fO)) goto L_00480b54;
L_00480b41:; BB(0x00480b41);
    /* 00480b41: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00480b44: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00480b47: mov dword ptr [edx + ecx*4 + 0x114], 0 */ W32((u32)(r_edx+r_ecx*4+0x114u), 0x0u);
    /* 00480b52: jmp 0x480b32 */ goto L_00480b32;
L_00480b54:; BB(0x00480b54);
    /* 00480b54: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00480b56: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00480b59: call 0x481a00 */ r_esp -= 4; W32(r_esp, 0x480b5eu); f_00481a00();
    /* 00480b5e: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 00480b64: call 0x4fb890 */ r_esp -= 4; W32(r_esp, 0x480b69u); f_004fb890();
    /* 00480b69: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00480b6a: mov esp, ebp */ r_esp = r_ebp;
    /* 00480b6c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00480b6d: ret  */ FN_RET(0x00480970); r_esp += 4; return;
}

void f_00480b70(void) /* sub_480B70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00480b70);
    /* 00480b70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00480b71: mov ebp, esp */ r_ebp = r_esp;
    /* 00480b73: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00480b76: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00480b79: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 00480b7e: mov ecx, dword ptr [eax + 0x4efc] */ r_ecx = R32((u32)(r_eax+0x4efcu));
    /* 00480b84: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00480b87: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00480b8a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00480b8d: mov dword ptr [edx + 0xf4], eax */ W32((u32)(r_edx+0xf4u), r_eax);
    /* 00480b93: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00480b99: mov edx, dword ptr [ecx + 0x4f00] */ r_edx = R32((u32)(r_ecx+0x4f00u));
    /* 00480b9f: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00480ba2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00480ba5: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00480ba8: mov dword ptr [eax + 0xf8], ecx */ W32((u32)(r_eax+0xf8u), r_ecx);
    /* 00480bae: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 00480bb4: call 0x4fbca0 */ r_esp -= 4; W32(r_esp, 0x480bb9u); f_004fbca0();
    /* 00480bb9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00480bbb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00480bbe: call 0x480710 */ r_esp -= 4; W32(r_esp, 0x480bc3u); f_00480710();
    /* 00480bc3: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 00480bc9: mov byte ptr [edx + 0x4f04], 1 */ W8((u32)(r_edx+0x4f04u), 0x1u);
    /* 00480bd0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00480bd2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00480bd4: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x480bd9u); f_0064c8a0();
    /* 00480bd9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00480bdc: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00480bdf: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00480be2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00480be4: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x480be9u); f_005dcb00();
    /* 00480be9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00480bec: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00480bef: mov dword ptr [eax + 0x4dc], ecx */ W32((u32)(r_eax+0x4dcu), r_ecx);
    /* 00480bf5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00480bf8: mov dword ptr [eax + 0x4e0], edx */ W32((u32)(r_eax+0x4e0u), r_edx);
    /* 00480bfe: mov esp, ebp */ r_esp = r_ebp;
    /* 00480c00: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00480c01: ret  */ FN_RET(0x00480b70); r_esp += 4; return;
}

void f_00480c10(void) /* sub_480C10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00480c10);
    /* 00480c10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00480c11: mov ebp, esp */ r_ebp = r_esp;
    /* 00480c13: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00480c16: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00480c19: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 00480c1e: mov ecx, dword ptr [eax + 0x4efc] */ r_ecx = R32((u32)(r_eax+0x4efcu));
    /* 00480c24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00480c27: movzx edx, byte ptr [ebp + 8] */ r_edx = (u32)R8((u32)(r_ebp+0x8u));
    /* 00480c2b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00480c2d: je 0x480c3f */ if (fZ) goto L_00480c3f;
L_00480c2f:; BB(0x00480c2f);
    /* 00480c2f: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 00480c34: mov ecx, dword ptr [eax + 0x4f00] */ r_ecx = R32((u32)(r_eax+0x4f00u));
    /* 00480c3a: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00480c3d: jmp 0x480c46 */ goto L_00480c46;
L_00480c3f:; BB(0x00480c3f);
    /* 00480c3f: mov dword ptr [ebp - 0x10], 0xffffffff */ W32((u32)(r_ebp+0xfffffff0u), 0xffffffffu);
L_00480c46:; BB(0x00480c46);
    /* 00480c46: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00480c49: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00480c4c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00480c4f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00480c50: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00480c53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00480c54: call 0x520790 */ r_esp -= 4; W32(r_esp, 0x480c59u); f_00520790();
    /* 00480c59: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00480c5c: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 00480c62: mov al, byte ptr [ebp + 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 00480c65: mov byte ptr [edx + 0x4f04], al */ W8((u32)(r_edx+0x4f04u), (u8)r_eax);
    /* 00480c6b: mov esp, ebp */ r_esp = r_ebp;
    /* 00480c6d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00480c6e: ret 4 */ FN_RET(0x00480c10); r_esp += 8; return;
}

void f_00480c80(void) /* sub_480C80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00480c80);
    /* 00480c80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00480c81: mov ebp, esp */ r_ebp = r_esp;
    /* 00480c83: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00480c86: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00480c89: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00480c90: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00480c93: cmp dword ptr [eax + 0x100], 0xe */ {  u32 a = R32((u32)(r_eax+0x100u)); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00480c9a: jne 0x480ca5 */ if (!fZ) goto L_00480ca5;
L_00480c9c:; BB(0x00480c9c);
    /* 00480c9c: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00480ca3: jmp 0x480cac */ goto L_00480cac;
L_00480ca5:; BB(0x00480ca5);
    /* 00480ca5: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
L_00480cac:; BB(0x00480cac);
    /* 00480cac: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00480caf: mov esp, ebp */ r_esp = r_ebp;
    /* 00480cb1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00480cb2: ret  */ FN_RET(0x00480c80); r_esp += 4; return;
}

void f_00480cc0(void) /* sub_480CC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00480cc0);
    /* 00480cc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00480cc1: mov ebp, esp */ r_ebp = r_esp;
    /* 00480cc3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00480cc6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00480cc9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00480cd0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00480cd3: call 0x480ea0 */ r_esp -= 4; W32(r_esp, 0x480cd8u); f_00480ea0();
    /* 00480cd8: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00480cdb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00480cdd: je 0x480ce6 */ if (fZ) goto L_00480ce6;
L_00480cdf:; BB(0x00480cdf);
    /* 00480cdf: mov eax, 1 */ r_eax = 0x1u;
    /* 00480ce4: jmp 0x480d0f */ goto L_00480d0f;
L_00480ce6:; BB(0x00480ce6);
    /* 00480ce6: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 00480cec: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00480cee: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 00480cf4: mov eax, dword ptr [edx + 0x2d0] */ r_eax = R32((u32)(r_edx+0x2d0u));
    /* 00480cfa: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x480cfcu); call_ind(t); }
    /* 00480cfc: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00480cff: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00480d01: je 0x480d0a */ if (fZ) goto L_00480d0a;
L_00480d03:; BB(0x00480d03);
    /* 00480d03: mov eax, 4 */ r_eax = 0x4u;
    /* 00480d08: jmp 0x480d0f */ goto L_00480d0f;
L_00480d0a:; BB(0x00480d0a);
    /* 00480d0a: mov eax, 3 */ r_eax = 0x3u;
L_00480d0f:; BB(0x00480d0f);
    /* 00480d0f: mov esp, ebp */ r_esp = r_ebp;
    /* 00480d11: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00480d12: ret  */ FN_RET(0x00480cc0); r_esp += 4; return;
}

void f_00480ea0(void) /* sub_480EA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00480ea0);
    /* 00480ea0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00480ea1: mov ebp, esp */ r_ebp = r_esp;
    /* 00480ea3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00480ea6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00480ea9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00480eac: cmp dword ptr [eax + 0x100], 0xe */ {  u32 a = R32((u32)(r_eax+0x100u)); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00480eb3: je 0x480eca */ if (fZ) goto L_00480eca;
L_00480eb5:; BB(0x00480eb5);
    /* 00480eb5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00480eb8: cmp dword ptr [ecx + 0x100], 0x2a */ {  u32 a = R32((u32)(r_ecx+0x100u)); u32 b = 0x2au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00480ebf: je 0x480eca */ if (fZ) goto L_00480eca;
L_00480ec1:; BB(0x00480ec1);
    /* 00480ec1: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00480ec8: jmp 0x480ed1 */ goto L_00480ed1;
L_00480eca:; BB(0x00480eca);
    /* 00480eca: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
L_00480ed1:; BB(0x00480ed1);
    /* 00480ed1: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 00480ed4: mov esp, ebp */ r_esp = r_ebp;
    /* 00480ed6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00480ed7: ret  */ FN_RET(0x00480ea0); r_esp += 4; return;
}

void f_00480f30(void) /* sub_480F30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00480f30);
    /* 00480f30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00480f31: mov ebp, esp */ r_ebp = r_esp;
    /* 00480f33: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00480f36: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00480f39: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 00480f3e: movzx ecx, byte ptr [eax + 0x4f04] */ r_ecx = (u32)R8((u32)(r_eax+0x4f04u));
    /* 00480f45: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00480f47: jne 0x480f4d */ if (!fZ) goto L_00480f4d;
L_00480f49:; BB(0x00480f49);
    /* 00480f49: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00480f4b: jmp 0x480f7a */ goto L_00480f7a;
L_00480f4d:; BB(0x00480f4d);
    /* 00480f4d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00480f50: call 0x480f80 */ r_esp -= 4; W32(r_esp, 0x480f55u); f_00480f80();
    /* 00480f55: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00480f58: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00480f5a: je 0x480f60 */ if (fZ) goto L_00480f60;
L_00480f5c:; BB(0x00480f5c);
    /* 00480f5c: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00480f5e: jmp 0x480f7a */ goto L_00480f7a;
L_00480f60:; BB(0x00480f60);
    /* 00480f60: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00480f63: mov cl, byte ptr [eax + 0x3d0] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x3d0u))) & 0xffu);
    /* 00480f69: mov byte ptr [ebp - 1], cl */ W8((u32)(r_ebp+0xffffffffu), (u8)r_ecx);
    /* 00480f6c: movzx edx, byte ptr [ebp - 1] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 00480f70: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00480f72: je 0x480f78 */ if (fZ) goto L_00480f78;
L_00480f74:; BB(0x00480f74);
    /* 00480f74: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00480f76: jmp 0x480f7a */ goto L_00480f7a;
L_00480f78:; BB(0x00480f78);
    /* 00480f78: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_00480f7a:; BB(0x00480f7a);
    /* 00480f7a: mov esp, ebp */ r_esp = r_ebp;
    /* 00480f7c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00480f7d: ret  */ FN_RET(0x00480f30); r_esp += 4; return;
}

void f_00480f80(void) /* sub_480F80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00480f80);
    /* 00480f80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00480f81: mov ebp, esp */ r_ebp = r_esp;
    /* 00480f83: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00480f86: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00480f89: mov byte ptr [ebp - 1], 0 */ W8((u32)(r_ebp+0xffffffffu), 0x0u);
    /* 00480f8d: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 00480f92: movzx ecx, byte ptr [eax + 0x4f04] */ r_ecx = (u32)R8((u32)(r_eax+0x4f04u));
    /* 00480f99: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00480f9b: jne 0x480fa4 */ if (!fZ) goto L_00480fa4;
L_00480f9d:; BB(0x00480f9d);
    /* 00480f9d: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00480f9f: jmp 0x4810b0 */ goto L_004810b0;
L_00480fa4:; BB(0x00480fa4);
    /* 00480fa4: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00480fab: jmp 0x480fb6 */ goto L_00480fb6;
L_00480fad:; BB(0x00480fad);
    /* 00480fad: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00480fb0: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00480fb3: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_00480fb6:; BB(0x00480fb6);
    /* 00480fb6: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00480fb9: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x480fbeu); f_0047f950();
    /* 00480fbe: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00480fc1: jge 0x4810a2 */ if ((fS==fO)) goto L_004810a2;
L_00480fc7:; BB(0x00480fc7);
    /* 00480fc7: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00480fca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00480fcb: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x480fd0u); f_005dcb00();
    /* 00480fd0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00480fd3: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00480fd6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00480fd9: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x480fdeu); f_0063aac0();
    /* 00480fde: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00480fe0: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00480fe3: cmp dword ptr [ebp - 0xc], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00480fe7: je 0x481005 */ if (fZ) goto L_00481005;
L_00480fe9:; BB(0x00480fe9);
    /* 00480fe9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00480fec: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x480ff1u); f_0063aac0();
    /* 00480ff1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00480ff3: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00480ff6: cmp dword ptr [ebp - 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00480ffa: je 0x481005 */ if (fZ) goto L_00481005;
L_00480ffc:; BB(0x00480ffc);
    /* 00480ffc: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00481003: jmp 0x48100c */ goto L_0048100c;
L_00481005:; BB(0x00481005);
    /* 00481005: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
L_0048100c:; BB(0x0048100c);
    /* 0048100c: movzx eax, byte ptr [ebp - 0x28] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffd8u));
    /* 00481010: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00481012: je 0x481018 */ if (fZ) goto L_00481018;
L_00481014:; BB(0x00481014);
    /* 00481014: mov byte ptr [ebp - 1], 1 */ W8((u32)(r_ebp+0xffffffffu), 0x1u);
L_00481018:; BB(0x00481018);
    /* 00481018: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048101b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048101c: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x481021u); f_005dcb00();
    /* 00481021: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00481024: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00481027: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048102a: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x48102fu); f_0063aac0();
    /* 0048102f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00481031: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00481034: cmp dword ptr [ebp - 0x18], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00481038: je 0x481056 */ if (fZ) goto L_00481056;
L_0048103a:; BB(0x0048103a);
    /* 0048103a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048103d: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x481042u); f_0063aac0();
    /* 00481042: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00481044: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00481047: cmp dword ptr [ebp - 0x1c], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048104b: je 0x481056 */ if (fZ) goto L_00481056;
L_0048104d:; BB(0x0048104d);
    /* 0048104d: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00481054: jmp 0x48105d */ goto L_0048105d;
L_00481056:; BB(0x00481056);
    /* 00481056: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
L_0048105d:; BB(0x0048105d);
    /* 0048105d: movzx ecx, byte ptr [ebp - 0x2c] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffd4u));
    /* 00481061: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00481063: je 0x48109d */ if (fZ) goto L_0048109d;
L_00481065:; BB(0x00481065);
    /* 00481065: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00481068: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00481069: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x48106eu); f_005dcb00();
    /* 0048106e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00481071: mov ecx, eax */ r_ecx = r_eax;
    /* 00481073: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x481078u); f_005d5a50();
    /* 00481078: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048107a: jne 0x48109d */ if (!fZ) goto L_0048109d;
L_0048107c:; BB(0x0048107c);
    /* 0048107c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0048107f: cmp dword ptr [eax + 0x400], -1 */ {  u32 a = R32((u32)(r_eax+0x400u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00481086: jne 0x481099 */ if (!fZ) goto L_00481099;
L_00481088:; BB(0x00481088);
    /* 00481088: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0048108b: call 0x480ee0 */ r_esp -= 4; W32(r_esp, 0x481090u); f_00480ee0();
    /* 00481090: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00481093: mov dword ptr [ecx + 0x400], eax */ W32((u32)(r_ecx+0x400u), r_eax);
L_00481099:; BB(0x00481099);
    /* 00481099: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0048109b: jmp 0x4810b0 */ goto L_004810b0;
L_0048109d:; BB(0x0048109d);
    /* 0048109d: jmp 0x480fad */ goto L_00480fad;
L_004810a2:; BB(0x004810a2);
    /* 004810a2: movzx edx, byte ptr [ebp - 1] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 004810a6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004810a8: jne 0x4810ae */ if (!fZ) goto L_004810ae;
L_004810aa:; BB(0x004810aa);
    /* 004810aa: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 004810ac: jmp 0x4810b0 */ goto L_004810b0;
L_004810ae:; BB(0x004810ae);
    /* 004810ae: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_004810b0:; BB(0x004810b0);
    /* 004810b0: mov esp, ebp */ r_esp = r_ebp;
    /* 004810b2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004810b3: ret  */ FN_RET(0x00480f80); r_esp += 4; return;
}

