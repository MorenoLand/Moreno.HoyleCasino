#include "protos.h"

void f_00421b00(void) /* CaribbeanStudDealToScript::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00421b00);
    /* 00421b00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00421b01: mov ebp, esp */ r_ebp = r_esp;
    /* 00421b03: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00421b05: push 0x69e215 */ { u32 v = 0x69e215u; r_esp -= 4; W32(r_esp, v); }
    /* 00421b0a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00421b10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00421b11: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00421b12: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00421b17: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00421b19: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00421b1a: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00421b1d: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00421b23: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00421b26: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00421b29: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00421b2a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00421b2d: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x421b32u); f_005fc0d0();
    /* 00421b32: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00421b39: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00421b3c: mov dword ptr [ecx], 0x6b6020 */ W32((u32)(r_ecx), 0x6b6020u);
    /* 00421b42: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00421b46: jl 0x421b4e */ if ((fS!=fO)) goto L_00421b4e;
L_00421b48:; BB(0x00421b48);
    /* 00421b48: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00421b4c: jle 0x421b65 */ if ((fZ||fS!=fO)) goto L_00421b65;
L_00421b4e:; BB(0x00421b4e);
    /* 00421b4e: push 0x3cf */ { u32 v = 0x3cfu; r_esp -= 4; W32(r_esp, v); }
    /* 00421b53: push 0x6b5ff8 */ { u32 v = 0x6b5ff8u; r_esp -= 4; W32(r_esp, v); }
    /* 00421b58: push 0x6b5fe4 */ { u32 v = 0x6b5fe4u; r_esp -= 4; W32(r_esp, v); }
    /* 00421b5d: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x421b62u); f_005e9f20();
    /* 00421b62: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00421b65:; BB(0x00421b65);
    /* 00421b65: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00421b68: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00421b6b: mov dword ptr [eax + 0x20], ecx */ W32((u32)(r_eax+0x20u), r_ecx);
    /* 00421b6e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00421b71: mov eax, dword ptr [edx*4 + 0x70ce4c] */ r_eax = R32((u32)(r_edx*4+0x70ce4cu));
    /* 00421b78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00421b79: mov ecx, dword ptr [0x790360] */ r_ecx = R32((u32)(0x790360u));
    /* 00421b7f: mov ecx, dword ptr [ecx + 0x7c] */ r_ecx = R32((u32)(r_ecx+0x7cu));
    /* 00421b82: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x421b87u); f_005eaf00();
    /* 00421b87: push 0x13a6 */ { u32 v = 0x13a6u; r_esp -= 4; W32(r_esp, v); }
    /* 00421b8c: mov edx, dword ptr [0x790360] */ r_edx = R32((u32)(0x790360u));
    /* 00421b92: mov ecx, dword ptr [edx + 0x78] */ r_ecx = R32((u32)(r_edx+0x78u));
    /* 00421b95: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x421b9au); f_005eaf00();
    /* 00421b9a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00421b9c: mov eax, dword ptr [0x790360] */ r_eax = R32((u32)(0x790360u));
    /* 00421ba1: mov ecx, dword ptr [eax + 0x7c] */ r_ecx = R32((u32)(r_eax+0x7cu));
    /* 00421ba4: mov edx, dword ptr [0x790360] */ r_edx = R32((u32)(0x790360u));
    /* 00421baa: mov eax, dword ptr [edx + 0x7c] */ r_eax = R32((u32)(r_edx+0x7cu));
    /* 00421bad: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00421baf: mov ecx, eax */ r_ecx = r_eax;
    /* 00421bb1: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00421bb7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x421bb9u); call_ind(t); }
    /* 00421bb9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00421bbb: mov ecx, dword ptr [0x790360] */ r_ecx = R32((u32)(0x790360u));
    /* 00421bc1: mov edx, dword ptr [ecx + 0x78] */ r_edx = R32((u32)(r_ecx+0x78u));
    /* 00421bc4: mov eax, dword ptr [0x790360] */ r_eax = R32((u32)(0x790360u));
    /* 00421bc9: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 00421bcc: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00421bce: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00421bd4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x421bd6u); call_ind(t); }
    /* 00421bd6: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 00421bd8: mov ecx, dword ptr [0x790360] */ r_ecx = R32((u32)(0x790360u));
    /* 00421bde: mov edx, dword ptr [ecx + 0x7c] */ r_edx = R32((u32)(r_ecx+0x7cu));
    /* 00421be1: mov eax, dword ptr [0x790360] */ r_eax = R32((u32)(0x790360u));
    /* 00421be6: mov ecx, dword ptr [eax + 0x7c] */ r_ecx = R32((u32)(r_eax+0x7cu));
    /* 00421be9: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00421beb: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00421bee: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x421bf0u); call_ind(t); }
    /* 00421bf0: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 00421bf2: mov ecx, dword ptr [0x790360] */ r_ecx = R32((u32)(0x790360u));
    /* 00421bf8: mov edx, dword ptr [ecx + 0x78] */ r_edx = R32((u32)(r_ecx+0x78u));
    /* 00421bfb: mov eax, dword ptr [0x790360] */ r_eax = R32((u32)(0x790360u));
    /* 00421c00: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 00421c03: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00421c05: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00421c08: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x421c0au); call_ind(t); }
    /* 00421c0a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00421c11: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00421c14: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00421c17: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00421c1e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00421c1f: mov esp, ebp */ r_esp = r_ebp;
    /* 00421c21: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00421c22: ret 0xc */ FN_RET(0x00421b00); r_esp += 16; return;
}

void f_00421c30(void) /* CaribbeanStudDealToScript::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00421c30);
    /* 00421c30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00421c31: mov ebp, esp */ r_ebp = r_esp;
    /* 00421c33: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00421c36: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00421c3b: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00421c3d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00421c40: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00421c43: mov dword ptr [ebp - 0x24], 0x18a8b */ W32((u32)(r_ebp+0xffffffdcu), 0x18a8bu);
    /* 00421c4a: mov dword ptr [ebp - 0x20], 0x18a8c */ W32((u32)(r_ebp+0xffffffe0u), 0x18a8cu);
    /* 00421c51: mov dword ptr [ebp - 0x1c], 0x18a8d */ W32((u32)(r_ebp+0xffffffe4u), 0x18a8du);
    /* 00421c58: mov word ptr [ebp - 0x10], 6 */ W16((u32)(r_ebp+0xfffffff0u), 0x6u);
    /* 00421c5e: mov word ptr [ebp - 0xe], 6 */ W16((u32)(r_ebp+0xfffffff2u), 0x6u);
    /* 00421c64: mov word ptr [ebp - 0xc], 6 */ W16((u32)(r_ebp+0xfffffff4u), 0x6u);
    /* 00421c6a: mov word ptr [ebp - 0xa], 5 */ W16((u32)(r_ebp+0xfffffff6u), 0x5u);
    /* 00421c70: mov word ptr [ebp - 8], 5 */ W16((u32)(r_ebp+0xfffffff8u), 0x5u);
    /* 00421c76: mov word ptr [ebp - 6], 7 */ W16((u32)(r_ebp+0xfffffffau), 0x7u);
    /* 00421c7c: mov eax, dword ptr [0x790360] */ r_eax = R32((u32)(0x790360u));
    /* 00421c81: mov ecx, dword ptr [eax + 0x7c] */ r_ecx = R32((u32)(r_eax+0x7cu));
    /* 00421c84: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00421c87: mov edx, dword ptr [0x790360] */ r_edx = R32((u32)(0x790360u));
    /* 00421c8d: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 00421c90: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00421c93: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00421c96: call 0x5fc360 */ r_esp -= 4; W32(r_esp, 0x421c9bu); f_005fc360();
    /* 00421c9b: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00421c9e: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00421ca2: je 0x421cb9 */ if (fZ) goto L_00421cb9;
L_00421ca4:; BB(0x00421ca4);
    /* 00421ca4: cmp dword ptr [ebp - 0x2c], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00421ca8: je 0x421d21 */ if (fZ) goto L_00421d21;
L_00421caa:; BB(0x00421caa);
    /* 00421caa: cmp dword ptr [ebp - 0x2c], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00421cae: je 0x421e77 */ if (fZ) goto L_00421e77;
L_00421cb4:; BB(0x00421cb4);
    /* 00421cb4: jmp 0x421ec0 */ goto L_00421ec0;
L_00421cb9:; BB(0x00421cb9);
    /* 00421cb9: mov word ptr [0x790350], 0 */ W16((u32)(0x790350u), 0x0u);
    /* 00421cc2: mov word ptr [0x79034c], 0 */ W16((u32)(0x79034cu), 0x0u);
    /* 00421ccb: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00421cce: call 0x5eb240 */ r_esp -= 4; W32(r_esp, 0x421cd3u); f_005eb240();
    /* 00421cd3: mov word ptr [0x790348], ax */ W16((u32)(0x790348u), (u16)r_eax);
    /* 00421cd9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00421cdc: call 0x5eb240 */ r_esp -= 4; W32(r_esp, 0x421ce1u); f_005eb240();
    /* 00421ce1: mov word ptr [0x790344], ax */ W16((u32)(0x790344u), (u16)r_eax);
    /* 00421ce7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00421ce9: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00421cec: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00421cee: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00421cf1: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00421cf7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x421cf9u); call_ind(t); }
    /* 00421cf9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00421cfb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00421cfe: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00421d00: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00421d03: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00421d09: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x421d0bu); call_ind(t); }
    /* 00421d0b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00421d0d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00421d0f: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00421d12: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00421d14: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00421d17: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00421d1a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x421d1cu); call_ind(t); }
    /* 00421d1c: jmp 0x421ec0 */ goto L_00421ec0;
L_00421d21:; BB(0x00421d21);
    /* 00421d21: mov cx, word ptr [0x790350] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(0x790350u))) & 0xffffu);
    /* 00421d28: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00421d2c: mov word ptr [0x790350], cx */ W16((u32)(0x790350u), (u16)r_ecx);
    /* 00421d33: movsx edx, word ptr [0x790350] */ r_edx = (u32)(i32)(i16)R16((u32)(0x790350u));
    /* 00421d3a: movsx eax, word ptr [0x790348] */ r_eax = (u32)(i32)(i16)R16((u32)(0x790348u));
    /* 00421d41: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00421d43: jg 0x421d5d */ if ((!fZ&&fS==fO)) goto L_00421d5d;
L_00421d45:; BB(0x00421d45);
    /* 00421d45: movsx ecx, word ptr [0x790350] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x790350u));
    /* 00421d4c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00421d4d: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00421d50: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00421d52: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00421d55: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 00421d5b: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x421d5du); call_ind(t); }
L_00421d5d:; BB(0x00421d5d);
    /* 00421d5d: movsx eax, word ptr [0x790350] */ r_eax = (u32)(i32)(i16)R16((u32)(0x790350u));
    /* 00421d64: movsx ecx, word ptr [0x790344] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x790344u));
    /* 00421d6b: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00421d6d: jg 0x421d87 */ if ((!fZ&&fS==fO)) goto L_00421d87;
L_00421d6f:; BB(0x00421d6f);
    /* 00421d6f: movsx edx, word ptr [0x790350] */ r_edx = (u32)(i32)(i16)R16((u32)(0x790350u));
    /* 00421d76: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00421d77: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00421d7a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00421d7c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00421d7f: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00421d85: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x421d87u); call_ind(t); }
L_00421d87:; BB(0x00421d87);
    /* 00421d87: movsx ecx, word ptr [0x790350] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x790350u));
    /* 00421d8e: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00421d91: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 00421d94: movsx edx, word ptr [ebp + eax*2 - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+r_eax*2+0xfffffff0u));
    /* 00421d99: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00421d9c: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00421d9e: jne 0x421de1 */ if (!fZ) goto L_00421de1;
L_00421da0:; BB(0x00421da0);
    /* 00421da0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00421da2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00421da3: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 00421da9: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00421dac: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00421dad: fld1  */ FPUSH(1.0);
    /* 00421daf: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00421db2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00421db4: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00421db6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00421db8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00421dba: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00421dbc: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x421dc1u); f_0062fbf0();
    /* 00421dc1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00421dc4: mov eax, dword ptr [ebp + eax*4 - 0x24] */ r_eax = R32((u32)(r_ebp+r_eax*4+0xffffffdcu));
    /* 00421dc8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00421dc9: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00421dcf: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00421dd1: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00421dd7: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 00421ddd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x421ddfu); call_ind(t); }
    /* 00421ddf: jmp 0x421e22 */ goto L_00421e22;
L_00421de1:; BB(0x00421de1);
    /* 00421de1: movsx ecx, word ptr [0x790350] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x790350u));
    /* 00421de8: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00421deb: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 00421dee: movsx edx, word ptr [ebp + eax*2 - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+r_eax*2+0xfffffff0u));
    /* 00421df3: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00421df5: jne 0x421e22 */ if (!fZ) goto L_00421e22;
L_00421df7:; BB(0x00421df7);
    /* 00421df7: mov eax, dword ptr [0x790358] */ r_eax = R32((u32)(0x790358u));
    /* 00421dfc: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00421dff: call 0x6436c0 */ r_esp -= 4; W32(r_esp, 0x421e04u); f_006436c0();
    /* 00421e04: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00421e05: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00421e08: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00421e0b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00421e0c: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 00421e12: call 0x426310 */ r_esp -= 4; W32(r_esp, 0x421e17u); f_00426310();
    /* 00421e17: mov ecx, dword ptr [0x790360] */ r_ecx = R32((u32)(0x790360u));
    /* 00421e1d: call 0x41f1b0 */ r_esp -= 4; W32(r_esp, 0x421e22u); f_0041f1b0();
L_00421e22:; BB(0x00421e22);
    /* 00421e22: movsx eax, word ptr [0x790350] */ r_eax = (u32)(i32)(i16)R16((u32)(0x790350u));
    /* 00421e29: movsx ecx, word ptr [0x790348] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x790348u));
    /* 00421e30: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00421e32: jl 0x421e46 */ if ((fS!=fO)) goto L_00421e46;
L_00421e34:; BB(0x00421e34);
    /* 00421e34: movsx edx, word ptr [0x790350] */ r_edx = (u32)(i32)(i16)R16((u32)(0x790350u));
    /* 00421e3b: movsx eax, word ptr [0x790344] */ r_eax = (u32)(i32)(i16)R16((u32)(0x790344u));
    /* 00421e42: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00421e44: jge 0x421e57 */ if ((fS==fO)) goto L_00421e57;
L_00421e46:; BB(0x00421e46);
    /* 00421e46: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00421e48: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00421e4b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00421e4d: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00421e50: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00421e53: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x421e55u); call_ind(t); }
    /* 00421e55: jmp 0x421e66 */ goto L_00421e66;
L_00421e57:; BB(0x00421e57);
    /* 00421e57: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00421e59: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00421e5c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00421e5e: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00421e61: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00421e64: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x421e66u); call_ind(t); }
L_00421e66:; BB(0x00421e66);
    /* 00421e66: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00421e68: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00421e6b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00421e6d: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00421e70: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00421e73: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x421e75u); call_ind(t); }
    /* 00421e75: jmp 0x421ec0 */ goto L_00421ec0;
L_00421e77:; BB(0x00421e77);
    /* 00421e77: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 00421e79: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00421e7c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00421e7e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00421e81: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00421e84: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x421e86u); call_ind(t); }
    /* 00421e86: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 00421e88: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00421e8b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00421e8d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00421e90: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00421e93: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x421e95u); call_ind(t); }
    /* 00421e95: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00421e98: cmp dword ptr [ecx + 0x10], 0 */ {  u32 a = R32((u32)(r_ecx+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00421e9c: je 0x421ec0 */ if (fZ) goto L_00421ec0;
L_00421e9e:; BB(0x00421e9e);
    /* 00421e9e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00421ea0: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00421ea3: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 00421ea6: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00421ea9: mov ecx, dword ptr [ecx + 0x10] */ r_ecx = R32((u32)(r_ecx+0x10u));
    /* 00421eac: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00421eae: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00421eb1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x421eb3u); call_ind(t); }
    /* 00421eb3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00421eb5: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00421eb8: mov ecx, dword ptr [ecx + 0x10] */ r_ecx = R32((u32)(r_ecx+0x10u));
    /* 00421ebb: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x421ec0u); f_005fc420();
L_00421ec0:; BB(0x00421ec0);
    /* 00421ec0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00421ec3: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00421ec5: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x421ecau); f_00686d72();
    /* 00421eca: mov esp, ebp */ r_esp = r_ebp;
    /* 00421ecc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00421ecd: ret  */ FN_RET(0x00421c30); r_esp += 4; return;
}

