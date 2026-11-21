#include "protos.h"

void f_006520f0(void) /* sub_6520F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006520f0);
    /* 006520f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006520f1: mov ebp, esp */ r_ebp = r_esp;
    /* 006520f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006520f5: push 0x6ac3a6 */ { u32 v = 0x6ac3a6u; r_esp -= 4; W32(r_esp, v); }
    /* 006520fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00652100: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00652101: sub esp, 0x9c */ {  u32 a = r_esp; u32 b = 0x9cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00652107: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0065210c: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065210e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065210f: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00652112: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00652118: mov dword ptr [ebp - 0x9c], ecx */ W32((u32)(r_ebp+0xffffff64u), r_ecx);
    /* 0065211e: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00652125: jmp 0x652130 */ goto L_00652130;
L_00652127:; BB(0x00652127);
    /* 00652127: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065212a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065212d: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_00652130:; BB(0x00652130);
    /* 00652130: cmp dword ptr [ebp - 0x10], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00652134: jge 0x65214a */ if ((fS==fO)) goto L_0065214a;
L_00652136:; BB(0x00652136);
    /* 00652136: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00652139: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 0065213f: mov ecx, dword ptr [edx + ecx*4 + 0x58] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x58u));
    /* 00652143: call 0x5f87d0 */ r_esp -= 4; W32(r_esp, 0x652148u); f_005f87d0();
    /* 00652148: jmp 0x652127 */ goto L_00652127;
L_0065214a:; BB(0x0065214a);
    /* 0065214a: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00652151: jmp 0x65215c */ goto L_0065215c;
L_00652153:; BB(0x00652153);
    /* 00652153: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00652156: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00652159: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_0065215c:; BB(0x0065215c);
    /* 0065215c: cmp dword ptr [ebp - 0x10], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00652160: jge 0x652197 */ if ((fS==fO)) goto L_00652197;
L_00652162:; BB(0x00652162);
    /* 00652162: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00652165: imul ecx, ecx, 0xc */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xcu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00652168: mov dword ptr [ebp + ecx - 0x8c], 0 */ W32((u32)(r_ebp+r_ecx+0xffffff74u), 0x0u);
    /* 00652173: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00652176: imul edx, edx, 0xc */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xcu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00652179: mov dword ptr [ebp + edx - 0x88], 0 */ W32((u32)(r_ebp+r_edx+0xffffff78u), 0x0u);
    /* 00652184: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00652187: imul eax, eax, 0xc */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xcu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0065218a: mov dword ptr [ebp + eax - 0x84], 0 */ W32((u32)(r_ebp+r_eax+0xffffff7cu), 0x0u);
    /* 00652195: jmp 0x652153 */ goto L_00652153;
L_00652197:; BB(0x00652197);
    /* 00652197: lea ecx, [ebp - 0x8c] */ r_ecx = (u32)(r_ebp+0xffffff74u);
    /* 0065219d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065219e: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 006521a4: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 006521a7: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006521aa: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006521ad: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 006521b3: mov edx, dword ptr [ecx + 0x80] */ r_edx = R32((u32)(r_ecx+0x80u));
    /* 006521b9: mov eax, dword ptr [edx + eax + 4] */ r_eax = R32((u32)(r_edx+r_eax+0x4u));
    /* 006521bd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006521be: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 006521c4: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 006521c7: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006521ca: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 006521d0: mov ecx, dword ptr [eax + 0x80] */ r_ecx = R32((u32)(r_eax+0x80u));
    /* 006521d6: mov edx, dword ptr [ecx + edx + 4] */ r_edx = R32((u32)(r_ecx+r_edx+0x4u));
    /* 006521da: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006521db: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 006521e1: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 006521e4: imul ecx, ecx, 0x14 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x14u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006521e7: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 006521ed: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 006521f3: mov ecx, dword ptr [eax + ecx] */ r_ecx = R32((u32)(r_eax+r_ecx));
    /* 006521f6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006521f7: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 006521fd: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006521ff: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00652205: mov ecx, dword ptr [ecx] */ r_ecx = R32((u32)(r_ecx));
    /* 00652207: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00652209: mov eax, dword ptr [edx + 0x22c] */ r_eax = R32((u32)(r_edx+0x22cu));
    /* 0065220f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x652211u); call_ind(t); }
    /* 00652211: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00652218: jmp 0x652223 */ goto L_00652223;
L_0065221a:; BB(0x0065221a);
    /* 0065221a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065221d: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00652220: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_00652223:; BB(0x00652223);
    /* 00652223: cmp dword ptr [ebp - 0x10], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00652227: jge 0x6523a1 */ if ((fS==fO)) goto L_006523a1;
L_0065222d:; BB(0x0065222d);
    /* 0065222d: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00652230: imul edx, edx, 0xc */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xcu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00652233: mov eax, dword ptr [ebp + edx - 0x84] */ r_eax = R32((u32)(r_ebp+r_edx+0xffffff7cu));
    /* 0065223a: mov dword ptr [ebp - 0xa0], eax */ W32((u32)(r_ebp+0xffffff60u), r_eax);
    /* 00652240: cmp dword ptr [ebp - 0xa0], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff60u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00652247: jle 0x65239c */ if ((fZ||fS!=fO)) goto L_0065239c;
L_0065224d:; BB(0x0065224d);
    /* 0065224d: cmp dword ptr [ebp - 0xa0], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff60u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00652254: jle 0x65225b */ if ((fZ||fS!=fO)) goto L_0065225b;
L_00652256:; BB(0x00652256);
    /* 00652256: jmp 0x65239c */ goto L_0065239c;
L_0065225b:; BB(0x0065225b);
    /* 0065225b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065225d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00652260: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 00652266: mov ecx, dword ptr [edx + ecx*4 + 0x58] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x58u));
    /* 0065226a: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x65226fu); f_005fb2b0();
    /* 0065226f: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 00652275: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00652278: imul eax, eax, 0xc */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xcu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0065227b: mov ecx, dword ptr [ebp + eax - 0x84] */ r_ecx = R32((u32)(r_ebp+r_eax+0xffffff7cu));
    /* 00652282: mov dword ptr [ebp - 0xa4], ecx */ W32((u32)(r_ebp+0xffffff5cu), r_ecx);
    /* 00652288: cmp dword ptr [ebp - 0xa4], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffff5cu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065228f: je 0x6522a5 */ if (fZ) goto L_006522a5;
L_00652291:; BB(0x00652291);
    /* 00652291: cmp dword ptr [ebp - 0xa4], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff5cu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00652298: je 0x6522b7 */ if (fZ) goto L_006522b7;
L_0065229a:; BB(0x0065229a);
    /* 0065229a: cmp dword ptr [ebp - 0xa4], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff5cu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006522a1: je 0x6522c9 */ if (fZ) goto L_006522c9;
L_006522a3:; BB(0x006522a3);
    /* 006522a3: jmp 0x6522d9 */ goto L_006522d9;
L_006522a5:; BB(0x006522a5);
    /* 006522a5: push 0x33e154 */ { u32 v = 0x33e154u; r_esp -= 4; W32(r_esp, v); }
    /* 006522aa: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 006522b0: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x6522b5u); f_005eaf00();
    /* 006522b5: jmp 0x6522d9 */ goto L_006522d9;
L_006522b7:; BB(0x006522b7);
    /* 006522b7: push 0x33e155 */ { u32 v = 0x33e155u; r_esp -= 4; W32(r_esp, v); }
    /* 006522bc: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 006522c2: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x6522c7u); f_005eaf00();
    /* 006522c7: jmp 0x6522d9 */ goto L_006522d9;
L_006522c9:; BB(0x006522c9);
    /* 006522c9: push 0x33e156 */ { u32 v = 0x33e156u; r_esp -= 4; W32(r_esp, v); }
    /* 006522ce: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 006522d4: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x6522d9u); f_005eaf00();
L_006522d9:; BB(0x006522d9);
    /* 006522d9: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006522dc: imul edx, edx, 0xc */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xcu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006522df: mov eax, dword ptr [ebp + edx - 0x88] */ r_eax = R32((u32)(r_ebp+r_edx+0xffffff78u));
    /* 006522e6: sub eax, 0x2a */ {  u32 a = r_eax; u32 b = 0x2au; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006522e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006522ea: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006522ed: imul ecx, ecx, 0xc */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xcu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006522f0: mov edx, dword ptr [ebp + ecx - 0x8c] */ r_edx = R32((u32)(r_ebp+r_ecx+0xffffff74u));
    /* 006522f7: sub edx, 0x32 */ {  u32 a = r_edx; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006522fa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006522fb: mov eax, dword ptr [ebp - 0x90] */ r_eax = R32((u32)(r_ebp+0xffffff70u));
    /* 00652301: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00652303: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 00652309: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0065230c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65230eu); call_ind(t); }
    /* 0065230e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00652310: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 00652316: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00652318: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 0065231e: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00652324: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x652326u); call_ind(t); }
    /* 00652326: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00652328: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x65232du); f_00686d82();
    /* 0065232d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00652330: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 00652336: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0065233d: cmp dword ptr [ebp - 0x98], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff68u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00652344: je 0x65235b */ if (fZ) goto L_0065235b;
L_00652346:; BB(0x00652346);
    /* 00652346: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00652348: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 0065234e: call 0x600a70 */ r_esp -= 4; W32(r_esp, 0x652353u); f_00600a70();
    /* 00652353: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 00652359: jmp 0x652365 */ goto L_00652365;
L_0065235b:; BB(0x0065235b);
    /* 0065235b: mov dword ptr [ebp - 0xa8], 0 */ W32((u32)(r_ebp+0xffffff58u), 0x0u);
L_00652365:; BB(0x00652365);
    /* 00652365: mov ecx, dword ptr [ebp - 0xa8] */ r_ecx = R32((u32)(r_ebp+0xffffff58u));
    /* 0065236b: mov dword ptr [ebp - 0x94], ecx */ W32((u32)(r_ebp+0xffffff6cu), r_ecx);
    /* 00652371: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00652378: mov edx, dword ptr [ebp - 0x94] */ r_edx = R32((u32)(r_ebp+0xffffff6cu));
    /* 0065237e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065237f: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 00652385: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x65238au); f_005f5d50();
    /* 0065238a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065238d: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00652393: mov ecx, dword ptr [ecx + eax*4 + 0x58] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x58u));
    /* 00652397: call 0x5f85d0 */ r_esp -= 4; W32(r_esp, 0x65239cu); f_005f85d0();
L_0065239c:; BB(0x0065239c);
    /* 0065239c: jmp 0x65221a */ goto L_0065221a;
L_006523a1:; BB(0x006523a1);
    /* 006523a1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006523a4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006523ab: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006523ac: mov esp, ebp */ r_esp = r_ebp;
    /* 006523ae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006523af: ret  */ FN_RET(0x006520f0); r_esp += 4; return;
}

void f_006523b0(void) /* sub_6523B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006523b0);
    /* 006523b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006523b1: mov ebp, esp */ r_ebp = r_esp;
    /* 006523b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006523b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006523b7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006523ba: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 006523bd: imul ecx, ecx, 0x14 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x14u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006523c0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006523c3: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 006523c9: cmp dword ptr [ecx + eax], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006523cd: je 0x6523de */ if (fZ) goto L_006523de;
L_006523cf:; BB(0x006523cf);
    /* 006523cf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006523d2: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 006523d5: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006523d8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006523db: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
L_006523de:; BB(0x006523de);
    /* 006523de: mov esp, ebp */ r_esp = r_ebp;
    /* 006523e0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006523e1: ret  */ FN_RET(0x006523b0); r_esp += 4; return;
}

void f_00652420(void) /* sub_652420 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00652420);
    /* 00652420: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00652421: mov ebp, esp */ r_ebp = r_esp;
    /* 00652423: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00652426: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00652429: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00652430: mov dword ptr [ebp - 0xc], 0xffffffff */ W32((u32)(r_ebp+0xfffffff4u), 0xffffffffu);
    /* 00652437: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065243a: mov byte ptr [eax + 0x10], 0 */ W8((u32)(r_eax+0x10u), 0x0u);
    /* 0065243e: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00652445: jmp 0x652450 */ goto L_00652450;
L_00652447:; BB(0x00652447);
    /* 00652447: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065244a: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0065244d: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_00652450:; BB(0x00652450);
    /* 00652450: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00652453: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00652456: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00652459: mov ecx, dword ptr [eax + 0x80] */ r_ecx = R32((u32)(r_eax+0x80u));
    /* 0065245f: cmp dword ptr [edx + ecx], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00652463: je 0x6524c1 */ if (fZ) goto L_006524c1;
L_00652465:; BB(0x00652465);
    /* 00652465: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00652468: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0065246b: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065246e: mov ecx, dword ptr [eax + 0x80] */ r_ecx = R32((u32)(r_eax+0x80u));
    /* 00652474: mov edx, dword ptr [edx + ecx] */ r_edx = R32((u32)(r_edx+r_ecx));
    /* 00652477: cmp edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065247a: je 0x6524bf */ if (fZ) goto L_006524bf;
L_0065247c:; BB(0x0065247c);
    /* 0065247c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065247f: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00652482: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00652485: mov edx, dword ptr [ecx + 0x80] */ r_edx = R32((u32)(r_ecx+0x80u));
    /* 0065248b: mov eax, dword ptr [eax + edx] */ r_eax = R32((u32)(r_eax+r_edx));
    /* 0065248e: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00652491: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00652494: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00652497: jne 0x6524b6 */ if (!fZ) goto L_006524b6;
L_00652499:; BB(0x00652499);
    /* 00652499: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065249c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065249f: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 006524a2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006524a5: mov dword ptr [ecx + 0x14], 0 */ W32((u32)(r_ecx+0x14u), 0x0u);
    /* 006524ac: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006524af: call 0x651af0 */ r_esp -= 4; W32(r_esp, 0x6524b4u); f_00651af0();
    /* 006524b4: jmp 0x6524c1 */ goto L_006524c1;
L_006524b6:; BB(0x006524b6);
    /* 006524b6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006524b9: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006524bc: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_006524bf:; BB(0x006524bf);
    /* 006524bf: jmp 0x652447 */ goto L_00652447;
L_006524c1:; BB(0x006524c1);
    /* 006524c1: mov esp, ebp */ r_esp = r_ebp;
    /* 006524c3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006524c4: ret 4 */ FN_RET(0x00652420); r_esp += 8; return;
}

void f_00652500(void) /* sub_652500 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00652500);
    /* 00652500: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00652501: mov ebp, esp */ r_ebp = r_esp;
    /* 00652503: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00652506: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00652509: movzx eax, byte ptr [ebp + 8] */ r_eax = (u32)R8((u32)(r_ebp+0x8u));
    /* 0065250d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065250f: je 0x6525be */ if (fZ) goto L_006525be;
L_00652515:; BB(0x00652515);
    /* 00652515: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00652518: mov ecx, dword ptr [ecx] */ r_ecx = R32((u32)(r_ecx));
    /* 0065251a: call 0x650310 */ r_esp -= 4; W32(r_esp, 0x65251fu); f_00650310();
    /* 0065251f: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00652522: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00652524: jne 0x652541 */ if (!fZ) goto L_00652541;
L_00652526:; BB(0x00652526);
    /* 00652526: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0065252c: call 0x636ce0 */ r_esp -= 4; W32(r_esp, 0x652531u); f_00636ce0();
    /* 00652531: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00652534: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00652536: jne 0x652541 */ if (!fZ) goto L_00652541;
L_00652538:; BB(0x00652538);
    /* 00652538: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0065253f: jmp 0x652548 */ goto L_00652548;
L_00652541:; BB(0x00652541);
    /* 00652541: mov dword ptr [ebp - 0xc], 1 */ W32((u32)(r_ebp+0xfffffff4u), 0x1u);
L_00652548:; BB(0x00652548);
    /* 00652548: mov cl, byte ptr [ebp - 0xc] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff4u))) & 0xffu);
    /* 0065254b: mov byte ptr [ebp - 1], cl */ W8((u32)(r_ebp+0xffffffffu), (u8)r_ecx);
    /* 0065254e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00652551: movzx eax, byte ptr [edx + 0x10] */ r_eax = (u32)R8((u32)(r_edx+0x10u));
    /* 00652555: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00652557: jne 0x652561 */ if (!fZ) goto L_00652561;
L_00652559:; BB(0x00652559);
    /* 00652559: movzx ecx, byte ptr [ebp - 1] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 0065255d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065255f: jne 0x652563 */ if (!fZ) goto L_00652563;
L_00652561:; BB(0x00652561);
    /* 00652561: jmp 0x6525be */ goto L_006525be;
L_00652563:; BB(0x00652563);
    /* 00652563: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00652566: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00652568: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065256b: mov ecx, dword ptr [ecx] */ r_ecx = R32((u32)(r_ecx));
    /* 0065256d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0065256f: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 00652572: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x652574u); call_ind(t); }
    /* 00652574: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00652577: mov byte ptr [ecx + 0x11], 0 */ W8((u32)(r_ecx+0x11u), 0x0u);
    /* 0065257b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065257e: mov byte ptr [edx + 0x10], 1 */ W8((u32)(r_edx+0x10u), 0x1u);
    /* 00652582: movzx eax, byte ptr [ebp - 1] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 00652586: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00652588: je 0x6525a2 */ if (fZ) goto L_006525a2;
L_0065258a:; BB(0x0065258a);
    /* 0065258a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065258d: cmp dword ptr [ecx + 8], 0 */ {  u32 a = R32((u32)(r_ecx+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00652591: jle 0x6525a2 */ if ((fZ||fS!=fO)) goto L_006525a2;
L_00652593:; BB(0x00652593);
    /* 00652593: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00652596: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00652599: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0065259c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065259f: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
L_006525a2:; BB(0x006525a2);
    /* 006525a2: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006525a5: mov dword ptr [edx + 0x14], 0 */ W32((u32)(r_edx+0x14u), 0x0u);
    /* 006525ac: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006525af: call 0x651af0 */ r_esp -= 4; W32(r_esp, 0x6525b4u); f_00651af0();
    /* 006525b4: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 006525b6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006525b9: call 0x652900 */ r_esp -= 4; W32(r_esp, 0x6525beu); f_00652900();
L_006525be:; BB(0x006525be);
    /* 006525be: mov esp, ebp */ r_esp = r_ebp;
    /* 006525c0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006525c1: ret 4 */ FN_RET(0x00652500); r_esp += 8; return;
}

void f_006525d0(void) /* sub_6525D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006525d0);
    /* 006525d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006525d1: mov ebp, esp */ r_ebp = r_esp;
    /* 006525d3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006525d6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 006525d9: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 006525dc: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 006525de: call 0x650310 */ r_esp -= 4; W32(r_esp, 0x6525e3u); f_00650310();
    /* 006525e3: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 006525e6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006525e8: jne 0x652605 */ if (!fZ) goto L_00652605;
L_006525ea:; BB(0x006525ea);
    /* 006525ea: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006525f0: call 0x636ce0 */ r_esp -= 4; W32(r_esp, 0x6525f5u); f_00636ce0();
    /* 006525f5: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 006525f8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006525fa: jne 0x652605 */ if (!fZ) goto L_00652605;
L_006525fc:; BB(0x006525fc);
    /* 006525fc: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00652603: jmp 0x65260c */ goto L_0065260c;
L_00652605:; BB(0x00652605);
    /* 00652605: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
L_0065260c:; BB(0x0065260c);
    /* 0065260c: mov al, byte ptr [ebp - 0x10] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff0u))) & 0xffu);
    /* 0065260f: mov byte ptr [ebp - 1], al */ W8((u32)(r_ebp+0xffffffffu), (u8)r_eax);
    /* 00652612: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00652615: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00652617: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065261a: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0065261c: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0065261e: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 00652621: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x652623u); call_ind(t); }
    /* 00652623: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00652626: mov byte ptr [ecx + 0x10], 0 */ W8((u32)(r_ecx+0x10u), 0x0u);
    /* 0065262a: call dword ptr [0x6b20bc] */ { u32 t = R32((u32)(0x6b20bcu)); r_esp -= 4; W32(r_esp, 0x652630u); call_ind(t); }
    /* 00652630: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00652633: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00652636: cmp dword ptr [edx + 8], 0 */ {  u32 a = R32((u32)(r_edx+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0065263a: jle 0x65264b */ if ((fZ||fS!=fO)) goto L_0065264b;
L_0065263c:; BB(0x0065263c);
    /* 0065263c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065263f: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00652642: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00652645: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00652648: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
L_0065264b:; BB(0x0065264b);
    /* 0065264b: jmp 0x65265c */ goto L_0065265c;
L_0065264d:; BB(0x0065264d);
    /* 0065264d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00652650: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00652653: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00652656: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00652659: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
L_0065265c:; BB(0x0065265c);
    /* 0065265c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065265f: cmp dword ptr [eax + 8], 0 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00652663: jle 0x6526c0 */ if ((fZ||fS!=fO)) goto L_006526c0;
L_00652665:; BB(0x00652665);
    /* 00652665: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00652668: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0065266b: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0065266e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00652671: mov ecx, dword ptr [eax + 0x80] */ r_ecx = R32((u32)(r_eax+0x80u));
    /* 00652677: cmp dword ptr [ecx + edx + 8], 1 */ {  u32 a = R32((u32)(r_ecx+r_edx+0x8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065267c: jne 0x652682 */ if (!fZ) goto L_00652682;
L_0065267e:; BB(0x0065267e);
    /* 0065267e: jmp 0x65264d */ goto L_0065264d;
L_00652682:; BB(0x00652682);
    /* 00652682: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00652685: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00652688: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0065268b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065268e: mov edx, dword ptr [ecx + 0x80] */ r_edx = R32((u32)(r_ecx+0x80u));
    /* 00652694: cmp dword ptr [edx + eax + 8], 4 */ {  u32 a = R32((u32)(r_edx+r_eax+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00652699: je 0x6526be */ if (fZ) goto L_006526be;
L_0065269b:; BB(0x0065269b);
    /* 0065269b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065269e: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 006526a1: imul ecx, ecx, 0x14 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x14u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006526a4: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006526a7: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 006526ad: mov ecx, dword ptr [eax + ecx + 0x10] */ r_ecx = R32((u32)(r_eax+r_ecx+0x10u));
    /* 006526b1: add ecx, 0x7d0 */ {  u32 a = r_ecx; u32 b = 0x7d0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006526b7: cmp dword ptr [ebp - 8], ecx */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006526ba: jbe 0x6526be */ if ((fC||fZ)) goto L_006526be;
L_006526bc:; BB(0x006526bc);
    /* 006526bc: jmp 0x6526c0 */ goto L_006526c0;
L_006526be:; BB(0x006526be);
    /* 006526be: jmp 0x65264d */ goto L_0065264d;
L_006526c0:; BB(0x006526c0);
    /* 006526c0: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006526c3: mov dword ptr [edx + 0x14], 0 */ W32((u32)(r_edx+0x14u), 0x0u);
    /* 006526ca: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006526cd: call 0x651af0 */ r_esp -= 4; W32(r_esp, 0x6526d2u); f_00651af0();
    /* 006526d2: mov esp, ebp */ r_esp = r_ebp;
    /* 006526d4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006526d5: ret  */ FN_RET(0x006525d0); r_esp += 4; return;
}

void f_006526e0(void) /* sub_6526E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006526e0);
    /* 006526e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006526e1: mov ebp, esp */ r_ebp = r_esp;
    /* 006526e3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006526e6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 006526e9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 006526ec: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 006526ee: call 0x650310 */ r_esp -= 4; W32(r_esp, 0x6526f3u); f_00650310();
    /* 006526f3: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 006526f6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006526f8: jne 0x652715 */ if (!fZ) goto L_00652715;
L_006526fa:; BB(0x006526fa);
    /* 006526fa: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00652700: call 0x636ce0 */ r_esp -= 4; W32(r_esp, 0x652705u); f_00636ce0();
    /* 00652705: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00652708: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065270a: jne 0x652715 */ if (!fZ) goto L_00652715;
L_0065270c:; BB(0x0065270c);
    /* 0065270c: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00652713: jmp 0x65271c */ goto L_0065271c;
L_00652715:; BB(0x00652715);
    /* 00652715: mov dword ptr [ebp - 0xc], 1 */ W32((u32)(r_ebp+0xfffffff4u), 0x1u);
L_0065271c:; BB(0x0065271c);
    /* 0065271c: mov al, byte ptr [ebp - 0xc] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff4u))) & 0xffu);
    /* 0065271f: mov byte ptr [ebp - 1], al */ W8((u32)(r_ebp+0xffffffffu), (u8)r_eax);
    /* 00652722: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00652725: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00652727: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065272a: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0065272c: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0065272e: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 00652731: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x652733u); call_ind(t); }
    /* 00652733: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00652736: mov dl, byte ptr [ecx + 0x10] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x10u))) & 0xffu);
    /* 00652739: mov byte ptr [ebp - 2], dl */ W8((u32)(r_ebp+0xfffffffeu), (u8)r_edx);
    /* 0065273c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065273f: mov byte ptr [eax + 0x10], 0 */ W8((u32)(r_eax+0x10u), 0x0u);
    /* 00652743: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00652746: call 0x652860 */ r_esp -= 4; W32(r_esp, 0x65274bu); f_00652860();
    /* 0065274b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065274e: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00652751: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00652754: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00652757: mov ecx, dword ptr [eax + 0x80] */ r_ecx = R32((u32)(r_eax+0x80u));
    /* 0065275d: cmp dword ptr [edx + ecx], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00652761: je 0x65284d */ if (fZ) goto L_0065284d;
L_00652767:; BB(0x00652767);
    /* 00652767: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065276a: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0065276d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00652770: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00652773: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00652776: mov edx, dword ptr [ecx + 0x80] */ r_edx = R32((u32)(r_ecx+0x80u));
    /* 0065277c: cmp dword ptr [eax + edx], 0 */ {  u32 a = R32((u32)(r_eax+r_edx)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00652780: je 0x65284d */ if (fZ) goto L_0065284d;
L_00652786:; BB(0x00652786);
    /* 00652786: movzx eax, byte ptr [ebp - 1] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 0065278a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065278c: jne 0x65284d */ if (!fZ) goto L_0065284d;
L_00652792:; BB(0x00652792);
    /* 00652792: movzx ecx, byte ptr [ebp - 2] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffffeu));
    /* 00652796: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00652798: jne 0x65284d */ if (!fZ) goto L_0065284d;
L_0065279e:; BB(0x0065279e);
    /* 0065279e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006527a1: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 006527a4: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006527a7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006527aa: mov edx, dword ptr [ecx + 0x80] */ r_edx = R32((u32)(r_ecx+0x80u));
    /* 006527b0: cmp dword ptr [edx + eax + 8], 3 */ {  u32 a = R32((u32)(r_edx+r_eax+0x8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006527b5: jne 0x65280c */ if (!fZ) goto L_0065280c;
L_006527b7:; BB(0x006527b7);
    /* 006527b7: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 006527ba: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 006527bd: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006527c0: imul ecx, ecx, 0x14 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x14u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006527c3: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006527c6: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 006527cc: mov ecx, dword ptr [eax + ecx + 4] */ r_ecx = R32((u32)(r_eax+r_ecx+0x4u));
    /* 006527d0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006527d1: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006527d4: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 006527d7: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006527da: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006527dd: mov edx, dword ptr [ecx + 0x80] */ r_edx = R32((u32)(r_ecx+0x80u));
    /* 006527e3: mov eax, dword ptr [edx + eax] */ r_eax = R32((u32)(r_edx+r_eax));
    /* 006527e6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006527e7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006527ea: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006527ec: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 006527ef: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 006527f1: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 006527f3: mov eax, dword ptr [edx + 0x224] */ r_eax = R32((u32)(r_edx+0x224u));
    /* 006527f9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6527fbu); call_ind(t); }
    /* 006527fb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006527fe: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00652801: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00652804: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00652807: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 0065280a: jmp 0x65284b */ goto L_0065284b;
L_0065280c:; BB(0x0065280c);
    /* 0065280c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065280f: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00652812: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00652815: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00652818: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 0065281b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065281e: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00652821: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00652824: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00652827: mov ecx, dword ptr [eax + 0x80] */ r_ecx = R32((u32)(r_eax+0x80u));
    /* 0065282d: cmp dword ptr [ecx + edx + 8], 1 */ {  u32 a = R32((u32)(r_ecx+r_edx+0x8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00652832: jne 0x652843 */ if (!fZ) goto L_00652843;
L_00652834:; BB(0x00652834);
    /* 00652834: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00652837: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0065283a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065283d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00652840: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
L_00652843:; BB(0x00652843);
    /* 00652843: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00652846: call 0x651af0 */ r_esp -= 4; W32(r_esp, 0x65284bu); f_00651af0();
L_0065284b:; BB(0x0065284b);
    /* 0065284b: jmp 0x652855 */ goto L_00652855;
L_0065284d:; BB(0x0065284d);
    /* 0065284d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00652850: call 0x651af0 */ r_esp -= 4; W32(r_esp, 0x652855u); f_00651af0();
L_00652855:; BB(0x00652855);
    /* 00652855: mov esp, ebp */ r_esp = r_ebp;
    /* 00652857: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00652858: ret  */ FN_RET(0x006526e0); r_esp += 4; return;
}

void f_00652860(void) /* sub_652860 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00652860);
    /* 00652860: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00652861: mov ebp, esp */ r_ebp = r_esp;
    /* 00652863: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00652866: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00652869: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00652870: jmp 0x65287b */ goto L_0065287b;
L_00652872:; BB(0x00652872);
    /* 00652872: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00652875: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00652878: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0065287b:; BB(0x0065287b);
    /* 0065287b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065287e: imul ecx, ecx, 0x14 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x14u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00652881: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00652884: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 0065288a: cmp dword ptr [ecx + eax], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065288e: je 0x6528a9 */ if (fZ) goto L_006528a9;
L_00652890:; BB(0x00652890);
    /* 00652890: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00652893: imul ecx, ecx, 0x14 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x14u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00652896: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00652899: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 0065289f: mov dword ptr [eax + ecx + 0x10], 0 */ W32((u32)(r_eax+r_ecx+0x10u), 0x0u);
    /* 006528a7: jmp 0x652872 */ goto L_00652872;
L_006528a9:; BB(0x006528a9);
    /* 006528a9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006528ac: mov dword ptr [ecx + 0x14], 0 */ W32((u32)(r_ecx+0x14u), 0x0u);
    /* 006528b3: mov esp, ebp */ r_esp = r_ebp;
    /* 006528b5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006528b6: ret  */ FN_RET(0x00652860); r_esp += 4; return;
}

void f_006528c0(void) /* sub_6528C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006528c0);
    /* 006528c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006528c1: mov ebp, esp */ r_ebp = r_esp;
    /* 006528c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006528c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006528c7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006528c9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006528cb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006528ce: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 006528d0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006528d3: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006528d5: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006528d7: mov ecx, eax */ r_ecx = r_eax;
    /* 006528d9: mov eax, dword ptr [edx + 0x220] */ r_eax = R32((u32)(r_edx+0x220u));
    /* 006528df: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6528e1u); call_ind(t); }
    /* 006528e1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006528e4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006528e6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006528e9: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 006528eb: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 006528ed: mov eax, dword ptr [edx + 0x210] */ r_eax = R32((u32)(r_edx+0x210u));
    /* 006528f3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6528f5u); call_ind(t); }
    /* 006528f5: mov esp, ebp */ r_esp = r_ebp;
    /* 006528f7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006528f8: ret  */ FN_RET(0x006528c0); r_esp += 4; return;
}

void f_00652900(void) /* sub_652900 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00652900);
    /* 00652900: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00652901: mov ebp, esp */ r_ebp = r_esp;
    /* 00652903: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00652905: push 0x6ac3cf */ { u32 v = 0x6ac3cfu; r_esp -= 4; W32(r_esp, v); }
    /* 0065290a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00652910: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00652911: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00652914: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00652919: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065291b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065291c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0065291f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00652925: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00652928: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0065292f: jmp 0x65293a */ goto L_0065293a;
L_00652931:; BB(0x00652931);
    /* 00652931: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00652934: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00652937: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_0065293a:; BB(0x0065293a);
    /* 0065293a: cmp dword ptr [ebp - 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0065293e: jge 0x65296e */ if ((fS==fO)) goto L_0065296e;
L_00652940:; BB(0x00652940);
    /* 00652940: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00652942: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00652945: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00652948: mov ecx, dword ptr [edx + ecx*4 + 0x48] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x48u));
    /* 0065294c: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x652951u); f_005f5d50();
    /* 00652951: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00652954: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00652957: mov edx, dword ptr [ecx + eax*4 + 0x48] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x48u));
    /* 0065295b: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065295e: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00652961: mov ecx, dword ptr [ecx + eax*4 + 0x48] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x48u));
    /* 00652965: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00652967: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0065296a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65296cu); call_ind(t); }
    /* 0065296c: jmp 0x652931 */ goto L_00652931;
L_0065296e:; BB(0x0065296e);
    /* 0065296e: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00652972: je 0x6529f0 */ if (fZ) goto L_006529f0;
L_00652974:; BB(0x00652974);
    /* 00652974: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00652977: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065297a: mov eax, dword ptr [edx + ecx*4 - 0x148] */ r_eax = R32((u32)(r_edx+r_ecx*4+0xfffffeb8u));
    /* 00652981: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00652984: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00652987: mov ecx, dword ptr [edx + ecx*4 - 0x148] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0xfffffeb8u));
    /* 0065298e: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00652990: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 00652993: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x652995u); call_ind(t); }
    /* 00652995: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 00652997: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x65299cu); f_00686d82();
    /* 0065299c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065299f: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006529a2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006529a9: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006529ad: je 0x6529c6 */ if (fZ) goto L_006529c6;
L_006529af:; BB(0x006529af);
    /* 006529af: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006529b1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006529b3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006529b5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006529b7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006529b9: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006529bc: call 0x601110 */ r_esp -= 4; W32(r_esp, 0x6529c1u); f_00601110();
    /* 006529c1: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006529c4: jmp 0x6529cd */ goto L_006529cd;
L_006529c6:; BB(0x006529c6);
    /* 006529c6: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_006529cd:; BB(0x006529cd);
    /* 006529cd: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006529d0: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006529d3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006529da: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006529dd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006529de: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006529e1: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006529e4: mov ecx, dword ptr [eax + edx*4 - 0x148] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xfffffeb8u));
    /* 006529eb: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x6529f0u); f_005f5d50();
L_006529f0:; BB(0x006529f0);
    /* 006529f0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006529f3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006529fa: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006529fb: mov esp, ebp */ r_esp = r_ebp;
    /* 006529fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006529fe: ret 4 */ FN_RET(0x00652900); r_esp += 8; return;
}

void f_00652a10(void) /* sub_652A10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00652a10);
    /* 00652a10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00652a11: mov ebp, esp */ r_ebp = r_esp;
    /* 00652a13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00652a14: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00652a17: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00652a1a: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00652a1d: imul ecx, ecx, 0x14 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x14u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00652a20: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00652a23: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 00652a29: cmp dword ptr [ecx + eax], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00652a2d: je 0x652a4a */ if (fZ) goto L_00652a4a;
L_00652a2f:; BB(0x00652a2f);
    /* 00652a2f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00652a32: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00652a35: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00652a38: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00652a3b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00652a3e: mov ecx, dword ptr [eax + 0x80] */ r_ecx = R32((u32)(r_eax+0x80u));
    /* 00652a44: cmp dword ptr [edx + ecx], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00652a48: jne 0x652a4f */ if (!fZ) goto L_00652a4f;
L_00652a4a:; BB(0x00652a4a);
    /* 00652a4a: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00652a4d: jmp 0x652a64 */ goto L_00652a64;
L_00652a4f:; BB(0x00652a4f);
    /* 00652a4f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00652a52: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00652a55: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00652a58: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00652a5b: mov edx, dword ptr [ecx + 0x80] */ r_edx = R32((u32)(r_ecx+0x80u));
    /* 00652a61: mov eax, dword ptr [eax + edx] */ r_eax = R32((u32)(r_eax+r_edx));
L_00652a64:; BB(0x00652a64);
    /* 00652a64: mov esp, ebp */ r_esp = r_ebp;
    /* 00652a66: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00652a67: ret  */ FN_RET(0x00652a10); r_esp += 4; return;
}

void f_00652d20(void) /* sub_652D20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00652d20);
    /* 00652d20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00652d21: mov ebp, esp */ r_ebp = r_esp;
    /* 00652d23: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00652d26: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00652d29: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00652d30: mov dword ptr [ebp - 0xc], 0xffffffff */ W32((u32)(r_ebp+0xfffffff4u), 0xffffffffu);
    /* 00652d37: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00652d3e: jmp 0x652d49 */ goto L_00652d49;
L_00652d40:; BB(0x00652d40);
    /* 00652d40: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00652d43: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00652d46: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_00652d49:; BB(0x00652d49);
    /* 00652d49: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00652d4c: imul ecx, ecx, 0x14 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x14u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00652d4f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00652d52: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 00652d58: cmp dword ptr [ecx + eax], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00652d5c: je 0x652d95 */ if (fZ) goto L_00652d95;
L_00652d5e:; BB(0x00652d5e);
    /* 00652d5e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00652d61: imul ecx, ecx, 0x14 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x14u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00652d64: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00652d67: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 00652d6d: mov ecx, dword ptr [ecx + eax] */ r_ecx = R32((u32)(r_ecx+r_eax));
    /* 00652d70: cmp ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00652d73: je 0x652d93 */ if (fZ) goto L_00652d93;
L_00652d75:; BB(0x00652d75);
    /* 00652d75: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00652d78: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00652d7b: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00652d7e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00652d81: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00652d84: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00652d87: mov edx, dword ptr [ecx + 0x80] */ r_edx = R32((u32)(r_ecx+0x80u));
    /* 00652d8d: mov eax, dword ptr [eax + edx] */ r_eax = R32((u32)(r_eax+r_edx));
    /* 00652d90: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_00652d93:; BB(0x00652d93);
    /* 00652d93: jmp 0x652d40 */ goto L_00652d40;
L_00652d95:; BB(0x00652d95);
    /* 00652d95: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00652d98: mov esp, ebp */ r_esp = r_ebp;
    /* 00652d9a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00652d9b: ret  */ FN_RET(0x00652d20); r_esp += 4; return;
}

void f_00652da0(void) /* sub_652DA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00652da0);
    /* 00652da0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00652da1: mov ebp, esp */ r_ebp = r_esp;
    /* 00652da3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00652da6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00652da9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00652db0: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00652db7: jmp 0x652dc2 */ goto L_00652dc2;
L_00652db9:; BB(0x00652db9);
    /* 00652db9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00652dbc: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00652dbf: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_00652dc2:; BB(0x00652dc2);
    /* 00652dc2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00652dc5: imul ecx, ecx, 0x14 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x14u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00652dc8: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00652dcb: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 00652dd1: cmp dword ptr [ecx + eax], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00652dd5: je 0x652e11 */ if (fZ) goto L_00652e11;
L_00652dd7:; BB(0x00652dd7);
    /* 00652dd7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00652dda: imul ecx, ecx, 0x14 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x14u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00652ddd: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00652de0: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 00652de6: mov ecx, dword ptr [ecx + eax] */ r_ecx = R32((u32)(r_ecx+r_eax));
    /* 00652de9: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00652dec: jne 0x652e0f */ if (!fZ) goto L_00652e0f;
L_00652dee:; BB(0x00652dee);
    /* 00652dee: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00652df1: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00652df4: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00652df7: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00652dfa: mov ecx, dword ptr [eax + 0x80] */ r_ecx = R32((u32)(r_eax+0x80u));
    /* 00652e00: cmp dword ptr [edx + ecx], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00652e04: je 0x652e0f */ if (fZ) goto L_00652e0f;
L_00652e06:; BB(0x00652e06);
    /* 00652e06: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00652e09: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00652e0c: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00652e0f:; BB(0x00652e0f);
    /* 00652e0f: jmp 0x652db9 */ goto L_00652db9;
L_00652e11:; BB(0x00652e11);
    /* 00652e11: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00652e14: mov esp, ebp */ r_esp = r_ebp;
    /* 00652e16: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00652e17: ret 4 */ FN_RET(0x00652da0); r_esp += 8; return;
}

