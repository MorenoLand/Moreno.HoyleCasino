#include "protos.h"

void f_0054d050(void) /* sub_54D050 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0054d050);
    /* 0054d050: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054d051: mov ebp, esp */ r_ebp = r_esp;
    /* 0054d053: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054d056: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0054d059: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054d05c: call 0x54cf80 */ r_esp -= 4; W32(r_esp, 0x54d061u); f_0054cf80();
    /* 0054d061: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0054d064: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d068: jne 0x54d07e */ if (!fZ) goto L_0054d07e;
L_0054d06a:; BB(0x0054d06a);
    /* 0054d06a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054d06d: call 0x54c8a0 */ r_esp -= 4; W32(r_esp, 0x54d072u); f_0054c8a0();
    /* 0054d072: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054d075: jl 0x54d07e */ if ((fS!=fO)) goto L_0054d07e;
L_0054d077:; BB(0x0054d077);
    /* 0054d077: mov eax, 8 */ r_eax = 0x8u;
    /* 0054d07c: jmp 0x54d081 */ goto L_0054d081;
L_0054d07e:; BB(0x0054d07e);
    /* 0054d07e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
L_0054d081:; BB(0x0054d081);
    /* 0054d081: mov esp, ebp */ r_esp = r_ebp;
    /* 0054d083: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054d084: ret  */ FN_RET(0x0054d050); r_esp += 4; return;
}

void f_0054d090(void) /* sub_54D090 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0054d090);
    /* 0054d090: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054d091: mov ebp, esp */ r_ebp = r_esp;
    /* 0054d093: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054d094: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0054d097: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054d09a: call 0x54c620 */ r_esp -= 4; W32(r_esp, 0x54d09fu); f_0054c620();
    /* 0054d09f: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0054d0a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d0a4: je 0x54d0ad */ if (fZ) goto L_0054d0ad;
L_0054d0a6:; BB(0x0054d0a6);
    /* 0054d0a6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0054d0a8: jmp 0x54d1b4 */ goto L_0054d1b4;
L_0054d0ad:; BB(0x0054d0ad);
    /* 0054d0ad: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054d0b0: call 0x54c670 */ r_esp -= 4; W32(r_esp, 0x54d0b5u); f_0054c670();
    /* 0054d0b5: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0054d0b8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d0ba: je 0x54d0c6 */ if (fZ) goto L_0054d0c6;
L_0054d0bc:; BB(0x0054d0bc);
    /* 0054d0bc: mov eax, 1 */ r_eax = 0x1u;
    /* 0054d0c1: jmp 0x54d1b4 */ goto L_0054d1b4;
L_0054d0c6:; BB(0x0054d0c6);
    /* 0054d0c6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054d0c9: call 0x54c6b0 */ r_esp -= 4; W32(r_esp, 0x54d0ceu); f_0054c6b0();
    /* 0054d0ce: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0054d0d1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d0d3: je 0x54d12f */ if (fZ) goto L_0054d12f;
L_0054d0d5:; BB(0x0054d0d5);
    /* 0054d0d5: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0054d0d7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054d0da: call 0x54cf20 */ r_esp -= 4; W32(r_esp, 0x54d0dfu); f_0054cf20();
    /* 0054d0df: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d0e2: jne 0x54d0ee */ if (!fZ) goto L_0054d0ee;
L_0054d0e4:; BB(0x0054d0e4);
    /* 0054d0e4: mov eax, 2 */ r_eax = 0x2u;
    /* 0054d0e9: jmp 0x54d1b4 */ goto L_0054d1b4;
L_0054d0ee:; BB(0x0054d0ee);
    /* 0054d0ee: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0054d0f0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054d0f3: call 0x54cf20 */ r_esp -= 4; W32(r_esp, 0x54d0f8u); f_0054cf20();
    /* 0054d0f8: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d0fb: je 0x54d11b */ if (fZ) goto L_0054d11b;
L_0054d0fd:; BB(0x0054d0fd);
    /* 0054d0fd: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0054d0ff: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054d102: call 0x54cf20 */ r_esp -= 4; W32(r_esp, 0x54d107u); f_0054cf20();
    /* 0054d107: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d10a: je 0x54d11b */ if (fZ) goto L_0054d11b;
L_0054d10c:; BB(0x0054d10c);
    /* 0054d10c: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0054d10e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054d111: call 0x54cf20 */ r_esp -= 4; W32(r_esp, 0x54d116u); f_0054cf20();
    /* 0054d116: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d119: jne 0x54d125 */ if (!fZ) goto L_0054d125;
L_0054d11b:; BB(0x0054d11b);
    /* 0054d11b: mov eax, 3 */ r_eax = 0x3u;
    /* 0054d120: jmp 0x54d1b4 */ goto L_0054d1b4;
L_0054d125:; BB(0x0054d125);
    /* 0054d125: mov eax, 4 */ r_eax = 0x4u;
    /* 0054d12a: jmp 0x54d1b4 */ goto L_0054d1b4;
L_0054d12f:; BB(0x0054d12f);
    /* 0054d12f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054d132: call 0x54c6d0 */ r_esp -= 4; W32(r_esp, 0x54d137u); f_0054c6d0();
    /* 0054d137: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0054d13a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d13c: je 0x54d145 */ if (fZ) goto L_0054d145;
L_0054d13e:; BB(0x0054d13e);
    /* 0054d13e: mov eax, 5 */ r_eax = 0x5u;
    /* 0054d143: jmp 0x54d1b4 */ goto L_0054d1b4;
L_0054d145:; BB(0x0054d145);
    /* 0054d145: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054d148: call 0x54c710 */ r_esp -= 4; W32(r_esp, 0x54d14du); f_0054c710();
    /* 0054d14d: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0054d150: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d152: je 0x54d15b */ if (fZ) goto L_0054d15b;
L_0054d154:; BB(0x0054d154);
    /* 0054d154: mov eax, 6 */ r_eax = 0x6u;
    /* 0054d159: jmp 0x54d1b4 */ goto L_0054d1b4;
L_0054d15b:; BB(0x0054d15b);
    /* 0054d15b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054d15e: call 0x54c780 */ r_esp -= 4; W32(r_esp, 0x54d163u); f_0054c780();
    /* 0054d163: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0054d166: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d168: je 0x54d171 */ if (fZ) goto L_0054d171;
L_0054d16a:; BB(0x0054d16a);
    /* 0054d16a: mov eax, 7 */ r_eax = 0x7u;
    /* 0054d16f: jmp 0x54d1b4 */ goto L_0054d1b4;
L_0054d171:; BB(0x0054d171);
    /* 0054d171: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054d174: call 0x54c820 */ r_esp -= 4; W32(r_esp, 0x54d179u); f_0054c820();
    /* 0054d179: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0054d17c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d17e: je 0x54d187 */ if (fZ) goto L_0054d187;
L_0054d180:; BB(0x0054d180);
    /* 0054d180: mov eax, 8 */ r_eax = 0x8u;
    /* 0054d185: jmp 0x54d1b4 */ goto L_0054d1b4;
L_0054d187:; BB(0x0054d187);
    /* 0054d187: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054d18a: call 0x54c840 */ r_esp -= 4; W32(r_esp, 0x54d18fu); f_0054c840();
    /* 0054d18f: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0054d192: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d194: je 0x54d19d */ if (fZ) goto L_0054d19d;
L_0054d196:; BB(0x0054d196);
    /* 0054d196: mov eax, 9 */ r_eax = 0x9u;
    /* 0054d19b: jmp 0x54d1b4 */ goto L_0054d1b4;
L_0054d19d:; BB(0x0054d19d);
    /* 0054d19d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054d1a0: call 0x54c8a0 */ r_esp -= 4; W32(r_esp, 0x54d1a5u); f_0054c8a0();
    /* 0054d1a5: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054d1a8: jl 0x54d1b1 */ if ((fS!=fO)) goto L_0054d1b1;
L_0054d1aa:; BB(0x0054d1aa);
    /* 0054d1aa: mov eax, 0xa */ r_eax = 0xau;
    /* 0054d1af: jmp 0x54d1b4 */ goto L_0054d1b4;
L_0054d1b1:; BB(0x0054d1b1);
    /* 0054d1b1: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_0054d1b4:; BB(0x0054d1b4);
    /* 0054d1b4: mov esp, ebp */ r_esp = r_ebp;
    /* 0054d1b6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054d1b7: ret  */ FN_RET(0x0054d090); r_esp += 4; return;
}

void f_0054d1c0(void) /* sub_54D1C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0054d1c0);
    /* 0054d1c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054d1c1: mov ebp, esp */ r_ebp = r_esp;
    /* 0054d1c3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054d1c6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0054d1c9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054d1cc: call 0x54cf80 */ r_esp -= 4; W32(r_esp, 0x54d1d1u); f_0054cf80();
    /* 0054d1d1: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0054d1d4: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d1d8: jne 0x54d1ee */ if (!fZ) goto L_0054d1ee;
L_0054d1da:; BB(0x0054d1da);
    /* 0054d1da: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054d1dd: call 0x54c8a0 */ r_esp -= 4; W32(r_esp, 0x54d1e2u); f_0054c8a0();
    /* 0054d1e2: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054d1e5: jl 0x54d1ee */ if ((fS!=fO)) goto L_0054d1ee;
L_0054d1e7:; BB(0x0054d1e7);
    /* 0054d1e7: mov eax, 8 */ r_eax = 0x8u;
    /* 0054d1ec: jmp 0x54d1f1 */ goto L_0054d1f1;
L_0054d1ee:; BB(0x0054d1ee);
    /* 0054d1ee: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
L_0054d1f1:; BB(0x0054d1f1);
    /* 0054d1f1: mov esp, ebp */ r_esp = r_ebp;
    /* 0054d1f3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054d1f4: ret  */ FN_RET(0x0054d1c0); r_esp += 4; return;
}

void f_0054d200(void) /* sub_54D200 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0054d200);
    /* 0054d200: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054d201: mov ebp, esp */ r_ebp = r_esp;
    /* 0054d203: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054d204: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0054d207: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054d20a: call 0x54c620 */ r_esp -= 4; W32(r_esp, 0x54d20fu); f_0054c620();
    /* 0054d20f: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0054d212: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d214: je 0x54d21d */ if (fZ) goto L_0054d21d;
L_0054d216:; BB(0x0054d216);
    /* 0054d216: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0054d218: jmp 0x54d34f */ goto L_0054d34f;
L_0054d21d:; BB(0x0054d21d);
    /* 0054d21d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054d220: call 0x54c970 */ r_esp -= 4; W32(r_esp, 0x54d225u); f_0054c970();
    /* 0054d225: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0054d228: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d22a: je 0x54d236 */ if (fZ) goto L_0054d236;
L_0054d22c:; BB(0x0054d22c);
    /* 0054d22c: mov eax, 1 */ r_eax = 0x1u;
    /* 0054d231: jmp 0x54d34f */ goto L_0054d34f;
L_0054d236:; BB(0x0054d236);
    /* 0054d236: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054d239: call 0x54c990 */ r_esp -= 4; W32(r_esp, 0x54d23eu); f_0054c990();
    /* 0054d23e: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0054d241: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d243: je 0x54d24f */ if (fZ) goto L_0054d24f;
L_0054d245:; BB(0x0054d245);
    /* 0054d245: mov eax, 2 */ r_eax = 0x2u;
    /* 0054d24a: jmp 0x54d34f */ goto L_0054d34f;
L_0054d24f:; BB(0x0054d24f);
    /* 0054d24f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054d252: call 0x54ca10 */ r_esp -= 4; W32(r_esp, 0x54d257u); f_0054ca10();
    /* 0054d257: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0054d25a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d25c: je 0x54d268 */ if (fZ) goto L_0054d268;
L_0054d25e:; BB(0x0054d25e);
    /* 0054d25e: mov eax, 3 */ r_eax = 0x3u;
    /* 0054d263: jmp 0x54d34f */ goto L_0054d34f;
L_0054d268:; BB(0x0054d268);
    /* 0054d268: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054d26b: call 0x54c670 */ r_esp -= 4; W32(r_esp, 0x54d270u); f_0054c670();
    /* 0054d270: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0054d273: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d275: jne 0x54d286 */ if (!fZ) goto L_0054d286;
L_0054d277:; BB(0x0054d277);
    /* 0054d277: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054d27a: call 0x54caa0 */ r_esp -= 4; W32(r_esp, 0x54d27fu); f_0054caa0();
    /* 0054d27f: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0054d282: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d284: je 0x54d290 */ if (fZ) goto L_0054d290;
L_0054d286:; BB(0x0054d286);
    /* 0054d286: mov eax, 4 */ r_eax = 0x4u;
    /* 0054d28b: jmp 0x54d34f */ goto L_0054d34f;
L_0054d290:; BB(0x0054d290);
    /* 0054d290: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054d293: call 0x54c6b0 */ r_esp -= 4; W32(r_esp, 0x54d298u); f_0054c6b0();
    /* 0054d298: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0054d29b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d29d: jne 0x54d2ae */ if (!fZ) goto L_0054d2ae;
L_0054d29f:; BB(0x0054d29f);
    /* 0054d29f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054d2a2: call 0x54cae0 */ r_esp -= 4; W32(r_esp, 0x54d2a7u); f_0054cae0();
    /* 0054d2a7: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0054d2aa: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d2ac: je 0x54d2b8 */ if (fZ) goto L_0054d2b8;
L_0054d2ae:; BB(0x0054d2ae);
    /* 0054d2ae: mov eax, 5 */ r_eax = 0x5u;
    /* 0054d2b3: jmp 0x54d34f */ goto L_0054d34f;
L_0054d2b8:; BB(0x0054d2b8);
    /* 0054d2b8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054d2bb: call 0x54c6d0 */ r_esp -= 4; W32(r_esp, 0x54d2c0u); f_0054c6d0();
    /* 0054d2c0: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0054d2c3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d2c5: jne 0x54d2d6 */ if (!fZ) goto L_0054d2d6;
L_0054d2c7:; BB(0x0054d2c7);
    /* 0054d2c7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054d2ca: call 0x54cbb0 */ r_esp -= 4; W32(r_esp, 0x54d2cfu); f_0054cbb0();
    /* 0054d2cf: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0054d2d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d2d4: je 0x54d2dd */ if (fZ) goto L_0054d2dd;
L_0054d2d6:; BB(0x0054d2d6);
    /* 0054d2d6: mov eax, 6 */ r_eax = 0x6u;
    /* 0054d2db: jmp 0x54d34f */ goto L_0054d34f;
L_0054d2dd:; BB(0x0054d2dd);
    /* 0054d2dd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054d2e0: call 0x54c710 */ r_esp -= 4; W32(r_esp, 0x54d2e5u); f_0054c710();
    /* 0054d2e5: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0054d2e8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d2ea: jne 0x54d2fb */ if (!fZ) goto L_0054d2fb;
L_0054d2ec:; BB(0x0054d2ec);
    /* 0054d2ec: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054d2ef: call 0x54cbf0 */ r_esp -= 4; W32(r_esp, 0x54d2f4u); f_0054cbf0();
    /* 0054d2f4: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0054d2f7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d2f9: je 0x54d302 */ if (fZ) goto L_0054d302;
L_0054d2fb:; BB(0x0054d2fb);
    /* 0054d2fb: mov eax, 7 */ r_eax = 0x7u;
    /* 0054d300: jmp 0x54d34f */ goto L_0054d34f;
L_0054d302:; BB(0x0054d302);
    /* 0054d302: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054d305: call 0x54c780 */ r_esp -= 4; W32(r_esp, 0x54d30au); f_0054c780();
    /* 0054d30a: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0054d30d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d30f: jne 0x54d320 */ if (!fZ) goto L_0054d320;
L_0054d311:; BB(0x0054d311);
    /* 0054d311: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054d314: call 0x54ccb0 */ r_esp -= 4; W32(r_esp, 0x54d319u); f_0054ccb0();
    /* 0054d319: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0054d31c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d31e: je 0x54d327 */ if (fZ) goto L_0054d327;
L_0054d320:; BB(0x0054d320);
    /* 0054d320: mov eax, 8 */ r_eax = 0x8u;
    /* 0054d325: jmp 0x54d34f */ goto L_0054d34f;
L_0054d327:; BB(0x0054d327);
    /* 0054d327: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054d32a: call 0x54c820 */ r_esp -= 4; W32(r_esp, 0x54d32fu); f_0054c820();
    /* 0054d32f: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0054d332: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d334: jne 0x54d345 */ if (!fZ) goto L_0054d345;
L_0054d336:; BB(0x0054d336);
    /* 0054d336: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054d339: call 0x54cdc0 */ r_esp -= 4; W32(r_esp, 0x54d33eu); f_0054cdc0();
    /* 0054d33e: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0054d341: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d343: je 0x54d34c */ if (fZ) goto L_0054d34c;
L_0054d345:; BB(0x0054d345);
    /* 0054d345: mov eax, 9 */ r_eax = 0x9u;
    /* 0054d34a: jmp 0x54d34f */ goto L_0054d34f;
L_0054d34c:; BB(0x0054d34c);
    /* 0054d34c: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_0054d34f:; BB(0x0054d34f);
    /* 0054d34f: mov esp, ebp */ r_esp = r_ebp;
    /* 0054d351: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054d352: ret  */ FN_RET(0x0054d200); r_esp += 4; return;
}

void f_0054d360(void) /* sub_54D360 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0054d360);
    /* 0054d360: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054d361: mov ebp, esp */ r_ebp = r_esp;
    /* 0054d363: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054d366: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0054d369: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054d36c: call 0x54c620 */ r_esp -= 4; W32(r_esp, 0x54d371u); f_0054c620();
    /* 0054d371: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0054d374: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d376: je 0x54d37f */ if (fZ) goto L_0054d37f;
L_0054d378:; BB(0x0054d378);
    /* 0054d378: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0054d37a: jmp 0x54d510 */ goto L_0054d510;
L_0054d37f:; BB(0x0054d37f);
    /* 0054d37f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054d382: call 0x54ca10 */ r_esp -= 4; W32(r_esp, 0x54d387u); f_0054ca10();
    /* 0054d387: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0054d38a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d38c: je 0x54d398 */ if (fZ) goto L_0054d398;
L_0054d38e:; BB(0x0054d38e);
    /* 0054d38e: mov eax, 1 */ r_eax = 0x1u;
    /* 0054d393: jmp 0x54d510 */ goto L_0054d510;
L_0054d398:; BB(0x0054d398);
    /* 0054d398: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054d39b: call 0x54c990 */ r_esp -= 4; W32(r_esp, 0x54d3a0u); f_0054c990();
    /* 0054d3a0: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0054d3a3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d3a5: je 0x54d3b1 */ if (fZ) goto L_0054d3b1;
L_0054d3a7:; BB(0x0054d3a7);
    /* 0054d3a7: mov eax, 2 */ r_eax = 0x2u;
    /* 0054d3ac: jmp 0x54d510 */ goto L_0054d510;
L_0054d3b1:; BB(0x0054d3b1);
    /* 0054d3b1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054d3b4: call 0x54c670 */ r_esp -= 4; W32(r_esp, 0x54d3b9u); f_0054c670();
    /* 0054d3b9: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0054d3bc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d3be: jne 0x54d3cf */ if (!fZ) goto L_0054d3cf;
L_0054d3c0:; BB(0x0054d3c0);
    /* 0054d3c0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054d3c3: call 0x54caa0 */ r_esp -= 4; W32(r_esp, 0x54d3c8u); f_0054caa0();
    /* 0054d3c8: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0054d3cb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d3cd: je 0x54d3d9 */ if (fZ) goto L_0054d3d9;
L_0054d3cf:; BB(0x0054d3cf);
    /* 0054d3cf: mov eax, 3 */ r_eax = 0x3u;
    /* 0054d3d4: jmp 0x54d510 */ goto L_0054d510;
L_0054d3d9:; BB(0x0054d3d9);
    /* 0054d3d9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054d3dc: call 0x54c6b0 */ r_esp -= 4; W32(r_esp, 0x54d3e1u); f_0054c6b0();
    /* 0054d3e1: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0054d3e4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d3e6: jne 0x54d3f7 */ if (!fZ) goto L_0054d3f7;
L_0054d3e8:; BB(0x0054d3e8);
    /* 0054d3e8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054d3eb: call 0x54cae0 */ r_esp -= 4; W32(r_esp, 0x54d3f0u); f_0054cae0();
    /* 0054d3f0: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0054d3f3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d3f5: je 0x54d401 */ if (fZ) goto L_0054d401;
L_0054d3f7:; BB(0x0054d3f7);
    /* 0054d3f7: mov eax, 4 */ r_eax = 0x4u;
    /* 0054d3fc: jmp 0x54d510 */ goto L_0054d510;
L_0054d401:; BB(0x0054d401);
    /* 0054d401: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054d404: call 0x54c6d0 */ r_esp -= 4; W32(r_esp, 0x54d409u); f_0054c6d0();
    /* 0054d409: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0054d40c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d40e: jne 0x54d41f */ if (!fZ) goto L_0054d41f;
L_0054d410:; BB(0x0054d410);
    /* 0054d410: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054d413: call 0x54cbb0 */ r_esp -= 4; W32(r_esp, 0x54d418u); f_0054cbb0();
    /* 0054d418: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0054d41b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d41d: je 0x54d429 */ if (fZ) goto L_0054d429;
L_0054d41f:; BB(0x0054d41f);
    /* 0054d41f: mov eax, 5 */ r_eax = 0x5u;
    /* 0054d424: jmp 0x54d510 */ goto L_0054d510;
L_0054d429:; BB(0x0054d429);
    /* 0054d429: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054d42c: call 0x54c710 */ r_esp -= 4; W32(r_esp, 0x54d431u); f_0054c710();
    /* 0054d431: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0054d434: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d436: jne 0x54d447 */ if (!fZ) goto L_0054d447;
L_0054d438:; BB(0x0054d438);
    /* 0054d438: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054d43b: call 0x54cbf0 */ r_esp -= 4; W32(r_esp, 0x54d440u); f_0054cbf0();
    /* 0054d440: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0054d443: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d445: je 0x54d451 */ if (fZ) goto L_0054d451;
L_0054d447:; BB(0x0054d447);
    /* 0054d447: mov eax, 6 */ r_eax = 0x6u;
    /* 0054d44c: jmp 0x54d510 */ goto L_0054d510;
L_0054d451:; BB(0x0054d451);
    /* 0054d451: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054d454: call 0x54c780 */ r_esp -= 4; W32(r_esp, 0x54d459u); f_0054c780();
    /* 0054d459: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0054d45c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d45e: jne 0x54d46f */ if (!fZ) goto L_0054d46f;
L_0054d460:; BB(0x0054d460);
    /* 0054d460: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054d463: call 0x54ccb0 */ r_esp -= 4; W32(r_esp, 0x54d468u); f_0054ccb0();
    /* 0054d468: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0054d46b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d46d: je 0x54d479 */ if (fZ) goto L_0054d479;
L_0054d46f:; BB(0x0054d46f);
    /* 0054d46f: mov eax, 7 */ r_eax = 0x7u;
    /* 0054d474: jmp 0x54d510 */ goto L_0054d510;
L_0054d479:; BB(0x0054d479);
    /* 0054d479: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054d47c: call 0x54c820 */ r_esp -= 4; W32(r_esp, 0x54d481u); f_0054c820();
    /* 0054d481: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0054d484: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d486: jne 0x54d497 */ if (!fZ) goto L_0054d497;
L_0054d488:; BB(0x0054d488);
    /* 0054d488: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054d48b: call 0x54cdc0 */ r_esp -= 4; W32(r_esp, 0x54d490u); f_0054cdc0();
    /* 0054d490: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0054d493: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d495: je 0x54d49e */ if (fZ) goto L_0054d49e;
L_0054d497:; BB(0x0054d497);
    /* 0054d497: mov eax, 8 */ r_eax = 0x8u;
    /* 0054d49c: jmp 0x54d510 */ goto L_0054d510;
L_0054d49e:; BB(0x0054d49e);
    /* 0054d49e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054d4a1: call 0x54c840 */ r_esp -= 4; W32(r_esp, 0x54d4a6u); f_0054c840();
    /* 0054d4a6: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0054d4a9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d4ab: je 0x54d4b4 */ if (fZ) goto L_0054d4b4;
L_0054d4ad:; BB(0x0054d4ad);
    /* 0054d4ad: mov eax, 9 */ r_eax = 0x9u;
    /* 0054d4b2: jmp 0x54d510 */ goto L_0054d510;
L_0054d4b4:; BB(0x0054d4b4);
    /* 0054d4b4: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0054d4ba: mov edx, dword ptr [ecx + 0x4f14] */ r_edx = R32((u32)(r_ecx+0x4f14u));
    /* 0054d4c0: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0054d4c3: cmp dword ptr [ebp - 4], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d4c7: jne 0x54d50d */ if (!fZ) goto L_0054d50d;
L_0054d4c9:; BB(0x0054d4c9);
    /* 0054d4c9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054d4cc: call 0x54c8a0 */ r_esp -= 4; W32(r_esp, 0x54d4d1u); f_0054c8a0();
    /* 0054d4d1: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054d4d4: jl 0x54d4dd */ if ((fS!=fO)) goto L_0054d4dd;
L_0054d4d6:; BB(0x0054d4d6);
    /* 0054d4d6: mov eax, 0xa */ r_eax = 0xau;
    /* 0054d4db: jmp 0x54d510 */ goto L_0054d510;
L_0054d4dd:; BB(0x0054d4dd);
    /* 0054d4dd: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054d4e0: call 0x54cec0 */ r_esp -= 4; W32(r_esp, 0x54d4e5u); f_0054cec0();
    /* 0054d4e5: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d4e8: jne 0x54d50d */ if (!fZ) goto L_0054d50d;
L_0054d4ea:; BB(0x0054d4ea);
    /* 0054d4ea: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0054d4ec: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054d4ef: call 0x54cf20 */ r_esp -= 4; W32(r_esp, 0x54d4f4u); f_0054cf20();
    /* 0054d4f4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d4f6: jne 0x54d506 */ if (!fZ) goto L_0054d506;
L_0054d4f8:; BB(0x0054d4f8);
    /* 0054d4f8: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0054d4fa: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054d4fd: call 0x54cf20 */ r_esp -= 4; W32(r_esp, 0x54d502u); f_0054cf20();
    /* 0054d502: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d504: je 0x54d50d */ if (fZ) goto L_0054d50d;
L_0054d506:; BB(0x0054d506);
    /* 0054d506: mov eax, 0xa */ r_eax = 0xau;
    /* 0054d50b: jmp 0x54d510 */ goto L_0054d510;
L_0054d50d:; BB(0x0054d50d);
    /* 0054d50d: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_0054d510:; BB(0x0054d510);
    /* 0054d510: mov esp, ebp */ r_esp = r_ebp;
    /* 0054d512: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054d513: ret  */ FN_RET(0x0054d360); r_esp += 4; return;
}

void f_0054d520(void) /* sub_54D520 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0054d520);
    /* 0054d520: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054d521: mov ebp, esp */ r_ebp = r_esp;
    /* 0054d523: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054d524: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0054d527: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054d52a: call 0x54c970 */ r_esp -= 4; W32(r_esp, 0x54d52fu); f_0054c970();
    /* 0054d52f: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0054d532: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d534: je 0x54d54a */ if (fZ) goto L_0054d54a;
L_0054d536:; BB(0x0054d536);
    /* 0054d536: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054d539: call 0x54cec0 */ r_esp -= 4; W32(r_esp, 0x54d53eu); f_0054cec0();
    /* 0054d53e: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d541: jne 0x54d54a */ if (!fZ) goto L_0054d54a;
L_0054d543:; BB(0x0054d543);
    /* 0054d543: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0054d545: jmp 0x54d695 */ goto L_0054d695;
L_0054d54a:; BB(0x0054d54a);
    /* 0054d54a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054d54d: call 0x54c620 */ r_esp -= 4; W32(r_esp, 0x54d552u); f_0054c620();
    /* 0054d552: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0054d555: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d557: je 0x54d563 */ if (fZ) goto L_0054d563;
L_0054d559:; BB(0x0054d559);
    /* 0054d559: mov eax, 1 */ r_eax = 0x1u;
    /* 0054d55e: jmp 0x54d695 */ goto L_0054d695;
L_0054d563:; BB(0x0054d563);
    /* 0054d563: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054d566: call 0x54c970 */ r_esp -= 4; W32(r_esp, 0x54d56bu); f_0054c970();
    /* 0054d56b: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0054d56e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d570: je 0x54d57c */ if (fZ) goto L_0054d57c;
L_0054d572:; BB(0x0054d572);
    /* 0054d572: mov eax, 2 */ r_eax = 0x2u;
    /* 0054d577: jmp 0x54d695 */ goto L_0054d695;
L_0054d57c:; BB(0x0054d57c);
    /* 0054d57c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054d57f: call 0x54c990 */ r_esp -= 4; W32(r_esp, 0x54d584u); f_0054c990();
    /* 0054d584: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0054d587: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d589: je 0x54d595 */ if (fZ) goto L_0054d595;
L_0054d58b:; BB(0x0054d58b);
    /* 0054d58b: mov eax, 3 */ r_eax = 0x3u;
    /* 0054d590: jmp 0x54d695 */ goto L_0054d695;
L_0054d595:; BB(0x0054d595);
    /* 0054d595: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054d598: call 0x54ca10 */ r_esp -= 4; W32(r_esp, 0x54d59du); f_0054ca10();
    /* 0054d59d: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0054d5a0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d5a2: je 0x54d5ae */ if (fZ) goto L_0054d5ae;
L_0054d5a4:; BB(0x0054d5a4);
    /* 0054d5a4: mov eax, 4 */ r_eax = 0x4u;
    /* 0054d5a9: jmp 0x54d695 */ goto L_0054d695;
L_0054d5ae:; BB(0x0054d5ae);
    /* 0054d5ae: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054d5b1: call 0x54c670 */ r_esp -= 4; W32(r_esp, 0x54d5b6u); f_0054c670();
    /* 0054d5b6: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0054d5b9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d5bb: jne 0x54d5cc */ if (!fZ) goto L_0054d5cc;
L_0054d5bd:; BB(0x0054d5bd);
    /* 0054d5bd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054d5c0: call 0x54caa0 */ r_esp -= 4; W32(r_esp, 0x54d5c5u); f_0054caa0();
    /* 0054d5c5: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0054d5c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d5ca: je 0x54d5d6 */ if (fZ) goto L_0054d5d6;
L_0054d5cc:; BB(0x0054d5cc);
    /* 0054d5cc: mov eax, 5 */ r_eax = 0x5u;
    /* 0054d5d1: jmp 0x54d695 */ goto L_0054d695;
L_0054d5d6:; BB(0x0054d5d6);
    /* 0054d5d6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054d5d9: call 0x54c6b0 */ r_esp -= 4; W32(r_esp, 0x54d5deu); f_0054c6b0();
    /* 0054d5de: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0054d5e1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d5e3: jne 0x54d5f4 */ if (!fZ) goto L_0054d5f4;
L_0054d5e5:; BB(0x0054d5e5);
    /* 0054d5e5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054d5e8: call 0x54cae0 */ r_esp -= 4; W32(r_esp, 0x54d5edu); f_0054cae0();
    /* 0054d5ed: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0054d5f0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d5f2: je 0x54d5fe */ if (fZ) goto L_0054d5fe;
L_0054d5f4:; BB(0x0054d5f4);
    /* 0054d5f4: mov eax, 6 */ r_eax = 0x6u;
    /* 0054d5f9: jmp 0x54d695 */ goto L_0054d695;
L_0054d5fe:; BB(0x0054d5fe);
    /* 0054d5fe: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054d601: call 0x54c6d0 */ r_esp -= 4; W32(r_esp, 0x54d606u); f_0054c6d0();
    /* 0054d606: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0054d609: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d60b: jne 0x54d61c */ if (!fZ) goto L_0054d61c;
L_0054d60d:; BB(0x0054d60d);
    /* 0054d60d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054d610: call 0x54cbb0 */ r_esp -= 4; W32(r_esp, 0x54d615u); f_0054cbb0();
    /* 0054d615: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0054d618: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d61a: je 0x54d623 */ if (fZ) goto L_0054d623;
L_0054d61c:; BB(0x0054d61c);
    /* 0054d61c: mov eax, 7 */ r_eax = 0x7u;
    /* 0054d621: jmp 0x54d695 */ goto L_0054d695;
L_0054d623:; BB(0x0054d623);
    /* 0054d623: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054d626: call 0x54c710 */ r_esp -= 4; W32(r_esp, 0x54d62bu); f_0054c710();
    /* 0054d62b: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0054d62e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d630: jne 0x54d641 */ if (!fZ) goto L_0054d641;
L_0054d632:; BB(0x0054d632);
    /* 0054d632: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054d635: call 0x54cbf0 */ r_esp -= 4; W32(r_esp, 0x54d63au); f_0054cbf0();
    /* 0054d63a: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0054d63d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d63f: je 0x54d648 */ if (fZ) goto L_0054d648;
L_0054d641:; BB(0x0054d641);
    /* 0054d641: mov eax, 8 */ r_eax = 0x8u;
    /* 0054d646: jmp 0x54d695 */ goto L_0054d695;
L_0054d648:; BB(0x0054d648);
    /* 0054d648: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054d64b: call 0x54c780 */ r_esp -= 4; W32(r_esp, 0x54d650u); f_0054c780();
    /* 0054d650: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0054d653: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d655: jne 0x54d666 */ if (!fZ) goto L_0054d666;
L_0054d657:; BB(0x0054d657);
    /* 0054d657: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054d65a: call 0x54ccb0 */ r_esp -= 4; W32(r_esp, 0x54d65fu); f_0054ccb0();
    /* 0054d65f: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0054d662: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d664: je 0x54d66d */ if (fZ) goto L_0054d66d;
L_0054d666:; BB(0x0054d666);
    /* 0054d666: mov eax, 9 */ r_eax = 0x9u;
    /* 0054d66b: jmp 0x54d695 */ goto L_0054d695;
L_0054d66d:; BB(0x0054d66d);
    /* 0054d66d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054d670: call 0x54c820 */ r_esp -= 4; W32(r_esp, 0x54d675u); f_0054c820();
    /* 0054d675: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0054d678: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d67a: jne 0x54d68b */ if (!fZ) goto L_0054d68b;
L_0054d67c:; BB(0x0054d67c);
    /* 0054d67c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054d67f: call 0x54cdc0 */ r_esp -= 4; W32(r_esp, 0x54d684u); f_0054cdc0();
    /* 0054d684: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0054d687: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d689: je 0x54d692 */ if (fZ) goto L_0054d692;
L_0054d68b:; BB(0x0054d68b);
    /* 0054d68b: mov eax, 0xa */ r_eax = 0xau;
    /* 0054d690: jmp 0x54d695 */ goto L_0054d695;
L_0054d692:; BB(0x0054d692);
    /* 0054d692: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_0054d695:; BB(0x0054d695);
    /* 0054d695: mov esp, ebp */ r_esp = r_ebp;
    /* 0054d697: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054d698: ret  */ FN_RET(0x0054d520); r_esp += 4; return;
}

void f_0054d6a0(void) /* sub_54D6A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0054d6a0);
    /* 0054d6a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054d6a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0054d6a3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054d6a6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0054d6a7: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0054d6aa: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0054d6b1: jmp 0x54d6bc */ goto L_0054d6bc;
L_0054d6b3:; BB(0x0054d6b3);
    /* 0054d6b3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054d6b6: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054d6b9: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0054d6bc:; BB(0x0054d6bc);
    /* 0054d6bc: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054d6c0: jge 0x54d6d9 */ if ((fS==fO)) goto L_0054d6d9;
L_0054d6c2:; BB(0x0054d6c2);
    /* 0054d6c2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054d6c5: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054d6c8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054d6cb: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 0054d6ce: mov ax, word ptr [esi + eax*2] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_esi+r_eax*2))) & 0xffffu);
    /* 0054d6d2: mov word ptr [edx + ecx*2 + 4], ax */ W16((u32)(r_edx+r_ecx*2+0x4u), (u16)r_eax);
    /* 0054d6d7: jmp 0x54d6b3 */ goto L_0054d6b3;
L_0054d6d9:; BB(0x0054d6d9);
    /* 0054d6d9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054d6dc: mov byte ptr [ecx + 0x19], 0 */ W8((u32)(r_ecx+0x19u), 0x0u);
    /* 0054d6e0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054d6e3: call 0x551960 */ r_esp -= 4; W32(r_esp, 0x54d6e8u); f_00551960();
    /* 0054d6e8: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 0054d6ee: mov eax, dword ptr [edx + 0x4f14] */ r_eax = R32((u32)(r_edx+0x4f14u));
    /* 0054d6f4: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0054d6f7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054d6fa: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0054d6fd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054d6fe: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054d701: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054d702: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054d705: call 0x54c460 */ r_esp -= 4; W32(r_esp, 0x54d70au); f_0054c460();
    /* 0054d70a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054d70b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054d70e: call 0x54d720 */ r_esp -= 4; W32(r_esp, 0x54d713u); f_0054d720();
    /* 0054d713: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054d716: mov al, byte ptr [eax + 0x19] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x19u))) & 0xffu);
    /* 0054d719: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0054d71a: mov esp, ebp */ r_esp = r_ebp;
    /* 0054d71c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054d71d: ret 8 */ FN_RET(0x0054d6a0); r_esp += 12; return;
}

void f_0054d720(void) /* sub_54D720 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0054d720);
    /* 0054d720: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054d721: mov ebp, esp */ r_ebp = r_esp;
    /* 0054d723: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054d726: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0054d729: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054d72c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0054d72f: mov dword ptr [eax + 0x10], ecx */ W32((u32)(r_eax+0x10u), r_ecx);
    /* 0054d732: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054d735: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0054d738: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 0054d73d: mov ecx, dword ptr [eax + 0x4f14] */ r_ecx = R32((u32)(r_eax+0x4f14u));
    /* 0054d743: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0054d746: cmp dword ptr [ebp - 0xc], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0054d74a: ja 0x54d7a4 */ if ((!fC&&!fZ)) goto L_0054d7a4;
L_0054d74c:; BB(0x0054d74c);
    /* 0054d74c: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054d74f: jmp dword ptr [edx*4 + 0x54d7ac] */ { u32 t = R32((u32)(r_edx*4+0x54d7acu)); switch (t) { case 0x54d756u: goto L_0054d756; case 0x54d760u: goto L_0054d760; case 0x54d76au: goto L_0054d76a; case 0x54d774u: goto L_0054d774; case 0x54d77eu: goto L_0054d77e; case 0x54d788u: goto L_0054d788; case 0x54d792u: goto L_0054d792; case 0x54d79cu: goto L_0054d79c; default: UNSUP(0x0054d74f, "jump table entry is not a known target"); } }
L_0054d756:; BB(0x0054d756);
    /* 0054d756: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054d759: call 0x550410 */ r_esp -= 4; W32(r_esp, 0x54d75eu); f_00550410();
    /* 0054d75e: jmp 0x54d7a4 */ goto L_0054d7a4;
L_0054d760:; BB(0x0054d760);
    /* 0054d760: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054d763: call 0x5507f0 */ r_esp -= 4; W32(r_esp, 0x54d768u); f_005507f0();
    /* 0054d768: jmp 0x54d7a4 */ goto L_0054d7a4;
L_0054d76a:; BB(0x0054d76a);
    /* 0054d76a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054d76d: call 0x550bd0 */ r_esp -= 4; W32(r_esp, 0x54d772u); f_00550bd0();
    /* 0054d772: jmp 0x54d7a4 */ goto L_0054d7a4;
L_0054d774:; BB(0x0054d774);
    /* 0054d774: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054d777: call 0x54ffd0 */ r_esp -= 4; W32(r_esp, 0x54d77cu); f_0054ffd0();
    /* 0054d77c: jmp 0x54d7a4 */ goto L_0054d7a4;
L_0054d77e:; BB(0x0054d77e);
    /* 0054d77e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054d781: call 0x54f5a0 */ r_esp -= 4; W32(r_esp, 0x54d786u); f_0054f5a0();
    /* 0054d786: jmp 0x54d7a4 */ goto L_0054d7a4;
L_0054d788:; BB(0x0054d788);
    /* 0054d788: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054d78b: call 0x54eb80 */ r_esp -= 4; W32(r_esp, 0x54d790u); f_0054eb80();
    /* 0054d790: jmp 0x54d7a4 */ goto L_0054d7a4;
L_0054d792:; BB(0x0054d792);
    /* 0054d792: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054d795: call 0x54e3e0 */ r_esp -= 4; W32(r_esp, 0x54d79au); f_0054e3e0();
    /* 0054d79a: jmp 0x54d7a4 */ goto L_0054d7a4;
L_0054d79c:; BB(0x0054d79c);
    /* 0054d79c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054d79f: call 0x54d7e0 */ r_esp -= 4; W32(r_esp, 0x54d7a4u); f_0054d7e0();
L_0054d7a4:; BB(0x0054d7a4);
    /* 0054d7a4: mov esp, ebp */ r_esp = r_ebp;
    /* 0054d7a6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054d7a7: ret 4 */ FN_RET(0x0054d720); r_esp += 8; return;
}

void f_0054d7e0(void) /* sub_54D7E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0054d7e0);
    /* 0054d7e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054d7e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0054d7e3: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054d7e6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0054d7e7: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0054d7ea: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0054d7f1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054d7f4: call 0x551960 */ r_esp -= 4; W32(r_esp, 0x54d7f9u); f_00551960();
    /* 0054d7f9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054d7fc: call 0x54cec0 */ r_esp -= 4; W32(r_esp, 0x54d801u); f_0054cec0();
    /* 0054d801: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d803: jne 0x54da7f */ if (!fZ) goto L_0054da7f;
L_0054d809:; BB(0x0054d809);
    /* 0054d809: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0054d80b: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0054d80d: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0054d80f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054d812: call 0x551330 */ r_esp -= 4; W32(r_esp, 0x54d817u); f_00551330();
    /* 0054d817: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0054d81a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d81c: je 0x54d82d */ if (fZ) goto L_0054d82d;
L_0054d81e:; BB(0x0054d81e);
    /* 0054d81e: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0054d820: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054d823: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54d828u); f_005519a0();
    /* 0054d828: jmp 0x54e39e */ goto L_0054e39e;
L_0054d82d:; BB(0x0054d82d);
    /* 0054d82d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054d830: cmp dword ptr [ecx + 0x10], -1 */ {  u32 a = R32((u32)(r_ecx+0x10u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054d834: jle 0x54d8ef */ if ((fZ||fS!=fO)) goto L_0054d8ef;
L_0054d83a:; BB(0x0054d83a);
    /* 0054d83a: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054d83d: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 0054d840: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0054d843: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0054d846: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0054d849: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0054d84c: cmp dword ptr [ebp - 0x14], 9 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0054d850: ja 0x54d8ef */ if ((!fC&&!fZ)) goto L_0054d8ef;
L_0054d856:; BB(0x0054d856);
    /* 0054d856: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0054d859: movzx eax, byte ptr [edx + 0x54e3b4] */ r_eax = (u32)R8((u32)(r_edx+0x54e3b4u));
    /* 0054d860: jmp dword ptr [eax*4 + 0x54e3a4] */ { u32 t = R32((u32)(r_eax*4+0x54e3a4u)); switch (t) { case 0x54d867u: goto L_0054d867; case 0x54d87eu: goto L_0054d87e; case 0x54d888u: goto L_0054d888; case 0x54d8efu: goto L_0054d8ef; default: UNSUP(0x0054d860, "jump table entry is not a known target"); } }
L_0054d867:; BB(0x0054d867);
    /* 0054d867: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054d869: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054d86c: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54d871u); f_005519a0();
    /* 0054d871: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054d874: call 0x551920 */ r_esp -= 4; W32(r_esp, 0x54d879u); f_00551920();
    /* 0054d879: jmp 0x54e39e */ goto L_0054e39e;
L_0054d87e:; BB(0x0054d87e);
    /* 0054d87e: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 0054d880: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054d883: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54d888u); f_005519a0();
L_0054d888:; BB(0x0054d888);
    /* 0054d888: push 0x27 */ { u32 v = 0x27u; r_esp -= 4; W32(r_esp, v); }
    /* 0054d88a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054d88d: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54d892u); f_005519a0();
    /* 0054d892: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0054d899: jmp 0x54d8a4 */ goto L_0054d8a4;
L_0054d89b:; BB(0x0054d89b);
    /* 0054d89b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054d89e: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0054d8a1: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0054d8a4:; BB(0x0054d8a4);
    /* 0054d8a4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054d8a7: call 0x54c540 */ r_esp -= 4; W32(r_esp, 0x54d8acu); f_0054c540();
    /* 0054d8ac: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054d8af: jge 0x54d8ea */ if ((fS==fO)) goto L_0054d8ea;
L_0054d8b1:; BB(0x0054d8b1);
    /* 0054d8b1: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054d8b4: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054d8b7: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 0054d8bc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054d8bd: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x54d8c2u); f_00641280();
    /* 0054d8c2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054d8c5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054d8c6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054d8c9: call 0x54cf20 */ r_esp -= 4; W32(r_esp, 0x54d8ceu); f_0054cf20();
    /* 0054d8ce: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054d8d1: jle 0x54d8e8 */ if ((fZ||fS!=fO)) goto L_0054d8e8;
L_0054d8d3:; BB(0x0054d8d3);
    /* 0054d8d3: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054d8d6: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0054d8d9: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0054d8dc: mov byte ptr [edx + 0x14], al */ W8((u32)(r_edx+0x14u), (u8)r_eax);
    /* 0054d8df: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054d8e2: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0054d8e5: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0054d8e8:; BB(0x0054d8e8);
    /* 0054d8e8: jmp 0x54d89b */ goto L_0054d89b;
L_0054d8ea:; BB(0x0054d8ea);
    /* 0054d8ea: jmp 0x54e39e */ goto L_0054e39e;
L_0054d8ef:; BB(0x0054d8ef);
    /* 0054d8ef: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0054d8f1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054d8f3: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0054d8f5: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054d8f8: call 0x551330 */ r_esp -= 4; W32(r_esp, 0x54d8fdu); f_00551330();
    /* 0054d8fd: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0054d900: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d902: je 0x54d913 */ if (fZ) goto L_0054d913;
L_0054d904:; BB(0x0054d904);
    /* 0054d904: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0054d906: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054d909: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54d90eu); f_005519a0();
    /* 0054d90e: jmp 0x54e39e */ goto L_0054e39e;
L_0054d913:; BB(0x0054d913);
    /* 0054d913: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0054d915: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0054d917: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0054d919: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054d91c: call 0x551330 */ r_esp -= 4; W32(r_esp, 0x54d921u); f_00551330();
    /* 0054d921: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0054d924: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d926: je 0x54d937 */ if (fZ) goto L_0054d937;
L_0054d928:; BB(0x0054d928);
    /* 0054d928: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0054d92a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054d92d: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54d932u); f_005519a0();
    /* 0054d932: jmp 0x54e39e */ goto L_0054e39e;
L_0054d937:; BB(0x0054d937);
    /* 0054d937: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054d93a: call 0x5515d0 */ r_esp -= 4; W32(r_esp, 0x54d93fu); f_005515d0();
    /* 0054d93f: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0054d942: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d944: je 0x54d955 */ if (fZ) goto L_0054d955;
L_0054d946:; BB(0x0054d946);
    /* 0054d946: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 0054d948: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054d94b: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54d950u); f_005519a0();
    /* 0054d950: jmp 0x54e39e */ goto L_0054e39e;
L_0054d955:; BB(0x0054d955);
    /* 0054d955: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054d958: call 0x54c840 */ r_esp -= 4; W32(r_esp, 0x54d95du); f_0054c840();
    /* 0054d95d: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0054d960: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d962: je 0x54d9cb */ if (fZ) goto L_0054d9cb;
L_0054d964:; BB(0x0054d964);
    /* 0054d964: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0054d96b: jmp 0x54d976 */ goto L_0054d976;
L_0054d96d:; BB(0x0054d96d);
    /* 0054d96d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054d970: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054d973: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0054d976:; BB(0x0054d976);
    /* 0054d976: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054d979: call 0x54c540 */ r_esp -= 4; W32(r_esp, 0x54d97eu); f_0054c540();
    /* 0054d97e: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054d981: jge 0x54d9bc */ if ((fS==fO)) goto L_0054d9bc;
L_0054d983:; BB(0x0054d983);
    /* 0054d983: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054d986: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054d989: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0054d98e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054d98f: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x54d994u); f_00641280();
    /* 0054d994: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054d997: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054d998: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054d99b: call 0x54cf20 */ r_esp -= 4; W32(r_esp, 0x54d9a0u); f_0054cf20();
    /* 0054d9a0: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d9a3: jne 0x54d9ba */ if (!fZ) goto L_0054d9ba;
L_0054d9a5:; BB(0x0054d9a5);
    /* 0054d9a5: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054d9a8: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0054d9ab: mov dl, byte ptr [ebp - 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0054d9ae: mov byte ptr [ecx + 0x14], dl */ W8((u32)(r_ecx+0x14u), (u8)r_edx);
    /* 0054d9b1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054d9b4: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054d9b7: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0054d9ba:; BB(0x0054d9ba);
    /* 0054d9ba: jmp 0x54d96d */ goto L_0054d96d;
L_0054d9bc:; BB(0x0054d9bc);
    /* 0054d9bc: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 0054d9be: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054d9c1: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54d9c6u); f_005519a0();
    /* 0054d9c6: jmp 0x54e39e */ goto L_0054e39e;
L_0054d9cb:; BB(0x0054d9cb);
    /* 0054d9cb: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0054d9cd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054d9cf: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0054d9d1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054d9d4: call 0x551330 */ r_esp -= 4; W32(r_esp, 0x54d9d9u); f_00551330();
    /* 0054d9d9: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0054d9dc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d9de: je 0x54da30 */ if (fZ) goto L_0054da30;
L_0054d9e0:; BB(0x0054d9e0);
    /* 0054d9e0: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054d9e3: movsx eax, byte ptr [edx + 0x14] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x14u));
    /* 0054d9e7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054d9ea: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 0054d9ef: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054d9f0: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x54d9f5u); f_00641280();
    /* 0054d9f5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054d9f8: mov esi, eax */ r_esi = r_eax;
    /* 0054d9fa: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0054d9fd: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054da00: movsx ecx, byte ptr [eax + 0x16] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x16u));
    /* 0054da04: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054da07: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0054da0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054da0d: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x54da12u); f_00641280();
    /* 0054da12: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054da15: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054da17: je 0x54da28 */ if (fZ) goto L_0054da28;
L_0054da19:; BB(0x0054da19);
    /* 0054da19: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0054da1b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054da1e: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54da23u); f_005519a0();
    /* 0054da23: jmp 0x54e39e */ goto L_0054e39e;
L_0054da28:; BB(0x0054da28);
    /* 0054da28: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054da2b: call 0x551960 */ r_esp -= 4; W32(r_esp, 0x54da30u); f_00551960();
L_0054da30:; BB(0x0054da30);
    /* 0054da30: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054da33: call 0x551890 */ r_esp -= 4; W32(r_esp, 0x54da38u); f_00551890();
    /* 0054da38: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0054da3b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054da3d: je 0x54da4e */ if (fZ) goto L_0054da4e;
L_0054da3f:; BB(0x0054da3f);
    /* 0054da3f: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 0054da41: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054da44: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54da49u); f_005519a0();
    /* 0054da49: jmp 0x54e39e */ goto L_0054e39e;
L_0054da4e:; BB(0x0054da4e);
    /* 0054da4e: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0054da50: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054da52: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0054da54: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054da57: call 0x551670 */ r_esp -= 4; W32(r_esp, 0x54da5cu); f_00551670();
    /* 0054da5c: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0054da5f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054da61: je 0x54da72 */ if (fZ) goto L_0054da72;
L_0054da63:; BB(0x0054da63);
    /* 0054da63: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 0054da65: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054da68: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54da6du); f_005519a0();
    /* 0054da6d: jmp 0x54e39e */ goto L_0054e39e;
L_0054da72:; BB(0x0054da72);
    /* 0054da72: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054da75: call 0x551960 */ r_esp -= 4; W32(r_esp, 0x54da7au); f_00551960();
    /* 0054da7a: jmp 0x54e39e */ goto L_0054e39e;
L_0054da7f:; BB(0x0054da7f);
    /* 0054da7f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054da82: cmp dword ptr [eax + 0x10], -1 */ {  u32 a = R32((u32)(r_eax+0x10u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054da86: jle 0x54dede */ if ((fZ||fS!=fO)) goto L_0054dede;
L_0054da8c:; BB(0x0054da8c);
    /* 0054da8c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054da8f: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 0054da92: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0054da95: cmp dword ptr [ebp - 0x18], 0xa */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0054da99: ja 0x54dede */ if ((!fC&&!fZ)) goto L_0054dede;
L_0054da9f:; BB(0x0054da9f);
    /* 0054da9f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0054daa2: movzx ecx, byte ptr [eax + 0x54e3d4] */ r_ecx = (u32)R8((u32)(r_eax+0x54e3d4u));
    /* 0054daa9: jmp dword ptr [ecx*4 + 0x54e3c0] */ { u32 t = R32((u32)(r_ecx*4+0x54e3c0u)); switch (t) { case 0x54dab0u: goto L_0054dab0; case 0x54dac7u: goto L_0054dac7; case 0x54db25u: goto L_0054db25; case 0x54dc1cu: goto L_0054dc1c; case 0x54dd13u: goto L_0054dd13; default: UNSUP(0x0054daa9, "jump table entry is not a known target"); } }
L_0054dab0:; BB(0x0054dab0);
    /* 0054dab0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054dab2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054dab5: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54dabau); f_005519a0();
    /* 0054daba: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054dabd: call 0x551920 */ r_esp -= 4; W32(r_esp, 0x54dac2u); f_00551920();
    /* 0054dac2: jmp 0x54e39e */ goto L_0054e39e;
L_0054dac7:; BB(0x0054dac7);
    /* 0054dac7: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 0054dac9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054dacc: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54dad1u); f_005519a0();
    /* 0054dad1: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0054dad8: jmp 0x54dae3 */ goto L_0054dae3;
L_0054dada:; BB(0x0054dada);
    /* 0054dada: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054dadd: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0054dae0: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0054dae3:; BB(0x0054dae3);
    /* 0054dae3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054dae6: call 0x54c540 */ r_esp -= 4; W32(r_esp, 0x54daebu); f_0054c540();
    /* 0054daeb: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054daee: jge 0x54db20 */ if ((fS==fO)) goto L_0054db20;
L_0054daf0:; BB(0x0054daf0);
    /* 0054daf0: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054daf3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054daf6: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 0054dafb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054dafc: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054daff: call 0x54c590 */ r_esp -= 4; W32(r_esp, 0x54db04u); f_0054c590();
    /* 0054db04: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054db07: jne 0x54db1e */ if (!fZ) goto L_0054db1e;
L_0054db09:; BB(0x0054db09);
    /* 0054db09: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054db0c: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054db0f: mov cl, byte ptr [ebp - 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0054db12: mov byte ptr [eax + 0x14], cl */ W8((u32)(r_eax+0x14u), (u8)r_ecx);
    /* 0054db15: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054db18: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0054db1b: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0054db1e:; BB(0x0054db1e);
    /* 0054db1e: jmp 0x54dada */ goto L_0054dada;
L_0054db20:; BB(0x0054db20);
    /* 0054db20: jmp 0x54e39e */ goto L_0054e39e;
L_0054db25:; BB(0x0054db25);
    /* 0054db25: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054db28: call 0x54cec0 */ r_esp -= 4; W32(r_esp, 0x54db2du); f_0054cec0();
    /* 0054db2d: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054db30: jne 0x54db3e */ if (!fZ) goto L_0054db3e;
L_0054db32:; BB(0x0054db32);
    /* 0054db32: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 0054db34: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054db37: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54db3cu); f_005519a0();
    /* 0054db3c: jmp 0x54db48 */ goto L_0054db48;
L_0054db3e:; BB(0x0054db3e);
    /* 0054db3e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054db40: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054db43: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54db48u); f_005519a0();
L_0054db48:; BB(0x0054db48);
    /* 0054db48: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054db4b: call 0x54cec0 */ r_esp -= 4; W32(r_esp, 0x54db50u); f_0054cec0();
    /* 0054db50: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054db53: jne 0x54dba6 */ if (!fZ) goto L_0054dba6;
L_0054db55:; BB(0x0054db55);
    /* 0054db55: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0054db5c: jmp 0x54db67 */ goto L_0054db67;
L_0054db5e:; BB(0x0054db5e);
    /* 0054db5e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054db61: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054db64: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0054db67:; BB(0x0054db67);
    /* 0054db67: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054db6a: call 0x54c540 */ r_esp -= 4; W32(r_esp, 0x54db6fu); f_0054c540();
    /* 0054db6f: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054db72: jge 0x54dba4 */ if ((fS==fO)) goto L_0054dba4;
L_0054db74:; BB(0x0054db74);
    /* 0054db74: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054db77: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054db7a: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0054db7f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054db80: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054db83: call 0x54c590 */ r_esp -= 4; W32(r_esp, 0x54db88u); f_0054c590();
    /* 0054db88: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054db8b: jne 0x54dba2 */ if (!fZ) goto L_0054dba2;
L_0054db8d:; BB(0x0054db8d);
    /* 0054db8d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054db90: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0054db93: mov dl, byte ptr [ebp - 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0054db96: mov byte ptr [ecx + 0x14], dl */ W8((u32)(r_ecx+0x14u), (u8)r_edx);
    /* 0054db99: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054db9c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054db9f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0054dba2:; BB(0x0054dba2);
    /* 0054dba2: jmp 0x54db5e */ goto L_0054db5e;
L_0054dba4:; BB(0x0054dba4);
    /* 0054dba4: jmp 0x54dc17 */ goto L_0054dc17;
L_0054dba6:; BB(0x0054dba6);
    /* 0054dba6: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0054dbad: jmp 0x54dbb8 */ goto L_0054dbb8;
L_0054dbaf:; BB(0x0054dbaf);
    /* 0054dbaf: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054dbb2: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0054dbb5: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0054dbb8:; BB(0x0054dbb8);
    /* 0054dbb8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054dbbb: call 0x54c540 */ r_esp -= 4; W32(r_esp, 0x54dbc0u); f_0054c540();
    /* 0054dbc0: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054dbc3: jge 0x54dc17 */ if ((fS==fO)) goto L_0054dc17;
L_0054dbc5:; BB(0x0054dbc5);
    /* 0054dbc5: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054dbc8: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054dbcb: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 0054dbd0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054dbd1: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x54dbd6u); f_00641280();
    /* 0054dbd6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054dbd9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054dbda: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054dbdd: call 0x54cf20 */ r_esp -= 4; W32(r_esp, 0x54dbe2u); f_0054cf20();
    /* 0054dbe2: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054dbe5: jg 0x54dc00 */ if ((!fZ&&fS==fO)) goto L_0054dc00;
L_0054dbe7:; BB(0x0054dbe7);
    /* 0054dbe7: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054dbea: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054dbed: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 0054dbf2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054dbf3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054dbf6: call 0x54c590 */ r_esp -= 4; W32(r_esp, 0x54dbfbu); f_0054c590();
    /* 0054dbfb: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054dbfe: jne 0x54dc15 */ if (!fZ) goto L_0054dc15;
L_0054dc00:; BB(0x0054dc00);
    /* 0054dc00: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054dc03: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0054dc06: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0054dc09: mov byte ptr [edx + 0x14], al */ W8((u32)(r_edx+0x14u), (u8)r_eax);
    /* 0054dc0c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054dc0f: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0054dc12: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0054dc15:; BB(0x0054dc15);
    /* 0054dc15: jmp 0x54dbaf */ goto L_0054dbaf;
L_0054dc17:; BB(0x0054dc17);
    /* 0054dc17: jmp 0x54e39e */ goto L_0054e39e;
L_0054dc1c:; BB(0x0054dc1c);
    /* 0054dc1c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054dc1f: call 0x54cec0 */ r_esp -= 4; W32(r_esp, 0x54dc24u); f_0054cec0();
    /* 0054dc24: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054dc27: jne 0x54dc35 */ if (!fZ) goto L_0054dc35;
L_0054dc29:; BB(0x0054dc29);
    /* 0054dc29: push 0x29 */ { u32 v = 0x29u; r_esp -= 4; W32(r_esp, v); }
    /* 0054dc2b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054dc2e: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54dc33u); f_005519a0();
    /* 0054dc33: jmp 0x54dc3f */ goto L_0054dc3f;
L_0054dc35:; BB(0x0054dc35);
    /* 0054dc35: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 0054dc37: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054dc3a: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54dc3fu); f_005519a0();
L_0054dc3f:; BB(0x0054dc3f);
    /* 0054dc3f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054dc42: call 0x54cec0 */ r_esp -= 4; W32(r_esp, 0x54dc47u); f_0054cec0();
    /* 0054dc47: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054dc4a: jne 0x54dc9d */ if (!fZ) goto L_0054dc9d;
L_0054dc4c:; BB(0x0054dc4c);
    /* 0054dc4c: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0054dc53: jmp 0x54dc5e */ goto L_0054dc5e;
L_0054dc55:; BB(0x0054dc55);
    /* 0054dc55: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054dc58: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0054dc5b: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0054dc5e:; BB(0x0054dc5e);
    /* 0054dc5e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054dc61: call 0x54c540 */ r_esp -= 4; W32(r_esp, 0x54dc66u); f_0054c540();
    /* 0054dc66: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054dc69: jge 0x54dc9b */ if ((fS==fO)) goto L_0054dc9b;
L_0054dc6b:; BB(0x0054dc6b);
    /* 0054dc6b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054dc6e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054dc71: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 0054dc76: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054dc77: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054dc7a: call 0x54c590 */ r_esp -= 4; W32(r_esp, 0x54dc7fu); f_0054c590();
    /* 0054dc7f: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054dc82: jne 0x54dc99 */ if (!fZ) goto L_0054dc99;
L_0054dc84:; BB(0x0054dc84);
    /* 0054dc84: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054dc87: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054dc8a: mov cl, byte ptr [ebp - 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0054dc8d: mov byte ptr [eax + 0x14], cl */ W8((u32)(r_eax+0x14u), (u8)r_ecx);
    /* 0054dc90: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054dc93: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0054dc96: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0054dc99:; BB(0x0054dc99);
    /* 0054dc99: jmp 0x54dc55 */ goto L_0054dc55;
L_0054dc9b:; BB(0x0054dc9b);
    /* 0054dc9b: jmp 0x54dd0e */ goto L_0054dd0e;
L_0054dc9d:; BB(0x0054dc9d);
    /* 0054dc9d: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0054dca4: jmp 0x54dcaf */ goto L_0054dcaf;
L_0054dca6:; BB(0x0054dca6);
    /* 0054dca6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054dca9: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054dcac: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0054dcaf:; BB(0x0054dcaf);
    /* 0054dcaf: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054dcb2: call 0x54c540 */ r_esp -= 4; W32(r_esp, 0x54dcb7u); f_0054c540();
    /* 0054dcb7: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054dcba: jge 0x54dd0e */ if ((fS==fO)) goto L_0054dd0e;
L_0054dcbc:; BB(0x0054dcbc);
    /* 0054dcbc: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054dcbf: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054dcc2: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0054dcc7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054dcc8: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x54dccdu); f_00641280();
    /* 0054dccd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054dcd0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054dcd1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054dcd4: call 0x54cf20 */ r_esp -= 4; W32(r_esp, 0x54dcd9u); f_0054cf20();
    /* 0054dcd9: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054dcdc: jg 0x54dcf7 */ if ((!fZ&&fS==fO)) goto L_0054dcf7;
L_0054dcde:; BB(0x0054dcde);
    /* 0054dcde: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054dce1: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054dce4: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0054dce9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054dcea: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054dced: call 0x54c590 */ r_esp -= 4; W32(r_esp, 0x54dcf2u); f_0054c590();
    /* 0054dcf2: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054dcf5: jne 0x54dd0c */ if (!fZ) goto L_0054dd0c;
L_0054dcf7:; BB(0x0054dcf7);
    /* 0054dcf7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054dcfa: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0054dcfd: mov dl, byte ptr [ebp - 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0054dd00: mov byte ptr [ecx + 0x14], dl */ W8((u32)(r_ecx+0x14u), (u8)r_edx);
    /* 0054dd03: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054dd06: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054dd09: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0054dd0c:; BB(0x0054dd0c);
    /* 0054dd0c: jmp 0x54dca6 */ goto L_0054dca6;
L_0054dd0e:; BB(0x0054dd0e);
    /* 0054dd0e: jmp 0x54e39e */ goto L_0054e39e;
L_0054dd13:; BB(0x0054dd13);
    /* 0054dd13: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054dd16: call 0x54cec0 */ r_esp -= 4; W32(r_esp, 0x54dd1bu); f_0054cec0();
    /* 0054dd1b: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054dd1e: jne 0x54dd35 */ if (!fZ) goto L_0054dd35;
L_0054dd20:; BB(0x0054dd20);
    /* 0054dd20: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0054dd22: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0054dd24: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0054dd26: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054dd29: call 0x551330 */ r_esp -= 4; W32(r_esp, 0x54dd2eu); f_00551330();
    /* 0054dd2e: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0054dd31: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054dd33: jne 0x54dd5f */ if (!fZ) goto L_0054dd5f;
L_0054dd35:; BB(0x0054dd35);
    /* 0054dd35: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054dd38: call 0x54cec0 */ r_esp -= 4; W32(r_esp, 0x54dd3du); f_0054cec0();
    /* 0054dd3d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054dd40: jne 0x54ddee */ if (!fZ) goto L_0054ddee;
L_0054dd46:; BB(0x0054dd46);
    /* 0054dd46: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0054dd48: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0054dd4a: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0054dd4c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054dd4f: call 0x551330 */ r_esp -= 4; W32(r_esp, 0x54dd54u); f_00551330();
    /* 0054dd54: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0054dd57: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054dd59: je 0x54ddee */ if (fZ) goto L_0054ddee;
L_0054dd5f:; BB(0x0054dd5f);
    /* 0054dd5f: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0054dd61: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054dd64: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54dd69u); f_005519a0();
    /* 0054dd69: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0054dd70: jmp 0x54dd7b */ goto L_0054dd7b;
L_0054dd72:; BB(0x0054dd72);
    /* 0054dd72: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054dd75: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054dd78: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0054dd7b:; BB(0x0054dd7b);
    /* 0054dd7b: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054dd7f: jge 0x54dd9a */ if ((fS==fO)) goto L_0054dd9a;
L_0054dd81:; BB(0x0054dd81);
    /* 0054dd81: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054dd84: add ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0054dd87: movsx edx, byte ptr [ecx + 0x14] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x14u));
    /* 0054dd8b: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054dd8e: jne 0x54dd98 */ if (!fZ) goto L_0054dd98;
L_0054dd90:; BB(0x0054dd90);
    /* 0054dd90: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054dd93: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0054dd96: jmp 0x54dd9a */ goto L_0054dd9a;
L_0054dd98:; BB(0x0054dd98);
    /* 0054dd98: jmp 0x54dd72 */ goto L_0054dd72;
L_0054dd9a:; BB(0x0054dd9a);
    /* 0054dd9a: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0054dda1: jmp 0x54ddac */ goto L_0054ddac;
L_0054dda3:; BB(0x0054dda3);
    /* 0054dda3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054dda6: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0054dda9: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0054ddac:; BB(0x0054ddac);
    /* 0054ddac: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054ddaf: call 0x54c540 */ r_esp -= 4; W32(r_esp, 0x54ddb4u); f_0054c540();
    /* 0054ddb4: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054ddb7: jge 0x54dde9 */ if ((fS==fO)) goto L_0054dde9;
L_0054ddb9:; BB(0x0054ddb9);
    /* 0054ddb9: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054ddbc: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054ddbf: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 0054ddc4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054ddc5: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054ddc8: call 0x54c590 */ r_esp -= 4; W32(r_esp, 0x54ddcdu); f_0054c590();
    /* 0054ddcd: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054ddd0: jne 0x54dde7 */ if (!fZ) goto L_0054dde7;
L_0054ddd2:; BB(0x0054ddd2);
    /* 0054ddd2: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054ddd5: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0054ddd8: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0054dddb: mov byte ptr [edx + 0x14], al */ W8((u32)(r_edx+0x14u), (u8)r_eax);
    /* 0054ddde: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054dde1: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0054dde4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0054dde7:; BB(0x0054dde7);
    /* 0054dde7: jmp 0x54dda3 */ goto L_0054dda3;
L_0054dde9:; BB(0x0054dde9);
    /* 0054dde9: jmp 0x54e39e */ goto L_0054e39e;
L_0054ddee:; BB(0x0054ddee);
    /* 0054ddee: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054ddf1: call 0x551960 */ r_esp -= 4; W32(r_esp, 0x54ddf6u); f_00551960();
    /* 0054ddf6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054ddf9: call 0x54cec0 */ r_esp -= 4; W32(r_esp, 0x54ddfeu); f_0054cec0();
    /* 0054ddfe: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054de01: jne 0x54de5e */ if (!fZ) goto L_0054de5e;
L_0054de03:; BB(0x0054de03);
    /* 0054de03: push 0x2f */ { u32 v = 0x2fu; r_esp -= 4; W32(r_esp, v); }
    /* 0054de05: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054de08: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54de0du); f_005519a0();
    /* 0054de0d: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0054de14: jmp 0x54de1f */ goto L_0054de1f;
L_0054de16:; BB(0x0054de16);
    /* 0054de16: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054de19: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0054de1c: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0054de1f:; BB(0x0054de1f);
    /* 0054de1f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054de22: call 0x54c540 */ r_esp -= 4; W32(r_esp, 0x54de27u); f_0054c540();
    /* 0054de27: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054de2a: jge 0x54de5c */ if ((fS==fO)) goto L_0054de5c;
L_0054de2c:; BB(0x0054de2c);
    /* 0054de2c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054de2f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054de32: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 0054de37: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054de38: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054de3b: call 0x54c590 */ r_esp -= 4; W32(r_esp, 0x54de40u); f_0054c590();
    /* 0054de40: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054de43: jne 0x54de5a */ if (!fZ) goto L_0054de5a;
L_0054de45:; BB(0x0054de45);
    /* 0054de45: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054de48: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054de4b: mov cl, byte ptr [ebp - 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0054de4e: mov byte ptr [eax + 0x14], cl */ W8((u32)(r_eax+0x14u), (u8)r_ecx);
    /* 0054de51: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054de54: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0054de57: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0054de5a:; BB(0x0054de5a);
    /* 0054de5a: jmp 0x54de16 */ goto L_0054de16;
L_0054de5c:; BB(0x0054de5c);
    /* 0054de5c: jmp 0x54ded9 */ goto L_0054ded9;
L_0054de5e:; BB(0x0054de5e);
    /* 0054de5e: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 0054de60: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054de63: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54de68u); f_005519a0();
    /* 0054de68: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0054de6f: jmp 0x54de7a */ goto L_0054de7a;
L_0054de71:; BB(0x0054de71);
    /* 0054de71: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054de74: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054de77: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0054de7a:; BB(0x0054de7a);
    /* 0054de7a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054de7d: call 0x54c540 */ r_esp -= 4; W32(r_esp, 0x54de82u); f_0054c540();
    /* 0054de82: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054de85: jge 0x54ded9 */ if ((fS==fO)) goto L_0054ded9;
L_0054de87:; BB(0x0054de87);
    /* 0054de87: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054de8a: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054de8d: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0054de92: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054de93: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x54de98u); f_00641280();
    /* 0054de98: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054de9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054de9c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054de9f: call 0x54cf20 */ r_esp -= 4; W32(r_esp, 0x54dea4u); f_0054cf20();
    /* 0054dea4: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054dea7: jg 0x54dec2 */ if ((!fZ&&fS==fO)) goto L_0054dec2;
L_0054dea9:; BB(0x0054dea9);
    /* 0054dea9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054deac: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054deaf: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0054deb4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054deb5: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054deb8: call 0x54c590 */ r_esp -= 4; W32(r_esp, 0x54debdu); f_0054c590();
    /* 0054debd: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054dec0: jne 0x54ded7 */ if (!fZ) goto L_0054ded7;
L_0054dec2:; BB(0x0054dec2);
    /* 0054dec2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054dec5: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0054dec8: mov dl, byte ptr [ebp - 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0054decb: mov byte ptr [ecx + 0x14], dl */ W8((u32)(r_ecx+0x14u), (u8)r_edx);
    /* 0054dece: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054ded1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054ded4: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0054ded7:; BB(0x0054ded7);
    /* 0054ded7: jmp 0x54de71 */ goto L_0054de71;
L_0054ded9:; BB(0x0054ded9);
    /* 0054ded9: jmp 0x54e39e */ goto L_0054e39e;
L_0054dede:; BB(0x0054dede);
    /* 0054dede: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054dee1: call 0x54cec0 */ r_esp -= 4; W32(r_esp, 0x54dee6u); f_0054cec0();
    /* 0054dee6: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054dee9: jne 0x54df00 */ if (!fZ) goto L_0054df00;
L_0054deeb:; BB(0x0054deeb);
    /* 0054deeb: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0054deed: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0054deef: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0054def1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054def4: call 0x551330 */ r_esp -= 4; W32(r_esp, 0x54def9u); f_00551330();
    /* 0054def9: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0054defc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054defe: jne 0x54df2a */ if (!fZ) goto L_0054df2a;
L_0054df00:; BB(0x0054df00);
    /* 0054df00: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054df03: call 0x54cec0 */ r_esp -= 4; W32(r_esp, 0x54df08u); f_0054cec0();
    /* 0054df08: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054df0b: jne 0x54dfb9 */ if (!fZ) goto L_0054dfb9;
L_0054df11:; BB(0x0054df11);
    /* 0054df11: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0054df13: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0054df15: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0054df17: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054df1a: call 0x551330 */ r_esp -= 4; W32(r_esp, 0x54df1fu); f_00551330();
    /* 0054df1f: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0054df22: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054df24: je 0x54dfb9 */ if (fZ) goto L_0054dfb9;
L_0054df2a:; BB(0x0054df2a);
    /* 0054df2a: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0054df2c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054df2f: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54df34u); f_005519a0();
    /* 0054df34: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0054df3b: jmp 0x54df46 */ goto L_0054df46;
L_0054df3d:; BB(0x0054df3d);
    /* 0054df3d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054df40: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054df43: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0054df46:; BB(0x0054df46);
    /* 0054df46: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054df4a: jge 0x54df65 */ if ((fS==fO)) goto L_0054df65;
L_0054df4c:; BB(0x0054df4c);
    /* 0054df4c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054df4f: add ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0054df52: movsx edx, byte ptr [ecx + 0x14] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x14u));
    /* 0054df56: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054df59: jne 0x54df63 */ if (!fZ) goto L_0054df63;
L_0054df5b:; BB(0x0054df5b);
    /* 0054df5b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054df5e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0054df61: jmp 0x54df65 */ goto L_0054df65;
L_0054df63:; BB(0x0054df63);
    /* 0054df63: jmp 0x54df3d */ goto L_0054df3d;
L_0054df65:; BB(0x0054df65);
    /* 0054df65: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0054df6c: jmp 0x54df77 */ goto L_0054df77;
L_0054df6e:; BB(0x0054df6e);
    /* 0054df6e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054df71: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0054df74: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0054df77:; BB(0x0054df77);
    /* 0054df77: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054df7a: call 0x54c540 */ r_esp -= 4; W32(r_esp, 0x54df7fu); f_0054c540();
    /* 0054df7f: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054df82: jge 0x54dfb4 */ if ((fS==fO)) goto L_0054dfb4;
L_0054df84:; BB(0x0054df84);
    /* 0054df84: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054df87: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054df8a: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 0054df8f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054df90: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054df93: call 0x54c590 */ r_esp -= 4; W32(r_esp, 0x54df98u); f_0054c590();
    /* 0054df98: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054df9b: jne 0x54dfb2 */ if (!fZ) goto L_0054dfb2;
L_0054df9d:; BB(0x0054df9d);
    /* 0054df9d: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054dfa0: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0054dfa3: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0054dfa6: mov byte ptr [edx + 0x14], al */ W8((u32)(r_edx+0x14u), (u8)r_eax);
    /* 0054dfa9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054dfac: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0054dfaf: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0054dfb2:; BB(0x0054dfb2);
    /* 0054dfb2: jmp 0x54df6e */ goto L_0054df6e;
L_0054dfb4:; BB(0x0054dfb4);
    /* 0054dfb4: jmp 0x54e39e */ goto L_0054e39e;
L_0054dfb9:; BB(0x0054dfb9);
    /* 0054dfb9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054dfbc: call 0x551960 */ r_esp -= 4; W32(r_esp, 0x54dfc1u); f_00551960();
    /* 0054dfc1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054dfc4: call 0x54cec0 */ r_esp -= 4; W32(r_esp, 0x54dfc9u); f_0054cec0();
    /* 0054dfc9: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054dfcc: jne 0x54e07a */ if (!fZ) goto L_0054e07a;
L_0054dfd2:; BB(0x0054dfd2);
    /* 0054dfd2: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0054dfd4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054dfd6: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0054dfd8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054dfdb: call 0x551330 */ r_esp -= 4; W32(r_esp, 0x54dfe0u); f_00551330();
    /* 0054dfe0: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0054dfe3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054dfe5: je 0x54e07a */ if (fZ) goto L_0054e07a;
L_0054dfeb:; BB(0x0054dfeb);
    /* 0054dfeb: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0054dfed: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054dff0: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54dff5u); f_005519a0();
    /* 0054dff5: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0054dffc: jmp 0x54e007 */ goto L_0054e007;
L_0054dffe:; BB(0x0054dffe);
    /* 0054dffe: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054e001: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054e004: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0054e007:; BB(0x0054e007);
    /* 0054e007: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054e00b: jge 0x54e026 */ if ((fS==fO)) goto L_0054e026;
L_0054e00d:; BB(0x0054e00d);
    /* 0054e00d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e010: add ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0054e013: movsx edx, byte ptr [ecx + 0x14] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x14u));
    /* 0054e017: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e01a: jne 0x54e024 */ if (!fZ) goto L_0054e024;
L_0054e01c:; BB(0x0054e01c);
    /* 0054e01c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054e01f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0054e022: jmp 0x54e026 */ goto L_0054e026;
L_0054e024:; BB(0x0054e024);
    /* 0054e024: jmp 0x54dffe */ goto L_0054dffe;
L_0054e026:; BB(0x0054e026);
    /* 0054e026: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0054e02d: jmp 0x54e038 */ goto L_0054e038;
L_0054e02f:; BB(0x0054e02f);
    /* 0054e02f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054e032: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0054e035: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0054e038:; BB(0x0054e038);
    /* 0054e038: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e03b: call 0x54c540 */ r_esp -= 4; W32(r_esp, 0x54e040u); f_0054c540();
    /* 0054e040: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054e043: jge 0x54e075 */ if ((fS==fO)) goto L_0054e075;
L_0054e045:; BB(0x0054e045);
    /* 0054e045: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054e048: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e04b: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 0054e050: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054e051: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e054: call 0x54c590 */ r_esp -= 4; W32(r_esp, 0x54e059u); f_0054c590();
    /* 0054e059: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e05c: jne 0x54e073 */ if (!fZ) goto L_0054e073;
L_0054e05e:; BB(0x0054e05e);
    /* 0054e05e: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e061: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0054e064: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0054e067: mov byte ptr [edx + 0x14], al */ W8((u32)(r_edx+0x14u), (u8)r_eax);
    /* 0054e06a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054e06d: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0054e070: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0054e073:; BB(0x0054e073);
    /* 0054e073: jmp 0x54e02f */ goto L_0054e02f;
L_0054e075:; BB(0x0054e075);
    /* 0054e075: jmp 0x54e39e */ goto L_0054e39e;
L_0054e07a:; BB(0x0054e07a);
    /* 0054e07a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e07d: call 0x551960 */ r_esp -= 4; W32(r_esp, 0x54e082u); f_00551960();
    /* 0054e082: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e085: call 0x54cec0 */ r_esp -= 4; W32(r_esp, 0x54e08au); f_0054cec0();
    /* 0054e08a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e08d: jne 0x54e13b */ if (!fZ) goto L_0054e13b;
L_0054e093:; BB(0x0054e093);
    /* 0054e093: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0054e095: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0054e097: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0054e099: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e09c: call 0x551330 */ r_esp -= 4; W32(r_esp, 0x54e0a1u); f_00551330();
    /* 0054e0a1: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0054e0a4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e0a6: je 0x54e13b */ if (fZ) goto L_0054e13b;
L_0054e0ac:; BB(0x0054e0ac);
    /* 0054e0ac: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0054e0ae: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e0b1: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54e0b6u); f_005519a0();
    /* 0054e0b6: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0054e0bd: jmp 0x54e0c8 */ goto L_0054e0c8;
L_0054e0bf:; BB(0x0054e0bf);
    /* 0054e0bf: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054e0c2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054e0c5: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0054e0c8:; BB(0x0054e0c8);
    /* 0054e0c8: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054e0cc: jge 0x54e0e7 */ if ((fS==fO)) goto L_0054e0e7;
L_0054e0ce:; BB(0x0054e0ce);
    /* 0054e0ce: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e0d1: add ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0054e0d4: movsx edx, byte ptr [ecx + 0x14] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x14u));
    /* 0054e0d8: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e0db: jne 0x54e0e5 */ if (!fZ) goto L_0054e0e5;
L_0054e0dd:; BB(0x0054e0dd);
    /* 0054e0dd: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054e0e0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0054e0e3: jmp 0x54e0e7 */ goto L_0054e0e7;
L_0054e0e5:; BB(0x0054e0e5);
    /* 0054e0e5: jmp 0x54e0bf */ goto L_0054e0bf;
L_0054e0e7:; BB(0x0054e0e7);
    /* 0054e0e7: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0054e0ee: jmp 0x54e0f9 */ goto L_0054e0f9;
L_0054e0f0:; BB(0x0054e0f0);
    /* 0054e0f0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054e0f3: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0054e0f6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0054e0f9:; BB(0x0054e0f9);
    /* 0054e0f9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e0fc: call 0x54c540 */ r_esp -= 4; W32(r_esp, 0x54e101u); f_0054c540();
    /* 0054e101: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054e104: jge 0x54e136 */ if ((fS==fO)) goto L_0054e136;
L_0054e106:; BB(0x0054e106);
    /* 0054e106: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054e109: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e10c: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 0054e111: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054e112: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e115: call 0x54c590 */ r_esp -= 4; W32(r_esp, 0x54e11au); f_0054c590();
    /* 0054e11a: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e11d: jne 0x54e134 */ if (!fZ) goto L_0054e134;
L_0054e11f:; BB(0x0054e11f);
    /* 0054e11f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e122: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0054e125: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0054e128: mov byte ptr [edx + 0x14], al */ W8((u32)(r_edx+0x14u), (u8)r_eax);
    /* 0054e12b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054e12e: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0054e131: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0054e134:; BB(0x0054e134);
    /* 0054e134: jmp 0x54e0f0 */ goto L_0054e0f0;
L_0054e136:; BB(0x0054e136);
    /* 0054e136: jmp 0x54e39e */ goto L_0054e39e;
L_0054e13b:; BB(0x0054e13b);
    /* 0054e13b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e13e: call 0x551960 */ r_esp -= 4; W32(r_esp, 0x54e143u); f_00551960();
    /* 0054e143: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e146: call 0x54cec0 */ r_esp -= 4; W32(r_esp, 0x54e14bu); f_0054cec0();
    /* 0054e14b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e14e: jne 0x54e1b9 */ if (!fZ) goto L_0054e1b9;
L_0054e150:; BB(0x0054e150);
    /* 0054e150: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0054e152: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054e154: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0054e156: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e159: call 0x551670 */ r_esp -= 4; W32(r_esp, 0x54e15eu); f_00551670();
    /* 0054e15e: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0054e161: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e163: je 0x54e1b9 */ if (fZ) goto L_0054e1b9;
L_0054e165:; BB(0x0054e165);
    /* 0054e165: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 0054e167: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e16a: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54e16fu); f_005519a0();
    /* 0054e16f: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0054e176: jmp 0x54e181 */ goto L_0054e181;
L_0054e178:; BB(0x0054e178);
    /* 0054e178: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054e17b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054e17e: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0054e181:; BB(0x0054e181);
    /* 0054e181: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e184: call 0x54c540 */ r_esp -= 4; W32(r_esp, 0x54e189u); f_0054c540();
    /* 0054e189: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054e18c: jge 0x54e1b4 */ if ((fS==fO)) goto L_0054e1b4;
L_0054e18e:; BB(0x0054e18e);
    /* 0054e18e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054e191: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e194: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0054e199: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054e19a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e19d: call 0x54c590 */ r_esp -= 4; W32(r_esp, 0x54e1a2u); f_0054c590();
    /* 0054e1a2: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e1a5: jne 0x54e1b2 */ if (!fZ) goto L_0054e1b2;
L_0054e1a7:; BB(0x0054e1a7);
    /* 0054e1a7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e1aa: mov dl, byte ptr [ebp - 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0054e1ad: mov byte ptr [ecx + 0x17], dl */ W8((u32)(r_ecx+0x17u), (u8)r_edx);
    /* 0054e1b0: jmp 0x54e1b4 */ goto L_0054e1b4;
L_0054e1b2:; BB(0x0054e1b2);
    /* 0054e1b2: jmp 0x54e178 */ goto L_0054e178;
L_0054e1b4:; BB(0x0054e1b4);
    /* 0054e1b4: jmp 0x54e39e */ goto L_0054e39e;
L_0054e1b9:; BB(0x0054e1b9);
    /* 0054e1b9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e1bc: call 0x551960 */ r_esp -= 4; W32(r_esp, 0x54e1c1u); f_00551960();
    /* 0054e1c1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e1c4: call 0x54cec0 */ r_esp -= 4; W32(r_esp, 0x54e1c9u); f_0054cec0();
    /* 0054e1c9: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e1cc: jne 0x54e27f */ if (!fZ) goto L_0054e27f;
L_0054e1d2:; BB(0x0054e1d2);
    /* 0054e1d2: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 0054e1d9: jmp 0x54e1e4 */ goto L_0054e1e4;
L_0054e1db:; BB(0x0054e1db);
    /* 0054e1db: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054e1de: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054e1e1: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0054e1e4:; BB(0x0054e1e4);
    /* 0054e1e4: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054e1e8: jg 0x54e27f */ if ((!fZ&&fS==fO)) goto L_0054e27f;
L_0054e1ee:; BB(0x0054e1ee);
    /* 0054e1ee: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0054e1f0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054e1f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054e1f4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e1f7: call 0x5510d0 */ r_esp -= 4; W32(r_esp, 0x54e1fcu); f_005510d0();
    /* 0054e1fc: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0054e1ff: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e201: je 0x54e27a */ if (fZ) goto L_0054e27a;
L_0054e203:; BB(0x0054e203);
    /* 0054e203: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0054e205: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e208: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54e20du); f_005519a0();
    /* 0054e20d: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0054e214: jmp 0x54e21f */ goto L_0054e21f;
L_0054e216:; BB(0x0054e216);
    /* 0054e216: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054e219: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054e21c: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_0054e21f:; BB(0x0054e21f);
    /* 0054e21f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e222: call 0x54c540 */ r_esp -= 4; W32(r_esp, 0x54e227u); f_0054c540();
    /* 0054e227: cmp dword ptr [ebp - 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054e22a: jge 0x54e275 */ if ((fS==fO)) goto L_0054e275;
L_0054e22c:; BB(0x0054e22c);
    /* 0054e22c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054e22f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e232: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0054e237: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054e238: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x54e23du); f_00641290();
    /* 0054e23d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054e240: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e243: je 0x54e25e */ if (fZ) goto L_0054e25e;
L_0054e245:; BB(0x0054e245);
    /* 0054e245: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054e248: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e24b: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0054e250: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054e251: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e254: call 0x54c590 */ r_esp -= 4; W32(r_esp, 0x54e259u); f_0054c590();
    /* 0054e259: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e25c: jne 0x54e273 */ if (!fZ) goto L_0054e273;
L_0054e25e:; BB(0x0054e25e);
    /* 0054e25e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e261: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0054e264: mov dl, byte ptr [ebp - 0xc] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff4u))) & 0xffu);
    /* 0054e267: mov byte ptr [ecx + 0x14], dl */ W8((u32)(r_ecx+0x14u), (u8)r_edx);
    /* 0054e26a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054e26d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054e270: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0054e273:; BB(0x0054e273);
    /* 0054e273: jmp 0x54e216 */ goto L_0054e216;
L_0054e275:; BB(0x0054e275);
    /* 0054e275: jmp 0x54e39e */ goto L_0054e39e;
L_0054e27a:; BB(0x0054e27a);
    /* 0054e27a: jmp 0x54e1db */ goto L_0054e1db;
L_0054e27f:; BB(0x0054e27f);
    /* 0054e27f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e282: call 0x54cec0 */ r_esp -= 4; W32(r_esp, 0x54e287u); f_0054cec0();
    /* 0054e287: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e28a: jne 0x54e335 */ if (!fZ) goto L_0054e335;
L_0054e290:; BB(0x0054e290);
    /* 0054e290: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0054e292: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054e294: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0054e296: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e299: call 0x551330 */ r_esp -= 4; W32(r_esp, 0x54e29eu); f_00551330();
    /* 0054e29e: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0054e2a1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e2a3: je 0x54e335 */ if (fZ) goto L_0054e335;
L_0054e2a9:; BB(0x0054e2a9);
    /* 0054e2a9: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 0054e2ab: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e2ae: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54e2b3u); f_005519a0();
    /* 0054e2b3: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0054e2ba: jmp 0x54e2c5 */ goto L_0054e2c5;
L_0054e2bc:; BB(0x0054e2bc);
    /* 0054e2bc: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054e2bf: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0054e2c2: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0054e2c5:; BB(0x0054e2c5);
    /* 0054e2c5: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054e2c9: jge 0x54e2e4 */ if ((fS==fO)) goto L_0054e2e4;
L_0054e2cb:; BB(0x0054e2cb);
    /* 0054e2cb: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e2ce: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054e2d1: movsx ecx, byte ptr [eax + 0x14] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x14u));
    /* 0054e2d5: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e2d8: jne 0x54e2e2 */ if (!fZ) goto L_0054e2e2;
L_0054e2da:; BB(0x0054e2da);
    /* 0054e2da: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054e2dd: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0054e2e0: jmp 0x54e2e4 */ goto L_0054e2e4;
L_0054e2e2:; BB(0x0054e2e2);
    /* 0054e2e2: jmp 0x54e2bc */ goto L_0054e2bc;
L_0054e2e4:; BB(0x0054e2e4);
    /* 0054e2e4: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0054e2eb: jmp 0x54e2f6 */ goto L_0054e2f6;
L_0054e2ed:; BB(0x0054e2ed);
    /* 0054e2ed: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054e2f0: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054e2f3: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0054e2f6:; BB(0x0054e2f6);
    /* 0054e2f6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e2f9: call 0x54c540 */ r_esp -= 4; W32(r_esp, 0x54e2feu); f_0054c540();
    /* 0054e2fe: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054e301: jge 0x54e333 */ if ((fS==fO)) goto L_0054e333;
L_0054e303:; BB(0x0054e303);
    /* 0054e303: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054e306: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e309: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0054e30e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054e30f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e312: call 0x54c590 */ r_esp -= 4; W32(r_esp, 0x54e317u); f_0054c590();
    /* 0054e317: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e31a: jne 0x54e331 */ if (!fZ) goto L_0054e331;
L_0054e31c:; BB(0x0054e31c);
    /* 0054e31c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e31f: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0054e322: mov dl, byte ptr [ebp - 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0054e325: mov byte ptr [ecx + 0x14], dl */ W8((u32)(r_ecx+0x14u), (u8)r_edx);
    /* 0054e328: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054e32b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054e32e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0054e331:; BB(0x0054e331);
    /* 0054e331: jmp 0x54e2ed */ goto L_0054e2ed;
L_0054e333:; BB(0x0054e333);
    /* 0054e333: jmp 0x54e39e */ goto L_0054e39e;
L_0054e335:; BB(0x0054e335);
    /* 0054e335: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0054e33c: jmp 0x54e347 */ goto L_0054e347;
L_0054e33e:; BB(0x0054e33e);
    /* 0054e33e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054e341: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0054e344: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0054e347:; BB(0x0054e347);
    /* 0054e347: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e34a: call 0x54c540 */ r_esp -= 4; W32(r_esp, 0x54e34fu); f_0054c540();
    /* 0054e34f: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054e352: jge 0x54e384 */ if ((fS==fO)) goto L_0054e384;
L_0054e354:; BB(0x0054e354);
    /* 0054e354: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054e357: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e35a: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 0054e35f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054e360: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e363: call 0x54c590 */ r_esp -= 4; W32(r_esp, 0x54e368u); f_0054c590();
    /* 0054e368: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e36b: jne 0x54e382 */ if (!fZ) goto L_0054e382;
L_0054e36d:; BB(0x0054e36d);
    /* 0054e36d: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e370: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0054e373: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0054e376: mov byte ptr [edx + 0x14], al */ W8((u32)(r_edx+0x14u), (u8)r_eax);
    /* 0054e379: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054e37c: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0054e37f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0054e382:; BB(0x0054e382);
    /* 0054e382: jmp 0x54e33e */ goto L_0054e33e;
L_0054e384:; BB(0x0054e384);
    /* 0054e384: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e388: je 0x54e396 */ if (fZ) goto L_0054e396;
L_0054e38a:; BB(0x0054e38a);
    /* 0054e38a: push 0x31 */ { u32 v = 0x31u; r_esp -= 4; W32(r_esp, v); }
    /* 0054e38c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e38f: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54e394u); f_005519a0();
    /* 0054e394: jmp 0x54e39e */ goto L_0054e39e;
L_0054e396:; BB(0x0054e396);
    /* 0054e396: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e399: call 0x551960 */ r_esp -= 4; W32(r_esp, 0x54e39eu); f_00551960();
L_0054e39e:; BB(0x0054e39e);
    /* 0054e39e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0054e39f: mov esp, ebp */ r_esp = r_ebp;
    /* 0054e3a1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054e3a2: ret  */ FN_RET(0x0054d7e0); r_esp += 4; return;
}

