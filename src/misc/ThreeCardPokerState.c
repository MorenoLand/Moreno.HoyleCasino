#include "protos.h"

void f_005404f0(void) /* ThreeCardPokerState::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005404f0);
    /* 005404f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005404f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005404f3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005404f6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005404f9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005404fc: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x540501u); f_005e9e20();
    /* 00540501: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00540504: mov dword ptr [eax], 0x6c63f4 */ W32((u32)(r_eax), 0x6c63f4u);
    /* 0054050a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054050d: mov dword ptr [ecx + 4], 0 */ W32((u32)(r_ecx+0x4u), 0x0u);
    /* 00540514: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0054051b: jmp 0x540526 */ goto L_00540526;
L_0054051d:; BB(0x0054051d);
    /* 0054051d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00540520: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00540523: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00540526:; BB(0x00540526);
    /* 00540526: cmp dword ptr [ebp - 4], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054052a: jge 0x54053c */ if ((fS==fO)) goto L_0054053c;
L_0054052c:; BB(0x0054052c);
    /* 0054052c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054052f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00540532: mov dword ptr [ecx + eax*4 + 8], 0 */ W32((u32)(r_ecx+r_eax*4+0x8u), 0x0u);
    /* 0054053a: jmp 0x54051d */ goto L_0054051d;
L_0054053c:; BB(0x0054053c);
    /* 0054053c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054053f: mov esp, ebp */ r_esp = r_ebp;
    /* 00540541: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00540542: ret  */ FN_RET(0x005404f0); r_esp += 4; return;
}

void f_00540550(void) /* ThreeCardPokerState::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00540550);
    /* 00540550: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00540551: mov ebp, esp */ r_ebp = r_esp;
    /* 00540553: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00540555: push 0x6a4e18 */ { u32 v = 0x6a4e18u; r_esp -= 4; W32(r_esp, v); }
    /* 0054055a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00540560: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00540561: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00540564: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00540569: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0054056b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054056c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0054056f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00540575: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00540578: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0054057b: mov dword ptr [eax], 0x6c63f4 */ W32((u32)(r_eax), 0x6c63f4u);
    /* 00540581: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00540588: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0054058b: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0054058e: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00540591: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00540594: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00540597: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054059b: je 0x5405b0 */ if (fZ) goto L_005405b0;
L_0054059d:; BB(0x0054059d);
    /* 0054059d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054059f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005405a2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005405a4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005405a7: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005405a9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5405abu); call_ind(t); }
    /* 005405ab: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005405ae: jmp 0x5405b7 */ goto L_005405b7;
L_005405b0:; BB(0x005405b0);
    /* 005405b0: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_005405b7:; BB(0x005405b7);
    /* 005405b7: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005405be: jmp 0x5405c9 */ goto L_005405c9;
L_005405c0:; BB(0x005405c0);
    /* 005405c0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005405c3: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005405c6: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_005405c9:; BB(0x005405c9);
    /* 005405c9: cmp dword ptr [ebp - 0x10], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005405cd: jge 0x540604 */ if ((fS==fO)) goto L_00540604;
L_005405cf:; BB(0x005405cf);
    /* 005405cf: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005405d2: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005405d5: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 005405d9: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005405dc: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005405df: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005405e2: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005405e6: je 0x5405fb */ if (fZ) goto L_005405fb;
L_005405e8:; BB(0x005405e8);
    /* 005405e8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005405ea: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005405ed: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005405ef: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005405f2: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005405f4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5405f6u); call_ind(t); }
    /* 005405f6: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005405f9: jmp 0x540602 */ goto L_00540602;
L_005405fb:; BB(0x005405fb);
    /* 005405fb: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00540602:; BB(0x00540602);
    /* 00540602: jmp 0x5405c0 */ goto L_005405c0;
L_00540604:; BB(0x00540604);
    /* 00540604: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0054060b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0054060e: call 0x5e9e40 */ r_esp -= 4; W32(r_esp, 0x540613u); f_005e9e40();
    /* 00540613: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00540616: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0054061d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0054061e: mov esp, ebp */ r_esp = r_ebp;
    /* 00540620: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00540621: ret  */ FN_RET(0x00540550); r_esp += 4; return;
}

void f_00541e90(void) /* threecardpokerstate::func_00541e90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00541e90);
    /* 00541e90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00541e91: mov ebp, esp */ r_ebp = r_esp;
    /* 00541e93: sub esp, 0x7e0 */ {  u32 a = r_esp; u32 b = 0x7e0u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00541e99: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00541e9e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00541ea0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00541ea3: mov dword ptr [ebp - 0x7dc], ecx */ W32((u32)(r_ebp+0xfffff824u), r_ecx);
    /* 00541ea9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00541eac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00541ead: mov ecx, dword ptr [0x7933f8] */ r_ecx = R32((u32)(0x7933f8u));
    /* 00541eb3: call 0x539f40 */ r_esp -= 4; W32(r_esp, 0x541eb8u); f_00539f40();
    /* 00541eb8: mov byte ptr [ebp - 0x351], al */ W8((u32)(r_ebp+0xfffffcafu), (u8)r_eax);
    /* 00541ebe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00541ec0: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00541ec2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00541ec5: imul ecx, ecx, 6 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x6u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00541ec8: mov edx, dword ptr [ebp - 0x7dc] */ r_edx = R32((u32)(r_ebp+0xfffff824u));
    /* 00541ece: lea eax, [edx + ecx + 0xc8] */ r_eax = (u32)(r_edx+r_ecx+0xc8u);
    /* 00541ed5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00541ed6: call 0x462ba0 */ r_esp -= 4; W32(r_esp, 0x541edbu); f_00462ba0();
    /* 00541edb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00541ede: mov dword ptr [ebp - 0x10c], eax */ W32((u32)(r_ebp+0xfffffef4u), r_eax);
    /* 00541ee4: cmp dword ptr [ebp - 0x10c], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffef4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00541eeb: jne 0x541f04 */ if (!fZ) goto L_00541f04;
L_00541eed:; BB(0x00541eed);
    /* 00541eed: push 0x281 */ { u32 v = 0x281u; r_esp -= 4; W32(r_esp, v); }
    /* 00541ef2: push 0x6c644c */ { u32 v = 0x6c644cu; r_esp -= 4; W32(r_esp, v); }
    /* 00541ef7: push 0x6b681c */ { u32 v = 0x6b681cu; r_esp -= 4; W32(r_esp, v); }
    /* 00541efc: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x541f01u); f_005e9f20();
    /* 00541f01: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00541f04:; BB(0x00541f04);
    /* 00541f04: mov edx, dword ptr [ebp - 0x10c] */ r_edx = R32((u32)(r_ebp+0xfffffef4u));
    /* 00541f0a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00541f0b: push 0x6c6420 */ { u32 v = 0x6c6420u; r_esp -= 4; W32(r_esp, v); }
    /* 00541f10: lea eax, [ebp - 0x350] */ r_eax = (u32)(r_ebp+0xfffffcb0u);
    /* 00541f16: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00541f17: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x541f1du); call_ind(t); }
    /* 00541f1d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00541f20: lea ecx, [ebp - 0x350] */ r_ecx = (u32)(r_ebp+0xfffffcb0u);
    /* 00541f26: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00541f27: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x541f2cu); f_0062fde0();
    /* 00541f2c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00541f2f: lea edx, [ebp - 0x7d8] */ r_edx = (u32)(r_ebp+0xfffff828u);
    /* 00541f35: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00541f36: mov eax, dword ptr [ebp - 0x10c] */ r_eax = R32((u32)(r_ebp+0xfffffef4u));
    /* 00541f3c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00541f3d: call 0x462f40 */ r_esp -= 4; W32(r_esp, 0x541f42u); f_00462f40();
    /* 00541f42: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00541f45: movzx ecx, byte ptr [ebp - 0x351] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffcafu));
    /* 00541f4c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00541f4e: je 0x541f65 */ if (fZ) goto L_00541f65;
L_00541f50:; BB(0x00541f50);
    /* 00541f50: push 0x6c5b7c */ { u32 v = 0x6c5b7cu; r_esp -= 4; W32(r_esp, v); }
    /* 00541f55: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x541f5au); f_00630f40();
    /* 00541f5a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00541f5d: mov dword ptr [ebp - 0x7e0], eax */ W32((u32)(r_ebp+0xfffff820u), r_eax);
    /* 00541f63: jmp 0x541f78 */ goto L_00541f78;
L_00541f65:; BB(0x00541f65);
    /* 00541f65: push 0x6c5d64 */ { u32 v = 0x6c5d64u; r_esp -= 4; W32(r_esp, v); }
    /* 00541f6a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x541f6fu); f_00630f40();
    /* 00541f6f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00541f72: mov dword ptr [ebp - 0x7e0], eax */ W32((u32)(r_ebp+0xfffff820u), r_eax);
L_00541f78:; BB(0x00541f78);
    /* 00541f78: mov edx, dword ptr [ebp - 0x7e0] */ r_edx = R32((u32)(r_ebp+0xfffff820u));
    /* 00541f7e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00541f7f: lea eax, [ebp - 0x108] */ r_eax = (u32)(r_ebp+0xfffffef8u);
    /* 00541f85: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00541f86: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x541f8bu); f_00686d8e();
    /* 00541f8b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00541f8e: lea ecx, [ebp - 0x310] */ r_ecx = (u32)(r_ebp+0xfffffcf0u);
    /* 00541f94: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00541f95: mov dl, byte ptr [ebp - 0x351] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffcafu))) & 0xffu);
    /* 00541f9b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00541f9c: mov eax, dword ptr [ebp - 0x10c] */ r_eax = R32((u32)(r_ebp+0xfffffef4u));
    /* 00541fa2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00541fa3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00541fa6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00541fa7: mov ecx, dword ptr [0x7933f8] */ r_ecx = R32((u32)(0x7933f8u));
    /* 00541fad: call 0x53a050 */ r_esp -= 4; W32(r_esp, 0x541fb2u); f_0053a050();
    /* 00541fb2: lea edx, [ebp - 0x310] */ r_edx = (u32)(r_ebp+0xfffffcf0u);
    /* 00541fb8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00541fb9: lea eax, [ebp - 0x108] */ r_eax = (u32)(r_ebp+0xfffffef8u);
    /* 00541fbf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00541fc0: lea ecx, [ebp - 0x7d8] */ r_ecx = (u32)(r_ebp+0xfffff828u);
    /* 00541fc6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00541fc7: push 0x6c63f8 */ { u32 v = 0x6c63f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00541fcc: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x541fd1u); f_00630f40();
    /* 00541fd1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00541fd4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00541fd5: lea edx, [ebp - 0x758] */ r_edx = (u32)(r_ebp+0xfffff8a8u);
    /* 00541fdb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00541fdc: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x541fe2u); call_ind(t); }
    /* 00541fe2: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00541fe5: lea eax, [ebp - 0x758] */ r_eax = (u32)(r_ebp+0xfffff8a8u);
    /* 00541feb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00541fec: push 0x6b678c */ { u32 v = 0x6b678cu; r_esp -= 4; W32(r_esp, v); }
    /* 00541ff1: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x541ff6u); f_00630f40();
    /* 00541ff6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00541ff9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00541ffa: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00541ffc: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 00542002: call 0x57be80 */ r_esp -= 4; W32(r_esp, 0x542007u); f_0057be80();
    /* 00542007: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054200a: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0054200c: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x542011u); f_00686d72();
    /* 00542011: mov esp, ebp */ r_esp = r_ebp;
    /* 00542013: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00542014: ret 4 */ FN_RET(0x00541e90); r_esp += 8; return;
}

