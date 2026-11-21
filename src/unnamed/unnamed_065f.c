#include "protos.h"

void f_0065f120(void) /* sub_65F120 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065f120);
    /* 0065f120: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065f121: mov ebp, esp */ r_ebp = r_esp;
    /* 0065f123: sub esp, 0xd4 */ {  u32 a = r_esp; u32 b = 0xd4u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065f129: mov dword ptr [ebp - 0xc4], ecx */ W32((u32)(r_ebp+0xffffff3cu), r_ecx);
    /* 0065f12f: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065f133: jne 0x65f13a */ if (!fZ) goto L_0065f13a;
L_0065f135:; BB(0x0065f135);
    /* 0065f135: jmp 0x65f8e6 */ goto L_0065f8e6;
L_0065f13a:; BB(0x0065f13a);
    /* 0065f13a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0065f13d: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0065f140: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0065f143: add ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0065f146: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0065f149: cmp dword ptr [0x163068c], 0 */ {  u32 a = R32((u32)(0x163068cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065f150: je 0x65f19f */ if (fZ) goto L_0065f19f;
L_0065f152:; BB(0x0065f152);
    /* 0065f152: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065f155: movsx eax, byte ptr [edx + 0x3a] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x3au));
    /* 0065f159: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065f15c: jne 0x65f16a */ if (!fZ) goto L_0065f16a;
L_0065f15e:; BB(0x0065f15e);
    /* 0065f15e: mov dword ptr [ebp - 0xc8], 0x6b27f8 */ W32((u32)(r_ebp+0xffffff38u), 0x6b27f8u);
    /* 0065f168: jmp 0x65f176 */ goto L_0065f176;
L_0065f16a:; BB(0x0065f16a);
    /* 0065f16a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065f16d: add ecx, 0x21 */ {  u32 a = r_ecx; u32 b = 0x21u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0065f170: mov dword ptr [ebp - 0xc8], ecx */ W32((u32)(r_ebp+0xffffff38u), r_ecx);
L_0065f176:; BB(0x0065f176);
    /* 0065f176: mov edx, dword ptr [ebp - 0xc8] */ r_edx = R32((u32)(r_ebp+0xffffff38u));
    /* 0065f17c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065f17d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065f180: mov cl, byte ptr [eax + 0x3b] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x3bu))) & 0xffu);
    /* 0065f183: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065f184: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065f187: mov al, byte ptr [edx + 0x3a] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x3au))) & 0xffu);
    /* 0065f18a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065f18b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065f18e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065f18f: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 0065f195: call 0x63db60 */ r_esp -= 4; W32(r_esp, 0x65f19au); f_0063db60();
    /* 0065f19a: jmp 0x65f8e6 */ goto L_0065f8e6;
L_0065f19f:; BB(0x0065f19f);
    /* 0065f19f: mov edx, dword ptr [ebp - 0xc4] */ r_edx = R32((u32)(r_ebp+0xffffff3cu));
    /* 0065f1a5: movzx eax, byte ptr [edx + 0x1d5] */ r_eax = (u32)R8((u32)(r_edx+0x1d5u));
    /* 0065f1ac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065f1ae: je 0x65f363 */ if (fZ) goto L_0065f363;
L_0065f1b4:; BB(0x0065f1b4);
    /* 0065f1b4: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0065f1ba: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 0065f1bd: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0065f1bf: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0065f1c2: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065f1c5: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x65f1cau); f_0063aac0();
    /* 0065f1ca: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0065f1cc: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0065f1cf: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0065f1d1: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065f1d5: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0065f1d8: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 0065f1db: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065f1dd: jne 0x65f1ef */ if (!fZ) goto L_0065f1ef;
L_0065f1df:; BB(0x0065f1df);
    /* 0065f1df: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0065f1e5: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 0065f1e8: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0065f1ea: call 0x63b0a0 */ r_esp -= 4; W32(r_esp, 0x65f1efu); f_0063b0a0();
L_0065f1ef:; BB(0x0065f1ef);
    /* 0065f1ef: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065f1f2: call 0x629c70 */ r_esp -= 4; W32(r_esp, 0x65f1f7u); f_00629c70();
    /* 0065f1f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065f1f8: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0065f1fe: call 0x6368b0 */ r_esp -= 4; W32(r_esp, 0x65f203u); f_006368b0();
    /* 0065f203: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0065f206: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065f208: je 0x65f27f */ if (fZ) goto L_0065f27f;
L_0065f20a:; BB(0x0065f20a);
    /* 0065f20a: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0065f210: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 0065f213: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0065f215: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0065f218: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065f21b: call 0x629c70 */ r_esp -= 4; W32(r_esp, 0x65f220u); f_00629c70();
    /* 0065f220: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065f221: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0065f227: call 0x6369b0 */ r_esp -= 4; W32(r_esp, 0x65f22cu); f_006369b0();
    /* 0065f22c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0065f22f: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0065f235: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 0065f238: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0065f23d: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 0065f240: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065f243: mov edx, dword ptr [edx + eax*4] */ r_edx = R32((u32)(r_edx+r_eax*4));
    /* 0065f246: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0065f248: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0065f24d: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 0065f250: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0065f252: mov dword ptr [edx + 4], 0 */ W32((u32)(r_edx+0x4u), 0x0u);
    /* 0065f259: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0065f25e: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 0065f261: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065f264: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065f267: mov dword ptr [ecx + edx*4], eax */ W32((u32)(r_ecx+r_edx*4), r_eax);
    /* 0065f26a: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0065f270: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 0065f273: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065f276: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 0065f279: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065f27c: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
L_0065f27f:; BB(0x0065f27f);
    /* 0065f27f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0065f282: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065f283: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0065f289: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 0065f28c: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0065f28e: call 0x63ab10 */ r_esp -= 4; W32(r_esp, 0x65f293u); f_0063ab10();
    /* 0065f293: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065f296: movsx ecx, byte ptr [eax + 0x3a] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x3au));
    /* 0065f29a: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0065f29d: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0065f2a3: mov eax, dword ptr [edx + 0x58] */ r_eax = R32((u32)(r_edx+0x58u));
    /* 0065f2a6: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0065f2a8: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0065f2ab: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0065f2ae: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x65f2b3u); f_0063aac0();
    /* 0065f2b3: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0065f2b6: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0065f2b8: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0065f2bd: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 0065f2c0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0065f2c2: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 0065f2c5: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0065f2c8: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x65f2cdu); f_0063aac0();
    /* 0065f2cd: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0065f2cf: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0065f2d2: cmp dword ptr [ebp - 0x34], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065f2d6: jne 0x65f326 */ if (!fZ) goto L_0065f326;
L_0065f2d8:; BB(0x0065f2d8);
    /* 0065f2d8: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0065f2de: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 0065f2e1: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0065f2e3: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0065f2e6: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0065f2eb: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0065f2ee: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x65f2f3u); f_0063aac0();
    /* 0065f2f3: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065f2f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065f2f7: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x65f2fcu); f_00686d8e();
    /* 0065f2fc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065f2ff: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065f302: movsx edx, byte ptr [ecx + 0x3b] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x3bu));
    /* 0065f306: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 0065f309: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0065f30e: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 0065f311: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0065f313: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 0065f316: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0065f319: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x65f31eu); f_0063aac0();
    /* 0065f31e: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0065f321: mov dword ptr [eax + 0x54], ecx */ W32((u32)(r_eax+0x54u), r_ecx);
    /* 0065f324: jmp 0x65f34f */ goto L_0065f34f;
L_0065f326:; BB(0x0065f326);
    /* 0065f326: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0065f32c: mov eax, dword ptr [edx + 0x58] */ r_eax = R32((u32)(r_edx+0x58u));
    /* 0065f32f: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0065f331: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 0065f334: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065f337: add edx, 0x21 */ {  u32 a = r_edx; u32 b = 0x21u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0065f33a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065f33b: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0065f33e: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x65f343u); f_0063aac0();
    /* 0065f343: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065f346: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065f347: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x65f34cu); f_00686d8e();
    /* 0065f34c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0065f34f:; BB(0x0065f34f);
    /* 0065f34f: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0065f354: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 0065f357: mov ecx, dword ptr [ecx] */ r_ecx = R32((u32)(r_ecx));
    /* 0065f359: call 0x63b0a0 */ r_esp -= 4; W32(r_esp, 0x65f35eu); f_0063b0a0();
    /* 0065f35e: jmp 0x65f88c */ goto L_0065f88c;
L_0065f363:; BB(0x0065f363);
    /* 0065f363: mov edx, dword ptr [ebp - 0xc4] */ r_edx = R32((u32)(r_ebp+0xffffff3cu));
    /* 0065f369: movzx eax, byte ptr [edx + 0x1d6] */ r_eax = (u32)R8((u32)(r_edx+0x1d6u));
    /* 0065f370: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065f372: je 0x65f6b6 */ if (fZ) goto L_0065f6b6;
L_0065f378:; BB(0x0065f378);
    /* 0065f378: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0065f37e: cmp dword ptr [ecx + 0x34], 0 */ {  u32 a = R32((u32)(r_ecx+0x34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065f382: je 0x65f6b6 */ if (fZ) goto L_0065f6b6;
L_0065f388:; BB(0x0065f388);
    /* 0065f388: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0065f38e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0065f390: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0065f396: mov edx, dword ptr [eax + 0x31c] */ r_edx = R32((u32)(r_eax+0x31cu));
    /* 0065f39c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x65f39eu); call_ind(t); }
    /* 0065f39e: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0065f3a1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065f3a3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065f3a5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065f3a8: call 0x63a3e0 */ r_esp -= 4; W32(r_esp, 0x65f3adu); f_0063a3e0();
    /* 0065f3ad: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0065f3b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065f3b1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065f3b4: call 0x63ab10 */ r_esp -= 4; W32(r_esp, 0x65f3b9u); f_0063ab10();
    /* 0065f3b9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065f3bc: movsx edx, byte ptr [ecx + 0x3a] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x3au));
    /* 0065f3c0: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 0065f3c3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065f3c6: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x65f3cbu); f_0063aac0();
    /* 0065f3cb: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0065f3ce: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0065f3d0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065f3d3: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x65f3d8u); f_0063aac0();
    /* 0065f3d8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0065f3da: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 0065f3dd: cmp dword ptr [ebp - 0x4c], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065f3e1: jne 0x65f416 */ if (!fZ) goto L_0065f416;
L_0065f3e3:; BB(0x0065f3e3);
    /* 0065f3e3: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0065f3e8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065f3eb: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x65f3f0u); f_0063aac0();
    /* 0065f3f0: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065f3f3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065f3f4: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x65f3f9u); f_00686d8e();
    /* 0065f3f9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065f3fc: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065f3ff: movsx ecx, byte ptr [eax + 0x3b] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x3bu));
    /* 0065f403: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 0065f406: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065f409: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x65f40eu); f_0063aac0();
    /* 0065f40e: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0065f411: mov dword ptr [eax + 0x54], edx */ W32((u32)(r_eax+0x54u), r_edx);
    /* 0065f414: jmp 0x65f431 */ goto L_0065f431;
L_0065f416:; BB(0x0065f416);
    /* 0065f416: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065f419: add eax, 0x21 */ {  u32 a = r_eax; u32 b = 0x21u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065f41c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065f41d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065f420: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x65f425u); f_0063aac0();
    /* 0065f425: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065f428: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065f429: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x65f42eu); f_00686d8e();
    /* 0065f42e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0065f431:; BB(0x0065f431);
    /* 0065f431: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065f434: call 0x63b0a0 */ r_esp -= 4; W32(r_esp, 0x65f439u); f_0063b0a0();
    /* 0065f439: cmp dword ptr [0x163068c], 0 */ {  u32 a = R32((u32)(0x163068cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065f440: jne 0x65f647 */ if (!fZ) goto L_0065f647;
L_0065f446:; BB(0x0065f446);
    /* 0065f446: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0065f44d: jmp 0x65f458 */ goto L_0065f458;
L_0065f44f:; BB(0x0065f44f);
    /* 0065f44f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065f452: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0065f455: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_0065f458:; BB(0x0065f458);
    /* 0065f458: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0065f45e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0065f460: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0065f466: mov edx, dword ptr [eax + 0x10c] */ r_edx = R32((u32)(r_eax+0x10cu));
    /* 0065f46c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x65f46eu); call_ind(t); }
    /* 0065f46e: cmp dword ptr [ebp - 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0065f471: jge 0x65f647 */ if ((fS==fO)) goto L_0065f647;
L_0065f477:; BB(0x0065f477);
    /* 0065f477: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 0065f47c: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0065f47f: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065f482: cmp edx, dword ptr [ecx + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065f485: jne 0x65f489 */ if (!fZ) goto L_0065f489;
L_0065f487:; BB(0x0065f487);
    /* 0065f487: jmp 0x65f44f */ goto L_0065f44f;
L_0065f489:; BB(0x0065f489);
    /* 0065f489: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0065f48e: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 0065f491: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065f494: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 0065f497: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 0065f49a: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0065f49d: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x65f4a2u); f_0063aac0();
    /* 0065f4a2: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0065f4a4: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
    /* 0065f4a7: cmp dword ptr [ebp - 0x54], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffacu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065f4ab: je 0x65f4cc */ if (fZ) goto L_0065f4cc;
L_0065f4ad:; BB(0x0065f4ad);
    /* 0065f4ad: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0065f4b0: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x65f4b5u); f_0063aac0();
    /* 0065f4b5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0065f4b7: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 0065f4ba: cmp dword ptr [ebp - 0x58], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffa8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065f4be: je 0x65f4cc */ if (fZ) goto L_0065f4cc;
L_0065f4c0:; BB(0x0065f4c0);
    /* 0065f4c0: mov dword ptr [ebp - 0xcc], 0 */ W32((u32)(r_ebp+0xffffff34u), 0x0u);
    /* 0065f4ca: jmp 0x65f4d6 */ goto L_0065f4d6;
L_0065f4cc:; BB(0x0065f4cc);
    /* 0065f4cc: mov dword ptr [ebp - 0xcc], 1 */ W32((u32)(r_ebp+0xffffff34u), 0x1u);
L_0065f4d6:; BB(0x0065f4d6);
    /* 0065f4d6: movzx eax, byte ptr [ebp - 0xcc] */ r_eax = (u32)R8((u32)(r_ebp+0xffffff34u));
    /* 0065f4dd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065f4df: je 0x65f642 */ if (fZ) goto L_0065f642;
L_0065f4e5:; BB(0x0065f4e5);
    /* 0065f4e5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065f4e8: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x65f4edu); f_0063aac0();
    /* 0065f4ed: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065f4f0: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 0065f4f3: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0065f4f9: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 0065f4fc: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065f4ff: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 0065f502: mov dword ptr [ebp - 0x64], ecx */ W32((u32)(r_ebp+0xffffff9cu), r_ecx);
    /* 0065f505: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0065f508: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x65f50du); f_0063aac0();
    /* 0065f50d: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065f510: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 0065f513: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0065f516: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065f517: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0065f51a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065f51b: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x65f520u); f_00686ec0();
    /* 0065f520: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065f523: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065f525: jne 0x65f642 */ if (!fZ) goto L_0065f642;
L_0065f52b:; BB(0x0065f52b);
    /* 0065f52b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065f52e: movsx edx, byte ptr [ecx + 0x3a] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x3au));
    /* 0065f532: mov dword ptr [ebp - 0x70], edx */ W32((u32)(r_ebp+0xffffff90u), r_edx);
    /* 0065f535: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0065f53a: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 0065f53d: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065f540: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 0065f543: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 0065f546: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0065f549: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x65f54eu); f_0063aac0();
    /* 0065f54e: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 0065f551: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0065f553: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065f556: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x65f55bu); f_0063aac0();
    /* 0065f55b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0065f55d: mov dword ptr [ebp - 0x74], edx */ W32((u32)(r_ebp+0xffffff8cu), r_edx);
    /* 0065f560: cmp dword ptr [ebp - 0x74], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff8cu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065f564: jne 0x65f5bb */ if (!fZ) goto L_0065f5bb;
L_0065f566:; BB(0x0065f566);
    /* 0065f566: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0065f56b: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 0065f56e: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065f571: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 0065f574: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 0065f577: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0065f57c: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 0065f57f: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x65f584u); f_0063aac0();
    /* 0065f584: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065f587: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065f588: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x65f58du); f_00686d8e();
    /* 0065f58d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065f590: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065f593: movsx edx, byte ptr [ecx + 0x3b] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x3bu));
    /* 0065f597: mov dword ptr [ebp - 0x80], edx */ W32((u32)(r_ebp+0xffffff80u), r_edx);
    /* 0065f59a: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0065f59f: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 0065f5a2: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065f5a5: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 0065f5a8: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 0065f5ab: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 0065f5ae: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x65f5b3u); f_0063aac0();
    /* 0065f5b3: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 0065f5b6: mov dword ptr [eax + 0x54], ecx */ W32((u32)(r_eax+0x54u), r_ecx);
    /* 0065f5b9: jmp 0x65f61b */ goto L_0065f61b;
L_0065f5bb:; BB(0x0065f5bb);
    /* 0065f5bb: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0065f5c1: mov eax, dword ptr [edx + 0x58] */ r_eax = R32((u32)(r_edx+0x58u));
    /* 0065f5c4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065f5c7: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 0065f5ca: mov dword ptr [ebp - 0x84], edx */ W32((u32)(r_ebp+0xffffff7cu), r_edx);
    /* 0065f5d0: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065f5d3: add eax, 0x21 */ {  u32 a = r_eax; u32 b = 0x21u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065f5d6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065f5d7: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0065f5dd: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x65f5e2u); f_0063aac0();
    /* 0065f5e2: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065f5e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065f5e6: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x65f5ebu); f_00686d8e();
    /* 0065f5eb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065f5ee: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0065f5f4: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 0065f5f7: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065f5fa: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 0065f5fd: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0065f600: mov dword ptr [ebp - 0x88], edx */ W32((u32)(r_ebp+0xffffff78u), r_edx);
    /* 0065f606: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065f609: add eax, 0x21 */ {  u32 a = r_eax; u32 b = 0x21u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065f60c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065f60d: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0065f613: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 0065f616: call 0x664300 */ r_esp -= 4; W32(r_esp, 0x65f61bu); f_00664300();
L_0065f61b:; BB(0x0065f61b);
    /* 0065f61b: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0065f621: mov eax, dword ptr [edx + 0x58] */ r_eax = R32((u32)(r_edx+0x58u));
    /* 0065f624: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065f627: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 0065f62a: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 0065f62d: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 0065f633: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065f635: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065f637: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 0065f63d: call 0x6464d0 */ r_esp -= 4; W32(r_esp, 0x65f642u); f_006464d0();
L_0065f642:; BB(0x0065f642);
    /* 0065f642: jmp 0x65f44f */ goto L_0065f44f;
L_0065f647:; BB(0x0065f647);
    /* 0065f647: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065f64a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065f64b: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 0065f651: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 0065f654: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0065f657: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065f658: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 0065f65e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0065f660: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0065f666: mov edx, dword ptr [eax + 0x150] */ r_edx = R32((u32)(r_eax+0x150u));
    /* 0065f66c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x65f66eu); call_ind(t); }
    /* 0065f66e: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 0065f673: mov dword ptr [eax + 0x34], 0 */ W32((u32)(r_eax+0x34u), 0x0u);
    /* 0065f67a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065f67d: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0065f680: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065f683: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0065f686: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065f68a: je 0x65f6a2 */ if (fZ) goto L_0065f6a2;
L_0065f68c:; BB(0x0065f68c);
    /* 0065f68c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065f68e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065f691: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0065f693: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065f696: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0065f698: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65f69au); call_ind(t); }
    /* 0065f69a: mov dword ptr [ebp - 0xd0], eax */ W32((u32)(r_ebp+0xffffff30u), r_eax);
    /* 0065f6a0: jmp 0x65f6ac */ goto L_0065f6ac;
L_0065f6a2:; BB(0x0065f6a2);
    /* 0065f6a2: mov dword ptr [ebp - 0xd0], 0 */ W32((u32)(r_ebp+0xffffff30u), 0x0u);
L_0065f6ac:; BB(0x0065f6ac);
    /* 0065f6ac: jmp 0x65f8e6 */ goto L_0065f8e6;
L_0065f6b6:; BB(0x0065f6b6);
    /* 0065f6b6: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0065f6bd: jmp 0x65f6c8 */ goto L_0065f6c8;
L_0065f6bf:; BB(0x0065f6bf);
    /* 0065f6bf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065f6c2: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0065f6c5: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_0065f6c8:; BB(0x0065f6c8);
    /* 0065f6c8: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0065f6ce: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0065f6d0: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0065f6d6: mov edx, dword ptr [eax + 0x10c] */ r_edx = R32((u32)(r_eax+0x10cu));
    /* 0065f6dc: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x65f6deu); call_ind(t); }
    /* 0065f6de: cmp dword ptr [ebp - 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0065f6e1: jge 0x65f88c */ if ((fS==fO)) goto L_0065f88c;
L_0065f6e7:; BB(0x0065f6e7);
    /* 0065f6e7: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0065f6ec: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 0065f6ef: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065f6f2: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 0065f6f5: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 0065f6fb: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 0065f701: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x65f706u); f_0063aac0();
    /* 0065f706: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0065f708: mov dword ptr [ebp - 0x90], ecx */ W32((u32)(r_ebp+0xffffff70u), r_ecx);
    /* 0065f70e: cmp dword ptr [ebp - 0x90], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff70u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065f715: je 0x65f73f */ if (fZ) goto L_0065f73f;
L_0065f717:; BB(0x0065f717);
    /* 0065f717: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 0065f71d: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x65f722u); f_0063aac0();
    /* 0065f722: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0065f724: mov dword ptr [ebp - 0x94], edx */ W32((u32)(r_ebp+0xffffff6cu), r_edx);
    /* 0065f72a: cmp dword ptr [ebp - 0x94], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff6cu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065f731: je 0x65f73f */ if (fZ) goto L_0065f73f;
L_0065f733:; BB(0x0065f733);
    /* 0065f733: mov dword ptr [ebp - 0xd4], 0 */ W32((u32)(r_ebp+0xffffff2cu), 0x0u);
    /* 0065f73d: jmp 0x65f749 */ goto L_0065f749;
L_0065f73f:; BB(0x0065f73f);
    /* 0065f73f: mov dword ptr [ebp - 0xd4], 1 */ W32((u32)(r_ebp+0xffffff2cu), 0x1u);
L_0065f749:; BB(0x0065f749);
    /* 0065f749: movzx eax, byte ptr [ebp - 0xd4] */ r_eax = (u32)R8((u32)(r_ebp+0xffffff2cu));
    /* 0065f750: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065f752: jne 0x65f887 */ if (!fZ) goto L_0065f887;
L_0065f758:; BB(0x0065f758);
    /* 0065f758: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065f75b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065f75c: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0065f762: mov eax, dword ptr [edx + 0x58] */ r_eax = R32((u32)(r_edx+0x58u));
    /* 0065f765: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065f768: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 0065f76b: call 0x63ab10 */ r_esp -= 4; W32(r_esp, 0x65f770u); f_0063ab10();
    /* 0065f770: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065f773: movsx eax, byte ptr [edx + 0x3a] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x3au));
    /* 0065f777: mov dword ptr [ebp - 0xa0], eax */ W32((u32)(r_ebp+0xffffff60u), r_eax);
    /* 0065f77d: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0065f783: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 0065f786: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065f789: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 0065f78c: mov dword ptr [ebp - 0x9c], ecx */ W32((u32)(r_ebp+0xffffff64u), r_ecx);
    /* 0065f792: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 0065f798: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x65f79du); f_0063aac0();
    /* 0065f79d: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 0065f7a3: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0065f7a5: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0065f7aa: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 0065f7ad: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065f7b0: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 0065f7b3: mov dword ptr [ebp - 0xa4], eax */ W32((u32)(r_ebp+0xffffff5cu), r_eax);
    /* 0065f7b9: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0065f7bf: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x65f7c4u); f_0063aac0();
    /* 0065f7c4: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0065f7c6: mov dword ptr [ebp - 0xa8], ecx */ W32((u32)(r_ebp+0xffffff58u), r_ecx);
    /* 0065f7cc: cmp dword ptr [ebp - 0xa8], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff58u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065f7d3: jne 0x65f83e */ if (!fZ) goto L_0065f83e;
L_0065f7d5:; BB(0x0065f7d5);
    /* 0065f7d5: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0065f7db: mov eax, dword ptr [edx + 0x58] */ r_eax = R32((u32)(r_edx+0x58u));
    /* 0065f7de: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065f7e1: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 0065f7e4: mov dword ptr [ebp - 0xac], edx */ W32((u32)(r_ebp+0xffffff54u), r_edx);
    /* 0065f7ea: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0065f7ef: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 0065f7f5: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x65f7fau); f_0063aac0();
    /* 0065f7fa: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065f7fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065f7fe: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x65f803u); f_00686d8e();
    /* 0065f803: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065f806: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065f809: movsx ecx, byte ptr [eax + 0x3b] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x3bu));
    /* 0065f80d: mov dword ptr [ebp - 0xb4], ecx */ W32((u32)(r_ebp+0xffffff4cu), r_ecx);
    /* 0065f813: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0065f819: mov eax, dword ptr [edx + 0x58] */ r_eax = R32((u32)(r_edx+0x58u));
    /* 0065f81c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065f81f: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 0065f822: mov dword ptr [ebp - 0xb0], edx */ W32((u32)(r_ebp+0xffffff50u), r_edx);
    /* 0065f828: mov ecx, dword ptr [ebp - 0xb0] */ r_ecx = R32((u32)(r_ebp+0xffffff50u));
    /* 0065f82e: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x65f833u); f_0063aac0();
    /* 0065f833: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0065f839: mov dword ptr [eax + 0x54], ecx */ W32((u32)(r_eax+0x54u), r_ecx);
    /* 0065f83c: jmp 0x65f871 */ goto L_0065f871;
L_0065f83e:; BB(0x0065f83e);
    /* 0065f83e: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0065f844: mov eax, dword ptr [edx + 0x58] */ r_eax = R32((u32)(r_edx+0x58u));
    /* 0065f847: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065f84a: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 0065f84d: mov dword ptr [ebp - 0xb8], edx */ W32((u32)(r_ebp+0xffffff48u), r_edx);
    /* 0065f853: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065f856: add eax, 0x21 */ {  u32 a = r_eax; u32 b = 0x21u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065f859: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065f85a: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 0065f860: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x65f865u); f_0063aac0();
    /* 0065f865: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065f868: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065f869: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x65f86eu); f_00686d8e();
    /* 0065f86e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0065f871:; BB(0x0065f871);
    /* 0065f871: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0065f877: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 0065f87a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065f87d: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 0065f880: call 0x63b0a0 */ r_esp -= 4; W32(r_esp, 0x65f885u); f_0063b0a0();
    /* 0065f885: jmp 0x65f8e6 */ goto L_0065f8e6;
L_0065f887:; BB(0x0065f887);
    /* 0065f887: jmp 0x65f6bf */ goto L_0065f6bf;
L_0065f88c:; BB(0x0065f88c);
    /* 0065f88c: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 0065f892: movzx edx, byte ptr [ecx + 0x1d5] */ r_edx = (u32)R8((u32)(r_ecx+0x1d5u));
    /* 0065f899: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065f89b: je 0x65f8e6 */ if (fZ) goto L_0065f8e6;
L_0065f89d:; BB(0x0065f89d);
    /* 0065f89d: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0065f8a3: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x65f8a8u); f_006375b0();
    /* 0065f8a8: mov dword ptr [ebp - 0xbc], eax */ W32((u32)(r_ebp+0xffffff44u), r_eax);
    /* 0065f8ae: mov ecx, dword ptr [ebp - 0xbc] */ r_ecx = R32((u32)(r_ebp+0xffffff44u));
    /* 0065f8b4: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x65f8b9u); f_0063aac0();
    /* 0065f8b9: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065f8bc: mov dword ptr [ebp - 0xc0], eax */ W32((u32)(r_ebp+0xffffff40u), r_eax);
    /* 0065f8c2: mov eax, dword ptr [ebp - 0xc0] */ r_eax = R32((u32)(r_ebp+0xffffff40u));
    /* 0065f8c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065f8c9: push 0x6dec9c */ { u32 v = 0x6dec9cu; r_esp -= 4; W32(r_esp, v); }
    /* 0065f8ce: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 0065f8d4: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 0065f8d7: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 0065f8dc: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0065f8df: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0065f8e1: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 0065f8e4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65f8e6u); call_ind(t); }
L_0065f8e6:; BB(0x0065f8e6);
    /* 0065f8e6: mov esp, ebp */ r_esp = r_ebp;
    /* 0065f8e8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065f8e9: ret 4 */ FN_RET(0x0065f120); r_esp += 8; return;
}

void f_0065f940(void) /* sub_65F940 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065f940);
    /* 0065f940: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065f941: mov ebp, esp */ r_ebp = r_esp;
    /* 0065f943: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065f946: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0065f949: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0065f950: jmp 0x65f95b */ goto L_0065f95b;
L_0065f952:; BB(0x0065f952);
    /* 0065f952: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065f955: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065f958: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0065f95b:; BB(0x0065f95b);
    /* 0065f95b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065f95d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065f960: call 0x5fb720 */ r_esp -= 4; W32(r_esp, 0x65f965u); f_005fb720();
    /* 0065f965: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0065f968: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065f96b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0065f96d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065f970: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 0065f976: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65f978u); call_ind(t); }
    /* 0065f978: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0065f97b: jge 0x65f9a4 */ if ((fS==fO)) goto L_0065f9a4;
L_0065f97d:; BB(0x0065f97d);
    /* 0065f97d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065f97f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065f982: call 0x5fb720 */ r_esp -= 4; W32(r_esp, 0x65f987u); f_005fb720();
    /* 0065f987: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0065f98a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065f98d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065f98e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065f991: add ecx, 0x70 */ {  u32 a = r_ecx; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0065f994: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x65f999u); f_0060ca40();
    /* 0065f999: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065f99a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065f99d: call 0x65ef90 */ r_esp -= 4; W32(r_esp, 0x65f9a2u); f_0065ef90();
    /* 0065f9a2: jmp 0x65f952 */ goto L_0065f952;
L_0065f9a4:; BB(0x0065f9a4);
    /* 0065f9a4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065f9a6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065f9a9: call 0x5fb720 */ r_esp -= 4; W32(r_esp, 0x65f9aeu); f_005fb720();
    /* 0065f9ae: mov ecx, eax */ r_ecx = r_eax;
    /* 0065f9b0: call 0x5e4390 */ r_esp -= 4; W32(r_esp, 0x65f9b5u); f_005e4390();
    /* 0065f9b5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065f9b7: je 0x65f9d3 */ if (fZ) goto L_0065f9d3;
L_0065f9b9:; BB(0x0065f9b9);
    /* 0065f9b9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065f9bb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065f9be: call 0x5fb720 */ r_esp -= 4; W32(r_esp, 0x65f9c3u); f_005fb720();
    /* 0065f9c3: mov ecx, eax */ r_ecx = r_eax;
    /* 0065f9c5: call 0x5e4390 */ r_esp -= 4; W32(r_esp, 0x65f9cau); f_005e4390();
    /* 0065f9ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065f9cb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065f9ce: call 0x65f120 */ r_esp -= 4; W32(r_esp, 0x65f9d3u); f_0065f120();
L_0065f9d3:; BB(0x0065f9d3);
    /* 0065f9d3: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0065f9d9: call 0x64ed50 */ r_esp -= 4; W32(r_esp, 0x65f9deu); f_0064ed50();
    /* 0065f9de: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065f9e1: cmp dword ptr [edx + 0x1e4], -1 */ {  u32 a = R32((u32)(r_edx+0x1e4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065f9e8: je 0x65fa8e */ if (fZ) goto L_0065fa8e;
L_0065f9ee:; BB(0x0065f9ee);
    /* 0065f9ee: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0065f9f1: mov ecx, dword ptr [eax + 0x1e4] */ r_ecx = R32((u32)(r_eax+0x1e4u));
    /* 0065f9f7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065f9f8: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0065f9fe: call 0x6352f0 */ r_esp -= 4; W32(r_esp, 0x65fa03u); f_006352f0();
    /* 0065fa03: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065fa05: je 0x65fa71 */ if (fZ) goto L_0065fa71;
L_0065fa07:; BB(0x0065fa07);
    /* 0065fa07: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065fa0a: mov eax, dword ptr [edx + 0x1e4] */ r_eax = R32((u32)(r_edx+0x1e4u));
    /* 0065fa10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065fa11: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0065fa17: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0065fa19: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0065fa1f: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 0065fa25: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65fa27u); call_ind(t); }
    /* 0065fa27: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065fa29: je 0x65fa71 */ if (fZ) goto L_0065fa71;
L_0065fa2b:; BB(0x0065fa2b);
    /* 0065fa2b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065fa2e: mov edx, dword ptr [ecx + 0x1e4] */ r_edx = R32((u32)(r_ecx+0x1e4u));
    /* 0065fa34: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065fa35: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0065fa3a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0065fa3c: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0065fa42: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 0065fa48: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65fa4au); call_ind(t); }
    /* 0065fa4a: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0065fa4d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065fa50: mov edx, dword ptr [ecx + 0x1e8] */ r_edx = R32((u32)(r_ecx+0x1e8u));
    /* 0065fa56: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065fa57: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0065fa5a: mov ecx, dword ptr [eax + 0x1e4] */ r_ecx = R32((u32)(r_eax+0x1e4u));
    /* 0065fa60: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065fa61: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065fa64: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0065fa66: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065fa69: mov edx, dword ptr [eax + 0x84] */ r_edx = R32((u32)(r_eax+0x84u));
    /* 0065fa6f: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x65fa71u); call_ind(t); }
L_0065fa71:; BB(0x0065fa71);
    /* 0065fa71: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0065fa74: mov ecx, dword ptr [eax + 0x1e4] */ r_ecx = R32((u32)(r_eax+0x1e4u));
    /* 0065fa7a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065fa7b: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0065fa81: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0065fa83: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0065fa89: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 0065fa8c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x65fa8eu); call_ind(t); }
L_0065fa8e:; BB(0x0065fa8e);
    /* 0065fa8e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0065fa91: movzx ecx, byte ptr [eax + 0x1d6] */ r_ecx = (u32)R8((u32)(r_eax+0x1d6u));
    /* 0065fa98: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065fa9a: je 0x65fab6 */ if (fZ) goto L_0065fab6;
L_0065fa9c:; BB(0x0065fa9c);
    /* 0065fa9c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065fa9e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065faa0: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 0065faa6: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0065faa8: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0065faae: mov edx, dword ptr [eax + 0x144] */ r_edx = R32((u32)(r_eax+0x144u));
    /* 0065fab4: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x65fab6u); call_ind(t); }
L_0065fab6:; BB(0x0065fab6);
    /* 0065fab6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0065fab9: movzx ecx, byte ptr [eax + 0x1d5] */ r_ecx = (u32)R8((u32)(r_eax+0x1d5u));
    /* 0065fac0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065fac2: je 0x65fada */ if (fZ) goto L_0065fada;
L_0065fac4:; BB(0x0065fac4);
    /* 0065fac4: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0065faca: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0065facc: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0065fad2: mov edx, dword ptr [eax + 0x384] */ r_edx = R32((u32)(r_eax+0x384u));
    /* 0065fad8: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x65fadau); call_ind(t); }
L_0065fada:; BB(0x0065fada);
    /* 0065fada: mov esp, ebp */ r_esp = r_ebp;
    /* 0065fadc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065fadd: ret  */ FN_RET(0x0065f940); r_esp += 4; return;
}

void f_0065fae0(void) /* sub_65FAE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065fae0);
    /* 0065fae0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065fae1: mov ebp, esp */ r_ebp = r_esp;
    /* 0065fae3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065fae4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0065fae7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065faea: movzx ecx, byte ptr [eax + 0x1d4] */ r_ecx = (u32)R8((u32)(r_eax+0x1d4u));
    /* 0065faf1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065faf3: je 0x65fb13 */ if (fZ) goto L_0065fb13;
L_0065faf5:; BB(0x0065faf5);
    /* 0065faf5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065faf7: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0065fafd: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0065faff: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0065fb05: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 0065fb08: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x65fb0au); call_ind(t); }
    /* 0065fb0a: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0065fb0d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065fb0f: jne 0x65fb13 */ if (!fZ) goto L_0065fb13;
L_0065fb11:; BB(0x0065fb11);
    /* 0065fb11: jmp 0x65fb5f */ goto L_0065fb5f;
L_0065fb13:; BB(0x0065fb13);
    /* 0065fb13: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0065fb19: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0065fb1b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0065fb21: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0065fb27: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65fb29u); call_ind(t); }
    /* 0065fb29: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0065fb2c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065fb2e: je 0x65fb54 */ if (fZ) goto L_0065fb54;
L_0065fb30:; BB(0x0065fb30);
    /* 0065fb30: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065fb33: movzx eax, byte ptr [edx + 0x1d4] */ r_eax = (u32)R8((u32)(r_edx+0x1d4u));
    /* 0065fb3a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065fb3c: je 0x65fb54 */ if (fZ) goto L_0065fb54;
L_0065fb3e:; BB(0x0065fb3e);
    /* 0065fb3e: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0065fb44: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0065fb46: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0065fb4c: mov eax, dword ptr [edx + 0x384] */ r_eax = R32((u32)(r_edx+0x384u));
    /* 0065fb52: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65fb54u); call_ind(t); }
L_0065fb54:; BB(0x0065fb54);
    /* 0065fb54: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0065fb5a: call 0x64ed50 */ r_esp -= 4; W32(r_esp, 0x65fb5fu); f_0064ed50();
L_0065fb5f:; BB(0x0065fb5f);
    /* 0065fb5f: mov esp, ebp */ r_esp = r_ebp;
    /* 0065fb61: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065fb62: ret  */ FN_RET(0x0065fae0); r_esp += 4; return;
}

void f_0065fb70(void) /* sub_65FB70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065fb70);
    /* 0065fb70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065fb71: mov ebp, esp */ r_ebp = r_esp;
    /* 0065fb73: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065fb76: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0065fb79: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065fb7b: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065fb7e: call 0x5fb720 */ r_esp -= 4; W32(r_esp, 0x65fb83u); f_005fb720();
    /* 0065fb83: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0065fb86: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065fb88: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0065fb8b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065fb8c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065fb8f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0065fb91: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065fb94: mov eax, dword ptr [edx + 0xf0] */ r_eax = R32((u32)(r_edx+0xf0u));
    /* 0065fb9a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65fb9cu); call_ind(t); }
    /* 0065fb9c: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0065fb9f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065fba1: je 0x65fbaa */ if (fZ) goto L_0065fbaa;
L_0065fba3:; BB(0x0065fba3);
    /* 0065fba3: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0065fba5: jmp 0x65fc8d */ goto L_0065fc8d;
L_0065fbaa:; BB(0x0065fbaa);
    /* 0065fbaa: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0065fbb1: jmp 0x65fbbc */ goto L_0065fbbc;
L_0065fbb3:; BB(0x0065fbb3);
    /* 0065fbb3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065fbb6: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0065fbb9: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0065fbbc:; BB(0x0065fbbc);
    /* 0065fbbc: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0065fbc1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0065fbc3: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0065fbc9: mov eax, dword ptr [edx + 0x10c] */ r_eax = R32((u32)(r_edx+0x10cu));
    /* 0065fbcf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65fbd1u); call_ind(t); }
    /* 0065fbd1: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0065fbd4: jge 0x65fc68 */ if ((fS==fO)) goto L_0065fc68;
L_0065fbda:; BB(0x0065fbda);
    /* 0065fbda: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0065fbe0: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 0065fbe3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065fbe6: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 0065fbe9: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0065fbec: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065fbef: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x65fbf4u); f_0063aac0();
    /* 0065fbf4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0065fbf6: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0065fbf9: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065fbfd: je 0x65fc1b */ if (fZ) goto L_0065fc1b;
L_0065fbff:; BB(0x0065fbff);
    /* 0065fbff: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065fc02: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x65fc07u); f_0063aac0();
    /* 0065fc07: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0065fc09: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0065fc0c: cmp dword ptr [ebp - 0xc], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065fc10: je 0x65fc1b */ if (fZ) goto L_0065fc1b;
L_0065fc12:; BB(0x0065fc12);
    /* 0065fc12: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0065fc19: jmp 0x65fc22 */ goto L_0065fc22;
L_0065fc1b:; BB(0x0065fc1b);
    /* 0065fc1b: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
L_0065fc22:; BB(0x0065fc22);
    /* 0065fc22: movzx ecx, byte ptr [ebp - 0x24] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffdcu));
    /* 0065fc26: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065fc28: je 0x65fc63 */ if (fZ) goto L_0065fc63;
L_0065fc2a:; BB(0x0065fc2a);
    /* 0065fc2a: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0065fc30: mov eax, dword ptr [edx + 0x58] */ r_eax = R32((u32)(r_edx+0x58u));
    /* 0065fc33: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065fc36: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 0065fc39: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0065fc3c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065fc3f: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x65fc44u); f_0063aac0();
    /* 0065fc44: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065fc47: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0065fc4a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0065fc4d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065fc4e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065fc51: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065fc52: call dword ptr [0x6b21e4] */ { u32 t = R32((u32)(0x6b21e4u)); r_esp -= 4; W32(r_esp, 0x65fc58u); call_ind(t); }
    /* 0065fc58: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065fc5b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065fc5d: jne 0x65fc63 */ if (!fZ) goto L_0065fc63;
L_0065fc5f:; BB(0x0065fc5f);
    /* 0065fc5f: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0065fc61: jmp 0x65fc8d */ goto L_0065fc8d;
L_0065fc63:; BB(0x0065fc63);
    /* 0065fc63: jmp 0x65fbb3 */ goto L_0065fbb3;
L_0065fc68:; BB(0x0065fc68);
    /* 0065fc68: cmp dword ptr [0x163068c], 0 */ {  u32 a = R32((u32)(0x163068cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065fc6f: je 0x65fc8b */ if (fZ) goto L_0065fc8b;
L_0065fc71:; BB(0x0065fc71);
    /* 0065fc71: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0065fc74: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065fc75: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 0065fc7b: call 0x63dea0 */ r_esp -= 4; W32(r_esp, 0x65fc80u); f_0063dea0();
    /* 0065fc80: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0065fc83: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065fc85: je 0x65fc8b */ if (fZ) goto L_0065fc8b;
L_0065fc87:; BB(0x0065fc87);
    /* 0065fc87: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0065fc89: jmp 0x65fc8d */ goto L_0065fc8d;
L_0065fc8b:; BB(0x0065fc8b);
    /* 0065fc8b: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0065fc8d:; BB(0x0065fc8d);
    /* 0065fc8d: mov esp, ebp */ r_esp = r_ebp;
    /* 0065fc8f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065fc90: ret 4 */ FN_RET(0x0065fb70); r_esp += 8; return;
}

void f_0065fde0(void) /* sub_65FDE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065fde0);
    /* 0065fde0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065fde1: mov ebp, esp */ r_ebp = r_esp;
    /* 0065fde3: sub esp, 0x828 */ {  u32 a = r_esp; u32 b = 0x828u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065fde9: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0065fdee: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065fdf0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0065fdf3: mov dword ptr [ebp - 0x828], ecx */ W32((u32)(r_ebp+0xfffff7d8u), r_ecx);
    /* 0065fdf9: mov byte ptr [ebp - 0x808], 0 */ W8((u32)(r_ebp+0xfffff7f8u), 0x0u);
    /* 0065fe00: push 0x3ff */ { u32 v = 0x3ffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065fe05: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065fe07: lea eax, [ebp - 0x807] */ r_eax = (u32)(r_ebp+0xfffff7f9u);
    /* 0065fe0d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065fe0e: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x65fe13u); f_00686fa2();
    /* 0065fe13: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065fe16: mov dword ptr [ebp - 0x80c], 0 */ W32((u32)(r_ebp+0xfffff7f4u), 0x0u);
    /* 0065fe20: jmp 0x65fe31 */ goto L_0065fe31;
L_0065fe22:; BB(0x0065fe22);
    /* 0065fe22: mov ecx, dword ptr [ebp - 0x80c] */ r_ecx = R32((u32)(r_ebp+0xfffff7f4u));
    /* 0065fe28: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0065fe2b: mov dword ptr [ebp - 0x80c], ecx */ W32((u32)(r_ebp+0xfffff7f4u), r_ecx);
L_0065fe31:; BB(0x0065fe31);
    /* 0065fe31: cmp dword ptr [ebp - 0x80c], 0x64 */ {  u32 a = R32((u32)(r_ebp+0xfffff7f4u)); u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0065fe38: jge 0x65fefb */ if ((fS==fO)) goto L_0065fefb;
L_0065fe3e:; BB(0x0065fe3e);
    /* 0065fe3e: push 0x6ded98 */ { u32 v = 0x6ded98u; r_esp -= 4; W32(r_esp, v); }
    /* 0065fe43: lea edx, [ebp - 0x824] */ r_edx = (u32)(r_ebp+0xfffff7dcu);
    /* 0065fe49: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065fe4a: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x65fe4fu); f_00686d8e();
    /* 0065fe4f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065fe52: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0065fe54: lea eax, [ebp - 0x814] */ r_eax = (u32)(r_ebp+0xfffff7ecu);
    /* 0065fe5a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065fe5b: mov ecx, dword ptr [ebp - 0x80c] */ r_ecx = R32((u32)(r_ebp+0xfffff7f4u));
    /* 0065fe61: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065fe62: call dword ptr [0x6b21dc] */ { u32 t = R32((u32)(0x6b21dcu)); r_esp -= 4; W32(r_esp, 0x65fe68u); call_ind(t); }
    /* 0065fe68: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065fe6b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065fe6c: lea edx, [ebp - 0x824] */ r_edx = (u32)(r_ebp+0xfffff7dcu);
    /* 0065fe72: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065fe73: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x65fe78u); f_00686ec6();
    /* 0065fe78: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065fe7b: push 0x6ded90 */ { u32 v = 0x6ded90u; r_esp -= 4; W32(r_esp, v); }
    /* 0065fe80: lea eax, [ebp - 0x824] */ r_eax = (u32)(r_ebp+0xfffff7dcu);
    /* 0065fe86: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065fe87: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x65fe8cu); f_00686ec6();
    /* 0065fe8c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065fe8f: lea ecx, [ebp - 0x824] */ r_ecx = (u32)(r_ebp+0xfffff7dcu);
    /* 0065fe95: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065fe96: lea edx, [ebp - 0x408] */ r_edx = (u32)(r_ebp+0xfffffbf8u);
    /* 0065fe9c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065fe9d: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x65fea2u); f_00686d8e();
    /* 0065fea2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065fea5: push 0x6c2d28 */ { u32 v = 0x6c2d28u; r_esp -= 4; W32(r_esp, v); }
    /* 0065feaa: lea eax, [ebp - 0x408] */ r_eax = (u32)(r_ebp+0xfffffbf8u);
    /* 0065feb0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065feb1: call 0x5ea9c0 */ r_esp -= 4; W32(r_esp, 0x65feb6u); f_005ea9c0();
    /* 0065feb6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065feb9: mov dword ptr [ebp - 0x810], eax */ W32((u32)(r_ebp+0xfffff7f0u), r_eax);
    /* 0065febf: cmp dword ptr [ebp - 0x810], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffff7f0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065fec6: jne 0x65fee6 */ if (!fZ) goto L_0065fee6;
L_0065fec8:; BB(0x0065fec8);
    /* 0065fec8: lea ecx, [ebp - 0x824] */ r_ecx = (u32)(r_ebp+0xfffff7dcu);
    /* 0065fece: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065fecf: mov edx, dword ptr [ebp - 0x828] */ r_edx = R32((u32)(r_ebp+0xfffff7d8u));
    /* 0065fed5: add edx, 0x1d7 */ {  u32 a = r_edx; u32 b = 0x1d7u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0065fedb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065fedc: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x65fee1u); f_00686d8e();
    /* 0065fee1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065fee4: jmp 0x65fefb */ goto L_0065fefb;
L_0065fee6:; BB(0x0065fee6);
    /* 0065fee6: mov eax, dword ptr [ebp - 0x810] */ r_eax = R32((u32)(r_ebp+0xfffff7f0u));
    /* 0065feec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065feed: call dword ptr [0x6b2258] */ { u32 t = R32((u32)(0x6b2258u)); r_esp -= 4; W32(r_esp, 0x65fef3u); call_ind(t); }
    /* 0065fef3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065fef6: jmp 0x65fe22 */ goto L_0065fe22;
L_0065fefb:; BB(0x0065fefb);
    /* 0065fefb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065fefe: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0065ff00: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x65ff05u); f_00686d72();
    /* 0065ff05: mov esp, ebp */ r_esp = r_ebp;
    /* 0065ff07: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065ff08: ret  */ FN_RET(0x0065fde0); r_esp += 4; return;
}

void f_0065ff10(void) /* sub_65FF10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065ff10);
    /* 0065ff10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065ff11: mov ebp, esp */ r_ebp = r_esp;
    /* 0065ff13: sub esp, 0x828 */ {  u32 a = r_esp; u32 b = 0x828u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065ff19: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0065ff1e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065ff20: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0065ff23: mov dword ptr [ebp - 0x828], ecx */ W32((u32)(r_ebp+0xfffff7d8u), r_ecx);
    /* 0065ff29: mov byte ptr [ebp - 0x808], 0 */ W8((u32)(r_ebp+0xfffff7f8u), 0x0u);
    /* 0065ff30: push 0x3ff */ { u32 v = 0x3ffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065ff35: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065ff37: lea eax, [ebp - 0x807] */ r_eax = (u32)(r_ebp+0xfffff7f9u);
    /* 0065ff3d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065ff3e: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x65ff43u); f_00686fa2();
    /* 0065ff43: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065ff46: mov dword ptr [ebp - 0x80c], 0 */ W32((u32)(r_ebp+0xfffff7f4u), 0x0u);
    /* 0065ff50: jmp 0x65ff61 */ goto L_0065ff61;
L_0065ff52:; BB(0x0065ff52);
    /* 0065ff52: mov ecx, dword ptr [ebp - 0x80c] */ r_ecx = R32((u32)(r_ebp+0xfffff7f4u));
    /* 0065ff58: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0065ff5b: mov dword ptr [ebp - 0x80c], ecx */ W32((u32)(r_ebp+0xfffff7f4u), r_ecx);
L_0065ff61:; BB(0x0065ff61);
    /* 0065ff61: cmp dword ptr [ebp - 0x80c], 0x64 */ {  u32 a = R32((u32)(r_ebp+0xfffff7f4u)); u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0065ff68: jge 0x660011 */ if ((fS==fO)) goto L_00660011;
L_0065ff6e:; BB(0x0065ff6e);
    /* 0065ff6e: push 0x6ded98 */ { u32 v = 0x6ded98u; r_esp -= 4; W32(r_esp, v); }
    /* 0065ff73: lea edx, [ebp - 0x824] */ r_edx = (u32)(r_ebp+0xfffff7dcu);
    /* 0065ff79: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065ff7a: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x65ff7fu); f_00686d8e();
    /* 0065ff7f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065ff82: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0065ff84: lea eax, [ebp - 0x814] */ r_eax = (u32)(r_ebp+0xfffff7ecu);
    /* 0065ff8a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065ff8b: mov ecx, dword ptr [ebp - 0x80c] */ r_ecx = R32((u32)(r_ebp+0xfffff7f4u));
    /* 0065ff91: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065ff92: call dword ptr [0x6b21dc] */ { u32 t = R32((u32)(0x6b21dcu)); r_esp -= 4; W32(r_esp, 0x65ff98u); call_ind(t); }
    /* 0065ff98: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065ff9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065ff9c: lea edx, [ebp - 0x824] */ r_edx = (u32)(r_ebp+0xfffff7dcu);
    /* 0065ffa2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065ffa3: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x65ffa8u); f_00686ec6();
    /* 0065ffa8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065ffab: push 0x6ded90 */ { u32 v = 0x6ded90u; r_esp -= 4; W32(r_esp, v); }
    /* 0065ffb0: lea eax, [ebp - 0x824] */ r_eax = (u32)(r_ebp+0xfffff7dcu);
    /* 0065ffb6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065ffb7: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x65ffbcu); f_00686ec6();
    /* 0065ffbc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065ffbf: lea ecx, [ebp - 0x824] */ r_ecx = (u32)(r_ebp+0xfffff7dcu);
    /* 0065ffc5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065ffc6: lea edx, [ebp - 0x408] */ r_edx = (u32)(r_ebp+0xfffffbf8u);
    /* 0065ffcc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065ffcd: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x65ffd2u); f_00686d8e();
    /* 0065ffd2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065ffd5: push 0x6c2d28 */ { u32 v = 0x6c2d28u; r_esp -= 4; W32(r_esp, v); }
    /* 0065ffda: lea eax, [ebp - 0x408] */ r_eax = (u32)(r_ebp+0xfffffbf8u);
    /* 0065ffe0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065ffe1: call 0x5ea9c0 */ r_esp -= 4; W32(r_esp, 0x65ffe6u); f_005ea9c0();
    /* 0065ffe6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065ffe9: mov dword ptr [ebp - 0x810], eax */ W32((u32)(r_ebp+0xfffff7f0u), r_eax);
    /* 0065ffef: cmp dword ptr [ebp - 0x810], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffff7f0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065fff6: jne 0x65fffc */ if (!fZ) goto L_0065fffc;
L_0065fff8:; BB(0x0065fff8);
    /* 0065fff8: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0065fffa: jmp 0x660013 */ goto L_00660013;
L_0065fffc:; BB(0x0065fffc);
    /* 0065fffc: mov ecx, dword ptr [ebp - 0x810] */ r_ecx = R32((u32)(r_ebp+0xfffff7f0u));
    /* 00660002: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00660003: call dword ptr [0x6b2258] */ { u32 t = R32((u32)(0x6b2258u)); r_esp -= 4; W32(r_esp, 0x660009u); call_ind(t); }
    /* 00660009: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066000c: jmp 0x65ff52 */ goto L_0065ff52;
L_00660011:; BB(0x00660011);
    /* 00660011: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_00660013:; BB(0x00660013);
    /* 00660013: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00660016: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00660018: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x66001du); f_00686d72();
    /* 0066001d: mov esp, ebp */ r_esp = r_ebp;
    /* 0066001f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00660020: ret  */ FN_RET(0x0065ff10); r_esp += 4; return;
}

