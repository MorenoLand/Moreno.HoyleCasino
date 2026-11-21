#include "protos.h"

void f_00401040(void) /* sub_401040 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00401040);
    /* 00401040: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00401041: mov ebp, esp */ r_ebp = r_esp;
    /* 00401043: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00401044: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00401047: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040104a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040104b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040104e: call 0x401060 */ r_esp -= 4; W32(r_esp, 0x401053u); f_00401060();
    /* 00401053: mov esp, ebp */ r_esp = r_ebp;
    /* 00401055: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00401056: ret 4 */ FN_RET(0x00401040); r_esp += 8; return;
}

void f_004011e0(void) /* sub_4011E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004011e0);
    /* 004011e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004011e1: mov ebp, esp */ r_ebp = r_esp;
    /* 004011e3: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004011e6: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 004011e9: mov dword ptr [ebp - 0x28], 8 */ W32((u32)(r_ebp+0xffffffd8u), 0x8u);
    /* 004011f0: mov dword ptr [ebp - 0x24], 0xa */ W32((u32)(r_ebp+0xffffffdcu), 0xau);
    /* 004011f7: mov dword ptr [ebp - 0x20], 2 */ W32((u32)(r_ebp+0xffffffe0u), 0x2u);
    /* 004011fe: mov dword ptr [ebp - 0x1c], 1 */ W32((u32)(r_ebp+0xffffffe4u), 0x1u);
    /* 00401205: mov dword ptr [ebp - 0x18], 5 */ W32((u32)(r_ebp+0xffffffe8u), 0x5u);
    /* 0040120c: mov dword ptr [ebp - 0x14], 5 */ W32((u32)(r_ebp+0xffffffecu), 0x5u);
    /* 00401213: mov dword ptr [ebp - 0x10], 8 */ W32((u32)(r_ebp+0xfffffff0u), 0x8u);
    /* 0040121a: mov dword ptr [ebp - 0xc], 4 */ W32((u32)(r_ebp+0xfffffff4u), 0x4u);
    /* 00401221: mov dword ptr [ebp - 8], 6 */ W32((u32)(r_ebp+0xfffffff8u), 0x6u);
    /* 00401228: mov dword ptr [ebp - 4], 0xa */ W32((u32)(r_ebp+0xfffffffcu), 0xau);
    /* 0040122f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00401232: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00401233: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x401238u); f_005dcb00();
    /* 00401238: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040123b: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0040123e: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00401241: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00401244: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 00401247: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0040124a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040124b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00401251: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00401253: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00401259: mov eax, dword ptr [edx + 0x170] */ r_eax = R32((u32)(r_edx+0x170u));
    /* 0040125f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x401261u); call_ind(t); }
    /* 00401261: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00401264: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00401267: mov eax, dword ptr [ebp + ecx*4 - 0x28] */ r_eax = R32((u32)(r_ebp+r_ecx*4+0xffffffd8u));
    /* 0040126b: mov esp, ebp */ r_esp = r_ebp;
    /* 0040126d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040126e: ret 4 */ FN_RET(0x004011e0); r_esp += 8; return;
}

void f_00401b40(void) /* sub_401B40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00401b40);
    /* 00401b40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00401b41: mov ebp, esp */ r_ebp = r_esp;
    /* 00401b43: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00401b46: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00401b49: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00401b4c: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00401b4f: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00401b52: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00401b55: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00401b58: jmp 0x401b63 */ goto L_00401b63;
L_00401b5a:; BB(0x00401b5a);
    /* 00401b5a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00401b5d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00401b60: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00401b63:; BB(0x00401b63);
    /* 00401b63: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00401b66: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00401b69: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00401b6c: jge 0x401bb1 */ if ((fS==fO)) goto L_00401bb1;
L_00401b6e:; BB(0x00401b6e);
    /* 00401b6e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00401b71: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00401b74: mov eax, dword ptr [edx + ecx*4 + 0x20] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x20u));
    /* 00401b78: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00401b7b: imul ecx, ecx, 0x1e0 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x1e0u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00401b81: cmp dword ptr [eax + ecx + 0x17c], 0 */ {  u32 a = R32((u32)(r_eax+r_ecx+0x17cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00401b89: jne 0x401baf */ if (!fZ) goto L_00401baf;
L_00401b8b:; BB(0x00401b8b);
    /* 00401b8b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00401b8d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00401b90: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00401b91: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00401b94: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00401b97: mov edx, dword ptr [ecx + eax*4 + 0x20] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 00401b9b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00401b9e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00401ba1: mov ecx, dword ptr [ecx + eax*4 + 0x20] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 00401ba5: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00401ba7: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 00401bad: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x401bafu); call_ind(t); }
L_00401baf:; BB(0x00401baf);
    /* 00401baf: jmp 0x401b5a */ goto L_00401b5a;
L_00401bb1:; BB(0x00401bb1);
    /* 00401bb1: mov esp, ebp */ r_esp = r_ebp;
    /* 00401bb3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00401bb4: ret 4 */ FN_RET(0x00401b40); r_esp += 8; return;
}

void f_00401bc0(void) /* sub_401BC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00401bc0);
    /* 00401bc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00401bc1: mov ebp, esp */ r_ebp = r_esp;
    /* 00401bc3: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00401bc6: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00401bc9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00401bd0: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00401bd7: mov byte ptr [ebp - 9], 0 */ W8((u32)(r_ebp+0xfffffff7u), 0x0u);
    /* 00401bdb: mov eax, dword ptr [0x7902f0] */ r_eax = R32((u32)(0x7902f0u));
    /* 00401be0: mov ecx, dword ptr [eax + 0x10dc] */ r_ecx = R32((u32)(r_eax+0x10dcu));
    /* 00401be6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00401be9: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00401bed: jl 0x401bfe */ if ((fS!=fO)) goto L_00401bfe;
L_00401bef:; BB(0x00401bef);
    /* 00401bef: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00401bf3: jg 0x401bfe */ if ((!fZ&&fS==fO)) goto L_00401bfe;
L_00401bf5:; BB(0x00401bf5);
    /* 00401bf5: mov dword ptr [ebp - 0x1c], 1 */ W32((u32)(r_ebp+0xffffffe4u), 0x1u);
    /* 00401bfc: jmp 0x401c05 */ goto L_00401c05;
L_00401bfe:; BB(0x00401bfe);
    /* 00401bfe: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_00401c05:; BB(0x00401c05);
    /* 00401c05: mov dl, byte ptr [ebp - 0x1c] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffe4u))) & 0xffu);
    /* 00401c08: mov byte ptr [ebp - 9], dl */ W8((u32)(r_ebp+0xfffffff7u), (u8)r_edx);
    /* 00401c0b: movzx eax, byte ptr [ebp - 9] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffff7u));
    /* 00401c0f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00401c11: je 0x401c90 */ if (fZ) goto L_00401c90;
L_00401c13:; BB(0x00401c13);
    /* 00401c13: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00401c16: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00401c17: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x401c1cu); f_005dcb00();
    /* 00401c1c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00401c1f: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00401c22: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00401c26: je 0x401c90 */ if (fZ) goto L_00401c90;
L_00401c28:; BB(0x00401c28);
    /* 00401c28: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00401c2b: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x401c30u); f_0063aac0();
    /* 00401c30: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00401c32: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00401c35: cmp dword ptr [ebp - 0x10], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00401c39: je 0x401c57 */ if (fZ) goto L_00401c57;
L_00401c3b:; BB(0x00401c3b);
    /* 00401c3b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00401c3e: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x401c43u); f_0063aac0();
    /* 00401c43: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00401c45: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00401c48: cmp dword ptr [ebp - 0x14], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00401c4c: je 0x401c57 */ if (fZ) goto L_00401c57;
L_00401c4e:; BB(0x00401c4e);
    /* 00401c4e: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 00401c55: jmp 0x401c5e */ goto L_00401c5e;
L_00401c57:; BB(0x00401c57);
    /* 00401c57: mov dword ptr [ebp - 0x20], 1 */ W32((u32)(r_ebp+0xffffffe0u), 0x1u);
L_00401c5e:; BB(0x00401c5e);
    /* 00401c5e: movzx ecx, byte ptr [ebp - 0x20] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffe0u));
    /* 00401c62: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00401c64: je 0x401c90 */ if (fZ) goto L_00401c90;
L_00401c66:; BB(0x00401c66);
    /* 00401c66: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00401c69: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00401c6a: mov ecx, dword ptr [0x7902f0] */ r_ecx = R32((u32)(0x7902f0u));
    /* 00401c70: call 0x407f50 */ r_esp -= 4; W32(r_esp, 0x401c75u); f_00407f50();
    /* 00401c75: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00401c78: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00401c7a: je 0x401c90 */ if (fZ) goto L_00401c90;
L_00401c7c:; BB(0x00401c7c);
    /* 00401c7c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00401c7e: push 0x311283 */ { u32 v = 0x311283u; r_esp -= 4; W32(r_esp, v); }
    /* 00401c83: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00401c89: call 0x5f2b20 */ r_esp -= 4; W32(r_esp, 0x401c8eu); f_005f2b20();
    /* 00401c8e: jmp 0x401ca0 */ goto L_00401ca0;
L_00401c90:; BB(0x00401c90);
    /* 00401c90: push 0x311283 */ { u32 v = 0x311283u; r_esp -= 4; W32(r_esp, v); }
    /* 00401c95: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00401c9b: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x401ca0u); f_005f2ba0();
L_00401ca0:; BB(0x00401ca0);
    /* 00401ca0: mov esp, ebp */ r_esp = r_ebp;
    /* 00401ca2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00401ca3: ret  */ FN_RET(0x00401bc0); r_esp += 4; return;
}

void f_00401cb0(void) /* sub_401CB0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00401cb0);
    /* 00401cb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00401cb1: mov ebp, esp */ r_ebp = r_esp;
    /* 00401cb3: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00401cb6: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00401cb9: mov ecx, dword ptr [0x7902f0] */ r_ecx = R32((u32)(0x7902f0u));
    /* 00401cbf: call 0x407c30 */ r_esp -= 4; W32(r_esp, 0x401cc4u); f_00407c30();
    /* 00401cc4: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00401cc7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00401cc9: je 0x401ce0 */ if (fZ) goto L_00401ce0;
L_00401ccb:; BB(0x00401ccb);
    /* 00401ccb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00401cce: mov edx, dword ptr [ecx + 0x68] */ r_edx = R32((u32)(r_ecx+0x68u));
    /* 00401cd1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00401cd4: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 00401cd7: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00401cd9: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00401cdc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x401cdeu); call_ind(t); }
    /* 00401cde: jmp 0x401cf3 */ goto L_00401cf3;
L_00401ce0:; BB(0x00401ce0);
    /* 00401ce0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00401ce3: mov edx, dword ptr [ecx + 0x68] */ r_edx = R32((u32)(r_ecx+0x68u));
    /* 00401ce6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00401ce9: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 00401cec: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00401cee: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00401cf1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x401cf3u); call_ind(t); }
L_00401cf3:; BB(0x00401cf3);
    /* 00401cf3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00401cfa: jmp 0x401d05 */ goto L_00401d05;
L_00401cfc:; BB(0x00401cfc);
    /* 00401cfc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00401cff: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00401d02: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00401d05:; BB(0x00401d05);
    /* 00401d05: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00401d09: jge 0x401e85 */ if ((fS==fO)) goto L_00401e85;
L_00401d0f:; BB(0x00401d0f);
    /* 00401d0f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00401d12: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00401d15: mov ecx, dword ptr [eax + edx*4 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 00401d19: call 0x402960 */ r_esp -= 4; W32(r_esp, 0x401d1eu); f_00402960();
    /* 00401d1e: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00401d22: je 0x401d86 */ if (fZ) goto L_00401d86;
L_00401d24:; BB(0x00401d24);
    /* 00401d24: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00401d27: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00401d28: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x401d2du); f_005dcb00();
    /* 00401d2d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00401d30: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00401d33: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00401d36: mov al, byte ptr [edx + 0x4a0] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x4a0u))) & 0xffu);
    /* 00401d3c: mov byte ptr [ebp - 0xd], al */ W8((u32)(r_ebp+0xfffffff3u), (u8)r_eax);
    /* 00401d3f: movzx ecx, byte ptr [ebp - 0xd] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffff3u));
    /* 00401d43: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00401d45: je 0x401d86 */ if (fZ) goto L_00401d86;
L_00401d47:; BB(0x00401d47);
    /* 00401d47: mov ecx, dword ptr [0x7902ec] */ r_ecx = R32((u32)(0x7902ecu));
    /* 00401d4d: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x401d52u); f_005da7b0();
    /* 00401d52: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00401d55: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00401d57: je 0x401d86 */ if (fZ) goto L_00401d86;
L_00401d59:; BB(0x00401d59);
    /* 00401d59: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00401d5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00401d5d: mov ecx, dword ptr [0x7902ec] */ r_ecx = R32((u32)(0x7902ecu));
    /* 00401d63: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00401d65: mov ecx, dword ptr [0x7902ec] */ r_ecx = R32((u32)(0x7902ecu));
    /* 00401d6b: mov eax, dword ptr [edx + 0x2c4] */ r_eax = R32((u32)(r_edx+0x2c4u));
    /* 00401d71: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x401d73u); call_ind(t); }
    /* 00401d73: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00401d76: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00401d78: jne 0x401d86 */ if (!fZ) goto L_00401d86;
L_00401d7a:; BB(0x00401d7a);
    /* 00401d7a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00401d7d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00401d7e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00401d81: call 0x401b40 */ r_esp -= 4; W32(r_esp, 0x401d86u); f_00401b40();
L_00401d86:; BB(0x00401d86);
    /* 00401d86: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00401d8a: jne 0x401e04 */ if (!fZ) goto L_00401e04;
L_00401d8c:; BB(0x00401d8c);
    /* 00401d8c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00401d8e: mov ecx, dword ptr [0x7902f0] */ r_ecx = R32((u32)(0x7902f0u));
    /* 00401d94: call 0x4094b0 */ r_esp -= 4; W32(r_esp, 0x401d99u); f_004094b0();
    /* 00401d99: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00401d9c: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00401da0: je 0x401def */ if (fZ) goto L_00401def;
L_00401da2:; BB(0x00401da2);
    /* 00401da2: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00401da5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00401da6: mov ecx, dword ptr [0x7902f0] */ r_ecx = R32((u32)(0x7902f0u));
    /* 00401dac: call 0x4091b0 */ r_esp -= 4; W32(r_esp, 0x401db1u); f_004091b0();
    /* 00401db1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00401db2: push 0x7902b8 */ { u32 v = 0x7902b8u; r_esp -= 4; W32(r_esp, v); }
    /* 00401db7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00401dba: call 0x401ec0 */ r_esp -= 4; W32(r_esp, 0x401dbfu); f_00401ec0();
    /* 00401dbf: push 0x7902b8 */ { u32 v = 0x7902b8u; r_esp -= 4; W32(r_esp, v); }
    /* 00401dc4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00401dc7: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 00401dca: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00401dcd: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 00401dd0: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00401dd2: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00401dd8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x401ddau); call_ind(t); }
    /* 00401dda: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00401ddd: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 00401de0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00401de3: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 00401de6: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00401de8: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00401deb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x401dedu); call_ind(t); }
    /* 00401ded: jmp 0x401e02 */ goto L_00401e02;
L_00401def:; BB(0x00401def);
    /* 00401def: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00401df2: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 00401df5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00401df8: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 00401dfb: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00401dfd: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00401e00: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x401e02u); call_ind(t); }
L_00401e02:; BB(0x00401e02);
    /* 00401e02: jmp 0x401e80 */ goto L_00401e80;
L_00401e04:; BB(0x00401e04);
    /* 00401e04: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00401e08: jne 0x401e80 */ if (!fZ) goto L_00401e80;
L_00401e0a:; BB(0x00401e0a);
    /* 00401e0a: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00401e0c: mov ecx, dword ptr [0x7902f0] */ r_ecx = R32((u32)(0x7902f0u));
    /* 00401e12: call 0x4094b0 */ r_esp -= 4; W32(r_esp, 0x401e17u); f_004094b0();
    /* 00401e17: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00401e1a: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00401e1e: je 0x401e6d */ if (fZ) goto L_00401e6d;
L_00401e20:; BB(0x00401e20);
    /* 00401e20: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00401e23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00401e24: mov ecx, dword ptr [0x7902f0] */ r_ecx = R32((u32)(0x7902f0u));
    /* 00401e2a: call 0x4091d0 */ r_esp -= 4; W32(r_esp, 0x401e2fu); f_004091d0();
    /* 00401e2f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00401e30: push 0x7902b8 */ { u32 v = 0x7902b8u; r_esp -= 4; W32(r_esp, v); }
    /* 00401e35: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00401e38: call 0x401ec0 */ r_esp -= 4; W32(r_esp, 0x401e3du); f_00401ec0();
    /* 00401e3d: push 0x7902b8 */ { u32 v = 0x7902b8u; r_esp -= 4; W32(r_esp, v); }
    /* 00401e42: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00401e45: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00401e48: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00401e4b: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 00401e4e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00401e50: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00401e56: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x401e58u); call_ind(t); }
    /* 00401e58: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00401e5b: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 00401e5e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00401e61: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 00401e64: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00401e66: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00401e69: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x401e6bu); call_ind(t); }
    /* 00401e6b: jmp 0x401e80 */ goto L_00401e80;
L_00401e6d:; BB(0x00401e6d);
    /* 00401e6d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00401e70: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 00401e73: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00401e76: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 00401e79: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00401e7b: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00401e7e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x401e80u); call_ind(t); }
L_00401e80:; BB(0x00401e80);
    /* 00401e80: jmp 0x401cfc */ goto L_00401cfc;
L_00401e85:; BB(0x00401e85);
    /* 00401e85: mov ecx, dword ptr [0x7902ec] */ r_ecx = R32((u32)(0x7902ecu));
    /* 00401e8b: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x401e90u); f_005da7b0();
    /* 00401e90: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00401e93: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00401e95: je 0x401eb6 */ if (fZ) goto L_00401eb6;
L_00401e97:; BB(0x00401e97);
    /* 00401e97: cmp dword ptr [0x163068c], 0 */ {  u32 a = R32((u32)(0x163068cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00401e9e: jne 0x401eb6 */ if (!fZ) goto L_00401eb6;
L_00401ea0:; BB(0x00401ea0);
    /* 00401ea0: mov edx, dword ptr [0x7902ec] */ r_edx = R32((u32)(0x7902ecu));
    /* 00401ea6: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00401ea8: mov ecx, dword ptr [0x7902ec] */ r_ecx = R32((u32)(0x7902ecu));
    /* 00401eae: mov edx, dword ptr [eax + 0x2f0] */ r_edx = R32((u32)(r_eax+0x2f0u));
    /* 00401eb4: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x401eb6u); call_ind(t); }
L_00401eb6:; BB(0x00401eb6);
    /* 00401eb6: mov esp, ebp */ r_esp = r_ebp;
    /* 00401eb8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00401eb9: ret  */ FN_RET(0x00401cb0); r_esp += 4; return;
}

void f_00401ec0(void) /* sub_401EC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00401ec0);
    /* 00401ec0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00401ec1: mov ebp, esp */ r_ebp = r_esp;
    /* 00401ec3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00401ec4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00401ec7: cmp dword ptr [ebp + 0xc], 8 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00401ecb: jge 0x401ee5 */ if ((fS==fO)) goto L_00401ee5;
L_00401ecd:; BB(0x00401ecd);
    /* 00401ecd: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00401ed0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00401ed1: push 0x6b2828 */ { u32 v = 0x6b2828u; r_esp -= 4; W32(r_esp, v); }
    /* 00401ed6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00401ed9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00401eda: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x401ee0u); call_ind(t); }
    /* 00401ee0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00401ee3: jmp 0x401f22 */ goto L_00401f22;
L_00401ee5:; BB(0x00401ee5);
    /* 00401ee5: cmp dword ptr [ebp + 0x10], 2 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00401ee9: jne 0x401f0c */ if (!fZ) goto L_00401f0c;
L_00401eeb:; BB(0x00401eeb);
    /* 00401eeb: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00401eee: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00401eef: push 0x6b280c */ { u32 v = 0x6b280cu; r_esp -= 4; W32(r_esp, v); }
    /* 00401ef4: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x401ef9u); f_00630f40();
    /* 00401ef9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00401efc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00401efd: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00401f00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00401f01: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x401f07u); call_ind(t); }
    /* 00401f07: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00401f0a: jmp 0x401f22 */ goto L_00401f22;
L_00401f0c:; BB(0x00401f0c);
    /* 00401f0c: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00401f0f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00401f10: push 0x6b2828 */ { u32 v = 0x6b2828u; r_esp -= 4; W32(r_esp, v); }
    /* 00401f15: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00401f18: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00401f19: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x401f1fu); call_ind(t); }
    /* 00401f1f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00401f22:; BB(0x00401f22);
    /* 00401f22: mov esp, ebp */ r_esp = r_ebp;
    /* 00401f24: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00401f25: ret 0xc */ FN_RET(0x00401ec0); r_esp += 16; return;
}

void f_00401f30(void) /* sub_401F30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00401f30);
    /* 00401f30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00401f31: mov ebp, esp */ r_ebp = r_esp;
    /* 00401f33: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00401f34: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00401f37: mov ecx, dword ptr [0x7902ec] */ r_ecx = R32((u32)(0x7902ecu));
    /* 00401f3d: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x401f42u); f_005da7b0();
    /* 00401f42: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00401f45: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00401f47: je 0x401f68 */ if (fZ) goto L_00401f68;
L_00401f49:; BB(0x00401f49);
    /* 00401f49: mov ecx, dword ptr [0x7902ec] */ r_ecx = R32((u32)(0x7902ecu));
    /* 00401f4f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00401f51: mov ecx, dword ptr [0x7902ec] */ r_ecx = R32((u32)(0x7902ecu));
    /* 00401f57: mov eax, dword ptr [edx + 0x2d4] */ r_eax = R32((u32)(r_edx+0x2d4u));
    /* 00401f5d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x401f5fu); call_ind(t); }
    /* 00401f5f: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00401f62: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00401f64: jne 0x401f68 */ if (!fZ) goto L_00401f68;
L_00401f66:; BB(0x00401f66);
    /* 00401f66: jmp 0x401fa5 */ goto L_00401fa5;
L_00401f68:; BB(0x00401f68);
    /* 00401f68: mov ecx, dword ptr [0x7902f0] */ r_ecx = R32((u32)(0x7902f0u));
    /* 00401f6e: call 0x408ec0 */ r_esp -= 4; W32(r_esp, 0x401f73u); f_00408ec0();
    /* 00401f73: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00401f76: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00401f78: jne 0x401f93 */ if (!fZ) goto L_00401f93;
L_00401f7a:; BB(0x00401f7a);
    /* 00401f7a: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00401f80: call 0x5df650 */ r_esp -= 4; W32(r_esp, 0x401f85u); f_005df650();
    /* 00401f85: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00401f86: mov ecx, dword ptr [0x7902f4] */ r_ecx = R32((u32)(0x7902f4u));
    /* 00401f8c: call 0x404160 */ r_esp -= 4; W32(r_esp, 0x401f91u); f_00404160();
    /* 00401f91: jmp 0x401fa5 */ goto L_00401fa5;
L_00401f93:; BB(0x00401f93);
    /* 00401f93: push 0xaa */ { u32 v = 0xaau; r_esp -= 4; W32(r_esp, v); }
    /* 00401f98: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00401f9a: mov ecx, dword ptr [0x7902ec] */ r_ecx = R32((u32)(0x7902ecu));
    /* 00401fa0: call 0x5db8c0 */ r_esp -= 4; W32(r_esp, 0x401fa5u); f_005db8c0();
L_00401fa5:; BB(0x00401fa5);
    /* 00401fa5: mov esp, ebp */ r_esp = r_ebp;
    /* 00401fa7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00401fa8: ret  */ FN_RET(0x00401f30); r_esp += 4; return;
}

void f_00401fb0(void) /* sub_401FB0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00401fb0);
    /* 00401fb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00401fb1: mov ebp, esp */ r_ebp = r_esp;
    /* 00401fb3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00401fb4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00401fb7: push 0xaf */ { u32 v = 0xafu; r_esp -= 4; W32(r_esp, v); }
    /* 00401fbc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00401fbe: mov ecx, dword ptr [0x7902ec] */ r_ecx = R32((u32)(0x7902ecu));
    /* 00401fc4: call 0x5db7d0 */ r_esp -= 4; W32(r_esp, 0x401fc9u); f_005db7d0();
    /* 00401fc9: mov esp, ebp */ r_esp = r_ebp;
    /* 00401fcb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00401fcc: ret  */ FN_RET(0x00401fb0); r_esp += 4; return;
}

void f_00401fd0(void) /* sub_401FD0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00401fd0);
    /* 00401fd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00401fd1: mov ebp, esp */ r_ebp = r_esp;
    /* 00401fd3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00401fd6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00401fd9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00401fdc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00401fdf: mov edx, dword ptr [ecx + eax*4 + 4] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 00401fe3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00401fe6: mov ecx, dword ptr [edx + eax*4 + 8] */ r_ecx = R32((u32)(r_edx+r_eax*4+0x8u));
    /* 00401fea: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00401fed: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00401ff0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00401ff1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00401ff4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00401ff5: mov ecx, dword ptr [0x7902f0] */ r_ecx = R32((u32)(0x7902f0u));
    /* 00401ffb: call 0x4093d0 */ r_esp -= 4; W32(r_esp, 0x402000u); f_004093d0();
    /* 00402000: mov word ptr [ebp - 8], ax */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_eax);
    /* 00402004: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00402007: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00402008: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0040200b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040200c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040200f: call 0x4020a0 */ r_esp -= 4; W32(r_esp, 0x402014u); f_004020a0();
    /* 00402014: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00402015: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00402018: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x40201du); f_005eaf00();
    /* 0040201d: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00402020: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00402021: mov cx, word ptr [ebp - 8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 00402025: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00402026: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00402029: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040202a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040202d: call 0x402100 */ r_esp -= 4; W32(r_esp, 0x402032u); f_00402100();
    /* 00402032: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00402033: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00402036: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00402038: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040203b: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00402041: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x402043u); call_ind(t); }
    /* 00402043: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00402046: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00402047: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0040204a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040204b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040204e: call 0x402210 */ r_esp -= 4; W32(r_esp, 0x402053u); f_00402210();
    /* 00402053: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00402054: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00402057: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00402058: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0040205b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040205c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040205f: call 0x4021b0 */ r_esp -= 4; W32(r_esp, 0x402064u); f_004021b0();
    /* 00402064: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00402065: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00402068: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0040206a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040206d: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 00402070: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x402072u); call_ind(t); }
    /* 00402072: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00402075: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00402078: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00402079: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040207c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0040207e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00402081: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00402084: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x402086u); call_ind(t); }
    /* 00402086: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00402089: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0040208b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040208e: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00402091: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x402093u); call_ind(t); }
    /* 00402093: mov esp, ebp */ r_esp = r_ebp;
    /* 00402095: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00402096: ret 8 */ FN_RET(0x00401fd0); r_esp += 12; return;
}

