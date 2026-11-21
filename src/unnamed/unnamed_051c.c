#include "protos.h"

void f_0051c040(void) /* sub_51C040 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0051c040);
    /* 0051c040: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051c041: mov ebp, esp */ r_ebp = r_esp;
    /* 0051c043: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051c046: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0051c049: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0051c050: jmp 0x51c05b */ goto L_0051c05b;
L_0051c052:; BB(0x0051c052);
    /* 0051c052: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051c055: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051c058: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0051c05b:; BB(0x0051c05b);
    /* 0051c05b: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051c05f: jg 0x51c06f */ if ((!fZ&&fS==fO)) goto L_0051c06f;
L_0051c061:; BB(0x0051c061);
    /* 0051c061: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051c064: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051c065: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051c068: call 0x51c090 */ r_esp -= 4; W32(r_esp, 0x51c06du); f_0051c090();
    /* 0051c06d: jmp 0x51c052 */ goto L_0051c052;
L_0051c06f:; BB(0x0051c06f);
    /* 0051c06f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051c072: call 0x51c410 */ r_esp -= 4; W32(r_esp, 0x51c077u); f_0051c410();
    /* 0051c077: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051c07a: call 0x51c5c0 */ r_esp -= 4; W32(r_esp, 0x51c07fu); f_0051c5c0();
    /* 0051c07f: mov esp, ebp */ r_esp = r_ebp;
    /* 0051c081: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051c082: ret  */ FN_RET(0x0051c040); r_esp += 4; return;
}

void f_0051c090(void) /* sub_51C090 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0051c090);
    /* 0051c090: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051c091: mov ebp, esp */ r_ebp = r_esp;
    /* 0051c093: sub esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051c096: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0051c09b: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0051c09d: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0051c0a0: mov dword ptr [ebp - 0x5c], ecx */ W32((u32)(r_ebp+0xffffffa4u), r_ecx);
    /* 0051c0a3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0051c0a6: mov ecx, dword ptr [eax*4 + 0x721924] */ r_ecx = R32((u32)(r_eax*4+0x721924u));
    /* 0051c0ad: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
    /* 0051c0b0: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0051c0b3: call 0x51c580 */ r_esp -= 4; W32(r_esp, 0x51c0b8u); f_0051c580();
    /* 0051c0b8: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0051c0bb: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 0051c0c2: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 0051c0c9: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 0051c0d0: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0051c0d7: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0051c0da: imul edx, edx, 0x180 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x180u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0051c0e0: add edx, 0x7207e8 */ {  u32 a = r_edx; u32 b = 0x7207e8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051c0e6: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0051c0e9: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0051c0ec: imul eax, eax, 0x180 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x180u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0051c0f2: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0051c0f5: mov edx, dword ptr [ecx + 0x1c0] */ r_edx = R32((u32)(r_ecx+0x1c0u));
    /* 0051c0fb: imul edx, edx, 0x30 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x30u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0051c0fe: lea eax, [eax + edx + 0x7207ec] */ r_eax = (u32)(r_eax+r_edx+0x7207ecu);
    /* 0051c105: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0051c108: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0051c10b: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0051c10e: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051c110: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0051c113: cmp dword ptr [ebp - 0x4c], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051c117: je 0x51c133 */ if (fZ) goto L_0051c133;
L_0051c119:; BB(0x0051c119);
    /* 0051c119: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051c11c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0051c11e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051c11f: push 0x6b2fd8 */ { u32 v = 0x6b2fd8u; r_esp -= 4; W32(r_esp, v); }
    /* 0051c124: lea ecx, [ebp - 0x44] */ r_ecx = (u32)(r_ebp+0xffffffbcu);
    /* 0051c127: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051c128: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x51c12eu); call_ind(t); }
    /* 0051c12e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051c131: jmp 0x51c1a2 */ goto L_0051c1a2;
L_0051c133:; BB(0x0051c133);
    /* 0051c133: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0051c136: mov dword ptr [ebp - 0x60], edx */ W32((u32)(r_ebp+0xffffffa0u), r_edx);
    /* 0051c139: cmp dword ptr [ebp - 0x60], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffa0u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051c13d: je 0x51c14d */ if (fZ) goto L_0051c14d;
L_0051c13f:; BB(0x0051c13f);
    /* 0051c13f: cmp dword ptr [ebp - 0x60], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffa0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051c143: je 0x51c16a */ if (fZ) goto L_0051c16a;
L_0051c145:; BB(0x0051c145);
    /* 0051c145: cmp dword ptr [ebp - 0x60], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffa0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051c149: je 0x51c187 */ if (fZ) goto L_0051c187;
L_0051c14b:; BB(0x0051c14b);
    /* 0051c14b: jmp 0x51c1a2 */ goto L_0051c1a2;
L_0051c14d:; BB(0x0051c14d);
    /* 0051c14d: push 0x6c236c */ { u32 v = 0x6c236cu; r_esp -= 4; W32(r_esp, v); }
    /* 0051c152: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51c157u); f_00630f40();
    /* 0051c157: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051c15a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051c15b: lea eax, [ebp - 0x44] */ r_eax = (u32)(r_ebp+0xffffffbcu);
    /* 0051c15e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051c15f: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x51c165u); call_ind(t); }
    /* 0051c165: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051c168: jmp 0x51c1a2 */ goto L_0051c1a2;
L_0051c16a:; BB(0x0051c16a);
    /* 0051c16a: push 0x6c234c */ { u32 v = 0x6c234cu; r_esp -= 4; W32(r_esp, v); }
    /* 0051c16f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51c174u); f_00630f40();
    /* 0051c174: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051c177: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051c178: lea ecx, [ebp - 0x44] */ r_ecx = (u32)(r_ebp+0xffffffbcu);
    /* 0051c17b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051c17c: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x51c182u); call_ind(t); }
    /* 0051c182: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051c185: jmp 0x51c1a2 */ goto L_0051c1a2;
L_0051c187:; BB(0x0051c187);
    /* 0051c187: push 0x6c232c */ { u32 v = 0x6c232cu; r_esp -= 4; W32(r_esp, v); }
    /* 0051c18c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51c191u); f_00630f40();
    /* 0051c191: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051c194: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051c195: lea edx, [ebp - 0x44] */ r_edx = (u32)(r_ebp+0xffffffbcu);
    /* 0051c198: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051c199: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x51c19fu); call_ind(t); }
    /* 0051c19f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0051c1a2:; BB(0x0051c1a2);
    /* 0051c1a2: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 0051c1a5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051c1a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051c1a9: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0051c1ac: call 0x5fb550 */ r_esp -= 4; W32(r_esp, 0x51c1b1u); f_005fb550();
    /* 0051c1b1: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 0051c1b4: lea ecx, [ebp - 0x44] */ r_ecx = (u32)(r_ebp+0xffffffbcu);
    /* 0051c1b7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051c1b8: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0051c1bb: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0051c1bd: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0051c1c0: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0051c1c6: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x51c1c8u); call_ind(t); }
    /* 0051c1c8: mov dword ptr [ebp - 0x48], 1 */ W32((u32)(r_ebp+0xffffffb8u), 0x1u);
    /* 0051c1cf: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0051c1d2: add eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051c1d5: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0051c1d8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0051c1db: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0051c1de: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 0051c1e1: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0051c1e4: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0051c1e6: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 0051c1e9: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0051c1eb: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0051c1ee: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051c1ef: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0051c1f2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051c1f3: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0051c1f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051c1f7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051c1fa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051c1fb: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0051c1fe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051c1ff: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0051c202: call 0x51c300 */ r_esp -= 4; W32(r_esp, 0x51c207u); f_0051c300();
    /* 0051c207: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051c20a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051c20d: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0051c210: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0051c213: add ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051c216: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0051c219: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0051c21c: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0051c21f: add eax, dword ptr [edx + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051c222: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 0051c225: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0051c228: shl ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0051c22a: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 0051c22d: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0051c22f: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 0051c232: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051c233: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 0051c236: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051c237: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0051c23a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051c23b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051c23e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051c23f: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0051c242: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051c243: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0051c246: call 0x51c300 */ r_esp -= 4; W32(r_esp, 0x51c24bu); f_0051c300();
    /* 0051c24b: cmp dword ptr [ebp + 8], 1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051c24f: jne 0x51c256 */ if (!fZ) goto L_0051c256;
L_0051c251:; BB(0x0051c251);
    /* 0051c251: jmp 0x51c2ed */ goto L_0051c2ed;
L_0051c256:; BB(0x0051c256);
    /* 0051c256: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051c259: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051c25c: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 0051c25f: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0051c262: add edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051c265: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0051c268: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0051c26b: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0051c26e: add ecx, dword ptr [eax + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051c271: mov dword ptr [ebp - 0x58], ecx */ W32((u32)(r_ebp+0xffffffa8u), r_ecx);
    /* 0051c274: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0051c277: shl edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0051c279: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 0051c27c: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0051c27e: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 0051c281: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051c282: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0051c285: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051c286: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0051c289: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051c28a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051c28d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051c28e: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0051c291: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051c292: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0051c295: call 0x51c300 */ r_esp -= 4; W32(r_esp, 0x51c29au); f_0051c300();
    /* 0051c29a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051c29d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051c2a0: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 0051c2a3: cmp dword ptr [ebp + 8], 2 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051c2a7: jne 0x51c2b4 */ if (!fZ) goto L_0051c2b4;
L_0051c2a9:; BB(0x0051c2a9);
    /* 0051c2a9: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0051c2ac: add eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051c2af: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0051c2b2: jmp 0x51c2bb */ goto L_0051c2bb;
L_0051c2b4:; BB(0x0051c2b4);
    /* 0051c2b4: mov dword ptr [ebp - 8], 0x64 */ W32((u32)(r_ebp+0xfffffff8u), 0x64u);
L_0051c2bb:; BB(0x0051c2bb);
    /* 0051c2bb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0051c2be: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0051c2c1: add edx, dword ptr [ecx + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051c2c4: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 0051c2c7: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0051c2ca: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0051c2cc: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 0051c2cf: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0051c2d1: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0051c2d4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051c2d5: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0051c2d8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051c2d9: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0051c2dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051c2dd: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051c2e0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051c2e1: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0051c2e4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051c2e5: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0051c2e8: call 0x51c300 */ r_esp -= 4; W32(r_esp, 0x51c2edu); f_0051c300();
L_0051c2ed:; BB(0x0051c2ed);
    /* 0051c2ed: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0051c2f0: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0051c2f2: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x51c2f7u); f_00686d72();
    /* 0051c2f7: mov esp, ebp */ r_esp = r_ebp;
    /* 0051c2f9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051c2fa: ret 4 */ FN_RET(0x0051c090); r_esp += 8; return;
}

void f_0051c300(void) /* sub_51C300 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0051c300);
    /* 0051c300: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051c301: mov ebp, esp */ r_ebp = r_esp;
    /* 0051c303: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051c306: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0051c30b: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0051c30d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0051c310: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 0051c313: cmp dword ptr [ebp + 0xc], 0x64 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051c317: jge 0x51c335 */ if ((fS==fO)) goto L_0051c335;
L_0051c319:; BB(0x0051c319);
    /* 0051c319: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0051c31c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051c31d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0051c320: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051c321: push 0x6c2394 */ { u32 v = 0x6c2394u; r_esp -= 4; W32(r_esp, v); }
    /* 0051c326: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 0051c329: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051c32a: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x51c330u); call_ind(t); }
    /* 0051c330: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051c333: jmp 0x51c34b */ goto L_0051c34b;
L_0051c335:; BB(0x0051c335);
    /* 0051c335: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0051c338: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051c339: push 0x6c2390 */ { u32 v = 0x6c2390u; r_esp -= 4; W32(r_esp, v); }
    /* 0051c33e: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 0051c341: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051c342: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x51c348u); call_ind(t); }
    /* 0051c348: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0051c34b:; BB(0x0051c34b);
    /* 0051c34b: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 0051c34e: add edx, dword ptr [ebp + 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x1cu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051c351: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051c352: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051c355: call 0x5fb550 */ r_esp -= 4; W32(r_esp, 0x51c35au); f_005fb550();
    /* 0051c35a: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0051c35d: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 0051c360: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051c361: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0051c364: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0051c366: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0051c369: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0051c36f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x51c371u); call_ind(t); }
    /* 0051c371: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0051c374: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051c375: push 0x6bb590 */ { u32 v = 0x6bb590u; r_esp -= 4; W32(r_esp, v); }
    /* 0051c37a: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 0051c37d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051c37e: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x51c384u); call_ind(t); }
    /* 0051c384: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051c387: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 0051c38a: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 0051c38d: lea edx, [ecx + eax + 1] */ r_edx = (u32)(r_ecx+r_eax+0x1u);
    /* 0051c391: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051c392: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051c395: call 0x5fb550 */ r_esp -= 4; W32(r_esp, 0x51c39au); f_005fb550();
    /* 0051c39a: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0051c39d: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 0051c3a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051c3a1: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0051c3a4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0051c3a6: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0051c3a9: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0051c3af: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x51c3b1u); call_ind(t); }
    /* 0051c3b1: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0051c3b4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051c3b5: push 0x6bb590 */ { u32 v = 0x6bb590u; r_esp -= 4; W32(r_esp, v); }
    /* 0051c3ba: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 0051c3bd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051c3be: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x51c3c4u); call_ind(t); }
    /* 0051c3c4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051c3c7: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 0051c3ca: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 0051c3cd: lea edx, [ecx + eax + 2] */ r_edx = (u32)(r_ecx+r_eax+0x2u);
    /* 0051c3d1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051c3d2: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051c3d5: call 0x5fb550 */ r_esp -= 4; W32(r_esp, 0x51c3dau); f_005fb550();
    /* 0051c3da: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0051c3dd: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 0051c3e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051c3e1: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0051c3e4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0051c3e6: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0051c3e9: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0051c3ef: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x51c3f1u); call_ind(t); }
    /* 0051c3f1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051c3f4: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0051c3f6: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x51c3fbu); f_00686d72();
    /* 0051c3fb: mov esp, ebp */ r_esp = r_ebp;
    /* 0051c3fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051c3fe: ret 0x18 */ FN_RET(0x0051c300); r_esp += 28; return;
}

void f_0051c410(void) /* sub_51C410 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0051c410);
    /* 0051c410: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051c411: mov ebp, esp */ r_ebp = r_esp;
    /* 0051c413: sub esp, 0xe8 */ {  u32 a = r_esp; u32 b = 0xe8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051c419: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0051c41e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0051c420: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0051c423: mov dword ptr [ebp - 0xe0], ecx */ W32((u32)(r_ebp+0xffffff20u), r_ecx);
    /* 0051c429: mov ecx, dword ptr [ebp - 0xe0] */ r_ecx = R32((u32)(r_ebp+0xffffff20u));
    /* 0051c42f: call 0x51c580 */ r_esp -= 4; W32(r_esp, 0x51c434u); f_0051c580();
    /* 0051c434: imul eax, eax, 0x180 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x180u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0051c43a: add eax, 0x7207e8 */ {  u32 a = r_eax; u32 b = 0x7207e8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051c43f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0051c442: lea eax, [ebp - 0xdc] */ r_eax = (u32)(r_ebp+0xffffff24u);
    /* 0051c448: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051c449: mov ecx, dword ptr [ebp - 0xe0] */ r_ecx = R32((u32)(r_ebp+0xffffff20u));
    /* 0051c44f: mov edx, dword ptr [ecx + 0x1c0] */ r_edx = R32((u32)(r_ecx+0x1c0u));
    /* 0051c455: imul edx, edx, 0x1c */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x1cu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0051c458: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051c45b: mov ecx, dword ptr [eax + edx + 0xf4] */ r_ecx = R32((u32)(r_eax+r_edx+0xf4u));
    /* 0051c462: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051c463: call 0x6311e0 */ r_esp -= 4; W32(r_esp, 0x51c468u); f_006311e0();
    /* 0051c468: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051c46b: lea edx, [ebp - 0xdc] */ r_edx = (u32)(r_ebp+0xffffff24u);
    /* 0051c471: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051c472: push 0x6c23c4 */ { u32 v = 0x6c23c4u; r_esp -= 4; W32(r_esp, v); }
    /* 0051c477: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51c47cu); f_00630f40();
    /* 0051c47c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051c47f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051c480: lea eax, [ebp - 0xa8] */ r_eax = (u32)(r_ebp+0xffffff58u);
    /* 0051c486: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051c487: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x51c48du); call_ind(t); }
    /* 0051c48d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051c490: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0051c492: mov ecx, dword ptr [ebp - 0xe0] */ r_ecx = R32((u32)(r_ebp+0xffffff20u));
    /* 0051c498: call 0x5fb550 */ r_esp -= 4; W32(r_esp, 0x51c49du); f_005fb550();
    /* 0051c49d: mov dword ptr [ebp - 0xe4], eax */ W32((u32)(r_ebp+0xffffff1cu), r_eax);
    /* 0051c4a3: lea ecx, [ebp - 0xa8] */ r_ecx = (u32)(r_ebp+0xffffff58u);
    /* 0051c4a9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051c4aa: mov edx, dword ptr [ebp - 0xe4] */ r_edx = R32((u32)(r_ebp+0xffffff1cu));
    /* 0051c4b0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0051c4b2: mov ecx, dword ptr [ebp - 0xe4] */ r_ecx = R32((u32)(r_ebp+0xffffff1cu));
    /* 0051c4b8: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0051c4be: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x51c4c0u); call_ind(t); }
    /* 0051c4c0: lea eax, [ebp - 0xdc] */ r_eax = (u32)(r_ebp+0xffffff24u);
    /* 0051c4c6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051c4c7: mov ecx, dword ptr [ebp - 0xe0] */ r_ecx = R32((u32)(r_ebp+0xffffff20u));
    /* 0051c4cd: mov edx, dword ptr [ecx + 0x1c0] */ r_edx = R32((u32)(r_ecx+0x1c0u));
    /* 0051c4d3: imul edx, edx, 0x1c */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x1cu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0051c4d6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051c4d9: mov ecx, dword ptr [eax + edx + 0xf8] */ r_ecx = R32((u32)(r_eax+r_edx+0xf8u));
    /* 0051c4e0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051c4e1: call 0x6311e0 */ r_esp -= 4; W32(r_esp, 0x51c4e6u); f_006311e0();
    /* 0051c4e6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051c4e9: lea edx, [ebp - 0x3c] */ r_edx = (u32)(r_ebp+0xffffffc4u);
    /* 0051c4ec: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051c4ed: mov eax, dword ptr [ebp - 0xe0] */ r_eax = R32((u32)(r_ebp+0xffffff20u));
    /* 0051c4f3: mov ecx, dword ptr [eax + 0x1c0] */ r_ecx = R32((u32)(r_eax+0x1c0u));
    /* 0051c4f9: imul ecx, ecx, 0x1c */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x1cu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0051c4fc: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051c4ff: mov eax, dword ptr [edx + ecx + 0xfc] */ r_eax = R32((u32)(r_edx+r_ecx+0xfcu));
    /* 0051c506: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051c507: call 0x6311e0 */ r_esp -= 4; W32(r_esp, 0x51c50cu); f_006311e0();
    /* 0051c50c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051c50f: lea ecx, [ebp - 0x3c] */ r_ecx = (u32)(r_ebp+0xffffffc4u);
    /* 0051c512: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051c513: lea edx, [ebp - 0xdc] */ r_edx = (u32)(r_ebp+0xffffff24u);
    /* 0051c519: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051c51a: push 0x6c239c */ { u32 v = 0x6c239cu; r_esp -= 4; W32(r_esp, v); }
    /* 0051c51f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51c524u); f_00630f40();
    /* 0051c524: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051c527: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051c528: lea eax, [ebp - 0xa8] */ r_eax = (u32)(r_ebp+0xffffff58u);
    /* 0051c52e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051c52f: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x51c535u); call_ind(t); }
    /* 0051c535: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051c538: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0051c53a: mov ecx, dword ptr [ebp - 0xe0] */ r_ecx = R32((u32)(r_ebp+0xffffff20u));
    /* 0051c540: call 0x5fb550 */ r_esp -= 4; W32(r_esp, 0x51c545u); f_005fb550();
    /* 0051c545: mov dword ptr [ebp - 0xe8], eax */ W32((u32)(r_ebp+0xffffff18u), r_eax);
    /* 0051c54b: lea ecx, [ebp - 0xa8] */ r_ecx = (u32)(r_ebp+0xffffff58u);
    /* 0051c551: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051c552: mov edx, dword ptr [ebp - 0xe8] */ r_edx = R32((u32)(r_ebp+0xffffff18u));
    /* 0051c558: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0051c55a: mov ecx, dword ptr [ebp - 0xe8] */ r_ecx = R32((u32)(r_ebp+0xffffff18u));
    /* 0051c560: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0051c566: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x51c568u); call_ind(t); }
    /* 0051c568: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051c56b: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0051c56d: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x51c572u); f_00686d72();
    /* 0051c572: mov esp, ebp */ r_esp = r_ebp;
    /* 0051c574: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051c575: ret  */ FN_RET(0x0051c410); r_esp += 4; return;
}

void f_0051c5c0(void) /* sub_51C5C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0051c5c0);
    /* 0051c5c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051c5c1: mov ebp, esp */ r_ebp = r_esp;
    /* 0051c5c3: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051c5c6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0051c5c9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051c5cb: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x51c5d0u); f_005dcb00();
    /* 0051c5d0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051c5d3: mov ecx, eax */ r_ecx = r_eax;
    /* 0051c5d5: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x51c5dau); f_005d5a50();
    /* 0051c5da: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0051c5dd: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0051c5e0: mov ecx, dword ptr [eax + 0x1c0] */ r_ecx = R32((u32)(r_eax+0x1c0u));
    /* 0051c5e6: mov edx, dword ptr [ecx*4 + 0x7207d4] */ r_edx = R32((u32)(r_ecx*4+0x7207d4u));
    /* 0051c5ed: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0051c5f0: cmp dword ptr [ebp - 4], 0xc350 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xc350u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051c5f7: jne 0x51c661 */ if (!fZ) goto L_0051c661;
L_0051c5f9:; BB(0x0051c5f9);
    /* 0051c5f9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0051c5fc: call 0x51c580 */ r_esp -= 4; W32(r_esp, 0x51c601u); f_0051c580();
    /* 0051c601: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051c602: mov ecx, dword ptr [0x793160] */ r_ecx = R32((u32)(0x793160u));
    /* 0051c608: call 0x51f610 */ r_esp -= 4; W32(r_esp, 0x51c60du); f_0051f610();
    /* 0051c60d: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0051c610: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051c612: jne 0x51c661 */ if (!fZ) goto L_0051c661;
L_0051c614:; BB(0x0051c614);
    /* 0051c614: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051c616: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0051c619: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x51c61eu); f_005fb300();
    /* 0051c61e: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0051c621: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0051c624: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0051c626: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0051c629: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 0051c62f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x51c631u); call_ind(t); }
    /* 0051c631: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051c633: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0051c636: call 0x5fb550 */ r_esp -= 4; W32(r_esp, 0x51c63bu); f_005fb550();
    /* 0051c63b: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0051c63e: push 0x6c2430 */ { u32 v = 0x6c2430u; r_esp -= 4; W32(r_esp, v); }
    /* 0051c643: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51c648u); f_00630f40();
    /* 0051c648: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051c64b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051c64c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0051c64f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0051c651: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0051c654: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0051c65a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x51c65cu); call_ind(t); }
    /* 0051c65c: jmp 0x51c6fb */ goto L_0051c6fb;
L_0051c661:; BB(0x0051c661);
    /* 0051c661: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051c664: cmp ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051c667: jge 0x51c6b3 */ if ((fS==fO)) goto L_0051c6b3;
L_0051c669:; BB(0x0051c669);
    /* 0051c669: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051c66b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0051c66e: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x51c673u); f_005fb300();
    /* 0051c673: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0051c676: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0051c679: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0051c67b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0051c67e: mov edx, dword ptr [eax + 0xd0] */ r_edx = R32((u32)(r_eax+0xd0u));
    /* 0051c684: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x51c686u); call_ind(t); }
    /* 0051c686: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051c688: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0051c68b: call 0x5fb550 */ r_esp -= 4; W32(r_esp, 0x51c690u); f_005fb550();
    /* 0051c690: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0051c693: push 0x6c240c */ { u32 v = 0x6c240cu; r_esp -= 4; W32(r_esp, v); }
    /* 0051c698: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51c69du); f_00630f40();
    /* 0051c69d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051c6a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051c6a1: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0051c6a4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0051c6a6: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0051c6a9: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0051c6af: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x51c6b1u); call_ind(t); }
    /* 0051c6b1: jmp 0x51c6fb */ goto L_0051c6fb;
L_0051c6b3:; BB(0x0051c6b3);
    /* 0051c6b3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051c6b5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0051c6b8: call 0x5fb550 */ r_esp -= 4; W32(r_esp, 0x51c6bdu); f_005fb550();
    /* 0051c6bd: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0051c6c0: push 0x6c22d4 */ { u32 v = 0x6c22d4u; r_esp -= 4; W32(r_esp, v); }
    /* 0051c6c5: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51c6cau); f_00630f40();
    /* 0051c6ca: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051c6cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051c6ce: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0051c6d1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0051c6d3: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0051c6d6: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0051c6dc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x51c6deu); call_ind(t); }
    /* 0051c6de: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051c6e0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0051c6e3: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x51c6e8u); f_005fb300();
    /* 0051c6e8: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0051c6eb: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0051c6ee: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0051c6f0: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0051c6f3: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 0051c6f9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x51c6fbu); call_ind(t); }
L_0051c6fb:; BB(0x0051c6fb);
    /* 0051c6fb: mov esp, ebp */ r_esp = r_ebp;
    /* 0051c6fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051c6fe: ret  */ FN_RET(0x0051c5c0); r_esp += 4; return;
}

void f_0051c700(void) /* sub_51C700 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0051c700);
    /* 0051c700: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051c701: mov ebp, esp */ r_ebp = r_esp;
    /* 0051c703: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051c706: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0051c709: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0051c70b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051c70e: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x51c713u); f_005fb2b0();
    /* 0051c713: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0051c716: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0051c719: mov ecx, dword ptr [eax*4 + 0x721934] */ r_ecx = R32((u32)(r_eax*4+0x721934u));
    /* 0051c720: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051c721: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051c724: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0051c726: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051c729: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 0051c72c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x51c72eu); call_ind(t); }
    /* 0051c72e: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0051c730: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051c733: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x51c738u); f_005fb2b0();
    /* 0051c738: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0051c73b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0051c73e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0051c740: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0051c743: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0051c746: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x51c748u); call_ind(t); }
    /* 0051c748: mov esp, ebp */ r_esp = r_ebp;
    /* 0051c74a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051c74b: ret 4 */ FN_RET(0x0051c700); r_esp += 8; return;
}

void f_0051c860(void) /* sub_51C860 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0051c860);
    /* 0051c860: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051c861: mov ebp, esp */ r_ebp = r_esp;
    /* 0051c863: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051c866: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0051c869: mov dword ptr [ebp - 4], 8 */ W32((u32)(r_ebp+0xfffffffcu), 0x8u);
    /* 0051c870: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0051c873: call 0x5f87d0 */ r_esp -= 4; W32(r_esp, 0x51c878u); f_005f87d0();
    /* 0051c878: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0051c87b: call 0x51c580 */ r_esp -= 4; W32(r_esp, 0x51c880u); f_0051c580();
    /* 0051c880: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0051c883: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051c887: jl 0x51c99d */ if ((fS!=fO)) goto L_0051c99d;
L_0051c88d:; BB(0x0051c88d);
    /* 0051c88d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051c890: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051c893: jge 0x51c99d */ if ((fS==fO)) goto L_0051c99d;
L_0051c899:; BB(0x0051c899);
    /* 0051c899: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0051c89f: call 0x5e2f90 */ r_esp -= 4; W32(r_esp, 0x51c8a4u); f_005e2f90();
    /* 0051c8a4: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0051c8aa: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051c8ad: mov dword ptr [ecx + 0x4efc], edx */ W32((u32)(r_ecx+0x4efcu), r_edx);
    /* 0051c8b3: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 0051c8b8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0051c8bb: mov edx, dword ptr [ecx + 0x1c0] */ r_edx = R32((u32)(r_ecx+0x1c0u));
    /* 0051c8c1: mov dword ptr [eax + 0x4f00], edx */ W32((u32)(r_eax+0x4f00u), r_edx);
    /* 0051c8c7: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 0051c8cc: mov byte ptr [eax + 0x4f04], 1 */ W8((u32)(r_eax+0x4f04u), 0x1u);
    /* 0051c8d3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0051c8d6: mov edx, dword ptr [ecx + 0x1c0] */ r_edx = R32((u32)(r_ecx+0x1c0u));
    /* 0051c8dc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051c8dd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0051c8e0: call 0x51c820 */ r_esp -= 4; W32(r_esp, 0x51c8e5u); f_0051c820();
    /* 0051c8e5: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0051c8eb: mov dword ptr [ecx + 0x4eec], eax */ W32((u32)(r_ecx+0x4eecu), r_eax);
    /* 0051c8f1: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 0051c8f7: mov dword ptr [edx + 0x4ef0], 0xc8 */ W32((u32)(r_edx+0x4ef0u), 0xc8u);
    /* 0051c901: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 0051c906: mov byte ptr [eax + 0x4ee9], 1 */ W8((u32)(r_eax+0x4ee9u), 0x1u);
    /* 0051c90d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051c910: mov edx, dword ptr [ecx*4 + 0x7217e8] */ r_edx = R32((u32)(r_ecx*4+0x7217e8u));
    /* 0051c917: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051c918: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0051c91b: call 0x51c9b0 */ r_esp -= 4; W32(r_esp, 0x51c920u); f_0051c9b0();
    /* 0051c920: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0051c926: mov dword ptr [ecx + 0x4f18], eax */ W32((u32)(r_ecx+0x4f18u), r_eax);
    /* 0051c92c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051c92f: mov eax, dword ptr [edx*4 + 0x7217e8] */ r_eax = R32((u32)(r_edx*4+0x7217e8u));
    /* 0051c936: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051c937: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0051c93a: call 0x51c9b0 */ r_esp -= 4; W32(r_esp, 0x51c93fu); f_0051c9b0();
    /* 0051c93f: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0051c945: mov dword ptr [ecx + 0x4f24], eax */ W32((u32)(r_ecx+0x4f24u), r_eax);
    /* 0051c94b: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 0051c951: mov byte ptr [edx + 0x4eea], 0 */ W8((u32)(r_edx+0x4eeau), 0x0u);
    /* 0051c958: push 0x30e792 */ { u32 v = 0x30e792u; r_esp -= 4; W32(r_esp, v); }
    /* 0051c95d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0051c960: call 0x51ca40 */ r_esp -= 4; W32(r_esp, 0x51c965u); f_0051ca40();
    /* 0051c965: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0051c96b: mov dword ptr [ecx + 0x4f0c], eax */ W32((u32)(r_ecx+0x4f0cu), r_eax);
    /* 0051c971: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051c973: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0051c975: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 0051c97b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0051c97d: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0051c983: mov edx, dword ptr [eax + 0x334] */ r_edx = R32((u32)(r_eax+0x334u));
    /* 0051c989: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x51c98bu); call_ind(t); }
    /* 0051c98b: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0051c98e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051c990: jne 0x51c99d */ if (!fZ) goto L_0051c99d;
L_0051c992:; BB(0x0051c992);
    /* 0051c992: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0051c998: call 0x5e3130 */ r_esp -= 4; W32(r_esp, 0x51c99du); f_005e3130();
L_0051c99d:; BB(0x0051c99d);
    /* 0051c99d: mov esp, ebp */ r_esp = r_ebp;
    /* 0051c99f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051c9a0: ret  */ FN_RET(0x0051c860); r_esp += 4; return;
}

void f_0051c9b0(void) /* sub_51C9B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0051c9b0);
    /* 0051c9b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051c9b1: mov ebp, esp */ r_ebp = r_esp;
    /* 0051c9b3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051c9b6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0051c9b9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0051c9bc: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0051c9bf: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051c9c2: sub ecx, 0x30e78a */ {  u32 a = r_ecx; u32 b = 0x30e78au; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0051c9c8: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0051c9cb: cmp dword ptr [ebp - 8], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0051c9cf: ja 0x51ca10 */ if ((!fC&&!fZ)) goto L_0051ca10;
L_0051c9d1:; BB(0x0051c9d1);
    /* 0051c9d1: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051c9d4: jmp dword ptr [edx*4 + 0x51ca1c] */ { u32 t = R32((u32)(r_edx*4+0x51ca1cu)); switch (t) { case 0x51c9dbu: goto L_0051c9db; case 0x51c9dfu: goto L_0051c9df; case 0x51c9e6u: goto L_0051c9e6; case 0x51c9edu: goto L_0051c9ed; case 0x51c9f4u: goto L_0051c9f4; case 0x51c9fbu: goto L_0051c9fb; case 0x51ca02u: goto L_0051ca02; case 0x51ca09u: goto L_0051ca09; default: UNSUP(0x0051c9d4, "jump table entry is not a known target"); } }
L_0051c9db:; BB(0x0051c9db);
    /* 0051c9db: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0051c9dd: jmp 0x51ca13 */ goto L_0051ca13;
L_0051c9df:; BB(0x0051c9df);
    /* 0051c9df: mov eax, 1 */ r_eax = 0x1u;
    /* 0051c9e4: jmp 0x51ca13 */ goto L_0051ca13;
L_0051c9e6:; BB(0x0051c9e6);
    /* 0051c9e6: mov eax, 2 */ r_eax = 0x2u;
    /* 0051c9eb: jmp 0x51ca13 */ goto L_0051ca13;
L_0051c9ed:; BB(0x0051c9ed);
    /* 0051c9ed: mov eax, 3 */ r_eax = 0x3u;
    /* 0051c9f2: jmp 0x51ca13 */ goto L_0051ca13;
L_0051c9f4:; BB(0x0051c9f4);
    /* 0051c9f4: mov eax, 4 */ r_eax = 0x4u;
    /* 0051c9f9: jmp 0x51ca13 */ goto L_0051ca13;
L_0051c9fb:; BB(0x0051c9fb);
    /* 0051c9fb: mov eax, 5 */ r_eax = 0x5u;
    /* 0051ca00: jmp 0x51ca13 */ goto L_0051ca13;
L_0051ca02:; BB(0x0051ca02);
    /* 0051ca02: mov eax, 6 */ r_eax = 0x6u;
    /* 0051ca07: jmp 0x51ca13 */ goto L_0051ca13;
L_0051ca09:; BB(0x0051ca09);
    /* 0051ca09: mov eax, 2 */ r_eax = 0x2u;
    /* 0051ca0e: jmp 0x51ca13 */ goto L_0051ca13;
L_0051ca10:; BB(0x0051ca10);
    /* 0051ca10: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_0051ca13:; BB(0x0051ca13);
    /* 0051ca13: mov esp, ebp */ r_esp = r_ebp;
    /* 0051ca15: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051ca16: ret 4 */ FN_RET(0x0051c9b0); r_esp += 8; return;
}

void f_0051ca40(void) /* sub_51CA40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0051ca40);
    /* 0051ca40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051ca41: mov ebp, esp */ r_ebp = r_esp;
    /* 0051ca43: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051ca46: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0051ca49: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0051ca4c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0051ca4f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051ca52: sub ecx, 0x30e792 */ {  u32 a = r_ecx; u32 b = 0x30e792u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0051ca58: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0051ca5b: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0051ca5f: ja 0x51ca87 */ if ((!fC&&!fZ)) goto L_0051ca87;
L_0051ca61:; BB(0x0051ca61);
    /* 0051ca61: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051ca64: jmp dword ptr [edx*4 + 0x51ca94] */ { u32 t = R32((u32)(r_edx*4+0x51ca94u)); switch (t) { case 0x51ca6bu: goto L_0051ca6b; case 0x51ca72u: goto L_0051ca72; case 0x51ca79u: goto L_0051ca79; case 0x51ca80u: goto L_0051ca80; default: UNSUP(0x0051ca64, "jump table entry is not a known target"); } }
L_0051ca6b:; BB(0x0051ca6b);
    /* 0051ca6b: mov eax, 5 */ r_eax = 0x5u;
    /* 0051ca70: jmp 0x51ca8c */ goto L_0051ca8c;
L_0051ca72:; BB(0x0051ca72);
    /* 0051ca72: mov eax, 0x19 */ r_eax = 0x19u;
    /* 0051ca77: jmp 0x51ca8c */ goto L_0051ca8c;
L_0051ca79:; BB(0x0051ca79);
    /* 0051ca79: mov eax, 0xfa */ r_eax = 0xfau;
    /* 0051ca7e: jmp 0x51ca8c */ goto L_0051ca8c;
L_0051ca80:; BB(0x0051ca80);
    /* 0051ca80: mov eax, 0x3e8 */ r_eax = 0x3e8u;
    /* 0051ca85: jmp 0x51ca8c */ goto L_0051ca8c;
L_0051ca87:; BB(0x0051ca87);
    /* 0051ca87: mov eax, 5 */ r_eax = 0x5u;
L_0051ca8c:; BB(0x0051ca8c);
    /* 0051ca8c: mov esp, ebp */ r_esp = r_ebp;
    /* 0051ca8e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051ca8f: ret 4 */ FN_RET(0x0051ca40); r_esp += 8; return;
}

void f_0051cab0(void) /* sub_51CAB0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0051cab0);
    /* 0051cab0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051cab1: mov ebp, esp */ r_ebp = r_esp;
    /* 0051cab3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051cab4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0051cab7: mov ecx, dword ptr [0x793160] */ r_ecx = R32((u32)(0x793160u));
    /* 0051cabd: call 0x520100 */ r_esp -= 4; W32(r_esp, 0x51cac2u); f_00520100();
    /* 0051cac2: mov esp, ebp */ r_esp = r_ebp;
    /* 0051cac4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051cac5: ret  */ FN_RET(0x0051cab0); r_esp += 4; return;
}

void f_0051cba0(void) /* sub_51CBA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0051cba0);
    /* 0051cba0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051cba1: mov ebp, esp */ r_ebp = r_esp;
    /* 0051cba3: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051cba6: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0051cbab: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0051cbad: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0051cbb0: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 0051cbb3: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 0051cbb8: mov ecx, dword ptr [eax + 0xfc] */ r_ecx = R32((u32)(r_eax+0xfcu));
    /* 0051cbbe: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 0051cbc1: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 0051cbc8: cmp dword ptr [ebp - 0x40], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051cbcc: jne 0x51cbd7 */ if (!fZ) goto L_0051cbd7;
L_0051cbce:; BB(0x0051cbce);
    /* 0051cbce: mov dword ptr [ebp - 0x3c], 0xe */ W32((u32)(r_ebp+0xffffffc4u), 0xeu);
    /* 0051cbd5: jmp 0x51cbe4 */ goto L_0051cbe4;
L_0051cbd7:; BB(0x0051cbd7);
    /* 0051cbd7: cmp dword ptr [ebp - 0x40], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051cbdb: jne 0x51cbe4 */ if (!fZ) goto L_0051cbe4;
L_0051cbdd:; BB(0x0051cbdd);
    /* 0051cbdd: mov dword ptr [ebp - 0x3c], 0x1c */ W32((u32)(r_ebp+0xffffffc4u), 0x1cu);
L_0051cbe4:; BB(0x0051cbe4);
    /* 0051cbe4: cmp dword ptr [ebp - 0x3c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051cbe8: je 0x51cc1b */ if (fZ) goto L_0051cc1b;
L_0051cbea:; BB(0x0051cbea);
    /* 0051cbea: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051cbed: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051cbee: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051cbf4: call 0x480ee0 */ r_esp -= 4; W32(r_esp, 0x51cbf9u); f_00480ee0();
    /* 0051cbf9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051cbfa: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0051cbfd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051cbfe: push 0x6c24f8 */ { u32 v = 0x6c24f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0051cc03: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51cc08u); f_00630f40();
    /* 0051cc08: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051cc0b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051cc0c: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 0051cc0f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051cc10: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x51cc16u); call_ind(t); }
    /* 0051cc16: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051cc19: jmp 0x51cc46 */ goto L_0051cc46;
L_0051cc1b:; BB(0x0051cc1b);
    /* 0051cc1b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051cc21: call 0x480ee0 */ r_esp -= 4; W32(r_esp, 0x51cc26u); f_00480ee0();
    /* 0051cc26: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051cc27: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0051cc2a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051cc2b: push 0x6c24cc */ { u32 v = 0x6c24ccu; r_esp -= 4; W32(r_esp, v); }
    /* 0051cc30: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51cc35u); f_00630f40();
    /* 0051cc35: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051cc38: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051cc39: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 0051cc3c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051cc3d: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x51cc43u); call_ind(t); }
    /* 0051cc43: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0051cc46:; BB(0x0051cc46);
    /* 0051cc46: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 0051cc49: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051cc4a: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0051cc4d: call 0x51cc60 */ r_esp -= 4; W32(r_esp, 0x51cc52u); f_0051cc60();
    /* 0051cc52: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051cc55: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0051cc57: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x51cc5cu); f_00686d72();
    /* 0051cc5c: mov esp, ebp */ r_esp = r_ebp;
    /* 0051cc5e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051cc5f: ret  */ FN_RET(0x0051cba0); r_esp += 4; return;
}

void f_0051cc60(void) /* sub_51CC60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0051cc60);
    /* 0051cc60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051cc61: mov ebp, esp */ r_ebp = r_esp;
    /* 0051cc63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051cc64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0051cc67: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0051cc6a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051cc6b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051cc6d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051cc70: call 0x5fb5a0 */ r_esp -= 4; W32(r_esp, 0x51cc75u); f_005fb5a0();
    /* 0051cc75: mov esp, ebp */ r_esp = r_ebp;
    /* 0051cc77: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051cc78: ret 4 */ FN_RET(0x0051cc60); r_esp += 8; return;
}

void f_0051ccd0(void) /* sub_51CCD0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0051ccd0);
    /* 0051ccd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051ccd1: mov ebp, esp */ r_ebp = r_esp;
    /* 0051ccd3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051ccd4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0051ccd7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051ccda: call 0x51e5f0 */ r_esp -= 4; W32(r_esp, 0x51ccdfu); f_0051e5f0();
    /* 0051ccdf: mov eax, dword ptr [eax*4 + 0x7219b8] */ r_eax = R32((u32)(r_eax*4+0x7219b8u));
    /* 0051cce6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051cce7: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51ccecu); f_00630f40();
    /* 0051ccec: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051ccef: mov esp, ebp */ r_esp = r_ebp;
    /* 0051ccf1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051ccf2: ret  */ FN_RET(0x0051ccd0); r_esp += 4; return;
}

