#include "protos.h"

void f_00672b20(void) /* sub_672B20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00672b20);
    /* 00672b20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00672b21: mov ebp, esp */ r_ebp = r_esp;
    /* 00672b23: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00672b26: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00672b27: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00672b2a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00672b2d: movzx ecx, byte ptr [eax + 0x1c0] */ r_ecx = (u32)R8((u32)(r_eax+0x1c0u));
    /* 00672b34: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00672b36: jne 0x672be0 */ if (!fZ) goto L_00672be0;
L_00672b3c:; BB(0x00672b3c);
    /* 00672b3c: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00672b3e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00672b40: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 00672b42: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 00672b44: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 00672b46: push 0x6d2b44 */ { u32 v = 0x6d2b44u; r_esp -= 4; W32(r_esp, v); }
    /* 00672b4b: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x672b50u); f_00630f40();
    /* 00672b50: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00672b53: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00672b54: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00672b56: push 0x237 */ { u32 v = 0x237u; r_esp -= 4; W32(r_esp, v); }
    /* 00672b5b: push 0x134 */ { u32 v = 0x134u; r_esp -= 4; W32(r_esp, v); }
    /* 00672b60: push 0x30d4e5 */ { u32 v = 0x30d4e5u; r_esp -= 4; W32(r_esp, v); }
    /* 00672b65: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00672b67: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00672b69: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00672b6c: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x672b71u); f_005f9de0();
    /* 00672b71: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00672b73: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00672b75: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00672b77: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00672b79: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00672b7b: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00672b80: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00672b82: push 0x237 */ { u32 v = 0x237u; r_esp -= 4; W32(r_esp, v); }
    /* 00672b87: push 0x2f */ { u32 v = 0x2fu; r_esp -= 4; W32(r_esp, v); }
    /* 00672b89: push 0x30d503 */ { u32 v = 0x30d503u; r_esp -= 4; W32(r_esp, v); }
    /* 00672b8e: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00672b90: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00672b92: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00672b95: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x672b9au); f_005f9de0();
    /* 00672b9a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00672b9c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00672b9e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00672ba0: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00672ba2: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00672ba4: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00672ba9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00672bab: push 0x237 */ { u32 v = 0x237u; r_esp -= 4; W32(r_esp, v); }
    /* 00672bb0: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00672bb2: push 0x30d504 */ { u32 v = 0x30d504u; r_esp -= 4; W32(r_esp, v); }
    /* 00672bb7: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00672bb9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00672bbb: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00672bbe: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x672bc3u); f_005f9de0();
    /* 00672bc3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00672bc5: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00672bca: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00672bcc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00672bce: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00672bd0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00672bd2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00672bd4: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00672bd6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00672bd8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00672bdb: call 0x5f9ce0 */ r_esp -= 4; W32(r_esp, 0x672be0u); f_005f9ce0();
L_00672be0:; BB(0x00672be0);
    /* 00672be0: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00672be3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00672be6: mov dword ptr [edx + 0x1bc], eax */ W32((u32)(r_edx+0x1bcu), r_eax);
    /* 00672bec: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00672bef: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00672bf0: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 00672bf6: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00672bf8: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00672bfe: mov edx, dword ptr [eax + 0xe0] */ r_edx = R32((u32)(r_eax+0xe0u));
    /* 00672c04: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x672c06u); call_ind(t); }
    /* 00672c06: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00672c09: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00672c0c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00672c0e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00672c11: mov eax, dword ptr [edx + 0x68] */ r_eax = R32((u32)(r_edx+0x68u));
    /* 00672c14: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x672c16u); call_ind(t); }
    /* 00672c16: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00672c19: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 00672c1b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00672c1d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00672c20: add ecx, 0x1c4 */ {  u32 a = r_ecx; u32 b = 0x1c4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00672c26: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00672c27: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x672c2cu); f_00686fa2();
    /* 00672c2c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00672c2f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00672c32: mov dword ptr [edx + 0x1f0], 0 */ W32((u32)(r_edx+0x1f0u), 0x0u);
    /* 00672c3c: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00672c40: je 0x672c9b */ if (fZ) goto L_00672c9b;
L_00672c42:; BB(0x00672c42);
    /* 00672c42: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00672c49: jmp 0x672c54 */ goto L_00672c54;
L_00672c4b:; BB(0x00672c4b);
    /* 00672c4b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00672c4e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00672c51: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_00672c54:; BB(0x00672c54);
    /* 00672c54: cmp dword ptr [ebp - 0xc], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00672c58: jge 0x672c9b */ if ((fS==fO)) goto L_00672c9b;
L_00672c5a:; BB(0x00672c5a);
    /* 00672c5a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00672c5d: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00672c60: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00672c63: mov esi, dword ptr [ebp - 8] */ r_esi = R32((u32)(r_ebp+0xfffffff8u));
    /* 00672c66: mov eax, dword ptr [esi + eax*4] */ r_eax = R32((u32)(r_esi+r_eax*4));
    /* 00672c69: mov dword ptr [edx + ecx*4 + 0x1c4], eax */ W32((u32)(r_edx+r_ecx*4+0x1c4u), r_eax);
    /* 00672c70: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00672c73: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00672c76: cmp dword ptr [edx + ecx*4 + 0x1c4], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x1c4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00672c7e: je 0x672c97 */ if (fZ) goto L_00672c97;
L_00672c80:; BB(0x00672c80);
    /* 00672c80: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00672c83: mov ecx, dword ptr [eax + 0x1f0] */ r_ecx = R32((u32)(r_eax+0x1f0u));
    /* 00672c89: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00672c8c: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00672c8f: mov dword ptr [edx + 0x1f0], ecx */ W32((u32)(r_edx+0x1f0u), r_ecx);
    /* 00672c95: jmp 0x672c99 */ goto L_00672c99;
L_00672c97:; BB(0x00672c97);
    /* 00672c97: jmp 0x672c9b */ goto L_00672c9b;
L_00672c99:; BB(0x00672c99);
    /* 00672c99: jmp 0x672c4b */ goto L_00672c4b;
L_00672c9b:; BB(0x00672c9b);
    /* 00672c9b: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00672c9e: mov dword ptr [eax + 0x1f4], 0 */ W32((u32)(r_eax+0x1f4u), 0x0u);
    /* 00672ca8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00672cab: cmp dword ptr [ecx + 0x1f0], 0 */ {  u32 a = R32((u32)(r_ecx+0x1f0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00672cb2: jne 0x672cc8 */ if (!fZ) goto L_00672cc8;
L_00672cb4:; BB(0x00672cb4);
    /* 00672cb4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00672cb6: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00672cb9: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00672cbb: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00672cbe: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 00672cc1: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x672cc3u); call_ind(t); }
    /* 00672cc3: jmp 0x672d93 */ goto L_00672d93;
L_00672cc8:; BB(0x00672cc8);
    /* 00672cc8: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00672ccb: cmp dword ptr [eax + 0x1f0], 1 */ {  u32 a = R32((u32)(r_eax+0x1f0u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00672cd2: jle 0x672d44 */ if ((fZ||fS!=fO)) goto L_00672d44;
L_00672cd4:; BB(0x00672cd4);
    /* 00672cd4: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00672cd6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00672cd9: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x672cdeu); f_005fb300();
    /* 00672cde: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00672ce1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00672ce4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00672ce6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00672ce9: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 00672cef: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x672cf1u); call_ind(t); }
    /* 00672cf1: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00672cf3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00672cf6: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x672cfbu); f_005fb300();
    /* 00672cfb: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00672cfe: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00672d01: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00672d03: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00672d06: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00672d09: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x672d0bu); call_ind(t); }
    /* 00672d0b: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00672d0d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00672d10: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x672d15u); f_005fb300();
    /* 00672d15: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00672d18: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00672d1b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00672d1d: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00672d20: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 00672d26: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x672d28u); call_ind(t); }
    /* 00672d28: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00672d2a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00672d2d: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x672d32u); f_005fb300();
    /* 00672d32: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00672d35: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00672d38: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00672d3a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00672d3d: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00672d40: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x672d42u); call_ind(t); }
    /* 00672d42: jmp 0x672d78 */ goto L_00672d78;
L_00672d44:; BB(0x00672d44);
    /* 00672d44: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00672d46: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00672d49: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x672d4eu); f_005fb300();
    /* 00672d4e: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00672d51: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00672d54: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00672d56: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00672d59: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00672d5c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x672d5eu); call_ind(t); }
    /* 00672d5e: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00672d60: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00672d63: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x672d68u); f_005fb300();
    /* 00672d68: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00672d6b: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00672d6e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00672d70: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00672d73: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00672d76: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x672d78u); call_ind(t); }
L_00672d78:; BB(0x00672d78);
    /* 00672d78: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00672d7b: mov edx, dword ptr [ecx + 0x1c4] */ r_edx = R32((u32)(r_ecx+0x1c4u));
    /* 00672d81: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00672d82: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00672d84: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00672d87: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x672d8cu); f_005fb2b0();
    /* 00672d8c: mov ecx, eax */ r_ecx = r_eax;
    /* 00672d8e: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x672d93u); f_005eaf00();
L_00672d93:; BB(0x00672d93);
    /* 00672d93: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00672d94: mov esp, ebp */ r_esp = r_ebp;
    /* 00672d96: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00672d97: ret 4 */ FN_RET(0x00672b20); r_esp += 8; return;
}

