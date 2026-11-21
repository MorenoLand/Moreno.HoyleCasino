#include "protos.h"

void f_00420990(void) /* CaribbeanStudBetArea::vfunc51 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00420990);
    /* 00420990: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00420991: mov ebp, esp */ r_ebp = r_esp;
    /* 00420993: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00420994: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00420997: mov eax, 0x3106cf */ r_eax = 0x3106cfu;
    /* 0042099c: mov esp, ebp */ r_esp = r_ebp;
    /* 0042099e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042099f: ret  */ FN_RET(0x00420990); r_esp += 4; return;
}

void f_00420a60(void) /* CaribbeanStudBetArea::vfunc53 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00420a60);
    /* 00420a60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00420a61: mov ebp, esp */ r_ebp = r_esp;
    /* 00420a63: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00420a66: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00420a69: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00420a6c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00420a6d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00420a70: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00420a71: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00420a74: call 0x4209a0 */ r_esp -= 4; W32(r_esp, 0x420a79u); f_004209a0();
    /* 00420a79: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00420a7c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00420a7e: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x420a83u); f_0062fbf0();
    /* 00420a83: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00420a86: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00420a88: je 0x420a9e */ if (fZ) goto L_00420a9e;
L_00420a8a:; BB(0x00420a8a);
    /* 00420a8a: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00420a8c: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x420a91u); f_0062fbf0();
    /* 00420a91: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00420a94: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00420a97: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00420a99: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00420a9c: jmp 0x420aae */ goto L_00420aae;
L_00420a9e:; BB(0x00420a9e);
    /* 00420a9e: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00420aa0: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x420aa5u); f_0062fbf0();
    /* 00420aa5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00420aa8: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00420aab: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00420aae:; BB(0x00420aae);
    /* 00420aae: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00420ab1: mov esp, ebp */ r_esp = r_ebp;
    /* 00420ab3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00420ab4: ret 8 */ FN_RET(0x00420a60); r_esp += 12; return;
}

void f_00420ac0(void) /* CaribbeanStudBetArea::vfunc54 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00420ac0);
    /* 00420ac0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00420ac1: mov ebp, esp */ r_ebp = r_esp;
    /* 00420ac3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00420ac6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00420ac9: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00420acc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00420acd: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00420ad0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00420ad1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00420ad4: call 0x420a00 */ r_esp -= 4; W32(r_esp, 0x420ad9u); f_00420a00();
    /* 00420ad9: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00420adc: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00420ade: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x420ae3u); f_0062fbf0();
    /* 00420ae3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00420ae6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00420ae8: je 0x420afe */ if (fZ) goto L_00420afe;
L_00420aea:; BB(0x00420aea);
    /* 00420aea: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00420aec: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x420af1u); f_0062fbf0();
    /* 00420af1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00420af4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00420af7: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00420af9: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00420afc: jmp 0x420b0e */ goto L_00420b0e;
L_00420afe:; BB(0x00420afe);
    /* 00420afe: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00420b00: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x420b05u); f_0062fbf0();
    /* 00420b05: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00420b08: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00420b0b: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00420b0e:; BB(0x00420b0e);
    /* 00420b0e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00420b11: mov esp, ebp */ r_esp = r_ebp;
    /* 00420b13: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00420b14: ret 8 */ FN_RET(0x00420ac0); r_esp += 12; return;
}

void f_00420b40(void) /* CaribbeanStudBetArea::vfunc58 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00420b40);
    /* 00420b40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00420b41: mov ebp, esp */ r_ebp = r_esp;
    /* 00420b43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00420b44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00420b47: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00420b4a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00420b4b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00420b4e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00420b4f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00420b52: call 0x420a00 */ r_esp -= 4; W32(r_esp, 0x420b57u); f_00420a00();
    /* 00420b57: sub eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00420b5a: mov esp, ebp */ r_esp = r_ebp;
    /* 00420b5c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00420b5d: ret 8 */ FN_RET(0x00420b40); r_esp += 12; return;
}

