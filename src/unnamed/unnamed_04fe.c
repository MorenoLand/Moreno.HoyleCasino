#include "protos.h"

void f_004fe0a0(void) /* sub_4FE0A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fe0a0);
    /* 004fe0a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fe0a1: mov ebp, esp */ r_ebp = r_esp;
    /* 004fe0a3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004fe0a6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fe0a9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004fe0ac: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004fe0af: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fe0b2: sub ecx, 0x30e78a */ {  u32 a = r_ecx; u32 b = 0x30e78au; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004fe0b8: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004fe0bb: cmp dword ptr [ebp - 8], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004fe0bf: ja 0x4fe0f9 */ if ((!fC&&!fZ)) goto L_004fe0f9;
L_004fe0c1:; BB(0x004fe0c1);
    /* 004fe0c1: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fe0c4: jmp dword ptr [edx*4 + 0x4fe104] */ { u32 t = R32((u32)(r_edx*4+0x4fe104u)); switch (t) { case 0x4fe0cbu: goto L_004fe0cb; case 0x4fe0cfu: goto L_004fe0cf; case 0x4fe0d6u: goto L_004fe0d6; case 0x4fe0ddu: goto L_004fe0dd; case 0x4fe0e4u: goto L_004fe0e4; case 0x4fe0ebu: goto L_004fe0eb; case 0x4fe0f2u: goto L_004fe0f2; default: UNSUP(0x004fe0c4, "jump table entry is not a known target"); } }
L_004fe0cb:; BB(0x004fe0cb);
    /* 004fe0cb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004fe0cd: jmp 0x4fe0fc */ goto L_004fe0fc;
L_004fe0cf:; BB(0x004fe0cf);
    /* 004fe0cf: mov eax, 1 */ r_eax = 0x1u;
    /* 004fe0d4: jmp 0x4fe0fc */ goto L_004fe0fc;
L_004fe0d6:; BB(0x004fe0d6);
    /* 004fe0d6: mov eax, 2 */ r_eax = 0x2u;
    /* 004fe0db: jmp 0x4fe0fc */ goto L_004fe0fc;
L_004fe0dd:; BB(0x004fe0dd);
    /* 004fe0dd: mov eax, 3 */ r_eax = 0x3u;
    /* 004fe0e2: jmp 0x4fe0fc */ goto L_004fe0fc;
L_004fe0e4:; BB(0x004fe0e4);
    /* 004fe0e4: mov eax, 4 */ r_eax = 0x4u;
    /* 004fe0e9: jmp 0x4fe0fc */ goto L_004fe0fc;
L_004fe0eb:; BB(0x004fe0eb);
    /* 004fe0eb: mov eax, 5 */ r_eax = 0x5u;
    /* 004fe0f0: jmp 0x4fe0fc */ goto L_004fe0fc;
L_004fe0f2:; BB(0x004fe0f2);
    /* 004fe0f2: mov eax, 6 */ r_eax = 0x6u;
    /* 004fe0f7: jmp 0x4fe0fc */ goto L_004fe0fc;
L_004fe0f9:; BB(0x004fe0f9);
    /* 004fe0f9: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_004fe0fc:; BB(0x004fe0fc);
    /* 004fe0fc: mov esp, ebp */ r_esp = r_ebp;
    /* 004fe0fe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fe0ff: ret 4 */ FN_RET(0x004fe0a0); r_esp += 8; return;
}

void f_004fe120(void) /* sub_4FE120 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fe120);
    /* 004fe120: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fe121: mov ebp, esp */ r_ebp = r_esp;
    /* 004fe123: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004fe126: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fe129: cmp dword ptr [ebp + 8], 0x30e796 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x30e796u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fe130: jl 0x4fe144 */ if ((fS!=fO)) goto L_004fe144;
L_004fe132:; BB(0x004fe132);
    /* 004fe132: cmp dword ptr [ebp + 8], 0x30e799 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x30e799u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fe139: jg 0x4fe144 */ if ((!fZ&&fS==fO)) goto L_004fe144;
L_004fe13b:; BB(0x004fe13b);
    /* 004fe13b: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 004fe142: jmp 0x4fe14b */ goto L_004fe14b;
L_004fe144:; BB(0x004fe144);
    /* 004fe144: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_004fe14b:; BB(0x004fe14b);
    /* 004fe14b: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 004fe150: mov cl, byte ptr [ebp - 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 004fe153: mov byte ptr [eax + 0x4f34], cl */ W8((u32)(r_eax+0x4f34u), (u8)r_ecx);
    /* 004fe159: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004fe15c: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 004fe15f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fe162: sub eax, 0x30e792 */ {  u32 a = r_eax; u32 b = 0x30e792u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004fe167: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 004fe16a: cmp dword ptr [ebp - 0xc], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004fe16e: ja 0x4fe196 */ if ((!fC&&!fZ)) goto L_004fe196;
L_004fe170:; BB(0x004fe170);
    /* 004fe170: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fe173: jmp dword ptr [ecx*4 + 0x4fe1a4] */ { u32 t = R32((u32)(r_ecx*4+0x4fe1a4u)); switch (t) { case 0x4fe17au: goto L_004fe17a; case 0x4fe181u: goto L_004fe181; case 0x4fe188u: goto L_004fe188; case 0x4fe18fu: goto L_004fe18f; default: UNSUP(0x004fe173, "jump table entry is not a known target"); } }
L_004fe17a:; BB(0x004fe17a);
    /* 004fe17a: mov eax, 5 */ r_eax = 0x5u;
    /* 004fe17f: jmp 0x4fe19b */ goto L_004fe19b;
L_004fe181:; BB(0x004fe181);
    /* 004fe181: mov eax, 0x19 */ r_eax = 0x19u;
    /* 004fe186: jmp 0x4fe19b */ goto L_004fe19b;
L_004fe188:; BB(0x004fe188);
    /* 004fe188: mov eax, 0xfa */ r_eax = 0xfau;
    /* 004fe18d: jmp 0x4fe19b */ goto L_004fe19b;
L_004fe18f:; BB(0x004fe18f);
    /* 004fe18f: mov eax, 0x3e8 */ r_eax = 0x3e8u;
    /* 004fe194: jmp 0x4fe19b */ goto L_004fe19b;
L_004fe196:; BB(0x004fe196);
    /* 004fe196: mov eax, 5 */ r_eax = 0x5u;
L_004fe19b:; BB(0x004fe19b);
    /* 004fe19b: mov esp, ebp */ r_esp = r_ebp;
    /* 004fe19d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fe19e: ret 4 */ FN_RET(0x004fe120); r_esp += 8; return;
}

void f_004fe1e0(void) /* sub_4FE1E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fe1e0);
    /* 004fe1e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fe1e1: mov ebp, esp */ r_ebp = r_esp;
    /* 004fe1e3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004fe1e6: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004fe1ec: call 0x47ce60 */ r_esp -= 4; W32(r_esp, 0x4fe1f1u); f_0047ce60();
    /* 004fe1f1: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fe1f4: jne 0x4fe24e */ if (!fZ) goto L_004fe24e;
L_004fe1f6:; BB(0x004fe1f6);
    /* 004fe1f6: mov eax, dword ptr [0x7926f8] */ r_eax = R32((u32)(0x7926f8u));
    /* 004fe1fb: mov ecx, dword ptr [eax + 0x400] */ r_ecx = R32((u32)(r_eax+0x400u));
    /* 004fe201: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fe204: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fe208: je 0x4fe21f */ if (fZ) goto L_004fe21f;
L_004fe20a:; BB(0x004fe20a);
    /* 004fe20a: mov edx, dword ptr [0x7926f8] */ r_edx = R32((u32)(0x7926f8u));
    /* 004fe210: mov eax, dword ptr [edx + 0x400] */ r_eax = R32((u32)(r_edx+0x400u));
    /* 004fe216: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004fe219: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fe21d: jne 0x4fe236 */ if (!fZ) goto L_004fe236;
L_004fe21f:; BB(0x004fe21f);
    /* 004fe21f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004fe222: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fe223: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4fe228u); f_0062fbf0();
    /* 004fe228: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fe22b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fe22e: jle 0x4fe234 */ if ((fZ||fS!=fO)) goto L_004fe234;
L_004fe230:; BB(0x004fe230);
    /* 004fe230: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004fe232: jmp 0x4fe286 */ goto L_004fe286;
L_004fe234:; BB(0x004fe234);
    /* 004fe234: jmp 0x4fe24a */ goto L_004fe24a;
L_004fe236:; BB(0x004fe236);
    /* 004fe236: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004fe239: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fe23a: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4fe23fu); f_0062fbf0();
    /* 004fe23f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fe242: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fe244: je 0x4fe24a */ if (fZ) goto L_004fe24a;
L_004fe246:; BB(0x004fe246);
    /* 004fe246: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004fe248: jmp 0x4fe286 */ goto L_004fe286;
L_004fe24a:; BB(0x004fe24a);
    /* 004fe24a: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 004fe24c: jmp 0x4fe286 */ goto L_004fe286;
L_004fe24e:; BB(0x004fe24e);
    /* 004fe24e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004fe254: call 0x47ce60 */ r_esp -= 4; W32(r_esp, 0x4fe259u); f_0047ce60();
    /* 004fe259: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fe25c: jne 0x4fe273 */ if (!fZ) goto L_004fe273;
L_004fe25e:; BB(0x004fe25e);
    /* 004fe25e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004fe261: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fe262: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4fe267u); f_0062fbf0();
    /* 004fe267: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fe26a: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 004fe26c: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 004fe26e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fe271: jmp 0x4fe286 */ goto L_004fe286;
L_004fe273:; BB(0x004fe273);
    /* 004fe273: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004fe276: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fe277: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4fe27cu); f_0062fbf0();
    /* 004fe27c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fe27f: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 004fe281: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 004fe283: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_004fe286:; BB(0x004fe286);
    /* 004fe286: mov esp, ebp */ r_esp = r_ebp;
    /* 004fe288: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fe289: ret  */ FN_RET(0x004fe1e0); r_esp += 4; return;
}

