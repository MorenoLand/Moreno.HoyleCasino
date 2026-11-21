#include "protos.h"

void f_005404d0(void) /* ?do_always_noconv@?$codecvt@DDU_Mbstatet@@@std@@MBE_NXZ_7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005404d0);
    /* 005404d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005404d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005404d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005404d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005404d7: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005404d9: mov esp, ebp */ r_esp = r_ebp;
    /* 005404db: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005404dc: ret  */ FN_RET(0x005404d0); r_esp += 4; return;
}

void f_00542020(void) /* ??0_AFX_OLE_STATE@@QAE@XZ_26 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00542020);
    /* 00542020: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00542021: mov ebp, esp */ r_ebp = r_esp;
    /* 00542023: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00542024: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00542027: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054202a: call 0x5cb4b0 */ r_esp -= 4; W32(r_esp, 0x54202fu); f_005cb4b0();
    /* 0054202f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00542032: mov dword ptr [eax], 0x6c6474 */ W32((u32)(r_eax), 0x6c6474u);
    /* 00542038: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054203b: mov esp, ebp */ r_esp = r_ebp;
    /* 0054203d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054203e: ret  */ FN_RET(0x00542020); r_esp += 4; return;
}

void f_00542040(void) /* ??1_AFX_OLE_STATE@@UAE@XZ_26 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00542040);
    /* 00542040: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00542041: mov ebp, esp */ r_ebp = r_esp;
    /* 00542043: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00542044: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00542047: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054204a: mov dword ptr [eax], 0x6c6474 */ W32((u32)(r_eax), 0x6c6474u);
    /* 00542050: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00542053: call 0x5cb590 */ r_esp -= 4; W32(r_esp, 0x542058u); f_005cb590();
    /* 00542058: mov esp, ebp */ r_esp = r_ebp;
    /* 0054205a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054205b: ret  */ FN_RET(0x00542040); r_esp += 4; return;
}

void f_00542900(void) /* ??_G_com_error@@UAEPAXI@Z_118 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00542900);
    /* 00542900: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00542901: mov ebp, esp */ r_ebp = r_esp;
    /* 00542903: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00542904: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00542907: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054290a: call 0x540550 */ r_esp -= 4; W32(r_esp, 0x54290fu); f_00540550();
    /* 0054290f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00542912: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00542915: je 0x542923 */ if (fZ) goto L_00542923;
L_00542917:; BB(0x00542917);
    /* 00542917: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054291a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054291b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x542920u); f_00686cae();
    /* 00542920: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00542923:; BB(0x00542923);
    /* 00542923: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00542926: mov esp, ebp */ r_esp = r_ebp;
    /* 00542928: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00542929: ret 4 */ FN_RET(0x00542900); r_esp += 8; return;
}

void f_00542930(void) /* ??_G_com_error@@UAEPAXI@Z_119 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00542930);
    /* 00542930: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00542931: mov ebp, esp */ r_ebp = r_esp;
    /* 00542933: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00542934: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00542937: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054293a: call 0x542040 */ r_esp -= 4; W32(r_esp, 0x54293fu); f_00542040();
    /* 0054293f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00542942: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00542945: je 0x542953 */ if (fZ) goto L_00542953;
L_00542947:; BB(0x00542947);
    /* 00542947: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054294a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054294b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x542950u); f_00686cae();
    /* 00542950: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00542953:; BB(0x00542953);
    /* 00542953: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00542956: mov esp, ebp */ r_esp = r_ebp;
    /* 00542958: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00542959: ret 4 */ FN_RET(0x00542930); r_esp += 8; return;
}

void f_00545fa0(void) /* ??1CExpandoObject@@UAE@XZ_31 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00545fa0);
    /* 00545fa0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00545fa1: mov ebp, esp */ r_ebp = r_esp;
    /* 00545fa3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00545fa4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00545fa7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00545faa: mov dword ptr [eax], 0x6c679c */ W32((u32)(r_eax), 0x6c679cu);
    /* 00545fb0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00545fb3: call 0x643da0 */ r_esp -= 4; W32(r_esp, 0x545fb8u); f_00643da0();
    /* 00545fb8: mov esp, ebp */ r_esp = r_ebp;
    /* 00545fba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00545fbb: ret  */ FN_RET(0x00545fa0); r_esp += 4; return;
}

void f_00545fe0(void) /* unknown_libname_776 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00545fe0);
    /* 00545fe0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00545fe1: mov ebp, esp */ r_ebp = r_esp;
    /* 00545fe3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00545fe4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00545fe7: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00545fe9: mov esp, ebp */ r_esp = r_ebp;
    /* 00545feb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00545fec: ret  */ FN_RET(0x00545fe0); r_esp += 4; return;
}

void f_00546580(void) /* ?SetMiniFrameButton@CMFCCaptionButton@@QAEXH@Z */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00546580);
    /* 00546580: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00546581: mov ebp, esp */ r_ebp = r_esp;
    /* 00546583: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00546584: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00546587: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054658a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0054658d: mov dword ptr [eax + 0x2c], ecx */ W32((u32)(r_eax+0x2cu), r_ecx);
    /* 00546590: mov esp, ebp */ r_esp = r_ebp;
    /* 00546592: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00546593: ret 4 */ FN_RET(0x00546580); r_esp += 8; return;
}

void f_005468e0(void) /* ?unbuffered@streambuf@@IAEXH@Z */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005468e0);
    /* 005468e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005468e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005468e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005468e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005468e7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005468ea: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005468ed: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 005468f0: mov esp, ebp */ r_esp = r_ebp;
    /* 005468f2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005468f3: ret 4 */ FN_RET(0x005468e0); r_esp += 8; return;
}

void f_005469a0(void) /* ??1CExpandoObject@@UAE@XZ_32 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005469a0);
    /* 005469a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005469a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005469a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005469a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005469a7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005469aa: mov dword ptr [eax], 0x6c6890 */ W32((u32)(r_eax), 0x6c6890u);
    /* 005469b0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005469b3: call 0x600aa0 */ r_esp -= 4; W32(r_esp, 0x5469b8u); f_00600aa0();
    /* 005469b8: mov esp, ebp */ r_esp = r_ebp;
    /* 005469ba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005469bb: ret  */ FN_RET(0x005469a0); r_esp += 4; return;
}

void f_005472c0(void) /* ??_G_com_error@@UAEPAXI@Z_120 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005472c0);
    /* 005472c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005472c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005472c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005472c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005472c7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005472ca: call 0x542f20 */ r_esp -= 4; W32(r_esp, 0x5472cfu); f_00542f20();
    /* 005472cf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005472d2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005472d5: je 0x5472e3 */ if (fZ) goto L_005472e3;
L_005472d7:; BB(0x005472d7);
    /* 005472d7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005472da: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005472db: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5472e0u); f_00686cae();
    /* 005472e0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005472e3:; BB(0x005472e3);
    /* 005472e3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005472e6: mov esp, ebp */ r_esp = r_ebp;
    /* 005472e8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005472e9: ret 4 */ FN_RET(0x005472c0); r_esp += 8; return;
}

void f_00547330(void) /* ??_G_com_error@@UAEPAXI@Z_121 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00547330);
    /* 00547330: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00547331: mov ebp, esp */ r_ebp = r_esp;
    /* 00547333: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00547334: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00547337: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054733a: call 0x545fa0 */ r_esp -= 4; W32(r_esp, 0x54733fu); f_00545fa0();
    /* 0054733f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00547342: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00547345: je 0x547353 */ if (fZ) goto L_00547353;
L_00547347:; BB(0x00547347);
    /* 00547347: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054734a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054734b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x547350u); f_00686cae();
    /* 00547350: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00547353:; BB(0x00547353);
    /* 00547353: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00547356: mov esp, ebp */ r_esp = r_ebp;
    /* 00547358: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00547359: ret 4 */ FN_RET(0x00547330); r_esp += 8; return;
}

void f_00547360(void) /* ??_G_com_error@@UAEPAXI@Z_122 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00547360);
    /* 00547360: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00547361: mov ebp, esp */ r_ebp = r_esp;
    /* 00547363: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00547364: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00547367: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054736a: call 0x5469a0 */ r_esp -= 4; W32(r_esp, 0x54736fu); f_005469a0();
    /* 0054736f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00547372: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00547375: je 0x547383 */ if (fZ) goto L_00547383;
L_00547377:; BB(0x00547377);
    /* 00547377: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054737a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054737b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x547380u); f_00686cae();
    /* 00547380: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00547383:; BB(0x00547383);
    /* 00547383: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00547386: mov esp, ebp */ r_esp = r_ebp;
    /* 00547388: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00547389: ret 4 */ FN_RET(0x00547360); r_esp += 8; return;
}

void f_00547390(void) /* ??0_AFX_OLE_STATE@@QAE@XZ_27 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00547390);
    /* 00547390: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00547391: mov ebp, esp */ r_ebp = r_esp;
    /* 00547393: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00547394: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00547397: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054739a: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x54739fu); f_005e9e20();
    /* 0054739f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005473a2: mov dword ptr [eax], 0x6c693c */ W32((u32)(r_eax), 0x6c693cu);
    /* 005473a8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005473ab: mov esp, ebp */ r_esp = r_ebp;
    /* 005473ad: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005473ae: ret  */ FN_RET(0x00547390); r_esp += 4; return;
}

void f_005473b0(void) /* ??1_AFX_OLE_STATE@@UAE@XZ_27 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005473b0);
    /* 005473b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005473b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005473b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005473b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005473b7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005473ba: mov dword ptr [eax], 0x6c693c */ W32((u32)(r_eax), 0x6c693cu);
    /* 005473c0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005473c3: call 0x5e9e40 */ r_esp -= 4; W32(r_esp, 0x5473c8u); f_005e9e40();
    /* 005473c8: mov esp, ebp */ r_esp = r_ebp;
    /* 005473ca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005473cb: ret  */ FN_RET(0x005473b0); r_esp += 4; return;
}

void f_00547410(void) /* ??1CComCriticalSection@ATL@@QAE@XZ_15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00547410);
    /* 00547410: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00547411: mov ebp, esp */ r_ebp = r_esp;
    /* 00547413: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00547414: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00547417: mov esp, ebp */ r_esp = r_ebp;
    /* 00547419: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054741a: ret  */ FN_RET(0x00547410); r_esp += 4; return;
}

void f_00547420(void) /* ??_G_com_error@@UAEPAXI@Z_123 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00547420);
    /* 00547420: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00547421: mov ebp, esp */ r_ebp = r_esp;
    /* 00547423: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00547424: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00547427: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054742a: call 0x5473b0 */ r_esp -= 4; W32(r_esp, 0x54742fu); f_005473b0();
    /* 0054742f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00547432: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00547435: je 0x547443 */ if (fZ) goto L_00547443;
L_00547437:; BB(0x00547437);
    /* 00547437: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054743a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054743b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x547440u); f_00686cae();
    /* 00547440: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00547443:; BB(0x00547443);
    /* 00547443: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00547446: mov esp, ebp */ r_esp = r_ebp;
    /* 00547448: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00547449: ret 4 */ FN_RET(0x00547420); r_esp += 8; return;
}

void f_00548100(void) /* ??_G_com_error@@UAEPAXI@Z_124 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00548100);
    /* 00548100: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00548101: mov ebp, esp */ r_ebp = r_esp;
    /* 00548103: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00548104: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00548107: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054810a: call 0x5474a0 */ r_esp -= 4; W32(r_esp, 0x54810fu); f_005474a0();
    /* 0054810f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00548112: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00548115: je 0x548123 */ if (fZ) goto L_00548123;
L_00548117:; BB(0x00548117);
    /* 00548117: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054811a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054811b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x548120u); f_00686cae();
    /* 00548120: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00548123:; BB(0x00548123);
    /* 00548123: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00548126: mov esp, ebp */ r_esp = r_ebp;
    /* 00548128: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00548129: ret 4 */ FN_RET(0x00548100); r_esp += 8; return;
}

void f_00548220(void) /* ??1_Mtx_guard@@QAE@XZ_10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00548220);
    /* 00548220: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00548221: mov ebp, esp */ r_ebp = r_esp;
    /* 00548223: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00548224: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00548227: push 0x6c65d0 */ { u32 v = 0x6c65d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054822c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x548231u); f_00630f40();
    /* 00548231: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00548234: mov esp, ebp */ r_esp = r_ebp;
    /* 00548236: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00548237: ret  */ FN_RET(0x00548220); r_esp += 4; return;
}

void f_00548260(void) /* ?do_always_noconv@?$codecvt@DDU_Mbstatet@@@std@@MBE_NXZ_8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00548260);
    /* 00548260: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00548261: mov ebp, esp */ r_ebp = r_esp;
    /* 00548263: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00548264: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00548267: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00548269: mov esp, ebp */ r_esp = r_ebp;
    /* 0054826b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054826c: ret  */ FN_RET(0x00548260); r_esp += 4; return;
}

void f_00548290(void) /* unknown_libname_777 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00548290);
    /* 00548290: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00548291: mov ebp, esp */ r_ebp = r_esp;
    /* 00548293: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00548294: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00548297: mov eax, 1 */ r_eax = 0x1u;
    /* 0054829c: mov esp, ebp */ r_esp = r_ebp;
    /* 0054829e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054829f: ret  */ FN_RET(0x00548290); r_esp += 4; return;
}

void f_005482a0(void) /* unknown_libname_778 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005482a0);
    /* 005482a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005482a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005482a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005482a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005482a7: mov eax, 1 */ r_eax = 0x1u;
    /* 005482ac: mov esp, ebp */ r_esp = r_ebp;
    /* 005482ae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005482af: ret  */ FN_RET(0x005482a0); r_esp += 4; return;
}

void f_00548320(void) /* ??8_ContextCallback@details@Concurrency@@QBE_NABV012@@Z_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00548320);
    /* 00548320: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00548321: mov ebp, esp */ r_ebp = r_esp;
    /* 00548323: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00548324: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00548327: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00548329: mov esp, ebp */ r_esp = r_ebp;
    /* 0054832b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054832c: ret 4 */ FN_RET(0x00548320); r_esp += 8; return;
}

void f_00548330(void) /* ??8_ContextCallback@details@Concurrency@@QBE_NABV012@@Z_1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00548330);
    /* 00548330: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00548331: mov ebp, esp */ r_ebp = r_esp;
    /* 00548333: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00548334: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00548337: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00548339: mov esp, ebp */ r_esp = r_ebp;
    /* 0054833b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054833c: ret 4 */ FN_RET(0x00548330); r_esp += 8; return;
}

void f_00548380(void) /* unknown_libname_779 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00548380);
    /* 00548380: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00548381: mov ebp, esp */ r_ebp = r_esp;
    /* 00548383: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00548384: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00548387: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00548389: mov esp, ebp */ r_esp = r_ebp;
    /* 0054838b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054838c: ret  */ FN_RET(0x00548380); r_esp += 4; return;
}

void f_00548840(void) /* unknown_libname_780 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00548840);
    /* 00548840: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00548841: mov ebp, esp */ r_ebp = r_esp;
    /* 00548843: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00548844: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00548847: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00548849: mov esp, ebp */ r_esp = r_ebp;
    /* 0054884b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054884c: ret  */ FN_RET(0x00548840); r_esp += 4; return;
}

void f_00549f80(void) /* ?_Acquire@_NonReentrantPPLLock@details@Concurrency@@QAEXPAX@Z */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00549f80);
    /* 00549f80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00549f81: mov ebp, esp */ r_ebp = r_esp;
    /* 00549f83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00549f84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00549f87: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00549f89: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00549f8c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00549f8d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00549f90: call 0x549e80 */ r_esp -= 4; W32(r_esp, 0x549f95u); f_00549e80();
    /* 00549f95: mov esp, ebp */ r_esp = r_ebp;
    /* 00549f97: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00549f98: ret 4 */ FN_RET(0x00549f80); r_esp += 8; return;
}

void f_0054a820(void) /* ?do_always_noconv@?$codecvt@DDU_Mbstatet@@@std@@MBE_NXZ_9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0054a820);
    /* 0054a820: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054a821: mov ebp, esp */ r_ebp = r_esp;
    /* 0054a823: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054a824: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0054a827: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0054a829: mov esp, ebp */ r_esp = r_ebp;
    /* 0054a82b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054a82c: ret  */ FN_RET(0x0054a820); r_esp += 4; return;
}

void f_0054c3c0(void) /* ??_G_com_error@@UAEPAXI@Z_125 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0054c3c0);
    /* 0054c3c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054c3c1: mov ebp, esp */ r_ebp = r_esp;
    /* 0054c3c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054c3c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0054c3c7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054c3ca: call 0x5488b0 */ r_esp -= 4; W32(r_esp, 0x54c3cfu); f_005488b0();
    /* 0054c3cf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0054c3d2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0054c3d5: je 0x54c3e3 */ if (fZ) goto L_0054c3e3;
L_0054c3d7:; BB(0x0054c3d7);
    /* 0054c3d7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054c3da: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054c3db: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x54c3e0u); f_00686cae();
    /* 0054c3e0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0054c3e3:; BB(0x0054c3e3);
    /* 0054c3e3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054c3e6: mov esp, ebp */ r_esp = r_ebp;
    /* 0054c3e8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054c3e9: ret 4 */ FN_RET(0x0054c3c0); r_esp += 8; return;
}

void f_00555a20(void) /* ??_G_com_error@@UAEPAXI@Z_126 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00555a20);
    /* 00555a20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00555a21: mov ebp, esp */ r_ebp = r_esp;
    /* 00555a23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00555a24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00555a27: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00555a2a: call 0x552840 */ r_esp -= 4; W32(r_esp, 0x555a2fu); f_00552840();
    /* 00555a2f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00555a32: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00555a35: je 0x555a43 */ if (fZ) goto L_00555a43;
L_00555a37:; BB(0x00555a37);
    /* 00555a37: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00555a3a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00555a3b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x555a40u); f_00686cae();
    /* 00555a40: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00555a43:; BB(0x00555a43);
    /* 00555a43: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00555a46: mov esp, ebp */ r_esp = r_ebp;
    /* 00555a48: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00555a49: ret 4 */ FN_RET(0x00555a20); r_esp += 8; return;
}

void f_00555a50(void) /* ??_G_com_error@@UAEPAXI@Z_127 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00555a50);
    /* 00555a50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00555a51: mov ebp, esp */ r_ebp = r_esp;
    /* 00555a53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00555a54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00555a57: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00555a5a: call 0x552ce0 */ r_esp -= 4; W32(r_esp, 0x555a5fu); f_00552ce0();
    /* 00555a5f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00555a62: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00555a65: je 0x555a73 */ if (fZ) goto L_00555a73;
L_00555a67:; BB(0x00555a67);
    /* 00555a67: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00555a6a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00555a6b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x555a70u); f_00686cae();
    /* 00555a70: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00555a73:; BB(0x00555a73);
    /* 00555a73: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00555a76: mov esp, ebp */ r_esp = r_ebp;
    /* 00555a78: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00555a79: ret 4 */ FN_RET(0x00555a50); r_esp += 8; return;
}

void f_00555a80(void) /* ??_G_com_error@@UAEPAXI@Z_128 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00555a80);
    /* 00555a80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00555a81: mov ebp, esp */ r_ebp = r_esp;
    /* 00555a83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00555a84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00555a87: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00555a8a: call 0x5555d0 */ r_esp -= 4; W32(r_esp, 0x555a8fu); f_005555d0();
    /* 00555a8f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00555a92: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00555a95: je 0x555aa3 */ if (fZ) goto L_00555aa3;
L_00555a97:; BB(0x00555a97);
    /* 00555a97: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00555a9a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00555a9b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x555aa0u); f_00686cae();
    /* 00555aa0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00555aa3:; BB(0x00555aa3);
    /* 00555aa3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00555aa6: mov esp, ebp */ r_esp = r_ebp;
    /* 00555aa8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00555aa9: ret 4 */ FN_RET(0x00555a80); r_esp += 8; return;
}

void f_00556850(void) /* ?do_always_noconv@?$codecvt@DDU_Mbstatet@@@std@@MBE_NXZ_10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00556850);
    /* 00556850: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00556851: mov ebp, esp */ r_ebp = r_esp;
    /* 00556853: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00556854: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00556857: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00556859: mov esp, ebp */ r_esp = r_ebp;
    /* 0055685b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055685c: ret  */ FN_RET(0x00556850); r_esp += 4; return;
}

void f_00556860(void) /* ??_G_com_error@@UAEPAXI@Z_129 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00556860);
    /* 00556860: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00556861: mov ebp, esp */ r_ebp = r_esp;
    /* 00556863: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00556864: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00556867: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055686a: call 0x555b00 */ r_esp -= 4; W32(r_esp, 0x55686fu); f_00555b00();
    /* 0055686f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00556872: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00556875: je 0x556883 */ if (fZ) goto L_00556883;
L_00556877:; BB(0x00556877);
    /* 00556877: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055687a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055687b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x556880u); f_00686cae();
    /* 00556880: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00556883:; BB(0x00556883);
    /* 00556883: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00556886: mov esp, ebp */ r_esp = r_ebp;
    /* 00556888: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00556889: ret 4 */ FN_RET(0x00556860); r_esp += 8; return;
}

void f_00556980(void) /* ??1_Mtx_guard@@QAE@XZ_11 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00556980);
    /* 00556980: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00556981: mov ebp, esp */ r_ebp = r_esp;
    /* 00556983: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00556984: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00556987: push 0x6c8514 */ { u32 v = 0x6c8514u; r_esp -= 4; W32(r_esp, v); }
    /* 0055698c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x556991u); f_00630f40();
    /* 00556991: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00556994: mov esp, ebp */ r_esp = r_ebp;
    /* 00556996: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00556997: ret  */ FN_RET(0x00556980); r_esp += 4; return;
}

void f_005569c0(void) /* ?do_always_noconv@?$codecvt@DDU_Mbstatet@@@std@@MBE_NXZ_11 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005569c0);
    /* 005569c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005569c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005569c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005569c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005569c7: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005569c9: mov esp, ebp */ r_esp = r_ebp;
    /* 005569cb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005569cc: ret  */ FN_RET(0x005569c0); r_esp += 4; return;
}

void f_005569f0(void) /* unknown_libname_781 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005569f0);
    /* 005569f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005569f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005569f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005569f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005569f7: mov eax, 1 */ r_eax = 0x1u;
    /* 005569fc: mov esp, ebp */ r_esp = r_ebp;
    /* 005569fe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005569ff: ret  */ FN_RET(0x005569f0); r_esp += 4; return;
}

void f_00556a00(void) /* unknown_libname_782 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00556a00);
    /* 00556a00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00556a01: mov ebp, esp */ r_ebp = r_esp;
    /* 00556a03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00556a04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00556a07: mov eax, 1 */ r_eax = 0x1u;
    /* 00556a0c: mov esp, ebp */ r_esp = r_ebp;
    /* 00556a0e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00556a0f: ret  */ FN_RET(0x00556a00); r_esp += 4; return;
}

void f_00556a80(void) /* ??8_ContextCallback@details@Concurrency@@QBE_NABV012@@Z_2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00556a80);
    /* 00556a80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00556a81: mov ebp, esp */ r_ebp = r_esp;
    /* 00556a83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00556a84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00556a87: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00556a89: mov esp, ebp */ r_esp = r_ebp;
    /* 00556a8b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00556a8c: ret 4 */ FN_RET(0x00556a80); r_esp += 8; return;
}

void f_00556a90(void) /* ??8_ContextCallback@details@Concurrency@@QBE_NABV012@@Z_3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00556a90);
    /* 00556a90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00556a91: mov ebp, esp */ r_ebp = r_esp;
    /* 00556a93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00556a94: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00556a97: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00556a99: mov esp, ebp */ r_esp = r_ebp;
    /* 00556a9b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00556a9c: ret 4 */ FN_RET(0x00556a90); r_esp += 8; return;
}

void f_00556ae0(void) /* unknown_libname_783 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00556ae0);
    /* 00556ae0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00556ae1: mov ebp, esp */ r_ebp = r_esp;
    /* 00556ae3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00556ae4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00556ae7: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00556ae9: mov esp, ebp */ r_esp = r_ebp;
    /* 00556aeb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00556aec: ret  */ FN_RET(0x00556ae0); r_esp += 4; return;
}

void f_005570a0(void) /* ?do_always_noconv@?$codecvt@DDU_Mbstatet@@@std@@MBE_NXZ_12 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005570a0);
    /* 005570a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005570a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005570a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005570a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005570a7: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005570a9: mov esp, ebp */ r_esp = r_ebp;
    /* 005570ab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005570ac: ret  */ FN_RET(0x005570a0); r_esp += 4; return;
}

void f_005570b0(void) /* ??_G_com_error@@UAEPAXI@Z_130 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005570b0);
    /* 005570b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005570b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005570b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005570b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005570b7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005570ba: call 0x5e9e40 */ r_esp -= 4; W32(r_esp, 0x5570bfu); f_005e9e40();
    /* 005570bf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005570c2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005570c5: je 0x5570d3 */ if (fZ) goto L_005570d3;
L_005570c7:; BB(0x005570c7);
    /* 005570c7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005570ca: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005570cb: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5570d0u); f_00686cae();
    /* 005570d0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005570d3:; BB(0x005570d3);
    /* 005570d3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005570d6: mov esp, ebp */ r_esp = r_ebp;
    /* 005570d8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005570d9: ret 4 */ FN_RET(0x005570b0); r_esp += 8; return;
}

void f_00559200(void) /* ??_G_com_error@@UAEPAXI@Z_131 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00559200);
    /* 00559200: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00559201: mov ebp, esp */ r_ebp = r_esp;
    /* 00559203: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00559204: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00559207: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055920a: call 0x557110 */ r_esp -= 4; W32(r_esp, 0x55920fu); f_00557110();
    /* 0055920f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00559212: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00559215: je 0x559223 */ if (fZ) goto L_00559223;
L_00559217:; BB(0x00559217);
    /* 00559217: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055921a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055921b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x559220u); f_00686cae();
    /* 00559220: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00559223:; BB(0x00559223);
    /* 00559223: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00559226: mov esp, ebp */ r_esp = r_ebp;
    /* 00559228: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00559229: ret 4 */ FN_RET(0x00559200); r_esp += 8; return;
}

void f_005630c0(void) /* ??0_AFX_OLE_STATE@@QAE@XZ_28 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005630c0);
    /* 005630c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005630c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005630c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005630c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005630c7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005630ca: call 0x601a80 */ r_esp -= 4; W32(r_esp, 0x5630cfu); f_00601a80();
    /* 005630cf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005630d2: mov dword ptr [eax], 0x6c97dc */ W32((u32)(r_eax), 0x6c97dcu);
    /* 005630d8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005630db: mov esp, ebp */ r_esp = r_ebp;
    /* 005630dd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005630de: ret  */ FN_RET(0x005630c0); r_esp += 4; return;
}

void f_005630e0(void) /* ??1_AFX_OLE_STATE@@UAE@XZ_28 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005630e0);
    /* 005630e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005630e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005630e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005630e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005630e7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005630ea: mov dword ptr [eax], 0x6c97dc */ W32((u32)(r_eax), 0x6c97dcu);
    /* 005630f0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005630f3: call 0x601ba0 */ r_esp -= 4; W32(r_esp, 0x5630f8u); f_00601ba0();
    /* 005630f8: mov esp, ebp */ r_esp = r_ebp;
    /* 005630fa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005630fb: ret  */ FN_RET(0x005630e0); r_esp += 4; return;
}

void f_005633a0(void) /* ??1CExpandoObject@@UAE@XZ_33 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005633a0);
    /* 005633a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005633a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005633a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005633a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005633a7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005633aa: mov dword ptr [eax], 0x6c98d0 */ W32((u32)(r_eax), 0x6c98d0u);
    /* 005633b0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005633b3: call 0x600aa0 */ r_esp -= 4; W32(r_esp, 0x5633b8u); f_00600aa0();
    /* 005633b8: mov esp, ebp */ r_esp = r_ebp;
    /* 005633ba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005633bb: ret  */ FN_RET(0x005633a0); r_esp += 4; return;
}

void f_005634e0(void) /* ??1CExpandoObject@@UAE@XZ_34 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005634e0);
    /* 005634e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005634e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005634e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005634e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005634e7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005634ea: mov dword ptr [eax], 0x6c98ec */ W32((u32)(r_eax), 0x6c98ecu);
    /* 005634f0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005634f3: call 0x600aa0 */ r_esp -= 4; W32(r_esp, 0x5634f8u); f_00600aa0();
    /* 005634f8: mov esp, ebp */ r_esp = r_ebp;
    /* 005634fa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005634fb: ret  */ FN_RET(0x005634e0); r_esp += 4; return;
}

void f_00563b40(void) /* ??0_AFX_OLE_STATE@@QAE@XZ_29 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00563b40);
    /* 00563b40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00563b41: mov ebp, esp */ r_ebp = r_esp;
    /* 00563b43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00563b44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00563b47: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00563b4a: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x563b4fu); f_005eaaf0();
    /* 00563b4f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00563b52: mov dword ptr [eax], 0x6c9914 */ W32((u32)(r_eax), 0x6c9914u);
    /* 00563b58: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00563b5b: mov esp, ebp */ r_esp = r_ebp;
    /* 00563b5d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00563b5e: ret  */ FN_RET(0x00563b40); r_esp += 4; return;
}

void f_00563b60(void) /* ??1_AFX_OLE_STATE@@UAE@XZ_29 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00563b60);
    /* 00563b60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00563b61: mov ebp, esp */ r_ebp = r_esp;
    /* 00563b63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00563b64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00563b67: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00563b6a: mov dword ptr [eax], 0x6c9914 */ W32((u32)(r_eax), 0x6c9914u);
    /* 00563b70: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00563b73: call 0x5eac00 */ r_esp -= 4; W32(r_esp, 0x563b78u); f_005eac00();
    /* 00563b78: mov esp, ebp */ r_esp = r_ebp;
    /* 00563b7a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00563b7b: ret  */ FN_RET(0x00563b60); r_esp += 4; return;
}

void f_00563d30(void) /* ??Y?$CStringT@_WV?$StrTraitMFC@_WV?$ChTraitsCRT@_W@ATL@@@@@ATL@@QAEAAV01@PBD@Z_1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00563d30);
    /* 00563d30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00563d31: mov ebp, esp */ r_ebp = r_esp;
    /* 00563d33: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00563d35: push 0x6a5a97 */ { u32 v = 0x6a5a97u; r_esp -= 4; W32(r_esp, v); }
    /* 00563d3a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00563d40: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00563d41: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00563d44: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00563d49: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00563d4b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00563d4c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00563d4f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00563d55: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00563d58: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00563d5b: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x563d60u); f_005e9e20();
    /* 00563d60: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00563d67: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00563d6a: mov dword ptr [eax], 0x6c99d0 */ W32((u32)(r_eax), 0x6c99d0u);
    /* 00563d70: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00563d77: jmp 0x563d82 */ goto L_00563d82;
L_00563d79:; BB(0x00563d79);
    /* 00563d79: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00563d7c: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00563d7f: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_00563d82:; BB(0x00563d82);
    /* 00563d82: cmp dword ptr [ebp - 0x10], 0x31 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x31u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00563d86: jge 0x563dee */ if ((fS==fO)) goto L_00563dee;
L_00563d88:; BB(0x00563d88);
    /* 00563d88: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00563d8b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00563d8e: mov dword ptr [eax + edx*4 + 4], 0 */ W32((u32)(r_eax+r_edx*4+0x4u), 0x0u);
    /* 00563d96: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 00563d9d: jmp 0x563da8 */ goto L_00563da8;
L_00563d9f:; BB(0x00563d9f);
    /* 00563d9f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00563da2: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00563da5: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
L_00563da8:; BB(0x00563da8);
    /* 00563da8: cmp dword ptr [ebp - 0x14], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00563dac: jge 0x563dca */ if ((fS==fO)) goto L_00563dca;
L_00563dae:; BB(0x00563dae);
    /* 00563dae: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00563db1: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00563db4: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00563db7: lea ecx, [eax + edx + 0xc8] */ r_ecx = (u32)(r_eax+r_edx+0xc8u);
    /* 00563dbe: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00563dc1: mov dword ptr [ecx + edx*4], 0 */ W32((u32)(r_ecx+r_edx*4), 0x0u);
    /* 00563dc8: jmp 0x563d9f */ goto L_00563d9f;
L_00563dca:; BB(0x00563dca);
    /* 00563dca: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00563dcd: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00563dd0: mov dword ptr [ecx + eax*4 + 0x49c], 0 */ W32((u32)(r_ecx+r_eax*4+0x49cu), 0x0u);
    /* 00563ddb: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00563dde: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00563de1: mov dword ptr [eax + edx*4 + 0x848], 0 */ W32((u32)(r_eax+r_edx*4+0x848u), 0x0u);
    /* 00563dec: jmp 0x563d79 */ goto L_00563d79;
L_00563dee:; BB(0x00563dee);
    /* 00563dee: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00563df1: mov dword ptr [ecx + 0x844], 0xffffffff */ W32((u32)(r_ecx+0x844u), 0xffffffffu);
    /* 00563dfb: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00563dfe: mov dword ptr [edx + 0x560], 0 */ W32((u32)(r_edx+0x560u), 0x0u);
    /* 00563e08: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00563e0b: call 0x563fb0 */ r_esp -= 4; W32(r_esp, 0x563e10u); f_00563fb0();
    /* 00563e10: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00563e17: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00563e1a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00563e1d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00563e24: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00563e25: mov esp, ebp */ r_esp = r_ebp;
    /* 00563e27: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00563e28: ret  */ FN_RET(0x00563d30); r_esp += 4; return;
}

void f_00564f40(void) /* ??1CExpandoObject@@UAE@XZ_35 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00564f40);
    /* 00564f40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00564f41: mov ebp, esp */ r_ebp = r_esp;
    /* 00564f43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00564f44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00564f47: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00564f4a: mov dword ptr [eax], 0x6c99dc */ W32((u32)(r_eax), 0x6c99dcu);
    /* 00564f50: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00564f53: call 0x643da0 */ r_esp -= 4; W32(r_esp, 0x564f58u); f_00643da0();
    /* 00564f58: mov esp, ebp */ r_esp = r_ebp;
    /* 00564f5a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00564f5b: ret  */ FN_RET(0x00564f40); r_esp += 4; return;
}

void f_00565cd0(void) /* ?GetIID@CDeferredCommand@@QAEABU_GUID@@XZ */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00565cd0);
    /* 00565cd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00565cd1: mov ebp, esp */ r_ebp = r_esp;
    /* 00565cd3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00565cd4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00565cd7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00565cda: mov eax, dword ptr [eax + 0x28] */ r_eax = R32((u32)(r_eax+0x28u));
    /* 00565cdd: mov esp, ebp */ r_esp = r_ebp;
    /* 00565cdf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00565ce0: ret  */ FN_RET(0x00565cd0); r_esp += 4; return;
}

void f_00566c20(void) /* ??_G_com_error@@UAEPAXI@Z_132 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00566c20);
    /* 00566c20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00566c21: mov ebp, esp */ r_ebp = r_esp;
    /* 00566c23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00566c24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00566c27: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00566c2a: call 0x55fb10 */ r_esp -= 4; W32(r_esp, 0x566c2fu); f_0055fb10();
    /* 00566c2f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00566c32: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00566c35: je 0x566c43 */ if (fZ) goto L_00566c43;
L_00566c37:; BB(0x00566c37);
    /* 00566c37: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00566c3a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00566c3b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x566c40u); f_00686cae();
    /* 00566c40: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00566c43:; BB(0x00566c43);
    /* 00566c43: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00566c46: mov esp, ebp */ r_esp = r_ebp;
    /* 00566c48: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00566c49: ret 4 */ FN_RET(0x00566c20); r_esp += 8; return;
}

void f_00566c50(void) /* ??_G_com_error@@UAEPAXI@Z_133 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00566c50);
    /* 00566c50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00566c51: mov ebp, esp */ r_ebp = r_esp;
    /* 00566c53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00566c54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00566c57: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00566c5a: call 0x5630e0 */ r_esp -= 4; W32(r_esp, 0x566c5fu); f_005630e0();
    /* 00566c5f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00566c62: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00566c65: je 0x566c73 */ if (fZ) goto L_00566c73;
L_00566c67:; BB(0x00566c67);
    /* 00566c67: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00566c6a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00566c6b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x566c70u); f_00686cae();
    /* 00566c70: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00566c73:; BB(0x00566c73);
    /* 00566c73: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00566c76: mov esp, ebp */ r_esp = r_ebp;
    /* 00566c78: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00566c79: ret 4 */ FN_RET(0x00566c50); r_esp += 8; return;
}

void f_00566c80(void) /* ??_G_com_error@@UAEPAXI@Z_134 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00566c80);
    /* 00566c80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00566c81: mov ebp, esp */ r_ebp = r_esp;
    /* 00566c83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00566c84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00566c87: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00566c8a: call 0x5633a0 */ r_esp -= 4; W32(r_esp, 0x566c8fu); f_005633a0();
    /* 00566c8f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00566c92: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00566c95: je 0x566ca3 */ if (fZ) goto L_00566ca3;
L_00566c97:; BB(0x00566c97);
    /* 00566c97: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00566c9a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00566c9b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x566ca0u); f_00686cae();
    /* 00566ca0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00566ca3:; BB(0x00566ca3);
    /* 00566ca3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00566ca6: mov esp, ebp */ r_esp = r_ebp;
    /* 00566ca8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00566ca9: ret 4 */ FN_RET(0x00566c80); r_esp += 8; return;
}

void f_00566cb0(void) /* ??_G_com_error@@UAEPAXI@Z_135 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00566cb0);
    /* 00566cb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00566cb1: mov ebp, esp */ r_ebp = r_esp;
    /* 00566cb3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00566cb4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00566cb7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00566cba: call 0x5634e0 */ r_esp -= 4; W32(r_esp, 0x566cbfu); f_005634e0();
    /* 00566cbf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00566cc2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00566cc5: je 0x566cd3 */ if (fZ) goto L_00566cd3;
L_00566cc7:; BB(0x00566cc7);
    /* 00566cc7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00566cca: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00566ccb: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x566cd0u); f_00686cae();
    /* 00566cd0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00566cd3:; BB(0x00566cd3);
    /* 00566cd3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00566cd6: mov esp, ebp */ r_esp = r_ebp;
    /* 00566cd8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00566cd9: ret 4 */ FN_RET(0x00566cb0); r_esp += 8; return;
}

void f_00566ce0(void) /* ??_G_com_error@@UAEPAXI@Z_136 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00566ce0);
    /* 00566ce0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00566ce1: mov ebp, esp */ r_ebp = r_esp;
    /* 00566ce3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00566ce4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00566ce7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00566cea: call 0x5635f0 */ r_esp -= 4; W32(r_esp, 0x566cefu); f_005635f0();
    /* 00566cef: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00566cf2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00566cf5: je 0x566d03 */ if (fZ) goto L_00566d03;
L_00566cf7:; BB(0x00566cf7);
    /* 00566cf7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00566cfa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00566cfb: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x566d00u); f_00686cae();
    /* 00566d00: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00566d03:; BB(0x00566d03);
    /* 00566d03: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00566d06: mov esp, ebp */ r_esp = r_ebp;
    /* 00566d08: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00566d09: ret 4 */ FN_RET(0x00566ce0); r_esp += 8; return;
}

void f_00566d10(void) /* ??_G_com_error@@UAEPAXI@Z_137 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00566d10);
    /* 00566d10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00566d11: mov ebp, esp */ r_ebp = r_esp;
    /* 00566d13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00566d14: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00566d17: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00566d1a: call 0x563b60 */ r_esp -= 4; W32(r_esp, 0x566d1fu); f_00563b60();
    /* 00566d1f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00566d22: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00566d25: je 0x566d33 */ if (fZ) goto L_00566d33;
L_00566d27:; BB(0x00566d27);
    /* 00566d27: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00566d2a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00566d2b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x566d30u); f_00686cae();
    /* 00566d30: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00566d33:; BB(0x00566d33);
    /* 00566d33: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00566d36: mov esp, ebp */ r_esp = r_ebp;
    /* 00566d38: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00566d39: ret 4 */ FN_RET(0x00566d10); r_esp += 8; return;
}

void f_00566d40(void) /* ??_G_com_error@@UAEPAXI@Z_138 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00566d40);
    /* 00566d40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00566d41: mov ebp, esp */ r_ebp = r_esp;
    /* 00566d43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00566d44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00566d47: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00566d4a: call 0x563e30 */ r_esp -= 4; W32(r_esp, 0x566d4fu); f_00563e30();
    /* 00566d4f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00566d52: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00566d55: je 0x566d63 */ if (fZ) goto L_00566d63;
L_00566d57:; BB(0x00566d57);
    /* 00566d57: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00566d5a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00566d5b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x566d60u); f_00686cae();
    /* 00566d60: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00566d63:; BB(0x00566d63);
    /* 00566d63: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00566d66: mov esp, ebp */ r_esp = r_ebp;
    /* 00566d68: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00566d69: ret 4 */ FN_RET(0x00566d40); r_esp += 8; return;
}

void f_00566d70(void) /* ??_G_com_error@@UAEPAXI@Z_139 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00566d70);
    /* 00566d70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00566d71: mov ebp, esp */ r_ebp = r_esp;
    /* 00566d73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00566d74: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00566d77: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00566d7a: call 0x564f40 */ r_esp -= 4; W32(r_esp, 0x566d7fu); f_00564f40();
    /* 00566d7f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00566d82: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00566d85: je 0x566d93 */ if (fZ) goto L_00566d93;
L_00566d87:; BB(0x00566d87);
    /* 00566d87: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00566d8a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00566d8b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x566d90u); f_00686cae();
    /* 00566d90: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00566d93:; BB(0x00566d93);
    /* 00566d93: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00566d96: mov esp, ebp */ r_esp = r_ebp;
    /* 00566d98: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00566d99: ret 4 */ FN_RET(0x00566d70); r_esp += 8; return;
}

void f_00567b00(void) /* ??_G_com_error@@UAEPAXI@Z_140 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00567b00);
    /* 00567b00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00567b01: mov ebp, esp */ r_ebp = r_esp;
    /* 00567b03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00567b04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00567b07: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00567b0a: call 0x566df0 */ r_esp -= 4; W32(r_esp, 0x567b0fu); f_00566df0();
    /* 00567b0f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00567b12: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00567b15: je 0x567b23 */ if (fZ) goto L_00567b23;
L_00567b17:; BB(0x00567b17);
    /* 00567b17: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00567b1a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00567b1b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x567b20u); f_00686cae();
    /* 00567b20: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00567b23:; BB(0x00567b23);
    /* 00567b23: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00567b26: mov esp, ebp */ r_esp = r_ebp;
    /* 00567b28: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00567b29: ret 4 */ FN_RET(0x00567b00); r_esp += 8; return;
}

void f_00567c20(void) /* ??1_Mtx_guard@@QAE@XZ_12 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00567c20);
    /* 00567c20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00567c21: mov ebp, esp */ r_ebp = r_esp;
    /* 00567c23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00567c24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00567c27: push 0x6c9750 */ { u32 v = 0x6c9750u; r_esp -= 4; W32(r_esp, v); }
    /* 00567c2c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x567c31u); f_00630f40();
    /* 00567c31: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00567c34: mov esp, ebp */ r_esp = r_ebp;
    /* 00567c36: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00567c37: ret  */ FN_RET(0x00567c20); r_esp += 4; return;
}

void f_00567c60(void) /* ?do_always_noconv@?$codecvt@DDU_Mbstatet@@@std@@MBE_NXZ_13 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00567c60);
    /* 00567c60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00567c61: mov ebp, esp */ r_ebp = r_esp;
    /* 00567c63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00567c64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00567c67: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00567c69: mov esp, ebp */ r_esp = r_ebp;
    /* 00567c6b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00567c6c: ret  */ FN_RET(0x00567c60); r_esp += 4; return;
}

void f_00567c90(void) /* unknown_libname_784 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00567c90);
    /* 00567c90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00567c91: mov ebp, esp */ r_ebp = r_esp;
    /* 00567c93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00567c94: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00567c97: mov eax, 1 */ r_eax = 0x1u;
    /* 00567c9c: mov esp, ebp */ r_esp = r_ebp;
    /* 00567c9e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00567c9f: ret  */ FN_RET(0x00567c90); r_esp += 4; return;
}

void f_00567ca0(void) /* unknown_libname_785 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00567ca0);
    /* 00567ca0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00567ca1: mov ebp, esp */ r_ebp = r_esp;
    /* 00567ca3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00567ca4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00567ca7: mov eax, 1 */ r_eax = 0x1u;
    /* 00567cac: mov esp, ebp */ r_esp = r_ebp;
    /* 00567cae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00567caf: ret  */ FN_RET(0x00567ca0); r_esp += 4; return;
}

void f_00567d20(void) /* ??8_ContextCallback@details@Concurrency@@QBE_NABV012@@Z_4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00567d20);
    /* 00567d20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00567d21: mov ebp, esp */ r_ebp = r_esp;
    /* 00567d23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00567d24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00567d27: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00567d29: mov esp, ebp */ r_esp = r_ebp;
    /* 00567d2b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00567d2c: ret 4 */ FN_RET(0x00567d20); r_esp += 8; return;
}

void f_00567d30(void) /* ??8_ContextCallback@details@Concurrency@@QBE_NABV012@@Z_5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00567d30);
    /* 00567d30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00567d31: mov ebp, esp */ r_ebp = r_esp;
    /* 00567d33: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00567d34: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00567d37: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00567d39: mov esp, ebp */ r_esp = r_ebp;
    /* 00567d3b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00567d3c: ret 4 */ FN_RET(0x00567d30); r_esp += 8; return;
}

void f_00567d80(void) /* unknown_libname_786 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00567d80);
    /* 00567d80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00567d81: mov ebp, esp */ r_ebp = r_esp;
    /* 00567d83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00567d84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00567d87: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00567d89: mov esp, ebp */ r_esp = r_ebp;
    /* 00567d8b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00567d8c: ret  */ FN_RET(0x00567d80); r_esp += 4; return;
}

void f_00568310(void) /* ?do_always_noconv@?$codecvt@DDU_Mbstatet@@@std@@MBE_NXZ_14 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00568310);
    /* 00568310: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00568311: mov ebp, esp */ r_ebp = r_esp;
    /* 00568313: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00568314: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00568317: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00568319: mov esp, ebp */ r_esp = r_ebp;
    /* 0056831b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056831c: ret  */ FN_RET(0x00568310); r_esp += 4; return;
}

void f_0056b910(void) /* unknown_libname_543 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0056b910);
    /* 0056b910: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056b911: mov ebp, esp */ r_ebp = r_esp;
    /* 0056b913: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056b914: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0056b917: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056b91a: mov eax, dword ptr [eax + 0x2e0] */ r_eax = R32((u32)(r_eax+0x2e0u));
    /* 0056b920: mov esp, ebp */ r_esp = r_ebp;
    /* 0056b922: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056b923: ret  */ FN_RET(0x0056b910); r_esp += 4; return;
}

void f_0056ba10(void) /* ??_G_com_error@@UAEPAXI@Z_141 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0056ba10);
    /* 0056ba10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056ba11: mov ebp, esp */ r_ebp = r_esp;
    /* 0056ba13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056ba14: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0056ba17: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056ba1a: call 0x568360 */ r_esp -= 4; W32(r_esp, 0x56ba1fu); f_00568360();
    /* 0056ba1f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0056ba22: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0056ba25: je 0x56ba33 */ if (fZ) goto L_0056ba33;
L_0056ba27:; BB(0x0056ba27);
    /* 0056ba27: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056ba2a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056ba2b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x56ba30u); f_00686cae();
    /* 0056ba30: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0056ba33:; BB(0x0056ba33);
    /* 0056ba33: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056ba36: mov esp, ebp */ r_esp = r_ebp;
    /* 0056ba38: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056ba39: ret 4 */ FN_RET(0x0056ba10); r_esp += 8; return;
}

void f_0056e220(void) /* unknown_libname_787 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0056e220);
    /* 0056e220: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056e221: mov ebp, esp */ r_ebp = r_esp;
    /* 0056e223: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056e224: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0056e227: mov esp, ebp */ r_esp = r_ebp;
    /* 0056e229: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056e22a: ret 4 */ FN_RET(0x0056e220); r_esp += 8; return;
}

void f_0056e620(void) /* ??1CAtlWinModule@ATL@@QAE@XZ_1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0056e620);
    /* 0056e620: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056e621: mov ebp, esp */ r_ebp = r_esp;
    /* 0056e623: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056e624: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0056e627: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056e62a: call 0x56e560 */ r_esp -= 4; W32(r_esp, 0x56e62fu); f_0056e560();
    /* 0056e62f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056e632: call 0x56e640 */ r_esp -= 4; W32(r_esp, 0x56e637u); f_0056e640();
    /* 0056e637: mov esp, ebp */ r_esp = r_ebp;
    /* 0056e639: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056e63a: ret  */ FN_RET(0x0056e620); r_esp += 4; return;
}

void f_0056f9b0(void) /* ??0_AFX_OLE_STATE@@QAE@XZ_30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0056f9b0);
    /* 0056f9b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056f9b1: mov ebp, esp */ r_ebp = r_esp;
    /* 0056f9b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056f9b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0056f9b7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056f9ba: call 0x601a80 */ r_esp -= 4; W32(r_esp, 0x56f9bfu); f_00601a80();
    /* 0056f9bf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056f9c2: mov dword ptr [eax], 0x6ca364 */ W32((u32)(r_eax), 0x6ca364u);
    /* 0056f9c8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056f9cb: mov esp, ebp */ r_esp = r_ebp;
    /* 0056f9cd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056f9ce: ret  */ FN_RET(0x0056f9b0); r_esp += 4; return;
}

void f_0056f9d0(void) /* ??1_AFX_OLE_STATE@@UAE@XZ_30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0056f9d0);
    /* 0056f9d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056f9d1: mov ebp, esp */ r_ebp = r_esp;
    /* 0056f9d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056f9d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0056f9d7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056f9da: mov dword ptr [eax], 0x6ca364 */ W32((u32)(r_eax), 0x6ca364u);
    /* 0056f9e0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056f9e3: call 0x601ba0 */ r_esp -= 4; W32(r_esp, 0x56f9e8u); f_00601ba0();
    /* 0056f9e8: mov esp, ebp */ r_esp = r_ebp;
    /* 0056f9ea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056f9eb: ret  */ FN_RET(0x0056f9d0); r_esp += 4; return;
}

void f_0056fc10(void) /* ??0_AFX_OLE_STATE@@QAE@XZ_31 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0056fc10);
    /* 0056fc10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056fc11: mov ebp, esp */ r_ebp = r_esp;
    /* 0056fc13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056fc14: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0056fc17: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056fc1a: call 0x601a80 */ r_esp -= 4; W32(r_esp, 0x56fc1fu); f_00601a80();
    /* 0056fc1f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056fc22: mov dword ptr [eax], 0x6ca45c */ W32((u32)(r_eax), 0x6ca45cu);
    /* 0056fc28: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056fc2b: mov esp, ebp */ r_esp = r_ebp;
    /* 0056fc2d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056fc2e: ret  */ FN_RET(0x0056fc10); r_esp += 4; return;
}

void f_0056fc30(void) /* ??1_AFX_OLE_STATE@@UAE@XZ_31 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0056fc30);
    /* 0056fc30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056fc31: mov ebp, esp */ r_ebp = r_esp;
    /* 0056fc33: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056fc34: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0056fc37: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056fc3a: mov dword ptr [eax], 0x6ca45c */ W32((u32)(r_eax), 0x6ca45cu);
    /* 0056fc40: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056fc43: call 0x601ba0 */ r_esp -= 4; W32(r_esp, 0x56fc48u); f_00601ba0();
    /* 0056fc48: mov esp, ebp */ r_esp = r_ebp;
    /* 0056fc4a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056fc4b: ret  */ FN_RET(0x0056fc30); r_esp += 4; return;
}

void f_0056fcb0(void) /* ??1CExpandoObject@@UAE@XZ_36 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0056fcb0);
    /* 0056fcb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056fcb1: mov ebp, esp */ r_ebp = r_esp;
    /* 0056fcb3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056fcb4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0056fcb7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056fcba: mov dword ptr [eax], 0x6ca550 */ W32((u32)(r_eax), 0x6ca550u);
    /* 0056fcc0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056fcc3: call 0x5fc150 */ r_esp -= 4; W32(r_esp, 0x56fcc8u); f_005fc150();
    /* 0056fcc8: mov esp, ebp */ r_esp = r_ebp;
    /* 0056fcca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056fccb: ret  */ FN_RET(0x0056fcb0); r_esp += 4; return;
}

void f_005702e0(void) /* ??Y?$CStringT@_WV?$StrTraitMFC@_WV?$ChTraitsCRT@_W@ATL@@@@@ATL@@QAEAAV01@PBD@Z_2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005702e0);
    /* 005702e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005702e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005702e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005702e5: push 0x6a5f5d */ { u32 v = 0x6a5f5du; r_esp -= 4; W32(r_esp, v); }
    /* 005702ea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005702f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005702f1: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005702f4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005702f9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005702fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005702fc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005702ff: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00570305: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00570308: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057030b: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x570310u); f_005f5bf0();
    /* 00570310: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00570317: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057031a: mov dword ptr [eax], 0x6ca574 */ W32((u32)(r_eax), 0x6ca574u);
    /* 00570320: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 00570324: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00570326: jle 0x570338 */ if ((fZ||fS!=fO)) goto L_00570338;
L_00570328:; BB(0x00570328);
    /* 00570328: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057032b: mov ax, word ptr [ebp + 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 0057032f: mov word ptr [edx + 0x184], ax */ W16((u32)(r_edx+0x184u), (u16)r_eax);
    /* 00570336: jmp 0x570344 */ goto L_00570344;
L_00570338:; BB(0x00570338);
    /* 00570338: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057033b: mov word ptr [ecx + 0x184], 1 */ W16((u32)(r_ecx+0x184u), 0x1u);
L_00570344:; BB(0x00570344);
    /* 00570344: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00570347: mov dword ptr [edx + 0x190], 0 */ W32((u32)(r_edx+0x190u), 0x0u);
    /* 00570351: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00570354: movsx eax, word ptr [eax + 0x184] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x184u));
    /* 0057035b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0057035d: mov edx, 4 */ r_edx = 0x4u;
    /* 00570362: mul edx */ { u64 t = (u64)r_eax * r_edx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 00570364: seto cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fO) ? 1 : 0) & 0xffu);
    /* 00570367: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00570369: or ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0057036b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057036c: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x570371u); f_00686d82();
    /* 00570371: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00570374: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00570377: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057037a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057037d: mov dword ptr [eax + 0x18c], ecx */ W32((u32)(r_eax+0x18cu), r_ecx);
    /* 00570383: mov word ptr [ebp - 0x10], 0 */ W16((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00570389: jmp 0x570397 */ goto L_00570397;
L_0057038b:; BB(0x0057038b);
    /* 0057038b: mov dx, word ptr [ebp - 0x10] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff0u))) & 0xffffu);
    /* 0057038f: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00570393: mov word ptr [ebp - 0x10], dx */ W16((u32)(r_ebp+0xfffffff0u), (u16)r_edx);
L_00570397:; BB(0x00570397);
    /* 00570397: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0057039b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057039e: movsx edx, word ptr [ecx + 0x184] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x184u));
    /* 005703a5: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005703a7: jge 0x5703bf */ if ((fS==fO)) goto L_005703bf;
L_005703a9:; BB(0x005703a9);
    /* 005703a9: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 005703ad: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005703b0: mov edx, dword ptr [ecx + 0x18c] */ r_edx = R32((u32)(r_ecx+0x18cu));
    /* 005703b6: mov dword ptr [edx + eax*4], 0 */ W32((u32)(r_edx+r_eax*4), 0x0u);
    /* 005703bd: jmp 0x57038b */ goto L_0057038b;
L_005703bf:; BB(0x005703bf);
    /* 005703bf: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005703c6: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005703c9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005703cc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005703d3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005703d4: mov esp, ebp */ r_esp = r_ebp;
    /* 005703d6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005703d7: ret 4 */ FN_RET(0x005702e0); r_esp += 8; return;
}

void f_00571450(void) /* ??1CExpandoObject@@UAE@XZ_37 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00571450);
    /* 00571450: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00571451: mov ebp, esp */ r_ebp = r_esp;
    /* 00571453: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00571454: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00571457: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057145a: mov dword ptr [eax], 0x6ca744 */ W32((u32)(r_eax), 0x6ca744u);
    /* 00571460: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00571463: call 0x600e10 */ r_esp -= 4; W32(r_esp, 0x571468u); f_00600e10();
    /* 00571468: mov esp, ebp */ r_esp = r_ebp;
    /* 0057146a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057146b: ret  */ FN_RET(0x00571450); r_esp += 4; return;
}

void f_00571530(void) /* ??1CExpandoObject@@UAE@XZ_38 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00571530);
    /* 00571530: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00571531: mov ebp, esp */ r_ebp = r_esp;
    /* 00571533: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00571534: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00571537: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057153a: mov dword ptr [eax], 0x6ca760 */ W32((u32)(r_eax), 0x6ca760u);
    /* 00571540: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00571543: call 0x600aa0 */ r_esp -= 4; W32(r_esp, 0x571548u); f_00600aa0();
    /* 00571548: mov esp, ebp */ r_esp = r_ebp;
    /* 0057154a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057154b: ret  */ FN_RET(0x00571530); r_esp += 4; return;
}

void f_00571760(void) /* ??1CExpandoObject@@UAE@XZ_39 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00571760);
    /* 00571760: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00571761: mov ebp, esp */ r_ebp = r_esp;
    /* 00571763: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00571764: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00571767: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057176a: mov dword ptr [eax], 0x6ca77c */ W32((u32)(r_eax), 0x6ca77cu);
    /* 00571770: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00571773: call 0x5e9e40 */ r_esp -= 4; W32(r_esp, 0x571778u); f_005e9e40();
    /* 00571778: mov esp, ebp */ r_esp = r_ebp;
    /* 0057177a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057177b: ret  */ FN_RET(0x00571760); r_esp += 4; return;
}

void f_00571dd0(void) /* ??_G_com_error@@UAEPAXI@Z_142 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00571dd0);
    /* 00571dd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00571dd1: mov ebp, esp */ r_ebp = r_esp;
    /* 00571dd3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00571dd4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00571dd7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00571dda: call 0x56bbc0 */ r_esp -= 4; W32(r_esp, 0x571ddfu); f_0056bbc0();
    /* 00571ddf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00571de2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00571de5: je 0x571df3 */ if (fZ) goto L_00571df3;
L_00571de7:; BB(0x00571de7);
    /* 00571de7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00571dea: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00571deb: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x571df0u); f_00686cae();
    /* 00571df0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00571df3:; BB(0x00571df3);
    /* 00571df3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00571df6: mov esp, ebp */ r_esp = r_ebp;
    /* 00571df8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00571df9: ret 4 */ FN_RET(0x00571dd0); r_esp += 8; return;
}

void f_00571e00(void) /* ??_G_com_error@@UAEPAXI@Z_143 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00571e00);
    /* 00571e00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00571e01: mov ebp, esp */ r_ebp = r_esp;
    /* 00571e03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00571e04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00571e07: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00571e0a: call 0x56f9d0 */ r_esp -= 4; W32(r_esp, 0x571e0fu); f_0056f9d0();
    /* 00571e0f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00571e12: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00571e15: je 0x571e23 */ if (fZ) goto L_00571e23;
L_00571e17:; BB(0x00571e17);
    /* 00571e17: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00571e1a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00571e1b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x571e20u); f_00686cae();
    /* 00571e20: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00571e23:; BB(0x00571e23);
    /* 00571e23: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00571e26: mov esp, ebp */ r_esp = r_ebp;
    /* 00571e28: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00571e29: ret 4 */ FN_RET(0x00571e00); r_esp += 8; return;
}

void f_00571e30(void) /* ??_G_com_error@@UAEPAXI@Z_144 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00571e30);
    /* 00571e30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00571e31: mov ebp, esp */ r_ebp = r_esp;
    /* 00571e33: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00571e34: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00571e37: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00571e3a: call 0x56fc30 */ r_esp -= 4; W32(r_esp, 0x571e3fu); f_0056fc30();
    /* 00571e3f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00571e42: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00571e45: je 0x571e53 */ if (fZ) goto L_00571e53;
L_00571e47:; BB(0x00571e47);
    /* 00571e47: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00571e4a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00571e4b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x571e50u); f_00686cae();
    /* 00571e50: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00571e53:; BB(0x00571e53);
    /* 00571e53: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00571e56: mov esp, ebp */ r_esp = r_ebp;
    /* 00571e58: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00571e59: ret 4 */ FN_RET(0x00571e30); r_esp += 8; return;
}

void f_00571e60(void) /* ??_G_com_error@@UAEPAXI@Z_145 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00571e60);
    /* 00571e60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00571e61: mov ebp, esp */ r_ebp = r_esp;
    /* 00571e63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00571e64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00571e67: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00571e6a: call 0x56fcb0 */ r_esp -= 4; W32(r_esp, 0x571e6fu); f_0056fcb0();
    /* 00571e6f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00571e72: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00571e75: je 0x571e83 */ if (fZ) goto L_00571e83;
L_00571e77:; BB(0x00571e77);
    /* 00571e77: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00571e7a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00571e7b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x571e80u); f_00686cae();
    /* 00571e80: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00571e83:; BB(0x00571e83);
    /* 00571e83: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00571e86: mov esp, ebp */ r_esp = r_ebp;
    /* 00571e88: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00571e89: ret 4 */ FN_RET(0x00571e60); r_esp += 8; return;
}

void f_00571e90(void) /* ??_G_com_error@@UAEPAXI@Z_146 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00571e90);
    /* 00571e90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00571e91: mov ebp, esp */ r_ebp = r_esp;
    /* 00571e93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00571e94: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00571e97: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00571e9a: call 0x5703e0 */ r_esp -= 4; W32(r_esp, 0x571e9fu); f_005703e0();
    /* 00571e9f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00571ea2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00571ea5: je 0x571eb3 */ if (fZ) goto L_00571eb3;
L_00571ea7:; BB(0x00571ea7);
    /* 00571ea7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00571eaa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00571eab: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x571eb0u); f_00686cae();
    /* 00571eb0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00571eb3:; BB(0x00571eb3);
    /* 00571eb3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00571eb6: mov esp, ebp */ r_esp = r_ebp;
    /* 00571eb8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00571eb9: ret 4 */ FN_RET(0x00571e90); r_esp += 8; return;
}

void f_00571ec0(void) /* ??_G_com_error@@UAEPAXI@Z_147 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00571ec0);
    /* 00571ec0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00571ec1: mov ebp, esp */ r_ebp = r_esp;
    /* 00571ec3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00571ec4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00571ec7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00571eca: call 0x570b40 */ r_esp -= 4; W32(r_esp, 0x571ecfu); f_00570b40();
    /* 00571ecf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00571ed2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00571ed5: je 0x571ee3 */ if (fZ) goto L_00571ee3;
L_00571ed7:; BB(0x00571ed7);
    /* 00571ed7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00571eda: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00571edb: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x571ee0u); f_00686cae();
    /* 00571ee0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00571ee3:; BB(0x00571ee3);
    /* 00571ee3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00571ee6: mov esp, ebp */ r_esp = r_ebp;
    /* 00571ee8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00571ee9: ret 4 */ FN_RET(0x00571ec0); r_esp += 8; return;
}

void f_00571ef0(void) /* ??_G_com_error@@UAEPAXI@Z_148 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00571ef0);
    /* 00571ef0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00571ef1: mov ebp, esp */ r_ebp = r_esp;
    /* 00571ef3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00571ef4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00571ef7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00571efa: call 0x570da0 */ r_esp -= 4; W32(r_esp, 0x571effu); f_00570da0();
    /* 00571eff: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00571f02: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00571f05: je 0x571f13 */ if (fZ) goto L_00571f13;
L_00571f07:; BB(0x00571f07);
    /* 00571f07: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00571f0a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00571f0b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x571f10u); f_00686cae();
    /* 00571f10: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00571f13:; BB(0x00571f13);
    /* 00571f13: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00571f16: mov esp, ebp */ r_esp = r_ebp;
    /* 00571f18: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00571f19: ret 4 */ FN_RET(0x00571ef0); r_esp += 8; return;
}

void f_00571f20(void) /* ??_G_com_error@@UAEPAXI@Z_149 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00571f20);
    /* 00571f20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00571f21: mov ebp, esp */ r_ebp = r_esp;
    /* 00571f23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00571f24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00571f27: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00571f2a: call 0x571290 */ r_esp -= 4; W32(r_esp, 0x571f2fu); f_00571290();
    /* 00571f2f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00571f32: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00571f35: je 0x571f43 */ if (fZ) goto L_00571f43;
L_00571f37:; BB(0x00571f37);
    /* 00571f37: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00571f3a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00571f3b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x571f40u); f_00686cae();
    /* 00571f40: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00571f43:; BB(0x00571f43);
    /* 00571f43: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00571f46: mov esp, ebp */ r_esp = r_ebp;
    /* 00571f48: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00571f49: ret 4 */ FN_RET(0x00571f20); r_esp += 8; return;
}

void f_00571f50(void) /* ??_G_com_error@@UAEPAXI@Z_150 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00571f50);
    /* 00571f50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00571f51: mov ebp, esp */ r_ebp = r_esp;
    /* 00571f53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00571f54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00571f57: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00571f5a: call 0x571450 */ r_esp -= 4; W32(r_esp, 0x571f5fu); f_00571450();
    /* 00571f5f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00571f62: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00571f65: je 0x571f73 */ if (fZ) goto L_00571f73;
L_00571f67:; BB(0x00571f67);
    /* 00571f67: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00571f6a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00571f6b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x571f70u); f_00686cae();
    /* 00571f70: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00571f73:; BB(0x00571f73);
    /* 00571f73: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00571f76: mov esp, ebp */ r_esp = r_ebp;
    /* 00571f78: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00571f79: ret 4 */ FN_RET(0x00571f50); r_esp += 8; return;
}

void f_00571f80(void) /* ??_G_com_error@@UAEPAXI@Z_151 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00571f80);
    /* 00571f80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00571f81: mov ebp, esp */ r_ebp = r_esp;
    /* 00571f83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00571f84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00571f87: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00571f8a: call 0x571530 */ r_esp -= 4; W32(r_esp, 0x571f8fu); f_00571530();
    /* 00571f8f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00571f92: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00571f95: je 0x571fa3 */ if (fZ) goto L_00571fa3;
L_00571f97:; BB(0x00571f97);
    /* 00571f97: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00571f9a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00571f9b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x571fa0u); f_00686cae();
    /* 00571fa0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00571fa3:; BB(0x00571fa3);
    /* 00571fa3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00571fa6: mov esp, ebp */ r_esp = r_ebp;
    /* 00571fa8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00571fa9: ret 4 */ FN_RET(0x00571f80); r_esp += 8; return;
}

void f_00571fb0(void) /* ??_G_com_error@@UAEPAXI@Z_152 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00571fb0);
    /* 00571fb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00571fb1: mov ebp, esp */ r_ebp = r_esp;
    /* 00571fb3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00571fb4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00571fb7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00571fba: call 0x571760 */ r_esp -= 4; W32(r_esp, 0x571fbfu); f_00571760();
    /* 00571fbf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00571fc2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00571fc5: je 0x571fd3 */ if (fZ) goto L_00571fd3;
L_00571fc7:; BB(0x00571fc7);
    /* 00571fc7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00571fca: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00571fcb: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x571fd0u); f_00686cae();
    /* 00571fd0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00571fd3:; BB(0x00571fd3);
    /* 00571fd3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00571fd6: mov esp, ebp */ r_esp = r_ebp;
    /* 00571fd8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00571fd9: ret 4 */ FN_RET(0x00571fb0); r_esp += 8; return;
}

void f_00572650(void) /* ?do_always_noconv@?$codecvt@DDU_Mbstatet@@@std@@MBE_NXZ_15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00572650);
    /* 00572650: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00572651: mov ebp, esp */ r_ebp = r_esp;
    /* 00572653: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00572654: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00572657: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00572659: mov esp, ebp */ r_esp = r_ebp;
    /* 0057265b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057265c: ret  */ FN_RET(0x00572650); r_esp += 4; return;
}

void f_00572cd0(void) /* ??_G_com_error@@UAEPAXI@Z_153 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00572cd0);
    /* 00572cd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00572cd1: mov ebp, esp */ r_ebp = r_esp;
    /* 00572cd3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00572cd4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00572cd7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00572cda: call 0x5720b0 */ r_esp -= 4; W32(r_esp, 0x572cdfu); f_005720b0();
    /* 00572cdf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00572ce2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00572ce5: je 0x572cf3 */ if (fZ) goto L_00572cf3;
L_00572ce7:; BB(0x00572ce7);
    /* 00572ce7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00572cea: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00572ceb: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x572cf0u); f_00686cae();
    /* 00572cf0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00572cf3:; BB(0x00572cf3);
    /* 00572cf3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00572cf6: mov esp, ebp */ r_esp = r_ebp;
    /* 00572cf8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00572cf9: ret 4 */ FN_RET(0x00572cd0); r_esp += 8; return;
}

void f_00572df0(void) /* ??1_Mtx_guard@@QAE@XZ_13 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00572df0);
    /* 00572df0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00572df1: mov ebp, esp */ r_ebp = r_esp;
    /* 00572df3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00572df4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00572df7: push 0x6c54f0 */ { u32 v = 0x6c54f0u; r_esp -= 4; W32(r_esp, v); }
    /* 00572dfc: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x572e01u); f_00630f40();
    /* 00572e01: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00572e04: mov esp, ebp */ r_esp = r_ebp;
    /* 00572e06: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00572e07: ret  */ FN_RET(0x00572df0); r_esp += 4; return;
}

void f_00572e30(void) /* unknown_libname_788 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00572e30);
    /* 00572e30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00572e31: mov ebp, esp */ r_ebp = r_esp;
    /* 00572e33: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00572e34: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00572e37: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00572e39: mov esp, ebp */ r_esp = r_ebp;
    /* 00572e3b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00572e3c: ret  */ FN_RET(0x00572e30); r_esp += 4; return;
}

void f_00572e60(void) /* unknown_libname_789 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00572e60);
    /* 00572e60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00572e61: mov ebp, esp */ r_ebp = r_esp;
    /* 00572e63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00572e64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00572e67: mov eax, 1 */ r_eax = 0x1u;
    /* 00572e6c: mov esp, ebp */ r_esp = r_ebp;
    /* 00572e6e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00572e6f: ret  */ FN_RET(0x00572e60); r_esp += 4; return;
}

void f_00572e70(void) /* unknown_libname_790 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00572e70);
    /* 00572e70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00572e71: mov ebp, esp */ r_ebp = r_esp;
    /* 00572e73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00572e74: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00572e77: mov eax, 1 */ r_eax = 0x1u;
    /* 00572e7c: mov esp, ebp */ r_esp = r_ebp;
    /* 00572e7e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00572e7f: ret  */ FN_RET(0x00572e70); r_esp += 4; return;
}

void f_00572f50(void) /* unknown_libname_791 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00572f50);
    /* 00572f50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00572f51: mov ebp, esp */ r_ebp = r_esp;
    /* 00572f53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00572f54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00572f57: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00572f59: mov esp, ebp */ r_esp = r_ebp;
    /* 00572f5b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00572f5c: ret  */ FN_RET(0x00572f50); r_esp += 4; return;
}

void f_00572f70(void) /* ?GetRibbonQuickAccessToolBarChevronOffset@CMFCVisualManagerWindows7@@UAEHXZ_1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00572f70);
    /* 00572f70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00572f71: mov ebp, esp */ r_ebp = r_esp;
    /* 00572f73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00572f74: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00572f77: mov eax, 0xd */ r_eax = 0xdu;
    /* 00572f7c: mov esp, ebp */ r_esp = r_ebp;
    /* 00572f7e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00572f7f: ret  */ FN_RET(0x00572f70); r_esp += 4; return;
}

void f_00572f90(void) /* ??8_ContextCallback@details@Concurrency@@QBE_NABV012@@Z_6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00572f90);
    /* 00572f90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00572f91: mov ebp, esp */ r_ebp = r_esp;
    /* 00572f93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00572f94: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00572f97: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00572f99: mov esp, ebp */ r_esp = r_ebp;
    /* 00572f9b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00572f9c: ret 4 */ FN_RET(0x00572f90); r_esp += 8; return;
}

void f_00573170(void) /* unknown_libname_547 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00573170);
    /* 00573170: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00573171: mov ebp, esp */ r_ebp = r_esp;
    /* 00573173: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00573174: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00573177: mov esp, ebp */ r_esp = r_ebp;
    /* 00573179: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057317a: ret 0x10 */ FN_RET(0x00573170); r_esp += 20; return;
}

void f_00573180(void) /* unknown_libname_792 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00573180);
    /* 00573180: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00573181: mov ebp, esp */ r_ebp = r_esp;
    /* 00573183: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00573184: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00573187: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00573189: mov esp, ebp */ r_esp = r_ebp;
    /* 0057318b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057318c: ret  */ FN_RET(0x00573180); r_esp += 4; return;
}

void f_00576570(void) /* ??1CAtlWinModule@ATL@@QAE@XZ_2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00576570);
    /* 00576570: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00576571: mov ebp, esp */ r_ebp = r_esp;
    /* 00576573: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00576574: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00576577: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057657a: call 0x5764d0 */ r_esp -= 4; W32(r_esp, 0x57657fu); f_005764d0();
    /* 0057657f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00576582: call 0x576590 */ r_esp -= 4; W32(r_esp, 0x576587u); f_00576590();
    /* 00576587: mov esp, ebp */ r_esp = r_ebp;
    /* 00576589: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057658a: ret  */ FN_RET(0x00576570); r_esp += 4; return;
}

void f_00576e80(void) /* ??0_AFX_OLE_STATE@@QAE@XZ_32 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00576e80);
    /* 00576e80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00576e81: mov ebp, esp */ r_ebp = r_esp;
    /* 00576e83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00576e84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00576e87: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00576e8a: call 0x601a80 */ r_esp -= 4; W32(r_esp, 0x576e8fu); f_00601a80();
    /* 00576e8f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00576e92: mov dword ptr [eax], 0x6cae5c */ W32((u32)(r_eax), 0x6cae5cu);
    /* 00576e98: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00576e9b: mov esp, ebp */ r_esp = r_ebp;
    /* 00576e9d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00576e9e: ret  */ FN_RET(0x00576e80); r_esp += 4; return;
}

void f_00576ea0(void) /* ??1_AFX_OLE_STATE@@UAE@XZ_32 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00576ea0);
    /* 00576ea0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00576ea1: mov ebp, esp */ r_ebp = r_esp;
    /* 00576ea3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00576ea4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00576ea7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00576eaa: mov dword ptr [eax], 0x6cae5c */ W32((u32)(r_eax), 0x6cae5cu);
    /* 00576eb0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00576eb3: call 0x601ba0 */ r_esp -= 4; W32(r_esp, 0x576eb8u); f_00601ba0();
    /* 00576eb8: mov esp, ebp */ r_esp = r_ebp;
    /* 00576eba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00576ebb: ret  */ FN_RET(0x00576ea0); r_esp += 4; return;
}

void f_005770e0(void) /* ??0_AFX_OLE_STATE@@QAE@XZ_33 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005770e0);
    /* 005770e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005770e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005770e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005770e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005770e7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005770ea: call 0x601a80 */ r_esp -= 4; W32(r_esp, 0x5770efu); f_00601a80();
    /* 005770ef: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005770f2: mov dword ptr [eax], 0x6caf54 */ W32((u32)(r_eax), 0x6caf54u);
    /* 005770f8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005770fb: mov esp, ebp */ r_esp = r_ebp;
    /* 005770fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005770fe: ret  */ FN_RET(0x005770e0); r_esp += 4; return;
}

void f_00577100(void) /* ??1_AFX_OLE_STATE@@UAE@XZ_33 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00577100);
    /* 00577100: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00577101: mov ebp, esp */ r_ebp = r_esp;
    /* 00577103: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00577104: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00577107: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057710a: mov dword ptr [eax], 0x6caf54 */ W32((u32)(r_eax), 0x6caf54u);
    /* 00577110: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00577113: call 0x601ba0 */ r_esp -= 4; W32(r_esp, 0x577118u); f_00601ba0();
    /* 00577118: mov esp, ebp */ r_esp = r_ebp;
    /* 0057711a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057711b: ret  */ FN_RET(0x00577100); r_esp += 4; return;
}

void f_00577150(void) /* ??Y?$CStringT@_WV?$StrTraitMFC@_WV?$ChTraitsCRT@_W@ATL@@@@@ATL@@QAEAAV01@PBD@Z_3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00577150);
    /* 00577150: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00577151: mov ebp, esp */ r_ebp = r_esp;
    /* 00577153: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00577155: push 0x6a6470 */ { u32 v = 0x6a6470u; r_esp -= 4; W32(r_esp, v); }
    /* 0057715a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00577160: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00577161: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00577164: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00577169: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0057716b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057716c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0057716f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00577175: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00577178: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057717b: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x577180u); f_005f5bf0();
    /* 00577180: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00577187: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057718a: mov dword ptr [eax], 0x6cb04c */ W32((u32)(r_eax), 0x6cb04cu);
    /* 00577190: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 00577194: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00577196: jle 0x5771a8 */ if ((fZ||fS!=fO)) goto L_005771a8;
L_00577198:; BB(0x00577198);
    /* 00577198: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057719b: mov ax, word ptr [ebp + 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 0057719f: mov word ptr [edx + 0x184], ax */ W16((u32)(r_edx+0x184u), (u16)r_eax);
    /* 005771a6: jmp 0x5771b4 */ goto L_005771b4;
L_005771a8:; BB(0x005771a8);
    /* 005771a8: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005771ab: mov word ptr [ecx + 0x184], 1 */ W16((u32)(r_ecx+0x184u), 0x1u);
L_005771b4:; BB(0x005771b4);
    /* 005771b4: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005771b7: movsx eax, word ptr [edx + 0x184] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x184u));
    /* 005771be: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005771c0: mov edx, 4 */ r_edx = 0x4u;
    /* 005771c5: mul edx */ { u64 t = (u64)r_eax * r_edx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 005771c7: seto cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fO) ? 1 : 0) & 0xffu);
    /* 005771ca: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005771cc: or ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 005771ce: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005771cf: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5771d4u); f_00686d82();
    /* 005771d4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005771d7: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005771da: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005771dd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005771e0: mov dword ptr [eax + 0x18c], ecx */ W32((u32)(r_eax+0x18cu), r_ecx);
    /* 005771e6: mov word ptr [ebp - 0x10], 0 */ W16((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005771ec: jmp 0x5771fa */ goto L_005771fa;
L_005771ee:; BB(0x005771ee);
    /* 005771ee: mov dx, word ptr [ebp - 0x10] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff0u))) & 0xffffu);
    /* 005771f2: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005771f6: mov word ptr [ebp - 0x10], dx */ W16((u32)(r_ebp+0xfffffff0u), (u16)r_edx);
L_005771fa:; BB(0x005771fa);
    /* 005771fa: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 005771fe: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00577201: movsx edx, word ptr [ecx + 0x184] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x184u));
    /* 00577208: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057720a: jge 0x577222 */ if ((fS==fO)) goto L_00577222;
L_0057720c:; BB(0x0057720c);
    /* 0057720c: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00577210: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00577213: mov edx, dword ptr [ecx + 0x18c] */ r_edx = R32((u32)(r_ecx+0x18cu));
    /* 00577219: mov dword ptr [edx + eax*4], 0 */ W32((u32)(r_edx+r_eax*4), 0x0u);
    /* 00577220: jmp 0x5771ee */ goto L_005771ee;
L_00577222:; BB(0x00577222);
    /* 00577222: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00577229: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057722c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0057722f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00577236: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00577237: mov esp, ebp */ r_esp = r_ebp;
    /* 00577239: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057723a: ret 4 */ FN_RET(0x00577150); r_esp += 8; return;
}

void f_00577bd0(void) /* ??1CExpandoObject@@UAE@XZ_40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00577bd0);
    /* 00577bd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00577bd1: mov ebp, esp */ r_ebp = r_esp;
    /* 00577bd3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00577bd4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00577bd7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00577bda: mov dword ptr [eax], 0x6cb134 */ W32((u32)(r_eax), 0x6cb134u);
    /* 00577be0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00577be3: call 0x6004c0 */ r_esp -= 4; W32(r_esp, 0x577be8u); f_006004c0();
    /* 00577be8: mov esp, ebp */ r_esp = r_ebp;
    /* 00577bea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00577beb: ret  */ FN_RET(0x00577bd0); r_esp += 4; return;
}

void f_00577d80(void) /* ??1CExpandoObject@@UAE@XZ_41 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00577d80);
    /* 00577d80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00577d81: mov ebp, esp */ r_ebp = r_esp;
    /* 00577d83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00577d84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00577d87: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00577d8a: mov dword ptr [eax], 0x6cb150 */ W32((u32)(r_eax), 0x6cb150u);
    /* 00577d90: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00577d93: call 0x5fc150 */ r_esp -= 4; W32(r_esp, 0x577d98u); f_005fc150();
    /* 00577d98: mov esp, ebp */ r_esp = r_ebp;
    /* 00577d9a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00577d9b: ret  */ FN_RET(0x00577d80); r_esp += 4; return;
}

void f_00578180(void) /* ??0_AFX_OLE_STATE@@QAE@XZ_34 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00578180);
    /* 00578180: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00578181: mov ebp, esp */ r_ebp = r_esp;
    /* 00578183: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00578184: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00578187: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057818a: call 0x6012f0 */ r_esp -= 4; W32(r_esp, 0x57818fu); f_006012f0();
    /* 0057818f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00578192: mov dword ptr [eax], 0x6cb174 */ W32((u32)(r_eax), 0x6cb174u);
    /* 00578198: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057819b: mov esp, ebp */ r_esp = r_ebp;
    /* 0057819d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057819e: ret  */ FN_RET(0x00578180); r_esp += 4; return;
}

void f_005781a0(void) /* ??1_AFX_OLE_STATE@@UAE@XZ_34 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005781a0);
    /* 005781a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005781a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005781a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005781a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005781a7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005781aa: mov dword ptr [eax], 0x6cb174 */ W32((u32)(r_eax), 0x6cb174u);
    /* 005781b0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005781b3: call 0x601320 */ r_esp -= 4; W32(r_esp, 0x5781b8u); f_00601320();
    /* 005781b8: mov esp, ebp */ r_esp = r_ebp;
    /* 005781ba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005781bb: ret  */ FN_RET(0x005781a0); r_esp += 4; return;
}

void f_005782a0(void) /* ??1CExpandoObject@@UAE@XZ_42 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005782a0);
    /* 005782a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005782a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005782a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005782a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005782a7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005782aa: mov dword ptr [eax], 0x6cb190 */ W32((u32)(r_eax), 0x6cb190u);
    /* 005782b0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005782b3: call 0x5e9e40 */ r_esp -= 4; W32(r_esp, 0x5782b8u); f_005e9e40();
    /* 005782b8: mov esp, ebp */ r_esp = r_ebp;
    /* 005782ba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005782bb: ret  */ FN_RET(0x005782a0); r_esp += 4; return;
}

void f_00578720(void) /* ??_G_com_error@@UAEPAXI@Z_154 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00578720);
    /* 00578720: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00578721: mov ebp, esp */ r_ebp = r_esp;
    /* 00578723: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00578724: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00578727: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057872a: call 0x5732d0 */ r_esp -= 4; W32(r_esp, 0x57872fu); f_005732d0();
    /* 0057872f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00578732: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00578735: je 0x578743 */ if (fZ) goto L_00578743;
L_00578737:; BB(0x00578737);
    /* 00578737: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057873a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057873b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x578740u); f_00686cae();
    /* 00578740: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00578743:; BB(0x00578743);
    /* 00578743: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00578746: mov esp, ebp */ r_esp = r_ebp;
    /* 00578748: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00578749: ret 4 */ FN_RET(0x00578720); r_esp += 8; return;
}

void f_00578790(void) /* ??_G_com_error@@UAEPAXI@Z_155 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00578790);
    /* 00578790: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00578791: mov ebp, esp */ r_ebp = r_esp;
    /* 00578793: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00578794: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00578797: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057879a: call 0x576ea0 */ r_esp -= 4; W32(r_esp, 0x57879fu); f_00576ea0();
    /* 0057879f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005787a2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005787a5: je 0x5787b3 */ if (fZ) goto L_005787b3;
L_005787a7:; BB(0x005787a7);
    /* 005787a7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005787aa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005787ab: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5787b0u); f_00686cae();
    /* 005787b0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005787b3:; BB(0x005787b3);
    /* 005787b3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005787b6: mov esp, ebp */ r_esp = r_ebp;
    /* 005787b8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005787b9: ret 4 */ FN_RET(0x00578790); r_esp += 8; return;
}

void f_005787c0(void) /* ??_G_com_error@@UAEPAXI@Z_156 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005787c0);
    /* 005787c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005787c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005787c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005787c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005787c7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005787ca: call 0x577100 */ r_esp -= 4; W32(r_esp, 0x5787cfu); f_00577100();
    /* 005787cf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005787d2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005787d5: je 0x5787e3 */ if (fZ) goto L_005787e3;
L_005787d7:; BB(0x005787d7);
    /* 005787d7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005787da: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005787db: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5787e0u); f_00686cae();
    /* 005787e0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005787e3:; BB(0x005787e3);
    /* 005787e3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005787e6: mov esp, ebp */ r_esp = r_ebp;
    /* 005787e8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005787e9: ret 4 */ FN_RET(0x005787c0); r_esp += 8; return;
}

void f_005787f0(void) /* ??_G_com_error@@UAEPAXI@Z_157 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005787f0);
    /* 005787f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005787f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005787f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005787f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005787f7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005787fa: call 0x577240 */ r_esp -= 4; W32(r_esp, 0x5787ffu); f_00577240();
    /* 005787ff: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00578802: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00578805: je 0x578813 */ if (fZ) goto L_00578813;
L_00578807:; BB(0x00578807);
    /* 00578807: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057880a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057880b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x578810u); f_00686cae();
    /* 00578810: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00578813:; BB(0x00578813);
    /* 00578813: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00578816: mov esp, ebp */ r_esp = r_ebp;
    /* 00578818: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00578819: ret 4 */ FN_RET(0x005787f0); r_esp += 8; return;
}

void f_00578820(void) /* ??_G_com_error@@UAEPAXI@Z_158 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00578820);
    /* 00578820: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00578821: mov ebp, esp */ r_ebp = r_esp;
    /* 00578823: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00578824: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00578827: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057882a: call 0x577960 */ r_esp -= 4; W32(r_esp, 0x57882fu); f_00577960();
    /* 0057882f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00578832: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00578835: je 0x578843 */ if (fZ) goto L_00578843;
L_00578837:; BB(0x00578837);
    /* 00578837: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057883a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057883b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x578840u); f_00686cae();
    /* 00578840: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00578843:; BB(0x00578843);
    /* 00578843: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00578846: mov esp, ebp */ r_esp = r_ebp;
    /* 00578848: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00578849: ret 4 */ FN_RET(0x00578820); r_esp += 8; return;
}

void f_00578850(void) /* ??_G_com_error@@UAEPAXI@Z_159 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00578850);
    /* 00578850: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00578851: mov ebp, esp */ r_ebp = r_esp;
    /* 00578853: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00578854: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00578857: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057885a: call 0x577bd0 */ r_esp -= 4; W32(r_esp, 0x57885fu); f_00577bd0();
    /* 0057885f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00578862: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00578865: je 0x578873 */ if (fZ) goto L_00578873;
L_00578867:; BB(0x00578867);
    /* 00578867: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057886a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057886b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x578870u); f_00686cae();
    /* 00578870: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00578873:; BB(0x00578873);
    /* 00578873: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00578876: mov esp, ebp */ r_esp = r_ebp;
    /* 00578878: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00578879: ret 4 */ FN_RET(0x00578850); r_esp += 8; return;
}

void f_00578880(void) /* ??_G_com_error@@UAEPAXI@Z_160 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00578880);
    /* 00578880: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00578881: mov ebp, esp */ r_ebp = r_esp;
    /* 00578883: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00578884: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00578887: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057888a: call 0x577d80 */ r_esp -= 4; W32(r_esp, 0x57888fu); f_00577d80();
    /* 0057888f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00578892: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00578895: je 0x5788a3 */ if (fZ) goto L_005788a3;
L_00578897:; BB(0x00578897);
    /* 00578897: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057889a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057889b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5788a0u); f_00686cae();
    /* 005788a0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005788a3:; BB(0x005788a3);
    /* 005788a3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005788a6: mov esp, ebp */ r_esp = r_ebp;
    /* 005788a8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005788a9: ret 4 */ FN_RET(0x00578880); r_esp += 8; return;
}

void f_005788b0(void) /* ??_G_com_error@@UAEPAXI@Z_161 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005788b0);
    /* 005788b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005788b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005788b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005788b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005788b7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005788ba: call 0x5781a0 */ r_esp -= 4; W32(r_esp, 0x5788bfu); f_005781a0();
    /* 005788bf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005788c2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005788c5: je 0x5788d3 */ if (fZ) goto L_005788d3;
L_005788c7:; BB(0x005788c7);
    /* 005788c7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005788ca: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005788cb: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5788d0u); f_00686cae();
    /* 005788d0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005788d3:; BB(0x005788d3);
    /* 005788d3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005788d6: mov esp, ebp */ r_esp = r_ebp;
    /* 005788d8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005788d9: ret 4 */ FN_RET(0x005788b0); r_esp += 8; return;
}

void f_005788e0(void) /* ??_G_com_error@@UAEPAXI@Z_162 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005788e0);
    /* 005788e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005788e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005788e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005788e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005788e7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005788ea: call 0x5782a0 */ r_esp -= 4; W32(r_esp, 0x5788efu); f_005782a0();
    /* 005788ef: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005788f2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005788f5: je 0x578903 */ if (fZ) goto L_00578903;
L_005788f7:; BB(0x005788f7);
    /* 005788f7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005788fa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005788fb: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x578900u); f_00686cae();
    /* 00578900: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00578903:; BB(0x00578903);
    /* 00578903: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00578906: mov esp, ebp */ r_esp = r_ebp;
    /* 00578908: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00578909: ret 4 */ FN_RET(0x005788e0); r_esp += 8; return;
}

void f_00578fa0(void) /* ?do_always_noconv@?$codecvt@DDU_Mbstatet@@@std@@MBE_NXZ_16 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00578fa0);
    /* 00578fa0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00578fa1: mov ebp, esp */ r_ebp = r_esp;
    /* 00578fa3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00578fa4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00578fa7: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00578fa9: mov esp, ebp */ r_esp = r_ebp;
    /* 00578fab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00578fac: ret  */ FN_RET(0x00578fa0); r_esp += 4; return;
}

void f_00579620(void) /* ??_G_com_error@@UAEPAXI@Z_163 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00579620);
    /* 00579620: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00579621: mov ebp, esp */ r_ebp = r_esp;
    /* 00579623: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00579624: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00579627: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057962a: call 0x5789f0 */ r_esp -= 4; W32(r_esp, 0x57962fu); f_005789f0();
    /* 0057962f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00579632: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00579635: je 0x579643 */ if (fZ) goto L_00579643;
L_00579637:; BB(0x00579637);
    /* 00579637: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057963a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057963b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x579640u); f_00686cae();
    /* 00579640: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00579643:; BB(0x00579643);
    /* 00579643: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00579646: mov esp, ebp */ r_esp = r_ebp;
    /* 00579648: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00579649: ret 4 */ FN_RET(0x00579620); r_esp += 8; return;
}

void f_00579740(void) /* ??1_Mtx_guard@@QAE@XZ_14 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00579740);
    /* 00579740: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00579741: mov ebp, esp */ r_ebp = r_esp;
    /* 00579743: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00579744: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00579747: push 0x6c54e0 */ { u32 v = 0x6c54e0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057974c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x579751u); f_00630f40();
    /* 00579751: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00579754: mov esp, ebp */ r_esp = r_ebp;
    /* 00579756: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00579757: ret  */ FN_RET(0x00579740); r_esp += 4; return;
}

void f_00579780(void) /* unknown_libname_793 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00579780);
    /* 00579780: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00579781: mov ebp, esp */ r_ebp = r_esp;
    /* 00579783: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00579784: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00579787: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00579789: mov esp, ebp */ r_esp = r_ebp;
    /* 0057978b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057978c: ret  */ FN_RET(0x00579780); r_esp += 4; return;
}

void f_005797b0(void) /* unknown_libname_794 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005797b0);
    /* 005797b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005797b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005797b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005797b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005797b7: mov eax, 1 */ r_eax = 0x1u;
    /* 005797bc: mov esp, ebp */ r_esp = r_ebp;
    /* 005797be: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005797bf: ret  */ FN_RET(0x005797b0); r_esp += 4; return;
}

void f_005797c0(void) /* unknown_libname_795 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005797c0);
    /* 005797c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005797c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005797c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005797c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005797c7: mov eax, 1 */ r_eax = 0x1u;
    /* 005797cc: mov esp, ebp */ r_esp = r_ebp;
    /* 005797ce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005797cf: ret  */ FN_RET(0x005797c0); r_esp += 4; return;
}

void f_005798a0(void) /* unknown_libname_796 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005798a0);
    /* 005798a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005798a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005798a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005798a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005798a7: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005798a9: mov esp, ebp */ r_esp = r_ebp;
    /* 005798ab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005798ac: ret  */ FN_RET(0x005798a0); r_esp += 4; return;
}

void f_005798c0(void) /* ?GetRibbonQuickAccessToolBarChevronOffset@CMFCVisualManagerWindows7@@UAEHXZ_2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005798c0);
    /* 005798c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005798c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005798c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005798c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005798c7: mov eax, 0xd */ r_eax = 0xdu;
    /* 005798cc: mov esp, ebp */ r_esp = r_ebp;
    /* 005798ce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005798cf: ret  */ FN_RET(0x005798c0); r_esp += 4; return;
}

void f_005798e0(void) /* ??8_ContextCallback@details@Concurrency@@QBE_NABV012@@Z_7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005798e0);
    /* 005798e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005798e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005798e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005798e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005798e7: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005798e9: mov esp, ebp */ r_esp = r_ebp;
    /* 005798eb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005798ec: ret 4 */ FN_RET(0x005798e0); r_esp += 8; return;
}

void f_00579ac0(void) /* unknown_libname_550 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00579ac0);
    /* 00579ac0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00579ac1: mov ebp, esp */ r_ebp = r_esp;
    /* 00579ac3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00579ac4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00579ac7: mov esp, ebp */ r_esp = r_ebp;
    /* 00579ac9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00579aca: ret 0x10 */ FN_RET(0x00579ac0); r_esp += 20; return;
}

void f_00579ad0(void) /* unknown_libname_797 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00579ad0);
    /* 00579ad0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00579ad1: mov ebp, esp */ r_ebp = r_esp;
    /* 00579ad3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00579ad4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00579ad7: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00579ad9: mov esp, ebp */ r_esp = r_ebp;
    /* 00579adb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00579adc: ret  */ FN_RET(0x00579ad0); r_esp += 4; return;
}

void f_0057a360(void) /* unknown_libname_798 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0057a360);
    /* 0057a360: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057a361: mov ebp, esp */ r_ebp = r_esp;
    /* 0057a363: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057a364: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0057a367: mov esp, ebp */ r_esp = r_ebp;
    /* 0057a369: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057a36a: ret 4 */ FN_RET(0x0057a360); r_esp += 8; return;
}

void f_0057a440(void) /* ??_G_com_error@@UAEPAXI@Z_164 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0057a440);
    /* 0057a440: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057a441: mov ebp, esp */ r_ebp = r_esp;
    /* 0057a443: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057a444: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0057a447: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057a44a: call 0x579b10 */ r_esp -= 4; W32(r_esp, 0x57a44fu); f_00579b10();
    /* 0057a44f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0057a452: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0057a455: je 0x57a463 */ if (fZ) goto L_0057a463;
L_0057a457:; BB(0x0057a457);
    /* 0057a457: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057a45a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057a45b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x57a460u); f_00686cae();
    /* 0057a460: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0057a463:; BB(0x0057a463);
    /* 0057a463: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057a466: mov esp, ebp */ r_esp = r_ebp;
    /* 0057a468: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057a469: ret 4 */ FN_RET(0x0057a440); r_esp += 8; return;
}

void f_0057a5b0(void) /* ??1_Mtx_guard@@QAE@XZ_15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0057a5b0);
    /* 0057a5b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057a5b1: mov ebp, esp */ r_ebp = r_esp;
    /* 0057a5b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057a5b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0057a5b7: push 0x6b3148 */ { u32 v = 0x6b3148u; r_esp -= 4; W32(r_esp, v); }
    /* 0057a5bc: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x57a5c1u); f_00630f40();
    /* 0057a5c1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057a5c4: mov esp, ebp */ r_esp = r_ebp;
    /* 0057a5c6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057a5c7: ret  */ FN_RET(0x0057a5b0); r_esp += 4; return;
}

void f_0057a5f0(void) /* unknown_libname_799 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0057a5f0);
    /* 0057a5f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057a5f1: mov ebp, esp */ r_ebp = r_esp;
    /* 0057a5f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057a5f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0057a5f7: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0057a5f9: mov esp, ebp */ r_esp = r_ebp;
    /* 0057a5fb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057a5fc: ret  */ FN_RET(0x0057a5f0); r_esp += 4; return;
}

void f_0057a600(void) /* ?GetRuntimeClass@CSpinButtonCtrl@@UBEPAUCRuntimeClass@@XZ_6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0057a600);
    /* 0057a600: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057a601: mov ebp, esp */ r_ebp = r_esp;
    /* 0057a603: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057a604: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0057a607: mov eax, 0x74b478 */ r_eax = 0x74b478u;
    /* 0057a60c: mov esp, ebp */ r_esp = r_ebp;
    /* 0057a60e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057a60f: ret  */ FN_RET(0x0057a600); r_esp += 4; return;
}

void f_0057a610(void) /* ?GetRuntimeClass@CSliderCtrl@@UBEPAUCRuntimeClass@@XZ_6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0057a610);
    /* 0057a610: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057a611: mov ebp, esp */ r_ebp = r_esp;
    /* 0057a613: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057a614: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0057a617: mov eax, 0x74b480 */ r_eax = 0x74b480u;
    /* 0057a61c: mov esp, ebp */ r_esp = r_ebp;
    /* 0057a61e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057a61f: ret  */ FN_RET(0x0057a610); r_esp += 4; return;
}

void f_0057a620(void) /* ?GetRuntimeClass@CProgressCtrl@@UBEPAUCRuntimeClass@@XZ_6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0057a620);
    /* 0057a620: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057a621: mov ebp, esp */ r_ebp = r_esp;
    /* 0057a623: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057a624: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0057a627: mov eax, 1 */ r_eax = 0x1u;
    /* 0057a62c: mov esp, ebp */ r_esp = r_ebp;
    /* 0057a62e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057a62f: ret  */ FN_RET(0x0057a620); r_esp += 4; return;
}

void f_0057a630(void) /* ?GetRuntimeClass@CHeaderCtrl@@UBEPAUCRuntimeClass@@XZ_6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0057a630);
    /* 0057a630: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057a631: mov ebp, esp */ r_ebp = r_esp;
    /* 0057a633: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057a634: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0057a637: mov eax, 1 */ r_eax = 0x1u;
    /* 0057a63c: mov esp, ebp */ r_esp = r_ebp;
    /* 0057a63e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057a63f: ret  */ FN_RET(0x0057a630); r_esp += 4; return;
}

void f_0057a640(void) /* ?GetRuntimeClass@CTabCtrl@@UBEPAUCRuntimeClass@@XZ_6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0057a640);
    /* 0057a640: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057a641: mov ebp, esp */ r_ebp = r_esp;
    /* 0057a643: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057a644: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0057a647: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0057a649: mov esp, ebp */ r_esp = r_ebp;
    /* 0057a64b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057a64c: ret 8 */ FN_RET(0x0057a640); r_esp += 12; return;
}

void f_0057a650(void) /* ?GetRuntimeClass@CTreeCtrl@@UBEPAUCRuntimeClass@@XZ_6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0057a650);
    /* 0057a650: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057a651: mov ebp, esp */ r_ebp = r_esp;
    /* 0057a653: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057a654: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0057a657: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0057a659: mov esp, ebp */ r_esp = r_ebp;
    /* 0057a65b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057a65c: ret  */ FN_RET(0x0057a650); r_esp += 4; return;
}

void f_0057a660(void) /* ?GetRuntimeClass@CListCtrl@@UBEPAUCRuntimeClass@@XZ_6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0057a660);
    /* 0057a660: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057a661: mov ebp, esp */ r_ebp = r_esp;
    /* 0057a663: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057a664: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0057a667: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0057a669: mov esp, ebp */ r_esp = r_ebp;
    /* 0057a66b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057a66c: ret 4 */ FN_RET(0x0057a660); r_esp += 8; return;
}

void f_0057a670(void) /* ?GetRuntimeClass@CToolBarCtrl@@UBEPAUCRuntimeClass@@XZ_5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0057a670);
    /* 0057a670: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057a671: mov ebp, esp */ r_ebp = r_esp;
    /* 0057a673: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057a674: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0057a677: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0057a679: mov esp, ebp */ r_esp = r_ebp;
    /* 0057a67b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057a67c: ret 4 */ FN_RET(0x0057a670); r_esp += 8; return;
}

void f_0057a680(void) /* ?GetRuntimeClass@CStatusBarCtrl@@UBEPAUCRuntimeClass@@XZ_6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0057a680);
    /* 0057a680: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057a681: mov ebp, esp */ r_ebp = r_esp;
    /* 0057a683: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057a684: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0057a687: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0057a689: mov esp, ebp */ r_esp = r_ebp;
    /* 0057a68b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057a68c: ret 4 */ FN_RET(0x0057a680); r_esp += 8; return;
}

void f_0057a690(void) /* ?CreateObject@CImageList@@SGPAVCObject@@XZ_6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0057a690);
    /* 0057a690: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057a691: mov ebp, esp */ r_ebp = r_esp;
    /* 0057a693: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057a694: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0057a697: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0057a699: mov esp, ebp */ r_esp = r_ebp;
    /* 0057a69b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057a69c: ret  */ FN_RET(0x0057a690); r_esp += 4; return;
}

