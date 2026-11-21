#include "protos.h"

void f_00444aa0(void) /* sub_444AA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00444aa0);
    /* 00444aa0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00444aa1: mov ebp, esp */ r_ebp = r_esp;
    /* 00444aa3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00444aa4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00444aa7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00444aa9: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00444aaf: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x444ab4u); f_006375b0();
    /* 00444ab4: mov ecx, eax */ r_ecx = r_eax;
    /* 00444ab6: call 0x63aae0 */ r_esp -= 4; W32(r_esp, 0x444abbu); f_0063aae0();
    /* 00444abb: mov esp, ebp */ r_esp = r_ebp;
    /* 00444abd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00444abe: ret  */ FN_RET(0x00444aa0); r_esp += 4; return;
}

void f_00444ac0(void) /* sub_444AC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00444ac0);
    /* 00444ac0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00444ac1: mov ebp, esp */ r_ebp = r_esp;
    /* 00444ac3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00444ac4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00444ac7: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00444acd: call 0x637670 */ r_esp -= 4; W32(r_esp, 0x444ad2u); f_00637670();
    /* 00444ad2: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00444ad5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00444ad7: jne 0x444add */ if (!fZ) goto L_00444add;
L_00444ad9:; BB(0x00444ad9);
    /* 00444ad9: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00444adb: jmp 0x444ae7 */ goto L_00444ae7;
L_00444add:; BB(0x00444add);
    /* 00444add: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444ae0: call 0x444aa0 */ r_esp -= 4; W32(r_esp, 0x444ae5u); f_00444aa0();
    /* 00444ae5: mov al, byte ptr [eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
L_00444ae7:; BB(0x00444ae7);
    /* 00444ae7: mov esp, ebp */ r_esp = r_ebp;
    /* 00444ae9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00444aea: ret  */ FN_RET(0x00444ac0); r_esp += 4; return;
}

void f_00444b10(void) /* sub_444B10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00444b10);
    /* 00444b10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00444b11: mov ebp, esp */ r_ebp = r_esp;
    /* 00444b13: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00444b16: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00444b19: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00444b1c: mov byte ptr [eax + 0x25d], 0 */ W8((u32)(r_eax+0x25du), 0x0u);
    /* 00444b23: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00444b26: mov byte ptr [ecx + 0x25c], 0 */ W8((u32)(r_ecx+0x25cu), 0x0u);
    /* 00444b2d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00444b34: jmp 0x444b3f */ goto L_00444b3f;
L_00444b36:; BB(0x00444b36);
    /* 00444b36: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444b39: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00444b3c: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00444b3f:; BB(0x00444b3f);
    /* 00444b3f: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00444b43: jge 0x444c6b */ if ((fS==fO)) goto L_00444c6b;
L_00444b49:; BB(0x00444b49);
    /* 00444b49: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444b4c: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00444b4f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00444b52: mov dword ptr [ecx + eax + 4], 0xffffffff */ W32((u32)(r_ecx+r_eax+0x4u), 0xffffffffu);
    /* 00444b5a: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00444b5f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444b62: imul edx, edx, 0x78 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x78u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00444b65: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00444b68: lea ecx, [eax + edx + 8] */ r_ecx = (u32)(r_eax+r_edx+0x8u);
    /* 00444b6c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00444b6d: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x444b72u); f_00686d8e();
    /* 00444b72: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00444b75: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444b78: imul edx, edx, 0x78 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x78u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00444b7b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00444b7e: mov dword ptr [eax + edx + 0x3c], 0 */ W32((u32)(r_eax+r_edx+0x3cu), 0x0u);
    /* 00444b86: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444b89: imul ecx, ecx, 0x78 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x78u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00444b8c: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00444b8f: mov dword ptr [edx + ecx + 0x40], 0 */ W32((u32)(r_edx+r_ecx+0x40u), 0x0u);
    /* 00444b97: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444b9a: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00444b9d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00444ba0: mov dword ptr [ecx + eax + 0x44], 0xffffffff */ W32((u32)(r_ecx+r_eax+0x44u), 0xffffffffu);
    /* 00444ba8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444bab: imul edx, edx, 0x78 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x78u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00444bae: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00444bb1: mov dword ptr [eax + edx + 0x48], 0 */ W32((u32)(r_eax+r_edx+0x48u), 0x0u);
    /* 00444bb9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444bbc: imul ecx, ecx, 0x78 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x78u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00444bbf: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00444bc2: mov dword ptr [edx + ecx + 0x4c], 0xffffffff */ W32((u32)(r_edx+r_ecx+0x4cu), 0xffffffffu);
    /* 00444bca: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00444bd1: jmp 0x444bdc */ goto L_00444bdc;
L_00444bd3:; BB(0x00444bd3);
    /* 00444bd3: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00444bd6: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00444bd9: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_00444bdc:; BB(0x00444bdc);
    /* 00444bdc: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00444be0: jge 0x444c14 */ if ((fS==fO)) goto L_00444c14;
L_00444be2:; BB(0x00444be2);
    /* 00444be2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444be5: imul ecx, ecx, 0x78 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x78u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00444be8: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00444beb: lea eax, [edx + ecx + 4] */ r_eax = (u32)(r_edx+r_ecx+0x4u);
    /* 00444bef: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00444bf2: mov dword ptr [eax + ecx*8 + 0x4c], 0 */ W32((u32)(r_eax+r_ecx*8+0x4cu), 0x0u);
    /* 00444bfa: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444bfd: imul edx, edx, 0x78 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x78u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00444c00: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00444c03: lea ecx, [eax + edx + 4] */ r_ecx = (u32)(r_eax+r_edx+0x4u);
    /* 00444c07: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00444c0a: mov dword ptr [ecx + edx*8 + 0x50], 1 */ W32((u32)(r_ecx+r_edx*8+0x50u), 0x1u);
    /* 00444c12: jmp 0x444bd3 */ goto L_00444bd3;
L_00444c14:; BB(0x00444c14);
    /* 00444c14: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444c17: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00444c1a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00444c1d: mov dword ptr [ecx + eax + 0x68], 0 */ W32((u32)(r_ecx+r_eax+0x68u), 0x0u);
    /* 00444c25: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444c28: imul edx, edx, 0x78 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x78u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00444c2b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00444c2e: mov dword ptr [eax + edx + 0x6c], 0xffffffff */ W32((u32)(r_eax+r_edx+0x6cu), 0xffffffffu);
    /* 00444c36: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444c39: imul ecx, ecx, 0x78 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x78u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00444c3c: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00444c3f: mov dword ptr [edx + ecx + 0x70], 0xffffffff */ W32((u32)(r_edx+r_ecx+0x70u), 0xffffffffu);
    /* 00444c47: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444c4a: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00444c4d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00444c50: mov dword ptr [ecx + eax + 0x74], 0 */ W32((u32)(r_ecx+r_eax+0x74u), 0x0u);
    /* 00444c58: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444c5b: imul edx, edx, 0x78 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x78u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00444c5e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00444c61: mov byte ptr [eax + edx + 0x78], 0 */ W8((u32)(r_eax+r_edx+0x78u), 0x0u);
    /* 00444c66: jmp 0x444b36 */ goto L_00444b36;
L_00444c6b:; BB(0x00444c6b);
    /* 00444c6b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00444c6e: call 0x444f40 */ r_esp -= 4; W32(r_esp, 0x444c73u); f_00444f40();
    /* 00444c73: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00444c76: mov byte ptr [ecx + 0x25e], 1 */ W8((u32)(r_ecx+0x25eu), 0x1u);
    /* 00444c7d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00444c80: call 0x444cb0 */ r_esp -= 4; W32(r_esp, 0x444c85u); f_00444cb0();
    /* 00444c85: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00444c88: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00444c8a: je 0x444ca2 */ if (fZ) goto L_00444ca2;
L_00444c8c:; BB(0x00444c8c);
    /* 00444c8c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00444c8e: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x444c93u); f_005dcb00();
    /* 00444c93: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00444c96: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00444c97: mov ecx, dword ptr [0x7906ec] */ r_ecx = R32((u32)(0x7906ecu));
    /* 00444c9d: call 0x5dbb70 */ r_esp -= 4; W32(r_esp, 0x444ca2u); f_005dbb70();
L_00444ca2:; BB(0x00444ca2);
    /* 00444ca2: mov esp, ebp */ r_esp = r_ebp;
    /* 00444ca4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00444ca5: ret  */ FN_RET(0x00444b10); r_esp += 4; return;
}

void f_00444cb0(void) /* sub_444CB0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00444cb0);
    /* 00444cb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00444cb1: mov ebp, esp */ r_ebp = r_esp;
    /* 00444cb3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00444cb4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00444cb7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00444cb9: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x444cbeu); f_005dcb00();
    /* 00444cbe: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00444cc1: mov ecx, eax */ r_ecx = r_eax;
    /* 00444cc3: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x444cc8u); f_005d5a50();
    /* 00444cc8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00444cca: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00444ccd: setl cl */ r_ecx = (r_ecx & 0xffffff00u) | ((((fS!=fO)) ? 1 : 0) & 0xffu);
    /* 00444cd0: mov al, cl */ r_eax = (r_eax & 0xffffff00u) | (((u8)r_ecx) & 0xffu);
    /* 00444cd2: mov esp, ebp */ r_esp = r_ebp;
    /* 00444cd4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00444cd5: ret  */ FN_RET(0x00444cb0); r_esp += 4; return;
}

void f_00444ce0(void) /* sub_444CE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00444ce0);
    /* 00444ce0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00444ce1: mov ebp, esp */ r_ebp = r_esp;
    /* 00444ce3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00444ce4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00444ce7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444cea: call 0x444b10 */ r_esp -= 4; W32(r_esp, 0x444cefu); f_00444b10();
    /* 00444cef: mov ecx, dword ptr [0x7906f4] */ r_ecx = R32((u32)(0x7906f4u));
    /* 00444cf5: call 0x440020 */ r_esp -= 4; W32(r_esp, 0x444cfau); f_00440020();
    /* 00444cfa: mov esp, ebp */ r_esp = r_ebp;
    /* 00444cfc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00444cfd: ret  */ FN_RET(0x00444ce0); r_esp += 4; return;
}

void f_00444d00(void) /* sub_444D00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00444d00);
    /* 00444d00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00444d01: mov ebp, esp */ r_ebp = r_esp;
    /* 00444d03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00444d04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00444d07: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00444d0a: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00444d0d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444d10: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00444d13: mov dword ptr [ecx + eax + 0x44], edx */ W32((u32)(r_ecx+r_eax+0x44u), r_edx);
    /* 00444d17: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00444d1a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00444d1b: mov ecx, dword ptr [0x7906f4] */ r_ecx = R32((u32)(0x7906f4u));
    /* 00444d21: call 0x43fc80 */ r_esp -= 4; W32(r_esp, 0x444d26u); f_0043fc80();
    /* 00444d26: mov esp, ebp */ r_esp = r_ebp;
    /* 00444d28: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00444d29: ret 8 */ FN_RET(0x00444d00); r_esp += 12; return;
}

void f_00444d30(void) /* sub_444D30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00444d30);
    /* 00444d30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00444d31: mov ebp, esp */ r_ebp = r_esp;
    /* 00444d33: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00444d36: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00444d39: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00444d3c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00444d3f: cmp dword ptr [ebp - 0x14], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00444d43: ja 0x444e2c */ if ((!fC&&!fZ)) goto L_00444e2c;
L_00444d49:; BB(0x00444d49);
    /* 00444d49: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00444d4c: jmp dword ptr [ecx*4 + 0x444f28] */ { u32 t = R32((u32)(r_ecx*4+0x444f28u)); switch (t) { case 0x444d53u: goto L_00444d53; case 0x444db1u: goto L_00444db1; case 0x444dbbu: goto L_00444dbb; case 0x444dd8u: goto L_00444dd8; case 0x444e04u: goto L_00444e04; default: UNSUP(0x00444d4c, "jump table entry is not a known target"); } }
L_00444d53:; BB(0x00444d53);
    /* 00444d53: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00444d56: call 0x445ae0 */ r_esp -= 4; W32(r_esp, 0x444d5bu); f_00445ae0();
    /* 00444d5b: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00444d5e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00444d60: je 0x444d8a */ if (fZ) goto L_00444d8a;
L_00444d62:; BB(0x00444d62);
    /* 00444d62: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00444d65: mov byte ptr [eax + 0x25e], 0 */ W8((u32)(r_eax+0x25eu), 0x0u);
    /* 00444d6c: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00444d6e: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00444d70: mov ecx, dword ptr [0x7906ec] */ r_ecx = R32((u32)(0x7906ecu));
    /* 00444d76: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00444d79: mov eax, dword ptr [0x7906ec] */ r_eax = R32((u32)(0x7906ecu));
    /* 00444d7e: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00444d81: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00444d83: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00444d86: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x444d88u); call_ind(t); }
    /* 00444d88: jmp 0x444daf */ goto L_00444daf;
L_00444d8a:; BB(0x00444d8a);
    /* 00444d8a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00444d8d: call 0x444cb0 */ r_esp -= 4; W32(r_esp, 0x444d92u); f_00444cb0();
    /* 00444d92: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00444d95: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00444d97: je 0x444daf */ if (fZ) goto L_00444daf;
L_00444d99:; BB(0x00444d99);
    /* 00444d99: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00444d9b: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x444da0u); f_005dcb00();
    /* 00444da0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00444da3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00444da4: mov ecx, dword ptr [0x7906ec] */ r_ecx = R32((u32)(0x7906ecu));
    /* 00444daa: call 0x5dbb70 */ r_esp -= 4; W32(r_esp, 0x444dafu); f_005dbb70();
L_00444daf:; BB(0x00444daf);
    /* 00444daf: jmp 0x444e2c */ goto L_00444e2c;
L_00444db1:; BB(0x00444db1);
    /* 00444db1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00444db4: call 0x445f50 */ r_esp -= 4; W32(r_esp, 0x444db9u); f_00445f50();
    /* 00444db9: jmp 0x444e2c */ goto L_00444e2c;
L_00444dbb:; BB(0x00444dbb);
    /* 00444dbb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00444dbd: mov edx, dword ptr [0x7906ec] */ r_edx = R32((u32)(0x7906ecu));
    /* 00444dc3: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00444dc6: mov ecx, dword ptr [0x7906ec] */ r_ecx = R32((u32)(0x7906ecu));
    /* 00444dcc: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00444dcf: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00444dd1: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00444dd4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x444dd6u); call_ind(t); }
    /* 00444dd6: jmp 0x444e2c */ goto L_00444e2c;
L_00444dd8:; BB(0x00444dd8);
    /* 00444dd8: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00444dde: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00444de0: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00444de6: mov eax, dword ptr [edx + 0x258] */ r_eax = R32((u32)(r_edx+0x258u));
    /* 00444dec: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x444deeu); call_ind(t); }
    /* 00444dee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00444def: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00444df5: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00444df7: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00444dfd: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 00444e00: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x444e02u); call_ind(t); }
    /* 00444e02: jmp 0x444e2c */ goto L_00444e2c;
L_00444e04:; BB(0x00444e04);
    /* 00444e04: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00444e06: mov ecx, dword ptr [0x7906ec] */ r_ecx = R32((u32)(0x7906ecu));
    /* 00444e0c: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00444e0f: mov eax, dword ptr [0x7906ec] */ r_eax = R32((u32)(0x7906ecu));
    /* 00444e14: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00444e17: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00444e19: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00444e1c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x444e1eu); call_ind(t); }
    /* 00444e1e: mov ecx, dword ptr [0x7906f4] */ r_ecx = R32((u32)(0x7906f4u));
    /* 00444e24: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 00444e27: call 0x43d2c0 */ r_esp -= 4; W32(r_esp, 0x444e2cu); f_0043d2c0();
L_00444e2c:; BB(0x00444e2c);
    /* 00444e2c: cmp dword ptr [ebp + 8], 5 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00444e30: jl 0x444f1f */ if ((fS!=fO)) goto L_00444f1f;
L_00444e36:; BB(0x00444e36);
    /* 00444e36: cmp dword ptr [ebp + 8], 0x13 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00444e3a: jg 0x444f1f */ if ((!fZ&&fS==fO)) goto L_00444f1f;
L_00444e40:; BB(0x00444e40);
    /* 00444e40: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00444e43: sub eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00444e46: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00444e47: mov ecx, 3 */ r_ecx = 0x3u;
    /* 00444e4c: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00444e4c, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00444e4c, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00444e4e: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00444e51: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00444e54: sub eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00444e57: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00444e58: mov ecx, 3 */ r_ecx = 0x3u;
    /* 00444e5d: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00444e5d, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00444e5d, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00444e5f: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00444e62: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00444e65: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00444e66: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00444e69: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00444e6a: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00444e70: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 00444e73: call 0x5fb3f0 */ r_esp -= 4; W32(r_esp, 0x444e78u); f_005fb3f0();
    /* 00444e78: mov ecx, eax */ r_ecx = r_eax;
    /* 00444e7a: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x444e7fu); f_00600230();
    /* 00444e7f: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00444e82: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00444e84: je 0x444f1f */ if (fZ) goto L_00444f1f;
L_00444e8a:; BB(0x00444e8a);
    /* 00444e8a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00444e8d: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00444e90: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00444e93: mov edx, dword ptr [ecx + eax + 0x44] */ r_edx = R32((u32)(r_ecx+r_eax+0x44u));
    /* 00444e97: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00444e9a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00444e9d: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00444ea0: je 0x444f1f */ if (fZ) goto L_00444f1f;
L_00444ea2:; BB(0x00444ea2);
    /* 00444ea2: push 0x6b83fc */ { u32 v = 0x6b83fcu; r_esp -= 4; W32(r_esp, v); }
    /* 00444ea7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00444eaa: add ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00444ead: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00444eae: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00444eb4: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 00444eb7: call 0x5fb8b0 */ r_esp -= 4; W32(r_esp, 0x444ebcu); f_005fb8b0();
    /* 00444ebc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00444ebd: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x444ec2u); f_00686ec0();
    /* 00444ec2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00444ec5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00444ec7: jne 0x444f04 */ if (!fZ) goto L_00444f04;
L_00444ec9:; BB(0x00444ec9);
    /* 00444ec9: push 0x6b83f8 */ { u32 v = 0x6b83f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00444ece: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00444ed1: add eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00444ed4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00444ed5: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00444edb: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 00444ede: call 0x5fb8f0 */ r_esp -= 4; W32(r_esp, 0x444ee3u); f_005fb8f0();
    /* 00444ee3: mov ecx, dword ptr [0x7906f4] */ r_ecx = R32((u32)(0x7906f4u));
    /* 00444ee9: call 0x440260 */ r_esp -= 4; W32(r_esp, 0x444eeeu); f_00440260();
    /* 00444eee: mov ecx, dword ptr [0x7906f4] */ r_ecx = R32((u32)(0x7906f4u));
    /* 00444ef4: call 0x440310 */ r_esp -= 4; W32(r_esp, 0x444ef9u); f_00440310();
    /* 00444ef9: mov ecx, dword ptr [0x7906f4] */ r_ecx = R32((u32)(0x7906f4u));
    /* 00444eff: call 0x440490 */ r_esp -= 4; W32(r_esp, 0x444f04u); f_00440490();
L_00444f04:; BB(0x00444f04);
    /* 00444f04: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444f07: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00444f08: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00444f0b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00444f0c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00444f0f: call 0x444d00 */ r_esp -= 4; W32(r_esp, 0x444f14u); f_00444d00();
    /* 00444f14: mov ecx, dword ptr [0x7906f4] */ r_ecx = R32((u32)(0x7906f4u));
    /* 00444f1a: call 0x440310 */ r_esp -= 4; W32(r_esp, 0x444f1fu); f_00440310();
L_00444f1f:; BB(0x00444f1f);
    /* 00444f1f: mov esp, ebp */ r_esp = r_ebp;
    /* 00444f21: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00444f22: ret 4 */ FN_RET(0x00444d30); r_esp += 8; return;
}

