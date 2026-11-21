#include "protos.h"

void f_005f0a30(void) /* sub_5F0A30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f0a30);
    /* 005f0a30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f0a31: mov ebp, esp */ r_ebp = r_esp;
    /* 005f0a33: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f0a36: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005f0a39: mov dword ptr [ebp - 4], 0xa */ W32((u32)(r_ebp+0xfffffffcu), 0xau);
    /* 005f0a40: movzx eax, byte ptr [ebp + 8] */ r_eax = (u32)R8((u32)(r_ebp+0x8u));
    /* 005f0a44: cmp eax, 0x7f */ {  u32 a = r_eax; u32 b = 0x7fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f0a47: jg 0x5f0a56 */ if ((!fZ&&fS==fO)) goto L_005f0a56;
L_005f0a49:; BB(0x005f0a49);
    /* 005f0a49: mov al, byte ptr [ebp + 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 005f0a4c: jmp 0x5f0ada */ goto L_005f0ada;
L_005f0a56:; BB(0x005f0a56);
    /* 005f0a56: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f0a59: mov edx, dword ptr [ecx + 0x64] */ r_edx = R32((u32)(r_ecx+0x64u));
    /* 005f0a5c: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005f0a5f: cmp dword ptr [ebp - 0x10], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f0a63: je 0x5f0a73 */ if (fZ) goto L_005f0a73;
L_005f0a65:; BB(0x005f0a65);
    /* 005f0a65: cmp dword ptr [ebp - 0x10], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f0a69: je 0x5f0aab */ if (fZ) goto L_005f0aab;
L_005f0a6b:; BB(0x005f0a6b);
    /* 005f0a6b: cmp dword ptr [ebp - 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f0a6f: je 0x5f0ad3 */ if (fZ) goto L_005f0ad3;
L_005f0a71:; BB(0x005f0a71);
    /* 005f0a71: jmp 0x5f0ad8 */ goto L_005f0ad8;
L_005f0a73:; BB(0x005f0a73);
    /* 005f0a73: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005f0a7a: jmp 0x5f0a85 */ goto L_005f0a85;
L_005f0a7c:; BB(0x005f0a7c);
    /* 005f0a7c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f0a7f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f0a82: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_005f0a85:; BB(0x005f0a85);
    /* 005f0a85: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f0a88: cmp ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f0a8b: jge 0x5f0aa9 */ if ((fS==fO)) goto L_005f0aa9;
L_005f0a8d:; BB(0x005f0a8d);
    /* 005f0a8d: movzx edx, byte ptr [ebp + 8] */ r_edx = (u32)R8((u32)(r_ebp+0x8u));
    /* 005f0a91: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f0a94: movzx ecx, byte ptr [eax + 0x75ee84] */ r_ecx = (u32)R8((u32)(r_eax+0x75ee84u));
    /* 005f0a9b: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f0a9d: jne 0x5f0aa7 */ if (!fZ) goto L_005f0aa7;
L_005f0a9f:; BB(0x005f0a9f);
    /* 005f0a9f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f0aa2: add eax, 0x7f */ {  u32 a = r_eax; u32 b = 0x7fu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f0aa5: jmp 0x5f0ada */ goto L_005f0ada;
L_005f0aa7:; BB(0x005f0aa7);
    /* 005f0aa7: jmp 0x5f0a7c */ goto L_005f0a7c;
L_005f0aa9:; BB(0x005f0aa9);
    /* 005f0aa9: jmp 0x5f0ad8 */ goto L_005f0ad8;
L_005f0aab:; BB(0x005f0aab);
    /* 005f0aab: movzx edx, byte ptr [ebp + 8] */ r_edx = (u32)R8((u32)(r_ebp+0x8u));
    /* 005f0aaf: cmp edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f0ab5: jl 0x5f0ac8 */ if ((fS!=fO)) goto L_005f0ac8;
L_005f0ab7:; BB(0x005f0ab7);
    /* 005f0ab7: movzx eax, byte ptr [ebp + 8] */ r_eax = (u32)R8((u32)(r_ebp+0x8u));
    /* 005f0abb: cmp eax, 0xa0 */ {  u32 a = r_eax; u32 b = 0xa0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f0ac0: jg 0x5f0ac8 */ if ((!fZ&&fS==fO)) goto L_005f0ac8;
L_005f0ac2:; BB(0x005f0ac2);
    /* 005f0ac2: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005f0ac4: jmp 0x5f0ada */ goto L_005f0ada;
L_005f0ac8:; BB(0x005f0ac8);
    /* 005f0ac8: movzx eax, byte ptr [ebp + 8] */ r_eax = (u32)R8((u32)(r_ebp+0x8u));
    /* 005f0acc: sub eax, 0x21 */ {  u32 a = r_eax; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005f0acf: jmp 0x5f0ada */ goto L_005f0ada;
L_005f0ad3:; BB(0x005f0ad3);
    /* 005f0ad3: mov al, byte ptr [ebp + 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 005f0ad6: jmp 0x5f0ada */ goto L_005f0ada;
L_005f0ad8:; BB(0x005f0ad8);
    /* 005f0ad8: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_005f0ada:; BB(0x005f0ada);
    /* 005f0ada: mov esp, ebp */ r_esp = r_ebp;
    /* 005f0adc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f0add: ret 4 */ FN_RET(0x005f0a30); r_esp += 8; return;
}

void f_005f0ae0(void) /* sub_5F0AE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f0ae0);
    /* 005f0ae0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f0ae1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f0ae3: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f0ae6: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 005f0ae9: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005f0aec: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 005f0aef: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005f0af2: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005f0af5: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 005f0af8: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005f0afb: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005f0afe: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 005f0b01: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005f0b04: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005f0b07: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005f0b0a: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005f0b0d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005f0b10: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005f0b13: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f0b16: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005f0b19: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f0b1c: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005f0b1f: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f0b22: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005f0b25: mov al, byte ptr [ebp + 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 005f0b28: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f0b29: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005f0b2c: call 0x5f62f0 */ r_esp -= 4; W32(r_esp, 0x5f0b31u); f_005f62f0();
    /* 005f0b31: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005f0b34: mov dl, byte ptr [ebp + 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 005f0b37: mov byte ptr [ecx + 0x9c], dl */ W8((u32)(r_ecx+0x9cu), (u8)r_edx);
    /* 005f0b3d: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005f0b40: cmp dword ptr [eax + 0x28], 0 */ {  u32 a = R32((u32)(r_eax+0x28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f0b44: je 0x5f0b7b */ if (fZ) goto L_005f0b7b;
L_005f0b46:; BB(0x005f0b46);
    /* 005f0b46: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005f0b49: call 0x5f54a0 */ r_esp -= 4; W32(r_esp, 0x5f0b4eu); f_005f54a0();
    /* 005f0b4e: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005f0b51: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f0b53: je 0x5f0b7b */ if (fZ) goto L_005f0b7b;
L_005f0b55:; BB(0x005f0b55);
    /* 005f0b55: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005f0b58: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 005f0b5b: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005f0b5e: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005f0b61: mov edx, dword ptr [ecx + 0x1a8] */ r_edx = R32((u32)(r_ecx+0x1a8u));
    /* 005f0b67: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 005f0b6a: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 005f0b6d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f0b6e: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005f0b71: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005f0b73: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005f0b76: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 005f0b79: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f0b7bu); call_ind(t); }
L_005f0b7b:; BB(0x005f0b7b);
    /* 005f0b7b: mov esp, ebp */ r_esp = r_ebp;
    /* 005f0b7d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f0b7e: ret 4 */ FN_RET(0x005f0ae0); r_esp += 8; return;
}

void f_005f0b90(void) /* sub_5F0B90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f0b90);
    /* 005f0b90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f0b91: mov ebp, esp */ r_ebp = r_esp;
    /* 005f0b93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f0b94: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f0b97: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f0b9a: mov byte ptr [eax + 0x9e], 1 */ W8((u32)(r_eax+0x9eu), 0x1u);
    /* 005f0ba1: mov esp, ebp */ r_esp = r_ebp;
    /* 005f0ba3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f0ba4: ret  */ FN_RET(0x005f0b90); r_esp += 4; return;
}

void f_005f0bb0(void) /* sub_5F0BB0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f0bb0);
    /* 005f0bb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f0bb1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f0bb3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f0bb4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f0bb7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f0bba: mov byte ptr [eax + 0x9e], 0 */ W8((u32)(r_eax+0x9eu), 0x0u);
    /* 005f0bc1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f0bc4: mov byte ptr [ecx + 0x9f], 0 */ W8((u32)(r_ecx+0x9fu), 0x0u);
    /* 005f0bcb: mov esp, ebp */ r_esp = r_ebp;
    /* 005f0bcd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f0bce: ret  */ FN_RET(0x005f0bb0); r_esp += 4; return;
}

void f_005f0bd0(void) /* sub_5F0BD0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f0bd0);
    /* 005f0bd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f0bd1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f0bd3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f0bd4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f0bd7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f0bda: movzx ecx, byte ptr [eax + 0x9e] */ r_ecx = (u32)R8((u32)(r_eax+0x9eu));
    /* 005f0be1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f0be3: je 0x5f0c18 */ if (fZ) goto L_005f0c18;
L_005f0be5:; BB(0x005f0be5);
    /* 005f0be5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f0be8: mov al, byte ptr [ebp + 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 005f0beb: mov byte ptr [edx + 0x9f], al */ W8((u32)(r_edx+0x9fu), (u8)r_eax);
    /* 005f0bf1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f0bf4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005f0bf6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f0bf9: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 005f0bff: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f0c01u); call_ind(t); }
    /* 005f0c01: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005f0c04: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f0c06: je 0x5f0c18 */ if (fZ) goto L_005f0c18;
L_005f0c08:; BB(0x005f0c08);
    /* 005f0c08: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f0c0b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005f0c0d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f0c10: mov edx, dword ptr [eax + 0xac] */ r_edx = R32((u32)(r_eax+0xacu));
    /* 005f0c16: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5f0c18u); call_ind(t); }
L_005f0c18:; BB(0x005f0c18);
    /* 005f0c18: mov esp, ebp */ r_esp = r_ebp;
    /* 005f0c1a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f0c1b: ret 4 */ FN_RET(0x005f0bd0); r_esp += 8; return;
}

