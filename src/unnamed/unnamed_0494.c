#include "protos.h"

void f_00494b20(void) /* sub_494B20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00494b20);
    /* 00494b20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00494b21: mov ebp, esp */ r_ebp = r_esp;
    /* 00494b23: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00494b26: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00494b29: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 00494b2c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00494b2d: mov ecx, dword ptr [ebp + 0x24] */ r_ecx = R32((u32)(r_ebp+0x24u));
    /* 00494b30: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00494b31: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 00494b34: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00494b35: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 00494b38: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00494b39: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 00494b3c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00494b3d: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 00494b40: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00494b41: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00494b44: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00494b45: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00494b48: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00494b49: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00494b4c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00494b4d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00494b50: call 0x492430 */ r_esp -= 4; W32(r_esp, 0x494b55u); f_00492430();
    /* 00494b55: mov eax, dword ptr [ebp + 0x2c] */ r_eax = R32((u32)(r_ebp+0x2cu));
    /* 00494b58: mov word ptr [eax], 0 */ W16((u32)(r_eax), 0x0u);
    /* 00494b5d: mov ecx, dword ptr [ebp + 0x30] */ r_ecx = R32((u32)(r_ebp+0x30u));
    /* 00494b60: mov word ptr [ecx], 0 */ W16((u32)(r_ecx), 0x0u);
    /* 00494b65: mov edx, dword ptr [ebp + 0x34] */ r_edx = R32((u32)(r_ebp+0x34u));
    /* 00494b68: mov word ptr [edx], 0 */ W16((u32)(r_edx), 0x0u);
    /* 00494b6d: mov eax, dword ptr [0x7913c8] */ r_eax = R32((u32)(0x7913c8u));
    /* 00494b72: movzx eax, byte ptr [eax] */ r_eax = (u32)R8((u32)(r_eax));
    /* 00494b75: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00494b78: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00494b7a: mov edx, 2 */ r_edx = 0x2u;
    /* 00494b7f: mul edx */ { u64 t = (u64)r_eax * r_edx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 00494b81: seto cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fO) ? 1 : 0) & 0xffu);
    /* 00494b84: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00494b86: or ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00494b88: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00494b89: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x494b8eu); f_00686d82();
    /* 00494b8e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00494b91: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00494b94: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00494b97: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00494b9a: mov byte ptr [ebp - 1], 0 */ W8((u32)(r_ebp+0xffffffffu), 0x0u);
    /* 00494b9e: jmp 0x494ba9 */ goto L_00494ba9;
L_00494ba0:; BB(0x00494ba0);
    /* 00494ba0: mov cl, byte ptr [ebp - 1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffffu))) & 0xffu);
    /* 00494ba3: add cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00494ba6: mov byte ptr [ebp - 1], cl */ W8((u32)(r_ebp+0xffffffffu), (u8)r_ecx);
L_00494ba9:; BB(0x00494ba9);
    /* 00494ba9: movzx edx, byte ptr [ebp - 1] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 00494bad: mov eax, dword ptr [0x7913c8] */ r_eax = R32((u32)(0x7913c8u));
    /* 00494bb2: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 00494bb5: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00494bb7: jg 0x494bc8 */ if ((!fZ&&fS==fO)) goto L_00494bc8;
L_00494bb9:; BB(0x00494bb9);
    /* 00494bb9: movzx edx, byte ptr [ebp - 1] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 00494bbd: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00494bc0: mov word ptr [eax + edx*2], 0 */ W16((u32)(r_eax+r_edx*2), 0x0u);
    /* 00494bc6: jmp 0x494ba0 */ goto L_00494ba0;
L_00494bc8:; BB(0x00494bc8);
    /* 00494bc8: mov word ptr [ebp - 0xc], 0 */ W16((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00494bce: jmp 0x494bdc */ goto L_00494bdc;
L_00494bd0:; BB(0x00494bd0);
    /* 00494bd0: mov cx, word ptr [ebp - 0xc] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff4u))) & 0xffffu);
    /* 00494bd4: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00494bd8: mov word ptr [ebp - 0xc], cx */ W16((u32)(r_ebp+0xfffffff4u), (u16)r_ecx);
L_00494bdc:; BB(0x00494bdc);
    /* 00494bdc: movsx edx, word ptr [ebp - 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 00494be0: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00494be3: movsx ecx, word ptr [eax + 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x4u));
    /* 00494be7: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00494be9: jge 0x494c8c */ if ((fS==fO)) goto L_00494c8c;
L_00494bef:; BB(0x00494bef);
    /* 00494bef: lea edx, [ebp - 0x12] */ r_edx = (u32)(r_ebp+0xffffffeeu);
    /* 00494bf2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00494bf3: lea eax, [ebp - 0x11] */ r_eax = (u32)(r_ebp+0xffffffefu);
    /* 00494bf6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00494bf7: movsx ecx, word ptr [ebp - 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 00494bfb: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00494bfe: add ecx, dword ptr [edx] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00494c00: call 0x464480 */ r_esp -= 4; W32(r_esp, 0x494c05u); f_00464480();
    /* 00494c05: mov ecx, eax */ r_ecx = r_eax;
    /* 00494c07: call 0x463f80 */ r_esp -= 4; W32(r_esp, 0x494c0cu); f_00463f80();
    /* 00494c0c: movzx eax, byte ptr [eax] */ r_eax = (u32)R8((u32)(r_eax));
    /* 00494c0f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00494c12: lea edx, [ecx + eax*2] */ r_edx = (u32)(r_ecx+r_eax*2);
    /* 00494c15: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 00494c18: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00494c1b: mov cx, word ptr [eax] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax))) & 0xffffu);
    /* 00494c1e: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00494c22: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00494c25: mov word ptr [edx], cx */ W16((u32)(r_edx), (u16)r_ecx);
    /* 00494c28: mov eax, dword ptr [0x7907a4] */ r_eax = R32((u32)(0x7907a4u));
    /* 00494c2d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00494c2e: lea ecx, [ebp - 0x13] */ r_ecx = (u32)(r_ebp+0xffffffedu);
    /* 00494c31: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00494c32: movsx ecx, word ptr [ebp - 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 00494c36: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00494c39: add ecx, dword ptr [edx] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00494c3b: call 0x464480 */ r_esp -= 4; W32(r_esp, 0x494c40u); f_00464480();
    /* 00494c40: mov ecx, eax */ r_ecx = r_eax;
    /* 00494c42: call 0x464050 */ r_esp -= 4; W32(r_esp, 0x494c47u); f_00464050();
    /* 00494c47: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00494c4a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00494c4c: je 0x494c87 */ if (fZ) goto L_00494c87;
L_00494c4e:; BB(0x00494c4e);
    /* 00494c4e: lea ecx, [ebp - 0x15] */ r_ecx = (u32)(r_ebp+0xffffffebu);
    /* 00494c51: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00494c52: lea edx, [ebp - 0x14] */ r_edx = (u32)(r_ebp+0xffffffecu);
    /* 00494c55: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00494c56: movsx ecx, word ptr [ebp - 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 00494c5a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00494c5d: add ecx, dword ptr [eax] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00494c5f: call 0x464480 */ r_esp -= 4; W32(r_esp, 0x494c64u); f_00464480();
    /* 00494c64: mov ecx, eax */ r_ecx = r_eax;
    /* 00494c66: call 0x463fd0 */ r_esp -= 4; W32(r_esp, 0x494c6bu); f_00463fd0();
    /* 00494c6b: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 00494c6e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00494c71: lea eax, [edx + ecx*2] */ r_eax = (u32)(r_edx+r_ecx*2);
    /* 00494c74: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00494c77: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00494c7a: mov dx, word ptr [ecx] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx))) & 0xffffu);
    /* 00494c7d: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00494c81: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00494c84: mov word ptr [eax], dx */ W16((u32)(r_eax), (u16)r_edx);
L_00494c87:; BB(0x00494c87);
    /* 00494c87: jmp 0x494bd0 */ goto L_00494bd0;
L_00494c8c:; BB(0x00494c8c);
    /* 00494c8c: mov ecx, dword ptr [0x7913b4] */ r_ecx = R32((u32)(0x7913b4u));
    /* 00494c92: mov dl, byte ptr [ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 00494c94: mov byte ptr [ebp - 1], dl */ W8((u32)(r_ebp+0xffffffffu), (u8)r_edx);
    /* 00494c97: jmp 0x494ca1 */ goto L_00494ca1;
L_00494c99:; BB(0x00494c99);
    /* 00494c99: mov al, byte ptr [ebp - 1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffffu))) & 0xffu);
    /* 00494c9c: add al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00494c9e: mov byte ptr [ebp - 1], al */ W8((u32)(r_ebp+0xffffffffu), (u8)r_eax);
L_00494ca1:; BB(0x00494ca1);
    /* 00494ca1: movzx ecx, byte ptr [ebp - 1] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 00494ca5: mov edx, dword ptr [0x791410] */ r_edx = R32((u32)(0x791410u));
    /* 00494cab: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 00494cae: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00494cb0: jg 0x494d19 */ if ((!fZ&&fS==fO)) goto L_00494d19;
L_00494cb2:; BB(0x00494cb2);
    /* 00494cb2: movzx ecx, byte ptr [ebp - 1] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 00494cb6: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00494cb9: movsx eax, word ptr [edx + ecx*2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+r_ecx*2));
    /* 00494cbd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00494cbf: jle 0x494d17 */ if ((fZ||fS!=fO)) goto L_00494d17;
L_00494cc1:; BB(0x00494cc1);
    /* 00494cc1: mov ecx, dword ptr [ebp + 0x2c] */ r_ecx = R32((u32)(r_ebp+0x2cu));
    /* 00494cc4: mov dx, word ptr [ecx] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx))) & 0xffffu);
    /* 00494cc7: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00494ccb: mov eax, dword ptr [ebp + 0x2c] */ r_eax = R32((u32)(r_ebp+0x2cu));
    /* 00494cce: mov word ptr [eax], dx */ W16((u32)(r_eax), (u16)r_edx);
    /* 00494cd1: mov ecx, dword ptr [ebp + 0x30] */ r_ecx = R32((u32)(r_ebp+0x30u));
    /* 00494cd4: movsx edx, word ptr [ecx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx));
    /* 00494cd7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00494cd9: jne 0x494cf5 */ if (!fZ) goto L_00494cf5;
L_00494cdb:; BB(0x00494cdb);
    /* 00494cdb: movzx eax, byte ptr [ebp - 1] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 00494cdf: mov ecx, dword ptr [0x7913f0] */ r_ecx = R32((u32)(0x7913f0u));
    /* 00494ce5: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 00494ce8: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00494cea: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00494ced: mov ecx, dword ptr [ebp + 0x30] */ r_ecx = R32((u32)(r_ebp+0x30u));
    /* 00494cf0: mov word ptr [ecx], ax */ W16((u32)(r_ecx), (u16)r_eax);
    /* 00494cf3: jmp 0x494d17 */ goto L_00494d17;
L_00494cf5:; BB(0x00494cf5);
    /* 00494cf5: mov edx, dword ptr [ebp + 0x34] */ r_edx = R32((u32)(r_ebp+0x34u));
    /* 00494cf8: movsx eax, word ptr [edx] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 00494cfb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00494cfd: jne 0x494d17 */ if (!fZ) goto L_00494d17;
L_00494cff:; BB(0x00494cff);
    /* 00494cff: movzx ecx, byte ptr [ebp - 1] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 00494d03: mov edx, dword ptr [0x7913f0] */ r_edx = R32((u32)(0x7913f0u));
    /* 00494d09: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 00494d0c: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00494d0e: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00494d11: mov edx, dword ptr [ebp + 0x34] */ r_edx = R32((u32)(r_ebp+0x34u));
    /* 00494d14: mov word ptr [edx], cx */ W16((u32)(r_edx), (u16)r_ecx);
L_00494d17:; BB(0x00494d17);
    /* 00494d17: jmp 0x494c99 */ goto L_00494c99;
L_00494d19:; BB(0x00494d19);
    /* 00494d19: mov eax, dword ptr [ebp + 0x2c] */ r_eax = R32((u32)(r_ebp+0x2cu));
    /* 00494d1c: movsx ecx, word ptr [eax] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax));
    /* 00494d1f: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00494d22: jge 0x494d34 */ if ((fS==fO)) goto L_00494d34;
L_00494d24:; BB(0x00494d24);
    /* 00494d24: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 00494d27: mov word ptr [edx], 0 */ W16((u32)(r_edx), 0x0u);
    /* 00494d2c: mov eax, dword ptr [ebp + 0x2c] */ r_eax = R32((u32)(r_ebp+0x2cu));
    /* 00494d2f: mov word ptr [eax], 0 */ W16((u32)(r_eax), 0x0u);
L_00494d34:; BB(0x00494d34);
    /* 00494d34: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00494d37: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00494d3a: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00494d3d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00494d3e: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x494d43u); f_00686cae();
    /* 00494d43: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00494d46: mov esp, ebp */ r_esp = r_ebp;
    /* 00494d48: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00494d49: ret 0x30 */ FN_RET(0x00494b20); r_esp += 52; return;
}

