#include "protos.h"

void f_00553010(void) /* sub_553010 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00553010);
    /* 00553010: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00553011: mov ebp, esp */ r_ebp = r_esp;
    /* 00553013: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00553015: push 0x6a5429 */ { u32 v = 0x6a5429u; r_esp -= 4; W32(r_esp, v); }
    /* 0055301a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00553020: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00553021: sub esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00553024: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00553029: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0055302b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055302c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0055302f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00553035: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
    /* 00553038: push 0x6c8514 */ { u32 v = 0x6c8514u; r_esp -= 4; W32(r_esp, v); }
    /* 0055303d: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x553042u); f_00630f40();
    /* 00553042: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00553045: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00553046: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0055304c: call 0x5f38b0 */ r_esp -= 4; W32(r_esp, 0x553051u); f_005f38b0();
    /* 00553051: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 00553054: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00553056: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00553059: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0055305c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x55305eu); call_ind(t); }
    /* 0055305e: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 00553063: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x553068u); f_00686d82();
    /* 00553068: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055306b: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0055306e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00553075: cmp dword ptr [ebp - 0x38], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00553079: je 0x553088 */ if (fZ) goto L_00553088;
L_0055307b:; BB(0x0055307b);
    /* 0055307b: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0055307e: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x553083u); f_005f5bf0();
    /* 00553083: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 00553086: jmp 0x55308f */ goto L_0055308f;
L_00553088:; BB(0x00553088);
    /* 00553088: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
L_0055308f:; BB(0x0055308f);
    /* 0055308f: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00553092: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 00553095: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0055309c: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 0055309f: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005530a2: mov dword ptr [edx + 0x6c], eax */ W32((u32)(r_edx+0x6cu), r_eax);
    /* 005530a5: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005530a7: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 005530a9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005530ab: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005530ad: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005530b0: call 0x554230 */ r_esp -= 4; W32(r_esp, 0x5530b5u); f_00554230();
    /* 005530b5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005530b6: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005530b9: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 005530bc: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x5530c1u); f_005eae80();
    /* 005530c1: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005530c4: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 005530c7: mov dword ptr [eax + 0x178], 8 */ W32((u32)(r_eax+0x178u), 0x8u);
    /* 005530d1: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 005530d3: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5530d8u); f_00686d82();
    /* 005530d8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005530db: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 005530de: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005530e5: cmp dword ptr [ebp - 0x40], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005530e9: je 0x5530fa */ if (fZ) goto L_005530fa;
L_005530eb:; BB(0x005530eb);
    /* 005530eb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005530ed: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005530f0: call 0x600a70 */ r_esp -= 4; W32(r_esp, 0x5530f5u); f_00600a70();
    /* 005530f5: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 005530f8: jmp 0x553101 */ goto L_00553101;
L_005530fa:; BB(0x005530fa);
    /* 005530fa: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
L_00553101:; BB(0x00553101);
    /* 00553101: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00553104: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 00553107: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0055310e: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00553111: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00553112: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 00553115: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 00553118: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x55311du); f_005f5d50();
    /* 0055311d: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00553120: mov edx, dword ptr [ecx + 0x6c] */ r_edx = R32((u32)(r_ecx+0x6cu));
    /* 00553123: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 00553126: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 00553129: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0055312b: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0055312e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x553130u); call_ind(t); }
    /* 00553130: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 00553135: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x55313au); f_00686d82();
    /* 0055313a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055313d: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 00553140: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00553147: cmp dword ptr [ebp - 0x48], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055314b: je 0x55315a */ if (fZ) goto L_0055315a;
L_0055314d:; BB(0x0055314d);
    /* 0055314d: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00553150: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x553155u); f_005f5bf0();
    /* 00553155: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 00553158: jmp 0x553161 */ goto L_00553161;
L_0055315a:; BB(0x0055315a);
    /* 0055315a: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
L_00553161:; BB(0x00553161);
    /* 00553161: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00553164: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 00553167: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0055316e: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 00553171: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00553174: mov dword ptr [edx + 0x70], eax */ W32((u32)(r_edx+0x70u), r_eax);
    /* 00553177: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00553179: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0055317b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0055317d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0055317f: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00553182: call 0x554230 */ r_esp -= 4; W32(r_esp, 0x553187u); f_00554230();
    /* 00553187: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00553188: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0055318b: mov ecx, dword ptr [ecx + 0x70] */ r_ecx = R32((u32)(r_ecx+0x70u));
    /* 0055318e: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x553193u); f_005eae80();
    /* 00553193: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 00553196: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00553199: mov dword ptr [eax + 0x178], 8 */ W32((u32)(r_eax+0x178u), 0x8u);
    /* 005531a3: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 005531a8: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5531adu); f_00686d82();
    /* 005531ad: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005531b0: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 005531b3: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 005531ba: cmp dword ptr [ebp - 0x50], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005531be: je 0x5531cd */ if (fZ) goto L_005531cd;
L_005531c0:; BB(0x005531c0);
    /* 005531c0: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005531c3: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x5531c8u); f_005f5bf0();
    /* 005531c8: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 005531cb: jmp 0x5531d4 */ goto L_005531d4;
L_005531cd:; BB(0x005531cd);
    /* 005531cd: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
L_005531d4:; BB(0x005531d4);
    /* 005531d4: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 005531d7: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 005531da: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005531e1: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005531e4: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005531e7: mov dword ptr [edx + 0x74], eax */ W32((u32)(r_edx+0x74u), r_eax);
    /* 005531ea: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005531ec: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 005531ee: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005531f0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005531f2: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005531f5: call 0x554230 */ r_esp -= 4; W32(r_esp, 0x5531fau); f_00554230();
    /* 005531fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005531fb: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005531fe: mov ecx, dword ptr [ecx + 0x74] */ r_ecx = R32((u32)(r_ecx+0x74u));
    /* 00553201: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x553206u); f_005eae80();
    /* 00553206: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 00553209: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0055320c: mov dword ptr [eax + 0x178], 8 */ W32((u32)(r_eax+0x178u), 0x8u);
    /* 00553216: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00553219: call 0x552f70 */ r_esp -= 4; W32(r_esp, 0x55321eu); f_00552f70();
    /* 0055321e: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00553221: call 0x5542c0 */ r_esp -= 4; W32(r_esp, 0x553226u); f_005542c0();
    /* 00553226: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00553229: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00553230: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00553231: mov esp, ebp */ r_esp = r_ebp;
    /* 00553233: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00553234: ret  */ FN_RET(0x00553010); r_esp += 4; return;
}

