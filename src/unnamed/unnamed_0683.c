#include "protos.h"

void f_00683040(void) /* sub_683040 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00683040);
    /* 00683040: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00683044: imul eax, dword ptr [esp + 0xc] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_esp+0xcu)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00683049: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068304a: call dword ptr [0x6b22b0] */ { u32 t = R32((u32)(0x6b22b0u)); r_esp -= 4; W32(r_esp, 0x683050u); call_ind(t); }
    /* 00683050: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00683053: ret  */ FN_RET(0x00683040); r_esp += 4; return;
}

void f_00683060(void) /* sub_683060 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00683060);
    /* 00683060: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00683064: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00683065: call dword ptr [0x6b22bc] */ { u32 t = R32((u32)(0x6b22bcu)); r_esp -= 4; W32(r_esp, 0x68306bu); call_ind(t); }
    /* 0068306b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068306c: ret  */ FN_RET(0x00683060); r_esp += 4; return;
}

void f_00683070(void) /* sub_683070 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00683070);
    /* 00683070: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00683073: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00683074: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00683075: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00683076: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00683077: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 0068307b: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 0068307e: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00683081: mov ebx, dword ptr [eax + 0x38] */ r_ebx = R32((u32)(r_eax+0x38u));
    /* 00683084: mov ebp, dword ptr [ecx] */ r_ebp = R32((u32)(r_ecx));
    /* 00683086: sub ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00683089: lea edx, [edx + ebp - 5] */ r_edx = (u32)(r_edx+r_ebp+0xfffffffbu);
    /* 0068308d: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 00683091: mov esi, dword ptr [ecx + 0xc] */ r_esi = R32((u32)(r_ecx+0xcu));
    /* 00683094: mov ecx, dword ptr [ecx + 0x10] */ r_ecx = R32((u32)(r_ecx+0x10u));
    /* 00683097: mov edx, ecx */ r_edx = r_ecx;
    /* 00683099: sub edx, dword ptr [esp + 0x54] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x54u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0068309d: sub esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 006830a0: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006830a2: lea ecx, [ecx + esi - 0x101] */ r_ecx = (u32)(r_ecx+r_esi+0xfffffeffu);
    /* 006830a9: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 006830ad: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 006830b0: mov dword ptr [esp + 0x2c], ecx */ W32((u32)(r_esp+0x2cu), r_ecx);
    /* 006830b4: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 006830b7: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 006830bb: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 006830be: mov dword ptr [esp + 0x3c], ecx */ W32((u32)(r_esp+0x3cu), r_ecx);
    /* 006830c2: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 006830c5: mov dword ptr [esp + 0x44], edx */ W32((u32)(r_esp+0x44u), r_edx);
    /* 006830c9: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 006830cc: mov dword ptr [esp + 0x40], ecx */ W32((u32)(r_esp+0x40u), r_ecx);
    /* 006830d0: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 006830d3: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 006830d7: mov dword ptr [esp + 0x24], ecx */ W32((u32)(r_esp+0x24u), r_ecx);
    /* 006830db: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 006830de: mov edx, 1 */ r_edx = 0x1u;
    /* 006830e3: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r; fC = (c <= 32) ? ((a >> (32 - c)) & 1) : 0; fO = ((r >> 31) & 1) ^ fC; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 006830e5: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 006830e8: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 006830ec: mov edi, dword ptr [eax + 0x3c] */ r_edi = R32((u32)(r_eax+0x3cu));
    /* 006830ef: mov dword ptr [esp + 0x54], 1 */ W32((u32)(r_esp+0x54u), 0x1u);
    /* 006830f7: mov eax, dword ptr [esp + 0x54] */ r_eax = R32((u32)(r_esp+0x54u));
    /* 006830fb: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 006830fd: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00683100: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 00683104: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 00683108: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0068310b: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0068310f: nop  */ ;
L_00683110:; BB(0x00683110);
    /* 00683110: cmp edi, 0xf */ {  u32 a = r_edi; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00683113: jae 0x683139 */ if (!fC) goto L_00683139;
L_00683115:; BB(0x00683115);
    /* 00683115: movzx eax, byte ptr [ebp + 1] */ r_eax = (u32)R8((u32)(r_ebp+0x1u));
    /* 00683119: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068311c: mov ecx, edi */ r_ecx = r_edi;
    /* 0068311e: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00683120: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00683123: add edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00683126: mov ecx, edi */ r_ecx = r_edi;
    /* 00683128: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068312a: movzx eax, byte ptr [ebp] */ r_eax = (u32)R8((u32)(r_ebp));
    /* 0068312e: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00683130: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 00683134: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00683136: add edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_00683139:; BB(0x00683139);
    /* 00683139: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 0068313d: and edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0068313f: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 00683142: mov edx, eax */ r_edx = r_eax;
    /* 00683144: shr edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; fO = (a >> 31) & 1; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 00683147: movzx ecx, dl */ r_ecx = (u32)(u8)r_edx;
    /* 0068314a: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0068314d: shr ebx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 0068314f: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00683151: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00683153: je 0x683198 */ if (fZ) goto L_00683198;
L_00683155:; BB(0x00683155);
    /* 00683155: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00683158: jne 0x6831a5 */ if (!fZ) goto L_006831a5;
L_0068315a:; BB(0x0068315a);
    /* 0068315a: test dl, 0x40 */ {  u32 a = (u8)r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 0068315d: jne 0x6834aa */ if (!fZ) goto L_006834aa;
L_00683163:; BB(0x00683163);
    /* 00683163: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00683168: mov dword ptr [esp + 0x54], ecx */ W32((u32)(r_esp+0x54u), r_ecx);
    /* 0068316c: mov ecx, edx */ r_ecx = r_edx;
    /* 0068316e: mov edx, dword ptr [esp + 0x54] */ r_edx = R32((u32)(r_esp+0x54u));
    /* 00683172: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00683174: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00683177: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0068317a: and edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0068317c: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0068317e: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 00683182: mov eax, dword ptr [eax + edx*4] */ r_eax = R32((u32)(r_eax+r_edx*4));
    /* 00683185: mov ecx, eax */ r_ecx = r_eax;
    /* 00683187: shr ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; fO = (a >> 31) & 1; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 0068318a: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 0068318d: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00683190: shr ebx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 00683192: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00683194: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00683196: jne 0x683155 */ if (!fZ) goto L_00683155;
L_00683198:; BB(0x00683198);
    /* 00683198: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0068319b: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0068319e: mov byte ptr [esi], al */ W8((u32)(r_esi), (u8)r_eax);
    /* 006831a0: jmp 0x683405 */ goto L_00683405;
L_006831a5:; BB(0x006831a5);
    /* 006831a5: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006831a8: and edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 006831ab: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 006831af: je 0x6831df */ if (fZ) goto L_006831df;
L_006831b1:; BB(0x006831b1);
    /* 006831b1: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006831b3: jae 0x6831c9 */ if (!fC) goto L_006831c9;
L_006831b5:; BB(0x006831b5);
    /* 006831b5: movzx eax, byte ptr [ebp + 1] */ r_eax = (u32)R8((u32)(r_ebp+0x1u));
    /* 006831b9: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006831bc: mov ecx, edi */ r_ecx = r_edi;
    /* 006831be: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 006831c0: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 006831c4: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006831c6: add edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_006831c9:; BB(0x006831c9);
    /* 006831c9: mov ecx, edx */ r_ecx = r_edx;
    /* 006831cb: mov eax, 1 */ r_eax = 0x1u;
    /* 006831d0: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 006831d2: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006831d5: and eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006831d7: add dword ptr [esp + 0x54], eax */ { u32 ad = (u32)(r_esp+0x54u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006831db: shr ebx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 006831dd: sub edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
L_006831df:; BB(0x006831df);
    /* 006831df: cmp edi, 0xf */ {  u32 a = r_edi; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006831e2: jae 0x683208 */ if (!fC) goto L_00683208;
L_006831e4:; BB(0x006831e4);
    /* 006831e4: movzx edx, byte ptr [ebp + 1] */ r_edx = (u32)R8((u32)(r_ebp+0x1u));
    /* 006831e8: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006831eb: movzx eax, byte ptr [ebp + 1] */ r_eax = (u32)R8((u32)(r_ebp+0x1u));
    /* 006831ef: mov ecx, edi */ r_ecx = r_edi;
    /* 006831f1: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006831f4: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 006831f6: add edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006831f9: mov ecx, edi */ r_ecx = r_edi;
    /* 006831fb: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 006831fd: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006831ff: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 00683203: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00683205: add edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_00683208:; BB(0x00683208);
    /* 00683208: mov ecx, dword ptr [esp + 0x30] */ r_ecx = R32((u32)(r_esp+0x30u));
    /* 0068320c: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 00683210: and ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00683212: mov edx, dword ptr [edx + ecx*4] */ r_edx = R32((u32)(r_edx+r_ecx*4));
    /* 00683215: mov eax, edx */ r_eax = r_edx;
    /* 00683217: shr eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; fO = (a >> 31) & 1; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 0068321a: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0068321d: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 00683220: shr ebx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 00683222: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00683224: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00683226: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 0068322a: jne 0x68326b */ if (!fZ) goto L_0068326b;
L_0068322c:; BB(0x0068322c);
    /* 0068322c: lea esp, [esp] */ r_esp = (u32)(r_esp);
L_00683230:; BB(0x00683230);
    /* 00683230: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 00683232: jne 0x68349d */ if (!fZ) goto L_0068349d;
L_00683238:; BB(0x00683238);
    /* 00683238: mov ecx, eax */ r_ecx = r_eax;
    /* 0068323a: movzx eax, word ptr [esp + 0x1e] */ r_eax = (u32)R16((u32)(r_esp+0x1eu));
    /* 0068323f: mov edx, 1 */ r_edx = 0x1u;
    /* 00683244: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00683246: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 0068324a: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0068324d: and edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0068324f: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00683251: mov edx, dword ptr [ecx + edx*4] */ r_edx = R32((u32)(r_ecx+r_edx*4));
    /* 00683254: mov eax, edx */ r_eax = r_edx;
    /* 00683256: shr eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; fO = (a >> 31) & 1; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 00683259: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0068325c: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 0068325f: shr ebx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 00683261: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00683263: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00683265: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 00683269: je 0x683230 */ if (fZ) goto L_00683230;
L_0068326b:; BB(0x0068326b);
    /* 0068326b: shr edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0068326e: and eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00683271: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00683273: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 00683277: jae 0x6832a5 */ if (!fC) goto L_006832a5;
L_00683279:; BB(0x00683279);
    /* 00683279: movzx edx, byte ptr [ebp + 1] */ r_edx = (u32)R8((u32)(r_ebp+0x1u));
    /* 0068327d: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00683280: mov ecx, edi */ r_ecx = r_edi;
    /* 00683282: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00683284: add edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00683287: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 0068328b: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0068328d: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0068328f: jae 0x6832a5 */ if (!fC) goto L_006832a5;
L_00683291:; BB(0x00683291);
    /* 00683291: movzx edx, byte ptr [ebp + 1] */ r_edx = (u32)R8((u32)(r_ebp+0x1u));
    /* 00683295: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00683298: mov ecx, edi */ r_ecx = r_edi;
    /* 0068329a: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0068329c: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 006832a0: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006832a2: add edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_006832a5:; BB(0x006832a5);
    /* 006832a5: mov ecx, 1 */ r_ecx = 0x1u;
    /* 006832aa: mov edx, ecx */ r_edx = r_ecx;
    /* 006832ac: mov ecx, eax */ r_ecx = r_eax;
    /* 006832ae: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 006832b0: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 006832b2: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006832b5: and edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 006832b7: mov ecx, edx */ r_ecx = r_edx;
    /* 006832b9: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 006832bd: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006832bf: mov ecx, eax */ r_ecx = r_eax;
    /* 006832c1: mov eax, esi */ r_eax = r_esi;
    /* 006832c3: sub eax, dword ptr [esp + 0x38] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x38u)); u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006832c7: shr ebx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 006832c9: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006832cb: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 006832cf: jbe 0x683424 */ if ((fC||fZ)) goto L_00683424;
L_006832d5:; BB(0x006832d5);
    /* 006832d5: mov ebp, edx */ r_ebp = r_edx;
    /* 006832d7: sub ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 006832d9: cmp ebp, dword ptr [esp + 0x3c] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x3cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006832dd: ja 0x683482 */ if ((!fC&&!fZ)) goto L_00683482;
L_006832e3:; BB(0x006832e3);
    /* 006832e3: mov ecx, dword ptr [esp + 0x40] */ r_ecx = R32((u32)(r_esp+0x40u));
    /* 006832e7: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 006832eb: add ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006832ee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006832f0: mov dword ptr [esp + 0x34], ecx */ W32((u32)(r_esp+0x34u), r_ecx);
    /* 006832f4: jne 0x683322 */ if (!fZ) goto L_00683322;
L_006832f6:; BB(0x006832f6);
    /* 006832f6: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 006832fa: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006832fc: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006832fe: cmp ebp, dword ptr [esp + 0x54] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x54u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00683302: jae 0x68339a */ if (!fC) goto L_0068339a;
L_00683308:; BB(0x00683308);
    /* 00683308: sub dword ptr [esp + 0x54], ebp */ { u32 ad = (u32)(r_esp+0x54u);  u32 a = R32(ad); u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 0068330c: lea esp, [esp] */ r_esp = (u32)(r_esp);
L_00683310:; BB(0x00683310);
    /* 00683310: mov al, byte ptr [ecx + 1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx+0x1u))) & 0xffu);
    /* 00683313: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00683316: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00683319: sub ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); }
    /* 0068331c: mov byte ptr [esi], al */ W8((u32)(r_esi), (u8)r_eax);
    /* 0068331e: jne 0x683310 */ if (!fZ) goto L_00683310;
L_00683320:; BB(0x00683320);
    /* 00683320: jmp 0x683396 */ goto L_00683396;
L_00683322:; BB(0x00683322);
    /* 00683322: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00683324: jae 0x683378 */ if (!fC) goto L_00683378;
L_00683326:; BB(0x00683326);
    /* 00683326: mov edx, eax */ r_edx = r_eax;
    /* 00683328: sub edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0068332a: add edx, dword ptr [esp + 0x28] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x28u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0068332e: sub ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00683330: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00683332: cmp ebp, dword ptr [esp + 0x54] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x54u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00683336: jae 0x68339a */ if (!fC) goto L_0068339a;
L_00683338:; BB(0x00683338);
    /* 00683338: sub dword ptr [esp + 0x54], ebp */ { u32 ad = (u32)(r_esp+0x54u);  u32 a = R32(ad); u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 0068333c: lea esp, [esp] */ r_esp = (u32)(r_esp);
L_00683340:; BB(0x00683340);
    /* 00683340: mov dl, byte ptr [ecx + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x1u))) & 0xffu);
    /* 00683343: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00683346: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00683349: sub ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); }
    /* 0068334c: mov byte ptr [esi], dl */ W8((u32)(r_esi), (u8)r_edx);
    /* 0068334e: jne 0x683340 */ if (!fZ) goto L_00683340;
L_00683350:; BB(0x00683350);
    /* 00683350: cmp eax, dword ptr [esp + 0x54] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x54u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00683354: mov ecx, dword ptr [esp + 0x34] */ r_ecx = R32((u32)(r_esp+0x34u));
    /* 00683358: jae 0x68339a */ if (!fC) goto L_0068339a;
L_0068335a:; BB(0x0068335a);
    /* 0068335a: sub dword ptr [esp + 0x54], eax */ { u32 ad = (u32)(r_esp+0x54u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 0068335e: mov ebp, eax */ r_ebp = r_eax;
L_00683360:; BB(0x00683360);
    /* 00683360: mov al, byte ptr [ecx + 1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx+0x1u))) & 0xffu);
    /* 00683363: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00683366: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00683369: sub ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); }
    /* 0068336c: mov byte ptr [esi], al */ W8((u32)(r_esi), (u8)r_eax);
    /* 0068336e: jne 0x683360 */ if (!fZ) goto L_00683360;
L_00683370:; BB(0x00683370);
    /* 00683370: mov ecx, esi */ r_ecx = r_esi;
    /* 00683372: sub ecx, dword ptr [esp + 0x1c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0x1cu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00683376: jmp 0x68339a */ goto L_0068339a;
L_00683378:; BB(0x00683378);
    /* 00683378: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0068337a: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0068337c: cmp ebp, dword ptr [esp + 0x54] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x54u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00683380: jae 0x68339a */ if (!fC) goto L_0068339a;
L_00683382:; BB(0x00683382);
    /* 00683382: sub dword ptr [esp + 0x54], ebp */ { u32 ad = (u32)(r_esp+0x54u);  u32 a = R32(ad); u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
L_00683386:; BB(0x00683386);
    /* 00683386: mov al, byte ptr [ecx + 1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx+0x1u))) & 0xffu);
    /* 00683389: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0068338c: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0068338f: sub ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); }
    /* 00683392: mov byte ptr [esi], al */ W8((u32)(r_esi), (u8)r_eax);
    /* 00683394: jne 0x683386 */ if (!fZ) goto L_00683386;
L_00683396:; BB(0x00683396);
    /* 00683396: mov ecx, esi */ r_ecx = r_esi;
    /* 00683398: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
L_0068339a:; BB(0x0068339a);
    /* 0068339a: mov eax, dword ptr [esp + 0x54] */ r_eax = R32((u32)(r_esp+0x54u));
    /* 0068339e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006833a1: jbe 0x6833e1 */ if ((fC||fZ)) goto L_006833e1;
L_006833a3:; BB(0x006833a3);
    /* 006833a3: lea edx, [eax - 3] */ r_edx = (u32)(r_eax+0xfffffffdu);
    /* 006833a6: mov eax, 0xaaaaaaab */ r_eax = 0xaaaaaaabu;
    /* 006833ab: mul edx */ { u64 t = (u64)r_eax * r_edx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 006833ad: mov ebp, edx */ r_ebp = r_edx;
    /* 006833af: shr ebp, 1 */ { u32 c = (1u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebp = r;  } }
    /* 006833b1: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_006833b4:; BB(0x006833b4);
    /* 006833b4: movzx eax, byte ptr [ecx + 1] */ r_eax = (u32)R8((u32)(r_ecx+0x1u));
    /* 006833b8: sub dword ptr [esp + 0x54], 3 */ { u32 ad = (u32)(r_esp+0x54u);  u32 a = R32(ad); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 006833bd: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006833c0: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006833c3: mov byte ptr [esi], al */ W8((u32)(r_esi), (u8)r_eax);
    /* 006833c5: mov dl, byte ptr [ecx + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x1u))) & 0xffu);
    /* 006833c8: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006833cb: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006833ce: mov byte ptr [esi], dl */ W8((u32)(r_esi), (u8)r_edx);
    /* 006833d0: movzx eax, byte ptr [ecx + 1] */ r_eax = (u32)R8((u32)(r_ecx+0x1u));
    /* 006833d4: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006833d7: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006833da: sub ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); }
    /* 006833dd: mov byte ptr [esi], al */ W8((u32)(r_esi), (u8)r_eax);
    /* 006833df: jne 0x6833b4 */ if (!fZ) goto L_006833b4;
L_006833e1:; BB(0x006833e1);
    /* 006833e1: mov ebp, dword ptr [esp + 0x54] */ r_ebp = R32((u32)(r_esp+0x54u));
    /* 006833e5: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006833e7: je 0x683401 */ if (fZ) goto L_00683401;
L_006833e9:; BB(0x006833e9);
    /* 006833e9: mov dl, byte ptr [ecx + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x1u))) & 0xffu);
    /* 006833ec: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006833ef: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006833f2: cmp ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006833f5: mov byte ptr [esi], dl */ W8((u32)(r_esi), (u8)r_edx);
    /* 006833f7: jbe 0x683401 */ if ((fC||fZ)) goto L_00683401;
L_006833f9:; BB(0x006833f9);
    /* 006833f9: mov al, byte ptr [ecx + 1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx+0x1u))) & 0xffu);
    /* 006833fc: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006833ff: mov byte ptr [esi], al */ W8((u32)(r_esi), (u8)r_eax);
L_00683401:; BB(0x00683401);
    /* 00683401: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
L_00683405:; BB(0x00683405);
    /* 00683405: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00683409: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0068340b: jae 0x6834d4 */ if (!fC) goto L_006834d4;
L_00683411:; BB(0x00683411);
    /* 00683411: cmp esi, dword ptr [esp + 0x2c] */ {  u32 a = r_esi; u32 b = R32((u32)(r_esp+0x2cu)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00683415: jae 0x6834d4 */ if (!fC) goto L_006834d4;
L_0068341b:; BB(0x0068341b);
    /* 0068341b: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 0068341f: jmp 0x683110 */ goto L_00683110;
L_00683424:; BB(0x00683424);
    /* 00683424: mov eax, esi */ r_eax = r_esi;
    /* 00683426: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00683428: jmp 0x683430 */ goto L_00683430;
L_00683430:; BB(0x00683430);
    /* 00683430: movzx ecx, byte ptr [eax + 1] */ r_ecx = (u32)R8((u32)(r_eax+0x1u));
    /* 00683434: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00683437: mov byte ptr [esi + 1], cl */ W8((u32)(r_esi+0x1u), (u8)r_ecx);
    /* 0068343a: mov dl, byte ptr [eax + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+0x1u))) & 0xffu);
    /* 0068343d: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00683440: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00683443: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00683446: mov byte ptr [esi], dl */ W8((u32)(r_esi), (u8)r_edx);
    /* 00683448: movzx ecx, byte ptr [eax + 1] */ r_ecx = (u32)R8((u32)(r_eax+0x1u));
    /* 0068344c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068344f: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00683452: mov byte ptr [esi], cl */ W8((u32)(r_esi), (u8)r_ecx);
    /* 00683454: mov ecx, dword ptr [esp + 0x54] */ r_ecx = R32((u32)(r_esp+0x54u));
    /* 00683458: sub ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0068345b: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0068345e: mov dword ptr [esp + 0x54], ecx */ W32((u32)(r_esp+0x54u), r_ecx);
    /* 00683462: ja 0x683430 */ if ((!fC&&!fZ)) goto L_00683430;
L_00683464:; BB(0x00683464);
    /* 00683464: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00683466: je 0x683405 */ if (fZ) goto L_00683405;
L_00683468:; BB(0x00683468);
    /* 00683468: mov dl, byte ptr [eax + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+0x1u))) & 0xffu);
    /* 0068346b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068346e: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00683471: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00683474: mov byte ptr [esi], dl */ W8((u32)(r_esi), (u8)r_edx);
    /* 00683476: jbe 0x683405 */ if ((fC||fZ)) goto L_00683405;
L_00683478:; BB(0x00683478);
    /* 00683478: mov al, byte ptr [eax + 1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x1u))) & 0xffu);
    /* 0068347b: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0068347e: mov byte ptr [esi], al */ W8((u32)(r_esi), (u8)r_eax);
    /* 00683480: jmp 0x683405 */ goto L_00683405;
L_00683482:; BB(0x00683482);
    /* 00683482: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 00683486: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 0068348a: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 0068348e: mov dword ptr [ecx + 0x18], 0x6e2c28 */ W32((u32)(r_ecx+0x18u), 0x6e2c28u);
    /* 00683495: mov dword ptr [edx], 0x1b */ W32((u32)(r_edx), 0x1bu);
    /* 0068349b: jmp 0x6834d0 */ goto L_006834d0;
L_0068349d:; BB(0x0068349d);
    /* 0068349d: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 006834a1: mov dword ptr [eax + 0x18], 0x6e2c48 */ W32((u32)(r_eax+0x18u), 0x6e2c48u);
    /* 006834a8: jmp 0x6834c6 */ goto L_006834c6;
L_006834aa:; BB(0x006834aa);
    /* 006834aa: test dl, 0x20 */ {  u32 a = (u8)r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006834ad: je 0x6834bb */ if (fZ) goto L_006834bb;
L_006834af:; BB(0x006834af);
    /* 006834af: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 006834b3: mov dword ptr [edx], 0xb */ W32((u32)(r_edx), 0xbu);
    /* 006834b9: jmp 0x6834d0 */ goto L_006834d0;
L_006834bb:; BB(0x006834bb);
    /* 006834bb: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 006834bf: mov dword ptr [eax + 0x18], 0x6e2c60 */ W32((u32)(r_eax+0x18u), 0x6e2c60u);
L_006834c6:; BB(0x006834c6);
    /* 006834c6: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 006834ca: mov dword ptr [ecx], 0x1b */ W32((u32)(r_ecx), 0x1bu);
L_006834d0:; BB(0x006834d0);
    /* 006834d0: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
L_006834d4:; BB(0x006834d4);
    /* 006834d4: mov eax, edi */ r_eax = r_edi;
    /* 006834d6: shr eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006834d9: sub ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 006834db: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006834dd: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006834df: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006834e1: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006834e3: mov ecx, edi */ r_ecx = r_edi;
    /* 006834e5: mov eax, 1 */ r_eax = 0x1u;
    /* 006834ea: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 006834ec: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 006834f0: sub edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006834f2: add edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006834f5: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006834f8: and ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 006834fa: lea eax, [ebp + 1] */ r_eax = (u32)(r_ebp+0x1u);
    /* 006834fd: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 006834ff: lea eax, [esi + 1] */ r_eax = (u32)(r_esi+0x1u);
    /* 00683502: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 00683505: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 00683509: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0068350b: add eax, 0x101 */ {  u32 a = r_eax; u32 b = 0x101u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00683510: mov dword ptr [ecx + 0x10], eax */ W32((u32)(r_ecx+0x10u), r_eax);
    /* 00683513: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00683517: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 0068351a: mov dword ptr [eax + 0x3c], edi */ W32((u32)(r_eax+0x3cu), r_edi);
    /* 0068351d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068351e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068351f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00683520: mov dword ptr [eax + 0x38], ebx */ W32((u32)(r_eax+0x38u), r_ebx);
    /* 00683523: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00683524: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00683527: ret  */ FN_RET(0x00683070); r_esp += 4; return;
}

void f_00683530(void) /* sub_683530 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00683530);
    /* 00683530: sub esp, 0x8c */ {  u32 a = r_esp; u32 b = 0x8cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00683536: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0068353b: xor eax, esp */ {  u32 a = r_eax; u32 b = r_esp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068353d: mov dword ptr [esp + 0x88], eax */ W32((u32)(r_esp+0x88u), r_eax);
    /* 00683544: mov eax, dword ptr [esp + 0xa4] */ r_eax = R32((u32)(r_esp+0xa4u));
    /* 0068354b: mov edx, dword ptr [esp + 0xa0] */ r_edx = R32((u32)(r_esp+0xa0u));
    /* 00683552: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00683553: mov ebx, dword ptr [esp + 0xa0] */ r_ebx = R32((u32)(r_esp+0xa0u));
    /* 0068355a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068355b: mov ebp, dword ptr [esp + 0x9c] */ r_ebp = R32((u32)(r_esp+0x9cu));
    /* 00683562: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00683563: mov esi, dword ptr [esp + 0xa4] */ r_esi = R32((u32)(r_esp+0xa4u));
    /* 0068356a: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0068356e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00683570: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 00683572: mov dword ptr [esp + 0x50], ebp */ W32((u32)(r_esp+0x50u), r_ebp);
    /* 00683576: mov dword ptr [esp + 0x38], ebx */ W32((u32)(r_esp+0x38u), r_ebx);
    /* 0068357a: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 0068357e: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 00683582: mov dword ptr [esp + 0x58], eax */ W32((u32)(r_esp+0x58u), r_eax);
    /* 00683586: mov dword ptr [esp + 0x5c], eax */ W32((u32)(r_esp+0x5cu), r_eax);
    /* 0068358a: mov dword ptr [esp + 0x60], eax */ W32((u32)(r_esp+0x60u), r_eax);
    /* 0068358e: mov dword ptr [esp + 0x64], eax */ W32((u32)(r_esp+0x64u), r_eax);
    /* 00683592: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 00683596: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 0068359a: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 0068359e: jbe 0x6835b6 */ if ((fC||fZ)) goto L_006835b6;
L_006835a0:; BB(0x006835a0);
    /* 006835a0: movzx ecx, word ptr [ebp + eax*2] */ r_ecx = (u32)R16((u32)(r_ebp+r_eax*2));
    /* 006835a5: add word ptr [esp + ecx*2 + 0x54], 1 */ { u32 ad = (u32)(r_esp+r_ecx*2+0x54u);  u32 a = R16(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 006835ab: lea ecx, [esp + ecx*2 + 0x54] */ r_ecx = (u32)(r_esp+r_ecx*2+0x54u);
    /* 006835af: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006835b2: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006835b4: jb 0x6835a0 */ if (fC) goto L_006835a0;
L_006835b6:; BB(0x006835b6);
    /* 006835b6: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006835b8: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 006835bc: mov ecx, 0xf */ r_ecx = 0xfu;
L_006835c1:; BB(0x006835c1);
    /* 006835c1: cmp word ptr [esp + ecx*2 + 0x54], 0 */ {  u32 a = R16((u32)(r_esp+r_ecx*2+0x54u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 006835c7: jne 0x6835d1 */ if (!fZ) goto L_006835d1;
L_006835c9:; BB(0x006835c9);
    /* 006835c9: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006835cc: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006835cf: jae 0x6835c1 */ if (!fC) goto L_006835c1;
L_006835d1:; BB(0x006835d1);
    /* 006835d1: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006835d3: mov dword ptr [esp + 0x1c], ecx */ W32((u32)(r_esp+0x1cu), r_ecx);
    /* 006835d7: jbe 0x6835df */ if ((fC||fZ)) goto L_006835df;
L_006835d9:; BB(0x006835d9);
    /* 006835d9: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 006835dd: mov eax, ecx */ r_eax = r_ecx;
L_006835df:; BB(0x006835df);
    /* 006835df: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006835e1: jne 0x683624 */ if (!fZ) goto L_00683624;
L_006835e3:; BB(0x006835e3);
    /* 006835e3: mov word ptr [esp + 0xe], cx */ W16((u32)(r_esp+0xeu), (u16)r_ecx);
    /* 006835e8: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 006835ea: mov byte ptr [esp + 0xc], 0x40 */ W8((u32)(r_esp+0xcu), 0x40u);
    /* 006835ef: mov byte ptr [esp + 0xd], 1 */ W8((u32)(r_esp+0xdu), 0x1u);
    /* 006835f4: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 006835f8: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 006835fa: add dword ptr [ebx], 4 */ { u32 ad = (u32)(r_ebx);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006835fd: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 006835ff: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00683600: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 00683602: add dword ptr [ebx], 4 */ { u32 ad = (u32)(r_ebx);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00683605: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00683606: mov dword ptr [edx], 1 */ W32((u32)(r_edx), 0x1u);
    /* 0068360c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068360e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068360f: mov ecx, dword ptr [esp + 0x88] */ r_ecx = R32((u32)(r_esp+0x88u));
    /* 00683616: xor ecx, esp */ {  u32 a = r_ecx; u32 b = r_esp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00683618: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x68361du); f_00686d72();
    /* 0068361d: add esp, 0x8c */ {  u32 a = r_esp; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00683623: ret  */ FN_RET(0x00683530); r_esp += 4; return;
L_00683624:; BB(0x00683624);
    /* 00683624: mov esi, 1 */ r_esi = 0x1u;
    /* 00683629: lea esp, [esp] */ r_esp = (u32)(r_esp);
L_00683630:; BB(0x00683630);
    /* 00683630: cmp word ptr [esp + esi*2 + 0x54], 0 */ {  u32 a = R16((u32)(r_esp+r_esi*2+0x54u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 00683636: jne 0x683674 */ if (!fZ) goto L_00683674;
L_00683638:; BB(0x00683638);
    /* 00683638: cmp word ptr [esp + esi*2 + 0x56], 0 */ {  u32 a = R16((u32)(r_esp+r_esi*2+0x56u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0068363e: jne 0x683662 */ if (!fZ) goto L_00683662;
L_00683640:; BB(0x00683640);
    /* 00683640: cmp word ptr [esp + esi*2 + 0x58], 0 */ {  u32 a = R16((u32)(r_esp+r_esi*2+0x58u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 00683646: jne 0x683667 */ if (!fZ) goto L_00683667;
L_00683648:; BB(0x00683648);
    /* 00683648: cmp word ptr [esp + esi*2 + 0x5a], 0 */ {  u32 a = R16((u32)(r_esp+r_esi*2+0x5au)); u32 b = 0x0u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0068364e: jne 0x68366c */ if (!fZ) goto L_0068366c;
L_00683650:; BB(0x00683650);
    /* 00683650: cmp word ptr [esp + esi*2 + 0x5c], 0 */ {  u32 a = R16((u32)(r_esp+r_esi*2+0x5cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 00683656: jne 0x683671 */ if (!fZ) goto L_00683671;
L_00683658:; BB(0x00683658);
    /* 00683658: add esi, 5 */ {  u32 a = r_esi; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0068365b: cmp esi, 0xf */ {  u32 a = r_esi; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0068365e: jbe 0x683630 */ if ((fC||fZ)) goto L_00683630;
L_00683660:; BB(0x00683660);
    /* 00683660: jmp 0x683674 */ goto L_00683674;
L_00683662:; BB(0x00683662);
    /* 00683662: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00683665: jmp 0x683674 */ goto L_00683674;
L_00683667:; BB(0x00683667);
    /* 00683667: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0068366a: jmp 0x683674 */ goto L_00683674;
L_0068366c:; BB(0x0068366c);
    /* 0068366c: add esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0068366f: jmp 0x683674 */ goto L_00683674;
L_00683671:; BB(0x00683671);
    /* 00683671: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_00683674:; BB(0x00683674);
    /* 00683674: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00683676: jae 0x68367c */ if (!fC) goto L_0068367c;
L_00683678:; BB(0x00683678);
    /* 00683678: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
L_0068367c:; BB(0x0068367c);
    /* 0068367c: mov edx, 1 */ r_edx = 0x1u;
    /* 00683681: mov eax, edx */ r_eax = r_edx;
    /* 00683683: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
L_00683684:; BB(0x00683684);
    /* 00683684: movzx edi, word ptr [esp + eax*2 + 0x58] */ r_edi = (u32)R16((u32)(r_esp+r_eax*2+0x58u));
    /* 00683689: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0068368b: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r; fS = ((r >> 31) & 1); }
    /* 0068368d: js 0x6836ab */ if (fS) goto L_006836ab;
L_0068368f:; BB(0x0068368f);
    /* 0068368f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00683692: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00683695: jbe 0x683684 */ if ((fC||fZ)) goto L_00683684;
L_00683697:; BB(0x00683697);
    /* 00683697: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00683699: mov edi, dword ptr [esp + 0xa0] */ r_edi = R32((u32)(r_esp+0xa0u));
    /* 006836a0: jle 0x6836b3 */ if ((fZ||fS!=fO)) goto L_006836b3;
L_006836a2:; BB(0x006836a2);
    /* 006836a2: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006836a4: je 0x6836ab */ if (fZ) goto L_006836ab;
L_006836a6:; BB(0x006836a6);
    /* 006836a6: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006836a9: je 0x6836b3 */ if (fZ) goto L_006836b3;
L_006836ab:; BB(0x006836ab);
    /* 006836ab: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006836ae: jmp 0x683a05 */ goto L_00683a05;
L_006836b3:; BB(0x006836b3);
    /* 006836b3: mov word ptr [esp + 0x7a], 0 */ W16((u32)(r_esp+0x7au), 0x0u);
    /* 006836ba: mov eax, 2 */ r_eax = 0x2u;
    /* 006836bf: nop  */ ;
L_006836c0:; BB(0x006836c0);
    /* 006836c0: mov cx, word ptr [esp + eax + 0x78] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_esp+r_eax+0x78u))) & 0xffffu);
    /* 006836c5: add cx, word ptr [esp + eax + 0x58] */ {  u32 a = (u16)r_ecx; u32 b = R16((u32)(r_esp+r_eax+0x58u)); u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 006836ca: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006836cd: cmp eax, 0x1e */ {  u32 a = r_eax; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006836d0: mov word ptr [esp + eax + 0x78], cx */ W16((u32)(r_esp+r_eax+0x78u), (u16)r_ecx);
    /* 006836d5: jb 0x6836c0 */ if (fC) goto L_006836c0;
L_006836d7:; BB(0x006836d7);
    /* 006836d7: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 006836db: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006836dd: cmp dword ptr [esp + 0xa8], eax */ {  u32 a = R32((u32)(r_esp+0xa8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006836e4: jbe 0x683717 */ if ((fC||fZ)) goto L_00683717;
L_006836e6:; BB(0x006836e6);
    /* 006836e6: cmp word ptr [ebp + eax*2], 0 */ {  u32 a = R16((u32)(r_ebp+r_eax*2)); u32 b = 0x0u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 006836ec: je 0x68370b */ if (fZ) goto L_0068370b;
L_006836ee:; BB(0x006836ee);
    /* 006836ee: movzx edx, word ptr [ebp + eax*2] */ r_edx = (u32)R16((u32)(r_ebp+r_eax*2));
    /* 006836f3: movzx edx, word ptr [esp + edx*2 + 0x78] */ r_edx = (u32)R16((u32)(r_esp+r_edx*2+0x78u));
    /* 006836f8: mov word ptr [ecx + edx*2], ax */ W16((u32)(r_ecx+r_edx*2), (u16)r_eax);
    /* 006836fc: movzx edx, word ptr [ebp + eax*2] */ r_edx = (u32)R16((u32)(r_ebp+r_eax*2));
    /* 00683701: add word ptr [esp + edx*2 + 0x78], 1 */ { u32 ad = (u32)(r_esp+r_edx*2+0x78u);  u32 a = R16(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 00683707: lea edx, [esp + edx*2 + 0x78] */ r_edx = (u32)(r_esp+r_edx*2+0x78u);
L_0068370b:; BB(0x0068370b);
    /* 0068370b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068370e: cmp eax, dword ptr [esp + 0xa8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0xa8u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00683715: jb 0x6836e6 */ if (fC) goto L_006836e6;
L_00683717:; BB(0x00683717);
    /* 00683717: mov eax, edi */ r_eax = r_edi;
    /* 00683719: sub eax, 0 */ {  u32 a = r_eax; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0068371c: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 00683721: je 0x683764 */ if (fZ) goto L_00683764;
L_00683723:; BB(0x00683723);
    /* 00683723: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00683726: je 0x68373e */ if (fZ) goto L_0068373e;
L_00683728:; BB(0x00683728);
    /* 00683728: mov dword ptr [esp + 0x2c], 0x6e2f10 */ W32((u32)(r_esp+0x2cu), 0x6e2f10u);
    /* 00683730: mov dword ptr [esp + 0x38], 0x6e2f50 */ W32((u32)(r_esp+0x38u), 0x6e2f50u);
    /* 00683738: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 0068373c: jmp 0x683774 */ goto L_00683774;
L_0068373e:; BB(0x0068373e);
    /* 0068373e: mov eax, 0x6e2e90 */ r_eax = 0x6e2e90u;
    /* 00683743: sub eax, 0x202 */ {  u32 a = r_eax; u32 b = 0x202u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00683748: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 0068374c: mov eax, 0x6e2ed0 */ r_eax = 0x6e2ed0u;
    /* 00683751: sub eax, 0x202 */ {  u32 a = r_eax; u32 b = 0x202u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00683756: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 0068375a: mov dword ptr [esp + 0x30], 0x100 */ W32((u32)(r_esp+0x30u), 0x100u);
    /* 00683762: jmp 0x683774 */ goto L_00683774;
L_00683764:; BB(0x00683764);
    /* 00683764: mov dword ptr [esp + 0x38], ecx */ W32((u32)(r_esp+0x38u), r_ecx);
    /* 00683768: mov dword ptr [esp + 0x2c], ecx */ W32((u32)(r_esp+0x2cu), r_ecx);
    /* 0068376c: mov dword ptr [esp + 0x30], 0x13 */ W32((u32)(r_esp+0x30u), 0x13u);
L_00683774:; BB(0x00683774);
    /* 00683774: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00683776: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 0068377a: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 0068377e: mov eax, 1 */ r_eax = 0x1u;
    /* 00683783: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00683785: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00683787: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00683789: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068378c: lea ecx, [eax - 1] */ r_ecx = (u32)(r_eax+0xffffffffu);
    /* 0068378f: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
    /* 00683793: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 00683797: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0068379b: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0068379f: mov dword ptr [esp + 0x40], ecx */ W32((u32)(r_esp+0x40u), r_ecx);
    /* 006837a3: jne 0x6837b0 */ if (!fZ) goto L_006837b0;
L_006837a5:; BB(0x006837a5);
    /* 006837a5: cmp eax, 0x5b0 */ {  u32 a = r_eax; u32 b = 0x5b0u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006837aa: jae 0x683a00 */ if (!fC) goto L_00683a00;
L_006837b0:; BB(0x006837b0);
    /* 006837b0: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 006837b4: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 006837b8: jmp 0x6837c0 */ goto L_006837c0;
L_006837c0:; BB(0x006837c0);
    /* 006837c0: mov al, byte ptr [esp + 0x18] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esp+0x18u))) & 0xffu);
    /* 006837c4: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 006837c8: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 006837cc: sub al, bl */ {  u32 a = (u8)r_eax; u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006837ce: mov byte ptr [esp + 0x11], al */ W8((u32)(r_esp+0x11u), (u8)r_eax);
    /* 006837d2: movzx eax, word ptr [esi] */ r_eax = (u32)R16((u32)(r_esi));
    /* 006837d5: movzx ecx, ax */ r_ecx = (u32)(u16)r_eax;
    /* 006837d8: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006837da: jge 0x6837e8 */ if ((fS==fO)) goto L_006837e8;
L_006837dc:; BB(0x006837dc);
    /* 006837dc: mov byte ptr [esp + 0x10], 0 */ W8((u32)(r_esp+0x10u), 0x0u);
    /* 006837e1: mov word ptr [esp + 0x12], ax */ W16((u32)(r_esp+0x12u), (u16)r_eax);
    /* 006837e6: jmp 0x683815 */ goto L_00683815;
L_006837e8:; BB(0x006837e8);
    /* 006837e8: jle 0x683809 */ if ((fZ||fS!=fO)) goto L_00683809;
L_006837ea:; BB(0x006837ea);
    /* 006837ea: movzx eax, word ptr [esi] */ r_eax = (u32)R16((u32)(r_esi));
    /* 006837ed: mov ecx, dword ptr [esp + 0x38] */ r_ecx = R32((u32)(r_esp+0x38u));
    /* 006837f1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006837f3: mov dl, byte ptr [eax + ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+r_ecx))) & 0xffu);
    /* 006837f6: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 006837fa: mov byte ptr [esp + 0x10], dl */ W8((u32)(r_esp+0x10u), (u8)r_edx);
    /* 006837fe: mov dx, word ptr [eax + ecx] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_eax+r_ecx))) & 0xffffu);
    /* 00683802: mov word ptr [esp + 0x12], dx */ W16((u32)(r_esp+0x12u), (u16)r_edx);
    /* 00683807: jmp 0x683815 */ goto L_00683815;
L_00683809:; BB(0x00683809);
    /* 00683809: mov byte ptr [esp + 0x10], 0x60 */ W8((u32)(r_esp+0x10u), 0x60u);
    /* 0068380e: mov word ptr [esp + 0x12], 0 */ W16((u32)(r_esp+0x12u), 0x0u);
L_00683815:; BB(0x00683815);
    /* 00683815: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 00683819: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 0068381d: sub ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0068381f: mov edx, 1 */ r_edx = 0x1u;
    /* 00683824: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r; fC = (c <= 32) ? ((a >> (32 - c)) & 1) : 0; fO = ((r >> 31) & 1) ^ fC; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 00683826: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00683828: mov edi, ebp */ r_edi = r_ebp;
    /* 0068382a: shr edi, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 0068382c: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 00683830: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 00683834: lea esi, [edx*4] */ r_esi = (u32)(r_edx*4);
    /* 0068383b: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0068383d: lea ecx, [ecx + edi*4] */ r_ecx = (u32)(r_ecx+r_edi*4);
    /* 00683840: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
L_00683844:; BB(0x00683844);
    /* 00683844: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00683846: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00683848: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 0068384a: mov dword ptr [ecx], edi */ W32((u32)(r_ecx), r_edi);
    /* 0068384c: jne 0x683844 */ if (!fZ) goto L_00683844;
L_0068384e:; BB(0x0068384e);
    /* 0068384e: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 00683852: lea ecx, [edx - 1] */ r_ecx = (u32)(r_edx+0xffffffffu);
    /* 00683855: mov eax, 1 */ r_eax = 0x1u;
    /* 0068385a: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0068385c: test ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068385e: je 0x683866 */ if (fZ) goto L_00683866;
L_00683860:; BB(0x00683860);
    /* 00683860: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00683862: test ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00683864: jne 0x683860 */ if (!fZ) goto L_00683860;
L_00683866:; BB(0x00683866);
    /* 00683866: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00683868: je 0x683875 */ if (fZ) goto L_00683875;
L_0068386a:; BB(0x0068386a);
    /* 0068386a: lea ecx, [eax - 1] */ r_ecx = (u32)(r_eax+0xffffffffu);
    /* 0068386d: and ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0068386f: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00683871: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00683873: jmp 0x683877 */ goto L_00683877;
L_00683875:; BB(0x00683875);
    /* 00683875: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_00683877:; BB(0x00683877);
    /* 00683877: add word ptr [esp + edx*2 + 0x58], 0xffff */ { u32 ad = (u32)(r_esp+r_edx*2+0x58u);  u32 a = R16(ad); u32 b = 0xffffu; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 0068387e: movzx eax, word ptr [esp + edx*2 + 0x58] */ r_eax = (u32)R16((u32)(r_esp+r_edx*2+0x58u));
    /* 00683883: add dword ptr [esp + 0x1c], 2 */ { u32 ad = (u32)(r_esp+0x1cu);  u32 a = R32(ad); u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00683888: test ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a & b) & 0xffffu;  fZ = (r == 0); }
    /* 0068388b: jne 0x6838aa */ if (!fZ) goto L_006838aa;
L_0068388d:; BB(0x0068388d);
    /* 0068388d: cmp edx, dword ptr [esp + 0x20] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x20u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00683891: je 0x683973 */ if (fZ) goto L_00683973;
L_00683897:; BB(0x00683897);
    /* 00683897: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 0068389b: movzx eax, word ptr [edx] */ r_eax = (u32)R16((u32)(r_edx));
    /* 0068389e: mov ecx, dword ptr [esp + 0x54] */ r_ecx = R32((u32)(r_esp+0x54u));
    /* 006838a2: movzx edx, word ptr [ecx + eax*2] */ r_edx = (u32)R16((u32)(r_ecx+r_eax*2));
    /* 006838a6: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
L_006838aa:; BB(0x006838aa);
    /* 006838aa: cmp edx, dword ptr [esp + 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x14u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006838ae: jbe 0x6837c0 */ if ((fC||fZ)) goto L_006837c0;
L_006838b4:; BB(0x006838b4);
    /* 006838b4: mov esi, dword ptr [esp + 0x40] */ r_esi = R32((u32)(r_esp+0x40u));
    /* 006838b8: and esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 006838ba: cmp esi, dword ptr [esp + 0x34] */ {  u32 a = r_esi; u32 b = R32((u32)(r_esp+0x34u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006838be: mov dword ptr [esp + 0x48], esi */ W32((u32)(r_esp+0x48u), r_esi);
    /* 006838c2: je 0x6837c0 */ if (fZ) goto L_006837c0;
L_006838c8:; BB(0x006838c8);
    /* 006838c8: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006838ca: jne 0x6838d0 */ if (!fZ) goto L_006838d0;
L_006838cc:; BB(0x006838cc);
    /* 006838cc: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
L_006838d0:; BB(0x006838d0);
    /* 006838d0: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 006838d4: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 006838d8: lea edx, [eax + ecx*4] */ r_edx = (u32)(r_eax+r_ecx*4);
    /* 006838db: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 006838df: sub ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006838e1: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 006838e5: mov eax, 1 */ r_eax = 0x1u;
    /* 006838ea: lea edx, [ebx + ecx] */ r_edx = (u32)(r_ebx+r_ecx);
    /* 006838ed: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 006838ef: cmp edx, dword ptr [esp + 0x20] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x20u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006838f3: jae 0x68391e */ if (!fC) goto L_0068391e;
L_006838f5:; BB(0x006838f5);
    /* 006838f5: lea esi, [esp + edx*2 + 0x58] */ r_esi = (u32)(r_esp+r_edx*2+0x58u);
    /* 006838f9: lea esp, [esp] */ r_esp = (u32)(r_esp);
L_00683900:; BB(0x00683900);
    /* 00683900: movzx edi, word ptr [esi] */ r_edi = (u32)R16((u32)(r_esi));
    /* 00683903: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00683905: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 00683907: jle 0x68391a */ if ((fZ||fS!=fO)) goto L_0068391a;
L_00683909:; BB(0x00683909);
    /* 00683909: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0068390c: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0068390f: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00683912: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00683914: cmp edx, dword ptr [esp + 0x20] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x20u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00683918: jb 0x683900 */ if (fC) goto L_00683900;
L_0068391a:; BB(0x0068391a);
    /* 0068391a: mov esi, dword ptr [esp + 0x48] */ r_esi = R32((u32)(r_esp+0x48u));
L_0068391e:; BB(0x0068391e);
    /* 0068391e: mov eax, 1 */ r_eax = 0x1u;
    /* 00683923: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00683925: add dword ptr [esp + 0x28], eax */ { u32 ad = (u32)(r_esp+0x28u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00683929: cmp dword ptr [esp + 0xa0], 1 */ {  u32 a = R32((u32)(r_esp+0xa0u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00683931: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 00683935: jne 0x683945 */ if (!fZ) goto L_00683945;
L_00683937:; BB(0x00683937);
    /* 00683937: cmp dword ptr [esp + 0x28], 0x5b0 */ {  u32 a = R32((u32)(r_esp+0x28u)); u32 b = 0x5b0u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0068393f: jae 0x683a00 */ if (!fC) goto L_00683a00;
L_00683945:; BB(0x00683945);
    /* 00683945: mov edx, esi */ r_edx = r_esi;
    /* 00683947: mov esi, dword ptr [esp + 0x3c] */ r_esi = R32((u32)(r_esp+0x3cu));
    /* 0068394b: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0068394d: mov byte ptr [eax + edx*4], cl */ W8((u32)(r_eax+r_edx*4), (u8)r_ecx);
    /* 00683950: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00683952: mov al, byte ptr [esp + 0x14] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esp+0x14u))) & 0xffu);
    /* 00683956: mov byte ptr [ecx + edx*4 + 1], al */ W8((u32)(r_ecx+r_edx*4+0x1u), (u8)r_eax);
    /* 0068395a: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0068395c: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 00683960: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00683962: sar ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00683965: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 00683969: mov word ptr [eax + edx*4 + 2], cx */ W16((u32)(r_eax+r_edx*4+0x2u), (u16)r_ecx);
    /* 0068396e: jmp 0x6837c0 */ goto L_006837c0;
L_00683973:; BB(0x00683973);
    /* 00683973: mov edi, dword ptr [esp + 0x3c] */ r_edi = R32((u32)(r_esp+0x3cu));
    /* 00683977: mov al, dl */ r_eax = (r_eax & 0xffffff00u) | (((u8)r_edx) & 0xffu);
    /* 00683979: sub al, bl */ {  u32 a = (u8)r_eax; u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0068397b: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068397d: mov byte ptr [esp + 0x10], 0x40 */ W8((u32)(r_esp+0x10u), 0x40u);
    /* 00683982: mov byte ptr [esp + 0x11], al */ W8((u32)(r_esp+0x11u), (u8)r_eax);
    /* 00683986: mov word ptr [esp + 0x12], 0 */ W16((u32)(r_esp+0x12u), 0x0u);
    /* 0068398d: je 0x6839e5 */ if (fZ) goto L_006839e5;
L_0068398f:; BB(0x0068398f);
    /* 0068398f: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
L_00683993:; BB(0x00683993);
    /* 00683993: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 00683995: je 0x6839b5 */ if (fZ) goto L_006839b5;
L_00683997:; BB(0x00683997);
    /* 00683997: mov ecx, dword ptr [esp + 0x40] */ r_ecx = R32((u32)(r_esp+0x40u));
    /* 0068399b: and ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0068399d: cmp ecx, dword ptr [esp + 0x34] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0x34u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006839a1: je 0x6839b5 */ if (fZ) goto L_006839b5;
L_006839a3:; BB(0x006839a3);
    /* 006839a3: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 006839a7: mov esi, dword ptr [edi] */ r_esi = R32((u32)(r_edi));
    /* 006839a9: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 006839ab: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 006839af: mov byte ptr [esp + 0x11], al */ W8((u32)(r_esp+0x11u), (u8)r_eax);
    /* 006839b3: mov edx, eax */ r_edx = r_eax;
L_006839b5:; BB(0x006839b5);
    /* 006839b5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006839b7: mov eax, ebp */ r_eax = r_ebp;
    /* 006839b9: shr eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; fO = (a >> 31) & 1; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 006839bb: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 006839bf: mov dword ptr [esi + eax*4], ecx */ W32((u32)(r_esi+r_eax*4), r_ecx);
    /* 006839c2: lea ecx, [edx - 1] */ r_ecx = (u32)(r_edx+0xffffffffu);
    /* 006839c5: mov eax, 1 */ r_eax = 0x1u;
    /* 006839ca: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 006839cc: test ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006839ce: je 0x6839d6 */ if (fZ) goto L_006839d6;
L_006839d0:; BB(0x006839d0);
    /* 006839d0: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006839d2: test ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006839d4: jne 0x6839d0 */ if (!fZ) goto L_006839d0;
L_006839d6:; BB(0x006839d6);
    /* 006839d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006839d8: je 0x6839e5 */ if (fZ) goto L_006839e5;
L_006839da:; BB(0x006839da);
    /* 006839da: lea ecx, [eax - 1] */ r_ecx = (u32)(r_eax+0xffffffffu);
    /* 006839dd: and ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 006839df: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 006839e1: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006839e3: jne 0x683993 */ if (!fZ) goto L_00683993;
L_006839e5:; BB(0x006839e5);
    /* 006839e5: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 006839e9: mov ecx, dword ptr [esp + 0x4c] */ r_ecx = R32((u32)(r_esp+0x4cu));
    /* 006839ed: lea eax, [edx*4] */ r_eax = (u32)(r_edx*4);
    /* 006839f4: add dword ptr [edi], eax */ { u32 ad = (u32)(r_edi);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006839f6: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 006839fa: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 006839fc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006839fe: jmp 0x683a05 */ goto L_00683a05;
L_00683a00:; BB(0x00683a00);
    /* 00683a00: mov eax, 1 */ r_eax = 0x1u;
L_00683a05:; BB(0x00683a05);
    /* 00683a05: mov ecx, dword ptr [esp + 0x98] */ r_ecx = R32((u32)(r_esp+0x98u));
    /* 00683a0c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00683a0d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00683a0e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00683a0f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00683a10: xor ecx, esp */ {  u32 a = r_ecx; u32 b = r_esp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00683a12: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x683a17u); f_00686d72();
    /* 00683a17: add esp, 0x8c */ {  u32 a = r_esp; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00683a1d: ret  */ FN_RET(0x00683530); r_esp += 4; return;
}

void f_00683a20(void) /* sub_683A20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00683a20);
    /* 00683a20: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00683a24: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00683a25: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 00683a29: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00683a2a: mov edi, ecx */ r_edi = r_ecx;
    /* 00683a2c: shr edi, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 00683a2f: and ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00683a35: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00683a38: jne 0x683a6b */ if (!fZ) goto L_00683a6b;
L_00683a3a:; BB(0x00683a3a);
    /* 00683a3a: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00683a3e: movzx edx, byte ptr [eax] */ r_edx = (u32)R8((u32)(r_eax));
    /* 00683a41: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00683a43: cmp ecx, 0xfff1 */ {  u32 a = r_ecx; u32 b = 0xfff1u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00683a49: jb 0x683a51 */ if (fC) goto L_00683a51;
L_00683a4b:; BB(0x00683a4b);
    /* 00683a4b: sub ecx, 0xfff1 */ {  u32 a = r_ecx; u32 b = 0xfff1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
L_00683a51:; BB(0x00683a51);
    /* 00683a51: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00683a53: cmp edi, 0xfff1 */ {  u32 a = r_edi; u32 b = 0xfff1u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00683a59: jb 0x683a61 */ if (fC) goto L_00683a61;
L_00683a5b:; BB(0x00683a5b);
    /* 00683a5b: sub edi, 0xfff1 */ {  u32 a = r_edi; u32 b = 0xfff1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
L_00683a61:; BB(0x00683a61);
    /* 00683a61: mov eax, edi */ r_eax = r_edi;
    /* 00683a63: shl eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00683a66: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00683a67: or eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00683a69: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00683a6a: ret  */ FN_RET(0x00683a20); r_esp += 4; return;
L_00683a6b:; BB(0x00683a6b);
    /* 00683a6b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00683a6c: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 00683a70: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00683a72: jne 0x683a7d */ if (!fZ) goto L_00683a7d;
L_00683a74:; BB(0x00683a74);
    /* 00683a74: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00683a75: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00683a76: mov eax, 1 */ r_eax = 0x1u;
    /* 00683a7b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00683a7c: ret  */ FN_RET(0x00683a20); r_esp += 4; return;
L_00683a7d:; BB(0x00683a7d);
    /* 00683a7d: cmp ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00683a80: jae 0x683ac1 */ if (!fC) goto L_00683ac1;
L_00683a82:; BB(0x00683a82);
    /* 00683a82: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00683a84: je 0x683a97 */ if (fZ) goto L_00683a97;
L_00683a86:; BB(0x00683a86);
    /* 00683a86: movzx eax, byte ptr [esi] */ r_eax = (u32)R8((u32)(r_esi));
    /* 00683a89: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00683a8b: sub ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00683a8e: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00683a91: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00683a93: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00683a95: jne 0x683a86 */ if (!fZ) goto L_00683a86;
L_00683a97:; BB(0x00683a97);
    /* 00683a97: cmp ecx, 0xfff1 */ {  u32 a = r_ecx; u32 b = 0xfff1u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00683a9d: jb 0x683aa5 */ if (fC) goto L_00683aa5;
L_00683a9f:; BB(0x00683a9f);
    /* 00683a9f: sub ecx, 0xfff1 */ {  u32 a = r_ecx; u32 b = 0xfff1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
L_00683aa5:; BB(0x00683aa5);
    /* 00683aa5: mov eax, 0x80078071 */ r_eax = 0x80078071u;
    /* 00683aaa: mul edi */ { u64 t = (u64)r_eax * r_edi; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 00683aac: shr edx, 0xf */ { u32 c = (15u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00683aaf: mov eax, edx */ r_eax = r_edx;
    /* 00683ab1: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00683ab4: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00683ab6: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00683ab8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00683ab9: shl eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00683abc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00683abd: or eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00683abf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00683ac0: ret  */ FN_RET(0x00683a20); r_esp += 4; return;
L_00683ac1:; BB(0x00683ac1);
    /* 00683ac1: cmp ebx, 0x15b0 */ {  u32 a = r_ebx; u32 b = 0x15b0u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00683ac7: jb 0x683ba9 */ if (fC) goto L_00683ba9;
L_00683acd:; BB(0x00683acd);
    /* 00683acd: mov eax, 0x5e6ea9af */ r_eax = 0x5e6ea9afu;
    /* 00683ad2: mul ebx */ { u64 t = (u64)r_eax * r_ebx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 00683ad4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00683ad5: mov ebp, edx */ r_ebp = r_edx;
    /* 00683ad7: shr ebp, 0xb */ { u32 c = (11u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebp = r;  } }
    /* 00683ada: lea ebx, [ebx] */ r_ebx = (u32)(r_ebx);
L_00683ae0:; BB(0x00683ae0);
    /* 00683ae0: sub ebx, 0x15b0 */ {  u32 a = r_ebx; u32 b = 0x15b0u; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00683ae6: mov eax, 0x15b */ r_eax = 0x15bu;
    /* 00683aeb: jmp 0x683af0 */ goto L_00683af0;
L_00683af0:; BB(0x00683af0);
    /* 00683af0: movzx edx, byte ptr [esi] */ r_edx = (u32)R8((u32)(r_esi));
    /* 00683af3: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00683af5: movzx edx, byte ptr [esi + 1] */ r_edx = (u32)R8((u32)(r_esi+0x1u));
    /* 00683af9: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00683afb: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00683afd: movzx edx, byte ptr [esi + 2] */ r_edx = (u32)R8((u32)(r_esi+0x2u));
    /* 00683b01: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00683b03: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00683b05: movzx edx, byte ptr [esi + 3] */ r_edx = (u32)R8((u32)(r_esi+0x3u));
    /* 00683b09: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00683b0b: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00683b0d: movzx edx, byte ptr [esi + 4] */ r_edx = (u32)R8((u32)(r_esi+0x4u));
    /* 00683b11: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00683b13: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00683b15: movzx edx, byte ptr [esi + 5] */ r_edx = (u32)R8((u32)(r_esi+0x5u));
    /* 00683b19: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00683b1b: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00683b1d: movzx edx, byte ptr [esi + 6] */ r_edx = (u32)R8((u32)(r_esi+0x6u));
    /* 00683b21: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00683b23: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00683b25: movzx edx, byte ptr [esi + 7] */ r_edx = (u32)R8((u32)(r_esi+0x7u));
    /* 00683b29: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00683b2b: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00683b2d: movzx edx, byte ptr [esi + 8] */ r_edx = (u32)R8((u32)(r_esi+0x8u));
    /* 00683b31: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00683b33: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00683b35: movzx edx, byte ptr [esi + 9] */ r_edx = (u32)R8((u32)(r_esi+0x9u));
    /* 00683b39: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00683b3b: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00683b3d: movzx edx, byte ptr [esi + 0xa] */ r_edx = (u32)R8((u32)(r_esi+0xau));
    /* 00683b41: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00683b43: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00683b45: movzx edx, byte ptr [esi + 0xb] */ r_edx = (u32)R8((u32)(r_esi+0xbu));
    /* 00683b49: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00683b4b: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00683b4d: movzx edx, byte ptr [esi + 0xc] */ r_edx = (u32)R8((u32)(r_esi+0xcu));
    /* 00683b51: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00683b53: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00683b55: movzx edx, byte ptr [esi + 0xd] */ r_edx = (u32)R8((u32)(r_esi+0xdu));
    /* 00683b59: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00683b5b: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00683b5d: movzx edx, byte ptr [esi + 0xe] */ r_edx = (u32)R8((u32)(r_esi+0xeu));
    /* 00683b61: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00683b63: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00683b65: movzx edx, byte ptr [esi + 0xf] */ r_edx = (u32)R8((u32)(r_esi+0xfu));
    /* 00683b69: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00683b6b: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00683b6d: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00683b6f: add esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00683b72: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00683b75: jne 0x683af0 */ if (!fZ) goto L_00683af0;
L_00683b7b:; BB(0x00683b7b);
    /* 00683b7b: mov eax, 0x80078071 */ r_eax = 0x80078071u;
    /* 00683b80: mul ecx */ { u64 t = (u64)r_eax * r_ecx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 00683b82: shr edx, 0xf */ { u32 c = (15u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00683b85: imul edx, edx, 0xffff000f */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xffff000fu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00683b8b: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00683b8d: mov eax, 0x80078071 */ r_eax = 0x80078071u;
    /* 00683b92: mul edi */ { u64 t = (u64)r_eax * r_edi; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 00683b94: shr edx, 0xf */ { u32 c = (15u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00683b97: imul edx, edx, 0xffff000f */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xffff000fu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00683b9d: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00683b9f: sub ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); }
    /* 00683ba2: jne 0x683ae0 */ if (!fZ) goto L_00683ae0;
L_00683ba8:; BB(0x00683ba8);
    /* 00683ba8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
L_00683ba9:; BB(0x00683ba9);
    /* 00683ba9: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00683bab: je 0x683c87 */ if (fZ) goto L_00683c87;
L_00683bb1:; BB(0x00683bb1);
    /* 00683bb1: cmp ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00683bb4: jb 0x683c4e */ if (fC) goto L_00683c4e;
L_00683bba:; BB(0x00683bba);
    /* 00683bba: mov eax, ebx */ r_eax = r_ebx;
    /* 00683bbc: shr eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00683bbf: nop  */ ;
L_00683bc0:; BB(0x00683bc0);
    /* 00683bc0: movzx edx, byte ptr [esi] */ r_edx = (u32)R8((u32)(r_esi));
    /* 00683bc3: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00683bc5: movzx edx, byte ptr [esi + 1] */ r_edx = (u32)R8((u32)(r_esi+0x1u));
    /* 00683bc9: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00683bcb: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00683bcd: movzx edx, byte ptr [esi + 2] */ r_edx = (u32)R8((u32)(r_esi+0x2u));
    /* 00683bd1: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00683bd3: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00683bd5: movzx edx, byte ptr [esi + 3] */ r_edx = (u32)R8((u32)(r_esi+0x3u));
    /* 00683bd9: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00683bdb: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00683bdd: movzx edx, byte ptr [esi + 4] */ r_edx = (u32)R8((u32)(r_esi+0x4u));
    /* 00683be1: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00683be3: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00683be5: movzx edx, byte ptr [esi + 5] */ r_edx = (u32)R8((u32)(r_esi+0x5u));
    /* 00683be9: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00683beb: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00683bed: movzx edx, byte ptr [esi + 6] */ r_edx = (u32)R8((u32)(r_esi+0x6u));
    /* 00683bf1: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00683bf3: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00683bf5: movzx edx, byte ptr [esi + 7] */ r_edx = (u32)R8((u32)(r_esi+0x7u));
    /* 00683bf9: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00683bfb: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00683bfd: movzx edx, byte ptr [esi + 8] */ r_edx = (u32)R8((u32)(r_esi+0x8u));
    /* 00683c01: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00683c03: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00683c05: movzx edx, byte ptr [esi + 9] */ r_edx = (u32)R8((u32)(r_esi+0x9u));
    /* 00683c09: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00683c0b: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00683c0d: movzx edx, byte ptr [esi + 0xa] */ r_edx = (u32)R8((u32)(r_esi+0xau));
    /* 00683c11: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00683c13: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00683c15: movzx edx, byte ptr [esi + 0xb] */ r_edx = (u32)R8((u32)(r_esi+0xbu));
    /* 00683c19: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00683c1b: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00683c1d: movzx edx, byte ptr [esi + 0xc] */ r_edx = (u32)R8((u32)(r_esi+0xcu));
    /* 00683c21: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00683c23: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00683c25: movzx edx, byte ptr [esi + 0xd] */ r_edx = (u32)R8((u32)(r_esi+0xdu));
    /* 00683c29: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00683c2b: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00683c2d: movzx edx, byte ptr [esi + 0xe] */ r_edx = (u32)R8((u32)(r_esi+0xeu));
    /* 00683c31: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00683c33: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00683c35: movzx edx, byte ptr [esi + 0xf] */ r_edx = (u32)R8((u32)(r_esi+0xfu));
    /* 00683c39: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00683c3b: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00683c3d: sub ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00683c40: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00683c42: add esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00683c45: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00683c48: jne 0x683bc0 */ if (!fZ) goto L_00683bc0;
L_00683c4e:; BB(0x00683c4e);
    /* 00683c4e: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00683c50: je 0x683c63 */ if (fZ) goto L_00683c63;
L_00683c52:; BB(0x00683c52);
    /* 00683c52: movzx eax, byte ptr [esi] */ r_eax = (u32)R8((u32)(r_esi));
    /* 00683c55: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00683c57: sub ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00683c5a: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00683c5d: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00683c5f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00683c61: jne 0x683c52 */ if (!fZ) goto L_00683c52;
L_00683c63:; BB(0x00683c63);
    /* 00683c63: mov eax, 0x80078071 */ r_eax = 0x80078071u;
    /* 00683c68: mul ecx */ { u64 t = (u64)r_eax * r_ecx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 00683c6a: shr edx, 0xf */ { u32 c = (15u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00683c6d: imul edx, edx, 0xffff000f */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xffff000fu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00683c73: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00683c75: mov eax, 0x80078071 */ r_eax = 0x80078071u;
    /* 00683c7a: mul edi */ { u64 t = (u64)r_eax * r_edi; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 00683c7c: shr edx, 0xf */ { u32 c = (15u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00683c7f: imul edx, edx, 0xffff000f */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xffff000fu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00683c85: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_00683c87:; BB(0x00683c87);
    /* 00683c87: mov eax, edi */ r_eax = r_edi;
    /* 00683c89: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00683c8a: shl eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00683c8d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00683c8e: or eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00683c90: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00683c91: ret  */ FN_RET(0x00683a20); r_esp += 4; return;
}

void f_00683f40(void) /* sub_683F40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00683f40);
    goto L_00683f40;
L_00683ca0:; BB(0x00683ca0);
    /* 00683ca0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00683ca1: mov esi, edx */ r_esi = r_edx;
    /* 00683ca3: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00683ca5: not eax */ r_eax = ~r_eax;
    /* 00683ca7: je 0x683cd2 */ if (fZ) goto L_00683cd2;
L_00683ca9:; BB(0x00683ca9);
    /* 00683ca9: lea esp, [esp] */ r_esp = (u32)(r_esp);
L_00683cb0:; BB(0x00683cb0);
    /* 00683cb0: test cl, 3 */ {  u32 a = (u8)r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00683cb3: je 0x683cd2 */ if (fZ) goto L_00683cd2;
L_00683cb5:; BB(0x00683cb5);
    /* 00683cb5: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 00683cb8: xor edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00683cba: and edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00683cc0: shr eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00683cc3: xor eax, dword ptr [edx*4 + 0x6e2f90] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx*4+0x6e2f90u)); u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00683cca: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00683ccd: sub esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 00683cd0: jne 0x683cb0 */ if (!fZ) goto L_00683cb0;
L_00683cd2:; BB(0x00683cd2);
    /* 00683cd2: cmp esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00683cd5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00683cd6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00683cd7: jb 0x683ebc */ if (fC) goto L_00683ebc;
L_00683cdd:; BB(0x00683cdd);
    /* 00683cdd: mov edi, esi */ r_edi = r_esi;
    /* 00683cdf: shr edi, 5 */ { u32 c = (5u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
L_00683ce2:; BB(0x00683ce2);
    /* 00683ce2: xor eax, dword ptr [ecx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx)); u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00683ce4: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00683ce7: mov edx, eax */ r_edx = r_eax;
    /* 00683ce9: shr edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00683cec: movzx ebx, ah */ r_ebx = (u32)(u8)(r_eax>>8);
    /* 00683cef: and edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00683cf5: mov edx, dword ptr [edx*4 + 0x6e3390] */ r_edx = R32((u32)(r_edx*4+0x6e3390u));
    /* 00683cfc: xor edx, dword ptr [ebx*4 + 0x6e3790] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx*4+0x6e3790u)); u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00683d03: mov ebx, eax */ r_ebx = r_eax;
    /* 00683d05: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00683d0a: shr ebx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 00683d0d: xor edx, dword ptr [ebx*4 + 0x6e2f90] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx*4+0x6e2f90u)); u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00683d14: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00683d17: xor edx, dword ptr [eax*4 + 0x6e3b90] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax*4+0x6e3b90u)); u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00683d1e: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00683d21: xor edx, dword ptr [ecx - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0xfffffff8u)); u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00683d24: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00683d27: mov eax, edx */ r_eax = r_edx;
    /* 00683d29: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00683d2c: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00683d31: mov eax, dword ptr [eax*4 + 0x6e3390] */ r_eax = R32((u32)(r_eax*4+0x6e3390u));
    /* 00683d38: movzx ebx, dh */ r_ebx = (u32)(u8)(r_edx>>8);
    /* 00683d3b: xor eax, dword ptr [ebx*4 + 0x6e3790] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx*4+0x6e3790u)); u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00683d42: mov ebx, edx */ r_ebx = r_edx;
    /* 00683d44: and edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00683d4a: shr ebx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 00683d4d: xor eax, dword ptr [ebx*4 + 0x6e2f90] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx*4+0x6e2f90u)); u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00683d54: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00683d57: xor eax, dword ptr [edx*4 + 0x6e3b90] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx*4+0x6e3b90u)); u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00683d5e: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00683d61: xor eax, dword ptr [ecx - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0xfffffff0u)); u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00683d64: mov edx, eax */ r_edx = r_eax;
    /* 00683d66: shr edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00683d69: movzx ebx, ah */ r_ebx = (u32)(u8)(r_eax>>8);
    /* 00683d6c: and edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00683d72: mov edx, dword ptr [edx*4 + 0x6e3390] */ r_edx = R32((u32)(r_edx*4+0x6e3390u));
    /* 00683d79: xor edx, dword ptr [ebx*4 + 0x6e3790] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx*4+0x6e3790u)); u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00683d80: mov ebx, eax */ r_ebx = r_eax;
    /* 00683d82: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00683d87: shr ebx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 00683d8a: xor edx, dword ptr [ebx*4 + 0x6e2f90] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx*4+0x6e2f90u)); u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00683d91: xor edx, dword ptr [eax*4 + 0x6e3b90] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax*4+0x6e3b90u)); u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00683d98: xor edx, dword ptr [ecx - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0xfffffff4u)); u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00683d9b: mov eax, edx */ r_eax = r_edx;
    /* 00683d9d: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00683da0: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00683da5: mov eax, dword ptr [eax*4 + 0x6e3390] */ r_eax = R32((u32)(r_eax*4+0x6e3390u));
    /* 00683dac: movzx ebx, dh */ r_ebx = (u32)(u8)(r_edx>>8);
    /* 00683daf: xor eax, dword ptr [ebx*4 + 0x6e3790] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx*4+0x6e3790u)); u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00683db6: mov ebx, edx */ r_ebx = r_edx;
    /* 00683db8: and edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00683dbe: shr ebx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 00683dc1: xor eax, dword ptr [ebx*4 + 0x6e2f90] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx*4+0x6e2f90u)); u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00683dc8: xor eax, dword ptr [edx*4 + 0x6e3b90] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx*4+0x6e3b90u)); u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00683dcf: xor eax, dword ptr [ecx - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0xfffffff8u)); u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00683dd2: mov edx, eax */ r_edx = r_eax;
    /* 00683dd4: shr edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00683dd7: movzx ebx, ah */ r_ebx = (u32)(u8)(r_eax>>8);
    /* 00683dda: and edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00683de0: mov edx, dword ptr [edx*4 + 0x6e3390] */ r_edx = R32((u32)(r_edx*4+0x6e3390u));
    /* 00683de7: xor edx, dword ptr [ebx*4 + 0x6e3790] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx*4+0x6e3790u)); u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00683dee: mov ebx, eax */ r_ebx = r_eax;
    /* 00683df0: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00683df5: shr ebx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 00683df8: xor edx, dword ptr [ebx*4 + 0x6e2f90] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx*4+0x6e2f90u)); u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00683dff: xor edx, dword ptr [eax*4 + 0x6e3b90] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax*4+0x6e3b90u)); u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00683e06: xor edx, dword ptr [ecx - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0xfffffffcu)); u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00683e09: mov eax, edx */ r_eax = r_edx;
    /* 00683e0b: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00683e0e: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00683e13: mov eax, dword ptr [eax*4 + 0x6e3390] */ r_eax = R32((u32)(r_eax*4+0x6e3390u));
    /* 00683e1a: movzx ebx, dh */ r_ebx = (u32)(u8)(r_edx>>8);
    /* 00683e1d: xor eax, dword ptr [ebx*4 + 0x6e3790] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx*4+0x6e3790u)); u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00683e24: mov ebx, edx */ r_ebx = r_edx;
    /* 00683e26: shr ebx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 00683e29: xor eax, dword ptr [ebx*4 + 0x6e2f90] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx*4+0x6e2f90u)); u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00683e30: and edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00683e36: xor eax, dword ptr [edx*4 + 0x6e3b90] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx*4+0x6e3b90u)); u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00683e3d: xor eax, dword ptr [ecx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx)); u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00683e3f: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00683e42: mov edx, eax */ r_edx = r_eax;
    /* 00683e44: shr edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00683e47: movzx ebx, ah */ r_ebx = (u32)(u8)(r_eax>>8);
    /* 00683e4a: and edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00683e50: mov edx, dword ptr [edx*4 + 0x6e3390] */ r_edx = R32((u32)(r_edx*4+0x6e3390u));
    /* 00683e57: xor edx, dword ptr [ebx*4 + 0x6e3790] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx*4+0x6e3790u)); u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00683e5e: mov ebx, eax */ r_ebx = r_eax;
    /* 00683e60: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00683e65: shr ebx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 00683e68: xor edx, dword ptr [ebx*4 + 0x6e2f90] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx*4+0x6e2f90u)); u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00683e6f: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00683e72: xor edx, dword ptr [eax*4 + 0x6e3b90] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax*4+0x6e3b90u)); u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00683e79: sub esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00683e7c: xor edx, dword ptr [ecx - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0xfffffffcu)); u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00683e7f: mov eax, edx */ r_eax = r_edx;
    /* 00683e81: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00683e84: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00683e89: mov eax, dword ptr [eax*4 + 0x6e3390] */ r_eax = R32((u32)(r_eax*4+0x6e3390u));
    /* 00683e90: movzx ebx, dh */ r_ebx = (u32)(u8)(r_edx>>8);
    /* 00683e93: xor eax, dword ptr [ebx*4 + 0x6e3790] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx*4+0x6e3790u)); u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00683e9a: mov ebx, edx */ r_ebx = r_edx;
    /* 00683e9c: shr ebx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 00683e9f: xor eax, dword ptr [ebx*4 + 0x6e2f90] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx*4+0x6e2f90u)); u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00683ea6: and edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00683eac: xor eax, dword ptr [edx*4 + 0x6e3b90] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx*4+0x6e3b90u)); u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00683eb3: sub edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 00683eb6: jne 0x683ce2 */ if (!fZ) goto L_00683ce2;
L_00683ebc:; BB(0x00683ebc);
    /* 00683ebc: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00683ebf: jb 0x683f09 */ if (fC) goto L_00683f09;
L_00683ec1:; BB(0x00683ec1);
    /* 00683ec1: mov edx, esi */ r_edx = r_esi;
    /* 00683ec3: shr edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
L_00683ec6:; BB(0x00683ec6);
    /* 00683ec6: xor eax, dword ptr [ecx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx)); u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00683ec8: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00683ecb: mov edi, eax */ r_edi = r_eax;
    /* 00683ecd: shr edi, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 00683ed0: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00683ed6: mov edi, dword ptr [edi*4 + 0x6e3390] */ r_edi = R32((u32)(r_edi*4+0x6e3390u));
    /* 00683edd: movzx ebx, ah */ r_ebx = (u32)(u8)(r_eax>>8);
    /* 00683ee0: xor edi, dword ptr [ebx*4 + 0x6e3790] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebx*4+0x6e3790u)); u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00683ee7: mov ebx, eax */ r_ebx = r_eax;
    /* 00683ee9: shr ebx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 00683eec: xor edi, dword ptr [ebx*4 + 0x6e2f90] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebx*4+0x6e2f90u)); u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00683ef3: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00683ef8: xor edi, dword ptr [eax*4 + 0x6e3b90] */ {  u32 a = r_edi; u32 b = R32((u32)(r_eax*4+0x6e3b90u)); u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00683eff: sub esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00683f02: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00683f05: mov eax, edi */ r_eax = r_edi;
    /* 00683f07: jne 0x683ec6 */ if (!fZ) goto L_00683ec6;
L_00683f09:; BB(0x00683f09);
    /* 00683f09: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00683f0b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00683f0c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00683f0d: je 0x683f2d */ if (fZ) goto L_00683f2d;
L_00683f0f:; BB(0x00683f0f);
    /* 00683f0f: nop  */ ;
L_00683f10:; BB(0x00683f10);
    /* 00683f10: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 00683f13: xor edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00683f15: and edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00683f1b: shr eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00683f1e: xor eax, dword ptr [edx*4 + 0x6e2f90] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx*4+0x6e2f90u)); u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00683f25: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00683f28: sub esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 00683f2b: jne 0x683f10 */ if (!fZ) goto L_00683f10;
L_00683f2d:; BB(0x00683f2d);
    /* 00683f2d: not eax */ r_eax = ~r_eax;
    /* 00683f2f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00683f30: ret  */ FN_RET(0x00683f40); r_esp += 4; return;
L_00683f40:; BB(0x00683f40);
    /* 00683f40: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00683f44: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00683f46: jne 0x683f4b */ if (!fZ) goto L_00683f4b;
L_00683f48:; BB(0x00683f48);
    /* 00683f48: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00683f4a: ret  */ FN_RET(0x00683f40); r_esp += 4; return;
L_00683f4b:; BB(0x00683f4b);
    /* 00683f4b: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00683f4f: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00683f53: jmp 0x683ca0 */ goto L_00683ca0;
}

void f_00683f60(void) /* sub_683F60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00683f60);
    /* 00683f60: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00683f62: call 0x684220 */ r_esp -= 4; W32(r_esp, 0x683f67u); f_00684220();
    /* 00683f67: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00683f69: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00683f6a: call 0x68421a */ r_esp -= 4; W32(r_esp, 0x683f6fu); f_0068421a();
    /* 00683f6f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00683f70: call 0x684214 */ r_esp -= 4; W32(r_esp, 0x683f75u); f_00684214();
    /* 00683f75: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00683f78: ret  */ FN_RET(0x00683f60); r_esp += 4; return;
}

void f_00683f80(void) /* sub_683F80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00683f80);
    /* 00683f80: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00683f81: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00683f82: call 0x684238 */ r_esp -= 4; W32(r_esp, 0x683f87u); f_00684238();
    /* 00683f87: mov esi, eax */ r_esi = r_eax;
    /* 00683f89: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00683f8a: call 0x684232 */ r_esp -= 4; W32(r_esp, 0x683f8fu); f_00684232();
    /* 00683f8f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00683f91: mov edi, eax */ r_edi = r_eax;
    /* 00683f93: call 0x684214 */ r_esp -= 4; W32(r_esp, 0x683f98u); f_00684214();
    /* 00683f98: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00683f99: call 0x68422c */ r_esp -= 4; W32(r_esp, 0x683f9eu); f_0068422c();
    /* 00683f9e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00683f9f: call 0x684226 */ r_esp -= 4; W32(r_esp, 0x683fa4u); f_00684226();
    /* 00683fa4: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00683fa7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00683fa8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00683fa9: ret  */ FN_RET(0x00683f80); r_esp += 4; return;
}

void f_00683fb0(void) /* sub_683FB0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00683fb0);
    /* 00683fb0: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00683fb4: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 00683fb8: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00683fbc: sub esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00683fbf: mov dword ptr [eax], 0x1101 */ W32((u32)(r_eax), 0x1101u);
    /* 00683fc5: mov eax, dword ptr [esp + 0x74] */ r_eax = R32((u32)(r_esp+0x74u));
    /* 00683fc9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00683fca: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00683fcb: mov ebp, dword ptr [esp + 0x6c] */ r_ebp = R32((u32)(r_esp+0x6cu));
    /* 00683fcf: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 00683fd5: mov ecx, dword ptr [esp + 0x80] */ r_ecx = R32((u32)(r_esp+0x80u));
    /* 00683fdc: mov dword ptr [edx], 0 */ W32((u32)(r_edx), 0x0u);
    /* 00683fe2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00683fe3: mov dword ptr [eax], 0x5622 */ W32((u32)(r_eax), 0x5622u);
    /* 00683fe9: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00683feb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00683fec: mov byte ptr [ecx], 0 */ W8((u32)(r_ecx), 0x0u);
    /* 00683fef: je 0x684178 */ if (fZ) goto L_00684178;
L_00683ff5:; BB(0x00683ff5);
    /* 00683ff5: mov edx, ebp */ r_edx = r_ebp;
    /* 00683ff7: add ebp, 0xc */ {  u32 a = r_ebp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00683ffa: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00683ffc: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00684000: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00684003: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 00684006: lea edx, [eax + 1] */ r_edx = (u32)(r_eax+0x1u);
    /* 00684009: and edx, 0xfffffffe */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0068400c: mov dword ptr [esp + 0x20], ecx */ W32((u32)(r_esp+0x20u), r_ecx);
    /* 00684010: sub edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00684013: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 00684017: je 0x684178 */ if (fZ) goto L_00684178;
L_0068401d:; BB(0x0068401d);
    /* 0068401d: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00684020: mov ebx, dword ptr [ebp + 4] */ r_ebx = R32((u32)(r_ebp+0x4u));
    /* 00684023: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 00684027: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0068402b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068402d: mov dword ptr [esp + 0x14], ebx */ W32((u32)(r_esp+0x14u), r_ebx);
    /* 00684031: je 0x684178 */ if (fZ) goto L_00684178;
L_00684037:; BB(0x00684037);
    /* 00684037: mov eax, 0x781440 */ r_eax = 0x781440u;
    /* 0068403c: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 00684040: add ebp, 8 */ {  u32 a = r_ebp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00684043: mov ecx, dword ptr [ecx] */ r_ecx = R32((u32)(r_ecx));
    /* 00684045: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 00684047: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00684049: jne 0x6840bd */ if (!fZ) goto L_006840bd;
L_0068404b:; BB(0x0068404b);
    /* 0068404b: mov esi, ebp */ r_esi = r_ebp;
    /* 0068404d: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0068404f: cmp ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 00684053: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 00684057: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 0068405a: mov edi, dword ptr [esi + 8] */ r_edi = R32((u32)(r_esi+0x8u));
    /* 0068405d: mov dword ptr [esp + 0x2c], edi */ W32((u32)(r_esp+0x2cu), r_edi);
    /* 00684061: mov esi, dword ptr [esi + 0xc] */ r_esi = R32((u32)(r_esi+0xcu));
    /* 00684064: mov dword ptr [esp + 0x30], esi */ W32((u32)(r_esp+0x30u), r_esi);
    /* 00684068: jne 0x684158 */ if (!fZ) goto L_00684158;
L_0068406e:; BB(0x0068406e);
    /* 0068406e: cmp word ptr [esp + 0x26], ax */ {  u32 a = R16((u32)(r_esp+0x26u)); u32 b = (u16)r_eax; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 00684073: jne 0x684099 */ if (!fZ) goto L_00684099;
L_00684075:; BB(0x00684075);
    /* 00684075: mov esi, dword ptr [esp + 0x78] */ r_esi = R32((u32)(r_esp+0x78u));
    /* 00684079: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068407b: cmp word ptr [esp + 0x32], 8 */ {  u32 a = R16((u32)(r_esp+0x32u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 00684081: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 00684084: add eax, 0x1100 */ {  u32 a = r_eax; u32 b = 0x1100u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00684089: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 0068408b: mov eax, dword ptr [esp + 0x84] */ r_eax = R32((u32)(r_esp+0x84u));
    /* 00684092: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00684094: jmp 0x684158 */ goto L_00684158;
L_00684099:; BB(0x00684099);
    /* 00684099: mov esi, dword ptr [esp + 0x78] */ r_esi = R32((u32)(r_esp+0x78u));
    /* 0068409d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068409f: cmp word ptr [esp + 0x32], 8 */ {  u32 a = R16((u32)(r_esp+0x32u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 006840a5: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 006840a8: add eax, 0x1102 */ {  u32 a = r_eax; u32 b = 0x1102u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006840ad: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 006840af: mov eax, dword ptr [esp + 0x84] */ r_eax = R32((u32)(r_esp+0x84u));
    /* 006840b6: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 006840b8: jmp 0x684158 */ goto L_00684158;
L_006840bd:; BB(0x006840bd);
    /* 006840bd: mov ecx, 0x781438 */ r_ecx = 0x781438u;
    /* 006840c2: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 006840c6: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 006840c8: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 006840ca: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006840cc: jne 0x684128 */ if (!fZ) goto L_00684128;
L_006840ce:; BB(0x006840ce);
    /* 006840ce: cmp word ptr [esp + 0x24], 1 */ {  u32 a = R16((u32)(r_esp+0x24u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 006840d4: jne 0x68415a */ if (!fZ) goto L_0068415a;
L_006840da:; BB(0x006840da);
    /* 006840da: mov ecx, dword ptr [esp + 0x80] */ r_ecx = R32((u32)(r_esp+0x80u));
    /* 006840e1: lea edx, [ebx + 0x1f] */ r_edx = (u32)(r_ebx+0x1fu);
    /* 006840e4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006840e5: mov dword ptr [ecx], ebx */ W32((u32)(r_ecx), r_ebx);
    /* 006840e7: call 0x6872fa */ r_esp -= 4; W32(r_esp, 0x6840ecu); f_006872fa();
    /* 006840ec: mov edx, dword ptr [esp + 0x80] */ r_edx = R32((u32)(r_esp+0x80u));
    /* 006840f3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006840f6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006840f8: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 006840fa: je 0x684110 */ if (fZ) goto L_00684110;
L_006840fc:; BB(0x006840fc);
    /* 006840fc: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006840fe: mov edi, eax */ r_edi = r_eax;
    /* 00684100: mov eax, ecx */ r_eax = r_ecx;
    /* 00684102: mov esi, ebp */ r_esi = r_ebp;
    /* 00684104: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00684107: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00684109: mov ecx, eax */ r_ecx = r_eax;
    /* 0068410b: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0068410e: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
L_00684110:; BB(0x00684110);
    /* 00684110: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 00684112: mov ecx, 7 */ r_ecx = 0x7u;
    /* 00684117: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00684119: add edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0068411b: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0068411d: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00684121: add ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00684123: stosw word ptr es:[edi], ax */ W16(r_edi, (u16)r_eax); r_edi += rt_df ? -2 : 2;
    /* 00684125: stosb byte ptr es:[edi], al */ W8(r_edi, (u8)r_eax); r_edi += rt_df ? -1 : 1;
    /* 00684126: jmp 0x68415a */ goto L_0068415a;
L_00684128:; BB(0x00684128);
    /* 00684128: mov ecx, 0x781430 */ r_ecx = 0x781430u;
    /* 0068412d: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 00684131: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00684133: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 00684135: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00684137: jne 0x684158 */ if (!fZ) goto L_00684158;
L_00684139:; BB(0x00684139);
    /* 00684139: mov eax, dword ptr [esp + 0x88] */ r_eax = R32((u32)(r_esp+0x88u));
    /* 00684140: mov ecx, 0xf */ r_ecx = 0xfu;
    /* 00684145: mov esi, ebp */ r_esi = r_ebp;
    /* 00684147: lea edi, [esp + 0x34] */ r_edi = (u32)(r_esp+0x34u);
    /* 0068414b: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0068414d: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 00684151: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00684153: setne cl */ r_ecx = (r_ecx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 00684156: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
L_00684158:; BB(0x00684158);
    /* 00684158: add ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_0068415a:; BB(0x0068415a);
    /* 0068415a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0068415c: mov eax, 0xfffffff8 */ r_eax = 0xfffffff8u;
    /* 00684161: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00684164: add ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00684166: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00684167: and ebx, 0xfffffffe */ {  u32 a = r_ebx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0068416a: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0068416c: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0068416e: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 00684172: jne 0x68401d */ if (!fZ) goto L_0068401d;
L_00684178:; BB(0x00684178);
    /* 00684178: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00684179: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068417a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068417b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068417c: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068417f: ret  */ FN_RET(0x00683fb0); r_esp += 4; return;
}

