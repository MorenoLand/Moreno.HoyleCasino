#include "protos.h"

void f_0057a070(void) /* sub_57A070 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0057a070);
    /* 0057a070: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057a071: mov ebp, esp */ r_ebp = r_esp;
    /* 0057a073: sub esp, 0x21c */ {  u32 a = r_esp; u32 b = 0x21cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0057a079: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0057a07e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0057a080: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0057a083: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0057a088: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0057a08a: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0057a090: mov eax, dword ptr [edx + 0x31c] */ r_eax = R32((u32)(r_edx+0x31cu));
    /* 0057a096: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57a098u); call_ind(t); }
    /* 0057a098: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0057a09b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057a09d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057a09f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057a0a2: call 0x63a3e0 */ r_esp -= 4; W32(r_esp, 0x57a0a7u); f_0063a3e0();
    /* 0057a0a7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0057a0aa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057a0ab: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057a0ae: call 0x63ab10 */ r_esp -= 4; W32(r_esp, 0x57a0b3u); f_0063ab10();
    /* 0057a0b3: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0057a0b6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057a0b8: jne 0x57a148 */ if (!fZ) goto L_0057a148;
L_0057a0be:; BB(0x0057a0be);
    /* 0057a0be: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0057a0c0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057a0c2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057a0c5: call 0x63a3e0 */ r_esp -= 4; W32(r_esp, 0x57a0cau); f_0063a3e0();
    /* 0057a0ca: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0057a0cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057a0ce: lea ecx, [ebp - 0x210] */ r_ecx = (u32)(r_ebp+0xfffffdf0u);
    /* 0057a0d4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057a0d5: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x57a0dau); f_00686d8e();
    /* 0057a0da: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057a0dd: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 0057a0df: lea edx, [ebp - 0x210] */ r_edx = (u32)(r_ebp+0xfffffdf0u);
    /* 0057a0e5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057a0e6: call dword ptr [0x6b2264] */ { u32 t = R32((u32)(0x6b2264u)); r_esp -= 4; W32(r_esp, 0x57a0ecu); call_ind(t); }
    /* 0057a0ec: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057a0ef: mov dword ptr [ebp - 0x214], eax */ W32((u32)(r_ebp+0xfffffdecu), r_eax);
    /* 0057a0f5: cmp dword ptr [ebp - 0x214], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffdecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057a0fc: je 0x57a107 */ if (fZ) goto L_0057a107;
L_0057a0fe:; BB(0x0057a0fe);
    /* 0057a0fe: mov eax, dword ptr [ebp - 0x214] */ r_eax = R32((u32)(r_ebp+0xfffffdecu));
    /* 0057a104: mov byte ptr [eax], 0 */ W8((u32)(r_eax), 0x0u);
L_0057a107:; BB(0x0057a107);
    /* 0057a107: lea ecx, [ebp - 0x210] */ r_ecx = (u32)(r_ebp+0xfffffdf0u);
    /* 0057a10d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057a10e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057a111: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x57a116u); f_0063aac0();
    /* 0057a116: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0057a119: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057a11a: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x57a11fu); f_00686d8e();
    /* 0057a11f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057a122: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0057a125: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057a126: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057a129: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0057a12c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057a12d: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x57a132u); f_00686d8e();
    /* 0057a132: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057a135: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057a138: call 0x63b0a0 */ r_esp -= 4; W32(r_esp, 0x57a13du); f_0063b0a0();
    /* 0057a13d: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0057a140: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057a142: jne 0x57a148 */ if (!fZ) goto L_0057a148;
L_0057a144:; BB(0x0057a144);
    /* 0057a144: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0057a146: jmp 0x57a195 */ goto L_0057a195;
L_0057a148:; BB(0x0057a148);
    /* 0057a148: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057a14b: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x57a150u); f_0063aac0();
    /* 0057a150: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0057a152: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0057a155: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057a158: call 0x4842b0 */ r_esp -= 4; W32(r_esp, 0x57a15du); f_004842b0();
    /* 0057a15d: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0057a160: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057a163: call 0x57a470 */ r_esp -= 4; W32(r_esp, 0x57a168u); f_0057a470();
    /* 0057a168: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057a169: lea eax, [ebp - 0x110] */ r_eax = (u32)(r_ebp+0xfffffef0u);
    /* 0057a16f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057a170: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x57a175u); f_00686d8e();
    /* 0057a175: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057a178: lea ecx, [ebp - 0x110] */ r_ecx = (u32)(r_ebp+0xfffffef0u);
    /* 0057a17e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057a17f: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0057a182: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057a183: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057a186: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057a187: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0057a18a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057a18b: call 0x57a1b0 */ r_esp -= 4; W32(r_esp, 0x57a190u); f_0057a1b0();
    /* 0057a190: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057a193: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0057a195:; BB(0x0057a195);
    /* 0057a195: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057a198: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0057a19a: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x57a19fu); f_00686d72();
    /* 0057a19f: mov esp, ebp */ r_esp = r_ebp;
    /* 0057a1a1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057a1a2: ret  */ FN_RET(0x0057a070); r_esp += 4; return;
}

void f_0057a1b0(void) /* sub_57A1B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0057a1b0);
    /* 0057a1b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057a1b1: mov ebp, esp */ r_ebp = r_esp;
    /* 0057a1b3: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0057a1b6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0057a1b9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057a1ba: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0057a1c0: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 0057a1c3: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0057a1c5: call 0x63ab10 */ r_esp -= 4; W32(r_esp, 0x57a1cau); f_0063ab10();
    /* 0057a1ca: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0057a1cf: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 0057a1d2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0057a1d4: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0057a1d7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057a1da: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x57a1dfu); f_0063aac0();
    /* 0057a1df: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0057a1e2: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0057a1e4: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0057a1ea: mov eax, dword ptr [edx + 0x58] */ r_eax = R32((u32)(r_edx+0x58u));
    /* 0057a1ed: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0057a1ef: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0057a1f2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057a1f5: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x57a1fau); f_0063aac0();
    /* 0057a1fa: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0057a1fc: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0057a1ff: cmp dword ptr [ebp - 0xc], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057a203: jne 0x57a248 */ if (!fZ) goto L_0057a248;
L_0057a205:; BB(0x0057a205);
    /* 0057a205: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0057a20a: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 0057a20d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0057a20f: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0057a212: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0057a217: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057a21a: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x57a21fu); f_0063aac0();
    /* 0057a21f: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0057a222: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057a223: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x57a228u); f_00686d8e();
    /* 0057a228: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057a22b: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0057a230: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 0057a233: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0057a235: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0057a238: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057a23b: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x57a240u); f_0063aac0();
    /* 0057a240: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0057a243: mov dword ptr [eax + 0x54], ecx */ W32((u32)(r_eax+0x54u), r_ecx);
    /* 0057a246: jmp 0x57a26e */ goto L_0057a26e;
L_0057a248:; BB(0x0057a248);
    /* 0057a248: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0057a24e: mov eax, dword ptr [edx + 0x58] */ r_eax = R32((u32)(r_edx+0x58u));
    /* 0057a251: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0057a253: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0057a256: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0057a259: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057a25a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057a25d: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x57a262u); f_0063aac0();
    /* 0057a262: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0057a265: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057a266: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x57a26bu); f_00686d8e();
    /* 0057a26b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0057a26e:; BB(0x0057a26e);
    /* 0057a26e: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0057a273: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 0057a276: mov ecx, dword ptr [ecx] */ r_ecx = R32((u32)(r_ecx));
    /* 0057a278: call 0x63b0a0 */ r_esp -= 4; W32(r_esp, 0x57a27du); f_0063b0a0();
    /* 0057a27d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0057a27f: mov esp, ebp */ r_esp = r_ebp;
    /* 0057a281: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057a282: ret  */ FN_RET(0x0057a1b0); r_esp += 4; return;
}

void f_0057a470(void) /* sub_57A470 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0057a470);
    /* 0057a470: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057a471: mov ebp, esp */ r_ebp = r_esp;
    /* 0057a473: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0057a476: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0057a479: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057a47c: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x57a481u); f_0063aac0();
    /* 0057a481: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0057a483: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0057a486: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0057a488: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057a48c: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0057a48f: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 0057a492: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057a494: je 0x57a4aa */ if (fZ) goto L_0057a4aa;
L_0057a496:; BB(0x0057a496);
    /* 0057a496: push 0x55 */ { u32 v = 0x55u; r_esp -= 4; W32(r_esp, v); }
    /* 0057a498: push 0x6bceec */ { u32 v = 0x6bceecu; r_esp -= 4; W32(r_esp, v); }
    /* 0057a49d: push 0x6bcee0 */ { u32 v = 0x6bcee0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057a4a2: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x57a4a7u); f_005e9f20();
    /* 0057a4a7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0057a4aa:; BB(0x0057a4aa);
    /* 0057a4aa: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057a4ad: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x57a4b2u); f_0063aac0();
    /* 0057a4b2: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0057a4b5: mov esp, ebp */ r_esp = r_ebp;
    /* 0057a4b7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057a4b8: ret  */ FN_RET(0x0057a470); r_esp += 4; return;
}

void f_0057ab80(void) /* sub_57AB80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0057ab80);
    /* 0057ab80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057ab81: mov ebp, esp */ r_ebp = r_esp;
    /* 0057ab83: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0057ab85: push 0x6a6724 */ { u32 v = 0x6a6724u; r_esp -= 4; W32(r_esp, v); }
    /* 0057ab8a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0057ab90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057ab91: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0057ab94: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0057ab95: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0057ab96: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0057ab9b: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0057ab9d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057ab9e: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0057aba1: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0057aba7: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0057abaa: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0057abad: call 0x57ae30 */ r_esp -= 4; W32(r_esp, 0x57abb2u); f_0057ae30();
    /* 0057abb2: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0057abb5: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0057abb8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0057abba: mov dword ptr [eax + 0x1c0], edx */ W32((u32)(r_eax+0x1c0u), r_edx);
    /* 0057abc0: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0057abc3: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0057abc6: mov dl, byte ptr [ecx + 4] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x4u))) & 0xffu);
    /* 0057abc9: mov byte ptr [eax + 0x1c4], dl */ W8((u32)(r_eax+0x1c4u), (u8)r_edx);
    /* 0057abcf: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0057abd2: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0057abd5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057abd6: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0057abd9: add ecx, 0x1c5 */ {  u32 a = r_ecx; u32 b = 0x1c5u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0057abdf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057abe0: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x57abe5u); f_00686d8e();
    /* 0057abe5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057abe8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0057abea: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0057abed: mov edx, 0x224 */ r_edx = 0x224u;
    /* 0057abf2: mul edx */ { u64 t = (u64)r_eax * r_edx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 0057abf4: seto cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fO) ? 1 : 0) & 0xffu);
    /* 0057abf7: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0057abf9: or ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0057abfb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057abfc: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x57ac01u); f_00686d82();
    /* 0057ac01: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057ac04: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0057ac07: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0057ac0a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057ac0d: mov dword ptr [eax + 0x19d0], ecx */ W32((u32)(r_eax+0x19d0u), r_ecx);
    /* 0057ac13: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0057ac16: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0057ac19: mov dword ptr [edx + 0x19d4], eax */ W32((u32)(r_edx+0x19d4u), r_eax);
    /* 0057ac1f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0057ac21: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0057ac24: mov edx, 4 */ r_edx = 0x4u;
    /* 0057ac29: mul edx */ { u64 t = (u64)r_eax * r_edx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 0057ac2b: seto cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fO) ? 1 : 0) & 0xffu);
    /* 0057ac2e: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0057ac30: or ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0057ac32: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057ac33: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x57ac38u); f_00686d82();
    /* 0057ac38: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057ac3b: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0057ac3e: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0057ac41: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057ac44: mov dword ptr [eax + 0x19d8], ecx */ W32((u32)(r_eax+0x19d8u), r_ecx);
    /* 0057ac4a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0057ac4d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0057ac50: mov dword ptr [edx + 0x19dc], eax */ W32((u32)(r_edx+0x19dcu), r_eax);
    /* 0057ac56: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0057ac5d: jmp 0x57ac68 */ goto L_0057ac68;
L_0057ac5f:; BB(0x0057ac5f);
    /* 0057ac5f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057ac62: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0057ac65: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0057ac68:; BB(0x0057ac68);
    /* 0057ac68: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057ac6b: cmp edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057ac6e: jge 0x57ae0c */ if ((fS==fO)) goto L_0057ae0c;
L_0057ac74:; BB(0x0057ac74);
    /* 0057ac74: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057ac77: imul eax, eax, 0x218 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x218u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0057ac7d: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0057ac80: lea esi, [ecx + eax + 0x108] */ r_esi = (u32)(r_ecx+r_eax+0x108u);
    /* 0057ac87: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057ac8a: imul edx, edx, 0x224 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x224u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0057ac90: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0057ac93: mov edi, dword ptr [eax + 0x19d0] */ r_edi = R32((u32)(r_eax+0x19d0u));
    /* 0057ac99: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0057ac9b: mov ecx, 0x86 */ r_ecx = 0x86u;
    /* 0057aca0: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0057aca2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057aca5: imul ecx, ecx, 0x224 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x224u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0057acab: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0057acae: mov eax, dword ptr [edx + 0x19d0] */ r_eax = R32((u32)(r_edx+0x19d0u));
    /* 0057acb4: mov byte ptr [eax + ecx + 0x218], 0 */ W8((u32)(r_eax+r_ecx+0x218u), 0x0u);
    /* 0057acbc: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057acbf: imul ecx, ecx, 0x224 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x224u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0057acc5: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0057acc8: mov eax, dword ptr [edx + 0x19d0] */ r_eax = R32((u32)(r_edx+0x19d0u));
    /* 0057acce: mov byte ptr [eax + ecx + 0x219], 0 */ W8((u32)(r_eax+r_ecx+0x219u), 0x0u);
    /* 0057acd6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057acd9: imul ecx, ecx, 0x224 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x224u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0057acdf: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0057ace2: mov eax, dword ptr [edx + 0x19d0] */ r_eax = R32((u32)(r_edx+0x19d0u));
    /* 0057ace8: mov dword ptr [eax + ecx + 0x21c], 0 */ W32((u32)(r_eax+r_ecx+0x21cu), 0x0u);
    /* 0057acf3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057acf6: imul ecx, ecx, 0x224 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x224u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0057acfc: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0057acff: mov eax, dword ptr [edx + 0x19d0] */ r_eax = R32((u32)(r_edx+0x19d0u));
    /* 0057ad05: mov dword ptr [eax + ecx + 0x220], 0 */ W32((u32)(r_eax+r_ecx+0x220u), 0x0u);
    /* 0057ad10: push 0x1d8 */ { u32 v = 0x1d8u; r_esp -= 4; W32(r_esp, v); }
    /* 0057ad15: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x57ad1au); f_00686d82();
    /* 0057ad1a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057ad1d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0057ad20: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0057ad27: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057ad2b: je 0x57ad3e */ if (fZ) goto L_0057ad3e;
L_0057ad2d:; BB(0x0057ad2d);
    /* 0057ad2d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057ad30: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057ad31: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0057ad34: call 0x57c260 */ r_esp -= 4; W32(r_esp, 0x57ad39u); f_0057c260();
    /* 0057ad39: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0057ad3c: jmp 0x57ad45 */ goto L_0057ad45;
L_0057ad3e:; BB(0x0057ad3e);
    /* 0057ad3e: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0057ad45:; BB(0x0057ad45);
    /* 0057ad45: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057ad48: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0057ad4b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0057ad52: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0057ad55: mov ecx, dword ptr [eax + 0x19d8] */ r_ecx = R32((u32)(r_eax+0x19d8u));
    /* 0057ad5b: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057ad5e: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0057ad61: mov dword ptr [ecx + edx*4], eax */ W32((u32)(r_ecx+r_edx*4), r_eax);
    /* 0057ad64: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0057ad67: mov edx, dword ptr [ecx + 0x19d8] */ r_edx = R32((u32)(r_ecx+0x19d8u));
    /* 0057ad6d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057ad70: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 0057ad73: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0057ad76: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 0057ad79: cmp dword ptr [ebp - 0x10], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057ad7d: jl 0x57ad90 */ if ((fS!=fO)) goto L_0057ad90;
L_0057ad7f:; BB(0x0057ad7f);
    /* 0057ad7f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057ad82: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0057ad85: imul eax, eax, 0xf */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xfu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0057ad88: add eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0057ad8b: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0057ad8e: jmp 0x57ad99 */ goto L_0057ad99;
L_0057ad90:; BB(0x0057ad90);
    /* 0057ad90: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057ad93: imul ecx, ecx, 0xf */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xfu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0057ad96: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
L_0057ad99:; BB(0x0057ad99);
    /* 0057ad99: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0057ad9b: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 0057ad9d: push 0x1f5 */ { u32 v = 0x1f5u; r_esp -= 4; W32(r_esp, v); }
    /* 0057ada2: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0057ada5: add edx, 0x44 */ {  u32 a = r_edx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0057ada8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057ada9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0057adab: cmp dword ptr [ebp - 0x10], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057adaf: setge al */ r_eax = (r_eax & 0xffffff00u) | ((((fS==fO)) ? 1 : 0) & 0xffu);
    /* 0057adb2: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0057adb5: and eax, 0xfffffff6 */ {  u32 a = r_eax; u32 b = 0xfffffff6u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0057adb8: add eax, 0x19 */ {  u32 a = r_eax; u32 b = 0x19u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0057adbb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057adbc: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0057adbe: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0057adc1: call 0x5f8550 */ r_esp -= 4; W32(r_esp, 0x57adc6u); f_005f8550();
    /* 0057adc6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0057adc8: cmp dword ptr [ebp - 0x10], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057adcc: setge cl */ r_ecx = (r_ecx & 0xffffff00u) | ((((fS==fO)) ? 1 : 0) & 0xffu);
    /* 0057adcf: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0057add2: and ecx, 0xfffffff6 */ {  u32 a = r_ecx; u32 b = 0xfffffff6u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0057add5: add ecx, 0x23 */ {  u32 a = r_ecx; u32 b = 0x23u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0057add8: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0057adda: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057addb: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0057addd: cmp dword ptr [ebp - 0x10], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057ade1: setg dl */ r_edx = (r_edx & 0xffffff00u) | ((((!fZ&&fS==fO)) ? 1 : 0) & 0xffu);
    /* 0057ade4: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0057ade7: and edx, 0xffffffc8 */ {  u32 a = r_edx; u32 b = 0xffffffc8u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0057adea: add edx, 0x67 */ {  u32 a = r_edx; u32 b = 0x67u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0057aded: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057adee: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0057adf3: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0057adf6: mov ecx, dword ptr [eax + 0x19d8] */ r_ecx = R32((u32)(r_eax+0x19d8u));
    /* 0057adfc: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057adff: mov ecx, dword ptr [ecx + edx*4] */ r_ecx = R32((u32)(r_ecx+r_edx*4));
    /* 0057ae02: call 0x5ec8f0 */ r_esp -= 4; W32(r_esp, 0x57ae07u); f_005ec8f0();
    /* 0057ae07: jmp 0x57ac5f */ goto L_0057ac5f;
L_0057ae0c:; BB(0x0057ae0c);
    /* 0057ae0c: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0057ae0f: call 0x57b050 */ r_esp -= 4; W32(r_esp, 0x57ae14u); f_0057b050();
    /* 0057ae14: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0057ae17: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0057ae1e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0057ae1f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0057ae20: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0057ae21: mov esp, ebp */ r_esp = r_ebp;
    /* 0057ae23: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057ae24: ret 8 */ FN_RET(0x0057ab80); r_esp += 12; return;
}

void f_0057ae30(void) /* sub_57AE30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0057ae30);
    /* 0057ae30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057ae31: mov ebp, esp */ r_ebp = r_esp;
    /* 0057ae33: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0057ae36: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0057ae39: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0057ae3c: cmp dword ptr [eax + 0x19d8], 0 */ {  u32 a = R32((u32)(r_eax+0x19d8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057ae43: je 0x57aefa */ if (fZ) goto L_0057aefa;
L_0057ae49:; BB(0x0057ae49);
    /* 0057ae49: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0057ae50: jmp 0x57ae5b */ goto L_0057ae5b;
L_0057ae52:; BB(0x0057ae52);
    /* 0057ae52: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057ae55: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0057ae58: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0057ae5b:; BB(0x0057ae5b);
    /* 0057ae5b: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0057ae5e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057ae61: cmp eax, dword ptr [edx + 0x19dc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x19dcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057ae67: jge 0x57aec8 */ if ((fS==fO)) goto L_0057aec8;
L_0057ae69:; BB(0x0057ae69);
    /* 0057ae69: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0057ae6c: mov edx, dword ptr [ecx + 0x19d8] */ r_edx = R32((u32)(r_ecx+0x19d8u));
    /* 0057ae72: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057ae75: cmp dword ptr [edx + eax*4], 0 */ {  u32 a = R32((u32)(r_edx+r_eax*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057ae79: je 0x57aec6 */ if (fZ) goto L_0057aec6;
L_0057ae7b:; BB(0x0057ae7b);
    /* 0057ae7b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0057ae7e: mov edx, dword ptr [ecx + 0x19d8] */ r_edx = R32((u32)(r_ecx+0x19d8u));
    /* 0057ae84: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057ae87: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 0057ae8a: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0057ae8d: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0057ae90: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0057ae93: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057ae97: je 0x57aeac */ if (fZ) goto L_0057aeac;
L_0057ae99:; BB(0x0057ae99);
    /* 0057ae99: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0057ae9b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057ae9e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0057aea0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057aea3: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0057aea5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57aea7u); call_ind(t); }
    /* 0057aea7: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0057aeaa: jmp 0x57aeb3 */ goto L_0057aeb3;
L_0057aeac:; BB(0x0057aeac);
    /* 0057aeac: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0057aeb3:; BB(0x0057aeb3);
    /* 0057aeb3: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0057aeb6: mov edx, dword ptr [ecx + 0x19d8] */ r_edx = R32((u32)(r_ecx+0x19d8u));
    /* 0057aebc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057aebf: mov dword ptr [edx + eax*4], 0 */ W32((u32)(r_edx+r_eax*4), 0x0u);
L_0057aec6:; BB(0x0057aec6);
    /* 0057aec6: jmp 0x57ae52 */ goto L_0057ae52;
L_0057aec8:; BB(0x0057aec8);
    /* 0057aec8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0057aecb: mov edx, dword ptr [ecx + 0x19d8] */ r_edx = R32((u32)(r_ecx+0x19d8u));
    /* 0057aed1: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0057aed4: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057aed7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057aed8: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x57aeddu); f_00686cae();
    /* 0057aedd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057aee0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0057aee3: mov dword ptr [ecx + 0x19d8], 0 */ W32((u32)(r_ecx+0x19d8u), 0x0u);
    /* 0057aeed: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0057aef0: mov dword ptr [edx + 0x19dc], 0 */ W32((u32)(r_edx+0x19dcu), 0x0u);
L_0057aefa:; BB(0x0057aefa);
    /* 0057aefa: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0057aefd: cmp dword ptr [eax + 0x19d0], 0 */ {  u32 a = R32((u32)(r_eax+0x19d0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057af04: je 0x57aff1 */ if (fZ) goto L_0057aff1;
L_0057af0a:; BB(0x0057af0a);
    /* 0057af0a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0057af11: jmp 0x57af1c */ goto L_0057af1c;
L_0057af13:; BB(0x0057af13);
    /* 0057af13: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057af16: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0057af19: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0057af1c:; BB(0x0057af1c);
    /* 0057af1c: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0057af1f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057af22: cmp eax, dword ptr [edx + 0x19d4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x19d4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057af28: jge 0x57afbf */ if ((fS==fO)) goto L_0057afbf;
L_0057af2e:; BB(0x0057af2e);
    /* 0057af2e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057af31: imul ecx, ecx, 0x224 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x224u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0057af37: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0057af3a: mov eax, dword ptr [edx + 0x19d0] */ r_eax = R32((u32)(r_edx+0x19d0u));
    /* 0057af40: movzx ecx, byte ptr [eax + ecx + 0x218] */ r_ecx = (u32)R8((u32)(r_eax+r_ecx+0x218u));
    /* 0057af48: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057af4a: je 0x57af74 */ if (fZ) goto L_0057af74;
L_0057af4c:; BB(0x0057af4c);
    /* 0057af4c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057af4f: imul edx, edx, 0x224 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x224u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0057af55: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0057af58: mov ecx, dword ptr [eax + 0x19d0] */ r_ecx = R32((u32)(r_eax+0x19d0u));
    /* 0057af5e: mov edx, dword ptr [ecx + edx + 0x21c] */ r_edx = R32((u32)(r_ecx+r_edx+0x21cu));
    /* 0057af65: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0057af68: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0057af6b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057af6c: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x57af71u); f_00686cae();
    /* 0057af71: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0057af74:; BB(0x0057af74);
    /* 0057af74: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057af77: imul ecx, ecx, 0x224 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x224u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0057af7d: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0057af80: mov eax, dword ptr [edx + 0x19d0] */ r_eax = R32((u32)(r_edx+0x19d0u));
    /* 0057af86: movzx ecx, byte ptr [eax + ecx + 0x219] */ r_ecx = (u32)R8((u32)(r_eax+r_ecx+0x219u));
    /* 0057af8e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057af90: je 0x57afba */ if (fZ) goto L_0057afba;
L_0057af92:; BB(0x0057af92);
    /* 0057af92: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057af95: imul edx, edx, 0x224 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x224u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0057af9b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0057af9e: mov ecx, dword ptr [eax + 0x19d0] */ r_ecx = R32((u32)(r_eax+0x19d0u));
    /* 0057afa4: mov edx, dword ptr [ecx + edx + 0x220] */ r_edx = R32((u32)(r_ecx+r_edx+0x220u));
    /* 0057afab: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0057afae: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057afb1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057afb2: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x57afb7u); f_00686cae();
    /* 0057afb7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0057afba:; BB(0x0057afba);
    /* 0057afba: jmp 0x57af13 */ goto L_0057af13;
L_0057afbf:; BB(0x0057afbf);
    /* 0057afbf: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0057afc2: mov edx, dword ptr [ecx + 0x19d0] */ r_edx = R32((u32)(r_ecx+0x19d0u));
    /* 0057afc8: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0057afcb: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0057afce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057afcf: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x57afd4u); f_00686cae();
    /* 0057afd4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057afd7: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0057afda: mov dword ptr [ecx + 0x19d0], 0 */ W32((u32)(r_ecx+0x19d0u), 0x0u);
    /* 0057afe4: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0057afe7: mov dword ptr [edx + 0x19d4], 0 */ W32((u32)(r_edx+0x19d4u), 0x0u);
L_0057aff1:; BB(0x0057aff1);
    /* 0057aff1: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0057aff4: mov byte ptr [eax + 0x1c4], 0 */ W8((u32)(r_eax+0x1c4u), 0x0u);
    /* 0057affb: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0057affe: mov byte ptr [ecx + 0x1c5], 0 */ W8((u32)(r_ecx+0x1c5u), 0x0u);
    /* 0057b005: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0057b008: mov byte ptr [edx + 0x1bc], 0 */ W8((u32)(r_edx+0x1bcu), 0x0u);
    /* 0057b00f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0057b012: mov byte ptr [eax + 0x1bd], 0 */ W8((u32)(r_eax+0x1bdu), 0x0u);
    /* 0057b019: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0057b01c: cmp dword ptr [ecx + 0x19e0], 0 */ {  u32 a = R32((u32)(r_ecx+0x19e0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057b023: je 0x57b033 */ if (fZ) goto L_0057b033;
L_0057b025:; BB(0x0057b025);
    /* 0057b025: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0057b028: mov ecx, dword ptr [edx + 0x19e0] */ r_ecx = R32((u32)(r_edx+0x19e0u));
    /* 0057b02e: call 0x57d3a0 */ r_esp -= 4; W32(r_esp, 0x57b033u); f_0057d3a0();
L_0057b033:; BB(0x0057b033);
    /* 0057b033: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0057b036: call 0x57b1b0 */ r_esp -= 4; W32(r_esp, 0x57b03bu); f_0057b1b0();
    /* 0057b03b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0057b03e: call 0x57b050 */ r_esp -= 4; W32(r_esp, 0x57b043u); f_0057b050();
    /* 0057b043: mov esp, ebp */ r_esp = r_ebp;
    /* 0057b045: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057b046: ret  */ FN_RET(0x0057ae30); r_esp += 4; return;
}

