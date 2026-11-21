#include "protos.h"

void f_00555960(void) /* VideoPokerDealScript::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00555960);
    /* 00555960: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00555961: mov ebp, esp */ r_ebp = r_esp;
    /* 00555963: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00555966: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00555969: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055596c: call 0x5fc360 */ r_esp -= 4; W32(r_esp, 0x555971u); f_005fc360();
    /* 00555971: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00555974: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00555978: ja 0x5559e5 */ if ((!fC&&!fZ)) goto L_005559e5;
L_0055597a:; BB(0x0055597a);
    /* 0055597a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055597d: jmp dword ptr [eax*4 + 0x555a04] */ { u32 t = R32((u32)(r_eax*4+0x555a04u)); switch (t) { case 0x555984u: goto L_00555984; case 0x5559a4u: goto L_005559a4; case 0x5559b5u: goto L_005559b5; case 0x5559c8u: goto L_005559c8; default: UNSUP(0x0055597d, "jump table entry is not a known target"); } }
L_00555984:; BB(0x00555984);
    /* 00555984: mov ecx, dword ptr [0x793424] */ r_ecx = R32((u32)(0x793424u));
    /* 0055598a: mov dword ptr [ecx + 0x2c], 0 */ W32((u32)(r_ecx+0x2cu), 0x0u);
    /* 00555991: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00555993: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00555995: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00555998: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0055599a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055599d: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005559a0: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5559a2u); call_ind(t); }
    /* 005559a2: jmp 0x555a00 */ goto L_00555a00;
L_005559a4:; BB(0x005559a4);
    /* 005559a4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005559a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005559a8: mov ecx, dword ptr [0x793424] */ r_ecx = R32((u32)(0x793424u));
    /* 005559ae: call 0x5552b0 */ r_esp -= 4; W32(r_esp, 0x5559b3u); f_005552b0();
    /* 005559b3: jmp 0x555a00 */ goto L_00555a00;
L_005559b5:; BB(0x005559b5);
    /* 005559b5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005559b7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005559b9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005559bc: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005559be: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005559c1: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005559c4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5559c6u); call_ind(t); }
    /* 005559c6: jmp 0x555a00 */ goto L_00555a00;
L_005559c8:; BB(0x005559c8);
    /* 005559c8: mov ecx, dword ptr [0x793420] */ r_ecx = R32((u32)(0x793420u));
    /* 005559ce: call 0x558240 */ r_esp -= 4; W32(r_esp, 0x5559d3u); f_00558240();
    /* 005559d3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005559d5: mov ecx, dword ptr [0x79341c] */ r_ecx = R32((u32)(0x79341cu));
    /* 005559db: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 005559de: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x5559e3u); f_005fc420();
    /* 005559e3: jmp 0x555a00 */ goto L_00555a00;
L_005559e5:; BB(0x005559e5);
    /* 005559e5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 005559e7: jne 0x555a00 */ if (!fZ) goto L_00555a00;
L_005559e9:; BB(0x005559e9);
    /* 005559e9: push 0x395 */ { u32 v = 0x395u; r_esp -= 4; W32(r_esp, v); }
    /* 005559ee: push 0x6c86a0 */ { u32 v = 0x6c86a0u; r_esp -= 4; W32(r_esp, v); }
    /* 005559f3: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 005559f8: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5559fdu); f_005e9f20();
    /* 005559fd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00555a00:; BB(0x00555a00);
    /* 00555a00: mov esp, ebp */ r_esp = r_ebp;
    /* 00555a02: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00555a03: ret  */ FN_RET(0x00555960); r_esp += 4; return;
}

void f_00558ca0(void) /* VideoPokerDealScript::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00558ca0);
    /* 00558ca0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00558ca1: mov ebp, esp */ r_ebp = r_esp;
    /* 00558ca3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00558ca5: push 0x6a57a4 */ { u32 v = 0x6a57a4u; r_esp -= 4; W32(r_esp, v); }
    /* 00558caa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00558cb0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00558cb1: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00558cb4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00558cb9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00558cbb: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00558cbe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00558cbf: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00558cc2: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00558cc8: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 00558ccb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00558ccd: push 0x30f342 */ { u32 v = 0x30f342u; r_esp -= 4; W32(r_esp, v); }
    /* 00558cd2: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00558cd8: call 0x5f2b20 */ r_esp -= 4; W32(r_esp, 0x558cddu); f_005f2b20();
    /* 00558cdd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00558cdf: push 0x30f343 */ { u32 v = 0x30f343u; r_esp -= 4; W32(r_esp, v); }
    /* 00558ce4: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00558cea: call 0x5f2b20 */ r_esp -= 4; W32(r_esp, 0x558cefu); f_005f2b20();
    /* 00558cef: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00558cf1: push 0x30f344 */ { u32 v = 0x30f344u; r_esp -= 4; W32(r_esp, v); }
    /* 00558cf6: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00558cfc: call 0x5f2b20 */ r_esp -= 4; W32(r_esp, 0x558d01u); f_005f2b20();
    /* 00558d01: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00558d03: push 0x30f345 */ { u32 v = 0x30f345u; r_esp -= 4; W32(r_esp, v); }
    /* 00558d08: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00558d0e: call 0x5f2b20 */ r_esp -= 4; W32(r_esp, 0x558d13u); f_005f2b20();
    /* 00558d13: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00558d15: push 0x30f346 */ { u32 v = 0x30f346u; r_esp -= 4; W32(r_esp, v); }
    /* 00558d1a: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00558d20: call 0x5f2b20 */ r_esp -= 4; W32(r_esp, 0x558d25u); f_005f2b20();
    /* 00558d25: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00558d28: cmp dword ptr [eax + 0x14], 0 */ {  u32 a = R32((u32)(r_eax+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00558d2c: jne 0x558d73 */ if (!fZ) goto L_00558d73;
L_00558d2e:; BB(0x00558d2e);
    /* 00558d2e: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00558d31: mov byte ptr [ecx + 0x2e], 1 */ W8((u32)(r_ecx+0x2eu), 0x1u);
    /* 00558d35: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00558d38: mov byte ptr [edx + 0x2d], 0 */ W8((u32)(r_edx+0x2du), 0x0u);
    /* 00558d3c: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00558d3f: call 0x557310 */ r_esp -= 4; W32(r_esp, 0x558d44u); f_00557310();
    /* 00558d44: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00558d47: call 0x557dc0 */ r_esp -= 4; W32(r_esp, 0x558d4cu); f_00557dc0();
    /* 00558d4c: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00558d53: jmp 0x558d5e */ goto L_00558d5e;
L_00558d55:; BB(0x00558d55);
    /* 00558d55: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00558d58: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00558d5b: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_00558d5e:; BB(0x00558d5e);
    /* 00558d5e: cmp dword ptr [ebp - 0x10], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00558d62: jge 0x558d73 */ if ((fS==fO)) goto L_00558d73;
L_00558d64:; BB(0x00558d64);
    /* 00558d64: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00558d67: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00558d6a: mov word ptr [edx + ecx*2 + 0x22], 0 */ W16((u32)(r_edx+r_ecx*2+0x22u), 0x0u);
    /* 00558d71: jmp 0x558d55 */ goto L_00558d55;
L_00558d73:; BB(0x00558d73);
    /* 00558d73: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00558d76: cmp dword ptr [eax + 0x14], 1 */ {  u32 a = R32((u32)(r_eax+0x14u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00558d7a: jne 0x558df0 */ if (!fZ) goto L_00558df0;
L_00558d7c:; BB(0x00558d7c);
    /* 00558d7c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00558d7e: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00558d84: call 0x5df7b0 */ r_esp -= 4; W32(r_esp, 0x558d89u); f_005df7b0();
    /* 00558d89: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00558d8c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00558d8e: je 0x558de0 */ if (fZ) goto L_00558de0;
L_00558d90:; BB(0x00558d90);
    /* 00558d90: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00558d93: movzx eax, byte ptr [edx + 0x2e] */ r_eax = (u32)R8((u32)(r_edx+0x2eu));
    /* 00558d97: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00558d99: je 0x558de0 */ if (fZ) goto L_00558de0;
L_00558d9b:; BB(0x00558d9b);
    /* 00558d9b: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00558d9e: call 0x558fa0 */ r_esp -= 4; W32(r_esp, 0x558da3u); f_00558fa0();
    /* 00558da3: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00558da6: mov byte ptr [ecx + 0x2e], al */ W8((u32)(r_ecx+0x2eu), (u8)r_eax);
    /* 00558da9: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00558dac: movzx eax, byte ptr [edx + 0x2e] */ r_eax = (u32)R8((u32)(r_edx+0x2eu));
    /* 00558db0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00558db2: jne 0x558de0 */ if (!fZ) goto L_00558de0;
L_00558db4:; BB(0x00558db4);
    /* 00558db4: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00558db7: call 0x557dc0 */ r_esp -= 4; W32(r_esp, 0x558dbcu); f_00557dc0();
    /* 00558dbc: mov ecx, dword ptr [0x793424] */ r_ecx = R32((u32)(0x793424u));
    /* 00558dc2: call 0x554950 */ r_esp -= 4; W32(r_esp, 0x558dc7u); f_00554950();
    /* 00558dc7: cmp dword ptr [0x793578], 0 */ {  u32 a = R32((u32)(0x793578u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00558dce: je 0x558ddb */ if (fZ) goto L_00558ddb;
L_00558dd0:; BB(0x00558dd0);
    /* 00558dd0: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 00558dd6: call 0x57c140 */ r_esp -= 4; W32(r_esp, 0x558ddbu); f_0057c140();
L_00558ddb:; BB(0x00558ddb);
    /* 00558ddb: jmp 0x558f7b */ goto L_00558f7b;
L_00558de0:; BB(0x00558de0);
    /* 00558de0: push 0x1391 */ { u32 v = 0x1391u; r_esp -= 4; W32(r_esp, v); }
    /* 00558de5: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00558deb: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x558df0u); f_005f2ba0();
L_00558df0:; BB(0x00558df0);
    /* 00558df0: mov ecx, dword ptr [0x793424] */ r_ecx = R32((u32)(0x793424u));
    /* 00558df6: call 0x5551a0 */ r_esp -= 4; W32(r_esp, 0x558dfbu); f_005551a0();
    /* 00558dfb: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00558e02: jmp 0x558e0d */ goto L_00558e0d;
L_00558e04:; BB(0x00558e04);
    /* 00558e04: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00558e07: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00558e0a: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_00558e0d:; BB(0x00558e0d);
    /* 00558e0d: cmp dword ptr [ebp - 0x10], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00558e11: jge 0x558e28 */ if ((fS==fO)) goto L_00558e28;
L_00558e13:; BB(0x00558e13);
    /* 00558e13: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00558e16: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00558e19: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00558e1c: mov ax, word ptr [ecx + eax*2 + 0x22] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x22u))) & 0xffffu);
    /* 00558e21: mov word ptr [ebp + edx*2 - 0x24], ax */ W16((u32)(r_ebp+r_edx*2+0xffffffdcu), (u16)r_eax);
    /* 00558e26: jmp 0x558e04 */ goto L_00558e04;
L_00558e28:; BB(0x00558e28);
    /* 00558e28: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00558e2f: jmp 0x558e3a */ goto L_00558e3a;
L_00558e31:; BB(0x00558e31);
    /* 00558e31: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00558e34: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00558e37: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_00558e3a:; BB(0x00558e3a);
    /* 00558e3a: cmp dword ptr [ebp - 0x10], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00558e3e: jge 0x558f18 */ if ((fS==fO)) goto L_00558f18;
L_00558e44:; BB(0x00558e44);
    /* 00558e44: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00558e47: mov ax, word ptr [ebp + edx*2 - 0x24] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+r_edx*2+0xffffffdcu))) & 0xffffu);
    /* 00558e4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00558e4d: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00558e50: call 0x5573a0 */ r_esp -= 4; W32(r_esp, 0x558e55u); f_005573a0();
    /* 00558e55: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00558e58: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00558e5a: jne 0x558f13 */ if (!fZ) goto L_00558f13;
L_00558e60:; BB(0x00558e60);
    /* 00558e60: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00558e63: movzx eax, word ptr [ebp + edx*2 - 0x24] */ r_eax = (u32)R16((u32)(r_ebp+r_edx*2+0xffffffdcu));
    /* 00558e68: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00558e6a: je 0x558e85 */ if (fZ) goto L_00558e85;
L_00558e6c:; BB(0x00558e6c);
    /* 00558e6c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00558e6f: mov dx, word ptr [ebp + ecx*2 - 0x24] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+r_ecx*2+0xffffffdcu))) & 0xffffu);
    /* 00558e74: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00558e75: mov ecx, dword ptr [0x793424] */ r_ecx = R32((u32)(0x793424u));
    /* 00558e7b: call 0x555020 */ r_esp -= 4; W32(r_esp, 0x558e80u); f_00555020();
    /* 00558e80: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00558e83: jmp 0x558e8b */ goto L_00558e8b;
L_00558e85:; BB(0x00558e85);
    /* 00558e85: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00558e88: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_00558e8b:; BB(0x00558e8b);
    /* 00558e8b: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00558e8e: call 0x557e40 */ r_esp -= 4; W32(r_esp, 0x558e93u); f_00557e40();
    /* 00558e93: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00558e96: jne 0x558ea9 */ if (!fZ) goto L_00558ea9;
L_00558e98:; BB(0x00558e98);
    /* 00558e98: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00558e9b: mov dx, word ptr [ebp + ecx*2 - 0x24] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+r_ecx*2+0xffffffdcu))) & 0xffffu);
    /* 00558ea0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00558ea1: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00558ea4: call 0x557fb0 */ r_esp -= 4; W32(r_esp, 0x558ea9u); f_00557fb0();
L_00558ea9:; BB(0x00558ea9);
    /* 00558ea9: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00558eac: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 00558eaf: call 0x6436c0 */ r_esp -= 4; W32(r_esp, 0x558eb4u); f_006436c0();
    /* 00558eb4: mov word ptr [ebp - 0x28], ax */ W16((u32)(r_ebp+0xffffffd8u), (u16)r_eax);
    /* 00558eb8: mov cx, word ptr [ebp - 0x28] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffd8u))) & 0xffffu);
    /* 00558ebc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00558ebd: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00558ec0: call 0x557e90 */ r_esp -= 4; W32(r_esp, 0x558ec5u); f_00557e90();
    /* 00558ec5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00558ec8: mov eax, dword ptr [0x793424] */ r_eax = R32((u32)(0x793424u));
    /* 00558ecd: mov ecx, dword ptr [eax + edx*4 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 00558ed1: mov dx, word ptr [ebp - 0x28] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffd8u))) & 0xffffu);
    /* 00558ed5: mov word ptr [ecx + 0x190], dx */ W16((u32)(r_ecx+0x190u), (u16)r_edx);
    /* 00558edc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00558edf: mov ecx, dword ptr [0x793424] */ r_ecx = R32((u32)(0x793424u));
    /* 00558ee5: mov edx, dword ptr [ecx + eax*4 + 4] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 00558ee9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00558eec: mov dword ptr [edx + 0x1a0], eax */ W32((u32)(r_edx+0x1a0u), r_eax);
    /* 00558ef2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00558ef5: mov edx, dword ptr [0x793424] */ r_edx = R32((u32)(0x793424u));
    /* 00558efb: mov eax, dword ptr [edx + ecx*4 + 4] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 00558eff: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00558f02: mov edx, dword ptr [0x793424] */ r_edx = R32((u32)(0x793424u));
    /* 00558f08: mov ecx, dword ptr [edx + ecx*4 + 4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 00558f0c: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00558f0e: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 00558f11: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x558f13u); call_ind(t); }
L_00558f13:; BB(0x00558f13);
    /* 00558f13: jmp 0x558e31 */ goto L_00558e31;
L_00558f18:; BB(0x00558f18);
    /* 00558f18: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00558f1b: call 0x557dc0 */ r_esp -= 4; W32(r_esp, 0x558f20u); f_00557dc0();
    /* 00558f20: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00558f22: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x558f27u); f_00686d82();
    /* 00558f27: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00558f2a: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00558f2d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00558f34: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00558f38: je 0x558f55 */ if (fZ) goto L_00558f55;
L_00558f3a:; BB(0x00558f3a);
    /* 00558f3a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00558f3c: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00558f3f: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x558f44u); f_005fc0d0();
    /* 00558f44: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00558f47: mov dword ptr [eax], 0x6c8e40 */ W32((u32)(r_eax), 0x6c8e40u);
    /* 00558f4d: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00558f50: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 00558f53: jmp 0x558f5c */ goto L_00558f5c;
L_00558f55:; BB(0x00558f55);
    /* 00558f55: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_00558f5c:; BB(0x00558f5c);
    /* 00558f5c: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00558f5f: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 00558f62: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00558f69: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00558f6c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00558f6d: mov ecx, dword ptr [0x79341c] */ r_ecx = R32((u32)(0x79341cu));
    /* 00558f73: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00558f76: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x558f7bu); f_005fc420();
L_00558f7b:; BB(0x00558f7b);
    /* 00558f7b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00558f7e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00558f85: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00558f86: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00558f89: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00558f8b: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x558f90u); f_00686d72();
    /* 00558f90: mov esp, ebp */ r_esp = r_ebp;
    /* 00558f92: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00558f93: ret  */ FN_RET(0x00558ca0); r_esp += 4; return;
}

