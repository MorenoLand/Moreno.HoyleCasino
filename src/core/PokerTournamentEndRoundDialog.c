#include "protos.h"

void f_0051ebd0(void) /* PokerTournamentEndRoundDialog::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0051ebd0);
    /* 0051ebd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051ebd1: mov ebp, esp */ r_ebp = r_esp;
    /* 0051ebd3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051ebd4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0051ebd7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ebd9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ebdb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051ebde: call 0x5f71f0 */ r_esp -= 4; W32(r_esp, 0x51ebe3u); f_005f71f0();
    /* 0051ebe3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051ebe6: mov dword ptr [eax], 0x6c261c */ W32((u32)(r_eax), 0x6c261cu);
    /* 0051ebec: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051ebef: mov dword ptr [ecx + 0x1bc], 0xffffffff */ W32((u32)(r_ecx+0x1bcu), 0xffffffffu);
    /* 0051ebf9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051ebfc: mov dword ptr [edx + 0x22c], 0 */ W32((u32)(r_edx+0x22cu), 0x0u);
    /* 0051ec06: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051ec09: mov esp, ebp */ r_esp = r_ebp;
    /* 0051ec0b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051ec0c: ret  */ FN_RET(0x0051ebd0); r_esp += 4; return;
}

void f_0051ed30(void) /* PokerTournamentEndRoundDialog::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0051ed30);
    /* 0051ed30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051ed31: mov ebp, esp */ r_ebp = r_esp;
    /* 0051ed33: sub esp, 0x110 */ {  u32 a = r_esp; u32 b = 0x110u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051ed39: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0051ed3e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0051ed40: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0051ed43: mov dword ptr [ebp - 0x10c], ecx */ W32((u32)(r_ebp+0xfffffef4u), r_ecx);
    /* 0051ed49: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ed4b: push 0x30d4f2 */ { u32 v = 0x30d4f2u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ed50: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051ed56: call 0x5f83d0 */ r_esp -= 4; W32(r_esp, 0x51ed5bu); f_005f83d0();
    /* 0051ed5b: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ed5d: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051ed63: call 0x5f89d0 */ r_esp -= 4; W32(r_esp, 0x51ed68u); f_005f89d0();
    /* 0051ed68: mov eax, dword ptr [ebp - 0x10c] */ r_eax = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051ed6e: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 0051ed74: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051ed75: push 0x6c2780 */ { u32 v = 0x6c2780u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ed7a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51ed7fu); f_00630f40();
    /* 0051ed7f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051ed82: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051ed83: lea edx, [ebp - 0x108] */ r_edx = (u32)(r_ebp+0xfffffef8u);
    /* 0051ed89: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051ed8a: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x51ed90u); call_ind(t); }
    /* 0051ed90: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051ed93: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051ed95: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ed97: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ed99: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ed9b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ed9d: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ed9f: push 0x14c */ { u32 v = 0x14cu; r_esp -= 4; W32(r_esp, v); }
    /* 0051eda4: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 0051eda6: lea eax, [ebp - 0x108] */ r_eax = (u32)(r_ebp+0xfffffef8u);
    /* 0051edac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051edad: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051edaf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051edb1: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051edb7: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51edbcu); f_005fa5b0();
    /* 0051edbc: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0051edbe: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051edc0: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 0051edc2: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 0051edc4: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 0051edc6: push 0x6c1428 */ { u32 v = 0x6c1428u; r_esp -= 4; W32(r_esp, v); }
    /* 0051edcb: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51edd0u); f_00630f40();
    /* 0051edd0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051edd3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051edd4: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0051edd6: push 0xdc */ { u32 v = 0xdcu; r_esp -= 4; W32(r_esp, v); }
    /* 0051eddb: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ede0: push 0x30d4e5 */ { u32 v = 0x30d4e5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ede5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ede7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ede9: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051edef: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x51edf4u); f_005f9de0();
    /* 0051edf4: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051edfa: cmp dword ptr [ecx + 0x1bc], 1 */ {  u32 a = R32((u32)(r_ecx+0x1bcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051ee01: jne 0x51ee22 */ if (!fZ) goto L_0051ee22;
L_0051ee03:; BB(0x0051ee03);
    /* 0051ee03: push 0x6c2754 */ { u32 v = 0x6c2754u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ee08: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51ee0du); f_00630f40();
    /* 0051ee0d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051ee10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051ee11: lea edx, [ebp - 0x108] */ r_edx = (u32)(r_ebp+0xfffffef8u);
    /* 0051ee17: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051ee18: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x51ee1du); f_00686d8e();
    /* 0051ee1d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051ee20: jmp 0x51ee4e */ goto L_0051ee4e;
L_0051ee22:; BB(0x0051ee22);
    /* 0051ee22: mov eax, dword ptr [ebp - 0x10c] */ r_eax = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051ee28: cmp dword ptr [eax + 0x1bc], 2 */ {  u32 a = R32((u32)(r_eax+0x1bcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051ee2f: jne 0x51ee4e */ if (!fZ) goto L_0051ee4e;
L_0051ee31:; BB(0x0051ee31);
    /* 0051ee31: push 0x6c2728 */ { u32 v = 0x6c2728u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ee36: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51ee3bu); f_00630f40();
    /* 0051ee3b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051ee3e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051ee3f: lea ecx, [ebp - 0x108] */ r_ecx = (u32)(r_ebp+0xfffffef8u);
    /* 0051ee45: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051ee46: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x51ee4bu); f_00686d8e();
    /* 0051ee4b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0051ee4e:; BB(0x0051ee4e);
    /* 0051ee4e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051ee50: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ee52: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ee54: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ee56: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ee58: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ee5a: push 0x122 */ { u32 v = 0x122u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ee5f: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051ee61: lea edx, [ebp - 0x108] */ r_edx = (u32)(r_ebp+0xfffffef8u);
    /* 0051ee67: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051ee68: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ee6a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ee6c: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051ee72: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51ee77u); f_005fa5b0();
    /* 0051ee77: mov eax, dword ptr [ebp - 0x10c] */ r_eax = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051ee7d: movzx ecx, byte ptr [eax + 0x1c0] */ r_ecx = (u32)R8((u32)(r_eax+0x1c0u));
    /* 0051ee84: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051ee86: je 0x51efe3 */ if (fZ) goto L_0051efe3;
L_0051ee8c:; BB(0x0051ee8c);
    /* 0051ee8c: mov edx, dword ptr [ebp - 0x10c] */ r_edx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051ee92: cmp dword ptr [edx + 0x1c4], -1 */ {  u32 a = R32((u32)(r_edx+0x1c4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051ee99: jne 0x51ef36 */ if (!fZ) goto L_0051ef36;
L_0051ee9f:; BB(0x0051ee9f);
    /* 0051ee9f: mov eax, dword ptr [ebp - 0x10c] */ r_eax = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051eea5: cmp dword ptr [eax + 0x1bc], 1 */ {  u32 a = R32((u32)(r_eax+0x1bcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051eeac: jne 0x51eec3 */ if (!fZ) goto L_0051eec3;
L_0051eeae:; BB(0x0051eeae);
    /* 0051eeae: push 0x6c270c */ { u32 v = 0x6c270cu; r_esp -= 4; W32(r_esp, v); }
    /* 0051eeb3: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51eeb8u); f_00630f40();
    /* 0051eeb8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051eebb: mov dword ptr [ebp - 0x110], eax */ W32((u32)(r_ebp+0xfffffef0u), r_eax);
    /* 0051eec1: jmp 0x51eed6 */ goto L_0051eed6;
L_0051eec3:; BB(0x0051eec3);
    /* 0051eec3: push 0x6c26f4 */ { u32 v = 0x6c26f4u; r_esp -= 4; W32(r_esp, v); }
    /* 0051eec8: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51eecdu); f_00630f40();
    /* 0051eecd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051eed0: mov dword ptr [ebp - 0x110], eax */ W32((u32)(r_ebp+0xfffffef0u), r_eax);
L_0051eed6:; BB(0x0051eed6);
    /* 0051eed6: mov ecx, dword ptr [ebp - 0x110] */ r_ecx = R32((u32)(r_ebp+0xfffffef0u));
    /* 0051eedc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051eedd: mov edx, dword ptr [ebp - 0x10c] */ r_edx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051eee3: add edx, 0x1c8 */ {  u32 a = r_edx; u32 b = 0x1c8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051eee9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051eeea: push 0x6c26cc */ { u32 v = 0x6c26ccu; r_esp -= 4; W32(r_esp, v); }
    /* 0051eeef: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51eef4u); f_00630f40();
    /* 0051eef4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051eef7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051eef8: lea eax, [ebp - 0x108] */ r_eax = (u32)(r_ebp+0xfffffef8u);
    /* 0051eefe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051eeff: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x51ef05u); call_ind(t); }
    /* 0051ef05: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051ef08: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051ef0a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ef0c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ef0e: push 0xa5 */ { u32 v = 0xa5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ef13: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ef15: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ef17: push 0x10e */ { u32 v = 0x10eu; r_esp -= 4; W32(r_esp, v); }
    /* 0051ef1c: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051ef1e: lea ecx, [ebp - 0x108] */ r_ecx = (u32)(r_ebp+0xfffffef8u);
    /* 0051ef24: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051ef25: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ef27: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ef29: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051ef2f: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51ef34u); f_005fa5b0();
    /* 0051ef34: jmp 0x51ef9a */ goto L_0051ef9a;
L_0051ef36:; BB(0x0051ef36);
    /* 0051ef36: mov edx, dword ptr [ebp - 0x10c] */ r_edx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051ef3c: mov eax, dword ptr [edx + 0x1c4] */ r_eax = R32((u32)(r_edx+0x1c4u));
    /* 0051ef42: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051ef43: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051ef49: add ecx, 0x1c8 */ {  u32 a = r_ecx; u32 b = 0x1c8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051ef4f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051ef50: push 0x6c269c */ { u32 v = 0x6c269cu; r_esp -= 4; W32(r_esp, v); }
    /* 0051ef55: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51ef5au); f_00630f40();
    /* 0051ef5a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051ef5d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051ef5e: lea edx, [ebp - 0x108] */ r_edx = (u32)(r_ebp+0xfffffef8u);
    /* 0051ef64: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051ef65: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x51ef6bu); call_ind(t); }
    /* 0051ef6b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051ef6e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051ef70: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ef72: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ef74: push 0xa5 */ { u32 v = 0xa5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ef79: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ef7b: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ef7d: push 0x122 */ { u32 v = 0x122u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ef82: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051ef84: lea eax, [ebp - 0x108] */ r_eax = (u32)(r_ebp+0xfffffef8u);
    /* 0051ef8a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051ef8b: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ef8d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ef8f: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051ef95: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51ef9au); f_005fa5b0();
L_0051ef9a:; BB(0x0051ef9a);
    /* 0051ef9a: push 0x6c2674 */ { u32 v = 0x6c2674u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ef9f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51efa4u); f_00630f40();
    /* 0051efa4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051efa7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051efa8: lea ecx, [ebp - 0x108] */ r_ecx = (u32)(r_ebp+0xfffffef8u);
    /* 0051efae: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051efaf: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x51efb4u); f_00686d8e();
    /* 0051efb4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051efb7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051efb9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051efbb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051efbd: push 0xb9 */ { u32 v = 0xb9u; r_esp -= 4; W32(r_esp, v); }
    /* 0051efc2: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051efc4: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051efc6: push 0x122 */ { u32 v = 0x122u; r_esp -= 4; W32(r_esp, v); }
    /* 0051efcb: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051efcd: lea edx, [ebp - 0x108] */ r_edx = (u32)(r_ebp+0xfffffef8u);
    /* 0051efd3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051efd4: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0051efd6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051efd8: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051efde: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51efe3u); f_005fa5b0();
L_0051efe3:; BB(0x0051efe3);
    /* 0051efe3: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051efe9: call 0x51f000 */ r_esp -= 4; W32(r_esp, 0x51efeeu); f_0051f000();
    /* 0051efee: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051eff1: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0051eff3: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x51eff8u); f_00686d72();
    /* 0051eff8: mov esp, ebp */ r_esp = r_ebp;
    /* 0051effa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051effb: ret  */ FN_RET(0x0051ed30); r_esp += 4; return;
}

void f_0051f110(void) /* PokerTournamentEndRoundDialog::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0051f110);
    /* 0051f110: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051f111: mov ebp, esp */ r_ebp = r_esp;
    /* 0051f113: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051f116: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0051f119: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0051f11c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0051f11f: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051f123: je 0x51f127 */ if (fZ) goto L_0051f127;
L_0051f125:; BB(0x0051f125);
    /* 0051f125: jmp 0x51f132 */ goto L_0051f132;
L_0051f127:; BB(0x0051f127);
    /* 0051f127: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 0051f12d: call 0x4fcae0 */ r_esp -= 4; W32(r_esp, 0x51f132u); f_004fcae0();
L_0051f132:; BB(0x0051f132);
    /* 0051f132: mov esp, ebp */ r_esp = r_ebp;
    /* 0051f134: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051f135: ret 4 */ FN_RET(0x0051f110); r_esp += 8; return;
}

