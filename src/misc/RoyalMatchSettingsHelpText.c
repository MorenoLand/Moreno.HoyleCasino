#include "protos.h"

void f_005b1f80(void) /* RoyalMatchSettingsHelpText::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b1f80);
    /* 005b1f80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b1f81: mov ebp, esp */ r_ebp = r_esp;
    /* 005b1f83: sub esp, 0x84 */ {  u32 a = r_esp; u32 b = 0x84u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b1f89: mov dword ptr [ebp - 0x80], ecx */ W32((u32)(r_ebp+0xffffff80u), r_ecx);
    /* 005b1f8c: cmp dword ptr [0x163068c], 0 */ {  u32 a = R32((u32)(0x163068cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b1f93: jne 0x5b1f9a */ if (!fZ) goto L_005b1f9a;
L_005b1f95:; BB(0x005b1f95);
    /* 005b1f95: jmp 0x5b2387 */ goto L_005b2387;
L_005b1f9a:; BB(0x005b1f9a);
    /* 005b1f9a: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1f9c: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005b1fa2: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x5b1fa7u); f_005fb5e0();
    /* 005b1fa7: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 005b1faa: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
    /* 005b1fb1: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1fb3: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005b1fb9: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x5b1fbeu); f_005fb5e0();
    /* 005b1fbe: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 005b1fc1: mov dword ptr [ebp - 0x6c], 1 */ W32((u32)(r_ebp+0xffffff94u), 0x1u);
    /* 005b1fc8: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1fca: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005b1fd0: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x5b1fd5u); f_005fb5e0();
    /* 005b1fd5: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 005b1fd8: mov dword ptr [ebp - 0x64], 2 */ W32((u32)(r_ebp+0xffffff9cu), 0x2u);
    /* 005b1fdf: push 0x35 */ { u32 v = 0x35u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1fe1: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005b1fe7: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x5b1fecu); f_005fb5e0();
    /* 005b1fec: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 005b1fef: mov dword ptr [ebp - 0x5c], 3 */ W32((u32)(r_ebp+0xffffffa4u), 0x3u);
    /* 005b1ff6: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1ff8: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005b1ffe: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x5b2003u); f_005fb5e0();
    /* 005b2003: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 005b2006: mov dword ptr [ebp - 0x54], 4 */ W32((u32)(r_ebp+0xffffffacu), 0x4u);
    /* 005b200d: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 005b200f: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005b2015: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x5b201au); f_005fb350();
    /* 005b201a: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 005b201d: mov dword ptr [ebp - 0x4c], 5 */ W32((u32)(r_ebp+0xffffffb4u), 0x5u);
    /* 005b2024: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 005b2026: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005b202c: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x5b2031u); f_005fb350();
    /* 005b2031: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 005b2034: mov dword ptr [ebp - 0x44], 6 */ W32((u32)(r_ebp+0xffffffbcu), 0x6u);
    /* 005b203b: push 0x39 */ { u32 v = 0x39u; r_esp -= 4; W32(r_esp, v); }
    /* 005b203d: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005b2043: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x5b2048u); f_005fb350();
    /* 005b2048: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 005b204b: mov dword ptr [ebp - 0x3c], 7 */ W32((u32)(r_ebp+0xffffffc4u), 0x7u);
    /* 005b2052: push 0x3a */ { u32 v = 0x3au; r_esp -= 4; W32(r_esp, v); }
    /* 005b2054: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005b205a: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x5b205fu); f_005fb350();
    /* 005b205f: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005b2062: mov dword ptr [ebp - 0x34], 8 */ W32((u32)(r_ebp+0xffffffccu), 0x8u);
    /* 005b2069: push 0x3b */ { u32 v = 0x3bu; r_esp -= 4; W32(r_esp, v); }
    /* 005b206b: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005b2071: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x5b2076u); f_005fb350();
    /* 005b2076: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005b2079: mov dword ptr [ebp - 0x2c], 9 */ W32((u32)(r_ebp+0xffffffd4u), 0x9u);
    /* 005b2080: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 005b2082: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005b2088: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x5b208du); f_005fb350();
    /* 005b208d: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005b2090: mov dword ptr [ebp - 0x24], 0xa */ W32((u32)(r_ebp+0xffffffdcu), 0xau);
    /* 005b2097: push 0x3d */ { u32 v = 0x3du; r_esp -= 4; W32(r_esp, v); }
    /* 005b2099: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005b209f: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x5b20a4u); f_005fb350();
    /* 005b20a4: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005b20a7: mov dword ptr [ebp - 0x1c], 0xb */ W32((u32)(r_ebp+0xffffffe4u), 0xbu);
    /* 005b20ae: push 0x3e */ { u32 v = 0x3eu; r_esp -= 4; W32(r_esp, v); }
    /* 005b20b0: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005b20b6: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x5b20bbu); f_005fb350();
    /* 005b20bb: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005b20be: mov dword ptr [ebp - 0x14], 0xc */ W32((u32)(r_ebp+0xffffffecu), 0xcu);
    /* 005b20c5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b20c7: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005b20cd: call 0x5fb860 */ r_esp -= 4; W32(r_esp, 0x5b20d2u); f_005fb860();
    /* 005b20d2: mov eax, dword ptr [eax + 0x4c] */ r_eax = R32((u32)(r_eax+0x4cu));
    /* 005b20d5: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005b20d8: mov dword ptr [ebp - 0xc], 0xd */ W32((u32)(r_ebp+0xfffffff4u), 0xdu);
    /* 005b20df: mov dword ptr [ebp - 8], 0xe */ W32((u32)(r_ebp+0xfffffff8u), 0xeu);
    /* 005b20e6: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005b20ed: mov dword ptr [ebp - 0x7c], 0 */ W32((u32)(r_ebp+0xffffff84u), 0x0u);
    /* 005b20f4: jmp 0x5b20ff */ goto L_005b20ff;
L_005b20f6:; BB(0x005b20f6);
    /* 005b20f6: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 005b20f9: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b20fc: mov dword ptr [ebp - 0x7c], ecx */ W32((u32)(r_ebp+0xffffff84u), r_ecx);
L_005b20ff:; BB(0x005b20ff);
    /* 005b20ff: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 005b2102: cmp edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b2105: jge 0x5b2142 */ if ((fS==fO)) goto L_005b2142;
L_005b2107:; BB(0x005b2107);
    /* 005b2107: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 005b210a: cmp dword ptr [ebp + eax*8 - 0x78], 0 */ {  u32 a = R32((u32)(r_ebp+r_eax*8+0xffffff88u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b210f: je 0x5b2140 */ if (fZ) goto L_005b2140;
L_005b2111:; BB(0x005b2111);
    /* 005b2111: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b2114: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b2115: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 005b2118: mov eax, dword ptr [ebp + edx*8 - 0x78] */ r_eax = R32((u32)(r_ebp+r_edx*8+0xffffff88u));
    /* 005b211c: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 005b211f: mov ecx, dword ptr [ebp + ecx*8 - 0x78] */ r_ecx = R32((u32)(r_ebp+r_ecx*8+0xffffff88u));
    /* 005b2123: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005b2125: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 005b212b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5b212du); call_ind(t); }
    /* 005b212d: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005b2130: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b2132: je 0x5b2140 */ if (fZ) goto L_005b2140;
L_005b2134:; BB(0x005b2134);
    /* 005b2134: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 005b2137: mov eax, dword ptr [ebp + edx*8 - 0x74] */ r_eax = R32((u32)(r_ebp+r_edx*8+0xffffff8cu));
    /* 005b213b: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005b213e: jmp 0x5b2142 */ goto L_005b2142;
L_005b2140:; BB(0x005b2140);
    /* 005b2140: jmp 0x5b20f6 */ goto L_005b20f6;
L_005b2142:; BB(0x005b2142);
    /* 005b2142: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b2146: jne 0x5b216b */ if (!fZ) goto L_005b216b;
L_005b2148:; BB(0x005b2148);
    /* 005b2148: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b214b: cmp dword ptr [ecx + 0x18], 3 */ {  u32 a = R32((u32)(r_ecx+0x18u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b214f: jne 0x5b2166 */ if (!fZ) goto L_005b2166;
L_005b2151:; BB(0x005b2151);
    /* 005b2151: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 005b2156: mov edx, dword ptr [ebp - 0x80] */ r_edx = R32((u32)(r_ebp+0xffffff80u));
    /* 005b2159: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005b215b: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 005b215e: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 005b2164: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5b2166u); call_ind(t); }
L_005b2166:; BB(0x005b2166);
    /* 005b2166: jmp 0x5b2387 */ goto L_005b2387;
L_005b216b:; BB(0x005b216b);
    /* 005b216b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b216e: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 005b2174: cmp dword ptr [ebp - 0x84], 0xd */ {  u32 a = R32((u32)(r_ebp+0xffffff7cu)); u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005b217b: ja 0x5b236c */ if ((!fC&&!fZ)) goto L_005b236c;
L_005b2181:; BB(0x005b2181);
    /* 005b2181: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 005b2187: jmp dword ptr [ecx*4 + 0x5b2390] */ { u32 t = R32((u32)(r_ecx*4+0x5b2390u)); switch (t) { case 0x5b218eu: goto L_005b218e; case 0x5b21b1u: goto L_005b21b1; case 0x5b21d4u: goto L_005b21d4; case 0x5b21f7u: goto L_005b21f7; case 0x5b221au: goto L_005b221a; case 0x5b223du: goto L_005b223d; case 0x5b2260u: goto L_005b2260; case 0x5b2283u: goto L_005b2283; case 0x5b22a6u: goto L_005b22a6; case 0x5b22c9u: goto L_005b22c9; case 0x5b22ecu: goto L_005b22ec; case 0x5b230cu: goto L_005b230c; case 0x5b232cu: goto L_005b232c; case 0x5b234cu: goto L_005b234c; default: UNSUP(0x005b2187, "jump table entry is not a known target"); } }
L_005b218e:; BB(0x005b218e);
    /* 005b218e: push 0x6d0604 */ { u32 v = 0x6d0604u; r_esp -= 4; W32(r_esp, v); }
    /* 005b2193: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b2198u); f_00630f40();
    /* 005b2198: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b219b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b219c: mov edx, dword ptr [ebp - 0x80] */ r_edx = R32((u32)(r_ebp+0xffffff80u));
    /* 005b219f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005b21a1: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 005b21a4: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 005b21aa: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5b21acu); call_ind(t); }
    /* 005b21ac: jmp 0x5b2387 */ goto L_005b2387;
L_005b21b1:; BB(0x005b21b1);
    /* 005b21b1: push 0x6d05e8 */ { u32 v = 0x6d05e8u; r_esp -= 4; W32(r_esp, v); }
    /* 005b21b6: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b21bbu); f_00630f40();
    /* 005b21bb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b21be: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b21bf: mov eax, dword ptr [ebp - 0x80] */ r_eax = R32((u32)(r_ebp+0xffffff80u));
    /* 005b21c2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005b21c4: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 005b21c7: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 005b21cd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5b21cfu); call_ind(t); }
    /* 005b21cf: jmp 0x5b2387 */ goto L_005b2387;
L_005b21d4:; BB(0x005b21d4);
    /* 005b21d4: push 0x6d05cc */ { u32 v = 0x6d05ccu; r_esp -= 4; W32(r_esp, v); }
    /* 005b21d9: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b21deu); f_00630f40();
    /* 005b21de: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b21e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b21e2: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 005b21e5: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005b21e7: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 005b21ea: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 005b21f0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5b21f2u); call_ind(t); }
    /* 005b21f2: jmp 0x5b2387 */ goto L_005b2387;
L_005b21f7:; BB(0x005b21f7);
    /* 005b21f7: push 0x6d05b0 */ { u32 v = 0x6d05b0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b21fc: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b2201u); f_00630f40();
    /* 005b2201: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b2204: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b2205: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 005b2208: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005b220a: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 005b220d: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 005b2213: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5b2215u); call_ind(t); }
    /* 005b2215: jmp 0x5b2387 */ goto L_005b2387;
L_005b221a:; BB(0x005b221a);
    /* 005b221a: push 0x6d0594 */ { u32 v = 0x6d0594u; r_esp -= 4; W32(r_esp, v); }
    /* 005b221f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b2224u); f_00630f40();
    /* 005b2224: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b2227: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b2228: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 005b222b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005b222d: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 005b2230: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 005b2236: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5b2238u); call_ind(t); }
    /* 005b2238: jmp 0x5b2387 */ goto L_005b2387;
L_005b223d:; BB(0x005b223d);
    /* 005b223d: push 0x6d0578 */ { u32 v = 0x6d0578u; r_esp -= 4; W32(r_esp, v); }
    /* 005b2242: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b2247u); f_00630f40();
    /* 005b2247: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b224a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b224b: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 005b224e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005b2250: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 005b2253: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 005b2259: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5b225bu); call_ind(t); }
    /* 005b225b: jmp 0x5b2387 */ goto L_005b2387;
L_005b2260:; BB(0x005b2260);
    /* 005b2260: push 0x6d055c */ { u32 v = 0x6d055cu; r_esp -= 4; W32(r_esp, v); }
    /* 005b2265: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b226au); f_00630f40();
    /* 005b226a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b226d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b226e: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 005b2271: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005b2273: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 005b2276: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 005b227c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5b227eu); call_ind(t); }
    /* 005b227e: jmp 0x5b2387 */ goto L_005b2387;
L_005b2283:; BB(0x005b2283);
    /* 005b2283: push 0x6d0540 */ { u32 v = 0x6d0540u; r_esp -= 4; W32(r_esp, v); }
    /* 005b2288: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b228du); f_00630f40();
    /* 005b228d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b2290: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b2291: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 005b2294: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005b2296: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 005b2299: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 005b229f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5b22a1u); call_ind(t); }
    /* 005b22a1: jmp 0x5b2387 */ goto L_005b2387;
L_005b22a6:; BB(0x005b22a6);
    /* 005b22a6: push 0x6d0524 */ { u32 v = 0x6d0524u; r_esp -= 4; W32(r_esp, v); }
    /* 005b22ab: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b22b0u); f_00630f40();
    /* 005b22b0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b22b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b22b4: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 005b22b7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005b22b9: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 005b22bc: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 005b22c2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5b22c4u); call_ind(t); }
    /* 005b22c4: jmp 0x5b2387 */ goto L_005b2387;
L_005b22c9:; BB(0x005b22c9);
    /* 005b22c9: push 0x6d0508 */ { u32 v = 0x6d0508u; r_esp -= 4; W32(r_esp, v); }
    /* 005b22ce: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b22d3u); f_00630f40();
    /* 005b22d3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b22d6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b22d7: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 005b22da: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005b22dc: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 005b22df: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 005b22e5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5b22e7u); call_ind(t); }
    /* 005b22e7: jmp 0x5b2387 */ goto L_005b2387;
L_005b22ec:; BB(0x005b22ec);
    /* 005b22ec: push 0x6d04ec */ { u32 v = 0x6d04ecu; r_esp -= 4; W32(r_esp, v); }
    /* 005b22f1: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b22f6u); f_00630f40();
    /* 005b22f6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b22f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b22fa: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 005b22fd: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005b22ff: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 005b2302: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 005b2308: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5b230au); call_ind(t); }
    /* 005b230a: jmp 0x5b2387 */ goto L_005b2387;
L_005b230c:; BB(0x005b230c);
    /* 005b230c: push 0x6d04d0 */ { u32 v = 0x6d04d0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b2311: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b2316u); f_00630f40();
    /* 005b2316: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b2319: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b231a: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 005b231d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005b231f: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 005b2322: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 005b2328: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5b232au); call_ind(t); }
    /* 005b232a: jmp 0x5b2387 */ goto L_005b2387;
L_005b232c:; BB(0x005b232c);
    /* 005b232c: push 0x6d04b4 */ { u32 v = 0x6d04b4u; r_esp -= 4; W32(r_esp, v); }
    /* 005b2331: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b2336u); f_00630f40();
    /* 005b2336: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b2339: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b233a: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 005b233d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005b233f: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 005b2342: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 005b2348: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5b234au); call_ind(t); }
    /* 005b234a: jmp 0x5b2387 */ goto L_005b2387;
L_005b234c:; BB(0x005b234c);
    /* 005b234c: push 0x6d0498 */ { u32 v = 0x6d0498u; r_esp -= 4; W32(r_esp, v); }
    /* 005b2351: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b2356u); f_00630f40();
    /* 005b2356: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b2359: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b235a: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 005b235d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005b235f: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 005b2362: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 005b2368: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5b236au); call_ind(t); }
    /* 005b236a: jmp 0x5b2387 */ goto L_005b2387;
L_005b236c:; BB(0x005b236c);
    /* 005b236c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 005b236e: jne 0x5b2387 */ if (!fZ) goto L_005b2387;
L_005b2370:; BB(0x005b2370);
    /* 005b2370: push 0x34f */ { u32 v = 0x34fu; r_esp -= 4; W32(r_esp, v); }
    /* 005b2375: push 0x6d01a8 */ { u32 v = 0x6d01a8u; r_esp -= 4; W32(r_esp, v); }
    /* 005b237a: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 005b237f: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5b2384u); f_005e9f20();
    /* 005b2384: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005b2387:; BB(0x005b2387);
    /* 005b2387: mov esp, ebp */ r_esp = r_ebp;
    /* 005b2389: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b238a: ret 4 */ FN_RET(0x005b1f80); r_esp += 8; return;
}

