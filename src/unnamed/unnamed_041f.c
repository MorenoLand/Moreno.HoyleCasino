#include "protos.h"

void f_0041f0a0(void) /* sub_41F0A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041f0a0);
    /* 0041f0a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041f0a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0041f0a3: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041f0a6: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0041f0a9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0041f0b0: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0041f0b7: mov byte ptr [ebp - 0xa], 0 */ W8((u32)(r_ebp+0xfffffff6u), 0x0u);
    /* 0041f0bb: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 0041f0c1: call 0x426420 */ r_esp -= 4; W32(r_esp, 0x41f0c6u); f_00426420();
    /* 0041f0c6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0041f0c8: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041f0cb: setne cl */ r_ecx = (r_ecx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0041f0ce: mov byte ptr [ebp - 9], cl */ W8((u32)(r_ebp+0xfffffff7u), (u8)r_ecx);
    /* 0041f0d1: movzx edx, byte ptr [ebp - 9] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffff7u));
    /* 0041f0d5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041f0d7: je 0x41f192 */ if (fZ) goto L_0041f192;
L_0041f0dd:; BB(0x0041f0dd);
    /* 0041f0dd: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 0041f0e3: call 0x426420 */ r_esp -= 4; W32(r_esp, 0x41f0e8u); f_00426420();
    /* 0041f0e8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0041f0eb: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041f0ef: jl 0x41f100 */ if ((fS!=fO)) goto L_0041f100;
L_0041f0f1:; BB(0x0041f0f1);
    /* 0041f0f1: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041f0f5: jg 0x41f100 */ if ((!fZ&&fS==fO)) goto L_0041f100;
L_0041f0f7:; BB(0x0041f0f7);
    /* 0041f0f7: mov dword ptr [ebp - 0x1c], 1 */ W32((u32)(r_ebp+0xffffffe4u), 0x1u);
    /* 0041f0fe: jmp 0x41f107 */ goto L_0041f107;
L_0041f100:; BB(0x0041f100);
    /* 0041f100: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_0041f107:; BB(0x0041f107);
    /* 0041f107: mov al, byte ptr [ebp - 0x1c] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffe4u))) & 0xffu);
    /* 0041f10a: mov byte ptr [ebp - 0xa], al */ W8((u32)(r_ebp+0xfffffff6u), (u8)r_eax);
    /* 0041f10d: movzx ecx, byte ptr [ebp - 0xa] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffff6u));
    /* 0041f111: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041f113: je 0x41f192 */ if (fZ) goto L_0041f192;
L_0041f115:; BB(0x0041f115);
    /* 0041f115: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041f118: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041f119: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x41f11eu); f_005dcb00();
    /* 0041f11e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041f121: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0041f124: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041f128: je 0x41f192 */ if (fZ) goto L_0041f192;
L_0041f12a:; BB(0x0041f12a);
    /* 0041f12a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041f12d: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x41f132u); f_0063aac0();
    /* 0041f132: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0041f134: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0041f137: cmp dword ptr [ebp - 0x10], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041f13b: je 0x41f159 */ if (fZ) goto L_0041f159;
L_0041f13d:; BB(0x0041f13d);
    /* 0041f13d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041f140: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x41f145u); f_0063aac0();
    /* 0041f145: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0041f147: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0041f14a: cmp dword ptr [ebp - 0x14], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041f14e: je 0x41f159 */ if (fZ) goto L_0041f159;
L_0041f150:; BB(0x0041f150);
    /* 0041f150: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 0041f157: jmp 0x41f160 */ goto L_0041f160;
L_0041f159:; BB(0x0041f159);
    /* 0041f159: mov dword ptr [ebp - 0x20], 1 */ W32((u32)(r_ebp+0xffffffe0u), 0x1u);
L_0041f160:; BB(0x0041f160);
    /* 0041f160: movzx edx, byte ptr [ebp - 0x20] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffe0u));
    /* 0041f164: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041f166: je 0x41f192 */ if (fZ) goto L_0041f192;
L_0041f168:; BB(0x0041f168);
    /* 0041f168: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041f16b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041f16c: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 0041f172: call 0x426670 */ r_esp -= 4; W32(r_esp, 0x41f177u); f_00426670();
    /* 0041f177: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0041f17a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041f17c: je 0x41f192 */ if (fZ) goto L_0041f192;
L_0041f17e:; BB(0x0041f17e);
    /* 0041f17e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041f180: push 0x3106ca */ { u32 v = 0x3106cau; r_esp -= 4; W32(r_esp, v); }
    /* 0041f185: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0041f18b: call 0x5f2b20 */ r_esp -= 4; W32(r_esp, 0x41f190u); f_005f2b20();
    /* 0041f190: jmp 0x41f1a2 */ goto L_0041f1a2;
L_0041f192:; BB(0x0041f192);
    /* 0041f192: push 0x3106ca */ { u32 v = 0x3106cau; r_esp -= 4; W32(r_esp, v); }
    /* 0041f197: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0041f19d: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x41f1a2u); f_005f2ba0();
L_0041f1a2:; BB(0x0041f1a2);
    /* 0041f1a2: mov esp, ebp */ r_esp = r_ebp;
    /* 0041f1a4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041f1a5: ret  */ FN_RET(0x0041f0a0); r_esp += 4; return;
}

void f_0041f1b0(void) /* sub_41F1B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041f1b0);
    /* 0041f1b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041f1b1: mov ebp, esp */ r_ebp = r_esp;
    /* 0041f1b3: sub esp, 0x68 */ {  u32 a = r_esp; u32 b = 0x68u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041f1b6: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0041f1bb: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0041f1bd: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0041f1c0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0041f1c1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0041f1c2: mov dword ptr [ebp - 0x68], ecx */ W32((u32)(r_ebp+0xffffff98u), r_ecx);
    /* 0041f1c5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041f1c7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041f1c9: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x41f1ceu); f_0064c8a0();
    /* 0041f1ce: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041f1d1: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 0041f1d4: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 0041f1d7: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 0041f1da: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0041f1dd: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0041f1e0: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 0041f1e3: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 0041f1ea: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 0041f1f1: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0041f1f4: call 0x41f0a0 */ r_esp -= 4; W32(r_esp, 0x41f1f9u); f_0041f0a0();
    /* 0041f1f9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0041f200: jmp 0x41f20b */ goto L_0041f20b;
L_0041f202:; BB(0x0041f202);
    /* 0041f202: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041f205: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0041f208: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0041f20b:; BB(0x0041f20b);
    /* 0041f20b: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041f20f: jge 0x41f663 */ if ((fS==fO)) goto L_0041f663;
L_0041f215:; BB(0x0041f215);
    /* 0041f215: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041f218: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0041f21b: mov ecx, dword ptr [ecx + eax*4 + 4] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 0041f21f: call 0x420110 */ r_esp -= 4; W32(r_esp, 0x41f224u); f_00420110();
    /* 0041f224: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041f228: je 0x41f2fa */ if (fZ) goto L_0041f2fa;
L_0041f22e:; BB(0x0041f22e);
    /* 0041f22e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041f231: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041f232: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x41f237u); f_005dcb00();
    /* 0041f237: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041f23a: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 0041f23d: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 0041f240: mov cl, byte ptr [eax + 0x4a0] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x4a0u))) & 0xffu);
    /* 0041f246: mov byte ptr [ebp - 0x61], cl */ W8((u32)(r_ebp+0xffffff9fu), (u8)r_ecx);
    /* 0041f249: movzx edx, byte ptr [ebp - 0x61] */ r_edx = (u32)R8((u32)(r_ebp+0xffffff9fu));
    /* 0041f24d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041f24f: je 0x41f2fa */ if (fZ) goto L_0041f2fa;
L_0041f255:; BB(0x0041f255);
    /* 0041f255: mov ecx, dword ptr [0x790354] */ r_ecx = R32((u32)(0x790354u));
    /* 0041f25b: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x41f260u); f_005da7b0();
    /* 0041f260: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0041f263: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041f265: je 0x41f2fa */ if (fZ) goto L_0041f2fa;
L_0041f26b:; BB(0x0041f26b);
    /* 0041f26b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041f26e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041f26f: mov edx, dword ptr [0x790354] */ r_edx = R32((u32)(0x790354u));
    /* 0041f275: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0041f277: mov ecx, dword ptr [0x790354] */ r_ecx = R32((u32)(0x790354u));
    /* 0041f27d: mov edx, dword ptr [eax + 0x2c4] */ r_edx = R32((u32)(r_eax+0x2c4u));
    /* 0041f283: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x41f285u); call_ind(t); }
    /* 0041f285: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0041f288: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041f28a: jne 0x41f2fa */ if (!fZ) goto L_0041f2fa;
L_0041f28c:; BB(0x0041f28c);
    /* 0041f28c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041f28f: shl ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0041f291: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 0041f294: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 0041f29b: jmp 0x41f2a6 */ goto L_0041f2a6;
L_0041f29d:; BB(0x0041f29d);
    /* 0041f29d: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 0041f2a0: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0041f2a3: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
L_0041f2a6:; BB(0x0041f2a6);
    /* 0041f2a6: cmp dword ptr [ebp - 0x54], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffacu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041f2aa: jge 0x41f2fa */ if ((fS==fO)) goto L_0041f2fa;
L_0041f2ac:; BB(0x0041f2ac);
    /* 0041f2ac: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0041f2af: add eax, dword ptr [ebp - 0x54] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffacu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041f2b2: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0041f2b5: mov edx, dword ptr [ecx + eax*4 + 0x18] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x18u));
    /* 0041f2b9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041f2bc: imul eax, eax, 0x1e0 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x1e0u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0041f2c2: cmp dword ptr [edx + eax + 0x17c], 0 */ {  u32 a = R32((u32)(r_edx+r_eax+0x17cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041f2ca: jne 0x41f2f8 */ if (!fZ) goto L_0041f2f8;
L_0041f2cc:; BB(0x0041f2cc);
    /* 0041f2cc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041f2ce: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041f2d1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041f2d2: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0041f2d5: add edx, dword ptr [ebp - 0x54] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffacu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0041f2d8: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0041f2db: mov ecx, dword ptr [eax + edx*4 + 0x18] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x18u));
    /* 0041f2df: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0041f2e2: add edx, dword ptr [ebp - 0x54] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffacu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0041f2e5: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0041f2e8: mov edx, dword ptr [eax + edx*4 + 0x18] */ r_edx = R32((u32)(r_eax+r_edx*4+0x18u));
    /* 0041f2ec: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0041f2ee: mov ecx, edx */ r_ecx = r_edx;
    /* 0041f2f0: mov edx, dword ptr [eax + 0xb8] */ r_edx = R32((u32)(r_eax+0xb8u));
    /* 0041f2f6: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x41f2f8u); call_ind(t); }
L_0041f2f8:; BB(0x0041f2f8);
    /* 0041f2f8: jmp 0x41f29d */ goto L_0041f29d;
L_0041f2fa:; BB(0x0041f2fa);
    /* 0041f2fa: mov eax, dword ptr [0x790358] */ r_eax = R32((u32)(0x790358u));
    /* 0041f2ff: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041f302: mov cl, byte ptr [eax + 0xa9] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0xa9u))) & 0xffu);
    /* 0041f308: mov byte ptr [ebp - 0x62], cl */ W8((u32)(r_ebp+0xffffff9eu), (u8)r_ecx);
    /* 0041f30b: movzx edx, byte ptr [ebp - 0x62] */ r_edx = (u32)R8((u32)(r_ebp+0xffffff9eu));
    /* 0041f30f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041f311: je 0x41f4bd */ if (fZ) goto L_0041f4bd;
L_0041f317:; BB(0x0041f317);
    /* 0041f317: lea eax, [ebp - 0x3c] */ r_eax = (u32)(r_ebp+0xffffffc4u);
    /* 0041f31a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041f31b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041f31d: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0041f31f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041f322: imul ecx, ecx, 0xa */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xau; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0041f325: mov edx, dword ptr [0x790358] */ r_edx = R32((u32)(0x790358u));
    /* 0041f32b: lea eax, [edx + ecx + 0x6c] */ r_eax = (u32)(r_edx+r_ecx+0x6cu);
    /* 0041f32f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041f330: call 0x462ba0 */ r_esp -= 4; W32(r_esp, 0x41f335u); f_00462ba0();
    /* 0041f335: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041f338: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041f339: call 0x462f40 */ r_esp -= 4; W32(r_esp, 0x41f33eu); f_00462f40();
    /* 0041f33e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041f341: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041f345: jne 0x41f38f */ if (!fZ) goto L_0041f38f;
L_0041f347:; BB(0x0041f347);
    /* 0041f347: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 0041f34d: call 0x426e80 */ r_esp -= 4; W32(r_esp, 0x41f352u); f_00426e80();
    /* 0041f352: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0041f355: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041f357: je 0x41f375 */ if (fZ) goto L_0041f375;
L_0041f359:; BB(0x0041f359);
    /* 0041f359: push 0x6b5db4 */ { u32 v = 0x6b5db4u; r_esp -= 4; W32(r_esp, v); }
    /* 0041f35e: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41f363u); f_00630f40();
    /* 0041f363: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041f366: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041f367: lea edx, [ebp - 0x3c] */ r_edx = (u32)(r_ebp+0xffffffc4u);
    /* 0041f36a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041f36b: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x41f370u); f_00686ec6();
    /* 0041f370: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041f373: jmp 0x41f38f */ goto L_0041f38f;
L_0041f375:; BB(0x0041f375);
    /* 0041f375: push 0x6b5d90 */ { u32 v = 0x6b5d90u; r_esp -= 4; W32(r_esp, v); }
    /* 0041f37a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41f37fu); f_00630f40();
    /* 0041f37f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041f382: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041f383: lea eax, [ebp - 0x3c] */ r_eax = (u32)(r_ebp+0xffffffc4u);
    /* 0041f386: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041f387: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x41f38cu); f_00686ec6();
    /* 0041f38c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0041f38f:; BB(0x0041f38f);
    /* 0041f38f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041f391: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041f394: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041f395: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0041f398: call 0x41f8e0 */ r_esp -= 4; W32(r_esp, 0x41f39du); f_0041f8e0();
    /* 0041f39d: mov esi, eax */ r_esi = r_eax;
    /* 0041f39f: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0041f3a1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041f3a4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041f3a5: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0041f3a8: call 0x41f8e0 */ r_esp -= 4; W32(r_esp, 0x41f3adu); f_0041f8e0();
    /* 0041f3ad: mov edi, eax */ r_edi = r_eax;
    /* 0041f3af: add edi, 0x41 */ {  u32 a = r_edi; u32 b = 0x41u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0041f3b2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041f3b4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041f3b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041f3b8: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0041f3bb: call 0x41f8e0 */ r_esp -= 4; W32(r_esp, 0x41f3c0u); f_0041f8e0();
    /* 0041f3c0: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0041f3c2: mov eax, edi */ r_eax = r_edi;
    /* 0041f3c4: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0041f3c5: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0041f3c7: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0041f3c9: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0041f3cb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041f3ce: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 0041f3d1: mov ecx, dword ptr [edx + ecx*4 + 0x64] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x64u));
    /* 0041f3d5: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x41f3dau); f_005f5550();
    /* 0041f3da: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0041f3db: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0041f3dd: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0041f3df: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0041f3e1: mov dword ptr [ebp - 0x40], esi */ W32((u32)(r_ebp+0xffffffc0u), r_esi);
    /* 0041f3e4: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041f3e8: je 0x41f3f0 */ if (fZ) goto L_0041f3f0;
L_0041f3ea:; BB(0x0041f3ea);
    /* 0041f3ea: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041f3ee: jne 0x41f41b */ if (!fZ) goto L_0041f41b;
L_0041f3f0:; BB(0x0041f3f0);
    /* 0041f3f0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041f3f2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041f3f5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041f3f6: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0041f3f9: call 0x41f920 */ r_esp -= 4; W32(r_esp, 0x41f3feu); f_0041f920();
    /* 0041f3fe: mov esi, eax */ r_esi = r_eax;
    /* 0041f400: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041f403: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 0041f406: mov eax, dword ptr [edx + ecx*4 + 4] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 0041f40a: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0041f40d: call 0x5f5590 */ r_esp -= 4; W32(r_esp, 0x41f412u); f_005f5590();
    /* 0041f412: lea ecx, [esi + eax + 6] */ r_ecx = (u32)(r_esi+r_eax+0x6u);
    /* 0041f416: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 0041f419: jmp 0x41f454 */ goto L_0041f454;
L_0041f41b:; BB(0x0041f41b);
    /* 0041f41b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041f41d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041f420: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041f421: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0041f424: call 0x41f920 */ r_esp -= 4; W32(r_esp, 0x41f429u); f_0041f920();
    /* 0041f429: mov esi, eax */ r_esi = r_eax;
    /* 0041f42b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041f42e: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0041f431: mov edx, dword ptr [ecx + eax*4 + 4] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 0041f435: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 0041f438: call 0x5f5590 */ r_esp -= 4; W32(r_esp, 0x41f43du); f_005f5590();
    /* 0041f43d: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0041f43f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041f442: sub eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0041f445: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 0041f447: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 0041f449: and eax, 0xffffffac */ {  u32 a = r_eax; u32 b = 0xffffffacu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0041f44c: add eax, 0x53 */ {  u32 a = r_eax; u32 b = 0x53u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041f44f: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0041f451: mov dword ptr [ebp - 0x50], esi */ W32((u32)(r_ebp+0xffffffb0u), r_esi);
L_0041f454:; BB(0x0041f454);
    /* 0041f454: lea ecx, [ebp - 0x3c] */ r_ecx = (u32)(r_ebp+0xffffffc4u);
    /* 0041f457: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041f458: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041f45b: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0041f45e: mov ecx, dword ptr [eax + edx*4 + 0x64] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x64u));
    /* 0041f462: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041f465: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0041f468: mov edx, dword ptr [eax + edx*4 + 0x64] */ r_edx = R32((u32)(r_eax+r_edx*4+0x64u));
    /* 0041f46c: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0041f46e: mov ecx, edx */ r_ecx = r_edx;
    /* 0041f470: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0041f476: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x41f478u); call_ind(t); }
    /* 0041f478: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 0041f47b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041f47c: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0041f47f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041f480: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041f483: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0041f486: mov ecx, dword ptr [eax + edx*4 + 0x64] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x64u));
    /* 0041f48a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041f48d: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0041f490: mov edx, dword ptr [eax + edx*4 + 0x64] */ r_edx = R32((u32)(r_eax+r_edx*4+0x64u));
    /* 0041f494: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0041f496: mov ecx, edx */ r_ecx = r_edx;
    /* 0041f498: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0041f49b: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x41f49du); call_ind(t); }
    /* 0041f49d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041f4a0: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0041f4a3: mov edx, dword ptr [ecx + eax*4 + 0x64] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x64u));
    /* 0041f4a7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041f4aa: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0041f4ad: mov ecx, dword ptr [ecx + eax*4 + 0x64] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x64u));
    /* 0041f4b1: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0041f4b3: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0041f4b6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x41f4b8u); call_ind(t); }
    /* 0041f4b8: jmp 0x41f65e */ goto L_0041f65e;
L_0041f4bd:; BB(0x0041f4bd);
    /* 0041f4bd: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041f4c1: je 0x41f643 */ if (fZ) goto L_0041f643;
L_0041f4c7:; BB(0x0041f4c7);
    /* 0041f4c7: lea ecx, [ebp - 0x4c] */ r_ecx = (u32)(r_ebp+0xffffffb4u);
    /* 0041f4ca: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041f4cb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041f4ce: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041f4cf: mov eax, dword ptr [0x790354] */ r_eax = R32((u32)(0x790354u));
    /* 0041f4d4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0041f4d6: mov ecx, dword ptr [0x790354] */ r_ecx = R32((u32)(0x790354u));
    /* 0041f4dc: mov eax, dword ptr [edx + 0x27c] */ r_eax = R32((u32)(r_edx+0x27cu));
    /* 0041f4e2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x41f4e4u); call_ind(t); }
    /* 0041f4e4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041f4e7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041f4e8: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 0041f4ee: call 0x426370 */ r_esp -= 4; W32(r_esp, 0x41f4f3u); f_00426370();
    /* 0041f4f3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041f4f5: je 0x41f626 */ if (fZ) goto L_0041f626;
L_0041f4fb:; BB(0x0041f4fb);
    /* 0041f4fb: cmp dword ptr [ebp - 0x4c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041f4ff: jne 0x41f626 */ if (!fZ) goto L_0041f626;
L_0041f505:; BB(0x0041f505);
    /* 0041f505: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041f507: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041f50a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041f50b: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0041f50e: call 0x41f8e0 */ r_esp -= 4; W32(r_esp, 0x41f513u); f_0041f8e0();
    /* 0041f513: mov esi, eax */ r_esi = r_eax;
    /* 0041f515: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0041f517: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041f51a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041f51b: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0041f51e: call 0x41f8e0 */ r_esp -= 4; W32(r_esp, 0x41f523u); f_0041f8e0();
    /* 0041f523: mov edi, eax */ r_edi = r_eax;
    /* 0041f525: add edi, 0x41 */ {  u32 a = r_edi; u32 b = 0x41u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0041f528: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041f52a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041f52d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041f52e: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0041f531: call 0x41f8e0 */ r_esp -= 4; W32(r_esp, 0x41f536u); f_0041f8e0();
    /* 0041f536: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0041f538: mov eax, edi */ r_eax = r_edi;
    /* 0041f53a: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0041f53b: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0041f53d: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0041f53f: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0041f541: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041f544: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0041f547: mov ecx, dword ptr [eax + edx*4 + 0x64] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x64u));
    /* 0041f54b: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x41f550u); f_005f5550();
    /* 0041f550: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0041f551: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0041f553: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0041f555: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0041f557: mov dword ptr [ebp - 0x40], esi */ W32((u32)(r_ebp+0xffffffc0u), r_esi);
    /* 0041f55a: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041f55e: je 0x41f566 */ if (fZ) goto L_0041f566;
L_0041f560:; BB(0x0041f560);
    /* 0041f560: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041f564: jne 0x41f591 */ if (!fZ) goto L_0041f591;
L_0041f566:; BB(0x0041f566);
    /* 0041f566: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041f568: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041f56b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041f56c: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0041f56f: call 0x41f920 */ r_esp -= 4; W32(r_esp, 0x41f574u); f_0041f920();
    /* 0041f574: mov esi, eax */ r_esi = r_eax;
    /* 0041f576: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041f579: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0041f57c: mov ecx, dword ptr [eax + edx*4 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 0041f580: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 0041f583: call 0x5f5590 */ r_esp -= 4; W32(r_esp, 0x41f588u); f_005f5590();
    /* 0041f588: lea edx, [esi + eax + 6] */ r_edx = (u32)(r_esi+r_eax+0x6u);
    /* 0041f58c: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 0041f58f: jmp 0x41f5b8 */ goto L_0041f5b8;
L_0041f591:; BB(0x0041f591);
    /* 0041f591: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041f593: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041f596: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041f597: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0041f59a: call 0x41f920 */ r_esp -= 4; W32(r_esp, 0x41f59fu); f_0041f920();
    /* 0041f59f: mov esi, eax */ r_esi = r_eax;
    /* 0041f5a1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041f5a4: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 0041f5a7: mov eax, dword ptr [edx + ecx*4 + 4] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 0041f5ab: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0041f5ae: call 0x5f5590 */ r_esp -= 4; W32(r_esp, 0x41f5b3u); f_005f5590();
    /* 0041f5b3: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0041f5b5: mov dword ptr [ebp - 0x50], esi */ W32((u32)(r_ebp+0xffffffb0u), r_esi);
L_0041f5b8:; BB(0x0041f5b8);
    /* 0041f5b8: push 0x6b5d78 */ { u32 v = 0x6b5d78u; r_esp -= 4; W32(r_esp, v); }
    /* 0041f5bd: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41f5c2u); f_00630f40();
    /* 0041f5c2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041f5c5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041f5c6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041f5c9: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 0041f5cc: mov eax, dword ptr [edx + ecx*4 + 0x64] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x64u));
    /* 0041f5d0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041f5d3: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 0041f5d6: mov ecx, dword ptr [edx + ecx*4 + 0x64] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x64u));
    /* 0041f5da: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0041f5dc: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0041f5e2: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x41f5e4u); call_ind(t); }
    /* 0041f5e4: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 0041f5e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041f5e8: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0041f5eb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041f5ec: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041f5ef: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0041f5f2: mov ecx, dword ptr [eax + edx*4 + 0x64] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x64u));
    /* 0041f5f6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041f5f9: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0041f5fc: mov edx, dword ptr [eax + edx*4 + 0x64] */ r_edx = R32((u32)(r_eax+r_edx*4+0x64u));
    /* 0041f600: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0041f602: mov ecx, edx */ r_ecx = r_edx;
    /* 0041f604: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0041f607: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x41f609u); call_ind(t); }
    /* 0041f609: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041f60c: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0041f60f: mov edx, dword ptr [ecx + eax*4 + 0x64] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x64u));
    /* 0041f613: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041f616: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0041f619: mov ecx, dword ptr [ecx + eax*4 + 0x64] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x64u));
    /* 0041f61d: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0041f61f: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0041f622: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x41f624u); call_ind(t); }
    /* 0041f624: jmp 0x41f641 */ goto L_0041f641;
L_0041f626:; BB(0x0041f626);
    /* 0041f626: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041f629: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 0041f62c: mov eax, dword ptr [edx + ecx*4 + 0x64] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x64u));
    /* 0041f630: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041f633: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 0041f636: mov ecx, dword ptr [edx + ecx*4 + 0x64] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x64u));
    /* 0041f63a: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0041f63c: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 0041f63f: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x41f641u); call_ind(t); }
L_0041f641:; BB(0x0041f641);
    /* 0041f641: jmp 0x41f65e */ goto L_0041f65e;
L_0041f643:; BB(0x0041f643);
    /* 0041f643: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041f646: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0041f649: mov edx, dword ptr [ecx + eax*4 + 0x64] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x64u));
    /* 0041f64d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041f650: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0041f653: mov ecx, dword ptr [ecx + eax*4 + 0x64] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x64u));
    /* 0041f657: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0041f659: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0041f65c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x41f65eu); call_ind(t); }
L_0041f65e:; BB(0x0041f65e);
    /* 0041f65e: jmp 0x41f202 */ goto L_0041f202;
L_0041f663:; BB(0x0041f663);
    /* 0041f663: mov ecx, dword ptr [0x790354] */ r_ecx = R32((u32)(0x790354u));
    /* 0041f669: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x41f66eu); f_005da7b0();
    /* 0041f66e: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0041f671: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041f673: je 0x41f694 */ if (fZ) goto L_0041f694;
L_0041f675:; BB(0x0041f675);
    /* 0041f675: cmp dword ptr [0x163068c], 0 */ {  u32 a = R32((u32)(0x163068cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041f67c: jne 0x41f694 */ if (!fZ) goto L_0041f694;
L_0041f67e:; BB(0x0041f67e);
    /* 0041f67e: mov edx, dword ptr [0x790354] */ r_edx = R32((u32)(0x790354u));
    /* 0041f684: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0041f686: mov ecx, dword ptr [0x790354] */ r_ecx = R32((u32)(0x790354u));
    /* 0041f68c: mov edx, dword ptr [eax + 0x2f0] */ r_edx = R32((u32)(r_eax+0x2f0u));
    /* 0041f692: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x41f694u); call_ind(t); }
L_0041f694:; BB(0x0041f694);
    /* 0041f694: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041f695: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0041f696: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041f699: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0041f69b: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x41f6a0u); f_00686d72();
    /* 0041f6a0: mov esp, ebp */ r_esp = r_ebp;
    /* 0041f6a2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041f6a3: ret  */ FN_RET(0x0041f1b0); r_esp += 4; return;
}

void f_0041f6b0(void) /* sub_41F6B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041f6b0);
    /* 0041f6b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041f6b1: mov ebp, esp */ r_ebp = r_esp;
    /* 0041f6b3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041f6b6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0041f6b9: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041f6bd: jne 0x41f6c1 */ if (!fZ) goto L_0041f6c1;
L_0041f6bf:; BB(0x0041f6bf);
    /* 0041f6bf: jmp 0x41f70e */ goto L_0041f70e;
L_0041f6c1:; BB(0x0041f6c1);
    /* 0041f6c1: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0041f6c4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041f6c7: cmp dword ptr [ecx + eax*4 + 0x18], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041f6cc: je 0x41f70e */ if (fZ) goto L_0041f70e;
L_0041f6ce:; BB(0x0041f6ce);
    /* 0041f6ce: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041f6d0: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041f6d3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041f6d4: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0041f6d7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041f6da: mov edx, dword ptr [ecx + eax*4 + 0x18] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x18u));
    /* 0041f6de: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0041f6e1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041f6e4: mov ecx, dword ptr [ecx + eax*4 + 0x18] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x18u));
    /* 0041f6e8: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0041f6ea: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 0041f6f0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x41f6f2u); call_ind(t); }
    /* 0041f6f2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041f6f5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041f6f6: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x41f6fbu); f_005dcb00();
    /* 0041f6fb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041f6fe: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0041f701: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041f704: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0041f706: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041f709: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 0041f70c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x41f70eu); call_ind(t); }
L_0041f70e:; BB(0x0041f70e);
    /* 0041f70e: mov esp, ebp */ r_esp = r_ebp;
    /* 0041f710: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041f711: ret 8 */ FN_RET(0x0041f6b0); r_esp += 12; return;
}

void f_0041f720(void) /* sub_41F720 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041f720);
    /* 0041f720: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041f721: mov ebp, esp */ r_ebp = r_esp;
    /* 0041f723: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041f726: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0041f729: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041f72c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041f72f: mov edx, dword ptr [ecx + eax*4 + 4] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 0041f733: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0041f736: mov ecx, dword ptr [edx + eax*4 + 8] */ r_ecx = R32((u32)(r_edx+r_eax*4+0x8u));
    /* 0041f73a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0041f73d: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0041f740: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041f741: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041f744: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041f745: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 0041f74b: call 0x4262e0 */ r_esp -= 4; W32(r_esp, 0x41f750u); f_004262e0();
    /* 0041f750: mov word ptr [ebp - 8], ax */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_eax);
    /* 0041f754: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041f757: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041f758: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041f75b: call 0x41f7f0 */ r_esp -= 4; W32(r_esp, 0x41f760u); f_0041f7f0();
    /* 0041f760: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041f761: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041f764: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x41f769u); f_005eaf00();
    /* 0041f769: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0041f76c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041f76d: mov ax, word ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 0041f771: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041f772: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041f775: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041f776: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041f779: call 0x41f830 */ r_esp -= 4; W32(r_esp, 0x41f77eu); f_0041f830();
    /* 0041f77e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041f77f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041f782: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0041f784: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041f787: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 0041f78d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x41f78fu); call_ind(t); }
    /* 0041f78f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0041f792: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041f793: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041f796: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041f797: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041f79a: call 0x41f920 */ r_esp -= 4; W32(r_esp, 0x41f79fu); f_0041f920();
    /* 0041f79f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041f7a0: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0041f7a3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041f7a4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041f7a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041f7a8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041f7ab: call 0x41f8e0 */ r_esp -= 4; W32(r_esp, 0x41f7b0u); f_0041f8e0();
    /* 0041f7b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041f7b1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041f7b4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0041f7b6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041f7b9: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0041f7bc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x41f7beu); call_ind(t); }
    /* 0041f7be: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0041f7c1: add ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0041f7c4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041f7c5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041f7c8: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0041f7ca: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041f7cd: mov edx, dword ptr [eax + 0x6c] */ r_edx = R32((u32)(r_eax+0x6cu));
    /* 0041f7d0: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x41f7d2u); call_ind(t); }
    /* 0041f7d2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041f7d5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0041f7d7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041f7da: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0041f7dd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x41f7dfu); call_ind(t); }
    /* 0041f7df: mov esp, ebp */ r_esp = r_ebp;
    /* 0041f7e1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041f7e2: ret 8 */ FN_RET(0x0041f720); r_esp += 12; return;
}

void f_0041f7f0(void) /* sub_41F7F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041f7f0);
    /* 0041f7f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041f7f1: mov ebp, esp */ r_ebp = r_esp;
    /* 0041f7f3: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041f7f6: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0041f7f9: mov dword ptr [ebp - 0x14], 0x310e9a */ W32((u32)(r_ebp+0xffffffecu), 0x310e9au);
    /* 0041f800: mov dword ptr [ebp - 0x10], 0x310e9b */ W32((u32)(r_ebp+0xfffffff0u), 0x310e9bu);
    /* 0041f807: mov dword ptr [ebp - 0xc], 0x310e99 */ W32((u32)(r_ebp+0xfffffff4u), 0x310e99u);
    /* 0041f80e: mov dword ptr [ebp - 8], 0x310e9c */ W32((u32)(r_ebp+0xfffffff8u), 0x310e9cu);
    /* 0041f815: mov dword ptr [ebp - 4], 0x310e9d */ W32((u32)(r_ebp+0xfffffffcu), 0x310e9du);
    /* 0041f81c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041f81f: mov eax, dword ptr [ebp + eax*4 - 0x14] */ r_eax = R32((u32)(r_ebp+r_eax*4+0xffffffecu));
    /* 0041f823: mov esp, ebp */ r_esp = r_ebp;
    /* 0041f825: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041f826: ret 4 */ FN_RET(0x0041f7f0); r_esp += 8; return;
}

void f_0041f830(void) /* sub_41F830 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041f830);
    /* 0041f830: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041f831: mov ebp, esp */ r_ebp = r_esp;
    /* 0041f833: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041f836: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0041f837: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0041f83a: mov dword ptr [ebp - 0x14], 0xffffffff */ W32((u32)(r_ebp+0xffffffecu), 0xffffffffu);
    /* 0041f841: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
    /* 0041f848: mov dword ptr [ebp - 0xc], 2 */ W32((u32)(r_ebp+0xfffffff4u), 0x2u);
    /* 0041f84f: mov dword ptr [ebp - 8], 3 */ W32((u32)(r_ebp+0xfffffff8u), 0x3u);
    /* 0041f856: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0041f85d: mov eax, dword ptr [0x790358] */ r_eax = R32((u32)(0x790358u));
    /* 0041f862: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041f865: mov cl, byte ptr [eax + 0xa9] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0xa9u))) & 0xffu);
    /* 0041f86b: mov byte ptr [ebp - 0x15], cl */ W8((u32)(r_ebp+0xffffffebu), (u8)r_ecx);
    /* 0041f86e: movzx edx, byte ptr [ebp - 0x15] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffebu));
    /* 0041f872: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041f874: jne 0x41f889 */ if (!fZ) goto L_0041f889;
L_0041f876:; BB(0x0041f876);
    /* 0041f876: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041f87a: jne 0x41f882 */ if (!fZ) goto L_0041f882;
L_0041f87c:; BB(0x0041f87c);
    /* 0041f87c: cmp dword ptr [ebp + 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041f880: je 0x41f889 */ if (fZ) goto L_0041f889;
L_0041f882:; BB(0x0041f882);
    /* 0041f882: mov eax, 0x35 */ r_eax = 0x35u;
    /* 0041f887: jmp 0x41f8d6 */ goto L_0041f8d6;
L_0041f889:; BB(0x0041f889);
    /* 0041f889: mov ax, word ptr [ebp + 0xc] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 0041f88d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041f88e: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x41f893u); f_00641280();
    /* 0041f893: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041f896: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041f899: jne 0x41f8b1 */ if (!fZ) goto L_0041f8b1;
L_0041f89b:; BB(0x0041f89b);
    /* 0041f89b: mov cx, word ptr [ebp + 0xc] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 0041f89f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041f8a0: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x41f8a5u); f_00641290();
    /* 0041f8a5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041f8a8: mov eax, dword ptr [ebp + eax*4 - 0x14] */ r_eax = R32((u32)(r_ebp+r_eax*4+0xffffffecu));
    /* 0041f8ac: imul eax, eax, 0xd */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xdu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0041f8af: jmp 0x41f8d6 */ goto L_0041f8d6;
L_0041f8b1:; BB(0x0041f8b1);
    /* 0041f8b1: mov dx, word ptr [ebp + 0xc] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 0041f8b5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041f8b6: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x41f8bbu); f_00641290();
    /* 0041f8bb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041f8be: mov esi, dword ptr [ebp + eax*4 - 0x14] */ r_esi = R32((u32)(r_ebp+r_eax*4+0xffffffecu));
    /* 0041f8c2: imul esi, esi, 0xd */ { i64 t = (i64)(i32)r_esi * (i64)(i32)0xdu; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0041f8c5: mov ax, word ptr [ebp + 0xc] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 0041f8c9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041f8ca: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x41f8cfu); f_00641280();
    /* 0041f8cf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041f8d2: lea eax, [esi + eax - 1] */ r_eax = (u32)(r_esi+r_eax+0xffffffffu);
L_0041f8d6:; BB(0x0041f8d6);
    /* 0041f8d6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0041f8d7: mov esp, ebp */ r_esp = r_ebp;
    /* 0041f8d9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041f8da: ret 0xc */ FN_RET(0x0041f830); r_esp += 16; return;
}

void f_0041f8e0(void) /* sub_41F8E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041f8e0);
    /* 0041f8e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041f8e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0041f8e3: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041f8e6: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0041f8e9: mov dword ptr [ebp - 0x14], 0x153 */ W32((u32)(r_ebp+0xffffffecu), 0x153u);
    /* 0041f8f0: mov dword ptr [ebp - 0x10], 0xbb */ W32((u32)(r_ebp+0xfffffff0u), 0xbbu);
    /* 0041f8f7: mov dword ptr [ebp - 0xc], 0x1d5 */ W32((u32)(r_ebp+0xfffffff4u), 0x1d5u);
    /* 0041f8fe: mov dword ptr [ebp - 8], 0x32 */ W32((u32)(r_ebp+0xfffffff8u), 0x32u);
    /* 0041f905: mov dword ptr [ebp - 4], 0x110 */ W32((u32)(r_ebp+0xfffffffcu), 0x110u);
    /* 0041f90c: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0041f90f: imul eax, eax, 0xc */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xcu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0041f912: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041f915: add eax, dword ptr [ebp + ecx*4 - 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+r_ecx*4+0xffffffecu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041f919: mov esp, ebp */ r_esp = r_ebp;
    /* 0041f91b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041f91c: ret 8 */ FN_RET(0x0041f8e0); r_esp += 12; return;
}

void f_0041f920(void) /* sub_41F920 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041f920);
    /* 0041f920: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041f921: mov ebp, esp */ r_ebp = r_esp;
    /* 0041f923: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041f926: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0041f929: mov dword ptr [ebp - 0x14], 0xd1 */ W32((u32)(r_ebp+0xffffffecu), 0xd1u);
    /* 0041f930: mov dword ptr [ebp - 0x10], 0xd3 */ W32((u32)(r_ebp+0xfffffff0u), 0xd3u);
    /* 0041f937: mov dword ptr [ebp - 0xc], 0x9e */ W32((u32)(r_ebp+0xfffffff4u), 0x9eu);
    /* 0041f93e: mov dword ptr [ebp - 8], 0x9e */ W32((u32)(r_ebp+0xfffffff8u), 0x9eu);
    /* 0041f945: mov dword ptr [ebp - 4], 0x76 */ W32((u32)(r_ebp+0xfffffffcu), 0x76u);
    /* 0041f94c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041f94f: mov eax, dword ptr [ebp + eax*4 - 0x14] */ r_eax = R32((u32)(r_ebp+r_eax*4+0xffffffecu));
    /* 0041f953: sub eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0041f956: mov esp, ebp */ r_esp = r_ebp;
    /* 0041f958: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041f959: ret 8 */ FN_RET(0x0041f920); r_esp += 12; return;
}

void f_0041f960(void) /* sub_41F960 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041f960);
    /* 0041f960: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041f961: mov ebp, esp */ r_ebp = r_esp;
    /* 0041f963: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041f964: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0041f967: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041f96a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041f96d: mov edx, dword ptr [ecx + eax*4 + 0x44] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x44u));
    /* 0041f971: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041f974: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041f977: mov ecx, dword ptr [ecx + eax*4 + 0x44] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x44u));
    /* 0041f97b: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0041f97d: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 0041f983: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x41f985u); call_ind(t); }
    /* 0041f985: mov esp, ebp */ r_esp = r_ebp;
    /* 0041f987: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041f988: ret 4 */ FN_RET(0x0041f960); r_esp += 8; return;
}

void f_0041f990(void) /* sub_41F990 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041f990);
    /* 0041f990: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041f991: mov ebp, esp */ r_ebp = r_esp;
    /* 0041f993: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041f994: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0041f997: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041f99a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041f99d: mov edx, dword ptr [ecx + eax*4 + 0x44] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x44u));
    /* 0041f9a1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041f9a4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041f9a7: mov ecx, dword ptr [ecx + eax*4 + 0x44] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x44u));
    /* 0041f9ab: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0041f9ad: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 0041f9b3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x41f9b5u); call_ind(t); }
    /* 0041f9b5: mov esp, ebp */ r_esp = r_ebp;
    /* 0041f9b7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041f9b8: ret 4 */ FN_RET(0x0041f990); r_esp += 8; return;
}

void f_0041f9c0(void) /* sub_41F9C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041f9c0);
    /* 0041f9c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041f9c1: mov ebp, esp */ r_ebp = r_esp;
    /* 0041f9c3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0041f9c5: push 0x69dfbd */ { u32 v = 0x69dfbdu; r_esp -= 4; W32(r_esp, v); }
    /* 0041f9ca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0041f9d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041f9d1: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041f9d4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0041f9d9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0041f9db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041f9dc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0041f9df: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0041f9e5: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0041f9e8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041f9ea: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041f9ed: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0041f9f0: mov edx, dword ptr [ecx + eax*4 + 0x54] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x54u));
    /* 0041f9f4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041f9f7: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0041f9fa: mov ecx, dword ptr [ecx + eax*4 + 0x54] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x54u));
    /* 0041f9fe: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0041fa00: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0041fa06: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x41fa08u); call_ind(t); }
    /* 0041fa08: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041fa0b: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0041fa0e: mov eax, dword ptr [edx + ecx*4 + 0x54] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x54u));
    /* 0041fa12: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041fa15: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0041fa18: mov ecx, dword ptr [edx + ecx*4 + 0x54] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x54u));
    /* 0041fa1c: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0041fa1e: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 0041fa21: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x41fa23u); call_ind(t); }
    /* 0041fa23: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0041fa25: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x41fa2au); f_00686d82();
    /* 0041fa2a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041fa2d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0041fa30: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0041fa37: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041fa3b: je 0x41fa4e */ if (fZ) goto L_0041fa4e;
L_0041fa3d:; BB(0x0041fa3d);
    /* 0041fa3d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041fa3f: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0041fa41: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0041fa44: call 0x600f30 */ r_esp -= 4; W32(r_esp, 0x41fa49u); f_00600f30();
    /* 0041fa49: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0041fa4c: jmp 0x41fa55 */ goto L_0041fa55;
L_0041fa4e:; BB(0x0041fa4e);
    /* 0041fa4e: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_0041fa55:; BB(0x0041fa55);
    /* 0041fa55: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0041fa58: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0041fa5b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0041fa62: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041fa65: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041fa66: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041fa69: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0041fa6c: mov ecx, dword ptr [eax + edx*4 + 0x54] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x54u));
    /* 0041fa70: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x41fa75u); f_005f5d50();
    /* 0041fa75: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041fa77: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041fa78: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0041fa7e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0041fa81: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041fa82: fld1  */ FPUSH(1.0);
    /* 0041fa84: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0041fa87: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041fa89: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0041fa8b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041fa8d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041fa8f: push 0x3106c8 */ { u32 v = 0x3106c8u; r_esp -= 4; W32(r_esp, v); }
    /* 0041fa94: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0041fa9a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0041fa9c: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0041faa2: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 0041faa8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x41faaau); call_ind(t); }
    /* 0041faaa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041faad: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0041fab4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0041fab5: mov esp, ebp */ r_esp = r_ebp;
    /* 0041fab7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041fab8: ret 4 */ FN_RET(0x0041f9c0); r_esp += 8; return;
}

void f_0041fac0(void) /* sub_41FAC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041fac0);
    /* 0041fac0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041fac1: mov ebp, esp */ r_ebp = r_esp;
    /* 0041fac3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041fac4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0041fac7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041fac9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041facc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041facf: mov ecx, dword ptr [ecx + eax*4 + 0x54] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x54u));
    /* 0041fad3: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x41fad8u); f_005f5d50();
    /* 0041fad8: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041fadb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041fade: mov ecx, dword ptr [eax + edx*4 + 0x54] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x54u));
    /* 0041fae2: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041fae5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041fae8: mov edx, dword ptr [eax + edx*4 + 0x54] */ r_edx = R32((u32)(r_eax+r_edx*4+0x54u));
    /* 0041faec: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0041faee: mov ecx, edx */ r_ecx = r_edx;
    /* 0041faf0: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 0041faf3: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x41faf5u); call_ind(t); }
    /* 0041faf5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041faf7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041fafa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041fafd: mov edx, dword ptr [ecx + eax*4 + 0x44] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x44u));
    /* 0041fb01: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041fb04: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041fb07: mov ecx, dword ptr [ecx + eax*4 + 0x44] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x44u));
    /* 0041fb0b: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0041fb0d: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0041fb13: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x41fb15u); call_ind(t); }
    /* 0041fb15: mov esp, ebp */ r_esp = r_ebp;
    /* 0041fb17: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041fb18: ret 4 */ FN_RET(0x0041fac0); r_esp += 8; return;
}

void f_0041fb20(void) /* sub_41FB20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041fb20);
    /* 0041fb20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041fb21: mov ebp, esp */ r_ebp = r_esp;
    /* 0041fb23: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041fb26: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0041fb29: mov eax, dword ptr [0x790358] */ r_eax = R32((u32)(0x790358u));
    /* 0041fb2e: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 0041fb34: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0041fb37: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041fb3a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041fb3b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041fb3e: call 0x41f960 */ r_esp -= 4; W32(r_esp, 0x41fb43u); f_0041f960();
    /* 0041fb43: push 0xaf */ { u32 v = 0xafu; r_esp -= 4; W32(r_esp, v); }
    /* 0041fb48: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041fb4a: mov ecx, dword ptr [0x790354] */ r_ecx = R32((u32)(0x790354u));
    /* 0041fb50: call 0x5db7d0 */ r_esp -= 4; W32(r_esp, 0x41fb55u); f_005db7d0();
    /* 0041fb55: mov esp, ebp */ r_esp = r_ebp;
    /* 0041fb57: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041fb58: ret  */ FN_RET(0x0041fb20); r_esp += 4; return;
}

void f_0041fb60(void) /* sub_41FB60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041fb60);
    /* 0041fb60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041fb61: mov ebp, esp */ r_ebp = r_esp;
    /* 0041fb63: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0041fb65: push 0x69dfe3 */ { u32 v = 0x69dfe3u; r_esp -= 4; W32(r_esp, v); }
    /* 0041fb6a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0041fb70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041fb71: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041fb74: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0041fb79: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0041fb7b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041fb7c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0041fb7f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0041fb85: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0041fb88: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0041fb8b: call 0x41f1b0 */ r_esp -= 4; W32(r_esp, 0x41fb90u); f_0041f1b0();
    /* 0041fb90: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0041fb93: cmp dword ptr [eax + 0x40], 0 */ {  u32 a = R32((u32)(r_eax+0x40u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041fb97: jne 0x41fc05 */ if (!fZ) goto L_0041fc05;
L_0041fb99:; BB(0x0041fb99);
    /* 0041fb99: push 0x1bc */ { u32 v = 0x1bcu; r_esp -= 4; W32(r_esp, v); }
    /* 0041fb9e: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x41fba3u); f_00686d82();
    /* 0041fba3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041fba6: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0041fba9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0041fbb0: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041fbb4: je 0x41fbc3 */ if (fZ) goto L_0041fbc3;
L_0041fbb6:; BB(0x0041fbb6);
    /* 0041fbb6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0041fbb9: call 0x421ed0 */ r_esp -= 4; W32(r_esp, 0x41fbbeu); f_00421ed0();
    /* 0041fbbe: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0041fbc1: jmp 0x41fbca */ goto L_0041fbca;
L_0041fbc3:; BB(0x0041fbc3);
    /* 0041fbc3: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_0041fbca:; BB(0x0041fbca);
    /* 0041fbca: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0041fbcd: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0041fbd0: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0041fbd7: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0041fbda: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041fbdd: mov dword ptr [edx + 0x40], eax */ W32((u32)(r_edx+0x40u), r_eax);
    /* 0041fbe0: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0041fbe3: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 0041fbe6: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0041fbe9: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 0041fbec: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0041fbee: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 0041fbf1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x41fbf3u); call_ind(t); }
    /* 0041fbf3: push 0xb4 */ { u32 v = 0xb4u; r_esp -= 4; W32(r_esp, v); }
    /* 0041fbf8: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0041fbfa: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0041fbfd: mov ecx, dword ptr [ecx + 0x40] */ r_ecx = R32((u32)(r_ecx+0x40u));
    /* 0041fc00: call 0x5f7340 */ r_esp -= 4; W32(r_esp, 0x41fc05u); f_005f7340();
L_0041fc05:; BB(0x0041fc05);
    /* 0041fc05: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0041fc08: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 0041fc0b: call 0x5f85d0 */ r_esp -= 4; W32(r_esp, 0x41fc10u); f_005f85d0();
    /* 0041fc10: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041fc12: push 0x3106cb */ { u32 v = 0x3106cbu; r_esp -= 4; W32(r_esp, v); }
    /* 0041fc17: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0041fc1d: call 0x5f2b20 */ r_esp -= 4; W32(r_esp, 0x41fc22u); f_005f2b20();
    /* 0041fc22: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041fc24: push 0x3106cc */ { u32 v = 0x3106ccu; r_esp -= 4; W32(r_esp, v); }
    /* 0041fc29: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0041fc2f: call 0x5f2b20 */ r_esp -= 4; W32(r_esp, 0x41fc34u); f_005f2b20();
    /* 0041fc34: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041fc37: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0041fc3e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0041fc3f: mov esp, ebp */ r_esp = r_ebp;
    /* 0041fc41: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041fc42: ret  */ FN_RET(0x0041fb60); r_esp += 4; return;
}

void f_0041fc50(void) /* sub_41FC50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041fc50);
    /* 0041fc50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041fc51: mov ebp, esp */ r_ebp = r_esp;
    /* 0041fc53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041fc54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0041fc57: push 0x3106cb */ { u32 v = 0x3106cbu; r_esp -= 4; W32(r_esp, v); }
    /* 0041fc5c: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0041fc62: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x41fc67u); f_005f2ba0();
    /* 0041fc67: push 0x3106cc */ { u32 v = 0x3106ccu; r_esp -= 4; W32(r_esp, v); }
    /* 0041fc6c: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0041fc72: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x41fc77u); f_005f2ba0();
    /* 0041fc77: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041fc7a: cmp dword ptr [eax + 0x40], 0 */ {  u32 a = R32((u32)(r_eax+0x40u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041fc7e: je 0x41fc95 */ if (fZ) goto L_0041fc95;
L_0041fc80:; BB(0x0041fc80);
    /* 0041fc80: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041fc83: mov ecx, dword ptr [ecx + 0x40] */ r_ecx = R32((u32)(r_ecx+0x40u));
    /* 0041fc86: call 0x5f8990 */ r_esp -= 4; W32(r_esp, 0x41fc8bu); f_005f8990();
    /* 0041fc8b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041fc8e: mov dword ptr [edx + 0x40], 0 */ W32((u32)(r_edx+0x40u), 0x0u);
L_0041fc95:; BB(0x0041fc95);
    /* 0041fc95: mov esp, ebp */ r_esp = r_ebp;
    /* 0041fc97: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041fc98: ret  */ FN_RET(0x0041fc50); r_esp += 4; return;
}

void f_0041fca0(void) /* sub_41FCA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041fca0);
    /* 0041fca0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041fca1: mov ebp, esp */ r_ebp = r_esp;
    /* 0041fca3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041fca4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0041fca7: mov ecx, dword ptr [0x790354] */ r_ecx = R32((u32)(0x790354u));
    /* 0041fcad: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x41fcb2u); f_005da7b0();
    /* 0041fcb2: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0041fcb5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041fcb7: je 0x41fcd8 */ if (fZ) goto L_0041fcd8;
L_0041fcb9:; BB(0x0041fcb9);
    /* 0041fcb9: mov ecx, dword ptr [0x790354] */ r_ecx = R32((u32)(0x790354u));
    /* 0041fcbf: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0041fcc1: mov ecx, dword ptr [0x790354] */ r_ecx = R32((u32)(0x790354u));
    /* 0041fcc7: mov eax, dword ptr [edx + 0x2d4] */ r_eax = R32((u32)(r_edx+0x2d4u));
    /* 0041fccd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x41fccfu); call_ind(t); }
    /* 0041fccf: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0041fcd2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041fcd4: jne 0x41fcd8 */ if (!fZ) goto L_0041fcd8;
L_0041fcd6:; BB(0x0041fcd6);
    /* 0041fcd6: jmp 0x41fd15 */ goto L_0041fd15;
L_0041fcd8:; BB(0x0041fcd8);
    /* 0041fcd8: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 0041fcde: call 0x425da0 */ r_esp -= 4; W32(r_esp, 0x41fce3u); f_00425da0();
    /* 0041fce3: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0041fce6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041fce8: jne 0x41fd03 */ if (!fZ) goto L_0041fd03;
L_0041fcea:; BB(0x0041fcea);
    /* 0041fcea: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0041fcf0: call 0x5df650 */ r_esp -= 4; W32(r_esp, 0x41fcf5u); f_005df650();
    /* 0041fcf5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041fcf6: mov ecx, dword ptr [0x79035c] */ r_ecx = R32((u32)(0x79035cu));
    /* 0041fcfc: call 0x422560 */ r_esp -= 4; W32(r_esp, 0x41fd01u); f_00422560();
    /* 0041fd01: jmp 0x41fd15 */ goto L_0041fd15;
L_0041fd03:; BB(0x0041fd03);
    /* 0041fd03: push 0xaa */ { u32 v = 0xaau; r_esp -= 4; W32(r_esp, v); }
    /* 0041fd08: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041fd0a: mov ecx, dword ptr [0x790354] */ r_ecx = R32((u32)(0x790354u));
    /* 0041fd10: call 0x5db8c0 */ r_esp -= 4; W32(r_esp, 0x41fd15u); f_005db8c0();
L_0041fd15:; BB(0x0041fd15);
    /* 0041fd15: mov esp, ebp */ r_esp = r_ebp;
    /* 0041fd17: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041fd18: ret  */ FN_RET(0x0041fca0); r_esp += 4; return;
}

void f_0041fef0(void) /* sub_41FEF0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041fef0);
    /* 0041fef0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041fef1: mov ebp, esp */ r_ebp = r_esp;
    /* 0041fef3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0041fef5: push 0x69e042 */ { u32 v = 0x69e042u; r_esp -= 4; W32(r_esp, v); }
    /* 0041fefa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0041ff00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041ff01: sub esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041ff04: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0041ff09: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0041ff0b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041ff0c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0041ff0f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0041ff15: mov dword ptr [ebp - 0x6c], ecx */ W32((u32)(r_ebp+0xffffff94u), r_ecx);
    /* 0041ff18: mov dword ptr [ebp - 0x50], 0x134 */ W32((u32)(r_ebp+0xffffffb0u), 0x134u);
    /* 0041ff1f: mov dword ptr [ebp - 0x4c], 0x11b */ W32((u32)(r_ebp+0xffffffb4u), 0x11bu);
    /* 0041ff26: mov dword ptr [ebp - 0x48], 0x10a */ W32((u32)(r_ebp+0xffffffb8u), 0x10au);
    /* 0041ff2d: mov dword ptr [ebp - 0x44], 0x11e */ W32((u32)(r_ebp+0xffffffbcu), 0x11eu);
    /* 0041ff34: mov dword ptr [ebp - 0x40], 0x19e */ W32((u32)(r_ebp+0xffffffc0u), 0x19eu);
    /* 0041ff3b: mov dword ptr [ebp - 0x3c], 0xf2 */ W32((u32)(r_ebp+0xffffffc4u), 0xf2u);
    /* 0041ff42: mov dword ptr [ebp - 0x38], 0x84 */ W32((u32)(r_ebp+0xffffffc8u), 0x84u);
    /* 0041ff49: mov dword ptr [ebp - 0x34], 0xe7 */ W32((u32)(r_ebp+0xffffffccu), 0xe7u);
    /* 0041ff50: mov dword ptr [ebp - 0x2c], 0x12f */ W32((u32)(r_ebp+0xffffffd4u), 0x12fu);
    /* 0041ff57: mov dword ptr [ebp - 0x28], 0x154 */ W32((u32)(r_ebp+0xffffffd8u), 0x154u);
    /* 0041ff5e: mov dword ptr [ebp - 0x24], 0xf6 */ W32((u32)(r_ebp+0xffffffdcu), 0xf6u);
    /* 0041ff65: mov dword ptr [ebp - 0x20], 0x17b */ W32((u32)(r_ebp+0xffffffe0u), 0x17bu);
    /* 0041ff6c: mov dword ptr [ebp - 0x1c], 0x1b9 */ W32((u32)(r_ebp+0xffffffe4u), 0x1b9u);
    /* 0041ff73: mov dword ptr [ebp - 0x18], 0x11f */ W32((u32)(r_ebp+0xffffffe8u), 0x11fu);
    /* 0041ff7a: mov dword ptr [ebp - 0x14], 0x23 */ W32((u32)(r_ebp+0xffffffecu), 0x23u);
    /* 0041ff81: mov dword ptr [ebp - 0x10], 0x13c */ W32((u32)(r_ebp+0xfffffff0u), 0x13cu);
    /* 0041ff88: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 0041ff8b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041ff8e: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 0041ff91: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0041ff98: jmp 0x41ffa3 */ goto L_0041ffa3;
L_0041ff9a:; BB(0x0041ff9a);
    /* 0041ff9a: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0041ff9d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0041ffa0: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
L_0041ffa3:; BB(0x0041ffa3);
    /* 0041ffa3: cmp dword ptr [ebp - 0x30], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041ffa7: jge 0x420011 */ if ((fS==fO)) goto L_00420011;
L_0041ffa9:; BB(0x0041ffa9);
    /* 0041ffa9: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 0041ffae: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x41ffb3u); f_00686d82();
    /* 0041ffb3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041ffb6: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 0041ffb9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0041ffc0: cmp dword ptr [ebp - 0x58], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041ffc4: je 0x41ffd3 */ if (fZ) goto L_0041ffd3;
L_0041ffc6:; BB(0x0041ffc6);
    /* 0041ffc6: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0041ffc9: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x41ffceu); f_005eaaf0();
    /* 0041ffce: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 0041ffd1: jmp 0x41ffda */ goto L_0041ffda;
L_0041ffd3:; BB(0x0041ffd3);
    /* 0041ffd3: mov dword ptr [ebp - 0x70], 0 */ W32((u32)(r_ebp+0xffffff90u), 0x0u);
L_0041ffda:; BB(0x0041ffda);
    /* 0041ffda: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 0041ffdd: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 0041ffe0: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0041ffe7: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0041ffea: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 0041ffed: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 0041fff0: mov dword ptr [edx + ecx*4 + 8], eax */ W32((u32)(r_edx+r_ecx*4+0x8u), r_eax);
    /* 0041fff4: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0041fff7: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 0041fffa: mov eax, dword ptr [edx + ecx*4 + 8] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 0041fffe: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00420001: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 00420004: mov ecx, dword ptr [edx + ecx*4 + 8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 00420008: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0042000a: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0042000d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x42000fu); call_ind(t); }
    /* 0042000f: jmp 0x41ff9a */ goto L_0041ff9a;
L_00420011:; BB(0x00420011);
    /* 00420011: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 00420016: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x42001bu); f_00686d82();
    /* 0042001b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042001e: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 00420021: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00420028: cmp dword ptr [ebp - 0x60], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042002c: je 0x42003b */ if (fZ) goto L_0042003b;
L_0042002e:; BB(0x0042002e);
    /* 0042002e: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00420031: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x420036u); f_005eaaf0();
    /* 00420036: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 00420039: jmp 0x420042 */ goto L_00420042;
L_0042003b:; BB(0x0042003b);
    /* 0042003b: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
L_00420042:; BB(0x00420042);
    /* 00420042: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 00420045: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 00420048: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0042004f: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 00420052: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00420055: mov dword ptr [ecx + 0x1c], edx */ W32((u32)(r_ecx+0x1cu), r_edx);
    /* 00420058: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0042005a: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 0042005c: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 0042005f: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00420062: mov edx, dword ptr [ebp + ecx*8 - 0x4c] */ r_edx = R32((u32)(r_ebp+r_ecx*8+0xffffffb4u));
    /* 00420066: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00420067: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 0042006a: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0042006d: mov edx, dword ptr [ebp + ecx*8 - 0x50] */ r_edx = R32((u32)(r_ebp+r_ecx*8+0xffffffb0u));
    /* 00420071: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00420072: push 0x13b2 */ { u32 v = 0x13b2u; r_esp -= 4; W32(r_esp, v); }
    /* 00420077: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 0042007a: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 0042007d: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x420082u); f_005eae80();
    /* 00420082: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 00420087: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x42008cu); f_00686d82();
    /* 0042008c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042008f: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 00420092: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00420099: cmp dword ptr [ebp - 0x68], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff98u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042009d: je 0x4200ac */ if (fZ) goto L_004200ac;
L_0042009f:; BB(0x0042009f);
    /* 0042009f: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 004200a2: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x4200a7u); f_005eaaf0();
    /* 004200a7: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 004200aa: jmp 0x4200b3 */ goto L_004200b3;
L_004200ac:; BB(0x004200ac);
    /* 004200ac: mov dword ptr [ebp - 0x78], 0 */ W32((u32)(r_ebp+0xffffff88u), 0x0u);
L_004200b3:; BB(0x004200b3);
    /* 004200b3: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 004200b6: mov dword ptr [ebp - 0x64], ecx */ W32((u32)(r_ebp+0xffffff9cu), r_ecx);
    /* 004200b9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004200c0: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 004200c3: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 004200c6: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 004200c9: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004200cb: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 004200cd: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 004200d0: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 004200d3: mov eax, dword ptr [ebp + edx*8 - 0x28] */ r_eax = R32((u32)(r_ebp+r_edx*8+0xffffffd8u));
    /* 004200d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004200d8: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 004200db: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 004200de: mov eax, dword ptr [ebp + edx*8 - 0x2c] */ r_eax = R32((u32)(r_ebp+r_edx*8+0xffffffd4u));
    /* 004200e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004200e3: push 0x13b2 */ { u32 v = 0x13b2u; r_esp -= 4; W32(r_esp, v); }
    /* 004200e8: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 004200eb: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 004200ee: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x4200f3u); f_005eae80();
    /* 004200f3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004200f6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004200fd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004200fe: mov esp, ebp */ r_esp = r_ebp;
    /* 00420100: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00420101: ret 4 */ FN_RET(0x0041fef0); r_esp += 8; return;
}

