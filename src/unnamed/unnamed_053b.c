#include "protos.h"

void f_0053b050(void) /* sub_53B050 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053b050);
    /* 0053b050: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053b051: mov ebp, esp */ r_ebp = r_esp;
    /* 0053b053: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053b056: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0053b059: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053b05c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0053b05f: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053b063: je 0x53b077 */ if (fZ) goto L_0053b077;
L_0053b065:; BB(0x0053b065);
    /* 0053b065: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053b069: je 0x53b073 */ if (fZ) goto L_0053b073;
L_0053b06b:; BB(0x0053b06b);
    /* 0053b06b: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053b06f: je 0x53b07e */ if (fZ) goto L_0053b07e;
L_0053b071:; BB(0x0053b071);
    /* 0053b071: jmp 0x53b085 */ goto L_0053b085;
L_0053b073:; BB(0x0053b073);
    /* 0053b073: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0053b075: jmp 0x53b087 */ goto L_0053b087;
L_0053b077:; BB(0x0053b077);
    /* 0053b077: mov eax, 1 */ r_eax = 0x1u;
    /* 0053b07c: jmp 0x53b087 */ goto L_0053b087;
L_0053b07e:; BB(0x0053b07e);
    /* 0053b07e: mov eax, 3 */ r_eax = 0x3u;
    /* 0053b083: jmp 0x53b087 */ goto L_0053b087;
L_0053b085:; BB(0x0053b085);
    /* 0053b085: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0053b087:; BB(0x0053b087);
    /* 0053b087: mov esp, ebp */ r_esp = r_ebp;
    /* 0053b089: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053b08a: ret 4 */ FN_RET(0x0053b050); r_esp += 8; return;
}

void f_0053b090(void) /* sub_53B090 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053b090);
    /* 0053b090: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053b091: mov ebp, esp */ r_ebp = r_esp;
    /* 0053b093: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053b096: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0053b099: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0053b0a0: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0053b0a7: mov byte ptr [ebp - 0xa], 0 */ W8((u32)(r_ebp+0xfffffff6u), 0x0u);
    /* 0053b0ab: mov ecx, dword ptr [0x7933ec] */ r_ecx = R32((u32)(0x7933ecu));
    /* 0053b0b1: call 0x540d00 */ r_esp -= 4; W32(r_esp, 0x53b0b6u); f_00540d00();
    /* 0053b0b6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0053b0b8: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053b0bb: setne cl */ r_ecx = (r_ecx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0053b0be: mov byte ptr [ebp - 9], cl */ W8((u32)(r_ebp+0xfffffff7u), (u8)r_ecx);
    /* 0053b0c1: movzx edx, byte ptr [ebp - 9] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffff7u));
    /* 0053b0c5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053b0c7: je 0x53b182 */ if (fZ) goto L_0053b182;
L_0053b0cd:; BB(0x0053b0cd);
    /* 0053b0cd: mov ecx, dword ptr [0x7933ec] */ r_ecx = R32((u32)(0x7933ecu));
    /* 0053b0d3: call 0x540d00 */ r_esp -= 4; W32(r_esp, 0x53b0d8u); f_00540d00();
    /* 0053b0d8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0053b0db: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053b0df: jl 0x53b0f0 */ if ((fS!=fO)) goto L_0053b0f0;
L_0053b0e1:; BB(0x0053b0e1);
    /* 0053b0e1: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053b0e5: jg 0x53b0f0 */ if ((!fZ&&fS==fO)) goto L_0053b0f0;
L_0053b0e7:; BB(0x0053b0e7);
    /* 0053b0e7: mov dword ptr [ebp - 0x1c], 1 */ W32((u32)(r_ebp+0xffffffe4u), 0x1u);
    /* 0053b0ee: jmp 0x53b0f7 */ goto L_0053b0f7;
L_0053b0f0:; BB(0x0053b0f0);
    /* 0053b0f0: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_0053b0f7:; BB(0x0053b0f7);
    /* 0053b0f7: mov al, byte ptr [ebp - 0x1c] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffe4u))) & 0xffu);
    /* 0053b0fa: mov byte ptr [ebp - 0xa], al */ W8((u32)(r_ebp+0xfffffff6u), (u8)r_eax);
    /* 0053b0fd: movzx ecx, byte ptr [ebp - 0xa] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffff6u));
    /* 0053b101: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053b103: je 0x53b182 */ if (fZ) goto L_0053b182;
L_0053b105:; BB(0x0053b105);
    /* 0053b105: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053b108: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053b109: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x53b10eu); f_005dcb00();
    /* 0053b10e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053b111: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0053b114: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053b118: je 0x53b182 */ if (fZ) goto L_0053b182;
L_0053b11a:; BB(0x0053b11a);
    /* 0053b11a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0053b11d: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x53b122u); f_0063aac0();
    /* 0053b122: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0053b124: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0053b127: cmp dword ptr [ebp - 0x10], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053b12b: je 0x53b149 */ if (fZ) goto L_0053b149;
L_0053b12d:; BB(0x0053b12d);
    /* 0053b12d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0053b130: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x53b135u); f_0063aac0();
    /* 0053b135: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0053b137: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0053b13a: cmp dword ptr [ebp - 0x14], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053b13e: je 0x53b149 */ if (fZ) goto L_0053b149;
L_0053b140:; BB(0x0053b140);
    /* 0053b140: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 0053b147: jmp 0x53b150 */ goto L_0053b150;
L_0053b149:; BB(0x0053b149);
    /* 0053b149: mov dword ptr [ebp - 0x20], 1 */ W32((u32)(r_ebp+0xffffffe0u), 0x1u);
L_0053b150:; BB(0x0053b150);
    /* 0053b150: movzx edx, byte ptr [ebp - 0x20] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffe0u));
    /* 0053b154: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053b156: je 0x53b182 */ if (fZ) goto L_0053b182;
L_0053b158:; BB(0x0053b158);
    /* 0053b158: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053b15b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053b15c: mov ecx, dword ptr [0x7933ec] */ r_ecx = R32((u32)(0x7933ecu));
    /* 0053b162: call 0x540e80 */ r_esp -= 4; W32(r_esp, 0x53b167u); f_00540e80();
    /* 0053b167: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0053b16a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053b16c: je 0x53b182 */ if (fZ) goto L_0053b182;
L_0053b16e:; BB(0x0053b16e);
    /* 0053b16e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0053b170: push 0x310e9a */ { u32 v = 0x310e9au; r_esp -= 4; W32(r_esp, v); }
    /* 0053b175: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0053b17b: call 0x5f2b20 */ r_esp -= 4; W32(r_esp, 0x53b180u); f_005f2b20();
    /* 0053b180: jmp 0x53b192 */ goto L_0053b192;
L_0053b182:; BB(0x0053b182);
    /* 0053b182: push 0x310e9a */ { u32 v = 0x310e9au; r_esp -= 4; W32(r_esp, v); }
    /* 0053b187: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0053b18d: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x53b192u); f_005f2ba0();
L_0053b192:; BB(0x0053b192);
    /* 0053b192: mov esp, ebp */ r_esp = r_ebp;
    /* 0053b194: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053b195: ret  */ FN_RET(0x0053b090); r_esp += 4; return;
}

void f_0053b1a0(void) /* sub_53B1A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053b1a0);
    /* 0053b1a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053b1a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0053b1a3: sub esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053b1a6: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0053b1ab: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0053b1ad: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0053b1b0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0053b1b1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0053b1b2: mov dword ptr [ebp - 0x5c], ecx */ W32((u32)(r_ebp+0xffffffa4u), r_ecx);
    /* 0053b1b5: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 0053b1bc: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 0053b1c3: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0053b1c6: call 0x53b090 */ r_esp -= 4; W32(r_esp, 0x53b1cbu); f_0053b090();
    /* 0053b1cb: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 0053b1d2: jmp 0x53b1dd */ goto L_0053b1dd;
L_0053b1d4:; BB(0x0053b1d4);
    /* 0053b1d4: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0053b1d7: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0053b1da: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
L_0053b1dd:; BB(0x0053b1dd);
    /* 0053b1dd: cmp dword ptr [ebp - 0x3c], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053b1e1: jge 0x53b2a7 */ if ((fS==fO)) goto L_0053b2a7;
L_0053b1e7:; BB(0x0053b1e7);
    /* 0053b1e7: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0053b1ea: imul ecx, ecx, 3 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x3u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0053b1ed: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 0053b1f0: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 0053b1f7: jmp 0x53b202 */ goto L_0053b202;
L_0053b1f9:; BB(0x0053b1f9);
    /* 0053b1f9: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0053b1fc: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0053b1ff: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
L_0053b202:; BB(0x0053b202);
    /* 0053b202: cmp dword ptr [ebp - 0x50], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffb0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053b206: jge 0x53b2a2 */ if ((fS==fO)) goto L_0053b2a2;
L_0053b20c:; BB(0x0053b20c);
    /* 0053b20c: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0053b20f: add eax, dword ptr [ebp - 0x50] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffb0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0053b212: mov ecx, dword ptr [0x7933ec] */ r_ecx = R32((u32)(0x7933ecu));
    /* 0053b218: mov edx, dword ptr [ecx + eax*4 + 0x98] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x98u));
    /* 0053b21f: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 0053b222: cmp dword ptr [ebp - 0x44], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053b226: je 0x53b27c */ if (fZ) goto L_0053b27c;
L_0053b228:; BB(0x0053b228);
    /* 0053b228: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0053b22b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053b22c: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0053b22f: call 0x53b050 */ r_esp -= 4; W32(r_esp, 0x53b234u); f_0053b050();
    /* 0053b234: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053b235: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0053b238: add ecx, dword ptr [ebp - 0x50] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffb0u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0053b23b: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0053b23e: mov eax, dword ptr [edx + ecx*4 + 0x50] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x50u));
    /* 0053b242: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0053b245: add ecx, dword ptr [ebp - 0x50] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffb0u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0053b248: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0053b24b: mov ecx, dword ptr [edx + ecx*4 + 0x50] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x50u));
    /* 0053b24f: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0053b251: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 0053b257: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x53b259u); call_ind(t); }
    /* 0053b259: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0053b25c: add eax, dword ptr [ebp - 0x50] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffb0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0053b25f: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0053b262: mov edx, dword ptr [ecx + eax*4 + 0x50] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x50u));
    /* 0053b266: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0053b269: add eax, dword ptr [ebp - 0x50] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffb0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0053b26c: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0053b26f: mov ecx, dword ptr [ecx + eax*4 + 0x50] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x50u));
    /* 0053b273: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0053b275: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0053b278: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53b27au); call_ind(t); }
    /* 0053b27a: jmp 0x53b29d */ goto L_0053b29d;
L_0053b27c:; BB(0x0053b27c);
    /* 0053b27c: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0053b27f: add ecx, dword ptr [ebp - 0x50] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffb0u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0053b282: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0053b285: mov eax, dword ptr [edx + ecx*4 + 0x50] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x50u));
    /* 0053b289: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0053b28c: add ecx, dword ptr [ebp - 0x50] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffb0u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0053b28f: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0053b292: mov ecx, dword ptr [edx + ecx*4 + 0x50] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x50u));
    /* 0053b296: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0053b298: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 0053b29b: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x53b29du); call_ind(t); }
L_0053b29d:; BB(0x0053b29d);
    /* 0053b29d: jmp 0x53b1f9 */ goto L_0053b1f9;
L_0053b2a2:; BB(0x0053b2a2);
    /* 0053b2a2: jmp 0x53b1d4 */ goto L_0053b1d4;
L_0053b2a7:; BB(0x0053b2a7);
    /* 0053b2a7: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 0053b2ae: jmp 0x53b2b9 */ goto L_0053b2b9;
L_0053b2b0:; BB(0x0053b2b0);
    /* 0053b2b0: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0053b2b3: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0053b2b6: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
L_0053b2b9:; BB(0x0053b2b9);
    /* 0053b2b9: cmp dword ptr [ebp - 0x3c], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053b2bd: jge 0x53b6ac */ if ((fS==fO)) goto L_0053b6ac;
L_0053b2c3:; BB(0x0053b2c3);
    /* 0053b2c3: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0053b2c6: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0053b2c9: mov ecx, dword ptr [edx + ecx*4 + 4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 0053b2cd: call 0x53bd00 */ r_esp -= 4; W32(r_esp, 0x53b2d2u); f_0053bd00();
    /* 0053b2d2: cmp dword ptr [ebp - 0x3c], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053b2d6: je 0x53b3a6 */ if (fZ) goto L_0053b3a6;
L_0053b2dc:; BB(0x0053b2dc);
    /* 0053b2dc: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0053b2df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053b2e0: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x53b2e5u); f_005dcb00();
    /* 0053b2e5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053b2e8: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 0053b2eb: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0053b2ee: mov dl, byte ptr [ecx + 0x4a0] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x4a0u))) & 0xffu);
    /* 0053b2f4: mov byte ptr [ebp - 0x55], dl */ W8((u32)(r_ebp+0xffffffabu), (u8)r_edx);
    /* 0053b2f7: movzx eax, byte ptr [ebp - 0x55] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffabu));
    /* 0053b2fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053b2fd: je 0x53b3a6 */ if (fZ) goto L_0053b3a6;
L_0053b303:; BB(0x0053b303);
    /* 0053b303: mov ecx, dword ptr [0x7933e8] */ r_ecx = R32((u32)(0x7933e8u));
    /* 0053b309: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x53b30eu); f_005da7b0();
    /* 0053b30e: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0053b311: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053b313: je 0x53b3a6 */ if (fZ) goto L_0053b3a6;
L_0053b319:; BB(0x0053b319);
    /* 0053b319: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0053b31c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053b31d: mov eax, dword ptr [0x7933e8] */ r_eax = R32((u32)(0x7933e8u));
    /* 0053b322: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0053b324: mov ecx, dword ptr [0x7933e8] */ r_ecx = R32((u32)(0x7933e8u));
    /* 0053b32a: mov eax, dword ptr [edx + 0x2c4] */ r_eax = R32((u32)(r_edx+0x2c4u));
    /* 0053b330: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53b332u); call_ind(t); }
    /* 0053b332: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0053b335: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053b337: jne 0x53b3a6 */ if (!fZ) goto L_0053b3a6;
L_0053b339:; BB(0x0053b339);
    /* 0053b339: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0053b33c: imul edx, edx, 3 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x3u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0053b33f: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 0053b342: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 0053b349: jmp 0x53b354 */ goto L_0053b354;
L_0053b34b:; BB(0x0053b34b);
    /* 0053b34b: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 0053b34e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0053b351: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
L_0053b354:; BB(0x0053b354);
    /* 0053b354: cmp dword ptr [ebp - 0x50], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffb0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053b358: jge 0x53b3a6 */ if ((fS==fO)) goto L_0053b3a6;
L_0053b35a:; BB(0x0053b35a);
    /* 0053b35a: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0053b35d: add ecx, dword ptr [ebp - 0x50] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffb0u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0053b360: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0053b363: mov eax, dword ptr [edx + ecx*4 + 0x18] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x18u));
    /* 0053b367: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0053b36a: imul ecx, ecx, 0x1e0 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x1e0u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0053b370: cmp dword ptr [eax + ecx + 0x17c], 0 */ {  u32 a = R32((u32)(r_eax+r_ecx+0x17cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053b378: jne 0x53b3a4 */ if (!fZ) goto L_0053b3a4;
L_0053b37a:; BB(0x0053b37a);
    /* 0053b37a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053b37c: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0053b37f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053b380: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0053b383: add eax, dword ptr [ebp - 0x50] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffb0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0053b386: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0053b389: mov edx, dword ptr [ecx + eax*4 + 0x18] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x18u));
    /* 0053b38d: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0053b390: add eax, dword ptr [ebp - 0x50] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffb0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0053b393: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0053b396: mov ecx, dword ptr [ecx + eax*4 + 0x18] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x18u));
    /* 0053b39a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0053b39c: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 0053b3a2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53b3a4u); call_ind(t); }
L_0053b3a4:; BB(0x0053b3a4);
    /* 0053b3a4: jmp 0x53b34b */ goto L_0053b34b;
L_0053b3a6:; BB(0x0053b3a6);
    /* 0053b3a6: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0053b3a9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053b3aa: mov ecx, dword ptr [0x7933ec] */ r_ecx = R32((u32)(0x7933ecu));
    /* 0053b3b0: call 0x540c90 */ r_esp -= 4; W32(r_esp, 0x53b3b5u); f_00540c90();
    /* 0053b3b5: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0053b3b8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053b3ba: je 0x53b559 */ if (fZ) goto L_0053b559;
L_0053b3c0:; BB(0x0053b3c0);
    /* 0053b3c0: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 0053b3c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053b3c4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053b3c6: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0053b3c8: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0053b3cb: imul ecx, ecx, 6 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x6u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0053b3ce: mov edx, dword ptr [0x7933ec] */ r_edx = R32((u32)(0x7933ecu));
    /* 0053b3d4: lea eax, [edx + ecx + 0xc8] */ r_eax = (u32)(r_edx+r_ecx+0xc8u);
    /* 0053b3db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053b3dc: call 0x462ba0 */ r_esp -= 4; W32(r_esp, 0x53b3e1u); f_00462ba0();
    /* 0053b3e1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053b3e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053b3e5: call 0x462f40 */ r_esp -= 4; W32(r_esp, 0x53b3eau); f_00462f40();
    /* 0053b3ea: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053b3ed: cmp dword ptr [ebp - 0x3c], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053b3f1: jne 0x53b43b */ if (!fZ) goto L_0053b43b;
L_0053b3f3:; BB(0x0053b3f3);
    /* 0053b3f3: mov ecx, dword ptr [0x7933ec] */ r_ecx = R32((u32)(0x7933ecu));
    /* 0053b3f9: call 0x541790 */ r_esp -= 4; W32(r_esp, 0x53b3feu); f_00541790();
    /* 0053b3fe: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0053b401: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053b403: je 0x53b421 */ if (fZ) goto L_0053b421;
L_0053b405:; BB(0x0053b405);
    /* 0053b405: push 0x6c5bb8 */ { u32 v = 0x6c5bb8u; r_esp -= 4; W32(r_esp, v); }
    /* 0053b40a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x53b40fu); f_00630f40();
    /* 0053b40f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053b412: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053b413: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 0053b416: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053b417: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x53b41cu); f_00686ec6();
    /* 0053b41c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053b41f: jmp 0x53b43b */ goto L_0053b43b;
L_0053b421:; BB(0x0053b421);
    /* 0053b421: push 0x6c5b94 */ { u32 v = 0x6c5b94u; r_esp -= 4; W32(r_esp, v); }
    /* 0053b426: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x53b42bu); f_00630f40();
    /* 0053b42b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053b42e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053b42f: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 0053b432: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053b433: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x53b438u); f_00686ec6();
    /* 0053b438: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0053b43b:; BB(0x0053b43b);
    /* 0053b43b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053b43d: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0053b440: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053b441: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0053b444: call 0x53b8f0 */ r_esp -= 4; W32(r_esp, 0x53b449u); f_0053b8f0();
    /* 0053b449: mov esi, eax */ r_esi = r_eax;
    /* 0053b44b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0053b44d: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0053b450: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053b451: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0053b454: call 0x53b8f0 */ r_esp -= 4; W32(r_esp, 0x53b459u); f_0053b8f0();
    /* 0053b459: mov edi, eax */ r_edi = r_eax;
    /* 0053b45b: add edi, 0x23 */ {  u32 a = r_edi; u32 b = 0x23u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0053b45e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053b460: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0053b463: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053b464: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0053b467: call 0x53b8f0 */ r_esp -= 4; W32(r_esp, 0x53b46cu); f_0053b8f0();
    /* 0053b46c: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0053b46e: mov eax, edi */ r_eax = r_edi;
    /* 0053b470: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0053b471: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0053b473: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0053b475: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0053b477: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0053b47a: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0053b47d: mov ecx, dword ptr [edx + ecx*4 + 0x80] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x80u));
    /* 0053b484: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x53b489u); f_005f5550();
    /* 0053b489: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0053b48a: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0053b48c: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0053b48e: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0053b490: mov dword ptr [ebp - 0x40], esi */ W32((u32)(r_ebp+0xffffffc0u), r_esi);
    /* 0053b493: cmp dword ptr [ebp - 0x3c], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053b497: jne 0x53b4c4 */ if (!fZ) goto L_0053b4c4;
L_0053b499:; BB(0x0053b499);
    /* 0053b499: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053b49b: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0053b49e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053b49f: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0053b4a2: call 0x53b930 */ r_esp -= 4; W32(r_esp, 0x53b4a7u); f_0053b930();
    /* 0053b4a7: mov esi, eax */ r_esi = r_eax;
    /* 0053b4a9: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0053b4ac: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0053b4af: mov eax, dword ptr [edx + ecx*4 + 4] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 0053b4b3: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0053b4b6: call 0x5f5590 */ r_esp -= 4; W32(r_esp, 0x53b4bbu); f_005f5590();
    /* 0053b4bb: lea ecx, [esi + eax - 0x44] */ r_ecx = (u32)(r_esi+r_eax+0xffffffbcu);
    /* 0053b4bf: mov dword ptr [ebp - 0x60], ecx */ W32((u32)(r_ebp+0xffffffa0u), r_ecx);
    /* 0053b4c2: jmp 0x53b4d8 */ goto L_0053b4d8;
L_0053b4c4:; BB(0x0053b4c4);
    /* 0053b4c4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053b4c6: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0053b4c9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053b4ca: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0053b4cd: call 0x53b930 */ r_esp -= 4; W32(r_esp, 0x53b4d2u); f_0053b930();
    /* 0053b4d2: sub eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0053b4d5: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
L_0053b4d8:; BB(0x0053b4d8);
    /* 0053b4d8: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 0053b4db: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0053b4de: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 0053b4e1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053b4e2: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0053b4e5: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 0053b4e8: mov ecx, dword ptr [eax + edx*4 + 0x80] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x80u));
    /* 0053b4ef: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0053b4f2: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 0053b4f5: mov edx, dword ptr [eax + edx*4 + 0x80] */ r_edx = R32((u32)(r_eax+r_edx*4+0x80u));
    /* 0053b4fc: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0053b4fe: mov ecx, edx */ r_ecx = r_edx;
    /* 0053b500: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0053b506: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x53b508u); call_ind(t); }
    /* 0053b508: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0053b50b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053b50c: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0053b50f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053b510: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0053b513: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 0053b516: mov ecx, dword ptr [eax + edx*4 + 0x80] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x80u));
    /* 0053b51d: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0053b520: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 0053b523: mov edx, dword ptr [eax + edx*4 + 0x80] */ r_edx = R32((u32)(r_eax+r_edx*4+0x80u));
    /* 0053b52a: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0053b52c: mov ecx, edx */ r_ecx = r_edx;
    /* 0053b52e: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0053b531: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x53b533u); call_ind(t); }
    /* 0053b533: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0053b536: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0053b539: mov edx, dword ptr [ecx + eax*4 + 0x80] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x80u));
    /* 0053b540: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0053b543: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0053b546: mov ecx, dword ptr [ecx + eax*4 + 0x80] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x80u));
    /* 0053b54d: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0053b54f: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0053b552: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53b554u); call_ind(t); }
    /* 0053b554: jmp 0x53b6a7 */ goto L_0053b6a7;
L_0053b559:; BB(0x0053b559);
    /* 0053b559: cmp dword ptr [ebp - 0x3c], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053b55d: je 0x53b686 */ if (fZ) goto L_0053b686;
L_0053b563:; BB(0x0053b563);
    /* 0053b563: mov ecx, dword ptr [0x7933ec] */ r_ecx = R32((u32)(0x7933ecu));
    /* 0053b569: add ecx, dword ptr [ebp - 0x3c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffc4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0053b56c: movzx edx, byte ptr [ecx + 0xf6] */ r_edx = (u32)R8((u32)(r_ecx+0xf6u));
    /* 0053b573: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053b575: je 0x53b663 */ if (fZ) goto L_0053b663;
L_0053b57b:; BB(0x0053b57b);
    /* 0053b57b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053b57d: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0053b580: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053b581: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0053b584: call 0x53b8f0 */ r_esp -= 4; W32(r_esp, 0x53b589u); f_0053b8f0();
    /* 0053b589: mov esi, eax */ r_esi = r_eax;
    /* 0053b58b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0053b58d: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0053b590: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053b591: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0053b594: call 0x53b8f0 */ r_esp -= 4; W32(r_esp, 0x53b599u); f_0053b8f0();
    /* 0053b599: mov edi, eax */ r_edi = r_eax;
    /* 0053b59b: add edi, 0x23 */ {  u32 a = r_edi; u32 b = 0x23u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0053b59e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053b5a0: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0053b5a3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053b5a4: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0053b5a7: call 0x53b8f0 */ r_esp -= 4; W32(r_esp, 0x53b5acu); f_0053b8f0();
    /* 0053b5ac: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0053b5ae: mov eax, edi */ r_eax = r_edi;
    /* 0053b5b0: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0053b5b1: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0053b5b3: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0053b5b5: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0053b5b7: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0053b5ba: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0053b5bd: mov ecx, dword ptr [ecx + eax*4 + 0x80] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x80u));
    /* 0053b5c4: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x53b5c9u); f_005f5550();
    /* 0053b5c9: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0053b5ca: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0053b5cc: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0053b5ce: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0053b5d0: mov dword ptr [ebp - 0x40], esi */ W32((u32)(r_ebp+0xffffffc0u), r_esi);
    /* 0053b5d3: push 0x6c5b7c */ { u32 v = 0x6c5b7cu; r_esp -= 4; W32(r_esp, v); }
    /* 0053b5d8: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x53b5ddu); f_00630f40();
    /* 0053b5dd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053b5e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053b5e1: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0053b5e4: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 0053b5e7: mov ecx, dword ptr [eax + edx*4 + 0x80] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x80u));
    /* 0053b5ee: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0053b5f1: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 0053b5f4: mov edx, dword ptr [eax + edx*4 + 0x80] */ r_edx = R32((u32)(r_eax+r_edx*4+0x80u));
    /* 0053b5fb: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0053b5fd: mov ecx, edx */ r_ecx = r_edx;
    /* 0053b5ff: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0053b605: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x53b607u); call_ind(t); }
    /* 0053b607: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053b609: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0053b60c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053b60d: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0053b610: call 0x53b930 */ r_esp -= 4; W32(r_esp, 0x53b615u); f_0053b930();
    /* 0053b615: sub eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0053b618: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053b619: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0053b61c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053b61d: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0053b620: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 0053b623: mov ecx, dword ptr [eax + edx*4 + 0x80] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x80u));
    /* 0053b62a: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0053b62d: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 0053b630: mov edx, dword ptr [eax + edx*4 + 0x80] */ r_edx = R32((u32)(r_eax+r_edx*4+0x80u));
    /* 0053b637: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0053b639: mov ecx, edx */ r_ecx = r_edx;
    /* 0053b63b: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0053b63e: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x53b640u); call_ind(t); }
    /* 0053b640: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0053b643: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0053b646: mov edx, dword ptr [ecx + eax*4 + 0x80] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x80u));
    /* 0053b64d: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0053b650: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0053b653: mov ecx, dword ptr [ecx + eax*4 + 0x80] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x80u));
    /* 0053b65a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0053b65c: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0053b65f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53b661u); call_ind(t); }
    /* 0053b661: jmp 0x53b684 */ goto L_0053b684;
L_0053b663:; BB(0x0053b663);
    /* 0053b663: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0053b666: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0053b669: mov eax, dword ptr [edx + ecx*4 + 0x80] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x80u));
    /* 0053b670: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0053b673: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0053b676: mov ecx, dword ptr [edx + ecx*4 + 0x80] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x80u));
    /* 0053b67d: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0053b67f: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 0053b682: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x53b684u); call_ind(t); }
L_0053b684:; BB(0x0053b684);
    /* 0053b684: jmp 0x53b6a7 */ goto L_0053b6a7;
L_0053b686:; BB(0x0053b686);
    /* 0053b686: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0053b689: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0053b68c: mov edx, dword ptr [ecx + eax*4 + 0x80] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x80u));
    /* 0053b693: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0053b696: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0053b699: mov ecx, dword ptr [ecx + eax*4 + 0x80] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x80u));
    /* 0053b6a0: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0053b6a2: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0053b6a5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53b6a7u); call_ind(t); }
L_0053b6a7:; BB(0x0053b6a7);
    /* 0053b6a7: jmp 0x53b2b0 */ goto L_0053b2b0;
L_0053b6ac:; BB(0x0053b6ac);
    /* 0053b6ac: mov ecx, dword ptr [0x7933e8] */ r_ecx = R32((u32)(0x7933e8u));
    /* 0053b6b2: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x53b6b7u); f_005da7b0();
    /* 0053b6b7: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0053b6ba: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053b6bc: je 0x53b6dd */ if (fZ) goto L_0053b6dd;
L_0053b6be:; BB(0x0053b6be);
    /* 0053b6be: cmp dword ptr [0x163068c], 0 */ {  u32 a = R32((u32)(0x163068cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053b6c5: jne 0x53b6dd */ if (!fZ) goto L_0053b6dd;
L_0053b6c7:; BB(0x0053b6c7);
    /* 0053b6c7: mov edx, dword ptr [0x7933e8] */ r_edx = R32((u32)(0x7933e8u));
    /* 0053b6cd: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0053b6cf: mov ecx, dword ptr [0x7933e8] */ r_ecx = R32((u32)(0x7933e8u));
    /* 0053b6d5: mov edx, dword ptr [eax + 0x2f0] */ r_edx = R32((u32)(r_eax+0x2f0u));
    /* 0053b6db: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x53b6ddu); call_ind(t); }
L_0053b6dd:; BB(0x0053b6dd);
    /* 0053b6dd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0053b6de: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0053b6df: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053b6e2: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0053b6e4: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x53b6e9u); f_00686d72();
    /* 0053b6e9: mov esp, ebp */ r_esp = r_ebp;
    /* 0053b6eb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053b6ec: ret  */ FN_RET(0x0053b1a0); r_esp += 4; return;
}

void f_0053b6f0(void) /* sub_53B6F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053b6f0);
    /* 0053b6f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053b6f1: mov ebp, esp */ r_ebp = r_esp;
    /* 0053b6f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053b6f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0053b6f7: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053b6fb: jne 0x53b6ff */ if (!fZ) goto L_0053b6ff;
L_0053b6fd:; BB(0x0053b6fd);
    /* 0053b6fd: jmp 0x53b730 */ goto L_0053b730;
L_0053b6ff:; BB(0x0053b6ff);
    /* 0053b6ff: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0053b702: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053b705: cmp dword ptr [ecx + eax*4 + 0x18], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053b70a: je 0x53b730 */ if (fZ) goto L_0053b730;
L_0053b70c:; BB(0x0053b70c);
    /* 0053b70c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053b70e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0053b711: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053b712: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0053b715: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053b718: mov edx, dword ptr [ecx + eax*4 + 0x18] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x18u));
    /* 0053b71c: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0053b71f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053b722: mov ecx, dword ptr [ecx + eax*4 + 0x18] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x18u));
    /* 0053b726: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0053b728: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 0053b72e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53b730u); call_ind(t); }
L_0053b730:; BB(0x0053b730);
    /* 0053b730: mov esp, ebp */ r_esp = r_ebp;
    /* 0053b732: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053b733: ret 8 */ FN_RET(0x0053b6f0); r_esp += 12; return;
}

void f_0053b740(void) /* sub_53B740 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053b740);
    /* 0053b740: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053b741: mov ebp, esp */ r_ebp = r_esp;
    /* 0053b743: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053b746: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0053b749: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053b74c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053b74f: mov edx, dword ptr [ecx + eax*4 + 4] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 0053b753: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0053b756: mov ecx, dword ptr [edx + eax*4 + 8] */ r_ecx = R32((u32)(r_edx+r_eax*4+0x8u));
    /* 0053b75a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0053b75d: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0053b760: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053b761: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053b764: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053b765: mov ecx, dword ptr [0x7933ec] */ r_ecx = R32((u32)(0x7933ecu));
    /* 0053b76b: call 0x540ba0 */ r_esp -= 4; W32(r_esp, 0x53b770u); f_00540ba0();
    /* 0053b770: mov word ptr [ebp - 8], ax */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_eax);
    /* 0053b774: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0053b777: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053b778: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053b77b: call 0x53b810 */ r_esp -= 4; W32(r_esp, 0x53b780u); f_0053b810();
    /* 0053b780: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053b781: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053b784: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x53b789u); f_005eaf00();
    /* 0053b789: mov dx, word ptr [ebp - 8] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 0053b78d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053b78e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053b791: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053b792: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053b795: call 0x53b850 */ r_esp -= 4; W32(r_esp, 0x53b79au); f_0053b850();
    /* 0053b79a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053b79b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053b79e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0053b7a0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053b7a3: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0053b7a9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53b7abu); call_ind(t); }
    /* 0053b7ab: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0053b7ae: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053b7af: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0053b7b2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053b7b3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053b7b6: call 0x53b930 */ r_esp -= 4; W32(r_esp, 0x53b7bbu); f_0053b930();
    /* 0053b7bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053b7bc: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0053b7bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053b7c0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0053b7c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053b7c4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053b7c7: call 0x53b8f0 */ r_esp -= 4; W32(r_esp, 0x53b7ccu); f_0053b8f0();
    /* 0053b7cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053b7cd: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053b7d0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0053b7d2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053b7d5: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0053b7d8: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x53b7dau); call_ind(t); }
    /* 0053b7da: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0053b7dd: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0053b7e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053b7e1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053b7e4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0053b7e6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053b7e9: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0053b7ec: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53b7eeu); call_ind(t); }
    /* 0053b7ee: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053b7f1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0053b7f3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053b7f6: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0053b7f9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53b7fbu); call_ind(t); }
    /* 0053b7fb: mov esp, ebp */ r_esp = r_ebp;
    /* 0053b7fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053b7fe: ret 8 */ FN_RET(0x0053b740); r_esp += 12; return;
}

void f_0053b810(void) /* sub_53B810 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053b810);
    /* 0053b810: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053b811: mov ebp, esp */ r_ebp = r_esp;
    /* 0053b813: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053b816: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0053b819: mov dword ptr [ebp - 0x14], 0x310e9a */ W32((u32)(r_ebp+0xffffffecu), 0x310e9au);
    /* 0053b820: mov dword ptr [ebp - 0x10], 0x310e9b */ W32((u32)(r_ebp+0xfffffff0u), 0x310e9bu);
    /* 0053b827: mov dword ptr [ebp - 0xc], 0x310e99 */ W32((u32)(r_ebp+0xfffffff4u), 0x310e99u);
    /* 0053b82e: mov dword ptr [ebp - 8], 0x310e9c */ W32((u32)(r_ebp+0xfffffff8u), 0x310e9cu);
    /* 0053b835: mov dword ptr [ebp - 4], 0x310e9d */ W32((u32)(r_ebp+0xfffffffcu), 0x310e9du);
    /* 0053b83c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053b83f: mov eax, dword ptr [ebp + eax*4 - 0x14] */ r_eax = R32((u32)(r_ebp+r_eax*4+0xffffffecu));
    /* 0053b843: mov esp, ebp */ r_esp = r_ebp;
    /* 0053b845: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053b846: ret 4 */ FN_RET(0x0053b810); r_esp += 8; return;
}

void f_0053b850(void) /* sub_53B850 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053b850);
    /* 0053b850: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053b851: mov ebp, esp */ r_ebp = r_esp;
    /* 0053b853: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053b856: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0053b857: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0053b85a: mov dword ptr [ebp - 0x14], 0xffffffff */ W32((u32)(r_ebp+0xffffffecu), 0xffffffffu);
    /* 0053b861: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
    /* 0053b868: mov dword ptr [ebp - 0xc], 2 */ W32((u32)(r_ebp+0xfffffff4u), 0x2u);
    /* 0053b86f: mov dword ptr [ebp - 8], 3 */ W32((u32)(r_ebp+0xfffffff8u), 0x3u);
    /* 0053b876: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0053b87d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053b880: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053b881: mov ecx, dword ptr [0x7933ec] */ r_ecx = R32((u32)(0x7933ecu));
    /* 0053b887: call 0x540c90 */ r_esp -= 4; W32(r_esp, 0x53b88cu); f_00540c90();
    /* 0053b88c: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0053b88f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053b891: jne 0x53b89a */ if (!fZ) goto L_0053b89a;
L_0053b893:; BB(0x0053b893);
    /* 0053b893: mov eax, 0x35 */ r_eax = 0x35u;
    /* 0053b898: jmp 0x53b8e7 */ goto L_0053b8e7;
L_0053b89a:; BB(0x0053b89a);
    /* 0053b89a: mov dx, word ptr [ebp + 0xc] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 0053b89e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053b89f: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x53b8a4u); f_00641280();
    /* 0053b8a4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053b8a7: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053b8aa: jne 0x53b8c2 */ if (!fZ) goto L_0053b8c2;
L_0053b8ac:; BB(0x0053b8ac);
    /* 0053b8ac: mov ax, word ptr [ebp + 0xc] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 0053b8b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053b8b1: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x53b8b6u); f_00641290();
    /* 0053b8b6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053b8b9: mov eax, dword ptr [ebp + eax*4 - 0x14] */ r_eax = R32((u32)(r_ebp+r_eax*4+0xffffffecu));
    /* 0053b8bd: imul eax, eax, 0xd */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xdu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0053b8c0: jmp 0x53b8e7 */ goto L_0053b8e7;
L_0053b8c2:; BB(0x0053b8c2);
    /* 0053b8c2: mov cx, word ptr [ebp + 0xc] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 0053b8c6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053b8c7: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x53b8ccu); f_00641290();
    /* 0053b8cc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053b8cf: mov esi, dword ptr [ebp + eax*4 - 0x14] */ r_esi = R32((u32)(r_ebp+r_eax*4+0xffffffecu));
    /* 0053b8d3: imul esi, esi, 0xd */ { i64 t = (i64)(i32)r_esi * (i64)(i32)0xdu; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0053b8d6: mov dx, word ptr [ebp + 0xc] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 0053b8da: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053b8db: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x53b8e0u); f_00641280();
    /* 0053b8e0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053b8e3: lea eax, [esi + eax - 1] */ r_eax = (u32)(r_esi+r_eax+0xffffffffu);
L_0053b8e7:; BB(0x0053b8e7);
    /* 0053b8e7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0053b8e8: mov esp, ebp */ r_esp = r_ebp;
    /* 0053b8ea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053b8eb: ret 8 */ FN_RET(0x0053b850); r_esp += 12; return;
}

void f_0053b8f0(void) /* sub_53B8F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053b8f0);
    /* 0053b8f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053b8f1: mov ebp, esp */ r_ebp = r_esp;
    /* 0053b8f3: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053b8f6: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0053b8f9: mov dword ptr [ebp - 0x14], 0x14c */ W32((u32)(r_ebp+0xffffffecu), 0x14cu);
    /* 0053b900: mov dword ptr [ebp - 0x10], 0xde */ W32((u32)(r_ebp+0xfffffff0u), 0xdeu);
    /* 0053b907: mov dword ptr [ebp - 0xc], 0x1a9 */ W32((u32)(r_ebp+0xfffffff4u), 0x1a9u);
    /* 0053b90e: mov dword ptr [ebp - 8], 0x73 */ W32((u32)(r_ebp+0xfffffff8u), 0x73u);
    /* 0053b915: mov dword ptr [ebp - 4], 0x113 */ W32((u32)(r_ebp+0xfffffffcu), 0x113u);
    /* 0053b91c: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0053b91f: imul eax, eax, 0xc */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xcu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0053b922: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0053b925: add eax, dword ptr [ebp + ecx*4 - 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+r_ecx*4+0xffffffecu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0053b929: mov esp, ebp */ r_esp = r_ebp;
    /* 0053b92b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053b92c: ret 8 */ FN_RET(0x0053b8f0); r_esp += 12; return;
}

void f_0053b930(void) /* sub_53B930 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053b930);
    /* 0053b930: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053b931: mov ebp, esp */ r_ebp = r_esp;
    /* 0053b933: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053b936: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0053b939: mov dword ptr [ebp - 0x14], 0xed */ W32((u32)(r_ebp+0xffffffecu), 0xedu);
    /* 0053b940: mov dword ptr [ebp - 0x10], 0xee */ W32((u32)(r_ebp+0xfffffff0u), 0xeeu);
    /* 0053b947: mov dword ptr [ebp - 0xc], 0x8a */ W32((u32)(r_ebp+0xfffffff4u), 0x8au);
    /* 0053b94e: mov dword ptr [ebp - 8], 0x8a */ W32((u32)(r_ebp+0xfffffff8u), 0x8au);
    /* 0053b955: mov dword ptr [ebp - 4], 0x52 */ W32((u32)(r_ebp+0xfffffffcu), 0x52u);
    /* 0053b95c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053b95f: mov eax, dword ptr [ebp + eax*4 - 0x14] */ r_eax = R32((u32)(r_ebp+r_eax*4+0xffffffecu));
    /* 0053b963: mov esp, ebp */ r_esp = r_ebp;
    /* 0053b965: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053b966: ret 8 */ FN_RET(0x0053b930); r_esp += 12; return;
}

void f_0053b970(void) /* sub_53B970 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053b970);
    /* 0053b970: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053b971: mov ebp, esp */ r_ebp = r_esp;
    /* 0053b973: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0053b975: push 0x6a4b67 */ { u32 v = 0x6a4b67u; r_esp -= 4; W32(r_esp, v); }
    /* 0053b97a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0053b980: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053b981: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053b984: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0053b989: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0053b98b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053b98c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0053b98f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0053b995: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0053b998: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053b99b: call 0x53b1a0 */ r_esp -= 4; W32(r_esp, 0x53b9a0u); f_0053b1a0();
    /* 0053b9a0: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053b9a3: cmp dword ptr [eax + 0x4c], 0 */ {  u32 a = R32((u32)(r_eax+0x4cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053b9a7: jne 0x53ba15 */ if (!fZ) goto L_0053ba15;
L_0053b9a9:; BB(0x0053b9a9);
    /* 0053b9a9: push 0x1bc */ { u32 v = 0x1bcu; r_esp -= 4; W32(r_esp, v); }
    /* 0053b9ae: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x53b9b3u); f_00686d82();
    /* 0053b9b3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053b9b6: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0053b9b9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0053b9c0: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053b9c4: je 0x53b9d3 */ if (fZ) goto L_0053b9d3;
L_0053b9c6:; BB(0x0053b9c6);
    /* 0053b9c6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0053b9c9: call 0x53ccb0 */ r_esp -= 4; W32(r_esp, 0x53b9ceu); f_0053ccb0();
    /* 0053b9ce: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0053b9d1: jmp 0x53b9da */ goto L_0053b9da;
L_0053b9d3:; BB(0x0053b9d3);
    /* 0053b9d3: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_0053b9da:; BB(0x0053b9da);
    /* 0053b9da: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053b9dd: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0053b9e0: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0053b9e7: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053b9ea: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0053b9ed: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 0053b9f0: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053b9f3: mov edx, dword ptr [ecx + 0x4c] */ r_edx = R32((u32)(r_ecx+0x4cu));
    /* 0053b9f6: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053b9f9: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 0053b9fc: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0053b9fe: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 0053ba01: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53ba03u); call_ind(t); }
    /* 0053ba03: push 0xaa */ { u32 v = 0xaau; r_esp -= 4; W32(r_esp, v); }
    /* 0053ba08: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053ba0a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053ba0d: mov ecx, dword ptr [ecx + 0x4c] */ r_ecx = R32((u32)(r_ecx+0x4cu));
    /* 0053ba10: call 0x5f7340 */ r_esp -= 4; W32(r_esp, 0x53ba15u); f_005f7340();
L_0053ba15:; BB(0x0053ba15);
    /* 0053ba15: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053ba18: mov ecx, dword ptr [edx + 0x4c] */ r_ecx = R32((u32)(r_edx+0x4cu));
    /* 0053ba1b: call 0x5f85d0 */ r_esp -= 4; W32(r_esp, 0x53ba20u); f_005f85d0();
    /* 0053ba20: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0053ba22: push 0x310e9b */ { u32 v = 0x310e9bu; r_esp -= 4; W32(r_esp, v); }
    /* 0053ba27: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0053ba2d: call 0x5f2b20 */ r_esp -= 4; W32(r_esp, 0x53ba32u); f_005f2b20();
    /* 0053ba32: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0053ba34: push 0x310e9c */ { u32 v = 0x310e9cu; r_esp -= 4; W32(r_esp, v); }
    /* 0053ba39: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0053ba3f: call 0x5f2b20 */ r_esp -= 4; W32(r_esp, 0x53ba44u); f_005f2b20();
    /* 0053ba44: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053ba47: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0053ba4e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0053ba4f: mov esp, ebp */ r_esp = r_ebp;
    /* 0053ba51: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053ba52: ret  */ FN_RET(0x0053b970); r_esp += 4; return;
}

void f_0053ba60(void) /* sub_53BA60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053ba60);
    /* 0053ba60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053ba61: mov ebp, esp */ r_ebp = r_esp;
    /* 0053ba63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053ba64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0053ba67: push 0x310e9b */ { u32 v = 0x310e9bu; r_esp -= 4; W32(r_esp, v); }
    /* 0053ba6c: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0053ba72: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x53ba77u); f_005f2ba0();
    /* 0053ba77: push 0x310e9c */ { u32 v = 0x310e9cu; r_esp -= 4; W32(r_esp, v); }
    /* 0053ba7c: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0053ba82: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x53ba87u); f_005f2ba0();
    /* 0053ba87: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053ba8a: cmp dword ptr [eax + 0x4c], 0 */ {  u32 a = R32((u32)(r_eax+0x4cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053ba8e: je 0x53baa5 */ if (fZ) goto L_0053baa5;
L_0053ba90:; BB(0x0053ba90);
    /* 0053ba90: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053ba93: mov ecx, dword ptr [ecx + 0x4c] */ r_ecx = R32((u32)(r_ecx+0x4cu));
    /* 0053ba96: call 0x5f8990 */ r_esp -= 4; W32(r_esp, 0x53ba9bu); f_005f8990();
    /* 0053ba9b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053ba9e: mov dword ptr [edx + 0x4c], 0 */ W32((u32)(r_edx+0x4cu), 0x0u);
L_0053baa5:; BB(0x0053baa5);
    /* 0053baa5: mov esp, ebp */ r_esp = r_ebp;
    /* 0053baa7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053baa8: ret  */ FN_RET(0x0053ba60); r_esp += 4; return;
}

void f_0053bab0(void) /* sub_53BAB0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053bab0);
    /* 0053bab0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053bab1: mov ebp, esp */ r_ebp = r_esp;
    /* 0053bab3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053bab4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0053bab7: mov ecx, dword ptr [0x7933e8] */ r_ecx = R32((u32)(0x7933e8u));
    /* 0053babd: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x53bac2u); f_005da7b0();
    /* 0053bac2: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0053bac5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053bac7: je 0x53bae8 */ if (fZ) goto L_0053bae8;
L_0053bac9:; BB(0x0053bac9);
    /* 0053bac9: mov ecx, dword ptr [0x7933e8] */ r_ecx = R32((u32)(0x7933e8u));
    /* 0053bacf: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0053bad1: mov ecx, dword ptr [0x7933e8] */ r_ecx = R32((u32)(0x7933e8u));
    /* 0053bad7: mov eax, dword ptr [edx + 0x2d4] */ r_eax = R32((u32)(r_edx+0x2d4u));
    /* 0053badd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53badfu); call_ind(t); }
    /* 0053badf: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0053bae2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053bae4: jne 0x53bae8 */ if (!fZ) goto L_0053bae8;
L_0053bae6:; BB(0x0053bae6);
    /* 0053bae6: jmp 0x53bb25 */ goto L_0053bb25;
L_0053bae8:; BB(0x0053bae8);
    /* 0053bae8: mov ecx, dword ptr [0x7933ec] */ r_ecx = R32((u32)(0x7933ecu));
    /* 0053baee: call 0x5406b0 */ r_esp -= 4; W32(r_esp, 0x53baf3u); f_005406b0();
    /* 0053baf3: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0053baf6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053baf8: jne 0x53bb13 */ if (!fZ) goto L_0053bb13;
L_0053bafa:; BB(0x0053bafa);
    /* 0053bafa: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0053bb00: call 0x5df650 */ r_esp -= 4; W32(r_esp, 0x53bb05u); f_005df650();
    /* 0053bb05: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053bb06: mov ecx, dword ptr [0x7933f0] */ r_ecx = R32((u32)(0x7933f0u));
    /* 0053bb0c: call 0x53d320 */ r_esp -= 4; W32(r_esp, 0x53bb11u); f_0053d320();
    /* 0053bb11: jmp 0x53bb25 */ goto L_0053bb25;
L_0053bb13:; BB(0x0053bb13);
    /* 0053bb13: push 0xaa */ { u32 v = 0xaau; r_esp -= 4; W32(r_esp, v); }
    /* 0053bb18: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053bb1a: mov ecx, dword ptr [0x7933e8] */ r_ecx = R32((u32)(0x7933e8u));
    /* 0053bb20: call 0x5db8c0 */ r_esp -= 4; W32(r_esp, 0x53bb25u); f_005db8c0();
L_0053bb25:; BB(0x0053bb25);
    /* 0053bb25: mov esp, ebp */ r_esp = r_ebp;
    /* 0053bb27: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053bb28: ret  */ FN_RET(0x0053bab0); r_esp += 4; return;
}

void f_0053bc30(void) /* sub_53BC30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053bc30);
    /* 0053bc30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053bc31: mov ebp, esp */ r_ebp = r_esp;
    /* 0053bc33: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0053bc35: push 0x6a4bb0 */ { u32 v = 0x6a4bb0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053bc3a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0053bc40: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053bc41: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053bc44: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0053bc49: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0053bc4b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053bc4c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0053bc4f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0053bc55: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0053bc58: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053bc5b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0053bc5e: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 0053bc61: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0053bc68: jmp 0x53bc73 */ goto L_0053bc73;
L_0053bc6a:; BB(0x0053bc6a);
    /* 0053bc6a: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0053bc6d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0053bc70: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_0053bc73:; BB(0x0053bc73);
    /* 0053bc73: cmp dword ptr [ebp - 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053bc77: jge 0x53bce1 */ if ((fS==fO)) goto L_0053bce1;
L_0053bc79:; BB(0x0053bc79);
    /* 0053bc79: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 0053bc7e: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x53bc83u); f_00686d82();
    /* 0053bc83: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053bc86: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0053bc89: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0053bc90: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053bc94: je 0x53bca3 */ if (fZ) goto L_0053bca3;
L_0053bc96:; BB(0x0053bc96);
    /* 0053bc96: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053bc99: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x53bc9eu); f_005eaaf0();
    /* 0053bc9e: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0053bca1: jmp 0x53bcaa */ goto L_0053bcaa;
L_0053bca3:; BB(0x0053bca3);
    /* 0053bca3: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_0053bcaa:; BB(0x0053bcaa);
    /* 0053bcaa: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053bcad: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0053bcb0: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0053bcb7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0053bcba: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053bcbd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0053bcc0: mov dword ptr [edx + ecx*4 + 8], eax */ W32((u32)(r_edx+r_ecx*4+0x8u), r_eax);
    /* 0053bcc4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0053bcc7: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053bcca: mov eax, dword ptr [edx + ecx*4 + 8] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 0053bcce: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0053bcd1: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053bcd4: mov ecx, dword ptr [edx + ecx*4 + 8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 0053bcd8: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0053bcda: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0053bcdd: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x53bcdfu); call_ind(t); }
    /* 0053bcdf: jmp 0x53bc6a */ goto L_0053bc6a;
L_0053bce1:; BB(0x0053bce1);
    /* 0053bce1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053bce4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0053bceb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0053bcec: mov esp, ebp */ r_esp = r_ebp;
    /* 0053bcee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053bcef: ret 4 */ FN_RET(0x0053bc30); r_esp += 8; return;
}

void f_0053bd00(void) /* sub_53BD00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053bd00);
    /* 0053bd00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053bd01: mov ebp, esp */ r_ebp = r_esp;
    /* 0053bd03: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053bd06: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0053bd09: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053bd0c: cmp dword ptr [eax + 4], 4 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053bd10: je 0x53bd5e */ if (fZ) goto L_0053bd5e;
L_0053bd12:; BB(0x0053bd12);
    /* 0053bd12: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0053bd14: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053bd17: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0053bd1a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053bd1b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0053bd21: call 0x639110 */ r_esp -= 4; W32(r_esp, 0x53bd26u); f_00639110();
    /* 0053bd26: mov ecx, eax */ r_ecx = r_eax;
    /* 0053bd28: call 0x646380 */ r_esp -= 4; W32(r_esp, 0x53bd2du); f_00646380();
    /* 0053bd2d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053bd2f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053bd31: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053bd34: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0053bd37: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053bd38: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0053bd3e: call 0x639110 */ r_esp -= 4; W32(r_esp, 0x53bd43u); f_00639110();
    /* 0053bd43: mov ecx, eax */ r_ecx = r_eax;
    /* 0053bd45: call 0x6464d0 */ r_esp -= 4; W32(r_esp, 0x53bd4au); f_006464d0();
    /* 0053bd4a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053bd4c: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053bd4f: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0053bd52: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053bd53: mov ecx, dword ptr [0x7933e8] */ r_ecx = R32((u32)(0x7933e8u));
    /* 0053bd59: call 0x5d9180 */ r_esp -= 4; W32(r_esp, 0x53bd5eu); f_005d9180();
L_0053bd5e:; BB(0x0053bd5e);
    /* 0053bd5e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0053bd65: jmp 0x53bd70 */ goto L_0053bd70;
L_0053bd67:; BB(0x0053bd67);
    /* 0053bd67: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053bd6a: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0053bd6d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0053bd70:; BB(0x0053bd70);
    /* 0053bd70: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053bd74: jge 0x53bd95 */ if ((fS==fO)) goto L_0053bd95;
L_0053bd76:; BB(0x0053bd76);
    /* 0053bd76: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053bd79: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053bd7c: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 0053bd80: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053bd83: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053bd86: mov edx, dword ptr [eax + edx*4 + 8] */ r_edx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 0053bd8a: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0053bd8c: mov ecx, edx */ r_ecx = r_edx;
    /* 0053bd8e: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 0053bd91: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x53bd93u); call_ind(t); }
    /* 0053bd93: jmp 0x53bd67 */ goto L_0053bd67;
L_0053bd95:; BB(0x0053bd95);
    /* 0053bd95: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053bd98: cmp dword ptr [eax + 4], 4 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053bd9c: je 0x53be1b */ if (fZ) goto L_0053be1b;
L_0053bd9e:; BB(0x0053bd9e);
    /* 0053bd9e: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0053bda4: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0053bda7: cmp dword ptr [edx + 4], 0 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053bdab: jne 0x53be1b */ if (!fZ) goto L_0053be1b;
L_0053bdad:; BB(0x0053bdad);
    /* 0053bdad: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053bdb0: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0053bdb3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053bdb4: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x53bdb9u); f_005dcb00();
    /* 0053bdb9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053bdbc: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0053bdbf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053bdc2: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x53bdc7u); f_0063aac0();
    /* 0053bdc7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0053bdc9: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0053bdcc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0053bdce: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053bdd2: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0053bdd5: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0053bdd8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053bdda: jne 0x53be19 */ if (!fZ) goto L_0053be19;
L_0053bddc:; BB(0x0053bddc);
    /* 0053bddc: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053bddf: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0053bde2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053bde3: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x53bde8u); f_005dcb00();
    /* 0053bde8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053bdeb: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0053bdee: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0053bdf1: mov dl, byte ptr [ecx + 0x4a1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x4a1u))) & 0xffu);
    /* 0053bdf7: mov byte ptr [ebp - 0x11], dl */ W8((u32)(r_ebp+0xffffffefu), (u8)r_edx);
    /* 0053bdfa: movzx eax, byte ptr [ebp - 0x11] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffefu));
    /* 0053bdfe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053be00: jne 0x53be19 */ if (!fZ) goto L_0053be19;
L_0053be02:; BB(0x0053be02);
    /* 0053be02: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053be05: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0053be08: mov eax, dword ptr [0x7933ec] */ r_eax = R32((u32)(0x7933ecu));
    /* 0053be0d: movzx ecx, byte ptr [eax + edx + 0xf6] */ r_ecx = (u32)R8((u32)(r_eax+r_edx+0xf6u));
    /* 0053be15: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053be17: je 0x53be1b */ if (fZ) goto L_0053be1b;
L_0053be19:; BB(0x0053be19);
    /* 0053be19: jmp 0x53be6a */ goto L_0053be6a;
L_0053be1b:; BB(0x0053be1b);
    /* 0053be1b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0053be22: jmp 0x53be2d */ goto L_0053be2d;
L_0053be24:; BB(0x0053be24);
    /* 0053be24: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053be27: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0053be2a: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0053be2d:; BB(0x0053be2d);
    /* 0053be2d: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053be31: jge 0x53be6a */ if ((fS==fO)) goto L_0053be6a;
L_0053be33:; BB(0x0053be33);
    /* 0053be33: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053be36: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053be37: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053be3a: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0053be3d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053be3e: mov ecx, dword ptr [0x7933ec] */ r_ecx = R32((u32)(0x7933ecu));
    /* 0053be44: call 0x540ba0 */ r_esp -= 4; W32(r_esp, 0x53be49u); f_00540ba0();
    /* 0053be49: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 0053be4c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053be4e: jne 0x53be52 */ if (!fZ) goto L_0053be52;
L_0053be50:; BB(0x0053be50);
    /* 0053be50: jmp 0x53be24 */ goto L_0053be24;
L_0053be52:; BB(0x0053be52);
    /* 0053be52: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053be55: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053be56: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053be59: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0053be5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053be5d: mov ecx, dword ptr [0x7933f4] */ r_ecx = R32((u32)(0x7933f4u));
    /* 0053be63: call 0x53b740 */ r_esp -= 4; W32(r_esp, 0x53be68u); f_0053b740();
    /* 0053be68: jmp 0x53be24 */ goto L_0053be24;
L_0053be6a:; BB(0x0053be6a);
    /* 0053be6a: mov esp, ebp */ r_esp = r_ebp;
    /* 0053be6c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053be6d: ret  */ FN_RET(0x0053bd00); r_esp += 4; return;
}

void f_0053be70(void) /* sub_53BE70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053be70);
    /* 0053be70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053be71: mov ebp, esp */ r_ebp = r_esp;
    /* 0053be73: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0053be75: push 0x6a4be1 */ { u32 v = 0x6a4be1u; r_esp -= 4; W32(r_esp, v); }
    /* 0053be7a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0053be80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053be81: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053be84: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0053be89: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0053be8b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053be8c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0053be8f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0053be95: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0053be98: mov eax, dword ptr [0x7933f4] */ r_eax = R32((u32)(0x7933f4u));
    /* 0053be9d: cmp dword ptr [eax + 0x98], 0 */ {  u32 a = R32((u32)(r_eax+0x98u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053bea4: je 0x53bf56 */ if (fZ) goto L_0053bf56;
L_0053beaa:; BB(0x0053beaa);
    /* 0053beaa: push 0x7e7 */ { u32 v = 0x7e7u; r_esp -= 4; W32(r_esp, v); }
    /* 0053beaf: mov ecx, dword ptr [0x7933f4] */ r_ecx = R32((u32)(0x7933f4u));
    /* 0053beb5: mov ecx, dword ptr [ecx + 0x98] */ r_ecx = R32((u32)(r_ecx+0x98u));
    /* 0053bebb: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x53bec0u); f_005eaf00();
    /* 0053bec0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053bec2: mov edx, dword ptr [0x7933f4] */ r_edx = R32((u32)(0x7933f4u));
    /* 0053bec8: mov eax, dword ptr [edx + 0x98] */ r_eax = R32((u32)(r_edx+0x98u));
    /* 0053bece: mov ecx, dword ptr [0x7933f4] */ r_ecx = R32((u32)(0x7933f4u));
    /* 0053bed4: mov ecx, dword ptr [ecx + 0x98] */ r_ecx = R32((u32)(r_ecx+0x98u));
    /* 0053beda: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0053bedc: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0053bee2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53bee4u); call_ind(t); }
    /* 0053bee4: mov ecx, dword ptr [0x7933f4] */ r_ecx = R32((u32)(0x7933f4u));
    /* 0053beea: mov edx, dword ptr [ecx + 0x98] */ r_edx = R32((u32)(r_ecx+0x98u));
    /* 0053bef0: mov eax, dword ptr [0x7933f4] */ r_eax = R32((u32)(0x7933f4u));
    /* 0053bef5: mov ecx, dword ptr [eax + 0x98] */ r_ecx = R32((u32)(r_eax+0x98u));
    /* 0053befb: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0053befd: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0053bf00: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53bf02u); call_ind(t); }
    /* 0053bf02: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0053bf04: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x53bf09u); f_00686d82();
    /* 0053bf09: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053bf0c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0053bf0f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0053bf16: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053bf1a: je 0x53bf2d */ if (fZ) goto L_0053bf2d;
L_0053bf1c:; BB(0x0053bf1c);
    /* 0053bf1c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0053bf1f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053bf20: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0053bf23: call 0x6010a0 */ r_esp -= 4; W32(r_esp, 0x53bf28u); f_006010a0();
    /* 0053bf28: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0053bf2b: jmp 0x53bf34 */ goto L_0053bf34;
L_0053bf2d:; BB(0x0053bf2d);
    /* 0053bf2d: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0053bf34:; BB(0x0053bf34);
    /* 0053bf34: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0053bf37: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0053bf3a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0053bf41: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0053bf44: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053bf45: mov ecx, dword ptr [0x7933f4] */ r_ecx = R32((u32)(0x7933f4u));
    /* 0053bf4b: mov ecx, dword ptr [ecx + 0x98] */ r_ecx = R32((u32)(r_ecx+0x98u));
    /* 0053bf51: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x53bf56u); f_005f5d50();
L_0053bf56:; BB(0x0053bf56);
    /* 0053bf56: mov edx, dword ptr [0x7933f4] */ r_edx = R32((u32)(0x7933f4u));
    /* 0053bf5c: cmp dword ptr [edx + 0x94], 0 */ {  u32 a = R32((u32)(r_edx+0x94u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053bf63: je 0x53c010 */ if (fZ) goto L_0053c010;
L_0053bf69:; BB(0x0053bf69);
    /* 0053bf69: push 0x7e6 */ { u32 v = 0x7e6u; r_esp -= 4; W32(r_esp, v); }
    /* 0053bf6e: mov eax, dword ptr [0x7933f4] */ r_eax = R32((u32)(0x7933f4u));
    /* 0053bf73: mov ecx, dword ptr [eax + 0x94] */ r_ecx = R32((u32)(r_eax+0x94u));
    /* 0053bf79: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x53bf7eu); f_005eaf00();
    /* 0053bf7e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053bf80: mov ecx, dword ptr [0x7933f4] */ r_ecx = R32((u32)(0x7933f4u));
    /* 0053bf86: mov edx, dword ptr [ecx + 0x94] */ r_edx = R32((u32)(r_ecx+0x94u));
    /* 0053bf8c: mov eax, dword ptr [0x7933f4] */ r_eax = R32((u32)(0x7933f4u));
    /* 0053bf91: mov ecx, dword ptr [eax + 0x94] */ r_ecx = R32((u32)(r_eax+0x94u));
    /* 0053bf97: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0053bf99: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0053bf9f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53bfa1u); call_ind(t); }
    /* 0053bfa1: mov ecx, dword ptr [0x7933f4] */ r_ecx = R32((u32)(0x7933f4u));
    /* 0053bfa7: mov edx, dword ptr [ecx + 0x94] */ r_edx = R32((u32)(r_ecx+0x94u));
    /* 0053bfad: mov eax, dword ptr [0x7933f4] */ r_eax = R32((u32)(0x7933f4u));
    /* 0053bfb2: mov ecx, dword ptr [eax + 0x94] */ r_ecx = R32((u32)(r_eax+0x94u));
    /* 0053bfb8: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0053bfba: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0053bfbd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53bfbfu); call_ind(t); }
    /* 0053bfbf: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0053bfc1: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x53bfc6u); f_00686d82();
    /* 0053bfc6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053bfc9: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0053bfcc: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0053bfd3: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053bfd7: je 0x53bfe8 */ if (fZ) goto L_0053bfe8;
L_0053bfd9:; BB(0x0053bfd9);
    /* 0053bfd9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053bfdb: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053bfde: call 0x6010a0 */ r_esp -= 4; W32(r_esp, 0x53bfe3u); f_006010a0();
    /* 0053bfe3: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0053bfe6: jmp 0x53bfef */ goto L_0053bfef;
L_0053bfe8:; BB(0x0053bfe8);
    /* 0053bfe8: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0053bfef:; BB(0x0053bfef);
    /* 0053bfef: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0053bff2: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0053bff5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0053bffc: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053bfff: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053c000: mov eax, dword ptr [0x7933f4] */ r_eax = R32((u32)(0x7933f4u));
    /* 0053c005: mov ecx, dword ptr [eax + 0x94] */ r_ecx = R32((u32)(r_eax+0x94u));
    /* 0053c00b: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x53c010u); f_005f5d50();
L_0053c010:; BB(0x0053c010);
    /* 0053c010: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053c013: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0053c01a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0053c01b: mov esp, ebp */ r_esp = r_ebp;
    /* 0053c01d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053c01e: ret 4 */ FN_RET(0x0053be70); r_esp += 8; return;
}

