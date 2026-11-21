#include "protos.h"

void f_0055a000(void) /* sub_55A000 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0055a000);
    /* 0055a000: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0055a001: mov ebp, esp */ r_ebp = r_esp;
    /* 0055a003: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0055a006: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0055a009: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055a00c: call 0x559dc0 */ r_esp -= 4; W32(r_esp, 0x55a011u); f_00559dc0();
    /* 0055a011: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0055a014: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055a018: jne 0x55a02e */ if (!fZ) goto L_0055a02e;
L_0055a01a:; BB(0x0055a01a);
    /* 0055a01a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055a01d: call 0x5596e0 */ r_esp -= 4; W32(r_esp, 0x55a022u); f_005596e0();
    /* 0055a022: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055a025: jl 0x55a02e */ if ((fS!=fO)) goto L_0055a02e;
L_0055a027:; BB(0x0055a027);
    /* 0055a027: mov eax, 8 */ r_eax = 0x8u;
    /* 0055a02c: jmp 0x55a031 */ goto L_0055a031;
L_0055a02e:; BB(0x0055a02e);
    /* 0055a02e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
L_0055a031:; BB(0x0055a031);
    /* 0055a031: mov esp, ebp */ r_esp = r_ebp;
    /* 0055a033: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055a034: ret  */ FN_RET(0x0055a000); r_esp += 4; return;
}

void f_0055a040(void) /* sub_55A040 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0055a040);
    /* 0055a040: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0055a041: mov ebp, esp */ r_ebp = r_esp;
    /* 0055a043: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055a044: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0055a047: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055a04a: call 0x559460 */ r_esp -= 4; W32(r_esp, 0x55a04fu); f_00559460();
    /* 0055a04f: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0055a052: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055a054: je 0x55a05d */ if (fZ) goto L_0055a05d;
L_0055a056:; BB(0x0055a056);
    /* 0055a056: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0055a058: jmp 0x55a18f */ goto L_0055a18f;
L_0055a05d:; BB(0x0055a05d);
    /* 0055a05d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055a060: call 0x5597b0 */ r_esp -= 4; W32(r_esp, 0x55a065u); f_005597b0();
    /* 0055a065: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0055a068: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055a06a: je 0x55a076 */ if (fZ) goto L_0055a076;
L_0055a06c:; BB(0x0055a06c);
    /* 0055a06c: mov eax, 1 */ r_eax = 0x1u;
    /* 0055a071: jmp 0x55a18f */ goto L_0055a18f;
L_0055a076:; BB(0x0055a076);
    /* 0055a076: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055a079: call 0x5597d0 */ r_esp -= 4; W32(r_esp, 0x55a07eu); f_005597d0();
    /* 0055a07e: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0055a081: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055a083: je 0x55a08f */ if (fZ) goto L_0055a08f;
L_0055a085:; BB(0x0055a085);
    /* 0055a085: mov eax, 2 */ r_eax = 0x2u;
    /* 0055a08a: jmp 0x55a18f */ goto L_0055a18f;
L_0055a08f:; BB(0x0055a08f);
    /* 0055a08f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055a092: call 0x559850 */ r_esp -= 4; W32(r_esp, 0x55a097u); f_00559850();
    /* 0055a097: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0055a09a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055a09c: je 0x55a0a8 */ if (fZ) goto L_0055a0a8;
L_0055a09e:; BB(0x0055a09e);
    /* 0055a09e: mov eax, 3 */ r_eax = 0x3u;
    /* 0055a0a3: jmp 0x55a18f */ goto L_0055a18f;
L_0055a0a8:; BB(0x0055a0a8);
    /* 0055a0a8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055a0ab: call 0x5594b0 */ r_esp -= 4; W32(r_esp, 0x55a0b0u); f_005594b0();
    /* 0055a0b0: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0055a0b3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055a0b5: jne 0x55a0c6 */ if (!fZ) goto L_0055a0c6;
L_0055a0b7:; BB(0x0055a0b7);
    /* 0055a0b7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055a0ba: call 0x5598e0 */ r_esp -= 4; W32(r_esp, 0x55a0bfu); f_005598e0();
    /* 0055a0bf: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0055a0c2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055a0c4: je 0x55a0d0 */ if (fZ) goto L_0055a0d0;
L_0055a0c6:; BB(0x0055a0c6);
    /* 0055a0c6: mov eax, 4 */ r_eax = 0x4u;
    /* 0055a0cb: jmp 0x55a18f */ goto L_0055a18f;
L_0055a0d0:; BB(0x0055a0d0);
    /* 0055a0d0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055a0d3: call 0x5594f0 */ r_esp -= 4; W32(r_esp, 0x55a0d8u); f_005594f0();
    /* 0055a0d8: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0055a0db: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055a0dd: jne 0x55a0ee */ if (!fZ) goto L_0055a0ee;
L_0055a0df:; BB(0x0055a0df);
    /* 0055a0df: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055a0e2: call 0x559920 */ r_esp -= 4; W32(r_esp, 0x55a0e7u); f_00559920();
    /* 0055a0e7: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0055a0ea: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055a0ec: je 0x55a0f8 */ if (fZ) goto L_0055a0f8;
L_0055a0ee:; BB(0x0055a0ee);
    /* 0055a0ee: mov eax, 5 */ r_eax = 0x5u;
    /* 0055a0f3: jmp 0x55a18f */ goto L_0055a18f;
L_0055a0f8:; BB(0x0055a0f8);
    /* 0055a0f8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055a0fb: call 0x559510 */ r_esp -= 4; W32(r_esp, 0x55a100u); f_00559510();
    /* 0055a100: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0055a103: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055a105: jne 0x55a116 */ if (!fZ) goto L_0055a116;
L_0055a107:; BB(0x0055a107);
    /* 0055a107: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055a10a: call 0x5599f0 */ r_esp -= 4; W32(r_esp, 0x55a10fu); f_005599f0();
    /* 0055a10f: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0055a112: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055a114: je 0x55a11d */ if (fZ) goto L_0055a11d;
L_0055a116:; BB(0x0055a116);
    /* 0055a116: mov eax, 6 */ r_eax = 0x6u;
    /* 0055a11b: jmp 0x55a18f */ goto L_0055a18f;
L_0055a11d:; BB(0x0055a11d);
    /* 0055a11d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055a120: call 0x559550 */ r_esp -= 4; W32(r_esp, 0x55a125u); f_00559550();
    /* 0055a125: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0055a128: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055a12a: jne 0x55a13b */ if (!fZ) goto L_0055a13b;
L_0055a12c:; BB(0x0055a12c);
    /* 0055a12c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055a12f: call 0x559a30 */ r_esp -= 4; W32(r_esp, 0x55a134u); f_00559a30();
    /* 0055a134: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0055a137: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055a139: je 0x55a142 */ if (fZ) goto L_0055a142;
L_0055a13b:; BB(0x0055a13b);
    /* 0055a13b: mov eax, 7 */ r_eax = 0x7u;
    /* 0055a140: jmp 0x55a18f */ goto L_0055a18f;
L_0055a142:; BB(0x0055a142);
    /* 0055a142: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055a145: call 0x5595c0 */ r_esp -= 4; W32(r_esp, 0x55a14au); f_005595c0();
    /* 0055a14a: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0055a14d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055a14f: jne 0x55a160 */ if (!fZ) goto L_0055a160;
L_0055a151:; BB(0x0055a151);
    /* 0055a151: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055a154: call 0x559af0 */ r_esp -= 4; W32(r_esp, 0x55a159u); f_00559af0();
    /* 0055a159: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0055a15c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055a15e: je 0x55a167 */ if (fZ) goto L_0055a167;
L_0055a160:; BB(0x0055a160);
    /* 0055a160: mov eax, 8 */ r_eax = 0x8u;
    /* 0055a165: jmp 0x55a18f */ goto L_0055a18f;
L_0055a167:; BB(0x0055a167);
    /* 0055a167: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055a16a: call 0x559660 */ r_esp -= 4; W32(r_esp, 0x55a16fu); f_00559660();
    /* 0055a16f: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0055a172: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055a174: jne 0x55a185 */ if (!fZ) goto L_0055a185;
L_0055a176:; BB(0x0055a176);
    /* 0055a176: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055a179: call 0x559c00 */ r_esp -= 4; W32(r_esp, 0x55a17eu); f_00559c00();
    /* 0055a17e: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0055a181: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055a183: je 0x55a18c */ if (fZ) goto L_0055a18c;
L_0055a185:; BB(0x0055a185);
    /* 0055a185: mov eax, 9 */ r_eax = 0x9u;
    /* 0055a18a: jmp 0x55a18f */ goto L_0055a18f;
L_0055a18c:; BB(0x0055a18c);
    /* 0055a18c: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_0055a18f:; BB(0x0055a18f);
    /* 0055a18f: mov esp, ebp */ r_esp = r_ebp;
    /* 0055a191: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055a192: ret  */ FN_RET(0x0055a040); r_esp += 4; return;
}

void f_0055a1a0(void) /* sub_55A1A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0055a1a0);
    /* 0055a1a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0055a1a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0055a1a3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0055a1a6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0055a1a9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055a1ac: call 0x559460 */ r_esp -= 4; W32(r_esp, 0x55a1b1u); f_00559460();
    /* 0055a1b1: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0055a1b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055a1b6: je 0x55a1bf */ if (fZ) goto L_0055a1bf;
L_0055a1b8:; BB(0x0055a1b8);
    /* 0055a1b8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0055a1ba: jmp 0x55a350 */ goto L_0055a350;
L_0055a1bf:; BB(0x0055a1bf);
    /* 0055a1bf: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055a1c2: call 0x559850 */ r_esp -= 4; W32(r_esp, 0x55a1c7u); f_00559850();
    /* 0055a1c7: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0055a1ca: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055a1cc: je 0x55a1d8 */ if (fZ) goto L_0055a1d8;
L_0055a1ce:; BB(0x0055a1ce);
    /* 0055a1ce: mov eax, 1 */ r_eax = 0x1u;
    /* 0055a1d3: jmp 0x55a350 */ goto L_0055a350;
L_0055a1d8:; BB(0x0055a1d8);
    /* 0055a1d8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055a1db: call 0x5597d0 */ r_esp -= 4; W32(r_esp, 0x55a1e0u); f_005597d0();
    /* 0055a1e0: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0055a1e3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055a1e5: je 0x55a1f1 */ if (fZ) goto L_0055a1f1;
L_0055a1e7:; BB(0x0055a1e7);
    /* 0055a1e7: mov eax, 2 */ r_eax = 0x2u;
    /* 0055a1ec: jmp 0x55a350 */ goto L_0055a350;
L_0055a1f1:; BB(0x0055a1f1);
    /* 0055a1f1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055a1f4: call 0x5594b0 */ r_esp -= 4; W32(r_esp, 0x55a1f9u); f_005594b0();
    /* 0055a1f9: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0055a1fc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055a1fe: jne 0x55a20f */ if (!fZ) goto L_0055a20f;
L_0055a200:; BB(0x0055a200);
    /* 0055a200: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055a203: call 0x5598e0 */ r_esp -= 4; W32(r_esp, 0x55a208u); f_005598e0();
    /* 0055a208: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0055a20b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055a20d: je 0x55a219 */ if (fZ) goto L_0055a219;
L_0055a20f:; BB(0x0055a20f);
    /* 0055a20f: mov eax, 3 */ r_eax = 0x3u;
    /* 0055a214: jmp 0x55a350 */ goto L_0055a350;
L_0055a219:; BB(0x0055a219);
    /* 0055a219: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055a21c: call 0x5594f0 */ r_esp -= 4; W32(r_esp, 0x55a221u); f_005594f0();
    /* 0055a221: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0055a224: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055a226: jne 0x55a237 */ if (!fZ) goto L_0055a237;
L_0055a228:; BB(0x0055a228);
    /* 0055a228: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055a22b: call 0x559920 */ r_esp -= 4; W32(r_esp, 0x55a230u); f_00559920();
    /* 0055a230: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0055a233: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055a235: je 0x55a241 */ if (fZ) goto L_0055a241;
L_0055a237:; BB(0x0055a237);
    /* 0055a237: mov eax, 4 */ r_eax = 0x4u;
    /* 0055a23c: jmp 0x55a350 */ goto L_0055a350;
L_0055a241:; BB(0x0055a241);
    /* 0055a241: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055a244: call 0x559510 */ r_esp -= 4; W32(r_esp, 0x55a249u); f_00559510();
    /* 0055a249: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0055a24c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055a24e: jne 0x55a25f */ if (!fZ) goto L_0055a25f;
L_0055a250:; BB(0x0055a250);
    /* 0055a250: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055a253: call 0x5599f0 */ r_esp -= 4; W32(r_esp, 0x55a258u); f_005599f0();
    /* 0055a258: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0055a25b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055a25d: je 0x55a269 */ if (fZ) goto L_0055a269;
L_0055a25f:; BB(0x0055a25f);
    /* 0055a25f: mov eax, 5 */ r_eax = 0x5u;
    /* 0055a264: jmp 0x55a350 */ goto L_0055a350;
L_0055a269:; BB(0x0055a269);
    /* 0055a269: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055a26c: call 0x559550 */ r_esp -= 4; W32(r_esp, 0x55a271u); f_00559550();
    /* 0055a271: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0055a274: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055a276: jne 0x55a287 */ if (!fZ) goto L_0055a287;
L_0055a278:; BB(0x0055a278);
    /* 0055a278: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055a27b: call 0x559a30 */ r_esp -= 4; W32(r_esp, 0x55a280u); f_00559a30();
    /* 0055a280: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0055a283: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055a285: je 0x55a291 */ if (fZ) goto L_0055a291;
L_0055a287:; BB(0x0055a287);
    /* 0055a287: mov eax, 6 */ r_eax = 0x6u;
    /* 0055a28c: jmp 0x55a350 */ goto L_0055a350;
L_0055a291:; BB(0x0055a291);
    /* 0055a291: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055a294: call 0x5595c0 */ r_esp -= 4; W32(r_esp, 0x55a299u); f_005595c0();
    /* 0055a299: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0055a29c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055a29e: jne 0x55a2af */ if (!fZ) goto L_0055a2af;
L_0055a2a0:; BB(0x0055a2a0);
    /* 0055a2a0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055a2a3: call 0x559af0 */ r_esp -= 4; W32(r_esp, 0x55a2a8u); f_00559af0();
    /* 0055a2a8: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0055a2ab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055a2ad: je 0x55a2b9 */ if (fZ) goto L_0055a2b9;
L_0055a2af:; BB(0x0055a2af);
    /* 0055a2af: mov eax, 7 */ r_eax = 0x7u;
    /* 0055a2b4: jmp 0x55a350 */ goto L_0055a350;
L_0055a2b9:; BB(0x0055a2b9);
    /* 0055a2b9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055a2bc: call 0x559660 */ r_esp -= 4; W32(r_esp, 0x55a2c1u); f_00559660();
    /* 0055a2c1: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0055a2c4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055a2c6: jne 0x55a2d7 */ if (!fZ) goto L_0055a2d7;
L_0055a2c8:; BB(0x0055a2c8);
    /* 0055a2c8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055a2cb: call 0x559c00 */ r_esp -= 4; W32(r_esp, 0x55a2d0u); f_00559c00();
    /* 0055a2d0: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0055a2d3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055a2d5: je 0x55a2de */ if (fZ) goto L_0055a2de;
L_0055a2d7:; BB(0x0055a2d7);
    /* 0055a2d7: mov eax, 8 */ r_eax = 0x8u;
    /* 0055a2dc: jmp 0x55a350 */ goto L_0055a350;
L_0055a2de:; BB(0x0055a2de);
    /* 0055a2de: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055a2e1: call 0x559680 */ r_esp -= 4; W32(r_esp, 0x55a2e6u); f_00559680();
    /* 0055a2e6: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0055a2e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055a2eb: je 0x55a2f4 */ if (fZ) goto L_0055a2f4;
L_0055a2ed:; BB(0x0055a2ed);
    /* 0055a2ed: mov eax, 9 */ r_eax = 0x9u;
    /* 0055a2f2: jmp 0x55a350 */ goto L_0055a350;
L_0055a2f4:; BB(0x0055a2f4);
    /* 0055a2f4: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0055a2fa: mov edx, dword ptr [ecx + 0x4f14] */ r_edx = R32((u32)(r_ecx+0x4f14u));
    /* 0055a300: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0055a303: cmp dword ptr [ebp - 4], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055a307: jne 0x55a34d */ if (!fZ) goto L_0055a34d;
L_0055a309:; BB(0x0055a309);
    /* 0055a309: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055a30c: call 0x5596e0 */ r_esp -= 4; W32(r_esp, 0x55a311u); f_005596e0();
    /* 0055a311: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055a314: jl 0x55a31d */ if ((fS!=fO)) goto L_0055a31d;
L_0055a316:; BB(0x0055a316);
    /* 0055a316: mov eax, 0xa */ r_eax = 0xau;
    /* 0055a31b: jmp 0x55a350 */ goto L_0055a350;
L_0055a31d:; BB(0x0055a31d);
    /* 0055a31d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055a320: call 0x559d00 */ r_esp -= 4; W32(r_esp, 0x55a325u); f_00559d00();
    /* 0055a325: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055a328: jne 0x55a34d */ if (!fZ) goto L_0055a34d;
L_0055a32a:; BB(0x0055a32a);
    /* 0055a32a: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0055a32c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055a32f: call 0x559d60 */ r_esp -= 4; W32(r_esp, 0x55a334u); f_00559d60();
    /* 0055a334: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055a336: jne 0x55a346 */ if (!fZ) goto L_0055a346;
L_0055a338:; BB(0x0055a338);
    /* 0055a338: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0055a33a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055a33d: call 0x559d60 */ r_esp -= 4; W32(r_esp, 0x55a342u); f_00559d60();
    /* 0055a342: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055a344: je 0x55a34d */ if (fZ) goto L_0055a34d;
L_0055a346:; BB(0x0055a346);
    /* 0055a346: mov eax, 0xa */ r_eax = 0xau;
    /* 0055a34b: jmp 0x55a350 */ goto L_0055a350;
L_0055a34d:; BB(0x0055a34d);
    /* 0055a34d: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_0055a350:; BB(0x0055a350);
    /* 0055a350: mov esp, ebp */ r_esp = r_ebp;
    /* 0055a352: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055a353: ret  */ FN_RET(0x0055a1a0); r_esp += 4; return;
}

void f_0055a360(void) /* sub_55A360 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0055a360);
    /* 0055a360: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0055a361: mov ebp, esp */ r_ebp = r_esp;
    /* 0055a363: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055a364: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0055a367: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055a36a: call 0x5597b0 */ r_esp -= 4; W32(r_esp, 0x55a36fu); f_005597b0();
    /* 0055a36f: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0055a372: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055a374: je 0x55a38a */ if (fZ) goto L_0055a38a;
L_0055a376:; BB(0x0055a376);
    /* 0055a376: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055a379: call 0x559d00 */ r_esp -= 4; W32(r_esp, 0x55a37eu); f_00559d00();
    /* 0055a37e: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055a381: jne 0x55a38a */ if (!fZ) goto L_0055a38a;
L_0055a383:; BB(0x0055a383);
    /* 0055a383: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0055a385: jmp 0x55a4d5 */ goto L_0055a4d5;
L_0055a38a:; BB(0x0055a38a);
    /* 0055a38a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055a38d: call 0x559460 */ r_esp -= 4; W32(r_esp, 0x55a392u); f_00559460();
    /* 0055a392: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0055a395: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055a397: je 0x55a3a3 */ if (fZ) goto L_0055a3a3;
L_0055a399:; BB(0x0055a399);
    /* 0055a399: mov eax, 1 */ r_eax = 0x1u;
    /* 0055a39e: jmp 0x55a4d5 */ goto L_0055a4d5;
L_0055a3a3:; BB(0x0055a3a3);
    /* 0055a3a3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055a3a6: call 0x5597b0 */ r_esp -= 4; W32(r_esp, 0x55a3abu); f_005597b0();
    /* 0055a3ab: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0055a3ae: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055a3b0: je 0x55a3bc */ if (fZ) goto L_0055a3bc;
L_0055a3b2:; BB(0x0055a3b2);
    /* 0055a3b2: mov eax, 2 */ r_eax = 0x2u;
    /* 0055a3b7: jmp 0x55a4d5 */ goto L_0055a4d5;
L_0055a3bc:; BB(0x0055a3bc);
    /* 0055a3bc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055a3bf: call 0x5597d0 */ r_esp -= 4; W32(r_esp, 0x55a3c4u); f_005597d0();
    /* 0055a3c4: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0055a3c7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055a3c9: je 0x55a3d5 */ if (fZ) goto L_0055a3d5;
L_0055a3cb:; BB(0x0055a3cb);
    /* 0055a3cb: mov eax, 3 */ r_eax = 0x3u;
    /* 0055a3d0: jmp 0x55a4d5 */ goto L_0055a4d5;
L_0055a3d5:; BB(0x0055a3d5);
    /* 0055a3d5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055a3d8: call 0x559850 */ r_esp -= 4; W32(r_esp, 0x55a3ddu); f_00559850();
    /* 0055a3dd: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0055a3e0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055a3e2: je 0x55a3ee */ if (fZ) goto L_0055a3ee;
L_0055a3e4:; BB(0x0055a3e4);
    /* 0055a3e4: mov eax, 4 */ r_eax = 0x4u;
    /* 0055a3e9: jmp 0x55a4d5 */ goto L_0055a4d5;
L_0055a3ee:; BB(0x0055a3ee);
    /* 0055a3ee: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055a3f1: call 0x5594b0 */ r_esp -= 4; W32(r_esp, 0x55a3f6u); f_005594b0();
    /* 0055a3f6: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0055a3f9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055a3fb: jne 0x55a40c */ if (!fZ) goto L_0055a40c;
L_0055a3fd:; BB(0x0055a3fd);
    /* 0055a3fd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055a400: call 0x5598e0 */ r_esp -= 4; W32(r_esp, 0x55a405u); f_005598e0();
    /* 0055a405: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0055a408: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055a40a: je 0x55a416 */ if (fZ) goto L_0055a416;
L_0055a40c:; BB(0x0055a40c);
    /* 0055a40c: mov eax, 5 */ r_eax = 0x5u;
    /* 0055a411: jmp 0x55a4d5 */ goto L_0055a4d5;
L_0055a416:; BB(0x0055a416);
    /* 0055a416: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055a419: call 0x5594f0 */ r_esp -= 4; W32(r_esp, 0x55a41eu); f_005594f0();
    /* 0055a41e: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0055a421: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055a423: jne 0x55a434 */ if (!fZ) goto L_0055a434;
L_0055a425:; BB(0x0055a425);
    /* 0055a425: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055a428: call 0x559920 */ r_esp -= 4; W32(r_esp, 0x55a42du); f_00559920();
    /* 0055a42d: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0055a430: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055a432: je 0x55a43e */ if (fZ) goto L_0055a43e;
L_0055a434:; BB(0x0055a434);
    /* 0055a434: mov eax, 6 */ r_eax = 0x6u;
    /* 0055a439: jmp 0x55a4d5 */ goto L_0055a4d5;
L_0055a43e:; BB(0x0055a43e);
    /* 0055a43e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055a441: call 0x559510 */ r_esp -= 4; W32(r_esp, 0x55a446u); f_00559510();
    /* 0055a446: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0055a449: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055a44b: jne 0x55a45c */ if (!fZ) goto L_0055a45c;
L_0055a44d:; BB(0x0055a44d);
    /* 0055a44d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055a450: call 0x5599f0 */ r_esp -= 4; W32(r_esp, 0x55a455u); f_005599f0();
    /* 0055a455: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0055a458: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055a45a: je 0x55a463 */ if (fZ) goto L_0055a463;
L_0055a45c:; BB(0x0055a45c);
    /* 0055a45c: mov eax, 7 */ r_eax = 0x7u;
    /* 0055a461: jmp 0x55a4d5 */ goto L_0055a4d5;
L_0055a463:; BB(0x0055a463);
    /* 0055a463: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055a466: call 0x559550 */ r_esp -= 4; W32(r_esp, 0x55a46bu); f_00559550();
    /* 0055a46b: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0055a46e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055a470: jne 0x55a481 */ if (!fZ) goto L_0055a481;
L_0055a472:; BB(0x0055a472);
    /* 0055a472: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055a475: call 0x559a30 */ r_esp -= 4; W32(r_esp, 0x55a47au); f_00559a30();
    /* 0055a47a: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0055a47d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055a47f: je 0x55a488 */ if (fZ) goto L_0055a488;
L_0055a481:; BB(0x0055a481);
    /* 0055a481: mov eax, 8 */ r_eax = 0x8u;
    /* 0055a486: jmp 0x55a4d5 */ goto L_0055a4d5;
L_0055a488:; BB(0x0055a488);
    /* 0055a488: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055a48b: call 0x5595c0 */ r_esp -= 4; W32(r_esp, 0x55a490u); f_005595c0();
    /* 0055a490: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0055a493: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055a495: jne 0x55a4a6 */ if (!fZ) goto L_0055a4a6;
L_0055a497:; BB(0x0055a497);
    /* 0055a497: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055a49a: call 0x559af0 */ r_esp -= 4; W32(r_esp, 0x55a49fu); f_00559af0();
    /* 0055a49f: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0055a4a2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055a4a4: je 0x55a4ad */ if (fZ) goto L_0055a4ad;
L_0055a4a6:; BB(0x0055a4a6);
    /* 0055a4a6: mov eax, 9 */ r_eax = 0x9u;
    /* 0055a4ab: jmp 0x55a4d5 */ goto L_0055a4d5;
L_0055a4ad:; BB(0x0055a4ad);
    /* 0055a4ad: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055a4b0: call 0x559660 */ r_esp -= 4; W32(r_esp, 0x55a4b5u); f_00559660();
    /* 0055a4b5: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0055a4b8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055a4ba: jne 0x55a4cb */ if (!fZ) goto L_0055a4cb;
L_0055a4bc:; BB(0x0055a4bc);
    /* 0055a4bc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055a4bf: call 0x559c00 */ r_esp -= 4; W32(r_esp, 0x55a4c4u); f_00559c00();
    /* 0055a4c4: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0055a4c7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055a4c9: je 0x55a4d2 */ if (fZ) goto L_0055a4d2;
L_0055a4cb:; BB(0x0055a4cb);
    /* 0055a4cb: mov eax, 0xa */ r_eax = 0xau;
    /* 0055a4d0: jmp 0x55a4d5 */ goto L_0055a4d5;
L_0055a4d2:; BB(0x0055a4d2);
    /* 0055a4d2: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_0055a4d5:; BB(0x0055a4d5);
    /* 0055a4d5: mov esp, ebp */ r_esp = r_ebp;
    /* 0055a4d7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055a4d8: ret  */ FN_RET(0x0055a360); r_esp += 4; return;
}

void f_0055a4e0(void) /* sub_55A4E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0055a4e0);
    /* 0055a4e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0055a4e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0055a4e3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0055a4e6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0055a4e7: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0055a4ea: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0055a4f1: jmp 0x55a4fc */ goto L_0055a4fc;
L_0055a4f3:; BB(0x0055a4f3);
    /* 0055a4f3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055a4f6: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055a4f9: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0055a4fc:; BB(0x0055a4fc);
    /* 0055a4fc: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055a500: jge 0x55a519 */ if ((fS==fO)) goto L_0055a519;
L_0055a502:; BB(0x0055a502);
    /* 0055a502: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055a505: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055a508: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055a50b: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 0055a50e: mov ax, word ptr [esi + eax*2] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_esi+r_eax*2))) & 0xffffu);
    /* 0055a512: mov word ptr [edx + ecx*2 + 4], ax */ W16((u32)(r_edx+r_ecx*2+0x4u), (u16)r_eax);
    /* 0055a517: jmp 0x55a4f3 */ goto L_0055a4f3;
L_0055a519:; BB(0x0055a519);
    /* 0055a519: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055a51c: mov byte ptr [ecx + 0x19], 0 */ W8((u32)(r_ecx+0x19u), 0x0u);
    /* 0055a520: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055a523: call 0x55ec70 */ r_esp -= 4; W32(r_esp, 0x55a528u); f_0055ec70();
    /* 0055a528: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 0055a52e: mov eax, dword ptr [edx + 0x4f14] */ r_eax = R32((u32)(r_edx+0x4f14u));
    /* 0055a534: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0055a537: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055a53a: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055a53d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055a53e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055a541: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055a542: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055a545: call 0x5592a0 */ r_esp -= 4; W32(r_esp, 0x55a54au); f_005592a0();
    /* 0055a54a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055a54b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055a54e: call 0x55a560 */ r_esp -= 4; W32(r_esp, 0x55a553u); f_0055a560();
    /* 0055a553: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055a556: mov al, byte ptr [eax + 0x19] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x19u))) & 0xffu);
    /* 0055a559: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0055a55a: mov esp, ebp */ r_esp = r_ebp;
    /* 0055a55c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055a55d: ret 8 */ FN_RET(0x0055a4e0); r_esp += 12; return;
}

void f_0055a560(void) /* sub_55A560 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0055a560);
    /* 0055a560: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0055a561: mov ebp, esp */ r_ebp = r_esp;
    /* 0055a563: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0055a566: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0055a569: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055a56c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0055a56f: mov dword ptr [eax + 0x10], ecx */ W32((u32)(r_eax+0x10u), r_ecx);
    /* 0055a572: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055a575: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0055a578: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 0055a57d: mov ecx, dword ptr [eax + 0x4f14] */ r_ecx = R32((u32)(r_eax+0x4f14u));
    /* 0055a583: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0055a586: cmp dword ptr [ebp - 0xc], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0055a58a: ja 0x55a5e4 */ if ((!fC&&!fZ)) goto L_0055a5e4;
L_0055a58c:; BB(0x0055a58c);
    /* 0055a58c: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055a58f: jmp dword ptr [edx*4 + 0x55a5ec] */ { u32 t = R32((u32)(r_edx*4+0x55a5ecu)); switch (t) { case 0x55a596u: goto L_0055a596; case 0x55a5a0u: goto L_0055a5a0; case 0x55a5aau: goto L_0055a5aa; case 0x55a5b4u: goto L_0055a5b4; case 0x55a5beu: goto L_0055a5be; case 0x55a5c8u: goto L_0055a5c8; case 0x55a5d2u: goto L_0055a5d2; case 0x55a5dcu: goto L_0055a5dc; default: UNSUP(0x0055a58f, "jump table entry is not a known target"); } }
L_0055a596:; BB(0x0055a596);
    /* 0055a596: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055a599: call 0x55d6f0 */ r_esp -= 4; W32(r_esp, 0x55a59eu); f_0055d6f0();
    /* 0055a59e: jmp 0x55a5e4 */ goto L_0055a5e4;
L_0055a5a0:; BB(0x0055a5a0);
    /* 0055a5a0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055a5a3: call 0x55db00 */ r_esp -= 4; W32(r_esp, 0x55a5a8u); f_0055db00();
    /* 0055a5a8: jmp 0x55a5e4 */ goto L_0055a5e4;
L_0055a5aa:; BB(0x0055a5aa);
    /* 0055a5aa: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055a5ad: call 0x55dee0 */ r_esp -= 4; W32(r_esp, 0x55a5b2u); f_0055dee0();
    /* 0055a5b2: jmp 0x55a5e4 */ goto L_0055a5e4;
L_0055a5b4:; BB(0x0055a5b4);
    /* 0055a5b4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055a5b7: call 0x55d2b0 */ r_esp -= 4; W32(r_esp, 0x55a5bcu); f_0055d2b0();
    /* 0055a5bc: jmp 0x55a5e4 */ goto L_0055a5e4;
L_0055a5be:; BB(0x0055a5be);
    /* 0055a5be: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055a5c1: call 0x55c5d0 */ r_esp -= 4; W32(r_esp, 0x55a5c6u); f_0055c5d0();
    /* 0055a5c6: jmp 0x55a5e4 */ goto L_0055a5e4;
L_0055a5c8:; BB(0x0055a5c8);
    /* 0055a5c8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055a5cb: call 0x55bbb0 */ r_esp -= 4; W32(r_esp, 0x55a5d0u); f_0055bbb0();
    /* 0055a5d0: jmp 0x55a5e4 */ goto L_0055a5e4;
L_0055a5d2:; BB(0x0055a5d2);
    /* 0055a5d2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055a5d5: call 0x55b410 */ r_esp -= 4; W32(r_esp, 0x55a5dau); f_0055b410();
    /* 0055a5da: jmp 0x55a5e4 */ goto L_0055a5e4;
L_0055a5dc:; BB(0x0055a5dc);
    /* 0055a5dc: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055a5df: call 0x55a620 */ r_esp -= 4; W32(r_esp, 0x55a5e4u); f_0055a620();
L_0055a5e4:; BB(0x0055a5e4);
    /* 0055a5e4: mov esp, ebp */ r_esp = r_ebp;
    /* 0055a5e6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055a5e7: ret 4 */ FN_RET(0x0055a560); r_esp += 8; return;
}

void f_0055a620(void) /* sub_55A620 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0055a620);
    /* 0055a620: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0055a621: mov ebp, esp */ r_ebp = r_esp;
    /* 0055a623: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0055a626: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0055a627: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0055a62a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0055a631: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055a634: call 0x55ec70 */ r_esp -= 4; W32(r_esp, 0x55a639u); f_0055ec70();
    /* 0055a639: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055a63c: call 0x559d00 */ r_esp -= 4; W32(r_esp, 0x55a641u); f_00559d00();
    /* 0055a641: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055a643: jne 0x55a8df */ if (!fZ) goto L_0055a8df;
L_0055a649:; BB(0x0055a649);
    /* 0055a649: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055a64c: cmp dword ptr [eax + 0x10], 1 */ {  u32 a = R32((u32)(r_eax+0x10u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055a650: jne 0x55a669 */ if (!fZ) goto L_0055a669;
L_0055a652:; BB(0x0055a652);
    /* 0055a652: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055a654: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055a657: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55a65cu); f_0055ecb0();
    /* 0055a65c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055a65f: call 0x55ec30 */ r_esp -= 4; W32(r_esp, 0x55a664u); f_0055ec30();
    /* 0055a664: jmp 0x55b3ba */ goto L_0055b3ba;
L_0055a669:; BB(0x0055a669);
    /* 0055a669: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055a66b: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0055a66d: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0055a66f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055a672: call 0x55e640 */ r_esp -= 4; W32(r_esp, 0x55a677u); f_0055e640();
    /* 0055a677: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0055a67a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055a67c: je 0x55a68d */ if (fZ) goto L_0055a68d;
L_0055a67e:; BB(0x0055a67e);
    /* 0055a67e: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0055a680: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055a683: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55a688u); f_0055ecb0();
    /* 0055a688: jmp 0x55b3ba */ goto L_0055b3ba;
L_0055a68d:; BB(0x0055a68d);
    /* 0055a68d: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055a690: cmp dword ptr [edx + 0x10], -1 */ {  u32 a = R32((u32)(r_edx+0x10u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055a694: jle 0x55a74f */ if ((fZ||fS!=fO)) goto L_0055a74f;
L_0055a69a:; BB(0x0055a69a);
    /* 0055a69a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055a69d: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 0055a6a0: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0055a6a3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055a6a6: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0055a6a9: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0055a6ac: cmp dword ptr [ebp - 0x14], 9 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0055a6b0: ja 0x55a74f */ if ((!fC&&!fZ)) goto L_0055a74f;
L_0055a6b6:; BB(0x0055a6b6);
    /* 0055a6b6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0055a6b9: movzx ecx, byte ptr [eax + 0x55b3d0] */ r_ecx = (u32)R8((u32)(r_eax+0x55b3d0u));
    /* 0055a6c0: jmp dword ptr [ecx*4 + 0x55b3c0] */ { u32 t = R32((u32)(r_ecx*4+0x55b3c0u)); switch (t) { case 0x55a6c7u: goto L_0055a6c7; case 0x55a6deu: goto L_0055a6de; case 0x55a6e8u: goto L_0055a6e8; case 0x55a74fu: goto L_0055a74f; default: UNSUP(0x0055a6c0, "jump table entry is not a known target"); } }
L_0055a6c7:; BB(0x0055a6c7);
    /* 0055a6c7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055a6c9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055a6cc: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55a6d1u); f_0055ecb0();
    /* 0055a6d1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055a6d4: call 0x55ec30 */ r_esp -= 4; W32(r_esp, 0x55a6d9u); f_0055ec30();
    /* 0055a6d9: jmp 0x55b3ba */ goto L_0055b3ba;
L_0055a6de:; BB(0x0055a6de);
    /* 0055a6de: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 0055a6e0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055a6e3: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55a6e8u); f_0055ecb0();
L_0055a6e8:; BB(0x0055a6e8);
    /* 0055a6e8: push 0x27 */ { u32 v = 0x27u; r_esp -= 4; W32(r_esp, v); }
    /* 0055a6ea: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055a6ed: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55a6f2u); f_0055ecb0();
    /* 0055a6f2: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0055a6f9: jmp 0x55a704 */ goto L_0055a704;
L_0055a6fb:; BB(0x0055a6fb);
    /* 0055a6fb: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055a6fe: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055a701: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0055a704:; BB(0x0055a704);
    /* 0055a704: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055a707: call 0x559380 */ r_esp -= 4; W32(r_esp, 0x55a70cu); f_00559380();
    /* 0055a70c: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055a70f: jge 0x55a74a */ if ((fS==fO)) goto L_0055a74a;
L_0055a711:; BB(0x0055a711);
    /* 0055a711: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055a714: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055a717: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 0055a71c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055a71d: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55a722u); f_00641280();
    /* 0055a722: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055a725: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055a726: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055a729: call 0x559d60 */ r_esp -= 4; W32(r_esp, 0x55a72eu); f_00559d60();
    /* 0055a72e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055a731: jle 0x55a748 */ if ((fZ||fS!=fO)) goto L_0055a748;
L_0055a733:; BB(0x0055a733);
    /* 0055a733: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055a736: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055a739: mov cl, byte ptr [ebp - 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0055a73c: mov byte ptr [eax + 0x14], cl */ W8((u32)(r_eax+0x14u), (u8)r_ecx);
    /* 0055a73f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055a742: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055a745: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0055a748:; BB(0x0055a748);
    /* 0055a748: jmp 0x55a6fb */ goto L_0055a6fb;
L_0055a74a:; BB(0x0055a74a);
    /* 0055a74a: jmp 0x55b3ba */ goto L_0055b3ba;
L_0055a74f:; BB(0x0055a74f);
    /* 0055a74f: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055a751: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055a753: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0055a755: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055a758: call 0x55e640 */ r_esp -= 4; W32(r_esp, 0x55a75du); f_0055e640();
    /* 0055a75d: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0055a760: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055a762: je 0x55a773 */ if (fZ) goto L_0055a773;
L_0055a764:; BB(0x0055a764);
    /* 0055a764: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0055a766: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055a769: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55a76eu); f_0055ecb0();
    /* 0055a76e: jmp 0x55b3ba */ goto L_0055b3ba;
L_0055a773:; BB(0x0055a773);
    /* 0055a773: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055a775: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0055a777: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0055a779: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055a77c: call 0x55e640 */ r_esp -= 4; W32(r_esp, 0x55a781u); f_0055e640();
    /* 0055a781: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0055a784: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055a786: je 0x55a797 */ if (fZ) goto L_0055a797;
L_0055a788:; BB(0x0055a788);
    /* 0055a788: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0055a78a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055a78d: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55a792u); f_0055ecb0();
    /* 0055a792: jmp 0x55b3ba */ goto L_0055b3ba;
L_0055a797:; BB(0x0055a797);
    /* 0055a797: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055a79a: call 0x55e8e0 */ r_esp -= 4; W32(r_esp, 0x55a79fu); f_0055e8e0();
    /* 0055a79f: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0055a7a2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055a7a4: je 0x55a7b5 */ if (fZ) goto L_0055a7b5;
L_0055a7a6:; BB(0x0055a7a6);
    /* 0055a7a6: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 0055a7a8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055a7ab: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55a7b0u); f_0055ecb0();
    /* 0055a7b0: jmp 0x55b3ba */ goto L_0055b3ba;
L_0055a7b5:; BB(0x0055a7b5);
    /* 0055a7b5: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055a7b8: call 0x559680 */ r_esp -= 4; W32(r_esp, 0x55a7bdu); f_00559680();
    /* 0055a7bd: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0055a7c0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055a7c2: je 0x55a82b */ if (fZ) goto L_0055a82b;
L_0055a7c4:; BB(0x0055a7c4);
    /* 0055a7c4: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0055a7cb: jmp 0x55a7d6 */ goto L_0055a7d6;
L_0055a7cd:; BB(0x0055a7cd);
    /* 0055a7cd: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055a7d0: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055a7d3: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0055a7d6:; BB(0x0055a7d6);
    /* 0055a7d6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055a7d9: call 0x559380 */ r_esp -= 4; W32(r_esp, 0x55a7deu); f_00559380();
    /* 0055a7de: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055a7e1: jge 0x55a81c */ if ((fS==fO)) goto L_0055a81c;
L_0055a7e3:; BB(0x0055a7e3);
    /* 0055a7e3: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055a7e6: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055a7e9: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 0055a7ee: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055a7ef: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55a7f4u); f_00641280();
    /* 0055a7f4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055a7f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055a7f8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055a7fb: call 0x559d60 */ r_esp -= 4; W32(r_esp, 0x55a800u); f_00559d60();
    /* 0055a800: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055a803: jne 0x55a81a */ if (!fZ) goto L_0055a81a;
L_0055a805:; BB(0x0055a805);
    /* 0055a805: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055a808: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055a80b: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0055a80e: mov byte ptr [edx + 0x14], al */ W8((u32)(r_edx+0x14u), (u8)r_eax);
    /* 0055a811: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055a814: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055a817: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0055a81a:; BB(0x0055a81a);
    /* 0055a81a: jmp 0x55a7cd */ goto L_0055a7cd;
L_0055a81c:; BB(0x0055a81c);
    /* 0055a81c: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 0055a81e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055a821: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55a826u); f_0055ecb0();
    /* 0055a826: jmp 0x55b3ba */ goto L_0055b3ba;
L_0055a82b:; BB(0x0055a82b);
    /* 0055a82b: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055a82d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055a82f: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0055a831: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055a834: call 0x55e640 */ r_esp -= 4; W32(r_esp, 0x55a839u); f_0055e640();
    /* 0055a839: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0055a83c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055a83e: je 0x55a890 */ if (fZ) goto L_0055a890;
L_0055a840:; BB(0x0055a840);
    /* 0055a840: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055a843: movsx ecx, byte ptr [eax + 0x14] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x14u));
    /* 0055a847: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055a84a: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0055a84f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055a850: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55a855u); f_00641280();
    /* 0055a855: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055a858: mov esi, eax */ r_esi = r_eax;
    /* 0055a85a: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0055a85d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055a860: movsx edx, byte ptr [ecx + 0x16] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x16u));
    /* 0055a864: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055a867: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 0055a86c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055a86d: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55a872u); f_00641280();
    /* 0055a872: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055a875: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055a877: je 0x55a888 */ if (fZ) goto L_0055a888;
L_0055a879:; BB(0x0055a879);
    /* 0055a879: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0055a87b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055a87e: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55a883u); f_0055ecb0();
    /* 0055a883: jmp 0x55b3ba */ goto L_0055b3ba;
L_0055a888:; BB(0x0055a888);
    /* 0055a888: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055a88b: call 0x55ec70 */ r_esp -= 4; W32(r_esp, 0x55a890u); f_0055ec70();
L_0055a890:; BB(0x0055a890);
    /* 0055a890: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055a893: call 0x55eba0 */ r_esp -= 4; W32(r_esp, 0x55a898u); f_0055eba0();
    /* 0055a898: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0055a89b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055a89d: je 0x55a8ae */ if (fZ) goto L_0055a8ae;
L_0055a89f:; BB(0x0055a89f);
    /* 0055a89f: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 0055a8a1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055a8a4: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55a8a9u); f_0055ecb0();
    /* 0055a8a9: jmp 0x55b3ba */ goto L_0055b3ba;
L_0055a8ae:; BB(0x0055a8ae);
    /* 0055a8ae: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055a8b0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055a8b2: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0055a8b4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055a8b7: call 0x55e980 */ r_esp -= 4; W32(r_esp, 0x55a8bcu); f_0055e980();
    /* 0055a8bc: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0055a8bf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055a8c1: je 0x55a8d2 */ if (fZ) goto L_0055a8d2;
L_0055a8c3:; BB(0x0055a8c3);
    /* 0055a8c3: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 0055a8c5: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055a8c8: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55a8cdu); f_0055ecb0();
    /* 0055a8cd: jmp 0x55b3ba */ goto L_0055b3ba;
L_0055a8d2:; BB(0x0055a8d2);
    /* 0055a8d2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055a8d5: call 0x55ec70 */ r_esp -= 4; W32(r_esp, 0x55a8dau); f_0055ec70();
    /* 0055a8da: jmp 0x55b3ba */ goto L_0055b3ba;
L_0055a8df:; BB(0x0055a8df);
    /* 0055a8df: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055a8e2: cmp dword ptr [ecx + 0x10], -1 */ {  u32 a = R32((u32)(r_ecx+0x10u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055a8e6: jle 0x55aef2 */ if ((fZ||fS!=fO)) goto L_0055aef2;
L_0055a8ec:; BB(0x0055a8ec);
    /* 0055a8ec: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055a8ef: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 0055a8f2: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0055a8f5: cmp dword ptr [ebp - 0x18], 0xa */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0055a8f9: ja 0x55aef2 */ if ((!fC&&!fZ)) goto L_0055aef2;
L_0055a8ff:; BB(0x0055a8ff);
    /* 0055a8ff: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0055a902: jmp dword ptr [ecx*4 + 0x55b3dc] */ { u32 t = R32((u32)(r_ecx*4+0x55b3dcu)); switch (t) { case 0x55a909u: goto L_0055a909; case 0x55aa1au: goto L_0055aa1a; case 0x55aa78u: goto L_0055aa78; case 0x55ab6fu: goto L_0055ab6f; case 0x55a920u: goto L_0055a920; case 0x55ac66u: goto L_0055ac66; default: UNSUP(0x0055a902, "jump table entry is not a known target"); } }
L_0055a909:; BB(0x0055a909);
    /* 0055a909: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055a90b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055a90e: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55a913u); f_0055ecb0();
    /* 0055a913: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055a916: call 0x55ec30 */ r_esp -= 4; W32(r_esp, 0x55a91bu); f_0055ec30();
    /* 0055a91b: jmp 0x55b3ba */ goto L_0055b3ba;
L_0055a920:; BB(0x0055a920);
    /* 0055a920: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055a923: call 0x559d00 */ r_esp -= 4; W32(r_esp, 0x55a928u); f_00559d00();
    /* 0055a928: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055a92b: jne 0x55a942 */ if (!fZ) goto L_0055a942;
L_0055a92d:; BB(0x0055a92d);
    /* 0055a92d: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055a92f: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0055a931: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0055a933: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055a936: call 0x55e640 */ r_esp -= 4; W32(r_esp, 0x55a93bu); f_0055e640();
    /* 0055a93b: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0055a93e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055a940: jne 0x55a96c */ if (!fZ) goto L_0055a96c;
L_0055a942:; BB(0x0055a942);
    /* 0055a942: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055a945: call 0x559d00 */ r_esp -= 4; W32(r_esp, 0x55a94au); f_00559d00();
    /* 0055a94a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055a94d: jne 0x55a9fb */ if (!fZ) goto L_0055a9fb;
L_0055a953:; BB(0x0055a953);
    /* 0055a953: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055a955: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0055a957: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0055a959: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055a95c: call 0x55e640 */ r_esp -= 4; W32(r_esp, 0x55a961u); f_0055e640();
    /* 0055a961: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0055a964: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055a966: je 0x55a9fb */ if (fZ) goto L_0055a9fb;
L_0055a96c:; BB(0x0055a96c);
    /* 0055a96c: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0055a96e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055a971: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55a976u); f_0055ecb0();
    /* 0055a976: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0055a97d: jmp 0x55a988 */ goto L_0055a988;
L_0055a97f:; BB(0x0055a97f);
    /* 0055a97f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055a982: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055a985: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0055a988:; BB(0x0055a988);
    /* 0055a988: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055a98c: jge 0x55a9a7 */ if ((fS==fO)) goto L_0055a9a7;
L_0055a98e:; BB(0x0055a98e);
    /* 0055a98e: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055a991: add edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055a994: movsx eax, byte ptr [edx + 0x14] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x14u));
    /* 0055a998: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055a99b: jne 0x55a9a5 */ if (!fZ) goto L_0055a9a5;
L_0055a99d:; BB(0x0055a99d);
    /* 0055a99d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055a9a0: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0055a9a3: jmp 0x55a9a7 */ goto L_0055a9a7;
L_0055a9a5:; BB(0x0055a9a5);
    /* 0055a9a5: jmp 0x55a97f */ goto L_0055a97f;
L_0055a9a7:; BB(0x0055a9a7);
    /* 0055a9a7: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0055a9ae: jmp 0x55a9b9 */ goto L_0055a9b9;
L_0055a9b0:; BB(0x0055a9b0);
    /* 0055a9b0: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055a9b3: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055a9b6: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0055a9b9:; BB(0x0055a9b9);
    /* 0055a9b9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055a9bc: call 0x559380 */ r_esp -= 4; W32(r_esp, 0x55a9c1u); f_00559380();
    /* 0055a9c1: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055a9c4: jge 0x55a9f6 */ if ((fS==fO)) goto L_0055a9f6;
L_0055a9c6:; BB(0x0055a9c6);
    /* 0055a9c6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055a9c9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055a9cc: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 0055a9d1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055a9d2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055a9d5: call 0x5593d0 */ r_esp -= 4; W32(r_esp, 0x55a9dau); f_005593d0();
    /* 0055a9da: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055a9dd: jne 0x55a9f4 */ if (!fZ) goto L_0055a9f4;
L_0055a9df:; BB(0x0055a9df);
    /* 0055a9df: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055a9e2: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055a9e5: mov cl, byte ptr [ebp - 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0055a9e8: mov byte ptr [eax + 0x14], cl */ W8((u32)(r_eax+0x14u), (u8)r_ecx);
    /* 0055a9eb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055a9ee: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055a9f1: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0055a9f4:; BB(0x0055a9f4);
    /* 0055a9f4: jmp 0x55a9b0 */ goto L_0055a9b0;
L_0055a9f6:; BB(0x0055a9f6);
    /* 0055a9f6: jmp 0x55b3ba */ goto L_0055b3ba;
L_0055a9fb:; BB(0x0055a9fb);
    /* 0055a9fb: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055a9fe: call 0x55ec70 */ r_esp -= 4; W32(r_esp, 0x55aa03u); f_0055ec70();
    /* 0055aa03: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055aa05: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055aa08: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55aa0du); f_0055ecb0();
    /* 0055aa0d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055aa10: call 0x55ec30 */ r_esp -= 4; W32(r_esp, 0x55aa15u); f_0055ec30();
    /* 0055aa15: jmp 0x55b3ba */ goto L_0055b3ba;
L_0055aa1a:; BB(0x0055aa1a);
    /* 0055aa1a: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 0055aa1c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055aa1f: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55aa24u); f_0055ecb0();
    /* 0055aa24: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0055aa2b: jmp 0x55aa36 */ goto L_0055aa36;
L_0055aa2d:; BB(0x0055aa2d);
    /* 0055aa2d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055aa30: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055aa33: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0055aa36:; BB(0x0055aa36);
    /* 0055aa36: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055aa39: call 0x559380 */ r_esp -= 4; W32(r_esp, 0x55aa3eu); f_00559380();
    /* 0055aa3e: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055aa41: jge 0x55aa73 */ if ((fS==fO)) goto L_0055aa73;
L_0055aa43:; BB(0x0055aa43);
    /* 0055aa43: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055aa46: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055aa49: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0055aa4e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055aa4f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055aa52: call 0x5593d0 */ r_esp -= 4; W32(r_esp, 0x55aa57u); f_005593d0();
    /* 0055aa57: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055aa5a: jne 0x55aa71 */ if (!fZ) goto L_0055aa71;
L_0055aa5c:; BB(0x0055aa5c);
    /* 0055aa5c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055aa5f: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055aa62: mov dl, byte ptr [ebp - 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0055aa65: mov byte ptr [ecx + 0x14], dl */ W8((u32)(r_ecx+0x14u), (u8)r_edx);
    /* 0055aa68: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055aa6b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055aa6e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0055aa71:; BB(0x0055aa71);
    /* 0055aa71: jmp 0x55aa2d */ goto L_0055aa2d;
L_0055aa73:; BB(0x0055aa73);
    /* 0055aa73: jmp 0x55b3ba */ goto L_0055b3ba;
L_0055aa78:; BB(0x0055aa78);
    /* 0055aa78: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055aa7b: call 0x559d00 */ r_esp -= 4; W32(r_esp, 0x55aa80u); f_00559d00();
    /* 0055aa80: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055aa83: jne 0x55aa91 */ if (!fZ) goto L_0055aa91;
L_0055aa85:; BB(0x0055aa85);
    /* 0055aa85: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 0055aa87: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055aa8a: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55aa8fu); f_0055ecb0();
    /* 0055aa8f: jmp 0x55aa9b */ goto L_0055aa9b;
L_0055aa91:; BB(0x0055aa91);
    /* 0055aa91: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055aa93: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055aa96: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55aa9bu); f_0055ecb0();
L_0055aa9b:; BB(0x0055aa9b);
    /* 0055aa9b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055aa9e: call 0x559d00 */ r_esp -= 4; W32(r_esp, 0x55aaa3u); f_00559d00();
    /* 0055aaa3: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055aaa6: jne 0x55aaf9 */ if (!fZ) goto L_0055aaf9;
L_0055aaa8:; BB(0x0055aaa8);
    /* 0055aaa8: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0055aaaf: jmp 0x55aaba */ goto L_0055aaba;
L_0055aab1:; BB(0x0055aab1);
    /* 0055aab1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055aab4: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055aab7: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0055aaba:; BB(0x0055aaba);
    /* 0055aaba: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055aabd: call 0x559380 */ r_esp -= 4; W32(r_esp, 0x55aac2u); f_00559380();
    /* 0055aac2: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055aac5: jge 0x55aaf7 */ if ((fS==fO)) goto L_0055aaf7;
L_0055aac7:; BB(0x0055aac7);
    /* 0055aac7: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055aaca: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055aacd: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 0055aad2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055aad3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055aad6: call 0x5593d0 */ r_esp -= 4; W32(r_esp, 0x55aadbu); f_005593d0();
    /* 0055aadb: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055aade: jne 0x55aaf5 */ if (!fZ) goto L_0055aaf5;
L_0055aae0:; BB(0x0055aae0);
    /* 0055aae0: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055aae3: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055aae6: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0055aae9: mov byte ptr [edx + 0x14], al */ W8((u32)(r_edx+0x14u), (u8)r_eax);
    /* 0055aaec: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055aaef: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055aaf2: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0055aaf5:; BB(0x0055aaf5);
    /* 0055aaf5: jmp 0x55aab1 */ goto L_0055aab1;
L_0055aaf7:; BB(0x0055aaf7);
    /* 0055aaf7: jmp 0x55ab6a */ goto L_0055ab6a;
L_0055aaf9:; BB(0x0055aaf9);
    /* 0055aaf9: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0055ab00: jmp 0x55ab0b */ goto L_0055ab0b;
L_0055ab02:; BB(0x0055ab02);
    /* 0055ab02: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055ab05: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055ab08: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0055ab0b:; BB(0x0055ab0b);
    /* 0055ab0b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055ab0e: call 0x559380 */ r_esp -= 4; W32(r_esp, 0x55ab13u); f_00559380();
    /* 0055ab13: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055ab16: jge 0x55ab6a */ if ((fS==fO)) goto L_0055ab6a;
L_0055ab18:; BB(0x0055ab18);
    /* 0055ab18: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055ab1b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055ab1e: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 0055ab23: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055ab24: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55ab29u); f_00641280();
    /* 0055ab29: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055ab2c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055ab2d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055ab30: call 0x559d60 */ r_esp -= 4; W32(r_esp, 0x55ab35u); f_00559d60();
    /* 0055ab35: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055ab38: jg 0x55ab53 */ if ((!fZ&&fS==fO)) goto L_0055ab53;
L_0055ab3a:; BB(0x0055ab3a);
    /* 0055ab3a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055ab3d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055ab40: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 0055ab45: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055ab46: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055ab49: call 0x5593d0 */ r_esp -= 4; W32(r_esp, 0x55ab4eu); f_005593d0();
    /* 0055ab4e: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ab51: jne 0x55ab68 */ if (!fZ) goto L_0055ab68;
L_0055ab53:; BB(0x0055ab53);
    /* 0055ab53: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055ab56: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055ab59: mov cl, byte ptr [ebp - 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0055ab5c: mov byte ptr [eax + 0x14], cl */ W8((u32)(r_eax+0x14u), (u8)r_ecx);
    /* 0055ab5f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055ab62: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055ab65: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0055ab68:; BB(0x0055ab68);
    /* 0055ab68: jmp 0x55ab02 */ goto L_0055ab02;
L_0055ab6a:; BB(0x0055ab6a);
    /* 0055ab6a: jmp 0x55b3ba */ goto L_0055b3ba;
L_0055ab6f:; BB(0x0055ab6f);
    /* 0055ab6f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055ab72: call 0x559d00 */ r_esp -= 4; W32(r_esp, 0x55ab77u); f_00559d00();
    /* 0055ab77: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ab7a: jne 0x55ab88 */ if (!fZ) goto L_0055ab88;
L_0055ab7c:; BB(0x0055ab7c);
    /* 0055ab7c: push 0x29 */ { u32 v = 0x29u; r_esp -= 4; W32(r_esp, v); }
    /* 0055ab7e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055ab81: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55ab86u); f_0055ecb0();
    /* 0055ab86: jmp 0x55ab92 */ goto L_0055ab92;
L_0055ab88:; BB(0x0055ab88);
    /* 0055ab88: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 0055ab8a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055ab8d: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55ab92u); f_0055ecb0();
L_0055ab92:; BB(0x0055ab92);
    /* 0055ab92: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055ab95: call 0x559d00 */ r_esp -= 4; W32(r_esp, 0x55ab9au); f_00559d00();
    /* 0055ab9a: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ab9d: jne 0x55abf0 */ if (!fZ) goto L_0055abf0;
L_0055ab9f:; BB(0x0055ab9f);
    /* 0055ab9f: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0055aba6: jmp 0x55abb1 */ goto L_0055abb1;
L_0055aba8:; BB(0x0055aba8);
    /* 0055aba8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055abab: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055abae: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0055abb1:; BB(0x0055abb1);
    /* 0055abb1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055abb4: call 0x559380 */ r_esp -= 4; W32(r_esp, 0x55abb9u); f_00559380();
    /* 0055abb9: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055abbc: jge 0x55abee */ if ((fS==fO)) goto L_0055abee;
L_0055abbe:; BB(0x0055abbe);
    /* 0055abbe: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055abc1: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055abc4: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0055abc9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055abca: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055abcd: call 0x5593d0 */ r_esp -= 4; W32(r_esp, 0x55abd2u); f_005593d0();
    /* 0055abd2: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055abd5: jne 0x55abec */ if (!fZ) goto L_0055abec;
L_0055abd7:; BB(0x0055abd7);
    /* 0055abd7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055abda: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055abdd: mov dl, byte ptr [ebp - 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0055abe0: mov byte ptr [ecx + 0x14], dl */ W8((u32)(r_ecx+0x14u), (u8)r_edx);
    /* 0055abe3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055abe6: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055abe9: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0055abec:; BB(0x0055abec);
    /* 0055abec: jmp 0x55aba8 */ goto L_0055aba8;
L_0055abee:; BB(0x0055abee);
    /* 0055abee: jmp 0x55ac61 */ goto L_0055ac61;
L_0055abf0:; BB(0x0055abf0);
    /* 0055abf0: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0055abf7: jmp 0x55ac02 */ goto L_0055ac02;
L_0055abf9:; BB(0x0055abf9);
    /* 0055abf9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055abfc: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055abff: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0055ac02:; BB(0x0055ac02);
    /* 0055ac02: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055ac05: call 0x559380 */ r_esp -= 4; W32(r_esp, 0x55ac0au); f_00559380();
    /* 0055ac0a: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055ac0d: jge 0x55ac61 */ if ((fS==fO)) goto L_0055ac61;
L_0055ac0f:; BB(0x0055ac0f);
    /* 0055ac0f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055ac12: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055ac15: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 0055ac1a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055ac1b: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55ac20u); f_00641280();
    /* 0055ac20: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055ac23: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055ac24: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055ac27: call 0x559d60 */ r_esp -= 4; W32(r_esp, 0x55ac2cu); f_00559d60();
    /* 0055ac2c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055ac2f: jg 0x55ac4a */ if ((!fZ&&fS==fO)) goto L_0055ac4a;
L_0055ac31:; BB(0x0055ac31);
    /* 0055ac31: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055ac34: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055ac37: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 0055ac3c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055ac3d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055ac40: call 0x5593d0 */ r_esp -= 4; W32(r_esp, 0x55ac45u); f_005593d0();
    /* 0055ac45: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ac48: jne 0x55ac5f */ if (!fZ) goto L_0055ac5f;
L_0055ac4a:; BB(0x0055ac4a);
    /* 0055ac4a: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055ac4d: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055ac50: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0055ac53: mov byte ptr [edx + 0x14], al */ W8((u32)(r_edx+0x14u), (u8)r_eax);
    /* 0055ac56: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055ac59: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055ac5c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0055ac5f:; BB(0x0055ac5f);
    /* 0055ac5f: jmp 0x55abf9 */ goto L_0055abf9;
L_0055ac61:; BB(0x0055ac61);
    /* 0055ac61: jmp 0x55b3ba */ goto L_0055b3ba;
L_0055ac66:; BB(0x0055ac66);
    /* 0055ac66: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055ac69: call 0x559d00 */ r_esp -= 4; W32(r_esp, 0x55ac6eu); f_00559d00();
    /* 0055ac6e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ac71: jne 0x55ac88 */ if (!fZ) goto L_0055ac88;
L_0055ac73:; BB(0x0055ac73);
    /* 0055ac73: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055ac75: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0055ac77: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0055ac79: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055ac7c: call 0x55e640 */ r_esp -= 4; W32(r_esp, 0x55ac81u); f_0055e640();
    /* 0055ac81: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0055ac84: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ac86: jne 0x55acb2 */ if (!fZ) goto L_0055acb2;
L_0055ac88:; BB(0x0055ac88);
    /* 0055ac88: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055ac8b: call 0x559d00 */ r_esp -= 4; W32(r_esp, 0x55ac90u); f_00559d00();
    /* 0055ac90: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ac93: jne 0x55ad41 */ if (!fZ) goto L_0055ad41;
L_0055ac99:; BB(0x0055ac99);
    /* 0055ac99: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055ac9b: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0055ac9d: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0055ac9f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055aca2: call 0x55e640 */ r_esp -= 4; W32(r_esp, 0x55aca7u); f_0055e640();
    /* 0055aca7: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0055acaa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055acac: je 0x55ad41 */ if (fZ) goto L_0055ad41;
L_0055acb2:; BB(0x0055acb2);
    /* 0055acb2: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0055acb4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055acb7: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55acbcu); f_0055ecb0();
    /* 0055acbc: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0055acc3: jmp 0x55acce */ goto L_0055acce;
L_0055acc5:; BB(0x0055acc5);
    /* 0055acc5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055acc8: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055accb: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0055acce:; BB(0x0055acce);
    /* 0055acce: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055acd2: jge 0x55aced */ if ((fS==fO)) goto L_0055aced;
L_0055acd4:; BB(0x0055acd4);
    /* 0055acd4: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055acd7: add edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055acda: movsx eax, byte ptr [edx + 0x14] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x14u));
    /* 0055acde: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ace1: jne 0x55aceb */ if (!fZ) goto L_0055aceb;
L_0055ace3:; BB(0x0055ace3);
    /* 0055ace3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055ace6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0055ace9: jmp 0x55aced */ goto L_0055aced;
L_0055aceb:; BB(0x0055aceb);
    /* 0055aceb: jmp 0x55acc5 */ goto L_0055acc5;
L_0055aced:; BB(0x0055aced);
    /* 0055aced: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0055acf4: jmp 0x55acff */ goto L_0055acff;
L_0055acf6:; BB(0x0055acf6);
    /* 0055acf6: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055acf9: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055acfc: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0055acff:; BB(0x0055acff);
    /* 0055acff: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055ad02: call 0x559380 */ r_esp -= 4; W32(r_esp, 0x55ad07u); f_00559380();
    /* 0055ad07: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055ad0a: jge 0x55ad3c */ if ((fS==fO)) goto L_0055ad3c;
L_0055ad0c:; BB(0x0055ad0c);
    /* 0055ad0c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055ad0f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055ad12: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 0055ad17: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055ad18: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055ad1b: call 0x5593d0 */ r_esp -= 4; W32(r_esp, 0x55ad20u); f_005593d0();
    /* 0055ad20: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ad23: jne 0x55ad3a */ if (!fZ) goto L_0055ad3a;
L_0055ad25:; BB(0x0055ad25);
    /* 0055ad25: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055ad28: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055ad2b: mov cl, byte ptr [ebp - 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0055ad2e: mov byte ptr [eax + 0x14], cl */ W8((u32)(r_eax+0x14u), (u8)r_ecx);
    /* 0055ad31: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055ad34: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055ad37: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0055ad3a:; BB(0x0055ad3a);
    /* 0055ad3a: jmp 0x55acf6 */ goto L_0055acf6;
L_0055ad3c:; BB(0x0055ad3c);
    /* 0055ad3c: jmp 0x55b3ba */ goto L_0055b3ba;
L_0055ad41:; BB(0x0055ad41);
    /* 0055ad41: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055ad44: call 0x55ec70 */ r_esp -= 4; W32(r_esp, 0x55ad49u); f_0055ec70();
    /* 0055ad49: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055ad4c: call 0x559d00 */ r_esp -= 4; W32(r_esp, 0x55ad51u); f_00559d00();
    /* 0055ad51: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ad54: jne 0x55ae02 */ if (!fZ) goto L_0055ae02;
L_0055ad5a:; BB(0x0055ad5a);
    /* 0055ad5a: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055ad5c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055ad5e: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0055ad60: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055ad63: call 0x55e640 */ r_esp -= 4; W32(r_esp, 0x55ad68u); f_0055e640();
    /* 0055ad68: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0055ad6b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ad6d: je 0x55ae02 */ if (fZ) goto L_0055ae02;
L_0055ad73:; BB(0x0055ad73);
    /* 0055ad73: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0055ad75: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055ad78: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55ad7du); f_0055ecb0();
    /* 0055ad7d: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0055ad84: jmp 0x55ad8f */ goto L_0055ad8f;
L_0055ad86:; BB(0x0055ad86);
    /* 0055ad86: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055ad89: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055ad8c: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0055ad8f:; BB(0x0055ad8f);
    /* 0055ad8f: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055ad93: jge 0x55adae */ if ((fS==fO)) goto L_0055adae;
L_0055ad95:; BB(0x0055ad95);
    /* 0055ad95: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055ad98: add edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055ad9b: movsx eax, byte ptr [edx + 0x14] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x14u));
    /* 0055ad9f: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ada2: jne 0x55adac */ if (!fZ) goto L_0055adac;
L_0055ada4:; BB(0x0055ada4);
    /* 0055ada4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055ada7: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0055adaa: jmp 0x55adae */ goto L_0055adae;
L_0055adac:; BB(0x0055adac);
    /* 0055adac: jmp 0x55ad86 */ goto L_0055ad86;
L_0055adae:; BB(0x0055adae);
    /* 0055adae: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0055adb5: jmp 0x55adc0 */ goto L_0055adc0;
L_0055adb7:; BB(0x0055adb7);
    /* 0055adb7: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055adba: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055adbd: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0055adc0:; BB(0x0055adc0);
    /* 0055adc0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055adc3: call 0x559380 */ r_esp -= 4; W32(r_esp, 0x55adc8u); f_00559380();
    /* 0055adc8: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055adcb: jge 0x55adfd */ if ((fS==fO)) goto L_0055adfd;
L_0055adcd:; BB(0x0055adcd);
    /* 0055adcd: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055add0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055add3: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 0055add8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055add9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055addc: call 0x5593d0 */ r_esp -= 4; W32(r_esp, 0x55ade1u); f_005593d0();
    /* 0055ade1: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ade4: jne 0x55adfb */ if (!fZ) goto L_0055adfb;
L_0055ade6:; BB(0x0055ade6);
    /* 0055ade6: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055ade9: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055adec: mov cl, byte ptr [ebp - 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0055adef: mov byte ptr [eax + 0x14], cl */ W8((u32)(r_eax+0x14u), (u8)r_ecx);
    /* 0055adf2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055adf5: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055adf8: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0055adfb:; BB(0x0055adfb);
    /* 0055adfb: jmp 0x55adb7 */ goto L_0055adb7;
L_0055adfd:; BB(0x0055adfd);
    /* 0055adfd: jmp 0x55b3ba */ goto L_0055b3ba;
L_0055ae02:; BB(0x0055ae02);
    /* 0055ae02: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055ae05: call 0x55ec70 */ r_esp -= 4; W32(r_esp, 0x55ae0au); f_0055ec70();
    /* 0055ae0a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055ae0d: call 0x559d00 */ r_esp -= 4; W32(r_esp, 0x55ae12u); f_00559d00();
    /* 0055ae12: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ae15: jne 0x55ae72 */ if (!fZ) goto L_0055ae72;
L_0055ae17:; BB(0x0055ae17);
    /* 0055ae17: push 0x2f */ { u32 v = 0x2fu; r_esp -= 4; W32(r_esp, v); }
    /* 0055ae19: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055ae1c: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55ae21u); f_0055ecb0();
    /* 0055ae21: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0055ae28: jmp 0x55ae33 */ goto L_0055ae33;
L_0055ae2a:; BB(0x0055ae2a);
    /* 0055ae2a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055ae2d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055ae30: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0055ae33:; BB(0x0055ae33);
    /* 0055ae33: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055ae36: call 0x559380 */ r_esp -= 4; W32(r_esp, 0x55ae3bu); f_00559380();
    /* 0055ae3b: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055ae3e: jge 0x55ae70 */ if ((fS==fO)) goto L_0055ae70;
L_0055ae40:; BB(0x0055ae40);
    /* 0055ae40: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055ae43: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055ae46: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0055ae4b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055ae4c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055ae4f: call 0x5593d0 */ r_esp -= 4; W32(r_esp, 0x55ae54u); f_005593d0();
    /* 0055ae54: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ae57: jne 0x55ae6e */ if (!fZ) goto L_0055ae6e;
L_0055ae59:; BB(0x0055ae59);
    /* 0055ae59: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055ae5c: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055ae5f: mov dl, byte ptr [ebp - 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0055ae62: mov byte ptr [ecx + 0x14], dl */ W8((u32)(r_ecx+0x14u), (u8)r_edx);
    /* 0055ae65: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055ae68: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055ae6b: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0055ae6e:; BB(0x0055ae6e);
    /* 0055ae6e: jmp 0x55ae2a */ goto L_0055ae2a;
L_0055ae70:; BB(0x0055ae70);
    /* 0055ae70: jmp 0x55aeed */ goto L_0055aeed;
L_0055ae72:; BB(0x0055ae72);
    /* 0055ae72: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 0055ae74: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055ae77: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55ae7cu); f_0055ecb0();
    /* 0055ae7c: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0055ae83: jmp 0x55ae8e */ goto L_0055ae8e;
L_0055ae85:; BB(0x0055ae85);
    /* 0055ae85: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055ae88: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055ae8b: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0055ae8e:; BB(0x0055ae8e);
    /* 0055ae8e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055ae91: call 0x559380 */ r_esp -= 4; W32(r_esp, 0x55ae96u); f_00559380();
    /* 0055ae96: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055ae99: jge 0x55aeed */ if ((fS==fO)) goto L_0055aeed;
L_0055ae9b:; BB(0x0055ae9b);
    /* 0055ae9b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055ae9e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055aea1: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 0055aea6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055aea7: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55aeacu); f_00641280();
    /* 0055aeac: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055aeaf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055aeb0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055aeb3: call 0x559d60 */ r_esp -= 4; W32(r_esp, 0x55aeb8u); f_00559d60();
    /* 0055aeb8: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055aebb: jg 0x55aed6 */ if ((!fZ&&fS==fO)) goto L_0055aed6;
L_0055aebd:; BB(0x0055aebd);
    /* 0055aebd: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055aec0: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055aec3: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 0055aec8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055aec9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055aecc: call 0x5593d0 */ r_esp -= 4; W32(r_esp, 0x55aed1u); f_005593d0();
    /* 0055aed1: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055aed4: jne 0x55aeeb */ if (!fZ) goto L_0055aeeb;
L_0055aed6:; BB(0x0055aed6);
    /* 0055aed6: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055aed9: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055aedc: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0055aedf: mov byte ptr [edx + 0x14], al */ W8((u32)(r_edx+0x14u), (u8)r_eax);
    /* 0055aee2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055aee5: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055aee8: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0055aeeb:; BB(0x0055aeeb);
    /* 0055aeeb: jmp 0x55ae85 */ goto L_0055ae85;
L_0055aeed:; BB(0x0055aeed);
    /* 0055aeed: jmp 0x55b3ba */ goto L_0055b3ba;
L_0055aef2:; BB(0x0055aef2);
    /* 0055aef2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055aef5: call 0x559d00 */ r_esp -= 4; W32(r_esp, 0x55aefau); f_00559d00();
    /* 0055aefa: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055aefd: jne 0x55af14 */ if (!fZ) goto L_0055af14;
L_0055aeff:; BB(0x0055aeff);
    /* 0055aeff: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055af01: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0055af03: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0055af05: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055af08: call 0x55e640 */ r_esp -= 4; W32(r_esp, 0x55af0du); f_0055e640();
    /* 0055af0d: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0055af10: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055af12: jne 0x55af3e */ if (!fZ) goto L_0055af3e;
L_0055af14:; BB(0x0055af14);
    /* 0055af14: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055af17: call 0x559d00 */ r_esp -= 4; W32(r_esp, 0x55af1cu); f_00559d00();
    /* 0055af1c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055af1f: jne 0x55afcd */ if (!fZ) goto L_0055afcd;
L_0055af25:; BB(0x0055af25);
    /* 0055af25: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055af27: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0055af29: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0055af2b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055af2e: call 0x55e640 */ r_esp -= 4; W32(r_esp, 0x55af33u); f_0055e640();
    /* 0055af33: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0055af36: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055af38: je 0x55afcd */ if (fZ) goto L_0055afcd;
L_0055af3e:; BB(0x0055af3e);
    /* 0055af3e: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0055af40: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055af43: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55af48u); f_0055ecb0();
    /* 0055af48: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0055af4f: jmp 0x55af5a */ goto L_0055af5a;
L_0055af51:; BB(0x0055af51);
    /* 0055af51: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055af54: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055af57: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0055af5a:; BB(0x0055af5a);
    /* 0055af5a: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055af5e: jge 0x55af79 */ if ((fS==fO)) goto L_0055af79;
L_0055af60:; BB(0x0055af60);
    /* 0055af60: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055af63: add edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055af66: movsx eax, byte ptr [edx + 0x14] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x14u));
    /* 0055af6a: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055af6d: jne 0x55af77 */ if (!fZ) goto L_0055af77;
L_0055af6f:; BB(0x0055af6f);
    /* 0055af6f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055af72: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0055af75: jmp 0x55af79 */ goto L_0055af79;
L_0055af77:; BB(0x0055af77);
    /* 0055af77: jmp 0x55af51 */ goto L_0055af51;
L_0055af79:; BB(0x0055af79);
    /* 0055af79: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0055af80: jmp 0x55af8b */ goto L_0055af8b;
L_0055af82:; BB(0x0055af82);
    /* 0055af82: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055af85: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055af88: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0055af8b:; BB(0x0055af8b);
    /* 0055af8b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055af8e: call 0x559380 */ r_esp -= 4; W32(r_esp, 0x55af93u); f_00559380();
    /* 0055af93: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055af96: jge 0x55afc8 */ if ((fS==fO)) goto L_0055afc8;
L_0055af98:; BB(0x0055af98);
    /* 0055af98: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055af9b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055af9e: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 0055afa3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055afa4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055afa7: call 0x5593d0 */ r_esp -= 4; W32(r_esp, 0x55afacu); f_005593d0();
    /* 0055afac: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055afaf: jne 0x55afc6 */ if (!fZ) goto L_0055afc6;
L_0055afb1:; BB(0x0055afb1);
    /* 0055afb1: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055afb4: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055afb7: mov cl, byte ptr [ebp - 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0055afba: mov byte ptr [eax + 0x14], cl */ W8((u32)(r_eax+0x14u), (u8)r_ecx);
    /* 0055afbd: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055afc0: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055afc3: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0055afc6:; BB(0x0055afc6);
    /* 0055afc6: jmp 0x55af82 */ goto L_0055af82;
L_0055afc8:; BB(0x0055afc8);
    /* 0055afc8: jmp 0x55b3ba */ goto L_0055b3ba;
L_0055afcd:; BB(0x0055afcd);
    /* 0055afcd: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055afd0: call 0x55ec70 */ r_esp -= 4; W32(r_esp, 0x55afd5u); f_0055ec70();
    /* 0055afd5: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055afd8: call 0x559d00 */ r_esp -= 4; W32(r_esp, 0x55afddu); f_00559d00();
    /* 0055afdd: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055afe0: jne 0x55b08e */ if (!fZ) goto L_0055b08e;
L_0055afe6:; BB(0x0055afe6);
    /* 0055afe6: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055afe8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055afea: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0055afec: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055afef: call 0x55e640 */ r_esp -= 4; W32(r_esp, 0x55aff4u); f_0055e640();
    /* 0055aff4: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0055aff7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055aff9: je 0x55b08e */ if (fZ) goto L_0055b08e;
L_0055afff:; BB(0x0055afff);
    /* 0055afff: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0055b001: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b004: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55b009u); f_0055ecb0();
    /* 0055b009: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0055b010: jmp 0x55b01b */ goto L_0055b01b;
L_0055b012:; BB(0x0055b012);
    /* 0055b012: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055b015: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055b018: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0055b01b:; BB(0x0055b01b);
    /* 0055b01b: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055b01f: jge 0x55b03a */ if ((fS==fO)) goto L_0055b03a;
L_0055b021:; BB(0x0055b021);
    /* 0055b021: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b024: add edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055b027: movsx eax, byte ptr [edx + 0x14] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x14u));
    /* 0055b02b: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055b02e: jne 0x55b038 */ if (!fZ) goto L_0055b038;
L_0055b030:; BB(0x0055b030);
    /* 0055b030: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055b033: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0055b036: jmp 0x55b03a */ goto L_0055b03a;
L_0055b038:; BB(0x0055b038);
    /* 0055b038: jmp 0x55b012 */ goto L_0055b012;
L_0055b03a:; BB(0x0055b03a);
    /* 0055b03a: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0055b041: jmp 0x55b04c */ goto L_0055b04c;
L_0055b043:; BB(0x0055b043);
    /* 0055b043: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055b046: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055b049: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0055b04c:; BB(0x0055b04c);
    /* 0055b04c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b04f: call 0x559380 */ r_esp -= 4; W32(r_esp, 0x55b054u); f_00559380();
    /* 0055b054: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055b057: jge 0x55b089 */ if ((fS==fO)) goto L_0055b089;
L_0055b059:; BB(0x0055b059);
    /* 0055b059: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055b05c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b05f: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 0055b064: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055b065: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b068: call 0x5593d0 */ r_esp -= 4; W32(r_esp, 0x55b06du); f_005593d0();
    /* 0055b06d: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055b070: jne 0x55b087 */ if (!fZ) goto L_0055b087;
L_0055b072:; BB(0x0055b072);
    /* 0055b072: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b075: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055b078: mov cl, byte ptr [ebp - 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0055b07b: mov byte ptr [eax + 0x14], cl */ W8((u32)(r_eax+0x14u), (u8)r_ecx);
    /* 0055b07e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055b081: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055b084: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0055b087:; BB(0x0055b087);
    /* 0055b087: jmp 0x55b043 */ goto L_0055b043;
L_0055b089:; BB(0x0055b089);
    /* 0055b089: jmp 0x55b3ba */ goto L_0055b3ba;
L_0055b08e:; BB(0x0055b08e);
    /* 0055b08e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b091: call 0x55ec70 */ r_esp -= 4; W32(r_esp, 0x55b096u); f_0055ec70();
    /* 0055b096: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b099: call 0x559d00 */ r_esp -= 4; W32(r_esp, 0x55b09eu); f_00559d00();
    /* 0055b09e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055b0a1: jne 0x55b14f */ if (!fZ) goto L_0055b14f;
L_0055b0a7:; BB(0x0055b0a7);
    /* 0055b0a7: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055b0a9: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0055b0ab: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0055b0ad: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b0b0: call 0x55e640 */ r_esp -= 4; W32(r_esp, 0x55b0b5u); f_0055e640();
    /* 0055b0b5: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0055b0b8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055b0ba: je 0x55b14f */ if (fZ) goto L_0055b14f;
L_0055b0c0:; BB(0x0055b0c0);
    /* 0055b0c0: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0055b0c2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b0c5: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55b0cau); f_0055ecb0();
    /* 0055b0ca: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0055b0d1: jmp 0x55b0dc */ goto L_0055b0dc;
L_0055b0d3:; BB(0x0055b0d3);
    /* 0055b0d3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055b0d6: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055b0d9: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0055b0dc:; BB(0x0055b0dc);
    /* 0055b0dc: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055b0e0: jge 0x55b0fb */ if ((fS==fO)) goto L_0055b0fb;
L_0055b0e2:; BB(0x0055b0e2);
    /* 0055b0e2: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b0e5: add edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055b0e8: movsx eax, byte ptr [edx + 0x14] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x14u));
    /* 0055b0ec: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055b0ef: jne 0x55b0f9 */ if (!fZ) goto L_0055b0f9;
L_0055b0f1:; BB(0x0055b0f1);
    /* 0055b0f1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055b0f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0055b0f7: jmp 0x55b0fb */ goto L_0055b0fb;
L_0055b0f9:; BB(0x0055b0f9);
    /* 0055b0f9: jmp 0x55b0d3 */ goto L_0055b0d3;
L_0055b0fb:; BB(0x0055b0fb);
    /* 0055b0fb: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0055b102: jmp 0x55b10d */ goto L_0055b10d;
L_0055b104:; BB(0x0055b104);
    /* 0055b104: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055b107: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055b10a: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0055b10d:; BB(0x0055b10d);
    /* 0055b10d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b110: call 0x559380 */ r_esp -= 4; W32(r_esp, 0x55b115u); f_00559380();
    /* 0055b115: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055b118: jge 0x55b14a */ if ((fS==fO)) goto L_0055b14a;
L_0055b11a:; BB(0x0055b11a);
    /* 0055b11a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055b11d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b120: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 0055b125: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055b126: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b129: call 0x5593d0 */ r_esp -= 4; W32(r_esp, 0x55b12eu); f_005593d0();
    /* 0055b12e: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055b131: jne 0x55b148 */ if (!fZ) goto L_0055b148;
L_0055b133:; BB(0x0055b133);
    /* 0055b133: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b136: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055b139: mov cl, byte ptr [ebp - 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0055b13c: mov byte ptr [eax + 0x14], cl */ W8((u32)(r_eax+0x14u), (u8)r_ecx);
    /* 0055b13f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055b142: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055b145: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0055b148:; BB(0x0055b148);
    /* 0055b148: jmp 0x55b104 */ goto L_0055b104;
L_0055b14a:; BB(0x0055b14a);
    /* 0055b14a: jmp 0x55b3ba */ goto L_0055b3ba;
L_0055b14f:; BB(0x0055b14f);
    /* 0055b14f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b152: call 0x55ec70 */ r_esp -= 4; W32(r_esp, 0x55b157u); f_0055ec70();
    /* 0055b157: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b15a: call 0x559d00 */ r_esp -= 4; W32(r_esp, 0x55b15fu); f_00559d00();
    /* 0055b15f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055b162: jne 0x55b215 */ if (!fZ) goto L_0055b215;
L_0055b168:; BB(0x0055b168);
    /* 0055b168: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 0055b16f: jmp 0x55b17a */ goto L_0055b17a;
L_0055b171:; BB(0x0055b171);
    /* 0055b171: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055b174: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055b177: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0055b17a:; BB(0x0055b17a);
    /* 0055b17a: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055b17e: jg 0x55b215 */ if ((!fZ&&fS==fO)) goto L_0055b215;
L_0055b184:; BB(0x0055b184);
    /* 0055b184: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0055b186: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055b189: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055b18a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b18d: call 0x55e3e0 */ r_esp -= 4; W32(r_esp, 0x55b192u); f_0055e3e0();
    /* 0055b192: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0055b195: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055b197: je 0x55b210 */ if (fZ) goto L_0055b210;
L_0055b199:; BB(0x0055b199);
    /* 0055b199: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0055b1a0: jmp 0x55b1ab */ goto L_0055b1ab;
L_0055b1a2:; BB(0x0055b1a2);
    /* 0055b1a2: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055b1a5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055b1a8: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_0055b1ab:; BB(0x0055b1ab);
    /* 0055b1ab: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b1ae: call 0x559380 */ r_esp -= 4; W32(r_esp, 0x55b1b3u); f_00559380();
    /* 0055b1b3: cmp dword ptr [ebp - 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055b1b6: jge 0x55b201 */ if ((fS==fO)) goto L_0055b201;
L_0055b1b8:; BB(0x0055b1b8);
    /* 0055b1b8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055b1bb: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b1be: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0055b1c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055b1c4: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x55b1c9u); f_00641290();
    /* 0055b1c9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055b1cc: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055b1cf: je 0x55b1ea */ if (fZ) goto L_0055b1ea;
L_0055b1d1:; BB(0x0055b1d1);
    /* 0055b1d1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055b1d4: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b1d7: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0055b1dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055b1dd: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b1e0: call 0x5593d0 */ r_esp -= 4; W32(r_esp, 0x55b1e5u); f_005593d0();
    /* 0055b1e5: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055b1e8: jne 0x55b1ff */ if (!fZ) goto L_0055b1ff;
L_0055b1ea:; BB(0x0055b1ea);
    /* 0055b1ea: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b1ed: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055b1f0: mov dl, byte ptr [ebp - 0xc] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff4u))) & 0xffu);
    /* 0055b1f3: mov byte ptr [ecx + 0x14], dl */ W8((u32)(r_ecx+0x14u), (u8)r_edx);
    /* 0055b1f6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055b1f9: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055b1fc: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0055b1ff:; BB(0x0055b1ff);
    /* 0055b1ff: jmp 0x55b1a2 */ goto L_0055b1a2;
L_0055b201:; BB(0x0055b201);
    /* 0055b201: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0055b203: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b206: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55b20bu); f_0055ecb0();
    /* 0055b20b: jmp 0x55b3ba */ goto L_0055b3ba;
L_0055b210:; BB(0x0055b210);
    /* 0055b210: jmp 0x55b171 */ goto L_0055b171;
L_0055b215:; BB(0x0055b215);
    /* 0055b215: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b218: call 0x55ec70 */ r_esp -= 4; W32(r_esp, 0x55b21du); f_0055ec70();
    /* 0055b21d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b220: call 0x559d00 */ r_esp -= 4; W32(r_esp, 0x55b225u); f_00559d00();
    /* 0055b225: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055b228: jne 0x55b293 */ if (!fZ) goto L_0055b293;
L_0055b22a:; BB(0x0055b22a);
    /* 0055b22a: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055b22c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055b22e: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0055b230: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b233: call 0x55e980 */ r_esp -= 4; W32(r_esp, 0x55b238u); f_0055e980();
    /* 0055b238: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0055b23b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055b23d: je 0x55b293 */ if (fZ) goto L_0055b293;
L_0055b23f:; BB(0x0055b23f);
    /* 0055b23f: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 0055b241: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b244: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55b249u); f_0055ecb0();
    /* 0055b249: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0055b250: jmp 0x55b25b */ goto L_0055b25b;
L_0055b252:; BB(0x0055b252);
    /* 0055b252: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055b255: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055b258: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0055b25b:; BB(0x0055b25b);
    /* 0055b25b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b25e: call 0x559380 */ r_esp -= 4; W32(r_esp, 0x55b263u); f_00559380();
    /* 0055b263: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055b266: jge 0x55b28e */ if ((fS==fO)) goto L_0055b28e;
L_0055b268:; BB(0x0055b268);
    /* 0055b268: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055b26b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b26e: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 0055b273: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055b274: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b277: call 0x5593d0 */ r_esp -= 4; W32(r_esp, 0x55b27cu); f_005593d0();
    /* 0055b27c: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055b27f: jne 0x55b28c */ if (!fZ) goto L_0055b28c;
L_0055b281:; BB(0x0055b281);
    /* 0055b281: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b284: mov cl, byte ptr [ebp - 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0055b287: mov byte ptr [eax + 0x17], cl */ W8((u32)(r_eax+0x17u), (u8)r_ecx);
    /* 0055b28a: jmp 0x55b28e */ goto L_0055b28e;
L_0055b28c:; BB(0x0055b28c);
    /* 0055b28c: jmp 0x55b252 */ goto L_0055b252;
L_0055b28e:; BB(0x0055b28e);
    /* 0055b28e: jmp 0x55b3ba */ goto L_0055b3ba;
L_0055b293:; BB(0x0055b293);
    /* 0055b293: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b296: call 0x55ec70 */ r_esp -= 4; W32(r_esp, 0x55b29bu); f_0055ec70();
    /* 0055b29b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b29e: call 0x559d00 */ r_esp -= 4; W32(r_esp, 0x55b2a3u); f_00559d00();
    /* 0055b2a3: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055b2a6: jne 0x55b351 */ if (!fZ) goto L_0055b351;
L_0055b2ac:; BB(0x0055b2ac);
    /* 0055b2ac: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055b2ae: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055b2b0: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0055b2b2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b2b5: call 0x55e640 */ r_esp -= 4; W32(r_esp, 0x55b2bau); f_0055e640();
    /* 0055b2ba: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0055b2bd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055b2bf: je 0x55b351 */ if (fZ) goto L_0055b351;
L_0055b2c5:; BB(0x0055b2c5);
    /* 0055b2c5: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 0055b2c7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b2ca: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55b2cfu); f_0055ecb0();
    /* 0055b2cf: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0055b2d6: jmp 0x55b2e1 */ goto L_0055b2e1;
L_0055b2d8:; BB(0x0055b2d8);
    /* 0055b2d8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055b2db: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055b2de: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0055b2e1:; BB(0x0055b2e1);
    /* 0055b2e1: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055b2e5: jge 0x55b300 */ if ((fS==fO)) goto L_0055b300;
L_0055b2e7:; BB(0x0055b2e7);
    /* 0055b2e7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b2ea: add ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055b2ed: movsx edx, byte ptr [ecx + 0x14] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x14u));
    /* 0055b2f1: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055b2f4: jne 0x55b2fe */ if (!fZ) goto L_0055b2fe;
L_0055b2f6:; BB(0x0055b2f6);
    /* 0055b2f6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055b2f9: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0055b2fc: jmp 0x55b300 */ goto L_0055b300;
L_0055b2fe:; BB(0x0055b2fe);
    /* 0055b2fe: jmp 0x55b2d8 */ goto L_0055b2d8;
L_0055b300:; BB(0x0055b300);
    /* 0055b300: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0055b307: jmp 0x55b312 */ goto L_0055b312;
L_0055b309:; BB(0x0055b309);
    /* 0055b309: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055b30c: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055b30f: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0055b312:; BB(0x0055b312);
    /* 0055b312: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b315: call 0x559380 */ r_esp -= 4; W32(r_esp, 0x55b31au); f_00559380();
    /* 0055b31a: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055b31d: jge 0x55b34f */ if ((fS==fO)) goto L_0055b34f;
L_0055b31f:; BB(0x0055b31f);
    /* 0055b31f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055b322: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b325: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 0055b32a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055b32b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b32e: call 0x5593d0 */ r_esp -= 4; W32(r_esp, 0x55b333u); f_005593d0();
    /* 0055b333: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055b336: jne 0x55b34d */ if (!fZ) goto L_0055b34d;
L_0055b338:; BB(0x0055b338);
    /* 0055b338: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b33b: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055b33e: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0055b341: mov byte ptr [edx + 0x14], al */ W8((u32)(r_edx+0x14u), (u8)r_eax);
    /* 0055b344: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055b347: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055b34a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0055b34d:; BB(0x0055b34d);
    /* 0055b34d: jmp 0x55b309 */ goto L_0055b309;
L_0055b34f:; BB(0x0055b34f);
    /* 0055b34f: jmp 0x55b3ba */ goto L_0055b3ba;
L_0055b351:; BB(0x0055b351);
    /* 0055b351: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0055b358: jmp 0x55b363 */ goto L_0055b363;
L_0055b35a:; BB(0x0055b35a);
    /* 0055b35a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055b35d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055b360: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0055b363:; BB(0x0055b363);
    /* 0055b363: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b366: call 0x559380 */ r_esp -= 4; W32(r_esp, 0x55b36bu); f_00559380();
    /* 0055b36b: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055b36e: jge 0x55b3a0 */ if ((fS==fO)) goto L_0055b3a0;
L_0055b370:; BB(0x0055b370);
    /* 0055b370: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055b373: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b376: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 0055b37b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055b37c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b37f: call 0x5593d0 */ r_esp -= 4; W32(r_esp, 0x55b384u); f_005593d0();
    /* 0055b384: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055b387: jne 0x55b39e */ if (!fZ) goto L_0055b39e;
L_0055b389:; BB(0x0055b389);
    /* 0055b389: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b38c: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055b38f: mov cl, byte ptr [ebp - 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0055b392: mov byte ptr [eax + 0x14], cl */ W8((u32)(r_eax+0x14u), (u8)r_ecx);
    /* 0055b395: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055b398: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055b39b: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0055b39e:; BB(0x0055b39e);
    /* 0055b39e: jmp 0x55b35a */ goto L_0055b35a;
L_0055b3a0:; BB(0x0055b3a0);
    /* 0055b3a0: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055b3a4: je 0x55b3b2 */ if (fZ) goto L_0055b3b2;
L_0055b3a6:; BB(0x0055b3a6);
    /* 0055b3a6: push 0x31 */ { u32 v = 0x31u; r_esp -= 4; W32(r_esp, v); }
    /* 0055b3a8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b3ab: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55b3b0u); f_0055ecb0();
    /* 0055b3b0: jmp 0x55b3ba */ goto L_0055b3ba;
L_0055b3b2:; BB(0x0055b3b2);
    /* 0055b3b2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b3b5: call 0x55ec70 */ r_esp -= 4; W32(r_esp, 0x55b3bau); f_0055ec70();
L_0055b3ba:; BB(0x0055b3ba);
    /* 0055b3ba: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0055b3bb: mov esp, ebp */ r_esp = r_ebp;
    /* 0055b3bd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055b3be: ret  */ FN_RET(0x0055a620); r_esp += 4; return;
}

