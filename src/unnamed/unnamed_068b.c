#include "protos.h"

void f_0068b050(void) /* sub_68B050 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0068b050);
    /* 0068b050: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068b051: mov ebp, esp */ r_ebp = r_esp;
    /* 0068b053: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0068b055: push 0x6adf9c */ { u32 v = 0x6adf9cu; r_esp -= 4; W32(r_esp, v); }
    /* 0068b05a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0068b060: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068b061: sub esp, 0x140 */ {  u32 a = r_esp; u32 b = 0x140u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068b067: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0068b06c: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068b06e: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0068b071: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068b072: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0068b075: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0068b07b: mov dword ptr [ebp - 0x14c], ecx */ W32((u32)(r_ebp+0xfffffeb4u), r_ecx);
    /* 0068b081: mov eax, dword ptr [ebp - 0x14c] */ r_eax = R32((u32)(r_ebp+0xfffffeb4u));
    /* 0068b087: add eax, 0x107 */ {  u32 a = r_eax; u32 b = 0x107u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068b08c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068b08d: lea ecx, [ebp - 0x2c] */ r_ecx = (u32)(r_ebp+0xffffffd4u);
    /* 0068b090: call dword ptr [0x6b20fc] */ { u32 t = R32((u32)(0x6b20fcu)); r_esp -= 4; W32(r_esp, 0x68b096u); call_ind(t); }
    /* 0068b096: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0068b09d: mov ecx, dword ptr [ebp - 0x14c] */ r_ecx = R32((u32)(r_ebp+0xfffffeb4u));
    /* 0068b0a3: add ecx, 0x210 */ {  u32 a = r_ecx; u32 b = 0x210u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0068b0a9: mov dword ptr [ebp - 0x64], ecx */ W32((u32)(r_ebp+0xffffff9cu), r_ecx);
    /* 0068b0ac: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0068b0af: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0068b0b2: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 0068b0b5: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 0068b0bc: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0068b0bf: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 0068b0c2: jne 0x68b0ca */ if (!fZ) goto L_0068b0ca;
L_0068b0c4:; BB(0x0068b0c4);
    /* 0068b0c4: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x68b0cau); call_ind(t); }
L_0068b0ca:; BB(0x0068b0ca);
    /* 0068b0ca: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0068b0cd: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 0068b0d0: mov eax, dword ptr [ebp - 0x14c] */ r_eax = R32((u32)(r_ebp+0xfffffeb4u));
    /* 0068b0d6: add eax, 0x210 */ {  u32 a = r_eax; u32 b = 0x210u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068b0db: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 0068b0de: lea ecx, [ebp - 0x2c] */ r_ecx = (u32)(r_ebp+0xffffffd4u);
    /* 0068b0e1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068b0e2: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0068b0e5: call 0x68c3a0 */ r_esp -= 4; W32(r_esp, 0x68b0eau); f_0068c3a0();
    /* 0068b0ea: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 0068b0ed: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0068b0f0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068b0f1: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 0068b0f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068b0f5: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 0068b0f8: call 0x68d4b0 */ r_esp -= 4; W32(r_esp, 0x68b0fdu); f_0068d4b0();
    /* 0068b0fd: cmp dword ptr [ebp - 0x38], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b101: je 0x68b10b */ if (fZ) goto L_0068b10b;
L_0068b103:; BB(0x0068b103);
    /* 0068b103: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0068b106: cmp ecx, dword ptr [ebp - 0x40] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffc0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b109: je 0x68b111 */ if (fZ) goto L_0068b111;
L_0068b10b:; BB(0x0068b10b);
    /* 0068b10b: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x68b111u); call_ind(t); }
L_0068b111:; BB(0x0068b111);
    /* 0068b111: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0068b114: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068b116: cmp edx, dword ptr [ebp - 0x3c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffc4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b119: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0068b11c: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0068b11f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b121: je 0x68b157 */ if (fZ) goto L_0068b157;
L_0068b123:; BB(0x0068b123);
    /* 0068b123: mov edx, dword ptr [ebp - 0x14c] */ r_edx = R32((u32)(r_ebp+0xfffffeb4u));
    /* 0068b129: cmp dword ptr [edx + 0x208], 0 */ {  u32 a = R32((u32)(r_edx+0x208u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b130: je 0x68b157 */ if (fZ) goto L_0068b157;
L_0068b132:; BB(0x0068b132);
    /* 0068b132: mov eax, dword ptr [ebp - 0x14c] */ r_eax = R32((u32)(r_ebp+0xfffffeb4u));
    /* 0068b138: mov ecx, dword ptr [eax + 0x208] */ r_ecx = R32((u32)(r_eax+0x208u));
    /* 0068b13e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068b13f: mov edx, dword ptr [ebp - 0x14c] */ r_edx = R32((u32)(r_ebp+0xfffffeb4u));
    /* 0068b145: add edx, 0x107 */ {  u32 a = r_edx; u32 b = 0x107u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0068b14b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068b14c: mov ecx, dword ptr [ebp - 0x14c] */ r_ecx = R32((u32)(r_ebp+0xfffffeb4u));
    /* 0068b152: call 0x68a710 */ r_esp -= 4; W32(r_esp, 0x68b157u); f_0068a710();
L_0068b157:; BB(0x0068b157);
    /* 0068b157: lea ecx, [ebp - 0x2c] */ r_ecx = (u32)(r_ebp+0xffffffd4u);
    /* 0068b15a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068b15b: mov ecx, dword ptr [ebp - 0x14c] */ r_ecx = R32((u32)(r_ebp+0xfffffeb4u));
    /* 0068b161: add ecx, 0x210 */ {  u32 a = r_ecx; u32 b = 0x210u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0068b167: call 0x68b720 */ r_esp -= 4; W32(r_esp, 0x68b16cu); f_0068b720();
    /* 0068b16c: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0068b16f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0068b172: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068b173: lea ecx, [ebp - 0x5c] */ r_ecx = (u32)(r_ebp+0xffffffa4u);
    /* 0068b176: call dword ptr [0x6b20fc] */ { u32 t = R32((u32)(0x6b20fcu)); r_esp -= 4; W32(r_esp, 0x68b17cu); call_ind(t); }
    /* 0068b17c: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0068b180: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0068b183: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068b184: lea ecx, [ebp - 0x5c] */ r_ecx = (u32)(r_ebp+0xffffffa4u);
    /* 0068b187: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068b188: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0068b18b: call 0x68b950 */ r_esp -= 4; W32(r_esp, 0x68b190u); f_0068b950();
    /* 0068b190: mov ecx, eax */ r_ecx = r_eax;
    /* 0068b192: call dword ptr [0x6b2114] */ { u32 t = R32((u32)(0x6b2114u)); r_esp -= 4; W32(r_esp, 0x68b198u); call_ind(t); }
    /* 0068b198: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0068b19c: lea ecx, [ebp - 0x5c] */ r_ecx = (u32)(r_ebp+0xffffffa4u);
    /* 0068b19f: call dword ptr [0x6b20f4] */ { u32 t = R32((u32)(0x6b20f4u)); r_esp -= 4; W32(r_esp, 0x68b1a5u); call_ind(t); }
    /* 0068b1a5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0068b1ac: lea ecx, [ebp - 0x2c] */ r_ecx = (u32)(r_ebp+0xffffffd4u);
    /* 0068b1af: call dword ptr [0x6b20f4] */ { u32 t = R32((u32)(0x6b20f4u)); r_esp -= 4; W32(r_esp, 0x68b1b5u); call_ind(t); }
    /* 0068b1b5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0068b1b8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0068b1bf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068b1c0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068b1c3: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0068b1c5: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x68b1cau); f_00686d72();
    /* 0068b1ca: mov esp, ebp */ r_esp = r_ebp;
    /* 0068b1cc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068b1cd: ret 8 */ FN_RET(0x0068b050); r_esp += 12; return;
}

void f_0068b700(void) /* sub_68B700 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0068b700);
    /* 0068b700: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068b701: mov ebp, esp */ r_ebp = r_esp;
    /* 0068b703: sub esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068b706: mov dword ptr [ebp - 0x64], ecx */ W32((u32)(r_ebp+0xffffff9cu), r_ecx);
    /* 0068b709: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0068b70c: call 0x68c410 */ r_esp -= 4; W32(r_esp, 0x68b711u); f_0068c410();
    /* 0068b711: mov esp, ebp */ r_esp = r_ebp;
    /* 0068b713: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068b714: ret  */ FN_RET(0x0068b700); r_esp += 4; return;
}

void f_0068b720(void) /* sub_68B720 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0068b720);
    /* 0068b720: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068b721: mov ebp, esp */ r_ebp = r_esp;
    /* 0068b723: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0068b725: push 0x6adff2 */ { u32 v = 0x6adff2u; r_esp -= 4; W32(r_esp, v); }
    /* 0068b72a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0068b730: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068b731: sub esp, 0xe8 */ {  u32 a = r_esp; u32 b = 0xe8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068b737: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0068b73c: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068b73e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068b73f: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0068b742: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0068b748: mov dword ptr [ebp - 0xec], ecx */ W32((u32)(r_ebp+0xffffff14u), r_ecx);
    /* 0068b74e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068b751: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068b752: mov ecx, dword ptr [ebp - 0xec] */ r_ecx = R32((u32)(r_ebp+0xffffff14u));
    /* 0068b758: call 0x68c3a0 */ r_esp -= 4; W32(r_esp, 0x68b75du); f_0068c3a0();
    /* 0068b75d: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 0068b760: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0068b767: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0068b76a: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0068b76d: cmp dword ptr [ebp - 0xec], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b774: jne 0x68b77c */ if (!fZ) goto L_0068b77c;
L_0068b776:; BB(0x0068b776);
    /* 0068b776: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x68b77cu); call_ind(t); }
L_0068b77c:; BB(0x0068b77c);
    /* 0068b77c: mov edx, dword ptr [ebp - 0xec] */ r_edx = R32((u32)(r_ebp+0xffffff14u));
    /* 0068b782: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0068b785: mov eax, dword ptr [ebp - 0xec] */ r_eax = R32((u32)(r_ebp+0xffffff14u));
    /* 0068b78b: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068b78e: mov dword ptr [ebp - 0x60], ecx */ W32((u32)(r_ebp+0xffffffa0u), r_ecx);
    /* 0068b791: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 0068b798: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0068b79b: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0068b79e: cmp dword ptr [ebp - 0xec], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b7a5: jne 0x68b7ad */ if (!fZ) goto L_0068b7ad;
L_0068b7a7:; BB(0x0068b7a7);
    /* 0068b7a7: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x68b7adu); call_ind(t); }
L_0068b7ad:; BB(0x0068b7ad);
    /* 0068b7ad: mov eax, dword ptr [ebp - 0xec] */ r_eax = R32((u32)(r_ebp+0xffffff14u));
    /* 0068b7b3: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0068b7b6: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b7ba: je 0x68b7c4 */ if (fZ) goto L_0068b7c4;
L_0068b7bc:; BB(0x0068b7bc);
    /* 0068b7bc: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068b7bf: cmp ecx, dword ptr [ebp - 0x1c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b7c2: je 0x68b7ca */ if (fZ) goto L_0068b7ca;
L_0068b7c4:; BB(0x0068b7c4);
    /* 0068b7c4: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x68b7cau); call_ind(t); }
L_0068b7ca:; BB(0x0068b7ca);
    /* 0068b7ca: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068b7cd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068b7cf: cmp edx, dword ptr [ebp - 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b7d2: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0068b7d5: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0068b7d8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b7da: jne 0x68b801 */ if (!fZ) goto L_0068b801;
L_0068b7dc:; BB(0x0068b7dc);
    /* 0068b7dc: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068b7df: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 0068b7e2: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 0068b7e5: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068b7e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068b7e9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0068b7ec: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068b7ed: call dword ptr [0x6b20f0] */ { u32 t = R32((u32)(0x6b20f0u)); r_esp -= 4; W32(r_esp, 0x68b7f3u); call_ind(t); }
    /* 0068b7f3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068b7f6: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0068b7f9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b7fb: je 0x68b8b6 */ if (fZ) goto L_0068b8b6;
L_0068b801:; BB(0x0068b801);
    /* 0068b801: lea ecx, [ebp - 0x50] */ r_ecx = (u32)(r_ebp+0xffffffb0u);
    /* 0068b804: call 0x68c4d0 */ r_esp -= 4; W32(r_esp, 0x68b809u); f_0068c4d0();
    /* 0068b809: mov dword ptr [ebp - 0xf0], eax */ W32((u32)(r_ebp+0xffffff10u), r_eax);
    /* 0068b80f: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 0068b815: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 0068b81b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0068b822: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0068b825: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068b826: lea ecx, [ebp - 0x44] */ r_ecx = (u32)(r_ebp+0xffffffbcu);
    /* 0068b829: call dword ptr [0x6b20f8] */ { u32 t = R32((u32)(0x6b20f8u)); r_esp -= 4; W32(r_esp, 0x68b82fu); call_ind(t); }
    /* 0068b82f: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0068b833: lea edx, [ebp - 0x28] */ r_edx = (u32)(r_ebp+0xffffffd8u);
    /* 0068b836: mov dword ptr [ebp - 0x80], edx */ W32((u32)(r_ebp+0xffffff80u), r_edx);
    /* 0068b839: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 0068b83f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068b840: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 0068b843: call 0x68d530 */ r_esp -= 4; W32(r_esp, 0x68b848u); f_0068d530();
    /* 0068b848: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0068b84c: lea ecx, [ebp - 0x44] */ r_ecx = (u32)(r_ebp+0xffffffbcu);
    /* 0068b84f: mov dword ptr [ebp - 0xf4], ecx */ W32((u32)(r_ebp+0xffffff0cu), r_ecx);
    /* 0068b855: mov byte ptr [ebp - 4], 2 */ W8((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0068b859: mov edx, dword ptr [ebp - 0xf4] */ r_edx = R32((u32)(r_ebp+0xffffff0cu));
    /* 0068b85f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068b860: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068b863: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068b864: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068b867: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068b868: lea edx, [ebp - 0x58] */ r_edx = (u32)(r_ebp+0xffffffa8u);
    /* 0068b86b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068b86c: mov ecx, dword ptr [ebp - 0xec] */ r_ecx = R32((u32)(r_ebp+0xffffff14u));
    /* 0068b872: call 0x68bc00 */ r_esp -= 4; W32(r_esp, 0x68b877u); f_0068bc00();
    /* 0068b877: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0068b879: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0068b87c: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0068b87f: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0068b882: mov byte ptr [ebp - 4], 3 */ W8((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0068b886: lea eax, [ebp - 0x28] */ r_eax = (u32)(r_ebp+0xffffffd8u);
    /* 0068b889: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 0068b88f: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0068b895: call 0x68dc60 */ r_esp -= 4; W32(r_esp, 0x68b89au); f_0068dc60();
    /* 0068b89a: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0068b89e: lea ecx, [ebp - 0x44] */ r_ecx = (u32)(r_ebp+0xffffffbcu);
    /* 0068b8a1: call dword ptr [0x6b20f4] */ { u32 t = R32((u32)(0x6b20f4u)); r_esp -= 4; W32(r_esp, 0x68b8a7u); call_ind(t); }
    /* 0068b8a7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0068b8ae: lea ecx, [ebp - 0x50] */ r_ecx = (u32)(r_ebp+0xffffffb0u);
    /* 0068b8b1: call 0x68dc60 */ r_esp -= 4; W32(r_esp, 0x68b8b6u); f_0068dc60();
L_0068b8b6:; BB(0x0068b8b6);
    /* 0068b8b6: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b8ba: jne 0x68b8c2 */ if (!fZ) goto L_0068b8c2;
L_0068b8bc:; BB(0x0068b8bc);
    /* 0068b8bc: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x68b8c2u); call_ind(t); }
L_0068b8c2:; BB(0x0068b8c2);
    /* 0068b8c2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068b8c5: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068b8c8: cmp edx, dword ptr [ecx + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b8cb: jne 0x68b8d3 */ if (!fZ) goto L_0068b8d3;
L_0068b8cd:; BB(0x0068b8cd);
    /* 0068b8cd: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x68b8d3u); call_ind(t); }
L_0068b8d3:; BB(0x0068b8d3);
    /* 0068b8d3: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068b8d6: add eax, 0x28 */ {  u32 a = r_eax; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068b8d9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0068b8dc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0068b8e3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068b8e4: mov esp, ebp */ r_esp = r_ebp;
    /* 0068b8e6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068b8e7: ret 4 */ FN_RET(0x0068b720); r_esp += 8; return;
}

void f_0068b8f0(void) /* sub_68B8F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0068b8f0);
    /* 0068b8f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068b8f1: mov ebp, esp */ r_ebp = r_esp;
    /* 0068b8f3: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068b8f6: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0068b8f9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0068b8fc: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068b8ff: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0068b902: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068b903: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068b906: call 0x68c340 */ r_esp -= 4; W32(r_esp, 0x68b90bu); f_0068c340();
    /* 0068b90b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0068b90e: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068b911: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068b914: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0068b917: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0068b91a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068b91d: mov dword ptr [ecx + 8], 0 */ W32((u32)(r_ecx+0x8u), 0x0u);
    /* 0068b924: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068b927: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0068b92a: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0068b92d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068b930: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068b933: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0068b936: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 0068b938: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068b93b: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0068b93e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0068b941: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068b944: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 0068b947: mov esp, ebp */ r_esp = r_ebp;
    /* 0068b949: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068b94a: ret  */ FN_RET(0x0068b8f0); r_esp += 4; return;
}

void f_0068b950(void) /* sub_68B950 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0068b950);
    /* 0068b950: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068b951: mov ebp, esp */ r_ebp = r_esp;
    /* 0068b953: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0068b955: push 0x6ae033 */ { u32 v = 0x6ae033u; r_esp -= 4; W32(r_esp, v); }
    /* 0068b95a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0068b960: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068b961: sub esp, 0x88 */ {  u32 a = r_esp; u32 b = 0x88u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068b967: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0068b96c: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068b96e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068b96f: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0068b972: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0068b978: mov dword ptr [ebp - 0x8c], ecx */ W32((u32)(r_ebp+0xffffff74u), r_ecx);
    /* 0068b97e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068b981: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068b982: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 0068b988: call 0x68dbf0 */ r_esp -= 4; W32(r_esp, 0x68b98du); f_0068dbf0();
    /* 0068b98d: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 0068b990: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0068b997: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 0068b99a: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0068b99d: cmp dword ptr [ebp - 0x8c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff74u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b9a4: jne 0x68b9ac */ if (!fZ) goto L_0068b9ac;
L_0068b9a6:; BB(0x0068b9a6);
    /* 0068b9a6: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x68b9acu); call_ind(t); }
L_0068b9ac:; BB(0x0068b9ac);
    /* 0068b9ac: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 0068b9b2: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0068b9b5: mov eax, dword ptr [ebp - 0x8c] */ r_eax = R32((u32)(r_ebp+0xffffff74u));
    /* 0068b9bb: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068b9be: mov dword ptr [ebp - 0x80], ecx */ W32((u32)(r_ebp+0xffffff80u), r_ecx);
    /* 0068b9c1: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 0068b9c8: mov edx, dword ptr [ebp - 0x80] */ r_edx = R32((u32)(r_ebp+0xffffff80u));
    /* 0068b9cb: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0068b9ce: cmp dword ptr [ebp - 0x8c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff74u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b9d5: jne 0x68b9dd */ if (!fZ) goto L_0068b9dd;
L_0068b9d7:; BB(0x0068b9d7);
    /* 0068b9d7: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x68b9ddu); call_ind(t); }
L_0068b9dd:; BB(0x0068b9dd);
    /* 0068b9dd: mov eax, dword ptr [ebp - 0x8c] */ r_eax = R32((u32)(r_ebp+0xffffff74u));
    /* 0068b9e3: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0068b9e6: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b9ea: je 0x68b9f4 */ if (fZ) goto L_0068b9f4;
L_0068b9ec:; BB(0x0068b9ec);
    /* 0068b9ec: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068b9ef: cmp ecx, dword ptr [ebp - 0x1c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b9f2: je 0x68b9fa */ if (fZ) goto L_0068b9fa;
L_0068b9f4:; BB(0x0068b9f4);
    /* 0068b9f4: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x68b9fau); call_ind(t); }
L_0068b9fa:; BB(0x0068b9fa);
    /* 0068b9fa: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068b9fd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068b9ff: cmp edx, dword ptr [ebp - 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ba02: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0068ba05: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0068ba08: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ba0a: jne 0x68ba37 */ if (!fZ) goto L_0068ba37;
L_0068ba0c:; BB(0x0068ba0c);
    /* 0068ba0c: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068ba0f: mov dword ptr [ebp - 0x84], edx */ W32((u32)(r_ebp+0xffffff7cu), r_edx);
    /* 0068ba15: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 0068ba1b: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068ba1e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068ba1f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0068ba22: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068ba23: call dword ptr [0x6b20f0] */ { u32 t = R32((u32)(0x6b20f0u)); r_esp -= 4; W32(r_esp, 0x68ba29u); call_ind(t); }
    /* 0068ba29: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068ba2c: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0068ba2f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ba31: je 0x68bade */ if (fZ) goto L_0068bade;
L_0068ba37:; BB(0x0068ba37);
    /* 0068ba37: lea ecx, [ebp - 0x70] */ r_ecx = (u32)(r_ebp+0xffffff90u);
    /* 0068ba3a: call dword ptr [0x6b210c] */ { u32 t = R32((u32)(0x6b210cu)); r_esp -= 4; W32(r_esp, 0x68ba40u); call_ind(t); }
    /* 0068ba40: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 0068ba46: mov eax, dword ptr [ebp - 0x90] */ r_eax = R32((u32)(r_ebp+0xffffff70u));
    /* 0068ba4c: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 0068ba52: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0068ba59: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0068ba5c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068ba5d: lea ecx, [ebp - 0x54] */ r_ecx = (u32)(r_ebp+0xffffffacu);
    /* 0068ba60: call dword ptr [0x6b20f8] */ { u32 t = R32((u32)(0x6b20f8u)); r_esp -= 4; W32(r_esp, 0x68ba66u); call_ind(t); }
    /* 0068ba66: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0068ba6a: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 0068ba70: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068ba71: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 0068ba74: call dword ptr [0x6b20f8] */ { u32 t = R32((u32)(0x6b20f8u)); r_esp -= 4; W32(r_esp, 0x68ba7au); call_ind(t); }
    /* 0068ba7a: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0068ba7e: lea eax, [ebp - 0x54] */ r_eax = (u32)(r_ebp+0xffffffacu);
    /* 0068ba81: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 0068ba87: mov byte ptr [ebp - 4], 2 */ W8((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0068ba8b: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 0068ba91: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068ba92: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068ba95: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068ba96: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0068ba99: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068ba9a: lea ecx, [ebp - 0x78] */ r_ecx = (u32)(r_ebp+0xffffff88u);
    /* 0068ba9d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068ba9e: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 0068baa4: call 0x68c500 */ r_esp -= 4; W32(r_esp, 0x68baa9u); f_0068c500();
    /* 0068baa9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0068baab: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0068baae: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0068bab1: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0068bab4: mov byte ptr [ebp - 4], 3 */ W8((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0068bab8: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 0068babb: call dword ptr [0x6b20f4] */ { u32 t = R32((u32)(0x6b20f4u)); r_esp -= 4; W32(r_esp, 0x68bac1u); call_ind(t); }
    /* 0068bac1: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0068bac5: lea ecx, [ebp - 0x54] */ r_ecx = (u32)(r_ebp+0xffffffacu);
    /* 0068bac8: call dword ptr [0x6b20f4] */ { u32 t = R32((u32)(0x6b20f4u)); r_esp -= 4; W32(r_esp, 0x68baceu); call_ind(t); }
    /* 0068bace: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0068bad5: lea ecx, [ebp - 0x70] */ r_ecx = (u32)(r_ebp+0xffffff90u);
    /* 0068bad8: call dword ptr [0x6b20f4] */ { u32 t = R32((u32)(0x6b20f4u)); r_esp -= 4; W32(r_esp, 0x68badeu); call_ind(t); }
L_0068bade:; BB(0x0068bade);
    /* 0068bade: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068bae2: jne 0x68baea */ if (!fZ) goto L_0068baea;
L_0068bae4:; BB(0x0068bae4);
    /* 0068bae4: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x68baeau); call_ind(t); }
L_0068baea:; BB(0x0068baea);
    /* 0068baea: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068baed: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068baf0: cmp edx, dword ptr [ecx + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068baf3: jne 0x68bafb */ if (!fZ) goto L_0068bafb;
L_0068baf5:; BB(0x0068baf5);
    /* 0068baf5: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x68bafbu); call_ind(t); }
L_0068bafb:; BB(0x0068bafb);
    /* 0068bafb: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068bafe: add eax, 0x28 */ {  u32 a = r_eax; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068bb01: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0068bb04: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0068bb0b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068bb0c: mov esp, ebp */ r_esp = r_ebp;
    /* 0068bb0e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068bb0f: ret 4 */ FN_RET(0x0068b950); r_esp += 8; return;
}

void f_0068bb20(void) /* sub_68BB20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0068bb20);
    /* 0068bb20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068bb21: mov ebp, esp */ r_ebp = r_esp;
    /* 0068bb23: sub esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068bb26: mov dword ptr [ebp - 0x64], ecx */ W32((u32)(r_ebp+0xffffff9cu), r_ecx);
    /* 0068bb29: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0068bb2c: call 0x68dc60 */ r_esp -= 4; W32(r_esp, 0x68bb31u); f_0068dc60();
    /* 0068bb31: mov esp, ebp */ r_esp = r_ebp;
    /* 0068bb33: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068bb34: ret  */ FN_RET(0x0068bb20); r_esp += 4; return;
}

void f_0068bb40(void) /* sub_68BB40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0068bb40);
    /* 0068bb40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068bb41: mov ebp, esp */ r_ebp = r_esp;
    /* 0068bb43: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0068bb45: push 0x6ae069 */ { u32 v = 0x6ae069u; r_esp -= 4; W32(r_esp, v); }
    /* 0068bb4a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0068bb50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068bb51: sub esp, 0x68 */ {  u32 a = r_esp; u32 b = 0x68u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068bb54: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0068bb59: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068bb5b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068bb5c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0068bb5f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0068bb65: mov dword ptr [ebp - 0x74], ecx */ W32((u32)(r_ebp+0xffffff8cu), r_ecx);
    /* 0068bb68: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0068bb6f: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0068bb72: add eax, 0x1c */ {  u32 a = r_eax; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068bb75: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 0068bb78: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 0068bb7b: call 0x68dc60 */ r_esp -= 4; W32(r_esp, 0x68bb80u); f_0068dc60();
    /* 0068bb80: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0068bb87: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0068bb8a: call dword ptr [0x6b20f4] */ { u32 t = R32((u32)(0x6b20f4u)); r_esp -= 4; W32(r_esp, 0x68bb90u); call_ind(t); }
    /* 0068bb90: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0068bb93: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0068bb9a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068bb9b: mov esp, ebp */ r_esp = r_ebp;
    /* 0068bb9d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068bb9e: ret  */ FN_RET(0x0068bb40); r_esp += 4; return;
}

void f_0068bba0(void) /* sub_68BBA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0068bba0);
    /* 0068bba0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068bba1: mov ebp, esp */ r_ebp = r_esp;
    /* 0068bba3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0068bba5: push 0x6ae099 */ { u32 v = 0x6ae099u; r_esp -= 4; W32(r_esp, v); }
    /* 0068bbaa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0068bbb0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068bbb1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068bbb2: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0068bbb7: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068bbb9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068bbba: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0068bbbd: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0068bbc3: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0068bbc6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0068bbcd: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068bbd0: add ecx, 0x1c */ {  u32 a = r_ecx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0068bbd3: call dword ptr [0x6b20f4] */ { u32 t = R32((u32)(0x6b20f4u)); r_esp -= 4; W32(r_esp, 0x68bbd9u); call_ind(t); }
    /* 0068bbd9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0068bbe0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068bbe3: call dword ptr [0x6b20f4] */ { u32 t = R32((u32)(0x6b20f4u)); r_esp -= 4; W32(r_esp, 0x68bbe9u); call_ind(t); }
    /* 0068bbe9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0068bbec: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0068bbf3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068bbf4: mov esp, ebp */ r_esp = r_ebp;
    /* 0068bbf6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068bbf7: ret  */ FN_RET(0x0068bba0); r_esp += 4; return;
}

void f_0068bc00(void) /* sub_68BC00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0068bc00);
    /* 0068bc00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068bc01: mov ebp, esp */ r_ebp = r_esp;
    /* 0068bc03: sub esp, 0x1c0 */ {  u32 a = r_esp; u32 b = 0x1c0u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068bc09: mov dword ptr [ebp - 0x1c0], ecx */ W32((u32)(r_ebp+0xfffffe40u), r_ecx);
    /* 0068bc0f: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0068bc16: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0068bc1d: mov eax, dword ptr [ebp - 0x1c0] */ r_eax = R32((u32)(r_ebp+0xfffffe40u));
    /* 0068bc23: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0068bc26: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 0068bc29: cmp dword ptr [ebp - 0x48], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068bc2d: jne 0x68bc5b */ if (!fZ) goto L_0068bc5b;
L_0068bc2f:; BB(0x0068bc2f);
    /* 0068bc2f: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0068bc32: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068bc33: mov eax, dword ptr [ebp - 0x1c0] */ r_eax = R32((u32)(r_ebp+0xfffffe40u));
    /* 0068bc39: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068bc3c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068bc3d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0068bc3f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0068bc42: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068bc43: mov ecx, dword ptr [ebp - 0x1c0] */ r_ecx = R32((u32)(r_ebp+0xfffffe40u));
    /* 0068bc49: call 0x68d070 */ r_esp -= 4; W32(r_esp, 0x68bc4eu); f_0068d070();
    /* 0068bc4e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068bc51: jmp 0x68c330 */ goto L_0068c330;
L_0068bc5b:; BB(0x0068bc5b);
    /* 0068bc5b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0068bc5d: je 0x68bfda */ if (fZ) goto L_0068bfda;
L_0068bc63:; BB(0x0068bc63);
    /* 0068bc63: mov ecx, dword ptr [ebp - 0x1c0] */ r_ecx = R32((u32)(r_ebp+0xfffffe40u));
    /* 0068bc69: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0068bc6c: mov dword ptr [ebp - 0x98], edx */ W32((u32)(r_ebp+0xffffff68u), r_edx);
    /* 0068bc72: mov eax, dword ptr [ebp - 0x98] */ r_eax = R32((u32)(r_ebp+0xffffff68u));
    /* 0068bc78: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0068bc7a: mov dword ptr [ebp - 0x9c], ecx */ W32((u32)(r_ebp+0xffffff64u), r_ecx);
    /* 0068bc80: mov edx, dword ptr [ebp - 0x1c0] */ r_edx = R32((u32)(r_ebp+0xfffffe40u));
    /* 0068bc86: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068bc87: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 0068bc8d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068bc8e: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0068bc91: call 0x68d4b0 */ r_esp -= 4; W32(r_esp, 0x68bc96u); f_0068d4b0();
    /* 0068bc96: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068bc9a: je 0x68bca4 */ if (fZ) goto L_0068bca4;
L_0068bc9c:; BB(0x0068bc9c);
    /* 0068bc9c: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0068bc9f: cmp ecx, dword ptr [ebp - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068bca2: je 0x68bcaa */ if (fZ) goto L_0068bcaa;
L_0068bca4:; BB(0x0068bca4);
    /* 0068bca4: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x68bcaau); call_ind(t); }
L_0068bcaa:; BB(0x0068bcaa);
    /* 0068bcaa: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0068bcad: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068bcaf: cmp edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068bcb2: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0068bcb5: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0068bcb8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068bcba: je 0x68bd15 */ if (fZ) goto L_0068bd15;
L_0068bcbc:; BB(0x0068bcbc);
    /* 0068bcbc: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0068bcbf: mov dword ptr [ebp - 0xa0], edx */ W32((u32)(r_ebp+0xffffff60u), r_edx);
    /* 0068bcc5: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0068bcc8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068bcc9: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 0068bccf: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0068bcd2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068bcd3: call dword ptr [0x6b20f0] */ { u32 t = R32((u32)(0x6b20f0u)); r_esp -= 4; W32(r_esp, 0x68bcd9u); call_ind(t); }
    /* 0068bcd9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068bcdc: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0068bcdf: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068bce1: jne 0x68bd10 */ if (!fZ) goto L_0068bd10;
L_0068bce3:; BB(0x0068bce3);
    /* 0068bce3: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0068bce6: mov dword ptr [ebp - 0xa4], eax */ W32((u32)(r_ebp+0xffffff5cu), r_eax);
    /* 0068bcec: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0068bcef: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068bcf0: mov edx, dword ptr [ebp - 0xa4] */ r_edx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0068bcf6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068bcf7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0068bcf9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068bcfc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068bcfd: mov ecx, dword ptr [ebp - 0x1c0] */ r_ecx = R32((u32)(r_ebp+0xfffffe40u));
    /* 0068bd03: call 0x68d070 */ r_esp -= 4; W32(r_esp, 0x68bd08u); f_0068d070();
    /* 0068bd08: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068bd0b: jmp 0x68c330 */ goto L_0068c330;
L_0068bd10:; BB(0x0068bd10);
    /* 0068bd10: jmp 0x68bfd5 */ goto L_0068bfd5;
L_0068bd15:; BB(0x0068bd15);
    /* 0068bd15: mov ecx, dword ptr [ebp - 0x1c0] */ r_ecx = R32((u32)(r_ebp+0xfffffe40u));
    /* 0068bd1b: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0068bd1e: mov dword ptr [ebp - 0xf4], edx */ W32((u32)(r_ebp+0xffffff0cu), r_edx);
    /* 0068bd24: mov eax, dword ptr [ebp - 0x1c0] */ r_eax = R32((u32)(r_ebp+0xfffffe40u));
    /* 0068bd2a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068bd2b: mov ecx, dword ptr [ebp - 0xf4] */ r_ecx = R32((u32)(r_ebp+0xffffff0cu));
    /* 0068bd31: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068bd32: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 0068bd35: call 0x68d4b0 */ r_esp -= 4; W32(r_esp, 0x68bd3au); f_0068d4b0();
    /* 0068bd3a: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068bd3e: je 0x68bd48 */ if (fZ) goto L_0068bd48;
L_0068bd40:; BB(0x0068bd40);
    /* 0068bd40: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0068bd43: cmp edx, dword ptr [ebp - 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068bd46: je 0x68bd4e */ if (fZ) goto L_0068bd4e;
L_0068bd48:; BB(0x0068bd48);
    /* 0068bd48: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x68bd4eu); call_ind(t); }
L_0068bd4e:; BB(0x0068bd4e);
    /* 0068bd4e: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0068bd51: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0068bd53: cmp eax, dword ptr [ebp - 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068bd56: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0068bd59: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 0068bd5c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068bd5e: je 0x68bdcd */ if (fZ) goto L_0068bdcd;
L_0068bd60:; BB(0x0068bd60);
    /* 0068bd60: mov eax, dword ptr [ebp - 0x1c0] */ r_eax = R32((u32)(r_ebp+0xfffffe40u));
    /* 0068bd66: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068bd69: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0068bd6c: mov dword ptr [ebp - 0xf8], ecx */ W32((u32)(r_ebp+0xffffff08u), r_ecx);
    /* 0068bd72: mov edx, dword ptr [ebp - 0xf8] */ r_edx = R32((u32)(r_ebp+0xffffff08u));
    /* 0068bd78: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0068bd7a: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068bd7d: mov dword ptr [ebp - 0xfc], eax */ W32((u32)(r_ebp+0xffffff04u), r_eax);
    /* 0068bd83: mov ecx, dword ptr [ebp - 0xfc] */ r_ecx = R32((u32)(r_ebp+0xffffff04u));
    /* 0068bd89: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068bd8a: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0068bd8d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068bd8e: call dword ptr [0x6b20f0] */ { u32 t = R32((u32)(0x6b20f0u)); r_esp -= 4; W32(r_esp, 0x68bd94u); call_ind(t); }
    /* 0068bd94: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068bd97: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0068bd9a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068bd9c: jne 0x68bdc8 */ if (!fZ) goto L_0068bdc8;
L_0068bd9e:; BB(0x0068bd9e);
    /* 0068bd9e: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0068bda1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068bda2: mov edx, dword ptr [ebp - 0x1c0] */ r_edx = R32((u32)(r_ebp+0xfffffe40u));
    /* 0068bda8: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0068bdab: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0068bdae: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068bdaf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0068bdb1: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0068bdb4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068bdb5: mov ecx, dword ptr [ebp - 0x1c0] */ r_ecx = R32((u32)(r_ebp+0xfffffe40u));
    /* 0068bdbb: call 0x68d070 */ r_esp -= 4; W32(r_esp, 0x68bdc0u); f_0068d070();
    /* 0068bdc0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068bdc3: jmp 0x68c330 */ goto L_0068c330;
L_0068bdc8:; BB(0x0068bdc8);
    /* 0068bdc8: jmp 0x68bfd5 */ goto L_0068bfd5;
L_0068bdcd:; BB(0x0068bdcd);
    /* 0068bdcd: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0068bdd0: mov dword ptr [ebp - 0x14c], eax */ W32((u32)(r_ebp+0xfffffeb4u), r_eax);
    /* 0068bdd6: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0068bdd9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068bdda: mov edx, dword ptr [ebp - 0x14c] */ r_edx = R32((u32)(r_ebp+0xfffffeb4u));
    /* 0068bde0: add edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0068bde3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068bde4: call dword ptr [0x6b20f0] */ { u32 t = R32((u32)(0x6b20f0u)); r_esp -= 4; W32(r_esp, 0x68bdeau); call_ind(t); }
    /* 0068bdea: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068bded: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0068bdf0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068bdf2: jne 0x68beae */ if (!fZ) goto L_0068beae;
L_0068bdf8:; BB(0x0068bdf8);
    /* 0068bdf8: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0068bdfb: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0068bdfe: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0068be01: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0068be04: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 0068be07: call 0x68eea0 */ r_esp -= 4; W32(r_esp, 0x68be0cu); f_0068eea0();
    /* 0068be0c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068be0f: mov dword ptr [ebp - 0x150], eax */ W32((u32)(r_ebp+0xfffffeb0u), r_eax);
    /* 0068be15: mov ecx, dword ptr [ebp - 0x150] */ r_ecx = R32((u32)(r_ebp+0xfffffeb0u));
    /* 0068be1b: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0068be1e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068be1f: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0068be22: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068be23: call dword ptr [0x6b20f0] */ { u32 t = R32((u32)(0x6b20f0u)); r_esp -= 4; W32(r_esp, 0x68be29u); call_ind(t); }
    /* 0068be29: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068be2c: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0068be2f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068be31: jne 0x68beae */ if (!fZ) goto L_0068beae;
L_0068be33:; BB(0x0068be33);
    /* 0068be33: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068be36: mov dword ptr [ebp - 0x154], ecx */ W32((u32)(r_ebp+0xfffffeacu), r_ecx);
    /* 0068be3c: mov edx, dword ptr [ebp - 0x154] */ r_edx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0068be42: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0068be45: movsx ecx, byte ptr [eax + 0x35] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x35u));
    /* 0068be49: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068be4b: je 0x68be7c */ if (fZ) goto L_0068be7c;
L_0068be4d:; BB(0x0068be4d);
    /* 0068be4d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068be50: mov dword ptr [ebp - 0x158], edx */ W32((u32)(r_ebp+0xfffffea8u), r_edx);
    /* 0068be56: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0068be59: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068be5a: mov ecx, dword ptr [ebp - 0x158] */ r_ecx = R32((u32)(r_ebp+0xfffffea8u));
    /* 0068be60: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068be61: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0068be63: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0068be66: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068be67: mov ecx, dword ptr [ebp - 0x1c0] */ r_ecx = R32((u32)(r_ebp+0xfffffe40u));
    /* 0068be6d: call 0x68d070 */ r_esp -= 4; W32(r_esp, 0x68be72u); f_0068d070();
    /* 0068be72: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068be75: jmp 0x68c330 */ goto L_0068c330;
L_0068be7c:; BB(0x0068be7c);
    /* 0068be7c: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0068be7f: mov dword ptr [ebp - 0x15c], eax */ W32((u32)(r_ebp+0xfffffea4u), r_eax);
    /* 0068be85: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0068be88: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068be89: mov edx, dword ptr [ebp - 0x15c] */ r_edx = R32((u32)(r_ebp+0xfffffea4u));
    /* 0068be8f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068be90: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0068be92: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068be95: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068be96: mov ecx, dword ptr [ebp - 0x1c0] */ r_ecx = R32((u32)(r_ebp+0xfffffe40u));
    /* 0068be9c: call 0x68d070 */ r_esp -= 4; W32(r_esp, 0x68bea1u); f_0068d070();
    /* 0068bea1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068bea4: jmp 0x68c330 */ goto L_0068c330;
L_0068beae:; BB(0x0068beae);
    /* 0068beae: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0068beb1: mov dword ptr [ebp - 0x160], ecx */ W32((u32)(r_ebp+0xfffffea0u), r_ecx);
    /* 0068beb7: mov edx, dword ptr [ebp - 0x160] */ r_edx = R32((u32)(r_ebp+0xfffffea0u));
    /* 0068bebd: add edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0068bec0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068bec1: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0068bec4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068bec5: call dword ptr [0x6b20f0] */ { u32 t = R32((u32)(0x6b20f0u)); r_esp -= 4; W32(r_esp, 0x68becbu); call_ind(t); }
    /* 0068becb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068bece: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0068bed1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068bed3: jne 0x68bfd5 */ if (!fZ) goto L_0068bfd5;
L_0068bed9:; BB(0x0068bed9);
    /* 0068bed9: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0068bedc: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0068bedf: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0068bee2: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0068bee5: mov ecx, dword ptr [ebp - 0x1c0] */ r_ecx = R32((u32)(r_ebp+0xfffffe40u));
    /* 0068beeb: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0068beee: mov dword ptr [ebp - 0x164], edx */ W32((u32)(r_ebp+0xfffffe9cu), r_edx);
    /* 0068bef4: mov eax, dword ptr [ebp - 0x1c0] */ r_eax = R32((u32)(r_ebp+0xfffffe40u));
    /* 0068befa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068befb: mov ecx, dword ptr [ebp - 0x164] */ r_ecx = R32((u32)(r_ebp+0xfffffe9cu));
    /* 0068bf01: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068bf02: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 0068bf05: call 0x68d4b0 */ r_esp -= 4; W32(r_esp, 0x68bf0au); f_0068d4b0();
    /* 0068bf0a: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 0068bf0d: call 0x68e790 */ r_esp -= 4; W32(r_esp, 0x68bf12u); f_0068e790();
    /* 0068bf12: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068bf16: je 0x68bf20 */ if (fZ) goto L_0068bf20;
L_0068bf18:; BB(0x0068bf18);
    /* 0068bf18: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0068bf1b: cmp edx, dword ptr [ebp - 0x20] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068bf1e: je 0x68bf26 */ if (fZ) goto L_0068bf26;
L_0068bf20:; BB(0x0068bf20);
    /* 0068bf20: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x68bf26u); call_ind(t); }
L_0068bf26:; BB(0x0068bf26);
    /* 0068bf26: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068bf29: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0068bf2b: cmp eax, dword ptr [ebp - 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068bf2e: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0068bf31: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 0068bf34: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068bf36: jne 0x68bf5f */ if (!fZ) goto L_0068bf5f;
L_0068bf38:; BB(0x0068bf38);
    /* 0068bf38: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068bf3b: mov dword ptr [ebp - 0x168], eax */ W32((u32)(r_ebp+0xfffffe98u), r_eax);
    /* 0068bf41: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0068bf44: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068bf45: mov edx, dword ptr [ebp - 0x168] */ r_edx = R32((u32)(r_ebp+0xfffffe98u));
    /* 0068bf4b: add edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0068bf4e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068bf4f: call dword ptr [0x6b20f0] */ { u32 t = R32((u32)(0x6b20f0u)); r_esp -= 4; W32(r_esp, 0x68bf55u); call_ind(t); }
    /* 0068bf55: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068bf58: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0068bf5b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068bf5d: jne 0x68bfd5 */ if (!fZ) goto L_0068bfd5;
L_0068bf5f:; BB(0x0068bf5f);
    /* 0068bf5f: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0068bf62: mov dword ptr [ebp - 0x16c], ecx */ W32((u32)(r_ebp+0xfffffe94u), r_ecx);
    /* 0068bf68: mov edx, dword ptr [ebp - 0x16c] */ r_edx = R32((u32)(r_ebp+0xfffffe94u));
    /* 0068bf6e: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0068bf71: movsx ecx, byte ptr [eax + 0x35] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x35u));
    /* 0068bf75: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068bf77: je 0x68bfa8 */ if (fZ) goto L_0068bfa8;
L_0068bf79:; BB(0x0068bf79);
    /* 0068bf79: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0068bf7c: mov dword ptr [ebp - 0x170], edx */ W32((u32)(r_ebp+0xfffffe90u), r_edx);
    /* 0068bf82: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0068bf85: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068bf86: mov ecx, dword ptr [ebp - 0x170] */ r_ecx = R32((u32)(r_ebp+0xfffffe90u));
    /* 0068bf8c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068bf8d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0068bf8f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0068bf92: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068bf93: mov ecx, dword ptr [ebp - 0x1c0] */ r_ecx = R32((u32)(r_ebp+0xfffffe40u));
    /* 0068bf99: call 0x68d070 */ r_esp -= 4; W32(r_esp, 0x68bf9eu); f_0068d070();
    /* 0068bf9e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068bfa1: jmp 0x68c330 */ goto L_0068c330;
L_0068bfa8:; BB(0x0068bfa8);
    /* 0068bfa8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068bfab: mov dword ptr [ebp - 0x174], eax */ W32((u32)(r_ebp+0xfffffe8cu), r_eax);
    /* 0068bfb1: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0068bfb4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068bfb5: mov edx, dword ptr [ebp - 0x174] */ r_edx = R32((u32)(r_ebp+0xfffffe8cu));
    /* 0068bfbb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068bfbc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0068bfbe: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068bfc1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068bfc2: mov ecx, dword ptr [ebp - 0x1c0] */ r_ecx = R32((u32)(r_ebp+0xfffffe40u));
    /* 0068bfc8: call 0x68d070 */ r_esp -= 4; W32(r_esp, 0x68bfcdu); f_0068d070();
    /* 0068bfcd: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068bfd0: jmp 0x68c330 */ goto L_0068c330;
L_0068bfd5:; BB(0x0068bfd5);
    /* 0068bfd5: jmp 0x68c30d */ goto L_0068c30d;
L_0068bfda:; BB(0x0068bfda);
    /* 0068bfda: mov ecx, dword ptr [ebp - 0x1c0] */ r_ecx = R32((u32)(r_ebp+0xfffffe40u));
    /* 0068bfe0: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0068bfe3: mov dword ptr [ebp - 0x178], edx */ W32((u32)(r_ebp+0xfffffe88u), r_edx);
    /* 0068bfe9: mov eax, dword ptr [ebp - 0x178] */ r_eax = R32((u32)(r_ebp+0xfffffe88u));
    /* 0068bfef: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0068bff1: mov dword ptr [ebp - 0x17c], ecx */ W32((u32)(r_ebp+0xfffffe84u), r_ecx);
    /* 0068bff7: mov edx, dword ptr [ebp - 0x1c0] */ r_edx = R32((u32)(r_ebp+0xfffffe40u));
    /* 0068bffd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068bffe: mov eax, dword ptr [ebp - 0x17c] */ r_eax = R32((u32)(r_ebp+0xfffffe84u));
    /* 0068c004: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068c005: lea ecx, [ebp - 0x28] */ r_ecx = (u32)(r_ebp+0xffffffd8u);
    /* 0068c008: call 0x68d4b0 */ r_esp -= 4; W32(r_esp, 0x68c00du); f_0068d4b0();
    /* 0068c00d: lea ecx, [ebp - 0x28] */ r_ecx = (u32)(r_ebp+0xffffffd8u);
    /* 0068c010: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068c011: lea ecx, [ebp + 0xc] */ r_ecx = (u32)(r_ebp+0xcu);
    /* 0068c014: call 0x6118f0 */ r_esp -= 4; W32(r_esp, 0x68c019u); f_006118f0();
    /* 0068c019: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0068c01c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068c01e: je 0x68c079 */ if (fZ) goto L_0068c079;
L_0068c020:; BB(0x0068c020);
    /* 0068c020: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0068c023: mov dword ptr [ebp - 0x180], eax */ W32((u32)(r_ebp+0xfffffe80u), r_eax);
    /* 0068c029: mov ecx, dword ptr [ebp - 0x180] */ r_ecx = R32((u32)(r_ebp+0xfffffe80u));
    /* 0068c02f: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0068c032: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068c033: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0068c036: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068c037: call dword ptr [0x6b20f0] */ { u32 t = R32((u32)(0x6b20f0u)); r_esp -= 4; W32(r_esp, 0x68c03du); call_ind(t); }
    /* 0068c03d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068c040: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0068c043: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068c045: je 0x68c074 */ if (fZ) goto L_0068c074;
L_0068c047:; BB(0x0068c047);
    /* 0068c047: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0068c04a: mov dword ptr [ebp - 0x184], ecx */ W32((u32)(r_ebp+0xfffffe7cu), r_ecx);
    /* 0068c050: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0068c053: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068c054: mov eax, dword ptr [ebp - 0x184] */ r_eax = R32((u32)(r_ebp+0xfffffe7cu));
    /* 0068c05a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068c05b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0068c05d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0068c060: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068c061: mov ecx, dword ptr [ebp - 0x1c0] */ r_ecx = R32((u32)(r_ebp+0xfffffe40u));
    /* 0068c067: call 0x68d070 */ r_esp -= 4; W32(r_esp, 0x68c06cu); f_0068d070();
    /* 0068c06c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068c06f: jmp 0x68c330 */ goto L_0068c330;
L_0068c074:; BB(0x0068c074);
    /* 0068c074: jmp 0x68c30d */ goto L_0068c30d;
L_0068c079:; BB(0x0068c079);
    /* 0068c079: mov edx, dword ptr [ebp - 0x1c0] */ r_edx = R32((u32)(r_ebp+0xfffffe40u));
    /* 0068c07f: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0068c082: mov dword ptr [ebp - 0x188], eax */ W32((u32)(r_ebp+0xfffffe78u), r_eax);
    /* 0068c088: mov ecx, dword ptr [ebp - 0x1c0] */ r_ecx = R32((u32)(r_ebp+0xfffffe40u));
    /* 0068c08e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068c08f: mov edx, dword ptr [ebp - 0x188] */ r_edx = R32((u32)(r_ebp+0xfffffe78u));
    /* 0068c095: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068c096: lea ecx, [ebp - 0x30] */ r_ecx = (u32)(r_ebp+0xffffffd0u);
    /* 0068c099: call 0x68d4b0 */ r_esp -= 4; W32(r_esp, 0x68c09eu); f_0068d4b0();
    /* 0068c09e: lea eax, [ebp - 0x30] */ r_eax = (u32)(r_ebp+0xffffffd0u);
    /* 0068c0a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068c0a2: lea ecx, [ebp + 0xc] */ r_ecx = (u32)(r_ebp+0xcu);
    /* 0068c0a5: call 0x6118f0 */ r_esp -= 4; W32(r_esp, 0x68c0aau); f_006118f0();
    /* 0068c0aa: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0068c0ad: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068c0af: je 0x68c11e */ if (fZ) goto L_0068c11e;
L_0068c0b1:; BB(0x0068c0b1);
    /* 0068c0b1: mov edx, dword ptr [ebp - 0x1c0] */ r_edx = R32((u32)(r_ebp+0xfffffe40u));
    /* 0068c0b7: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0068c0ba: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068c0bd: mov dword ptr [ebp - 0x18c], eax */ W32((u32)(r_ebp+0xfffffe74u), r_eax);
    /* 0068c0c3: mov ecx, dword ptr [ebp - 0x18c] */ r_ecx = R32((u32)(r_ebp+0xfffffe74u));
    /* 0068c0c9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0068c0cb: add edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0068c0ce: mov dword ptr [ebp - 0x190], edx */ W32((u32)(r_ebp+0xfffffe70u), r_edx);
    /* 0068c0d4: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0068c0d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068c0d8: mov ecx, dword ptr [ebp - 0x190] */ r_ecx = R32((u32)(r_ebp+0xfffffe70u));
    /* 0068c0de: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068c0df: call dword ptr [0x6b20f0] */ { u32 t = R32((u32)(0x6b20f0u)); r_esp -= 4; W32(r_esp, 0x68c0e5u); call_ind(t); }
    /* 0068c0e5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068c0e8: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0068c0eb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068c0ed: je 0x68c119 */ if (fZ) goto L_0068c119;
L_0068c0ef:; BB(0x0068c0ef);
    /* 0068c0ef: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0068c0f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068c0f3: mov ecx, dword ptr [ebp - 0x1c0] */ r_ecx = R32((u32)(r_ebp+0xfffffe40u));
    /* 0068c0f9: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0068c0fc: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0068c0ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068c100: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0068c102: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0068c105: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068c106: mov ecx, dword ptr [ebp - 0x1c0] */ r_ecx = R32((u32)(r_ebp+0xfffffe40u));
    /* 0068c10c: call 0x68d070 */ r_esp -= 4; W32(r_esp, 0x68c111u); f_0068d070();
    /* 0068c111: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068c114: jmp 0x68c330 */ goto L_0068c330;
L_0068c119:; BB(0x0068c119);
    /* 0068c119: jmp 0x68c30d */ goto L_0068c30d;
L_0068c11e:; BB(0x0068c11e);
    /* 0068c11e: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0068c121: mov dword ptr [ebp - 0x194], edx */ W32((u32)(r_ebp+0xfffffe6cu), r_edx);
    /* 0068c127: mov eax, dword ptr [ebp - 0x194] */ r_eax = R32((u32)(r_ebp+0xfffffe6cu));
    /* 0068c12d: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068c130: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068c131: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0068c134: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068c135: call dword ptr [0x6b20f0] */ { u32 t = R32((u32)(0x6b20f0u)); r_esp -= 4; W32(r_esp, 0x68c13bu); call_ind(t); }
    /* 0068c13b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068c13e: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0068c141: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068c143: je 0x68c1ff */ if (fZ) goto L_0068c1ff;
L_0068c149:; BB(0x0068c149);
    /* 0068c149: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0068c14c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0068c14f: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0068c152: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0068c155: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 0068c158: call 0x68eea0 */ r_esp -= 4; W32(r_esp, 0x68c15du); f_0068eea0();
    /* 0068c15d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068c160: mov dword ptr [ebp - 0x198], edx */ W32((u32)(r_ebp+0xfffffe68u), r_edx);
    /* 0068c166: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0068c169: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068c16a: mov ecx, dword ptr [ebp - 0x198] */ r_ecx = R32((u32)(r_ebp+0xfffffe68u));
    /* 0068c170: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0068c173: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068c174: call dword ptr [0x6b20f0] */ { u32 t = R32((u32)(0x6b20f0u)); r_esp -= 4; W32(r_esp, 0x68c17au); call_ind(t); }
    /* 0068c17a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068c17d: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0068c180: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068c182: je 0x68c1ff */ if (fZ) goto L_0068c1ff;
L_0068c184:; BB(0x0068c184);
    /* 0068c184: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068c187: mov dword ptr [ebp - 0x19c], eax */ W32((u32)(r_ebp+0xfffffe64u), r_eax);
    /* 0068c18d: mov ecx, dword ptr [ebp - 0x19c] */ r_ecx = R32((u32)(r_ebp+0xfffffe64u));
    /* 0068c193: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0068c196: movsx eax, byte ptr [edx + 0x35] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x35u));
    /* 0068c19a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068c19c: je 0x68c1cd */ if (fZ) goto L_0068c1cd;
L_0068c19e:; BB(0x0068c19e);
    /* 0068c19e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068c1a1: mov dword ptr [ebp - 0x1a0], ecx */ W32((u32)(r_ebp+0xfffffe60u), r_ecx);
    /* 0068c1a7: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0068c1aa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068c1ab: mov eax, dword ptr [ebp - 0x1a0] */ r_eax = R32((u32)(r_ebp+0xfffffe60u));
    /* 0068c1b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068c1b2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0068c1b4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0068c1b7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068c1b8: mov ecx, dword ptr [ebp - 0x1c0] */ r_ecx = R32((u32)(r_ebp+0xfffffe40u));
    /* 0068c1be: call 0x68d070 */ r_esp -= 4; W32(r_esp, 0x68c1c3u); f_0068d070();
    /* 0068c1c3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068c1c6: jmp 0x68c330 */ goto L_0068c330;
L_0068c1cd:; BB(0x0068c1cd);
    /* 0068c1cd: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0068c1d0: mov dword ptr [ebp - 0x1a4], edx */ W32((u32)(r_ebp+0xfffffe5cu), r_edx);
    /* 0068c1d6: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0068c1d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068c1da: mov ecx, dword ptr [ebp - 0x1a4] */ r_ecx = R32((u32)(r_ebp+0xfffffe5cu));
    /* 0068c1e0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068c1e1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0068c1e3: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0068c1e6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068c1e7: mov ecx, dword ptr [ebp - 0x1c0] */ r_ecx = R32((u32)(r_ebp+0xfffffe40u));
    /* 0068c1ed: call 0x68d070 */ r_esp -= 4; W32(r_esp, 0x68c1f2u); f_0068d070();
    /* 0068c1f2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068c1f5: jmp 0x68c330 */ goto L_0068c330;
L_0068c1ff:; BB(0x0068c1ff);
    /* 0068c1ff: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0068c202: mov dword ptr [ebp - 0x1a8], eax */ W32((u32)(r_ebp+0xfffffe58u), r_eax);
    /* 0068c208: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0068c20b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068c20c: mov edx, dword ptr [ebp - 0x1a8] */ r_edx = R32((u32)(r_ebp+0xfffffe58u));
    /* 0068c212: add edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0068c215: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068c216: call dword ptr [0x6b20f0] */ { u32 t = R32((u32)(0x6b20f0u)); r_esp -= 4; W32(r_esp, 0x68c21cu); call_ind(t); }
    /* 0068c21c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068c21f: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0068c222: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068c224: je 0x68c30d */ if (fZ) goto L_0068c30d;
L_0068c22a:; BB(0x0068c22a);
    /* 0068c22a: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0068c22d: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0068c230: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0068c233: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0068c236: mov eax, dword ptr [ebp - 0x1c0] */ r_eax = R32((u32)(r_ebp+0xfffffe40u));
    /* 0068c23c: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068c23f: mov dword ptr [ebp - 0x1ac], ecx */ W32((u32)(r_ebp+0xfffffe54u), r_ecx);
    /* 0068c245: mov edx, dword ptr [ebp - 0x1c0] */ r_edx = R32((u32)(r_ebp+0xfffffe40u));
    /* 0068c24b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068c24c: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 0068c252: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068c253: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 0068c256: call 0x68d4b0 */ r_esp -= 4; W32(r_esp, 0x68c25bu); f_0068d4b0();
    /* 0068c25b: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 0068c25e: call 0x68e790 */ r_esp -= 4; W32(r_esp, 0x68c263u); f_0068e790();
    /* 0068c263: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 0068c266: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068c267: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 0068c26a: call 0x6118f0 */ r_esp -= 4; W32(r_esp, 0x68c26fu); f_006118f0();
    /* 0068c26f: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0068c272: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068c274: jne 0x68c29d */ if (!fZ) goto L_0068c29d;
L_0068c276:; BB(0x0068c276);
    /* 0068c276: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068c279: mov dword ptr [ebp - 0x1b0], eax */ W32((u32)(r_ebp+0xfffffe50u), r_eax);
    /* 0068c27f: mov ecx, dword ptr [ebp - 0x1b0] */ r_ecx = R32((u32)(r_ebp+0xfffffe50u));
    /* 0068c285: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0068c288: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068c289: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0068c28c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068c28d: call dword ptr [0x6b20f0] */ { u32 t = R32((u32)(0x6b20f0u)); r_esp -= 4; W32(r_esp, 0x68c293u); call_ind(t); }
    /* 0068c293: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068c296: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0068c299: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068c29b: je 0x68c30d */ if (fZ) goto L_0068c30d;
L_0068c29d:; BB(0x0068c29d);
    /* 0068c29d: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0068c2a0: mov dword ptr [ebp - 0x1b4], ecx */ W32((u32)(r_ebp+0xfffffe4cu), r_ecx);
    /* 0068c2a6: mov edx, dword ptr [ebp - 0x1b4] */ r_edx = R32((u32)(r_ebp+0xfffffe4cu));
    /* 0068c2ac: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0068c2af: movsx ecx, byte ptr [eax + 0x35] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x35u));
    /* 0068c2b3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068c2b5: je 0x68c2e3 */ if (fZ) goto L_0068c2e3;
L_0068c2b7:; BB(0x0068c2b7);
    /* 0068c2b7: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0068c2ba: mov dword ptr [ebp - 0x1b8], edx */ W32((u32)(r_ebp+0xfffffe48u), r_edx);
    /* 0068c2c0: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0068c2c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068c2c4: mov ecx, dword ptr [ebp - 0x1b8] */ r_ecx = R32((u32)(r_ebp+0xfffffe48u));
    /* 0068c2ca: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068c2cb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0068c2cd: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0068c2d0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068c2d1: mov ecx, dword ptr [ebp - 0x1c0] */ r_ecx = R32((u32)(r_ebp+0xfffffe40u));
    /* 0068c2d7: call 0x68d070 */ r_esp -= 4; W32(r_esp, 0x68c2dcu); f_0068d070();
    /* 0068c2dc: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068c2df: jmp 0x68c330 */ goto L_0068c330;
L_0068c2e3:; BB(0x0068c2e3);
    /* 0068c2e3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068c2e6: mov dword ptr [ebp - 0x1bc], eax */ W32((u32)(r_ebp+0xfffffe44u), r_eax);
    /* 0068c2ec: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0068c2ef: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068c2f0: mov edx, dword ptr [ebp - 0x1bc] */ r_edx = R32((u32)(r_ebp+0xfffffe44u));
    /* 0068c2f6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068c2f7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0068c2f9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068c2fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068c2fd: mov ecx, dword ptr [ebp - 0x1c0] */ r_ecx = R32((u32)(r_ebp+0xfffffe40u));
    /* 0068c303: call 0x68d070 */ r_esp -= 4; W32(r_esp, 0x68c308u); f_0068d070();
    /* 0068c308: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068c30b: jmp 0x68c330 */ goto L_0068c330;
L_0068c30d:; BB(0x0068c30d);
    /* 0068c30d: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0068c310: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068c311: lea edx, [ebp - 0x44] */ r_edx = (u32)(r_ebp+0xffffffbcu);
    /* 0068c314: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068c315: mov ecx, dword ptr [ebp - 0x1c0] */ r_ecx = R32((u32)(r_ebp+0xfffffe40u));
    /* 0068c31b: call 0x68cc40 */ r_esp -= 4; W32(r_esp, 0x68c320u); f_0068cc40();
    /* 0068c320: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0068c322: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0068c325: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068c328: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0068c32a: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0068c32d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
L_0068c330:; BB(0x0068c330);
    /* 0068c330: mov esp, ebp */ r_esp = r_ebp;
    /* 0068c332: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068c333: ret 0x10 */ FN_RET(0x0068bc00); r_esp += 20; return;
}

