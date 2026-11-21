#include "protos.h"

void f_00599bf0(void) /* FourCardPokerBet::vfunc49 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00599bf0);
    /* 00599bf0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00599bf1: mov ebp, esp */ r_ebp = r_esp;
    /* 00599bf3: sub esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00599bf6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00599bf7: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 00599bfa: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 00599c00: call 0x597d30 */ r_esp -= 4; W32(r_esp, 0x599c05u); f_00597d30();
    /* 00599c05: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00599c08: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00599c0b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00599c0c: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x599c11u); f_005dcb00();
    /* 00599c11: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00599c14: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00599c16: jne 0x599c1d */ if (!fZ) goto L_00599c1d;
L_00599c18:; BB(0x00599c18);
    /* 00599c18: jmp 0x59a003 */ goto L_0059a003;
L_00599c1d:; BB(0x00599c1d);
    /* 00599c1d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00599c20: imul ecx, ecx, 3 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x3u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00599c23: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00599c26: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00599c29: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00599c2a: lea eax, [ebp - 0x1c] */ r_eax = (u32)(r_ebp+0xffffffe4u);
    /* 00599c2d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00599c2e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00599c31: mov edx, dword ptr [0x7935a8] */ r_edx = R32((u32)(0x7935a8u));
    /* 00599c37: mov ecx, dword ptr [edx + ecx*4 + 8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 00599c3b: call 0x5cb880 */ r_esp -= 4; W32(r_esp, 0x599c40u); f_005cb880();
    /* 00599c40: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00599c43: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00599c44: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 00599c47: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00599c48: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00599c4b: mov eax, dword ptr [0x7935a8] */ r_eax = R32((u32)(0x7935a8u));
    /* 00599c50: mov ecx, dword ptr [eax + edx*4 + 0xc] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xcu));
    /* 00599c54: call 0x5cb880 */ r_esp -= 4; W32(r_esp, 0x599c59u); f_005cb880();
    /* 00599c59: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00599c5c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00599c5d: lea edx, [ebp - 0xc] */ r_edx = (u32)(r_ebp+0xfffffff4u);
    /* 00599c60: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00599c61: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00599c64: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 00599c6a: mov ecx, dword ptr [ecx + eax*4 + 0x10] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x10u));
    /* 00599c6e: call 0x5cb880 */ r_esp -= 4; W32(r_esp, 0x599c73u); f_005cb880();
    /* 00599c73: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00599c76: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00599c77: lea eax, [ebp - 0x28] */ r_eax = (u32)(r_ebp+0xffffffd8u);
    /* 00599c7a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00599c7b: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00599c7e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00599c7f: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 00599c85: call 0x597ef0 */ r_esp -= 4; W32(r_esp, 0x599c8au); f_00597ef0();
    /* 00599c8a: mov edx, dword ptr [0x7935a8] */ r_edx = R32((u32)(0x7935a8u));
    /* 00599c90: mov ecx, dword ptr [edx + eax*4 + 8] */ r_ecx = R32((u32)(r_edx+r_eax*4+0x8u));
    /* 00599c94: call 0x5cb880 */ r_esp -= 4; W32(r_esp, 0x599c99u); f_005cb880();
    /* 00599c99: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00599c9c: cmp dword ptr [eax], 0 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00599c9f: jne 0x599cb8 */ if (!fZ) goto L_00599cb8;
L_00599ca1:; BB(0x00599ca1);
    /* 00599ca1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00599ca4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00599ca5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00599ca8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00599ca9: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x599caeu); f_005dcb00();
    /* 00599cae: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00599cb1: mov ecx, eax */ r_ecx = r_eax;
    /* 00599cb3: call 0x5d5de0 */ r_esp -= 4; W32(r_esp, 0x599cb8u); f_005d5de0();
L_00599cb8:; BB(0x00599cb8);
    /* 00599cb8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00599cbb: cmp dword ptr [eax], 0 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00599cbe: jne 0x599cf8 */ if (!fZ) goto L_00599cf8;
L_00599cc0:; BB(0x00599cc0);
    /* 00599cc0: mov ecx, dword ptr [0x7935a4] */ r_ecx = R32((u32)(0x7935a4u));
    /* 00599cc6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00599cc8: mov ecx, dword ptr [0x7935a4] */ r_ecx = R32((u32)(0x7935a4u));
    /* 00599cce: mov eax, dword ptr [edx + 0x2b0] */ r_eax = R32((u32)(r_edx+0x2b0u));
    /* 00599cd4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x599cd6u); call_ind(t); }
    /* 00599cd6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00599cd9: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 00599cdb: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00599cde: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00599ce1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00599ce2: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00599ce4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00599ce5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00599ce8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00599ce9: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x599ceeu); f_005dcb00();
    /* 00599cee: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00599cf1: mov ecx, eax */ r_ecx = r_eax;
    /* 00599cf3: call 0x5d5e10 */ r_esp -= 4; W32(r_esp, 0x599cf8u); f_005d5e10();
L_00599cf8:; BB(0x00599cf8);
    /* 00599cf8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00599cfb: cmp dword ptr [eax], 0 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00599cfe: jle 0x599f86 */ if ((fZ||fS!=fO)) goto L_00599f86;
L_00599d04:; BB(0x00599d04);
    /* 00599d04: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00599d07: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00599d0a: add esi, dword ptr [ecx] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00599d0c: mov edx, dword ptr [0x7935a4] */ r_edx = R32((u32)(0x7935a4u));
    /* 00599d12: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00599d14: mov ecx, dword ptr [0x7935a4] */ r_ecx = R32((u32)(0x7935a4u));
    /* 00599d1a: mov edx, dword ptr [eax + 0x2b0] */ r_edx = R32((u32)(r_eax+0x2b0u));
    /* 00599d20: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x599d22u); call_ind(t); }
    /* 00599d22: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00599d24: jge 0x599d43 */ if ((fS==fO)) goto L_00599d43;
L_00599d26:; BB(0x00599d26);
    /* 00599d26: mov eax, dword ptr [0x7935a4] */ r_eax = R32((u32)(0x7935a4u));
    /* 00599d2b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00599d2d: mov ecx, dword ptr [0x7935a4] */ r_ecx = R32((u32)(0x7935a4u));
    /* 00599d33: mov eax, dword ptr [edx + 0x2b0] */ r_eax = R32((u32)(r_edx+0x2b0u));
    /* 00599d39: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x599d3bu); call_ind(t); }
    /* 00599d3b: sub eax, dword ptr [ebp - 0x28] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffd8u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00599d3e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00599d41: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
L_00599d43:; BB(0x00599d43);
    /* 00599d43: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00599d46: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00599d47: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 00599d4d: call 0x597ef0 */ r_esp -= 4; W32(r_esp, 0x599d52u); f_00597ef0();
    /* 00599d52: cmp eax, dword ptr [ebp - 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00599d55: jne 0x599d6f */ if (!fZ) goto L_00599d6f;
L_00599d57:; BB(0x00599d57);
    /* 00599d57: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00599d5a: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00599d5d: add ecx, dword ptr [eax] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00599d5f: cmp ecx, dword ptr [ebp - 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00599d62: jge 0x599d6f */ if ((fS==fO)) goto L_00599d6f;
L_00599d64:; BB(0x00599d64);
    /* 00599d64: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00599d67: sub edx, dword ptr [ebp - 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00599d6a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00599d6d: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
L_00599d6f:; BB(0x00599d6f);
    /* 00599d6f: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00599d72: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00599d73: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 00599d79: call 0x597ef0 */ r_esp -= 4; W32(r_esp, 0x599d7eu); f_00597ef0();
    /* 00599d7e: cmp eax, dword ptr [ebp - 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00599d81: jne 0x599da3 */ if (!fZ) goto L_00599da3;
L_00599d83:; BB(0x00599d83);
    /* 00599d83: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00599d86: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00599d89: add eax, dword ptr [edx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00599d8b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00599d8e: imul ecx, ecx, 3 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x3u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00599d91: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00599d93: jle 0x599da3 */ if ((fZ||fS!=fO)) goto L_00599da3;
L_00599d95:; BB(0x00599d95);
    /* 00599d95: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00599d98: imul edx, edx, 3 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x3u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00599d9b: sub edx, dword ptr [ebp - 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00599d9e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00599da1: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
L_00599da3:; BB(0x00599da3);
    /* 00599da3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00599da6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00599da7: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x599dacu); f_005dcb00();
    /* 00599dac: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00599daf: mov ecx, eax */ r_ecx = r_eax;
    /* 00599db1: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x599db6u); f_005d5a50();
    /* 00599db6: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00599db9: cmp dword ptr [edx], eax */ {  u32 a = R32((u32)(r_edx)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00599dbb: jle 0x599dd5 */ if ((fZ||fS!=fO)) goto L_00599dd5;
L_00599dbd:; BB(0x00599dbd);
    /* 00599dbd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00599dc0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00599dc1: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x599dc6u); f_005dcb00();
    /* 00599dc6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00599dc9: mov ecx, eax */ r_ecx = r_eax;
    /* 00599dcb: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x599dd0u); f_005d5a50();
    /* 00599dd0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00599dd3: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
L_00599dd5:; BB(0x00599dd5);
    /* 00599dd5: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00599dd8: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00599ddb: add esi, dword ptr [edx] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edx)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00599ddd: mov eax, dword ptr [0x7935a4] */ r_eax = R32((u32)(0x7935a4u));
    /* 00599de2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00599de4: mov ecx, dword ptr [0x7935a4] */ r_ecx = R32((u32)(0x7935a4u));
    /* 00599dea: mov eax, dword ptr [edx + 0x2b0] */ r_eax = R32((u32)(r_edx+0x2b0u));
    /* 00599df0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x599df2u); call_ind(t); }
    /* 00599df2: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00599df4: jl 0x599e17 */ if ((fS!=fO)) goto L_00599e17;
L_00599df6:; BB(0x00599df6);
    /* 00599df6: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00599df9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00599dfa: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 00599e00: call 0x597ef0 */ r_esp -= 4; W32(r_esp, 0x599e05u); f_00597ef0();
    /* 00599e05: cmp eax, dword ptr [ebp - 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00599e08: jne 0x599e1c */ if (!fZ) goto L_00599e1c;
L_00599e0a:; BB(0x00599e0a);
    /* 00599e0a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00599e0d: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00599e10: add eax, dword ptr [edx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00599e12: cmp eax, dword ptr [ebp - 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00599e15: jge 0x599e1c */ if ((fS==fO)) goto L_00599e1c;
L_00599e17:; BB(0x00599e17);
    /* 00599e17: jmp 0x59a003 */ goto L_0059a003;
L_00599e1c:; BB(0x00599e1c);
    /* 00599e1c: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00599e1f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00599e20: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 00599e26: call 0x597ef0 */ r_esp -= 4; W32(r_esp, 0x599e2bu); f_00597ef0();
    /* 00599e2b: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00599e2e: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00599e31: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00599e33: jne 0x599ed3 */ if (!fZ) goto L_00599ed3;
L_00599e39:; BB(0x00599e39);
    /* 00599e39: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00599e3c: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00599e3e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00599e41: lea esi, [edx + ecx*2] */ r_esi = (u32)(r_edx+r_ecx*2);
    /* 00599e44: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00599e47: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00599e48: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x599e4du); f_005dcb00();
    /* 00599e4d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00599e50: mov ecx, eax */ r_ecx = r_eax;
    /* 00599e52: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x599e57u); f_005d5a50();
    /* 00599e57: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00599e59: jle 0x599ed3 */ if ((fZ||fS!=fO)) goto L_00599ed3;
L_00599e5b:; BB(0x00599e5b);
    /* 00599e5b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00599e5e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00599e5f: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x599e64u); f_005dcb00();
    /* 00599e64: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00599e67: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00599e6a: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00599e6d: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x599e72u); f_0063aac0();
    /* 00599e72: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00599e74: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 00599e77: cmp dword ptr [ebp - 0x2c], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00599e7b: je 0x599e99 */ if (fZ) goto L_00599e99;
L_00599e7d:; BB(0x00599e7d);
    /* 00599e7d: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00599e80: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x599e85u); f_0063aac0();
    /* 00599e85: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00599e87: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00599e8a: cmp dword ptr [ebp - 0x30], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00599e8e: je 0x599e99 */ if (fZ) goto L_00599e99;
L_00599e90:; BB(0x00599e90);
    /* 00599e90: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 00599e97: jmp 0x599ea0 */ goto L_00599ea0;
L_00599e99:; BB(0x00599e99);
    /* 00599e99: mov dword ptr [ebp - 0x48], 1 */ W32((u32)(r_ebp+0xffffffb8u), 0x1u);
L_00599ea0:; BB(0x00599ea0);
    /* 00599ea0: movzx ecx, byte ptr [ebp - 0x48] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffb8u));
    /* 00599ea4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00599ea6: je 0x599ece */ if (fZ) goto L_00599ece;
L_00599ea8:; BB(0x00599ea8);
    /* 00599ea8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00599eaa: push 0x6b6940 */ { u32 v = 0x6b6940u; r_esp -= 4; W32(r_esp, v); }
    /* 00599eaf: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x599eb4u); f_00630f40();
    /* 00599eb4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00599eb7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00599eb8: push 0x6cebb8 */ { u32 v = 0x6cebb8u; r_esp -= 4; W32(r_esp, v); }
    /* 00599ebd: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x599ec2u); f_00630f40();
    /* 00599ec2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00599ec5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00599ec6: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x599ecbu); f_0062ff10();
    /* 00599ecb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00599ece:; BB(0x00599ece);
    /* 00599ece: jmp 0x59a003 */ goto L_0059a003;
L_00599ed3:; BB(0x00599ed3);
    /* 00599ed3: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00599ed6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00599ed7: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 00599edd: call 0x597ef0 */ r_esp -= 4; W32(r_esp, 0x599ee2u); f_00597ef0();
    /* 00599ee2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00599ee5: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00599ee8: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00599eea: jne 0x599f84 */ if (!fZ) goto L_00599f84;
L_00599ef0:; BB(0x00599ef0);
    /* 00599ef0: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00599ef3: mov esi, dword ptr [edx] */ r_esi = R32((u32)(r_edx));
    /* 00599ef5: add esi, dword ptr [ebp - 0x14] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00599ef8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00599efb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00599efc: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x599f01u); f_005dcb00();
    /* 00599f01: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00599f04: mov ecx, eax */ r_ecx = r_eax;
    /* 00599f06: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x599f0bu); f_005d5a50();
    /* 00599f0b: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00599f0d: jle 0x599f84 */ if ((fZ||fS!=fO)) goto L_00599f84;
L_00599f0f:; BB(0x00599f0f);
    /* 00599f0f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00599f12: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00599f13: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x599f18u); f_005dcb00();
    /* 00599f18: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00599f1b: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00599f1e: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00599f21: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x599f26u); f_0063aac0();
    /* 00599f26: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00599f28: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 00599f2b: cmp dword ptr [ebp - 0x38], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00599f2f: je 0x599f4d */ if (fZ) goto L_00599f4d;
L_00599f31:; BB(0x00599f31);
    /* 00599f31: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00599f34: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x599f39u); f_0063aac0();
    /* 00599f39: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00599f3b: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00599f3e: cmp dword ptr [ebp - 0x3c], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00599f42: je 0x599f4d */ if (fZ) goto L_00599f4d;
L_00599f44:; BB(0x00599f44);
    /* 00599f44: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 00599f4b: jmp 0x599f54 */ goto L_00599f54;
L_00599f4d:; BB(0x00599f4d);
    /* 00599f4d: mov dword ptr [ebp - 0x4c], 1 */ W32((u32)(r_ebp+0xffffffb4u), 0x1u);
L_00599f54:; BB(0x00599f54);
    /* 00599f54: movzx ecx, byte ptr [ebp - 0x4c] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffb4u));
    /* 00599f58: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00599f5a: je 0x599f82 */ if (fZ) goto L_00599f82;
L_00599f5c:; BB(0x00599f5c);
    /* 00599f5c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00599f5e: push 0x6b6940 */ { u32 v = 0x6b6940u; r_esp -= 4; W32(r_esp, v); }
    /* 00599f63: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x599f68u); f_00630f40();
    /* 00599f68: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00599f6b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00599f6c: push 0x6ceb8c */ { u32 v = 0x6ceb8cu; r_esp -= 4; W32(r_esp, v); }
    /* 00599f71: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x599f76u); f_00630f40();
    /* 00599f76: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00599f79: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00599f7a: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x599f7fu); f_0062ff10();
    /* 00599f7f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00599f82:; BB(0x00599f82);
    /* 00599f82: jmp 0x59a003 */ goto L_0059a003;
L_00599f84:; BB(0x00599f84);
    /* 00599f84: jmp 0x599fe5 */ goto L_00599fe5;
L_00599f86:; BB(0x00599f86);
    /* 00599f86: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00599f89: cmp dword ptr [edx], 0 */ {  u32 a = R32((u32)(r_edx)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00599f8c: jge 0x599fe5 */ if ((fS==fO)) goto L_00599fe5;
L_00599f8e:; BB(0x00599f8e);
    /* 00599f8e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00599f91: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00599f94: add esi, dword ptr [eax] */ {  u32 a = r_esi; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00599f96: mov ecx, dword ptr [0x7935a4] */ r_ecx = R32((u32)(0x7935a4u));
    /* 00599f9c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00599f9e: mov ecx, dword ptr [0x7935a4] */ r_ecx = R32((u32)(0x7935a4u));
    /* 00599fa4: mov eax, dword ptr [edx + 0x2b0] */ r_eax = R32((u32)(r_edx+0x2b0u));
    /* 00599faa: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x599facu); call_ind(t); }
    /* 00599fac: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00599fae: jge 0x599fba */ if ((fS==fO)) goto L_00599fba;
L_00599fb0:; BB(0x00599fb0);
    /* 00599fb0: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00599fb3: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00599fb5: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00599fb8: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
L_00599fba:; BB(0x00599fba);
    /* 00599fba: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00599fbd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00599fbe: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 00599fc4: call 0x597ef0 */ r_esp -= 4; W32(r_esp, 0x599fc9u); f_00597ef0();
    /* 00599fc9: cmp eax, dword ptr [ebp - 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00599fcc: jne 0x599fe5 */ if (!fZ) goto L_00599fe5;
L_00599fce:; BB(0x00599fce);
    /* 00599fce: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00599fd1: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00599fd4: add edx, dword ptr [ecx] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00599fd6: cmp edx, dword ptr [ebp - 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00599fd9: jge 0x599fe5 */ if ((fS==fO)) goto L_00599fe5;
L_00599fdb:; BB(0x00599fdb);
    /* 00599fdb: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00599fde: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00599fe0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00599fe3: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
L_00599fe5:; BB(0x00599fe5);
    /* 00599fe5: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00599fe8: cmp dword ptr [edx], 0 */ {  u32 a = R32((u32)(r_edx)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00599feb: jne 0x599fef */ if (!fZ) goto L_00599fef;
L_00599fed:; BB(0x00599fed);
    /* 00599fed: jmp 0x59a003 */ goto L_0059a003;
L_00599fef:; BB(0x00599fef);
    /* 00599fef: mov al, byte ptr [ebp + 0x10] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x10u))) & 0xffu);
    /* 00599ff2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00599ff3: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00599ff6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00599ff7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00599ffa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00599ffb: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00599ffe: call 0x5cba10 */ r_esp -= 4; W32(r_esp, 0x59a003u); f_005cba10();
L_0059a003:; BB(0x0059a003);
    /* 0059a003: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059a004: mov esp, ebp */ r_esp = r_ebp;
    /* 0059a006: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059a007: ret 0xc */ FN_RET(0x00599bf0); r_esp += 16; return;
}

void f_0059a010(void) /* FourCardPokerBet::vfunc44 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0059a010);
    /* 0059a010: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059a011: mov ebp, esp */ r_ebp = r_esp;
    /* 0059a013: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0059a016: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0059a017: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0059a01a: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 0059a020: call 0x597d30 */ r_esp -= 4; W32(r_esp, 0x59a025u); f_00597d30();
    /* 0059a025: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059a028: jne 0x59a031 */ if (!fZ) goto L_0059a031;
L_0059a02a:; BB(0x0059a02a);
    /* 0059a02a: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0059a02c: jmp 0x59a110 */ goto L_0059a110;
L_0059a031:; BB(0x0059a031);
    /* 0059a031: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0059a034: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x59a039u); f_005f5400();
    /* 0059a039: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0059a03a: mov ecx, 3 */ r_ecx = 0x3u;
    /* 0059a03f: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0059a03f, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0059a03f, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0059a041: mov esi, eax */ r_esi = r_eax;
    /* 0059a043: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 0059a049: call 0x597d30 */ r_esp -= 4; W32(r_esp, 0x59a04eu); f_00597d30();
    /* 0059a04e: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059a050: jne 0x59a106 */ if (!fZ) goto L_0059a106;
L_0059a056:; BB(0x0059a056);
    /* 0059a056: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 0059a05c: call 0x597d00 */ r_esp -= 4; W32(r_esp, 0x59a061u); f_00597d00();
    /* 0059a061: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0059a064: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059a067: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x59a06cu); f_0063aac0();
    /* 0059a06c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0059a06e: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0059a071: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059a075: je 0x59a093 */ if (fZ) goto L_0059a093;
L_0059a077:; BB(0x0059a077);
    /* 0059a077: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059a07a: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x59a07fu); f_0063aac0();
    /* 0059a07f: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0059a081: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0059a084: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059a088: je 0x59a093 */ if (fZ) goto L_0059a093;
L_0059a08a:; BB(0x0059a08a);
    /* 0059a08a: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 0059a091: jmp 0x59a09a */ goto L_0059a09a;
L_0059a093:; BB(0x0059a093);
    /* 0059a093: mov dword ptr [ebp - 0x1c], 1 */ W32((u32)(r_ebp+0xffffffe4u), 0x1u);
L_0059a09a:; BB(0x0059a09a);
    /* 0059a09a: movzx ecx, byte ptr [ebp - 0x1c] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffe4u));
    /* 0059a09e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059a0a0: je 0x59a106 */ if (fZ) goto L_0059a106;
L_0059a0a2:; BB(0x0059a0a2);
    /* 0059a0a2: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0059a0a5: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x59a0aau); f_005f5400();
    /* 0059a0aa: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0059a0ab: mov ecx, 3 */ r_ecx = 0x3u;
    /* 0059a0b0: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0059a0b0, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0059a0b0, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0059a0b2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059a0b4: je 0x59a0d8 */ if (fZ) goto L_0059a0d8;
L_0059a0b6:; BB(0x0059a0b6);
    /* 0059a0b6: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 0059a0bc: call 0x597d00 */ r_esp -= 4; W32(r_esp, 0x59a0c1u); f_00597d00();
    /* 0059a0c1: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0059a0c4: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0059a0c7: mov al, byte ptr [edx + 0x4a0] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x4a0u))) & 0xffu);
    /* 0059a0cd: mov byte ptr [ebp - 0x11], al */ W8((u32)(r_ebp+0xffffffefu), (u8)r_eax);
    /* 0059a0d0: movzx ecx, byte ptr [ebp - 0x11] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffefu));
    /* 0059a0d4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059a0d6: je 0x59a0fd */ if (fZ) goto L_0059a0fd;
L_0059a0d8:; BB(0x0059a0d8);
    /* 0059a0d8: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0059a0db: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x59a0e0u); f_005f5400();
    /* 0059a0e0: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0059a0e1: mov ecx, 3 */ r_ecx = 0x3u;
    /* 0059a0e6: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0059a0e6, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0059a0e6, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0059a0e8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059a0ea: jne 0x59a106 */ if (!fZ) goto L_0059a106;
L_0059a0ec:; BB(0x0059a0ec);
    /* 0059a0ec: mov edx, dword ptr [0x7935a8] */ r_edx = R32((u32)(0x7935a8u));
    /* 0059a0f2: movzx eax, byte ptr [edx + 0x12c] */ r_eax = (u32)R8((u32)(r_edx+0x12cu));
    /* 0059a0f9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059a0fb: je 0x59a106 */ if (fZ) goto L_0059a106;
L_0059a0fd:; BB(0x0059a0fd);
    /* 0059a0fd: mov dword ptr [ebp - 0x20], 1 */ W32((u32)(r_ebp+0xffffffe0u), 0x1u);
    /* 0059a104: jmp 0x59a10d */ goto L_0059a10d;
L_0059a106:; BB(0x0059a106);
    /* 0059a106: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_0059a10d:; BB(0x0059a10d);
    /* 0059a10d: mov al, byte ptr [ebp - 0x20] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffe0u))) & 0xffu);
L_0059a110:; BB(0x0059a110);
    /* 0059a110: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059a111: mov esp, ebp */ r_esp = r_ebp;
    /* 0059a113: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059a114: ret  */ FN_RET(0x0059a010); r_esp += 4; return;
}

void f_0059a120(void) /* FourCardPokerBet::vfunc48 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0059a120);
    /* 0059a120: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059a121: mov ebp, esp */ r_ebp = r_esp;
    /* 0059a123: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059a124: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0059a127: cmp dword ptr [0x79359c], 0 */ {  u32 a = R32((u32)(0x79359cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059a12e: je 0x59a148 */ if (fZ) goto L_0059a148;
L_0059a130:; BB(0x0059a130);
    /* 0059a130: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059a133: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x59a138u); f_005f5400();
    /* 0059a138: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059a139: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0059a13c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059a13d: mov ecx, dword ptr [0x79359c] */ r_ecx = R32((u32)(0x79359cu));
    /* 0059a143: call 0x592090 */ r_esp -= 4; W32(r_esp, 0x59a148u); f_00592090();
L_0059a148:; BB(0x0059a148);
    /* 0059a148: mov esp, ebp */ r_esp = r_ebp;
    /* 0059a14a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059a14b: ret 8 */ FN_RET(0x0059a120); r_esp += 12; return;
}

