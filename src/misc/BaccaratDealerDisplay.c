#include "protos.h"

void f_00401580(void) /* BaccaratDealerDisplay::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00401580);
    /* 00401580: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00401581: mov ebp, esp */ r_ebp = r_esp;
    /* 00401583: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00401585: push 0x69d600 */ { u32 v = 0x69d600u; r_esp -= 4; W32(r_esp, v); }
    /* 0040158a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00401590: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00401591: sub esp, 0x94 */ {  u32 a = r_esp; u32 b = 0x94u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00401597: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0040159c: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040159e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040159f: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 004015a2: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 004015a8: mov dword ptr [ebp - 0x84], ecx */ W32((u32)(r_ebp+0xffffff7cu), r_ecx);
    /* 004015ae: mov dword ptr [ebp - 0x44], 6 */ W32((u32)(r_ebp+0xffffffbcu), 0x6u);
    /* 004015b5: mov dword ptr [ebp - 0x40], 7 */ W32((u32)(r_ebp+0xffffffc0u), 0x7u);
    /* 004015bc: mov dword ptr [ebp - 0x3c], 8 */ W32((u32)(r_ebp+0xffffffc4u), 0x8u);
    /* 004015c3: mov dword ptr [ebp - 0x38], 3 */ W32((u32)(r_ebp+0xffffffc8u), 0x3u);
    /* 004015ca: mov dword ptr [ebp - 0x34], 4 */ W32((u32)(r_ebp+0xffffffccu), 0x4u);
    /* 004015d1: mov dword ptr [ebp - 0x30], 5 */ W32((u32)(r_ebp+0xffffffd0u), 0x5u);
    /* 004015d8: mov dword ptr [ebp - 0x2c], 9 */ W32((u32)(r_ebp+0xffffffd4u), 0x9u);
    /* 004015df: mov dword ptr [ebp - 0x28], 0xa */ W32((u32)(r_ebp+0xffffffd8u), 0xau);
    /* 004015e6: mov dword ptr [ebp - 0x24], 0xb */ W32((u32)(r_ebp+0xffffffdcu), 0xbu);
    /* 004015ed: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 004015f4: mov dword ptr [ebp - 0x1c], 1 */ W32((u32)(r_ebp+0xffffffe4u), 0x1u);
    /* 004015fb: mov dword ptr [ebp - 0x18], 2 */ W32((u32)(r_ebp+0xffffffe8u), 0x2u);
    /* 00401602: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 00401609: mov dword ptr [ebp - 0x10], 0x28 */ W32((u32)(r_ebp+0xfffffff0u), 0x28u);
    /* 00401610: push 0x6b27fc */ { u32 v = 0x6b27fcu; r_esp -= 4; W32(r_esp, v); }
    /* 00401615: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x40161au); f_00630f40();
    /* 0040161a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040161d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040161e: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00401624: call 0x5f38b0 */ r_esp -= 4; W32(r_esp, 0x401629u); f_005f38b0();
    /* 00401629: push 0x311280 */ { u32 v = 0x311280u; r_esp -= 4; W32(r_esp, v); }
    /* 0040162e: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00401634: call 0x5f1ad0 */ r_esp -= 4; W32(r_esp, 0x401639u); f_005f1ad0();
    /* 00401639: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 00401640: jmp 0x40164b */ goto L_0040164b;
L_00401642:; BB(0x00401642);
    /* 00401642: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00401645: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00401648: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_0040164b:; BB(0x0040164b);
    /* 0040164b: cmp dword ptr [ebp - 0x14], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040164f: jge 0x4016bd */ if ((fS==fO)) goto L_004016bd;
L_00401651:; BB(0x00401651);
    /* 00401651: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00401653: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x401658u); f_00686d82();
    /* 00401658: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040165b: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 0040165e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00401665: cmp dword ptr [ebp - 0x50], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00401669: je 0x40167b */ if (fZ) goto L_0040167b;
L_0040166b:; BB(0x0040166b);
    /* 0040166b: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0040166e: call 0x402660 */ r_esp -= 4; W32(r_esp, 0x401673u); f_00402660();
    /* 00401673: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 00401679: jmp 0x401685 */ goto L_00401685;
L_0040167b:; BB(0x0040167b);
    /* 0040167b: mov dword ptr [ebp - 0x88], 0 */ W32((u32)(r_ebp+0xffffff78u), 0x0u);
L_00401685:; BB(0x00401685);
    /* 00401685: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0040168b: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 0040168e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00401695: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00401698: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 0040169e: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 004016a1: mov dword ptr [eax + edx*4 + 4], ecx */ W32((u32)(r_eax+r_edx*4+0x4u), r_ecx);
    /* 004016a5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004016a8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004016a9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004016ac: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 004016b2: mov ecx, dword ptr [ecx + eax*4 + 4] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 004016b6: call 0x4027b0 */ r_esp -= 4; W32(r_esp, 0x4016bbu); f_004027b0();
    /* 004016bb: jmp 0x401642 */ goto L_00401642;
L_004016bd:; BB(0x004016bd);
    /* 004016bd: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 004016c2: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x4016c7u); f_00686d82();
    /* 004016c7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004016ca: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 004016cd: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004016d4: cmp dword ptr [ebp - 0x58], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004016d8: je 0x4016ea */ if (fZ) goto L_004016ea;
L_004016da:; BB(0x004016da);
    /* 004016da: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 004016dd: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x4016e2u); f_005ec5a0();
    /* 004016e2: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 004016e8: jmp 0x4016f4 */ goto L_004016f4;
L_004016ea:; BB(0x004016ea);
    /* 004016ea: mov dword ptr [ebp - 0x8c], 0 */ W32((u32)(r_ebp+0xffffff74u), 0x0u);
L_004016f4:; BB(0x004016f4);
    /* 004016f4: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 004016fa: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 004016fd: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00401704: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 0040170a: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0040170d: mov dword ptr [eax + 0x18], ecx */ W32((u32)(r_eax+0x18u), r_ecx);
    /* 00401710: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00401712: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 00401714: push 0x51 */ { u32 v = 0x51u; r_esp -= 4; W32(r_esp, v); }
    /* 00401716: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 00401718: push 0x1a7 */ { u32 v = 0x1a7u; r_esp -= 4; W32(r_esp, v); }
    /* 0040171d: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0040171f: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 00401721: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 00401723: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00401728: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0040172e: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 00401731: call 0x5ec8f0 */ r_esp -= 4; W32(r_esp, 0x401736u); f_005ec8f0();
    /* 00401736: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040173b: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x401740u); f_00686d82();
    /* 00401740: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00401743: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 00401746: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0040174d: cmp dword ptr [ebp - 0x60], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00401751: je 0x401763 */ if (fZ) goto L_00401763;
L_00401753:; BB(0x00401753);
    /* 00401753: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00401756: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x40175bu); f_005ec5a0();
    /* 0040175b: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 00401761: jmp 0x40176d */ goto L_0040176d;
L_00401763:; BB(0x00401763);
    /* 00401763: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
L_0040176d:; BB(0x0040176d);
    /* 0040176d: mov eax, dword ptr [ebp - 0x90] */ r_eax = R32((u32)(r_ebp+0xffffff70u));
    /* 00401773: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 00401776: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0040177d: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 00401783: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00401786: mov dword ptr [ecx + 0x1c], edx */ W32((u32)(r_ecx+0x1cu), r_edx);
    /* 00401789: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040178b: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 0040178d: push 0x51 */ { u32 v = 0x51u; r_esp -= 4; W32(r_esp, v); }
    /* 0040178f: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 00401791: push 0xa1 */ { u32 v = 0xa1u; r_esp -= 4; W32(r_esp, v); }
    /* 00401796: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00401798: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 0040179a: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 0040179c: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 004017a1: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 004017a7: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 004017aa: call 0x5ec8f0 */ r_esp -= 4; W32(r_esp, 0x4017afu); f_005ec8f0();
    /* 004017af: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 004017b6: jmp 0x4017c1 */ goto L_004017c1;
L_004017b8:; BB(0x004017b8);
    /* 004017b8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004017bb: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004017be: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
L_004017c1:; BB(0x004017c1);
    /* 004017c1: cmp dword ptr [ebp - 0x14], 0xc */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004017c5: jge 0x40195f */ if ((fS==fO)) goto L_0040195f;
L_004017cb:; BB(0x004017cb);
    /* 004017cb: push 0xae8 */ { u32 v = 0xae8u; r_esp -= 4; W32(r_esp, v); }
    /* 004017d0: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x4017d5u); f_00686d82();
    /* 004017d5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004017d8: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 004017db: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 004017e2: cmp dword ptr [ebp - 0x68], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff98u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004017e6: je 0x4017f8 */ if (fZ) goto L_004017f8;
L_004017e8:; BB(0x004017e8);
    /* 004017e8: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 004017eb: call 0x402a90 */ r_esp -= 4; W32(r_esp, 0x4017f0u); f_00402a90();
    /* 004017f0: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 004017f6: jmp 0x401802 */ goto L_00401802;
L_004017f8:; BB(0x004017f8);
    /* 004017f8: mov dword ptr [ebp - 0x94], 0 */ W32((u32)(r_ebp+0xffffff6cu), 0x0u);
L_00401802:; BB(0x00401802);
    /* 00401802: mov edx, dword ptr [ebp - 0x94] */ r_edx = R32((u32)(r_ebp+0xffffff6cu));
    /* 00401808: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 0040180b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00401812: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00401815: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0040181b: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0040181e: mov dword ptr [ecx + eax*4 + 0x20], edx */ W32((u32)(r_ecx+r_eax*4+0x20u), r_edx);
    /* 00401822: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00401825: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0040182b: mov edx, dword ptr [ecx + eax*4 + 0x20] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 0040182f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00401832: mov dword ptr [edx + 0xae0], eax */ W32((u32)(r_edx+0xae0u), r_eax);
    /* 00401838: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040183b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040183c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0040183e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00401840: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00401842: push 0x311285 */ { u32 v = 0x311285u; r_esp -= 4; W32(r_esp, v); }
    /* 00401847: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040184a: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 00401850: mov ecx, dword ptr [eax + edx*4 + 0x20] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 00401854: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x401859u); f_005eae80();
    /* 00401859: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040185c: mov edx, dword ptr [ebp + ecx*4 - 0x44] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffbcu));
    /* 00401860: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00401861: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00401864: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0040186a: mov edx, dword ptr [ecx + eax*4 + 0x20] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 0040186e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00401871: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 00401877: mov ecx, dword ptr [ecx + eax*4 + 0x20] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 0040187b: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0040187d: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00401883: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x401885u); call_ind(t); }
    /* 00401885: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00401887: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040188a: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 00401890: mov ecx, dword ptr [edx + ecx*4 + 0x20] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x20u));
    /* 00401894: call 0x5eb5d0 */ r_esp -= 4; W32(r_esp, 0x401899u); f_005eb5d0();
    /* 00401899: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0040189c: mov ecx, dword ptr [0x7902f0] */ r_ecx = R32((u32)(0x7902f0u));
    /* 004018a2: mov edx, dword ptr [ecx + eax*4 + 4] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 004018a6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004018a7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004018aa: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 004018b0: mov ecx, dword ptr [ecx + eax*4 + 0x20] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 004018b4: call 0x5cc2c0 */ r_esp -= 4; W32(r_esp, 0x4018b9u); f_005cc2c0();
    /* 004018b9: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004018bc: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 004018c2: mov ecx, dword ptr [eax + edx*4 + 0x20] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 004018c6: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004018c9: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 004018cf: mov edx, dword ptr [eax + edx*4 + 0x20] */ r_edx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 004018d3: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004018d5: mov ecx, edx */ r_ecx = r_edx;
    /* 004018d7: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 004018da: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4018dcu); call_ind(t); }
    /* 004018dc: add eax, 0x28 */ {  u32 a = r_eax; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004018df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004018e0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004018e3: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 004018e9: mov edx, dword ptr [ecx + eax*4 + 0x20] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 004018ed: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004018f0: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 004018f6: mov ecx, dword ptr [ecx + eax*4 + 0x20] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 004018fa: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004018fc: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 004018ff: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x401901u); call_ind(t); }
    /* 00401901: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00401902: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00401905: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0040190b: mov eax, dword ptr [edx + ecx*4 + 0x20] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x20u));
    /* 0040190f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00401912: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 00401918: mov ecx, dword ptr [edx + ecx*4 + 0x20] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x20u));
    /* 0040191c: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0040191e: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 00401921: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x401923u); call_ind(t); }
    /* 00401923: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00401925: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00401928: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0040192e: mov ecx, dword ptr [ecx + eax*4 + 0x20] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 00401932: call 0x5eb700 */ r_esp -= 4; W32(r_esp, 0x401937u); f_005eb700();
    /* 00401937: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040193a: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 00401940: mov ecx, dword ptr [eax + edx*4 + 0x20] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 00401944: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00401947: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 0040194d: mov edx, dword ptr [eax + edx*4 + 0x20] */ r_edx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 00401951: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00401953: mov ecx, edx */ r_ecx = r_edx;
    /* 00401955: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 00401958: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x40195au); call_ind(t); }
    /* 0040195a: jmp 0x4017b8 */ goto L_004017b8;
L_0040195f:; BB(0x0040195f);
    /* 0040195f: push 0x198 */ { u32 v = 0x198u; r_esp -= 4; W32(r_esp, v); }
    /* 00401964: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x401969u); f_00686d82();
    /* 00401969: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040196c: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 0040196f: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 00401976: cmp dword ptr [ebp - 0x70], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040197a: je 0x401998 */ if (fZ) goto L_00401998;
L_0040197c:; BB(0x0040197c);
    /* 0040197c: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 0040197f: call 0x5cd6a0 */ r_esp -= 4; W32(r_esp, 0x401984u); f_005cd6a0();
    /* 00401984: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 00401987: mov dword ptr [eax], 0x6b2734 */ W32((u32)(r_eax), 0x6b2734u);
    /* 0040198d: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 00401990: mov dword ptr [ebp - 0x98], ecx */ W32((u32)(r_ebp+0xffffff68u), r_ecx);
    /* 00401996: jmp 0x4019a2 */ goto L_004019a2;
L_00401998:; BB(0x00401998);
    /* 00401998: mov dword ptr [ebp - 0x98], 0 */ W32((u32)(r_ebp+0xffffff68u), 0x0u);
L_004019a2:; BB(0x004019a2);
    /* 004019a2: mov edx, dword ptr [ebp - 0x98] */ r_edx = R32((u32)(r_ebp+0xffffff68u));
    /* 004019a8: mov dword ptr [ebp - 0x6c], edx */ W32((u32)(r_ebp+0xffffff94u), r_edx);
    /* 004019ab: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004019b2: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 004019b8: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 004019bb: mov dword ptr [eax + 0x50], ecx */ W32((u32)(r_eax+0x50u), r_ecx);
    /* 004019be: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004019c0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004019c2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004019c4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004019c6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004019c8: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 004019ce: mov ecx, dword ptr [edx + 0x50] */ r_ecx = R32((u32)(r_edx+0x50u));
    /* 004019d1: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x4019d6u); f_005eae80();
    /* 004019d6: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 004019dd: jmp 0x4019e8 */ goto L_004019e8;
L_004019df:; BB(0x004019df);
    /* 004019df: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004019e2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004019e5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_004019e8:; BB(0x004019e8);
    /* 004019e8: cmp dword ptr [ebp - 0x14], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004019ec: jge 0x401aa2 */ if ((fS==fO)) goto L_00401aa2;
L_004019f2:; BB(0x004019f2);
    /* 004019f2: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 004019f7: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x4019fcu); f_00686d82();
    /* 004019fc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004019ff: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 00401a02: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 00401a09: cmp dword ptr [ebp - 0x78], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff88u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00401a0d: je 0x401a1f */ if (fZ) goto L_00401a1f;
L_00401a0f:; BB(0x00401a0f);
    /* 00401a0f: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 00401a12: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x401a17u); f_005eaaf0();
    /* 00401a17: mov dword ptr [ebp - 0x9c], eax */ W32((u32)(r_ebp+0xffffff64u), r_eax);
    /* 00401a1d: jmp 0x401a29 */ goto L_00401a29;
L_00401a1f:; BB(0x00401a1f);
    /* 00401a1f: mov dword ptr [ebp - 0x9c], 0 */ W32((u32)(r_ebp+0xffffff64u), 0x0u);
L_00401a29:; BB(0x00401a29);
    /* 00401a29: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00401a2f: mov dword ptr [ebp - 0x74], ecx */ W32((u32)(r_ebp+0xffffff8cu), r_ecx);
    /* 00401a32: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00401a39: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00401a3c: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 00401a42: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 00401a45: mov dword ptr [eax + edx*4 + 0x5c], ecx */ W32((u32)(r_eax+r_edx*4+0x5cu), r_ecx);
    /* 00401a49: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00401a4b: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 00401a4d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00401a50: mov eax, dword ptr [edx*8 + 0x705058] */ r_eax = R32((u32)(r_edx*8+0x705058u));
    /* 00401a57: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00401a58: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00401a5b: mov edx, dword ptr [ecx*8 + 0x705054] */ r_edx = R32((u32)(r_ecx*8+0x705054u));
    /* 00401a62: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00401a63: push 0x311292 */ { u32 v = 0x311292u; r_esp -= 4; W32(r_esp, v); }
    /* 00401a68: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00401a6b: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 00401a71: mov ecx, dword ptr [ecx + eax*4 + 0x5c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x5cu));
    /* 00401a75: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x401a7au); f_005eae80();
    /* 00401a7a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00401a7d: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 00401a83: mov ecx, dword ptr [eax + edx*4 + 0x5c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x5cu));
    /* 00401a87: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00401a8a: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 00401a90: mov edx, dword ptr [eax + edx*4 + 0x5c] */ r_edx = R32((u32)(r_eax+r_edx*4+0x5cu));
    /* 00401a94: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00401a96: mov ecx, edx */ r_ecx = r_edx;
    /* 00401a98: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 00401a9b: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x401a9du); call_ind(t); }
    /* 00401a9d: jmp 0x4019df */ goto L_004019df;
L_00401aa2:; BB(0x00401aa2);
    /* 00401aa2: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 00401aa7: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x401aacu); f_00686d82();
    /* 00401aac: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00401aaf: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 00401ab2: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 00401ab9: cmp dword ptr [ebp - 0x80], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff80u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00401abd: je 0x401acf */ if (fZ) goto L_00401acf;
L_00401abf:; BB(0x00401abf);
    /* 00401abf: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 00401ac2: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x401ac7u); f_005eaaf0();
    /* 00401ac7: mov dword ptr [ebp - 0xa0], eax */ W32((u32)(r_ebp+0xffffff60u), r_eax);
    /* 00401acd: jmp 0x401ad9 */ goto L_00401ad9;
L_00401acf:; BB(0x00401acf);
    /* 00401acf: mov dword ptr [ebp - 0xa0], 0 */ W32((u32)(r_ebp+0xffffff60u), 0x0u);
L_00401ad9:; BB(0x00401ad9);
    /* 00401ad9: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 00401adf: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 00401ae2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00401ae9: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 00401aef: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 00401af2: mov dword ptr [ecx + 0x68], edx */ W32((u32)(r_ecx+0x68u), r_edx);
    /* 00401af5: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00401af7: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00401af9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00401afb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00401afd: push 0x13b1 */ { u32 v = 0x13b1u; r_esp -= 4; W32(r_esp, v); }
    /* 00401b02: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 00401b08: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 00401b0b: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x401b10u); f_005eae80();
    /* 00401b10: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 00401b16: mov edx, dword ptr [ecx + 0x68] */ r_edx = R32((u32)(r_ecx+0x68u));
    /* 00401b19: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 00401b1f: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 00401b22: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00401b24: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00401b27: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x401b29u); call_ind(t); }
    /* 00401b29: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00401b2c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00401b33: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00401b34: mov esp, ebp */ r_esp = r_ebp;
    /* 00401b36: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00401b37: ret  */ FN_RET(0x00401580); r_esp += 4; return;
}

void f_00403f50(void) /* BaccaratDealerDisplay::vfunc42 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00403f50);
    /* 00403f50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00403f51: mov ebp, esp */ r_ebp = r_esp;
    /* 00403f53: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00403f56: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00403f59: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00403f5c: movzx ecx, byte ptr [eax + 8] */ r_ecx = (u32)R8((u32)(r_eax+0x8u));
    /* 00403f60: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403f62: jne 0x403f78 */ if (!fZ) goto L_00403f78;
L_00403f64:; BB(0x00403f64);
    /* 00403f64: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00403f67: movzx eax, byte ptr [edx + 9] */ r_eax = (u32)R8((u32)(r_edx+0x9u));
    /* 00403f6b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403f6d: jne 0x403f78 */ if (!fZ) goto L_00403f78;
L_00403f6f:; BB(0x00403f6f);
    /* 00403f6f: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00403f76: jmp 0x403f7f */ goto L_00403f7f;
L_00403f78:; BB(0x00403f78);
    /* 00403f78: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
L_00403f7f:; BB(0x00403f7f);
    /* 00403f7f: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 00403f82: mov esp, ebp */ r_esp = r_ebp;
    /* 00403f84: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00403f85: ret  */ FN_RET(0x00403f50); r_esp += 4; return;
}

void f_005cd8b0(void) /* BaccaratDealerDisplay::vfunc48 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cd8b0);
    /* 005cd8b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cd8b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005cd8b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cd8b4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005cd8b5: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005cd8b8: mov eax, dword ptr [0x7947e4] */ r_eax = R32((u32)(0x7947e4u));
    /* 005cd8bd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cd8bf: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005cd8c5: mov eax, dword ptr [edx + 0x294] */ r_eax = R32((u32)(r_edx+0x294u));
    /* 005cd8cb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5cd8cdu); call_ind(t); }
    /* 005cd8cd: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005cd8d0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cd8d2: jne 0x5cd8d8 */ if (!fZ) goto L_005cd8d8;
L_005cd8d4:; BB(0x005cd8d4);
    /* 005cd8d4: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005cd8d6: jmp 0x5cd93c */ goto L_005cd93c;
L_005cd8d8:; BB(0x005cd8d8);
    /* 005cd8d8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cd8db: movzx eax, byte ptr [edx + 0x190] */ r_eax = (u32)R8((u32)(r_edx+0x190u));
    /* 005cd8e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cd8e4: je 0x5cd8f4 */ if (fZ) goto L_005cd8f4;
L_005cd8e6:; BB(0x005cd8e6);
    /* 005cd8e6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cd8e9: mov byte ptr [ecx + 0x190], 0 */ W8((u32)(r_ecx+0x190u), 0x0u);
    /* 005cd8f0: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005cd8f2: jmp 0x5cd93c */ goto L_005cd93c;
L_005cd8f4:; BB(0x005cd8f4);
    /* 005cd8f4: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005cd8fa: call 0x6377b0 */ r_esp -= 4; W32(r_esp, 0x5cd8ffu); f_006377b0();
    /* 005cd8ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cd901: jne 0x5cd907 */ if (!fZ) goto L_005cd907;
L_005cd903:; BB(0x005cd903);
    /* 005cd903: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005cd905: jmp 0x5cd93c */ goto L_005cd93c;
L_005cd907:; BB(0x005cd907);
    /* 005cd907: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005cd90d: call 0x6377b0 */ r_esp -= 4; W32(r_esp, 0x5cd912u); f_006377b0();
    /* 005cd912: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cd915: jne 0x5cd91b */ if (!fZ) goto L_005cd91b;
L_005cd917:; BB(0x005cd917);
    /* 005cd917: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005cd919: jmp 0x5cd93c */ goto L_005cd93c;
L_005cd91b:; BB(0x005cd91b);
    /* 005cd91b: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005cd91d: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5cd922u); f_0062fbf0();
    /* 005cd922: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cd925: mov esi, eax */ r_esi = r_eax;
    /* 005cd927: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005cd92d: call 0x6377b0 */ r_esp -= 4; W32(r_esp, 0x5cd932u); f_006377b0();
    /* 005cd932: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cd934: jg 0x5cd93a */ if ((!fZ&&fS==fO)) goto L_005cd93a;
L_005cd936:; BB(0x005cd936);
    /* 005cd936: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005cd938: jmp 0x5cd93c */ goto L_005cd93c;
L_005cd93a:; BB(0x005cd93a);
    /* 005cd93a: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_005cd93c:; BB(0x005cd93c);
    /* 005cd93c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005cd93d: mov esp, ebp */ r_esp = r_ebp;
    /* 005cd93f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cd940: ret  */ FN_RET(0x005cd8b0); r_esp += 4; return;
}

void f_005cd9a0(void) /* BaccaratDealerDisplay::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cd9a0);
    /* 005cd9a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cd9a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005cd9a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cd9a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005cd9a7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005cd9aa: cmp dword ptr [eax + 0x18], 1 */ {  u32 a = R32((u32)(r_eax+0x18u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cd9ae: jne 0x5cd9c7 */ if (!fZ) goto L_005cd9c7;
L_005cd9b0:; BB(0x005cd9b0);
    /* 005cd9b0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cd9b2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cd9b5: mov edx, dword ptr [ecx + 0x194] */ r_edx = R32((u32)(r_ecx+0x194u));
    /* 005cd9bb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cd9bc: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005cd9c2: call 0x5f4510 */ r_esp -= 4; W32(r_esp, 0x5cd9c7u); f_005f4510();
L_005cd9c7:; BB(0x005cd9c7);
    /* 005cd9c7: mov esp, ebp */ r_esp = r_ebp;
    /* 005cd9c9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cd9ca: ret 4 */ FN_RET(0x005cd9a0); r_esp += 8; return;
}

void f_005eac80(void) /* BaccaratDealerDisplay::vfunc43 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005eac80);
    /* 005eac80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005eac81: mov ebp, esp */ r_ebp = r_esp;
    /* 005eac83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005eac84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005eac87: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eac8a: cmp dword ptr [eax + 0x28], 0 */ {  u32 a = R32((u32)(r_eax+0x28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eac8e: je 0x5eaca7 */ if (fZ) goto L_005eaca7;
L_005eac90:; BB(0x005eac90);
    /* 005eac90: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eac93: call 0x5f54a0 */ r_esp -= 4; W32(r_esp, 0x5eac98u); f_005f54a0();
    /* 005eac98: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005eac9b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eac9d: je 0x5eaca7 */ if (fZ) goto L_005eaca7;
L_005eac9f:; BB(0x005eac9f);
    /* 005eac9f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eaca2: call 0x5f58d0 */ r_esp -= 4; W32(r_esp, 0x5eaca7u); f_005f58d0();
L_005eaca7:; BB(0x005eaca7);
    /* 005eaca7: mov esp, ebp */ r_esp = r_ebp;
    /* 005eaca9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005eacaa: ret  */ FN_RET(0x005eac80); r_esp += 4; return;
}

void f_005eb260(void) /* BaccaratDealerDisplay::vfunc17 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005eb260);
    /* 005eb260: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005eb261: mov ebp, esp */ r_ebp = r_esp;
    /* 005eb263: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005eb266: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005eb269: mov byte ptr [ebp - 1], 0 */ W8((u32)(r_ebp+0xffffffffu), 0x0u);
    /* 005eb26d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005eb270: mov ecx, dword ptr [eax + 0x154] */ r_ecx = R32((u32)(r_eax+0x154u));
    /* 005eb276: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eb279: jne 0x5eb289 */ if (!fZ) goto L_005eb289;
L_005eb27b:; BB(0x005eb27b);
    /* 005eb27b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005eb27e: mov eax, dword ptr [edx + 0x158] */ r_eax = R32((u32)(r_edx+0x158u));
    /* 005eb284: cmp eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eb287: je 0x5eb28d */ if (fZ) goto L_005eb28d;
L_005eb289:; BB(0x005eb289);
    /* 005eb289: mov byte ptr [ebp - 1], 1 */ W8((u32)(r_ebp+0xffffffffu), 0x1u);
L_005eb28d:; BB(0x005eb28d);
    /* 005eb28d: movzx ecx, byte ptr [ebp - 1] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 005eb291: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eb293: je 0x5eb2a5 */ if (fZ) goto L_005eb2a5;
L_005eb295:; BB(0x005eb295);
    /* 005eb295: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005eb298: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005eb29a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005eb29d: mov edx, dword ptr [eax + 0xac] */ r_edx = R32((u32)(r_eax+0xacu));
    /* 005eb2a3: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5eb2a5u); call_ind(t); }
L_005eb2a5:; BB(0x005eb2a5);
    /* 005eb2a5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005eb2a8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005eb2ab: mov dword ptr [eax + 0x154], ecx */ W32((u32)(r_eax+0x154u), r_ecx);
    /* 005eb2b1: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005eb2b4: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005eb2b7: mov dword ptr [edx + 0x158], eax */ W32((u32)(r_edx+0x158u), r_eax);
    /* 005eb2bd: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005eb2c0: cmp dword ptr [ecx + 0x174], 0 */ {  u32 a = R32((u32)(r_ecx+0x174u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eb2c7: je 0x5eb390 */ if (fZ) goto L_005eb390;
L_005eb2cd:; BB(0x005eb2cd);
    /* 005eb2cd: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005eb2d0: mov eax, dword ptr [edx + 0x15c] */ r_eax = R32((u32)(r_edx+0x15cu));
    /* 005eb2d6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eb2d7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005eb2da: mov edx, dword ptr [ecx + 0x164] */ r_edx = R32((u32)(r_ecx+0x164u));
    /* 005eb2e0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005eb2e1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005eb2e4: mov ecx, dword ptr [eax + 0x174] */ r_ecx = R32((u32)(r_eax+0x174u));
    /* 005eb2ea: call 0x616450 */ r_esp -= 4; W32(r_esp, 0x5eb2efu); f_00616450();
    /* 005eb2ef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eb2f0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005eb2f3: mov edx, dword ptr [ecx + 0x15c] */ r_edx = R32((u32)(r_ecx+0x15cu));
    /* 005eb2f9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005eb2fa: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005eb2fd: mov ecx, dword ptr [eax + 0x164] */ r_ecx = R32((u32)(r_eax+0x164u));
    /* 005eb303: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005eb304: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005eb307: mov ecx, dword ptr [edx + 0x174] */ r_ecx = R32((u32)(r_edx+0x174u));
    /* 005eb30d: call 0x616410 */ r_esp -= 4; W32(r_esp, 0x5eb312u); f_00616410();
    /* 005eb312: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eb313: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005eb316: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005eb318: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005eb31b: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 005eb31e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5eb320u); call_ind(t); }
    /* 005eb320: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005eb323: mov edx, dword ptr [ecx + 0x15c] */ r_edx = R32((u32)(r_ecx+0x15cu));
    /* 005eb329: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005eb32a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005eb32d: mov ecx, dword ptr [eax + 0x164] */ r_ecx = R32((u32)(r_eax+0x164u));
    /* 005eb333: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005eb334: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005eb337: mov ecx, dword ptr [edx + 0x174] */ r_ecx = R32((u32)(r_edx+0x174u));
    /* 005eb33d: call 0x6164d0 */ r_esp -= 4; W32(r_esp, 0x5eb342u); f_006164d0();
    /* 005eb342: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005eb345: imul eax, dword ptr [ecx + 0x40] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ecx+0x40u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005eb349: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005eb34c: add eax, dword ptr [edx + 0x158] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x158u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005eb352: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eb353: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005eb356: mov ecx, dword ptr [eax + 0x15c] */ r_ecx = R32((u32)(r_eax+0x15cu));
    /* 005eb35c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005eb35d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005eb360: mov eax, dword ptr [edx + 0x164] */ r_eax = R32((u32)(r_edx+0x164u));
    /* 005eb366: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eb367: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005eb36a: mov ecx, dword ptr [ecx + 0x174] */ r_ecx = R32((u32)(r_ecx+0x174u));
    /* 005eb370: call 0x616490 */ r_esp -= 4; W32(r_esp, 0x5eb375u); f_00616490();
    /* 005eb375: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005eb378: imul eax, dword ptr [edx + 0x40] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_edx+0x40u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005eb37c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005eb37f: add eax, dword ptr [ecx + 0x154] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x154u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005eb385: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eb386: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005eb389: call 0x5f5110 */ r_esp -= 4; W32(r_esp, 0x5eb38eu); f_005f5110();
    /* 005eb38e: jmp 0x5eb3ac */ goto L_005eb3ac;
L_005eb390:; BB(0x005eb390);
    /* 005eb390: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005eb393: mov eax, dword ptr [edx + 0x158] */ r_eax = R32((u32)(r_edx+0x158u));
    /* 005eb399: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eb39a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005eb39d: mov edx, dword ptr [ecx + 0x154] */ r_edx = R32((u32)(r_ecx+0x154u));
    /* 005eb3a3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005eb3a4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005eb3a7: call 0x5f5110 */ r_esp -= 4; W32(r_esp, 0x5eb3acu); f_005f5110();
L_005eb3ac:; BB(0x005eb3ac);
    /* 005eb3ac: movzx eax, byte ptr [ebp - 1] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 005eb3b0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eb3b2: je 0x5eb3c4 */ if (fZ) goto L_005eb3c4;
L_005eb3b4:; BB(0x005eb3b4);
    /* 005eb3b4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005eb3b7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005eb3b9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005eb3bc: mov eax, dword ptr [edx + 0xac] */ r_eax = R32((u32)(r_edx+0xacu));
    /* 005eb3c2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5eb3c4u); call_ind(t); }
L_005eb3c4:; BB(0x005eb3c4);
    /* 005eb3c4: mov esp, ebp */ r_esp = r_ebp;
    /* 005eb3c6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005eb3c7: ret 8 */ FN_RET(0x005eb260); r_esp += 12; return;
}

void f_005eb3d0(void) /* BaccaratDealerDisplay::vfunc18 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005eb3d0);
    /* 005eb3d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005eb3d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005eb3d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005eb3d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005eb3d7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb3da: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005eb3dc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb3df: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 005eb3e2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5eb3e4u); call_ind(t); }
    /* 005eb3e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eb3e5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005eb3e8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005eb3e9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb3ec: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005eb3ee: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb3f1: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 005eb3f4: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5eb3f6u); call_ind(t); }
    /* 005eb3f6: mov esp, ebp */ r_esp = r_ebp;
    /* 005eb3f8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005eb3f9: ret 4 */ FN_RET(0x005eb3d0); r_esp += 8; return;
}

void f_005eb420(void) /* BaccaratDealerDisplay::vfunc20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005eb420);
    /* 005eb420: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005eb421: mov ebp, esp */ r_ebp = r_esp;
    /* 005eb423: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005eb424: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005eb427: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005eb42a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eb42b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb42e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005eb430: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb433: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005eb436: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5eb438u); call_ind(t); }
    /* 005eb438: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eb439: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb43c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005eb43e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb441: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005eb444: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5eb446u); call_ind(t); }
    /* 005eb446: mov esp, ebp */ r_esp = r_ebp;
    /* 005eb448: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005eb449: ret 4 */ FN_RET(0x005eb420); r_esp += 8; return;
}

void f_005eb4f0(void) /* BaccaratDealerDisplay::vfunc45 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005eb4f0);
    /* 005eb4f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005eb4f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005eb4f3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005eb4f6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005eb4f7: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005eb4fa: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005eb4fd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005eb4ff: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005eb502: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005eb505: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5eb507u); call_ind(t); }
    /* 005eb507: mov esi, eax */ r_esi = r_eax;
    /* 005eb509: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005eb50c: call 0x5eb470 */ r_esp -= 4; W32(r_esp, 0x5eb511u); f_005eb470();
    /* 005eb511: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005eb513: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005eb516: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x5eb51bu); f_005f5550();
    /* 005eb51b: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005eb51c: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005eb51e: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005eb520: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005eb522: mov dword ptr [ebp - 8], esi */ W32((u32)(r_ebp+0xfffffff8u), r_esi);
    /* 005eb525: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005eb528: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005eb52a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005eb52d: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 005eb530: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5eb532u); call_ind(t); }
    /* 005eb532: mov esi, eax */ r_esi = r_eax;
    /* 005eb534: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005eb537: call 0x5eb4b0 */ r_esp -= 4; W32(r_esp, 0x5eb53cu); f_005eb4b0();
    /* 005eb53c: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005eb53e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005eb541: call 0x5f5590 */ r_esp -= 4; W32(r_esp, 0x5eb546u); f_005f5590();
    /* 005eb546: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005eb547: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005eb549: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005eb54b: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005eb54d: mov dword ptr [ebp - 4], esi */ W32((u32)(r_ebp+0xfffffffcu), r_esi);
    /* 005eb550: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005eb553: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005eb556: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 005eb558: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb55b: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 005eb55e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005eb561: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005eb562: mov esp, ebp */ r_esp = r_ebp;
    /* 005eb564: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005eb565: ret 4 */ FN_RET(0x005eb4f0); r_esp += 8; return;
}

void f_005eb570(void) /* BaccaratDealerDisplay::vfunc29 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005eb570);
    /* 005eb570: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005eb571: mov ebp, esp */ r_ebp = r_esp;
    /* 005eb573: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005eb574: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005eb577: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb57a: movzx ecx, byte ptr [eax + 0x24] */ r_ecx = (u32)R8((u32)(r_eax+0x24u));
    /* 005eb57e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eb580: je 0x5eb59a */ if (fZ) goto L_005eb59a;
L_005eb582:; BB(0x005eb582);
    /* 005eb582: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb585: call 0x5f5440 */ r_esp -= 4; W32(r_esp, 0x5eb58au); f_005f5440();
    /* 005eb58a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb58d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005eb58f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb592: mov edx, dword ptr [eax + 0xac] */ r_edx = R32((u32)(r_eax+0xacu));
    /* 005eb598: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5eb59au); call_ind(t); }
L_005eb59a:; BB(0x005eb59a);
    /* 005eb59a: mov esp, ebp */ r_esp = r_ebp;
    /* 005eb59c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005eb59d: ret  */ FN_RET(0x005eb570); r_esp += 4; return;
}

void f_005eb5a0(void) /* BaccaratDealerDisplay::vfunc28 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005eb5a0);
    /* 005eb5a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005eb5a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005eb5a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005eb5a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005eb5a7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb5aa: movzx ecx, byte ptr [eax + 0x24] */ r_ecx = (u32)R8((u32)(r_eax+0x24u));
    /* 005eb5ae: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eb5b0: jne 0x5eb5ca */ if (!fZ) goto L_005eb5ca;
L_005eb5b2:; BB(0x005eb5b2);
    /* 005eb5b2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb5b5: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005eb5b7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb5ba: mov edx, dword ptr [eax + 0xac] */ r_edx = R32((u32)(r_eax+0xacu));
    /* 005eb5c0: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5eb5c2u); call_ind(t); }
    /* 005eb5c2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb5c5: call 0x5f5420 */ r_esp -= 4; W32(r_esp, 0x5eb5cau); f_005f5420();
L_005eb5ca:; BB(0x005eb5ca);
    /* 005eb5ca: mov esp, ebp */ r_esp = r_ebp;
    /* 005eb5cc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005eb5cd: ret  */ FN_RET(0x005eb5a0); r_esp += 4; return;
}

void f_005eb630(void) /* BaccaratDealerDisplay::vfunc32 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005eb630);
    /* 005eb630: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005eb631: mov ebp, esp */ r_ebp = r_esp;
    /* 005eb633: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005eb636: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005eb639: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005eb63c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eb63d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005eb640: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005eb641: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb644: call 0x5f5640 */ r_esp -= 4; W32(r_esp, 0x5eb649u); f_005f5640();
    /* 005eb649: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005eb64c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eb64e: je 0x5eb6ba */ if (fZ) goto L_005eb6ba;
L_005eb650:; BB(0x005eb650);
    /* 005eb650: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb653: cmp dword ptr [eax + 0x174], 0 */ {  u32 a = R32((u32)(r_eax+0x174u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eb65a: je 0x5eb6b1 */ if (fZ) goto L_005eb6b1;
L_005eb65c:; BB(0x005eb65c);
    /* 005eb65c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb65f: movzx edx, byte ptr [ecx + 0x16d] */ r_edx = (u32)R8((u32)(r_ecx+0x16du));
    /* 005eb666: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eb668: je 0x5eb6b1 */ if (fZ) goto L_005eb6b1;
L_005eb66a:; BB(0x005eb66a);
    /* 005eb66a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb66d: mov cl, byte ptr [eax + 0x16e] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x16eu))) & 0xffu);
    /* 005eb673: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005eb674: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb677: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005eb67a: sub eax, dword ptr [edx + 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x14u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005eb67d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eb67e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb681: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005eb684: sub edx, dword ptr [ecx + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x10u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005eb687: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005eb688: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb68b: mov ecx, dword ptr [eax + 0x15c] */ r_ecx = R32((u32)(r_eax+0x15cu));
    /* 005eb691: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005eb692: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb695: mov eax, dword ptr [edx + 0x164] */ r_eax = R32((u32)(r_edx+0x164u));
    /* 005eb69b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eb69c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb69f: mov ecx, dword ptr [ecx + 0x174] */ r_ecx = R32((u32)(r_ecx+0x174u));
    /* 005eb6a5: call 0x616ac0 */ r_esp -= 4; W32(r_esp, 0x5eb6aau); f_00616ac0();
    /* 005eb6aa: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005eb6ad: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eb6af: je 0x5eb6ba */ if (fZ) goto L_005eb6ba;
L_005eb6b1:; BB(0x005eb6b1);
    /* 005eb6b1: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 005eb6b8: jmp 0x5eb6c1 */ goto L_005eb6c1;
L_005eb6ba:; BB(0x005eb6ba);
    /* 005eb6ba: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_005eb6c1:; BB(0x005eb6c1);
    /* 005eb6c1: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 005eb6c4: mov esp, ebp */ r_esp = r_ebp;
    /* 005eb6c6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005eb6c7: ret 8 */ FN_RET(0x005eb630); r_esp += 12; return;
}

void f_005eb6d0(void) /* BaccaratDealerDisplay::vfunc33 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005eb6d0);
    /* 005eb6d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005eb6d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005eb6d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005eb6d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005eb6d7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005eb6da: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005eb6dd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005eb6de: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005eb6e1: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005eb6e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eb6e5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb6e8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005eb6ea: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb6ed: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 005eb6f3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5eb6f5u); call_ind(t); }
    /* 005eb6f5: mov esp, ebp */ r_esp = r_ebp;
    /* 005eb6f7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005eb6f8: ret 4 */ FN_RET(0x005eb6d0); r_esp += 8; return;
}

void f_005eb780(void) /* BaccaratDealerDisplay::vfunc39 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005eb780);
    /* 005eb780: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005eb781: mov ebp, esp */ r_ebp = r_esp;
    /* 005eb783: sub esp, 0x7c */ {  u32 a = r_esp; u32 b = 0x7cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005eb786: mov dword ptr [ebp - 0x7c], ecx */ W32((u32)(r_ebp+0xffffff84u), r_ecx);
    /* 005eb789: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 005eb78c: cmp dword ptr [eax + 0x174], 0 */ {  u32 a = R32((u32)(r_eax+0x174u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eb793: je 0x5eba35 */ if (fZ) goto L_005eba35;
L_005eb799:; BB(0x005eb799);
    /* 005eb799: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 005eb79c: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eb7a0: je 0x5eba35 */ if (fZ) goto L_005eba35;
L_005eb7a6:; BB(0x005eb7a6);
    /* 005eb7a6: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 005eb7a9: call 0x5f54a0 */ r_esp -= 4; W32(r_esp, 0x5eb7aeu); f_005f54a0();
    /* 005eb7ae: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005eb7b1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eb7b3: je 0x5eba35 */ if (fZ) goto L_005eba35;
L_005eb7b9:; BB(0x005eb7b9);
    /* 005eb7b9: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 005eb7bc: movzx ecx, byte ptr [eax + 0x16c] */ r_ecx = (u32)R8((u32)(r_eax+0x16cu));
    /* 005eb7c3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005eb7c5: jle 0x5eba35 */ if ((fZ||fS!=fO)) goto L_005eba35;
L_005eb7cb:; BB(0x005eb7cb);
    /* 005eb7cb: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 005eb7ce: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 005eb7d1: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 005eb7d4: sub ecx, dword ptr [eax + 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x14u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005eb7d7: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 005eb7da: add ecx, dword ptr [edx + 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x14u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005eb7dd: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 005eb7e0: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 005eb7e3: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 005eb7e6: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 005eb7e9: sub edx, dword ptr [ecx + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x10u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005eb7ec: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 005eb7ef: add edx, dword ptr [eax + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x10u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005eb7f2: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 005eb7f5: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 005eb7f8: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 005eb7fb: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 005eb7fe: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 005eb801: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005eb804: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 005eb807: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005eb80a: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 005eb80d: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 005eb810: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005eb813: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005eb816: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005eb819: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005eb81c: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005eb81f: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 005eb822: cmp dword ptr [eax + 0x40], 1 */ {  u32 a = R32((u32)(r_eax+0x40u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005eb826: jle 0x5eb8d5 */ if ((fZ||fS!=fO)) goto L_005eb8d5;
L_005eb82c:; BB(0x005eb82c);
    /* 005eb82c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005eb82f: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 005eb832: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005eb835: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 005eb838: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005eb83b: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005eb83e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005eb841: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005eb844: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 005eb847: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 005eb84a: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 005eb84d: cmp dword ptr [ebp - 0x54], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffacu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005eb851: jg 0x5eb855 */ if ((!fZ&&fS==fO)) goto L_005eb855;
L_005eb853:; BB(0x005eb853);
    /* 005eb853: jmp 0x5eb875 */ goto L_005eb875;
L_005eb855:; BB(0x005eb855);
    /* 005eb855: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005eb858: sub ecx, dword ptr [ebp - 0x20] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005eb85b: imul ecx, dword ptr [ebp - 0x54] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xffffffacu)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005eb85f: add ecx, dword ptr [ebp - 0x20] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005eb862: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005eb865: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005eb868: sub edx, dword ptr [ebp - 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005eb86b: imul edx, dword ptr [ebp - 0x54] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ebp+0xffffffacu)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005eb86f: add edx, dword ptr [ebp - 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005eb872: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
L_005eb875:; BB(0x005eb875);
    /* 005eb875: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005eb878: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eb879: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 005eb87c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005eb87d: lea edx, [ebp - 0x20] */ r_edx = (u32)(r_ebp+0xffffffe0u);
    /* 005eb880: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005eb881: call 0x5ec3a0 */ r_esp -= 4; W32(r_esp, 0x5eb886u); f_005ec3a0();
    /* 005eb886: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005eb889: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005eb88c: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005eb88f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005eb892: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005eb895: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005eb898: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005eb89b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005eb89e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005eb8a1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005eb8a3: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 005eb8a6: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 005eb8a9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005eb8aa: lea eax, [ebp - 0x30] */ r_eax = (u32)(r_ebp+0xffffffd0u);
    /* 005eb8ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eb8ae: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 005eb8b1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005eb8b2: call 0x5ec4a0 */ r_esp -= 4; W32(r_esp, 0x5eb8b7u); f_005ec4a0();
    /* 005eb8b7: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005eb8ba: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005eb8bc: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 005eb8bf: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 005eb8c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eb8c3: lea ecx, [ebp - 0x30] */ r_ecx = (u32)(r_ebp+0xffffffd0u);
    /* 005eb8c6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005eb8c7: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 005eb8ca: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005eb8cb: call 0x5ec4a0 */ r_esp -= 4; W32(r_esp, 0x5eb8d0u); f_005ec4a0();
    /* 005eb8d0: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005eb8d3: jmp 0x5eb92d */ goto L_005eb92d;
L_005eb8d5:; BB(0x005eb8d5);
    /* 005eb8d5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005eb8d8: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005eb8da: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 005eb8dd: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005eb8e0: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 005eb8e3: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005eb8e6: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 005eb8e9: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 005eb8ec: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 005eb8ef: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005eb8f2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005eb8f5: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005eb8f8: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005eb8fb: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005eb8fe: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 005eb901: lea edx, [ebp - 0x40] */ r_edx = (u32)(r_ebp+0xffffffc0u);
    /* 005eb904: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005eb905: lea eax, [ebp - 0x20] */ r_eax = (u32)(r_ebp+0xffffffe0u);
    /* 005eb908: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eb909: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 005eb90c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005eb90d: call 0x5ec3a0 */ r_esp -= 4; W32(r_esp, 0x5eb912u); f_005ec3a0();
    /* 005eb912: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005eb915: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005eb918: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005eb91b: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005eb91e: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005eb921: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005eb924: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005eb927: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005eb92a: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_005eb92d:; BB(0x005eb92d);
    /* 005eb92d: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 005eb930: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005eb933: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005eb935: mov dword ptr [ebp - 0x6c], ecx */ W32((u32)(r_ebp+0xffffff94u), r_ecx);
    /* 005eb938: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 005eb93b: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005eb93e: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005eb940: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 005eb943: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005eb946: add ecx, dword ptr [ebp - 0x68] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffff98u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005eb949: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005eb94c: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005eb94f: add edx, dword ptr [ebp - 0x6c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffff94u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005eb952: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005eb955: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005eb958: add eax, dword ptr [ebp - 0x68] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffff98u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005eb95b: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005eb95e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb961: add ecx, dword ptr [ebp - 0x6c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffff94u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005eb964: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005eb967: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 005eb96a: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 005eb96d: call 0x5f84f0 */ r_esp -= 4; W32(r_esp, 0x5eb972u); f_005f84f0();
    /* 005eb972: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 005eb975: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 005eb978: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005eb97b: call 0x5f84d0 */ r_esp -= 4; W32(r_esp, 0x5eb980u); f_005f84d0();
    /* 005eb980: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 005eb983: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005eb986: add ecx, dword ptr [ebp - 0x70] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffff90u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005eb989: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005eb98c: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005eb98f: add edx, dword ptr [ebp - 0x74] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffff8cu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005eb992: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005eb995: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005eb998: add eax, dword ptr [ebp - 0x70] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffff90u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005eb99b: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005eb99e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005eb9a1: add ecx, dword ptr [ebp - 0x74] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffff8cu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005eb9a4: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005eb9a7: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 005eb9aa: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005eb9ad: mov ecx, dword ptr [eax + 0x1a8] */ r_ecx = R32((u32)(r_eax+0x1a8u));
    /* 005eb9b3: mov dword ptr [ebp - 0x78], ecx */ W32((u32)(r_ebp+0xffffff88u), r_ecx);
    /* 005eb9b6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005eb9b8: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 005eb9bb: mov al, byte ptr [edx + 0x16f] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x16fu))) & 0xffu);
    /* 005eb9c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eb9c2: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 005eb9c5: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 005eb9c8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005eb9c9: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 005eb9cc: movzx ecx, byte ptr [eax + 0x16c] */ r_ecx = (u32)R8((u32)(r_eax+0x16cu));
    /* 005eb9d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005eb9d4: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005eb9d7: mov edx, esp */ r_edx = r_esp;
    /* 005eb9d9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005eb9dc: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 005eb9de: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005eb9e1: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 005eb9e4: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005eb9e7: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 005eb9ea: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb9ed: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 005eb9f0: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005eb9f3: mov edx, esp */ r_edx = r_esp;
    /* 005eb9f5: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005eb9f8: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 005eb9fa: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005eb9fd: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 005eba00: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005eba03: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 005eba06: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005eba09: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 005eba0c: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 005eba0f: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 005eba12: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eba13: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 005eba16: mov edx, dword ptr [ecx + 0x15c] */ r_edx = R32((u32)(r_ecx+0x15cu));
    /* 005eba1c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005eba1d: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 005eba20: mov ecx, dword ptr [eax + 0x164] */ r_ecx = R32((u32)(r_eax+0x164u));
    /* 005eba26: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005eba27: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 005eba2a: mov ecx, dword ptr [edx + 0x174] */ r_ecx = R32((u32)(r_edx+0x174u));
    /* 005eba30: call 0x616510 */ r_esp -= 4; W32(r_esp, 0x5eba35u); f_00616510();
L_005eba35:; BB(0x005eba35);
    /* 005eba35: mov esp, ebp */ r_esp = r_ebp;
    /* 005eba37: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005eba38: ret 4 */ FN_RET(0x005eb780); r_esp += 8; return;
}

void f_005ec000(void) /* BaccaratDealerDisplay::vfunc31 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ec000);
    /* 005ec000: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ec001: mov ebp, esp */ r_ebp = r_esp;
    /* 005ec003: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ec004: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ec007: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ec00a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ec00b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ec00e: call 0x5f55b0 */ r_esp -= 4; W32(r_esp, 0x5ec013u); f_005f55b0();
    /* 005ec013: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ec016: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005ec018: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ec01b: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 005ec01e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ec020u); call_ind(t); }
    /* 005ec020: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ec021: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ec024: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005ec026: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ec029: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005ec02c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ec02eu); call_ind(t); }
    /* 005ec02e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ec02f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ec032: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005ec034: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ec037: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005ec03a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ec03cu); call_ind(t); }
    /* 005ec03c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ec03f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005ec041: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ec044: mov eax, dword ptr [edx + 0xac] */ r_eax = R32((u32)(r_edx+0xacu));
    /* 005ec04a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ec04cu); call_ind(t); }
    /* 005ec04c: mov esp, ebp */ r_esp = r_ebp;
    /* 005ec04e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ec04f: ret 4 */ FN_RET(0x005ec000); r_esp += 8; return;
}

void f_005f4b60(void) /* BaccaratDealerDisplay::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f4b60);
    /* 005f4b60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f4b61: mov ebp, esp */ r_ebp = r_esp;
    /* 005f4b63: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f4b66: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f4b69: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f4b6c: call 0x5f54c0 */ r_esp -= 4; W32(r_esp, 0x5f4b71u); f_005f54c0();
    /* 005f4b71: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005f4b74: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f4b76: je 0x5f4b7f */ if (fZ) goto L_005f4b7f;
L_005f4b78:; BB(0x005f4b78);
    /* 005f4b78: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005f4b7a: jmp 0x5f4ced */ goto L_005f4ced;
L_005f4b7f:; BB(0x005f4b7f);
    /* 005f4b7f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f4b82: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 005f4b85: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005f4b88: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f4b8c: je 0x5f4ba7 */ if (fZ) goto L_005f4ba7;
L_005f4b8e:; BB(0x005f4b8e);
    /* 005f4b8e: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f4b92: je 0x5f4c33 */ if (fZ) goto L_005f4c33;
L_005f4b98:; BB(0x005f4b98);
    /* 005f4b98: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f4b9c: je 0x5f4cc9 */ if (fZ) goto L_005f4cc9;
L_005f4ba2:; BB(0x005f4ba2);
    /* 005f4ba2: jmp 0x5f4ceb */ goto L_005f4ceb;
L_005f4ba7:; BB(0x005f4ba7);
    /* 005f4ba7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f4baa: movzx ecx, byte ptr [eax + 4] */ r_ecx = (u32)R8((u32)(r_eax+0x4u));
    /* 005f4bae: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f4bb0: je 0x5f4bb9 */ if (fZ) goto L_005f4bb9;
L_005f4bb2:; BB(0x005f4bb2);
    /* 005f4bb2: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005f4bb4: jmp 0x5f4ced */ goto L_005f4ced;
L_005f4bb9:; BB(0x005f4bb9);
    /* 005f4bb9: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005f4bbc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f4bbd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f4bc0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005f4bc2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f4bc5: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 005f4bcb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f4bcdu); call_ind(t); }
    /* 005f4bcd: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005f4bd0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f4bd2: je 0x5f4c2c */ if (fZ) goto L_005f4c2c;
L_005f4bd4:; BB(0x005f4bd4);
    /* 005f4bd4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f4bd7: movzx eax, byte ptr [edx + 8] */ r_eax = (u32)R8((u32)(r_edx+0x8u));
    /* 005f4bdb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f4bdd: jne 0x5f4c00 */ if (!fZ) goto L_005f4c00;
L_005f4bdf:; BB(0x005f4bdf);
    /* 005f4bdf: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f4be2: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 005f4be5: and edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 005f4be8: je 0x5f4c00 */ if (fZ) goto L_005f4c00;
L_005f4bea:; BB(0x005f4bea);
    /* 005f4bea: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f4bed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f4bee: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f4bf1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005f4bf3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f4bf6: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 005f4bf9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f4bfbu); call_ind(t); }
    /* 005f4bfb: jmp 0x5f4ced */ goto L_005f4ced;
L_005f4c00:; BB(0x005f4c00);
    /* 005f4c00: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f4c03: movzx edx, byte ptr [ecx + 9] */ r_edx = (u32)R8((u32)(r_ecx+0x9u));
    /* 005f4c07: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f4c09: jne 0x5f4c2c */ if (!fZ) goto L_005f4c2c;
L_005f4c0b:; BB(0x005f4c0b);
    /* 005f4c0b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f4c0e: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 005f4c11: and ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 005f4c14: je 0x5f4c2c */ if (fZ) goto L_005f4c2c;
L_005f4c16:; BB(0x005f4c16);
    /* 005f4c16: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005f4c19: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f4c1a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f4c1d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005f4c1f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f4c22: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 005f4c25: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f4c27u); call_ind(t); }
    /* 005f4c27: jmp 0x5f4ced */ goto L_005f4ced;
L_005f4c2c:; BB(0x005f4c2c);
    /* 005f4c2c: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005f4c2e: jmp 0x5f4ced */ goto L_005f4ced;
L_005f4c33:; BB(0x005f4c33);
    /* 005f4c33: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f4c36: movzx edx, byte ptr [ecx + 4] */ r_edx = (u32)R8((u32)(r_ecx+0x4u));
    /* 005f4c3a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f4c3c: jne 0x5f4c6f */ if (!fZ) goto L_005f4c6f;
L_005f4c3e:; BB(0x005f4c3e);
    /* 005f4c3e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f4c41: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f4c42: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f4c45: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005f4c47: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f4c4a: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 005f4c50: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f4c52u); call_ind(t); }
    /* 005f4c52: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005f4c55: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f4c57: jne 0x5f4c73 */ if (!fZ) goto L_005f4c73;
L_005f4c59:; BB(0x005f4c59);
    /* 005f4c59: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f4c5c: movzx eax, byte ptr [edx + 8] */ r_eax = (u32)R8((u32)(r_edx+0x8u));
    /* 005f4c60: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f4c62: jne 0x5f4c73 */ if (!fZ) goto L_005f4c73;
L_005f4c64:; BB(0x005f4c64);
    /* 005f4c64: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f4c67: movzx edx, byte ptr [ecx + 9] */ r_edx = (u32)R8((u32)(r_ecx+0x9u));
    /* 005f4c6b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f4c6d: jne 0x5f4c73 */ if (!fZ) goto L_005f4c73;
L_005f4c6f:; BB(0x005f4c6f);
    /* 005f4c6f: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005f4c71: jmp 0x5f4ced */ goto L_005f4ced;
L_005f4c73:; BB(0x005f4c73);
    /* 005f4c73: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f4c76: movzx ecx, byte ptr [eax + 8] */ r_ecx = (u32)R8((u32)(r_eax+0x8u));
    /* 005f4c7a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f4c7c: je 0x5f4c9c */ if (fZ) goto L_005f4c9c;
L_005f4c7e:; BB(0x005f4c7e);
    /* 005f4c7e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005f4c81: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 005f4c84: and eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005f4c87: je 0x5f4c9c */ if (fZ) goto L_005f4c9c;
L_005f4c89:; BB(0x005f4c89);
    /* 005f4c89: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f4c8c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f4c8d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f4c90: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005f4c92: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f4c95: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 005f4c98: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5f4c9au); call_ind(t); }
    /* 005f4c9a: jmp 0x5f4ced */ goto L_005f4ced;
L_005f4c9c:; BB(0x005f4c9c);
    /* 005f4c9c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f4c9f: movzx ecx, byte ptr [eax + 9] */ r_ecx = (u32)R8((u32)(r_eax+0x9u));
    /* 005f4ca3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f4ca5: je 0x5f4cc5 */ if (fZ) goto L_005f4cc5;
L_005f4ca7:; BB(0x005f4ca7);
    /* 005f4ca7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005f4caa: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 005f4cad: and eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005f4cb0: je 0x5f4cc5 */ if (fZ) goto L_005f4cc5;
L_005f4cb2:; BB(0x005f4cb2);
    /* 005f4cb2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f4cb5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f4cb6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f4cb9: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005f4cbb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f4cbe: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 005f4cc1: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5f4cc3u); call_ind(t); }
    /* 005f4cc3: jmp 0x5f4ced */ goto L_005f4ced;
L_005f4cc5:; BB(0x005f4cc5);
    /* 005f4cc5: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005f4cc7: jmp 0x5f4ced */ goto L_005f4ced;
L_005f4cc9:; BB(0x005f4cc9);
    /* 005f4cc9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f4ccc: movzx ecx, byte ptr [eax + 4] */ r_ecx = (u32)R8((u32)(r_eax+0x4u));
    /* 005f4cd0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f4cd2: je 0x5f4cd8 */ if (fZ) goto L_005f4cd8;
L_005f4cd4:; BB(0x005f4cd4);
    /* 005f4cd4: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005f4cd6: jmp 0x5f4ced */ goto L_005f4ced;
L_005f4cd8:; BB(0x005f4cd8);
    /* 005f4cd8: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005f4cdb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f4cdc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f4cdf: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005f4ce1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f4ce4: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 005f4ce7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f4ce9u); call_ind(t); }
    /* 005f4ce9: jmp 0x5f4ced */ goto L_005f4ced;
L_005f4ceb:; BB(0x005f4ceb);
    /* 005f4ceb: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_005f4ced:; BB(0x005f4ced);
    /* 005f4ced: mov esp, ebp */ r_esp = r_ebp;
    /* 005f4cef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f4cf0: ret 4 */ FN_RET(0x005f4b60); r_esp += 8; return;
}

void f_005f4e50(void) /* BaccaratDealerDisplay::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f4e50);
    /* 005f4e50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f4e51: mov ebp, esp */ r_ebp = r_esp;
    /* 005f4e53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f4e54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f4e57: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f4e5a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f4e5b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f4e5e: call 0x5f4ed0 */ r_esp -= 4; W32(r_esp, 0x5f4e63u); f_005f4ed0();
    /* 005f4e63: mov esp, ebp */ r_esp = r_ebp;
    /* 005f4e65: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f4e66: ret 4 */ FN_RET(0x005f4e50); r_esp += 8; return;
}

void f_005f4e70(void) /* BaccaratDealerDisplay::vfunc3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f4e70);
    /* 005f4e70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f4e71: mov ebp, esp */ r_ebp = r_esp;
    /* 005f4e73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f4e74: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f4e77: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f4e7a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f4e7b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f4e7e: call 0x5f4ed0 */ r_esp -= 4; W32(r_esp, 0x5f4e83u); f_005f4ed0();
    /* 005f4e83: mov esp, ebp */ r_esp = r_ebp;
    /* 005f4e85: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f4e86: ret 4 */ FN_RET(0x005f4e70); r_esp += 8; return;
}

void f_005f4e90(void) /* BaccaratDealerDisplay::vfunc4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f4e90);
    /* 005f4e90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f4e91: mov ebp, esp */ r_ebp = r_esp;
    /* 005f4e93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f4e94: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f4e97: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f4e9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f4e9b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f4e9e: call 0x5f4f50 */ r_esp -= 4; W32(r_esp, 0x5f4ea3u); f_005f4f50();
    /* 005f4ea3: mov esp, ebp */ r_esp = r_ebp;
    /* 005f4ea5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f4ea6: ret 4 */ FN_RET(0x005f4e90); r_esp += 8; return;
}

void f_005f4eb0(void) /* BaccaratDealerDisplay::vfunc5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f4eb0);
    /* 005f4eb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f4eb1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f4eb3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f4eb4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f4eb7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f4eba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f4ebb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f4ebe: call 0x5f4f50 */ r_esp -= 4; W32(r_esp, 0x5f4ec3u); f_005f4f50();
    /* 005f4ec3: mov esp, ebp */ r_esp = r_ebp;
    /* 005f4ec5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f4ec6: ret 4 */ FN_RET(0x005f4eb0); r_esp += 8; return;
}

void f_005f5250(void) /* BaccaratDealerDisplay::vfunc24 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f5250);
    /* 005f5250: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f5251: mov ebp, esp */ r_ebp = r_esp;
    /* 005f5253: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f5254: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f5257: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f525a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f525d: mov dword ptr [eax + 0x30], ecx */ W32((u32)(r_eax+0x30u), r_ecx);
    /* 005f5260: mov esp, ebp */ r_esp = r_ebp;
    /* 005f5262: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f5263: ret 4 */ FN_RET(0x005f5250); r_esp += 8; return;
}

void f_005f5290(void) /* BaccaratDealerDisplay::vfunc26 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f5290);
    /* 005f5290: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f5291: mov ebp, esp */ r_ebp = r_esp;
    /* 005f5293: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f5296: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005f5297: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005f529a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f529d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005f529f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f52a2: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005f52a5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f52a7u); call_ind(t); }
    /* 005f52a7: mov esi, eax */ r_esi = r_eax;
    /* 005f52a9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f52ac: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x5f52b1u); f_005f5550();
    /* 005f52b1: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005f52b2: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005f52b4: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005f52b6: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005f52b8: mov dword ptr [ebp - 8], esi */ W32((u32)(r_ebp+0xfffffff8u), r_esi);
    /* 005f52bb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f52be: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005f52c0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f52c3: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 005f52c6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f52c8u); call_ind(t); }
    /* 005f52c8: mov esi, eax */ r_esi = r_eax;
    /* 005f52ca: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f52cd: call 0x5f5590 */ r_esp -= 4; W32(r_esp, 0x5f52d2u); f_005f5590();
    /* 005f52d2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005f52d3: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005f52d5: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005f52d7: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005f52d9: mov dword ptr [ebp - 4], esi */ W32((u32)(r_ebp+0xfffffffcu), r_esi);
    /* 005f52dc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f52df: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f52e2: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 005f52e4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f52e7: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 005f52ea: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f52ed: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005f52ee: mov esp, ebp */ r_esp = r_ebp;
    /* 005f52f0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f52f1: ret 4 */ FN_RET(0x005f5290); r_esp += 8; return;
}

void f_005f5300(void) /* BaccaratDealerDisplay::vfunc27 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f5300);
    /* 005f5300: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f5301: mov ebp, esp */ r_ebp = r_esp;
    /* 005f5303: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f5306: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005f5309: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005f530c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f530f: cmp ecx, dword ptr [eax + 0x20] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x20u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f5312: jne 0x5f5319 */ if (!fZ) goto L_005f5319;
L_005f5314:; BB(0x005f5314);
    /* 005f5314: jmp 0x5f53ae */ goto L_005f53ae;
L_005f5319:; BB(0x005f5319);
    /* 005f5319: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005f531c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f531f: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 005f5322: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005f5325: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f5329: jne 0x5f5336 */ if (!fZ) goto L_005f5336;
L_005f532b:; BB(0x005f532b);
    /* 005f532b: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005f532e: cmp dword ptr [edx + 0x28], 0 */ {  u32 a = R32((u32)(r_edx+0x28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f5332: jne 0x5f5336 */ if (!fZ) goto L_005f5336;
L_005f5334:; BB(0x005f5334);
    /* 005f5334: jmp 0x5f53ae */ goto L_005f53ae;
L_005f5336:; BB(0x005f5336);
    /* 005f5336: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005f5339: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f533a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005f533d: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 005f5340: call 0x5f8dd0 */ r_esp -= 4; W32(r_esp, 0x5f5345u); f_005f8dd0();
    /* 005f5345: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005f5348: cmp dword ptr [edx + 4], 0 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f534c: je 0x5f53ae */ if (fZ) goto L_005f53ae;
L_005f534e:; BB(0x005f534e);
    /* 005f534e: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005f5351: cmp dword ptr [eax + 0x28], 0 */ {  u32 a = R32((u32)(r_eax+0x28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f5355: je 0x5f53ae */ if (fZ) goto L_005f53ae;
L_005f5357:; BB(0x005f5357);
    /* 005f5357: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005f535a: call 0x5f54a0 */ r_esp -= 4; W32(r_esp, 0x5f535fu); f_005f54a0();
    /* 005f535f: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005f5362: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f5364: je 0x5f53ae */ if (fZ) goto L_005f53ae;
L_005f5366:; BB(0x005f5366);
    /* 005f5366: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005f5369: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 005f536c: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005f536f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005f5372: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 005f5375: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005f5378: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005f537b: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005f537e: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005f5381: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005f5384: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005f5387: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005f538a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005f538d: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005f5390: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f5393: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005f5396: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f5399: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005f539c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f539f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f53a2: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 005f53a5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f53a6: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005f53a9: call 0x5f5940 */ r_esp -= 4; W32(r_esp, 0x5f53aeu); f_005f5940();
L_005f53ae:; BB(0x005f53ae);
    /* 005f53ae: mov esp, ebp */ r_esp = r_ebp;
    /* 005f53b0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f53b1: ret 4 */ FN_RET(0x005f5300); r_esp += 8; return;
}

void f_005f56d0(void) /* BaccaratDealerDisplay::vfunc34 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f56d0);
    /* 005f56d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f56d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f56d3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f56d6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005f56d7: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005f56da: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f56dd: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005f56e0: call 0x5f8550 */ r_esp -= 4; W32(r_esp, 0x5f56e5u); f_005f8550();
    /* 005f56e5: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005f56e6: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005f56e8: mov esi, eax */ r_esi = r_eax;
    /* 005f56ea: sar esi, 1 */ { u32 c = (1u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 005f56ec: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f56ef: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x5f56f4u); f_005f5550();
    /* 005f56f4: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005f56f5: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005f56f7: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005f56f9: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005f56fb: mov dword ptr [ebp - 8], esi */ W32((u32)(r_ebp+0xfffffff8u), r_esi);
    /* 005f56fe: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f5701: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 005f5704: call 0x5f8570 */ r_esp -= 4; W32(r_esp, 0x5f5709u); f_005f8570();
    /* 005f5709: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005f570a: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005f570c: mov esi, eax */ r_esi = r_eax;
    /* 005f570e: sar esi, 1 */ { u32 c = (1u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 005f5710: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f5713: call 0x5f5590 */ r_esp -= 4; W32(r_esp, 0x5f5718u); f_005f5590();
    /* 005f5718: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005f5719: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005f571b: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005f571d: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005f571f: mov dword ptr [ebp - 4], esi */ W32((u32)(r_ebp+0xfffffffcu), r_esi);
    /* 005f5722: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f5725: add edx, dword ptr [ebp + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005f5728: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f5729: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f572c: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f572f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f5730: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f5733: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005f5735: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f5738: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005f573b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f573du); call_ind(t); }
    /* 005f573d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005f573e: mov esp, ebp */ r_esp = r_ebp;
    /* 005f5740: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f5741: ret 8 */ FN_RET(0x005f56d0); r_esp += 12; return;
}

void f_005f5750(void) /* BaccaratDealerDisplay::vfunc35 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f5750);
    /* 005f5750: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f5751: mov ebp, esp */ r_ebp = r_esp;
    /* 005f5753: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f5756: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005f5757: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005f575a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f575d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005f575f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f5762: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005f5765: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f5767u); call_ind(t); }
    /* 005f5767: mov esi, eax */ r_esi = r_eax;
    /* 005f5769: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f576c: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x5f5771u); f_005f5550();
    /* 005f5771: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005f5772: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005f5774: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005f5776: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005f5778: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f577b: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x5f5780u); f_005f5550();
    /* 005f5780: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005f5781: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005f5783: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005f5785: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005f5787: mov dword ptr [ebp - 8], esi */ W32((u32)(r_ebp+0xfffffff8u), r_esi);
    /* 005f578a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f578d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005f578f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f5792: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 005f5795: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f5797u); call_ind(t); }
    /* 005f5797: mov esi, eax */ r_esi = r_eax;
    /* 005f5799: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f579c: call 0x5f5590 */ r_esp -= 4; W32(r_esp, 0x5f57a1u); f_005f5590();
    /* 005f57a1: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005f57a2: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005f57a4: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005f57a6: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005f57a8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f57ab: call 0x5f5590 */ r_esp -= 4; W32(r_esp, 0x5f57b0u); f_005f5590();
    /* 005f57b0: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005f57b1: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005f57b3: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005f57b5: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005f57b7: mov dword ptr [ebp - 4], esi */ W32((u32)(r_ebp+0xfffffffcu), r_esi);
    /* 005f57ba: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f57bd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f57be: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f57c1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f57c2: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f57c5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005f57c7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f57ca: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005f57cd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f57cfu); call_ind(t); }
    /* 005f57cf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005f57d0: mov esp, ebp */ r_esp = r_ebp;
    /* 005f57d2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f57d3: ret 4 */ FN_RET(0x005f5750); r_esp += 8; return;
}

void f_005f57e0(void) /* BaccaratDealerDisplay::vfunc36 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f57e0);
    /* 005f57e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f57e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f57e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f57e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f57e7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f57ea: cmp dword ptr [eax + 0x10], 0x2710 */ {  u32 a = R32((u32)(r_eax+0x10u)); u32 b = 0x2710u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f57f1: jge 0x5f5814 */ if ((fS==fO)) goto L_005f5814;
L_005f57f3:; BB(0x005f57f3);
    /* 005f57f3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f57f6: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 005f57f9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f57fa: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f57fd: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005f5800: add ecx, 0x2710 */ {  u32 a = r_ecx; u32 b = 0x2710u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f5806: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f5807: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f580a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005f580c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f580f: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 005f5812: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5f5814u); call_ind(t); }
L_005f5814:; BB(0x005f5814);
    /* 005f5814: mov esp, ebp */ r_esp = r_ebp;
    /* 005f5816: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f5817: ret  */ FN_RET(0x005f57e0); r_esp += 4; return;
}

void f_005f5820(void) /* BaccaratDealerDisplay::vfunc37 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f5820);
    /* 005f5820: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f5821: mov ebp, esp */ r_ebp = r_esp;
    /* 005f5823: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f5824: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f5827: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f582a: cmp dword ptr [eax + 0x10], 0x2710 */ {  u32 a = R32((u32)(r_eax+0x10u)); u32 b = 0x2710u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f5831: jl 0x5f5854 */ if ((fS!=fO)) goto L_005f5854;
L_005f5833:; BB(0x005f5833);
    /* 005f5833: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f5836: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 005f5839: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f583a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f583d: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005f5840: sub ecx, 0x2710 */ {  u32 a = r_ecx; u32 b = 0x2710u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005f5846: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f5847: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f584a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005f584c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f584f: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 005f5852: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5f5854u); call_ind(t); }
L_005f5854:; BB(0x005f5854);
    /* 005f5854: mov esp, ebp */ r_esp = r_ebp;
    /* 005f5856: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f5857: ret  */ FN_RET(0x005f5820); r_esp += 4; return;
}

void f_005f59c0(void) /* BaccaratDealerDisplay::vfunc40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f59c0);
    /* 005f59c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f59c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f59c3: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f59c6: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005f59c9: cmp dword ptr [ebp + 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f59cd: je 0x5f5a5f */ if (fZ) goto L_005f5a5f;
L_005f59d3:; BB(0x005f59d3);
    /* 005f59d3: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 005f59d6: cmp dword ptr [eax], 0 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f59d9: jl 0x5f59e5 */ if ((fS!=fO)) goto L_005f59e5;
L_005f59db:; BB(0x005f59db);
    /* 005f59db: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 005f59de: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005f59e0: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 005f59e3: jmp 0x5f59ee */ goto L_005f59ee;
L_005f59e5:; BB(0x005f59e5);
    /* 005f59e5: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f59e8: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005f59eb: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
L_005f59ee:; BB(0x005f59ee);
    /* 005f59ee: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f59f1: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005f59f4: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 005f59f7: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f59fb: jl 0x5f5a08 */ if ((fS!=fO)) goto L_005f5a08;
L_005f59fd:; BB(0x005f59fd);
    /* 005f59fd: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 005f5a00: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005f5a03: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 005f5a06: jmp 0x5f5a11 */ goto L_005f5a11;
L_005f5a08:; BB(0x005f5a08);
    /* 005f5a08: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f5a0b: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005f5a0e: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
L_005f5a11:; BB(0x005f5a11);
    /* 005f5a11: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005f5a14: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005f5a17: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 005f5a1a: cmp dword ptr [eax + 8], 0 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f5a1e: jl 0x5f5a2b */ if ((fS!=fO)) goto L_005f5a2b;
L_005f5a20:; BB(0x005f5a20);
    /* 005f5a20: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 005f5a23: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005f5a26: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 005f5a29: jmp 0x5f5a34 */ goto L_005f5a34;
L_005f5a2b:; BB(0x005f5a2b);
    /* 005f5a2b: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f5a2e: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 005f5a31: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
L_005f5a34:; BB(0x005f5a34);
    /* 005f5a34: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005f5a37: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005f5a3a: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 005f5a3d: cmp dword ptr [eax + 0xc], 0 */ {  u32 a = R32((u32)(r_eax+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f5a41: jl 0x5f5a4e */ if ((fS!=fO)) goto L_005f5a4e;
L_005f5a43:; BB(0x005f5a43);
    /* 005f5a43: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 005f5a46: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 005f5a49: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 005f5a4c: jmp 0x5f5a57 */ goto L_005f5a57;
L_005f5a4e:; BB(0x005f5a4e);
    /* 005f5a4e: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f5a51: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 005f5a54: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
L_005f5a57:; BB(0x005f5a57);
    /* 005f5a57: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005f5a5a: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005f5a5d: jmp 0x5f5a83 */ goto L_005f5a83;
L_005f5a5f:; BB(0x005f5a5f);
    /* 005f5a5f: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f5a62: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005f5a65: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005f5a68: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f5a6b: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 005f5a6e: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005f5a71: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f5a74: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 005f5a77: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005f5a7a: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f5a7d: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 005f5a80: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005f5a83:; BB(0x005f5a83);
    /* 005f5a83: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f5a86: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005f5a89: mov ecx, dword ptr [eax + 0x1a8] */ r_ecx = R32((u32)(r_eax+0x1a8u));
    /* 005f5a8f: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005f5a92: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005f5a95: call 0x613f80 */ r_esp -= 4; W32(r_esp, 0x5f5a9au); f_00613f80();
    /* 005f5a9a: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f5a9d: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005f5aa0: mov ecx, dword ptr [eax + 0x1a8] */ r_ecx = R32((u32)(r_eax+0x1a8u));
    /* 005f5aa6: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005f5aa9: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 005f5aac: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f5aad: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005f5ab0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f5ab1: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005f5ab4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f5ab5: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 005f5ab8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f5ab9: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f5abc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f5abd: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f5ac0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005f5ac2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f5ac5: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 005f5ac8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f5acau); call_ind(t); }
    /* 005f5aca: mov esp, ebp */ r_esp = r_ebp;
    /* 005f5acc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f5acd: ret 0x14 */ FN_RET(0x005f59c0); r_esp += 24; return;
}

void f_005f5ad0(void) /* BaccaratDealerDisplay::vfunc41 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f5ad0);
    /* 005f5ad0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f5ad1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f5ad3: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f5ad6: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005f5ad9: cmp dword ptr [ebp + 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f5add: je 0x5f5b6f */ if (fZ) goto L_005f5b6f;
L_005f5ae3:; BB(0x005f5ae3);
    /* 005f5ae3: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 005f5ae6: cmp dword ptr [eax], 0 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f5ae9: jl 0x5f5af5 */ if ((fS!=fO)) goto L_005f5af5;
L_005f5aeb:; BB(0x005f5aeb);
    /* 005f5aeb: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 005f5aee: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005f5af0: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005f5af3: jmp 0x5f5afe */ goto L_005f5afe;
L_005f5af5:; BB(0x005f5af5);
    /* 005f5af5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005f5af8: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005f5afb: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
L_005f5afe:; BB(0x005f5afe);
    /* 005f5afe: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f5b01: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005f5b04: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 005f5b07: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f5b0b: jl 0x5f5b18 */ if ((fS!=fO)) goto L_005f5b18;
L_005f5b0d:; BB(0x005f5b0d);
    /* 005f5b0d: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 005f5b10: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005f5b13: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005f5b16: jmp 0x5f5b21 */ goto L_005f5b21;
L_005f5b18:; BB(0x005f5b18);
    /* 005f5b18: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005f5b1b: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005f5b1e: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
L_005f5b21:; BB(0x005f5b21);
    /* 005f5b21: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f5b24: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005f5b27: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 005f5b2a: cmp dword ptr [eax + 8], 0 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f5b2e: jl 0x5f5b3b */ if ((fS!=fO)) goto L_005f5b3b;
L_005f5b30:; BB(0x005f5b30);
    /* 005f5b30: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 005f5b33: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005f5b36: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 005f5b39: jmp 0x5f5b44 */ goto L_005f5b44;
L_005f5b3b:; BB(0x005f5b3b);
    /* 005f5b3b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005f5b3e: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 005f5b41: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
L_005f5b44:; BB(0x005f5b44);
    /* 005f5b44: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f5b47: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005f5b4a: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 005f5b4d: cmp dword ptr [eax + 0xc], 0 */ {  u32 a = R32((u32)(r_eax+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f5b51: jl 0x5f5b5e */ if ((fS!=fO)) goto L_005f5b5e;
L_005f5b53:; BB(0x005f5b53);
    /* 005f5b53: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 005f5b56: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 005f5b59: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 005f5b5c: jmp 0x5f5b67 */ goto L_005f5b67;
L_005f5b5e:; BB(0x005f5b5e);
    /* 005f5b5e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005f5b61: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 005f5b64: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
L_005f5b67:; BB(0x005f5b67);
    /* 005f5b67: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005f5b6a: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005f5b6d: jmp 0x5f5b93 */ goto L_005f5b93;
L_005f5b6f:; BB(0x005f5b6f);
    /* 005f5b6f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005f5b72: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005f5b75: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005f5b78: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005f5b7b: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 005f5b7e: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005f5b81: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005f5b84: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 005f5b87: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005f5b8a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005f5b8d: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 005f5b90: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005f5b93:; BB(0x005f5b93);
    /* 005f5b93: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 005f5b96: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f5b97: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005f5b9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f5b9b: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005f5b9e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f5b9f: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 005f5ba2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f5ba3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f5ba6: call 0x625350 */ r_esp -= 4; W32(r_esp, 0x5f5babu); f_00625350();
    /* 005f5bab: mov esp, ebp */ r_esp = r_ebp;
    /* 005f5bad: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f5bae: ret 0x14 */ FN_RET(0x005f5ad0); r_esp += 24; return;
}

void f_005f5cc0(void) /* BaccaratDealerDisplay::vfunc16 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f5cc0);
    /* 005f5cc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f5cc1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f5cc3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f5cc4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f5cc7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f5cca: call 0x5eacb0 */ r_esp -= 4; W32(r_esp, 0x5f5ccfu); f_005eacb0();
    /* 005f5ccf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f5cd2: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f5cd6: je 0x5f5ce7 */ if (fZ) goto L_005f5ce7;
L_005f5cd8:; BB(0x005f5cd8);
    /* 005f5cd8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f5cdb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f5cdc: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f5cdf: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 005f5ce2: call 0x5f8e20 */ r_esp -= 4; W32(r_esp, 0x5f5ce7u); f_005f8e20();
L_005f5ce7:; BB(0x005f5ce7);
    /* 005f5ce7: mov esp, ebp */ r_esp = r_ebp;
    /* 005f5ce9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f5cea: ret  */ FN_RET(0x005f5cc0); r_esp += 4; return;
}

void f_005f5e70(void) /* BaccaratDealerDisplay::vfunc44 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f5e70);
    /* 005f5e70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f5e71: mov ebp, esp */ r_ebp = r_esp;
    /* 005f5e73: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f5e76: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005f5e79: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f5e7c: call 0x5eb220 */ r_esp -= 4; W32(r_esp, 0x5f5e81u); f_005eb220();
    /* 005f5e81: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005f5e84: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f5e87: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f5e88: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f5e8b: call 0x5eb150 */ r_esp -= 4; W32(r_esp, 0x5f5e90u); f_005eb150();
    /* 005f5e90: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f5e93: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f5e96: je 0x5f5ea8 */ if (fZ) goto L_005f5ea8;
L_005f5e98:; BB(0x005f5e98);
    /* 005f5e98: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f5e9b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005f5e9d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f5ea0: mov edx, dword ptr [eax + 0xbc] */ r_edx = R32((u32)(r_eax+0xbcu));
    /* 005f5ea6: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5f5ea8u); call_ind(t); }
L_005f5ea8:; BB(0x005f5ea8);
    /* 005f5ea8: mov esp, ebp */ r_esp = r_ebp;
    /* 005f5eaa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f5eab: ret 4 */ FN_RET(0x005f5e70); r_esp += 8; return;
}

void f_005f5eb0(void) /* BaccaratDealerDisplay::vfunc38 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f5eb0);
    /* 005f5eb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f5eb1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f5eb3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f5eb4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f5eb7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f5eba: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f5ebe: je 0x5f5edf */ if (fZ) goto L_005f5edf;
L_005f5ec0:; BB(0x005f5ec0);
    /* 005f5ec0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f5ec3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005f5ec5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f5ec8: mov eax, dword ptr [edx + 0xac] */ r_eax = R32((u32)(r_edx+0xacu));
    /* 005f5ece: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f5ed0u); call_ind(t); }
    /* 005f5ed0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f5ed3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f5ed4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f5ed7: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 005f5eda: call 0x5f8e60 */ r_esp -= 4; W32(r_esp, 0x5f5edfu); f_005f8e60();
L_005f5edf:; BB(0x005f5edf);
    /* 005f5edf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f5ee2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f5ee3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f5ee6: call 0x5f5860 */ r_esp -= 4; W32(r_esp, 0x5f5eebu); f_005f5860();
    /* 005f5eeb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f5eee: cmp dword ptr [ecx + 0x28], 0 */ {  u32 a = R32((u32)(r_ecx+0x28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f5ef2: je 0x5f5f13 */ if (fZ) goto L_005f5f13;
L_005f5ef4:; BB(0x005f5ef4);
    /* 005f5ef4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f5ef7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f5ef8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f5efb: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005f5efe: call 0x5f8e20 */ r_esp -= 4; W32(r_esp, 0x5f5f03u); f_005f8e20();
    /* 005f5f03: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f5f06: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005f5f08: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f5f0b: mov eax, dword ptr [edx + 0xac] */ r_eax = R32((u32)(r_edx+0xacu));
    /* 005f5f11: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f5f13u); call_ind(t); }
L_005f5f13:; BB(0x005f5f13);
    /* 005f5f13: mov esp, ebp */ r_esp = r_ebp;
    /* 005f5f15: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f5f16: ret 4 */ FN_RET(0x005f5eb0); r_esp += 8; return;
}

void f_005f6000(void) /* BaccaratDealerDisplay::vfunc46 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f6000);
    /* 005f6000: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f6001: mov ebp, esp */ r_ebp = r_esp;
    /* 005f6003: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f6004: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f6007: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f600a: call 0x5f5600 */ r_esp -= 4; W32(r_esp, 0x5f600fu); f_005f5600();
    /* 005f600f: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005f6012: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f6014: jne 0x5f6043 */ if (!fZ) goto L_005f6043;
L_005f6016:; BB(0x005f6016);
    /* 005f6016: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f6019: call 0x5f5cf0 */ r_esp -= 4; W32(r_esp, 0x5f601eu); f_005f5cf0();
    /* 005f601e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f6021: cmp dword ptr [ecx + 0x18c], 0 */ {  u32 a = R32((u32)(r_ecx+0x18cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f6028: je 0x5f6043 */ if (fZ) goto L_005f6043;
L_005f602a:; BB(0x005f602a);
    /* 005f602a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f602d: mov eax, dword ptr [edx + 0x18c] */ r_eax = R32((u32)(r_edx+0x18cu));
    /* 005f6033: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f6036: mov ecx, dword ptr [ecx + 0x18c] */ r_ecx = R32((u32)(r_ecx+0x18cu));
    /* 005f603c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005f603e: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005f6041: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f6043u); call_ind(t); }
L_005f6043:; BB(0x005f6043);
    /* 005f6043: mov esp, ebp */ r_esp = r_ebp;
    /* 005f6045: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f6046: ret  */ FN_RET(0x005f6000); r_esp += 4; return;
}

