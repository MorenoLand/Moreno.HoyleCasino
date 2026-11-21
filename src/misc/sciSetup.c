#include "protos.h"

void f_00610450(void) /* sciSetup::func_00610450 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00610450);
    /* 00610450: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00610451: mov ebp, esp */ r_ebp = r_esp;
    /* 00610453: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
L_00610454:; BB(0x00610454);
    /* 00610454: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00610457: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061045b: je 0x6104b7 */ if (fZ) goto L_006104b7;
L_0061045d:; BB(0x0061045d);
    /* 0061045d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00610460: cmp dword ptr [ecx + 8], 0 */ {  u32 a = R32((u32)(r_ecx+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00610464: je 0x61048d */ if (fZ) goto L_0061048d;
L_00610466:; BB(0x00610466);
    /* 00610466: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00610469: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0061046c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061046d: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00610470: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x610475u); f_005fb2b0();
    /* 00610475: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00610477: je 0x61048d */ if (fZ) goto L_0061048d;
L_00610479:; BB(0x00610479);
    /* 00610479: push 0x31 */ { u32 v = 0x31u; r_esp -= 4; W32(r_esp, v); }
    /* 0061047b: push 0x6d84a0 */ { u32 v = 0x6d84a0u; r_esp -= 4; W32(r_esp, v); }
    /* 00610480: push 0x6d8464 */ { u32 v = 0x6d8464u; r_esp -= 4; W32(r_esp, v); }
    /* 00610485: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x61048au); f_005e9f20();
    /* 0061048a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0061048d:; BB(0x0061048d);
    /* 0061048d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00610490: cmp dword ptr [edx + 4], 0 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00610494: jne 0x610498 */ if (!fZ) goto L_00610498;
L_00610496:; BB(0x00610496);
    /* 00610496: jmp 0x6104b7 */ goto L_006104b7;
L_00610498:; BB(0x00610498);
    /* 00610498: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061049a: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0061049d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061049e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006104a1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006104a2: call 0x610350 */ r_esp -= 4; W32(r_esp, 0x6104a7u); f_00610350();
    /* 006104a7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006104aa: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006104ad: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006104b0: add eax, dword ptr [edx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006104b2: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 006104b5: jmp 0x610454 */ goto L_00610454;
L_006104b7:; BB(0x006104b7);
    /* 006104b7: mov esp, ebp */ r_esp = r_ebp;
    /* 006104b9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006104ba: ret  */ FN_RET(0x00610450); r_esp += 4; return;
}

void f_00610980(void) /* sciSetup::func_00610980 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00610980);
    /* 00610980: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00610981: mov ebp, esp */ r_ebp = r_esp;
    /* 00610983: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00610985: push 0x6aaf5a */ { u32 v = 0x6aaf5au; r_esp -= 4; W32(r_esp, v); }
    /* 0061098a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00610990: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00610991: sub esp, 0x120 */ {  u32 a = r_esp; u32 b = 0x120u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00610997: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0061099c: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061099e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061099f: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 006109a2: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 006109a8: cmp dword ptr [0x15e55f4], 0 */ {  u32 a = R32((u32)(0x15e55f4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006109af: jne 0x6109bd */ if (!fZ) goto L_006109bd;
L_006109b1:; BB(0x006109b1);
    /* 006109b1: mov dword ptr [ebp - 0x108], 0 */ W32((u32)(r_ebp+0xfffffef8u), 0x0u);
    /* 006109bb: jmp 0x6109d6 */ goto L_006109d6;
L_006109bd:; BB(0x006109bd);
    /* 006109bd: mov eax, dword ptr [0x15e55f8] */ r_eax = R32((u32)(0x15e55f8u));
    /* 006109c2: sub eax, dword ptr [0x15e55f4] */ {  u32 a = r_eax; u32 b = R32((u32)(0x15e55f4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006109c8: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 006109c9: mov ecx, 0x48 */ r_ecx = 0x48u;
    /* 006109ce: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x006109ce, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x006109ce, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 006109d0: mov dword ptr [ebp - 0x108], eax */ W32((u32)(r_ebp+0xfffffef8u), r_eax);
L_006109d6:; BB(0x006109d6);
    /* 006109d6: mov edx, dword ptr [ebp - 0x108] */ r_edx = R32((u32)(r_ebp+0xfffffef8u));
    /* 006109dc: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 006109df: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006109e3: je 0x610a35 */ if (fZ) goto L_00610a35;
L_006109e5:; BB(0x006109e5);
    /* 006109e5: cmp dword ptr [0x15e55f4], 0 */ {  u32 a = R32((u32)(0x15e55f4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006109ec: jne 0x6109fa */ if (!fZ) goto L_006109fa;
L_006109ee:; BB(0x006109ee);
    /* 006109ee: mov dword ptr [ebp - 0x10c], 0 */ W32((u32)(r_ebp+0xfffffef4u), 0x0u);
    /* 006109f8: jmp 0x610a13 */ goto L_00610a13;
L_006109fa:; BB(0x006109fa);
    /* 006109fa: mov eax, dword ptr [0x15e55f8] */ r_eax = R32((u32)(0x15e55f8u));
    /* 006109ff: sub eax, dword ptr [0x15e55f4] */ {  u32 a = r_eax; u32 b = R32((u32)(0x15e55f4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00610a05: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00610a06: mov ecx, 0x48 */ r_ecx = 0x48u;
    /* 00610a0b: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00610a0b, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00610a0b, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00610a0d: mov dword ptr [ebp - 0x10c], eax */ W32((u32)(r_ebp+0xfffffef4u), r_eax);
L_00610a13:; BB(0x00610a13);
    /* 00610a13: cmp dword ptr [ebp - 0x10c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffef4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00610a1a: ja 0x610a22 */ if ((!fC&&!fZ)) goto L_00610a22;
L_00610a1c:; BB(0x00610a1c);
    /* 00610a1c: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x610a22u); call_ind(t); }
L_00610a22:; BB(0x00610a22);
    /* 00610a22: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00610a24: imul edx, edx, 0x48 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x48u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00610a27: add edx, dword ptr [0x15e55f4] */ {  u32 a = r_edx; u32 b = R32((u32)(0x15e55f4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00610a2d: mov dword ptr [ebp - 0x110], edx */ W32((u32)(r_ebp+0xfffffef0u), r_edx);
    /* 00610a33: jmp 0x610a3f */ goto L_00610a3f;
L_00610a35:; BB(0x00610a35);
    /* 00610a35: mov dword ptr [ebp - 0x110], 0 */ W32((u32)(r_ebp+0xfffffef0u), 0x0u);
L_00610a3f:; BB(0x00610a3f);
    /* 00610a3f: mov eax, dword ptr [ebp - 0x110] */ r_eax = R32((u32)(r_ebp+0xfffffef0u));
    /* 00610a45: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00610a48: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 00610a4f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00610a52: cmp dword ptr [ecx], 0 */ {  u32 a = R32((u32)(r_ecx)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00610a55: jne 0x610a65 */ if (!fZ) goto L_00610a65;
L_00610a57:; BB(0x00610a57);
    /* 00610a57: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00610a5a: cmp dword ptr [edx + 4], 0 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00610a5e: jne 0x610a65 */ if (!fZ) goto L_00610a65;
L_00610a60:; BB(0x00610a60);
    /* 00610a60: jmp 0x610e54 */ goto L_00610e54;
L_00610a65:; BB(0x00610a65);
    /* 00610a65: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00610a6a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00610a6c: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00610a72: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 00610a75: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x610a77u); call_ind(t); }
    /* 00610a77: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00610a7a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00610a7c: jne 0x610a83 */ if (!fZ) goto L_00610a83;
L_00610a7e:; BB(0x00610a7e);
    /* 00610a7e: jmp 0x610e54 */ goto L_00610e54;
L_00610a83:; BB(0x00610a83);
    /* 00610a83: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 00610a8a: jmp 0x610a95 */ goto L_00610a95;
L_00610a8c:; BB(0x00610a8c);
    /* 00610a8c: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00610a8f: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00610a92: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
L_00610a95:; BB(0x00610a95);
    /* 00610a95: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00610a98: cmp eax, dword ptr [ebp - 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00610a9b: jge 0x610aba */ if ((fS==fO)) goto L_00610aba;
L_00610a9d:; BB(0x00610a9d);
    /* 00610a9d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00610aa0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00610aa1: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00610aa4: imul ecx, ecx, 0x48 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x48u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00610aa7: add ecx, dword ptr [ebp - 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00610aaa: call 0x610810 */ r_esp -= 4; W32(r_esp, 0x610aafu); f_00610810();
    /* 00610aaf: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00610ab2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00610ab4: je 0x610ab8 */ if (fZ) goto L_00610ab8;
L_00610ab6:; BB(0x00610ab6);
    /* 00610ab6: jmp 0x610aba */ goto L_00610aba;
L_00610ab8:; BB(0x00610ab8);
    /* 00610ab8: jmp 0x610a8c */ goto L_00610a8c;
L_00610aba:; BB(0x00610aba);
    /* 00610aba: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00610abd: cmp eax, dword ptr [ebp - 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00610ac0: jge 0x610b22 */ if ((fS==fO)) goto L_00610b22;
L_00610ac2:; BB(0x00610ac2);
    /* 00610ac2: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00610ac5: imul ecx, ecx, 0x48 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x48u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00610ac8: add ecx, dword ptr [ebp - 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00610acb: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00610ace: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00610ad1: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 00610ad4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00610ad5: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 00610adb: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 00610ade: call 0x609910 */ r_esp -= 4; W32(r_esp, 0x610ae3u); f_00609910();
    /* 00610ae3: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00610ae6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00610ae8: jne 0x610b20 */ if (!fZ) goto L_00610b20;
L_00610aea:; BB(0x00610aea);
    /* 00610aea: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00610aed: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 00610af0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00610af1: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 00610af7: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 00610afa: call 0x609650 */ r_esp -= 4; W32(r_esp, 0x610affu); f_00609650();
    /* 00610aff: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00610b02: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00610b04: jne 0x610b0b */ if (!fZ) goto L_00610b0b;
L_00610b06:; BB(0x00610b06);
    /* 00610b06: jmp 0x610e54 */ goto L_00610e54;
L_00610b0b:; BB(0x00610b0b);
    /* 00610b0b: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00610b0e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00610b0f: mov ecx, 0x15e55f0 */ r_ecx = 0x15e55f0u;
    /* 00610b14: call 0x6127f0 */ r_esp -= 4; W32(r_esp, 0x610b19u); f_006127f0();
    /* 00610b19: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_00610b20:; BB(0x00610b20);
    /* 00610b20: jmp 0x610b29 */ goto L_00610b29;
L_00610b22:; BB(0x00610b22);
    /* 00610b22: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_00610b29:; BB(0x00610b29);
    /* 00610b29: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00610b2d: jne 0x610cf1 */ if (!fZ) goto L_00610cf1;
L_00610b33:; BB(0x00610b33);
    /* 00610b33: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00610b36: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00610b37: lea ecx, [ebp - 0x68] */ r_ecx = (u32)(r_ebp+0xffffff98u);
    /* 00610b3a: call 0x6105e0 */ r_esp -= 4; W32(r_esp, 0x610b3fu); f_006105e0();
    /* 00610b3f: mov dword ptr [ebp - 0x114], eax */ W32((u32)(r_ebp+0xfffffeecu), r_eax);
    /* 00610b45: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 00610b4b: mov dword ptr [ebp - 0xd0], eax */ W32((u32)(r_ebp+0xffffff30u), r_eax);
    /* 00610b51: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00610b58: mov ecx, dword ptr [ebp - 0xd0] */ r_ecx = R32((u32)(r_ebp+0xffffff30u));
    /* 00610b5e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00610b5f: mov ecx, 0x15e55f0 */ r_ecx = 0x15e55f0u;
    /* 00610b64: call 0x6117e0 */ r_esp -= 4; W32(r_esp, 0x610b69u); f_006117e0();
    /* 00610b69: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00610b70: lea edx, [ebp - 0x48] */ r_edx = (u32)(r_ebp+0xffffffb8u);
    /* 00610b73: mov dword ptr [ebp - 0xf0], edx */ W32((u32)(r_ebp+0xffffff10u), r_edx);
    /* 00610b79: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 00610b7f: call 0x5be450 */ r_esp -= 4; W32(r_esp, 0x610b84u); f_005be450();
    /* 00610b84: cmp dword ptr [0x15e55f4], 0 */ {  u32 a = R32((u32)(0x15e55f4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00610b8b: jne 0x610b99 */ if (!fZ) goto L_00610b99;
L_00610b8d:; BB(0x00610b8d);
    /* 00610b8d: mov dword ptr [ebp - 0x118], 0 */ W32((u32)(r_ebp+0xfffffee8u), 0x0u);
    /* 00610b97: jmp 0x610bb2 */ goto L_00610bb2;
L_00610b99:; BB(0x00610b99);
    /* 00610b99: mov eax, dword ptr [0x15e55f8] */ r_eax = R32((u32)(0x15e55f8u));
    /* 00610b9e: sub eax, dword ptr [0x15e55f4] */ {  u32 a = r_eax; u32 b = R32((u32)(0x15e55f4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00610ba4: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00610ba5: mov ecx, 0x48 */ r_ecx = 0x48u;
    /* 00610baa: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00610baa, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00610baa, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00610bac: mov dword ptr [ebp - 0x118], eax */ W32((u32)(r_ebp+0xfffffee8u), r_eax);
L_00610bb2:; BB(0x00610bb2);
    /* 00610bb2: mov edx, dword ptr [ebp - 0x118] */ r_edx = R32((u32)(r_ebp+0xfffffee8u));
    /* 00610bb8: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00610bbb: mov dword ptr [ebp - 0xf4], edx */ W32((u32)(r_ebp+0xffffff0cu), r_edx);
    /* 00610bc1: cmp dword ptr [0x15e55f4], 0 */ {  u32 a = R32((u32)(0x15e55f4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00610bc8: jne 0x610bd6 */ if (!fZ) goto L_00610bd6;
L_00610bca:; BB(0x00610bca);
    /* 00610bca: mov dword ptr [ebp - 0x11c], 0 */ W32((u32)(r_ebp+0xfffffee4u), 0x0u);
    /* 00610bd4: jmp 0x610bef */ goto L_00610bef;
L_00610bd6:; BB(0x00610bd6);
    /* 00610bd6: mov eax, dword ptr [0x15e55f8] */ r_eax = R32((u32)(0x15e55f8u));
    /* 00610bdb: sub eax, dword ptr [0x15e55f4] */ {  u32 a = r_eax; u32 b = R32((u32)(0x15e55f4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00610be1: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00610be2: mov ecx, 0x48 */ r_ecx = 0x48u;
    /* 00610be7: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00610be7, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00610be7, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00610be9: mov dword ptr [ebp - 0x11c], eax */ W32((u32)(r_ebp+0xfffffee4u), r_eax);
L_00610bef:; BB(0x00610bef);
    /* 00610bef: mov edx, dword ptr [ebp - 0xf4] */ r_edx = R32((u32)(r_ebp+0xffffff0cu));
    /* 00610bf5: cmp edx, dword ptr [ebp - 0x11c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffee4u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00610bfb: jb 0x610c03 */ if (fC) goto L_00610c03;
L_00610bfd:; BB(0x00610bfd);
    /* 00610bfd: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x610c03u); call_ind(t); }
L_00610c03:; BB(0x00610c03);
    /* 00610c03: mov eax, dword ptr [ebp - 0xf4] */ r_eax = R32((u32)(r_ebp+0xffffff0cu));
    /* 00610c09: imul eax, eax, 0x48 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x48u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00610c0c: add eax, dword ptr [0x15e55f4] */ {  u32 a = r_eax; u32 b = R32((u32)(0x15e55f4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00610c12: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00610c15: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00610c18: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00610c1a: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00610c1d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00610c20: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00610c24: je 0x610ce6 */ if (fZ) goto L_00610ce6;
L_00610c2a:; BB(0x00610c2a);
    /* 00610c2a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00610c2d: add ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00610c30: mov dword ptr [ebp - 0xf8], ecx */ W32((u32)(r_ebp+0xffffff08u), r_ecx);
    /* 00610c36: mov edx, dword ptr [ebp - 0xf8] */ r_edx = R32((u32)(r_ebp+0xffffff08u));
    /* 00610c3c: cmp dword ptr [edx + 4], 0 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00610c40: jne 0x610c4e */ if (!fZ) goto L_00610c4e;
L_00610c42:; BB(0x00610c42);
    /* 00610c42: mov dword ptr [ebp - 0x120], 0 */ W32((u32)(r_ebp+0xfffffee0u), 0x0u);
    /* 00610c4c: jmp 0x610c69 */ goto L_00610c69;
L_00610c4e:; BB(0x00610c4e);
    /* 00610c4e: mov eax, dword ptr [ebp - 0xf8] */ r_eax = R32((u32)(r_ebp+0xffffff08u));
    /* 00610c54: mov ecx, dword ptr [ebp - 0xf8] */ r_ecx = R32((u32)(r_ebp+0xffffff08u));
    /* 00610c5a: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00610c5d: sub edx, dword ptr [ecx + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00610c60: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00610c63: mov dword ptr [ebp - 0x120], edx */ W32((u32)(r_ebp+0xfffffee0u), r_edx);
L_00610c69:; BB(0x00610c69);
    /* 00610c69: mov eax, dword ptr [ebp - 0x120] */ r_eax = R32((u32)(r_ebp+0xfffffee0u));
    /* 00610c6f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00610c70: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x610c75u); f_0062fbf0();
    /* 00610c75: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00610c78: mov dword ptr [ebp - 0x100], eax */ W32((u32)(r_ebp+0xffffff00u), r_eax);
    /* 00610c7e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00610c81: add ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00610c84: mov dword ptr [ebp - 0xfc], ecx */ W32((u32)(r_ebp+0xffffff04u), r_ecx);
    /* 00610c8a: mov edx, dword ptr [ebp - 0xfc] */ r_edx = R32((u32)(r_ebp+0xffffff04u));
    /* 00610c90: cmp dword ptr [edx + 4], 0 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00610c94: jne 0x610ca2 */ if (!fZ) goto L_00610ca2;
L_00610c96:; BB(0x00610c96);
    /* 00610c96: mov dword ptr [ebp - 0x124], 0 */ W32((u32)(r_ebp+0xfffffedcu), 0x0u);
    /* 00610ca0: jmp 0x610cbd */ goto L_00610cbd;
L_00610ca2:; BB(0x00610ca2);
    /* 00610ca2: mov eax, dword ptr [ebp - 0xfc] */ r_eax = R32((u32)(r_ebp+0xffffff04u));
    /* 00610ca8: mov ecx, dword ptr [ebp - 0xfc] */ r_ecx = R32((u32)(r_ebp+0xffffff04u));
    /* 00610cae: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00610cb1: sub edx, dword ptr [ecx + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00610cb4: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00610cb7: mov dword ptr [ebp - 0x124], edx */ W32((u32)(r_ebp+0xfffffedcu), r_edx);
L_00610cbd:; BB(0x00610cbd);
    /* 00610cbd: mov eax, dword ptr [ebp - 0x100] */ r_eax = R32((u32)(r_ebp+0xffffff00u));
    /* 00610cc3: cmp eax, dword ptr [ebp - 0x124] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffedcu)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00610cc9: jb 0x610cd1 */ if (fC) goto L_00610cd1;
L_00610ccb:; BB(0x00610ccb);
    /* 00610ccb: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x610cd1u); call_ind(t); }
L_00610cd1:; BB(0x00610cd1);
    /* 00610cd1: mov ecx, dword ptr [ebp - 0xfc] */ r_ecx = R32((u32)(r_ebp+0xffffff04u));
    /* 00610cd7: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00610cda: mov eax, dword ptr [ebp - 0x100] */ r_eax = R32((u32)(r_ebp+0xffffff00u));
    /* 00610ce0: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 00610ce3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
L_00610ce6:; BB(0x00610ce6);
    /* 00610ce6: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00610cea: jne 0x610cf1 */ if (!fZ) goto L_00610cf1;
L_00610cec:; BB(0x00610cec);
    /* 00610cec: jmp 0x610e54 */ goto L_00610e54;
L_00610cf1:; BB(0x00610cf1);
    /* 00610cf1: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00610cf4: cmp dword ptr [edx + 0x10], 0 */ {  u32 a = R32((u32)(r_edx+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00610cf8: je 0x610d04 */ if (fZ) goto L_00610d04;
L_00610cfa:; BB(0x00610cfa);
    /* 00610cfa: fldz  */ FPUSH(0.0);
    /* 00610cfc: fstp dword ptr [ebp - 0x128] */ W_F32((u32)(r_ebp+0xfffffed8u), ST(0)); FPOP();
    /* 00610d02: jmp 0x610d10 */ goto L_00610d10;
L_00610d04:; BB(0x00610d04);
    /* 00610d04: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00610d07: fld dword ptr [eax + 0x18] */ FPUSH(R_F32((u32)(r_eax+0x18u)));
    /* 00610d0a: fstp dword ptr [ebp - 0x128] */ W_F32((u32)(r_ebp+0xfffffed8u), ST(0)); FPOP();
L_00610d10:; BB(0x00610d10);
    /* 00610d10: fld dword ptr [ebp - 0x128] */ FPUSH(R_F32((u32)(r_ebp+0xfffffed8u)));
    /* 00610d16: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x610d1bu); f_00686cc0();
    /* 00610d1b: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00610d1e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00610d21: cmp dword ptr [ecx + 0x10], 0 */ {  u32 a = R32((u32)(r_ecx+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00610d25: je 0x610dbc */ if (fZ) goto L_00610dbc;
L_00610d2b:; BB(0x00610d2b);
    /* 00610d2b: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 00610d31: call 0x5f3e50 */ r_esp -= 4; W32(r_esp, 0x610d36u); f_005f3e50();
    /* 00610d36: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00610d39: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 00610d3c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00610d3f: fldz  */ FPUSH(0.0);
    /* 00610d41: fstp dword ptr [eax + 0x3c] */ W_F32((u32)(r_eax+0x3cu), ST(0)); FPOP();
    /* 00610d44: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00610d47: fild dword ptr [ecx + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ecx+0x10u)));
    /* 00610d4a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00610d4d: fdivr dword ptr [edx + 0x18] */ ST(0) = R_F32((u32)(r_edx+0x18u)) / ST(0);
    /* 00610d50: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00610d53: fstp dword ptr [eax + 0x38] */ W_F32((u32)(r_eax+0x38u), ST(0)); FPOP();
    /* 00610d56: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00610d59: fld dword ptr [ecx + 0x38] */ FPUSH(R_F32((u32)(r_ecx+0x38u)));
    /* 00610d5c: fstp dword ptr [ebp - 0x104] */ W_F32((u32)(r_ebp+0xfffffefcu), ST(0)); FPOP();
    /* 00610d62: fld dword ptr [ebp - 0x104] */ FPUSH(R_F32((u32)(r_ebp+0xfffffefcu)));
    /* 00610d68: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00610d6b: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 00610d6e: call 0x68732a */ r_esp -= 4; W32(r_esp, 0x610d73u); f_0068732a();
    /* 00610d73: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00610d76: fstp dword ptr [ebp - 0x12c] */ W_F32((u32)(r_ebp+0xfffffed4u), ST(0)); FPOP();
    /* 00610d7c: fld dword ptr [ebp - 0x12c] */ FPUSH(R_F32((u32)(r_ebp+0xfffffed4u)));
    /* 00610d82: fcomp qword ptr [0x6bc270] */ fx_compare(ST(0), R_F64((u32)(0x6bc270u))); FPOP();
    /* 00610d88: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00610d8a: test ah, 1 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00610d8d: je 0x610da6 */ if (fZ) goto L_00610da6;
L_00610d8f:; BB(0x00610d8f);
    /* 00610d8f: push 0x121 */ { u32 v = 0x121u; r_esp -= 4; W32(r_esp, v); }
    /* 00610d94: push 0x6d84a0 */ { u32 v = 0x6d84a0u; r_esp -= 4; W32(r_esp, v); }
    /* 00610d99: push 0x6d84b8 */ { u32 v = 0x6d84b8u; r_esp -= 4; W32(r_esp, v); }
    /* 00610d9e: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x610da3u); f_005e9f20();
    /* 00610da3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00610da6:; BB(0x00610da6);
    /* 00610da6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00610da9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00610dac: fld dword ptr [ecx + 0x18] */ FPUSH(R_F32((u32)(r_ecx+0x18u)));
    /* 00610daf: fstp dword ptr [eax + 0x40] */ W_F32((u32)(r_eax+0x40u), ST(0)); FPOP();
    /* 00610db2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00610db5: mov dword ptr [edx + 0x44], 0 */ W32((u32)(r_edx+0x44u), 0x0u);
L_00610dbc:; BB(0x00610dbc);
    /* 00610dbc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00610dbf: cmp dword ptr [eax + 0x30], 0 */ {  u32 a = R32((u32)(r_eax+0x30u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00610dc3: jge 0x610e23 */ if ((fS==fO)) goto L_00610e23;
L_00610dc5:; BB(0x00610dc5);
    /* 00610dc5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00610dc7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00610dca: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00610dcb: fld dword ptr [ecx + 0x1c] */ FPUSH(R_F32((u32)(r_ecx+0x1cu)));
    /* 00610dce: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00610dd1: fild dword ptr [ebp - 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff0u)));
    /* 00610dd4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00610dd5: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00610dd8: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00610ddb: movzx eax, byte ptr [edx + 0xc] */ r_eax = (u32)R8((u32)(r_edx+0xcu));
    /* 00610ddf: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 00610de1: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 00610de3: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00610de5: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00610de8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00610de9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00610deb: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00610dee: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00610df1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00610df2: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00610df5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00610df6: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 00610dfc: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 00610dff: call 0x608b50 */ r_esp -= 4; W32(r_esp, 0x610e04u); f_00608b50();
    /* 00610e04: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00610e07: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 00610e0a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00610e0d: cmp dword ptr [eax + 0x30], 0 */ {  u32 a = R32((u32)(r_eax+0x30u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00610e11: jge 0x610e21 */ if ((fS==fO)) goto L_00610e21;
L_00610e13:; BB(0x00610e13);
    /* 00610e13: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00610e15: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00610e18: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00610e19: call 0x6110a0 */ r_esp -= 4; W32(r_esp, 0x610e1eu); f_006110a0();
    /* 00610e1e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00610e21:; BB(0x00610e21);
    /* 00610e21: jmp 0x610e54 */ goto L_00610e54;
L_00610e23:; BB(0x00610e23);
    /* 00610e23: fild dword ptr [ebp - 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff0u)));
    /* 00610e26: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00610e27: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00610e2a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00610e2d: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 00610e30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00610e31: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 00610e37: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 00610e3a: call 0x608550 */ r_esp -= 4; W32(r_esp, 0x610e3fu); f_00608550();
    /* 00610e3f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00610e42: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 00610e45: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00610e46: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 00610e4c: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 00610e4f: call 0x609a80 */ r_esp -= 4; W32(r_esp, 0x610e54u); f_00609a80();
L_00610e54:; BB(0x00610e54);
    /* 00610e54: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00610e57: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00610e5e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00610e5f: mov esp, ebp */ r_esp = r_ebp;
    /* 00610e61: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00610e62: ret  */ FN_RET(0x00610980); r_esp += 4; return;
}

void f_00610e70(void) /* sciSetup::func_00610e70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00610e70);
    /* 00610e70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00610e71: mov ebp, esp */ r_ebp = r_esp;
    /* 00610e73: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00610e76: cmp dword ptr [0x15e55f4], 0 */ {  u32 a = R32((u32)(0x15e55f4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00610e7d: jne 0x610e88 */ if (!fZ) goto L_00610e88;
L_00610e7f:; BB(0x00610e7f);
    /* 00610e7f: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 00610e86: jmp 0x610e9e */ goto L_00610e9e;
L_00610e88:; BB(0x00610e88);
    /* 00610e88: mov eax, dword ptr [0x15e55f8] */ r_eax = R32((u32)(0x15e55f8u));
    /* 00610e8d: sub eax, dword ptr [0x15e55f4] */ {  u32 a = r_eax; u32 b = R32((u32)(0x15e55f4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00610e93: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00610e94: mov ecx, 0x48 */ r_ecx = 0x48u;
    /* 00610e99: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00610e99, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00610e99, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00610e9b: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_00610e9e:; BB(0x00610e9e);
    /* 00610e9e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00610ea1: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00610ea4: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00610ea8: je 0x610eee */ if (fZ) goto L_00610eee;
L_00610eaa:; BB(0x00610eaa);
    /* 00610eaa: cmp dword ptr [0x15e55f4], 0 */ {  u32 a = R32((u32)(0x15e55f4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00610eb1: jne 0x610ebc */ if (!fZ) goto L_00610ebc;
L_00610eb3:; BB(0x00610eb3);
    /* 00610eb3: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 00610eba: jmp 0x610ed2 */ goto L_00610ed2;
L_00610ebc:; BB(0x00610ebc);
    /* 00610ebc: mov eax, dword ptr [0x15e55f8] */ r_eax = R32((u32)(0x15e55f8u));
    /* 00610ec1: sub eax, dword ptr [0x15e55f4] */ {  u32 a = r_eax; u32 b = R32((u32)(0x15e55f4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00610ec7: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00610ec8: mov ecx, 0x48 */ r_ecx = 0x48u;
    /* 00610ecd: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00610ecd, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00610ecd, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00610ecf: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_00610ed2:; BB(0x00610ed2);
    /* 00610ed2: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00610ed6: ja 0x610ede */ if ((!fC&&!fZ)) goto L_00610ede;
L_00610ed8:; BB(0x00610ed8);
    /* 00610ed8: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x610edeu); call_ind(t); }
L_00610ede:; BB(0x00610ede);
    /* 00610ede: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00610ee0: imul edx, edx, 0x48 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x48u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00610ee3: add edx, dword ptr [0x15e55f4] */ {  u32 a = r_edx; u32 b = R32((u32)(0x15e55f4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00610ee9: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00610eec: jmp 0x610ef5 */ goto L_00610ef5;
L_00610eee:; BB(0x00610eee);
    /* 00610eee: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_00610ef5:; BB(0x00610ef5);
    /* 00610ef5: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00610ef8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00610efb: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00610efe: cmp dword ptr [ecx], 0 */ {  u32 a = R32((u32)(r_ecx)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00610f01: jne 0x610f11 */ if (!fZ) goto L_00610f11;
L_00610f03:; BB(0x00610f03);
    /* 00610f03: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00610f06: cmp dword ptr [edx + 4], 0 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00610f0a: jne 0x610f11 */ if (!fZ) goto L_00610f11;
L_00610f0c:; BB(0x00610f0c);
    /* 00610f0c: jmp 0x611094 */ goto L_00611094;
L_00610f11:; BB(0x00610f11);
    /* 00610f11: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00610f18: jmp 0x610f23 */ goto L_00610f23;
L_00610f1a:; BB(0x00610f1a);
    /* 00610f1a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00610f1d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00610f20: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_00610f23:; BB(0x00610f23);
    /* 00610f23: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00610f26: cmp ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00610f29: jge 0x610f48 */ if ((fS==fO)) goto L_00610f48;
L_00610f2b:; BB(0x00610f2b);
    /* 00610f2b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00610f2e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00610f2f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00610f32: imul ecx, ecx, 0x48 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x48u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00610f35: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00610f38: call 0x610810 */ r_esp -= 4; W32(r_esp, 0x610f3du); f_00610810();
    /* 00610f3d: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00610f40: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00610f42: je 0x610f46 */ if (fZ) goto L_00610f46;
L_00610f44:; BB(0x00610f44);
    /* 00610f44: jmp 0x610f48 */ goto L_00610f48;
L_00610f46:; BB(0x00610f46);
    /* 00610f46: jmp 0x610f1a */ goto L_00610f1a;
L_00610f48:; BB(0x00610f48);
    /* 00610f48: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00610f4b: cmp ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00610f4e: jl 0x610f55 */ if ((fS!=fO)) goto L_00610f55;
L_00610f50:; BB(0x00610f50);
    /* 00610f50: jmp 0x611094 */ goto L_00611094;
L_00610f55:; BB(0x00610f55);
    /* 00610f55: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00610f58: imul edx, edx, 0x48 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x48u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00610f5b: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00610f5e: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00610f61: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00610f64: cmp dword ptr [eax + 0x30], 0 */ {  u32 a = R32((u32)(r_eax+0x30u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00610f68: jge 0x610f6f */ if ((fS==fO)) goto L_00610f6f;
L_00610f6a:; BB(0x00610f6a);
    /* 00610f6a: jmp 0x611094 */ goto L_00611094;
L_00610f6f:; BB(0x00610f6f);
    /* 00610f6f: movzx ecx, byte ptr [ebp + 0xc] */ r_ecx = (u32)R8((u32)(r_ebp+0xcu));
    /* 00610f73: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00610f75: jne 0x610fa2 */ if (!fZ) goto L_00610fa2;
L_00610f77:; BB(0x00610f77);
    /* 00610f77: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00610f7a: cmp dword ptr [edx + 0x14], 0 */ {  u32 a = R32((u32)(r_edx+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00610f7e: jle 0x610fa2 */ if ((fZ||fS!=fO)) goto L_00610fa2;
L_00610f80:; BB(0x00610f80);
    /* 00610f80: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00610f83: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 00610f86: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00610f87: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 00610f8d: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 00610f90: call 0x6085e0 */ r_esp -= 4; W32(r_esp, 0x610f95u); f_006085e0();
    /* 00610f95: fcomp qword ptr [0x6bc270] */ fx_compare(ST(0), R_F64((u32)(0x6bc270u))); FPOP();
    /* 00610f9b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00610f9d: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 00610fa0: jp 0x610fbc */ if (fP) goto L_00610fbc;
L_00610fa2:; BB(0x00610fa2);
    /* 00610fa2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00610fa5: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 00610fa8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00610fa9: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 00610faf: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 00610fb2: call 0x609980 */ r_esp -= 4; W32(r_esp, 0x610fb7u); f_00609980();
    /* 00610fb7: jmp 0x611094 */ goto L_00611094;
L_00610fbc:; BB(0x00610fbc);
    /* 00610fbc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00610fbf: fld dword ptr [eax + 0x38] */ FPUSH(R_F32((u32)(r_eax+0x38u)));
    /* 00610fc2: fcomp qword ptr [0x6b2c50] */ fx_compare(ST(0), R_F64((u32)(0x6b2c50u))); FPOP();
    /* 00610fc8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00610fca: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 00610fcd: jp 0x610fdd */ if (fP) goto L_00610fdd;
L_00610fcf:; BB(0x00610fcf);
    /* 00610fcf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00610fd2: cmp dword ptr [ecx + 0x34], 0 */ {  u32 a = R32((u32)(r_ecx+0x34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00610fd6: je 0x610fdd */ if (fZ) goto L_00610fdd;
L_00610fd8:; BB(0x00610fd8);
    /* 00610fd8: jmp 0x611094 */ goto L_00611094;
L_00610fdd:; BB(0x00610fdd);
    /* 00610fdd: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00610fe0: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 00610fe3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00610fe4: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 00610fea: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 00610fed: call 0x609910 */ r_esp -= 4; W32(r_esp, 0x610ff2u); f_00609910();
    /* 00610ff2: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00610ff5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00610ff7: je 0x610ffe */ if (fZ) goto L_00610ffe;
L_00610ff9:; BB(0x00610ff9);
    /* 00610ff9: jmp 0x611094 */ goto L_00611094;
L_00610ffe:; BB(0x00610ffe);
    /* 00610ffe: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 00611004: call 0x5f3e50 */ r_esp -= 4; W32(r_esp, 0x611009u); f_005f3e50();
    /* 00611009: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061100c: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 0061100f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00611012: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 00611015: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00611016: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 0061101c: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 0061101f: call 0x6085e0 */ r_esp -= 4; W32(r_esp, 0x611024u); f_006085e0();
    /* 00611024: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00611027: fstp dword ptr [edx + 0x3c] */ W_F32((u32)(r_edx+0x3cu), ST(0)); FPOP();
    /* 0061102a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061102d: fld dword ptr [eax + 0x3c] */ FPUSH(R_F32((u32)(r_eax+0x3cu)));
    /* 00611030: fchs  */ ST(0) = -ST(0);
    /* 00611032: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00611035: fidiv dword ptr [ecx + 0x14] */ ST(0) = ST(0) / (long double)(i32)R32((u32)(r_ecx+0x14u));
    /* 00611038: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061103b: fstp dword ptr [edx + 0x38] */ W_F32((u32)(r_edx+0x38u), ST(0)); FPOP();
    /* 0061103e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00611041: fld dword ptr [eax + 0x38] */ FPUSH(R_F32((u32)(r_eax+0x38u)));
    /* 00611044: fstp dword ptr [ebp - 0x10] */ W_F32((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 00611047: fld dword ptr [ebp - 0x10] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff0u)));
    /* 0061104a: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061104d: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 00611050: call 0x68732a */ r_esp -= 4; W32(r_esp, 0x611055u); f_0068732a();
    /* 00611055: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00611058: fstp dword ptr [ebp - 0x20] */ W_F32((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
    /* 0061105b: fld dword ptr [ebp - 0x20] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe0u)));
    /* 0061105e: fcomp qword ptr [0x6bc270] */ fx_compare(ST(0), R_F64((u32)(0x6bc270u))); FPOP();
    /* 00611064: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00611066: test ah, 1 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00611069: je 0x611082 */ if (fZ) goto L_00611082;
L_0061106b:; BB(0x0061106b);
    /* 0061106b: push 0x167 */ { u32 v = 0x167u; r_esp -= 4; W32(r_esp, v); }
    /* 00611070: push 0x6d84a0 */ { u32 v = 0x6d84a0u; r_esp -= 4; W32(r_esp, v); }
    /* 00611075: push 0x6d84b8 */ { u32 v = 0x6d84b8u; r_esp -= 4; W32(r_esp, v); }
    /* 0061107a: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x61107fu); f_005e9f20();
    /* 0061107f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00611082:; BB(0x00611082);
    /* 00611082: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00611085: fldz  */ FPUSH(0.0);
    /* 00611087: fstp dword ptr [edx + 0x40] */ W_F32((u32)(r_edx+0x40u), ST(0)); FPOP();
    /* 0061108a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061108d: mov dword ptr [eax + 0x44], 2 */ W32((u32)(r_eax+0x44u), 0x2u);
L_00611094:; BB(0x00611094);
    /* 00611094: mov esp, ebp */ r_esp = r_ebp;
    /* 00611096: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00611097: ret  */ FN_RET(0x00610e70); r_esp += 4; return;
}

void f_006110a0(void) /* sciSetup::func_006110a0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006110a0);
    /* 006110a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006110a1: mov ebp, esp */ r_ebp = r_esp;
    /* 006110a3: sub esp, 0xf8 */ {  u32 a = r_esp; u32 b = 0xf8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006110a9: cmp dword ptr [0x15e55f4], 0 */ {  u32 a = R32((u32)(0x15e55f4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006110b0: jne 0x6110be */ if (!fZ) goto L_006110be;
L_006110b2:; BB(0x006110b2);
    /* 006110b2: mov dword ptr [ebp - 0xec], 0 */ W32((u32)(r_ebp+0xffffff14u), 0x0u);
    /* 006110bc: jmp 0x6110d7 */ goto L_006110d7;
L_006110be:; BB(0x006110be);
    /* 006110be: mov eax, dword ptr [0x15e55f8] */ r_eax = R32((u32)(0x15e55f8u));
    /* 006110c3: sub eax, dword ptr [0x15e55f4] */ {  u32 a = r_eax; u32 b = R32((u32)(0x15e55f4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006110c9: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 006110ca: mov ecx, 0x48 */ r_ecx = 0x48u;
    /* 006110cf: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x006110cf, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x006110cf, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 006110d1: mov dword ptr [ebp - 0xec], eax */ W32((u32)(r_ebp+0xffffff14u), r_eax);
L_006110d7:; BB(0x006110d7);
    /* 006110d7: mov edx, dword ptr [ebp - 0xec] */ r_edx = R32((u32)(r_ebp+0xffffff14u));
    /* 006110dd: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 006110e0: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006110e4: je 0x611136 */ if (fZ) goto L_00611136;
L_006110e6:; BB(0x006110e6);
    /* 006110e6: cmp dword ptr [0x15e55f4], 0 */ {  u32 a = R32((u32)(0x15e55f4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006110ed: jne 0x6110fb */ if (!fZ) goto L_006110fb;
L_006110ef:; BB(0x006110ef);
    /* 006110ef: mov dword ptr [ebp - 0xf0], 0 */ W32((u32)(r_ebp+0xffffff10u), 0x0u);
    /* 006110f9: jmp 0x611114 */ goto L_00611114;
L_006110fb:; BB(0x006110fb);
    /* 006110fb: mov eax, dword ptr [0x15e55f8] */ r_eax = R32((u32)(0x15e55f8u));
    /* 00611100: sub eax, dword ptr [0x15e55f4] */ {  u32 a = r_eax; u32 b = R32((u32)(0x15e55f4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00611106: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00611107: mov ecx, 0x48 */ r_ecx = 0x48u;
    /* 0061110c: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0061110c, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0061110c, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0061110e: mov dword ptr [ebp - 0xf0], eax */ W32((u32)(r_ebp+0xffffff10u), r_eax);
L_00611114:; BB(0x00611114);
    /* 00611114: cmp dword ptr [ebp - 0xf0], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0061111b: ja 0x611123 */ if ((!fC&&!fZ)) goto L_00611123;
L_0061111d:; BB(0x0061111d);
    /* 0061111d: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x611123u); call_ind(t); }
L_00611123:; BB(0x00611123);
    /* 00611123: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00611125: imul edx, edx, 0x48 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x48u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00611128: add edx, dword ptr [0x15e55f4] */ {  u32 a = r_edx; u32 b = R32((u32)(0x15e55f4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061112e: mov dword ptr [ebp - 0xf4], edx */ W32((u32)(r_ebp+0xffffff0cu), r_edx);
    /* 00611134: jmp 0x611140 */ goto L_00611140;
L_00611136:; BB(0x00611136);
    /* 00611136: mov dword ptr [ebp - 0xf4], 0 */ W32((u32)(r_ebp+0xffffff0cu), 0x0u);
L_00611140:; BB(0x00611140);
    /* 00611140: mov eax, dword ptr [ebp - 0xf4] */ r_eax = R32((u32)(r_ebp+0xffffff0cu));
    /* 00611146: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00611149: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061114c: cmp dword ptr [ecx], 0 */ {  u32 a = R32((u32)(r_ecx)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061114f: jne 0x61115f */ if (!fZ) goto L_0061115f;
L_00611151:; BB(0x00611151);
    /* 00611151: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00611154: cmp dword ptr [edx + 4], 0 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00611158: jne 0x61115f */ if (!fZ) goto L_0061115f;
L_0061115a:; BB(0x0061115a);
    /* 0061115a: jmp 0x6112e9 */ goto L_006112e9;
L_0061115f:; BB(0x0061115f);
    /* 0061115f: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00611166: jmp 0x611171 */ goto L_00611171;
L_00611168:; BB(0x00611168);
    /* 00611168: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061116b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061116e: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_00611171:; BB(0x00611171);
    /* 00611171: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00611174: cmp ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00611177: jge 0x611196 */ if ((fS==fO)) goto L_00611196;
L_00611179:; BB(0x00611179);
    /* 00611179: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061117c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061117d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00611180: imul ecx, ecx, 0x48 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x48u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00611183: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00611186: call 0x610810 */ r_esp -= 4; W32(r_esp, 0x61118bu); f_00610810();
    /* 0061118b: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0061118e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00611190: je 0x611194 */ if (fZ) goto L_00611194;
L_00611192:; BB(0x00611192);
    /* 00611192: jmp 0x611196 */ goto L_00611196;
L_00611194:; BB(0x00611194);
    /* 00611194: jmp 0x611168 */ goto L_00611168;
L_00611196:; BB(0x00611196);
    /* 00611196: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00611199: cmp ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061119c: jl 0x6111a3 */ if ((fS!=fO)) goto L_006111a3;
L_0061119e:; BB(0x0061119e);
    /* 0061119e: jmp 0x6112e9 */ goto L_006112e9;
L_006111a3:; BB(0x006111a3);
    /* 006111a3: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006111a6: imul edx, edx, 0x48 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x48u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006111a9: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006111ac: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 006111af: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006111b2: cmp dword ptr [eax + 0x30], 0 */ {  u32 a = R32((u32)(r_eax+0x30u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006111b6: jge 0x6111cb */ if ((fS==fO)) goto L_006111cb;
L_006111b8:; BB(0x006111b8);
    /* 006111b8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006111bb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006111bc: mov ecx, 0x15e55f0 */ r_ecx = 0x15e55f0u;
    /* 006111c1: call 0x6127f0 */ r_esp -= 4; W32(r_esp, 0x6111c6u); f_006127f0();
    /* 006111c6: jmp 0x6112e9 */ goto L_006112e9;
L_006111cb:; BB(0x006111cb);
    /* 006111cb: movzx edx, byte ptr [ebp + 0xc] */ r_edx = (u32)R8((u32)(r_ebp+0xcu));
    /* 006111cf: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006111d1: jne 0x6111fd */ if (!fZ) goto L_006111fd;
L_006111d3:; BB(0x006111d3);
    /* 006111d3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006111d6: cmp dword ptr [eax + 0x14], 0 */ {  u32 a = R32((u32)(r_eax+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006111da: jle 0x6111fd */ if ((fZ||fS!=fO)) goto L_006111fd;
L_006111dc:; BB(0x006111dc);
    /* 006111dc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006111df: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 006111e2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006111e3: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 006111e8: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 006111eb: call 0x6085e0 */ r_esp -= 4; W32(r_esp, 0x6111f0u); f_006085e0();
    /* 006111f0: fcomp qword ptr [0x6bc270] */ fx_compare(ST(0), R_F64((u32)(0x6bc270u))); FPOP();
    /* 006111f6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006111f8: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 006111fb: jp 0x611226 */ if (fP) goto L_00611226;
L_006111fd:; BB(0x006111fd);
    /* 006111fd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006111ff: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00611202: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 00611205: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00611206: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 0061120b: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0061120e: call 0x609720 */ r_esp -= 4; W32(r_esp, 0x611213u); f_00609720();
    /* 00611213: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00611216: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00611217: mov ecx, 0x15e55f0 */ r_ecx = 0x15e55f0u;
    /* 0061121c: call 0x6127f0 */ r_esp -= 4; W32(r_esp, 0x611221u); f_006127f0();
    /* 00611221: jmp 0x6112e9 */ goto L_006112e9;
L_00611226:; BB(0x00611226);
    /* 00611226: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00611229: fld dword ptr [edx + 0x38] */ FPUSH(R_F32((u32)(r_edx+0x38u)));
    /* 0061122c: fcomp qword ptr [0x6b2c50] */ fx_compare(ST(0), R_F64((u32)(0x6b2c50u))); FPOP();
    /* 00611232: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00611234: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 00611237: jp 0x611247 */ if (fP) goto L_00611247;
L_00611239:; BB(0x00611239);
    /* 00611239: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061123c: cmp dword ptr [eax + 0x34], 0 */ {  u32 a = R32((u32)(r_eax+0x34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00611240: je 0x611247 */ if (fZ) goto L_00611247;
L_00611242:; BB(0x00611242);
    /* 00611242: jmp 0x6112e9 */ goto L_006112e9;
L_00611247:; BB(0x00611247);
    /* 00611247: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 0061124d: call 0x5f3e50 */ r_esp -= 4; W32(r_esp, 0x611252u); f_005f3e50();
    /* 00611252: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00611255: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 00611258: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061125b: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 0061125e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061125f: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 00611265: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 00611268: call 0x6085e0 */ r_esp -= 4; W32(r_esp, 0x61126du); f_006085e0();
    /* 0061126d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00611270: fstp dword ptr [edx + 0x3c] */ W_F32((u32)(r_edx+0x3cu), ST(0)); FPOP();
    /* 00611273: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00611276: fld dword ptr [eax + 0x3c] */ FPUSH(R_F32((u32)(r_eax+0x3cu)));
    /* 00611279: fchs  */ ST(0) = -ST(0);
    /* 0061127b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061127e: fidiv dword ptr [ecx + 0x14] */ ST(0) = ST(0) / (long double)(i32)R32((u32)(r_ecx+0x14u));
    /* 00611281: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00611284: fstp dword ptr [edx + 0x38] */ W_F32((u32)(r_edx+0x38u), ST(0)); FPOP();
    /* 00611287: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061128a: fld dword ptr [eax + 0x38] */ FPUSH(R_F32((u32)(r_eax+0x38u)));
    /* 0061128d: fstp dword ptr [ebp - 0xe8] */ W_F32((u32)(r_ebp+0xffffff18u), ST(0)); FPOP();
    /* 00611293: fld dword ptr [ebp - 0xe8] */ FPUSH(R_F32((u32)(r_ebp+0xffffff18u)));
    /* 00611299: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061129c: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0061129f: call 0x68732a */ r_esp -= 4; W32(r_esp, 0x6112a4u); f_0068732a();
    /* 006112a4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006112a7: fstp dword ptr [ebp - 0xf8] */ W_F32((u32)(r_ebp+0xffffff08u), ST(0)); FPOP();
    /* 006112ad: fld dword ptr [ebp - 0xf8] */ FPUSH(R_F32((u32)(r_ebp+0xffffff08u)));
    /* 006112b3: fcomp qword ptr [0x6bc270] */ fx_compare(ST(0), R_F64((u32)(0x6bc270u))); FPOP();
    /* 006112b9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006112bb: test ah, 1 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006112be: je 0x6112d7 */ if (fZ) goto L_006112d7;
L_006112c0:; BB(0x006112c0);
    /* 006112c0: push 0x199 */ { u32 v = 0x199u; r_esp -= 4; W32(r_esp, v); }
    /* 006112c5: push 0x6d84a0 */ { u32 v = 0x6d84a0u; r_esp -= 4; W32(r_esp, v); }
    /* 006112ca: push 0x6d84b8 */ { u32 v = 0x6d84b8u; r_esp -= 4; W32(r_esp, v); }
    /* 006112cf: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x6112d4u); f_005e9f20();
    /* 006112d4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006112d7:; BB(0x006112d7);
    /* 006112d7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006112da: fldz  */ FPUSH(0.0);
    /* 006112dc: fstp dword ptr [edx + 0x40] */ W_F32((u32)(r_edx+0x40u), ST(0)); FPOP();
    /* 006112df: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006112e2: mov dword ptr [eax + 0x44], 1 */ W32((u32)(r_eax+0x44u), 0x1u);
L_006112e9:; BB(0x006112e9);
    /* 006112e9: mov esp, ebp */ r_esp = r_ebp;
    /* 006112eb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006112ec: ret  */ FN_RET(0x006110a0); r_esp += 4; return;
}

