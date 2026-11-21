#include "protos.h"

void f_005a2040(void) /* sub_5A2040 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a2040);
    /* 005a2040: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a2041: mov ebp, esp */ r_ebp = r_esp;
    /* 005a2043: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a2044: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005a2047: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a204b: jne 0x5a2063 */ if (!fZ) goto L_005a2063;
L_005a204d:; BB(0x005a204d);
    /* 005a204d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a204f: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005a2055: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x5a205au); f_006375b0();
    /* 005a205a: mov ecx, eax */ r_ecx = r_eax;
    /* 005a205c: call 0x63aae0 */ r_esp -= 4; W32(r_esp, 0x5a2061u); f_0063aae0();
    /* 005a2061: jmp 0x5a2078 */ goto L_005a2078;
L_005a2063:; BB(0x005a2063);
    /* 005a2063: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a2065: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005a206a: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 005a206d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005a2070: mov ecx, dword ptr [ecx + edx*4] */ r_ecx = R32((u32)(r_ecx+r_edx*4));
    /* 005a2073: call 0x63aae0 */ r_esp -= 4; W32(r_esp, 0x5a2078u); f_0063aae0();
L_005a2078:; BB(0x005a2078);
    /* 005a2078: mov esp, ebp */ r_esp = r_ebp;
    /* 005a207a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a207b: ret 4 */ FN_RET(0x005a2040); r_esp += 8; return;
}

void f_005a2080(void) /* sub_5A2080 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a2080);
    /* 005a2080: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a2081: mov ebp, esp */ r_ebp = r_esp;
    /* 005a2083: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a2086: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005a208b: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a208d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005a2090: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 005a2093: cmp dword ptr [ebp + 8], 5 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a2097: jne 0x5a20a1 */ if (!fZ) goto L_005a20a1;
L_005a2099:; BB(0x005a2099);
    /* 005a2099: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005a209c: jmp 0x5a2186 */ goto L_005a2186;
L_005a20a1:; BB(0x005a20a1);
    /* 005a20a1: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 005a20a8: jmp 0x5a20b3 */ goto L_005a20b3;
L_005a20aa:; BB(0x005a20aa);
    /* 005a20aa: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005a20ad: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a20b0: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
L_005a20b3:; BB(0x005a20b3);
    /* 005a20b3: cmp dword ptr [ebp - 0x2c], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a20b7: jge 0x5a20c5 */ if ((fS==fO)) goto L_005a20c5;
L_005a20b9:; BB(0x005a20b9);
    /* 005a20b9: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005a20bc: mov word ptr [ebp + ecx*2 - 0x28], 0 */ W16((u32)(r_ebp+r_ecx*2+0xffffffd8u), 0x0u);
    /* 005a20c3: jmp 0x5a20aa */ goto L_005a20aa;
L_005a20c5:; BB(0x005a20c5);
    /* 005a20c5: lea edx, [ebp - 0x1c] */ r_edx = (u32)(r_ebp+0xffffffe4u);
    /* 005a20c8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a20c9: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005a20cb: mov eax, dword ptr [0x7935d0] */ r_eax = R32((u32)(0x7935d0u));
    /* 005a20d0: add eax, 0xe6 */ {  u32 a = r_eax; u32 b = 0xe6u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a20d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a20d6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005a20d8: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a20dc: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 005a20df: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005a20e2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a20e3: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005a20e6: imul edx, edx, 6 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x6u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a20e9: mov eax, dword ptr [0x7935d0] */ r_eax = R32((u32)(0x7935d0u));
    /* 005a20ee: lea ecx, [eax + edx + 0xc8] */ r_ecx = (u32)(r_eax+r_edx+0xc8u);
    /* 005a20f5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a20f6: call 0x462930 */ r_esp -= 4; W32(r_esp, 0x5a20fbu); f_00462930();
    /* 005a20fb: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a20fe: lea edx, [ebp - 0x28] */ r_edx = (u32)(r_ebp+0xffffffd8u);
    /* 005a2101: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a2102: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005a2104: lea eax, [ebp - 0x1c] */ r_eax = (u32)(r_ebp+0xffffffe4u);
    /* 005a2107: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a2108: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005a210a: call 0x462a40 */ r_esp -= 4; W32(r_esp, 0x5a210fu); f_00462a40();
    /* 005a210f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a2112: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 005a2119: jmp 0x5a2124 */ goto L_005a2124;
L_005a211b:; BB(0x005a211b);
    /* 005a211b: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005a211e: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005a2121: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
L_005a2124:; BB(0x005a2124);
    /* 005a2124: cmp dword ptr [ebp - 0x30], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a2128: jge 0x5a2136 */ if ((fS==fO)) goto L_005a2136;
L_005a212a:; BB(0x005a212a);
    /* 005a212a: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005a212d: mov word ptr [ebp + edx*2 - 0x10], 0 */ W16((u32)(r_ebp+r_edx*2+0xfffffff0u), 0x0u);
    /* 005a2134: jmp 0x5a211b */ goto L_005a211b;
L_005a2136:; BB(0x005a2136);
    /* 005a2136: lea eax, [ebp - 0x1c] */ r_eax = (u32)(r_ebp+0xffffffe4u);
    /* 005a2139: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a213a: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005a213c: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 005a2142: add ecx, 0xe6 */ {  u32 a = r_ecx; u32 b = 0xe6u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005a2148: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a2149: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005a214b: mov edx, dword ptr [0x7935d0] */ r_edx = R32((u32)(0x7935d0u));
    /* 005a2151: add edx, 0xe0 */ {  u32 a = r_edx; u32 b = 0xe0u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005a2157: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a2158: call 0x462930 */ r_esp -= 4; W32(r_esp, 0x5a215du); f_00462930();
    /* 005a215d: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a2160: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 005a2163: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a2164: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005a2166: lea ecx, [ebp - 0x1c] */ r_ecx = (u32)(r_ebp+0xffffffe4u);
    /* 005a2169: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a216a: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005a216c: call 0x462a40 */ r_esp -= 4; W32(r_esp, 0x5a2171u); f_00462a40();
    /* 005a2171: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a2174: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005a2176: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 005a2179: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a217a: lea eax, [ebp - 0x28] */ r_eax = (u32)(r_ebp+0xffffffd8u);
    /* 005a217d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a217e: call 0x462da0 */ r_esp -= 4; W32(r_esp, 0x5a2183u); f_00462da0();
    /* 005a2183: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005a2186:; BB(0x005a2186);
    /* 005a2186: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a2189: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005a218b: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x5a2190u); f_00686d72();
    /* 005a2190: mov esp, ebp */ r_esp = r_ebp;
    /* 005a2192: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a2193: ret 4 */ FN_RET(0x005a2080); r_esp += 8; return;
}

void f_005a21a0(void) /* sub_5A21A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a21a0);
    /* 005a21a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a21a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005a21a3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a21a6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005a21a9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005a21b0: jmp 0x5a21bb */ goto L_005a21bb;
L_005a21b2:; BB(0x005a21b2);
    /* 005a21b2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a21b5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a21b8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005a21bb:; BB(0x005a21bb);
    /* 005a21bb: cmp dword ptr [ebp - 4], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a21bf: jge 0x5a21d7 */ if ((fS==fO)) goto L_005a21d7;
L_005a21c1:; BB(0x005a21c1);
    /* 005a21c1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a21c4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a21c7: mov eax, dword ptr [edx + ecx*4 + 8] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 005a21cb: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a21ce: jne 0x5a21d5 */ if (!fZ) goto L_005a21d5;
L_005a21d0:; BB(0x005a21d0);
    /* 005a21d0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a21d3: jmp 0x5a21da */ goto L_005a21da;
L_005a21d5:; BB(0x005a21d5);
    /* 005a21d5: jmp 0x5a21b2 */ goto L_005a21b2;
L_005a21d7:; BB(0x005a21d7);
    /* 005a21d7: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_005a21da:; BB(0x005a21da);
    /* 005a21da: mov esp, ebp */ r_esp = r_ebp;
    /* 005a21dc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a21dd: ret 4 */ FN_RET(0x005a21a0); r_esp += 8; return;
}

void f_005a21e0(void) /* sub_5A21E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a21e0);
    /* 005a21e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a21e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005a21e3: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a21e6: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005a21e9: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 005a21f0: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005a21f7: jmp 0x5a2202 */ goto L_005a2202;
L_005a21f9:; BB(0x005a21f9);
    /* 005a21f9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a21fc: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a21ff: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_005a2202:; BB(0x005a2202);
    /* 005a2202: cmp dword ptr [ebp - 8], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a2206: jge 0x5a224d */ if ((fS==fO)) goto L_005a224d;
L_005a2208:; BB(0x005a2208);
    /* 005a2208: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a220b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a220c: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5a2211u); f_005dcb00();
    /* 005a2211: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a2214: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005a2217: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a221a: mov al, byte ptr [edx + 0x4a0] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x4a0u))) & 0xffu);
    /* 005a2220: mov byte ptr [ebp - 0xd], al */ W8((u32)(r_ebp+0xfffffff3u), (u8)r_eax);
    /* 005a2223: movzx ecx, byte ptr [ebp - 0xd] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffff3u));
    /* 005a2227: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a2229: je 0x5a224b */ if (fZ) goto L_005a224b;
L_005a222b:; BB(0x005a222b);
    /* 005a222b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a222e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a222f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a2232: call 0x5a2690 */ r_esp -= 4; W32(r_esp, 0x5a2237u); f_005a2690();
    /* 005a2237: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a223a: jge 0x5a224b */ if ((fS==fO)) goto L_005a224b;
L_005a223c:; BB(0x005a223c);
    /* 005a223c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a223f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a2240: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a2243: call 0x5a2690 */ r_esp -= 4; W32(r_esp, 0x5a2248u); f_005a2690();
    /* 005a2248: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005a224b:; BB(0x005a224b);
    /* 005a224b: jmp 0x5a21f9 */ goto L_005a21f9;
L_005a224d:; BB(0x005a224d);
    /* 005a224d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a2250: mov esp, ebp */ r_esp = r_ebp;
    /* 005a2252: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a2253: ret  */ FN_RET(0x005a21e0); r_esp += 4; return;
}

void f_005a2290(void) /* sub_5A2290 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a2290);
    /* 005a2290: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a2291: mov ebp, esp */ r_ebp = r_esp;
    /* 005a2293: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a2296: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 005a2299: mov dword ptr [ebp - 0x10], 3 */ W32((u32)(r_ebp+0xfffffff0u), 0x3u);
    /* 005a22a0: mov dword ptr [ebp - 0xc], 1 */ W32((u32)(r_ebp+0xfffffff4u), 0x1u);
    /* 005a22a7: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005a22ae: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005a22b5: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 005a22bc: jmp 0x5a22c7 */ goto L_005a22c7;
L_005a22be:; BB(0x005a22be);
    /* 005a22be: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005a22c1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a22c4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_005a22c7:; BB(0x005a22c7);
    /* 005a22c7: cmp dword ptr [ebp - 0x14], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a22cb: jge 0x5a235d */ if ((fS==fO)) goto L_005a235d;
L_005a22d1:; BB(0x005a22d1);
    /* 005a22d1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a22d4: mov edx, dword ptr [ebp + ecx*4 - 0x10] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xfffffff0u));
    /* 005a22d8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a22d9: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5a22deu); f_005dcb00();
    /* 005a22de: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a22e1: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005a22e4: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005a22e7: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5a22ecu); f_0063aac0();
    /* 005a22ec: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005a22ee: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005a22f1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005a22f3: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a22f7: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 005a22fa: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 005a22fd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a22ff: jne 0x5a2358 */ if (!fZ) goto L_005a2358;
L_005a2301:; BB(0x005a2301);
    /* 005a2301: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005a2304: mov ecx, dword ptr [ebp + eax*4 - 0x10] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xfffffff0u));
    /* 005a2308: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a2309: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5a230eu); f_005dcb00();
    /* 005a230e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a2311: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005a2314: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005a2317: mov al, byte ptr [edx + 0x4a1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x4a1u))) & 0xffu);
    /* 005a231d: mov byte ptr [ebp - 0x21], al */ W8((u32)(r_ebp+0xffffffdfu), (u8)r_eax);
    /* 005a2320: movzx ecx, byte ptr [ebp - 0x21] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffdfu));
    /* 005a2324: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a2326: jne 0x5a2358 */ if (!fZ) goto L_005a2358;
L_005a2328:; BB(0x005a2328);
    /* 005a2328: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a232b: mov eax, dword ptr [ebp + edx*4 - 0x10] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xfffffff0u));
    /* 005a232f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a2330: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5a2335u); f_005dcb00();
    /* 005a2335: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a2338: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005a233b: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005a233e: mov dl, byte ptr [ecx + 0x4a2] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x4a2u))) & 0xffu);
    /* 005a2344: mov byte ptr [ebp - 0x29], dl */ W8((u32)(r_ebp+0xffffffd7u), (u8)r_edx);
    /* 005a2347: movzx eax, byte ptr [ebp - 0x29] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffd7u));
    /* 005a234b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a234d: jne 0x5a2358 */ if (!fZ) goto L_005a2358;
L_005a234f:; BB(0x005a234f);
    /* 005a234f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a2352: mov eax, dword ptr [ebp + ecx*4 - 0x10] */ r_eax = R32((u32)(r_ebp+r_ecx*4+0xfffffff0u));
    /* 005a2356: jmp 0x5a2360 */ goto L_005a2360;
L_005a2358:; BB(0x005a2358);
    /* 005a2358: jmp 0x5a22be */ goto L_005a22be;
L_005a235d:; BB(0x005a235d);
    /* 005a235d: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_005a2360:; BB(0x005a2360);
    /* 005a2360: mov esp, ebp */ r_esp = r_ebp;
    /* 005a2362: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a2363: ret  */ FN_RET(0x005a2290); r_esp += 4; return;
}

void f_005a2370(void) /* sub_5A2370 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a2370);
    /* 005a2370: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a2371: mov ebp, esp */ r_ebp = r_esp;
    /* 005a2373: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a2376: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005a2377: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005a237a: mov dword ptr [ebp - 0x14], 2 */ W32((u32)(r_ebp+0xffffffecu), 0x2u);
    /* 005a2381: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005a2388: mov dword ptr [ebp - 0xc], 1 */ W32((u32)(r_ebp+0xfffffff4u), 0x1u);
    /* 005a238f: mov dword ptr [ebp - 8], 3 */ W32((u32)(r_ebp+0xfffffff8u), 0x3u);
    /* 005a2396: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 005a239d: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 005a23a4: jmp 0x5a23af */ goto L_005a23af;
L_005a23a6:; BB(0x005a23a6);
    /* 005a23a6: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005a23a9: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a23ac: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_005a23af:; BB(0x005a23af);
    /* 005a23af: cmp dword ptr [ebp - 0x18], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a23b3: jge 0x5a2452 */ if ((fS==fO)) goto L_005a2452;
L_005a23b9:; BB(0x005a23b9);
    /* 005a23b9: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005a23bc: cmp dword ptr [ebp + ecx*4 - 0x14], 4 */ {  u32 a = R32((u32)(r_ebp+r_ecx*4+0xffffffecu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a23c1: jne 0x5a23e1 */ if (!fZ) goto L_005a23e1;
L_005a23c3:; BB(0x005a23c3);
    /* 005a23c3: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005a23c6: mov eax, dword ptr [ebp + edx*4 - 0x14] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffffecu));
    /* 005a23ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a23cb: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005a23ce: call 0x5a2690 */ r_esp -= 4; W32(r_esp, 0x5a23d3u); f_005a2690();
    /* 005a23d3: mov esi, eax */ r_esi = r_eax;
    /* 005a23d5: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005a23d8: call 0x5a2280 */ r_esp -= 4; W32(r_esp, 0x5a23ddu); f_005a2280();
    /* 005a23dd: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a23df: jl 0x5a2444 */ if ((fS!=fO)) goto L_005a2444;
L_005a23e1:; BB(0x005a23e1);
    /* 005a23e1: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005a23e4: mov edx, dword ptr [ebp + ecx*4 - 0x14] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffecu));
    /* 005a23e8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a23e9: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5a23eeu); f_005dcb00();
    /* 005a23ee: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a23f1: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005a23f4: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005a23f7: mov cl, byte ptr [eax + 0x4a0] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x4a0u))) & 0xffu);
    /* 005a23fd: mov byte ptr [ebp - 0x1d], cl */ W8((u32)(r_ebp+0xffffffe3u), (u8)r_ecx);
    /* 005a2400: movzx edx, byte ptr [ebp - 0x1d] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffe3u));
    /* 005a2404: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a2406: je 0x5a244d */ if (fZ) goto L_005a244d;
L_005a2408:; BB(0x005a2408);
    /* 005a2408: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005a240b: mov ecx, dword ptr [ebp + eax*4 - 0x14] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffecu));
    /* 005a240f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a2410: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005a2413: call 0x5a2690 */ r_esp -= 4; W32(r_esp, 0x5a2418u); f_005a2690();
    /* 005a2418: mov esi, eax */ r_esi = r_eax;
    /* 005a241a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005a241d: call 0x5a2280 */ r_esp -= 4; W32(r_esp, 0x5a2422u); f_005a2280();
    /* 005a2422: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a2424: jge 0x5a244d */ if ((fS==fO)) goto L_005a244d;
L_005a2426:; BB(0x005a2426);
    /* 005a2426: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005a2429: mov eax, dword ptr [ebp + edx*4 - 0x14] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffffecu));
    /* 005a242d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a242e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005a2431: call 0x5a2690 */ r_esp -= 4; W32(r_esp, 0x5a2436u); f_005a2690();
    /* 005a2436: mov esi, eax */ r_esi = r_eax;
    /* 005a2438: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005a243b: call 0x5a21e0 */ r_esp -= 4; W32(r_esp, 0x5a2440u); f_005a21e0();
    /* 005a2440: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a2442: jne 0x5a244d */ if (!fZ) goto L_005a244d;
L_005a2444:; BB(0x005a2444);
    /* 005a2444: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005a2447: mov eax, dword ptr [ebp + ecx*4 - 0x14] */ r_eax = R32((u32)(r_ebp+r_ecx*4+0xffffffecu));
    /* 005a244b: jmp 0x5a2455 */ goto L_005a2455;
L_005a244d:; BB(0x005a244d);
    /* 005a244d: jmp 0x5a23a6 */ goto L_005a23a6;
L_005a2452:; BB(0x005a2452);
    /* 005a2452: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_005a2455:; BB(0x005a2455);
    /* 005a2455: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005a2456: mov esp, ebp */ r_esp = r_ebp;
    /* 005a2458: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a2459: ret  */ FN_RET(0x005a2370); r_esp += 4; return;
}

void f_005a2460(void) /* sub_5A2460 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a2460);
    /* 005a2460: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a2461: mov ebp, esp */ r_ebp = r_esp;
    /* 005a2463: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a2466: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 005a2469: mov dword ptr [ebp - 0x10], 2 */ W32((u32)(r_ebp+0xfffffff0u), 0x2u);
    /* 005a2470: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005a2477: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 005a247e: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 005a2485: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 005a248c: jmp 0x5a2497 */ goto L_005a2497;
L_005a248e:; BB(0x005a248e);
    /* 005a248e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005a2491: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a2494: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_005a2497:; BB(0x005a2497);
    /* 005a2497: cmp dword ptr [ebp - 0x14], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a249b: jge 0x5a252d */ if ((fS==fO)) goto L_005a252d;
L_005a24a1:; BB(0x005a24a1);
    /* 005a24a1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a24a4: mov edx, dword ptr [ebp + ecx*4 - 0x10] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xfffffff0u));
    /* 005a24a8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a24a9: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5a24aeu); f_005dcb00();
    /* 005a24ae: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a24b1: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005a24b4: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005a24b7: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5a24bcu); f_0063aac0();
    /* 005a24bc: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005a24be: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005a24c1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005a24c3: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a24c7: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 005a24ca: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 005a24cd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a24cf: jne 0x5a2528 */ if (!fZ) goto L_005a2528;
L_005a24d1:; BB(0x005a24d1);
    /* 005a24d1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005a24d4: mov ecx, dword ptr [ebp + eax*4 - 0x10] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xfffffff0u));
    /* 005a24d8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a24d9: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5a24deu); f_005dcb00();
    /* 005a24de: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a24e1: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005a24e4: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005a24e7: mov al, byte ptr [edx + 0x4a0] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x4a0u))) & 0xffu);
    /* 005a24ed: mov byte ptr [ebp - 0x21], al */ W8((u32)(r_ebp+0xffffffdfu), (u8)r_eax);
    /* 005a24f0: movzx ecx, byte ptr [ebp - 0x21] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffdfu));
    /* 005a24f4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a24f6: jne 0x5a2528 */ if (!fZ) goto L_005a2528;
L_005a24f8:; BB(0x005a24f8);
    /* 005a24f8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a24fb: mov eax, dword ptr [ebp + edx*4 - 0x10] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xfffffff0u));
    /* 005a24ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a2500: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5a2505u); f_005dcb00();
    /* 005a2505: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a2508: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005a250b: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005a250e: mov dl, byte ptr [ecx + 0x4a1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x4a1u))) & 0xffu);
    /* 005a2514: mov byte ptr [ebp - 0x29], dl */ W8((u32)(r_ebp+0xffffffd7u), (u8)r_edx);
    /* 005a2517: movzx eax, byte ptr [ebp - 0x29] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffd7u));
    /* 005a251b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a251d: jne 0x5a2528 */ if (!fZ) goto L_005a2528;
L_005a251f:; BB(0x005a251f);
    /* 005a251f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a2522: mov eax, dword ptr [ebp + ecx*4 - 0x10] */ r_eax = R32((u32)(r_ebp+r_ecx*4+0xfffffff0u));
    /* 005a2526: jmp 0x5a2530 */ goto L_005a2530;
L_005a2528:; BB(0x005a2528);
    /* 005a2528: jmp 0x5a248e */ goto L_005a248e;
L_005a252d:; BB(0x005a252d);
    /* 005a252d: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_005a2530:; BB(0x005a2530);
    /* 005a2530: mov esp, ebp */ r_esp = r_ebp;
    /* 005a2532: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a2533: ret  */ FN_RET(0x005a2460); r_esp += 4; return;
}

void f_005a2540(void) /* sub_5A2540 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a2540);
    /* 005a2540: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a2541: mov ebp, esp */ r_ebp = r_esp;
    /* 005a2543: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a2546: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 005a2549: mov dword ptr [ebp - 0x10], 2 */ W32((u32)(r_ebp+0xfffffff0u), 0x2u);
    /* 005a2550: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005a2557: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 005a255e: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 005a2565: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 005a256c: jmp 0x5a2577 */ goto L_005a2577;
L_005a256e:; BB(0x005a256e);
    /* 005a256e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005a2571: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a2574: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_005a2577:; BB(0x005a2577);
    /* 005a2577: cmp dword ptr [ebp - 0x14], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a257b: jge 0x5a262b */ if ((fS==fO)) goto L_005a262b;
L_005a2581:; BB(0x005a2581);
    /* 005a2581: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a2584: mov edx, dword ptr [ebp + ecx*4 - 0x10] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xfffffff0u));
    /* 005a2588: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a2589: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5a258eu); f_005dcb00();
    /* 005a258e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a2591: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005a2594: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005a2597: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5a259cu); f_0063aac0();
    /* 005a259c: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005a259e: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005a25a1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005a25a3: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a25a7: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 005a25aa: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 005a25ad: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a25af: jne 0x5a2626 */ if (!fZ) goto L_005a2626;
L_005a25b1:; BB(0x005a25b1);
    /* 005a25b1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005a25b4: mov ecx, dword ptr [ebp + eax*4 - 0x10] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xfffffff0u));
    /* 005a25b8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a25b9: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5a25beu); f_005dcb00();
    /* 005a25be: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a25c1: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005a25c4: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005a25c7: mov al, byte ptr [edx + 0x4a1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x4a1u))) & 0xffu);
    /* 005a25cd: mov byte ptr [ebp - 0x21], al */ W8((u32)(r_ebp+0xffffffdfu), (u8)r_eax);
    /* 005a25d0: movzx ecx, byte ptr [ebp - 0x21] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffdfu));
    /* 005a25d4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a25d6: jne 0x5a2626 */ if (!fZ) goto L_005a2626;
L_005a25d8:; BB(0x005a25d8);
    /* 005a25d8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a25db: mov eax, dword ptr [ebp + edx*4 - 0x10] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xfffffff0u));
    /* 005a25df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a25e0: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005a25e3: call 0x5a27a0 */ r_esp -= 4; W32(r_esp, 0x5a25e8u); f_005a27a0();
    /* 005a25e8: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005a25eb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a25ed: jne 0x5a2626 */ if (!fZ) goto L_005a2626;
L_005a25ef:; BB(0x005a25ef);
    /* 005a25ef: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a25f2: mov eax, dword ptr [ebp + edx*4 - 0x10] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xfffffff0u));
    /* 005a25f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a25f7: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005a25fa: call 0x5a3690 */ r_esp -= 4; W32(r_esp, 0x5a25ffu); f_005a3690();
    /* 005a25ff: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005a2602: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a2604: jne 0x5a261d */ if (!fZ) goto L_005a261d;
L_005a2606:; BB(0x005a2606);
    /* 005a2606: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a2609: mov eax, dword ptr [ebp + edx*4 - 0x10] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xfffffff0u));
    /* 005a260d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a260e: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005a2611: call 0x5a3630 */ r_esp -= 4; W32(r_esp, 0x5a2616u); f_005a3630();
    /* 005a2616: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005a2619: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a261b: je 0x5a2626 */ if (fZ) goto L_005a2626;
L_005a261d:; BB(0x005a261d);
    /* 005a261d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a2620: mov eax, dword ptr [ebp + edx*4 - 0x10] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xfffffff0u));
    /* 005a2624: jmp 0x5a262e */ goto L_005a262e;
L_005a2626:; BB(0x005a2626);
    /* 005a2626: jmp 0x5a256e */ goto L_005a256e;
L_005a262b:; BB(0x005a262b);
    /* 005a262b: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_005a262e:; BB(0x005a262e);
    /* 005a262e: mov esp, ebp */ r_esp = r_ebp;
    /* 005a2630: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a2631: ret  */ FN_RET(0x005a2540); r_esp += 4; return;
}

void f_005a2640(void) /* sub_5A2640 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a2640);
    /* 005a2640: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a2641: mov ebp, esp */ r_ebp = r_esp;
    /* 005a2643: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a2646: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005a2649: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005a2650: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005a2657: jmp 0x5a2662 */ goto L_005a2662;
L_005a2659:; BB(0x005a2659);
    /* 005a2659: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a265c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a265f: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_005a2662:; BB(0x005a2662);
    /* 005a2662: cmp dword ptr [ebp - 8], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a2666: jge 0x5a267c */ if ((fS==fO)) goto L_005a267c;
L_005a2668:; BB(0x005a2668);
    /* 005a2668: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a266b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a266c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a266f: call 0x5a2690 */ r_esp -= 4; W32(r_esp, 0x5a2674u); f_005a2690();
    /* 005a2674: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a2677: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005a267a: jmp 0x5a2659 */ goto L_005a2659;
L_005a267c:; BB(0x005a267c);
    /* 005a267c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a267f: mov esp, ebp */ r_esp = r_ebp;
    /* 005a2681: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a2682: ret  */ FN_RET(0x005a2640); r_esp += 4; return;
}

void f_005a2690(void) /* sub_5A2690 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a2690);
    /* 005a2690: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a2691: mov ebp, esp */ r_ebp = r_esp;
    /* 005a2693: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a2696: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005a2699: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005a26a0: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005a26a7: jmp 0x5a26b2 */ goto L_005a26b2;
L_005a26a9:; BB(0x005a26a9);
    /* 005a26a9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a26ac: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a26af: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_005a26b2:; BB(0x005a26b2);
    /* 005a26b2: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a26b6: jge 0x5a26da */ if ((fS==fO)) goto L_005a26da;
L_005a26b8:; BB(0x005a26b8);
    /* 005a26b8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a26bb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a26bc: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005a26bf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a26c0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a26c3: call 0x5a26f0 */ r_esp -= 4; W32(r_esp, 0x5a26c8u); f_005a26f0();
    /* 005a26c8: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 005a26cb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a26cd: je 0x5a26d8 */ if (fZ) goto L_005a26d8;
L_005a26cf:; BB(0x005a26cf);
    /* 005a26cf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a26d2: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005a26d5: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005a26d8:; BB(0x005a26d8);
    /* 005a26d8: jmp 0x5a26a9 */ goto L_005a26a9;
L_005a26da:; BB(0x005a26da);
    /* 005a26da: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a26dd: mov esp, ebp */ r_esp = r_ebp;
    /* 005a26df: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a26e0: ret 4 */ FN_RET(0x005a2690); r_esp += 8; return;
}

void f_005a26f0(void) /* sub_5A26F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a26f0);
    /* 005a26f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a26f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005a26f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a26f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005a26f7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a26fa: imul eax, eax, 6 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x6u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a26fd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a2700: lea edx, [ecx + eax + 0xc8] */ r_edx = (u32)(r_ecx+r_eax+0xc8u);
    /* 005a2707: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005a270a: mov ax, word ptr [edx + eax*2] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2))) & 0xffffu);
    /* 005a270e: mov esp, ebp */ r_esp = r_ebp;
    /* 005a2710: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a2711: ret 8 */ FN_RET(0x005a26f0); r_esp += 12; return;
}

void f_005a2740(void) /* sub_5A2740 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a2740);
    /* 005a2740: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a2741: mov ebp, esp */ r_ebp = r_esp;
    /* 005a2743: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a2746: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005a2749: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a274c: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a274f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005a2752: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005a2759: jmp 0x5a2764 */ goto L_005a2764;
L_005a275b:; BB(0x005a275b);
    /* 005a275b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a275e: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005a2761: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_005a2764:; BB(0x005a2764);
    /* 005a2764: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a2768: jge 0x5a278f */ if ((fS==fO)) goto L_005a278f;
L_005a276a:; BB(0x005a276a);
    /* 005a276a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a276c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005a276f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a2770: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a2773: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a2776: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a2779: mov ecx, dword ptr [ecx + eax*4 + 8] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 005a277d: call 0x5cb7d0 */ r_esp -= 4; W32(r_esp, 0x5a2782u); f_005cb7d0();
    /* 005a2782: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005a2785: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a2787: je 0x5a278d */ if (fZ) goto L_005a278d;
L_005a2789:; BB(0x005a2789);
    /* 005a2789: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005a278b: jmp 0x5a2791 */ goto L_005a2791;
L_005a278d:; BB(0x005a278d);
    /* 005a278d: jmp 0x5a275b */ goto L_005a275b;
L_005a278f:; BB(0x005a278f);
    /* 005a278f: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_005a2791:; BB(0x005a2791);
    /* 005a2791: mov esp, ebp */ r_esp = r_ebp;
    /* 005a2793: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a2794: ret 4 */ FN_RET(0x005a2740); r_esp += 8; return;
}

void f_005a27a0(void) /* sub_5A27A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a27a0);
    /* 005a27a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a27a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005a27a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a27a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005a27a7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a27aa: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a27ad: mov al, byte ptr [eax + 0xf7] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0xf7u))) & 0xffu);
    /* 005a27b3: mov esp, ebp */ r_esp = r_ebp;
    /* 005a27b5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a27b6: ret 4 */ FN_RET(0x005a27a0); r_esp += 8; return;
}

void f_005a27c0(void) /* sub_5A27C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a27c0);
    /* 005a27c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a27c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005a27c3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a27c5: push 0x6a78b9 */ { u32 v = 0x6a78b9u; r_esp -= 4; W32(r_esp, v); }
    /* 005a27ca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005a27d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a27d1: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a27d4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005a27d9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a27db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a27dc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005a27df: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005a27e5: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 005a27e8: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005a27eb: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a27ef: jne 0x5a2838 */ if (!fZ) goto L_005a2838;
L_005a27f1:; BB(0x005a27f1);
    /* 005a27f1: push 0x810 */ { u32 v = 0x810u; r_esp -= 4; W32(r_esp, v); }
    /* 005a27f6: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5a27fbu); f_00686d82();
    /* 005a27fb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a27fe: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005a2801: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005a2808: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a280c: je 0x5a281b */ if (fZ) goto L_005a281b;
L_005a280e:; BB(0x005a280e);
    /* 005a280e: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005a2811: call 0x642e10 */ r_esp -= 4; W32(r_esp, 0x5a2816u); f_00642e10();
    /* 005a2816: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005a2819: jmp 0x5a2822 */ goto L_005a2822;
L_005a281b:; BB(0x005a281b);
    /* 005a281b: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_005a2822:; BB(0x005a2822);
    /* 005a2822: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005a2825: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005a2828: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005a282f: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005a2832: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005a2835: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
L_005a2838:; BB(0x005a2838);
    /* 005a2838: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a283a: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005a283d: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 005a2840: call 0x642e70 */ r_esp -= 4; W32(r_esp, 0x5a2845u); f_00642e70();
    /* 005a2845: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a2847: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a2849: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005a284c: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 005a284f: call 0x6437d0 */ r_esp -= 4; W32(r_esp, 0x5a2854u); f_006437d0();
    /* 005a2854: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005a285b: jmp 0x5a2866 */ goto L_005a2866;
L_005a285d:; BB(0x005a285d);
    /* 005a285d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005a2860: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a2863: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_005a2866:; BB(0x005a2866);
    /* 005a2866: cmp dword ptr [ebp - 0x10], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a286a: jge 0x5a28f9 */ if ((fS==fO)) goto L_005a28f9;
L_005a2870:; BB(0x005a2870);
    /* 005a2870: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a2875: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5a287au); f_00686d82();
    /* 005a287a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a287d: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005a2880: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005a2887: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a288b: je 0x5a289a */ if (fZ) goto L_005a289a;
L_005a288d:; BB(0x005a288d);
    /* 005a288d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005a2890: call 0x5a3ff0 */ r_esp -= 4; W32(r_esp, 0x5a2895u); f_005a3ff0();
    /* 005a2895: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 005a2898: jmp 0x5a28a1 */ goto L_005a28a1;
L_005a289a:; BB(0x005a289a);
    /* 005a289a: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_005a28a1:; BB(0x005a28a1);
    /* 005a28a1: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005a28a4: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005a28a7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005a28ae: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005a28b1: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005a28b4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005a28b7: mov dword ptr [eax + edx*4 + 8], ecx */ W32((u32)(r_eax+r_edx*4+0x8u), r_ecx);
    /* 005a28bb: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005a28be: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a28bf: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005a28c2: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005a28c5: mov ecx, dword ptr [ecx + eax*4 + 8] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 005a28c9: call 0x5f53e0 */ r_esp -= 4; W32(r_esp, 0x5a28ceu); f_005f53e0();
    /* 005a28ce: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a28d0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a28d2: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5a28d7u); f_0064c8a0();
    /* 005a28d7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a28da: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005a28dd: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 005a28e0: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005a28e3: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005a28e6: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005a28e9: mov dword ptr [eax + edx*8 + 0x38], ecx */ W32((u32)(r_eax+r_edx*8+0x38u), r_ecx);
    /* 005a28ed: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005a28f0: mov dword ptr [eax + edx*8 + 0x3c], ecx */ W32((u32)(r_eax+r_edx*8+0x3cu), r_ecx);
    /* 005a28f4: jmp 0x5a285d */ goto L_005a285d;
L_005a28f9:; BB(0x005a28f9);
    /* 005a28f9: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 005a2900: jmp 0x5a290b */ goto L_005a290b;
L_005a2902:; BB(0x005a2902);
    /* 005a2902: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a2905: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005a2908: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
L_005a290b:; BB(0x005a290b);
    /* 005a290b: cmp dword ptr [ebp - 0x14], 6 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a290f: jge 0x5a2940 */ if ((fS==fO)) goto L_005a2940;
L_005a2911:; BB(0x005a2911);
    /* 005a2911: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a2913: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a2915: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5a291au); f_0064c8a0();
    /* 005a291a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a291d: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 005a2920: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 005a2923: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005a2926: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a2927: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005a292a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a292b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a292e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a292f: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5a2934u); f_005dcb00();
    /* 005a2934: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a2937: mov ecx, eax */ r_ecx = r_eax;
    /* 005a2939: call 0x5d6050 */ r_esp -= 4; W32(r_esp, 0x5a293eu); f_005d6050();
    /* 005a293e: jmp 0x5a2902 */ goto L_005a2902;
L_005a2940:; BB(0x005a2940);
    /* 005a2940: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005a2943: call 0x5a3880 */ r_esp -= 4; W32(r_esp, 0x5a2948u); f_005a3880();
    /* 005a2948: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005a294b: mov byte ptr [eax + 0x103], 0 */ W8((u32)(r_eax+0x103u), 0x0u);
    /* 005a2952: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a2955: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005a295c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a295d: mov esp, ebp */ r_esp = r_ebp;
    /* 005a295f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a2960: ret  */ FN_RET(0x005a27c0); r_esp += 4; return;
}

void f_005a2970(void) /* sub_5A2970 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a2970);
    /* 005a2970: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a2971: mov ebp, esp */ r_ebp = r_esp;
    /* 005a2973: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a2974: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005a2977: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a2979: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a297c: call 0x5a2040 */ r_esp -= 4; W32(r_esp, 0x5a2981u); f_005a2040();
    /* 005a2981: mov al, byte ptr [eax + 2] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x2u))) & 0xffu);
    /* 005a2984: mov esp, ebp */ r_esp = r_ebp;
    /* 005a2986: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a2987: ret  */ FN_RET(0x005a2970); r_esp += 4; return;
}

void f_005a2990(void) /* sub_5A2990 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a2990);
    /* 005a2990: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a2991: mov ebp, esp */ r_ebp = r_esp;
    /* 005a2993: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a2994: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005a2997: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a2999: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a299c: call 0x5a2040 */ r_esp -= 4; W32(r_esp, 0x5a29a1u); f_005a2040();
    /* 005a29a1: mov al, byte ptr [eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 005a29a3: mov esp, ebp */ r_esp = r_ebp;
    /* 005a29a5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a29a6: ret  */ FN_RET(0x005a2990); r_esp += 4; return;
}

void f_005a29b0(void) /* sub_5A29B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a29b0);
    /* 005a29b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a29b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005a29b3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a29b6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005a29b9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005a29c0: jmp 0x5a29cb */ goto L_005a29cb;
L_005a29c2:; BB(0x005a29c2);
    /* 005a29c2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a29c5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a29c8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005a29cb:; BB(0x005a29cb);
    /* 005a29cb: cmp dword ptr [ebp - 4], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a29cf: jge 0x5a29e7 */ if ((fS==fO)) goto L_005a29e7;
L_005a29d1:; BB(0x005a29d1);
    /* 005a29d1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a29d4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a29d5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a29d8: call 0x5a2690 */ r_esp -= 4; W32(r_esp, 0x5a29ddu); f_005a2690();
    /* 005a29dd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005a29df: jle 0x5a29e5 */ if ((fZ||fS!=fO)) goto L_005a29e5;
L_005a29e1:; BB(0x005a29e1);
    /* 005a29e1: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005a29e3: jmp 0x5a29e9 */ goto L_005a29e9;
L_005a29e5:; BB(0x005a29e5);
    /* 005a29e5: jmp 0x5a29c2 */ goto L_005a29c2;
L_005a29e7:; BB(0x005a29e7);
    /* 005a29e7: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_005a29e9:; BB(0x005a29e9);
    /* 005a29e9: mov esp, ebp */ r_esp = r_ebp;
    /* 005a29eb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a29ec: ret  */ FN_RET(0x005a29b0); r_esp += 4; return;
}

void f_005a29f0(void) /* sub_5A29F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a29f0);
    /* 005a29f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a29f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005a29f3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a29f6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005a29f9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a29fc: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a29ff: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005a2a02: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005a2a09: jmp 0x5a2a14 */ goto L_005a2a14;
L_005a2a0b:; BB(0x005a2a0b);
    /* 005a2a0b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a2a0e: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005a2a11: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_005a2a14:; BB(0x005a2a14);
    /* 005a2a14: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a2a18: jge 0x5a2a30 */ if ((fS==fO)) goto L_005a2a30;
L_005a2a1a:; BB(0x005a2a1a);
    /* 005a2a1a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a2a1d: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005a2a20: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a2a23: cmp dword ptr [eax + edx*8 + 0x38], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*8+0x38u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a2a28: jle 0x5a2a2e */ if ((fZ||fS!=fO)) goto L_005a2a2e;
L_005a2a2a:; BB(0x005a2a2a);
    /* 005a2a2a: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005a2a2c: jmp 0x5a2a32 */ goto L_005a2a32;
L_005a2a2e:; BB(0x005a2a2e);
    /* 005a2a2e: jmp 0x5a2a0b */ goto L_005a2a0b;
L_005a2a30:; BB(0x005a2a30);
    /* 005a2a30: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_005a2a32:; BB(0x005a2a32);
    /* 005a2a32: mov esp, ebp */ r_esp = r_ebp;
    /* 005a2a34: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a2a35: ret 4 */ FN_RET(0x005a29f0); r_esp += 8; return;
}

void f_005a2a40(void) /* sub_5A2A40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a2a40);
    /* 005a2a40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a2a41: mov ebp, esp */ r_ebp = r_esp;
    /* 005a2a43: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a2a46: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005a2a49: lea eax, [ebp - 1] */ r_eax = (u32)(r_ebp+0xffffffffu);
    /* 005a2a4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a2a4d: lea ecx, [ebp - 2] */ r_ecx = (u32)(r_ebp+0xfffffffeu);
    /* 005a2a50: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a2a51: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005a2a54: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a2a55: mov ecx, dword ptr [0x7935c0] */ r_ecx = R32((u32)(0x7935c0u));
    /* 005a2a5b: call 0x59b080 */ r_esp -= 4; W32(r_esp, 0x5a2a60u); f_0059b080();
    /* 005a2a60: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a2a62: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005a2a68: call 0x5df7b0 */ r_esp -= 4; W32(r_esp, 0x5a2a6du); f_005df7b0();
    /* 005a2a6d: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005a2a70: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a2a72: je 0x5a2b04 */ if (fZ) goto L_005a2b04;
L_005a2a78:; BB(0x005a2a78);
    /* 005a2a78: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a2a7b: movzx edx, byte ptr [ecx + 0xf0] */ r_edx = (u32)R8((u32)(r_ecx+0xf0u));
    /* 005a2a82: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a2a84: jne 0x5a2b04 */ if (!fZ) goto L_005a2b04;
L_005a2a86:; BB(0x005a2a86);
    /* 005a2a86: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a2a89: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a2a8a: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5a2a8fu); f_005dcb00();
    /* 005a2a8f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a2a92: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005a2a95: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005a2a98: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5a2a9du); f_0063aac0();
    /* 005a2a9d: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005a2a9f: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005a2aa2: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a2aa6: je 0x5a2ac4 */ if (fZ) goto L_005a2ac4;
L_005a2aa8:; BB(0x005a2aa8);
    /* 005a2aa8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005a2aab: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5a2ab0u); f_0063aac0();
    /* 005a2ab0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005a2ab2: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005a2ab5: cmp dword ptr [ebp - 0xc], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a2ab9: je 0x5a2ac4 */ if (fZ) goto L_005a2ac4;
L_005a2abb:; BB(0x005a2abb);
    /* 005a2abb: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 005a2ac2: jmp 0x5a2acb */ goto L_005a2acb;
L_005a2ac4:; BB(0x005a2ac4);
    /* 005a2ac4: mov dword ptr [ebp - 0x18], 1 */ W32((u32)(r_ebp+0xffffffe8u), 0x1u);
L_005a2acb:; BB(0x005a2acb);
    /* 005a2acb: movzx eax, byte ptr [ebp - 0x18] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffe8u));
    /* 005a2acf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a2ad1: je 0x5a2b04 */ if (fZ) goto L_005a2b04;
L_005a2ad3:; BB(0x005a2ad3);
    /* 005a2ad3: movzx ecx, byte ptr [ebp + 0xc] */ r_ecx = (u32)R8((u32)(r_ebp+0xcu));
    /* 005a2ad7: movzx edx, byte ptr [ebp - 2] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffffeu));
    /* 005a2adb: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a2add: jne 0x5a2aeb */ if (!fZ) goto L_005a2aeb;
L_005a2adf:; BB(0x005a2adf);
    /* 005a2adf: movzx eax, byte ptr [ebp + 0x10] */ r_eax = (u32)R8((u32)(r_ebp+0x10u));
    /* 005a2ae3: movzx ecx, byte ptr [ebp - 1] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 005a2ae7: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a2ae9: je 0x5a2b04 */ if (fZ) goto L_005a2b04;
L_005a2aeb:; BB(0x005a2aeb);
    /* 005a2aeb: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a2aee: mov byte ptr [edx + 0xf0], 1 */ W8((u32)(r_edx+0xf0u), 0x1u);
    /* 005a2af5: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 005a2afb: call 0x57c140 */ r_esp -= 4; W32(r_esp, 0x5a2b00u); f_0057c140();
    /* 005a2b00: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005a2b02: jmp 0x5a2b06 */ goto L_005a2b06;
L_005a2b04:; BB(0x005a2b04);
    /* 005a2b04: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_005a2b06:; BB(0x005a2b06);
    /* 005a2b06: mov esp, ebp */ r_esp = r_ebp;
    /* 005a2b08: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a2b09: ret 0xc */ FN_RET(0x005a2a40); r_esp += 16; return;
}

void f_005a2b10(void) /* sub_5A2B10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a2b10);
    /* 005a2b10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a2b11: mov ebp, esp */ r_ebp = r_esp;
    /* 005a2b13: sub esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a2b19: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005a2b1e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a2b20: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005a2b23: mov dword ptr [ebp - 0x148], ecx */ W32((u32)(r_ebp+0xfffffeb8u), r_ecx);
    /* 005a2b29: cmp dword ptr [ebp + 8], 5 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a2b2d: jne 0x5a2b34 */ if (!fZ) goto L_005a2b34;
L_005a2b2f:; BB(0x005a2b2f);
    /* 005a2b2f: jmp 0x5a3620 */ goto L_005a3620;
L_005a2b34:; BB(0x005a2b34);
    /* 005a2b34: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a2b37: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a2b3a: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005a2b3d: mov dword ptr [ebp - 0x28], 0xffffffff */ W32((u32)(r_ebp+0xffffffd8u), 0xffffffffu);
    /* 005a2b44: mov dword ptr [ebp - 0x2c], 0xffffffff */ W32((u32)(r_ebp+0xffffffd4u), 0xffffffffu);
    /* 005a2b4b: mov byte ptr [ebp - 1], 0 */ W8((u32)(r_ebp+0xffffffffu), 0x0u);
    /* 005a2b4f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a2b51: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a2b53: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5a2b58u); f_0064c8a0();
    /* 005a2b58: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a2b5b: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 005a2b61: mov dword ptr [ebp - 0x88], edx */ W32((u32)(r_ebp+0xffffff78u), r_edx);
    /* 005a2b67: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 005a2b6d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a2b6e: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 005a2b74: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a2b75: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a2b78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a2b79: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5a2b7eu); f_005dcb00();
    /* 005a2b7e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a2b81: mov ecx, eax */ r_ecx = r_eax;
    /* 005a2b83: call 0x5d6050 */ r_esp -= 4; W32(r_esp, 0x5a2b88u); f_005d6050();
    /* 005a2b88: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a2b8b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a2b8c: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5a2b91u); f_005dcb00();
    /* 005a2b91: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a2b94: mov dword ptr [ebp - 0x128], eax */ W32((u32)(r_ebp+0xfffffed8u), r_eax);
    /* 005a2b9a: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 005a2ba0: call 0x5d52e0 */ r_esp -= 4; W32(r_esp, 0x5a2ba5u); f_005d52e0();
    /* 005a2ba5: mov dl, byte ptr [eax + 0x2a] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+0x2au))) & 0xffu);
    /* 005a2ba8: mov byte ptr [ebp - 0x129], dl */ W8((u32)(r_ebp+0xfffffed7u), (u8)r_edx);
    /* 005a2bae: movsx eax, byte ptr [ebp - 0x129] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffed7u));
    /* 005a2bb5: mov ecx, dword ptr [ebp - 0x148] */ r_ecx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005a2bbb: mov dword ptr [ecx + 0x110], eax */ W32((u32)(r_ecx+0x110u), r_eax);
    /* 005a2bc1: mov edx, dword ptr [ebp - 0x148] */ r_edx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005a2bc7: mov dword ptr [edx + 0x114], 0xffffffff */ W32((u32)(r_edx+0x114u), 0xffffffffu);
    /* 005a2bd1: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 005a2bd8: jmp 0x5a2be3 */ goto L_005a2be3;
L_005a2bda:; BB(0x005a2bda);
    /* 005a2bda: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005a2bdd: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a2be0: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
L_005a2be3:; BB(0x005a2be3);
    /* 005a2be3: cmp dword ptr [ebp - 0x30], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a2be7: jge 0x5a2bf5 */ if ((fS==fO)) goto L_005a2bf5;
L_005a2be9:; BB(0x005a2be9);
    /* 005a2be9: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005a2bec: mov word ptr [ebp + ecx*2 - 0x18], 0 */ W16((u32)(r_ebp+r_ecx*2+0xffffffe8u), 0x0u);
    /* 005a2bf3: jmp 0x5a2bda */ goto L_005a2bda;
L_005a2bf5:; BB(0x005a2bf5);
    /* 005a2bf5: lea edx, [ebp - 0x24] */ r_edx = (u32)(r_ebp+0xffffffdcu);
    /* 005a2bf8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a2bf9: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005a2bfb: mov eax, dword ptr [ebp - 0x148] */ r_eax = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005a2c01: add eax, 0xe6 */ {  u32 a = r_eax; u32 b = 0xe6u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a2c06: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a2c07: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005a2c09: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a2c0d: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 005a2c10: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005a2c13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a2c14: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005a2c17: imul edx, edx, 6 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x6u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a2c1a: mov eax, dword ptr [ebp - 0x148] */ r_eax = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005a2c20: lea ecx, [eax + edx + 0xc8] */ r_ecx = (u32)(r_eax+r_edx+0xc8u);
    /* 005a2c27: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a2c28: call 0x462930 */ r_esp -= 4; W32(r_esp, 0x5a2c2du); f_00462930();
    /* 005a2c2d: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a2c30: lea edx, [ebp - 0x18] */ r_edx = (u32)(r_ebp+0xffffffe8u);
    /* 005a2c33: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a2c34: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005a2c36: lea eax, [ebp - 0x24] */ r_eax = (u32)(r_ebp+0xffffffdcu);
    /* 005a2c39: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a2c3a: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005a2c3c: call 0x462a40 */ r_esp -= 4; W32(r_esp, 0x5a2c41u); f_00462a40();
    /* 005a2c41: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a2c44: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a2c47: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a2c48: mov ecx, dword ptr [ebp - 0x148] */ r_ecx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005a2c4e: call 0x5a3660 */ r_esp -= 4; W32(r_esp, 0x5a2c53u); f_005a3660();
    /* 005a2c53: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005a2c56: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a2c58: je 0x5a2f5f */ if (fZ) goto L_005a2f5f;
L_005a2c5e:; BB(0x005a2c5e);
    /* 005a2c5e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a2c60: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005a2c62: lea eax, [ebp - 0x18] */ r_eax = (u32)(r_ebp+0xffffffe8u);
    /* 005a2c65: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a2c66: call 0x462ba0 */ r_esp -= 4; W32(r_esp, 0x5a2c6bu); f_00462ba0();
    /* 005a2c6b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a2c6e: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005a2c71: cmp dword ptr [ebp - 0x2c], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a2c75: jg 0x5a2c9c */ if ((!fZ&&fS==fO)) goto L_005a2c9c;
L_005a2c77:; BB(0x005a2c77);
    /* 005a2c77: cmp dword ptr [ebp - 0x2c], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a2c7b: jne 0x5a2c90 */ if (!fZ) goto L_005a2c90;
L_005a2c7d:; BB(0x005a2c7d);
    /* 005a2c7d: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005a2c7f: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 005a2c82: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a2c83: call 0x4639e0 */ r_esp -= 4; W32(r_esp, 0x5a2c88u); f_004639e0();
    /* 005a2c88: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a2c8b: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a2c8e: jge 0x5a2c9c */ if ((fS==fO)) goto L_005a2c9c;
L_005a2c90:; BB(0x005a2c90);
    /* 005a2c90: mov dword ptr [ebp - 0x14c], 0 */ W32((u32)(r_ebp+0xfffffeb4u), 0x0u);
    /* 005a2c9a: jmp 0x5a2ca6 */ goto L_005a2ca6;
L_005a2c9c:; BB(0x005a2c9c);
    /* 005a2c9c: mov dword ptr [ebp - 0x14c], 1 */ W32((u32)(r_ebp+0xfffffeb4u), 0x1u);
L_005a2ca6:; BB(0x005a2ca6);
    /* 005a2ca6: mov dl, byte ptr [ebp - 0x14c] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffeb4u))) & 0xffu);
    /* 005a2cac: mov byte ptr [ebp - 0x31], dl */ W8((u32)(r_ebp+0xffffffcfu), (u8)r_edx);
    /* 005a2caf: movzx eax, byte ptr [ebp - 0x31] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffcfu));
    /* 005a2cb3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a2cb5: je 0x5a2cd7 */ if (fZ) goto L_005a2cd7;
L_005a2cb7:; BB(0x005a2cb7);
    /* 005a2cb7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a2cb9: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005a2cbc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a2cbd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a2cbf: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005a2cc2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a2cc3: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a2cc6: mov ecx, dword ptr [ebp - 0x148] */ r_ecx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005a2ccc: mov ecx, dword ptr [ecx + eax*4 + 8] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 005a2cd0: call 0x5a4390 */ r_esp -= 4; W32(r_esp, 0x5a2cd5u); f_005a4390();
    /* 005a2cd5: jmp 0x5a2cf5 */ goto L_005a2cf5;
L_005a2cd7:; BB(0x005a2cd7);
    /* 005a2cd7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a2cd9: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005a2cdc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a2cdd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a2cdf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a2ce2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a2ce3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a2ce6: mov edx, dword ptr [ebp - 0x148] */ r_edx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005a2cec: mov ecx, dword ptr [edx + ecx*4 + 8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 005a2cf0: call 0x5a4390 */ r_esp -= 4; W32(r_esp, 0x5a2cf5u); f_005a4390();
L_005a2cf5:; BB(0x005a2cf5);
    /* 005a2cf5: mov eax, dword ptr [ebp - 0x148] */ r_eax = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005a2cfb: mov ecx, dword ptr [ebp - 0x148] */ r_ecx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005a2d01: mov edx, dword ptr [eax + 0x110] */ r_edx = R32((u32)(r_eax+0x110u));
    /* 005a2d07: cmp edx, dword ptr [ecx + 0x114] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x114u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a2d0d: je 0x5a2d2a */ if (fZ) goto L_005a2d2a;
L_005a2d0f:; BB(0x005a2d0f);
    /* 005a2d0f: mov eax, dword ptr [ebp - 0x148] */ r_eax = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005a2d15: cmp dword ptr [eax + 0x114], 0 */ {  u32 a = R32((u32)(r_eax+0x114u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a2d1c: jne 0x5a2d2a */ if (!fZ) goto L_005a2d2a;
L_005a2d1e:; BB(0x005a2d1e);
    /* 005a2d1e: mov dword ptr [ebp - 0x150], 1 */ W32((u32)(r_ebp+0xfffffeb0u), 0x1u);
    /* 005a2d28: jmp 0x5a2d34 */ goto L_005a2d34;
L_005a2d2a:; BB(0x005a2d2a);
    /* 005a2d2a: mov dword ptr [ebp - 0x150], 0 */ W32((u32)(r_ebp+0xfffffeb0u), 0x0u);
L_005a2d34:; BB(0x005a2d34);
    /* 005a2d34: mov cl, byte ptr [ebp - 0x150] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffeb0u))) & 0xffu);
    /* 005a2d3a: mov byte ptr [ebp - 1], cl */ W8((u32)(r_ebp+0xffffffffu), (u8)r_ecx);
    /* 005a2d3d: movzx edx, byte ptr [ebp - 1] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 005a2d41: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a2d43: je 0x5a2dc4 */ if (fZ) goto L_005a2dc4;
L_005a2d45:; BB(0x005a2d45);
    /* 005a2d45: push 0xf4240 */ { u32 v = 0xf4240u; r_esp -= 4; W32(r_esp, v); }
    /* 005a2d4a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a2d4c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a2d4f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a2d50: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5a2d55u); f_005dcb00();
    /* 005a2d55: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a2d58: mov ecx, eax */ r_ecx = r_eax;
    /* 005a2d5a: call 0x5d70e0 */ r_esp -= 4; W32(r_esp, 0x5a2d5fu); f_005d70e0();
    /* 005a2d5f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a2d62: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a2d63: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5a2d68u); f_005dcb00();
    /* 005a2d68: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a2d6b: mov dword ptr [ebp - 0x154], eax */ W32((u32)(r_ebp+0xfffffeacu), r_eax);
    /* 005a2d71: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a2d73: mov edx, dword ptr [ebp - 0x154] */ r_edx = R32((u32)(r_ebp+0xfffffeacu));
    /* 005a2d79: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005a2d7b: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 005a2d81: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005a2d84: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5a2d86u); call_ind(t); }
    /* 005a2d86: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a2d88: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a2d8a: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5a2d8fu); f_0064c8a0();
    /* 005a2d8f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a2d92: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 005a2d98: mov dword ptr [ebp - 0x90], edx */ W32((u32)(r_ebp+0xffffff70u), r_edx);
    /* 005a2d9e: mov eax, dword ptr [ebp - 0x90] */ r_eax = R32((u32)(r_ebp+0xffffff70u));
    /* 005a2da4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a2da5: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005a2dab: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a2dac: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005a2daf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a2db0: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5a2db5u); f_005dcb00();
    /* 005a2db5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a2db8: mov ecx, eax */ r_ecx = r_eax;
    /* 005a2dba: call 0x5d6050 */ r_esp -= 4; W32(r_esp, 0x5a2dbfu); f_005d6050();
    /* 005a2dbf: jmp 0x5a3620 */ goto L_005a3620;
L_005a2dc4:; BB(0x005a2dc4);
    /* 005a2dc4: movzx eax, byte ptr [ebp - 0x31] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffcfu));
    /* 005a2dc8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a2dca: je 0x5a2f5f */ if (fZ) goto L_005a2f5f;
L_005a2dd0:; BB(0x005a2dd0);
    /* 005a2dd0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a2dd2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a2dd4: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5a2dd9u); f_0064c8a0();
    /* 005a2dd9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a2ddc: mov dword ptr [ebp - 0x9c], eax */ W32((u32)(r_ebp+0xffffff64u), r_eax);
    /* 005a2de2: mov dword ptr [ebp - 0x98], edx */ W32((u32)(r_ebp+0xffffff68u), r_edx);
    /* 005a2de8: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 005a2dee: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 005a2df1: mov edx, dword ptr [ebp - 0x98] */ r_edx = R32((u32)(r_ebp+0xffffff68u));
    /* 005a2df7: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 005a2dfa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a2dfc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a2dfe: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5a2e03u); f_0064c8a0();
    /* 005a2e03: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a2e06: mov dword ptr [ebp - 0xa4], eax */ W32((u32)(r_ebp+0xffffff5cu), r_eax);
    /* 005a2e0c: mov dword ptr [ebp - 0xa0], edx */ W32((u32)(r_ebp+0xffffff60u), r_edx);
    /* 005a2e12: mov eax, dword ptr [ebp - 0xa4] */ r_eax = R32((u32)(r_ebp+0xffffff5cu));
    /* 005a2e18: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 005a2e1b: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 005a2e21: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 005a2e24: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a2e26: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a2e28: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5a2e2du); f_0064c8a0();
    /* 005a2e2d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a2e30: mov dword ptr [ebp - 0xac], eax */ W32((u32)(r_ebp+0xffffff54u), r_eax);
    /* 005a2e36: mov dword ptr [ebp - 0xa8], edx */ W32((u32)(r_ebp+0xffffff58u), r_edx);
    /* 005a2e3c: mov edx, dword ptr [ebp - 0xac] */ r_edx = R32((u32)(r_ebp+0xffffff54u));
    /* 005a2e42: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 005a2e45: mov eax, dword ptr [ebp - 0xa8] */ r_eax = R32((u32)(r_ebp+0xffffff58u));
    /* 005a2e4b: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005a2e4e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a2e51: mov edx, dword ptr [ebp - 0x148] */ r_edx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005a2e57: mov eax, dword ptr [edx + ecx*4 + 8] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 005a2e5b: mov dword ptr [ebp - 0x130], eax */ W32((u32)(r_ebp+0xfffffed0u), r_eax);
    /* 005a2e61: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a2e64: shl ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 005a2e67: mov edx, dword ptr [ebp - 0x130] */ r_edx = R32((u32)(r_ebp+0xfffffed0u));
    /* 005a2e6d: lea eax, [edx + ecx + 0x48] */ r_eax = (u32)(r_edx+r_ecx+0x48u);
    /* 005a2e71: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005a2e73: shl ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 005a2e76: mov edx, dword ptr [eax + ecx] */ r_edx = R32((u32)(r_eax+r_ecx));
    /* 005a2e79: mov eax, dword ptr [eax + ecx + 4] */ r_eax = R32((u32)(r_eax+r_ecx+0x4u));
    /* 005a2e7d: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 005a2e80: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 005a2e83: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a2e86: mov edx, dword ptr [ebp - 0x148] */ r_edx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005a2e8c: mov eax, dword ptr [edx + ecx*4 + 8] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 005a2e90: mov dword ptr [ebp - 0x134], eax */ W32((u32)(r_ebp+0xfffffeccu), r_eax);
    /* 005a2e96: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a2e99: shl ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 005a2e9c: mov edx, dword ptr [ebp - 0x134] */ r_edx = R32((u32)(r_ebp+0xfffffeccu));
    /* 005a2ea2: lea eax, [edx + ecx + 0x48] */ r_eax = (u32)(r_edx+r_ecx+0x48u);
    /* 005a2ea6: mov ecx, 1 */ r_ecx = 0x1u;
    /* 005a2eab: shl ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 005a2eae: mov edx, dword ptr [eax + ecx] */ r_edx = R32((u32)(r_eax+r_ecx));
    /* 005a2eb1: mov eax, dword ptr [eax + ecx + 4] */ r_eax = R32((u32)(r_eax+r_ecx+0x4u));
    /* 005a2eb5: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 005a2eb8: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 005a2ebb: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005a2ebe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a2ebf: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a2ec2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a2ec3: lea eax, [ebp - 0xb4] */ r_eax = (u32)(r_ebp+0xffffff4cu);
    /* 005a2ec9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a2eca: lea ecx, [ebp - 0x44] */ r_ecx = (u32)(r_ebp+0xffffffbcu);
    /* 005a2ecd: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x5a2ed2u); f_0064c5c0();
    /* 005a2ed2: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005a2ed4: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005a2ed7: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 005a2eda: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 005a2edd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a2edf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a2ee2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a2ee3: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005a2ee6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a2ee7: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005a2eea: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a2eeb: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a2eee: mov ecx, dword ptr [ebp - 0x148] */ r_ecx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005a2ef4: mov edx, dword ptr [ecx + eax*4 + 8] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 005a2ef8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a2efb: mov ecx, dword ptr [ebp - 0x148] */ r_ecx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005a2f01: mov ecx, dword ptr [ecx + eax*4 + 8] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 005a2f05: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005a2f07: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 005a2f0d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5a2f0fu); call_ind(t); }
    /* 005a2f0f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a2f11: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a2f13: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5a2f18u); f_0064c8a0();
    /* 005a2f18: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a2f1b: mov dword ptr [ebp - 0xbc], eax */ W32((u32)(r_ebp+0xffffff44u), r_eax);
    /* 005a2f21: mov dword ptr [ebp - 0xb8], edx */ W32((u32)(r_ebp+0xffffff48u), r_edx);
    /* 005a2f27: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a2f29: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a2f2c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a2f2d: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 005a2f33: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a2f34: mov eax, dword ptr [ebp - 0xbc] */ r_eax = R32((u32)(r_ebp+0xffffff44u));
    /* 005a2f3a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a2f3b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a2f3e: mov edx, dword ptr [ebp - 0x148] */ r_edx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005a2f44: mov eax, dword ptr [edx + ecx*4 + 8] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 005a2f48: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a2f4b: mov edx, dword ptr [ebp - 0x148] */ r_edx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005a2f51: mov ecx, dword ptr [edx + ecx*4 + 8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 005a2f55: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005a2f57: mov edx, dword ptr [eax + 0xb8] */ r_edx = R32((u32)(r_eax+0xb8u));
    /* 005a2f5d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5a2f5fu); call_ind(t); }
L_005a2f5f:; BB(0x005a2f5f);
    /* 005a2f5f: mov eax, dword ptr [ebp - 0x148] */ r_eax = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005a2f65: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a2f68: movzx ecx, byte ptr [eax + 0xfb] */ r_ecx = (u32)R8((u32)(r_eax+0xfbu));
    /* 005a2f6f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a2f71: je 0x5a3256 */ if (fZ) goto L_005a3256;
L_005a2f77:; BB(0x005a2f77);
    /* 005a2f77: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a2f79: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005a2f7b: lea edx, [ebp - 0x18] */ r_edx = (u32)(r_ebp+0xffffffe8u);
    /* 005a2f7e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a2f7f: call 0x462ba0 */ r_esp -= 4; W32(r_esp, 0x5a2f84u); f_00462ba0();
    /* 005a2f84: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a2f87: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005a2f8a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a2f8c: cmp dword ptr [ebp - 0x2c], 9 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a2f90: setge al */ r_eax = (r_eax & 0xffffff00u) | ((((fS==fO)) ? 1 : 0) & 0xffu);
    /* 005a2f93: mov byte ptr [ebp - 0x4d], al */ W8((u32)(r_ebp+0xffffffb3u), (u8)r_eax);
    /* 005a2f96: movzx ecx, byte ptr [ebp - 0x4d] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffb3u));
    /* 005a2f9a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a2f9c: je 0x5a2fbc */ if (fZ) goto L_005a2fbc;
L_005a2f9e:; BB(0x005a2f9e);
    /* 005a2f9e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a2fa0: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005a2fa3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a2fa4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a2fa6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a2fa9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a2faa: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a2fad: mov edx, dword ptr [ebp - 0x148] */ r_edx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005a2fb3: mov ecx, dword ptr [edx + ecx*4 + 0xc] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0xcu));
    /* 005a2fb7: call 0x5a4390 */ r_esp -= 4; W32(r_esp, 0x5a2fbcu); f_005a4390();
L_005a2fbc:; BB(0x005a2fbc);
    /* 005a2fbc: mov eax, dword ptr [ebp - 0x148] */ r_eax = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005a2fc2: mov ecx, dword ptr [ebp - 0x148] */ r_ecx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005a2fc8: mov edx, dword ptr [eax + 0x110] */ r_edx = R32((u32)(r_eax+0x110u));
    /* 005a2fce: cmp edx, dword ptr [ecx + 0x114] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x114u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a2fd4: je 0x5a2ff1 */ if (fZ) goto L_005a2ff1;
L_005a2fd6:; BB(0x005a2fd6);
    /* 005a2fd6: mov eax, dword ptr [ebp - 0x148] */ r_eax = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005a2fdc: cmp dword ptr [eax + 0x114], 0 */ {  u32 a = R32((u32)(r_eax+0x114u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a2fe3: jne 0x5a2ff1 */ if (!fZ) goto L_005a2ff1;
L_005a2fe5:; BB(0x005a2fe5);
    /* 005a2fe5: mov dword ptr [ebp - 0x158], 1 */ W32((u32)(r_ebp+0xfffffea8u), 0x1u);
    /* 005a2fef: jmp 0x5a2ffb */ goto L_005a2ffb;
L_005a2ff1:; BB(0x005a2ff1);
    /* 005a2ff1: mov dword ptr [ebp - 0x158], 0 */ W32((u32)(r_ebp+0xfffffea8u), 0x0u);
L_005a2ffb:; BB(0x005a2ffb);
    /* 005a2ffb: mov cl, byte ptr [ebp - 0x158] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffea8u))) & 0xffu);
    /* 005a3001: mov byte ptr [ebp - 1], cl */ W8((u32)(r_ebp+0xffffffffu), (u8)r_ecx);
    /* 005a3004: movzx edx, byte ptr [ebp - 1] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 005a3008: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a300a: je 0x5a308b */ if (fZ) goto L_005a308b;
L_005a300c:; BB(0x005a300c);
    /* 005a300c: push 0xf4240 */ { u32 v = 0xf4240u; r_esp -= 4; W32(r_esp, v); }
    /* 005a3011: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a3013: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a3016: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a3017: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5a301cu); f_005dcb00();
    /* 005a301c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a301f: mov ecx, eax */ r_ecx = r_eax;
    /* 005a3021: call 0x5d70e0 */ r_esp -= 4; W32(r_esp, 0x5a3026u); f_005d70e0();
    /* 005a3026: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a3029: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a302a: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5a302fu); f_005dcb00();
    /* 005a302f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a3032: mov dword ptr [ebp - 0x15c], eax */ W32((u32)(r_ebp+0xfffffea4u), r_eax);
    /* 005a3038: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a303a: mov edx, dword ptr [ebp - 0x15c] */ r_edx = R32((u32)(r_ebp+0xfffffea4u));
    /* 005a3040: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005a3042: mov ecx, dword ptr [ebp - 0x15c] */ r_ecx = R32((u32)(r_ebp+0xfffffea4u));
    /* 005a3048: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005a304b: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5a304du); call_ind(t); }
    /* 005a304d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a304f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a3051: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5a3056u); f_0064c8a0();
    /* 005a3056: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a3059: mov dword ptr [ebp - 0xc4], eax */ W32((u32)(r_ebp+0xffffff3cu), r_eax);
    /* 005a305f: mov dword ptr [ebp - 0xc0], edx */ W32((u32)(r_ebp+0xffffff40u), r_edx);
    /* 005a3065: mov eax, dword ptr [ebp - 0xc0] */ r_eax = R32((u32)(r_ebp+0xffffff40u));
    /* 005a306b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a306c: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 005a3072: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a3073: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005a3076: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a3077: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5a307cu); f_005dcb00();
    /* 005a307c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a307f: mov ecx, eax */ r_ecx = r_eax;
    /* 005a3081: call 0x5d6050 */ r_esp -= 4; W32(r_esp, 0x5a3086u); f_005d6050();
    /* 005a3086: jmp 0x5a3620 */ goto L_005a3620;
L_005a308b:; BB(0x005a308b);
    /* 005a308b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a308e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a308f: mov ecx, dword ptr [ebp - 0x148] */ r_ecx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005a3095: call 0x5a2080 */ r_esp -= 4; W32(r_esp, 0x5a309au); f_005a2080();
    /* 005a309a: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005a309d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a309f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a30a1: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005a30a4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a30a5: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005a30a8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a30a9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a30ac: mov ecx, dword ptr [ebp - 0x148] */ r_ecx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005a30b2: mov ecx, dword ptr [ecx + eax*4 + 0xc] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0xcu));
    /* 005a30b6: call 0x5a4390 */ r_esp -= 4; W32(r_esp, 0x5a30bbu); f_005a4390();
    /* 005a30bb: movzx edx, byte ptr [ebp - 0x4d] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffb3u));
    /* 005a30bf: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a30c1: je 0x5a3256 */ if (fZ) goto L_005a3256;
L_005a30c7:; BB(0x005a30c7);
    /* 005a30c7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a30c9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a30cb: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5a30d0u); f_0064c8a0();
    /* 005a30d0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a30d3: mov dword ptr [ebp - 0xcc], eax */ W32((u32)(r_ebp+0xffffff34u), r_eax);
    /* 005a30d9: mov dword ptr [ebp - 0xc8], edx */ W32((u32)(r_ebp+0xffffff38u), r_edx);
    /* 005a30df: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 005a30e5: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 005a30e8: mov ecx, dword ptr [ebp - 0xc8] */ r_ecx = R32((u32)(r_ebp+0xffffff38u));
    /* 005a30ee: mov dword ptr [ebp - 0x5c], ecx */ W32((u32)(r_ebp+0xffffffa4u), r_ecx);
    /* 005a30f1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a30f3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a30f5: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5a30fau); f_0064c8a0();
    /* 005a30fa: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a30fd: mov dword ptr [ebp - 0xd4], eax */ W32((u32)(r_ebp+0xffffff2cu), r_eax);
    /* 005a3103: mov dword ptr [ebp - 0xd0], edx */ W32((u32)(r_ebp+0xffffff30u), r_edx);
    /* 005a3109: mov edx, dword ptr [ebp - 0xd4] */ r_edx = R32((u32)(r_ebp+0xffffff2cu));
    /* 005a310f: mov dword ptr [ebp - 0x68], edx */ W32((u32)(r_ebp+0xffffff98u), r_edx);
    /* 005a3112: mov eax, dword ptr [ebp - 0xd0] */ r_eax = R32((u32)(r_ebp+0xffffff30u));
    /* 005a3118: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 005a311b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a311d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a311f: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5a3124u); f_0064c8a0();
    /* 005a3124: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a3127: mov dword ptr [ebp - 0xdc], eax */ W32((u32)(r_ebp+0xffffff24u), r_eax);
    /* 005a312d: mov dword ptr [ebp - 0xd8], edx */ W32((u32)(r_ebp+0xffffff28u), r_edx);
    /* 005a3133: mov ecx, dword ptr [ebp - 0xdc] */ r_ecx = R32((u32)(r_ebp+0xffffff24u));
    /* 005a3139: mov dword ptr [ebp - 0x58], ecx */ W32((u32)(r_ebp+0xffffffa8u), r_ecx);
    /* 005a313c: mov edx, dword ptr [ebp - 0xd8] */ r_edx = R32((u32)(r_ebp+0xffffff28u));
    /* 005a3142: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 005a3145: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a3148: mov ecx, dword ptr [ebp - 0x148] */ r_ecx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005a314e: mov edx, dword ptr [ecx + eax*4 + 0xc] */ r_edx = R32((u32)(r_ecx+r_eax*4+0xcu));
    /* 005a3152: mov dword ptr [ebp - 0x138], edx */ W32((u32)(r_ebp+0xfffffec8u), r_edx);
    /* 005a3158: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a315b: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005a315e: mov ecx, dword ptr [ebp - 0x138] */ r_ecx = R32((u32)(r_ebp+0xfffffec8u));
    /* 005a3164: lea edx, [ecx + eax + 0x48] */ r_edx = (u32)(r_ecx+r_eax+0x48u);
    /* 005a3168: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a316a: shl eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005a316d: mov ecx, dword ptr [edx + eax] */ r_ecx = R32((u32)(r_edx+r_eax));
    /* 005a3170: mov edx, dword ptr [edx + eax + 4] */ r_edx = R32((u32)(r_edx+r_eax+0x4u));
    /* 005a3174: mov dword ptr [ebp - 0x60], ecx */ W32((u32)(r_ebp+0xffffffa0u), r_ecx);
    /* 005a3177: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 005a317a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a317d: mov ecx, dword ptr [ebp - 0x148] */ r_ecx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005a3183: mov edx, dword ptr [ecx + eax*4 + 0xc] */ r_edx = R32((u32)(r_ecx+r_eax*4+0xcu));
    /* 005a3187: mov dword ptr [ebp - 0x13c], edx */ W32((u32)(r_ebp+0xfffffec4u), r_edx);
    /* 005a318d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a3190: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005a3193: mov ecx, dword ptr [ebp - 0x13c] */ r_ecx = R32((u32)(r_ebp+0xfffffec4u));
    /* 005a3199: lea edx, [ecx + eax + 0x48] */ r_edx = (u32)(r_ecx+r_eax+0x48u);
    /* 005a319d: mov eax, 1 */ r_eax = 0x1u;
    /* 005a31a2: shl eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005a31a5: mov ecx, dword ptr [edx + eax] */ r_ecx = R32((u32)(r_edx+r_eax));
    /* 005a31a8: mov edx, dword ptr [edx + eax + 4] */ r_edx = R32((u32)(r_edx+r_eax+0x4u));
    /* 005a31ac: mov dword ptr [ebp - 0x68], ecx */ W32((u32)(r_ebp+0xffffff98u), r_ecx);
    /* 005a31af: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 005a31b2: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 005a31b5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a31b6: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 005a31b9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a31ba: lea edx, [ebp - 0xe4] */ r_edx = (u32)(r_ebp+0xffffff1cu);
    /* 005a31c0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a31c1: lea ecx, [ebp - 0x60] */ r_ecx = (u32)(r_ebp+0xffffffa0u);
    /* 005a31c4: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x5a31c9u); f_0064c5c0();
    /* 005a31c9: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005a31cb: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005a31ce: mov dword ptr [ebp - 0x58], ecx */ W32((u32)(r_ebp+0xffffffa8u), r_ecx);
    /* 005a31d1: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 005a31d4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a31d6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a31d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a31da: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005a31dd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a31de: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005a31e1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a31e2: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a31e5: mov ecx, dword ptr [ebp - 0x148] */ r_ecx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005a31eb: mov edx, dword ptr [ecx + eax*4 + 0xc] */ r_edx = R32((u32)(r_ecx+r_eax*4+0xcu));
    /* 005a31ef: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a31f2: mov ecx, dword ptr [ebp - 0x148] */ r_ecx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005a31f8: mov ecx, dword ptr [ecx + eax*4 + 0xc] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0xcu));
    /* 005a31fc: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005a31fe: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 005a3204: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5a3206u); call_ind(t); }
    /* 005a3206: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a3208: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a320a: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5a320fu); f_0064c8a0();
    /* 005a320f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a3212: mov dword ptr [ebp - 0xec], eax */ W32((u32)(r_ebp+0xffffff14u), r_eax);
    /* 005a3218: mov dword ptr [ebp - 0xe8], edx */ W32((u32)(r_ebp+0xffffff18u), r_edx);
    /* 005a321e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a3220: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a3223: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a3224: mov edx, dword ptr [ebp - 0xe8] */ r_edx = R32((u32)(r_ebp+0xffffff18u));
    /* 005a322a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a322b: mov eax, dword ptr [ebp - 0xec] */ r_eax = R32((u32)(r_ebp+0xffffff14u));
    /* 005a3231: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a3232: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a3235: mov edx, dword ptr [ebp - 0x148] */ r_edx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005a323b: mov eax, dword ptr [edx + ecx*4 + 0xc] */ r_eax = R32((u32)(r_edx+r_ecx*4+0xcu));
    /* 005a323f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a3242: mov edx, dword ptr [ebp - 0x148] */ r_edx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005a3248: mov ecx, dword ptr [edx + ecx*4 + 0xc] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0xcu));
    /* 005a324c: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005a324e: mov edx, dword ptr [eax + 0xb8] */ r_edx = R32((u32)(r_eax+0xb8u));
    /* 005a3254: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5a3256u); call_ind(t); }
L_005a3256:; BB(0x005a3256);
    /* 005a3256: mov eax, dword ptr [ebp - 0x148] */ r_eax = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005a325c: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a325f: movzx ecx, byte ptr [eax + 0xff] */ r_ecx = (u32)R8((u32)(r_eax+0xffu));
    /* 005a3266: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a3268: je 0x5a3556 */ if (fZ) goto L_005a3556;
L_005a326e:; BB(0x005a326e);
    /* 005a326e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a3270: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005a3272: lea edx, [ebp - 0x18] */ r_edx = (u32)(r_ebp+0xffffffe8u);
    /* 005a3275: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a3276: call 0x462ba0 */ r_esp -= 4; W32(r_esp, 0x5a327bu); f_00462ba0();
    /* 005a327b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a327e: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005a3281: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a3283: cmp dword ptr [ebp - 0x2c], 9 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a3287: setge al */ r_eax = (r_eax & 0xffffff00u) | ((((fS==fO)) ? 1 : 0) & 0xffu);
    /* 005a328a: mov byte ptr [ebp - 0x69], al */ W8((u32)(r_ebp+0xffffff97u), (u8)r_eax);
    /* 005a328d: movzx ecx, byte ptr [ebp - 0x69] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffff97u));
    /* 005a3291: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a3293: je 0x5a32b3 */ if (fZ) goto L_005a32b3;
L_005a3295:; BB(0x005a3295);
    /* 005a3295: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a3297: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005a329a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a329b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a329d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a32a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a32a1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a32a4: mov edx, dword ptr [ebp - 0x148] */ r_edx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005a32aa: mov ecx, dword ptr [edx + ecx*4 + 0x10] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x10u));
    /* 005a32ae: call 0x5a4390 */ r_esp -= 4; W32(r_esp, 0x5a32b3u); f_005a4390();
L_005a32b3:; BB(0x005a32b3);
    /* 005a32b3: mov eax, dword ptr [ebp - 0x148] */ r_eax = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005a32b9: mov ecx, dword ptr [ebp - 0x148] */ r_ecx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005a32bf: mov edx, dword ptr [eax + 0x110] */ r_edx = R32((u32)(r_eax+0x110u));
    /* 005a32c5: cmp edx, dword ptr [ecx + 0x114] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x114u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a32cb: je 0x5a32e8 */ if (fZ) goto L_005a32e8;
L_005a32cd:; BB(0x005a32cd);
    /* 005a32cd: mov eax, dword ptr [ebp - 0x148] */ r_eax = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005a32d3: cmp dword ptr [eax + 0x114], 0 */ {  u32 a = R32((u32)(r_eax+0x114u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a32da: jne 0x5a32e8 */ if (!fZ) goto L_005a32e8;
L_005a32dc:; BB(0x005a32dc);
    /* 005a32dc: mov dword ptr [ebp - 0x160], 1 */ W32((u32)(r_ebp+0xfffffea0u), 0x1u);
    /* 005a32e6: jmp 0x5a32f2 */ goto L_005a32f2;
L_005a32e8:; BB(0x005a32e8);
    /* 005a32e8: mov dword ptr [ebp - 0x160], 0 */ W32((u32)(r_ebp+0xfffffea0u), 0x0u);
L_005a32f2:; BB(0x005a32f2);
    /* 005a32f2: mov cl, byte ptr [ebp - 0x160] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffea0u))) & 0xffu);
    /* 005a32f8: mov byte ptr [ebp - 1], cl */ W8((u32)(r_ebp+0xffffffffu), (u8)r_ecx);
    /* 005a32fb: movzx edx, byte ptr [ebp - 1] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 005a32ff: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a3301: je 0x5a3382 */ if (fZ) goto L_005a3382;
L_005a3303:; BB(0x005a3303);
    /* 005a3303: push 0xf4240 */ { u32 v = 0xf4240u; r_esp -= 4; W32(r_esp, v); }
    /* 005a3308: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a330a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a330d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a330e: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5a3313u); f_005dcb00();
    /* 005a3313: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a3316: mov ecx, eax */ r_ecx = r_eax;
    /* 005a3318: call 0x5d70e0 */ r_esp -= 4; W32(r_esp, 0x5a331du); f_005d70e0();
    /* 005a331d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a3320: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a3321: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5a3326u); f_005dcb00();
    /* 005a3326: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a3329: mov dword ptr [ebp - 0x164], eax */ W32((u32)(r_ebp+0xfffffe9cu), r_eax);
    /* 005a332f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a3331: mov edx, dword ptr [ebp - 0x164] */ r_edx = R32((u32)(r_ebp+0xfffffe9cu));
    /* 005a3337: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005a3339: mov ecx, dword ptr [ebp - 0x164] */ r_ecx = R32((u32)(r_ebp+0xfffffe9cu));
    /* 005a333f: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005a3342: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5a3344u); call_ind(t); }
    /* 005a3344: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a3346: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a3348: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5a334du); f_0064c8a0();
    /* 005a334d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a3350: mov dword ptr [ebp - 0xf4], eax */ W32((u32)(r_ebp+0xffffff0cu), r_eax);
    /* 005a3356: mov dword ptr [ebp - 0xf0], edx */ W32((u32)(r_ebp+0xffffff10u), r_edx);
    /* 005a335c: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 005a3362: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a3363: mov ecx, dword ptr [ebp - 0xf4] */ r_ecx = R32((u32)(r_ebp+0xffffff0cu));
    /* 005a3369: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a336a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005a336d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a336e: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5a3373u); f_005dcb00();
    /* 005a3373: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a3376: mov ecx, eax */ r_ecx = r_eax;
    /* 005a3378: call 0x5d6050 */ r_esp -= 4; W32(r_esp, 0x5a337du); f_005d6050();
    /* 005a337d: jmp 0x5a3620 */ goto L_005a3620;
L_005a3382:; BB(0x005a3382);
    /* 005a3382: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a3385: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a3386: mov ecx, dword ptr [ebp - 0x148] */ r_ecx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005a338c: call 0x5a2080 */ r_esp -= 4; W32(r_esp, 0x5a3391u); f_005a2080();
    /* 005a3391: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005a3394: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a3396: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a3398: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005a339b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a339c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005a339f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a33a0: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a33a3: mov ecx, dword ptr [ebp - 0x148] */ r_ecx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005a33a9: mov ecx, dword ptr [ecx + eax*4 + 0x10] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x10u));
    /* 005a33ad: call 0x5a4390 */ r_esp -= 4; W32(r_esp, 0x5a33b2u); f_005a4390();
    /* 005a33b2: movzx edx, byte ptr [ebp - 0x69] */ r_edx = (u32)R8((u32)(r_ebp+0xffffff97u));
    /* 005a33b6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a33b8: je 0x5a3556 */ if (fZ) goto L_005a3556;
L_005a33be:; BB(0x005a33be);
    /* 005a33be: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a33c0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a33c2: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5a33c7u); f_0064c8a0();
    /* 005a33c7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a33ca: mov dword ptr [ebp - 0xfc], eax */ W32((u32)(r_ebp+0xffffff04u), r_eax);
    /* 005a33d0: mov dword ptr [ebp - 0xf8], edx */ W32((u32)(r_ebp+0xffffff08u), r_edx);
    /* 005a33d6: mov eax, dword ptr [ebp - 0xfc] */ r_eax = R32((u32)(r_ebp+0xffffff04u));
    /* 005a33dc: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 005a33df: mov ecx, dword ptr [ebp - 0xf8] */ r_ecx = R32((u32)(r_ebp+0xffffff08u));
    /* 005a33e5: mov dword ptr [ebp - 0x78], ecx */ W32((u32)(r_ebp+0xffffff88u), r_ecx);
    /* 005a33e8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a33ea: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a33ec: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5a33f1u); f_0064c8a0();
    /* 005a33f1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a33f4: mov dword ptr [ebp - 0x104], eax */ W32((u32)(r_ebp+0xfffffefcu), r_eax);
    /* 005a33fa: mov dword ptr [ebp - 0x100], edx */ W32((u32)(r_ebp+0xffffff00u), r_edx);
    /* 005a3400: mov edx, dword ptr [ebp - 0x104] */ r_edx = R32((u32)(r_ebp+0xfffffefcu));
    /* 005a3406: mov dword ptr [ebp - 0x84], edx */ W32((u32)(r_ebp+0xffffff7cu), r_edx);
    /* 005a340c: mov eax, dword ptr [ebp - 0x100] */ r_eax = R32((u32)(r_ebp+0xffffff00u));
    /* 005a3412: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 005a3415: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a3417: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a3419: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5a341eu); f_0064c8a0();
    /* 005a341e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a3421: mov dword ptr [ebp - 0x10c], eax */ W32((u32)(r_ebp+0xfffffef4u), r_eax);
    /* 005a3427: mov dword ptr [ebp - 0x108], edx */ W32((u32)(r_ebp+0xfffffef8u), r_edx);
    /* 005a342d: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 005a3433: mov dword ptr [ebp - 0x74], ecx */ W32((u32)(r_ebp+0xffffff8cu), r_ecx);
    /* 005a3436: mov edx, dword ptr [ebp - 0x108] */ r_edx = R32((u32)(r_ebp+0xfffffef8u));
    /* 005a343c: mov dword ptr [ebp - 0x70], edx */ W32((u32)(r_ebp+0xffffff90u), r_edx);
    /* 005a343f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a3442: mov ecx, dword ptr [ebp - 0x148] */ r_ecx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005a3448: mov edx, dword ptr [ecx + eax*4 + 0x10] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x10u));
    /* 005a344c: mov dword ptr [ebp - 0x140], edx */ W32((u32)(r_ebp+0xfffffec0u), r_edx);
    /* 005a3452: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a3455: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005a3458: mov ecx, dword ptr [ebp - 0x140] */ r_ecx = R32((u32)(r_ebp+0xfffffec0u));
    /* 005a345e: lea edx, [ecx + eax + 0x48] */ r_edx = (u32)(r_ecx+r_eax+0x48u);
    /* 005a3462: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a3464: shl eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005a3467: mov ecx, dword ptr [edx + eax] */ r_ecx = R32((u32)(r_edx+r_eax));
    /* 005a346a: mov edx, dword ptr [edx + eax + 4] */ r_edx = R32((u32)(r_edx+r_eax+0x4u));
    /* 005a346e: mov dword ptr [ebp - 0x7c], ecx */ W32((u32)(r_ebp+0xffffff84u), r_ecx);
    /* 005a3471: mov dword ptr [ebp - 0x78], edx */ W32((u32)(r_ebp+0xffffff88u), r_edx);
    /* 005a3474: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a3477: mov ecx, dword ptr [ebp - 0x148] */ r_ecx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005a347d: mov edx, dword ptr [ecx + eax*4 + 0x10] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x10u));
    /* 005a3481: mov dword ptr [ebp - 0x144], edx */ W32((u32)(r_ebp+0xfffffebcu), r_edx);
    /* 005a3487: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a348a: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005a348d: mov ecx, dword ptr [ebp - 0x144] */ r_ecx = R32((u32)(r_ebp+0xfffffebcu));
    /* 005a3493: lea edx, [ecx + eax + 0x48] */ r_edx = (u32)(r_ecx+r_eax+0x48u);
    /* 005a3497: mov eax, 1 */ r_eax = 0x1u;
    /* 005a349c: shl eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005a349f: mov ecx, dword ptr [edx + eax] */ r_ecx = R32((u32)(r_edx+r_eax));
    /* 005a34a2: mov edx, dword ptr [edx + eax + 4] */ r_edx = R32((u32)(r_edx+r_eax+0x4u));
    /* 005a34a6: mov dword ptr [ebp - 0x84], ecx */ W32((u32)(r_ebp+0xffffff7cu), r_ecx);
    /* 005a34ac: mov dword ptr [ebp - 0x80], edx */ W32((u32)(r_ebp+0xffffff80u), r_edx);
    /* 005a34af: mov eax, dword ptr [ebp - 0x80] */ r_eax = R32((u32)(r_ebp+0xffffff80u));
    /* 005a34b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a34b3: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 005a34b9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a34ba: lea edx, [ebp - 0x114] */ r_edx = (u32)(r_ebp+0xfffffeecu);
    /* 005a34c0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a34c1: lea ecx, [ebp - 0x7c] */ r_ecx = (u32)(r_ebp+0xffffff84u);
    /* 005a34c4: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x5a34c9u); f_0064c5c0();
    /* 005a34c9: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005a34cb: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005a34ce: mov dword ptr [ebp - 0x74], ecx */ W32((u32)(r_ebp+0xffffff8cu), r_ecx);
    /* 005a34d1: mov dword ptr [ebp - 0x70], edx */ W32((u32)(r_ebp+0xffffff90u), r_edx);
    /* 005a34d4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a34d6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a34d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a34da: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 005a34dd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a34de: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 005a34e1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a34e2: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a34e5: mov ecx, dword ptr [ebp - 0x148] */ r_ecx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005a34eb: mov edx, dword ptr [ecx + eax*4 + 0x10] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x10u));
    /* 005a34ef: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a34f2: mov ecx, dword ptr [ebp - 0x148] */ r_ecx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005a34f8: mov ecx, dword ptr [ecx + eax*4 + 0x10] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x10u));
    /* 005a34fc: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005a34fe: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 005a3504: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5a3506u); call_ind(t); }
    /* 005a3506: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a3508: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a350a: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5a350fu); f_0064c8a0();
    /* 005a350f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a3512: mov dword ptr [ebp - 0x11c], eax */ W32((u32)(r_ebp+0xfffffee4u), r_eax);
    /* 005a3518: mov dword ptr [ebp - 0x118], edx */ W32((u32)(r_ebp+0xfffffee8u), r_edx);
    /* 005a351e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a3520: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a3523: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a3524: mov edx, dword ptr [ebp - 0x118] */ r_edx = R32((u32)(r_ebp+0xfffffee8u));
    /* 005a352a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a352b: mov eax, dword ptr [ebp - 0x11c] */ r_eax = R32((u32)(r_ebp+0xfffffee4u));
    /* 005a3531: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a3532: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a3535: mov edx, dword ptr [ebp - 0x148] */ r_edx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005a353b: mov eax, dword ptr [edx + ecx*4 + 0x10] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x10u));
    /* 005a353f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a3542: mov edx, dword ptr [ebp - 0x148] */ r_edx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005a3548: mov ecx, dword ptr [edx + ecx*4 + 0x10] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x10u));
    /* 005a354c: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005a354e: mov edx, dword ptr [eax + 0xb8] */ r_edx = R32((u32)(r_eax+0xb8u));
    /* 005a3554: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5a3556u); call_ind(t); }
L_005a3556:; BB(0x005a3556);
    /* 005a3556: mov eax, dword ptr [ebp - 0x148] */ r_eax = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005a355c: mov ecx, dword ptr [ebp - 0x148] */ r_ecx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005a3562: mov edx, dword ptr [eax + 0x110] */ r_edx = R32((u32)(r_eax+0x110u));
    /* 005a3568: cmp edx, dword ptr [ecx + 0x114] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x114u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a356e: je 0x5a358b */ if (fZ) goto L_005a358b;
L_005a3570:; BB(0x005a3570);
    /* 005a3570: mov eax, dword ptr [ebp - 0x148] */ r_eax = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005a3576: cmp dword ptr [eax + 0x114], 0 */ {  u32 a = R32((u32)(r_eax+0x114u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a357d: jne 0x5a358b */ if (!fZ) goto L_005a358b;
L_005a357f:; BB(0x005a357f);
    /* 005a357f: mov dword ptr [ebp - 0x168], 1 */ W32((u32)(r_ebp+0xfffffe98u), 0x1u);
    /* 005a3589: jmp 0x5a3595 */ goto L_005a3595;
L_005a358b:; BB(0x005a358b);
    /* 005a358b: mov dword ptr [ebp - 0x168], 0 */ W32((u32)(r_ebp+0xfffffe98u), 0x0u);
L_005a3595:; BB(0x005a3595);
    /* 005a3595: mov cl, byte ptr [ebp - 0x168] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffe98u))) & 0xffu);
    /* 005a359b: mov byte ptr [ebp - 1], cl */ W8((u32)(r_ebp+0xffffffffu), (u8)r_ecx);
    /* 005a359e: movzx edx, byte ptr [ebp - 1] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 005a35a2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a35a4: je 0x5a3620 */ if (fZ) goto L_005a3620;
L_005a35a6:; BB(0x005a35a6);
    /* 005a35a6: push 0xf4240 */ { u32 v = 0xf4240u; r_esp -= 4; W32(r_esp, v); }
    /* 005a35ab: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a35ad: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a35b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a35b1: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5a35b6u); f_005dcb00();
    /* 005a35b6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a35b9: mov ecx, eax */ r_ecx = r_eax;
    /* 005a35bb: call 0x5d70e0 */ r_esp -= 4; W32(r_esp, 0x5a35c0u); f_005d70e0();
    /* 005a35c0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a35c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a35c4: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5a35c9u); f_005dcb00();
    /* 005a35c9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a35cc: mov dword ptr [ebp - 0x16c], eax */ W32((u32)(r_ebp+0xfffffe94u), r_eax);
    /* 005a35d2: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a35d4: mov edx, dword ptr [ebp - 0x16c] */ r_edx = R32((u32)(r_ebp+0xfffffe94u));
    /* 005a35da: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005a35dc: mov ecx, dword ptr [ebp - 0x16c] */ r_ecx = R32((u32)(r_ebp+0xfffffe94u));
    /* 005a35e2: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005a35e5: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5a35e7u); call_ind(t); }
    /* 005a35e7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a35e9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a35eb: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5a35f0u); f_0064c8a0();
    /* 005a35f0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a35f3: mov dword ptr [ebp - 0x124], eax */ W32((u32)(r_ebp+0xfffffedcu), r_eax);
    /* 005a35f9: mov dword ptr [ebp - 0x120], edx */ W32((u32)(r_ebp+0xfffffee0u), r_edx);
    /* 005a35ff: mov eax, dword ptr [ebp - 0x120] */ r_eax = R32((u32)(r_ebp+0xfffffee0u));
    /* 005a3605: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a3606: mov ecx, dword ptr [ebp - 0x124] */ r_ecx = R32((u32)(r_ebp+0xfffffedcu));
    /* 005a360c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a360d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005a3610: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a3611: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5a3616u); f_005dcb00();
    /* 005a3616: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a3619: mov ecx, eax */ r_ecx = r_eax;
    /* 005a361b: call 0x5d6050 */ r_esp -= 4; W32(r_esp, 0x5a3620u); f_005d6050();
L_005a3620:; BB(0x005a3620);
    /* 005a3620: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a3623: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005a3625: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x5a362au); f_00686d72();
    /* 005a362a: mov esp, ebp */ r_esp = r_ebp;
    /* 005a362c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a362d: ret 4 */ FN_RET(0x005a2b10); r_esp += 8; return;
}

