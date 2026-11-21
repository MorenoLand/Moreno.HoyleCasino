#include "protos.h"

void f_00542960(void) /* VideoBlackjackAI::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00542960);
    /* 00542960: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00542961: mov ebp, esp */ r_ebp = r_esp;
    /* 00542963: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00542964: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00542967: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054296a: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x54296fu); f_005e9e20();
    /* 0054296f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00542972: mov dword ptr [eax], 0x6c6598 */ W32((u32)(r_eax), 0x6c6598u);
    /* 00542978: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054297b: mov esp, ebp */ r_esp = r_ebp;
    /* 0054297d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054297e: ret  */ FN_RET(0x00542960); r_esp += 4; return;
}

void f_00542a00(void) /* videoblackjackai::func_00542a00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00542a00);
    /* 00542a00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00542a01: mov ebp, esp */ r_ebp = r_esp;
    /* 00542a03: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00542a06: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00542a09: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00542a0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00542a0d: mov ecx, dword ptr [0x793404] */ r_ecx = R32((u32)(0x793404u));
    /* 00542a13: call 0x54a770 */ r_esp -= 4; W32(r_esp, 0x542a18u); f_0054a770();
    /* 00542a18: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00542a1b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00542a1d: je 0x542a29 */ if (fZ) goto L_00542a29;
L_00542a1f:; BB(0x00542a1f);
    /* 00542a1f: mov eax, 2 */ r_eax = 0x2u;
    /* 00542a24: jmp 0x542b5f */ goto L_00542b5f;
L_00542a29:; BB(0x00542a29);
    /* 00542a29: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00542a2c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00542a2d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00542a30: call 0x542b80 */ r_esp -= 4; W32(r_esp, 0x542a35u); f_00542b80();
    /* 00542a35: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00542a38: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00542a3b: call 0x542d50 */ r_esp -= 4; W32(r_esp, 0x542a40u); f_00542d50();
    /* 00542a40: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00542a43: mov eax, dword ptr [0x793404] */ r_eax = R32((u32)(0x793404u));
    /* 00542a48: mov cl, byte ptr [eax + 0x24] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x24u))) & 0xffu);
    /* 00542a4b: mov byte ptr [ebp - 1], cl */ W8((u32)(r_ebp+0xffffffffu), (u8)r_ecx);
    /* 00542a4e: movzx edx, byte ptr [ebp - 1] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 00542a52: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00542a54: jne 0x542a6a */ if (!fZ) goto L_00542a6a;
L_00542a56:; BB(0x00542a56);
    /* 00542a56: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 00542a5b: mov ecx, dword ptr [eax + 0x4f14] */ r_ecx = R32((u32)(r_eax+0x4f14u));
    /* 00542a61: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00542a64: cmp dword ptr [ebp - 0x14], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00542a68: jne 0x542aa9 */ if (!fZ) goto L_00542aa9;
L_00542a6a:; BB(0x00542a6a);
    /* 00542a6a: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00542a6d: imul edx, edx, 0x28 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x28u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00542a70: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00542a73: mov ecx, dword ptr [edx + eax*4 + 0x73ae88] */ r_ecx = R32((u32)(r_edx+r_eax*4+0x73ae88u));
    /* 00542a7a: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00542a7d: cmp dword ptr [ebp - 0xc], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00542a81: jne 0x542a9a */ if (!fZ) goto L_00542a9a;
L_00542a83:; BB(0x00542a83);
    /* 00542a83: push 0x8b */ { u32 v = 0x8bu; r_esp -= 4; W32(r_esp, v); }
    /* 00542a88: push 0x6c65a8 */ { u32 v = 0x6c65a8u; r_esp -= 4; W32(r_esp, v); }
    /* 00542a8d: push 0x6c659c */ { u32 v = 0x6c659cu; r_esp -= 4; W32(r_esp, v); }
    /* 00542a92: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x542a97u); f_005e9f20();
    /* 00542a97: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00542a9a:; BB(0x00542a9a);
    /* 00542a9a: cmp dword ptr [ebp - 0xc], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00542a9e: jne 0x542aa7 */ if (!fZ) goto L_00542aa7;
L_00542aa0:; BB(0x00542aa0);
    /* 00542aa0: mov dword ptr [ebp - 0xc], 2 */ W32((u32)(r_ebp+0xfffffff4u), 0x2u);
L_00542aa7:; BB(0x00542aa7);
    /* 00542aa7: jmp 0x542abc */ goto L_00542abc;
L_00542aa9:; BB(0x00542aa9);
    /* 00542aa9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00542aac: imul eax, eax, 0x28 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x28u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00542aaf: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00542ab2: mov edx, dword ptr [eax + ecx*4 + 0x73a9b0] */ r_edx = R32((u32)(r_eax+r_ecx*4+0x73a9b0u));
    /* 00542ab9: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_00542abc:; BB(0x00542abc);
    /* 00542abc: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00542abf: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00542ac2: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00542ac5: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00542ac8: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00542acb: cmp dword ptr [ebp - 0x1c], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00542acf: ja 0x542b24 */ if ((!fC&&!fZ)) goto L_00542b24;
L_00542ad1:; BB(0x00542ad1);
    /* 00542ad1: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00542ad4: jmp dword ptr [edx*4 + 0x542b68] */ { u32 t = R32((u32)(r_edx*4+0x542b68u)); switch (t) { case 0x542adbu: goto L_00542adb; case 0x542ae2u: goto L_00542ae2; case 0x542ae9u: goto L_00542ae9; case 0x542b16u: goto L_00542b16; case 0x542b1du: goto L_00542b1d; default: UNSUP(0x00542ad4, "jump table entry is not a known target"); } }
L_00542adb:; BB(0x00542adb);
    /* 00542adb: mov eax, 1 */ r_eax = 0x1u;
    /* 00542ae0: jmp 0x542b5f */ goto L_00542b5f;
L_00542ae2:; BB(0x00542ae2);
    /* 00542ae2: mov eax, 2 */ r_eax = 0x2u;
    /* 00542ae7: jmp 0x542b5f */ goto L_00542b5f;
L_00542ae9:; BB(0x00542ae9);
    /* 00542ae9: mov ecx, dword ptr [0x793404] */ r_ecx = R32((u32)(0x793404u));
    /* 00542aef: call 0x5497a0 */ r_esp -= 4; W32(r_esp, 0x542af4u); f_005497a0();
    /* 00542af4: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00542af7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00542af9: je 0x542b02 */ if (fZ) goto L_00542b02;
L_00542afb:; BB(0x00542afb);
    /* 00542afb: mov eax, 3 */ r_eax = 0x3u;
    /* 00542b00: jmp 0x542b5f */ goto L_00542b5f;
L_00542b02:; BB(0x00542b02);
    /* 00542b02: cmp dword ptr [ebp - 0x10], 0x12 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00542b06: jne 0x542b0f */ if (!fZ) goto L_00542b0f;
L_00542b08:; BB(0x00542b08);
    /* 00542b08: mov eax, 2 */ r_eax = 0x2u;
    /* 00542b0d: jmp 0x542b5f */ goto L_00542b5f;
L_00542b0f:; BB(0x00542b0f);
    /* 00542b0f: mov eax, 1 */ r_eax = 0x1u;
    /* 00542b14: jmp 0x542b5f */ goto L_00542b5f;
L_00542b16:; BB(0x00542b16);
    /* 00542b16: mov eax, 4 */ r_eax = 0x4u;
    /* 00542b1b: jmp 0x542b5f */ goto L_00542b5f;
L_00542b1d:; BB(0x00542b1d);
    /* 00542b1d: mov eax, 1 */ r_eax = 0x1u;
    /* 00542b22: jmp 0x542b5f */ goto L_00542b5f;
L_00542b24:; BB(0x00542b24);
    /* 00542b24: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00542b26: jne 0x542b3f */ if (!fZ) goto L_00542b3f;
L_00542b28:; BB(0x00542b28);
    /* 00542b28: push 0xa6 */ { u32 v = 0xa6u; r_esp -= 4; W32(r_esp, v); }
    /* 00542b2d: push 0x6c65a8 */ { u32 v = 0x6c65a8u; r_esp -= 4; W32(r_esp, v); }
    /* 00542b32: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00542b37: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x542b3cu); f_005e9f20();
    /* 00542b3c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00542b3f:; BB(0x00542b3f);
    /* 00542b3f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00542b41: jne 0x542b5a */ if (!fZ) goto L_00542b5a;
L_00542b43:; BB(0x00542b43);
    /* 00542b43: push 0xa9 */ { u32 v = 0xa9u; r_esp -= 4; W32(r_esp, v); }
    /* 00542b48: push 0x6c65a8 */ { u32 v = 0x6c65a8u; r_esp -= 4; W32(r_esp, v); }
    /* 00542b4d: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00542b52: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x542b57u); f_005e9f20();
    /* 00542b57: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00542b5a:; BB(0x00542b5a);
    /* 00542b5a: mov eax, 2 */ r_eax = 0x2u;
L_00542b5f:; BB(0x00542b5f);
    /* 00542b5f: mov esp, ebp */ r_esp = r_ebp;
    /* 00542b61: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00542b62: ret 4 */ FN_RET(0x00542a00); r_esp += 8; return;
}

