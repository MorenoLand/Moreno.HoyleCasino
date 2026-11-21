#include "protos.h"

void f_00685070(void) /* sub_685070 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00685070);
    /* 00685070: sub esp, 0x1a4 */ {  u32 a = r_esp; u32 b = 0x1a4u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00685076: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00685077: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00685078: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00685079: mov esi, dword ptr [esp + 0x1b4] */ r_esi = R32((u32)(r_esp+0x1b4u));
    /* 00685080: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00685081: cmp dword ptr [esi + 0x58], 2 */ {  u32 a = R32((u32)(r_esi+0x58u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00685085: jl 0x685370 */ if ((fS!=fO)) goto L_00685370;
L_0068508b:; BB(0x0068508b);
    /* 0068508b: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 0068508e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00685090: jne 0x6850a2 */ if (!fZ) goto L_006850a2;
L_00685092:; BB(0x00685092);
    /* 00685092: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00685093: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00685094: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00685095: mov eax, 0xffffff76 */ r_eax = 0xffffff76u;
    /* 0068509a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068509b: add esp, 0x1a4 */ {  u32 a = r_esp; u32 b = 0x1a4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006850a1: ret  */ FN_RET(0x00685070); r_esp += 4; return;
L_006850a2:; BB(0x006850a2);
    /* 006850a2: mov ebx, dword ptr [esp + 0x1c0] */ r_ebx = R32((u32)(r_esp+0x1c0u));
    /* 006850a9: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006850ab: jl 0x685370 */ if ((fS!=fO)) goto L_00685370;
L_006850b1:; BB(0x006850b1);
    /* 006850b1: mov edi, dword ptr [esp + 0x1bc] */ r_edi = R32((u32)(r_esp+0x1bcu));
    /* 006850b8: jg 0x6850c2 */ if ((!fZ&&fS==fO)) goto L_006850c2;
L_006850ba:; BB(0x006850ba);
    /* 006850ba: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fC = 0; }
    /* 006850bc: jb 0x685370 */ if (fC) goto L_00685370;
L_006850c2:; BB(0x006850c2);
    /* 006850c2: cmp ebx, dword ptr [esi + 0x14] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi+0x14u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006850c5: jg 0x685370 */ if ((!fZ&&fS==fO)) goto L_00685370;
L_006850cb:; BB(0x006850cb);
    /* 006850cb: jl 0x6850d6 */ if ((fS!=fO)) goto L_006850d6;
L_006850cd:; BB(0x006850cd);
    /* 006850cd: cmp edi, dword ptr [esi + 0x10] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esi+0x10u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006850d0: ja 0x685370 */ if ((!fC&&!fZ)) goto L_00685370;
L_006850d6:; BB(0x006850d6);
    /* 006850d6: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006850d9: lea ebp, [esi + 0x78] */ r_ebp = (u32)(r_esi+0x78u);
    /* 006850dc: mov dword ptr [esi + 0x50], eax */ W32((u32)(r_esi+0x50u), r_eax);
    /* 006850df: mov dword ptr [esi + 0x54], eax */ W32((u32)(r_esi+0x54u), r_eax);
    /* 006850e2: mov eax, dword ptr [esi + 0x5c] */ r_eax = R32((u32)(r_esi+0x5cu));
    /* 006850e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006850e6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006850e7: call 0x686aa0 */ r_esp -= 4; W32(r_esp, 0x6850ecu); f_00686aa0();
    /* 006850ec: lea ecx, [esi + 0x1e0] */ r_ecx = (u32)(r_esi+0x1e0u);
    /* 006850f2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006850f3: call 0x691550 */ r_esp -= 4; W32(r_esp, 0x6850f8u); f_00691550();
    /* 006850f8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006850f9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006850fa: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006850fb: call 0x684990 */ r_esp -= 4; W32(r_esp, 0x685100u); f_00684990();
    /* 00685100: mov edx, dword ptr [esi + 0x5c] */ r_edx = R32((u32)(r_esi+0x5cu));
    /* 00685103: lea eax, [esp + 0x64] */ r_eax = (u32)(r_esp+0x64u);
    /* 00685107: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00685109: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068510a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068510b: mov dword ptr [esp + 0x30], edi */ W32((u32)(r_esp+0x30u), r_edi);
    /* 0068510f: mov dword ptr [esp + 0x34], edi */ W32((u32)(r_esp+0x34u), r_edi);
    /* 00685113: call 0x686340 */ r_esp -= 4; W32(r_esp, 0x685118u); f_00686340();
    /* 00685118: lea ecx, [esp + 0x6c] */ r_ecx = (u32)(r_esp+0x6cu);
    /* 0068511c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068511d: call 0x686a50 */ r_esp -= 4; W32(r_esp, 0x685122u); f_00686a50();
    /* 00685122: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00685125:; BB(0x00685125);
    /* 00685125: mov eax, dword ptr [esi + 0x58] */ r_eax = R32((u32)(r_esi+0x58u));
    /* 00685128: mov ebx, 3 */ r_ebx = 0x3u;
    /* 0068512d: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0068512f: jl 0x6851da */ if ((fS!=fO)) goto L_006851da;
L_00685135:; BB(0x00685135);
    /* 00685135: lea edx, [esp + 0x2c] */ r_edx = (u32)(r_esp+0x2cu);
    /* 00685139: lea eax, [esp + 0x4c] */ r_eax = (u32)(r_esp+0x4cu);
    /* 0068513d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068513e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068513f: call 0x686ac0 */ r_esp -= 4; W32(r_esp, 0x685144u); f_00686ac0();
    /* 00685144: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00685147: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00685149: jle 0x6851da */ if ((fZ||fS!=fO)) goto L_006851da;
L_0068514f:; BB(0x0068514f);
    /* 0068514f: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 00685152: mov edx, dword ptr [esi + 0x48] */ r_edx = R32((u32)(r_esi+0x48u));
    /* 00685155: shl ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00685158: lea eax, [ecx + edx] */ r_eax = (u32)(r_ecx+r_edx);
    /* 0068515b: mov ecx, dword ptr [ecx + edx + 0x1c] */ r_ecx = R32((u32)(r_ecx+r_edx+0x1cu));
    /* 0068515f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00685161: je 0x6851cf */ if (fZ) goto L_006851cf;
L_00685163:; BB(0x00685163);
    /* 00685163: lea ecx, [esp + 0x2c] */ r_ecx = (u32)(r_esp+0x2cu);
    /* 00685167: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00685168: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00685169: call 0x691e20 */ r_esp -= 4; W32(r_esp, 0x68516eu); f_00691e20();
    /* 0068516e: mov ebx, eax */ r_ebx = r_eax;
    /* 00685170: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00685173: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00685175: jge 0x685186 */ if ((fS==fO)) goto L_00685186;
L_00685177:; BB(0x00685177);
    /* 00685177: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00685179: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068517a: call 0x686ac0 */ r_esp -= 4; W32(r_esp, 0x68517fu); f_00686ac0();
    /* 0068517f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00685182: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00685184: jmp 0x6851af */ goto L_006851af;
L_00685186:; BB(0x00685186);
    /* 00685186: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0068518a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068518c: je 0x68519b */ if (fZ) goto L_0068519b;
L_0068518e:; BB(0x0068518e);
    /* 0068518e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00685190: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00685191: call 0x686ac0 */ r_esp -= 4; W32(r_esp, 0x685196u); f_00686ac0();
    /* 00685196: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00685199: jmp 0x6851af */ goto L_006851af;
L_0068519b:; BB(0x0068519b);
    /* 0068519b: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068519d: je 0x6851af */ if (fZ) goto L_006851af;
L_0068519f:; BB(0x0068519f);
    /* 0068519f: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 006851a3: lea edx, [ebx + edi] */ r_edx = (u32)(r_ebx+r_edi);
    /* 006851a6: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006851a9: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006851ab: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
L_006851af:; BB(0x006851af);
    /* 006851af: mov edi, dword ptr [esp + 0x3c] */ r_edi = R32((u32)(r_esp+0x3cu));
    /* 006851b3: mov ecx, dword ptr [esp + 0x40] */ r_ecx = R32((u32)(r_esp+0x40u));
    /* 006851b7: mov eax, edi */ r_eax = r_edi;
    /* 006851b9: and eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006851bb: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006851be: jne 0x6852be */ if (!fZ) goto L_006852be;
L_006851c4:; BB(0x006851c4);
    /* 006851c4: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 006851c8: mov edi, ebx */ r_edi = r_ebx;
    /* 006851ca: jmp 0x685125 */ goto L_00685125;
L_006851cf:; BB(0x006851cf);
    /* 006851cf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006851d1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006851d2: call 0x686ac0 */ r_esp -= 4; W32(r_esp, 0x6851d7u); f_00686ac0();
    /* 006851d7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006851da:; BB(0x006851da);
    /* 006851da: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006851dc: jne 0x685341 */ if (!fZ) goto L_00685341;
L_006851e2:; BB(0x006851e2);
    /* 006851e2: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006851e4: lea ecx, [esp + 0x20] */ r_ecx = (u32)(r_esp+0x20u);
    /* 006851e8: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006851ea: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006851eb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006851ec: call 0x6845f0 */ r_esp -= 4; W32(r_esp, 0x6851f1u); f_006845f0();
    /* 006851f1: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006851f4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006851f6: jl 0x685305 */ if ((fS!=fO)) goto L_00685305;
L_006851fc:; BB(0x006851fc);
    /* 006851fc: jg 0x685206 */ if ((!fZ&&fS==fO)) goto L_00685206;
L_006851fe:; BB(0x006851fe);
    /* 006851fe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fC = 0; }
    /* 00685200: jb 0x685305 */ if (fC) goto L_00685305;
L_00685206:; BB(0x00685206);
    /* 00685206: cmp dword ptr [esi + 0x58], ebx */ {  u32 a = R32((u32)(r_esi+0x58u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00685209: jl 0x685237 */ if ((fS!=fO)) goto L_00685237;
L_0068520b:; BB(0x0068520b);
    /* 0068520b: lea edx, [esp + 0x1c] */ r_edx = (u32)(r_esp+0x1cu);
    /* 0068520f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00685210: call 0x6862e0 */ r_esp -= 4; W32(r_esp, 0x685215u); f_006862e0();
    /* 00685215: mov ecx, dword ptr [esi + 0x5c] */ r_ecx = R32((u32)(r_esi+0x5cu));
    /* 00685218: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068521b: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068521d: je 0x685232 */ if (fZ) goto L_00685232;
L_0068521f:; BB(0x0068521f);
    /* 0068521f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00685220: call 0x684f40 */ r_esp -= 4; W32(r_esp, 0x685225u); f_00684f40();
    /* 00685225: lea eax, [esp + 0x50] */ r_eax = (u32)(r_esp+0x50u);
    /* 00685229: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068522a: call 0x6863b0 */ r_esp -= 4; W32(r_esp, 0x68522fu); f_006863b0();
    /* 0068522f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00685232:; BB(0x00685232);
    /* 00685232: cmp dword ptr [esi + 0x58], ebx */ {  u32 a = R32((u32)(r_esi+0x58u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00685235: jge 0x68528e */ if ((fS==fO)) goto L_0068528e;
L_00685237:; BB(0x00685237);
    /* 00685237: lea ecx, [esp + 0x1c] */ r_ecx = (u32)(r_esp+0x1cu);
    /* 0068523b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068523c: call 0x6862e0 */ r_esp -= 4; W32(r_esp, 0x685241u); f_006862e0();
    /* 00685241: mov edx, dword ptr [esi + 0x34] */ r_edx = R32((u32)(r_esi+0x34u));
    /* 00685244: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00685247: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00685249: mov dword ptr [esi + 0x5c], eax */ W32((u32)(r_esi+0x5cu), r_eax);
    /* 0068524c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0068524e: jle 0x685268 */ if ((fZ||fS!=fO)) goto L_00685268;
L_00685250:; BB(0x00685250);
    /* 00685250: mov edi, dword ptr [esi + 0x40] */ r_edi = R32((u32)(r_esi+0x40u));
L_00685253:; BB(0x00685253);
    /* 00685253: cmp dword ptr [edi], eax */ {  u32 a = R32((u32)(r_edi)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00685255: je 0x68525f */ if (fZ) goto L_0068525f;
L_00685257:; BB(0x00685257);
    /* 00685257: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00685258: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0068525b: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0068525d: jl 0x685253 */ if ((fS!=fO)) goto L_00685253;
L_0068525f:; BB(0x0068525f);
    /* 0068525f: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 00685263: mov ebx, 3 */ r_ebx = 0x3u;
L_00685268:; BB(0x00685268);
    /* 00685268: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068526a: je 0x685315 */ if (fZ) goto L_00685315;
L_00685270:; BB(0x00685270);
    /* 00685270: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00685271: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00685272: mov dword ptr [esi + 0x60], ecx */ W32((u32)(r_esi+0x60u), r_ecx);
    /* 00685275: call 0x686aa0 */ r_esp -= 4; W32(r_esp, 0x68527au); f_00686aa0();
    /* 0068527a: mov edx, dword ptr [esi + 0x5c] */ r_edx = R32((u32)(r_esi+0x5cu));
    /* 0068527d: lea eax, [esp + 0x54] */ r_eax = (u32)(r_esp+0x54u);
    /* 00685281: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00685282: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00685283: call 0x686aa0 */ r_esp -= 4; W32(r_esp, 0x685288u); f_00686aa0();
    /* 00685288: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068528b: mov dword ptr [esi + 0x58], ebx */ W32((u32)(r_esi+0x58u), r_ebx);
L_0068528e:; BB(0x0068528e);
    /* 0068528e: lea ecx, [esp + 0x1c] */ r_ecx = (u32)(r_esp+0x1cu);
    /* 00685292: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00685293: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00685294: call 0x686760 */ r_esp -= 4; W32(r_esp, 0x685299u); f_00686760();
    /* 00685299: lea edx, [esp + 0x24] */ r_edx = (u32)(r_esp+0x24u);
    /* 0068529d: lea eax, [esp + 0x54] */ r_eax = (u32)(r_esp+0x54u);
    /* 006852a1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006852a2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006852a3: call 0x686760 */ r_esp -= 4; W32(r_esp, 0x6852a8u); f_00686760();
    /* 006852a8: lea ecx, [esp + 0x2c] */ r_ecx = (u32)(r_esp+0x2cu);
    /* 006852ac: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006852ad: call 0x686240 */ r_esp -= 4; W32(r_esp, 0x6852b2u); f_00686240();
    /* 006852b2: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006852b5: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 006852b9: jmp 0x685125 */ goto L_00685125;
L_006852be:; BB(0x006852be);
    /* 006852be: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 006852c1: mov eax, dword ptr [esi + 0x44] */ r_eax = R32((u32)(r_esi+0x44u));
    /* 006852c4: mov ebx, edx */ r_ebx = r_edx;
    /* 006852c6: shl ebx, 4 */ { u32 c = (4u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 006852c9: sub edi, dword ptr [ebx + eax] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebx+r_eax)); u32 r = (a - b) & 0xffffffffu; r_edi = r; fC = (a < b); }
    /* 006852cc: sbb ecx, dword ptr [ebx + eax + 4] */ { u32 c = fC; u32 a = r_ecx; u32 b = R32((u32)(r_ebx+r_eax+0x4u)); u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 006852d0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006852d2: jg 0x6852de */ if ((!fZ&&fS==fO)) goto L_006852de;
L_006852d4:; BB(0x006852d4);
    /* 006852d4: jl 0x6852da */ if ((fS!=fO)) goto L_006852da;
L_006852d6:; BB(0x006852d6);
    /* 006852d6: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fC = 0; }
    /* 006852d8: jae 0x6852de */ if (!fC) goto L_006852de;
L_006852da:; BB(0x006852da);
    /* 006852da: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 006852dc: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_006852de:; BB(0x006852de);
    /* 006852de: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006852e0: jle 0x6852f4 */ if ((fZ||fS!=fO)) goto L_006852f4;
L_006852e2:; BB(0x006852e2);
    /* 006852e2: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_006852e5:; BB(0x006852e5);
    /* 006852e5: mov ebx, dword ptr [eax] */ r_ebx = R32((u32)(r_eax));
    /* 006852e7: add edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edi = r; fC = (r < a); }
    /* 006852e9: mov ebx, dword ptr [eax + 4] */ r_ebx = R32((u32)(r_eax+0x4u));
    /* 006852ec: adc ecx, ebx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ebx; u32 r = (a + b + c) & 0xffffffffu; r_ecx = r;  }
    /* 006852ee: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006852f1: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 006852f2: jne 0x6852e5 */ if (!fZ) goto L_006852e5;
L_006852f4:; BB(0x006852f4);
    /* 006852f4: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 006852f8: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 006852f9: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r; fC = (a < b); }
    /* 006852fb: sbb ecx, edx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 006852fd: mov dword ptr [esi + 0x50], edi */ W32((u32)(r_esi+0x50u), r_edi);
    /* 00685300: mov dword ptr [esi + 0x54], ecx */ W32((u32)(r_esi+0x54u), r_ecx);
    /* 00685303: jmp 0x68534a */ goto L_0068534a;
L_00685305:; BB(0x00685305);
    /* 00685305: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00685307: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00685308: call 0x684f70 */ r_esp -= 4; W32(r_esp, 0x68530du); f_00684f70();
    /* 0068530d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00685310: mov dword ptr [esi + 0x54], edx */ W32((u32)(r_esi+0x54u), r_edx);
    /* 00685313: jmp 0x685347 */ goto L_00685347;
L_00685315:; BB(0x00685315);
    /* 00685315: lea edx, [esp + 0x4c] */ r_edx = (u32)(r_esp+0x4cu);
    /* 00685319: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0068531c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068531d: mov dword ptr [esi + 0x50], eax */ W32((u32)(r_esi+0x50u), r_eax);
    /* 00685320: mov dword ptr [esi + 0x54], eax */ W32((u32)(r_esi+0x54u), r_eax);
    /* 00685323: call 0x6863b0 */ r_esp -= 4; W32(r_esp, 0x685328u); f_006863b0();
    /* 00685328: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00685329: call 0x684f40 */ r_esp -= 4; W32(r_esp, 0x68532eu); f_00684f40();
    /* 0068532e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00685331: mov eax, 0xffffff77 */ r_eax = 0xffffff77u;
    /* 00685336: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00685337: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00685338: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00685339: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068533a: add esp, 0x1a4 */ {  u32 a = r_esp; u32 b = 0x1a4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00685340: ret  */ FN_RET(0x00685070); r_esp += 4; return;
L_00685341:; BB(0x00685341);
    /* 00685341: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00685344: mov dword ptr [esi + 0x54], eax */ W32((u32)(r_esi+0x54u), r_eax);
L_00685347:; BB(0x00685347);
    /* 00685347: mov dword ptr [esi + 0x50], eax */ W32((u32)(r_esi+0x50u), r_eax);
L_0068534a:; BB(0x0068534a);
    /* 0068534a: lea eax, [esp + 0x4c] */ r_eax = (u32)(r_esp+0x4cu);
    /* 0068534e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068534f: call 0x6863b0 */ r_esp -= 4; W32(r_esp, 0x685354u); f_006863b0();
    /* 00685354: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00685357: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00685359: mov dword ptr [esi + 0x68], eax */ W32((u32)(r_esi+0x68u), r_eax);
    /* 0068535c: mov dword ptr [esi + 0x6c], eax */ W32((u32)(r_esi+0x6cu), r_eax);
    /* 0068535f: mov dword ptr [esi + 0x70], eax */ W32((u32)(r_esi+0x70u), r_eax);
    /* 00685362: mov dword ptr [esi + 0x74], eax */ W32((u32)(r_esi+0x74u), r_eax);
    /* 00685365: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00685366: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00685367: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00685368: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00685369: add esp, 0x1a4 */ {  u32 a = r_esp; u32 b = 0x1a4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068536f: ret  */ FN_RET(0x00685070); r_esp += 4; return;
L_00685370:; BB(0x00685370);
    /* 00685370: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00685371: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00685372: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00685373: mov eax, 0xffffff7d */ r_eax = 0xffffff7du;
    /* 00685378: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00685379: add esp, 0x1a4 */ {  u32 a = r_esp; u32 b = 0x1a4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068537f: ret  */ FN_RET(0x00685070); r_esp += 4; return;
}

void f_00685380(void) /* sub_685380 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00685380);
    /* 00685380: sub esp, 0x84 */ {  u32 a = r_esp; u32 b = 0x84u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00685386: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00685387: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00685388: mov ebp, dword ptr [esp + 0x90] */ r_ebp = R32((u32)(r_esp+0x90u));
    /* 0068538f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00685390: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00685391: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00685393: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00685394: call 0x684f70 */ r_esp -= 4; W32(r_esp, 0x685399u); f_00684f70();
    /* 00685399: mov ecx, dword ptr [ebp + 0x58] */ r_ecx = R32((u32)(r_ebp+0x58u));
    /* 0068539c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068539f: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006853a2: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 006853a6: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 006853aa: jl 0x68595c */ if ((fS!=fO)) goto L_0068595c;
L_006853b0:; BB(0x006853b0);
    /* 006853b0: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
    /* 006853b3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006853b5: jne 0x6853c7 */ if (!fZ) goto L_006853c7;
L_006853b7:; BB(0x006853b7);
    /* 006853b7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006853b8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006853b9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006853ba: mov eax, 0xffffff76 */ r_eax = 0xffffff76u;
    /* 006853bf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006853c0: add esp, 0x84 */ {  u32 a = r_esp; u32 b = 0x84u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006853c6: ret  */ FN_RET(0x00685380); r_esp += 4; return;
L_006853c7:; BB(0x006853c7);
    /* 006853c7: mov edi, dword ptr [esp + 0xa0] */ r_edi = R32((u32)(r_esp+0xa0u));
    /* 006853ce: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006853d0: jl 0x68595c */ if ((fS!=fO)) goto L_0068595c;
L_006853d6:; BB(0x006853d6);
    /* 006853d6: mov ecx, dword ptr [esp + 0x9c] */ r_ecx = R32((u32)(r_esp+0x9cu));
    /* 006853dd: jg 0x6853e7 */ if ((!fZ&&fS==fO)) goto L_006853e7;
L_006853df:; BB(0x006853df);
    /* 006853df: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fC = 0; }
    /* 006853e1: jb 0x68595c */ if (fC) goto L_0068595c;
L_006853e7:; BB(0x006853e7);
    /* 006853e7: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006853e9: jg 0x68595c */ if ((!fZ&&fS==fO)) goto L_0068595c;
L_006853ef:; BB(0x006853ef);
    /* 006853ef: jl 0x6853f9 */ if ((fS!=fO)) goto L_006853f9;
L_006853f1:; BB(0x006853f1);
    /* 006853f1: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006853f3: ja 0x68595c */ if ((!fC&&!fZ)) goto L_0068595c;
L_006853f9:; BB(0x006853f9);
    /* 006853f9: mov ecx, dword ptr [ebp + 0x34] */ r_ecx = R32((u32)(r_ebp+0x34u));
    /* 006853fc: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fS = ((r >> 31) & 1); }
    /* 006853fd: mov dword ptr [esp + 0x30], ecx */ W32((u32)(r_esp+0x30u), r_ecx);
    /* 00685401: js 0x68543b */ if (fS) goto L_0068543b;
L_00685403:; BB(0x00685403);
    /* 00685403: mov ebx, dword ptr [ebp + 0x44] */ r_ebx = R32((u32)(r_ebp+0x44u));
    /* 00685406: mov esi, ecx */ r_esi = r_ecx;
    /* 00685408: shl esi, 4 */ { u32 c = (4u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 0068540b: lea esi, [ebx + esi + 8] */ r_esi = (u32)(r_ebx+r_esi+0x8u);
L_0068540f:; BB(0x0068540f);
    /* 0068540f: mov ebx, dword ptr [esi] */ r_ebx = R32((u32)(r_esi));
    /* 00685411: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); }
    /* 00685413: mov ebx, dword ptr [esi + 4] */ r_ebx = R32((u32)(r_esi+0x4u));
    /* 00685416: sbb edx, ebx */ { u32 c = fC; u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
    /* 00685418: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0068541a: jg 0x68542f */ if ((!fZ&&fS==fO)) goto L_0068542f;
L_0068541c:; BB(0x0068541c);
    /* 0068541c: jl 0x685427 */ if ((fS!=fO)) goto L_00685427;
L_0068541e:; BB(0x0068541e);
    /* 0068541e: cmp dword ptr [esp + 0x9c], eax */ {  u32 a = R32((u32)(r_esp+0x9cu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00685425: jae 0x68542f */ if (!fC) goto L_0068542f;
L_00685427:; BB(0x00685427);
    /* 00685427: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00685428: sub esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0068542b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0068542d: jge 0x68540f */ if ((fS==fO)) goto L_0068540f;
L_0068542f:; BB(0x0068542f);
    /* 0068542f: mov dword ptr [esp + 0x30], ecx */ W32((u32)(r_esp+0x30u), r_ecx);
    /* 00685433: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 00685437: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
L_0068543b:; BB(0x0068543b);
    /* 0068543b: mov esi, dword ptr [ebp + 0x38] */ r_esi = R32((u32)(r_ebp+0x38u));
    /* 0068543e: mov edx, dword ptr [esi + ecx*8 + 0xc] */ r_edx = R32((u32)(r_esi+r_ecx*8+0xcu));
    /* 00685442: mov eax, dword ptr [esi + ecx*8 + 8] */ r_eax = R32((u32)(r_esi+r_ecx*8+0x8u));
    /* 00685446: mov ebx, dword ptr [esi + ecx*8 + 4] */ r_ebx = R32((u32)(r_esi+r_ecx*8+0x4u));
    /* 0068544a: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 0068544e: mov edx, dword ptr [esi + ecx*8] */ r_edx = R32((u32)(r_esi+r_ecx*8));
    /* 00685451: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00685455: mov eax, dword ptr [ebp + 0x44] */ r_eax = R32((u32)(r_ebp+0x44u));
    /* 00685458: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 0068545c: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0068545f: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00685461: mov dword ptr [esp + 0x44], edx */ W32((u32)(r_esp+0x44u), r_edx);
    /* 00685465: mov dword ptr [esp + 0x48], ebx */ W32((u32)(r_esp+0x48u), r_ebx);
    /* 00685469: mov edi, dword ptr [ecx] */ r_edi = R32((u32)(r_ecx));
    /* 0068546b: mov esi, dword ptr [ecx + 8] */ r_esi = R32((u32)(r_ecx+0x8u));
    /* 0068546e: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 00685471: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 00685474: add esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_esi = r; fC = (r < a); }
    /* 00685476: mov dword ptr [esp + 0x3c], edi */ W32((u32)(r_esp+0x3cu), r_edi);
    /* 0068547a: adc ecx, eax */ { u32 c = fC; u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b + c) & 0xffffffffu; r_ecx = r;  }
    /* 0068547c: mov dword ptr [esp + 0x4c], esi */ W32((u32)(r_esp+0x4cu), r_esi);
    /* 00685480: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
    /* 00685484: mov dword ptr [esp + 0x50], ecx */ W32((u32)(r_esp+0x50u), r_ecx);
    /* 00685488: mov ecx, edi */ r_ecx = r_edi;
    /* 0068548a: mov edi, dword ptr [esp + 0x2c] */ r_edi = R32((u32)(r_esp+0x2cu));
    /* 0068548e: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); }
    /* 00685490: mov esi, dword ptr [esp + 0x9c] */ r_esi = R32((u32)(r_esp+0x9cu));
    /* 00685497: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 0068549b: sbb eax, edi */ { u32 c = fC; u32 a = r_eax; u32 b = r_edi; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 0068549d: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fC = (r < a); }
    /* 0068549f: mov dword ptr [esp + 0x34], ecx */ W32((u32)(r_esp+0x34u), r_ecx);
    /* 006854a3: mov ecx, dword ptr [esp + 0xa0] */ r_ecx = R32((u32)(r_esp+0xa0u));
    /* 006854aa: adc eax, ecx */ { u32 c = fC; u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b + c) & 0xffffffffu; r_eax = r;  }
    /* 006854ac: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 006854b0: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 006854b4: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006854b6: jg 0x685727 */ if ((!fZ&&fS==fO)) goto L_00685727;
L_006854bc:; BB(0x006854bc);
    /* 006854bc: jl 0x6854c8 */ if ((fS!=fO)) goto L_006854c8;
L_006854be:; BB(0x006854be);
    /* 006854be: cmp edx, dword ptr [esp + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006854c2: jae 0x685727 */ if (!fC) goto L_00685727;
L_006854c8:; BB(0x006854c8);
    /* 006854c8: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 006854cc: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 006854d0: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 006854d4: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); }
    /* 006854d6: sbb eax, ebx */ { u32 c = fC; u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 006854d8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006854da: jg 0x6854ee */ if ((!fZ&&fS==fO)) goto L_006854ee;
L_006854dc:; BB(0x006854dc);
    /* 006854dc: jl 0x6854e6 */ if ((fS!=fO)) goto L_006854e6;
L_006854de:; BB(0x006854de);
    /* 006854de: cmp ecx, 0x2134 */ {  u32 a = r_ecx; u32 b = 0x2134u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006854e4: jae 0x6854ee */ if (!fC) goto L_006854ee;
L_006854e6:; BB(0x006854e6);
    /* 006854e6: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 006854ea: mov esi, ebx */ r_esi = r_ebx;
    /* 006854ec: jmp 0x68554f */ goto L_0068554f;
L_006854ee:; BB(0x006854ee);
    /* 006854ee: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 006854f2: mov esi, dword ptr [esp + 0x3c] */ r_esi = R32((u32)(r_esp+0x3cu));
    /* 006854f6: mov edi, dword ptr [esp + 0x38] */ r_edi = R32((u32)(r_esp+0x38u));
    /* 006854fa: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); }
    /* 006854fc: sbb edi, dword ptr [esp + 0x40] */ { u32 c = fC; u32 a = r_edi; u32 b = R32((u32)(r_esp+0x40u)); u32 r = (a - b - c) & 0xffffffffu; r_edi = r;  }
    /* 00685500: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00685501: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00685502: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00685503: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00685504: call 0x687460 */ r_esp -= 4; W32(r_esp, 0x685509u); f_00687460();
    /* 00685509: mov ecx, dword ptr [esp + 0x4c] */ r_ecx = R32((u32)(r_esp+0x4cu));
    /* 0068550d: mov edi, dword ptr [esp + 0x40] */ r_edi = R32((u32)(r_esp+0x40u));
    /* 00685511: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); }
    /* 00685513: mov esi, dword ptr [esp + 0x50] */ r_esi = R32((u32)(r_esp+0x50u));
    /* 00685517: sbb esi, edi */ { u32 c = fC; u32 a = r_esi; u32 b = r_edi; u32 r = (a - b - c) & 0xffffffffu; r_esi = r;  }
    /* 00685519: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0068551a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068551b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068551c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068551d: call 0x6873a0 */ r_esp -= 4; W32(r_esp, 0x685522u); f_006873a0();
    /* 00685522: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 00685526: mov edi, eax */ r_edi = r_eax;
    /* 00685528: mov esi, edx */ r_esi = r_edx;
    /* 0068552a: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r; fC = (r < a); }
    /* 0068552c: adc esi, ebx */ { u32 c = fC; u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b + c) & 0xffffffffu; r_esi = r;  }
    /* 0068552e: sub edi, 0x2134 */ {  u32 a = r_edi; u32 b = 0x2134u; u32 r = (a - b) & 0xffffffffu; r_edi = r; fC = (a < b); }
    /* 00685534: sbb esi, 0 */ { u32 c = fC; u32 a = r_esi; u32 b = 0x0u; u32 r = (a - b - c) & 0xffffffffu; r_esi = r;  }
    /* 00685537: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00685539: jg 0x68554f */ if ((!fZ&&fS==fO)) goto L_0068554f;
L_0068553b:; BB(0x0068553b);
    /* 0068553b: jl 0x685543 */ if ((fS!=fO)) goto L_00685543;
L_0068553d:; BB(0x0068553d);
    /* 0068553d: mov eax, ecx */ r_eax = r_ecx;
    /* 0068553f: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00685541: ja 0x68554f */ if ((!fC&&!fZ)) goto L_0068554f;
L_00685543:; BB(0x00685543);
    /* 00685543: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 00685547: mov esi, ebx */ r_esi = r_ebx;
    /* 00685549: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r; fC = (r < a); }
    /* 0068554c: adc esi, 0 */ { u32 c = fC; u32 a = r_esi; u32 b = 0x0u; u32 r = (a + b + c) & 0xffffffffu; r_esi = r;  }
L_0068554f:; BB(0x0068554f);
    /* 0068554f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00685550: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00685551: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00685552: call 0x684990 */ r_esp -= 4; W32(r_esp, 0x685557u); f_00684990();
    /* 00685557: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0068555a:; BB(0x0068555a);
    /* 0068555a: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0068555e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00685561: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00685564: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); }
    /* 00685566: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0068556a: sbb eax, ecx */ { u32 c = fC; u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 0068556c: lea ecx, [esp + 0x64] */ r_ecx = (u32)(r_esp+0x64u);
    /* 00685570: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00685571: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00685572: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00685573: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00685574: call 0x6845f0 */ r_esp -= 4; W32(r_esp, 0x685579u); f_006845f0();
    /* 00685579: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068557c: cmp eax, -0x80 */ {  u32 a = r_eax; u32 b = 0xffffff80u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068557f: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00685583: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 00685587: jne 0x685594 */ if (!fZ) goto L_00685594;
L_00685589:; BB(0x00685589);
    /* 00685589: mov eax, edx */ r_eax = r_edx;
    /* 0068558b: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068558e: je 0x68593b */ if (fZ) goto L_0068593b;
L_00685594:; BB(0x00685594);
    /* 00685594: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 00685598: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0068559a: jg 0x6855f4 */ if ((!fZ&&fS==fO)) goto L_006855f4;
L_0068559c:; BB(0x0068559c);
    /* 0068559c: jl 0x6855a6 */ if ((fS!=fO)) goto L_006855a6;
L_0068559e:; BB(0x0068559e);
    /* 0068559e: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 006855a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fC = 0; }
    /* 006855a4: jae 0x6855f4 */ if (!fC) goto L_006855f4;
L_006855a6:; BB(0x006855a6);
    /* 006855a6: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 006855aa: mov eax, ebx */ r_eax = r_ebx;
    /* 006855ac: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fC = (r < a); }
    /* 006855af: adc eax, 0 */ { u32 c = fC; u32 a = r_eax; u32 b = 0x0u; u32 r = (a + b + c) & 0xffffffffu; r_eax = r;  }
    /* 006855b2: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006855b4: jl 0x685727 */ if ((fS!=fO)) goto L_00685727;
L_006855ba:; BB(0x006855ba);
    /* 006855ba: jg 0x6855c4 */ if ((!fZ&&fS==fO)) goto L_006855c4;
L_006855bc:; BB(0x006855bc);
    /* 006855bc: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006855be: jbe 0x685727 */ if ((fC||fZ)) goto L_00685727;
L_006855c4:; BB(0x006855c4);
    /* 006855c4: mov edx, edi */ r_edx = r_edi;
    /* 006855c6: or edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 006855c8: je 0x68593b */ if (fZ) goto L_0068593b;
L_006855ce:; BB(0x006855ce);
    /* 006855ce: add edi, 0xffffdecc */ {  u32 a = r_edi; u32 b = 0xffffdeccu; u32 r = (a + b) & 0xffffffffu; r_edi = r; fC = (r < a); }
    /* 006855d4: adc esi, -1 */ { u32 c = fC; u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b + c) & 0xffffffffu; r_esi = r;  }
    /* 006855d7: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006855d9: jg 0x6856cb */ if ((!fZ&&fS==fO)) goto L_006856cb;
L_006855df:; BB(0x006855df);
    /* 006855df: jl 0x6855eb */ if ((fS!=fO)) goto L_006855eb;
L_006855e1:; BB(0x006855e1);
    /* 006855e1: cmp edi, dword ptr [esp + 0x20] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x20u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006855e5: ja 0x6856cb */ if ((!fC&&!fZ)) goto L_006856cb;
L_006855eb:; BB(0x006855eb);
    /* 006855eb: mov edi, ecx */ r_edi = r_ecx;
    /* 006855ed: mov esi, eax */ r_esi = r_eax;
    /* 006855ef: jmp 0x6856cb */ goto L_006856cb;
L_006855f4:; BB(0x006855f4);
    /* 006855f4: lea eax, [esp + 0x64] */ r_eax = (u32)(r_esp+0x64u);
    /* 006855f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006855f9: call 0x686250 */ r_esp -= 4; W32(r_esp, 0x6855feu); f_00686250();
    /* 006855fe: mov ecx, eax */ r_ecx = r_eax;
    /* 00685600: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00685603: and ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00685605: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00685608: je 0x6856d6 */ if (fZ) goto L_006856d6;
L_0068560e:; BB(0x0068560e);
    /* 0068560e: cmp edx, dword ptr [esp + 0x38] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x38u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00685612: jg 0x685664 */ if ((!fZ&&fS==fO)) goto L_00685664;
L_00685614:; BB(0x00685614);
    /* 00685614: jl 0x68561c */ if ((fS!=fO)) goto L_0068561c;
L_00685616:; BB(0x00685616);
    /* 00685616: cmp eax, dword ptr [esp + 0x34] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x34u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0068561a: jae 0x685664 */ if (!fC) goto L_00685664;
L_0068561c:; BB(0x0068561c);
    /* 0068561c: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 00685620: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 00685623: mov dword ptr [esp + 0x44], ecx */ W32((u32)(r_esp+0x44u), r_ecx);
    /* 00685627: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 0068562b: mov dword ptr [esp + 0x48], ecx */ W32((u32)(r_esp+0x48u), r_ecx);
    /* 0068562f: mov ecx, dword ptr [esp + 0x34] */ r_ecx = R32((u32)(r_esp+0x34u));
    /* 00685633: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 00685636: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 0068563a: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); }
    /* 0068563c: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 00685640: sbb eax, edx */ { u32 c = fC; u32 a = r_eax; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 00685642: mov dword ptr [esp + 0x20], edi */ W32((u32)(r_esp+0x20u), r_edi);
    /* 00685646: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00685648: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 0068564c: jg 0x68570b */ if ((!fZ&&fS==fO)) goto L_0068570b;
L_00685652:; BB(0x00685652);
    /* 00685652: jl 0x685660 */ if ((fS!=fO)) goto L_00685660;
L_00685654:; BB(0x00685654);
    /* 00685654: cmp ecx, 0xac44 */ {  u32 a = r_ecx; u32 b = 0xac44u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0068565a: ja 0x68570b */ if ((!fC&&!fZ)) goto L_0068570b;
L_00685660:; BB(0x00685660);
    /* 00685660: mov esi, ebx */ r_esi = r_ebx;
    /* 00685662: jmp 0x6856d6 */ goto L_006856d6;
L_00685664:; BB(0x00685664);
    /* 00685664: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 00685668: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fC = (r < a); }
    /* 0068566b: mov dword ptr [esp + 0x54], ecx */ W32((u32)(r_esp+0x54u), r_ecx);
    /* 0068566f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00685671: adc ecx, 0 */ { u32 c = fC; u32 a = r_ecx; u32 b = 0x0u; u32 r = (a + b + c) & 0xffffffffu; r_ecx = r;  }
    /* 00685674: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00685676: mov dword ptr [esp + 0x58], ecx */ W32((u32)(r_esp+0x58u), r_ecx);
    /* 0068567a: jl 0x685727 */ if ((fS!=fO)) goto L_00685727;
L_00685680:; BB(0x00685680);
    /* 00685680: jg 0x68568c */ if ((!fZ&&fS==fO)) goto L_0068568c;
L_00685682:; BB(0x00685682);
    /* 00685682: cmp edi, dword ptr [esp + 0x54] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x54u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00685686: jbe 0x685727 */ if ((fC||fZ)) goto L_00685727;
L_0068568c:; BB(0x0068568c);
    /* 0068568c: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 00685690: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00685693: jne 0x6856f3 */ if (!fZ) goto L_006856f3;
L_00685695:; BB(0x00685695);
    /* 00685695: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 00685699: cmp ecx, dword ptr [ebp + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068569c: jne 0x6856f3 */ if (!fZ) goto L_006856f3;
L_0068569e:; BB(0x0068569e);
    /* 0068569e: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 006856a2: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 006856a6: add edi, 0xffffdecc */ {  u32 a = r_edi; u32 b = 0xffffdeccu; u32 r = (a + b) & 0xffffffffu; r_edi = r; fC = (r < a); }
    /* 006856ac: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 006856b0: adc esi, -1 */ { u32 c = fC; u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b + c) & 0xffffffffu; r_esi = r;  }
    /* 006856b3: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 006856b7: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006856b9: jg 0x6856cb */ if ((!fZ&&fS==fO)) goto L_006856cb;
L_006856bb:; BB(0x006856bb);
    /* 006856bb: jl 0x6856c3 */ if ((fS!=fO)) goto L_006856c3;
L_006856bd:; BB(0x006856bd);
    /* 006856bd: cmp edi, dword ptr [esp + 0x20] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x20u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006856c1: ja 0x6856cb */ if ((!fC&&!fZ)) goto L_006856cb;
L_006856c3:; BB(0x006856c3);
    /* 006856c3: mov edi, dword ptr [esp + 0x54] */ r_edi = R32((u32)(r_esp+0x54u));
    /* 006856c7: mov esi, dword ptr [esp + 0x58] */ r_esi = R32((u32)(r_esp+0x58u));
L_006856cb:; BB(0x006856cb);
    /* 006856cb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006856cc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006856cd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006856ce: call 0x684990 */ r_esp -= 4; W32(r_esp, 0x6856d3u); f_00684990();
    /* 006856d3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006856d6:; BB(0x006856d6);
    /* 006856d6: cmp ebx, dword ptr [esp + 0x14] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x14u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006856da: jg 0x685727 */ if ((!fZ&&fS==fO)) goto L_00685727;
L_006856dc:; BB(0x006856dc);
    /* 006856dc: jl 0x68555a */ if ((fS!=fO)) goto L_0068555a;
L_006856e2:; BB(0x006856e2);
    /* 006856e2: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 006856e6: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 006856ea: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006856ec: jae 0x685727 */ if (!fC) goto L_00685727;
L_006856ee:; BB(0x006856ee);
    /* 006856ee: jmp 0x68555a */ goto L_0068555a;
L_006856f3:; BB(0x006856f3);
    /* 006856f3: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 006856f7: mov dword ptr [esp + 0x4c], eax */ W32((u32)(r_esp+0x4cu), r_eax);
    /* 006856fb: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 006856ff: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 00685703: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 00685707: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
L_0068570b:; BB(0x0068570b);
    /* 0068570b: cmp ebx, dword ptr [esp + 0x14] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x14u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0068570f: jl 0x6854c8 */ if ((fS!=fO)) goto L_006854c8;
L_00685715:; BB(0x00685715);
    /* 00685715: jg 0x685727 */ if ((!fZ&&fS==fO)) goto L_00685727;
L_00685717:; BB(0x00685717);
    /* 00685717: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0068571b: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0068571f: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00685721: jb 0x6854c8 */ if (fC) goto L_006854c8;
L_00685727:; BB(0x00685727);
    /* 00685727: mov ebx, dword ptr [esp + 0x48] */ r_ebx = R32((u32)(r_esp+0x48u));
    /* 0068572b: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
    /* 0068572f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00685730: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00685731: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00685732: call 0x684990 */ r_esp -= 4; W32(r_esp, 0x685737u); f_00684990();
    /* 00685737: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0068573a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068573b: mov dword ptr [ebp + 0x50], eax */ W32((u32)(r_ebp+0x50u), r_eax);
    /* 0068573e: mov dword ptr [ebp + 0x54], eax */ W32((u32)(r_ebp+0x54u), r_eax);
    /* 00685741: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00685742: lea eax, [esp + 0x68] */ r_eax = (u32)(r_esp+0x68u);
    /* 00685746: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00685747: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00685748: call 0x6845f0 */ r_esp -= 4; W32(r_esp, 0x68574du); f_006845f0();
    /* 0068574d: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00685750: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00685752: jg 0x68576a */ if ((!fZ&&fS==fO)) goto L_0068576a;
L_00685754:; BB(0x00685754);
    /* 00685754: jl 0x68575a */ if ((fS!=fO)) goto L_0068575a;
L_00685756:; BB(0x00685756);
    /* 00685756: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fC = 0; }
    /* 00685758: jae 0x68576a */ if (!fC) goto L_0068576a;
L_0068575a:; BB(0x0068575a);
    /* 0068575a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068575b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068575c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068575d: mov eax, 0xfffffffe */ r_eax = 0xfffffffeu;
    /* 00685762: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00685763: add esp, 0x84 */ {  u32 a = r_esp; u32 b = 0x84u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00685769: ret  */ FN_RET(0x00685380); r_esp += 4; return;
L_0068576a:; BB(0x0068576a);
    /* 0068576a: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
    /* 0068576e: mov eax, dword ptr [ebp + 0x60] */ r_eax = R32((u32)(r_ebp+0x60u));
    /* 00685771: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00685773: je 0x685797 */ if (fZ) goto L_00685797;
L_00685775:; BB(0x00685775);
    /* 00685775: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00685776: call 0x684f40 */ r_esp -= 4; W32(r_esp, 0x68577bu); f_00684f40();
    /* 0068577b: lea ecx, [esp + 0x58] */ r_ecx = (u32)(r_esp+0x58u);
    /* 0068577f: mov dword ptr [ebp + 0x60], esi */ W32((u32)(r_ebp+0x60u), r_esi);
    /* 00685782: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00685783: call 0x6862e0 */ r_esp -= 4; W32(r_esp, 0x685788u); f_006862e0();
    /* 00685788: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068578b: mov dword ptr [ebp + 0x5c], eax */ W32((u32)(r_ebp+0x5cu), r_eax);
    /* 0068578e: mov dword ptr [ebp + 0x58], 3 */ W32((u32)(r_ebp+0x58u), 0x3u);
    /* 00685795: jmp 0x6857a6 */ goto L_006857a6;
L_00685797:; BB(0x00685797);
    /* 00685797: lea edx, [ebp + 0x1e0] */ r_edx = (u32)(r_ebp+0x1e0u);
    /* 0068579d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068579e: call 0x691550 */ r_esp -= 4; W32(r_esp, 0x6857a3u); f_00691550();
    /* 006857a3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006857a6:; BB(0x006857a6);
    /* 006857a6: mov eax, dword ptr [ebp + 0x5c] */ r_eax = R32((u32)(r_ebp+0x5cu));
    /* 006857a9: lea esi, [ebp + 0x78] */ r_esi = (u32)(r_ebp+0x78u);
    /* 006857ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006857ad: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006857ae: call 0x686aa0 */ r_esp -= 4; W32(r_esp, 0x6857b3u); f_00686aa0();
    /* 006857b3: lea ecx, [esp + 0x5c] */ r_ecx = (u32)(r_esp+0x5cu);
    /* 006857b7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006857b8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006857b9: call 0x686760 */ r_esp -= 4; W32(r_esp, 0x6857beu); f_00686760();
    /* 006857be: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006857c1:; BB(0x006857c1);
    /* 006857c1: lea edx, [esp + 0x74] */ r_edx = (u32)(r_esp+0x74u);
    /* 006857c5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006857c6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006857c7: call 0x686c10 */ r_esp -= 4; W32(r_esp, 0x6857ccu); f_00686c10();
    /* 006857cc: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 006857cd: mov ecx, eax */ r_ecx = r_eax;
    /* 006857cf: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006857d2: or ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 006857d4: je 0x685810 */ if (fZ) goto L_00685810;
L_006857d6:; BB(0x006857d6);
    /* 006857d6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006857d8: jl 0x68588b */ if ((fS!=fO)) goto L_0068588b;
L_006857de:; BB(0x006857de);
    /* 006857de: jg 0x6857e8 */ if ((!fZ&&fS==fO)) goto L_006857e8;
L_006857e0:; BB(0x006857e0);
    /* 006857e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fC = 0; }
    /* 006857e2: jb 0x68588b */ if (fC) goto L_0068588b;
L_006857e8:; BB(0x006857e8);
    /* 006857e8: mov eax, dword ptr [esp + 0x84] */ r_eax = R32((u32)(r_esp+0x84u));
    /* 006857ef: mov ecx, dword ptr [esp + 0x88] */ r_ecx = R32((u32)(r_esp+0x88u));
    /* 006857f6: mov edx, eax */ r_edx = r_eax;
    /* 006857f8: and edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 006857fa: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006857fd: jne 0x685898 */ if (!fZ) goto L_00685898;
L_00685803:; BB(0x00685803);
    /* 00685803: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00685805: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00685806: call 0x686ac0 */ r_esp -= 4; W32(r_esp, 0x68580bu); f_00686ac0();
    /* 0068580b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068580e: jmp 0x6857c1 */ goto L_006857c1;
L_00685810:; BB(0x00685810);
    /* 00685810: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00685811: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00685812: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00685813: call 0x684990 */ r_esp -= 4; W32(r_esp, 0x685818u); f_00684990();
    /* 00685818: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0068581b:; BB(0x0068581b);
    /* 0068581b: lea eax, [esp + 0x54] */ r_eax = (u32)(r_esp+0x54u);
    /* 0068581f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00685820: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00685821: call 0x684870 */ r_esp -= 4; W32(r_esp, 0x685826u); f_00684870();
    /* 00685826: mov esi, edx */ r_esi = r_edx;
    /* 00685828: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068582b: mov edi, eax */ r_edi = r_eax;
    /* 0068582d: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0068582f: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 00685833: jl 0x68593b */ if ((fS!=fO)) goto L_0068593b;
L_00685839:; BB(0x00685839);
    /* 00685839: jg 0x685843 */ if ((!fZ&&fS==fO)) goto L_00685843;
L_0068583b:; BB(0x0068583b);
    /* 0068583b: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fC = 0; }
    /* 0068583d: jb 0x68593b */ if (fC) goto L_0068593b;
L_00685843:; BB(0x00685843);
    /* 00685843: lea ecx, [esp + 0x54] */ r_ecx = (u32)(r_esp+0x54u);
    /* 00685847: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00685848: call 0x686250 */ r_esp -= 4; W32(r_esp, 0x68584du); f_00686250();
    /* 0068584d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00685850: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00685853: jg 0x685875 */ if ((!fZ&&fS==fO)) goto L_00685875;
L_00685855:; BB(0x00685855);
    /* 00685855: jl 0x68585c */ if ((fS!=fO)) goto L_0068585c;
L_00685857:; BB(0x00685857);
    /* 00685857: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0068585a: ja 0x685875 */ if ((!fC&&!fZ)) goto L_00685875;
L_0068585c:; BB(0x0068585c);
    /* 0068585c: lea edx, [esp + 0x54] */ r_edx = (u32)(r_esp+0x54u);
    /* 00685860: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00685861: call 0x686220 */ r_esp -= 4; W32(r_esp, 0x685866u); f_00686220();
    /* 00685866: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00685869: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068586b: je 0x685875 */ if (fZ) goto L_00685875;
L_0068586d:; BB(0x0068586d);
    /* 0068586d: mov dword ptr [ebp + 8], edi */ W32((u32)(r_ebp+0x8u), r_edi);
    /* 00685870: mov dword ptr [ebp + 0xc], esi */ W32((u32)(r_ebp+0xcu), r_esi);
    /* 00685873: jmp 0x68581b */ goto L_0068581b;
L_00685875:; BB(0x00685875);
    /* 00685875: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00685876: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00685877: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00685878: call 0x685070 */ r_esp -= 4; W32(r_esp, 0x68587du); f_00685070();
    /* 0068587d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00685880: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00685881: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00685882: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00685883: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00685884: add esp, 0x84 */ {  u32 a = r_esp; u32 b = 0x84u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068588a: ret  */ FN_RET(0x00685380); r_esp += 4; return;
L_0068588b:; BB(0x0068588b);
    /* 0068588b: mov dword ptr [esp + 0x18], 0xffffff78 */ W32((u32)(r_esp+0x18u), 0xffffff78u);
    /* 00685893: jmp 0x685933 */ goto L_00685933;
L_00685898:; BB(0x00685898);
    /* 00685898: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 0068589b: mov esi, dword ptr [ebp + 0x44] */ r_esi = R32((u32)(r_ebp+0x44u));
    /* 0068589e: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 006858a1: sub eax, dword ptr [edx + esi] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+r_esi)); u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); }
    /* 006858a4: mov edi, dword ptr [edx + esi + 4] */ r_edi = R32((u32)(r_edx+r_esi+0x4u));
    /* 006858a8: mov dword ptr [ebp + 0x50], eax */ W32((u32)(r_ebp+0x50u), r_eax);
    /* 006858ab: sbb ecx, edi */ { u32 c = fC; u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 006858ad: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 006858af: mov eax, ecx */ r_eax = r_ecx;
    /* 006858b1: mov dword ptr [ebp + 0x54], ecx */ W32((u32)(r_ebp+0x54u), r_ecx);
    /* 006858b4: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006858b6: jg 0x6858c5 */ if ((!fZ&&fS==fO)) goto L_006858c5;
L_006858b8:; BB(0x006858b8);
    /* 006858b8: jl 0x6858bf */ if ((fS!=fO)) goto L_006858bf;
L_006858ba:; BB(0x006858ba);
    /* 006858ba: cmp dword ptr [ebp + 0x50], edi */ {  u32 a = R32((u32)(r_ebp+0x50u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006858bd: jae 0x6858c5 */ if (!fC) goto L_006858c5;
L_006858bf:; BB(0x006858bf);
    /* 006858bf: mov dword ptr [ebp + 0x50], edi */ W32((u32)(r_ebp+0x50u), r_edi);
    /* 006858c2: mov dword ptr [ebp + 0x54], edi */ W32((u32)(r_ebp+0x54u), r_edi);
L_006858c5:; BB(0x006858c5);
    /* 006858c5: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 006858c9: mov esi, dword ptr [ebp + 0x50] */ r_esi = R32((u32)(r_ebp+0x50u));
    /* 006858cc: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 006858d0: mov edx, dword ptr [ebp + 0x54] */ r_edx = R32((u32)(r_ebp+0x54u));
    /* 006858d3: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r; fC = (r < a); }
    /* 006858d5: mov dword ptr [ebp + 0x50], esi */ W32((u32)(r_ebp+0x50u), r_esi);
    /* 006858d8: mov esi, dword ptr [esp + 0xa0] */ r_esi = R32((u32)(r_esp+0xa0u));
    /* 006858df: adc edx, ecx */ { u32 c = fC; u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b + c) & 0xffffffffu; r_edx = r;  }
    /* 006858e1: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006858e3: mov dword ptr [ebp + 0x54], edx */ W32((u32)(r_ebp+0x54u), r_edx);
    /* 006858e6: jg 0x68592b */ if ((!fZ&&fS==fO)) goto L_0068592b;
L_006858e8:; BB(0x006858e8);
    /* 006858e8: jl 0x6858f8 */ if ((fS!=fO)) goto L_006858f8;
L_006858ea:; BB(0x006858ea);
    /* 006858ea: mov eax, dword ptr [ebp + 0x50] */ r_eax = R32((u32)(r_ebp+0x50u));
    /* 006858ed: mov ecx, dword ptr [esp + 0x9c] */ r_ecx = R32((u32)(r_esp+0x9cu));
    /* 006858f4: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006858f6: ja 0x68592b */ if ((!fC&&!fZ)) goto L_0068592b;
L_006858f8:; BB(0x006858f8);
    /* 006858f8: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006858fa: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006858fb: call 0x684f70 */ r_esp -= 4; W32(r_esp, 0x685900u); f_00684f70();
    /* 00685900: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00685903: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00685905: jg 0x68592b */ if ((!fZ&&fS==fO)) goto L_0068592b;
L_00685907:; BB(0x00685907);
    /* 00685907: jl 0x685912 */ if ((fS!=fO)) goto L_00685912;
L_00685909:; BB(0x00685909);
    /* 00685909: cmp dword ptr [esp + 0x9c], eax */ {  u32 a = R32((u32)(r_esp+0x9cu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00685910: ja 0x68592b */ if ((!fC&&!fZ)) goto L_0068592b;
L_00685912:; BB(0x00685912);
    /* 00685912: mov dword ptr [ebp + 0x68], edi */ W32((u32)(r_ebp+0x68u), r_edi);
    /* 00685915: mov dword ptr [ebp + 0x6c], edi */ W32((u32)(r_ebp+0x6cu), r_edi);
    /* 00685918: mov dword ptr [ebp + 0x70], edi */ W32((u32)(r_ebp+0x70u), r_edi);
    /* 0068591b: mov dword ptr [ebp + 0x74], edi */ W32((u32)(r_ebp+0x74u), r_edi);
    /* 0068591e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068591f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00685920: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00685921: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00685923: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00685924: add esp, 0x84 */ {  u32 a = r_esp; u32 b = 0x84u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068592a: ret  */ FN_RET(0x00685380); r_esp += 4; return;
L_0068592b:; BB(0x0068592b);
    /* 0068592b: mov dword ptr [esp + 0x18], 0xffffff7f */ W32((u32)(r_esp+0x18u), 0xffffff7fu);
L_00685933:; BB(0x00685933);
    /* 00685933: mov dword ptr [esp + 0x1c], 0xffffffff */ W32((u32)(r_esp+0x1cu), 0xffffffffu);
L_0068593b:; BB(0x0068593b);
    /* 0068593b: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0068593e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068593f: mov dword ptr [ebp + 0x50], eax */ W32((u32)(r_ebp+0x50u), r_eax);
    /* 00685942: mov dword ptr [ebp + 0x54], eax */ W32((u32)(r_ebp+0x54u), r_eax);
    /* 00685945: call 0x684f40 */ r_esp -= 4; W32(r_esp, 0x68594au); f_00684f40();
    /* 0068594a: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0068594e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00685951: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00685952: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00685953: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00685954: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00685955: add esp, 0x84 */ {  u32 a = r_esp; u32 b = 0x84u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068595b: ret  */ FN_RET(0x00685380); r_esp += 4; return;
L_0068595c:; BB(0x0068595c);
    /* 0068595c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068595d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068595e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068595f: mov eax, 0xffffff7d */ r_eax = 0xffffff7du;
    /* 00685964: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00685965: add esp, 0x84 */ {  u32 a = r_esp; u32 b = 0x84u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068596b: ret  */ FN_RET(0x00685380); r_esp += 4; return;
}

void f_00685970(void) /* sub_685970 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00685970);
    /* 00685970: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00685971: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00685972: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 00685976: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00685977: mov eax, dword ptr [esi + 0x58] */ r_eax = R32((u32)(r_esi+0x58u));
    /* 0068597a: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0068597d: jg 0x6859e4 */ if ((!fZ&&fS==fO)) goto L_006859e4;
L_0068597f:; BB(0x0068597f);
    /* 0068597f: jge 0x68598a */ if ((fS==fO)) goto L_0068598a;
L_00685981:; BB(0x00685981);
    /* 00685981: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00685982: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00685983: mov eax, 0xffffff7f */ r_eax = 0xffffff7fu;
    /* 00685988: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00685989: ret  */ FN_RET(0x00685970); r_esp += 4; return;
L_0068598a:; BB(0x0068598a);
    /* 0068598a: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 0068598d: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0068598f: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00685991: lea edi, [esi + 0x1e0] */ r_edi = (u32)(r_esi+0x1e0u);
    /* 00685997: je 0x6859a7 */ if (fZ) goto L_006859a7;
L_00685999:; BB(0x00685999);
    /* 00685999: mov eax, dword ptr [esi + 0x60] */ r_eax = R32((u32)(r_esi+0x60u));
    /* 0068599c: mov edx, dword ptr [esi + 0x48] */ r_edx = R32((u32)(r_esi+0x48u));
    /* 0068599f: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 006859a2: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006859a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006859a5: jmp 0x6859ab */ goto L_006859ab;
L_006859a7:; BB(0x006859a7);
    /* 006859a7: mov ecx, dword ptr [esi + 0x48] */ r_ecx = R32((u32)(r_esi+0x48u));
    /* 006859aa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
L_006859ab:; BB(0x006859ab);
    /* 006859ab: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006859ac: call 0x6915c0 */ r_esp -= 4; W32(r_esp, 0x6859b1u); f_006915c0();
    /* 006859b1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006859b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006859b6: je 0x6859c1 */ if (fZ) goto L_006859c1;
L_006859b8:; BB(0x006859b8);
    /* 006859b8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006859b9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006859ba: mov eax, 0xffffff77 */ r_eax = 0xffffff77u;
    /* 006859bf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006859c0: ret  */ FN_RET(0x00685970); r_esp += 4; return;
L_006859c1:; BB(0x006859c1);
    /* 006859c1: lea edx, [esi + 0x250] */ r_edx = (u32)(r_esi+0x250u);
    /* 006859c7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006859c8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006859c9: call 0x690df0 */ r_esp -= 4; W32(r_esp, 0x6859ceu); f_00690df0();
    /* 006859ce: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006859d1: mov dword ptr [esi + 0x58], 4 */ W32((u32)(r_esi+0x58u), 0x4u);
    /* 006859d8: mov dword ptr [esi + 0x68], ebx */ W32((u32)(r_esi+0x68u), r_ebx);
    /* 006859db: mov dword ptr [esi + 0x6c], ebx */ W32((u32)(r_esi+0x6cu), r_ebx);
    /* 006859de: mov dword ptr [esi + 0x70], ebx */ W32((u32)(r_esi+0x70u), r_ebx);
    /* 006859e1: mov dword ptr [esi + 0x74], ebx */ W32((u32)(r_esi+0x74u), r_ebx);
L_006859e4:; BB(0x006859e4);
    /* 006859e4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006859e5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006859e6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006859e8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006859e9: ret  */ FN_RET(0x00685970); r_esp += 4; return;
}

void f_006859f0(void) /* sub_6859F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006859f0);
    /* 006859f0: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006859f3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006859f4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006859f5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006859f6: mov esi, dword ptr [esp + 0x40] */ r_esi = R32((u32)(r_esp+0x40u));
    /* 006859fa: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
L_006859fb:; BB(0x006859fb);
    /* 006859fb: cmp dword ptr [esi + 0x58], 4 */ {  u32 a = R32((u32)(r_esi+0x58u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006859ff: jne 0x685a6f */ if (!fZ) goto L_00685a6f;
L_00685a01:; BB(0x00685a01);
    /* 00685a01: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 00685a05: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00685a07: jne 0x685a0d */ if (!fZ) goto L_00685a0d;
L_00685a09:; BB(0x00685a09);
    /* 00685a09: lea edi, [esp + 0x20] */ r_edi = (u32)(r_esp+0x20u);
L_00685a0d:; BB(0x00685a0d);
    /* 00685a0d: lea eax, [esi + 0x78] */ r_eax = (u32)(r_esi+0x78u);
    /* 00685a10: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00685a11: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00685a12: call 0x686ac0 */ r_esp -= 4; W32(r_esp, 0x685a17u); f_00686ac0();
    /* 00685a17: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00685a1a: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00685a1d: mov dword ptr [esp + 0x48], 0 */ W32((u32)(r_esp+0x48u), 0x0u);
    /* 00685a25: je 0x685bb2 */ if (fZ) goto L_00685bb2;
L_00685a2b:; BB(0x00685a2b);
    /* 00685a2b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00685a2d: jle 0x685a6f */ if ((fZ||fS!=fO)) goto L_00685a6f;
L_00685a2f:; BB(0x00685a2f);
    /* 00685a2f: mov ebx, dword ptr [edi + 0x10] */ r_ebx = R32((u32)(r_edi+0x10u));
    /* 00685a32: mov ebp, dword ptr [edi + 0x14] */ r_ebp = R32((u32)(r_edi+0x14u));
    /* 00685a35: lea eax, [esi + 0x250] */ r_eax = (u32)(r_esi+0x250u);
    /* 00685a3b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00685a3c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00685a3d: call 0x691cd0 */ r_esp -= 4; W32(r_esp, 0x685a42u); f_00691cd0();
    /* 00685a42: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00685a45: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00685a47: jne 0x685a01 */ if (!fZ) goto L_00685a01;
L_00685a49:; BB(0x00685a49);
    /* 00685a49: lea eax, [esi + 0x1e0] */ r_eax = (u32)(r_esi+0x1e0u);
    /* 00685a4f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00685a51: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00685a52: call 0x691c40 */ r_esp -= 4; W32(r_esp, 0x685a57u); f_00691c40();
    /* 00685a57: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00685a5a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00685a5c: je 0x685bbf */ if (fZ) goto L_00685bbf;
L_00685a62:; BB(0x00685a62);
    /* 00685a62: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00685a63: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00685a64: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00685a65: mov eax, 0xffffff7f */ r_eax = 0xffffff7fu;
    /* 00685a6a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00685a6b: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00685a6e: ret  */ FN_RET(0x006859f0); r_esp += 4; return;
L_00685a6f:; BB(0x00685a6f);
    /* 00685a6f: cmp dword ptr [esi + 0x58], 2 */ {  u32 a = R32((u32)(r_esi+0x58u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00685a73: jl 0x685b05 */ if ((fS!=fO)) goto L_00685b05;
L_00685a79:; BB(0x00685a79);
    /* 00685a79: mov eax, dword ptr [esp + 0x4c] */ r_eax = R32((u32)(r_esp+0x4cu));
    /* 00685a7d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00685a7f: je 0x685c8e */ if (fZ) goto L_00685c8e;
L_00685a85:; BB(0x00685a85);
    /* 00685a85: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00685a87: lea ecx, [esp + 0x14] */ r_ecx = (u32)(r_esp+0x14u);
    /* 00685a8b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00685a8d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00685a8e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00685a8f: call 0x6845f0 */ r_esp -= 4; W32(r_esp, 0x685a94u); f_006845f0();
    /* 00685a94: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00685a97: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00685a99: jl 0x685c98 */ if ((fS!=fO)) goto L_00685c98;
L_00685a9f:; BB(0x00685a9f);
    /* 00685a9f: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00685aa3: lea eax, [edx*8] */ r_eax = (u32)(r_edx*8);
    /* 00685aaa: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 00685aae: mov eax, dword ptr [esi + 0x58] */ r_eax = R32((u32)(r_esi+0x58u));
    /* 00685ab1: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 00685ab5: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00685ab8: fadd qword ptr [esi + 0x68] */ ST(0) = ST(0) + R_F64((u32)(r_esi+0x68u));
    /* 00685abb: fstp qword ptr [esi + 0x68] */ W_F64((u32)(r_esi+0x68u), ST(0)); FPOP();
    /* 00685abe: jne 0x685b11 */ if (!fZ) goto L_00685b11;
L_00685ac0:; BB(0x00685ac0);
    /* 00685ac0: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 00685ac4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00685ac5: call 0x6862e0 */ r_esp -= 4; W32(r_esp, 0x685acau); f_006862e0();
    /* 00685aca: mov ecx, dword ptr [esi + 0x5c] */ r_ecx = R32((u32)(r_esi+0x5cu));
    /* 00685acd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00685ad0: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00685ad2: je 0x685b05 */ if (fZ) goto L_00685b05;
L_00685ad4:; BB(0x00685ad4);
    /* 00685ad4: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 00685ad8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00685ada: je 0x685c98 */ if (fZ) goto L_00685c98;
L_00685ae0:; BB(0x00685ae0);
    /* 00685ae0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00685ae1: call 0x684f40 */ r_esp -= 4; W32(r_esp, 0x685ae6u); f_00684f40();
    /* 00685ae6: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 00685ae9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00685aec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00685aee: jne 0x685b05 */ if (!fZ) goto L_00685b05;
L_00685af0:; BB(0x00685af0);
    /* 00685af0: mov edx, dword ptr [esi + 0x48] */ r_edx = R32((u32)(r_esi+0x48u));
    /* 00685af3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00685af4: call 0x690710 */ r_esp -= 4; W32(r_esp, 0x685af9u); f_00690710();
    /* 00685af9: mov eax, dword ptr [esi + 0x4c] */ r_eax = R32((u32)(r_esi+0x4cu));
    /* 00685afc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00685afd: call 0x690670 */ r_esp -= 4; W32(r_esp, 0x685b02u); f_00690670();
    /* 00685b02: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00685b05:; BB(0x00685b05);
    /* 00685b05: mov eax, dword ptr [esi + 0x58] */ r_eax = R32((u32)(r_esi+0x58u));
    /* 00685b08: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00685b0b: je 0x685b9c */ if (fZ) goto L_00685b9c;
L_00685b11:; BB(0x00685b11);
    /* 00685b11: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00685b14: jge 0x685b8b */ if ((fS==fO)) goto L_00685b8b;
L_00685b16:; BB(0x00685b16);
    /* 00685b16: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 00685b19: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00685b1b: je 0x685b66 */ if (fZ) goto L_00685b66;
L_00685b1d:; BB(0x00685b1d);
    /* 00685b1d: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 00685b21: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00685b22: call 0x6862e0 */ r_esp -= 4; W32(r_esp, 0x685b27u); f_006862e0();
    /* 00685b27: mov edx, dword ptr [esi + 0x34] */ r_edx = R32((u32)(r_esi+0x34u));
    /* 00685b2a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00685b2d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00685b2f: mov dword ptr [esi + 0x5c], eax */ W32((u32)(r_esi+0x5cu), r_eax);
    /* 00685b32: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00685b34: jle 0x685b45 */ if ((fZ||fS!=fO)) goto L_00685b45;
L_00685b36:; BB(0x00685b36);
    /* 00685b36: mov edi, dword ptr [esi + 0x40] */ r_edi = R32((u32)(r_esi+0x40u));
L_00685b39:; BB(0x00685b39);
    /* 00685b39: cmp dword ptr [edi], eax */ {  u32 a = R32((u32)(r_edi)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00685b3b: je 0x685b45 */ if (fZ) goto L_00685b45;
L_00685b3d:; BB(0x00685b3d);
    /* 00685b3d: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00685b3e: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00685b41: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00685b43: jl 0x685b39 */ if ((fS!=fO)) goto L_00685b39;
L_00685b45:; BB(0x00685b45);
    /* 00685b45: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00685b47: je 0x685ca5 */ if (fZ) goto L_00685ca5;
L_00685b4d:; BB(0x00685b4d);
    /* 00685b4d: lea edx, [esi + 0x78] */ r_edx = (u32)(r_esi+0x78u);
    /* 00685b50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00685b51: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00685b52: mov dword ptr [esi + 0x60], ecx */ W32((u32)(r_esi+0x60u), r_ecx);
    /* 00685b55: call 0x686aa0 */ r_esp -= 4; W32(r_esp, 0x685b5au); f_00686aa0();
    /* 00685b5a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00685b5d: mov dword ptr [esi + 0x58], 3 */ W32((u32)(r_esi+0x58u), 0x3u);
    /* 00685b64: jmp 0x685b8b */ goto L_00685b8b;
L_00685b66:; BB(0x00685b66);
    /* 00685b66: mov edx, dword ptr [esi + 0x4c] */ r_edx = R32((u32)(r_esi+0x4cu));
    /* 00685b69: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 00685b6d: lea ecx, [esi + 0x5c] */ r_ecx = (u32)(r_esi+0x5cu);
    /* 00685b70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00685b71: mov eax, dword ptr [esi + 0x48] */ r_eax = R32((u32)(r_esi+0x48u));
    /* 00685b74: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00685b75: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00685b76: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00685b77: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00685b78: call 0x6844b0 */ r_esp -= 4; W32(r_esp, 0x685b7du); f_006844b0();
    /* 00685b7d: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00685b80: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00685b82: jne 0x685caa */ if (!fZ) goto L_00685caa;
L_00685b88:; BB(0x00685b88);
    /* 00685b88: inc dword ptr [esi + 0x60] */ { u32 ad = (u32)(r_esi+0x60u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_00685b8b:; BB(0x00685b8b);
    /* 00685b8b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00685b8c: call 0x685970 */ r_esp -= 4; W32(r_esp, 0x685b91u); f_00685970();
    /* 00685b91: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00685b94: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00685b96: jl 0x685caa */ if ((fS!=fO)) goto L_00685caa;
L_00685b9c:; BB(0x00685b9c);
    /* 00685b9c: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 00685ba0: lea edx, [esi + 0x78] */ r_edx = (u32)(r_esi+0x78u);
    /* 00685ba3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00685ba4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00685ba5: call 0x686760 */ r_esp -= 4; W32(r_esp, 0x685baau); f_00686760();
    /* 00685baa: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00685bad: jmp 0x6859fb */ goto L_006859fb;
L_00685bb2:; BB(0x00685bb2);
    /* 00685bb2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00685bb3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00685bb4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00685bb5: mov eax, 0xfffffffd */ r_eax = 0xfffffffdu;
    /* 00685bba: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00685bbb: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00685bbe: ret  */ FN_RET(0x006859f0); r_esp += 4; return;
L_00685bbf:; BB(0x00685bbf);
    /* 00685bbf: lea eax, [esi + 0x250] */ r_eax = (u32)(r_esi+0x250u);
    /* 00685bc5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00685bc6: lea eax, [esi + 0x1e0] */ r_eax = (u32)(r_esi+0x1e0u);
    /* 00685bcc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00685bcd: call 0x6915f0 */ r_esp -= 4; W32(r_esp, 0x685bd2u); f_006915f0();
    /* 00685bd2: lea eax, [esi + 0x1e0] */ r_eax = (u32)(r_esi+0x1e0u);
    /* 00685bd8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00685bda: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00685bdb: call 0x691c40 */ r_esp -= 4; W32(r_esp, 0x685be0u); f_00691c40();
    /* 00685be0: mov dword ptr [esp + 0x58], eax */ W32((u32)(r_esp+0x58u), r_eax);
    /* 00685be4: mov edx, ebx */ r_edx = r_ebx;
    /* 00685be6: fild dword ptr [esp + 0x58] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x58u)));
    /* 00685bea: and edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00685bec: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00685bef: fadd qword ptr [esi + 0x70] */ ST(0) = ST(0) + R_F64((u32)(r_esi+0x70u));
    /* 00685bf2: fstp qword ptr [esi + 0x70] */ W_F64((u32)(r_esi+0x70u), ST(0)); FPOP();
    /* 00685bf5: mov ecx, dword ptr [edi + 4] */ r_ecx = R32((u32)(r_edi+0x4u));
    /* 00685bf8: shl ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00685bfb: mov dword ptr [esp + 0x48], ecx */ W32((u32)(r_esp+0x48u), r_ecx);
    /* 00685bff: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00685c02: fild dword ptr [esp + 0x48] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x48u)));
    /* 00685c06: fadd qword ptr [esi + 0x68] */ ST(0) = ST(0) + R_F64((u32)(r_esi+0x68u));
    /* 00685c09: fstp qword ptr [esi + 0x68] */ W_F64((u32)(r_esi+0x68u), ST(0)); FPOP();
    /* 00685c0c: je 0x685c81 */ if (fZ) goto L_00685c81;
L_00685c0e:; BB(0x00685c0e);
    /* 00685c0e: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
    /* 00685c11: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00685c13: jne 0x685c81 */ if (!fZ) goto L_00685c81;
L_00685c15:; BB(0x00685c15);
    /* 00685c15: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 00685c18: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00685c1a: je 0x685c21 */ if (fZ) goto L_00685c21;
L_00685c1c:; BB(0x00685c1c);
    /* 00685c1c: mov edi, dword ptr [esi + 0x60] */ r_edi = R32((u32)(r_esi+0x60u));
    /* 00685c1f: jmp 0x685c23 */ goto L_00685c23;
L_00685c21:; BB(0x00685c21);
    /* 00685c21: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_00685c23:; BB(0x00685c23);
    /* 00685c23: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00685c25: je 0x685c3e */ if (fZ) goto L_00685c3e;
L_00685c27:; BB(0x00685c27);
    /* 00685c27: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00685c29: jle 0x685c3e */ if ((fZ||fS!=fO)) goto L_00685c3e;
L_00685c2b:; BB(0x00685c2b);
    /* 00685c2b: mov ecx, dword ptr [esi + 0x44] */ r_ecx = R32((u32)(r_esi+0x44u));
    /* 00685c2e: mov eax, edi */ r_eax = r_edi;
    /* 00685c30: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00685c33: mov edx, dword ptr [eax + ecx] */ r_edx = R32((u32)(r_eax+r_ecx));
    /* 00685c36: sub ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebx = r; fC = (a < b); }
    /* 00685c38: mov eax, dword ptr [eax + ecx + 4] */ r_eax = R32((u32)(r_eax+r_ecx+0x4u));
    /* 00685c3c: sbb ebp, eax */ { u32 c = fC; u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_ebp = r;  }
L_00685c3e:; BB(0x00685c3e);
    /* 00685c3e: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00685c40: jg 0x685c4c */ if ((!fZ&&fS==fO)) goto L_00685c4c;
L_00685c42:; BB(0x00685c42);
    /* 00685c42: jl 0x685c48 */ if ((fS!=fO)) goto L_00685c48;
L_00685c44:; BB(0x00685c44);
    /* 00685c44: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fC = 0; }
    /* 00685c46: jae 0x685c4c */ if (!fC) goto L_00685c4c;
L_00685c48:; BB(0x00685c48);
    /* 00685c48: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00685c4a: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_00685c4c:; BB(0x00685c4c);
    /* 00685c4c: lea eax, [esi + 0x1e0] */ r_eax = (u32)(r_esi+0x1e0u);
    /* 00685c52: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00685c54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00685c55: call 0x691c40 */ r_esp -= 4; W32(r_esp, 0x685c5au); f_00691c40();
    /* 00685c5a: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00685c5b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00685c5e: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r; fC = (a < b); }
    /* 00685c60: sbb ebp, edx */ { u32 c = fC; u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_ebp = r;  }
    /* 00685c62: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00685c64: jle 0x685c7b */ if ((fZ||fS!=fO)) goto L_00685c7b;
L_00685c66:; BB(0x00685c66);
    /* 00685c66: mov eax, dword ptr [esi + 0x44] */ r_eax = R32((u32)(r_esi+0x44u));
    /* 00685c69: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00685c6c:; BB(0x00685c6c);
    /* 00685c6c: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00685c6e: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00685c71: add ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebx = r; fC = (r < a); }
    /* 00685c73: adc ebp, edx */ { u32 c = fC; u32 a = r_ebp; u32 b = r_edx; u32 r = (a + b + c) & 0xffffffffu; r_ebp = r;  }
    /* 00685c75: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00685c78: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 00685c79: jne 0x685c6c */ if (!fZ) goto L_00685c6c;
L_00685c7b:; BB(0x00685c7b);
    /* 00685c7b: mov dword ptr [esi + 0x50], ebx */ W32((u32)(r_esi+0x50u), r_ebx);
    /* 00685c7e: mov dword ptr [esi + 0x54], ebp */ W32((u32)(r_esi+0x54u), r_ebp);
L_00685c81:; BB(0x00685c81);
    /* 00685c81: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00685c82: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00685c83: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00685c84: mov eax, 1 */ r_eax = 0x1u;
    /* 00685c89: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00685c8a: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00685c8d: ret  */ FN_RET(0x006859f0); r_esp += 4; return;
L_00685c8e:; BB(0x00685c8e);
    /* 00685c8e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00685c8f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00685c90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00685c91: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00685c93: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00685c94: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00685c97: ret  */ FN_RET(0x006859f0); r_esp += 4; return;
L_00685c98:; BB(0x00685c98);
    /* 00685c98: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00685c99: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00685c9a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00685c9b: mov eax, 0xfffffffe */ r_eax = 0xfffffffeu;
    /* 00685ca0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00685ca1: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00685ca4: ret  */ FN_RET(0x006859f0); r_esp += 4; return;
L_00685ca5:; BB(0x00685ca5);
    /* 00685ca5: mov eax, 0xffffff77 */ r_eax = 0xffffff77u;
L_00685caa:; BB(0x00685caa);
    /* 00685caa: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00685cab: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00685cac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00685cad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00685cae: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00685cb1: ret  */ FN_RET(0x006859f0); r_esp += 4; return;
}

void f_00685cc0(void) /* sub_685CC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00685cc0);
    /* 00685cc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00685cc1: mov ebp, esp */ r_ebp = r_esp;
    /* 00685cc3: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 00685cc6: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00685cc9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00685cca: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00685ccb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00685ccc: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 00685ccf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00685cd1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00685cd2: call 0x684f70 */ r_esp -= 4; W32(r_esp, 0x685cd7u); f_00684f70();
    /* 00685cd7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00685cd9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00685cda: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00685cde: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 00685ce2: call 0x684fe0 */ r_esp -= 4; W32(r_esp, 0x685ce7u); f_00684fe0();
    /* 00685ce7: mov eax, dword ptr [edi + 0x58] */ r_eax = R32((u32)(r_edi+0x58u));
    /* 00685cea: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00685ced: fstp qword ptr [esp + 0x18] */ W_F64((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00685cf1: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00685cf4: jl 0x685dba */ if ((fS!=fO)) goto L_00685dba;
L_00685cfa:; BB(0x00685cfa);
    /* 00685cfa: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 00685cfd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00685cff: jne 0x685d0d */ if (!fZ) goto L_00685d0d;
L_00685d01:; BB(0x00685d01);
    /* 00685d01: mov eax, 0xffffff76 */ r_eax = 0xffffff76u;
    /* 00685d06: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00685d07: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00685d08: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00685d09: mov esp, ebp */ r_esp = r_ebp;
    /* 00685d0b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00685d0c: ret  */ FN_RET(0x00685cc0); r_esp += 4; return;
L_00685d0d:; BB(0x00685d0d);
    /* 00685d0d: fld qword ptr [ebp + 0xc] */ FPUSH(R_F64((u32)(r_ebp+0xcu)));
    /* 00685d10: fcomp qword ptr [0x6b2c50] */ fx_compare(ST(0), R_F64((u32)(0x6b2c50u))); FPOP();
    /* 00685d16: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00685d18: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 00685d1b: jnp 0x685dba */ if (!fP) goto L_00685dba;
L_00685d21:; BB(0x00685d21);
    /* 00685d21: fld qword ptr [ebp + 0xc] */ FPUSH(R_F64((u32)(r_ebp+0xcu)));
    /* 00685d24: fcomp qword ptr [esp + 0x18] */ fx_compare(ST(0), R_F64((u32)(r_esp+0x18u))); FPOP();
    /* 00685d28: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00685d2a: and eax, 0x4100 */ {  u32 a = r_eax; u32 b = 0x4100u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00685d2f: je 0x685dba */ if (fZ) goto L_00685dba;
L_00685d35:; BB(0x00685d35);
    /* 00685d35: mov esi, dword ptr [edi + 0x34] */ r_esi = R32((u32)(r_edi+0x34u));
    /* 00685d38: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r; fS = ((r >> 31) & 1); }
    /* 00685d39: js 0x685d8a */ if (fS) goto L_00685d8a;
L_00685d3b:; BB(0x00685d3b);
    /* 00685d3b: mov ecx, dword ptr [edi + 0x44] */ r_ecx = R32((u32)(r_edi+0x44u));
    /* 00685d3e: mov eax, esi */ r_eax = r_esi;
    /* 00685d40: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00685d43: lea ebx, [ecx + eax + 8] */ r_ebx = (u32)(r_ecx+r_eax+0x8u);
L_00685d47:; BB(0x00685d47);
    /* 00685d47: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00685d49: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00685d4d: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 00685d51: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); }
    /* 00685d53: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00685d57: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 00685d5a: sbb ecx, eax */ { u32 c = fC; u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 00685d5c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00685d5d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00685d5e: mov dword ptr [esp + 0x1c], ecx */ W32((u32)(r_esp+0x1cu), r_ecx);
    /* 00685d62: call 0x684fe0 */ r_esp -= 4; W32(r_esp, 0x685d67u); f_00684fe0();
    /* 00685d67: fsubr qword ptr [esp + 0x20] */ ST(0) = R_F64((u32)(r_esp+0x20u)) - ST(0);
    /* 00685d6b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00685d6e: fstp qword ptr [esp + 0x18] */ W_F64((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00685d72: fld qword ptr [ebp + 0xc] */ FPUSH(R_F64((u32)(r_ebp+0xcu)));
    /* 00685d75: fcomp qword ptr [esp + 0x18] */ fx_compare(ST(0), R_F64((u32)(r_esp+0x18u))); FPOP();
    /* 00685d79: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00685d7b: and eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00685d80: je 0x685d8a */ if (fZ) goto L_00685d8a;
L_00685d82:; BB(0x00685d82);
    /* 00685d82: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00685d83: sub ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00685d86: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00685d88: jge 0x685d47 */ if ((fS==fO)) goto L_00685d47;
L_00685d8a:; BB(0x00685d8a);
    /* 00685d8a: mov ecx, dword ptr [edi + 0x48] */ r_ecx = R32((u32)(r_edi+0x48u));
    /* 00685d8d: shl esi, 5 */ { u32 c = (5u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 00685d90: fild dword ptr [ecx + esi + 8] */ FPUSH((long double)(i32)R32((u32)(r_ecx+r_esi+0x8u)));
    /* 00685d94: fld qword ptr [ebp + 0xc] */ FPUSH(R_F64((u32)(r_ebp+0xcu)));
    /* 00685d97: fsub qword ptr [esp + 0x18] */ ST(0) = ST(0) - R_F64((u32)(r_esp+0x18u));
    /* 00685d9b: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00685d9d: fild qword ptr [esp + 0x10] */ FPUSH((long double)(i64)R64((u32)(r_esp+0x10u)));
    /* 00685da1: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00685da3: call 0x687450 */ r_esp -= 4; W32(r_esp, 0x685da8u); f_00687450();
    /* 00685da8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00685da9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00685daa: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00685dab: call 0x685380 */ r_esp -= 4; W32(r_esp, 0x685db0u); f_00685380();
    /* 00685db0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00685db3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00685db4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00685db5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00685db6: mov esp, ebp */ r_esp = r_ebp;
    /* 00685db8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00685db9: ret  */ FN_RET(0x00685cc0); r_esp += 4; return;
L_00685dba:; BB(0x00685dba);
    /* 00685dba: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00685dbb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00685dbc: mov eax, 0xffffff7d */ r_eax = 0xffffff7du;
    /* 00685dc1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00685dc2: mov esp, ebp */ r_esp = r_ebp;
    /* 00685dc4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00685dc5: ret  */ FN_RET(0x00685cc0); r_esp += 4; return;
}

void f_00685dd0(void) /* sub_685DD0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00685dd0);
    /* 00685dd0: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00685dd4: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 00685dd7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00685dd9: je 0x685dfd */ if (fZ) goto L_00685dfd;
L_00685ddb:; BB(0x00685ddb);
    /* 00685ddb: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00685ddf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00685de1: jge 0x685df5 */ if ((fS==fO)) goto L_00685df5;
L_00685de3:; BB(0x00685de3);
    /* 00685de3: cmp dword ptr [ecx + 0x58], 3 */ {  u32 a = R32((u32)(r_ecx+0x58u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00685de7: jl 0x685dfd */ if ((fS!=fO)) goto L_00685dfd;
L_00685de9:; BB(0x00685de9);
    /* 00685de9: mov eax, dword ptr [ecx + 0x60] */ r_eax = R32((u32)(r_ecx+0x60u));
L_00685dec:; BB(0x00685dec);
    /* 00685dec: mov edx, dword ptr [ecx + 0x48] */ r_edx = R32((u32)(r_ecx+0x48u));
    /* 00685def: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00685df2: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00685df4: ret  */ FN_RET(0x00685dd0); r_esp += 4; return;
L_00685df5:; BB(0x00685df5);
    /* 00685df5: cmp eax, dword ptr [ecx + 0x34] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x34u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00685df8: jl 0x685dec */ if ((fS!=fO)) goto L_00685dec;
L_00685dfa:; BB(0x00685dfa);
    /* 00685dfa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00685dfc: ret  */ FN_RET(0x00685dd0); r_esp += 4; return;
L_00685dfd:; BB(0x00685dfd);
    /* 00685dfd: mov eax, dword ptr [ecx + 0x48] */ r_eax = R32((u32)(r_ecx+0x48u));
    /* 00685e00: ret  */ FN_RET(0x00685dd0); r_esp += 4; return;
}

void f_00685e10(void) /* sub_685E10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00685e10);
    /* 00685e10: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00685e14: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 00685e17: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00685e19: je 0x685e3d */ if (fZ) goto L_00685e3d;
L_00685e1b:; BB(0x00685e1b);
    /* 00685e1b: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00685e1f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00685e21: jge 0x685e35 */ if ((fS==fO)) goto L_00685e35;
L_00685e23:; BB(0x00685e23);
    /* 00685e23: cmp dword ptr [ecx + 0x58], 3 */ {  u32 a = R32((u32)(r_ecx+0x58u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00685e27: jl 0x685e3d */ if ((fS!=fO)) goto L_00685e3d;
L_00685e29:; BB(0x00685e29);
    /* 00685e29: mov eax, dword ptr [ecx + 0x60] */ r_eax = R32((u32)(r_ecx+0x60u));
L_00685e2c:; BB(0x00685e2c);
    /* 00685e2c: mov edx, dword ptr [ecx + 0x4c] */ r_edx = R32((u32)(r_ecx+0x4cu));
    /* 00685e2f: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00685e32: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00685e34: ret  */ FN_RET(0x00685e10); r_esp += 4; return;
L_00685e35:; BB(0x00685e35);
    /* 00685e35: cmp eax, dword ptr [ecx + 0x34] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x34u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00685e38: jl 0x685e2c */ if ((fS!=fO)) goto L_00685e2c;
L_00685e3a:; BB(0x00685e3a);
    /* 00685e3a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00685e3c: ret  */ FN_RET(0x00685e10); r_esp += 4; return;
L_00685e3d:; BB(0x00685e3d);
    /* 00685e3d: mov eax, dword ptr [ecx + 0x4c] */ r_eax = R32((u32)(r_ecx+0x4cu));
    /* 00685e40: ret  */ FN_RET(0x00685e10); r_esp += 4; return;
}

void f_00685e50(void) /* sub_685E50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00685e50);
    /* 00685e50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00685e51: mov ebp, esp */ r_ebp = r_esp;
    /* 00685e53: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 00685e56: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00685e59: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00685e5a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00685e5b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00685e5c: call 0x686200 */ r_esp -= 4; W32(r_esp, 0x685e61u); f_00686200();
    /* 00685e61: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 00685e64: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00685e68: cmp dword ptr [esi + 0x58], 2 */ {  u32 a = R32((u32)(r_esi+0x58u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00685e6c: jge 0x685e7a */ if ((fS==fO)) goto L_00685e7a;
L_00685e6e:; BB(0x00685e6e);
    /* 00685e6e: mov eax, 0xffffff7d */ r_eax = 0xffffff7du;
    /* 00685e73: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00685e74: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00685e75: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00685e76: mov esp, ebp */ r_esp = r_ebp;
    /* 00685e78: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00685e79: ret  */ FN_RET(0x00685e50); r_esp += 4; return;
L_00685e7a:; BB(0x00685e7a);
    /* 00685e7a: mov edi, 4 */ r_edi = 0x4u;
L_00685e7f:; BB(0x00685e7f);
    /* 00685e7f: cmp dword ptr [esi + 0x58], edi */ {  u32 a = R32((u32)(r_esi+0x58u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00685e82: jne 0x685ea2 */ if (!fZ) goto L_00685ea2;
L_00685e84:; BB(0x00685e84);
    /* 00685e84: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 00685e88: lea ecx, [esi + 0x1e0] */ r_ecx = (u32)(r_esi+0x1e0u);
    /* 00685e8e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00685e8f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00685e90: call 0x691c40 */ r_esp -= 4; W32(r_esp, 0x685e95u); f_00691c40();
    /* 00685e95: mov ebx, eax */ r_ebx = r_eax;
    /* 00685e97: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00685e9a: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00685e9c: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 00685ea0: jne 0x685eca */ if (!fZ) goto L_00685eca;
L_00685ea2:; BB(0x00685ea2);
    /* 00685ea2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00685ea4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00685ea6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00685ea8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00685ea9: call 0x6859f0 */ r_esp -= 4; W32(r_esp, 0x685eaeu); f_006859f0();
    /* 00685eae: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00685eb1: cmp eax, -2 */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00685eb4: je 0x685ec1 */ if (fZ) goto L_00685ec1;
L_00685eb6:; BB(0x00685eb6);
    /* 00685eb6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00685eb8: jg 0x685e7f */ if ((!fZ&&fS==fO)) goto L_00685e7f;
L_00685eba:; BB(0x00685eba);
    /* 00685eba: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00685ebb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00685ebc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00685ebd: mov esp, ebp */ r_esp = r_ebp;
    /* 00685ebf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00685ec0: ret  */ FN_RET(0x00685e50); r_esp += 4; return;
L_00685ec1:; BB(0x00685ec1);
    /* 00685ec1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00685ec3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00685ec4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00685ec5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00685ec6: mov esp, ebp */ r_esp = r_ebp;
    /* 00685ec8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00685ec9: ret  */ FN_RET(0x00685e50); r_esp += 4; return;
L_00685eca:; BB(0x00685eca);
    /* 00685eca: jle 0x6861f6 */ if ((fZ||fS!=fO)) goto L_006861f6;
L_00685ed0:; BB(0x00685ed0);
    /* 00685ed0: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00685ed2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00685ed3: call 0x685dd0 */ r_esp -= 4; W32(r_esp, 0x685ed8u); f_00685dd0();
    /* 00685ed8: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00685edb: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 00685ede: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00685ee2: imul eax, ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00685ee5: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 00685ee9: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00685eec: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00685eed: idiv dword ptr [esp + 0x2c] */ { i32 d = (i32)R32((u32)(r_esp+0x2cu)); if (!d) UNSUP(0x00685eed, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00685eed, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00685ef1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00685ef4: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00685ef6: jle 0x685efe */ if ((fZ||fS!=fO)) goto L_00685efe;
L_00685ef8:; BB(0x00685ef8);
    /* 00685ef8: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00685efc: mov ebx, eax */ r_ebx = r_eax;
L_00685efe:; BB(0x00685efe);
    /* 00685efe: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00685f00: jg 0x685f0e */ if ((!fZ&&fS==fO)) goto L_00685f0e;
L_00685f02:; BB(0x00685f02);
    /* 00685f02: mov eax, 0xffffff7d */ r_eax = 0xffffff7du;
    /* 00685f07: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00685f08: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00685f09: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00685f0a: mov esp, ebp */ r_esp = r_ebp;
    /* 00685f0c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00685f0d: ret  */ FN_RET(0x00685e50); r_esp += 4; return;
L_00685f0e:; BB(0x00685f0e);
    /* 00685f0e: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00685f11: jne 0x685f8e */ if (!fZ) goto L_00685f8e;
L_00685f13:; BB(0x00685f13);
    /* 00685f13: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 00685f16: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); fC = (b != 0); }
    /* 00685f18: sbb edx, edx */ { u32 c = fC; u32 a = r_edx; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
    /* 00685f1a: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00685f1c: and edx, 0xffffff80 */ {  u32 a = r_edx; u32 b = 0xffffff80u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00685f1f: add edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00685f25: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00685f27: jle 0x6861b9 */ if ((fZ||fS!=fO)) goto L_006861b9;
L_00685f2d:; BB(0x00685f2d);
    /* 00685f2d: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
L_00685f30:; BB(0x00685f30);
    /* 00685f30: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 00685f34: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00685f36: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00685f38: jle 0x685f84 */ if ((fZ||fS!=fO)) goto L_00685f84;
L_00685f3a:; BB(0x00685f3a);
    /* 00685f3a: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 00685f3e: mov ecx, dword ptr [ecx + eax*4] */ r_ecx = R32((u32)(r_ecx+r_eax*4));
    /* 00685f41: fld dword ptr [ecx + edi*4] */ FPUSH(R_F32((u32)(r_ecx+r_edi*4)));
    /* 00685f44: fmul dword ptr [0x6e4f9c] */ ST(0) = ST(0) * R_F32((u32)(0x6e4f9cu));
    /* 00685f4a: fstp qword ptr [esp + 0x28] */ W_F64((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 00685f4e: fld qword ptr [esp + 0x28] */ FPUSH(R_F64((u32)(r_esp+0x28u)));
    /* 00685f52: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 00685f56: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 00685f5a: cmp ecx, 0x7f */ {  u32 a = r_ecx; u32 b = 0x7fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00685f5d: jle 0x685f66 */ if ((fZ||fS!=fO)) goto L_00685f66;
L_00685f5f:; BB(0x00685f5f);
    /* 00685f5f: mov ecx, 0x7f */ r_ecx = 0x7fu;
    /* 00685f64: jmp 0x685f70 */ goto L_00685f70;
L_00685f66:; BB(0x00685f66);
    /* 00685f66: cmp ecx, -0x80 */ {  u32 a = r_ecx; u32 b = 0xffffff80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00685f69: jge 0x685f70 */ if ((fS==fO)) goto L_00685f70;
L_00685f6b:; BB(0x00685f6b);
    /* 00685f6b: mov ecx, 0xffffff80 */ r_ecx = 0xffffff80u;
L_00685f70:; BB(0x00685f70);
    /* 00685f70: mov bl, dl */ r_ebx = (r_ebx & 0xffffff00u) | (((u8)r_edx) & 0xffu);
    /* 00685f72: add bl, cl */ {  u32 a = (u8)r_ebx; u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00685f74: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 00685f78: mov byte ptr [esi], bl */ W8((u32)(r_esi), (u8)r_ebx);
    /* 00685f7a: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00685f7b: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00685f7c: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00685f7e: jl 0x685f3a */ if ((fS!=fO)) goto L_00685f3a;
L_00685f80:; BB(0x00685f80);
    /* 00685f80: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
L_00685f84:; BB(0x00685f84);
    /* 00685f84: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00685f85: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00685f87: jl 0x685f30 */ if ((fS!=fO)) goto L_00685f30;
L_00685f89:; BB(0x00685f89);
    /* 00685f89: jmp 0x6861b6 */ goto L_006861b6;
L_00685f8e:; BB(0x00685f8e);
    /* 00685f8e: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 00685f91: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00685f94: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 00685f98: mov edx, eax */ r_edx = r_eax;
    /* 00685f9a: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); fC = (b != 0); }
    /* 00685f9c: sbb edx, edx */ { u32 c = fC; u32 a = r_edx; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
    /* 00685f9e: and edx, 0xffff8000 */ {  u32 a = r_edx; u32 b = 0xffff8000u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00685fa4: add edx, 0x8000 */ {  u32 a = r_edx; u32 b = 0x8000u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00685faa: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00685fac: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 00685fb0: jne 0x6860d8 */ if (!fZ) goto L_006860d8;
L_00685fb6:; BB(0x00685fb6);
    /* 00685fb6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00685fb8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00685fba: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00685fbe: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 00685fc2: je 0x68604b */ if (fZ) goto L_0068604b;
L_00685fc8:; BB(0x00685fc8);
    /* 00685fc8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00685fca: jle 0x6861b9 */ if ((fZ||fS!=fO)) goto L_006861b9;
L_00685fd0:; BB(0x00685fd0);
    /* 00685fd0: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00685fd3: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
L_00685fd7:; BB(0x00685fd7);
    /* 00685fd7: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00685fdb: mov esi, dword ptr [eax + ecx*4] */ r_esi = R32((u32)(r_eax+r_ecx*4));
    /* 00685fde: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00685fe0: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00685fe2: jle 0x68602e */ if ((fZ||fS!=fO)) goto L_0068602e;
L_00685fe4:; BB(0x00685fe4);
    /* 00685fe4: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 00685fe8: lea edi, [ecx + ecx] */ r_edi = (u32)(r_ecx+r_ecx);
L_00685feb:; BB(0x00685feb);
    /* 00685feb: fld dword ptr [esi + eax*4] */ FPUSH(R_F32((u32)(r_esi+r_eax*4)));
    /* 00685fee: fmul dword ptr [0x6e4f98] */ ST(0) = ST(0) * R_F32((u32)(0x6e4f98u));
    /* 00685ff4: fstp qword ptr [esp + 0x28] */ W_F64((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 00685ff8: fld qword ptr [esp + 0x28] */ FPUSH(R_F64((u32)(r_esp+0x28u)));
    /* 00685ffc: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 00686000: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 00686004: cmp ecx, 0x7fff */ {  u32 a = r_ecx; u32 b = 0x7fffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0068600a: jle 0x686013 */ if ((fZ||fS!=fO)) goto L_00686013;
L_0068600c:; BB(0x0068600c);
    /* 0068600c: mov ecx, 0x7fff */ r_ecx = 0x7fffu;
    /* 00686011: jmp 0x686020 */ goto L_00686020;
L_00686013:; BB(0x00686013);
    /* 00686013: cmp ecx, 0xffff8000 */ {  u32 a = r_ecx; u32 b = 0xffff8000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00686019: jge 0x686020 */ if ((fS==fO)) goto L_00686020;
L_0068601b:; BB(0x0068601b);
    /* 0068601b: mov ecx, 0xffff8000 */ r_ecx = 0xffff8000u;
L_00686020:; BB(0x00686020);
    /* 00686020: mov word ptr [edx], cx */ W16((u32)(r_edx), (u16)r_ecx);
    /* 00686023: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00686025: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00686026: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00686028: jl 0x685feb */ if ((fS!=fO)) goto L_00685feb;
L_0068602a:; BB(0x0068602a);
    /* 0068602a: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
L_0068602e:; BB(0x0068602e);
    /* 0068602e: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00686032: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00686036: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00686037: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0068603a: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0068603c: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 00686040: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 00686044: jl 0x685fd7 */ if ((fS!=fO)) goto L_00685fd7;
L_00686046:; BB(0x00686046);
    /* 00686046: jmp 0x6861b6 */ goto L_006861b6;
L_0068604b:; BB(0x0068604b);
    /* 0068604b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0068604d: jle 0x6861b9 */ if ((fZ||fS!=fO)) goto L_006861b9;
L_00686053:; BB(0x00686053);
    /* 00686053: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00686056: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
L_0068605a:; BB(0x0068605a);
    /* 0068605a: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0068605e: mov esi, dword ptr [eax + ecx*4] */ r_esi = R32((u32)(r_eax+r_ecx*4));
    /* 00686061: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00686063: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00686065: jle 0x6860bb */ if ((fZ||fS!=fO)) goto L_006860bb;
L_00686067:; BB(0x00686067);
    /* 00686067: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 0068606b: lea edi, [ecx + ecx] */ r_edi = (u32)(r_ecx+r_ecx);
L_0068606e:; BB(0x0068606e);
    /* 0068606e: fld dword ptr [esi + eax*4] */ FPUSH(R_F32((u32)(r_esi+r_eax*4)));
    /* 00686071: fmul dword ptr [0x6e4f98] */ ST(0) = ST(0) * R_F32((u32)(0x6e4f98u));
    /* 00686077: fstp qword ptr [esp + 0x30] */ W_F64((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0068607b: fld qword ptr [esp + 0x30] */ FPUSH(R_F64((u32)(r_esp+0x30u)));
    /* 0068607f: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 00686083: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 00686087: cmp ecx, 0x7fff */ {  u32 a = r_ecx; u32 b = 0x7fffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0068608d: jle 0x686096 */ if ((fZ||fS!=fO)) goto L_00686096;
L_0068608f:; BB(0x0068608f);
    /* 0068608f: mov ecx, 0x7fff */ r_ecx = 0x7fffu;
    /* 00686094: jmp 0x6860a3 */ goto L_006860a3;
L_00686096:; BB(0x00686096);
    /* 00686096: cmp ecx, 0xffff8000 */ {  u32 a = r_ecx; u32 b = 0xffff8000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0068609c: jge 0x6860a3 */ if ((fS==fO)) goto L_006860a3;
L_0068609e:; BB(0x0068609e);
    /* 0068609e: mov ecx, 0xffff8000 */ r_ecx = 0xffff8000u;
L_006860a3:; BB(0x006860a3);
    /* 006860a3: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 006860a7: add ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006860a9: mov word ptr [edx], bx */ W16((u32)(r_edx), (u16)r_ebx);
    /* 006860ac: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 006860b0: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006860b2: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006860b3: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006860b5: jl 0x68606e */ if ((fS!=fO)) goto L_0068606e;
L_006860b7:; BB(0x006860b7);
    /* 006860b7: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
L_006860bb:; BB(0x006860bb);
    /* 006860bb: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 006860bf: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 006860c3: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006860c4: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006860c7: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006860c9: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 006860cd: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 006860d1: jl 0x68605a */ if ((fS!=fO)) goto L_0068605a;
L_006860d3:; BB(0x006860d3);
    /* 006860d3: jmp 0x6861b6 */ goto L_006861b6;
L_006860d8:; BB(0x006860d8);
    /* 006860d8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006860da: je 0x68614e */ if (fZ) goto L_0068614e;
L_006860dc:; BB(0x006860dc);
    /* 006860dc: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 006860de: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006860e0: jle 0x6861b9 */ if ((fZ||fS!=fO)) goto L_006861b9;
L_006860e6:; BB(0x006860e6);
    /* 006860e6: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
L_006860e9:; BB(0x006860e9);
    /* 006860e9: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 006860ed: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006860ef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006860f1: jle 0x686147 */ if ((fZ||fS!=fO)) goto L_00686147;
L_006860f3:; BB(0x006860f3);
    /* 006860f3: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 006860f7: mov eax, dword ptr [eax + ecx*4] */ r_eax = R32((u32)(r_eax+r_ecx*4));
    /* 006860fa: fld dword ptr [eax + edi*4] */ FPUSH(R_F32((u32)(r_eax+r_edi*4)));
    /* 006860fd: fmul dword ptr [0x6e4f98] */ ST(0) = ST(0) * R_F32((u32)(0x6e4f98u));
    /* 00686103: fstp qword ptr [esp + 0x30] */ W_F64((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00686107: fld qword ptr [esp + 0x30] */ FPUSH(R_F64((u32)(r_esp+0x30u)));
    /* 0068610b: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 0068610f: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 00686113: cmp eax, 0x7fff */ {  u32 a = r_eax; u32 b = 0x7fffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00686118: jle 0x686121 */ if ((fZ||fS!=fO)) goto L_00686121;
L_0068611a:; BB(0x0068611a);
    /* 0068611a: mov eax, 0x7fff */ r_eax = 0x7fffu;
    /* 0068611f: jmp 0x68612d */ goto L_0068612d;
L_00686121:; BB(0x00686121);
    /* 00686121: cmp eax, 0xffff8000 */ {  u32 a = r_eax; u32 b = 0xffff8000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00686126: jge 0x68612d */ if ((fS==fO)) goto L_0068612d;
L_00686128:; BB(0x00686128);
    /* 00686128: mov eax, 0xffff8000 */ r_eax = 0xffff8000u;
L_0068612d:; BB(0x0068612d);
    /* 0068612d: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068612f: mov edx, eax */ r_edx = r_eax;
    /* 00686131: sar edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00686134: mov byte ptr [esi], dl */ W8((u32)(r_esi), (u8)r_edx);
    /* 00686136: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00686137: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 0068613b: mov byte ptr [esi], al */ W8((u32)(r_esi), (u8)r_eax);
    /* 0068613d: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00686141: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00686142: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00686143: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00686145: jl 0x6860f3 */ if ((fS!=fO)) goto L_006860f3;
L_00686147:; BB(0x00686147);
    /* 00686147: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00686148: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0068614a: jl 0x6860e9 */ if ((fS!=fO)) goto L_006860e9;
L_0068614c:; BB(0x0068614c);
    /* 0068614c: jmp 0x6861b6 */ goto L_006861b6;
L_0068614e:; BB(0x0068614e);
    /* 0068614e: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00686150: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00686152: jle 0x6861b6 */ if ((fZ||fS!=fO)) goto L_006861b6;
L_00686154:; BB(0x00686154);
    /* 00686154: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
L_00686157:; BB(0x00686157);
    /* 00686157: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0068615b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0068615d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0068615f: jle 0x6861b1 */ if ((fZ||fS!=fO)) goto L_006861b1;
L_00686161:; BB(0x00686161);
    /* 00686161: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00686165: mov eax, dword ptr [eax + ecx*4] */ r_eax = R32((u32)(r_eax+r_ecx*4));
    /* 00686168: fld dword ptr [eax + esi*4] */ FPUSH(R_F32((u32)(r_eax+r_esi*4)));
    /* 0068616b: fmul dword ptr [0x6e4f98] */ ST(0) = ST(0) * R_F32((u32)(0x6e4f98u));
    /* 00686171: fstp qword ptr [esp + 0x30] */ W_F64((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00686175: fld qword ptr [esp + 0x30] */ FPUSH(R_F64((u32)(r_esp+0x30u)));
    /* 00686179: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 0068617d: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 00686181: cmp eax, 0x7fff */ {  u32 a = r_eax; u32 b = 0x7fffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00686186: jle 0x68618f */ if ((fZ||fS!=fO)) goto L_0068618f;
L_00686188:; BB(0x00686188);
    /* 00686188: mov eax, 0x7fff */ r_eax = 0x7fffu;
    /* 0068618d: jmp 0x68619b */ goto L_0068619b;
L_0068618f:; BB(0x0068618f);
    /* 0068618f: cmp eax, 0xffff8000 */ {  u32 a = r_eax; u32 b = 0xffff8000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00686194: jge 0x68619b */ if ((fS==fO)) goto L_0068619b;
L_00686196:; BB(0x00686196);
    /* 00686196: mov eax, 0xffff8000 */ r_eax = 0xffff8000u;
L_0068619b:; BB(0x0068619b);
    /* 0068619b: add eax, dword ptr [esp + 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x1cu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068619f: mov byte ptr [edx], al */ W8((u32)(r_edx), (u8)r_eax);
    /* 006861a1: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006861a2: sar eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 006861a5: mov byte ptr [edx], al */ W8((u32)(r_edx), (u8)r_eax);
    /* 006861a7: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 006861ab: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006861ac: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006861ad: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006861af: jl 0x686161 */ if ((fS!=fO)) goto L_00686161;
L_006861b1:; BB(0x006861b1);
    /* 006861b1: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006861b2: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006861b4: jl 0x686157 */ if ((fS!=fO)) goto L_00686157;
L_006861b6:; BB(0x006861b6);
    /* 006861b6: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
L_006861b9:; BB(0x006861b9);
    /* 006861b9: lea ecx, [esi + 0x1e0] */ r_ecx = (u32)(r_esi+0x1e0u);
    /* 006861bf: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006861c0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006861c1: call 0x691ca0 */ r_esp -= 4; W32(r_esp, 0x6861c6u); f_00691ca0();
    /* 006861c6: mov ecx, dword ptr [esi + 0x50] */ r_ecx = R32((u32)(r_esi+0x50u));
    /* 006861c9: mov edi, dword ptr [esi + 0x54] */ r_edi = R32((u32)(r_esi+0x54u));
    /* 006861cc: mov eax, ebx */ r_eax = r_ebx;
    /* 006861ce: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006861d1: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 006861d2: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fC = (r < a); }
    /* 006861d4: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 006861d7: adc edi, edx */ { u32 c = fC; u32 a = r_edi; u32 b = r_edx; u32 r = (a + b + c) & 0xffffffffu; r_edi = r;  }
    /* 006861d9: mov dword ptr [esi + 0x50], ecx */ W32((u32)(r_esi+0x50u), r_ecx);
    /* 006861dc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006861de: mov dword ptr [esi + 0x54], edi */ W32((u32)(r_esi+0x54u), r_edi);
    /* 006861e1: je 0x6861e8 */ if (fZ) goto L_006861e8;
L_006861e3:; BB(0x006861e3);
    /* 006861e3: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 006861e6: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
L_006861e8:; BB(0x006861e8);
    /* 006861e8: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 006861ec: imul eax, ebx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebx; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006861ef: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006861f0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006861f1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006861f2: mov esp, ebp */ r_esp = r_ebp;
    /* 006861f4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006861f5: ret  */ FN_RET(0x00685e50); r_esp += 4; return;
L_006861f6:; BB(0x006861f6);
    /* 006861f6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006861f7: mov eax, ebx */ r_eax = r_ebx;
    /* 006861f9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006861fa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006861fb: mov esp, ebp */ r_esp = r_ebp;
    /* 006861fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006861fe: ret  */ FN_RET(0x00685e50); r_esp += 4; return;
}

