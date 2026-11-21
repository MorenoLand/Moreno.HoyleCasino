#include "protos.h"

void f_00444440(void) /* ?_Get_deleter@_Ref_count_base@std@@UBEPAXABVtype_info@@@Z */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00444440);
    /* 00444440: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00444441: mov ebp, esp */ r_ebp = r_esp;
    /* 00444443: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00444444: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00444447: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00444449: mov esp, ebp */ r_esp = r_ebp;
    /* 0044444b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044444c: ret 4 */ FN_RET(0x00444440); r_esp += 8; return;
}

void f_00444450(void) /* ??_G_com_error@@UAEPAXI@Z_50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00444450);
    /* 00444450: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00444451: mov ebp, esp */ r_ebp = r_esp;
    /* 00444453: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00444454: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00444457: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044445a: call 0x443dc0 */ r_esp -= 4; W32(r_esp, 0x44445fu); f_00443dc0();
    /* 0044445f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00444462: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00444465: je 0x444473 */ if (fZ) goto L_00444473;
L_00444467:; BB(0x00444467);
    /* 00444467: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044446a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044446b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x444470u); f_00686cae();
    /* 00444470: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00444473:; BB(0x00444473);
    /* 00444473: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444476: mov esp, ebp */ r_esp = r_ebp;
    /* 00444478: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00444479: ret 4 */ FN_RET(0x00444450); r_esp += 8; return;
}

void f_00444570(void) /* ??1_Mtx_guard@@QAE@XZ_3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00444570);
    /* 00444570: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00444571: mov ebp, esp */ r_ebp = r_esp;
    /* 00444573: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00444574: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00444577: push 0x6b8304 */ { u32 v = 0x6b8304u; r_esp -= 4; W32(r_esp, v); }
    /* 0044457c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x444581u); f_00630f40();
    /* 00444581: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00444584: mov esp, ebp */ r_esp = r_ebp;
    /* 00444586: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00444587: ret  */ FN_RET(0x00444570); r_esp += 4; return;
}

void f_004445b0(void) /* unknown_libname_750 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004445b0);
    /* 004445b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004445b1: mov ebp, esp */ r_ebp = r_esp;
    /* 004445b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004445b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004445b7: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004445b9: mov esp, ebp */ r_esp = r_ebp;
    /* 004445bb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004445bc: ret  */ FN_RET(0x004445b0); r_esp += 4; return;
}

void f_004445e0(void) /* unknown_libname_751 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004445e0);
    /* 004445e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004445e1: mov ebp, esp */ r_ebp = r_esp;
    /* 004445e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004445e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004445e7: mov eax, 1 */ r_eax = 0x1u;
    /* 004445ec: mov esp, ebp */ r_esp = r_ebp;
    /* 004445ee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004445ef: ret  */ FN_RET(0x004445e0); r_esp += 4; return;
}

void f_004445f0(void) /* unknown_libname_752 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004445f0);
    /* 004445f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004445f1: mov ebp, esp */ r_ebp = r_esp;
    /* 004445f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004445f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004445f7: mov eax, 1 */ r_eax = 0x1u;
    /* 004445fc: mov esp, ebp */ r_esp = r_ebp;
    /* 004445fe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004445ff: ret  */ FN_RET(0x004445f0); r_esp += 4; return;
}

void f_00444730(void) /* unknown_libname_753 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00444730);
    /* 00444730: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00444731: mov ebp, esp */ r_ebp = r_esp;
    /* 00444733: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00444734: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00444737: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00444739: mov esp, ebp */ r_esp = r_ebp;
    /* 0044473b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044473c: ret  */ FN_RET(0x00444730); r_esp += 4; return;
}

void f_00444740(void) /* ?GetCommonButtonCount@CTaskDialog@@MBEHXZ */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00444740);
    /* 00444740: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00444741: mov ebp, esp */ r_ebp = r_esp;
    /* 00444743: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00444744: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00444747: mov eax, 6 */ r_eax = 0x6u;
    /* 0044474c: mov esp, ebp */ r_esp = r_ebp;
    /* 0044474e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044474f: ret  */ FN_RET(0x00444740); r_esp += 4; return;
}

void f_004449d0(void) /* ?_Get_deleter@_Ref_count_base@std@@UBEPAXABVtype_info@@@Z_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004449d0);
    /* 004449d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004449d1: mov ebp, esp */ r_ebp = r_esp;
    /* 004449d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004449d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004449d7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004449d9: mov esp, ebp */ r_esp = r_ebp;
    /* 004449db: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004449dc: ret 4 */ FN_RET(0x004449d0); r_esp += 8; return;
}

void f_00444a40(void) /* ?do_always_noconv@?$codecvt@DDU_Mbstatet@@@std@@MBE_NXZ_3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00444a40);
    /* 00444a40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00444a41: mov ebp, esp */ r_ebp = r_esp;
    /* 00444a43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00444a44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00444a47: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00444a49: mov esp, ebp */ r_esp = r_ebp;
    /* 00444a4b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00444a4c: ret  */ FN_RET(0x00444a40); r_esp += 4; return;
}

void f_00444a80(void) /* ??1CExpandoObject@@UAE@XZ_14 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00444a80);
    /* 00444a80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00444a81: mov ebp, esp */ r_ebp = r_esp;
    /* 00444a83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00444a84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00444a87: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444a8a: mov dword ptr [eax], 0x6b88e8 */ W32((u32)(r_eax), 0x6b88e8u);
    /* 00444a90: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444a93: call 0x5e9e40 */ r_esp -= 4; W32(r_esp, 0x444a98u); f_005e9e40();
    /* 00444a98: mov esp, ebp */ r_esp = r_ebp;
    /* 00444a9a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00444a9b: ret  */ FN_RET(0x00444a80); r_esp += 4; return;
}

void f_004460b0(void) /* ??_G_com_error@@UAEPAXI@Z_51 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004460b0);
    /* 004460b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004460b1: mov ebp, esp */ r_ebp = r_esp;
    /* 004460b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004460b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004460b7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004460ba: call 0x444a80 */ r_esp -= 4; W32(r_esp, 0x4460bfu); f_00444a80();
    /* 004460bf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004460c2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 004460c5: je 0x4460d3 */ if (fZ) goto L_004460d3;
L_004460c7:; BB(0x004460c7);
    /* 004460c7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004460ca: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004460cb: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x4460d0u); f_00686cae();
    /* 004460d0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004460d3:; BB(0x004460d3);
    /* 004460d3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004460d6: mov esp, ebp */ r_esp = r_ebp;
    /* 004460d8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004460d9: ret 4 */ FN_RET(0x004460b0); r_esp += 8; return;
}

void f_004460e0(void) /* ??0_AFX_OLE_STATE@@QAE@XZ_12 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004460e0);
    /* 004460e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004460e1: mov ebp, esp */ r_ebp = r_esp;
    /* 004460e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004460e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004460e7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004460ea: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x4460efu); f_005e9e20();
    /* 004460ef: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004460f2: mov dword ptr [eax], 0x6b8998 */ W32((u32)(r_eax), 0x6b8998u);
    /* 004460f8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004460fb: mov esp, ebp */ r_esp = r_ebp;
    /* 004460fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004460fe: ret  */ FN_RET(0x004460e0); r_esp += 4; return;
}

void f_00446100(void) /* ??1_AFX_OLE_STATE@@UAE@XZ_12 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00446100);
    /* 00446100: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00446101: mov ebp, esp */ r_ebp = r_esp;
    /* 00446103: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00446104: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00446107: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044610a: mov dword ptr [eax], 0x6b8998 */ W32((u32)(r_eax), 0x6b8998u);
    /* 00446110: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00446113: call 0x5e9e40 */ r_esp -= 4; W32(r_esp, 0x446118u); f_005e9e40();
    /* 00446118: mov esp, ebp */ r_esp = r_ebp;
    /* 0044611a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044611b: ret  */ FN_RET(0x00446100); r_esp += 4; return;
}

void f_00446ac0(void) /* ??_G_com_error@@UAEPAXI@Z_52 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00446ac0);
    /* 00446ac0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00446ac1: mov ebp, esp */ r_ebp = r_esp;
    /* 00446ac3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00446ac4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00446ac7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00446aca: call 0x446100 */ r_esp -= 4; W32(r_esp, 0x446acfu); f_00446100();
    /* 00446acf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00446ad2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00446ad5: je 0x446ae3 */ if (fZ) goto L_00446ae3;
L_00446ad7:; BB(0x00446ad7);
    /* 00446ad7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00446ada: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00446adb: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x446ae0u); f_00686cae();
    /* 00446ae0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00446ae3:; BB(0x00446ae3);
    /* 00446ae3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00446ae6: mov esp, ebp */ r_esp = r_ebp;
    /* 00446ae8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00446ae9: ret 4 */ FN_RET(0x00446ac0); r_esp += 8; return;
}

void f_004485e0(void) /* ??0_AFX_OLE_STATE@@QAE@XZ_13 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004485e0);
    /* 004485e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004485e1: mov ebp, esp */ r_ebp = r_esp;
    /* 004485e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004485e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004485e7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004485ea: call 0x5cc1d0 */ r_esp -= 4; W32(r_esp, 0x4485efu); f_005cc1d0();
    /* 004485ef: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004485f2: mov dword ptr [eax], 0x6b8b54 */ W32((u32)(r_eax), 0x6b8b54u);
    /* 004485f8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004485fb: mov esp, ebp */ r_esp = r_ebp;
    /* 004485fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004485fe: ret  */ FN_RET(0x004485e0); r_esp += 4; return;
}

void f_00448600(void) /* ??1_AFX_OLE_STATE@@UAE@XZ_13 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00448600);
    /* 00448600: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00448601: mov ebp, esp */ r_ebp = r_esp;
    /* 00448603: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00448604: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00448607: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044860a: mov dword ptr [eax], 0x6b8b54 */ W32((u32)(r_eax), 0x6b8b54u);
    /* 00448610: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00448613: call 0x5cc230 */ r_esp -= 4; W32(r_esp, 0x448618u); f_005cc230();
    /* 00448618: mov esp, ebp */ r_esp = r_ebp;
    /* 0044861a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044861b: ret  */ FN_RET(0x00448600); r_esp += 4; return;
}

void f_004487d0(void) /* ?SetAtGrow@?$CTypedPtrArray@VCObArray@@PAVCBitmap@@@@QAEXHPAVCBitmap@@@Z_2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004487d0);
    /* 004487d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004487d1: mov ebp, esp */ r_ebp = r_esp;
    /* 004487d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004487d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004487d7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004487da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004487db: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004487de: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004487df: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004487e2: call 0x448630 */ r_esp -= 4; W32(r_esp, 0x4487e7u); f_00448630();
    /* 004487e7: mov esp, ebp */ r_esp = r_ebp;
    /* 004487e9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004487ea: ret 8 */ FN_RET(0x004487d0); r_esp += 12; return;
}

void f_00448890(void) /* ??1CExpandoObject@@UAE@XZ_15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00448890);
    /* 00448890: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00448891: mov ebp, esp */ r_ebp = r_esp;
    /* 00448893: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00448894: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00448897: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044889a: mov dword ptr [eax], 0x6b8c4c */ W32((u32)(r_eax), 0x6b8c4cu);
    /* 004488a0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004488a3: call 0x5fc150 */ r_esp -= 4; W32(r_esp, 0x4488a8u); f_005fc150();
    /* 004488a8: mov esp, ebp */ r_esp = r_ebp;
    /* 004488aa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004488ab: ret  */ FN_RET(0x00448890); r_esp += 4; return;
}

void f_004490f0(void) /* ??1CExpandoObject@@UAE@XZ_16 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004490f0);
    /* 004490f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004490f1: mov ebp, esp */ r_ebp = r_esp;
    /* 004490f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004490f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004490f7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004490fa: mov dword ptr [eax], 0x6b8c94 */ W32((u32)(r_eax), 0x6b8c94u);
    /* 00449100: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00449103: call 0x5f7260 */ r_esp -= 4; W32(r_esp, 0x449108u); f_005f7260();
    /* 00449108: mov esp, ebp */ r_esp = r_ebp;
    /* 0044910a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044910b: ret  */ FN_RET(0x004490f0); r_esp += 4; return;
}

void f_004495e0(void) /* ??_G_com_error@@UAEPAXI@Z_53 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004495e0);
    /* 004495e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004495e1: mov ebp, esp */ r_ebp = r_esp;
    /* 004495e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004495e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004495e7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004495ea: call 0x446bd0 */ r_esp -= 4; W32(r_esp, 0x4495efu); f_00446bd0();
    /* 004495ef: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004495f2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 004495f5: je 0x449603 */ if (fZ) goto L_00449603;
L_004495f7:; BB(0x004495f7);
    /* 004495f7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004495fa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004495fb: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x449600u); f_00686cae();
    /* 00449600: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00449603:; BB(0x00449603);
    /* 00449603: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00449606: mov esp, ebp */ r_esp = r_ebp;
    /* 00449608: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00449609: ret 4 */ FN_RET(0x004495e0); r_esp += 8; return;
}

void f_00449610(void) /* ??_G_com_error@@UAEPAXI@Z_54 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00449610);
    /* 00449610: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00449611: mov ebp, esp */ r_ebp = r_esp;
    /* 00449613: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00449614: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00449617: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044961a: call 0x447e90 */ r_esp -= 4; W32(r_esp, 0x44961fu); f_00447e90();
    /* 0044961f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00449622: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00449625: je 0x449633 */ if (fZ) goto L_00449633;
L_00449627:; BB(0x00449627);
    /* 00449627: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044962a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044962b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x449630u); f_00686cae();
    /* 00449630: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00449633:; BB(0x00449633);
    /* 00449633: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00449636: mov esp, ebp */ r_esp = r_ebp;
    /* 00449638: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00449639: ret 4 */ FN_RET(0x00449610); r_esp += 8; return;
}

void f_00449640(void) /* ??_G_com_error@@UAEPAXI@Z_55 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00449640);
    /* 00449640: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00449641: mov ebp, esp */ r_ebp = r_esp;
    /* 00449643: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00449644: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00449647: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044964a: call 0x448600 */ r_esp -= 4; W32(r_esp, 0x44964fu); f_00448600();
    /* 0044964f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00449652: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00449655: je 0x449663 */ if (fZ) goto L_00449663;
L_00449657:; BB(0x00449657);
    /* 00449657: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044965a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044965b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x449660u); f_00686cae();
    /* 00449660: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00449663:; BB(0x00449663);
    /* 00449663: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00449666: mov esp, ebp */ r_esp = r_ebp;
    /* 00449668: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00449669: ret 4 */ FN_RET(0x00449640); r_esp += 8; return;
}

void f_00449670(void) /* ??_G_com_error@@UAEPAXI@Z_56 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00449670);
    /* 00449670: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00449671: mov ebp, esp */ r_ebp = r_esp;
    /* 00449673: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00449674: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00449677: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044967a: call 0x448890 */ r_esp -= 4; W32(r_esp, 0x44967fu); f_00448890();
    /* 0044967f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00449682: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00449685: je 0x449693 */ if (fZ) goto L_00449693;
L_00449687:; BB(0x00449687);
    /* 00449687: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044968a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044968b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x449690u); f_00686cae();
    /* 00449690: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00449693:; BB(0x00449693);
    /* 00449693: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00449696: mov esp, ebp */ r_esp = r_ebp;
    /* 00449698: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00449699: ret 4 */ FN_RET(0x00449670); r_esp += 8; return;
}

void f_004496a0(void) /* ??_G_com_error@@UAEPAXI@Z_57 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004496a0);
    /* 004496a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004496a1: mov ebp, esp */ r_ebp = r_esp;
    /* 004496a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004496a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004496a7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004496aa: call 0x4490f0 */ r_esp -= 4; W32(r_esp, 0x4496afu); f_004490f0();
    /* 004496af: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004496b2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 004496b5: je 0x4496c3 */ if (fZ) goto L_004496c3;
L_004496b7:; BB(0x004496b7);
    /* 004496b7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004496ba: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004496bb: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x4496c0u); f_00686cae();
    /* 004496c0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004496c3:; BB(0x004496c3);
    /* 004496c3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004496c6: mov esp, ebp */ r_esp = r_ebp;
    /* 004496c8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004496c9: ret 4 */ FN_RET(0x004496a0); r_esp += 8; return;
}

void f_004496d0(void) /* ??0_AFX_OLE_STATE@@QAE@XZ_14 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004496d0);
    /* 004496d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004496d1: mov ebp, esp */ r_ebp = r_esp;
    /* 004496d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004496d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004496d7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004496da: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x4496dfu); f_005e9e20();
    /* 004496df: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004496e2: mov dword ptr [eax], 0x6b8d30 */ W32((u32)(r_eax), 0x6b8d30u);
    /* 004496e8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004496eb: mov esp, ebp */ r_esp = r_ebp;
    /* 004496ed: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004496ee: ret  */ FN_RET(0x004496d0); r_esp += 4; return;
}

void f_004496f0(void) /* ??1_AFX_OLE_STATE@@UAE@XZ_14 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004496f0);
    /* 004496f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004496f1: mov ebp, esp */ r_ebp = r_esp;
    /* 004496f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004496f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004496f7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004496fa: mov dword ptr [eax], 0x6b8d30 */ W32((u32)(r_eax), 0x6b8d30u);
    /* 00449700: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00449703: call 0x5e9e40 */ r_esp -= 4; W32(r_esp, 0x449708u); f_005e9e40();
    /* 00449708: mov esp, ebp */ r_esp = r_ebp;
    /* 0044970a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044970b: ret  */ FN_RET(0x004496f0); r_esp += 4; return;
}

void f_0044ab20(void) /* ??_G_com_error@@UAEPAXI@Z_58 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044ab20);
    /* 0044ab20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044ab21: mov ebp, esp */ r_ebp = r_esp;
    /* 0044ab23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044ab24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0044ab27: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044ab2a: call 0x4496f0 */ r_esp -= 4; W32(r_esp, 0x44ab2fu); f_004496f0();
    /* 0044ab2f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044ab32: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0044ab35: je 0x44ab43 */ if (fZ) goto L_0044ab43;
L_0044ab37:; BB(0x0044ab37);
    /* 0044ab37: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044ab3a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044ab3b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x44ab40u); f_00686cae();
    /* 0044ab40: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0044ab43:; BB(0x0044ab43);
    /* 0044ab43: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044ab46: mov esp, ebp */ r_esp = r_ebp;
    /* 0044ab48: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044ab49: ret 4 */ FN_RET(0x0044ab20); r_esp += 8; return;
}

void f_0044bda0(void) /* ?GetCommonButtonCount@CTaskDialog@@MBEHXZ_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044bda0);
    /* 0044bda0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044bda1: mov ebp, esp */ r_ebp = r_esp;
    /* 0044bda3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044bda4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0044bda7: mov eax, 6 */ r_eax = 0x6u;
    /* 0044bdac: mov esp, ebp */ r_esp = r_ebp;
    /* 0044bdae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044bdaf: ret  */ FN_RET(0x0044bda0); r_esp += 4; return;
}

void f_0044bdb0(void) /* ??_G_com_error@@UAEPAXI@Z_59 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044bdb0);
    /* 0044bdb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044bdb1: mov ebp, esp */ r_ebp = r_esp;
    /* 0044bdb3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044bdb4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0044bdb7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044bdba: call 0x44abf0 */ r_esp -= 4; W32(r_esp, 0x44bdbfu); f_0044abf0();
    /* 0044bdbf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044bdc2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0044bdc5: je 0x44bdd3 */ if (fZ) goto L_0044bdd3;
L_0044bdc7:; BB(0x0044bdc7);
    /* 0044bdc7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044bdca: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044bdcb: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x44bdd0u); f_00686cae();
    /* 0044bdd0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0044bdd3:; BB(0x0044bdd3);
    /* 0044bdd3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044bdd6: mov esp, ebp */ r_esp = r_ebp;
    /* 0044bdd8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044bdd9: ret 4 */ FN_RET(0x0044bdb0); r_esp += 8; return;
}

void f_0044bed0(void) /* ??1_Mtx_guard@@QAE@XZ_4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044bed0);
    /* 0044bed0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044bed1: mov ebp, esp */ r_ebp = r_esp;
    /* 0044bed3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044bed4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0044bed7: push 0x6b8b38 */ { u32 v = 0x6b8b38u; r_esp -= 4; W32(r_esp, v); }
    /* 0044bedc: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x44bee1u); f_00630f40();
    /* 0044bee1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044bee4: mov esp, ebp */ r_esp = r_ebp;
    /* 0044bee6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044bee7: ret  */ FN_RET(0x0044bed0); r_esp += 4; return;
}

void f_0044bf10(void) /* unknown_libname_754 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044bf10);
    /* 0044bf10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044bf11: mov ebp, esp */ r_ebp = r_esp;
    /* 0044bf13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044bf14: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0044bf17: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0044bf19: mov esp, ebp */ r_esp = r_ebp;
    /* 0044bf1b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044bf1c: ret  */ FN_RET(0x0044bf10); r_esp += 4; return;
}

void f_0044bf40(void) /* unknown_libname_500 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044bf40);
    /* 0044bf40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044bf41: mov ebp, esp */ r_ebp = r_esp;
    /* 0044bf43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044bf44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0044bf47: mov eax, 4 */ r_eax = 0x4u;
    /* 0044bf4c: mov esp, ebp */ r_esp = r_ebp;
    /* 0044bf4e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044bf4f: ret  */ FN_RET(0x0044bf40); r_esp += 4; return;
}

void f_0044bf50(void) /* unknown_libname_501 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044bf50);
    /* 0044bf50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044bf51: mov ebp, esp */ r_ebp = r_esp;
    /* 0044bf53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044bf54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0044bf57: mov eax, 4 */ r_eax = 0x4u;
    /* 0044bf5c: mov esp, ebp */ r_esp = r_ebp;
    /* 0044bf5e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044bf5f: ret  */ FN_RET(0x0044bf50); r_esp += 4; return;
}

void f_0044c0b0(void) /* unknown_libname_755 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044c0b0);
    /* 0044c0b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044c0b1: mov ebp, esp */ r_ebp = r_esp;
    /* 0044c0b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044c0b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0044c0b7: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0044c0b9: mov esp, ebp */ r_esp = r_ebp;
    /* 0044c0bb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044c0bc: ret  */ FN_RET(0x0044c0b0); r_esp += 4; return;
}

void f_0044c660(void) /* ?do_always_noconv@?$codecvt@DDU_Mbstatet@@@std@@MBE_NXZ_4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044c660);
    /* 0044c660: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044c661: mov ebp, esp */ r_ebp = r_esp;
    /* 0044c663: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044c664: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0044c667: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0044c669: mov esp, ebp */ r_esp = r_ebp;
    /* 0044c66b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044c66c: ret  */ FN_RET(0x0044c660); r_esp += 4; return;
}

void f_0044e130(void) /* ??0_AFX_OLE_STATE@@QAE@XZ_15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044e130);
    /* 0044e130: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044e131: mov ebp, esp */ r_ebp = r_esp;
    /* 0044e133: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044e134: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0044e137: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044e13a: call 0x5cb4b0 */ r_esp -= 4; W32(r_esp, 0x44e13fu); f_005cb4b0();
    /* 0044e13f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044e142: mov dword ptr [eax], 0x6b93c4 */ W32((u32)(r_eax), 0x6b93c4u);
    /* 0044e148: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044e14b: mov esp, ebp */ r_esp = r_ebp;
    /* 0044e14d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044e14e: ret  */ FN_RET(0x0044e130); r_esp += 4; return;
}

void f_0044e150(void) /* ??1_AFX_OLE_STATE@@UAE@XZ_15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044e150);
    /* 0044e150: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044e151: mov ebp, esp */ r_ebp = r_esp;
    /* 0044e153: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044e154: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0044e157: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044e15a: mov dword ptr [eax], 0x6b93c4 */ W32((u32)(r_eax), 0x6b93c4u);
    /* 0044e160: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044e163: call 0x5cb590 */ r_esp -= 4; W32(r_esp, 0x44e168u); f_005cb590();
    /* 0044e168: mov esp, ebp */ r_esp = r_ebp;
    /* 0044e16a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044e16b: ret  */ FN_RET(0x0044e150); r_esp += 4; return;
}

void f_0044e710(void) /* ??_G_com_error@@UAEPAXI@Z_60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044e710);
    /* 0044e710: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044e711: mov ebp, esp */ r_ebp = r_esp;
    /* 0044e713: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044e714: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0044e717: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044e71a: call 0x44c6d0 */ r_esp -= 4; W32(r_esp, 0x44e71fu); f_0044c6d0();
    /* 0044e71f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044e722: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0044e725: je 0x44e733 */ if (fZ) goto L_0044e733;
L_0044e727:; BB(0x0044e727);
    /* 0044e727: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044e72a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044e72b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x44e730u); f_00686cae();
    /* 0044e730: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0044e733:; BB(0x0044e733);
    /* 0044e733: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044e736: mov esp, ebp */ r_esp = r_ebp;
    /* 0044e738: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044e739: ret 4 */ FN_RET(0x0044e710); r_esp += 8; return;
}

void f_0044e740(void) /* ??_G_com_error@@UAEPAXI@Z_61 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044e740);
    /* 0044e740: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044e741: mov ebp, esp */ r_ebp = r_esp;
    /* 0044e743: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044e744: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0044e747: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044e74a: call 0x44e150 */ r_esp -= 4; W32(r_esp, 0x44e74fu); f_0044e150();
    /* 0044e74f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044e752: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0044e755: je 0x44e763 */ if (fZ) goto L_0044e763;
L_0044e757:; BB(0x0044e757);
    /* 0044e757: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044e75a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044e75b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x44e760u); f_00686cae();
    /* 0044e760: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0044e763:; BB(0x0044e763);
    /* 0044e763: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044e766: mov esp, ebp */ r_esp = r_ebp;
    /* 0044e768: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044e769: ret 4 */ FN_RET(0x0044e740); r_esp += 8; return;
}

void f_0044e7d0(void) /* ??1CExpandoObject@@UAE@XZ_17 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044e7d0);
    /* 0044e7d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044e7d1: mov ebp, esp */ r_ebp = r_esp;
    /* 0044e7d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044e7d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0044e7d7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044e7da: mov dword ptr [eax], 0x6b949c */ W32((u32)(r_eax), 0x6b949cu);
    /* 0044e7e0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044e7e3: call 0x5e9e40 */ r_esp -= 4; W32(r_esp, 0x44e7e8u); f_005e9e40();
    /* 0044e7e8: mov esp, ebp */ r_esp = r_ebp;
    /* 0044e7ea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044e7eb: ret  */ FN_RET(0x0044e7d0); r_esp += 4; return;
}

void f_00457690(void) /* ??_G_com_error@@UAEPAXI@Z_62 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00457690);
    /* 00457690: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00457691: mov ebp, esp */ r_ebp = r_esp;
    /* 00457693: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00457694: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00457697: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045769a: call 0x44e7d0 */ r_esp -= 4; W32(r_esp, 0x45769fu); f_0044e7d0();
    /* 0045769f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004576a2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 004576a5: je 0x4576b3 */ if (fZ) goto L_004576b3;
L_004576a7:; BB(0x004576a7);
    /* 004576a7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004576aa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004576ab: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x4576b0u); f_00686cae();
    /* 004576b0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004576b3:; BB(0x004576b3);
    /* 004576b3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004576b6: mov esp, ebp */ r_esp = r_ebp;
    /* 004576b8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004576b9: ret 4 */ FN_RET(0x00457690); r_esp += 8; return;
}

void f_00459860(void) /* ??0FairScheduleGroup@details@Concurrency@@QAE@PAVSchedulerBase@12@PAVlocation@2@@Z */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00459860);
    /* 00459860: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00459861: mov ebp, esp */ r_ebp = r_esp;
    /* 00459863: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00459865: push 0x69f0c9 */ { u32 v = 0x69f0c9u; r_esp -= 4; W32(r_esp, v); }
    /* 0045986a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00459870: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00459871: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00459872: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00459877: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00459879: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045987a: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0045987d: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00459883: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00459886: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00459889: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045988a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045988d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045988e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00459891: call 0x643ce0 */ r_esp -= 4; W32(r_esp, 0x459896u); f_00643ce0();
    /* 00459896: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0045989d: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004598a0: mov dword ptr [edx], 0x6b97cc */ W32((u32)(r_edx), 0x6b97ccu);
    /* 004598a6: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004598a9: mov byte ptr [eax + 0xa], 0 */ W8((u32)(r_eax+0xau), 0x0u);
    /* 004598ad: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004598af: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004598b2: call 0x5eb700 */ r_esp -= 4; W32(r_esp, 0x4598b7u); f_005eb700();
    /* 004598b7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004598be: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004598c1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004598c4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004598cb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004598cc: mov esp, ebp */ r_esp = r_ebp;
    /* 004598ce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004598cf: ret 8 */ FN_RET(0x00459860); r_esp += 12; return;
}

void f_0045a160(void) /* ??1CExpandoObject@@UAE@XZ_18 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045a160);
    /* 0045a160: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045a161: mov ebp, esp */ r_ebp = r_esp;
    /* 0045a163: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045a164: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045a167: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a16a: mov dword ptr [eax], 0x6b98b4 */ W32((u32)(r_eax), 0x6b98b4u);
    /* 0045a170: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a173: call 0x5cc230 */ r_esp -= 4; W32(r_esp, 0x45a178u); f_005cc230();
    /* 0045a178: mov esp, ebp */ r_esp = r_ebp;
    /* 0045a17a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045a17b: ret  */ FN_RET(0x0045a160); r_esp += 4; return;
}

void f_0045a660(void) /* ??1CExpandoObject@@UAE@XZ_19 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045a660);
    /* 0045a660: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045a661: mov ebp, esp */ r_ebp = r_esp;
    /* 0045a663: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045a664: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045a667: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a66a: mov dword ptr [eax], 0x6b99ac */ W32((u32)(r_eax), 0x6b99acu);
    /* 0045a670: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a673: call 0x5fc150 */ r_esp -= 4; W32(r_esp, 0x45a678u); f_005fc150();
    /* 0045a678: mov esp, ebp */ r_esp = r_ebp;
    /* 0045a67a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045a67b: ret  */ FN_RET(0x0045a660); r_esp += 4; return;
}

void f_0045aec0(void) /* ??1CExpandoObject@@UAE@XZ_20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045aec0);
    /* 0045aec0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045aec1: mov ebp, esp */ r_ebp = r_esp;
    /* 0045aec3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045aec4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045aec7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045aeca: mov dword ptr [eax], 0x6b99f4 */ W32((u32)(r_eax), 0x6b99f4u);
    /* 0045aed0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045aed3: call 0x5f7260 */ r_esp -= 4; W32(r_esp, 0x45aed8u); f_005f7260();
    /* 0045aed8: mov esp, ebp */ r_esp = r_ebp;
    /* 0045aeda: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045aedb: ret  */ FN_RET(0x0045aec0); r_esp += 4; return;
}

void f_0045b120(void) /* ??_G_com_error@@UAEPAXI@Z_63 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045b120);
    /* 0045b120: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045b121: mov ebp, esp */ r_ebp = r_esp;
    /* 0045b123: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045b124: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045b127: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045b12a: call 0x457890 */ r_esp -= 4; W32(r_esp, 0x45b12fu); f_00457890();
    /* 0045b12f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045b132: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0045b135: je 0x45b143 */ if (fZ) goto L_0045b143;
L_0045b137:; BB(0x0045b137);
    /* 0045b137: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045b13a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045b13b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x45b140u); f_00686cae();
    /* 0045b140: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0045b143:; BB(0x0045b143);
    /* 0045b143: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045b146: mov esp, ebp */ r_esp = r_ebp;
    /* 0045b148: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045b149: ret 4 */ FN_RET(0x0045b120); r_esp += 8; return;
}

void f_0045b160(void) /* ??_G_com_error@@UAEPAXI@Z_64 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045b160);
    /* 0045b160: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045b161: mov ebp, esp */ r_ebp = r_esp;
    /* 0045b163: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045b164: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045b167: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045b16a: call 0x459b50 */ r_esp -= 4; W32(r_esp, 0x45b16fu); f_00459b50();
    /* 0045b16f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045b172: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0045b175: je 0x45b183 */ if (fZ) goto L_0045b183;
L_0045b177:; BB(0x0045b177);
    /* 0045b177: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045b17a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045b17b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x45b180u); f_00686cae();
    /* 0045b180: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0045b183:; BB(0x0045b183);
    /* 0045b183: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045b186: mov esp, ebp */ r_esp = r_ebp;
    /* 0045b188: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045b189: ret 4 */ FN_RET(0x0045b160); r_esp += 8; return;
}

void f_0045b190(void) /* ??_G_com_error@@UAEPAXI@Z_65 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045b190);
    /* 0045b190: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045b191: mov ebp, esp */ r_ebp = r_esp;
    /* 0045b193: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045b194: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045b197: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045b19a: call 0x45a160 */ r_esp -= 4; W32(r_esp, 0x45b19fu); f_0045a160();
    /* 0045b19f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045b1a2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0045b1a5: je 0x45b1b3 */ if (fZ) goto L_0045b1b3;
L_0045b1a7:; BB(0x0045b1a7);
    /* 0045b1a7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045b1aa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045b1ab: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x45b1b0u); f_00686cae();
    /* 0045b1b0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0045b1b3:; BB(0x0045b1b3);
    /* 0045b1b3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045b1b6: mov esp, ebp */ r_esp = r_ebp;
    /* 0045b1b8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045b1b9: ret 4 */ FN_RET(0x0045b190); r_esp += 8; return;
}

void f_0045b1c0(void) /* ??_G_com_error@@UAEPAXI@Z_66 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045b1c0);
    /* 0045b1c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045b1c1: mov ebp, esp */ r_ebp = r_esp;
    /* 0045b1c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045b1c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045b1c7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045b1ca: call 0x45a660 */ r_esp -= 4; W32(r_esp, 0x45b1cfu); f_0045a660();
    /* 0045b1cf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045b1d2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0045b1d5: je 0x45b1e3 */ if (fZ) goto L_0045b1e3;
L_0045b1d7:; BB(0x0045b1d7);
    /* 0045b1d7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045b1da: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045b1db: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x45b1e0u); f_00686cae();
    /* 0045b1e0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0045b1e3:; BB(0x0045b1e3);
    /* 0045b1e3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045b1e6: mov esp, ebp */ r_esp = r_ebp;
    /* 0045b1e8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045b1e9: ret 4 */ FN_RET(0x0045b1c0); r_esp += 8; return;
}

void f_0045b1f0(void) /* ??_G_com_error@@UAEPAXI@Z_67 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045b1f0);
    /* 0045b1f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045b1f1: mov ebp, esp */ r_ebp = r_esp;
    /* 0045b1f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045b1f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045b1f7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045b1fa: call 0x45aec0 */ r_esp -= 4; W32(r_esp, 0x45b1ffu); f_0045aec0();
    /* 0045b1ff: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045b202: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0045b205: je 0x45b213 */ if (fZ) goto L_0045b213;
L_0045b207:; BB(0x0045b207);
    /* 0045b207: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045b20a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045b20b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x45b210u); f_00686cae();
    /* 0045b210: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0045b213:; BB(0x0045b213);
    /* 0045b213: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045b216: mov esp, ebp */ r_esp = r_ebp;
    /* 0045b218: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045b219: ret 4 */ FN_RET(0x0045b1f0); r_esp += 8; return;
}

void f_0045b220(void) /* ??0_AFX_OLE_STATE@@QAE@XZ_16 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045b220);
    /* 0045b220: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045b221: mov ebp, esp */ r_ebp = r_esp;
    /* 0045b223: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045b224: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045b227: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045b22a: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x45b22fu); f_005e9e20();
    /* 0045b22f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045b232: mov dword ptr [eax], 0x6b9a90 */ W32((u32)(r_eax), 0x6b9a90u);
    /* 0045b238: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045b23b: mov esp, ebp */ r_esp = r_ebp;
    /* 0045b23d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045b23e: ret  */ FN_RET(0x0045b220); r_esp += 4; return;
}

void f_0045b240(void) /* ??1_AFX_OLE_STATE@@UAE@XZ_16 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045b240);
    /* 0045b240: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045b241: mov ebp, esp */ r_ebp = r_esp;
    /* 0045b243: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045b244: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045b247: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045b24a: mov dword ptr [eax], 0x6b9a90 */ W32((u32)(r_eax), 0x6b9a90u);
    /* 0045b250: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045b253: call 0x5e9e40 */ r_esp -= 4; W32(r_esp, 0x45b258u); f_005e9e40();
    /* 0045b258: mov esp, ebp */ r_esp = r_ebp;
    /* 0045b25a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045b25b: ret  */ FN_RET(0x0045b240); r_esp += 4; return;
}

void f_0045d1c0(void) /* ??_G_com_error@@UAEPAXI@Z_68 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045d1c0);
    /* 0045d1c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045d1c1: mov ebp, esp */ r_ebp = r_esp;
    /* 0045d1c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d1c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045d1c7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045d1ca: call 0x45b240 */ r_esp -= 4; W32(r_esp, 0x45d1cfu); f_0045b240();
    /* 0045d1cf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045d1d2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0045d1d5: je 0x45d1e3 */ if (fZ) goto L_0045d1e3;
L_0045d1d7:; BB(0x0045d1d7);
    /* 0045d1d7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045d1da: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045d1db: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x45d1e0u); f_00686cae();
    /* 0045d1e0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0045d1e3:; BB(0x0045d1e3);
    /* 0045d1e3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045d1e6: mov esp, ebp */ r_esp = r_ebp;
    /* 0045d1e8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045d1e9: ret 4 */ FN_RET(0x0045d1c0); r_esp += 8; return;
}

void f_0045e8c0(void) /* unknown_libname_502 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045e8c0);
    /* 0045e8c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045e8c1: mov ebp, esp */ r_ebp = r_esp;
    /* 0045e8c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045e8c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045e8c7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045e8ca: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045e8cd: mov dword ptr [eax + 0x80], ecx */ W32((u32)(r_eax+0x80u), r_ecx);
    /* 0045e8d3: mov esp, ebp */ r_esp = r_ebp;
    /* 0045e8d5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045e8d6: ret 4 */ FN_RET(0x0045e8c0); r_esp += 8; return;
}

void f_0045e8e0(void) /* ?GetExecutionResourceId@VirtualProcessor@details@Concurrency@@QBEIXZ */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045e8e0);
    /* 0045e8e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045e8e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0045e8e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045e8e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045e8e7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045e8ea: mov eax, dword ptr [eax + 0x80] */ r_eax = R32((u32)(r_eax+0x80u));
    /* 0045e8f0: mov esp, ebp */ r_esp = r_ebp;
    /* 0045e8f2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045e8f3: ret  */ FN_RET(0x0045e8e0); r_esp += 4; return;
}

void f_0045eb80(void) /* ??_G_com_error@@UAEPAXI@Z_69 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045eb80);
    /* 0045eb80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045eb81: mov ebp, esp */ r_ebp = r_esp;
    /* 0045eb83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045eb84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045eb87: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045eb8a: call 0x45d290 */ r_esp -= 4; W32(r_esp, 0x45eb8fu); f_0045d290();
    /* 0045eb8f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045eb92: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0045eb95: je 0x45eba3 */ if (fZ) goto L_0045eba3;
L_0045eb97:; BB(0x0045eb97);
    /* 0045eb97: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045eb9a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045eb9b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x45eba0u); f_00686cae();
    /* 0045eba0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0045eba3:; BB(0x0045eba3);
    /* 0045eba3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045eba6: mov esp, ebp */ r_esp = r_ebp;
    /* 0045eba8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045eba9: ret 4 */ FN_RET(0x0045eb80); r_esp += 8; return;
}

void f_0045eda0(void) /* unknown_libname_756 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045eda0);
    /* 0045eda0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045eda1: mov ebp, esp */ r_ebp = r_esp;
    /* 0045eda3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045eda4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045eda7: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0045eda9: mov esp, ebp */ r_esp = r_ebp;
    /* 0045edab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045edac: ret  */ FN_RET(0x0045eda0); r_esp += 4; return;
}

void f_0045edd0(void) /* unknown_libname_503 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045edd0);
    /* 0045edd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045edd1: mov ebp, esp */ r_ebp = r_esp;
    /* 0045edd3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045edd4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045edd7: mov eax, 4 */ r_eax = 0x4u;
    /* 0045eddc: mov esp, ebp */ r_esp = r_ebp;
    /* 0045edde: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045eddf: ret  */ FN_RET(0x0045edd0); r_esp += 4; return;
}

void f_0045ede0(void) /* unknown_libname_504 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045ede0);
    /* 0045ede0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045ede1: mov ebp, esp */ r_ebp = r_esp;
    /* 0045ede3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045ede4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045ede7: mov eax, 4 */ r_eax = 0x4u;
    /* 0045edec: mov esp, ebp */ r_esp = r_ebp;
    /* 0045edee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045edef: ret  */ FN_RET(0x0045ede0); r_esp += 4; return;
}

void f_0045ef80(void) /* unknown_libname_757 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045ef80);
    /* 0045ef80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045ef81: mov ebp, esp */ r_ebp = r_esp;
    /* 0045ef83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045ef84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045ef87: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0045ef89: mov esp, ebp */ r_esp = r_ebp;
    /* 0045ef8b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045ef8c: ret  */ FN_RET(0x0045ef80); r_esp += 4; return;
}

void f_0045f690(void) /* ?do_always_noconv@?$codecvt@DDU_Mbstatet@@@std@@MBE_NXZ_5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045f690);
    /* 0045f690: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045f691: mov ebp, esp */ r_ebp = r_esp;
    /* 0045f693: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045f694: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045f697: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0045f699: mov esp, ebp */ r_esp = r_ebp;
    /* 0045f69b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045f69c: ret  */ FN_RET(0x0045f690); r_esp += 4; return;
}

void f_004602c2(void) /* _WinMain@16_1_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004602c2);
L_004602c2:; BB(0x004602c2);
    /* 004602c2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004602c5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004602c8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004602cb: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004602cf: jge 0x46038a */ if ((fS==fO)) goto L_0046038a;
L_004602d5:; BB(0x004602d5);
    /* 004602d5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004602d8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004602d9: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4602deu); f_005dcb00();
    /* 004602de: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004602e1: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004602e4: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004602e7: mov al, byte ptr [edx + 0x4a0] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x4a0u))) & 0xffu);
    /* 004602ed: mov byte ptr [ebp - 0x19], al */ W8((u32)(r_ebp+0xffffffe7u), (u8)r_eax);
    /* 004602f0: movzx ecx, byte ptr [ebp - 0x19] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffe7u));
    /* 004602f4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004602f6: je 0x460385 */ if (fZ) goto L_00460385;
L_004602fc:; BB(0x004602fc);
    /* 004602fc: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004602ff: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00460302: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00460305: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00460308: shl ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0046030b: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0046030e: lea eax, [edx + ecx + 0x48] */ r_eax = (u32)(r_edx+r_ecx+0x48u);
    /* 00460312: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00460314: shl ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00460317: mov edx, dword ptr [eax + ecx] */ r_edx = R32((u32)(r_eax+r_ecx));
    /* 0046031a: mov eax, dword ptr [eax + ecx + 4] */ r_eax = R32((u32)(r_eax+r_ecx+0x4u));
    /* 0046031e: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00460321: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00460324: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00460327: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00460328: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046032b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046032c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046032f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00460330: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x460335u); f_005dcb00();
    /* 00460335: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00460338: mov ecx, eax */ r_ecx = r_eax;
    /* 0046033a: call 0x5d5cf0 */ r_esp -= 4; W32(r_esp, 0x46033fu); f_005d5cf0();
    /* 0046033f: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00460342: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00460345: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 00460348: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046034b: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0046034e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00460351: lea edx, [ecx + eax + 0x48] */ r_edx = (u32)(r_ecx+r_eax+0x48u);
    /* 00460355: mov eax, 1 */ r_eax = 0x1u;
    /* 0046035a: shl eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0046035d: mov ecx, dword ptr [edx + eax] */ r_ecx = R32((u32)(r_edx+r_eax));
    /* 00460360: mov edx, dword ptr [edx + eax + 4] */ r_edx = R32((u32)(r_edx+r_eax+0x4u));
    /* 00460364: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00460367: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0046036a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0046036d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046036e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00460371: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00460372: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00460375: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00460376: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x46037bu); f_005dcb00();
    /* 0046037b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046037e: mov ecx, eax */ r_ecx = r_eax;
    /* 00460380: call 0x5d5cf0 */ r_esp -= 4; W32(r_esp, 0x460385u); f_005d5cf0();
L_00460385:; BB(0x00460385);
    /* 00460385: jmp 0x4602c2 */ goto L_004602c2;
L_0046038a:; BB(0x0046038a);
    /* 0046038a: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0046038d: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00460390: call 0x5cb9b0 */ r_esp -= 4; W32(r_esp, 0x460395u); f_005cb9b0();
    /* 00460395: mov esp, ebp */ r_esp = r_ebp;
    /* 00460397: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00460398: ret  */ FN_RET(0x004602c2); r_esp += 4; return;
}

void f_00460385(void) /* _WinMain@16_1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00460385);
    /* 00460385: jmp 0x4602c2 */ f_004602c2(); return;
}

void f_004621e0(void) /* ??0_AFX_OLE_STATE@@QAE@XZ_17 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004621e0);
    /* 004621e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004621e1: mov ebp, esp */ r_ebp = r_esp;
    /* 004621e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004621e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004621e7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004621ea: call 0x5cb4b0 */ r_esp -= 4; W32(r_esp, 0x4621efu); f_005cb4b0();
    /* 004621ef: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004621f2: mov dword ptr [eax], 0x6ba64c */ W32((u32)(r_eax), 0x6ba64cu);
    /* 004621f8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004621fb: mov esp, ebp */ r_esp = r_ebp;
    /* 004621fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004621fe: ret  */ FN_RET(0x004621e0); r_esp += 4; return;
}

void f_00462200(void) /* ??1_AFX_OLE_STATE@@UAE@XZ_17 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00462200);
    /* 00462200: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00462201: mov ebp, esp */ r_ebp = r_esp;
    /* 00462203: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00462204: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00462207: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046220a: mov dword ptr [eax], 0x6ba64c */ W32((u32)(r_eax), 0x6ba64cu);
    /* 00462210: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00462213: call 0x5cb590 */ r_esp -= 4; W32(r_esp, 0x462218u); f_005cb590();
    /* 00462218: mov esp, ebp */ r_esp = r_ebp;
    /* 0046221a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046221b: ret  */ FN_RET(0x00462200); r_esp += 4; return;
}

void f_004628d0(void) /* ??_G_com_error@@UAEPAXI@Z_70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004628d0);
    /* 004628d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004628d1: mov ebp, esp */ r_ebp = r_esp;
    /* 004628d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004628d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004628d7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004628da: call 0x45f770 */ r_esp -= 4; W32(r_esp, 0x4628dfu); f_0045f770();
    /* 004628df: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004628e2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 004628e5: je 0x4628f3 */ if (fZ) goto L_004628f3;
L_004628e7:; BB(0x004628e7);
    /* 004628e7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004628ea: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004628eb: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x4628f0u); f_00686cae();
    /* 004628f0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004628f3:; BB(0x004628f3);
    /* 004628f3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004628f6: mov esp, ebp */ r_esp = r_ebp;
    /* 004628f8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004628f9: ret 4 */ FN_RET(0x004628d0); r_esp += 8; return;
}

void f_00462900(void) /* ??_G_com_error@@UAEPAXI@Z_71 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00462900);
    /* 00462900: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00462901: mov ebp, esp */ r_ebp = r_esp;
    /* 00462903: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00462904: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00462907: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046290a: call 0x462200 */ r_esp -= 4; W32(r_esp, 0x46290fu); f_00462200();
    /* 0046290f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00462912: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00462915: je 0x462923 */ if (fZ) goto L_00462923;
L_00462917:; BB(0x00462917);
    /* 00462917: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046291a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046291b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x462920u); f_00686cae();
    /* 00462920: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00462923:; BB(0x00462923);
    /* 00462923: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00462926: mov esp, ebp */ r_esp = r_ebp;
    /* 00462928: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00462929: ret 4 */ FN_RET(0x00462900); r_esp += 8; return;
}

void f_00463b50(void) /* ??0_AFX_OLE_STATE@@QAE@XZ_18 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00463b50);
    /* 00463b50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00463b51: mov ebp, esp */ r_ebp = r_esp;
    /* 00463b53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00463b54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00463b57: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00463b5a: call 0x5f5f50 */ r_esp -= 4; W32(r_esp, 0x463b5fu); f_005f5f50();
    /* 00463b5f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00463b62: mov dword ptr [eax], 0x6ba81c */ W32((u32)(r_eax), 0x6ba81cu);
    /* 00463b68: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00463b6b: mov esp, ebp */ r_esp = r_ebp;
    /* 00463b6d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00463b6e: ret  */ FN_RET(0x00463b50); r_esp += 4; return;
}

void f_00463b70(void) /* ??1_AFX_OLE_STATE@@UAE@XZ_18 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00463b70);
    /* 00463b70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00463b71: mov ebp, esp */ r_ebp = r_esp;
    /* 00463b73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00463b74: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00463b77: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00463b7a: mov dword ptr [eax], 0x6ba81c */ W32((u32)(r_eax), 0x6ba81cu);
    /* 00463b80: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00463b83: call 0x5f5fa0 */ r_esp -= 4; W32(r_esp, 0x463b88u); f_005f5fa0();
    /* 00463b88: mov esp, ebp */ r_esp = r_ebp;
    /* 00463b8a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00463b8b: ret  */ FN_RET(0x00463b70); r_esp += 4; return;
}

void f_00463e30(void) /* unknown_libname_505 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00463e30);
    /* 00463e30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00463e31: mov ebp, esp */ r_ebp = r_esp;
    /* 00463e33: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00463e34: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00463e37: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00463e3a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00463e3d: mov dword ptr [eax + 0x10], ecx */ W32((u32)(r_eax+0x10u), r_ecx);
    /* 00463e40: mov esp, ebp */ r_esp = r_ebp;
    /* 00463e42: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00463e43: ret 4 */ FN_RET(0x00463e30); r_esp += 8; return;
}

void f_00463e50(void) /* ?_GetToken@_CancellationTokenRegistration@details@Concurrency@@QBEPAV_CancellationTokenState@23@XZ */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00463e50);
    /* 00463e50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00463e51: mov ebp, esp */ r_ebp = r_esp;
    /* 00463e53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00463e54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00463e57: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00463e5a: mov eax, dword ptr [eax + 0x10] */ r_eax = R32((u32)(r_eax+0x10u));
    /* 00463e5d: mov esp, ebp */ r_esp = r_ebp;
    /* 00463e5f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00463e60: ret  */ FN_RET(0x00463e50); r_esp += 4; return;
}

void f_00463f20(void) /* ??_G_com_error@@UAEPAXI@Z_72 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00463f20);
    /* 00463f20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00463f21: mov ebp, esp */ r_ebp = r_esp;
    /* 00463f23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00463f24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00463f27: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00463f2a: call 0x463b70 */ r_esp -= 4; W32(r_esp, 0x463f2fu); f_00463b70();
    /* 00463f2f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00463f32: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00463f35: je 0x463f43 */ if (fZ) goto L_00463f43;
L_00463f37:; BB(0x00463f37);
    /* 00463f37: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00463f3a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00463f3b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x463f40u); f_00686cae();
    /* 00463f40: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00463f43:; BB(0x00463f43);
    /* 00463f43: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00463f46: mov esp, ebp */ r_esp = r_ebp;
    /* 00463f48: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00463f49: ret 4 */ FN_RET(0x00463f20); r_esp += 8; return;
}

void f_00463f50(void) /* ??_G_com_error@@UAEPAXI@Z_73 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00463f50);
    /* 00463f50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00463f51: mov ebp, esp */ r_ebp = r_esp;
    /* 00463f53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00463f54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00463f57: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00463f5a: call 0x463ca0 */ r_esp -= 4; W32(r_esp, 0x463f5fu); f_00463ca0();
    /* 00463f5f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00463f62: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00463f65: je 0x463f73 */ if (fZ) goto L_00463f73;
L_00463f67:; BB(0x00463f67);
    /* 00463f67: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00463f6a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00463f6b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x463f70u); f_00686cae();
    /* 00463f70: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00463f73:; BB(0x00463f73);
    /* 00463f73: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00463f76: mov esp, ebp */ r_esp = r_ebp;
    /* 00463f78: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00463f79: ret 4 */ FN_RET(0x00463f50); r_esp += 8; return;
}

void f_00464210(void) /* ??1CComCriticalSection@ATL@@QAE@XZ_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00464210);
    /* 00464210: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00464211: mov ebp, esp */ r_ebp = r_esp;
    /* 00464213: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00464214: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00464217: mov esp, ebp */ r_esp = r_ebp;
    /* 00464219: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046421a: ret  */ FN_RET(0x00464210); r_esp += 4; return;
}

void f_004646e0(void) /* ??1CComCriticalSection@ATL@@QAE@XZ_1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004646e0);
    /* 004646e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004646e1: mov ebp, esp */ r_ebp = r_esp;
    /* 004646e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004646e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004646e7: mov esp, ebp */ r_esp = r_ebp;
    /* 004646e9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004646ea: ret  */ FN_RET(0x004646e0); r_esp += 4; return;
}

void f_00465730(void) /* ??_G_com_error@@UAEPAXI@Z_74 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00465730);
    /* 00465730: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00465731: mov ebp, esp */ r_ebp = r_esp;
    /* 00465733: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00465734: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00465737: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046573a: call 0x465280 */ r_esp -= 4; W32(r_esp, 0x46573fu); f_00465280();
    /* 0046573f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00465742: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00465745: je 0x465753 */ if (fZ) goto L_00465753;
L_00465747:; BB(0x00465747);
    /* 00465747: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046574a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046574b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x465750u); f_00686cae();
    /* 00465750: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00465753:; BB(0x00465753);
    /* 00465753: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00465756: mov esp, ebp */ r_esp = r_ebp;
    /* 00465758: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00465759: ret 4 */ FN_RET(0x00465730); r_esp += 8; return;
}

void f_0046cc50(void) /* ??_G_com_error@@UAEPAXI@Z_75 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046cc50);
    /* 0046cc50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046cc51: mov ebp, esp */ r_ebp = r_esp;
    /* 0046cc53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046cc54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0046cc57: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046cc5a: call 0x4657f0 */ r_esp -= 4; W32(r_esp, 0x46cc5fu); f_004657f0();
    /* 0046cc5f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0046cc62: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0046cc65: je 0x46cc73 */ if (fZ) goto L_0046cc73;
L_0046cc67:; BB(0x0046cc67);
    /* 0046cc67: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046cc6a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046cc6b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x46cc70u); f_00686cae();
    /* 0046cc70: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0046cc73:; BB(0x0046cc73);
    /* 0046cc73: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046cc76: mov esp, ebp */ r_esp = r_ebp;
    /* 0046cc78: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046cc79: ret 4 */ FN_RET(0x0046cc50); r_esp += 8; return;
}

void f_0046cc80(void) /* ??_G_com_error@@UAEPAXI@Z_76 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046cc80);
    /* 0046cc80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046cc81: mov ebp, esp */ r_ebp = r_esp;
    /* 0046cc83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046cc84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0046cc87: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046cc8a: call 0x467130 */ r_esp -= 4; W32(r_esp, 0x46cc8fu); f_00467130();
    /* 0046cc8f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0046cc92: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0046cc95: je 0x46cca3 */ if (fZ) goto L_0046cca3;
L_0046cc97:; BB(0x0046cc97);
    /* 0046cc97: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046cc9a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046cc9b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x46cca0u); f_00686cae();
    /* 0046cca0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0046cca3:; BB(0x0046cca3);
    /* 0046cca3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046cca6: mov esp, ebp */ r_esp = r_ebp;
    /* 0046cca8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046cca9: ret 4 */ FN_RET(0x0046cc80); r_esp += 8; return;
}

void f_0046ccb0(void) /* ??_G_com_error@@UAEPAXI@Z_77 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046ccb0);
    /* 0046ccb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046ccb1: mov ebp, esp */ r_ebp = r_esp;
    /* 0046ccb3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046ccb4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0046ccb7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046ccba: call 0x601ba0 */ r_esp -= 4; W32(r_esp, 0x46ccbfu); f_00601ba0();
    /* 0046ccbf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0046ccc2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0046ccc5: je 0x46ccd3 */ if (fZ) goto L_0046ccd3;
L_0046ccc7:; BB(0x0046ccc7);
    /* 0046ccc7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046ccca: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046cccb: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x46ccd0u); f_00686cae();
    /* 0046ccd0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0046ccd3:; BB(0x0046ccd3);
    /* 0046ccd3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046ccd6: mov esp, ebp */ r_esp = r_ebp;
    /* 0046ccd8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046ccd9: ret 4 */ FN_RET(0x0046ccb0); r_esp += 8; return;
}

void f_0046cce0(void) /* ??_G_com_error@@UAEPAXI@Z_78 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046cce0);
    /* 0046cce0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046cce1: mov ebp, esp */ r_ebp = r_esp;
    /* 0046cce3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046cce4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0046cce7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046ccea: call 0x46a350 */ r_esp -= 4; W32(r_esp, 0x46ccefu); f_0046a350();
    /* 0046ccef: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0046ccf2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0046ccf5: je 0x46cd03 */ if (fZ) goto L_0046cd03;
L_0046ccf7:; BB(0x0046ccf7);
    /* 0046ccf7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046ccfa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046ccfb: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x46cd00u); f_00686cae();
    /* 0046cd00: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0046cd03:; BB(0x0046cd03);
    /* 0046cd03: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046cd06: mov esp, ebp */ r_esp = r_ebp;
    /* 0046cd08: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046cd09: ret 4 */ FN_RET(0x0046cce0); r_esp += 8; return;
}

void f_0047aaa0(void) /* ??1CComCriticalSection@ATL@@QAE@XZ_2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047aaa0);
    /* 0047aaa0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047aaa1: mov ebp, esp */ r_ebp = r_esp;
    /* 0047aaa3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047aaa4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0047aaa7: mov esp, ebp */ r_esp = r_ebp;
    /* 0047aaa9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047aaaa: ret  */ FN_RET(0x0047aaa0); r_esp += 4; return;
}

void f_0047ac40(void) /* ?do_always_noconv@?$codecvt@DDU_Mbstatet@@@std@@MBE_NXZ_6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047ac40);
    /* 0047ac40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047ac41: mov ebp, esp */ r_ebp = r_esp;
    /* 0047ac43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047ac44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0047ac47: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0047ac49: mov esp, ebp */ r_esp = r_ebp;
    /* 0047ac4b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047ac4c: ret  */ FN_RET(0x0047ac40); r_esp += 4; return;
}

void f_0047b9eb(void) /* _WinMain@16_2_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047b9eb);
L_0047b9eb:; BB(0x0047b9eb);
    /* 0047b9eb: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047b9ee: mov eax, dword ptr [edx + 0x488] */ r_eax = R32((u32)(r_edx+0x488u));
    /* 0047b9f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047b9f5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047b9f8: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x47b9fdu); f_0047e390();
    /* 0047b9fd: mov ecx, eax */ r_ecx = r_eax;
    /* 0047b9ff: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x47ba04u); f_004c6cb0();
    /* 0047ba04: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047ba06: jne 0x47ba77 */ if (!fZ) goto L_0047ba77;
L_0047ba08:; BB(0x0047ba08);
    /* 0047ba08: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047ba0b: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x47ba10u); f_0047f950();
    /* 0047ba10: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0047ba13: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047ba16: cmp dword ptr [ecx + 0x488], eax */ {  u32 a = R32((u32)(r_ecx+0x488u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047ba1c: jge 0x47ba47 */ if ((fS==fO)) goto L_0047ba47;
L_0047ba1e:; BB(0x0047ba1e);
    /* 0047ba1e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047ba21: mov eax, dword ptr [edx + 0x488] */ r_eax = R32((u32)(r_edx+0x488u));
    /* 0047ba27: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0047ba2a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047ba2d: mov dword ptr [ecx + 0x488], eax */ W32((u32)(r_ecx+0x488u), r_eax);
    /* 0047ba33: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047ba36: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047ba39: mov ecx, dword ptr [eax + 0x488] */ r_ecx = R32((u32)(r_eax+0x488u));
    /* 0047ba3f: mov dword ptr [edx + 0x488], ecx */ W32((u32)(r_edx+0x488u), r_ecx);
    /* 0047ba45: jmp 0x47ba54 */ goto L_0047ba54;
L_0047ba47:; BB(0x0047ba47);
    /* 0047ba47: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047ba4a: mov dword ptr [edx + 0x488], 0 */ W32((u32)(r_edx+0x488u), 0x0u);
L_0047ba54:; BB(0x0047ba54);
    /* 0047ba54: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047ba57: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0047ba5a: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0047ba5d: cmp dword ptr [ebp - 4], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047ba61: jle 0x47ba72 */ if ((fZ||fS!=fO)) goto L_0047ba72;
L_0047ba63:; BB(0x0047ba63);
    /* 0047ba63: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047ba66: mov dword ptr [ecx + 0x488], 0 */ W32((u32)(r_ecx+0x488u), 0x0u);
    /* 0047ba70: jmp 0x47ba77 */ goto L_0047ba77;
L_0047ba72:; BB(0x0047ba72);
    /* 0047ba72: jmp 0x47b9eb */ goto L_0047b9eb;
L_0047ba77:; BB(0x0047ba77);
    /* 0047ba77: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0047ba79: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047ba7c: mov eax, dword ptr [edx + 0x488] */ r_eax = R32((u32)(r_edx+0x488u));
    /* 0047ba82: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047ba83: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047ba86: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x47ba8bu); f_0047e390();
    /* 0047ba8b: mov ecx, eax */ r_ecx = r_eax;
    /* 0047ba8d: call 0x4c70b0 */ r_esp -= 4; W32(r_esp, 0x47ba92u); f_004c70b0();
    /* 0047ba92: cmp dword ptr [ebp - 4], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047ba96: jle 0x47baa5 */ if ((fZ||fS!=fO)) goto L_0047baa5;
L_0047ba98:; BB(0x0047ba98);
    /* 0047ba98: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047ba9b: mov ecx, dword ptr [ecx + 0x28] */ r_ecx = R32((u32)(r_ecx+0x28u));
    /* 0047ba9e: call 0x5f87d0 */ r_esp -= 4; W32(r_esp, 0x47baa3u); f_005f87d0();
    /* 0047baa3: jmp 0x47bab0 */ goto L_0047bab0;
L_0047baa5:; BB(0x0047baa5);
    /* 0047baa5: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047baa8: mov ecx, dword ptr [edx + 0x28] */ r_ecx = R32((u32)(r_edx+0x28u));
    /* 0047baab: call 0x466e90 */ r_esp -= 4; W32(r_esp, 0x47bab0u); f_00466e90();
L_0047bab0:; BB(0x0047bab0);
    /* 0047bab0: mov esp, ebp */ r_esp = r_ebp;
    /* 0047bab2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047bab3: ret  */ FN_RET(0x0047b9eb); r_esp += 4; return;
}

void f_0047ba72(void) /* _WinMain@16_2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047ba72);
    /* 0047ba72: jmp 0x47b9eb */ f_0047b9eb(); return;
}

void f_0047bc20(void) /* ?MaxSize@CAtlTraceProcess@@QBEKXZ */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047bc20);
    /* 0047bc20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047bc21: mov ebp, esp */ r_ebp = r_esp;
    /* 0047bc23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047bc24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0047bc27: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047bc2a: mov eax, dword ptr [eax + 0x430] */ r_eax = R32((u32)(r_eax+0x430u));
    /* 0047bc30: mov esp, ebp */ r_esp = r_ebp;
    /* 0047bc32: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047bc33: ret  */ FN_RET(0x0047bc20); r_esp += 4; return;
}

void f_0047bca0(void) /* ?Base@CAtlTraceProcess@@QBEPAXXZ */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047bca0);
    /* 0047bca0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047bca1: mov ebp, esp */ r_ebp = r_esp;
    /* 0047bca3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047bca4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0047bca7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047bcaa: mov eax, dword ptr [eax + 0x438] */ r_eax = R32((u32)(r_eax+0x438u));
    /* 0047bcb0: mov esp, ebp */ r_esp = r_ebp;
    /* 0047bcb2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047bcb3: ret  */ FN_RET(0x0047bca0); r_esp += 4; return;
}

void f_0047bce0(void) /* ?ModuleCount@CAtlTraceProcess@@QBEHXZ */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047bce0);
    /* 0047bce0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047bce1: mov ebp, esp */ r_ebp = r_esp;
    /* 0047bce3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047bce4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0047bce7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047bcea: mov eax, dword ptr [eax + 0x43c] */ r_eax = R32((u32)(r_eax+0x43cu));
    /* 0047bcf0: mov esp, ebp */ r_esp = r_ebp;
    /* 0047bcf2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047bcf3: ret  */ FN_RET(0x0047bce0); r_esp += 4; return;
}

void f_0047bd20(void) /* ?CategoryCount@CAtlTraceProcess@@QBEHXZ */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047bd20);
    /* 0047bd20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047bd21: mov ebp, esp */ r_ebp = r_esp;
    /* 0047bd23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047bd24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0047bd27: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047bd2a: mov eax, dword ptr [eax + 0x440] */ r_eax = R32((u32)(r_eax+0x440u));
    /* 0047bd30: mov esp, ebp */ r_esp = r_ebp;
    /* 0047bd32: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047bd33: ret  */ FN_RET(0x0047bd20); r_esp += 4; return;
}

void f_0047bd60(void) /* ?GetTabbedPane@CMDIChildWndEx@@QBEPAVCDockablePane@@XZ */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047bd60);
    /* 0047bd60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047bd61: mov ebp, esp */ r_ebp = r_esp;
    /* 0047bd63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047bd64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0047bd67: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047bd6a: mov eax, dword ptr [eax + 0x444] */ r_eax = R32((u32)(r_eax+0x444u));
    /* 0047bd70: mov esp, ebp */ r_esp = r_ebp;
    /* 0047bd72: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047bd73: ret  */ FN_RET(0x0047bd60); r_esp += 4; return;
}

void f_0047bda0(void) /* ?ModuleCount@CAtlTraceProcess@@QBEHXZ_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047bda0);
    /* 0047bda0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047bda1: mov ebp, esp */ r_ebp = r_esp;
    /* 0047bda3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047bda4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0047bda7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047bdaa: mov eax, dword ptr [eax + 0x448] */ r_eax = R32((u32)(r_eax+0x448u));
    /* 0047bdb0: mov esp, ebp */ r_esp = r_ebp;
    /* 0047bdb2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047bdb3: ret  */ FN_RET(0x0047bda0); r_esp += 4; return;
}

void f_0047bde0(void) /* ?CategoryCount@CAtlTraceProcess@@QBEHXZ_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047bde0);
    /* 0047bde0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047bde1: mov ebp, esp */ r_ebp = r_esp;
    /* 0047bde3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047bde4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0047bde7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047bdea: mov eax, dword ptr [eax + 0x44c] */ r_eax = R32((u32)(r_eax+0x44cu));
    /* 0047bdf0: mov esp, ebp */ r_esp = r_ebp;
    /* 0047bdf2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047bdf3: ret  */ FN_RET(0x0047bde0); r_esp += 4; return;
}

void f_0047e640(void) /* unknown_libname_758 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047e640);
    /* 0047e640: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047e641: mov ebp, esp */ r_ebp = r_esp;
    /* 0047e643: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047e644: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0047e647: mov esp, ebp */ r_esp = r_ebp;
    /* 0047e649: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047e64a: ret 4 */ FN_RET(0x0047e640); r_esp += 8; return;
}

void f_0047ec40(void) /* ??1CComCriticalSection@ATL@@QAE@XZ_3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047ec40);
    /* 0047ec40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047ec41: mov ebp, esp */ r_ebp = r_esp;
    /* 0047ec43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047ec44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0047ec47: mov esp, ebp */ r_esp = r_ebp;
    /* 0047ec49: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047ec4a: ret  */ FN_RET(0x0047ec40); r_esp += 4; return;
}

void f_0047ecd0(void) /* ??1CAtlWinModule@ATL@@QAE@XZ */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047ecd0);
    /* 0047ecd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047ecd1: mov ebp, esp */ r_ebp = r_esp;
    /* 0047ecd3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047ecd4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0047ecd7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047ecda: call 0x47e830 */ r_esp -= 4; W32(r_esp, 0x47ecdfu); f_0047e830();
    /* 0047ecdf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047ece2: call 0x47f8e0 */ r_esp -= 4; W32(r_esp, 0x47ece7u); f_0047f8e0();
    /* 0047ece7: mov esp, ebp */ r_esp = r_ebp;
    /* 0047ece9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047ecea: ret  */ FN_RET(0x0047ecd0); r_esp += 4; return;
}

void f_00480120(void) /* ??1CComCriticalSection@ATL@@QAE@XZ_4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00480120);
    /* 00480120: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00480121: mov ebp, esp */ r_ebp = r_esp;
    /* 00480123: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00480124: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00480127: mov esp, ebp */ r_esp = r_ebp;
    /* 00480129: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048012a: ret  */ FN_RET(0x00480120); r_esp += 4; return;
}

void f_004812c2(void) /* _WinMain@16_3_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004812c2);
L_004812c2:; BB(0x004812c2);
    /* 004812c2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004812c5: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004812c8: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 004812cb: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004812ce: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4812d3u); f_0047f950();
    /* 004812d3: cmp dword ptr [ebp - 0x10], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004812d6: jge 0x48134e */ if ((fS==fO)) goto L_0048134e;
L_004812d8:; BB(0x004812d8);
    /* 004812d8: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004812db: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004812dc: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004812df: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4812e4u); f_0047e390();
    /* 004812e4: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 004812e7: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 004812ea: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 004812ed: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004812ee: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4812f3u); f_005dcb00();
    /* 004812f3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004812f6: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004812f9: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 00481300: cmp dword ptr [ebp - 0x10], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00481304: jne 0x48130f */ if (!fZ) goto L_0048130f;
L_00481306:; BB(0x00481306);
    /* 00481306: mov dword ptr [ebp - 0x18], 0x4e20 */ W32((u32)(r_ebp+0xffffffe8u), 0x4e20u);
    /* 0048130d: jmp 0x481316 */ goto L_00481316;
L_0048130f:; BB(0x0048130f);
    /* 0048130f: mov dword ptr [ebp - 0x18], 0xc8 */ W32((u32)(r_ebp+0xffffffe8u), 0xc8u);
L_00481316:; BB(0x00481316);
    /* 00481316: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00481319: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048131a: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x48131fu); f_005dcb00();
    /* 0048131f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00481322: mov ecx, eax */ r_ecx = r_eax;
    /* 00481324: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x481329u); f_005d5a50();
    /* 00481329: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0048132b: jl 0x481349 */ if ((fS!=fO)) goto L_00481349;
L_0048132d:; BB(0x0048132d);
    /* 0048132d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00481330: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00481331: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00481334: call 0x4c6aa0 */ r_esp -= 4; W32(r_esp, 0x481339u); f_004c6aa0();
    /* 00481339: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0048133c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048133d: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00481340: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00481341: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00481344: call 0x5d5af0 */ r_esp -= 4; W32(r_esp, 0x481349u); f_005d5af0();
L_00481349:; BB(0x00481349);
    /* 00481349: jmp 0x4812c2 */ goto L_004812c2;
L_0048134e:; BB(0x0048134e);
    /* 0048134e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00481350: push 0x6bceb8 */ { u32 v = 0x6bceb8u; r_esp -= 4; W32(r_esp, v); }
    /* 00481355: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 0048135a: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0048135d: call 0x607960 */ r_esp -= 4; W32(r_esp, 0x481362u); f_00607960();
    /* 00481362: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00481364: setne cl */ r_ecx = (r_ecx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 00481367: mov byte ptr [ebp - 0x19], cl */ W8((u32)(r_ebp+0xffffffe7u), (u8)r_ecx);
    /* 0048136a: movzx edx, byte ptr [ebp - 0x19] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffe7u));
    /* 0048136e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00481370: je 0x48139e */ if (fZ) goto L_0048139e;
L_00481372:; BB(0x00481372);
    /* 00481372: mov dword ptr [ebp - 0x3c], 0x1c2 */ W32((u32)(r_ebp+0xffffffc4u), 0x1c2u);
    /* 00481379: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 00481380: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00481383: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00481384: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00481387: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00481388: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048138a: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x48138fu); f_005dcb00();
    /* 0048138f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00481392: mov ecx, eax */ r_ecx = r_eax;
    /* 00481394: call 0x5d5af0 */ r_esp -= 4; W32(r_esp, 0x481399u); f_005d5af0();
    /* 00481399: jmp 0x481489 */ goto L_00481489;
L_0048139e:; BB(0x0048139e);
    /* 0048139e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004813a0: push 0x6bcea0 */ { u32 v = 0x6bcea0u; r_esp -= 4; W32(r_esp, v); }
    /* 004813a5: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 004813ab: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 004813ae: call 0x607960 */ r_esp -= 4; W32(r_esp, 0x4813b3u); f_00607960();
    /* 004813b3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004813b5: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 004813b8: mov byte ptr [ebp - 0x26], al */ W8((u32)(r_ebp+0xffffffdau), (u8)r_eax);
    /* 004813bb: movzx ecx, byte ptr [ebp - 0x26] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffdau));
    /* 004813bf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004813c1: jne 0x4813c8 */ if (!fZ) goto L_004813c8;
L_004813c3:; BB(0x004813c3);
    /* 004813c3: jmp 0x481489 */ goto L_00481489;
L_004813c8:; BB(0x004813c8);
    /* 004813c8: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 004813cf: mov dword ptr [ebp - 0xc], 0xffffffff */ W32((u32)(r_ebp+0xfffffff4u), 0xffffffffu);
    /* 004813d6: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 004813dd: jmp 0x4813e8 */ goto L_004813e8;
L_004813df:; BB(0x004813df);
    /* 004813df: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004813e2: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004813e5: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_004813e8:; BB(0x004813e8);
    /* 004813e8: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004813eb: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4813f0u); f_0047f950();
    /* 004813f0: cmp dword ptr [ebp - 0x10], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004813f3: jge 0x48142b */ if ((fS==fO)) goto L_0048142b;
L_004813f5:; BB(0x004813f5);
    /* 004813f5: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004813f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004813f9: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4813feu); f_005dcb00();
    /* 004813fe: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00481401: mov ecx, eax */ r_ecx = r_eax;
    /* 00481403: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x481408u); f_005d5a50();
    /* 00481408: cmp eax, dword ptr [ebp - 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048140b: jle 0x481429 */ if ((fZ||fS!=fO)) goto L_00481429;
L_0048140d:; BB(0x0048140d);
    /* 0048140d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00481410: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00481411: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x481416u); f_005dcb00();
    /* 00481416: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00481419: mov ecx, eax */ r_ecx = r_eax;
    /* 0048141b: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x481420u); f_005d5a50();
    /* 00481420: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00481423: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00481426: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_00481429:; BB(0x00481429);
    /* 00481429: jmp 0x4813df */ goto L_004813df;
L_0048142b:; BB(0x0048142b);
    /* 0048142b: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048142f: jne 0x481433 */ if (!fZ) goto L_00481433;
L_00481431:; BB(0x00481431);
    /* 00481431: jmp 0x481489 */ goto L_00481489;
L_00481433:; BB(0x00481433);
    /* 00481433: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 00481436: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00481437: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00481439: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x48143eu); f_005dcb00();
    /* 0048143e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00481441: mov ecx, eax */ r_ecx = r_eax;
    /* 00481443: call 0x5d5ac0 */ r_esp -= 4; W32(r_esp, 0x481448u); f_005d5ac0();
    /* 00481448: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048144b: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 0048144e: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00481455: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00481458: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00481459: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0048145c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048145d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048145f: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x481464u); f_005dcb00();
    /* 00481464: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00481467: mov ecx, eax */ r_ecx = r_eax;
    /* 00481469: call 0x5d5af0 */ r_esp -= 4; W32(r_esp, 0x48146eu); f_005d5af0();
    /* 0048146e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00481471: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00481472: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00481475: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00481476: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00481479: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048147a: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x48147fu); f_005dcb00();
    /* 0048147f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00481482: mov ecx, eax */ r_ecx = r_eax;
    /* 00481484: call 0x5d5af0 */ r_esp -= 4; W32(r_esp, 0x481489u); f_005d5af0();
L_00481489:; BB(0x00481489);
    /* 00481489: mov esp, ebp */ r_esp = r_ebp;
    /* 0048148b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048148c: ret  */ FN_RET(0x004812c2); r_esp += 4; return;
}

void f_00481349(void) /* _WinMain@16_3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00481349);
    /* 00481349: jmp 0x4812c2 */ f_004812c2(); return;
}

void f_00484250(void) /* ??_G_com_error@@UAEPAXI@Z_79 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00484250);
    /* 00484250: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00484251: mov ebp, esp */ r_ebp = r_esp;
    /* 00484253: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00484254: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00484257: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048425a: call 0x479480 */ r_esp -= 4; W32(r_esp, 0x48425fu); f_00479480();
    /* 0048425f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00484262: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00484265: je 0x484273 */ if (fZ) goto L_00484273;
L_00484267:; BB(0x00484267);
    /* 00484267: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048426a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048426b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x484270u); f_00686cae();
    /* 00484270: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00484273:; BB(0x00484273);
    /* 00484273: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00484276: mov esp, ebp */ r_esp = r_ebp;
    /* 00484278: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00484279: ret 4 */ FN_RET(0x00484250); r_esp += 8; return;
}

void f_00484280(void) /* ??_G_com_error@@UAEPAXI@Z_80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00484280);
    /* 00484280: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00484281: mov ebp, esp */ r_ebp = r_esp;
    /* 00484283: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00484284: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00484287: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048428a: call 0x5fc150 */ r_esp -= 4; W32(r_esp, 0x48428fu); f_005fc150();
    /* 0048428f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00484292: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00484295: je 0x4842a3 */ if (fZ) goto L_004842a3;
L_00484297:; BB(0x00484297);
    /* 00484297: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048429a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048429b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x4842a0u); f_00686cae();
    /* 004842a0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004842a3:; BB(0x004842a3);
    /* 004842a3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004842a6: mov esp, ebp */ r_esp = r_ebp;
    /* 004842a8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004842a9: ret 4 */ FN_RET(0x00484280); r_esp += 8; return;
}

void f_00484810(void) /* ?GetGroup@HardwareAffinity@details@Concurrency@@QAEGXZ */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00484810);
    /* 00484810: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00484811: mov ebp, esp */ r_ebp = r_esp;
    /* 00484813: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00484814: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00484817: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048481a: mov ax, word ptr [eax + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x4u))) & 0xffffu);
    /* 0048481e: mov esp, ebp */ r_esp = r_ebp;
    /* 00484820: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00484821: ret  */ FN_RET(0x00484810); r_esp += 4; return;
}

void f_004a20f0(void) /* ??1CComCriticalSection@ATL@@QAE@XZ_5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004a20f0);
    /* 004a20f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a20f1: mov ebp, esp */ r_ebp = r_esp;
    /* 004a20f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a20f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004a20f7: mov esp, ebp */ r_esp = r_ebp;
    /* 004a20f9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a20fa: ret  */ FN_RET(0x004a20f0); r_esp += 4; return;
}

void f_004b7c8c(void) /* _WinMain@16_4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b7c8c);
    /* 004b7c8c: jmp 0x4b7d87 */ f_004b7d87(); return;
}

void f_004b7ca6(void) /* _WinMain@16_5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b7ca6);
    /* 004b7ca6: jmp 0x4b7d87 */ f_004b7d87(); return;
}

void f_004b7cc1(void) /* _WinMain@16_6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b7cc1);
    /* 004b7cc1: jmp 0x4b7d87 */ f_004b7d87(); return;
}

void f_004b7cdb(void) /* _WinMain@16_7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b7cdb);
    /* 004b7cdb: jmp 0x4b7d87 */ f_004b7d87(); return;
}

void f_004b7d87(void) /* _WinMain@16_4_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b7d87);
    /* 004b7d87: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b7d88: mov esp, ebp */ r_esp = r_ebp;
    /* 004b7d8a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b7d8b: ret  */ FN_RET(0x004b7d87); r_esp += 4; return;
}

void f_004c5730(void) /* ?EnsureLinked@CAtlStringMgrStaticInitializer@ATLImplementationDetails@ATL@@QAEPAXXZ_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004c5730);
    /* 004c5730: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004c5731: mov ebp, esp */ r_ebp = r_esp;
    /* 004c5733: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c5734: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004c5737: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004c573a: mov esp, ebp */ r_esp = r_ebp;
    /* 004c573c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c573d: ret  */ FN_RET(0x004c5730); r_esp += 4; return;
}

void f_004c5740(void) /* ??1CComCriticalSection@ATL@@QAE@XZ_6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004c5740);
    /* 004c5740: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004c5741: mov ebp, esp */ r_ebp = r_esp;
    /* 004c5743: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c5744: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004c5747: mov esp, ebp */ r_esp = r_ebp;
    /* 004c5749: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c574a: ret  */ FN_RET(0x004c5740); r_esp += 4; return;
}

void f_004c6af0(void) /* unknown_libname_759 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004c6af0);
    /* 004c6af0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004c6af1: mov ebp, esp */ r_ebp = r_esp;
    /* 004c6af3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c6af4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004c6af7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c6af9: mov esp, ebp */ r_esp = r_ebp;
    /* 004c6afb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c6afc: ret  */ FN_RET(0x004c6af0); r_esp += 4; return;
}

void f_004c6b00(void) /* unknown_libname_760 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004c6b00);
    /* 004c6b00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004c6b01: mov ebp, esp */ r_ebp = r_esp;
    /* 004c6b03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c6b04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004c6b07: mov esp, ebp */ r_esp = r_ebp;
    /* 004c6b09: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c6b0a: ret 4 */ FN_RET(0x004c6b00); r_esp += 8; return;
}

void f_004c6b10(void) /* ?SignalTimerFired@CBaseRenderer@@QAEXXZ */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004c6b10);
    /* 004c6b10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004c6b11: mov ebp, esp */ r_ebp = r_esp;
    /* 004c6b13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c6b14: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004c6b17: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004c6b1a: mov dword ptr [eax + 0x68], 0 */ W32((u32)(r_eax+0x68u), 0x0u);
    /* 004c6b21: mov esp, ebp */ r_esp = r_ebp;
    /* 004c6b23: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c6b24: ret  */ FN_RET(0x004c6b10); r_esp += 4; return;
}

void f_004c6df0(void) /* ?OnGetFont@CMFCCaptionBar@@IAEPAUHFONT__@@XZ */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004c6df0);
    /* 004c6df0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004c6df1: mov ebp, esp */ r_ebp = r_esp;
    /* 004c6df3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c6df4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004c6df7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004c6dfa: mov eax, dword ptr [eax + 0x408] */ r_eax = R32((u32)(r_eax+0x408u));
    /* 004c6e00: mov esp, ebp */ r_esp = r_ebp;
    /* 004c6e02: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c6e03: ret  */ FN_RET(0x004c6df0); r_esp += 4; return;
}

void f_004c7010(void) /* ?GetQueueLength@SchedulerProxy@details@Concurrency@@QAEIXZ */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004c7010);
    /* 004c7010: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004c7011: mov ebp, esp */ r_ebp = r_esp;
    /* 004c7013: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c7014: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004c7017: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004c701a: mov eax, dword ptr [eax + 0x78] */ r_eax = R32((u32)(r_eax+0x78u));
    /* 004c701d: mov esp, ebp */ r_esp = r_ebp;
    /* 004c701f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c7020: ret  */ FN_RET(0x004c7010); r_esp += 4; return;
}

void f_004c7030(void) /* ?SetQueueLength@SchedulerProxy@details@Concurrency@@QAEXI@Z */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004c7030);
    /* 004c7030: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004c7031: mov ebp, esp */ r_ebp = r_esp;
    /* 004c7033: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c7034: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004c7037: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004c703a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004c703d: mov dword ptr [eax + 0x78], ecx */ W32((u32)(r_eax+0x78u), r_ecx);
    /* 004c7040: mov esp, ebp */ r_esp = r_ebp;
    /* 004c7042: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c7043: ret 4 */ FN_RET(0x004c7030); r_esp += 8; return;
}

void f_004c7050(void) /* ?GetExecutingContext@VirtualProcessor@details@Concurrency@@QAEPAUIExecutionContext@3@XZ */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004c7050);
    /* 004c7050: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004c7051: mov ebp, esp */ r_ebp = r_esp;
    /* 004c7053: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c7054: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004c7057: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004c705a: mov eax, dword ptr [eax + 0x7c] */ r_eax = R32((u32)(r_eax+0x7cu));
    /* 004c705d: mov esp, ebp */ r_esp = r_ebp;
    /* 004c705f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c7060: ret  */ FN_RET(0x004c7050); r_esp += 4; return;
}

void f_004c7070(void) /* ?SetIndirectAlias@ContextBase@details@Concurrency@@QAEXPAV_TaskCollection@23@@Z */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004c7070);
    /* 004c7070: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004c7071: mov ebp, esp */ r_ebp = r_esp;
    /* 004c7073: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c7074: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004c7077: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004c707a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004c707d: mov dword ptr [eax + 0x7c], ecx */ W32((u32)(r_eax+0x7cu), r_ecx);
    /* 004c7080: mov esp, ebp */ r_esp = r_ebp;
    /* 004c7082: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c7083: ret 4 */ FN_RET(0x004c7070); r_esp += 8; return;
}

void f_004c70d0(void) /* ?GetExecutionResourceId@VirtualProcessor@details@Concurrency@@QBEIXZ_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004c70d0);
    /* 004c70d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004c70d1: mov ebp, esp */ r_ebp = r_esp;
    /* 004c70d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c70d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004c70d7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004c70da: mov eax, dword ptr [eax + 0x8c] */ r_eax = R32((u32)(r_eax+0x8cu));
    /* 004c70e0: mov esp, ebp */ r_esp = r_ebp;
    /* 004c70e2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c70e3: ret  */ FN_RET(0x004c70d0); r_esp += 4; return;
}

void f_004c76c0(void) /* ??1CAtlWinModule@ATL@@QAE@XZ_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004c76c0);
    /* 004c76c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004c76c1: mov ebp, esp */ r_ebp = r_esp;
    /* 004c76c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c76c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004c76c7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004c76ca: call 0x4c7360 */ r_esp -= 4; W32(r_esp, 0x4c76cfu); f_004c7360();
    /* 004c76cf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004c76d2: call 0x4c76e0 */ r_esp -= 4; W32(r_esp, 0x4c76d7u); f_004c76e0();
    /* 004c76d7: mov esp, ebp */ r_esp = r_ebp;
    /* 004c76d9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c76da: ret  */ FN_RET(0x004c76c0); r_esp += 4; return;
}

void f_004c79b0(void) /* unknown_libname_516 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004c79b0);
    /* 004c79b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004c79b1: mov ebp, esp */ r_ebp = r_esp;
    /* 004c79b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c79b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004c79b7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004c79ba: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004c79bd: mov dword ptr [eax + 0x94], ecx */ W32((u32)(r_eax+0x94u), r_ecx);
    /* 004c79c3: mov esp, ebp */ r_esp = r_ebp;
    /* 004c79c5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c79c6: ret 4 */ FN_RET(0x004c79b0); r_esp += 8; return;
}

void f_004c8fbe(void) /* _WinMain@16_8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004c8fbe);
    /* 004c8fbe: jmp 0x4c914c */ f_004c914c(); return;
}

void f_004c901f(void) /* _WinMain@16_9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004c901f);
    /* 004c901f: jmp 0x4c914c */ f_004c914c(); return;
}

void f_004c9041(void) /* _WinMain@16_10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004c9041);
    /* 004c9041: jmp 0x4c914c */ f_004c914c(); return;
}

void f_004c9078(void) /* _WinMain@16_11 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004c9078);
    /* 004c9078: jmp 0x4c914c */ f_004c914c(); return;
}

void f_004c909a(void) /* _WinMain@16_12 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004c909a);
    /* 004c909a: jmp 0x4c914c */ f_004c914c(); return;
}

void f_004c909f(void) /* _WinMain@16_13 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004c909f);
    /* 004c909f: jmp 0x4c912f */ f_004c912f(); return;
}

void f_004c912f(void) /* _WinMain@16_13_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004c912f);
    /* 004c912f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 004c9131: jne 0x4c914a */ if (!fZ) goto L_004c914a;
L_004c9133:; BB(0x004c9133);
    /* 004c9133: push 0x53f */ { u32 v = 0x53fu; r_esp -= 4; W32(r_esp, v); }
    /* 004c9138: push 0x6bf384 */ { u32 v = 0x6bf384u; r_esp -= 4; W32(r_esp, v); }
    /* 004c913d: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 004c9142: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4c9147u); f_005e9f20();
    /* 004c9147: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004c914a:; BB(0x004c914a);
    /* 004c914a: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004c914c: mov esp, ebp */ r_esp = r_ebp;
    /* 004c914e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c914f: ret 4 */ FN_RET(0x004c912f); r_esp += 8; return;
}

void f_004c914c(void) /* _WinMain@16_8_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004c914c);
    /* 004c914c: mov esp, ebp */ r_esp = r_ebp;
    /* 004c914e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c914f: ret 4 */ FN_RET(0x004c914c); r_esp += 8; return;
}

void f_004cd8a1(void) /* _WinMain@16_14_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004cd8a1);
    goto L_004cd8a1;
L_004cd684:; BB(0x004cd684);
    /* 004cd684: mov ax, word ptr [ebp - 0x10] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff0u))) & 0xffffu);
    /* 004cd688: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004cd68c: mov word ptr [ebp - 0x10], ax */ W16((u32)(r_ebp+0xfffffff0u), (u16)r_eax);
    /* 004cd690: movsx esi, word ptr [ebp - 0x10] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004cd694: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004cd69a: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4cd69fu); f_0047f950();
    /* 004cd69f: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004cd6a1: jg 0x4cea2e */ if ((!fZ&&fS==fO)) goto L_004cea2e;
L_004cd6a7:; BB(0x004cd6a7);
    /* 004cd6a7: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004cd6ab: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004cd6ae: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004cd6b1: add ecx, dword ptr [edx + 0x428] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x428u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004cd6b7: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004cd6bb: mov cx, word ptr [ecx + eax*2 - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0xfffffffcu))) & 0xffffu);
    /* 004cd6c0: mov word ptr [ebp - 8], cx */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_ecx);
    /* 004cd6c4: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004cd6c8: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004cd6cb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004cd6ce: add edx, dword ptr [eax + 0x428] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x428u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004cd6d4: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004cd6d8: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004cd6dc: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004cd6df: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 004cd6e2: add eax, dword ptr [esi + 0x428] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x428u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004cd6e8: movsx esi, word ptr [ebp - 0x10] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004cd6ec: mov cx, word ptr [edx + ecx*2 - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0xfffffffcu))) & 0xffffu);
    /* 004cd6f1: mov word ptr [eax + esi*2 - 4], cx */ W16((u32)(r_eax+r_esi*2+0xfffffffcu), (u16)r_ecx);
    /* 004cd6f6: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004cd6fa: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004cd6fd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004cd700: add edx, dword ptr [eax + 0x428] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x428u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004cd706: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004cd70a: mov ax, word ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 004cd70e: mov word ptr [edx + ecx*2 - 4], ax */ W16((u32)(r_edx+r_ecx*2+0xfffffffcu), (u16)r_eax);
    /* 004cd713: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004cd716: mov edx, dword ptr [ecx + 0x428] */ r_edx = R32((u32)(r_ecx+0x428u));
    /* 004cd71c: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004cd720: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004cd723: lea ecx, [edx + eax + 0x70] */ r_ecx = (u32)(r_edx+r_eax+0x70u);
    /* 004cd727: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004cd72b: mov ax, word ptr [ecx + edx*2 - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ecx+r_edx*2+0xfffffffcu))) & 0xffffu);
    /* 004cd730: mov word ptr [ebp - 8], ax */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_eax);
    /* 004cd734: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004cd737: mov edx, dword ptr [ecx + 0x428] */ r_edx = R32((u32)(r_ecx+0x428u));
    /* 004cd73d: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004cd741: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004cd744: lea ecx, [edx + eax + 0x70] */ r_ecx = (u32)(r_edx+r_eax+0x70u);
    /* 004cd748: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004cd74c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004cd74f: mov eax, dword ptr [eax + 0x428] */ r_eax = R32((u32)(r_eax+0x428u));
    /* 004cd755: movsx esi, word ptr [ebp + 8] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004cd759: imul esi, esi, 0xe */ { i64 t = (i64)(i32)r_esi * (i64)(i32)0xeu; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004cd75c: lea eax, [eax + esi + 0x70] */ r_eax = (u32)(r_eax+r_esi+0x70u);
    /* 004cd760: movsx esi, word ptr [ebp - 0x10] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004cd764: mov cx, word ptr [ecx + edx*2 - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ecx+r_edx*2+0xfffffffcu))) & 0xffffu);
    /* 004cd769: mov word ptr [eax + esi*2 - 4], cx */ W16((u32)(r_eax+r_esi*2+0xfffffffcu), (u16)r_ecx);
    /* 004cd76e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004cd771: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004cd777: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004cd77b: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004cd77e: lea edx, [eax + ecx + 0x70] */ r_edx = (u32)(r_eax+r_ecx+0x70u);
    /* 004cd782: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004cd786: mov cx, word ptr [ebp - 8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 004cd78a: mov word ptr [edx + eax*2 - 4], cx */ W16((u32)(r_edx+r_eax*2+0xfffffffcu), (u16)r_ecx);
    /* 004cd78f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004cd792: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004cd798: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004cd79c: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004cd79f: lea edx, [eax + ecx + 0xe0] */ r_edx = (u32)(r_eax+r_ecx+0xe0u);
    /* 004cd7a6: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004cd7aa: mov cx, word ptr [edx + eax*2 - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2+0xfffffffcu))) & 0xffffu);
    /* 004cd7af: mov word ptr [ebp - 8], cx */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_ecx);
    /* 004cd7b3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004cd7b6: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004cd7bc: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004cd7c0: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004cd7c3: lea edx, [eax + ecx + 0xe0] */ r_edx = (u32)(r_eax+r_ecx+0xe0u);
    /* 004cd7ca: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004cd7ce: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004cd7d1: mov ecx, dword ptr [ecx + 0x428] */ r_ecx = R32((u32)(r_ecx+0x428u));
    /* 004cd7d7: movsx esi, word ptr [ebp + 8] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004cd7db: imul esi, esi, 0xe */ { i64 t = (i64)(i32)r_esi * (i64)(i32)0xeu; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004cd7de: lea ecx, [ecx + esi + 0xe0] */ r_ecx = (u32)(r_ecx+r_esi+0xe0u);
    /* 004cd7e5: movsx esi, word ptr [ebp - 0x10] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004cd7e9: mov dx, word ptr [edx + eax*2 - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2+0xfffffffcu))) & 0xffffu);
    /* 004cd7ee: mov word ptr [ecx + esi*2 - 4], dx */ W16((u32)(r_ecx+r_esi*2+0xfffffffcu), (u16)r_edx);
    /* 004cd7f3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004cd7f6: mov ecx, dword ptr [eax + 0x428] */ r_ecx = R32((u32)(r_eax+0x428u));
    /* 004cd7fc: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004cd800: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004cd803: lea eax, [ecx + edx + 0xe0] */ r_eax = (u32)(r_ecx+r_edx+0xe0u);
    /* 004cd80a: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004cd80e: mov dx, word ptr [ebp - 8] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 004cd812: mov word ptr [eax + ecx*2 - 4], dx */ W16((u32)(r_eax+r_ecx*2+0xfffffffcu), (u16)r_edx);
    /* 004cd817: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004cd81a: mov ecx, dword ptr [eax + 0x428] */ r_ecx = R32((u32)(r_eax+0x428u));
    /* 004cd820: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004cd824: imul edx, edx, 7 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x7u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004cd827: lea eax, [ecx + edx + 0x150] */ r_eax = (u32)(r_ecx+r_edx+0x150u);
    /* 004cd82e: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004cd832: mov dl, byte ptr [eax + ecx - 2] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+r_ecx+0xfffffffeu))) & 0xffu);
    /* 004cd836: mov byte ptr [ebp - 1], dl */ W8((u32)(r_ebp+0xffffffffu), (u8)r_edx);
    /* 004cd839: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004cd83c: mov ecx, dword ptr [eax + 0x428] */ r_ecx = R32((u32)(r_eax+0x428u));
    /* 004cd842: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004cd846: imul edx, edx, 7 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x7u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004cd849: lea eax, [ecx + edx + 0x150] */ r_eax = (u32)(r_ecx+r_edx+0x150u);
    /* 004cd850: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004cd854: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004cd857: mov edx, dword ptr [edx + 0x428] */ r_edx = R32((u32)(r_edx+0x428u));
    /* 004cd85d: movsx esi, word ptr [ebp + 8] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004cd861: imul esi, esi, 7 */ { i64 t = (i64)(i32)r_esi * (i64)(i32)0x7u; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004cd864: lea edx, [edx + esi + 0x150] */ r_edx = (u32)(r_edx+r_esi+0x150u);
    /* 004cd86b: movsx esi, word ptr [ebp - 0x10] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004cd86f: mov al, byte ptr [eax + ecx - 2] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+r_ecx+0xfffffffeu))) & 0xffu);
    /* 004cd873: mov byte ptr [edx + esi - 2], al */ W8((u32)(r_edx+r_esi+0xfffffffeu), (u8)r_eax);
    /* 004cd877: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004cd87a: mov edx, dword ptr [ecx + 0x428] */ r_edx = R32((u32)(r_ecx+0x428u));
    /* 004cd880: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004cd884: imul eax, eax, 7 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x7u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004cd887: lea ecx, [edx + eax + 0x150] */ r_ecx = (u32)(r_edx+r_eax+0x150u);
    /* 004cd88e: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004cd892: mov al, byte ptr [ebp - 1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffffu))) & 0xffu);
    /* 004cd895: mov byte ptr [ecx + edx - 2], al */ W8((u32)(r_ecx+r_edx+0xfffffffeu), (u8)r_eax);
    /* 004cd899: mov word ptr [ebp - 0xc], 0 */ W16((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 004cd89f: jmp 0x4cd8ad */ goto L_004cd8ad;
L_004cd8a1:; BB(0x004cd8a1);
    /* 004cd8a1: mov cx, word ptr [ebp - 0xc] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff4u))) & 0xffffu);
    /* 004cd8a5: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004cd8a9: mov word ptr [ebp - 0xc], cx */ W16((u32)(r_ebp+0xfffffff4u), (u16)r_ecx);
L_004cd8ad:; BB(0x004cd8ad);
    /* 004cd8ad: movsx edx, word ptr [ebp - 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 004cd8b1: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004cd8b4: jge 0x4cd965 */ if ((fS==fO)) goto L_004cd965;
L_004cd8ba:; BB(0x004cd8ba);
    /* 004cd8ba: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004cd8bd: mov ecx, dword ptr [eax + 0x428] */ r_ecx = R32((u32)(r_eax+0x428u));
    /* 004cd8c3: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004cd8c7: imul edx, edx, 0x2a */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x2au; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004cd8ca: lea eax, [ecx + edx + 0x188] */ r_eax = (u32)(r_ecx+r_edx+0x188u);
    /* 004cd8d1: movsx ecx, word ptr [ebp - 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 004cd8d5: imul ecx, ecx, 7 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x7u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004cd8d8: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004cd8da: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004cd8de: mov al, byte ptr [eax + edx - 2] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+r_edx+0xfffffffeu))) & 0xffu);
    /* 004cd8e2: mov byte ptr [ebp - 1], al */ W8((u32)(r_ebp+0xffffffffu), (u8)r_eax);
    /* 004cd8e5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004cd8e8: mov edx, dword ptr [ecx + 0x428] */ r_edx = R32((u32)(r_ecx+0x428u));
    /* 004cd8ee: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004cd8f2: imul eax, eax, 0x2a */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x2au; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004cd8f5: lea ecx, [edx + eax + 0x188] */ r_ecx = (u32)(r_edx+r_eax+0x188u);
    /* 004cd8fc: movsx edx, word ptr [ebp - 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 004cd900: imul edx, edx, 7 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x7u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004cd903: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004cd905: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004cd909: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004cd90c: mov edx, dword ptr [edx + 0x428] */ r_edx = R32((u32)(r_edx+0x428u));
    /* 004cd912: movsx esi, word ptr [ebp + 8] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004cd916: imul esi, esi, 0x2a */ { i64 t = (i64)(i32)r_esi * (i64)(i32)0x2au; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004cd919: lea edx, [edx + esi + 0x188] */ r_edx = (u32)(r_edx+r_esi+0x188u);
    /* 004cd920: movsx esi, word ptr [ebp - 0xc] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 004cd924: imul esi, esi, 7 */ { i64 t = (i64)(i32)r_esi * (i64)(i32)0x7u; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004cd927: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004cd929: movsx esi, word ptr [ebp - 0x10] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004cd92d: mov al, byte ptr [ecx + eax - 2] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx+r_eax+0xfffffffeu))) & 0xffu);
    /* 004cd931: mov byte ptr [edx + esi - 2], al */ W8((u32)(r_edx+r_esi+0xfffffffeu), (u8)r_eax);
    /* 004cd935: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004cd938: mov edx, dword ptr [ecx + 0x428] */ r_edx = R32((u32)(r_ecx+0x428u));
    /* 004cd93e: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004cd942: imul eax, eax, 0x2a */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x2au; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004cd945: lea ecx, [edx + eax + 0x188] */ r_ecx = (u32)(r_edx+r_eax+0x188u);
    /* 004cd94c: movsx edx, word ptr [ebp - 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 004cd950: imul edx, edx, 7 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x7u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004cd953: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004cd955: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004cd959: mov dl, byte ptr [ebp - 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffffu))) & 0xffu);
    /* 004cd95c: mov byte ptr [ecx + eax - 2], dl */ W8((u32)(r_ecx+r_eax+0xfffffffeu), (u8)r_edx);
    /* 004cd960: jmp 0x4cd8a1 */ goto L_004cd8a1;
L_004cd965:; BB(0x004cd965);
    /* 004cd965: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004cd968: mov ecx, dword ptr [eax + 0x428] */ r_ecx = R32((u32)(r_eax+0x428u));
    /* 004cd96e: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004cd972: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004cd975: lea eax, [ecx + edx + 0x2d8] */ r_eax = (u32)(r_ecx+r_edx+0x2d8u);
    /* 004cd97c: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004cd980: mov dx, word ptr [eax + ecx*2 - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_eax+r_ecx*2+0xfffffffcu))) & 0xffffu);
    /* 004cd985: mov word ptr [ebp - 8], dx */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_edx);
    /* 004cd989: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004cd98c: mov ecx, dword ptr [eax + 0x428] */ r_ecx = R32((u32)(r_eax+0x428u));
    /* 004cd992: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004cd996: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004cd999: lea eax, [ecx + edx + 0x2d8] */ r_eax = (u32)(r_ecx+r_edx+0x2d8u);
    /* 004cd9a0: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004cd9a4: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004cd9a7: mov edx, dword ptr [edx + 0x428] */ r_edx = R32((u32)(r_edx+0x428u));
    /* 004cd9ad: movsx esi, word ptr [ebp + 8] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004cd9b1: imul esi, esi, 0xe */ { i64 t = (i64)(i32)r_esi * (i64)(i32)0xeu; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004cd9b4: lea edx, [edx + esi + 0x2d8] */ r_edx = (u32)(r_edx+r_esi+0x2d8u);
    /* 004cd9bb: movsx esi, word ptr [ebp - 0x10] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004cd9bf: mov ax, word ptr [eax + ecx*2 - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+r_ecx*2+0xfffffffcu))) & 0xffffu);
    /* 004cd9c4: mov word ptr [edx + esi*2 - 4], ax */ W16((u32)(r_edx+r_esi*2+0xfffffffcu), (u16)r_eax);
    /* 004cd9c9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004cd9cc: mov edx, dword ptr [ecx + 0x428] */ r_edx = R32((u32)(r_ecx+0x428u));
    /* 004cd9d2: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004cd9d6: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004cd9d9: lea ecx, [edx + eax + 0x2d8] */ r_ecx = (u32)(r_edx+r_eax+0x2d8u);
    /* 004cd9e0: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004cd9e4: mov ax, word ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 004cd9e8: mov word ptr [ecx + edx*2 - 4], ax */ W16((u32)(r_ecx+r_edx*2+0xfffffffcu), (u16)r_eax);
    /* 004cd9ed: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004cd9f0: mov edx, dword ptr [ecx + 0x428] */ r_edx = R32((u32)(r_ecx+0x428u));
    /* 004cd9f6: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004cd9fa: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004cd9fd: lea ecx, [edx + eax + 0x348] */ r_ecx = (u32)(r_edx+r_eax+0x348u);
    /* 004cda04: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004cda08: mov ax, word ptr [ecx + edx*2 - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ecx+r_edx*2+0xfffffffcu))) & 0xffffu);
    /* 004cda0d: mov word ptr [ebp - 8], ax */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_eax);
    /* 004cda11: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004cda14: mov edx, dword ptr [ecx + 0x428] */ r_edx = R32((u32)(r_ecx+0x428u));
    /* 004cda1a: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004cda1e: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004cda21: lea ecx, [edx + eax + 0x348] */ r_ecx = (u32)(r_edx+r_eax+0x348u);
    /* 004cda28: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004cda2c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004cda2f: mov eax, dword ptr [eax + 0x428] */ r_eax = R32((u32)(r_eax+0x428u));
    /* 004cda35: movsx esi, word ptr [ebp + 8] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004cda39: imul esi, esi, 0xe */ { i64 t = (i64)(i32)r_esi * (i64)(i32)0xeu; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004cda3c: lea eax, [eax + esi + 0x348] */ r_eax = (u32)(r_eax+r_esi+0x348u);
    /* 004cda43: movsx esi, word ptr [ebp - 0x10] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004cda47: mov cx, word ptr [ecx + edx*2 - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ecx+r_edx*2+0xfffffffcu))) & 0xffffu);
    /* 004cda4c: mov word ptr [eax + esi*2 - 4], cx */ W16((u32)(r_eax+r_esi*2+0xfffffffcu), (u16)r_ecx);
    /* 004cda51: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004cda54: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004cda5a: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004cda5e: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004cda61: lea edx, [eax + ecx + 0x348] */ r_edx = (u32)(r_eax+r_ecx+0x348u);
    /* 004cda68: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004cda6c: mov cx, word ptr [ebp - 8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 004cda70: mov word ptr [edx + eax*2 - 4], cx */ W16((u32)(r_edx+r_eax*2+0xfffffffcu), (u16)r_ecx);
    /* 004cda75: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004cda78: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004cda7e: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004cda82: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004cda85: lea edx, [eax + ecx + 0x3b8] */ r_edx = (u32)(r_eax+r_ecx+0x3b8u);
    /* 004cda8c: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004cda90: mov cx, word ptr [edx + eax*2 - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2+0xfffffffcu))) & 0xffffu);
    /* 004cda95: mov word ptr [ebp - 8], cx */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_ecx);
    /* 004cda99: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004cda9c: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004cdaa2: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004cdaa6: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004cdaa9: lea edx, [eax + ecx + 0x3b8] */ r_edx = (u32)(r_eax+r_ecx+0x3b8u);
    /* 004cdab0: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004cdab4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004cdab7: mov ecx, dword ptr [ecx + 0x428] */ r_ecx = R32((u32)(r_ecx+0x428u));
    /* 004cdabd: movsx esi, word ptr [ebp + 8] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004cdac1: imul esi, esi, 0xe */ { i64 t = (i64)(i32)r_esi * (i64)(i32)0xeu; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004cdac4: lea ecx, [ecx + esi + 0x3b8] */ r_ecx = (u32)(r_ecx+r_esi+0x3b8u);
    /* 004cdacb: movsx esi, word ptr [ebp - 0x10] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004cdacf: mov dx, word ptr [edx + eax*2 - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2+0xfffffffcu))) & 0xffffu);
    /* 004cdad4: mov word ptr [ecx + esi*2 - 4], dx */ W16((u32)(r_ecx+r_esi*2+0xfffffffcu), (u16)r_edx);
    /* 004cdad9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004cdadc: mov ecx, dword ptr [eax + 0x428] */ r_ecx = R32((u32)(r_eax+0x428u));
    /* 004cdae2: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004cdae6: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004cdae9: lea eax, [ecx + edx + 0x3b8] */ r_eax = (u32)(r_ecx+r_edx+0x3b8u);
    /* 004cdaf0: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004cdaf4: mov dx, word ptr [ebp - 8] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 004cdaf8: mov word ptr [eax + ecx*2 - 4], dx */ W16((u32)(r_eax+r_ecx*2+0xfffffffcu), (u16)r_edx);
    /* 004cdafd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004cdb00: mov ecx, dword ptr [eax + 0x428] */ r_ecx = R32((u32)(r_eax+0x428u));
    /* 004cdb06: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004cdb0a: imul edx, edx, 7 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x7u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004cdb0d: lea eax, [ecx + edx + 0x428] */ r_eax = (u32)(r_ecx+r_edx+0x428u);
    /* 004cdb14: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004cdb18: mov dl, byte ptr [eax + ecx - 2] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+r_ecx+0xfffffffeu))) & 0xffu);
    /* 004cdb1c: mov byte ptr [ebp - 1], dl */ W8((u32)(r_ebp+0xffffffffu), (u8)r_edx);
    /* 004cdb1f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004cdb22: mov ecx, dword ptr [eax + 0x428] */ r_ecx = R32((u32)(r_eax+0x428u));
    /* 004cdb28: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004cdb2c: imul edx, edx, 7 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x7u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004cdb2f: lea eax, [ecx + edx + 0x428] */ r_eax = (u32)(r_ecx+r_edx+0x428u);
    /* 004cdb36: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004cdb3a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004cdb3d: mov edx, dword ptr [edx + 0x428] */ r_edx = R32((u32)(r_edx+0x428u));
    /* 004cdb43: movsx esi, word ptr [ebp + 8] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004cdb47: imul esi, esi, 7 */ { i64 t = (i64)(i32)r_esi * (i64)(i32)0x7u; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004cdb4a: lea edx, [edx + esi + 0x428] */ r_edx = (u32)(r_edx+r_esi+0x428u);
    /* 004cdb51: movsx esi, word ptr [ebp - 0x10] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004cdb55: mov al, byte ptr [eax + ecx - 2] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+r_ecx+0xfffffffeu))) & 0xffu);
    /* 004cdb59: mov byte ptr [edx + esi - 2], al */ W8((u32)(r_edx+r_esi+0xfffffffeu), (u8)r_eax);
    /* 004cdb5d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004cdb60: mov edx, dword ptr [ecx + 0x428] */ r_edx = R32((u32)(r_ecx+0x428u));
    /* 004cdb66: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004cdb6a: imul eax, eax, 7 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x7u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004cdb6d: lea ecx, [edx + eax + 0x428] */ r_ecx = (u32)(r_edx+r_eax+0x428u);
    /* 004cdb74: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004cdb78: mov al, byte ptr [ebp - 1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffffu))) & 0xffu);
    /* 004cdb7b: mov byte ptr [ecx + edx - 2], al */ W8((u32)(r_ecx+r_edx+0xfffffffeu), (u8)r_eax);
    /* 004cdb7f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004cdb82: mov edx, dword ptr [ecx + 0x428] */ r_edx = R32((u32)(r_ecx+0x428u));
    /* 004cdb88: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004cdb8c: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004cdb8f: lea ecx, [edx + eax + 0x460] */ r_ecx = (u32)(r_edx+r_eax+0x460u);
    /* 004cdb96: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004cdb9a: mov ax, word ptr [ecx + edx*2 - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ecx+r_edx*2+0xfffffffcu))) & 0xffffu);
    /* 004cdb9f: mov word ptr [ebp - 8], ax */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_eax);
    /* 004cdba3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004cdba6: mov edx, dword ptr [ecx + 0x428] */ r_edx = R32((u32)(r_ecx+0x428u));
    /* 004cdbac: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004cdbb0: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004cdbb3: lea ecx, [edx + eax + 0x460] */ r_ecx = (u32)(r_edx+r_eax+0x460u);
    /* 004cdbba: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004cdbbe: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004cdbc1: mov eax, dword ptr [eax + 0x428] */ r_eax = R32((u32)(r_eax+0x428u));
    /* 004cdbc7: movsx esi, word ptr [ebp + 8] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004cdbcb: imul esi, esi, 0xe */ { i64 t = (i64)(i32)r_esi * (i64)(i32)0xeu; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004cdbce: lea eax, [eax + esi + 0x460] */ r_eax = (u32)(r_eax+r_esi+0x460u);
    /* 004cdbd5: movsx esi, word ptr [ebp - 0x10] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004cdbd9: mov cx, word ptr [ecx + edx*2 - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ecx+r_edx*2+0xfffffffcu))) & 0xffffu);
    /* 004cdbde: mov word ptr [eax + esi*2 - 4], cx */ W16((u32)(r_eax+r_esi*2+0xfffffffcu), (u16)r_ecx);
    /* 004cdbe3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004cdbe6: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004cdbec: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004cdbf0: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004cdbf3: lea edx, [eax + ecx + 0x460] */ r_edx = (u32)(r_eax+r_ecx+0x460u);
    /* 004cdbfa: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004cdbfe: mov cx, word ptr [ebp - 8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 004cdc02: mov word ptr [edx + eax*2 - 4], cx */ W16((u32)(r_edx+r_eax*2+0xfffffffcu), (u16)r_ecx);
    /* 004cdc07: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004cdc0a: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004cdc10: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004cdc14: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004cdc17: lea edx, [eax + ecx + 0x4d0] */ r_edx = (u32)(r_eax+r_ecx+0x4d0u);
    /* 004cdc1e: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004cdc22: mov cx, word ptr [edx + eax*2 - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2+0xfffffffcu))) & 0xffffu);
    /* 004cdc27: mov word ptr [ebp - 8], cx */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_ecx);
    /* 004cdc2b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004cdc2e: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004cdc34: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004cdc38: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004cdc3b: lea edx, [eax + ecx + 0x4d0] */ r_edx = (u32)(r_eax+r_ecx+0x4d0u);
    /* 004cdc42: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004cdc46: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004cdc49: mov ecx, dword ptr [ecx + 0x428] */ r_ecx = R32((u32)(r_ecx+0x428u));
    /* 004cdc4f: movsx esi, word ptr [ebp + 8] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004cdc53: imul esi, esi, 0xe */ { i64 t = (i64)(i32)r_esi * (i64)(i32)0xeu; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004cdc56: lea ecx, [ecx + esi + 0x4d0] */ r_ecx = (u32)(r_ecx+r_esi+0x4d0u);
    /* 004cdc5d: movsx esi, word ptr [ebp - 0x10] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004cdc61: mov dx, word ptr [edx + eax*2 - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2+0xfffffffcu))) & 0xffffu);
    /* 004cdc66: mov word ptr [ecx + esi*2 - 4], dx */ W16((u32)(r_ecx+r_esi*2+0xfffffffcu), (u16)r_edx);
    /* 004cdc6b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004cdc6e: mov ecx, dword ptr [eax + 0x428] */ r_ecx = R32((u32)(r_eax+0x428u));
    /* 004cdc74: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004cdc78: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004cdc7b: lea eax, [ecx + edx + 0x4d0] */ r_eax = (u32)(r_ecx+r_edx+0x4d0u);
    /* 004cdc82: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004cdc86: mov dx, word ptr [ebp - 8] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 004cdc8a: mov word ptr [eax + ecx*2 - 4], dx */ W16((u32)(r_eax+r_ecx*2+0xfffffffcu), (u16)r_edx);
    /* 004cdc8f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004cdc92: mov ecx, dword ptr [eax + 0x428] */ r_ecx = R32((u32)(r_eax+0x428u));
    /* 004cdc98: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004cdc9c: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004cdc9f: lea eax, [ecx + edx + 0x540] */ r_eax = (u32)(r_ecx+r_edx+0x540u);
    /* 004cdca6: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004cdcaa: mov dx, word ptr [eax + ecx*2 - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_eax+r_ecx*2+0xfffffffcu))) & 0xffffu);
    /* 004cdcaf: mov word ptr [ebp - 8], dx */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_edx);
    /* 004cdcb3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004cdcb6: mov ecx, dword ptr [eax + 0x428] */ r_ecx = R32((u32)(r_eax+0x428u));
    /* 004cdcbc: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004cdcc0: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004cdcc3: lea eax, [ecx + edx + 0x540] */ r_eax = (u32)(r_ecx+r_edx+0x540u);
    /* 004cdcca: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004cdcce: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004cdcd1: mov edx, dword ptr [edx + 0x428] */ r_edx = R32((u32)(r_edx+0x428u));
    /* 004cdcd7: movsx esi, word ptr [ebp + 8] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004cdcdb: imul esi, esi, 0xe */ { i64 t = (i64)(i32)r_esi * (i64)(i32)0xeu; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004cdcde: lea edx, [edx + esi + 0x540] */ r_edx = (u32)(r_edx+r_esi+0x540u);
    /* 004cdce5: movsx esi, word ptr [ebp - 0x10] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004cdce9: mov ax, word ptr [eax + ecx*2 - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+r_ecx*2+0xfffffffcu))) & 0xffffu);
    /* 004cdcee: mov word ptr [edx + esi*2 - 4], ax */ W16((u32)(r_edx+r_esi*2+0xfffffffcu), (u16)r_eax);
    /* 004cdcf3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004cdcf6: mov edx, dword ptr [ecx + 0x428] */ r_edx = R32((u32)(r_ecx+0x428u));
    /* 004cdcfc: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004cdd00: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004cdd03: lea ecx, [edx + eax + 0x540] */ r_ecx = (u32)(r_edx+r_eax+0x540u);
    /* 004cdd0a: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004cdd0e: mov ax, word ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 004cdd12: mov word ptr [ecx + edx*2 - 4], ax */ W16((u32)(r_ecx+r_edx*2+0xfffffffcu), (u16)r_eax);
    /* 004cdd17: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004cdd1a: mov edx, dword ptr [ecx + 0x428] */ r_edx = R32((u32)(r_ecx+0x428u));
    /* 004cdd20: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004cdd24: imul eax, eax, 7 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x7u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004cdd27: lea ecx, [edx + eax + 0x5b0] */ r_ecx = (u32)(r_edx+r_eax+0x5b0u);
    /* 004cdd2e: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004cdd32: mov al, byte ptr [ecx + edx - 2] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx+r_edx+0xfffffffeu))) & 0xffu);
    /* 004cdd36: mov byte ptr [ebp - 1], al */ W8((u32)(r_ebp+0xffffffffu), (u8)r_eax);
    /* 004cdd39: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004cdd3c: mov edx, dword ptr [ecx + 0x428] */ r_edx = R32((u32)(r_ecx+0x428u));
    /* 004cdd42: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004cdd46: imul eax, eax, 7 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x7u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004cdd49: lea ecx, [edx + eax + 0x5b0] */ r_ecx = (u32)(r_edx+r_eax+0x5b0u);
    /* 004cdd50: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004cdd54: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004cdd57: mov eax, dword ptr [eax + 0x428] */ r_eax = R32((u32)(r_eax+0x428u));
    /* 004cdd5d: movsx esi, word ptr [ebp + 8] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004cdd61: imul esi, esi, 7 */ { i64 t = (i64)(i32)r_esi * (i64)(i32)0x7u; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004cdd64: lea eax, [eax + esi + 0x5b0] */ r_eax = (u32)(r_eax+r_esi+0x5b0u);
    /* 004cdd6b: movsx esi, word ptr [ebp - 0x10] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004cdd6f: mov cl, byte ptr [ecx + edx - 2] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ecx+r_edx+0xfffffffeu))) & 0xffu);
    /* 004cdd73: mov byte ptr [eax + esi - 2], cl */ W8((u32)(r_eax+r_esi+0xfffffffeu), (u8)r_ecx);
    /* 004cdd77: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004cdd7a: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004cdd80: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004cdd84: imul ecx, ecx, 7 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x7u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004cdd87: lea edx, [eax + ecx + 0x5b0] */ r_edx = (u32)(r_eax+r_ecx+0x5b0u);
    /* 004cdd8e: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004cdd92: mov cl, byte ptr [ebp - 1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffffu))) & 0xffu);
    /* 004cdd95: mov byte ptr [edx + eax - 2], cl */ W8((u32)(r_edx+r_eax+0xfffffffeu), (u8)r_ecx);
    /* 004cdd99: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004cdd9c: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004cdda2: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004cdda6: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004cdda9: lea edx, [eax + ecx + 0x5e8] */ r_edx = (u32)(r_eax+r_ecx+0x5e8u);
    /* 004cddb0: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004cddb4: mov cx, word ptr [edx + eax*2 - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2+0xfffffffcu))) & 0xffffu);
    /* 004cddb9: mov word ptr [ebp - 8], cx */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_ecx);
    /* 004cddbd: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004cddc0: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004cddc6: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004cddca: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004cddcd: lea edx, [eax + ecx + 0x5e8] */ r_edx = (u32)(r_eax+r_ecx+0x5e8u);
    /* 004cddd4: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004cddd8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004cdddb: mov ecx, dword ptr [ecx + 0x428] */ r_ecx = R32((u32)(r_ecx+0x428u));
    /* 004cdde1: movsx esi, word ptr [ebp + 8] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004cdde5: imul esi, esi, 0xe */ { i64 t = (i64)(i32)r_esi * (i64)(i32)0xeu; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004cdde8: lea ecx, [ecx + esi + 0x5e8] */ r_ecx = (u32)(r_ecx+r_esi+0x5e8u);
    /* 004cddef: movsx esi, word ptr [ebp - 0x10] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004cddf3: mov dx, word ptr [edx + eax*2 - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2+0xfffffffcu))) & 0xffffu);
    /* 004cddf8: mov word ptr [ecx + esi*2 - 4], dx */ W16((u32)(r_ecx+r_esi*2+0xfffffffcu), (u16)r_edx);
    /* 004cddfd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004cde00: mov ecx, dword ptr [eax + 0x428] */ r_ecx = R32((u32)(r_eax+0x428u));
    /* 004cde06: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004cde0a: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004cde0d: lea eax, [ecx + edx + 0x5e8] */ r_eax = (u32)(r_ecx+r_edx+0x5e8u);
    /* 004cde14: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004cde18: mov dx, word ptr [ebp - 8] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 004cde1c: mov word ptr [eax + ecx*2 - 4], dx */ W16((u32)(r_eax+r_ecx*2+0xfffffffcu), (u16)r_edx);
    /* 004cde21: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004cde24: mov ecx, dword ptr [eax + 0x428] */ r_ecx = R32((u32)(r_eax+0x428u));
    /* 004cde2a: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004cde2e: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004cde31: lea eax, [ecx + edx + 0x658] */ r_eax = (u32)(r_ecx+r_edx+0x658u);
    /* 004cde38: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004cde3c: mov dx, word ptr [eax + ecx*2 - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_eax+r_ecx*2+0xfffffffcu))) & 0xffffu);
    /* 004cde41: mov word ptr [ebp - 8], dx */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_edx);
    /* 004cde45: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004cde48: mov ecx, dword ptr [eax + 0x428] */ r_ecx = R32((u32)(r_eax+0x428u));
    /* 004cde4e: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004cde52: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004cde55: lea eax, [ecx + edx + 0x658] */ r_eax = (u32)(r_ecx+r_edx+0x658u);
    /* 004cde5c: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004cde60: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004cde63: mov edx, dword ptr [edx + 0x428] */ r_edx = R32((u32)(r_edx+0x428u));
    /* 004cde69: movsx esi, word ptr [ebp + 8] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004cde6d: imul esi, esi, 0xe */ { i64 t = (i64)(i32)r_esi * (i64)(i32)0xeu; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004cde70: lea edx, [edx + esi + 0x658] */ r_edx = (u32)(r_edx+r_esi+0x658u);
    /* 004cde77: movsx esi, word ptr [ebp - 0x10] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004cde7b: mov ax, word ptr [eax + ecx*2 - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+r_ecx*2+0xfffffffcu))) & 0xffffu);
    /* 004cde80: mov word ptr [edx + esi*2 - 4], ax */ W16((u32)(r_edx+r_esi*2+0xfffffffcu), (u16)r_eax);
    /* 004cde85: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004cde88: mov edx, dword ptr [ecx + 0x428] */ r_edx = R32((u32)(r_ecx+0x428u));
    /* 004cde8e: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004cde92: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004cde95: lea ecx, [edx + eax + 0x658] */ r_ecx = (u32)(r_edx+r_eax+0x658u);
    /* 004cde9c: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004cdea0: mov ax, word ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 004cdea4: mov word ptr [ecx + edx*2 - 4], ax */ W16((u32)(r_ecx+r_edx*2+0xfffffffcu), (u16)r_eax);
    /* 004cdea9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004cdeac: mov edx, dword ptr [ecx + 0x428] */ r_edx = R32((u32)(r_ecx+0x428u));
    /* 004cdeb2: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004cdeb6: imul eax, eax, 7 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x7u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004cdeb9: lea ecx, [edx + eax + 0x6c8] */ r_ecx = (u32)(r_edx+r_eax+0x6c8u);
    /* 004cdec0: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004cdec4: mov al, byte ptr [ecx + edx - 2] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx+r_edx+0xfffffffeu))) & 0xffu);
    /* 004cdec8: mov byte ptr [ebp - 1], al */ W8((u32)(r_ebp+0xffffffffu), (u8)r_eax);
    /* 004cdecb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004cdece: mov edx, dword ptr [ecx + 0x428] */ r_edx = R32((u32)(r_ecx+0x428u));
    /* 004cded4: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004cded8: imul eax, eax, 7 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x7u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004cdedb: lea ecx, [edx + eax + 0x6c8] */ r_ecx = (u32)(r_edx+r_eax+0x6c8u);
    /* 004cdee2: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004cdee6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004cdee9: mov eax, dword ptr [eax + 0x428] */ r_eax = R32((u32)(r_eax+0x428u));
    /* 004cdeef: movsx esi, word ptr [ebp + 8] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004cdef3: imul esi, esi, 7 */ { i64 t = (i64)(i32)r_esi * (i64)(i32)0x7u; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004cdef6: lea eax, [eax + esi + 0x6c8] */ r_eax = (u32)(r_eax+r_esi+0x6c8u);
    /* 004cdefd: movsx esi, word ptr [ebp - 0x10] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004cdf01: mov cl, byte ptr [ecx + edx - 2] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ecx+r_edx+0xfffffffeu))) & 0xffu);
    /* 004cdf05: mov byte ptr [eax + esi - 2], cl */ W8((u32)(r_eax+r_esi+0xfffffffeu), (u8)r_ecx);
    /* 004cdf09: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004cdf0c: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004cdf12: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004cdf16: imul ecx, ecx, 7 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x7u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004cdf19: lea edx, [eax + ecx + 0x6c8] */ r_edx = (u32)(r_eax+r_ecx+0x6c8u);
    /* 004cdf20: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004cdf24: mov cl, byte ptr [ebp - 1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffffu))) & 0xffu);
    /* 004cdf27: mov byte ptr [edx + eax - 2], cl */ W8((u32)(r_edx+r_eax+0xfffffffeu), (u8)r_ecx);
    /* 004cdf2b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004cdf2e: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004cdf34: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004cdf38: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004cdf3b: lea edx, [eax + ecx + 0x818] */ r_edx = (u32)(r_eax+r_ecx+0x818u);
    /* 004cdf42: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004cdf46: mov cx, word ptr [edx + eax*2 - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2+0xfffffffcu))) & 0xffffu);
    /* 004cdf4b: mov word ptr [ebp - 8], cx */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_ecx);
    /* 004cdf4f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004cdf52: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004cdf58: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004cdf5c: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004cdf5f: lea edx, [eax + ecx + 0x818] */ r_edx = (u32)(r_eax+r_ecx+0x818u);
    /* 004cdf66: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004cdf6a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004cdf6d: mov ecx, dword ptr [ecx + 0x428] */ r_ecx = R32((u32)(r_ecx+0x428u));
    /* 004cdf73: movsx esi, word ptr [ebp + 8] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004cdf77: imul esi, esi, 0xe */ { i64 t = (i64)(i32)r_esi * (i64)(i32)0xeu; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004cdf7a: lea ecx, [ecx + esi + 0x818] */ r_ecx = (u32)(r_ecx+r_esi+0x818u);
    /* 004cdf81: movsx esi, word ptr [ebp - 0x10] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004cdf85: mov dx, word ptr [edx + eax*2 - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2+0xfffffffcu))) & 0xffffu);
    /* 004cdf8a: mov word ptr [ecx + esi*2 - 4], dx */ W16((u32)(r_ecx+r_esi*2+0xfffffffcu), (u16)r_edx);
    /* 004cdf8f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004cdf92: mov ecx, dword ptr [eax + 0x428] */ r_ecx = R32((u32)(r_eax+0x428u));
    /* 004cdf98: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004cdf9c: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004cdf9f: lea eax, [ecx + edx + 0x818] */ r_eax = (u32)(r_ecx+r_edx+0x818u);
    /* 004cdfa6: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004cdfaa: mov dx, word ptr [ebp - 8] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 004cdfae: mov word ptr [eax + ecx*2 - 4], dx */ W16((u32)(r_eax+r_ecx*2+0xfffffffcu), (u16)r_edx);
    /* 004cdfb3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004cdfb6: mov ecx, dword ptr [eax + 0x428] */ r_ecx = R32((u32)(r_eax+0x428u));
    /* 004cdfbc: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004cdfc0: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004cdfc3: lea eax, [ecx + edx + 0x888] */ r_eax = (u32)(r_ecx+r_edx+0x888u);
    /* 004cdfca: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004cdfce: mov dx, word ptr [eax + ecx*2 - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_eax+r_ecx*2+0xfffffffcu))) & 0xffffu);
    /* 004cdfd3: mov word ptr [ebp - 8], dx */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_edx);
    /* 004cdfd7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004cdfda: mov ecx, dword ptr [eax + 0x428] */ r_ecx = R32((u32)(r_eax+0x428u));
    /* 004cdfe0: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004cdfe4: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004cdfe7: lea eax, [ecx + edx + 0x888] */ r_eax = (u32)(r_ecx+r_edx+0x888u);
    /* 004cdfee: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004cdff2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004cdff5: mov edx, dword ptr [edx + 0x428] */ r_edx = R32((u32)(r_edx+0x428u));
    /* 004cdffb: movsx esi, word ptr [ebp + 8] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004cdfff: imul esi, esi, 0xe */ { i64 t = (i64)(i32)r_esi * (i64)(i32)0xeu; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ce002: lea edx, [edx + esi + 0x888] */ r_edx = (u32)(r_edx+r_esi+0x888u);
    /* 004ce009: movsx esi, word ptr [ebp - 0x10] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004ce00d: mov ax, word ptr [eax + ecx*2 - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+r_ecx*2+0xfffffffcu))) & 0xffffu);
    /* 004ce012: mov word ptr [edx + esi*2 - 4], ax */ W16((u32)(r_edx+r_esi*2+0xfffffffcu), (u16)r_eax);
    /* 004ce017: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004ce01a: mov edx, dword ptr [ecx + 0x428] */ r_edx = R32((u32)(r_ecx+0x428u));
    /* 004ce020: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ce024: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ce027: lea ecx, [edx + eax + 0x888] */ r_ecx = (u32)(r_edx+r_eax+0x888u);
    /* 004ce02e: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004ce032: mov ax, word ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 004ce036: mov word ptr [ecx + edx*2 - 4], ax */ W16((u32)(r_ecx+r_edx*2+0xfffffffcu), (u16)r_eax);
    /* 004ce03b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004ce03e: mov edx, dword ptr [ecx + 0x428] */ r_edx = R32((u32)(r_ecx+0x428u));
    /* 004ce044: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ce048: imul eax, eax, 7 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x7u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ce04b: lea ecx, [edx + eax + 0x8f8] */ r_ecx = (u32)(r_edx+r_eax+0x8f8u);
    /* 004ce052: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004ce056: mov al, byte ptr [ecx + edx - 2] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx+r_edx+0xfffffffeu))) & 0xffu);
    /* 004ce05a: mov byte ptr [ebp - 1], al */ W8((u32)(r_ebp+0xffffffffu), (u8)r_eax);
    /* 004ce05d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004ce060: mov edx, dword ptr [ecx + 0x428] */ r_edx = R32((u32)(r_ecx+0x428u));
    /* 004ce066: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ce06a: imul eax, eax, 7 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x7u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ce06d: lea ecx, [edx + eax + 0x8f8] */ r_ecx = (u32)(r_edx+r_eax+0x8f8u);
    /* 004ce074: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004ce078: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004ce07b: mov eax, dword ptr [eax + 0x428] */ r_eax = R32((u32)(r_eax+0x428u));
    /* 004ce081: movsx esi, word ptr [ebp + 8] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ce085: imul esi, esi, 7 */ { i64 t = (i64)(i32)r_esi * (i64)(i32)0x7u; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ce088: lea eax, [eax + esi + 0x8f8] */ r_eax = (u32)(r_eax+r_esi+0x8f8u);
    /* 004ce08f: movsx esi, word ptr [ebp - 0x10] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004ce093: mov cl, byte ptr [ecx + edx - 2] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ecx+r_edx+0xfffffffeu))) & 0xffu);
    /* 004ce097: mov byte ptr [eax + esi - 2], cl */ W8((u32)(r_eax+r_esi+0xfffffffeu), (u8)r_ecx);
    /* 004ce09b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004ce09e: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004ce0a4: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ce0a8: imul ecx, ecx, 7 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x7u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ce0ab: lea edx, [eax + ecx + 0x8f8] */ r_edx = (u32)(r_eax+r_ecx+0x8f8u);
    /* 004ce0b2: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004ce0b6: mov cl, byte ptr [ebp - 1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffffu))) & 0xffu);
    /* 004ce0b9: mov byte ptr [edx + eax - 2], cl */ W8((u32)(r_edx+r_eax+0xfffffffeu), (u8)r_ecx);
    /* 004ce0bd: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004ce0c0: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004ce0c6: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ce0ca: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ce0cd: lea edx, [eax + ecx + 0x930] */ r_edx = (u32)(r_eax+r_ecx+0x930u);
    /* 004ce0d4: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004ce0d8: mov cx, word ptr [edx + eax*2 - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2+0xfffffffcu))) & 0xffffu);
    /* 004ce0dd: mov word ptr [ebp - 8], cx */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_ecx);
    /* 004ce0e1: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004ce0e4: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004ce0ea: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ce0ee: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ce0f1: lea edx, [eax + ecx + 0x930] */ r_edx = (u32)(r_eax+r_ecx+0x930u);
    /* 004ce0f8: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004ce0fc: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004ce0ff: mov ecx, dword ptr [ecx + 0x428] */ r_ecx = R32((u32)(r_ecx+0x428u));
    /* 004ce105: movsx esi, word ptr [ebp + 8] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ce109: imul esi, esi, 0xe */ { i64 t = (i64)(i32)r_esi * (i64)(i32)0xeu; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ce10c: lea ecx, [ecx + esi + 0x930] */ r_ecx = (u32)(r_ecx+r_esi+0x930u);
    /* 004ce113: movsx esi, word ptr [ebp - 0x10] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004ce117: mov dx, word ptr [edx + eax*2 - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2+0xfffffffcu))) & 0xffffu);
    /* 004ce11c: mov word ptr [ecx + esi*2 - 4], dx */ W16((u32)(r_ecx+r_esi*2+0xfffffffcu), (u16)r_edx);
    /* 004ce121: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004ce124: mov ecx, dword ptr [eax + 0x428] */ r_ecx = R32((u32)(r_eax+0x428u));
    /* 004ce12a: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ce12e: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ce131: lea eax, [ecx + edx + 0x930] */ r_eax = (u32)(r_ecx+r_edx+0x930u);
    /* 004ce138: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004ce13c: mov dx, word ptr [ebp - 8] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 004ce140: mov word ptr [eax + ecx*2 - 4], dx */ W16((u32)(r_eax+r_ecx*2+0xfffffffcu), (u16)r_edx);
    /* 004ce145: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004ce148: mov ecx, dword ptr [eax + 0x428] */ r_ecx = R32((u32)(r_eax+0x428u));
    /* 004ce14e: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ce152: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ce155: lea eax, [ecx + edx + 0x9a0] */ r_eax = (u32)(r_ecx+r_edx+0x9a0u);
    /* 004ce15c: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004ce160: mov dx, word ptr [eax + ecx*2 - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_eax+r_ecx*2+0xfffffffcu))) & 0xffffu);
    /* 004ce165: mov word ptr [ebp - 8], dx */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_edx);
    /* 004ce169: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004ce16c: mov ecx, dword ptr [eax + 0x428] */ r_ecx = R32((u32)(r_eax+0x428u));
    /* 004ce172: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ce176: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ce179: lea eax, [ecx + edx + 0x9a0] */ r_eax = (u32)(r_ecx+r_edx+0x9a0u);
    /* 004ce180: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004ce184: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004ce187: mov edx, dword ptr [edx + 0x428] */ r_edx = R32((u32)(r_edx+0x428u));
    /* 004ce18d: movsx esi, word ptr [ebp + 8] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ce191: imul esi, esi, 0xe */ { i64 t = (i64)(i32)r_esi * (i64)(i32)0xeu; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ce194: lea edx, [edx + esi + 0x9a0] */ r_edx = (u32)(r_edx+r_esi+0x9a0u);
    /* 004ce19b: movsx esi, word ptr [ebp - 0x10] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004ce19f: mov ax, word ptr [eax + ecx*2 - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+r_ecx*2+0xfffffffcu))) & 0xffffu);
    /* 004ce1a4: mov word ptr [edx + esi*2 - 4], ax */ W16((u32)(r_edx+r_esi*2+0xfffffffcu), (u16)r_eax);
    /* 004ce1a9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004ce1ac: mov edx, dword ptr [ecx + 0x428] */ r_edx = R32((u32)(r_ecx+0x428u));
    /* 004ce1b2: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ce1b6: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ce1b9: lea ecx, [edx + eax + 0x9a0] */ r_ecx = (u32)(r_edx+r_eax+0x9a0u);
    /* 004ce1c0: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004ce1c4: mov ax, word ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 004ce1c8: mov word ptr [ecx + edx*2 - 4], ax */ W16((u32)(r_ecx+r_edx*2+0xfffffffcu), (u16)r_eax);
    /* 004ce1cd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004ce1d0: mov edx, dword ptr [ecx + 0x428] */ r_edx = R32((u32)(r_ecx+0x428u));
    /* 004ce1d6: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ce1da: imul eax, eax, 7 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x7u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ce1dd: lea ecx, [edx + eax + 0xa10] */ r_ecx = (u32)(r_edx+r_eax+0xa10u);
    /* 004ce1e4: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004ce1e8: mov al, byte ptr [ecx + edx - 2] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx+r_edx+0xfffffffeu))) & 0xffu);
    /* 004ce1ec: mov byte ptr [ebp - 1], al */ W8((u32)(r_ebp+0xffffffffu), (u8)r_eax);
    /* 004ce1ef: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004ce1f2: mov edx, dword ptr [ecx + 0x428] */ r_edx = R32((u32)(r_ecx+0x428u));
    /* 004ce1f8: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ce1fc: imul eax, eax, 7 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x7u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ce1ff: lea ecx, [edx + eax + 0xa10] */ r_ecx = (u32)(r_edx+r_eax+0xa10u);
    /* 004ce206: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004ce20a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004ce20d: mov eax, dword ptr [eax + 0x428] */ r_eax = R32((u32)(r_eax+0x428u));
    /* 004ce213: movsx esi, word ptr [ebp + 8] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ce217: imul esi, esi, 7 */ { i64 t = (i64)(i32)r_esi * (i64)(i32)0x7u; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ce21a: lea eax, [eax + esi + 0xa10] */ r_eax = (u32)(r_eax+r_esi+0xa10u);
    /* 004ce221: movsx esi, word ptr [ebp - 0x10] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004ce225: mov cl, byte ptr [ecx + edx - 2] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ecx+r_edx+0xfffffffeu))) & 0xffu);
    /* 004ce229: mov byte ptr [eax + esi - 2], cl */ W8((u32)(r_eax+r_esi+0xfffffffeu), (u8)r_ecx);
    /* 004ce22d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004ce230: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004ce236: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ce23a: imul ecx, ecx, 7 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x7u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ce23d: lea edx, [eax + ecx + 0xa10] */ r_edx = (u32)(r_eax+r_ecx+0xa10u);
    /* 004ce244: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004ce248: mov cl, byte ptr [ebp - 1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffffu))) & 0xffu);
    /* 004ce24b: mov byte ptr [edx + eax - 2], cl */ W8((u32)(r_edx+r_eax+0xfffffffeu), (u8)r_ecx);
    /* 004ce24f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004ce252: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004ce258: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ce25c: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ce25f: lea edx, [eax + ecx + 0xa48] */ r_edx = (u32)(r_eax+r_ecx+0xa48u);
    /* 004ce266: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004ce26a: mov cx, word ptr [edx + eax*2 - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2+0xfffffffcu))) & 0xffffu);
    /* 004ce26f: mov word ptr [ebp - 8], cx */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_ecx);
    /* 004ce273: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004ce276: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004ce27c: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ce280: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ce283: lea edx, [eax + ecx + 0xa48] */ r_edx = (u32)(r_eax+r_ecx+0xa48u);
    /* 004ce28a: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004ce28e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004ce291: mov ecx, dword ptr [ecx + 0x428] */ r_ecx = R32((u32)(r_ecx+0x428u));
    /* 004ce297: movsx esi, word ptr [ebp + 8] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ce29b: imul esi, esi, 0xe */ { i64 t = (i64)(i32)r_esi * (i64)(i32)0xeu; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ce29e: lea ecx, [ecx + esi + 0xa48] */ r_ecx = (u32)(r_ecx+r_esi+0xa48u);
    /* 004ce2a5: movsx esi, word ptr [ebp - 0x10] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004ce2a9: mov dx, word ptr [edx + eax*2 - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2+0xfffffffcu))) & 0xffffu);
    /* 004ce2ae: mov word ptr [ecx + esi*2 - 4], dx */ W16((u32)(r_ecx+r_esi*2+0xfffffffcu), (u16)r_edx);
    /* 004ce2b3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004ce2b6: mov ecx, dword ptr [eax + 0x428] */ r_ecx = R32((u32)(r_eax+0x428u));
    /* 004ce2bc: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ce2c0: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ce2c3: lea eax, [ecx + edx + 0xa48] */ r_eax = (u32)(r_ecx+r_edx+0xa48u);
    /* 004ce2ca: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004ce2ce: mov dx, word ptr [ebp - 8] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 004ce2d2: mov word ptr [eax + ecx*2 - 4], dx */ W16((u32)(r_eax+r_ecx*2+0xfffffffcu), (u16)r_edx);
    /* 004ce2d7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004ce2da: mov ecx, dword ptr [eax + 0x428] */ r_ecx = R32((u32)(r_eax+0x428u));
    /* 004ce2e0: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ce2e4: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ce2e7: lea eax, [ecx + edx + 0xab8] */ r_eax = (u32)(r_ecx+r_edx+0xab8u);
    /* 004ce2ee: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004ce2f2: mov dx, word ptr [eax + ecx*2 - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_eax+r_ecx*2+0xfffffffcu))) & 0xffffu);
    /* 004ce2f7: mov word ptr [ebp - 8], dx */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_edx);
    /* 004ce2fb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004ce2fe: mov ecx, dword ptr [eax + 0x428] */ r_ecx = R32((u32)(r_eax+0x428u));
    /* 004ce304: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ce308: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ce30b: lea eax, [ecx + edx + 0xab8] */ r_eax = (u32)(r_ecx+r_edx+0xab8u);
    /* 004ce312: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004ce316: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004ce319: mov edx, dword ptr [edx + 0x428] */ r_edx = R32((u32)(r_edx+0x428u));
    /* 004ce31f: movsx esi, word ptr [ebp + 8] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ce323: imul esi, esi, 0xe */ { i64 t = (i64)(i32)r_esi * (i64)(i32)0xeu; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ce326: lea edx, [edx + esi + 0xab8] */ r_edx = (u32)(r_edx+r_esi+0xab8u);
    /* 004ce32d: movsx esi, word ptr [ebp - 0x10] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004ce331: mov ax, word ptr [eax + ecx*2 - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+r_ecx*2+0xfffffffcu))) & 0xffffu);
    /* 004ce336: mov word ptr [edx + esi*2 - 4], ax */ W16((u32)(r_edx+r_esi*2+0xfffffffcu), (u16)r_eax);
    /* 004ce33b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004ce33e: mov edx, dword ptr [ecx + 0x428] */ r_edx = R32((u32)(r_ecx+0x428u));
    /* 004ce344: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ce348: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ce34b: lea ecx, [edx + eax + 0xab8] */ r_ecx = (u32)(r_edx+r_eax+0xab8u);
    /* 004ce352: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004ce356: mov ax, word ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 004ce35a: mov word ptr [ecx + edx*2 - 4], ax */ W16((u32)(r_ecx+r_edx*2+0xfffffffcu), (u16)r_eax);
    /* 004ce35f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004ce362: mov edx, dword ptr [ecx + 0x428] */ r_edx = R32((u32)(r_ecx+0x428u));
    /* 004ce368: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ce36c: imul eax, eax, 7 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x7u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ce36f: lea ecx, [edx + eax + 0xb28] */ r_ecx = (u32)(r_edx+r_eax+0xb28u);
    /* 004ce376: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004ce37a: mov al, byte ptr [ecx + edx - 2] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx+r_edx+0xfffffffeu))) & 0xffu);
    /* 004ce37e: mov byte ptr [ebp - 1], al */ W8((u32)(r_ebp+0xffffffffu), (u8)r_eax);
    /* 004ce381: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004ce384: mov edx, dword ptr [ecx + 0x428] */ r_edx = R32((u32)(r_ecx+0x428u));
    /* 004ce38a: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ce38e: imul eax, eax, 7 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x7u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ce391: lea ecx, [edx + eax + 0xb28] */ r_ecx = (u32)(r_edx+r_eax+0xb28u);
    /* 004ce398: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004ce39c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004ce39f: mov eax, dword ptr [eax + 0x428] */ r_eax = R32((u32)(r_eax+0x428u));
    /* 004ce3a5: movsx esi, word ptr [ebp + 8] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ce3a9: imul esi, esi, 7 */ { i64 t = (i64)(i32)r_esi * (i64)(i32)0x7u; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ce3ac: lea eax, [eax + esi + 0xb28] */ r_eax = (u32)(r_eax+r_esi+0xb28u);
    /* 004ce3b3: movsx esi, word ptr [ebp - 0x10] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004ce3b7: mov cl, byte ptr [ecx + edx - 2] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ecx+r_edx+0xfffffffeu))) & 0xffu);
    /* 004ce3bb: mov byte ptr [eax + esi - 2], cl */ W8((u32)(r_eax+r_esi+0xfffffffeu), (u8)r_ecx);
    /* 004ce3bf: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004ce3c2: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004ce3c8: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ce3cc: imul ecx, ecx, 7 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x7u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ce3cf: lea edx, [eax + ecx + 0xb28] */ r_edx = (u32)(r_eax+r_ecx+0xb28u);
    /* 004ce3d6: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004ce3da: mov cl, byte ptr [ebp - 1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffffu))) & 0xffu);
    /* 004ce3dd: mov byte ptr [edx + eax - 2], cl */ W8((u32)(r_edx+r_eax+0xfffffffeu), (u8)r_ecx);
    /* 004ce3e1: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004ce3e4: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004ce3ea: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ce3ee: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ce3f1: lea edx, [eax + ecx + 0x700] */ r_edx = (u32)(r_eax+r_ecx+0x700u);
    /* 004ce3f8: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004ce3fc: mov cx, word ptr [edx + eax*2 - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2+0xfffffffcu))) & 0xffffu);
    /* 004ce401: mov word ptr [ebp - 8], cx */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_ecx);
    /* 004ce405: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004ce408: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004ce40e: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ce412: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ce415: lea edx, [eax + ecx + 0x700] */ r_edx = (u32)(r_eax+r_ecx+0x700u);
    /* 004ce41c: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004ce420: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004ce423: mov ecx, dword ptr [ecx + 0x428] */ r_ecx = R32((u32)(r_ecx+0x428u));
    /* 004ce429: movsx esi, word ptr [ebp + 8] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ce42d: imul esi, esi, 0xe */ { i64 t = (i64)(i32)r_esi * (i64)(i32)0xeu; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ce430: lea ecx, [ecx + esi + 0x700] */ r_ecx = (u32)(r_ecx+r_esi+0x700u);
    /* 004ce437: movsx esi, word ptr [ebp - 0x10] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004ce43b: mov dx, word ptr [edx + eax*2 - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2+0xfffffffcu))) & 0xffffu);
    /* 004ce440: mov word ptr [ecx + esi*2 - 4], dx */ W16((u32)(r_ecx+r_esi*2+0xfffffffcu), (u16)r_edx);
    /* 004ce445: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004ce448: mov ecx, dword ptr [eax + 0x428] */ r_ecx = R32((u32)(r_eax+0x428u));
    /* 004ce44e: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ce452: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ce455: lea eax, [ecx + edx + 0x700] */ r_eax = (u32)(r_ecx+r_edx+0x700u);
    /* 004ce45c: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004ce460: mov dx, word ptr [ebp - 8] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 004ce464: mov word ptr [eax + ecx*2 - 4], dx */ W16((u32)(r_eax+r_ecx*2+0xfffffffcu), (u16)r_edx);
    /* 004ce469: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004ce46c: mov ecx, dword ptr [eax + 0x428] */ r_ecx = R32((u32)(r_eax+0x428u));
    /* 004ce472: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ce476: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ce479: lea eax, [ecx + edx + 0x770] */ r_eax = (u32)(r_ecx+r_edx+0x770u);
    /* 004ce480: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004ce484: mov dx, word ptr [eax + ecx*2 - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_eax+r_ecx*2+0xfffffffcu))) & 0xffffu);
    /* 004ce489: mov word ptr [ebp - 8], dx */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_edx);
    /* 004ce48d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004ce490: mov ecx, dword ptr [eax + 0x428] */ r_ecx = R32((u32)(r_eax+0x428u));
    /* 004ce496: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ce49a: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ce49d: lea eax, [ecx + edx + 0x770] */ r_eax = (u32)(r_ecx+r_edx+0x770u);
    /* 004ce4a4: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004ce4a8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004ce4ab: mov edx, dword ptr [edx + 0x428] */ r_edx = R32((u32)(r_edx+0x428u));
    /* 004ce4b1: movsx esi, word ptr [ebp + 8] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ce4b5: imul esi, esi, 0xe */ { i64 t = (i64)(i32)r_esi * (i64)(i32)0xeu; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ce4b8: lea edx, [edx + esi + 0x770] */ r_edx = (u32)(r_edx+r_esi+0x770u);
    /* 004ce4bf: movsx esi, word ptr [ebp - 0x10] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004ce4c3: mov ax, word ptr [eax + ecx*2 - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+r_ecx*2+0xfffffffcu))) & 0xffffu);
    /* 004ce4c8: mov word ptr [edx + esi*2 - 4], ax */ W16((u32)(r_edx+r_esi*2+0xfffffffcu), (u16)r_eax);
    /* 004ce4cd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004ce4d0: mov edx, dword ptr [ecx + 0x428] */ r_edx = R32((u32)(r_ecx+0x428u));
    /* 004ce4d6: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ce4da: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ce4dd: lea ecx, [edx + eax + 0x770] */ r_ecx = (u32)(r_edx+r_eax+0x770u);
    /* 004ce4e4: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004ce4e8: mov ax, word ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 004ce4ec: mov word ptr [ecx + edx*2 - 4], ax */ W16((u32)(r_ecx+r_edx*2+0xfffffffcu), (u16)r_eax);
    /* 004ce4f1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004ce4f4: mov edx, dword ptr [ecx + 0x428] */ r_edx = R32((u32)(r_ecx+0x428u));
    /* 004ce4fa: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ce4fe: imul eax, eax, 7 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x7u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ce501: lea ecx, [edx + eax + 0x7e0] */ r_ecx = (u32)(r_edx+r_eax+0x7e0u);
    /* 004ce508: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004ce50c: mov al, byte ptr [ecx + edx - 2] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx+r_edx+0xfffffffeu))) & 0xffu);
    /* 004ce510: mov byte ptr [ebp - 1], al */ W8((u32)(r_ebp+0xffffffffu), (u8)r_eax);
    /* 004ce513: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004ce516: mov edx, dword ptr [ecx + 0x428] */ r_edx = R32((u32)(r_ecx+0x428u));
    /* 004ce51c: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ce520: imul eax, eax, 7 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x7u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ce523: lea ecx, [edx + eax + 0x7e0] */ r_ecx = (u32)(r_edx+r_eax+0x7e0u);
    /* 004ce52a: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004ce52e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004ce531: mov eax, dword ptr [eax + 0x428] */ r_eax = R32((u32)(r_eax+0x428u));
    /* 004ce537: movsx esi, word ptr [ebp + 8] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ce53b: imul esi, esi, 7 */ { i64 t = (i64)(i32)r_esi * (i64)(i32)0x7u; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ce53e: lea eax, [eax + esi + 0x7e0] */ r_eax = (u32)(r_eax+r_esi+0x7e0u);
    /* 004ce545: movsx esi, word ptr [ebp - 0x10] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004ce549: mov cl, byte ptr [ecx + edx - 2] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ecx+r_edx+0xfffffffeu))) & 0xffu);
    /* 004ce54d: mov byte ptr [eax + esi - 2], cl */ W8((u32)(r_eax+r_esi+0xfffffffeu), (u8)r_ecx);
    /* 004ce551: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004ce554: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004ce55a: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ce55e: imul ecx, ecx, 7 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x7u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ce561: lea edx, [eax + ecx + 0x7e0] */ r_edx = (u32)(r_eax+r_ecx+0x7e0u);
    /* 004ce568: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004ce56c: mov cl, byte ptr [ebp - 1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffffu))) & 0xffu);
    /* 004ce56f: mov byte ptr [edx + eax - 2], cl */ W8((u32)(r_edx+r_eax+0xfffffffeu), (u8)r_ecx);
    /* 004ce573: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004ce576: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004ce57c: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ce580: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ce583: lea edx, [eax + ecx + 0xb60] */ r_edx = (u32)(r_eax+r_ecx+0xb60u);
    /* 004ce58a: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004ce58e: mov cx, word ptr [edx + eax*2 - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2+0xfffffffcu))) & 0xffffu);
    /* 004ce593: mov word ptr [ebp - 8], cx */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_ecx);
    /* 004ce597: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004ce59a: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004ce5a0: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ce5a4: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ce5a7: lea edx, [eax + ecx + 0xb60] */ r_edx = (u32)(r_eax+r_ecx+0xb60u);
    /* 004ce5ae: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004ce5b2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004ce5b5: mov ecx, dword ptr [ecx + 0x428] */ r_ecx = R32((u32)(r_ecx+0x428u));
    /* 004ce5bb: movsx esi, word ptr [ebp + 8] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ce5bf: imul esi, esi, 0xe */ { i64 t = (i64)(i32)r_esi * (i64)(i32)0xeu; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ce5c2: lea ecx, [ecx + esi + 0xb60] */ r_ecx = (u32)(r_ecx+r_esi+0xb60u);
    /* 004ce5c9: movsx esi, word ptr [ebp - 0x10] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004ce5cd: mov dx, word ptr [edx + eax*2 - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2+0xfffffffcu))) & 0xffffu);
    /* 004ce5d2: mov word ptr [ecx + esi*2 - 4], dx */ W16((u32)(r_ecx+r_esi*2+0xfffffffcu), (u16)r_edx);
    /* 004ce5d7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004ce5da: mov ecx, dword ptr [eax + 0x428] */ r_ecx = R32((u32)(r_eax+0x428u));
    /* 004ce5e0: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ce5e4: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ce5e7: lea eax, [ecx + edx + 0xb60] */ r_eax = (u32)(r_ecx+r_edx+0xb60u);
    /* 004ce5ee: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004ce5f2: mov dx, word ptr [ebp - 8] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 004ce5f6: mov word ptr [eax + ecx*2 - 4], dx */ W16((u32)(r_eax+r_ecx*2+0xfffffffcu), (u16)r_edx);
    /* 004ce5fb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004ce5fe: mov ecx, dword ptr [eax + 0x428] */ r_ecx = R32((u32)(r_eax+0x428u));
    /* 004ce604: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ce608: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ce60b: lea eax, [ecx + edx + 0xbd0] */ r_eax = (u32)(r_ecx+r_edx+0xbd0u);
    /* 004ce612: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004ce616: mov dx, word ptr [eax + ecx*2 - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_eax+r_ecx*2+0xfffffffcu))) & 0xffffu);
    /* 004ce61b: mov word ptr [ebp - 8], dx */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_edx);
    /* 004ce61f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004ce622: mov ecx, dword ptr [eax + 0x428] */ r_ecx = R32((u32)(r_eax+0x428u));
    /* 004ce628: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ce62c: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ce62f: lea eax, [ecx + edx + 0xbd0] */ r_eax = (u32)(r_ecx+r_edx+0xbd0u);
    /* 004ce636: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004ce63a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004ce63d: mov edx, dword ptr [edx + 0x428] */ r_edx = R32((u32)(r_edx+0x428u));
    /* 004ce643: movsx esi, word ptr [ebp + 8] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ce647: imul esi, esi, 0xe */ { i64 t = (i64)(i32)r_esi * (i64)(i32)0xeu; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ce64a: lea edx, [edx + esi + 0xbd0] */ r_edx = (u32)(r_edx+r_esi+0xbd0u);
    /* 004ce651: movsx esi, word ptr [ebp - 0x10] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004ce655: mov ax, word ptr [eax + ecx*2 - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+r_ecx*2+0xfffffffcu))) & 0xffffu);
    /* 004ce65a: mov word ptr [edx + esi*2 - 4], ax */ W16((u32)(r_edx+r_esi*2+0xfffffffcu), (u16)r_eax);
    /* 004ce65f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004ce662: mov edx, dword ptr [ecx + 0x428] */ r_edx = R32((u32)(r_ecx+0x428u));
    /* 004ce668: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ce66c: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ce66f: lea ecx, [edx + eax + 0xbd0] */ r_ecx = (u32)(r_edx+r_eax+0xbd0u);
    /* 004ce676: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004ce67a: mov ax, word ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 004ce67e: mov word ptr [ecx + edx*2 - 4], ax */ W16((u32)(r_ecx+r_edx*2+0xfffffffcu), (u16)r_eax);
    /* 004ce683: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004ce686: mov edx, dword ptr [ecx + 0x428] */ r_edx = R32((u32)(r_ecx+0x428u));
    /* 004ce68c: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ce690: imul eax, eax, 7 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x7u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ce693: lea ecx, [edx + eax + 0xc40] */ r_ecx = (u32)(r_edx+r_eax+0xc40u);
    /* 004ce69a: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004ce69e: mov al, byte ptr [ecx + edx - 2] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx+r_edx+0xfffffffeu))) & 0xffu);
    /* 004ce6a2: mov byte ptr [ebp - 1], al */ W8((u32)(r_ebp+0xffffffffu), (u8)r_eax);
    /* 004ce6a5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004ce6a8: mov edx, dword ptr [ecx + 0x428] */ r_edx = R32((u32)(r_ecx+0x428u));
    /* 004ce6ae: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ce6b2: imul eax, eax, 7 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x7u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ce6b5: lea ecx, [edx + eax + 0xc40] */ r_ecx = (u32)(r_edx+r_eax+0xc40u);
    /* 004ce6bc: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004ce6c0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004ce6c3: mov eax, dword ptr [eax + 0x428] */ r_eax = R32((u32)(r_eax+0x428u));
    /* 004ce6c9: movsx esi, word ptr [ebp + 8] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ce6cd: imul esi, esi, 7 */ { i64 t = (i64)(i32)r_esi * (i64)(i32)0x7u; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ce6d0: lea eax, [eax + esi + 0xc40] */ r_eax = (u32)(r_eax+r_esi+0xc40u);
    /* 004ce6d7: movsx esi, word ptr [ebp - 0x10] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004ce6db: mov cl, byte ptr [ecx + edx - 2] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ecx+r_edx+0xfffffffeu))) & 0xffu);
    /* 004ce6df: mov byte ptr [eax + esi - 2], cl */ W8((u32)(r_eax+r_esi+0xfffffffeu), (u8)r_ecx);
    /* 004ce6e3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004ce6e6: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004ce6ec: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ce6f0: imul ecx, ecx, 7 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x7u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ce6f3: lea edx, [eax + ecx + 0xc40] */ r_edx = (u32)(r_eax+r_ecx+0xc40u);
    /* 004ce6fa: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004ce6fe: mov cl, byte ptr [ebp - 1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffffu))) & 0xffu);
    /* 004ce701: mov byte ptr [edx + eax - 2], cl */ W8((u32)(r_edx+r_eax+0xfffffffeu), (u8)r_ecx);
    /* 004ce705: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004ce708: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004ce70e: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ce712: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ce715: lea edx, [eax + ecx + 0xc78] */ r_edx = (u32)(r_eax+r_ecx+0xc78u);
    /* 004ce71c: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004ce720: mov cx, word ptr [edx + eax*2 - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2+0xfffffffcu))) & 0xffffu);
    /* 004ce725: mov word ptr [ebp - 8], cx */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_ecx);
    /* 004ce729: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004ce72c: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004ce732: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ce736: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ce739: lea edx, [eax + ecx + 0xc78] */ r_edx = (u32)(r_eax+r_ecx+0xc78u);
    /* 004ce740: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004ce744: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004ce747: mov ecx, dword ptr [ecx + 0x428] */ r_ecx = R32((u32)(r_ecx+0x428u));
    /* 004ce74d: movsx esi, word ptr [ebp + 8] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ce751: imul esi, esi, 0xe */ { i64 t = (i64)(i32)r_esi * (i64)(i32)0xeu; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ce754: lea ecx, [ecx + esi + 0xc78] */ r_ecx = (u32)(r_ecx+r_esi+0xc78u);
    /* 004ce75b: movsx esi, word ptr [ebp - 0x10] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004ce75f: mov dx, word ptr [edx + eax*2 - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2+0xfffffffcu))) & 0xffffu);
    /* 004ce764: mov word ptr [ecx + esi*2 - 4], dx */ W16((u32)(r_ecx+r_esi*2+0xfffffffcu), (u16)r_edx);
    /* 004ce769: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004ce76c: mov ecx, dword ptr [eax + 0x428] */ r_ecx = R32((u32)(r_eax+0x428u));
    /* 004ce772: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ce776: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ce779: lea eax, [ecx + edx + 0xc78] */ r_eax = (u32)(r_ecx+r_edx+0xc78u);
    /* 004ce780: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004ce784: mov dx, word ptr [ebp - 8] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 004ce788: mov word ptr [eax + ecx*2 - 4], dx */ W16((u32)(r_eax+r_ecx*2+0xfffffffcu), (u16)r_edx);
    /* 004ce78d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004ce790: mov ecx, dword ptr [eax + 0x428] */ r_ecx = R32((u32)(r_eax+0x428u));
    /* 004ce796: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ce79a: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ce79d: lea eax, [ecx + edx + 0xce8] */ r_eax = (u32)(r_ecx+r_edx+0xce8u);
    /* 004ce7a4: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004ce7a8: mov dx, word ptr [eax + ecx*2 - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_eax+r_ecx*2+0xfffffffcu))) & 0xffffu);
    /* 004ce7ad: mov word ptr [ebp - 8], dx */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_edx);
    /* 004ce7b1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004ce7b4: mov ecx, dword ptr [eax + 0x428] */ r_ecx = R32((u32)(r_eax+0x428u));
    /* 004ce7ba: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ce7be: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ce7c1: lea eax, [ecx + edx + 0xce8] */ r_eax = (u32)(r_ecx+r_edx+0xce8u);
    /* 004ce7c8: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004ce7cc: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004ce7cf: mov edx, dword ptr [edx + 0x428] */ r_edx = R32((u32)(r_edx+0x428u));
    /* 004ce7d5: movsx esi, word ptr [ebp + 8] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ce7d9: imul esi, esi, 0xe */ { i64 t = (i64)(i32)r_esi * (i64)(i32)0xeu; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ce7dc: lea edx, [edx + esi + 0xce8] */ r_edx = (u32)(r_edx+r_esi+0xce8u);
    /* 004ce7e3: movsx esi, word ptr [ebp - 0x10] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004ce7e7: mov ax, word ptr [eax + ecx*2 - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+r_ecx*2+0xfffffffcu))) & 0xffffu);
    /* 004ce7ec: mov word ptr [edx + esi*2 - 4], ax */ W16((u32)(r_edx+r_esi*2+0xfffffffcu), (u16)r_eax);
    /* 004ce7f1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004ce7f4: mov edx, dword ptr [ecx + 0x428] */ r_edx = R32((u32)(r_ecx+0x428u));
    /* 004ce7fa: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ce7fe: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ce801: lea ecx, [edx + eax + 0xce8] */ r_ecx = (u32)(r_edx+r_eax+0xce8u);
    /* 004ce808: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004ce80c: mov ax, word ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 004ce810: mov word ptr [ecx + edx*2 - 4], ax */ W16((u32)(r_ecx+r_edx*2+0xfffffffcu), (u16)r_eax);
    /* 004ce815: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004ce818: mov edx, dword ptr [ecx + 0x428] */ r_edx = R32((u32)(r_ecx+0x428u));
    /* 004ce81e: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ce822: imul eax, eax, 7 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x7u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ce825: lea ecx, [edx + eax + 0xd58] */ r_ecx = (u32)(r_edx+r_eax+0xd58u);
    /* 004ce82c: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004ce830: mov al, byte ptr [ecx + edx - 2] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx+r_edx+0xfffffffeu))) & 0xffu);
    /* 004ce834: mov byte ptr [ebp - 1], al */ W8((u32)(r_ebp+0xffffffffu), (u8)r_eax);
    /* 004ce837: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004ce83a: mov edx, dword ptr [ecx + 0x428] */ r_edx = R32((u32)(r_ecx+0x428u));
    /* 004ce840: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ce844: imul eax, eax, 7 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x7u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ce847: lea ecx, [edx + eax + 0xd58] */ r_ecx = (u32)(r_edx+r_eax+0xd58u);
    /* 004ce84e: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004ce852: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004ce855: mov eax, dword ptr [eax + 0x428] */ r_eax = R32((u32)(r_eax+0x428u));
    /* 004ce85b: movsx esi, word ptr [ebp + 8] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ce85f: imul esi, esi, 7 */ { i64 t = (i64)(i32)r_esi * (i64)(i32)0x7u; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ce862: lea eax, [eax + esi + 0xd58] */ r_eax = (u32)(r_eax+r_esi+0xd58u);
    /* 004ce869: movsx esi, word ptr [ebp - 0x10] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004ce86d: mov cl, byte ptr [ecx + edx - 2] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ecx+r_edx+0xfffffffeu))) & 0xffu);
    /* 004ce871: mov byte ptr [eax + esi - 2], cl */ W8((u32)(r_eax+r_esi+0xfffffffeu), (u8)r_ecx);
    /* 004ce875: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004ce878: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004ce87e: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ce882: imul ecx, ecx, 7 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x7u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ce885: lea edx, [eax + ecx + 0xd58] */ r_edx = (u32)(r_eax+r_ecx+0xd58u);
    /* 004ce88c: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004ce890: mov cl, byte ptr [ebp - 1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffffu))) & 0xffu);
    /* 004ce893: mov byte ptr [edx + eax - 2], cl */ W8((u32)(r_edx+r_eax+0xfffffffeu), (u8)r_ecx);
    /* 004ce897: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004ce89a: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004ce8a0: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ce8a4: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ce8a7: lea edx, [eax + ecx + 0xd90] */ r_edx = (u32)(r_eax+r_ecx+0xd90u);
    /* 004ce8ae: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004ce8b2: mov cx, word ptr [edx + eax*2 - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2+0xfffffffcu))) & 0xffffu);
    /* 004ce8b7: mov word ptr [ebp - 8], cx */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_ecx);
    /* 004ce8bb: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004ce8be: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004ce8c4: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ce8c8: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ce8cb: lea edx, [eax + ecx + 0xd90] */ r_edx = (u32)(r_eax+r_ecx+0xd90u);
    /* 004ce8d2: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004ce8d6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004ce8d9: mov ecx, dword ptr [ecx + 0x428] */ r_ecx = R32((u32)(r_ecx+0x428u));
    /* 004ce8df: movsx esi, word ptr [ebp + 8] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ce8e3: imul esi, esi, 0xe */ { i64 t = (i64)(i32)r_esi * (i64)(i32)0xeu; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ce8e6: lea ecx, [ecx + esi + 0xd90] */ r_ecx = (u32)(r_ecx+r_esi+0xd90u);
    /* 004ce8ed: movsx esi, word ptr [ebp - 0x10] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004ce8f1: mov dx, word ptr [edx + eax*2 - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2+0xfffffffcu))) & 0xffffu);
    /* 004ce8f6: mov word ptr [ecx + esi*2 - 4], dx */ W16((u32)(r_ecx+r_esi*2+0xfffffffcu), (u16)r_edx);
    /* 004ce8fb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004ce8fe: mov ecx, dword ptr [eax + 0x428] */ r_ecx = R32((u32)(r_eax+0x428u));
    /* 004ce904: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ce908: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ce90b: lea eax, [ecx + edx + 0xd90] */ r_eax = (u32)(r_ecx+r_edx+0xd90u);
    /* 004ce912: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004ce916: mov dx, word ptr [ebp - 8] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 004ce91a: mov word ptr [eax + ecx*2 - 4], dx */ W16((u32)(r_eax+r_ecx*2+0xfffffffcu), (u16)r_edx);
    /* 004ce91f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004ce922: mov ecx, dword ptr [eax + 0x428] */ r_ecx = R32((u32)(r_eax+0x428u));
    /* 004ce928: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ce92c: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ce92f: lea eax, [ecx + edx + 0xe00] */ r_eax = (u32)(r_ecx+r_edx+0xe00u);
    /* 004ce936: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004ce93a: mov dx, word ptr [eax + ecx*2 - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_eax+r_ecx*2+0xfffffffcu))) & 0xffffu);
    /* 004ce93f: mov word ptr [ebp - 8], dx */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_edx);
    /* 004ce943: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004ce946: mov ecx, dword ptr [eax + 0x428] */ r_ecx = R32((u32)(r_eax+0x428u));
    /* 004ce94c: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ce950: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ce953: lea eax, [ecx + edx + 0xe00] */ r_eax = (u32)(r_ecx+r_edx+0xe00u);
    /* 004ce95a: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004ce95e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004ce961: mov edx, dword ptr [edx + 0x428] */ r_edx = R32((u32)(r_edx+0x428u));
    /* 004ce967: movsx esi, word ptr [ebp + 8] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ce96b: imul esi, esi, 0xe */ { i64 t = (i64)(i32)r_esi * (i64)(i32)0xeu; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ce96e: lea edx, [edx + esi + 0xe00] */ r_edx = (u32)(r_edx+r_esi+0xe00u);
    /* 004ce975: movsx esi, word ptr [ebp - 0x10] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004ce979: mov ax, word ptr [eax + ecx*2 - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+r_ecx*2+0xfffffffcu))) & 0xffffu);
    /* 004ce97e: mov word ptr [edx + esi*2 - 4], ax */ W16((u32)(r_edx+r_esi*2+0xfffffffcu), (u16)r_eax);
    /* 004ce983: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004ce986: mov edx, dword ptr [ecx + 0x428] */ r_edx = R32((u32)(r_ecx+0x428u));
    /* 004ce98c: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ce990: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ce993: lea ecx, [edx + eax + 0xe00] */ r_ecx = (u32)(r_edx+r_eax+0xe00u);
    /* 004ce99a: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004ce99e: mov ax, word ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 004ce9a2: mov word ptr [ecx + edx*2 - 4], ax */ W16((u32)(r_ecx+r_edx*2+0xfffffffcu), (u16)r_eax);
    /* 004ce9a7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004ce9aa: mov edx, dword ptr [ecx + 0x428] */ r_edx = R32((u32)(r_ecx+0x428u));
    /* 004ce9b0: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ce9b4: imul eax, eax, 7 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x7u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ce9b7: lea ecx, [edx + eax + 0xe70] */ r_ecx = (u32)(r_edx+r_eax+0xe70u);
    /* 004ce9be: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004ce9c2: mov al, byte ptr [ecx + edx - 2] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx+r_edx+0xfffffffeu))) & 0xffu);
    /* 004ce9c6: mov byte ptr [ebp - 1], al */ W8((u32)(r_ebp+0xffffffffu), (u8)r_eax);
    /* 004ce9c9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004ce9cc: mov edx, dword ptr [ecx + 0x428] */ r_edx = R32((u32)(r_ecx+0x428u));
    /* 004ce9d2: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004ce9d6: imul eax, eax, 7 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x7u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ce9d9: lea ecx, [edx + eax + 0xe70] */ r_ecx = (u32)(r_edx+r_eax+0xe70u);
    /* 004ce9e0: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004ce9e4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004ce9e7: mov eax, dword ptr [eax + 0x428] */ r_eax = R32((u32)(r_eax+0x428u));
    /* 004ce9ed: movsx esi, word ptr [ebp + 8] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004ce9f1: imul esi, esi, 7 */ { i64 t = (i64)(i32)r_esi * (i64)(i32)0x7u; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004ce9f4: lea eax, [eax + esi + 0xe70] */ r_eax = (u32)(r_eax+r_esi+0xe70u);
    /* 004ce9fb: movsx esi, word ptr [ebp - 0x10] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004ce9ff: mov cl, byte ptr [ecx + edx - 2] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ecx+r_edx+0xfffffffeu))) & 0xffu);
    /* 004cea03: mov byte ptr [eax + esi - 2], cl */ W8((u32)(r_eax+r_esi+0xfffffffeu), (u8)r_ecx);
    /* 004cea07: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004cea0a: mov eax, dword ptr [edx + 0x428] */ r_eax = R32((u32)(r_edx+0x428u));
    /* 004cea10: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004cea14: imul ecx, ecx, 7 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x7u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004cea17: lea edx, [eax + ecx + 0xe70] */ r_edx = (u32)(r_eax+r_ecx+0xe70u);
    /* 004cea1e: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004cea22: mov cl, byte ptr [ebp - 1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffffu))) & 0xffu);
    /* 004cea25: mov byte ptr [edx + eax - 2], cl */ W8((u32)(r_edx+r_eax+0xfffffffeu), (u8)r_ecx);
    /* 004cea29: jmp 0x4cd684 */ goto L_004cd684;
L_004cea2e:; BB(0x004cea2e);
    /* 004cea2e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004cea2f: mov esp, ebp */ r_esp = r_ebp;
    /* 004cea31: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004cea32: ret 8 */ FN_RET(0x004cd8a1); r_esp += 12; return;
}

void f_004d5778(void) /* _WinMain@16_14 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004d5778);
    /* 004d5778: jmp 0x4d59ec */ f_004d59ec(); return;
}

void f_004d5792(void) /* _WinMain@16_15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004d5792);
    /* 004d5792: jmp 0x4d59ec */ f_004d59ec(); return;
}

void f_004d57a3(void) /* _WinMain@16_16 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004d57a3);
    /* 004d57a3: jmp 0x4d59ec */ f_004d59ec(); return;
}

void f_004d57a8(void) /* _WinMain@16_17 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004d57a8);
    /* 004d57a8: jmp 0x4d59e8 */ f_004d59e8(); return;
}

void f_004d57eb(void) /* _WinMain@16_18 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004d57eb);
    /* 004d57eb: jmp 0x4d59ec */ f_004d59ec(); return;
}

void f_004d5820(void) /* _WinMain@16_19 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004d5820);
    /* 004d5820: jmp 0x4d59ec */ f_004d59ec(); return;
}

void f_004d584c(void) /* _WinMain@16_20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004d584c);
    /* 004d584c: jmp 0x4d59ec */ f_004d59ec(); return;
}

void f_004d5851(void) /* _WinMain@16_21 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004d5851);
    /* 004d5851: jmp 0x4d59e8 */ f_004d59e8(); return;
}

void f_004d5901(void) /* _WinMain@16_22 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004d5901);
    /* 004d5901: jmp 0x4d59ec */ f_004d59ec(); return;
}

void f_004d590c(void) /* _WinMain@16_23 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004d590c);
    /* 004d590c: jmp 0x4d59ec */ f_004d59ec(); return;
}

void f_004d5911(void) /* _WinMain@16_24 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004d5911);
    /* 004d5911: jmp 0x4d59e8 */ f_004d59e8(); return;
}

void f_004d59e8(void) /* _WinMain@16_17_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004d59e8);
    /* 004d59e8: mov ax, 0x64 */ r_eax = (r_eax & 0xffff0000u) | ((0x64u) & 0xffffu);
    /* 004d59ec: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004d59ed: mov esp, ebp */ r_esp = r_ebp;
    /* 004d59ef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d59f0: ret 4 */ FN_RET(0x004d59e8); r_esp += 8; return;
}

void f_004d59ec(void) /* _WinMain@16_14_1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004d59ec);
    /* 004d59ec: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004d59ed: mov esp, ebp */ r_esp = r_ebp;
    /* 004d59ef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d59f0: ret 4 */ FN_RET(0x004d59ec); r_esp += 8; return;
}

void f_004da2f0(void) /* ??1CComCriticalSection@ATL@@QAE@XZ_7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004da2f0);
    /* 004da2f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004da2f1: mov ebp, esp */ r_ebp = r_esp;
    /* 004da2f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004da2f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004da2f7: mov esp, ebp */ r_esp = r_ebp;
    /* 004da2f9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004da2fa: ret  */ FN_RET(0x004da2f0); r_esp += 4; return;
}

void f_004da300(void) /* ??1CComCriticalSection@ATL@@QAE@XZ_8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004da300);
    /* 004da300: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004da301: mov ebp, esp */ r_ebp = r_esp;
    /* 004da303: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004da304: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004da307: mov esp, ebp */ r_esp = r_ebp;
    /* 004da309: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004da30a: ret  */ FN_RET(0x004da300); r_esp += 4; return;
}

void f_004da310(void) /* ??1CComCriticalSection@ATL@@QAE@XZ_9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004da310);
    /* 004da310: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004da311: mov ebp, esp */ r_ebp = r_esp;
    /* 004da313: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004da314: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004da317: mov esp, ebp */ r_esp = r_ebp;
    /* 004da319: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004da31a: ret  */ FN_RET(0x004da310); r_esp += 4; return;
}

void f_004f293f(void) /* _WinMain@16_25 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f293f);
    /* 004f293f: jmp 0x4f29fd */ f_004f29fd(); return;
}

void f_004f2944(void) /* _WinMain@16_26 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f2944);
    /* 004f2944: jmp 0x4f29fa */ f_004f29fa(); return;
}

void f_004f29fa(void) /* _WinMain@16_26_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f29fa);
    /* 004f29fa: xor ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a ^ b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f29fd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f29fe: mov esp, ebp */ r_esp = r_ebp;
    /* 004f2a00: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f2a01: ret  */ FN_RET(0x004f29fa); r_esp += 4; return;
}

void f_004f29fd(void) /* _WinMain@16_25_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f29fd);
    /* 004f29fd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f29fe: mov esp, ebp */ r_esp = r_ebp;
    /* 004f2a00: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f2a01: ret  */ FN_RET(0x004f29fd); r_esp += 4; return;
}

void f_004f2a6a(void) /* _WinMain@16_27 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f2a6a);
    /* 004f2a6a: jmp 0x4f2b03 */ f_004f2b03(); return;
}

