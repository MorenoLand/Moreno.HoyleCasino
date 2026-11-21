#include "protos.h"

void f_0069b170(void) /* sub_69B170 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0069b170);
    /* 0069b170: sub esp, 0x120 */ {  u32 a = r_esp; u32 b = 0x120u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069b176: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069b177: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069b178: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069b179: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069b17a: push 0x520 */ { u32 v = 0x520u; r_esp -= 4; W32(r_esp, v); }
    /* 0069b17f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069b181: call 0x68738e */ r_esp -= 4; W32(r_esp, 0x69b186u); f_0068738e();
    /* 0069b186: mov edi, dword ptr [esp + 0x140] */ r_edi = R32((u32)(r_esp+0x140u));
    /* 0069b18d: mov ebp, eax */ r_ebp = r_eax;
    /* 0069b18f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069b192: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0069b194: mov dword ptr [ebp + 0x510], edi */ W32((u32)(r_ebp+0x510u), r_edi);
    /* 0069b19a: mov eax, dword ptr [edi + 0x348] */ r_eax = R32((u32)(r_edi+0x348u));
    /* 0069b1a0: mov dword ptr [ebp + 0x508], eax */ W32((u32)(r_ebp+0x508u), r_eax);
    /* 0069b1a6: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 0069b1a8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0069b1aa: mov dword ptr [esp + 0x24], ebp */ W32((u32)(r_esp+0x24u), r_ebp);
    /* 0069b1ae: jle 0x69b1c4 */ if ((fZ||fS!=fO)) goto L_0069b1c4;
L_0069b1b0:; BB(0x0069b1b0);
    /* 0069b1b0: lea eax, [edi + 4] */ r_eax = (u32)(r_edi+0x4u);
L_0069b1b3:; BB(0x0069b1b3);
    /* 0069b1b3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0069b1b5: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069b1b8: mov ebx, dword ptr [edi + edx*4 + 0x80] */ r_ebx = R32((u32)(r_edi+r_edx*4+0x80u));
    /* 0069b1bf: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0069b1c1: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0069b1c2: jne 0x69b1b3 */ if (!fZ) goto L_0069b1b3;
L_0069b1c4:; BB(0x0069b1c4);
    /* 0069b1c4: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0069b1c7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069b1c9: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0069b1cb: mov dword ptr [ebp + 0x504], esi */ W32((u32)(r_ebp+0x504u), r_esi);
    /* 0069b1d1: jle 0x69b1e5 */ if ((fZ||fS!=fO)) goto L_0069b1e5;
L_0069b1d3:; BB(0x0069b1d3);
    /* 0069b1d3: lea ecx, [edi + 0x344] */ r_ecx = (u32)(r_edi+0x344u);
L_0069b1d9:; BB(0x0069b1d9);
    /* 0069b1d9: mov dword ptr [esp + eax*4 + 0x2c], ecx */ W32((u32)(r_esp+r_eax*4+0x2cu), r_ecx);
    /* 0069b1dd: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069b1de: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0069b1e1: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069b1e3: jl 0x69b1d9 */ if ((fS!=fO)) goto L_0069b1d9;
L_0069b1e5:; BB(0x0069b1e5);
    /* 0069b1e5: push 0x69b380 */ { u32 v = 0x69b380u; r_esp -= 4; W32(r_esp, v); }
    /* 0069b1ea: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0069b1ec: lea eax, [esp + 0x34] */ r_eax = (u32)(r_esp+0x34u);
    /* 0069b1f0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069b1f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069b1f2: call 0x686ed8 */ r_esp -= 4; W32(r_esp, 0x69b1f7u); f_00686ed8();
    /* 0069b1f7: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069b1fa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069b1fc: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0069b1fe: jle 0x69b220 */ if ((fZ||fS!=fO)) goto L_0069b220;
L_0069b200:; BB(0x0069b200);
    /* 0069b200: lea ecx, [ebp + 0x104] */ r_ecx = (u32)(r_ebp+0x104u);
L_0069b206:; BB(0x0069b206);
    /* 0069b206: mov edx, dword ptr [esp + eax*4 + 0x2c] */ r_edx = R32((u32)(r_esp+r_eax*4+0x2cu));
    /* 0069b20a: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0069b20d: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0069b20f: sub edx, 0x344 */ {  u32 a = r_edx; u32 b = 0x344u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0069b215: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0069b218: mov dword ptr [ecx - 4], edx */ W32((u32)(r_ecx+0xfffffffcu), r_edx);
    /* 0069b21b: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069b21c: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069b21e: jl 0x69b206 */ if ((fS!=fO)) goto L_0069b206;
L_0069b220:; BB(0x0069b220);
    /* 0069b220: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069b222: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0069b224: jle 0x69b23d */ if ((fZ||fS!=fO)) goto L_0069b23d;
L_0069b226:; BB(0x0069b226);
    /* 0069b226: lea ecx, [ebp + 0x104] */ r_ecx = (u32)(r_ebp+0x104u);
L_0069b22c:; BB(0x0069b22c);
    /* 0069b22c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0069b22e: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0069b231: mov dword ptr [ebp + edx*4 + 0x208], eax */ W32((u32)(r_ebp+r_edx*4+0x208u), r_eax);
    /* 0069b238: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069b239: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069b23b: jl 0x69b22c */ if ((fS!=fO)) goto L_0069b22c;
L_0069b23d:; BB(0x0069b23d);
    /* 0069b23d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069b23f: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0069b241: jle 0x69b25a */ if ((fZ||fS!=fO)) goto L_0069b25a;
L_0069b243:; BB(0x0069b243);
    /* 0069b243: mov ecx, dword ptr [ebp + eax*4 + 0x104] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0x104u));
    /* 0069b24a: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069b24b: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069b24d: mov edx, dword ptr [edi + ecx*4 + 0x344] */ r_edx = R32((u32)(r_edi+r_ecx*4+0x344u));
    /* 0069b254: mov dword ptr [ebp + eax*4 - 4], edx */ W32((u32)(r_ebp+r_eax*4+0xfffffffcu), r_edx);
    /* 0069b258: jl 0x69b243 */ if ((fS!=fO)) goto L_0069b243;
L_0069b25a:; BB(0x0069b25a);
    /* 0069b25a: mov eax, dword ptr [edi + 0x340] */ r_eax = R32((u32)(r_edi+0x340u));
    /* 0069b260: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0069b261: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0069b264: ja 0x69b29b */ if ((!fC&&!fZ)) goto L_0069b29b;
L_0069b266:; BB(0x0069b266);
    /* 0069b266: jmp dword ptr [eax*4 + 0x69b36c] */ { u32 t = R32((u32)(r_eax*4+0x69b36cu)); switch (t) { case 0x69b26du: goto L_0069b26d; case 0x69b279u: goto L_0069b279; case 0x69b285u: goto L_0069b285; case 0x69b291u: goto L_0069b291; default: UNSUP(0x0069b266, "jump table entry is not a known target"); } }
L_0069b26d:; BB(0x0069b26d);
    /* 0069b26d: mov dword ptr [ebp + 0x50c], 0x100 */ W32((u32)(r_ebp+0x50cu), 0x100u);
    /* 0069b277: jmp 0x69b29b */ goto L_0069b29b;
L_0069b279:; BB(0x0069b279);
    /* 0069b279: mov dword ptr [ebp + 0x50c], 0x80 */ W32((u32)(r_ebp+0x50cu), 0x80u);
    /* 0069b283: jmp 0x69b29b */ goto L_0069b29b;
L_0069b285:; BB(0x0069b285);
    /* 0069b285: mov dword ptr [ebp + 0x50c], 0x56 */ W32((u32)(r_ebp+0x50cu), 0x56u);
    /* 0069b28f: jmp 0x69b29b */ goto L_0069b29b;
L_0069b291:; BB(0x0069b291);
    /* 0069b291: mov dword ptr [ebp + 0x50c], 0x40 */ W32((u32)(r_ebp+0x50cu), 0x40u);
L_0069b29b:; BB(0x0069b29b);
    /* 0069b29b: add esi, -2 */ {  u32 a = r_esi; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0069b29e: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0069b2a0: mov dword ptr [esp + 0x28], esi */ W32((u32)(r_esp+0x28u), r_esi);
    /* 0069b2a4: jle 0x69b35e */ if ((fZ||fS!=fO)) goto L_0069b35e;
L_0069b2aa:; BB(0x0069b2aa);
    /* 0069b2aa: lea eax, [ebp + 0x30c] */ r_eax = (u32)(r_ebp+0x30cu);
    /* 0069b2b0: add edi, 0x34c */ {  u32 a = r_edi; u32 b = 0x34cu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0069b2b6: mov edx, 2 */ r_edx = 0x2u;
    /* 0069b2bb: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0069b2bf: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
L_0069b2c3:; BB(0x0069b2c3);
    /* 0069b2c3: mov ecx, dword ptr [ebp + 0x508] */ r_ecx = R32((u32)(r_ebp+0x508u));
    /* 0069b2c9: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0069b2cb: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 0069b2cf: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 0069b2d3: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0069b2d5: mov edi, 1 */ r_edi = 0x1u;
    /* 0069b2da: mov ecx, dword ptr [ecx] */ r_ecx = R32((u32)(r_ecx));
    /* 0069b2dc: mov dword ptr [esp + 0x1c], ecx */ W32((u32)(r_esp+0x1cu), r_ecx);
    /* 0069b2e0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0069b2e2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0069b2e4: jle 0x69b334 */ if ((fZ||fS!=fO)) goto L_0069b334;
L_0069b2e6:; BB(0x0069b2e6);
    /* 0069b2e6: mov eax, dword ptr [esp + 0x138] */ r_eax = R32((u32)(r_esp+0x138u));
    /* 0069b2ed: add eax, 0x344 */ {  u32 a = r_eax; u32 b = 0x344u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069b2f2: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
L_0069b2f6:; BB(0x0069b2f6);
    /* 0069b2f6: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0069b2fa: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0069b2fc: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069b2fe: jle 0x69b30a */ if ((fZ||fS!=fO)) goto L_0069b30a;
L_0069b300:; BB(0x0069b300);
    /* 0069b300: cmp eax, dword ptr [esp + 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x1cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069b304: jge 0x69b30a */ if ((fS==fO)) goto L_0069b30a;
L_0069b306:; BB(0x0069b306);
    /* 0069b306: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0069b308: mov esi, eax */ r_esi = r_eax;
L_0069b30a:; BB(0x0069b30a);
    /* 0069b30a: cmp eax, dword ptr [esp + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x18u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069b30e: jge 0x69b31c */ if ((fS==fO)) goto L_0069b31c;
L_0069b310:; BB(0x0069b310);
    /* 0069b310: cmp eax, dword ptr [esp + 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x1cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069b314: jle 0x69b31c */ if ((fZ||fS!=fO)) goto L_0069b31c;
L_0069b316:; BB(0x0069b316);
    /* 0069b316: mov edi, ecx */ r_edi = r_ecx;
    /* 0069b318: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
L_0069b31c:; BB(0x0069b31c);
    /* 0069b31c: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 0069b320: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0069b321: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0069b324: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069b326: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 0069b32a: jl 0x69b2f6 */ if ((fS!=fO)) goto L_0069b2f6;
L_0069b32c:; BB(0x0069b32c);
    /* 0069b32c: mov ebp, dword ptr [esp + 0x24] */ r_ebp = R32((u32)(r_esp+0x24u));
    /* 0069b330: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
L_0069b334:; BB(0x0069b334);
    /* 0069b334: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 0069b338: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
    /* 0069b33c: mov dword ptr [eax + 0xfc], ebx */ W32((u32)(r_eax+0xfcu), r_ebx);
    /* 0069b342: mov dword ptr [eax], edi */ W32((u32)(r_eax), r_edi);
    /* 0069b344: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0069b347: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069b34a: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069b34b: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 0069b34f: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0069b353: lea ecx, [edx - 2] */ r_ecx = (u32)(r_edx+0xfffffffeu);
    /* 0069b356: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069b358: jl 0x69b2c3 */ if ((fS!=fO)) goto L_0069b2c3;
L_0069b35e:; BB(0x0069b35e);
    /* 0069b35e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069b35f: mov eax, ebp */ r_eax = r_ebp;
    /* 0069b361: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069b362: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069b363: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069b364: add esp, 0x120 */ {  u32 a = r_esp; u32 b = 0x120u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069b36a: ret  */ FN_RET(0x0069b170); r_esp += 4; return;
}

void f_0069b380(void) /* sub_69B380 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0069b380);
    /* 0069b380: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0069b384: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0069b388: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0069b38a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0069b38c: mov ecx, dword ptr [ecx] */ r_ecx = R32((u32)(r_ecx));
    /* 0069b38e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0069b390: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0069b392: mov eax, ecx */ r_eax = r_ecx;
    /* 0069b394: ret  */ FN_RET(0x0069b380); r_esp += 4; return;
}

void f_0069b3a0(void) /* sub_69B3A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0069b3a0);
    /* 0069b3a0: sub esp, 0xd44 */ {  u32 a = r_esp; u32 b = 0xd44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069b3a6: mov eax, dword ptr [esp + 0xd4c] */ r_eax = R32((u32)(r_esp+0xd4cu));
    /* 0069b3ad: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069b3ae: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069b3af: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069b3b0: mov esi, dword ptr [eax + 0x504] */ r_esi = R32((u32)(r_eax+0x504u));
    /* 0069b3b6: mov ebp, dword ptr [eax + 0x510] */ r_ebp = R32((u32)(r_eax+0x510u));
    /* 0069b3bc: mov edx, dword ptr [eax + 0x508] */ r_edx = R32((u32)(r_eax+0x508u));
    /* 0069b3c2: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0069b3c4: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069b3c6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069b3c7: mov dword ptr [esp + 0x24], ebp */ W32((u32)(r_esp+0x24u), r_ebp);
    /* 0069b3cb: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 0069b3cf: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
    /* 0069b3d3: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 0069b3d7: jle 0x69b3e9 */ if ((fZ||fS!=fO)) goto L_0069b3e9;
L_0069b3d9:; BB(0x0069b3d9);
    /* 0069b3d9: mov ecx, esi */ r_ecx = r_esi;
    /* 0069b3db: mov eax, 0xffffff38 */ r_eax = 0xffffff38u;
    /* 0069b3e0: lea edi, [esp + 0x144] */ r_edi = (u32)(r_esp+0x144u);
    /* 0069b3e7: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
L_0069b3e9:; BB(0x0069b3e9);
    /* 0069b3e9: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0069b3eb: jle 0x69b42b */ if ((fZ||fS!=fO)) goto L_0069b42b;
L_0069b3ed:; BB(0x0069b3ed);
    /* 0069b3ed: mov ecx, esi */ r_ecx = r_esi;
    /* 0069b3ef: mov eax, 0xffffff38 */ r_eax = 0xffffff38u;
    /* 0069b3f4: lea edi, [esp + 0x40] */ r_edi = (u32)(r_esp+0x40u);
    /* 0069b3f8: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0069b3fa: mov ecx, esi */ r_ecx = r_esi;
    /* 0069b3fc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069b3fe: lea edi, [esp + 0x248] */ r_edi = (u32)(r_esp+0x248u);
    /* 0069b405: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0069b407: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0069b409: jle 0x69b42b */ if ((fZ||fS!=fO)) goto L_0069b42b;
L_0069b40b:; BB(0x0069b40b);
    /* 0069b40b: mov ecx, esi */ r_ecx = r_esi;
    /* 0069b40d: mov eax, 1 */ r_eax = 0x1u;
    /* 0069b412: lea edi, [esp + 0x34c] */ r_edi = (u32)(r_esp+0x34cu);
    /* 0069b419: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0069b41b: mov ecx, esi */ r_ecx = r_esi;
    /* 0069b41d: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069b420: lea edi, [esp + 0x450] */ r_edi = (u32)(r_esp+0x450u);
    /* 0069b427: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0069b429: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
L_0069b42b:; BB(0x0069b42b);
    /* 0069b42b: jne 0x69b454 */ if (!fZ) goto L_0069b454;
L_0069b42d:; BB(0x0069b42d);
    /* 0069b42d: mov ecx, dword ptr [esp + 0xd60] */ r_ecx = R32((u32)(r_esp+0xd60u));
    /* 0069b434: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069b435: lea eax, [esp + 0x558] */ r_eax = (u32)(r_esp+0x558u);
    /* 0069b43c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069b43d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069b43e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069b43f: mov edx, dword ptr [esp + 0xd74] */ r_edx = R32((u32)(r_esp+0xd74u));
    /* 0069b446: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0069b448: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0069b449: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069b44a: call 0x69b880 */ r_esp -= 4; W32(r_esp, 0x69b44fu); f_0069b880();
    /* 0069b44f: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069b452: jmp 0x69b4b9 */ goto L_0069b4b9;
L_0069b454:; BB(0x0069b454);
    /* 0069b454: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0069b458: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0069b45a: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0069b45b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0069b45d: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0069b461: jle 0x69b81b */ if ((fZ||fS!=fO)) goto L_0069b81b;
L_0069b467:; BB(0x0069b467);
    /* 0069b467: lea edi, [esp + 0x554] */ r_edi = (u32)(r_esp+0x554u);
L_0069b46e:; BB(0x0069b46e);
    /* 0069b46e: mov eax, dword ptr [esp + 0xd5c] */ r_eax = R32((u32)(r_esp+0xd5cu));
    /* 0069b475: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 0069b479: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069b47a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0069b47b: mov edx, dword ptr [eax + esi*4 + 4] */ r_edx = R32((u32)(r_eax+r_esi*4+0x4u));
    /* 0069b47f: mov eax, dword ptr [eax + esi*4] */ r_eax = R32((u32)(r_eax+r_esi*4));
    /* 0069b482: mov ecx, dword ptr [esp + 0xd68] */ r_ecx = R32((u32)(r_esp+0xd68u));
    /* 0069b489: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069b48a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069b48b: mov edx, dword ptr [esp + 0xd74] */ r_edx = R32((u32)(r_esp+0xd74u));
    /* 0069b492: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069b493: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0069b494: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069b495: call 0x69b880 */ r_esp -= 4; W32(r_esp, 0x69b49au); f_0069b880();
    /* 0069b49a: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 0069b49e: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069b4a1: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0069b4a3: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0069b4a7: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0069b4a8: add edi, 0x20 */ {  u32 a = r_edi; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0069b4ab: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069b4ad: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 0069b4b1: jl 0x69b46e */ if ((fS!=fO)) goto L_0069b46e;
L_0069b4b3:; BB(0x0069b4b3);
    /* 0069b4b3: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 0069b4b7: mov eax, ecx */ r_eax = r_ecx;
L_0069b4b9:; BB(0x0069b4b9);
    /* 0069b4b9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069b4bb: je 0x69b81b */ if (fZ) goto L_0069b81b;
L_0069b4c1:; BB(0x0069b4c1);
    /* 0069b4c1: mov eax, 0xffffff38 */ r_eax = 0xffffff38u;
    /* 0069b4c6: lea ecx, [esp + 0x30] */ r_ecx = (u32)(r_esp+0x30u);
    /* 0069b4ca: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0069b4ce: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 0069b4d2: lea eax, [esp + 0x3c] */ r_eax = (u32)(r_esp+0x3cu);
    /* 0069b4d6: lea edx, [esi - 1] */ r_edx = (u32)(r_esi+0xffffffffu);
    /* 0069b4d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069b4da: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0069b4db: lea eax, [esp + 0x55c] */ r_eax = (u32)(r_esp+0x55cu);
    /* 0069b4e2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069b4e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069b4e4: call 0x69bab0 */ r_esp -= 4; W32(r_esp, 0x69b4e9u); f_0069bab0();
    /* 0069b4e9: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 0069b4ed: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069b4f0: mov dword ptr [esp + 0x144], eax */ W32((u32)(r_esp+0x144u), r_eax);
    /* 0069b4f7: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 0069b4fb: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 0069b4ff: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069b502: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0069b506: mov dword ptr [esp + 0x148], eax */ W32((u32)(r_esp+0x148u), r_eax);
    /* 0069b50d: mov dword ptr [esp + 0x10], 2 */ W32((u32)(r_esp+0x10u), 0x2u);
    /* 0069b515: jle 0x69b71d */ if ((fZ||fS!=fO)) goto L_0069b71d;
L_0069b51b:; BB(0x0069b51b);
    /* 0069b51b: mov ecx, dword ptr [esp + 0xd5c] */ r_ecx = R32((u32)(r_esp+0xd5cu));
    /* 0069b522: add ecx, 0x210 */ {  u32 a = r_ecx; u32 b = 0x210u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0069b528: mov dword ptr [esp + 0x1c], ecx */ W32((u32)(r_esp+0x1cu), r_ecx);
L_0069b52c:; BB(0x0069b52c);
    /* 0069b52c: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 0069b530: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0069b532: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 0069b536: mov edi, dword ptr [esp + eax*4 + 0x248] */ r_edi = R32((u32)(r_esp+r_eax*4+0x248u));
    /* 0069b53d: mov esi, dword ptr [esp + eax*4 + 0x34c] */ r_esi = R32((u32)(r_esp+r_eax*4+0x34cu));
    /* 0069b544: cmp dword ptr [esp + edi*4 + 0x450], esi */ {  u32 a = R32((u32)(r_esp+r_edi*4+0x450u)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069b54b: je 0x69b6fb */ if (fZ) goto L_0069b6fb;
L_0069b551:; BB(0x0069b551);
    /* 0069b551: mov eax, dword ptr [esp + 0xd5c] */ r_eax = R32((u32)(r_esp+0xd5cu));
    /* 0069b558: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069b559: mov ecx, eax */ r_ecx = r_eax;
    /* 0069b55b: mov dword ptr [esp + edi*4 + 0x454], esi */ W32((u32)(r_esp+r_edi*4+0x454u), r_esi);
    /* 0069b562: mov ebx, dword ptr [eax + edi*4 + 0x208] */ r_ebx = R32((u32)(r_eax+r_edi*4+0x208u));
    /* 0069b569: mov eax, dword ptr [ebp + edi*4 + 0x344] */ r_eax = R32((u32)(r_ebp+r_edi*4+0x344u));
    /* 0069b570: mov edx, dword ptr [ecx + esi*4 + 0x208] */ r_edx = R32((u32)(r_ecx+r_esi*4+0x208u));
    /* 0069b577: mov ecx, dword ptr [ebp + esi*4 + 0x344] */ r_ecx = R32((u32)(r_ebp+r_esi*4+0x344u));
    /* 0069b57e: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 0069b582: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 0069b586: lea edx, [esp + 0x44] */ r_edx = (u32)(r_esp+0x44u);
    /* 0069b58a: lea eax, [esp + 0x148] */ r_eax = (u32)(r_esp+0x148u);
    /* 0069b591: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069b592: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069b593: mov dword ptr [esp + 0x20], ecx */ W32((u32)(r_esp+0x20u), r_ecx);
    /* 0069b597: call 0x69bee0 */ r_esp -= 4; W32(r_esp, 0x69b59cu); f_0069bee0();
    /* 0069b59c: lea ecx, [esp + 0x4c] */ r_ecx = (u32)(r_esp+0x4cu);
    /* 0069b5a0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069b5a1: lea edx, [esp + 0x154] */ r_edx = (u32)(r_esp+0x154u);
    /* 0069b5a8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0069b5a9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069b5aa: mov ebp, eax */ r_ebp = r_eax;
    /* 0069b5ac: call 0x69bee0 */ r_esp -= 4; W32(r_esp, 0x69b5b1u); f_0069bee0();
    /* 0069b5b1: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069b5b4: cmp ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069b5b7: je 0x69b7f3 */ if (fZ) goto L_0069b7f3;
L_0069b5bd:; BB(0x0069b5bd);
    /* 0069b5bd: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069b5c0: je 0x69b7f3 */ if (fZ) goto L_0069b7f3;
L_0069b5c6:; BB(0x0069b5c6);
    /* 0069b5c6: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 0069b5ca: mov edx, dword ptr [esp + 0xd60] */ r_edx = R32((u32)(r_esp+0xd60u));
    /* 0069b5d1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0069b5d2: mov ecx, dword ptr [esp + 0xd68] */ r_ecx = R32((u32)(r_esp+0xd68u));
    /* 0069b5d9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069b5da: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 0069b5de: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0069b5df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069b5e0: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 0069b5e4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069b5e5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069b5e6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069b5e7: call 0x69bca0 */ r_esp -= 4; W32(r_esp, 0x69b5ecu); f_0069bca0();
    /* 0069b5ec: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069b5ef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069b5f1: je 0x69b6e3 */ if (fZ) goto L_0069b6e3;
L_0069b5f7:; BB(0x0069b5f7);
    /* 0069b5f7: mov ebp, dword ptr [esp + 0x2c] */ r_ebp = R32((u32)(r_esp+0x2cu));
    /* 0069b5fb: mov eax, 0xffffff38 */ r_eax = 0xffffff38u;
    /* 0069b600: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 0069b604: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 0069b608: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0069b60c: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0069b610: mov eax, ebp */ r_eax = r_ebp;
    /* 0069b612: lea ecx, [esp + 0x38] */ r_ecx = (u32)(r_esp+0x38u);
    /* 0069b616: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0069b618: lea edx, [esp + 0x34] */ r_edx = (u32)(r_esp+0x34u);
    /* 0069b61c: shl ebx, 5 */ { u32 c = (5u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 0069b61f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0069b620: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069b621: lea ecx, [esp + ebx + 0x55c] */ r_ecx = (u32)(r_esp+r_ebx+0x55cu);
    /* 0069b628: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069b629: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0069b62a: call 0x69bab0 */ r_esp -= 4; W32(r_esp, 0x69b62fu); f_0069bab0();
    /* 0069b62f: lea edx, [esp + 0x24] */ r_edx = (u32)(r_esp+0x24u);
    /* 0069b633: lea eax, [esp + 0x30] */ r_eax = (u32)(r_esp+0x30u);
    /* 0069b637: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069b638: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069b63a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069b63b: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 0069b63f: shl ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0069b642: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0069b644: lea edx, [esp + ecx + 0x56c] */ r_edx = (u32)(r_esp+r_ecx+0x56cu);
    /* 0069b64b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069b64c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069b64d: call 0x69bab0 */ r_esp -= 4; W32(r_esp, 0x69b652u); f_0069bab0();
    /* 0069b652: mov eax, dword ptr [esp + 0x54] */ r_eax = R32((u32)(r_esp+0x54u));
    /* 0069b656: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069b659: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069b65b: mov dword ptr [esp + edi*4 + 0x40], eax */ W32((u32)(r_esp+r_edi*4+0x40u), r_eax);
    /* 0069b65f: jne 0x69b668 */ if (!fZ) goto L_0069b668;
L_0069b661:; BB(0x0069b661);
    /* 0069b661: mov dword ptr [esp + 0x144], eax */ W32((u32)(r_esp+0x144u), r_eax);
L_0069b668:; BB(0x0069b668);
    /* 0069b668: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 0069b66c: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 0069b670: mov ebx, dword ptr [esp + 0x20] */ r_ebx = R32((u32)(r_esp+0x20u));
    /* 0069b674: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0069b678: mov dword ptr [esp + ecx*4 + 0x144], eax */ W32((u32)(r_esp+r_ecx*4+0x144u), r_eax);
    /* 0069b67f: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069b682: mov dword ptr [esp + ecx*4 + 0x40], ebx */ W32((u32)(r_esp+r_ecx*4+0x40u), r_ebx);
    /* 0069b686: mov dword ptr [esp + esi*4 + 0x144], edx */ W32((u32)(r_esp+r_esi*4+0x144u), r_edx);
    /* 0069b68d: jne 0x69b693 */ if (!fZ) goto L_0069b693;
L_0069b68f:; BB(0x0069b68f);
    /* 0069b68f: mov dword ptr [esp + 0x44], edx */ W32((u32)(r_esp+0x44u), r_edx);
L_0069b693:; BB(0x0069b693);
    /* 0069b693: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0069b695: jge 0x69b69f */ if ((fS==fO)) goto L_0069b69f;
L_0069b697:; BB(0x0069b697);
    /* 0069b697: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0069b699: jl 0x69b6f7 */ if ((fS!=fO)) goto L_0069b6f7;
L_0069b69b:; BB(0x0069b69b);
    /* 0069b69b: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
L_0069b69f:; BB(0x0069b69f);
    /* 0069b69f: lea eax, [ebp - 1] */ r_eax = (u32)(r_ebp+0xffffffffu);
    /* 0069b6a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0069b6a4: jl 0x69b6b9 */ if ((fS!=fO)) goto L_0069b6b9;
L_0069b6a6:; BB(0x0069b6a6);
    /* 0069b6a6: cmp dword ptr [esp + eax*4 + 0x34c], esi */ {  u32 a = R32((u32)(r_esp+r_eax*4+0x34cu)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069b6ad: jne 0x69b6b9 */ if (!fZ) goto L_0069b6b9;
L_0069b6af:; BB(0x0069b6af);
    /* 0069b6af: mov dword ptr [esp + eax*4 + 0x34c], ecx */ W32((u32)(r_esp+r_eax*4+0x34cu), r_ecx);
    /* 0069b6b6: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fS = ((r >> 31) & 1); }
    /* 0069b6b7: jns 0x69b6a6 */ if (!fS) goto L_0069b6a6;
L_0069b6b9:; BB(0x0069b6b9);
    /* 0069b6b9: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 0069b6bd: lea eax, [ebp + 1] */ r_eax = (u32)(r_ebp+0x1u);
    /* 0069b6c0: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069b6c2: jge 0x69b6f7 */ if ((fS==fO)) goto L_0069b6f7;
L_0069b6c4:; BB(0x0069b6c4);
    /* 0069b6c4: cmp dword ptr [esp + eax*4 + 0x248], edi */ {  u32 a = R32((u32)(r_esp+r_eax*4+0x248u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069b6cb: jne 0x69b6f7 */ if (!fZ) goto L_0069b6f7;
L_0069b6cd:; BB(0x0069b6cd);
    /* 0069b6cd: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 0069b6d1: mov dword ptr [esp + eax*4 + 0x248], ecx */ W32((u32)(r_esp+r_eax*4+0x248u), r_ecx);
    /* 0069b6d8: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 0069b6dc: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069b6dd: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069b6df: jl 0x69b6c4 */ if ((fS!=fO)) goto L_0069b6c4;
L_0069b6e1:; BB(0x0069b6e1);
    /* 0069b6e1: jmp 0x69b6f7 */ goto L_0069b6f7;
L_0069b6e3:; BB(0x0069b6e3);
    /* 0069b6e3: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0069b6e7: mov ecx, 0xffffff38 */ r_ecx = 0xffffff38u;
    /* 0069b6ec: mov dword ptr [esp + eax*4 + 0x144], ecx */ W32((u32)(r_esp+r_eax*4+0x144u), r_ecx);
    /* 0069b6f3: mov dword ptr [esp + eax*4 + 0x40], ecx */ W32((u32)(r_esp+r_eax*4+0x40u), r_ecx);
L_0069b6f7:; BB(0x0069b6f7);
    /* 0069b6f7: mov ebp, dword ptr [esp + 0x24] */ r_ebp = R32((u32)(r_esp+0x24u));
L_0069b6fb:; BB(0x0069b6fb);
    /* 0069b6fb: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0069b6ff: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 0069b703: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 0069b707: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069b708: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069b70b: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069b70d: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0069b711: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 0069b715: jl 0x69b52c */ if ((fS!=fO)) goto L_0069b52c;
L_0069b71b:; BB(0x0069b71b);
    /* 0069b71b: mov esi, ecx */ r_esi = r_ecx;
L_0069b71d:; BB(0x0069b71d);
    /* 0069b71d: mov eax, dword ptr [esp + 0xd58] */ r_eax = R32((u32)(r_esp+0xd58u));
    /* 0069b724: lea edx, [esi*4] */ r_edx = (u32)(r_esi*4);
    /* 0069b72b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069b72c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069b72d: call 0x690e40 */ r_esp -= 4; W32(r_esp, 0x69b732u); f_00690e40();
    /* 0069b732: lea ecx, [esp + 0x48] */ r_ecx = (u32)(r_esp+0x48u);
    /* 0069b736: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0069b738: lea edx, [esp + 0x150] */ r_edx = (u32)(r_esp+0x150u);
    /* 0069b73f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0069b740: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069b741: mov ebx, eax */ r_ebx = r_eax;
    /* 0069b743: call 0x69bee0 */ r_esp -= 4; W32(r_esp, 0x69b748u); f_0069bee0();
    /* 0069b748: mov dword ptr [ebx], eax */ W32((u32)(r_ebx), r_eax);
    /* 0069b74a: lea eax, [esp + 0x54] */ r_eax = (u32)(r_esp+0x54u);
    /* 0069b74e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069b750: lea ecx, [esp + 0x15c] */ r_ecx = (u32)(r_esp+0x15cu);
    /* 0069b757: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069b758: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0069b759: call 0x69bee0 */ r_esp -= 4; W32(r_esp, 0x69b75eu); f_0069bee0();
    /* 0069b75e: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 0069b761: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 0069b765: mov esi, 2 */ r_esi = 0x2u;
    /* 0069b76a: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069b76d: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069b76f: jle 0x69b81b */ if ((fZ||fS!=fO)) goto L_0069b81b;
L_0069b775:; BB(0x0069b775);
    /* 0069b775: mov eax, dword ptr [esp + 0xd5c] */ r_eax = R32((u32)(r_esp+0xd5cu));
    /* 0069b77c: lea edx, [ebp + 0x34c] */ r_edx = (u32)(r_ebp+0x34cu);
    /* 0069b782: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 0069b786: lea edi, [eax + 0x30c] */ r_edi = (u32)(r_eax+0x30cu);
L_0069b78c:; BB(0x0069b78c);
    /* 0069b78c: mov eax, dword ptr [edi + 0xfc] */ r_eax = R32((u32)(r_edi+0xfcu));
    /* 0069b792: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 0069b794: mov edx, dword ptr [ebp + eax*4 + 0x344] */ r_edx = R32((u32)(r_ebp+r_eax*4+0x344u));
    /* 0069b79b: mov eax, dword ptr [ebx + eax*4] */ r_eax = R32((u32)(r_ebx+r_eax*4));
    /* 0069b79e: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 0069b7a2: mov edx, dword ptr [ebp + ecx*4 + 0x344] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0x344u));
    /* 0069b7a9: mov ecx, dword ptr [ebx + ecx*4] */ r_ecx = R32((u32)(r_ebx+r_ecx*4));
    /* 0069b7ac: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 0069b7b0: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 0069b7b4: mov ecx, dword ptr [ecx] */ r_ecx = R32((u32)(r_ecx));
    /* 0069b7b6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0069b7b7: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 0069b7bb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0069b7bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069b7bd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069b7be: mov edx, dword ptr [esp + 0x3c] */ r_edx = R32((u32)(r_esp+0x3cu));
    /* 0069b7c2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069b7c3: call 0x69b830 */ r_esp -= 4; W32(r_esp, 0x69b7c8u); f_0069b830();
    /* 0069b7c8: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0069b7cc: lea eax, [esp + 0x54] */ r_eax = (u32)(r_esp+0x54u);
    /* 0069b7d0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069b7d1: lea ecx, [esp + 0x15c] */ r_ecx = (u32)(r_esp+0x15cu);
    /* 0069b7d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069b7d9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0069b7da: call 0x69bee0 */ r_esp -= 4; W32(r_esp, 0x69b7dfu); f_0069bee0();
    /* 0069b7df: mov ecx, dword ptr [esp + 0x34] */ r_ecx = R32((u32)(r_esp+0x34u));
    /* 0069b7e3: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069b7e6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0069b7e8: jl 0x69b7fa */ if ((fS!=fO)) goto L_0069b7fa;
L_0069b7ea:; BB(0x0069b7ea);
    /* 0069b7ea: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069b7ec: je 0x69b7fa */ if (fZ) goto L_0069b7fa;
L_0069b7ee:; BB(0x0069b7ee);
    /* 0069b7ee: mov dword ptr [ebx + esi*4], eax */ W32((u32)(r_ebx+r_esi*4), r_eax);
    /* 0069b7f1: jmp 0x69b800 */ goto L_0069b800;
L_0069b7f3:; BB(0x0069b7f3);
    /* 0069b7f3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069b7f5: call 0x687324 */ r_esp -= 4; W32(r_esp, 0x69b7fau); f_00687324();
L_0069b7fa:; BB(0x0069b7fa);
    /* 0069b7fa: or ch, 0x80 */ {  u32 a = (u8)(r_ecx>>8); u32 b = 0x80u; u32 r = (a | b) & 0xffu; r_ecx = (r_ecx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 0069b7fd: mov dword ptr [ebx + esi*4], ecx */ W32((u32)(r_ebx+r_esi*4), r_ecx);
L_0069b800:; BB(0x0069b800);
    /* 0069b800: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 0069b804: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0069b808: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0069b809: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0069b80c: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0069b80f: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069b811: mov dword ptr [esp + 0x1c], ecx */ W32((u32)(r_esp+0x1cu), r_ecx);
    /* 0069b815: jl 0x69b78c */ if ((fS!=fO)) goto L_0069b78c;
L_0069b81b:; BB(0x0069b81b);
    /* 0069b81b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069b81c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069b81d: mov eax, ebx */ r_eax = r_ebx;
    /* 0069b81f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069b820: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069b821: add esp, 0xd44 */ {  u32 a = r_esp; u32 b = 0xd44u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069b827: ret  */ FN_RET(0x0069b3a0); r_esp += 4; return;
}

void f_0069b830(void) /* sub_69B830 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0069b830);
    /* 0069b830: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 0069b834: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069b835: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 0069b839: and ecx, 0x7fff */ {  u32 a = r_ecx; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0069b83f: and esi, 0x7fff */ {  u32 a = r_esi; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0069b845: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069b846: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0069b848: mov edi, dword ptr [esp + 0x1c] */ r_edi = R32((u32)(r_esp+0x1cu));
    /* 0069b84c: mov eax, ecx */ r_eax = r_ecx;
    /* 0069b84e: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0069b84f: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069b851: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0069b853: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0069b857: sub edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0069b859: imul eax, edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0069b85c: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 0069b860: sub edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0069b862: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0069b863: idiv edi */ { i32 d = (i32)r_edi; if (!d) UNSUP(0x0069b863, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0069b863, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0069b865: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0069b867: mov edx, eax */ r_edx = r_eax;
    /* 0069b869: jge 0x69b872 */ if ((fS==fO)) goto L_0069b872;
L_0069b86b:; BB(0x0069b86b);
    /* 0069b86b: mov eax, esi */ r_eax = r_esi;
    /* 0069b86d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069b86e: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0069b870: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069b871: ret  */ FN_RET(0x0069b830); r_esp += 4; return;
L_0069b872:; BB(0x0069b872);
    /* 0069b872: lea eax, [edx + esi] */ r_eax = (u32)(r_edx+r_esi);
    /* 0069b875: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069b876: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069b877: ret  */ FN_RET(0x0069b830); r_esp += 4; return;
}

void f_0069b880(void) /* sub_69B880 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0069b880);
    /* 0069b880: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069b883: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 0069b887: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069b888: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069b889: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069b88a: mov esi, dword ptr [esp + 0x44] */ r_esi = R32((u32)(r_esp+0x44u));
    /* 0069b88e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069b88f: lea eax, [eax + esi*4] */ r_eax = (u32)(r_eax+r_esi*4);
    /* 0069b892: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069b893: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 0069b897: call 0x69ba80 */ r_esp -= 4; W32(r_esp, 0x69b89cu); f_0069ba80();
    /* 0069b89c: mov ebx, dword ptr [esp + 0x54] */ r_ebx = R32((u32)(r_esp+0x54u));
    /* 0069b8a0: mov ecx, 8 */ r_ecx = 0x8u;
    /* 0069b8a5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069b8a7: mov edi, ebx */ r_edi = r_ebx;
    /* 0069b8a9: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0069b8ab: mov edi, dword ptr [esp + 0x50] */ r_edi = R32((u32)(r_esp+0x50u));
    /* 0069b8af: mov eax, dword ptr [esp + 0x58] */ r_eax = R32((u32)(r_esp+0x58u));
    /* 0069b8b3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069b8b6: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0069b8b8: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069b8ba: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 0069b8be: mov dword ptr [esp + 0x18], ebp */ W32((u32)(r_esp+0x18u), r_ebp);
    /* 0069b8c2: mov dword ptr [esp + 0x20], ebp */ W32((u32)(r_esp+0x20u), r_ebp);
    /* 0069b8c6: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 0069b8ca: mov dword ptr [esp + 0x30], ebp */ W32((u32)(r_esp+0x30u), r_ebp);
    /* 0069b8ce: mov dword ptr [esp + 0x14], ebp */ W32((u32)(r_esp+0x14u), r_ebp);
    /* 0069b8d2: mov dword ptr [esp + 0x1c], ebp */ W32((u32)(r_esp+0x1cu), r_ebp);
    /* 0069b8d6: mov dword ptr [esp + 0x24], ebp */ W32((u32)(r_esp+0x24u), r_ebp);
    /* 0069b8da: mov dword ptr [esp + 0x2c], ebp */ W32((u32)(r_esp+0x2cu), r_ebp);
    /* 0069b8de: mov dword ptr [esp + 0x34], ebp */ W32((u32)(r_esp+0x34u), r_ebp);
    /* 0069b8e2: mov dword ptr [esp + 0x48], ebp */ W32((u32)(r_esp+0x48u), r_ebp);
    /* 0069b8e6: mov dword ptr [ebx], esi */ W32((u32)(r_ebx), r_esi);
    /* 0069b8e8: mov dword ptr [ebx + 4], edi */ W32((u32)(r_ebx+0x4u), r_edi);
    /* 0069b8eb: jl 0x69b8f0 */ if ((fS!=fO)) goto L_0069b8f0;
L_0069b8ed:; BB(0x0069b8ed);
    /* 0069b8ed: lea edi, [eax - 1] */ r_edi = (u32)(r_eax+0xffffffffu);
L_0069b8f0:; BB(0x0069b8f0);
    /* 0069b8f0: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069b8f2: jg 0x69b9e3 */ if ((!fZ&&fS==fO)) goto L_0069b9e3;
L_0069b8f8:; BB(0x0069b8f8);
    /* 0069b8f8: mov ecx, dword ptr [esp + 0x38] */ r_ecx = R32((u32)(r_esp+0x38u));
    /* 0069b8fc: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 0069b900: mov dword ptr [esp + 0x50], ecx */ W32((u32)(r_esp+0x50u), r_ecx);
    /* 0069b904: mov ecx, dword ptr [esp + 0x40] */ r_ecx = R32((u32)(r_esp+0x40u));
    /* 0069b908: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0069b90a: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
L_0069b90e:; BB(0x0069b90e);
    /* 0069b90e: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 0069b912: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069b913: call 0x69ba80 */ r_esp -= 4; W32(r_esp, 0x69b918u); f_0069ba80();
    /* 0069b918: mov ecx, eax */ r_ecx = r_eax;
    /* 0069b91a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069b91d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069b91f: je 0x69b9cf */ if (fZ) goto L_0069b9cf;
L_0069b925:; BB(0x0069b925);
    /* 0069b925: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 0069b929: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 0069b92d: fld dword ptr [edx + eax] */ FPUSH(R_F32((u32)(r_edx+r_eax)));
    /* 0069b930: mov edx, dword ptr [esp + 0x58] */ r_edx = R32((u32)(r_esp+0x58u));
    /* 0069b934: fadd dword ptr [edx + 0x458] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x458u));
    /* 0069b93a: fcomp dword ptr [eax] */ fx_compare(ST(0), R_F32((u32)(r_eax))); FPOP();
    /* 0069b93c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0069b93e: and eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0069b943: jne 0x69b987 */ if (!fZ) goto L_0069b987;
L_0069b945:; BB(0x0069b945);
    /* 0069b945: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0069b949: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0069b94d: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069b94f: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069b951: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0069b955: mov eax, esi */ r_eax = r_esi;
    /* 0069b957: imul eax, esi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_esi; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0069b95a: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0069b95e: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 0069b962: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069b964: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 0069b968: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 0069b96c: mov edx, ecx */ r_edx = r_ecx;
    /* 0069b96e: imul edx, ecx */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_ecx; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0069b971: imul ecx, esi */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_esi; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0069b974: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069b976: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 0069b97a: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069b97c: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0069b980: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 0069b984: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0069b985: jmp 0x69b9cf */ goto L_0069b9cf;
L_0069b987:; BB(0x0069b987);
    /* 0069b987: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0069b98b: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0069b98f: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069b991: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069b993: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0069b997: mov eax, esi */ r_eax = r_esi;
    /* 0069b999: imul eax, esi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_esi; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0069b99c: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 0069b9a0: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 0069b9a4: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069b9a6: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 0069b9aa: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 0069b9ae: mov edx, ecx */ r_edx = r_ecx;
    /* 0069b9b0: imul edx, ecx */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_ecx; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0069b9b3: imul ecx, esi */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_esi; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0069b9b6: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069b9b8: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 0069b9bc: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 0069b9c0: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 0069b9c4: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069b9c6: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069b9c7: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 0069b9cb: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
L_0069b9cf:; BB(0x0069b9cf);
    /* 0069b9cf: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 0069b9d3: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0069b9d4: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0069b9d7: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069b9d9: mov dword ptr [esp + 0x50], ecx */ W32((u32)(r_esp+0x50u), r_ecx);
    /* 0069b9dd: jle 0x69b90e */ if ((fZ||fS!=fO)) goto L_0069b90e;
L_0069b9e3:; BB(0x0069b9e3);
    /* 0069b9e3: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 0069b9e7: lea ecx, [ebp + 1] */ r_ecx = (u32)(r_ebp+0x1u);
    /* 0069b9ea: add eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069b9ec: mov dword ptr [esp + 0x40], ecx */ W32((u32)(r_esp+0x40u), r_ecx);
    /* 0069b9f0: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 0069b9f4: mov eax, dword ptr [esp + 0x58] */ r_eax = R32((u32)(r_esp+0x58u));
    /* 0069b9f8: fild dword ptr [esp + 0x48] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x48u)));
    /* 0069b9fc: fmul dword ptr [eax + 0x454] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x454u));
    /* 0069ba02: fidiv dword ptr [esp + 0x40] */ ST(0) = ST(0) / (long double)(i32)R32((u32)(r_esp+0x40u));
    /* 0069ba06: call 0x687450 */ r_esp -= 4; W32(r_esp, 0x69ba0bu); f_00687450();
    /* 0069ba0b: lea ecx, [eax + 1] */ r_ecx = (u32)(r_eax+0x1u);
    /* 0069ba0e: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 0069ba12: mov edx, ecx */ r_edx = r_ecx;
    /* 0069ba14: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 0069ba18: imul edx, dword ptr [esp + 0x10] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_esp+0x10u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0069ba1d: imul eax, ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0069ba20: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069ba22: mov edi, dword ptr [esp + 0x24] */ r_edi = R32((u32)(r_esp+0x24u));
    /* 0069ba26: mov dword ptr [ebx + 8], edx */ W32((u32)(r_ebx+0x8u), r_edx);
    /* 0069ba29: mov edx, ecx */ r_edx = r_ecx;
    /* 0069ba2b: imul edx, dword ptr [esp + 0x18] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_esp+0x18u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0069ba30: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069ba32: mov esi, dword ptr [esp + 0x2c] */ r_esi = R32((u32)(r_esp+0x2cu));
    /* 0069ba36: mov dword ptr [ebx + 0xc], edx */ W32((u32)(r_ebx+0xcu), r_edx);
    /* 0069ba39: mov edx, ecx */ r_edx = r_ecx;
    /* 0069ba3b: imul edx, dword ptr [esp + 0x20] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_esp+0x20u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0069ba40: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069ba42: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069ba43: mov dword ptr [ebx + 0x10], edx */ W32((u32)(r_ebx+0x10u), r_edx);
    /* 0069ba46: mov edx, ecx */ r_edx = r_ecx;
    /* 0069ba48: imul edx, dword ptr [esp + 0x24] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_esp+0x24u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0069ba4d: imul ecx, dword ptr [esp + 0x2c] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_esp+0x2cu)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0069ba52: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069ba54: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069ba55: mov dword ptr [ebx + 0x14], edx */ W32((u32)(r_ebx+0x14u), r_edx);
    /* 0069ba58: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 0069ba5c: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0069ba5e: mov dword ptr [ebx + 0x18], ecx */ W32((u32)(r_ebx+0x18u), r_ecx);
    /* 0069ba61: mov ecx, dword ptr [esp + 0x40] */ r_ecx = R32((u32)(r_esp+0x40u));
    /* 0069ba65: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069ba67: mov dword ptr [ebx + 0x1c], eax */ W32((u32)(r_ebx+0x1cu), r_eax);
    /* 0069ba6a: mov eax, ebp */ r_eax = r_ebp;
    /* 0069ba6c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069ba6d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069ba6e: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069ba71: ret  */ FN_RET(0x0069b880); r_esp += 4; return;
}

void f_0069ba80(void) /* sub_69BA80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0069ba80);
    /* 0069ba80: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0069ba84: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 0069ba86: fmul dword ptr [0x6e57e4] */ ST(0) = ST(0) * R_F32((u32)(0x6e57e4u));
    /* 0069ba8c: fadd dword ptr [0x6e57e0] */ ST(0) = ST(0) + R_F32((u32)(0x6e57e0u));
    /* 0069ba92: call 0x687450 */ r_esp -= 4; W32(r_esp, 0x69ba97u); f_00687450();
    /* 0069ba97: cmp eax, 0x3ff */ {  u32 a = r_eax; u32 b = 0x3ffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069ba9c: jle 0x69baa4 */ if ((fZ||fS!=fO)) goto L_0069baa4;
L_0069ba9e:; BB(0x0069ba9e);
    /* 0069ba9e: mov eax, 0x3ff */ r_eax = 0x3ffu;
    /* 0069baa3: ret  */ FN_RET(0x0069ba80); r_esp += 4; return;
L_0069baa4:; BB(0x0069baa4);
    /* 0069baa4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0069baa6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0069baa8: setl cl */ r_ecx = (r_ecx & 0xffffff00u) | ((((fS!=fO)) ? 1 : 0) & 0xffu);
    /* 0069baab: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0069baac: and eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069baae: ret  */ FN_RET(0x0069ba80); r_esp += 4; return;
}

void f_0069bab0(void) /* sub_69BAB0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0069bab0);
    /* 0069bab0: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069bab3: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 0069bab7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069bab8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069bab9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069baba: mov ebp, dword ptr [eax] */ r_ebp = R32((u32)(r_eax));
    /* 0069babc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069babd: mov dword ptr [esp + 0x34], ebp */ W32((u32)(r_esp+0x34u), r_ebp);
    /* 0069bac1: mov ebp, dword ptr [esp + 0x40] */ r_ebp = R32((u32)(r_esp+0x40u));
    /* 0069bac5: shl ebp, 5 */ { u32 c = (5u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebp = r;  } }
    /* 0069bac8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0069baca: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0069bacc: mov eax, dword ptr [eax + ebp - 0x1c] */ r_eax = R32((u32)(r_eax+r_ebp+0xffffffe4u));
    /* 0069bad0: mov ebp, dword ptr [esp + 0x40] */ r_ebp = R32((u32)(r_esp+0x40u));
    /* 0069bad4: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0069bad6: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0069bad8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0069bada: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0069bade: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0069bae0: mov dword ptr [esp + 0x14], esi */ W32((u32)(r_esp+0x14u), r_esi);
    /* 0069bae4: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 0069bae8: mov dword ptr [esp + 0x20], ebx */ W32((u32)(r_esp+0x20u), r_ebx);
    /* 0069baec: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 0069baf0: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0069baf4: jle 0x69bb29 */ if ((fZ||fS!=fO)) goto L_0069bb29;
L_0069baf6:; BB(0x0069baf6);
    /* 0069baf6: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 0069bafa: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_0069bafd:; BB(0x0069bafd);
    /* 0069bafd: add edx, dword ptr [eax - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069bb00: add esi, dword ptr [eax] */ {  u32 a = r_esi; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0069bb02: add edi, dword ptr [eax + 4] */ {  u32 a = r_edi; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0069bb05: add ebx, dword ptr [eax + 0xc] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0xcu)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0069bb08: add ecx, dword ptr [eax + 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x10u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0069bb0b: add eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069bb0e: dec ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); }
    /* 0069bb0f: jne 0x69bafd */ if (!fZ) goto L_0069bafd;
L_0069bb11:; BB(0x0069bb11);
    /* 0069bb11: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 0069bb15: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 0069bb19: mov dword ptr [esp + 0x20], ebx */ W32((u32)(r_esp+0x20u), r_ebx);
    /* 0069bb1d: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 0069bb21: mov dword ptr [esp + 0x14], esi */ W32((u32)(r_esp+0x14u), r_esi);
    /* 0069bb25: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
L_0069bb29:; BB(0x0069bb29);
    /* 0069bb29: mov ebp, dword ptr [esp + 0x44] */ r_ebp = R32((u32)(r_esp+0x44u));
    /* 0069bb2d: mov ebp, dword ptr [ebp] */ r_ebp = R32((u32)(r_ebp));
    /* 0069bb30: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0069bb32: mov dword ptr [esp + 0x40], ebp */ W32((u32)(r_esp+0x40u), r_ebp);
    /* 0069bb36: jl 0x69bb69 */ if ((fS!=fO)) goto L_0069bb69;
L_0069bb38:; BB(0x0069bb38);
    /* 0069bb38: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 0069bb3c: add esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0069bb3e: mov ebp, eax */ r_ebp = r_eax;
    /* 0069bb40: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069bb42: imul ebp, eax */ { i64 t = (i64)(i32)r_ebp * (i64)(i32)r_eax; r_ebp = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0069bb45: add edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0069bb47: mov ebp, dword ptr [esp + 0x40] */ r_ebp = R32((u32)(r_esp+0x40u));
    /* 0069bb4b: imul ebp, eax */ { i64 t = (i64)(i32)r_ebp * (i64)(i32)r_eax; r_ebp = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0069bb4e: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 0069bb52: add ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0069bb54: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0069bb55: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0069bb59: mov dword ptr [esp + 0x14], esi */ W32((u32)(r_esp+0x14u), r_esi);
    /* 0069bb5d: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 0069bb61: mov dword ptr [esp + 0x20], ebx */ W32((u32)(r_esp+0x20u), r_ebx);
    /* 0069bb65: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
L_0069bb69:; BB(0x0069bb69);
    /* 0069bb69: mov ebp, dword ptr [esp + 0x48] */ r_ebp = R32((u32)(r_esp+0x48u));
    /* 0069bb6d: mov ebp, dword ptr [ebp] */ r_ebp = R32((u32)(r_ebp));
    /* 0069bb70: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0069bb72: jl 0x69bb99 */ if ((fS!=fO)) goto L_0069bb99;
L_0069bb74:; BB(0x0069bb74);
    /* 0069bb74: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069bb76: add esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0069bb78: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0069bb7c: mov edx, eax */ r_edx = r_eax;
    /* 0069bb7e: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0069bb81: imul ebp, eax */ { i64 t = (i64)(i32)r_ebp * (i64)(i32)r_eax; r_ebp = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0069bb84: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0069bb86: add ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0069bb88: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0069bb89: mov dword ptr [esp + 0x14], esi */ W32((u32)(r_esp+0x14u), r_esi);
    /* 0069bb8d: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 0069bb91: mov dword ptr [esp + 0x20], ebx */ W32((u32)(r_esp+0x20u), r_ebx);
    /* 0069bb95: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
L_0069bb99:; BB(0x0069bb99);
    /* 0069bb99: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069bb9b: je 0x69bc80 */ if (fZ) goto L_0069bc80;
L_0069bba1:; BB(0x0069bba1);
    /* 0069bba1: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0069bba5: fild dword ptr [esp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x14u)));
    /* 0069bba9: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 0069bbad: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069bbb0: fstp qword ptr [esp + 0x20] */ W_F64((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 0069bbb4: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0069bbb8: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 0069bbbc: fld qword ptr [esp + 0x20] */ FPUSH(R_F64((u32)(r_esp+0x20u)));
    /* 0069bbc0: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0069bbc2: fld st(4) */ { long double v = ST(4); FPUSH(v); }
    /* 0069bbc4: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 0069bbc6: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0069bbc8: fdivr qword ptr [0x6b2c48] */ ST(0) = R_F64((u32)(0x6b2c48u)) / ST(0);
    /* 0069bbce: fld qword ptr [esp + 0x20] */ FPUSH(R_F64((u32)(r_esp+0x20u)));
    /* 0069bbd2: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 0069bbd4: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 0069bbd6: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 0069bbd8: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0069bbda: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0069bbdc: fstp qword ptr [esp + 0x28] */ W_F64((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 0069bbe0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0069bbe2: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0069bbe4: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0069bbe6: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 0069bbe8: fsubp st(3) */ ST(3) = ST(3) - ST(0); FPOP();
    /* 0069bbea: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0069bbec: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0069bbee: fstp qword ptr [esp + 0x30] */ W_F64((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0069bbf2: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0069bbf4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0069bbf6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0069bbf8: fild dword ptr [esp + 0x3c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x3cu)));
    /* 0069bbfc: fmul qword ptr [esp + 0x30] */ ST(0) = ST(0) * R_F64((u32)(r_esp+0x30u));
    /* 0069bc00: fadd qword ptr [esp + 0x28] */ ST(0) = ST(0) + R_F64((u32)(r_esp+0x28u));
    /* 0069bc04: fadd qword ptr [0x6b2c38] */ ST(0) = ST(0) + R_F64((u32)(0x6b2c38u));
    /* 0069bc0a: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0069bc0d: call 0x686fb4 */ r_esp -= 4; W32(r_esp, 0x69bc12u); f_00686fb4();
    /* 0069bc12: call 0x687450 */ r_esp -= 4; W32(r_esp, 0x69bc17u); f_00687450();
    /* 0069bc17: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 0069bc1b: mov esi, dword ptr [esp + 0x4c] */ r_esi = R32((u32)(r_esp+0x4cu));
    /* 0069bc1f: fmul qword ptr [esp + 0x30] */ ST(0) = ST(0) * R_F64((u32)(r_esp+0x30u));
    /* 0069bc23: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 0069bc25: fadd qword ptr [esp + 0x28] */ ST(0) = ST(0) + R_F64((u32)(r_esp+0x28u));
    /* 0069bc29: fadd qword ptr [0x6b2c38] */ ST(0) = ST(0) + R_F64((u32)(0x6b2c38u));
    /* 0069bc2f: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0069bc32: call 0x686fb4 */ r_esp -= 4; W32(r_esp, 0x69bc37u); f_00686fb4();
    /* 0069bc37: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069bc3a: call 0x687450 */ r_esp -= 4; W32(r_esp, 0x69bc3fu); f_00687450();
    /* 0069bc3f: mov ecx, dword ptr [esp + 0x48] */ r_ecx = R32((u32)(r_esp+0x48u));
    /* 0069bc43: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 0069bc45: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0069bc47: cmp eax, 0x3ff */ {  u32 a = r_eax; u32 b = 0x3ffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069bc4c: jle 0x69bc54 */ if ((fZ||fS!=fO)) goto L_0069bc54;
L_0069bc4e:; BB(0x0069bc4e);
    /* 0069bc4e: mov dword ptr [esi], 0x3ff */ W32((u32)(r_esi), 0x3ffu);
L_0069bc54:; BB(0x0069bc54);
    /* 0069bc54: cmp dword ptr [ecx], 0x3ff */ {  u32 a = R32((u32)(r_ecx)); u32 b = 0x3ffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069bc5a: jle 0x69bc62 */ if ((fZ||fS!=fO)) goto L_0069bc62;
L_0069bc5c:; BB(0x0069bc5c);
    /* 0069bc5c: mov dword ptr [ecx], 0x3ff */ W32((u32)(r_ecx), 0x3ffu);
L_0069bc62:; BB(0x0069bc62);
    /* 0069bc62: cmp dword ptr [esi], 0 */ {  u32 a = R32((u32)(r_esi)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069bc65: jge 0x69bc6d */ if ((fS==fO)) goto L_0069bc6d;
L_0069bc67:; BB(0x0069bc67);
    /* 0069bc67: mov dword ptr [esi], 0 */ W32((u32)(r_esi), 0x0u);
L_0069bc6d:; BB(0x0069bc6d);
    /* 0069bc6d: cmp dword ptr [ecx], 0 */ {  u32 a = R32((u32)(r_ecx)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069bc70: jge 0x69bc94 */ if ((fS==fO)) goto L_0069bc94;
L_0069bc72:; BB(0x0069bc72);
    /* 0069bc72: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069bc73: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069bc74: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069bc75: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 0069bc7b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069bc7c: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069bc7f: ret  */ FN_RET(0x0069bab0); r_esp += 4; return;
L_0069bc80:; BB(0x0069bc80);
    /* 0069bc80: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 0069bc84: mov ecx, dword ptr [esp + 0x48] */ r_ecx = R32((u32)(r_esp+0x48u));
    /* 0069bc88: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 0069bc8e: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
L_0069bc94:; BB(0x0069bc94);
    /* 0069bc94: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069bc95: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069bc96: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069bc97: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069bc98: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069bc9b: ret  */ FN_RET(0x0069bab0); r_esp += 4; return;
}

void f_0069bca0(void) /* sub_69BCA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0069bca0);
    /* 0069bca0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069bca3: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 0069bca7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069bca8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069bca9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069bcaa: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
    /* 0069bcae: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
    /* 0069bcb2: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0069bcb4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069bcb5: mov eax, ecx */ r_eax = r_ecx;
    /* 0069bcb7: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 0069bcbb: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0069bcbc: mov ebx, eax */ r_ebx = r_eax;
    /* 0069bcbe: mov eax, ecx */ r_eax = r_ecx;
    /* 0069bcc0: xor ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0069bcc2: sub edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0069bcc4: sub ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0069bcc6: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 0069bcca: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0069bccb: idiv edi */ { i32 d = (i32)r_edi; if (!d) UNSUP(0x0069bccb, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0069bccb, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0069bccd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0069bccf: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0069bcd3: jge 0x69bcd8 */ if ((fS==fO)) goto L_0069bcd8;
L_0069bcd5:; BB(0x0069bcd5);
    /* 0069bcd5: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0069bcd6: jmp 0x69bcd9 */ goto L_0069bcd9;
L_0069bcd8:; BB(0x0069bcd8);
    /* 0069bcd8: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_0069bcd9:; BB(0x0069bcd9);
    /* 0069bcd9: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0069bcdd: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 0069bce1: mov dword ptr [esp + 0x38], esi */ W32((u32)(r_esp+0x38u), r_esi);
    /* 0069bce5: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 0069bced: lea edi, [eax + ebp*4] */ r_edi = (u32)(r_eax+r_ebp*4);
    /* 0069bcf0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069bcf1: call 0x69ba80 */ r_esp -= 4; W32(r_esp, 0x69bcf6u); f_0069ba80();
    /* 0069bcf6: mov ecx, eax */ r_ecx = r_eax;
    /* 0069bcf8: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0069bcfc: imul eax, dword ptr [esp + 0x1c] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_esp+0x1cu)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0069bd01: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0069bd02: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069bd04: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 0069bd08: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0069bd0a: mov edx, dword ptr [esp + 0x44] */ r_edx = R32((u32)(r_esp+0x44u));
    /* 0069bd0e: sub esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0069bd10: mov ecx, dword ptr [esp + 0x48] */ r_ecx = R32((u32)(r_esp+0x48u));
    /* 0069bd14: fld dword ptr [edx + ebp*4] */ FPUSH(R_F32((u32)(r_edx+r_ebp*4)));
    /* 0069bd17: fadd dword ptr [ecx + 0x458] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x458u));
    /* 0069bd1d: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0069bd1f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069bd22: mov dword ptr [esp + 0x24], ebx */ W32((u32)(r_esp+0x24u), r_ebx);
    /* 0069bd26: mov ebx, esi */ r_ebx = r_esi;
    /* 0069bd28: fcomp dword ptr [edi] */ fx_compare(ST(0), R_F32((u32)(r_edi))); FPOP();
    /* 0069bd2a: imul ebx, esi */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)r_esi; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0069bd2d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0069bd2f: and eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0069bd34: mov dword ptr [esp + 0x2c], 1 */ W32((u32)(r_esp+0x2cu), 0x1u);
    /* 0069bd3c: jne 0x69bd88 */ if (!fZ) goto L_0069bd88;
L_0069bd3e:; BB(0x0069bd3e);
    /* 0069bd3e: fild dword ptr [esp + 0x34] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x34u)));
    /* 0069bd42: fild dword ptr [esp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x14u)));
    /* 0069bd46: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 0069bd48: fadd dword ptr [ecx + 0x448] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x448u));
    /* 0069bd4e: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 0069bd50: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0069bd52: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 0069bd55: jp 0x69bd68 */ if (fP) goto L_0069bd68;
L_0069bd57:; BB(0x0069bd57);
    /* 0069bd57: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069bd58: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069bd59: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0069bd5b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069bd5c: mov eax, 1 */ r_eax = 0x1u;
    /* 0069bd61: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0069bd63: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069bd64: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069bd67: ret  */ FN_RET(0x0069bca0); r_esp += 4; return;
L_0069bd68:; BB(0x0069bd68);
    /* 0069bd68: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0069bd6a: fsub dword ptr [ecx + 0x44c] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0x44cu));
    /* 0069bd70: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0069bd72: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0069bd74: and eax, 0x4100 */ {  u32 a = r_eax; u32 b = 0x4100u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0069bd79: jne 0x69bd88 */ if (!fZ) goto L_0069bd88;
L_0069bd7b:; BB(0x0069bd7b);
    /* 0069bd7b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069bd7c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069bd7d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069bd7e: mov eax, 1 */ r_eax = 0x1u;
    /* 0069bd83: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069bd84: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069bd87: ret  */ FN_RET(0x0069bca0); r_esp += 4; return;
L_0069bd88:; BB(0x0069bd88);
    /* 0069bd88: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 0069bd8c: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0069bd8d: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069bd8f: jge 0x69be5b */ if ((fS==fO)) goto L_0069be5b;
L_0069bd95:; BB(0x0069bd95);
    /* 0069bd95: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 0069bd99: mov edi, edx */ r_edi = r_edx;
    /* 0069bd9b: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0069bd9d: lea esi, [eax + ebp*4] */ r_esi = (u32)(r_eax+r_ebp*4);
L_0069bda0:; BB(0x0069bda0);
    /* 0069bda0: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0069bda4: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 0069bda8: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069bdaa: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 0069bdae: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069bdb0: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0069bdb4: jl 0x69bdc8 */ if ((fS!=fO)) goto L_0069bdc8;
L_0069bdb6:; BB(0x0069bdb6);
    /* 0069bdb6: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0069bdb8: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 0069bdbc: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0069bdc0: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 0069bdc4: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069bdc6: jmp 0x69bdd2 */ goto L_0069bdd2;
L_0069bdc8:; BB(0x0069bdc8);
    /* 0069bdc8: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 0069bdcc: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 0069bdd0: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_0069bdd2:; BB(0x0069bdd2);
    /* 0069bdd2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069bdd3: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 0069bdd7: call 0x69ba80 */ r_esp -= 4; W32(r_esp, 0x69bddcu); f_0069ba80();
    /* 0069bddc: mov ecx, eax */ r_ecx = r_eax;
    /* 0069bdde: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 0069bde2: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0069bde4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069bde7: mov edx, eax */ r_edx = r_eax;
    /* 0069bde9: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 0069bded: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0069bdf0: fld dword ptr [edi + esi] */ FPUSH(R_F32((u32)(r_edi+r_esi)));
    /* 0069bdf3: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0069bdf5: mov edx, dword ptr [esp + 0x44] */ r_edx = R32((u32)(r_esp+0x44u));
    /* 0069bdf9: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 0069bdfd: fadd dword ptr [edx + 0x458] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x458u));
    /* 0069be03: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069be04: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 0069be08: fcomp dword ptr [esi] */ fx_compare(ST(0), R_F32((u32)(r_esi))); FPOP();
    /* 0069be0a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0069be0c: and eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0069be11: jne 0x69be47 */ if (!fZ) goto L_0069be47;
L_0069be13:; BB(0x0069be13);
    /* 0069be13: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069be15: je 0x69be47 */ if (fZ) goto L_0069be47;
L_0069be17:; BB(0x0069be17);
    /* 0069be17: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 0069be1b: fild dword ptr [esp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x14u)));
    /* 0069be1f: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 0069be21: fadd dword ptr [edx + 0x448] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x448u));
    /* 0069be27: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 0069be29: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0069be2b: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 0069be2e: jnp 0x69bd57 */ if (!fP) goto L_0069bd57;
L_0069be34:; BB(0x0069be34);
    /* 0069be34: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0069be36: fsub dword ptr [edx + 0x44c] */ ST(0) = ST(0) - R_F32((u32)(r_edx+0x44cu));
    /* 0069be3c: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0069be3e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0069be40: and eax, 0x4100 */ {  u32 a = r_eax; u32 b = 0x4100u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0069be45: je 0x69bebf */ if (fZ) goto L_0069bebf;
L_0069be47:; BB(0x0069be47);
    /* 0069be47: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 0069be4b: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0069be4c: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0069be4f: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069be51: jl 0x69bda0 */ if ((fS!=fO)) goto L_0069bda0;
L_0069be57:; BB(0x0069be57);
    /* 0069be57: mov ecx, dword ptr [esp + 0x44] */ r_ecx = R32((u32)(r_esp+0x44u));
L_0069be5b:; BB(0x0069be5b);
    /* 0069be5b: fld dword ptr [ecx + 0x448] */ FPUSH(R_F32((u32)(r_ecx+0x448u)));
    /* 0069be61: fild dword ptr [esp + 0x2c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x2cu)));
    /* 0069be65: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0069be69: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0069be6b: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0069be6d: fdiv dword ptr [esp + 0x30] */ ST(0) = ST(0) / R_F32((u32)(r_esp+0x30u));
    /* 0069be71: fcomp dword ptr [ecx + 0x450] */ fx_compare(ST(0), R_F32((u32)(r_ecx+0x450u))); FPOP();
    /* 0069be77: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0069be79: and eax, 0x4100 */ {  u32 a = r_eax; u32 b = 0x4100u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0069be7e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0069be80: je 0x69becc */ if (fZ) goto L_0069becc;
L_0069be82:; BB(0x0069be82);
    /* 0069be82: fld dword ptr [ecx + 0x44c] */ FPUSH(R_F32((u32)(r_ecx+0x44cu)));
    /* 0069be88: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0069be8a: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0069be8c: fdiv dword ptr [esp + 0x30] */ ST(0) = ST(0) / R_F32((u32)(r_esp+0x30u));
    /* 0069be90: fcomp dword ptr [ecx + 0x450] */ fx_compare(ST(0), R_F32((u32)(r_ecx+0x450u))); FPOP();
    /* 0069be96: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0069be98: and eax, 0x4100 */ {  u32 a = r_eax; u32 b = 0x4100u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0069be9d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0069be9f: je 0x69becc */ if (fZ) goto L_0069becc;
L_0069bea1:; BB(0x0069bea1);
    /* 0069bea1: mov eax, ebx */ r_eax = r_ebx;
    /* 0069bea3: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0069bea4: idiv dword ptr [esp + 0x2c] */ { i32 d = (i32)R32((u32)(r_esp+0x2cu)); if (!d) UNSUP(0x0069bea4, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0069bea4, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0069bea8: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0069beac: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 0069beb0: fcomp dword ptr [ecx + 0x450] */ fx_compare(ST(0), R_F32((u32)(r_ecx+0x450u))); FPOP();
    /* 0069beb6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0069beb8: and eax, 0x4100 */ {  u32 a = r_eax; u32 b = 0x4100u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0069bebd: jne 0x69becc */ if (!fZ) goto L_0069becc;
L_0069bebf:; BB(0x0069bebf);
    /* 0069bebf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069bec0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069bec1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069bec2: mov eax, 1 */ r_eax = 0x1u;
    /* 0069bec7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069bec8: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069becb: ret  */ FN_RET(0x0069bca0); r_esp += 4; return;
L_0069becc:; BB(0x0069becc);
    /* 0069becc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069becd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069bece: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069becf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069bed1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069bed2: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069bed5: ret  */ FN_RET(0x0069bca0); r_esp += 4; return;
}

void f_0069bee0(void) /* sub_69BEE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0069bee0);
    /* 0069bee0: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0069bee4: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0069bee8: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0069beec: mov eax, dword ptr [eax + ecx*4] */ r_eax = R32((u32)(r_eax+r_ecx*4));
    /* 0069beef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0069bef1: jge 0x69bef7 */ if ((fS==fO)) goto L_0069bef7;
L_0069bef3:; BB(0x0069bef3);
    /* 0069bef3: mov eax, dword ptr [edx + ecx*4] */ r_eax = R32((u32)(r_edx+r_ecx*4));
    /* 0069bef6: ret  */ FN_RET(0x0069bee0); r_esp += 4; return;
L_0069bef7:; BB(0x0069bef7);
    /* 0069bef7: mov ecx, dword ptr [edx + ecx*4] */ r_ecx = R32((u32)(r_edx+r_ecx*4));
    /* 0069befa: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0069befc: jl 0x69bf02 */ if ((fS!=fO)) goto L_0069bf02;
L_0069befe:; BB(0x0069befe);
    /* 0069befe: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069bf00: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
L_0069bf02:; BB(0x0069bf02);
    /* 0069bf02: ret  */ FN_RET(0x0069bee0); r_esp += 4; return;
}

void f_0069bf10(void) /* sub_69BF10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0069bf10);
    /* 0069bf10: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0069bf14: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069bf15: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069bf16: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069bf17: mov ebp, dword ptr [eax + 0x504] */ r_ebp = R32((u32)(r_eax+0x504u));
    /* 0069bf1d: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 0069bf21: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069bf23: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069bf24: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069bf26: je 0x69bfae */ if (fZ) goto L_0069bfae;
L_0069bf2c:; BB(0x0069bf2c);
    /* 0069bf2c: mov ebx, dword ptr [esp + 0x20] */ r_ebx = R32((u32)(r_esp+0x20u));
    /* 0069bf30: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069bf32: je 0x69bfae */ if (fZ) goto L_0069bfae;
L_0069bf34:; BB(0x0069bf34);
    /* 0069bf34: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0069bf38: lea ecx, [ebp*4] */ r_ecx = (u32)(r_ebp*4);
    /* 0069bf3f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0069bf40: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069bf41: call 0x690e40 */ r_esp -= 4; W32(r_esp, 0x69bf46u); f_00690e40();
    /* 0069bf46: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069bf49: mov edi, eax */ r_edi = r_eax;
    /* 0069bf4b: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0069bf4d: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 0069bf51: jle 0x69bfac */ if ((fZ||fS!=fO)) goto L_0069bfac;
L_0069bf53:; BB(0x0069bf53);
    /* 0069bf53: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 0069bf57: mov eax, 0x10000 */ r_eax = 0x10000u;
    /* 0069bf5c: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0069bf5e: sub esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0069bf60: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069bf62: sub edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
L_0069bf64:; BB(0x0069bf64);
    /* 0069bf64: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0069bf66: mov ebx, dword ptr [esi + ecx] */ r_ebx = R32((u32)(r_esi+r_ecx));
    /* 0069bf69: and edx, 0x7fff */ {  u32 a = r_edx; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0069bf6f: and ebx, 0x7fff */ {  u32 a = r_ebx; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0069bf75: imul edx, dword ptr [esp + 0x24] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_esp+0x24u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0069bf7a: imul ebx, eax */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)r_eax; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0069bf7d: lea edx, [edx + ebx + 0x8000] */ r_edx = (u32)(r_edx+r_ebx+0x8000u);
    /* 0069bf84: sar edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0069bf87: mov dword ptr [edi + ecx], edx */ W32((u32)(r_edi+r_ecx), r_edx);
    /* 0069bf8a: mov ebx, dword ptr [esi + ecx] */ r_ebx = R32((u32)(r_esi+r_ecx));
    /* 0069bf8d: test bh, bh */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)(r_ebx>>8); u32 r = (a & b) & 0xffu;  fS = ((r >> 7) & 1); }
    /* 0069bf8f: jns 0x69bf9d */ if (!fS) goto L_0069bf9d;
L_0069bf91:; BB(0x0069bf91);
    /* 0069bf91: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 0069bf93: test bh, bh */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)(r_ebx>>8); u32 r = (a & b) & 0xffu;  fS = ((r >> 7) & 1); }
    /* 0069bf95: jns 0x69bf9d */ if (!fS) goto L_0069bf9d;
L_0069bf97:; BB(0x0069bf97);
    /* 0069bf97: or dh, 0x80 */ {  u32 a = (u8)(r_edx>>8); u32 b = 0x80u; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 0069bf9a: mov dword ptr [edi + ecx], edx */ W32((u32)(r_edi+r_ecx), r_edx);
L_0069bf9d:; BB(0x0069bf9d);
    /* 0069bf9d: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0069bfa0: dec ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); }
    /* 0069bfa1: jne 0x69bf64 */ if (!fZ) goto L_0069bf64;
L_0069bfa3:; BB(0x0069bfa3);
    /* 0069bfa3: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0069bfa7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069bfa8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069bfa9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069bfaa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069bfab: ret  */ FN_RET(0x0069bf10); r_esp += 4; return;
L_0069bfac:; BB(0x0069bfac);
    /* 0069bfac: mov eax, edi */ r_eax = r_edi;
L_0069bfae:; BB(0x0069bfae);
    /* 0069bfae: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069bfaf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069bfb0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069bfb1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069bfb2: ret  */ FN_RET(0x0069bf10); r_esp += 4; return;
}

void f_0069bfc0(void) /* sub_69BFC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0069bfc0);
    /* 0069bfc0: sub esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069bfc6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069bfc7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069bfc8: mov esi, dword ptr [esp + 0x178] */ r_esi = R32((u32)(r_esp+0x178u));
    /* 0069bfcf: mov eax, dword ptr [esp + 0x17c] */ r_eax = R32((u32)(r_esp+0x17cu));
    /* 0069bfd6: mov ebx, dword ptr [esp + 0x180] */ r_ebx = R32((u32)(r_esp+0x180u));
    /* 0069bfdd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069bfde: mov ecx, dword ptr [esi + 0x40] */ r_ecx = R32((u32)(r_esi+0x40u));
    /* 0069bfe1: mov edi, dword ptr [eax + 0x510] */ r_edi = R32((u32)(r_eax+0x510u));
    /* 0069bfe7: mov edx, dword ptr [eax + 0x504] */ r_edx = R32((u32)(r_eax+0x504u));
    /* 0069bfed: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 0069bff1: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0069bff4: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 0069bff8: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069bffa: mov ecx, dword ptr [ecx + 0x1c] */ r_ecx = R32((u32)(r_ecx+0x1cu));
    /* 0069bffd: mov dword ptr [esp + 0x30], ecx */ W32((u32)(r_esp+0x30u), r_ecx);
    /* 0069c001: mov ecx, dword ptr [ecx + 0xb20] */ r_ecx = R32((u32)(r_ecx+0xb20u));
    /* 0069c007: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 0069c00b: je 0x69c501 */ if (fZ) goto L_0069c501;
L_0069c011:; BB(0x0069c011);
    /* 0069c011: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069c012: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0069c014: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0069c016: jle 0x69c079 */ if ((fZ||fS!=fO)) goto L_0069c079;
L_0069c018:; BB(0x0069c018);
    /* 0069c018: mov esi, dword ptr [ebx + ebp*4] */ r_esi = R32((u32)(r_ebx+r_ebp*4));
    /* 0069c01b: mov eax, dword ptr [edi + 0x340] */ r_eax = R32((u32)(r_edi+0x340u));
    /* 0069c021: mov ecx, esi */ r_ecx = r_esi;
    /* 0069c023: and ecx, 0x7fff */ {  u32 a = r_ecx; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0069c029: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0069c02a: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0069c02d: ja 0x69c05b */ if ((!fC&&!fZ)) goto L_0069c05b;
L_0069c02f:; BB(0x0069c02f);
    /* 0069c02f: jmp dword ptr [eax*4 + 0x69c54c] */ { u32 t = R32((u32)(r_eax*4+0x69c54cu)); switch (t) { case 0x69c036u: goto L_0069c036; case 0x69c03bu: goto L_0069c03b; case 0x69c040u: goto L_0069c040; case 0x69c058u: goto L_0069c058; default: UNSUP(0x0069c02f, "jump table entry is not a known target"); } }
L_0069c036:; BB(0x0069c036);
    /* 0069c036: sar ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0069c039: jmp 0x69c05b */ goto L_0069c05b;
L_0069c03b:; BB(0x0069c03b);
    /* 0069c03b: sar ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0069c03e: jmp 0x69c05b */ goto L_0069c05b;
L_0069c040:; BB(0x0069c040);
    /* 0069c040: mov eax, 0x2aaaaaab */ r_eax = 0x2aaaaaabu;
    /* 0069c045: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0069c047: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0069c049: mov eax, edx */ r_eax = r_edx;
    /* 0069c04b: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0069c04e: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069c050: mov ecx, edx */ r_ecx = r_edx;
    /* 0069c052: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 0069c056: jmp 0x69c05b */ goto L_0069c05b;
L_0069c058:; BB(0x0069c058);
    /* 0069c058: sar ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
L_0069c05b:; BB(0x0069c05b);
    /* 0069c05b: and esi, 0x8000 */ {  u32 a = r_esi; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0069c061: or esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 0069c063: mov dword ptr [ebx + ebp*4], esi */ W32((u32)(r_ebx+r_ebp*4), r_esi);
    /* 0069c066: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0069c067: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069c069: jl 0x69c018 */ if ((fS!=fO)) goto L_0069c018;
L_0069c06b:; BB(0x0069c06b);
    /* 0069c06b: mov esi, dword ptr [esp + 0x180] */ r_esi = R32((u32)(r_esp+0x180u));
    /* 0069c072: mov eax, dword ptr [esp + 0x184] */ r_eax = R32((u32)(r_esp+0x184u));
L_0069c079:; BB(0x0069c079);
    /* 0069c079: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 0069c07b: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069c07e: mov dword ptr [esp + 0x78], ecx */ W32((u32)(r_esp+0x78u), r_ecx);
    /* 0069c082: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 0069c085: mov dword ptr [esp + 0x7c], ecx */ W32((u32)(r_esp+0x7cu), r_ecx);
    /* 0069c089: jle 0x69c1a9 */ if ((fZ||fS!=fO)) goto L_0069c1a9;
L_0069c08f:; BB(0x0069c08f);
    /* 0069c08f: lea ecx, [esp + 0x78] */ r_ecx = (u32)(r_esp+0x78u);
    /* 0069c093: add edi, 0x34c */ {  u32 a = r_edi; u32 b = 0x34cu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0069c099: add eax, 0x30c */ {  u32 a = r_eax; u32 b = 0x30cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069c09e: sub ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0069c0a0: add edx, -2 */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069c0a3: lea ebp, [ebx + 8] */ r_ebp = (u32)(r_ebx+0x8u);
    /* 0069c0a6: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 0069c0aa: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0069c0ae: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 0069c0b2: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 0069c0b6: jmp 0x69c0bc */ goto L_0069c0bc;
L_0069c0b8:; BB(0x0069c0b8);
    /* 0069c0b8: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
L_0069c0bc:; BB(0x0069c0bc);
    /* 0069c0bc: mov ebx, dword ptr [eax + 0xfc] */ r_ebx = R32((u32)(r_eax+0xfcu));
    /* 0069c0c2: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 0069c0c4: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0069c0c8: mov edx, dword ptr [esp + 0x188] */ r_edx = R32((u32)(r_esp+0x188u));
    /* 0069c0cf: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0069c0d1: mov eax, dword ptr [edx + esi*4] */ r_eax = R32((u32)(r_edx+r_esi*4));
    /* 0069c0d4: mov edi, dword ptr [edx + ebx*4] */ r_edi = R32((u32)(r_edx+r_ebx*4));
    /* 0069c0d7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0069c0d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069c0d9: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0069c0dd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069c0de: mov ecx, dword ptr [eax + esi*4 + 0x344] */ r_ecx = R32((u32)(r_eax+r_esi*4+0x344u));
    /* 0069c0e5: mov edx, dword ptr [eax + ebx*4 + 0x344] */ r_edx = R32((u32)(r_eax+r_ebx*4+0x344u));
    /* 0069c0ec: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0069c0ed: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069c0ee: call 0x69b830 */ r_esp -= 4; W32(r_esp, 0x69c0f3u); f_0069b830();
    /* 0069c0f3: mov ecx, dword ptr [ebp] */ r_ecx = R32((u32)(r_ebp));
    /* 0069c0f6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069c0f9: test ch, ch */ {  u32 a = (u8)(r_ecx>>8); u32 b = (u8)(r_ecx>>8); u32 r = (a & b) & 0xffu;  fS = ((r >> 7) & 1); }
    /* 0069c0fb: js 0x69c163 */ if (fS) goto L_0069c163;
L_0069c0fd:; BB(0x0069c0fd);
    /* 0069c0fd: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c0ff: je 0x69c163 */ if (fZ) goto L_0069c163;
L_0069c101:; BB(0x0069c101);
    /* 0069c101: mov edx, dword ptr [esp + 0x184] */ r_edx = R32((u32)(r_esp+0x184u));
    /* 0069c108: mov edx, dword ptr [edx + 0x50c] */ r_edx = R32((u32)(r_edx+0x50cu));
    /* 0069c10e: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0069c110: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069c112: jl 0x69c116 */ if ((fS!=fO)) goto L_0069c116;
L_0069c114:; BB(0x0069c114);
    /* 0069c114: mov edx, eax */ r_edx = r_eax;
L_0069c116:; BB(0x0069c116);
    /* 0069c116: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fS = ((r >> 31) & 1); }
    /* 0069c118: jns 0x69c134 */ if (!fS) goto L_0069c134;
L_0069c11a:; BB(0x0069c11a);
    /* 0069c11a: mov eax, edx */ r_eax = r_edx;
    /* 0069c11c: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0069c11e: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069c120: jge 0x69c129 */ if ((fS==fO)) goto L_0069c129;
L_0069c122:; BB(0x0069c122);
    /* 0069c122: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0069c124: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0069c125: mov ecx, edx */ r_ecx = r_edx;
    /* 0069c127: jmp 0x69c13e */ goto L_0069c13e;
L_0069c129:; BB(0x0069c129);
    /* 0069c129: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0069c12b: or edx, 0xffffffff */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0069c12e: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0069c130: mov ecx, edx */ r_ecx = r_edx;
    /* 0069c132: jmp 0x69c13e */ goto L_0069c13e;
L_0069c134:; BB(0x0069c134);
    /* 0069c134: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069c136: jl 0x69c13c */ if ((fS!=fO)) goto L_0069c13c;
L_0069c138:; BB(0x0069c138);
    /* 0069c138: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0069c13a: jmp 0x69c13e */ goto L_0069c13e;
L_0069c13c:; BB(0x0069c13c);
    /* 0069c13c: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_0069c13e:; BB(0x0069c13e);
    /* 0069c13e: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0069c142: and edi, 0x7fff */ {  u32 a = r_edi; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0069c148: mov dword ptr [eax + ebp], ecx */ W32((u32)(r_eax+r_ebp), r_ecx);
    /* 0069c14b: mov eax, dword ptr [esp + 0x188] */ r_eax = R32((u32)(r_esp+0x188u));
    /* 0069c152: mov dword ptr [eax + ebx*4], edi */ W32((u32)(r_eax+r_ebx*4), r_edi);
    /* 0069c155: mov ecx, dword ptr [eax + esi*4] */ r_ecx = R32((u32)(r_eax+r_esi*4));
    /* 0069c158: and ecx, 0x7fff */ {  u32 a = r_ecx; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0069c15e: mov dword ptr [eax + esi*4], ecx */ W32((u32)(r_eax+r_esi*4), r_ecx);
    /* 0069c161: jmp 0x69c174 */ goto L_0069c174;
L_0069c163:; BB(0x0069c163);
    /* 0069c163: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 0069c167: or ah, 0x80 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x80u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 0069c16a: mov dword ptr [ebp], eax */ W32((u32)(r_ebp), r_eax);
    /* 0069c16d: mov dword ptr [ecx + ebp], 0 */ W32((u32)(r_ecx+r_ebp), 0x0u);
L_0069c174:; BB(0x0069c174);
    /* 0069c174: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 0069c178: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0069c17c: mov eax, 4 */ r_eax = 0x4u;
    /* 0069c181: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0069c183: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069c185: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0069c187: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0069c18b: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0069c18c: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
    /* 0069c190: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0069c194: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0069c198: jne 0x69c0b8 */ if (!fZ) goto L_0069c0b8;
L_0069c19e:; BB(0x0069c19e);
    /* 0069c19e: mov edi, dword ptr [esp + 0x1c] */ r_edi = R32((u32)(r_esp+0x1cu));
    /* 0069c1a2: mov esi, dword ptr [esp + 0x180] */ r_esi = R32((u32)(r_esp+0x180u));
L_0069c1a9:; BB(0x0069c1a9);
    /* 0069c1a9: lea ebx, [esi + 4] */ r_ebx = (u32)(r_esi+0x4u);
    /* 0069c1ac: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c1ae: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c1b0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069c1b1: mov dword ptr [esp + 0x3c], ebx */ W32((u32)(r_esp+0x3cu), r_ebx);
    /* 0069c1b5: call 0x69d210 */ r_esp -= 4; W32(r_esp, 0x69c1bau); f_0069d210();
    /* 0069c1ba: mov esi, dword ptr [esp + 0x190] */ r_esi = R32((u32)(r_esp+0x190u));
    /* 0069c1c1: mov edx, dword ptr [esi + 0x51c] */ r_edx = R32((u32)(r_esi+0x51cu));
    /* 0069c1c7: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069c1c8: mov dword ptr [esi + 0x51c], edx */ W32((u32)(r_esi+0x51cu), r_edx);
    /* 0069c1ce: mov edx, dword ptr [esi + 0x50c] */ r_edx = R32((u32)(r_esi+0x50cu));
    /* 0069c1d4: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0069c1d5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069c1d6: call 0x699aa0 */ r_esp -= 4; W32(r_esp, 0x69c1dbu); f_00699aa0();
    /* 0069c1db: mov ecx, dword ptr [esi + 0x518] */ r_ecx = R32((u32)(r_esi+0x518u));
    /* 0069c1e1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069c1e3: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0069c1e5: mov eax, dword ptr [esi + 0x50c] */ r_eax = R32((u32)(r_esi+0x50cu));
    /* 0069c1eb: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0069c1ec: mov dword ptr [esi + 0x518], ecx */ W32((u32)(r_esi+0x518u), r_ecx);
    /* 0069c1f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069c1f3: call 0x699aa0 */ r_esp -= 4; W32(r_esp, 0x69c1f8u); f_00699aa0();
    /* 0069c1f8: mov ecx, dword ptr [esp + 0x8c] */ r_ecx = R32((u32)(r_esp+0x8cu));
    /* 0069c1ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069c200: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0069c201: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069c202: call 0x69d210 */ r_esp -= 4; W32(r_esp, 0x69c207u); f_0069d210();
    /* 0069c207: mov edx, dword ptr [esi + 0x50c] */ r_edx = R32((u32)(r_esi+0x50cu));
    /* 0069c20d: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0069c20e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069c20f: call 0x699aa0 */ r_esp -= 4; W32(r_esp, 0x69c214u); f_00699aa0();
    /* 0069c214: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069c215: mov eax, dword ptr [esp + 0xa4] */ r_eax = R32((u32)(r_esp+0xa4u));
    /* 0069c21c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069c21d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069c21e: call 0x69d210 */ r_esp -= 4; W32(r_esp, 0x69c223u); f_0069d210();
    /* 0069c223: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0069c225: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069c228: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0069c22a: mov dword ptr [esp + 0x24], 0 */ W32((u32)(r_esp+0x24u), 0x0u);
    /* 0069c232: mov dword ptr [esp + 0x10], 2 */ W32((u32)(r_esp+0x10u), 0x2u);
    /* 0069c23a: jle 0x69c41e */ if ((fZ||fS!=fO)) goto L_0069c41e;
L_0069c240:; BB(0x0069c240);
    /* 0069c240: lea ecx, [edi + 4] */ r_ecx = (u32)(r_edi+0x4u);
    /* 0069c243: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
L_0069c247:; BB(0x0069c247);
    /* 0069c247: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0069c24b: mov esi, 1 */ r_esi = 0x1u;
    /* 0069c250: mov ebx, dword ptr [edx] */ r_ebx = R32((u32)(r_edx));
    /* 0069c252: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 0069c254: mov dword ptr [esp + 0x1c], ebx */ W32((u32)(r_esp+0x1cu), r_ebx);
    /* 0069c258: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 0069c25c: mov ebp, dword ptr [edi + ebx*4 + 0xc0] */ r_ebp = R32((u32)(r_edi+r_ebx*4+0xc0u));
    /* 0069c263: mov eax, dword ptr [edi + ebx*4 + 0x80] */ r_eax = R32((u32)(r_edi+r_ebx*4+0x80u));
    /* 0069c26a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069c26c: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0069c270: shl esi, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 0069c272: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c274: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 0069c278: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 0069c27c: mov dword ptr [esp + 0x44], edx */ W32((u32)(r_esp+0x44u), r_edx);
    /* 0069c280: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 0069c284: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 0069c288: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 0069c28c: mov dword ptr [esp + 0x54], edx */ W32((u32)(r_esp+0x54u), r_edx);
    /* 0069c290: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 0069c294: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 0069c298: je 0x69c384 */ if (fZ) goto L_0069c384;
L_0069c29e:; BB(0x0069c29e);
    /* 0069c29e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069c2a0: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069c2a2: jle 0x69c2dc */ if ((fZ||fS!=fO)) goto L_0069c2dc;
L_0069c2a4:; BB(0x0069c2a4);
    /* 0069c2a4: lea edx, [ebx + 0xa] */ r_edx = (u32)(r_ebx+0xau);
    /* 0069c2a7: shl edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0069c2aa: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_0069c2ac:; BB(0x0069c2ac);
    /* 0069c2ac: mov ebx, dword ptr [edx] */ r_ebx = R32((u32)(r_edx));
    /* 0069c2ae: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0069c2b0: jge 0x69c2bc */ if ((fS==fO)) goto L_0069c2bc;
L_0069c2b2:; BB(0x0069c2b2);
    /* 0069c2b2: mov dword ptr [esp + eax*4 + 0x58], 1 */ W32((u32)(r_esp+r_eax*4+0x58u), 0x1u);
    /* 0069c2ba: jmp 0x69c2ce */ goto L_0069c2ce;
L_0069c2bc:; BB(0x0069c2bc);
    /* 0069c2bc: mov ecx, dword ptr [esp + 0x34] */ r_ecx = R32((u32)(r_esp+0x34u));
    /* 0069c2c0: mov ecx, dword ptr [ecx + ebx*4 + 0x720] */ r_ecx = R32((u32)(r_ecx+r_ebx*4+0x720u));
    /* 0069c2c7: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0069c2ca: mov dword ptr [esp + eax*4 + 0x58], ecx */ W32((u32)(r_esp+r_eax*4+0x58u), r_ecx);
L_0069c2ce:; BB(0x0069c2ce);
    /* 0069c2ce: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069c2cf: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069c2d2: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069c2d4: jl 0x69c2ac */ if ((fS!=fO)) goto L_0069c2ac;
L_0069c2d6:; BB(0x0069c2d6);
    /* 0069c2d6: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 0069c2da: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0069c2dc:; BB(0x0069c2dc);
    /* 0069c2dc: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 0069c2e0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069c2e2: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069c2e4: jle 0x69c343 */ if ((fZ||fS!=fO)) goto L_0069c343;
L_0069c2e6:; BB(0x0069c2e6);
    /* 0069c2e6: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 0069c2ea: lea ecx, [esp + ecx*4 + 0x78] */ r_ecx = (u32)(r_esp+r_ecx*4+0x78u);
    /* 0069c2ee: mov dword ptr [esp + 0x1c], ecx */ W32((u32)(r_esp+0x1cu), r_ecx);
    /* 0069c2f2: jmp 0x69c2f6 */ goto L_0069c2f6;
L_0069c2f4:; BB(0x0069c2f4);
    /* 0069c2f4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0069c2f6:; BB(0x0069c2f6);
    /* 0069c2f6: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0069c2f8: jle 0x69c311 */ if ((fZ||fS!=fO)) goto L_0069c311;
L_0069c2fa:; BB(0x0069c2fa);
    /* 0069c2fa: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 0069c2fe: mov ecx, dword ptr [ecx] */ r_ecx = R32((u32)(r_ecx));
L_0069c300:; BB(0x0069c300);
    /* 0069c300: cmp ecx, dword ptr [esp + edx*4 + 0x58] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+r_edx*4+0x58u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0069c304: jl 0x69c30d */ if ((fS!=fO)) goto L_0069c30d;
L_0069c306:; BB(0x0069c306);
    /* 0069c306: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069c307: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0069c309: jl 0x69c300 */ if ((fS!=fO)) goto L_0069c300;
L_0069c30b:; BB(0x0069c30b);
    /* 0069c30b: jmp 0x69c311 */ goto L_0069c311;
L_0069c30d:; BB(0x0069c30d);
    /* 0069c30d: mov dword ptr [esp + eax*4 + 0x38], edx */ W32((u32)(r_esp+r_eax*4+0x38u), r_edx);
L_0069c311:; BB(0x0069c311);
    /* 0069c311: mov edx, dword ptr [esp + eax*4 + 0x38] */ r_edx = R32((u32)(r_esp+r_eax*4+0x38u));
    /* 0069c315: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 0069c319: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0069c31b: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 0069c31f: or ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0069c321: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 0069c325: add edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069c327: mov dword ptr [esp + 0x20], ecx */ W32((u32)(r_esp+0x20u), r_ecx);
    /* 0069c32b: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 0069c32f: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 0069c333: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 0069c337: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069c338: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069c33b: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069c33d: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 0069c341: jl 0x69c2f4 */ if ((fS!=fO)) goto L_0069c2f4;
L_0069c343:; BB(0x0069c343);
    /* 0069c343: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 0069c347: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 0069c34b: mov ebp, dword ptr [esp + 0x2c] */ r_ebp = R32((u32)(r_esp+0x2cu));
    /* 0069c34f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069c350: mov eax, dword ptr [edi + ebx*4 + 0x100] */ r_eax = R32((u32)(r_edi+r_ebx*4+0x100u));
    /* 0069c357: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0069c358: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 0069c35b: lea eax, [eax + edx*2] */ r_eax = (u32)(r_eax+r_edx*2);
    /* 0069c35e: lea ecx, [ebp + eax*4] */ r_ecx = (u32)(r_ebp+r_eax*4);
    /* 0069c362: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0069c363: call 0x6951e0 */ r_esp -= 4; W32(r_esp, 0x69c368u); f_006951e0();
    /* 0069c368: mov ecx, dword ptr [esp + 0x190] */ r_ecx = R32((u32)(r_esp+0x190u));
    /* 0069c36f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069c372: mov edx, dword ptr [ecx + 0x514] */ r_edx = R32((u32)(r_ecx+0x514u));
    /* 0069c378: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069c37a: mov dword ptr [ecx + 0x514], edx */ W32((u32)(r_ecx+0x514u), r_edx);
    /* 0069c380: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0069c382: jmp 0x69c388 */ goto L_0069c388;
L_0069c384:; BB(0x0069c384);
    /* 0069c384: mov ebp, dword ptr [esp + 0x2c] */ r_ebp = R32((u32)(r_esp+0x2cu));
L_0069c388:; BB(0x0069c388);
    /* 0069c388: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0069c38c: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0069c38e: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069c390: jle 0x69c3f2 */ if ((fZ||fS!=fO)) goto L_0069c3f2;
L_0069c392:; BB(0x0069c392);
    /* 0069c392: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0069c396: lea edx, [ebx*8 + 0x50] */ r_edx = (u32)(r_ebx*8+0x50u);
    /* 0069c39d: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 0069c3a1: lea ebx, [esp + eax*4 + 0x78] */ r_ebx = (u32)(r_esp+r_eax*4+0x78u);
L_0069c3a5:; BB(0x0069c3a5);
    /* 0069c3a5: mov ecx, dword ptr [esp + esi*4 + 0x38] */ r_ecx = R32((u32)(r_esp+r_esi*4+0x38u));
    /* 0069c3a9: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 0069c3ad: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0069c3af: mov eax, dword ptr [edi + ecx*4] */ r_eax = R32((u32)(r_edi+r_ecx*4));
    /* 0069c3b2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0069c3b4: jl 0x69c3e6 */ if ((fS!=fO)) goto L_0069c3e6;
L_0069c3b6:; BB(0x0069c3b6);
    /* 0069c3b6: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 0069c3b9: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 0069c3bb: lea eax, [eax + edx*2] */ r_eax = (u32)(r_eax+r_edx*2);
    /* 0069c3be: mov edx, dword ptr [ebp + eax*4 + 4] */ r_edx = R32((u32)(r_ebp+r_eax*4+0x4u));
    /* 0069c3c2: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069c3c4: lea eax, [ebp + eax*4] */ r_eax = (u32)(r_ebp+r_eax*4);
    /* 0069c3c8: jge 0x69c3e6 */ if ((fS==fO)) goto L_0069c3e6;
L_0069c3ca:; BB(0x0069c3ca);
    /* 0069c3ca: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 0069c3ce: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069c3cf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0069c3d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069c3d1: call 0x6951e0 */ r_esp -= 4; W32(r_esp, 0x69c3d6u); f_006951e0();
    /* 0069c3d6: mov ecx, dword ptr [esp + 0x190] */ r_ecx = R32((u32)(r_esp+0x190u));
    /* 0069c3dd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069c3e0: add dword ptr [ecx + 0x518], eax */ { u32 ad = (u32)(r_ecx+0x518u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_0069c3e6:; BB(0x0069c3e6);
    /* 0069c3e6: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0069c3ea: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0069c3eb: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0069c3ee: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069c3f0: jl 0x69c3a5 */ if ((fS!=fO)) goto L_0069c3a5;
L_0069c3f2:; BB(0x0069c3f2);
    /* 0069c3f2: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0069c3f6: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 0069c3fa: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0069c3fe: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 0069c400: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0069c402: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0069c406: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069c407: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069c40a: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069c40c: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 0069c410: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 0069c414: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 0069c418: jl 0x69c247 */ if ((fS!=fO)) goto L_0069c247;
L_0069c41e:; BB(0x0069c41e);
    /* 0069c41e: mov edx, dword ptr [esp + 0x188] */ r_edx = R32((u32)(r_esp+0x188u));
    /* 0069c425: mov ecx, dword ptr [edi + 0x340] */ r_ecx = R32((u32)(r_edi+0x340u));
    /* 0069c42b: mov eax, dword ptr [esp + 0x184] */ r_eax = R32((u32)(r_esp+0x184u));
    /* 0069c432: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0069c434: imul ecx, dword ptr [edx] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_edx)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0069c437: mov esi, dword ptr [eax + 0x504] */ r_esi = R32((u32)(r_eax+0x504u));
    /* 0069c43d: mov edx, 1 */ r_edx = 0x1u;
    /* 0069c442: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0069c444: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069c446: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0069c44a: jle 0x69c4bb */ if ((fZ||fS!=fO)) goto L_0069c4bb;
L_0069c44c:; BB(0x0069c44c);
    /* 0069c44c: add eax, 0x108 */ {  u32 a = r_eax; u32 b = 0x108u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069c451: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
L_0069c455:; BB(0x0069c455);
    /* 0069c455: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0069c459: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0069c45b: mov eax, dword ptr [esp + 0x188] */ r_eax = R32((u32)(r_esp+0x188u));
    /* 0069c462: mov esi, dword ptr [eax + edx*4] */ r_esi = R32((u32)(r_eax+r_edx*4));
    /* 0069c465: mov eax, esi */ r_eax = r_esi;
    /* 0069c467: and eax, 0x7fff */ {  u32 a = r_eax; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069c46c: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c46e: jne 0x69c498 */ if (!fZ) goto L_0069c498;
L_0069c470:; BB(0x0069c470);
    /* 0069c470: mov esi, dword ptr [edi + 0x340] */ r_esi = R32((u32)(r_edi+0x340u));
    /* 0069c476: mov ebx, dword ptr [edi + edx*4 + 0x344] */ r_ebx = R32((u32)(r_edi+r_edx*4+0x344u));
    /* 0069c47d: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0069c480: mov edx, dword ptr [esp + 0x18c] */ r_edx = R32((u32)(r_esp+0x18cu));
    /* 0069c487: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069c488: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069c489: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0069c48a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069c48b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069c48c: call 0x69c560 */ r_esp -= 4; W32(r_esp, 0x69c491u); f_0069c560();
    /* 0069c491: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069c494: mov ebp, ebx */ r_ebp = r_ebx;
    /* 0069c496: mov ecx, esi */ r_ecx = r_esi;
L_0069c498:; BB(0x0069c498);
    /* 0069c498: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0069c49c: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0069c4a0: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069c4a3: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069c4a4: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 0069c4a8: mov edx, dword ptr [esp + 0x184] */ r_edx = R32((u32)(r_esp+0x184u));
    /* 0069c4af: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0069c4b3: cmp eax, dword ptr [edx + 0x504] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x504u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069c4b9: jl 0x69c455 */ if ((fS!=fO)) goto L_0069c455;
L_0069c4bb:; BB(0x0069c4bb);
    /* 0069c4bb: mov esi, dword ptr [esp + 0x180] */ r_esi = R32((u32)(r_esp+0x180u));
    /* 0069c4c2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069c4c3: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 0069c4c6: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0069c4c7: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0069c4c9: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0069c4cb: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069c4cd: jge 0x69c4e7 */ if ((fS==fO)) goto L_0069c4e7;
L_0069c4cf:; BB(0x0069c4cf);
    /* 0069c4cf: mov eax, dword ptr [esp + 0x188] */ r_eax = R32((u32)(r_esp+0x188u));
    /* 0069c4d6: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0069c4d7: mov dword ptr [eax + ebx*4 - 4], ecx */ W32((u32)(r_eax+r_ebx*4+0xfffffffcu), r_ecx);
    /* 0069c4db: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 0069c4de: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0069c4df: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0069c4e1: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0069c4e3: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069c4e5: jl 0x69c4cf */ if ((fS!=fO)) goto L_0069c4cf;
L_0069c4e7:; BB(0x0069c4e7);
    /* 0069c4e7: mov eax, dword ptr [0x1631bdc] */ r_eax = R32((u32)(0x1631bdcu));
    /* 0069c4ec: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069c4ed: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069c4ee: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069c4ef: mov dword ptr [0x1631bdc], eax */ W32((u32)(0x1631bdcu), r_eax);
    /* 0069c4f4: mov eax, 1 */ r_eax = 0x1u;
    /* 0069c4f9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069c4fa: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069c500: ret  */ FN_RET(0x0069bfc0); r_esp += 4; return;
L_0069c501:; BB(0x0069c501);
    /* 0069c501: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c503: lea ecx, [esi + 4] */ r_ecx = (u32)(r_esi+0x4u);
    /* 0069c506: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c508: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0069c509: call 0x69d210 */ r_esp -= 4; W32(r_esp, 0x69c50eu); f_0069d210();
    /* 0069c50e: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 0069c511: mov edi, dword ptr [esp + 0x194] */ r_edi = R32((u32)(r_esp+0x194u));
    /* 0069c518: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0069c519: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0069c51b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069c51e: mov ecx, eax */ r_ecx = r_eax;
    /* 0069c520: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069c522: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0069c524: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0069c527: mov edx, ecx */ r_edx = r_ecx;
    /* 0069c529: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0069c52c: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0069c52e: mov ecx, edx */ r_ecx = r_edx;
    /* 0069c530: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0069c533: rep stosb byte ptr es:[edi], al */ while (r_ecx) { W8(r_edi, (u8)r_eax); r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 0069c535: mov eax, dword ptr [0x1631bdc] */ r_eax = R32((u32)(0x1631bdcu));
    /* 0069c53a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069c53b: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069c53c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069c53d: mov dword ptr [0x1631bdc], eax */ W32((u32)(0x1631bdcu), r_eax);
    /* 0069c542: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069c544: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069c545: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069c54b: ret  */ FN_RET(0x0069bfc0); r_esp += 4; return;
}

