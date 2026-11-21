#include "protos.h"

void f_005a7650(void) /* RoyalMatchDealerDisplay::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a7650);
    /* 005a7650: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a7651: mov ebp, esp */ r_ebp = r_esp;
    /* 005a7653: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a7655: push 0x6a7961 */ { u32 v = 0x6a7961u; r_esp -= 4; W32(r_esp, v); }
    /* 005a765a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005a7660: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a7661: sub esp, 0x9c */ {  u32 a = r_esp; u32 b = 0x9cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a7667: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005a766c: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a766e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a766f: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005a7672: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005a7678: mov dword ptr [ebp - 0x88], ecx */ W32((u32)(r_ebp+0xffffff78u), r_ecx);
    /* 005a767e: mov dword ptr [ebp - 0x1c], 1 */ W32((u32)(r_ebp+0xffffffe4u), 0x1u);
    /* 005a7685: mov dword ptr [ebp - 0x18], 2 */ W32((u32)(r_ebp+0xffffffe8u), 0x2u);
    /* 005a768c: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 005a7693: mov dword ptr [ebp - 0x10], 3 */ W32((u32)(r_ebp+0xfffffff0u), 0x3u);
    /* 005a769a: mov dword ptr [ebp - 0x3c], 0x177 */ W32((u32)(r_ebp+0xffffffc4u), 0x177u);
    /* 005a76a1: mov dword ptr [ebp - 0x38], 0x122 */ W32((u32)(r_ebp+0xffffffc8u), 0x122u);
    /* 005a76a8: mov dword ptr [ebp - 0x34], 0x108 */ W32((u32)(r_ebp+0xffffffccu), 0x108u);
    /* 005a76af: mov dword ptr [ebp - 0x30], 0x12c */ W32((u32)(r_ebp+0xffffffd0u), 0x12cu);
    /* 005a76b6: mov dword ptr [ebp - 0x2c], 0x1ef */ W32((u32)(r_ebp+0xffffffd4u), 0x1efu);
    /* 005a76bd: mov dword ptr [ebp - 0x28], 0xf0 */ W32((u32)(r_ebp+0xffffffd8u), 0xf0u);
    /* 005a76c4: mov dword ptr [ebp - 0x24], 0x7e */ W32((u32)(r_ebp+0xffffffdcu), 0x7eu);
    /* 005a76cb: mov dword ptr [ebp - 0x20], 0x115 */ W32((u32)(r_ebp+0xffffffe0u), 0x115u);
    /* 005a76d2: push 0x6cf8e8 */ { u32 v = 0x6cf8e8u; r_esp -= 4; W32(r_esp, v); }
    /* 005a76d7: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5a76dcu); f_00630f40();
    /* 005a76dc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a76df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a76e0: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005a76e6: call 0x5f38b0 */ r_esp -= 4; W32(r_esp, 0x5a76ebu); f_005f38b0();
    /* 005a76eb: push 0xfdec */ { u32 v = 0xfdecu; r_esp -= 4; W32(r_esp, v); }
    /* 005a76f0: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 005a76f6: call 0x5f1ad0 */ r_esp -= 4; W32(r_esp, 0x5a76fbu); f_005f1ad0();
    /* 005a76fb: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 005a7702: jmp 0x5a770d */ goto L_005a770d;
L_005a7704:; BB(0x005a7704);
    /* 005a7704: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 005a7707: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a770a: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
L_005a770d:; BB(0x005a770d);
    /* 005a770d: cmp dword ptr [ebp - 0x40], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a7711: jge 0x5a7782 */ if ((fS==fO)) goto L_005a7782;
L_005a7713:; BB(0x005a7713);
    /* 005a7713: push 0x188 */ { u32 v = 0x188u; r_esp -= 4; W32(r_esp, v); }
    /* 005a7718: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5a771du); f_00686d82();
    /* 005a771d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a7720: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 005a7723: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005a772a: cmp dword ptr [ebp - 0x4c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a772e: je 0x5a7740 */ if (fZ) goto L_005a7740;
L_005a7730:; BB(0x005a7730);
    /* 005a7730: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a7733: call 0x5abfa0 */ r_esp -= 4; W32(r_esp, 0x5a7738u); f_005abfa0();
    /* 005a7738: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 005a773e: jmp 0x5a774a */ goto L_005a774a;
L_005a7740:; BB(0x005a7740);
    /* 005a7740: mov dword ptr [ebp - 0x8c], 0 */ W32((u32)(r_ebp+0xffffff74u), 0x0u);
L_005a774a:; BB(0x005a774a);
    /* 005a774a: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 005a7750: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 005a7753: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005a775a: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005a775d: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 005a7763: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005a7766: mov dword ptr [eax + edx*4 + 4], ecx */ W32((u32)(r_eax+r_edx*4+0x4u), r_ecx);
    /* 005a776a: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005a776d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a776e: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 005a7771: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 005a7777: mov ecx, dword ptr [ecx + eax*4 + 4] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 005a777b: call 0x5ac240 */ r_esp -= 4; W32(r_esp, 0x5a7780u); f_005ac240();
    /* 005a7780: jmp 0x5a7704 */ goto L_005a7704;
L_005a7782:; BB(0x005a7782);
    /* 005a7782: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 005a7789: jmp 0x5a7794 */ goto L_005a7794;
L_005a778b:; BB(0x005a778b);
    /* 005a778b: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005a778e: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005a7791: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
L_005a7794:; BB(0x005a7794);
    /* 005a7794: cmp dword ptr [ebp - 0x44], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a7798: jge 0x5a7a6a */ if ((fS==fO)) goto L_005a7a6a;
L_005a779e:; BB(0x005a779e);
    /* 005a779e: push 0xcc4 */ { u32 v = 0xcc4u; r_esp -= 4; W32(r_esp, v); }
    /* 005a77a3: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5a77a8u); f_00686d82();
    /* 005a77a8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a77ab: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 005a77ae: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005a77b5: cmp dword ptr [ebp - 0x54], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffacu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a77b9: je 0x5a77cb */ if (fZ) goto L_005a77cb;
L_005a77bb:; BB(0x005a77bb);
    /* 005a77bb: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005a77be: call 0x5a8f40 */ r_esp -= 4; W32(r_esp, 0x5a77c3u); f_005a8f40();
    /* 005a77c3: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 005a77c9: jmp 0x5a77d5 */ goto L_005a77d5;
L_005a77cb:; BB(0x005a77cb);
    /* 005a77cb: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
L_005a77d5:; BB(0x005a77d5);
    /* 005a77d5: mov eax, dword ptr [ebp - 0x90] */ r_eax = R32((u32)(r_ebp+0xffffff70u));
    /* 005a77db: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 005a77de: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005a77e5: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005a77e8: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 005a77ee: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 005a77f1: mov dword ptr [edx + ecx*4 + 0x18], eax */ W32((u32)(r_edx+r_ecx*4+0x18u), r_eax);
    /* 005a77f5: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005a77f8: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 005a77fe: mov eax, dword ptr [edx + ecx*4 + 0x18] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x18u));
    /* 005a7802: mov dword ptr [eax + 0xcc0], 0x64 */ W32((u32)(r_eax+0xcc0u), 0x64u);
    /* 005a780c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a780e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a7810: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a7812: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a7814: push 0x138e */ { u32 v = 0x138eu; r_esp -= 4; W32(r_esp, v); }
    /* 005a7819: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005a781c: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 005a7822: mov ecx, dword ptr [edx + ecx*4 + 0x18] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x18u));
    /* 005a7826: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x5a782bu); f_005eae80();
    /* 005a782b: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 005a782e: mov ecx, dword ptr [ebp + eax*4 - 0x1c] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffe4u));
    /* 005a7832: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a7833: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005a7836: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 005a783c: mov ecx, dword ptr [eax + edx*4 + 0x18] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x18u));
    /* 005a7840: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005a7843: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 005a7849: mov edx, dword ptr [eax + edx*4 + 0x18] */ r_edx = R32((u32)(r_eax+r_edx*4+0x18u));
    /* 005a784d: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005a784f: mov ecx, edx */ r_ecx = r_edx;
    /* 005a7851: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 005a7857: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5a7859u); call_ind(t); }
    /* 005a7859: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a785b: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 005a785e: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 005a7864: mov ecx, dword ptr [ecx + eax*4 + 0x18] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x18u));
    /* 005a7868: call 0x5eb5d0 */ r_esp -= 4; W32(r_esp, 0x5a786du); f_005eb5d0();
    /* 005a786d: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005a7870: mov eax, dword ptr [0x793604] */ r_eax = R32((u32)(0x793604u));
    /* 005a7875: mov ecx, dword ptr [eax + edx*4 + 0x580] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x580u));
    /* 005a787c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a787d: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005a7880: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 005a7886: mov ecx, dword ptr [eax + edx*4 + 0x18] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x18u));
    /* 005a788a: call 0x5cc2c0 */ r_esp -= 4; W32(r_esp, 0x5a788fu); f_005cc2c0();
    /* 005a788f: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005a7892: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 005a7898: mov eax, dword ptr [edx + ecx*4 + 0x18] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x18u));
    /* 005a789c: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005a789f: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 005a78a5: mov ecx, dword ptr [edx + ecx*4 + 0x18] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x18u));
    /* 005a78a9: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005a78ab: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 005a78ae: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5a78b0u); call_ind(t); }
    /* 005a78b0: push 0xcc4 */ { u32 v = 0xcc4u; r_esp -= 4; W32(r_esp, v); }
    /* 005a78b5: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5a78bau); f_00686d82();
    /* 005a78ba: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a78bd: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 005a78c0: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005a78c7: cmp dword ptr [ebp - 0x5c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a78cb: je 0x5a78dd */ if (fZ) goto L_005a78dd;
L_005a78cd:; BB(0x005a78cd);
    /* 005a78cd: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005a78d0: call 0x5a8f40 */ r_esp -= 4; W32(r_esp, 0x5a78d5u); f_005a8f40();
    /* 005a78d5: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 005a78db: jmp 0x5a78e7 */ goto L_005a78e7;
L_005a78dd:; BB(0x005a78dd);
    /* 005a78dd: mov dword ptr [ebp - 0x94], 0 */ W32((u32)(r_ebp+0xffffff6cu), 0x0u);
L_005a78e7:; BB(0x005a78e7);
    /* 005a78e7: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 005a78ed: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 005a78f0: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005a78f7: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005a78fa: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 005a7900: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 005a7903: mov dword ptr [edx + ecx*4 + 0x48], eax */ W32((u32)(r_edx+r_ecx*4+0x48u), r_eax);
    /* 005a7907: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005a790a: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 005a7910: mov eax, dword ptr [edx + ecx*4 + 0x48] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x48u));
    /* 005a7914: mov dword ptr [eax + 0xcc0], 0x65 */ W32((u32)(r_eax+0xcc0u), 0x65u);
    /* 005a791e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a7920: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a7922: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a7924: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a7926: push 0x138e */ { u32 v = 0x138eu; r_esp -= 4; W32(r_esp, v); }
    /* 005a792b: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005a792e: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 005a7934: mov ecx, dword ptr [edx + ecx*4 + 0x48] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x48u));
    /* 005a7938: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x5a793du); f_005eae80();
    /* 005a793d: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 005a7940: mov ecx, dword ptr [ebp + eax*4 - 0x1c] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffe4u));
    /* 005a7944: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a7945: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005a7948: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 005a794e: mov ecx, dword ptr [eax + edx*4 + 0x48] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x48u));
    /* 005a7952: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005a7955: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 005a795b: mov edx, dword ptr [eax + edx*4 + 0x48] */ r_edx = R32((u32)(r_eax+r_edx*4+0x48u));
    /* 005a795f: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005a7961: mov ecx, edx */ r_ecx = r_edx;
    /* 005a7963: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 005a7969: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5a796bu); call_ind(t); }
    /* 005a796b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a796d: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 005a7970: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 005a7976: mov ecx, dword ptr [ecx + eax*4 + 0x48] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x48u));
    /* 005a797a: call 0x5eb5d0 */ r_esp -= 4; W32(r_esp, 0x5a797fu); f_005eb5d0();
    /* 005a797f: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005a7982: mov eax, dword ptr [0x793604] */ r_eax = R32((u32)(0x793604u));
    /* 005a7987: mov ecx, dword ptr [eax + edx*4 + 0x634] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x634u));
    /* 005a798e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a798f: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005a7992: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 005a7998: mov ecx, dword ptr [eax + edx*4 + 0x48] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x48u));
    /* 005a799c: call 0x5cc2c0 */ r_esp -= 4; W32(r_esp, 0x5a79a1u); f_005cc2c0();
    /* 005a79a1: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005a79a4: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 005a79aa: mov eax, dword ptr [edx + ecx*4 + 0x48] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x48u));
    /* 005a79ae: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005a79b1: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 005a79b7: mov ecx, dword ptr [edx + ecx*4 + 0x48] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x48u));
    /* 005a79bb: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005a79bd: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 005a79c0: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5a79c2u); call_ind(t); }
    /* 005a79c2: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 005a79c7: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5a79ccu); f_00686d82();
    /* 005a79cc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a79cf: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 005a79d2: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 005a79d9: cmp dword ptr [ebp - 0x64], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff9cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a79dd: je 0x5a79ef */ if (fZ) goto L_005a79ef;
L_005a79df:; BB(0x005a79df);
    /* 005a79df: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 005a79e2: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x5a79e7u); f_005eaaf0();
    /* 005a79e7: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 005a79ed: jmp 0x5a79f9 */ goto L_005a79f9;
L_005a79ef:; BB(0x005a79ef);
    /* 005a79ef: mov dword ptr [ebp - 0x98], 0 */ W32((u32)(r_ebp+0xffffff68u), 0x0u);
L_005a79f9:; BB(0x005a79f9);
    /* 005a79f9: mov eax, dword ptr [ebp - 0x98] */ r_eax = R32((u32)(r_ebp+0xffffff68u));
    /* 005a79ff: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 005a7a02: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005a7a09: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005a7a0c: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 005a7a12: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 005a7a15: mov dword ptr [edx + ecx*4 + 0x58], eax */ W32((u32)(r_edx+r_ecx*4+0x58u), r_eax);
    /* 005a7a19: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a7a1b: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 005a7a1d: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005a7a20: mov edx, dword ptr [ebp + ecx*8 - 0x38] */ r_edx = R32((u32)(r_ebp+r_ecx*8+0xffffffc8u));
    /* 005a7a24: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a7a25: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 005a7a28: mov ecx, dword ptr [ebp + eax*8 - 0x3c] */ r_ecx = R32((u32)(r_ebp+r_eax*8+0xffffffc4u));
    /* 005a7a2c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a7a2d: push 0x311292 */ { u32 v = 0x311292u; r_esp -= 4; W32(r_esp, v); }
    /* 005a7a32: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005a7a35: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 005a7a3b: mov ecx, dword ptr [eax + edx*4 + 0x58] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x58u));
    /* 005a7a3f: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x5a7a44u); f_005eae80();
    /* 005a7a44: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005a7a47: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 005a7a4d: mov eax, dword ptr [edx + ecx*4 + 0x58] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x58u));
    /* 005a7a51: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005a7a54: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 005a7a5a: mov ecx, dword ptr [edx + ecx*4 + 0x58] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x58u));
    /* 005a7a5e: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005a7a60: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 005a7a63: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5a7a65u); call_ind(t); }
    /* 005a7a65: jmp 0x5a778b */ goto L_005a778b;
L_005a7a6a:; BB(0x005a7a6a);
    /* 005a7a6a: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 005a7a6c: push -4 */ { u32 v = 0xfffffffcu; r_esp -= 4; W32(r_esp, v); }
    /* 005a7a6e: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 005a7a74: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 005a7a77: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 005a7a7d: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 005a7a80: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005a7a82: mov ecx, eax */ r_ecx = r_eax;
    /* 005a7a84: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005a7a87: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5a7a89u); call_ind(t); }
    /* 005a7a89: push -0x20 */ { u32 v = 0xffffffe0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a7a8b: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 005a7a8d: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 005a7a93: mov edx, dword ptr [ecx + 0x48] */ r_edx = R32((u32)(r_ecx+0x48u));
    /* 005a7a96: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 005a7a9c: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 005a7a9f: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005a7aa1: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005a7aa4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5a7aa6u); call_ind(t); }
    /* 005a7aa6: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005a7aa8: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 005a7aaa: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 005a7ab0: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 005a7ab3: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 005a7ab9: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 005a7abc: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005a7abe: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005a7ac1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5a7ac3u); call_ind(t); }
    /* 005a7ac3: push -0x12 */ { u32 v = 0xffffffeeu; r_esp -= 4; W32(r_esp, v); }
    /* 005a7ac5: push 0x43 */ { u32 v = 0x43u; r_esp -= 4; W32(r_esp, v); }
    /* 005a7ac7: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 005a7acd: mov edx, dword ptr [ecx + 0x4c] */ r_edx = R32((u32)(r_ecx+0x4cu));
    /* 005a7ad0: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 005a7ad6: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 005a7ad9: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005a7adb: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005a7ade: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5a7ae0u); call_ind(t); }
    /* 005a7ae0: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 005a7ae2: push -7 */ { u32 v = 0xfffffff9u; r_esp -= 4; W32(r_esp, v); }
    /* 005a7ae4: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 005a7aea: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 005a7aed: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 005a7af3: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 005a7af6: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005a7af8: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005a7afb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5a7afdu); call_ind(t); }
    /* 005a7afd: push -0xd */ { u32 v = 0xfffffff3u; r_esp -= 4; W32(r_esp, v); }
    /* 005a7aff: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005a7b01: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 005a7b07: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 005a7b0a: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 005a7b10: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 005a7b13: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005a7b15: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005a7b18: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5a7b1au); call_ind(t); }
    /* 005a7b1a: push 0x27 */ { u32 v = 0x27u; r_esp -= 4; W32(r_esp, v); }
    /* 005a7b1c: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 005a7b1e: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 005a7b24: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 005a7b27: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 005a7b2d: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 005a7b30: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005a7b32: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005a7b35: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5a7b37u); call_ind(t); }
    /* 005a7b37: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 005a7b39: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 005a7b3b: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 005a7b41: mov edx, dword ptr [ecx + 0x54] */ r_edx = R32((u32)(r_ecx+0x54u));
    /* 005a7b44: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 005a7b4a: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 005a7b4d: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005a7b4f: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005a7b52: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5a7b54u); call_ind(t); }
    /* 005a7b54: push 0x198 */ { u32 v = 0x198u; r_esp -= 4; W32(r_esp, v); }
    /* 005a7b59: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5a7b5eu); f_00686d82();
    /* 005a7b5e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a7b61: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 005a7b64: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 005a7b6b: cmp dword ptr [ebp - 0x6c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff94u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a7b6f: je 0x5a7b8d */ if (fZ) goto L_005a7b8d;
L_005a7b71:; BB(0x005a7b71);
    /* 005a7b71: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 005a7b74: call 0x5cd6a0 */ r_esp -= 4; W32(r_esp, 0x5a7b79u); f_005cd6a0();
    /* 005a7b79: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 005a7b7c: mov dword ptr [ecx], 0x6cf824 */ W32((u32)(r_ecx), 0x6cf824u);
    /* 005a7b82: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 005a7b85: mov dword ptr [ebp - 0x9c], edx */ W32((u32)(r_ebp+0xffffff64u), r_edx);
    /* 005a7b8b: jmp 0x5a7b97 */ goto L_005a7b97;
L_005a7b8d:; BB(0x005a7b8d);
    /* 005a7b8d: mov dword ptr [ebp - 0x9c], 0 */ W32((u32)(r_ebp+0xffffff64u), 0x0u);
L_005a7b97:; BB(0x005a7b97);
    /* 005a7b97: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 005a7b9d: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 005a7ba0: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005a7ba7: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 005a7bad: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 005a7bb0: mov dword ptr [ecx + 0x2c], edx */ W32((u32)(r_ecx+0x2cu), r_edx);
    /* 005a7bb3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a7bb5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a7bb7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a7bb9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a7bbb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a7bbd: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 005a7bc3: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 005a7bc6: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x5a7bcbu); f_005eae80();
    /* 005a7bcb: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 005a7bd0: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5a7bd5u); f_00686d82();
    /* 005a7bd5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a7bd8: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 005a7bdb: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 005a7be2: cmp dword ptr [ebp - 0x74], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a7be6: je 0x5a7bf8 */ if (fZ) goto L_005a7bf8;
L_005a7be8:; BB(0x005a7be8);
    /* 005a7be8: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 005a7beb: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x5a7bf0u); f_005f5bf0();
    /* 005a7bf0: mov dword ptr [ebp - 0xa0], eax */ W32((u32)(r_ebp+0xffffff60u), r_eax);
    /* 005a7bf6: jmp 0x5a7c02 */ goto L_005a7c02;
L_005a7bf8:; BB(0x005a7bf8);
    /* 005a7bf8: mov dword ptr [ebp - 0xa0], 0 */ W32((u32)(r_ebp+0xffffff60u), 0x0u);
L_005a7c02:; BB(0x005a7c02);
    /* 005a7c02: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 005a7c08: mov dword ptr [ebp - 0x70], ecx */ W32((u32)(r_ebp+0xffffff90u), r_ecx);
    /* 005a7c0b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005a7c12: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 005a7c18: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 005a7c1b: mov dword ptr [edx + 0x3c], eax */ W32((u32)(r_edx+0x3cu), r_eax);
    /* 005a7c1e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a7c20: push 0x96 */ { u32 v = 0x96u; r_esp -= 4; W32(r_esp, v); }
    /* 005a7c25: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a7c27: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a7c29: push 0x13a2 */ { u32 v = 0x13a2u; r_esp -= 4; W32(r_esp, v); }
    /* 005a7c2e: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 005a7c34: mov ecx, dword ptr [ecx + 0x3c] */ r_ecx = R32((u32)(r_ecx+0x3cu));
    /* 005a7c37: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x5a7c3cu); f_005eae80();
    /* 005a7c3c: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 005a7c41: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5a7c46u); f_00686d82();
    /* 005a7c46: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a7c49: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 005a7c4c: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 005a7c53: cmp dword ptr [ebp - 0x7c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff84u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a7c57: je 0x5a7c69 */ if (fZ) goto L_005a7c69;
L_005a7c59:; BB(0x005a7c59);
    /* 005a7c59: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 005a7c5c: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x5a7c61u); f_005f5bf0();
    /* 005a7c61: mov dword ptr [ebp - 0xa4], eax */ W32((u32)(r_ebp+0xffffff5cu), r_eax);
    /* 005a7c67: jmp 0x5a7c73 */ goto L_005a7c73;
L_005a7c69:; BB(0x005a7c69);
    /* 005a7c69: mov dword ptr [ebp - 0xa4], 0 */ W32((u32)(r_ebp+0xffffff5cu), 0x0u);
L_005a7c73:; BB(0x005a7c73);
    /* 005a7c73: mov edx, dword ptr [ebp - 0xa4] */ r_edx = R32((u32)(r_ebp+0xffffff5cu));
    /* 005a7c79: mov dword ptr [ebp - 0x78], edx */ W32((u32)(r_ebp+0xffffff88u), r_edx);
    /* 005a7c7c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005a7c83: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 005a7c89: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 005a7c8c: mov dword ptr [eax + 0x40], ecx */ W32((u32)(r_eax+0x40u), r_ecx);
    /* 005a7c8f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a7c91: push 0x97 */ { u32 v = 0x97u; r_esp -= 4; W32(r_esp, v); }
    /* 005a7c96: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a7c98: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a7c9a: push 0x13a3 */ { u32 v = 0x13a3u; r_esp -= 4; W32(r_esp, v); }
    /* 005a7c9f: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 005a7ca5: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 005a7ca8: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x5a7cadu); f_005eae80();
    /* 005a7cad: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 005a7cb2: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5a7cb7u); f_00686d82();
    /* 005a7cb7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a7cba: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 005a7cc0: mov dword ptr [ebp - 4], 7 */ W32((u32)(r_ebp+0xfffffffcu), 0x7u);
    /* 005a7cc7: cmp dword ptr [ebp - 0x84], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff7cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a7cce: je 0x5a7ce3 */ if (fZ) goto L_005a7ce3;
L_005a7cd0:; BB(0x005a7cd0);
    /* 005a7cd0: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 005a7cd6: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x5a7cdbu); f_005eaaf0();
    /* 005a7cdb: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 005a7ce1: jmp 0x5a7ced */ goto L_005a7ced;
L_005a7ce3:; BB(0x005a7ce3);
    /* 005a7ce3: mov dword ptr [ebp - 0xa8], 0 */ W32((u32)(r_ebp+0xffffff58u), 0x0u);
L_005a7ced:; BB(0x005a7ced);
    /* 005a7ced: mov eax, dword ptr [ebp - 0xa8] */ r_eax = R32((u32)(r_ebp+0xffffff58u));
    /* 005a7cf3: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 005a7cf6: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005a7cfd: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 005a7d03: mov edx, dword ptr [ebp - 0x80] */ r_edx = R32((u32)(r_ebp+0xffffff80u));
    /* 005a7d06: mov dword ptr [ecx + 0x44], edx */ W32((u32)(r_ecx+0x44u), r_edx);
    /* 005a7d09: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a7d0b: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005a7d0d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a7d0f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a7d11: push 0x13a1 */ { u32 v = 0x13a1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a7d16: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 005a7d1c: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 005a7d1f: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x5a7d24u); f_005eae80();
    /* 005a7d24: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a7d27: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005a7d2e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a7d2f: mov esp, ebp */ r_esp = r_ebp;
    /* 005a7d31: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a7d32: ret  */ FN_RET(0x005a7650); r_esp += 4; return;
}

