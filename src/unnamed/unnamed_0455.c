#include "protos.h"

void f_004558f0(void) /* sub_4558F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004558f0);
    /* 004558f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004558f1: mov ebp, esp */ r_ebp = r_esp;
    /* 004558f3: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004558f6: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 004558f9: mov dword ptr [ebp - 0x18], 0xffffffff */ W32((u32)(r_ebp+0xffffffe8u), 0xffffffffu);
    /* 00455900: mov dword ptr [ebp - 0x10], 0xffffffff */ W32((u32)(r_ebp+0xfffffff0u), 0xffffffffu);
    /* 00455907: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 0045590a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045590b: lea ecx, [ebp - 4] */ r_ecx = (u32)(r_ebp+0xfffffffcu);
    /* 0045590e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045590f: lea edx, [ebp - 0xc] */ r_edx = (u32)(r_ebp+0xfffffff4u);
    /* 00455912: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00455913: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00455916: call 0x4517a0 */ r_esp -= 4; W32(r_esp, 0x45591bu); f_004517a0();
    /* 0045591b: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 0045591e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045591f: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 00455922: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00455923: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00455926: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00455927: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045592a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045592b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045592e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045592f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00455932: call 0x451c20 */ r_esp -= 4; W32(r_esp, 0x455937u); f_00451c20();
    /* 00455937: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0045593a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045593c: je 0x45595b */ if (fZ) goto L_0045595b;
L_0045593e:; BB(0x0045593e);
    /* 0045593e: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00455941: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00455942: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00455945: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00455946: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00455949: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045594a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045594d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045594e: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00455951: call 0x44f840 */ r_esp -= 4; W32(r_esp, 0x455956u); f_0044f840();
    /* 00455956: xor ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a ^ b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00455959: jmp 0x4559ba */ goto L_004559ba;
L_0045595b:; BB(0x0045595b);
    /* 0045595b: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0045595e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045595f: lea edx, [ebp - 0x18] */ r_edx = (u32)(r_ebp+0xffffffe8u);
    /* 00455962: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00455963: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00455966: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00455967: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045596a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045596b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045596e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045596f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00455972: call 0x451870 */ r_esp -= 4; W32(r_esp, 0x455977u); f_00451870();
    /* 00455977: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0045597a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045597c: je 0x45599c */ if (fZ) goto L_0045599c;
L_0045597e:; BB(0x0045597e);
    /* 0045597e: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00455981: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00455982: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00455985: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00455986: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00455989: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045598a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045598d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045598e: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00455991: call 0x44f840 */ r_esp -= 4; W32(r_esp, 0x455996u); f_0044f840();
    /* 00455996: mov ax, 1 */ r_eax = (r_eax & 0xffff0000u) | ((0x1u) & 0xffffu);
    /* 0045599a: jmp 0x4559ba */ goto L_004559ba;
L_0045599c:; BB(0x0045599c);
    /* 0045599c: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0045599f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004559a0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004559a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004559a4: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004559a7: call 0x455740 */ r_esp -= 4; W32(r_esp, 0x4559acu); f_00455740();
    /* 004559ac: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 004559af: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004559b2: mov word ptr [ebp - 0x14], cx */ W16((u32)(r_ebp+0xffffffecu), (u16)r_ecx);
    /* 004559b6: mov ax, word ptr [ebp - 0x14] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffecu))) & 0xffffu);
L_004559ba:; BB(0x004559ba);
    /* 004559ba: mov esp, ebp */ r_esp = r_ebp;
    /* 004559bc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004559bd: ret 8 */ FN_RET(0x004558f0); r_esp += 12; return;
}

void f_004559c0(void) /* sub_4559C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004559c0);
    /* 004559c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004559c1: mov ebp, esp */ r_ebp = r_esp;
    /* 004559c3: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004559c6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004559c7: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 004559ca: mov dword ptr [ebp - 0x10], 0xffffffff */ W32((u32)(r_ebp+0xfffffff0u), 0xffffffffu);
    /* 004559d1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004559d8: lea eax, [ebp - 0x14] */ r_eax = (u32)(r_ebp+0xffffffecu);
    /* 004559db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004559dc: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 004559df: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004559e0: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004559e3: call 0x451f60 */ r_esp -= 4; W32(r_esp, 0x4559e8u); f_00451f60();
    /* 004559e8: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004559eb: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004559ee: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 004559f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004559f4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004559f7: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x4559fcu); f_0044f680();
    /* 004559fc: mov esi, eax */ r_esi = r_eax;
    /* 004559fe: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00455a01: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00455a04: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 00455a09: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00455a0a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00455a0d: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x455a12u); f_0044f680();
    /* 00455a12: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455a14: jne 0x455a41 */ if (!fZ) goto L_00455a41;
L_00455a16:; BB(0x00455a16);
    /* 00455a16: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00455a19: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00455a1c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00455a1f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00455a22: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00455a25: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00455a26: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00455a29: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00455a2a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00455a2d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00455a2e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00455a31: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00455a32: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00455a35: call 0x44f840 */ r_esp -= 4; W32(r_esp, 0x455a3au); f_0044f840();
    /* 00455a3a: xor ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a ^ b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00455a3d: jmp 0x455ab6 */ goto L_00455ab6;
L_00455a41:; BB(0x00455a41);
    /* 00455a41: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00455a43: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00455a46: call 0x44f700 */ r_esp -= 4; W32(r_esp, 0x455a4bu); f_0044f700();
    /* 00455a4b: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455a4e: je 0x455a5f */ if (fZ) goto L_00455a5f;
L_00455a50:; BB(0x00455a50);
    /* 00455a50: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00455a52: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00455a55: call 0x44f700 */ r_esp -= 4; W32(r_esp, 0x455a5au); f_0044f700();
    /* 00455a5a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455a5d: jne 0x455a98 */ if (!fZ) goto L_00455a98;
L_00455a5f:; BB(0x00455a5f);
    /* 00455a5f: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00455a61: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00455a64: call 0x44f700 */ r_esp -= 4; W32(r_esp, 0x455a69u); f_0044f700();
    /* 00455a69: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455a6c: jne 0x455a98 */ if (!fZ) goto L_00455a98;
L_00455a6e:; BB(0x00455a6e);
    /* 00455a6e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00455a71: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00455a74: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00455a77: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00455a7a: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00455a7d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00455a7e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00455a81: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00455a82: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00455a85: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00455a86: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00455a89: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00455a8a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00455a8d: call 0x44f840 */ r_esp -= 4; W32(r_esp, 0x455a92u); f_0044f840();
    /* 00455a92: mov ax, 3 */ r_eax = (r_eax & 0xffff0000u) | ((0x3u) & 0xffffu);
    /* 00455a96: jmp 0x455ab6 */ goto L_00455ab6;
L_00455a98:; BB(0x00455a98);
    /* 00455a98: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00455a9b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00455a9c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00455a9f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00455aa0: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00455aa3: call 0x453e00 */ r_esp -= 4; W32(r_esp, 0x455aa8u); f_00453e00();
    /* 00455aa8: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 00455aab: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00455aae: mov word ptr [ebp - 0xc], cx */ W16((u32)(r_ebp+0xfffffff4u), (u16)r_ecx);
    /* 00455ab2: mov ax, word ptr [ebp - 0xc] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff4u))) & 0xffffu);
L_00455ab6:; BB(0x00455ab6);
    /* 00455ab6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00455ab7: mov esp, ebp */ r_esp = r_ebp;
    /* 00455ab9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00455aba: ret 8 */ FN_RET(0x004559c0); r_esp += 12; return;
}

void f_00455ac0(void) /* sub_455AC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00455ac0);
    /* 00455ac0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00455ac1: mov ebp, esp */ r_ebp = r_esp;
    /* 00455ac3: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00455ac6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00455ac7: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00455aca: mov dword ptr [ebp - 0x1c], 0xffffffff */ W32((u32)(r_ebp+0xffffffe4u), 0xffffffffu);
    /* 00455ad1: mov dword ptr [ebp - 0xc], 0xffffffff */ W32((u32)(r_ebp+0xfffffff4u), 0xffffffffu);
    /* 00455ad8: lea eax, [ebp - 0x24] */ r_eax = (u32)(r_ebp+0xffffffdcu);
    /* 00455adb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00455adc: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 00455adf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00455ae0: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00455ae3: call 0x452010 */ r_esp -= 4; W32(r_esp, 0x455ae8u); f_00452010();
    /* 00455ae8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00455aeb: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00455aee: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 00455af3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00455af4: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00455af7: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x455afcu); f_0044f680();
    /* 00455afc: mov esi, eax */ r_esi = r_eax;
    /* 00455afe: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00455b01: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00455b04: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 00455b09: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00455b0a: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00455b0d: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x455b12u); f_0044f680();
    /* 00455b12: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455b14: jne 0x455b42 */ if (!fZ) goto L_00455b42;
L_00455b16:; BB(0x00455b16);
    /* 00455b16: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00455b19: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00455b1c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00455b1f: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00455b22: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00455b25: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00455b26: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00455b29: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00455b2a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00455b2d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00455b2e: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00455b31: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00455b32: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00455b35: call 0x44f840 */ r_esp -= 4; W32(r_esp, 0x455b3au); f_0044f840();
    /* 00455b3a: xor ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a ^ b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00455b3d: jmp 0x455ca5 */ goto L_00455ca5;
L_00455b42:; BB(0x00455b42);
    /* 00455b42: mov dword ptr [ebp - 0x10], 0xffffffff */ W32((u32)(r_ebp+0xfffffff0u), 0xffffffffu);
    /* 00455b49: mov dword ptr [ebp - 0x20], 0xffffffff */ W32((u32)(r_ebp+0xffffffe0u), 0xffffffffu);
    /* 00455b50: mov dword ptr [ebp - 0x28], 0xffffffff */ W32((u32)(r_ebp+0xffffffd8u), 0xffffffffu);
    /* 00455b57: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00455b5e: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00455b65: jmp 0x455b70 */ goto L_00455b70;
L_00455b67:; BB(0x00455b67);
    /* 00455b67: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00455b6a: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00455b6d: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_00455b70:; BB(0x00455b70);
    /* 00455b70: cmp dword ptr [ebp - 8], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00455b74: jge 0x455c46 */ if ((fS==fO)) goto L_00455c46;
L_00455b7a:; BB(0x00455b7a);
    /* 00455b7a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00455b7d: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00455b80: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 00455b85: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00455b86: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00455b89: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x455b8eu); f_0044f680();
    /* 00455b8e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00455b8f: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00455b92: call 0x44f700 */ r_esp -= 4; W32(r_esp, 0x455b97u); f_0044f700();
    /* 00455b97: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455b9a: jne 0x455be3 */ if (!fZ) goto L_00455be3;
L_00455b9c:; BB(0x00455b9c);
    /* 00455b9c: cmp dword ptr [ebp - 0x10], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455ba0: jne 0x455bbb */ if (!fZ) goto L_00455bbb;
L_00455ba2:; BB(0x00455ba2);
    /* 00455ba2: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00455ba5: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00455ba8: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 00455bad: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00455bae: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00455bb1: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x455bb6u); f_0044f680();
    /* 00455bb6: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00455bb9: jmp 0x455bd8 */ goto L_00455bd8;
L_00455bbb:; BB(0x00455bbb);
    /* 00455bbb: cmp dword ptr [ebp - 0x20], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455bbf: jne 0x455bd8 */ if (!fZ) goto L_00455bd8;
L_00455bc1:; BB(0x00455bc1);
    /* 00455bc1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00455bc4: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00455bc7: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 00455bcc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00455bcd: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00455bd0: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x455bd5u); f_0044f680();
    /* 00455bd5: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_00455bd8:; BB(0x00455bd8);
    /* 00455bd8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00455bdb: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00455bde: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00455be1: jmp 0x455b67 */ goto L_00455b67;
L_00455be3:; BB(0x00455be3);
    /* 00455be3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00455be6: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00455be9: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 00455bee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00455bef: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00455bf2: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x455bf7u); f_0044f680();
    /* 00455bf7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00455bf8: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00455bfb: call 0x44f700 */ r_esp -= 4; W32(r_esp, 0x455c00u); f_0044f700();
    /* 00455c00: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455c03: jne 0x455c41 */ if (!fZ) goto L_00455c41;
L_00455c05:; BB(0x00455c05);
    /* 00455c05: cmp dword ptr [ebp - 0x28], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455c09: jne 0x455c24 */ if (!fZ) goto L_00455c24;
L_00455c0b:; BB(0x00455c0b);
    /* 00455c0b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00455c0e: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00455c11: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 00455c16: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00455c17: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00455c1a: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x455c1fu); f_0044f680();
    /* 00455c1f: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00455c22: jmp 0x455c41 */ goto L_00455c41;
L_00455c24:; BB(0x00455c24);
    /* 00455c24: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455c28: jne 0x455c41 */ if (!fZ) goto L_00455c41;
L_00455c2a:; BB(0x00455c2a);
    /* 00455c2a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00455c2d: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00455c30: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 00455c35: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00455c36: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00455c39: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x455c3eu); f_0044f680();
    /* 00455c3e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00455c41:; BB(0x00455c41);
    /* 00455c41: jmp 0x455b67 */ goto L_00455b67;
L_00455c46:; BB(0x00455c46);
    /* 00455c46: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00455c49: add ecx, dword ptr [ebp - 0x20] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00455c4c: cmp ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00455c4f: jg 0x455c87 */ if ((!fZ&&fS==fO)) goto L_00455c87;
L_00455c51:; BB(0x00455c51);
    /* 00455c51: cmp dword ptr [ebp - 0x28], 0xb */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00455c55: jg 0x455c87 */ if ((!fZ&&fS==fO)) goto L_00455c87;
L_00455c57:; BB(0x00455c57);
    /* 00455c57: cmp dword ptr [ebp - 4], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00455c5b: jg 0x455c87 */ if ((!fZ&&fS==fO)) goto L_00455c87;
L_00455c5d:; BB(0x00455c5d);
    /* 00455c5d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00455c60: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00455c63: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00455c66: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00455c69: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00455c6c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00455c6d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00455c70: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00455c71: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00455c74: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00455c75: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00455c78: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00455c79: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00455c7c: call 0x44f840 */ r_esp -= 4; W32(r_esp, 0x455c81u); f_0044f840();
    /* 00455c81: mov ax, 3 */ r_eax = (r_eax & 0xffff0000u) | ((0x3u) & 0xffffu);
    /* 00455c85: jmp 0x455ca5 */ goto L_00455ca5;
L_00455c87:; BB(0x00455c87);
    /* 00455c87: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00455c8a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00455c8b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00455c8e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00455c8f: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00455c92: call 0x453e00 */ r_esp -= 4; W32(r_esp, 0x455c97u); f_00453e00();
    /* 00455c97: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 00455c9a: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00455c9d: mov word ptr [ebp - 0x18], cx */ W16((u32)(r_ebp+0xffffffe8u), (u16)r_ecx);
    /* 00455ca1: mov ax, word ptr [ebp - 0x18] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe8u))) & 0xffffu);
L_00455ca5:; BB(0x00455ca5);
    /* 00455ca5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00455ca6: mov esp, ebp */ r_esp = r_ebp;
    /* 00455ca8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00455ca9: ret 8 */ FN_RET(0x00455ac0); r_esp += 12; return;
}

void f_00455cb0(void) /* sub_455CB0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00455cb0);
    /* 00455cb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00455cb1: mov ebp, esp */ r_ebp = r_esp;
    /* 00455cb3: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00455cb6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00455cb7: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00455cba: mov dword ptr [ebp - 0x18], 0xffffffff */ W32((u32)(r_ebp+0xffffffe8u), 0xffffffffu);
    /* 00455cc1: mov dword ptr [ebp - 0xc], 0xffffffff */ W32((u32)(r_ebp+0xfffffff4u), 0xffffffffu);
    /* 00455cc8: lea eax, [ebp - 0x28] */ r_eax = (u32)(r_ebp+0xffffffd8u);
    /* 00455ccb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00455ccc: lea ecx, [ebp - 4] */ r_ecx = (u32)(r_ebp+0xfffffffcu);
    /* 00455ccf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00455cd0: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00455cd3: call 0x452010 */ r_esp -= 4; W32(r_esp, 0x455cd8u); f_00452010();
    /* 00455cd8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00455cdb: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00455cde: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 00455ce3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00455ce4: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00455ce7: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x455cecu); f_0044f680();
    /* 00455cec: mov esi, eax */ r_esi = r_eax;
    /* 00455cee: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00455cf1: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00455cf4: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 00455cf9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00455cfa: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00455cfd: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x455d02u); f_0044f680();
    /* 00455d02: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455d04: jne 0x455d32 */ if (!fZ) goto L_00455d32;
L_00455d06:; BB(0x00455d06);
    /* 00455d06: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00455d09: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00455d0c: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00455d0f: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00455d12: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00455d15: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00455d16: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00455d19: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00455d1a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00455d1d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00455d1e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00455d21: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00455d22: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00455d25: call 0x44f840 */ r_esp -= 4; W32(r_esp, 0x455d2au); f_0044f840();
    /* 00455d2a: xor ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a ^ b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00455d2d: jmp 0x455ff9 */ goto L_00455ff9;
L_00455d32:; BB(0x00455d32);
    /* 00455d32: lea edx, [ebp - 0x1c] */ r_edx = (u32)(r_ebp+0xffffffe4u);
    /* 00455d35: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00455d36: lea eax, [ebp - 0x24] */ r_eax = (u32)(r_ebp+0xffffffdcu);
    /* 00455d39: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00455d3a: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00455d3d: call 0x451f60 */ r_esp -= 4; W32(r_esp, 0x455d42u); f_00451f60();
    /* 00455d42: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00455d45: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00455d48: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 00455d4d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00455d4e: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00455d51: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x455d56u); f_0044f680();
    /* 00455d56: mov esi, eax */ r_esi = r_eax;
    /* 00455d58: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00455d5b: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00455d5e: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 00455d63: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00455d64: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00455d67: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x455d6cu); f_0044f680();
    /* 00455d6c: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455d6e: jne 0x455d9c */ if (!fZ) goto L_00455d9c;
L_00455d70:; BB(0x00455d70);
    /* 00455d70: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00455d73: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00455d76: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00455d79: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00455d7c: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00455d7f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00455d80: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00455d83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00455d84: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00455d87: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00455d88: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00455d8b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00455d8c: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00455d8f: call 0x44f840 */ r_esp -= 4; W32(r_esp, 0x455d94u); f_0044f840();
    /* 00455d94: xor ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a ^ b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00455d97: jmp 0x455ff9 */ goto L_00455ff9;
L_00455d9c:; BB(0x00455d9c);
    /* 00455d9c: mov dword ptr [ebp - 0x10], 0xffffffff */ W32((u32)(r_ebp+0xfffffff0u), 0xffffffffu);
    /* 00455da3: mov dword ptr [ebp - 0x20], 0xffffffff */ W32((u32)(r_ebp+0xffffffe0u), 0xffffffffu);
    /* 00455daa: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00455db1: jmp 0x455dbc */ goto L_00455dbc;
L_00455db3:; BB(0x00455db3);
    /* 00455db3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00455db6: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00455db9: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_00455dbc:; BB(0x00455dbc);
    /* 00455dbc: cmp dword ptr [ebp - 8], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00455dc0: jge 0x455e2d */ if ((fS==fO)) goto L_00455e2d;
L_00455dc2:; BB(0x00455dc2);
    /* 00455dc2: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00455dc5: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00455dc8: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 00455dcd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00455dce: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00455dd1: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x455dd6u); f_0044f680();
    /* 00455dd6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00455dd7: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00455dda: call 0x44f700 */ r_esp -= 4; W32(r_esp, 0x455ddfu); f_0044f700();
    /* 00455ddf: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455de2: jne 0x455e2b */ if (!fZ) goto L_00455e2b;
L_00455de4:; BB(0x00455de4);
    /* 00455de4: cmp dword ptr [ebp - 0x10], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455de8: jne 0x455e0c */ if (!fZ) goto L_00455e0c;
L_00455dea:; BB(0x00455dea);
    /* 00455dea: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00455ded: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00455df0: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 00455df5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00455df6: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00455df9: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x455dfeu); f_0044f680();
    /* 00455dfe: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00455e01: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00455e04: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00455e07: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00455e0a: jmp 0x455e2b */ goto L_00455e2b;
L_00455e0c:; BB(0x00455e0c);
    /* 00455e0c: cmp dword ptr [ebp - 0x20], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455e10: jne 0x455e2b */ if (!fZ) goto L_00455e2b;
L_00455e12:; BB(0x00455e12);
    /* 00455e12: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00455e15: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00455e18: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 00455e1d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00455e1e: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00455e21: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x455e26u); f_0044f680();
    /* 00455e26: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00455e29: jmp 0x455e2d */ goto L_00455e2d;
L_00455e2b:; BB(0x00455e2b);
    /* 00455e2b: jmp 0x455db3 */ goto L_00455db3;
L_00455e2d:; BB(0x00455e2d);
    /* 00455e2d: mov dword ptr [ebp - 0x18], 0xffffffff */ W32((u32)(r_ebp+0xffffffe8u), 0xffffffffu);
    /* 00455e34: mov dword ptr [ebp - 0xc], 0xffffffff */ W32((u32)(r_ebp+0xfffffff4u), 0xffffffffu);
    /* 00455e3b: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00455e3e: add eax, dword ptr [ebp - 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00455e41: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00455e44: jle 0x455e6a */ if ((fZ||fS!=fO)) goto L_00455e6a;
L_00455e46:; BB(0x00455e46);
    /* 00455e46: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00455e49: cmp dword ptr [ecx + 0x338], 6 */ {  u32 a = R32((u32)(r_ecx+0x338u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455e50: jne 0x455fdb */ if (!fZ) goto L_00455fdb;
L_00455e56:; BB(0x00455e56);
    /* 00455e56: cmp dword ptr [ebp - 0x10], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00455e5a: jg 0x455fdb */ if ((!fZ&&fS==fO)) goto L_00455fdb;
L_00455e60:; BB(0x00455e60);
    /* 00455e60: cmp dword ptr [ebp - 0x20], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00455e64: jg 0x455fdb */ if ((!fZ&&fS==fO)) goto L_00455fdb;
L_00455e6a:; BB(0x00455e6a);
    /* 00455e6a: mov word ptr [ebp - 0x14], 3 */ W16((u32)(r_ebp+0xffffffecu), 0x3u);
    /* 00455e70: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00455e77: jmp 0x455e82 */ goto L_00455e82;
L_00455e79:; BB(0x00455e79);
    /* 00455e79: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00455e7c: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00455e7f: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_00455e82:; BB(0x00455e82);
    /* 00455e82: cmp dword ptr [ebp - 8], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00455e86: jge 0x455ed8 */ if ((fS==fO)) goto L_00455ed8;
L_00455e88:; BB(0x00455e88);
    /* 00455e88: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00455e8b: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00455e8e: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 00455e93: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00455e94: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00455e97: call 0x44f6c0 */ r_esp -= 4; W32(r_esp, 0x455e9cu); f_0044f6c0();
    /* 00455e9c: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455e9f: je 0x455ed6 */ if (fZ) goto L_00455ed6;
L_00455ea1:; BB(0x00455ea1);
    /* 00455ea1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00455ea4: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00455ea7: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 00455eac: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00455ead: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00455eb0: call 0x44f6c0 */ r_esp -= 4; W32(r_esp, 0x455eb5u); f_0044f6c0();
    /* 00455eb5: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00455eb8: cmp eax, dword ptr [ecx + 0x2d0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x2d0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455ebe: je 0x455ed6 */ if (fZ) goto L_00455ed6;
L_00455ec0:; BB(0x00455ec0);
    /* 00455ec0: cmp dword ptr [ebp - 0x18], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455ec4: jne 0x455ece */ if (!fZ) goto L_00455ece;
L_00455ec6:; BB(0x00455ec6);
    /* 00455ec6: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00455ec9: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00455ecc: jmp 0x455ed6 */ goto L_00455ed6;
L_00455ece:; BB(0x00455ece);
    /* 00455ece: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00455ed1: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00455ed4: jmp 0x455ed8 */ goto L_00455ed8;
L_00455ed6:; BB(0x00455ed6);
    /* 00455ed6: jmp 0x455e79 */ goto L_00455e79;
L_00455ed8:; BB(0x00455ed8);
    /* 00455ed8: cmp dword ptr [ebp - 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455edc: jne 0x455fbd */ if (!fZ) goto L_00455fbd;
L_00455ee2:; BB(0x00455ee2);
    /* 00455ee2: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00455ee5: cmp dword ptr [ecx + 0x344], 6 */ {  u32 a = R32((u32)(r_ecx+0x344u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455eec: jne 0x455f1e */ if (!fZ) goto L_00455f1e;
L_00455eee:; BB(0x00455eee);
    /* 00455eee: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00455ef1: mov ax, word ptr [edx + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x4u))) & 0xffffu);
    /* 00455ef5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00455ef6: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00455ef9: call 0x44f6c0 */ r_esp -= 4; W32(r_esp, 0x455efeu); f_0044f6c0();
    /* 00455efe: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00455f01: cmp eax, dword ptr [ecx + 0x2d0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x2d0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455f07: jne 0x455f12 */ if (!fZ) goto L_00455f12;
L_00455f09:; BB(0x00455f09);
    /* 00455f09: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00455f10: jmp 0x455f19 */ goto L_00455f19;
L_00455f12:; BB(0x00455f12);
    /* 00455f12: mov dword ptr [ebp - 0xc], 1 */ W32((u32)(r_ebp+0xfffffff4u), 0x1u);
L_00455f19:; BB(0x00455f19);
    /* 00455f19: jmp 0x455fbd */ goto L_00455fbd;
L_00455f1e:; BB(0x00455f1e);
    /* 00455f1e: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00455f25: jmp 0x455f30 */ goto L_00455f30;
L_00455f27:; BB(0x00455f27);
    /* 00455f27: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00455f2a: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00455f2d: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_00455f30:; BB(0x00455f30);
    /* 00455f30: cmp dword ptr [ebp - 8], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00455f34: jge 0x455fbd */ if ((fS==fO)) goto L_00455fbd;
L_00455f3a:; BB(0x00455f3a);
    /* 00455f3a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00455f3d: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00455f40: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 00455f45: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00455f46: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00455f49: call 0x44f6c0 */ r_esp -= 4; W32(r_esp, 0x455f4eu); f_0044f6c0();
    /* 00455f4e: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00455f51: cmp eax, dword ptr [ecx + 0x2d0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x2d0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455f57: jne 0x455fb8 */ if (!fZ) goto L_00455fb8;
L_00455f59:; BB(0x00455f59);
    /* 00455f59: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00455f5c: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00455f5f: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 00455f64: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00455f65: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00455f68: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x455f6du); f_0044f680();
    /* 00455f6d: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455f70: je 0x455fb8 */ if (fZ) goto L_00455fb8;
L_00455f72:; BB(0x00455f72);
    /* 00455f72: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00455f75: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00455f78: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 00455f7d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00455f7e: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00455f81: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x455f86u); f_0044f680();
    /* 00455f86: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00455f89: cmp eax, dword ptr [edx + 0x338] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x338u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00455f8f: jg 0x455fb0 */ if ((!fZ&&fS==fO)) goto L_00455fb0;
L_00455f91:; BB(0x00455f91);
    /* 00455f91: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00455f94: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00455f97: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 00455f9c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00455f9d: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00455fa0: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x455fa5u); f_0044f680();
    /* 00455fa5: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00455fa8: cmp eax, dword ptr [ecx + 0x328] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x328u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00455fae: jge 0x455fb8 */ if ((fS==fO)) goto L_00455fb8;
L_00455fb0:; BB(0x00455fb0);
    /* 00455fb0: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00455fb3: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00455fb6: jmp 0x455fbd */ goto L_00455fbd;
L_00455fb8:; BB(0x00455fb8);
    /* 00455fb8: jmp 0x455f27 */ goto L_00455f27;
L_00455fbd:; BB(0x00455fbd);
    /* 00455fbd: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00455fc0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00455fc1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00455fc4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00455fc5: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00455fc8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00455fc9: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00455fcc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00455fcd: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00455fd0: call 0x44f840 */ r_esp -= 4; W32(r_esp, 0x455fd5u); f_0044f840();
    /* 00455fd5: mov ax, word ptr [ebp - 0x14] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffecu))) & 0xffffu);
    /* 00455fd9: jmp 0x455ff9 */ goto L_00455ff9;
L_00455fdb:; BB(0x00455fdb);
    /* 00455fdb: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00455fde: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00455fdf: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00455fe2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00455fe3: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00455fe6: call 0x453e00 */ r_esp -= 4; W32(r_esp, 0x455febu); f_00453e00();
    /* 00455feb: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 00455fee: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00455ff1: mov word ptr [ebp - 0x14], ax */ W16((u32)(r_ebp+0xffffffecu), (u16)r_eax);
    /* 00455ff5: mov ax, word ptr [ebp - 0x14] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffecu))) & 0xffffu);
L_00455ff9:; BB(0x00455ff9);
    /* 00455ff9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00455ffa: mov esp, ebp */ r_esp = r_ebp;
    /* 00455ffc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00455ffd: ret 8 */ FN_RET(0x00455cb0); r_esp += 12; return;
}

