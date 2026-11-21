#include "protos.h"

void f_00597c00(void) /* sub_597C00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00597c00);
    /* 00597c00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00597c01: mov ebp, esp */ r_ebp = r_esp;
    /* 00597c03: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00597c06: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00597c09: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00597c10: jmp 0x597c1b */ goto L_00597c1b;
L_00597c12:; BB(0x00597c12);
    /* 00597c12: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00597c15: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00597c18: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00597c1b:; BB(0x00597c1b);
    /* 00597c1b: cmp dword ptr [ebp - 4], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00597c1f: jge 0x597c3c */ if ((fS==fO)) goto L_00597c3c;
L_00597c21:; BB(0x00597c21);
    /* 00597c21: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00597c24: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00597c25: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00597c28: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00597c29: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00597c2c: call 0x598420 */ r_esp -= 4; W32(r_esp, 0x597c31u); f_00598420();
    /* 00597c31: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00597c34: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00597c36: jne 0x597c3a */ if (!fZ) goto L_00597c3a;
L_00597c38:; BB(0x00597c38);
    /* 00597c38: jmp 0x597c3c */ goto L_00597c3c;
L_00597c3a:; BB(0x00597c3a);
    /* 00597c3a: jmp 0x597c12 */ goto L_00597c12;
L_00597c3c:; BB(0x00597c3c);
    /* 00597c3c: mov cx, word ptr [ebp + 0xc] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 00597c40: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00597c41: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00597c44: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00597c45: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00597c48: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00597c49: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00597c4c: call 0x5994f0 */ r_esp -= 4; W32(r_esp, 0x597c51u); f_005994f0();
    /* 00597c51: mov esp, ebp */ r_esp = r_ebp;
    /* 00597c53: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00597c54: ret 8 */ FN_RET(0x00597c00); r_esp += 12; return;
}

void f_00597c60(void) /* sub_597C60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00597c60);
    /* 00597c60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00597c61: mov ebp, esp */ r_ebp = r_esp;
    /* 00597c63: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00597c66: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00597c69: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00597c70: jmp 0x597c7b */ goto L_00597c7b;
L_00597c72:; BB(0x00597c72);
    /* 00597c72: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00597c75: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00597c78: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00597c7b:; BB(0x00597c7b);
    /* 00597c7b: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00597c7f: jge 0x597c90 */ if ((fS==fO)) goto L_00597c90;
L_00597c81:; BB(0x00597c81);
    /* 00597c81: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00597c84: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00597c87: mov byte ptr [ecx + 0x10e], 0 */ W8((u32)(r_ecx+0x10eu), 0x0u);
    /* 00597c8e: jmp 0x597c72 */ goto L_00597c72;
L_00597c90:; BB(0x00597c90);
    /* 00597c90: mov esp, ebp */ r_esp = r_ebp;
    /* 00597c92: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00597c93: ret  */ FN_RET(0x00597c60); r_esp += 4; return;
}

void f_00597ca0(void) /* sub_597CA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00597ca0);
    /* 00597ca0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00597ca1: mov ebp, esp */ r_ebp = r_esp;
    /* 00597ca3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00597ca4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00597ca7: mov al, byte ptr [ebp + 0xc] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 00597caa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00597cab: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00597cae: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00597caf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00597cb2: call 0x598750 */ r_esp -= 4; W32(r_esp, 0x597cb7u); f_00598750();
    /* 00597cb7: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00597cba: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00597cbc: je 0x597cc2 */ if (fZ) goto L_00597cc2;
L_00597cbe:; BB(0x00597cbe);
    /* 00597cbe: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00597cc0: jmp 0x597cfa */ goto L_00597cfa;
L_00597cc2:; BB(0x00597cc2);
    /* 00597cc2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00597cc5: mov byte ptr [eax + 0x108], 0 */ W8((u32)(r_eax+0x108u), 0x0u);
    /* 00597ccc: mov cl, byte ptr [ebp + 0xc] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 00597ccf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00597cd0: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00597cd3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00597cd4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00597cd7: call 0x5997f0 */ r_esp -= 4; W32(r_esp, 0x597cdcu); f_005997f0();
    /* 00597cdc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00597cde: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00597ce1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00597ce2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00597ce5: call 0x599570 */ r_esp -= 4; W32(r_esp, 0x597ceau); f_00599570();
    /* 00597cea: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00597cec: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00597cef: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00597cf0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00597cf3: call 0x5994a0 */ r_esp -= 4; W32(r_esp, 0x597cf8u); f_005994a0();
    /* 00597cf8: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_00597cfa:; BB(0x00597cfa);
    /* 00597cfa: mov esp, ebp */ r_esp = r_ebp;
    /* 00597cfc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00597cfd: ret 8 */ FN_RET(0x00597ca0); r_esp += 12; return;
}

void f_00597d00(void) /* sub_597D00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00597d00);
    /* 00597d00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00597d01: mov ebp, esp */ r_ebp = r_esp;
    /* 00597d03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00597d04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00597d07: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00597d0a: cmp dword ptr [eax + 0x104], -1 */ {  u32 a = R32((u32)(r_eax+0x104u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00597d11: jne 0x597d17 */ if (!fZ) goto L_00597d17;
L_00597d13:; BB(0x00597d13);
    /* 00597d13: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00597d15: jmp 0x597d29 */ goto L_00597d29;
L_00597d17:; BB(0x00597d17);
    /* 00597d17: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00597d1a: mov edx, dword ptr [ecx + 0x104] */ r_edx = R32((u32)(r_ecx+0x104u));
    /* 00597d20: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00597d21: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x597d26u); f_005dcb00();
    /* 00597d26: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00597d29:; BB(0x00597d29);
    /* 00597d29: mov esp, ebp */ r_esp = r_ebp;
    /* 00597d2b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00597d2c: ret  */ FN_RET(0x00597d00); r_esp += 4; return;
}

void f_00597d30(void) /* sub_597D30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00597d30);
    /* 00597d30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00597d31: mov ebp, esp */ r_ebp = r_esp;
    /* 00597d33: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00597d34: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00597d37: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00597d3a: mov eax, dword ptr [eax + 0x104] */ r_eax = R32((u32)(r_eax+0x104u));
    /* 00597d40: mov esp, ebp */ r_esp = r_ebp;
    /* 00597d42: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00597d43: ret  */ FN_RET(0x00597d30); r_esp += 4; return;
}

void f_00597d50(void) /* sub_597D50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00597d50);
    /* 00597d50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00597d51: mov ebp, esp */ r_ebp = r_esp;
    /* 00597d53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00597d54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00597d57: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00597d5b: jne 0x597d73 */ if (!fZ) goto L_00597d73;
L_00597d5d:; BB(0x00597d5d);
    /* 00597d5d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00597d5f: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00597d65: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x597d6au); f_006375b0();
    /* 00597d6a: mov ecx, eax */ r_ecx = r_eax;
    /* 00597d6c: call 0x63aae0 */ r_esp -= 4; W32(r_esp, 0x597d71u); f_0063aae0();
    /* 00597d71: jmp 0x597d88 */ goto L_00597d88;
L_00597d73:; BB(0x00597d73);
    /* 00597d73: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00597d75: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00597d7a: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 00597d7d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00597d80: mov ecx, dword ptr [ecx + edx*4] */ r_ecx = R32((u32)(r_ecx+r_edx*4));
    /* 00597d83: call 0x63aae0 */ r_esp -= 4; W32(r_esp, 0x597d88u); f_0063aae0();
L_00597d88:; BB(0x00597d88);
    /* 00597d88: mov esp, ebp */ r_esp = r_ebp;
    /* 00597d8a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00597d8b: ret 4 */ FN_RET(0x00597d50); r_esp += 8; return;
}

void f_00597d90(void) /* sub_597D90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00597d90);
    /* 00597d90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00597d91: mov ebp, esp */ r_ebp = r_esp;
    /* 00597d93: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00597d96: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00597d9b: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00597d9d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00597da0: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00597da3: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00597daa: jmp 0x597db5 */ goto L_00597db5;
L_00597dac:; BB(0x00597dac);
    /* 00597dac: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00597daf: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00597db2: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
L_00597db5:; BB(0x00597db5);
    /* 00597db5: cmp dword ptr [ebp - 0x24], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00597db9: jge 0x597dc7 */ if ((fS==fO)) goto L_00597dc7;
L_00597dbb:; BB(0x00597dbb);
    /* 00597dbb: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00597dbe: mov word ptr [ebp + ecx*2 - 0xc], 0 */ W16((u32)(r_ebp+r_ecx*2+0xfffffff4u), 0x0u);
    /* 00597dc5: jmp 0x597dac */ goto L_00597dac;
L_00597dc7:; BB(0x00597dc7);
    /* 00597dc7: lea edx, [ebp - 0xc] */ r_edx = (u32)(r_ebp+0xfffffff4u);
    /* 00597dca: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00597dcb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00597dcd: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00597dd1: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00597dd4: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00597dd7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00597dd8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00597ddb: imul ecx, ecx, 0xc */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xcu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00597dde: mov edx, dword ptr [0x7935a8] */ r_edx = R32((u32)(0x7935a8u));
    /* 00597de4: lea eax, [edx + ecx + 0xc8] */ r_eax = (u32)(r_edx+r_ecx+0xc8u);
    /* 00597deb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00597dec: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00597dee: call 0x462a40 */ r_esp -= 4; W32(r_esp, 0x597df3u); f_00462a40();
    /* 00597df3: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00597df6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00597df8: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00597dfa: lea ecx, [ebp - 0xc] */ r_ecx = (u32)(r_ebp+0xfffffff4u);
    /* 00597dfd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00597dfe: call 0x462ba0 */ r_esp -= 4; W32(r_esp, 0x597e03u); f_00462ba0();
    /* 00597e03: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00597e06: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00597e09: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00597e10: jmp 0x597e1b */ goto L_00597e1b;
L_00597e12:; BB(0x00597e12);
    /* 00597e12: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00597e15: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00597e18: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
L_00597e1b:; BB(0x00597e1b);
    /* 00597e1b: cmp dword ptr [ebp - 0x28], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00597e1f: jge 0x597e2d */ if ((fS==fO)) goto L_00597e2d;
L_00597e21:; BB(0x00597e21);
    /* 00597e21: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00597e24: mov word ptr [ebp + eax*2 - 0x20], 0 */ W16((u32)(r_ebp+r_eax*2+0xffffffe0u), 0x0u);
    /* 00597e2b: jmp 0x597e12 */ goto L_00597e12;
L_00597e2d:; BB(0x00597e2d);
    /* 00597e2d: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 00597e30: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00597e31: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00597e33: mov edx, dword ptr [0x7935a8] */ r_edx = R32((u32)(0x7935a8u));
    /* 00597e39: add edx, 0xf8 */ {  u32 a = r_edx; u32 b = 0xf8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00597e3f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00597e40: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00597e42: call 0x462a40 */ r_esp -= 4; W32(r_esp, 0x597e47u); f_00462a40();
    /* 00597e47: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00597e4a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00597e4c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00597e4e: lea eax, [ebp - 0x20] */ r_eax = (u32)(r_ebp+0xffffffe0u);
    /* 00597e51: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00597e52: call 0x462ba0 */ r_esp -= 4; W32(r_esp, 0x597e57u); f_00462ba0();
    /* 00597e57: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00597e5a: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00597e5d: cmp dword ptr [ebp - 0x10], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00597e61: jne 0x597e70 */ if (!fZ) goto L_00597e70;
L_00597e63:; BB(0x00597e63);
    /* 00597e63: cmp dword ptr [ebp - 0x14], 9 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00597e67: jne 0x597e70 */ if (!fZ) goto L_00597e70;
L_00597e69:; BB(0x00597e69);
    /* 00597e69: mov eax, 1 */ r_eax = 0x1u;
    /* 00597e6e: jmp 0x597ed4 */ goto L_00597ed4;
L_00597e70:; BB(0x00597e70);
    /* 00597e70: cmp dword ptr [ebp - 0x14], 9 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00597e74: jne 0x597e80 */ if (!fZ) goto L_00597e80;
L_00597e76:; BB(0x00597e76);
    /* 00597e76: cmp dword ptr [ebp - 0x10], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00597e7a: jne 0x597e80 */ if (!fZ) goto L_00597e80;
L_00597e7c:; BB(0x00597e7c);
    /* 00597e7c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00597e7e: jmp 0x597ed4 */ goto L_00597ed4;
L_00597e80:; BB(0x00597e80);
    /* 00597e80: cmp dword ptr [ebp - 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00597e84: jne 0x597e99 */ if (!fZ) goto L_00597e99;
L_00597e86:; BB(0x00597e86);
    /* 00597e86: cmp dword ptr [ebp - 0x14], 6 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00597e8a: je 0x597e92 */ if (fZ) goto L_00597e92;
L_00597e8c:; BB(0x00597e8c);
    /* 00597e8c: cmp dword ptr [ebp - 0x14], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00597e90: jne 0x597e99 */ if (!fZ) goto L_00597e99;
L_00597e92:; BB(0x00597e92);
    /* 00597e92: mov eax, 1 */ r_eax = 0x1u;
    /* 00597e97: jmp 0x597ed4 */ goto L_00597ed4;
L_00597e99:; BB(0x00597e99);
    /* 00597e99: cmp dword ptr [ebp - 0x14], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00597e9d: jne 0x597eaf */ if (!fZ) goto L_00597eaf;
L_00597e9f:; BB(0x00597e9f);
    /* 00597e9f: cmp dword ptr [ebp - 0x10], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00597ea3: je 0x597eab */ if (fZ) goto L_00597eab;
L_00597ea5:; BB(0x00597ea5);
    /* 00597ea5: cmp dword ptr [ebp - 0x10], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00597ea9: jne 0x597eaf */ if (!fZ) goto L_00597eaf;
L_00597eab:; BB(0x00597eab);
    /* 00597eab: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00597ead: jmp 0x597ed4 */ goto L_00597ed4;
L_00597eaf:; BB(0x00597eaf);
    /* 00597eaf: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00597eb1: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 00597eb4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00597eb5: lea edx, [ebp - 0xc] */ r_edx = (u32)(r_ebp+0xfffffff4u);
    /* 00597eb8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00597eb9: call 0x462da0 */ r_esp -= 4; W32(r_esp, 0x597ebeu); f_00462da0();
    /* 00597ebe: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00597ec1: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00597ec4: cmp dword ptr [ebp - 0x18], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00597ec8: jne 0x597ed1 */ if (!fZ) goto L_00597ed1;
L_00597eca:; BB(0x00597eca);
    /* 00597eca: mov eax, 1 */ r_eax = 0x1u;
    /* 00597ecf: jmp 0x597ed4 */ goto L_00597ed4;
L_00597ed1:; BB(0x00597ed1);
    /* 00597ed1: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
L_00597ed4:; BB(0x00597ed4);
    /* 00597ed4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00597ed7: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00597ed9: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x597edeu); f_00686d72();
    /* 00597ede: mov esp, ebp */ r_esp = r_ebp;
    /* 00597ee0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00597ee1: ret 4 */ FN_RET(0x00597d90); r_esp += 8; return;
}

void f_00597ef0(void) /* sub_597EF0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00597ef0);
    /* 00597ef0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00597ef1: mov ebp, esp */ r_ebp = r_esp;
    /* 00597ef3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00597ef6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00597ef9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00597f00: jmp 0x597f0b */ goto L_00597f0b;
L_00597f02:; BB(0x00597f02);
    /* 00597f02: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00597f05: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00597f08: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00597f0b:; BB(0x00597f0b);
    /* 00597f0b: cmp dword ptr [ebp - 4], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00597f0f: jge 0x597f27 */ if ((fS==fO)) goto L_00597f27;
L_00597f11:; BB(0x00597f11);
    /* 00597f11: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00597f14: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00597f17: mov eax, dword ptr [edx + ecx*4 + 8] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 00597f1b: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00597f1e: jne 0x597f25 */ if (!fZ) goto L_00597f25;
L_00597f20:; BB(0x00597f20);
    /* 00597f20: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00597f23: jmp 0x597f2a */ goto L_00597f2a;
L_00597f25:; BB(0x00597f25);
    /* 00597f25: jmp 0x597f02 */ goto L_00597f02;
L_00597f27:; BB(0x00597f27);
    /* 00597f27: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_00597f2a:; BB(0x00597f2a);
    /* 00597f2a: mov esp, ebp */ r_esp = r_ebp;
    /* 00597f2c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00597f2d: ret 4 */ FN_RET(0x00597ef0); r_esp += 8; return;
}

void f_00597f30(void) /* sub_597F30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00597f30);
    /* 00597f30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00597f31: mov ebp, esp */ r_ebp = r_esp;
    /* 00597f33: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00597f36: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00597f39: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 00597f40: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00597f47: jmp 0x597f52 */ goto L_00597f52;
L_00597f49:; BB(0x00597f49);
    /* 00597f49: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00597f4c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00597f4f: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_00597f52:; BB(0x00597f52);
    /* 00597f52: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00597f56: jge 0x597f9d */ if ((fS==fO)) goto L_00597f9d;
L_00597f58:; BB(0x00597f58);
    /* 00597f58: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00597f5b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00597f5c: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x597f61u); f_005dcb00();
    /* 00597f61: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00597f64: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00597f67: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00597f6a: mov al, byte ptr [edx + 0x4a0] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x4a0u))) & 0xffu);
    /* 00597f70: mov byte ptr [ebp - 0xd], al */ W8((u32)(r_ebp+0xfffffff3u), (u8)r_eax);
    /* 00597f73: movzx ecx, byte ptr [ebp - 0xd] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffff3u));
    /* 00597f77: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00597f79: je 0x597f9b */ if (fZ) goto L_00597f9b;
L_00597f7b:; BB(0x00597f7b);
    /* 00597f7b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00597f7e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00597f7f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00597f82: call 0x5983c0 */ r_esp -= 4; W32(r_esp, 0x597f87u); f_005983c0();
    /* 00597f87: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00597f8a: jge 0x597f9b */ if ((fS==fO)) goto L_00597f9b;
L_00597f8c:; BB(0x00597f8c);
    /* 00597f8c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00597f8f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00597f90: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00597f93: call 0x5983c0 */ r_esp -= 4; W32(r_esp, 0x597f98u); f_005983c0();
    /* 00597f98: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00597f9b:; BB(0x00597f9b);
    /* 00597f9b: jmp 0x597f49 */ goto L_00597f49;
L_00597f9d:; BB(0x00597f9d);
    /* 00597f9d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00597fa0: mov esp, ebp */ r_esp = r_ebp;
    /* 00597fa2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00597fa3: ret  */ FN_RET(0x00597f30); r_esp += 4; return;
}

void f_00597fe0(void) /* sub_597FE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00597fe0);
    /* 00597fe0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00597fe1: mov ebp, esp */ r_ebp = r_esp;
    /* 00597fe3: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00597fe6: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 00597fe9: mov dword ptr [ebp - 0x10], 3 */ W32((u32)(r_ebp+0xfffffff0u), 0x3u);
    /* 00597ff0: mov dword ptr [ebp - 0xc], 1 */ W32((u32)(r_ebp+0xfffffff4u), 0x1u);
    /* 00597ff7: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00597ffe: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00598005: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0059800c: jmp 0x598017 */ goto L_00598017;
L_0059800e:; BB(0x0059800e);
    /* 0059800e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00598011: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00598014: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_00598017:; BB(0x00598017);
    /* 00598017: cmp dword ptr [ebp - 0x14], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059801b: jge 0x5980ad */ if ((fS==fO)) goto L_005980ad;
L_00598021:; BB(0x00598021);
    /* 00598021: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00598024: mov edx, dword ptr [ebp + ecx*4 - 0x10] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xfffffff0u));
    /* 00598028: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00598029: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x59802eu); f_005dcb00();
    /* 0059802e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00598031: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00598034: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00598037: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x59803cu); f_0063aac0();
    /* 0059803c: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0059803e: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00598041: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00598043: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00598047: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0059804a: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 0059804d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059804f: jne 0x5980a8 */ if (!fZ) goto L_005980a8;
L_00598051:; BB(0x00598051);
    /* 00598051: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00598054: mov ecx, dword ptr [ebp + eax*4 - 0x10] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xfffffff0u));
    /* 00598058: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00598059: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x59805eu); f_005dcb00();
    /* 0059805e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00598061: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00598064: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00598067: mov al, byte ptr [edx + 0x4a1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x4a1u))) & 0xffu);
    /* 0059806d: mov byte ptr [ebp - 0x21], al */ W8((u32)(r_ebp+0xffffffdfu), (u8)r_eax);
    /* 00598070: movzx ecx, byte ptr [ebp - 0x21] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffdfu));
    /* 00598074: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00598076: jne 0x5980a8 */ if (!fZ) goto L_005980a8;
L_00598078:; BB(0x00598078);
    /* 00598078: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0059807b: mov eax, dword ptr [ebp + edx*4 - 0x10] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xfffffff0u));
    /* 0059807f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00598080: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x598085u); f_005dcb00();
    /* 00598085: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00598088: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0059808b: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0059808e: mov dl, byte ptr [ecx + 0x4a2] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x4a2u))) & 0xffu);
    /* 00598094: mov byte ptr [ebp - 0x29], dl */ W8((u32)(r_ebp+0xffffffd7u), (u8)r_edx);
    /* 00598097: movzx eax, byte ptr [ebp - 0x29] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffd7u));
    /* 0059809b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059809d: jne 0x5980a8 */ if (!fZ) goto L_005980a8;
L_0059809f:; BB(0x0059809f);
    /* 0059809f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005980a2: mov eax, dword ptr [ebp + ecx*4 - 0x10] */ r_eax = R32((u32)(r_ebp+r_ecx*4+0xfffffff0u));
    /* 005980a6: jmp 0x5980b0 */ goto L_005980b0;
L_005980a8:; BB(0x005980a8);
    /* 005980a8: jmp 0x59800e */ goto L_0059800e;
L_005980ad:; BB(0x005980ad);
    /* 005980ad: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_005980b0:; BB(0x005980b0);
    /* 005980b0: mov esp, ebp */ r_esp = r_ebp;
    /* 005980b2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005980b3: ret  */ FN_RET(0x00597fe0); r_esp += 4; return;
}

