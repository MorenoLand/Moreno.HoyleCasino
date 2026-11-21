#include "protos.h"

void f_0053aa90(void) /* ThreeCardPokerDealerDisplay::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053aa90);
    /* 0053aa90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053aa91: mov ebp, esp */ r_ebp = r_esp;
    /* 0053aa93: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0053aa95: push 0x6a4b3e */ { u32 v = 0x6a4b3eu; r_esp -= 4; W32(r_esp, v); }
    /* 0053aa9a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0053aaa0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053aaa1: sub esp, 0xa0 */ {  u32 a = r_esp; u32 b = 0xa0u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053aaa7: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0053aaac: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0053aaae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053aaaf: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0053aab2: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0053aab8: mov dword ptr [ebp - 0x8c], ecx */ W32((u32)(r_ebp+0xffffff74u), r_ecx);
    /* 0053aabe: mov dword ptr [ebp - 0x48], 5 */ W32((u32)(r_ebp+0xffffffb8u), 0x5u);
    /* 0053aac5: mov dword ptr [ebp - 0x44], 4 */ W32((u32)(r_ebp+0xffffffbcu), 0x4u);
    /* 0053aacc: mov dword ptr [ebp - 0x40], 3 */ W32((u32)(r_ebp+0xffffffc0u), 0x3u);
    /* 0053aad3: mov dword ptr [ebp - 0x3c], 8 */ W32((u32)(r_ebp+0xffffffc4u), 0x8u);
    /* 0053aada: mov dword ptr [ebp - 0x38], 7 */ W32((u32)(r_ebp+0xffffffc8u), 0x7u);
    /* 0053aae1: mov dword ptr [ebp - 0x34], 6 */ W32((u32)(r_ebp+0xffffffccu), 0x6u);
    /* 0053aae8: mov dword ptr [ebp - 0x30], 2 */ W32((u32)(r_ebp+0xffffffd0u), 0x2u);
    /* 0053aaef: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0053aaf6: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0053aafd: mov dword ptr [ebp - 0x24], 0xb */ W32((u32)(r_ebp+0xffffffdcu), 0xbu);
    /* 0053ab04: mov dword ptr [ebp - 0x20], 0xa */ W32((u32)(r_ebp+0xffffffe0u), 0xau);
    /* 0053ab0b: mov dword ptr [ebp - 0x1c], 9 */ W32((u32)(r_ebp+0xffffffe4u), 0x9u);
    /* 0053ab12: push 0x6c5b68 */ { u32 v = 0x6c5b68u; r_esp -= 4; W32(r_esp, v); }
    /* 0053ab17: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x53ab1cu); f_00630f40();
    /* 0053ab1c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053ab1f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053ab20: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0053ab26: call 0x5f38b0 */ r_esp -= 4; W32(r_esp, 0x53ab2bu); f_005f38b0();
    /* 0053ab2b: push 0x310e98 */ { u32 v = 0x310e98u; r_esp -= 4; W32(r_esp, v); }
    /* 0053ab30: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0053ab36: call 0x5f1ad0 */ r_esp -= 4; W32(r_esp, 0x53ab3bu); f_005f1ad0();
    /* 0053ab3b: push 0x310e9b */ { u32 v = 0x310e9bu; r_esp -= 4; W32(r_esp, v); }
    /* 0053ab40: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0053ab46: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x53ab4bu); f_005f2ba0();
    /* 0053ab4b: push 0x310e9c */ { u32 v = 0x310e9cu; r_esp -= 4; W32(r_esp, v); }
    /* 0053ab50: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0053ab56: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x53ab5bu); f_005f2ba0();
    /* 0053ab5b: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 0053ab62: jmp 0x53ab6d */ goto L_0053ab6d;
L_0053ab64:; BB(0x0053ab64);
    /* 0053ab64: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053ab67: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0053ab6a: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_0053ab6d:; BB(0x0053ab6d);
    /* 0053ab6d: cmp dword ptr [ebp - 0x18], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053ab71: jge 0x53ac6d */ if ((fS==fO)) goto L_0053ac6d;
L_0053ab77:; BB(0x0053ab77);
    /* 0053ab77: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0053ab79: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x53ab7eu); f_00686d82();
    /* 0053ab7e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053ab81: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 0053ab84: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0053ab8b: cmp dword ptr [ebp - 0x50], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053ab8f: je 0x53aba1 */ if (fZ) goto L_0053aba1;
L_0053ab91:; BB(0x0053ab91);
    /* 0053ab91: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0053ab94: call 0x53bb30 */ r_esp -= 4; W32(r_esp, 0x53ab99u); f_0053bb30();
    /* 0053ab99: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 0053ab9f: jmp 0x53abab */ goto L_0053abab;
L_0053aba1:; BB(0x0053aba1);
    /* 0053aba1: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
L_0053abab:; BB(0x0053abab);
    /* 0053abab: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 0053abb1: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 0053abb4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0053abbb: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053abbe: mov eax, dword ptr [ebp - 0x8c] */ r_eax = R32((u32)(r_ebp+0xffffff74u));
    /* 0053abc4: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0053abc7: mov dword ptr [eax + edx*4 + 4], ecx */ W32((u32)(r_eax+r_edx*4+0x4u), r_ecx);
    /* 0053abcb: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053abce: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053abcf: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053abd2: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 0053abd8: mov ecx, dword ptr [ecx + eax*4 + 4] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 0053abdc: call 0x53bc30 */ r_esp -= 4; W32(r_esp, 0x53abe1u); f_0053bc30();
    /* 0053abe1: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053abe6: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x53abebu); f_00686d82();
    /* 0053abeb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053abee: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 0053abf1: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0053abf8: cmp dword ptr [ebp - 0x58], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053abfc: je 0x53ac0e */ if (fZ) goto L_0053ac0e;
L_0053abfe:; BB(0x0053abfe);
    /* 0053abfe: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0053ac01: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x53ac06u); f_005ec5a0();
    /* 0053ac06: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 0053ac0c: jmp 0x53ac18 */ goto L_0053ac18;
L_0053ac0e:; BB(0x0053ac0e);
    /* 0053ac0e: mov dword ptr [ebp - 0x94], 0 */ W32((u32)(r_ebp+0xffffff6cu), 0x0u);
L_0053ac18:; BB(0x0053ac18);
    /* 0053ac18: mov edx, dword ptr [ebp - 0x94] */ r_edx = R32((u32)(r_ebp+0xffffff6cu));
    /* 0053ac1e: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 0053ac21: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0053ac28: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053ac2b: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 0053ac31: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 0053ac34: mov dword ptr [ecx + eax*4 + 0x80], edx */ W32((u32)(r_ecx+r_eax*4+0x80u), r_edx);
    /* 0053ac3b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0053ac3d: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0053ac3f: push 0x51 */ { u32 v = 0x51u; r_esp -= 4; W32(r_esp, v); }
    /* 0053ac41: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053ac43: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053ac45: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0053ac47: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 0053ac4c: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 0053ac4e: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0053ac53: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053ac56: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 0053ac5c: mov ecx, dword ptr [ecx + eax*4 + 0x80] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x80u));
    /* 0053ac63: call 0x5ec8f0 */ r_esp -= 4; W32(r_esp, 0x53ac68u); f_005ec8f0();
    /* 0053ac68: jmp 0x53ab64 */ goto L_0053ab64;
L_0053ac6d:; BB(0x0053ac6d);
    /* 0053ac6d: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 0053ac74: jmp 0x53ac7f */ goto L_0053ac7f;
L_0053ac76:; BB(0x0053ac76);
    /* 0053ac76: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053ac79: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0053ac7c: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
L_0053ac7f:; BB(0x0053ac7f);
    /* 0053ac7f: cmp dword ptr [ebp - 0x18], 0xc */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053ac83: jge 0x53ae52 */ if ((fS==fO)) goto L_0053ae52;
L_0053ac89:; BB(0x0053ac89);
    /* 0053ac89: push 0xae4 */ { u32 v = 0xae4u; r_esp -= 4; W32(r_esp, v); }
    /* 0053ac8e: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x53ac93u); f_00686d82();
    /* 0053ac93: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053ac96: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 0053ac99: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0053aca0: cmp dword ptr [ebp - 0x60], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053aca4: je 0x53acb6 */ if (fZ) goto L_0053acb6;
L_0053aca6:; BB(0x0053aca6);
    /* 0053aca6: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0053aca9: call 0x53c1b0 */ r_esp -= 4; W32(r_esp, 0x53acaeu); f_0053c1b0();
    /* 0053acae: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 0053acb4: jmp 0x53acc0 */ goto L_0053acc0;
L_0053acb6:; BB(0x0053acb6);
    /* 0053acb6: mov dword ptr [ebp - 0x98], 0 */ W32((u32)(r_ebp+0xffffff68u), 0x0u);
L_0053acc0:; BB(0x0053acc0);
    /* 0053acc0: mov eax, dword ptr [ebp - 0x98] */ r_eax = R32((u32)(r_ebp+0xffffff68u));
    /* 0053acc6: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 0053acc9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0053acd0: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053acd3: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 0053acd9: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 0053acdc: mov dword ptr [edx + ecx*4 + 0x18], eax */ W32((u32)(r_edx+r_ecx*4+0x18u), r_eax);
    /* 0053ace0: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053ace3: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 0053ace9: mov eax, dword ptr [edx + ecx*4 + 0x18] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x18u));
    /* 0053aced: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053acf0: mov dword ptr [eax + 0xae0], ecx */ W32((u32)(r_eax+0xae0u), r_ecx);
    /* 0053acf6: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0053acf8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0053acfa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053acfc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053acfe: push 0x310e9e */ { u32 v = 0x310e9eu; r_esp -= 4; W32(r_esp, v); }
    /* 0053ad03: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053ad06: mov eax, dword ptr [ebp - 0x8c] */ r_eax = R32((u32)(r_ebp+0xffffff74u));
    /* 0053ad0c: mov ecx, dword ptr [eax + edx*4 + 0x18] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x18u));
    /* 0053ad10: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x53ad15u); f_005eae80();
    /* 0053ad15: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053ad18: mov edx, dword ptr [ebp + ecx*4 - 0x48] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffb8u));
    /* 0053ad1c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053ad1d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053ad20: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 0053ad26: mov edx, dword ptr [ecx + eax*4 + 0x18] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x18u));
    /* 0053ad2a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053ad2d: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 0053ad33: mov ecx, dword ptr [ecx + eax*4 + 0x18] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x18u));
    /* 0053ad37: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0053ad39: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0053ad3f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53ad41u); call_ind(t); }
    /* 0053ad41: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053ad43: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053ad46: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 0053ad4c: mov ecx, dword ptr [edx + ecx*4 + 0x18] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x18u));
    /* 0053ad50: call 0x5eb5d0 */ r_esp -= 4; W32(r_esp, 0x53ad55u); f_005eb5d0();
    /* 0053ad55: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053ad58: mov ecx, dword ptr [0x7933ec] */ r_ecx = R32((u32)(0x7933ecu));
    /* 0053ad5e: mov edx, dword ptr [ecx + eax*4 + 8] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 0053ad62: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053ad63: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053ad66: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 0053ad6c: mov ecx, dword ptr [ecx + eax*4 + 0x18] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x18u));
    /* 0053ad70: call 0x5cc2c0 */ r_esp -= 4; W32(r_esp, 0x53ad75u); f_005cc2c0();
    /* 0053ad75: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053ad78: mov eax, dword ptr [ebp - 0x8c] */ r_eax = R32((u32)(r_ebp+0xffffff74u));
    /* 0053ad7e: mov ecx, dword ptr [eax + edx*4 + 0x18] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x18u));
    /* 0053ad82: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053ad85: mov eax, dword ptr [ebp - 0x8c] */ r_eax = R32((u32)(r_ebp+0xffffff74u));
    /* 0053ad8b: mov edx, dword ptr [eax + edx*4 + 0x18] */ r_edx = R32((u32)(r_eax+r_edx*4+0x18u));
    /* 0053ad8f: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0053ad91: mov ecx, edx */ r_ecx = r_edx;
    /* 0053ad93: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 0053ad96: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x53ad98u); call_ind(t); }
    /* 0053ad98: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053ad9b: mov ecx, dword ptr [eax*8 + 0x737108] */ r_ecx = R32((u32)(r_eax*8+0x737108u));
    /* 0053ada2: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0053ada5: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053ada8: mov eax, dword ptr [edx*8 + 0x73710c] */ r_eax = R32((u32)(r_edx*8+0x73710cu));
    /* 0053adaf: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0053adb2: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 0053adb7: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x53adbcu); f_00686d82();
    /* 0053adbc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053adbf: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 0053adc2: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0053adc9: cmp dword ptr [ebp - 0x68], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff98u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053adcd: je 0x53addf */ if (fZ) goto L_0053addf;
L_0053adcf:; BB(0x0053adcf);
    /* 0053adcf: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0053add2: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x53add7u); f_005eaaf0();
    /* 0053add7: mov dword ptr [ebp - 0x9c], eax */ W32((u32)(r_ebp+0xffffff64u), r_eax);
    /* 0053addd: jmp 0x53ade9 */ goto L_0053ade9;
L_0053addf:; BB(0x0053addf);
    /* 0053addf: mov dword ptr [ebp - 0x9c], 0 */ W32((u32)(r_ebp+0xffffff64u), 0x0u);
L_0053ade9:; BB(0x0053ade9);
    /* 0053ade9: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 0053adef: mov dword ptr [ebp - 0x64], ecx */ W32((u32)(r_ebp+0xffffff9cu), r_ecx);
    /* 0053adf2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0053adf9: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053adfc: mov eax, dword ptr [ebp - 0x8c] */ r_eax = R32((u32)(r_ebp+0xffffff74u));
    /* 0053ae02: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0053ae05: mov dword ptr [eax + edx*4 + 0x50], ecx */ W32((u32)(r_eax+r_edx*4+0x50u), r_ecx);
    /* 0053ae09: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0053ae0b: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0053ae0d: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0053ae10: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053ae11: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0053ae14: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053ae15: push 0x311292 */ { u32 v = 0x311292u; r_esp -= 4; W32(r_esp, v); }
    /* 0053ae1a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053ae1d: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 0053ae23: mov ecx, dword ptr [edx + ecx*4 + 0x50] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x50u));
    /* 0053ae27: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x53ae2cu); f_005eae80();
    /* 0053ae2c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053ae2f: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 0053ae35: mov edx, dword ptr [ecx + eax*4 + 0x50] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x50u));
    /* 0053ae39: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053ae3c: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 0053ae42: mov ecx, dword ptr [ecx + eax*4 + 0x50] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x50u));
    /* 0053ae46: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0053ae48: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0053ae4b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53ae4du); call_ind(t); }
    /* 0053ae4d: jmp 0x53ac76 */ goto L_0053ac76;
L_0053ae52:; BB(0x0053ae52);
    /* 0053ae52: push 0x198 */ { u32 v = 0x198u; r_esp -= 4; W32(r_esp, v); }
    /* 0053ae57: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x53ae5cu); f_00686d82();
    /* 0053ae5c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053ae5f: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 0053ae62: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 0053ae69: cmp dword ptr [ebp - 0x70], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053ae6d: je 0x53ae8b */ if (fZ) goto L_0053ae8b;
L_0053ae6f:; BB(0x0053ae6f);
    /* 0053ae6f: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 0053ae72: call 0x5cd6a0 */ r_esp -= 4; W32(r_esp, 0x53ae77u); f_005cd6a0();
    /* 0053ae77: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 0053ae7a: mov dword ptr [ecx], 0x6c5aa4 */ W32((u32)(r_ecx), 0x6c5aa4u);
    /* 0053ae80: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 0053ae83: mov dword ptr [ebp - 0xa0], edx */ W32((u32)(r_ebp+0xffffff60u), r_edx);
    /* 0053ae89: jmp 0x53ae95 */ goto L_0053ae95;
L_0053ae8b:; BB(0x0053ae8b);
    /* 0053ae8b: mov dword ptr [ebp - 0xa0], 0 */ W32((u32)(r_ebp+0xffffff60u), 0x0u);
L_0053ae95:; BB(0x0053ae95);
    /* 0053ae95: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 0053ae9b: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 0053ae9e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0053aea5: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 0053aeab: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 0053aeae: mov dword ptr [ecx + 0x48], edx */ W32((u32)(r_ecx+0x48u), r_edx);
    /* 0053aeb1: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0053aeb3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053aeb5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053aeb7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053aeb9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053aebb: mov eax, dword ptr [ebp - 0x8c] */ r_eax = R32((u32)(r_ebp+0xffffff74u));
    /* 0053aec1: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 0053aec4: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x53aec9u); f_005eae80();
    /* 0053aec9: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 0053aece: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x53aed3u); f_00686d82();
    /* 0053aed3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053aed6: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 0053aed9: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 0053aee0: cmp dword ptr [ebp - 0x78], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff88u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053aee4: je 0x53aef6 */ if (fZ) goto L_0053aef6;
L_0053aee6:; BB(0x0053aee6);
    /* 0053aee6: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 0053aee9: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x53aeeeu); f_005f5bf0();
    /* 0053aeee: mov dword ptr [ebp - 0xa4], eax */ W32((u32)(r_ebp+0xffffff5cu), r_eax);
    /* 0053aef4: jmp 0x53af00 */ goto L_0053af00;
L_0053aef6:; BB(0x0053aef6);
    /* 0053aef6: mov dword ptr [ebp - 0xa4], 0 */ W32((u32)(r_ebp+0xffffff5cu), 0x0u);
L_0053af00:; BB(0x0053af00);
    /* 0053af00: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0053af06: mov dword ptr [ebp - 0x74], ecx */ W32((u32)(r_ebp+0xffffff8cu), r_ecx);
    /* 0053af09: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0053af10: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 0053af16: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0053af19: mov dword ptr [edx + 0x94], eax */ W32((u32)(r_edx+0x94u), r_eax);
    /* 0053af1f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0053af21: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 0053af23: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053af25: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053af27: push 0x7e6 */ { u32 v = 0x7e6u; r_esp -= 4; W32(r_esp, v); }
    /* 0053af2c: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 0053af32: mov ecx, dword ptr [ecx + 0x94] */ r_ecx = R32((u32)(r_ecx+0x94u));
    /* 0053af38: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x53af3du); f_005eae80();
    /* 0053af3d: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 0053af42: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x53af47u); f_00686d82();
    /* 0053af47: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053af4a: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 0053af4d: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 0053af54: cmp dword ptr [ebp - 0x80], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff80u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053af58: je 0x53af6a */ if (fZ) goto L_0053af6a;
L_0053af5a:; BB(0x0053af5a);
    /* 0053af5a: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 0053af5d: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x53af62u); f_005f5bf0();
    /* 0053af62: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 0053af68: jmp 0x53af74 */ goto L_0053af74;
L_0053af6a:; BB(0x0053af6a);
    /* 0053af6a: mov dword ptr [ebp - 0xa8], 0 */ W32((u32)(r_ebp+0xffffff58u), 0x0u);
L_0053af74:; BB(0x0053af74);
    /* 0053af74: mov edx, dword ptr [ebp - 0xa8] */ r_edx = R32((u32)(r_ebp+0xffffff58u));
    /* 0053af7a: mov dword ptr [ebp - 0x7c], edx */ W32((u32)(r_ebp+0xffffff84u), r_edx);
    /* 0053af7d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0053af84: mov eax, dword ptr [ebp - 0x8c] */ r_eax = R32((u32)(r_ebp+0xffffff74u));
    /* 0053af8a: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 0053af8d: mov dword ptr [eax + 0x98], ecx */ W32((u32)(r_eax+0x98u), r_ecx);
    /* 0053af93: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0053af95: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 0053af97: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053af99: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053af9b: push 0x7e7 */ { u32 v = 0x7e7u; r_esp -= 4; W32(r_esp, v); }
    /* 0053afa0: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 0053afa6: mov ecx, dword ptr [edx + 0x98] */ r_ecx = R32((u32)(r_edx+0x98u));
    /* 0053afac: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x53afb1u); f_005eae80();
    /* 0053afb1: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 0053afb6: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x53afbbu); f_00686d82();
    /* 0053afbb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053afbe: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 0053afc4: mov dword ptr [ebp - 4], 7 */ W32((u32)(r_ebp+0xfffffffcu), 0x7u);
    /* 0053afcb: cmp dword ptr [ebp - 0x88], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053afd2: je 0x53afe7 */ if (fZ) goto L_0053afe7;
L_0053afd4:; BB(0x0053afd4);
    /* 0053afd4: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0053afda: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x53afdfu); f_005f5bf0();
    /* 0053afdf: mov dword ptr [ebp - 0xac], eax */ W32((u32)(r_ebp+0xffffff54u), r_eax);
    /* 0053afe5: jmp 0x53aff1 */ goto L_0053aff1;
L_0053afe7:; BB(0x0053afe7);
    /* 0053afe7: mov dword ptr [ebp - 0xac], 0 */ W32((u32)(r_ebp+0xffffff54u), 0x0u);
L_0053aff1:; BB(0x0053aff1);
    /* 0053aff1: mov eax, dword ptr [ebp - 0xac] */ r_eax = R32((u32)(r_ebp+0xffffff54u));
    /* 0053aff7: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 0053affd: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0053b004: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 0053b00a: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0053b010: mov dword ptr [ecx + 0x9c], edx */ W32((u32)(r_ecx+0x9cu), r_edx);
    /* 0053b016: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0053b018: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0053b01a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053b01c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053b01e: push 0x310ea0 */ { u32 v = 0x310ea0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053b023: mov eax, dword ptr [ebp - 0x8c] */ r_eax = R32((u32)(r_ebp+0xffffff74u));
    /* 0053b029: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 0053b02f: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x53b034u); f_005eae80();
    /* 0053b034: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053b037: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0053b03e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0053b03f: mov esp, ebp */ r_esp = r_ebp;
    /* 0053b041: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053b042: ret  */ FN_RET(0x0053aa90); r_esp += 4; return;
}

