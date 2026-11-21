#include "protos.h"

void f_0040b1c0(void) /* sub_40B1C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040b1c0);
    /* 0040b1c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040b1c1: mov ebp, esp */ r_ebp = r_esp;
    /* 0040b1c3: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040b1c6: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0040b1c9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040b1cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040b1cd: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x40b1d2u); f_005dcb00();
    /* 0040b1d2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040b1d5: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0040b1d8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040b1db: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0040b1de: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0040b1e1: cmp dword ptr [ebp - 8], 0x16 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040b1e5: je 0x40b241 */ if (fZ) goto L_0040b241;
L_0040b1e7:; BB(0x0040b1e7);
    /* 0040b1e7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040b1ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040b1eb: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x40b1f0u); f_005dcb00();
    /* 0040b1f0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040b1f3: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0040b1f6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040b1f9: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0040b1fc: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0040b1ff: cmp dword ptr [ebp - 0x10], 0x13 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040b203: je 0x40b241 */ if (fZ) goto L_0040b241;
L_0040b205:; BB(0x0040b205);
    /* 0040b205: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040b208: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040b209: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x40b20eu); f_005dcb00();
    /* 0040b20e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040b211: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0040b214: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040b217: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0040b21a: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0040b21d: cmp dword ptr [ebp - 0x18], 0x1c */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040b221: je 0x40b241 */ if (fZ) goto L_0040b241;
L_0040b223:; BB(0x0040b223);
    /* 0040b223: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040b226: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040b227: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x40b22cu); f_005dcb00();
    /* 0040b22c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040b22f: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0040b232: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0040b235: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0040b238: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0040b23b: cmp dword ptr [ebp - 0x20], 0x1a */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x1au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040b23f: jne 0x40b254 */ if (!fZ) goto L_0040b254;
L_0040b241:; BB(0x0040b241);
    /* 0040b241: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0040b243: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x40b248u); f_0062fbf0();
    /* 0040b248: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040b24b: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 0040b24d: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 0040b24f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040b252: jmp 0x40b256 */ goto L_0040b256;
L_0040b254:; BB(0x0040b254);
    /* 0040b254: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0040b256:; BB(0x0040b256);
    /* 0040b256: mov esp, ebp */ r_esp = r_ebp;
    /* 0040b258: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040b259: ret 4 */ FN_RET(0x0040b1c0); r_esp += 8; return;
}

void f_0040bf80(void) /* sub_40BF80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040bf80);
    /* 0040bf80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040bf81: mov ebp, esp */ r_ebp = r_esp;
    /* 0040bf83: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040bf86: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0040bf87: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0040bf8a: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040bf8e: jne 0x40bf99 */ if (!fZ) goto L_0040bf99;
L_0040bf90:; BB(0x0040bf90);
    /* 0040bf90: mov dword ptr [ebp - 8], 0xffffffff */ W32((u32)(r_ebp+0xfffffff8u), 0xffffffffu);
    /* 0040bf97: jmp 0x40bfc8 */ goto L_0040bfc8;
L_0040bf99:; BB(0x0040bf99);
    /* 0040bf99: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040bf9d: jne 0x40bfa8 */ if (!fZ) goto L_0040bfa8;
L_0040bf9f:; BB(0x0040bf9f);
    /* 0040bf9f: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 0040bfa6: jmp 0x40bfc2 */ goto L_0040bfc2;
L_0040bfa8:; BB(0x0040bfa8);
    /* 0040bfa8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040bfab: imul eax, eax, 0x118 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x118u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040bfb1: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0040bfb7: movsx edx, byte ptr [ecx + eax + 0x119] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+r_eax+0x119u));
    /* 0040bfbf: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
L_0040bfc2:; BB(0x0040bfc2);
    /* 0040bfc2: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040bfc5: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0040bfc8:; BB(0x0040bfc8);
    /* 0040bfc8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040bfcb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040bfcc: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0040bfcf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040bfd0: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0040bfd6: call 0x419530 */ r_esp -= 4; W32(r_esp, 0x40bfdbu); f_00419530();
    /* 0040bfdb: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0040bfde: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040bfe1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040bfe2: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0040bfe8: call 0x4194c0 */ r_esp -= 4; W32(r_esp, 0x40bfedu); f_004194c0();
    /* 0040bfed: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0040bff0: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040bff4: jne 0x40c0e0 */ if (!fZ) goto L_0040c0e0;
L_0040bffa:; BB(0x0040bffa);
    /* 0040bffa: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040bffd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040bffe: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0040c001: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040c002: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0040c008: call 0x41afe0 */ r_esp -= 4; W32(r_esp, 0x40c00du); f_0041afe0();
    /* 0040c00d: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0040c010: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040c012: je 0x40c0e0 */ if (fZ) goto L_0040c0e0;
L_0040c018:; BB(0x0040c018);
    /* 0040c018: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0040c01e: call 0x418600 */ r_esp -= 4; W32(r_esp, 0x40c023u); f_00418600();
    /* 0040c023: movsx ecx, al */ r_ecx = (u32)(i32)(i8)(u8)r_eax;
    /* 0040c026: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040c029: cmp dword ptr [ebp - 0xc], ecx */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040c02c: jge 0x40c0e0 */ if ((fS==fO)) goto L_0040c0e0;
L_0040c032:; BB(0x0040c032);
    /* 0040c032: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040c034: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040c037: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040c038: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040c03b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040c03c: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0040c042: call 0x419780 */ r_esp -= 4; W32(r_esp, 0x40c047u); f_00419780();
    /* 0040c047: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040c04a: jne 0x40c0a4 */ if (!fZ) goto L_0040c0a4;
L_0040c04c:; BB(0x0040c04c);
    /* 0040c04c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040c04f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040c050: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0040c053: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040c054: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0040c05a: call 0x41ade0 */ r_esp -= 4; W32(r_esp, 0x40c05fu); f_0041ade0();
    /* 0040c05f: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0040c062: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040c064: je 0x40c072 */ if (fZ) goto L_0040c072;
L_0040c066:; BB(0x0040c066);
    /* 0040c066: mov eax, 0x1e */ r_eax = 0x1eu;
    /* 0040c06b: jmp 0x40c36e */ goto L_0040c36e;
L_0040c072:; BB(0x0040c072);
    /* 0040c072: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0040c075: imul ecx, ecx, 0x118 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x118u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040c07b: mov edx, dword ptr [0x790324] */ r_edx = R32((u32)(0x790324u));
    /* 0040c081: cmp byte ptr [edx + ecx + 0x118], 0 */ {  u32 a = R8((u32)(r_edx+r_ecx+0x118u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0040c089: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0040c08c: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0040c08f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040c091: je 0x40c09a */ if (fZ) goto L_0040c09a;
L_0040c093:; BB(0x0040c093);
    /* 0040c093: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040c095: jmp 0x40c36e */ goto L_0040c36e;
L_0040c09a:; BB(0x0040c09a);
    /* 0040c09a: mov eax, 0xd */ r_eax = 0xdu;
    /* 0040c09f: jmp 0x40c36e */ goto L_0040c36e;
L_0040c0a4:; BB(0x0040c0a4);
    /* 0040c0a4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040c0a7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040c0a8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040c0ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040c0ac: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0040c0b2: call 0x4197d0 */ r_esp -= 4; W32(r_esp, 0x40c0b7u); f_004197d0();
    /* 0040c0b7: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0040c0b8: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0040c0ba: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0040c0bc: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0040c0bf: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0040c0c2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040c0c3: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0040c0c9: call 0x41af20 */ r_esp -= 4; W32(r_esp, 0x40c0ceu); f_0041af20();
    /* 0040c0ce: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0040c0d1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040c0d3: je 0x40c0e0 */ if (fZ) goto L_0040c0e0;
L_0040c0d5:; BB(0x0040c0d5);
    /* 0040c0d5: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040c0d8: add eax, 0x13 */ {  u32 a = r_eax; u32 b = 0x13u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040c0db: jmp 0x40c36e */ goto L_0040c36e;
L_0040c0e0:; BB(0x0040c0e0);
    /* 0040c0e0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040c0e3: imul eax, eax, 0x118 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x118u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040c0e9: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0040c0ef: cmp byte ptr [ecx + eax + 0x118], 0 */ {  u32 a = R8((u32)(r_ecx+r_eax+0x118u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0040c0f7: setne dl */ r_edx = (r_edx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0040c0fa: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 0040c0fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040c0ff: je 0x40c108 */ if (fZ) goto L_0040c108;
L_0040c101:; BB(0x0040c101);
    /* 0040c101: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040c103: jmp 0x40c36e */ goto L_0040c36e;
L_0040c108:; BB(0x0040c108);
    /* 0040c108: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040c10b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040c10c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0040c10f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040c110: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0040c116: call 0x4197d0 */ r_esp -= 4; W32(r_esp, 0x40c11bu); f_004197d0();
    /* 0040c11b: cmp eax, 0x15 */ {  u32 a = r_eax; u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040c11e: je 0x40c138 */ if (fZ) goto L_0040c138;
L_0040c120:; BB(0x0040c120);
    /* 0040c120: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040c123: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040c124: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0040c127: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040c128: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0040c12e: call 0x4198d0 */ r_esp -= 4; W32(r_esp, 0x40c133u); f_004198d0();
    /* 0040c133: cmp eax, 0x15 */ {  u32 a = r_eax; u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040c136: jne 0x40c13f */ if (!fZ) goto L_0040c13f;
L_0040c138:; BB(0x0040c138);
    /* 0040c138: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040c13a: jmp 0x40c36e */ goto L_0040c36e;
L_0040c13f:; BB(0x0040c13f);
    /* 0040c13f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040c142: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040c143: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040c146: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040c147: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0040c14d: call 0x4197d0 */ r_esp -= 4; W32(r_esp, 0x40c152u); f_004197d0();
    /* 0040c152: cmp eax, 0x15 */ {  u32 a = r_eax; u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040c155: jge 0x40c1bf */ if ((fS==fO)) goto L_0040c1bf;
L_0040c157:; BB(0x0040c157);
    /* 0040c157: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040c15a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040c15b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0040c15e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040c15f: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0040c165: call 0x4197d0 */ r_esp -= 4; W32(r_esp, 0x40c16au); f_004197d0();
    /* 0040c16a: mov esi, eax */ r_esi = r_eax;
    /* 0040c16c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040c16f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040c170: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0040c173: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040c174: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0040c17a: call 0x4198d0 */ r_esp -= 4; W32(r_esp, 0x40c17fu); f_004198d0();
    /* 0040c17f: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040c181: je 0x40c1bf */ if (fZ) goto L_0040c1bf;
L_0040c183:; BB(0x0040c183);
    /* 0040c183: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040c186: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040c187: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040c18a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040c18b: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0040c191: call 0x4197d0 */ r_esp -= 4; W32(r_esp, 0x40c196u); f_004197d0();
    /* 0040c196: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040c199: je 0x40c1b5 */ if (fZ) goto L_0040c1b5;
L_0040c19b:; BB(0x0040c19b);
    /* 0040c19b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040c19e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040c19f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0040c1a2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040c1a3: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0040c1a9: call 0x4197d0 */ r_esp -= 4; W32(r_esp, 0x40c1aeu); f_004197d0();
    /* 0040c1ae: jmp 0x40c36e */ goto L_0040c36e;
L_0040c1b5:; BB(0x0040c1b5);
    /* 0040c1b5: mov eax, 0xd */ r_eax = 0xdu;
    /* 0040c1ba: jmp 0x40c36e */ goto L_0040c36e;
L_0040c1bf:; BB(0x0040c1bf);
    /* 0040c1bf: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040c1c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040c1c3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0040c1c6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040c1c7: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0040c1cd: call 0x4197d0 */ r_esp -= 4; W32(r_esp, 0x40c1d2u); f_004197d0();
    /* 0040c1d2: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040c1d5: jge 0x40c1e1 */ if ((fS==fO)) goto L_0040c1e1;
L_0040c1d7:; BB(0x0040c1d7);
    /* 0040c1d7: mov eax, 1 */ r_eax = 0x1u;
    /* 0040c1dc: jmp 0x40c36e */ goto L_0040c36e;
L_0040c1e1:; BB(0x0040c1e1);
    /* 0040c1e1: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040c1e5: jne 0x40c259 */ if (!fZ) goto L_0040c259;
L_0040c1e7:; BB(0x0040c1e7);
    /* 0040c1e7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040c1e9: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040c1ec: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040c1ed: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040c1f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040c1f1: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0040c1f7: call 0x419780 */ r_esp -= 4; W32(r_esp, 0x40c1fcu); f_00419780();
    /* 0040c1fc: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040c1ff: jne 0x40c21b */ if (!fZ) goto L_0040c21b;
L_0040c201:; BB(0x0040c201);
    /* 0040c201: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040c203: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040c206: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040c207: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0040c20a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040c20b: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0040c211: call 0x419780 */ r_esp -= 4; W32(r_esp, 0x40c216u); f_00419780();
    /* 0040c216: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040c219: je 0x40c24f */ if (fZ) goto L_0040c24f;
L_0040c21b:; BB(0x0040c21b);
    /* 0040c21b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040c21d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040c220: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040c221: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0040c224: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040c225: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0040c22b: call 0x419780 */ r_esp -= 4; W32(r_esp, 0x40c230u); f_00419780();
    /* 0040c230: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040c233: jne 0x40c259 */ if (!fZ) goto L_0040c259;
L_0040c235:; BB(0x0040c235);
    /* 0040c235: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040c237: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040c23a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040c23b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040c23e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040c23f: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0040c245: call 0x419780 */ r_esp -= 4; W32(r_esp, 0x40c24au); f_00419780();
    /* 0040c24a: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040c24d: jne 0x40c259 */ if (!fZ) goto L_0040c259;
L_0040c24f:; BB(0x0040c24f);
    /* 0040c24f: mov eax, 2 */ r_eax = 0x2u;
    /* 0040c254: jmp 0x40c36e */ goto L_0040c36e;
L_0040c259:; BB(0x0040c259);
    /* 0040c259: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040c25d: jne 0x40c2d1 */ if (!fZ) goto L_0040c2d1;
L_0040c25f:; BB(0x0040c25f);
    /* 0040c25f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040c261: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040c264: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040c265: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0040c268: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040c269: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0040c26f: call 0x419780 */ r_esp -= 4; W32(r_esp, 0x40c274u); f_00419780();
    /* 0040c274: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040c277: jne 0x40c293 */ if (!fZ) goto L_0040c293;
L_0040c279:; BB(0x0040c279);
    /* 0040c279: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040c27b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040c27e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040c27f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0040c282: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040c283: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0040c289: call 0x419780 */ r_esp -= 4; W32(r_esp, 0x40c28eu); f_00419780();
    /* 0040c28e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040c291: je 0x40c2c7 */ if (fZ) goto L_0040c2c7;
L_0040c293:; BB(0x0040c293);
    /* 0040c293: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040c295: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040c298: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040c299: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040c29c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040c29d: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0040c2a3: call 0x419780 */ r_esp -= 4; W32(r_esp, 0x40c2a8u); f_00419780();
    /* 0040c2a8: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040c2ab: jne 0x40c2d1 */ if (!fZ) goto L_0040c2d1;
L_0040c2ad:; BB(0x0040c2ad);
    /* 0040c2ad: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040c2af: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040c2b2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040c2b3: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0040c2b6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040c2b7: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0040c2bd: call 0x419780 */ r_esp -= 4; W32(r_esp, 0x40c2c2u); f_00419780();
    /* 0040c2c2: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040c2c5: jne 0x40c2d1 */ if (!fZ) goto L_0040c2d1;
L_0040c2c7:; BB(0x0040c2c7);
    /* 0040c2c7: mov eax, 3 */ r_eax = 0x3u;
    /* 0040c2cc: jmp 0x40c36e */ goto L_0040c36e;
L_0040c2d1:; BB(0x0040c2d1);
    /* 0040c2d1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040c2d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040c2d5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0040c2d8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040c2d9: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0040c2df: call 0x4197d0 */ r_esp -= 4; W32(r_esp, 0x40c2e4u); f_004197d0();
    /* 0040c2e4: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040c2e7: jge 0x40c301 */ if ((fS==fO)) goto L_0040c301;
L_0040c2e9:; BB(0x0040c2e9);
    /* 0040c2e9: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040c2ec: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040c2ed: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040c2f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040c2f1: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0040c2f7: call 0x4197d0 */ r_esp -= 4; W32(r_esp, 0x40c2fcu); f_004197d0();
    /* 0040c2fc: sub eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0040c2ff: jmp 0x40c36e */ goto L_0040c36e;
L_0040c301:; BB(0x0040c301);
    /* 0040c301: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040c304: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040c305: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0040c308: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040c309: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0040c30f: call 0x4197d0 */ r_esp -= 4; W32(r_esp, 0x40c314u); f_004197d0();
    /* 0040c314: cmp eax, 0x16 */ {  u32 a = r_eax; u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040c317: jge 0x40c31d */ if ((fS==fO)) goto L_0040c31d;
L_0040c319:; BB(0x0040c319);
    /* 0040c319: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040c31b: jmp 0x40c36e */ goto L_0040c36e;
L_0040c31d:; BB(0x0040c31d);
    /* 0040c31d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040c320: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040c321: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0040c324: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040c325: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0040c32b: call 0x4198d0 */ r_esp -= 4; W32(r_esp, 0x40c330u); f_004198d0();
    /* 0040c330: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040c333: jge 0x40c33c */ if ((fS==fO)) goto L_0040c33c;
L_0040c335:; BB(0x0040c335);
    /* 0040c335: mov eax, 1 */ r_eax = 0x1u;
    /* 0040c33a: jmp 0x40c36e */ goto L_0040c36e;
L_0040c33c:; BB(0x0040c33c);
    /* 0040c33c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040c33f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040c340: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040c343: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040c344: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0040c34a: call 0x4198d0 */ r_esp -= 4; W32(r_esp, 0x40c34fu); f_004198d0();
    /* 0040c34f: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040c352: jge 0x40c36c */ if ((fS==fO)) goto L_0040c36c;
L_0040c354:; BB(0x0040c354);
    /* 0040c354: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040c357: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040c358: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0040c35b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040c35c: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0040c362: call 0x4198d0 */ r_esp -= 4; W32(r_esp, 0x40c367u); f_004198d0();
    /* 0040c367: sub eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0040c36a: jmp 0x40c36e */ goto L_0040c36e;
L_0040c36c:; BB(0x0040c36c);
    /* 0040c36c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0040c36e:; BB(0x0040c36e);
    /* 0040c36e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0040c36f: mov esp, ebp */ r_esp = r_ebp;
    /* 0040c371: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040c372: ret 4 */ FN_RET(0x0040bf80); r_esp += 8; return;
}

