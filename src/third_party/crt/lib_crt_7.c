#include "protos.h"

void f_005a4010(void) /* ??1_AFX_OLE_STATE@@UAE@XZ_47 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a4010);
    /* 005a4010: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a4011: mov ebp, esp */ r_ebp = r_esp;
    /* 005a4013: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a4014: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005a4017: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a401a: mov dword ptr [eax], 0x6cf6e4 */ W32((u32)(r_eax), 0x6cf6e4u);
    /* 005a4020: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a4023: call 0x5cb590 */ r_esp -= 4; W32(r_esp, 0x5a4028u); f_005cb590();
    /* 005a4028: mov esp, ebp */ r_esp = r_ebp;
    /* 005a402a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a402b: ret  */ FN_RET(0x005a4010); r_esp += 4; return;
}

void f_005a48c0(void) /* ??_G_com_error@@UAEPAXI@Z_213 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a48c0);
    /* 005a48c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a48c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005a48c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a48c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005a48c7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a48ca: call 0x5a1d20 */ r_esp -= 4; W32(r_esp, 0x5a48cfu); f_005a1d20();
    /* 005a48cf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a48d2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005a48d5: je 0x5a48e3 */ if (fZ) goto L_005a48e3;
L_005a48d7:; BB(0x005a48d7);
    /* 005a48d7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a48da: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a48db: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5a48e0u); f_00686cae();
    /* 005a48e0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005a48e3:; BB(0x005a48e3);
    /* 005a48e3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a48e6: mov esp, ebp */ r_esp = r_ebp;
    /* 005a48e8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a48e9: ret 4 */ FN_RET(0x005a48c0); r_esp += 8; return;
}

void f_005a48f0(void) /* ??_G_com_error@@UAEPAXI@Z_214 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a48f0);
    /* 005a48f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a48f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005a48f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a48f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005a48f7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a48fa: call 0x5a4010 */ r_esp -= 4; W32(r_esp, 0x5a48ffu); f_005a4010();
    /* 005a48ff: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a4902: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005a4905: je 0x5a4913 */ if (fZ) goto L_005a4913;
L_005a4907:; BB(0x005a4907);
    /* 005a4907: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a490a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a490b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5a4910u); f_00686cae();
    /* 005a4910: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005a4913:; BB(0x005a4913);
    /* 005a4913: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a4916: mov esp, ebp */ r_esp = r_ebp;
    /* 005a4918: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a4919: ret 4 */ FN_RET(0x005a48f0); r_esp += 8; return;
}

void f_005a4920(void) /* ??0_AFX_OLE_STATE@@QAE@XZ_48 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a4920);
    /* 005a4920: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a4921: mov ebp, esp */ r_ebp = r_esp;
    /* 005a4923: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a4924: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005a4927: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a492a: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x5a492fu); f_005e9e20();
    /* 005a492f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a4932: mov dword ptr [eax], 0x6cf7b0 */ W32((u32)(r_eax), 0x6cf7b0u);
    /* 005a4938: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a493b: mov esp, ebp */ r_esp = r_ebp;
    /* 005a493d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a493e: ret  */ FN_RET(0x005a4920); r_esp += 4; return;
}

void f_005a4940(void) /* ??1_AFX_OLE_STATE@@UAE@XZ_48 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a4940);
    /* 005a4940: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a4941: mov ebp, esp */ r_ebp = r_esp;
    /* 005a4943: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a4944: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005a4947: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a494a: mov dword ptr [eax], 0x6cf7b0 */ W32((u32)(r_eax), 0x6cf7b0u);
    /* 005a4950: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a4953: call 0x5e9e40 */ r_esp -= 4; W32(r_esp, 0x5a4958u); f_005e9e40();
    /* 005a4958: mov esp, ebp */ r_esp = r_ebp;
    /* 005a495a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a495b: ret  */ FN_RET(0x005a4940); r_esp += 4; return;
}

void f_005a6c50(void) /* ??_G_com_error@@UAEPAXI@Z_215 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a6c50);
    /* 005a6c50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a6c51: mov ebp, esp */ r_ebp = r_esp;
    /* 005a6c53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a6c54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005a6c57: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a6c5a: call 0x5a4940 */ r_esp -= 4; W32(r_esp, 0x5a6c5fu); f_005a4940();
    /* 005a6c5f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a6c62: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005a6c65: je 0x5a6c73 */ if (fZ) goto L_005a6c73;
L_005a6c67:; BB(0x005a6c67);
    /* 005a6c67: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a6c6a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a6c6b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5a6c70u); f_00686cae();
    /* 005a6c70: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005a6c73:; BB(0x005a6c73);
    /* 005a6c73: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a6c76: mov esp, ebp */ r_esp = r_ebp;
    /* 005a6c78: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a6c79: ret 4 */ FN_RET(0x005a6c50); r_esp += 8; return;
}

void f_005a8990(void) /* ??1CExpandoObject@@UAE@XZ_55 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a8990);
    /* 005a8990: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a8991: mov ebp, esp */ r_ebp = r_esp;
    /* 005a8993: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a8994: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005a8997: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a899a: mov dword ptr [eax], 0x6cf95c */ W32((u32)(r_eax), 0x6cf95cu);
    /* 005a89a0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a89a3: call 0x5f7260 */ r_esp -= 4; W32(r_esp, 0x5a89a8u); f_005f7260();
    /* 005a89a8: mov esp, ebp */ r_esp = r_ebp;
    /* 005a89aa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a89ab: ret  */ FN_RET(0x005a8990); r_esp += 4; return;
}

void f_005a96b0(void) /* ?SetAtGrow@?$CTypedPtrArray@VCObArray@@PAVCBitmap@@@@QAEXHPAVCBitmap@@@Z_7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a96b0);
    /* 005a96b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a96b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005a96b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a96b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005a96b7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005a96ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a96bb: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a96be: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a96bf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a96c2: call 0x5a9750 */ r_esp -= 4; W32(r_esp, 0x5a96c7u); f_005a9750();
    /* 005a96c7: mov esp, ebp */ r_esp = r_ebp;
    /* 005a96c9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a96ca: ret 8 */ FN_RET(0x005a96b0); r_esp += 12; return;
}

void f_005a9ef0(void) /* ??1CExpandoObject@@UAE@XZ_56 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a9ef0);
    /* 005a9ef0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a9ef1: mov ebp, esp */ r_ebp = r_esp;
    /* 005a9ef3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a9ef4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005a9ef7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a9efa: mov dword ptr [eax], 0x6cfb2c */ W32((u32)(r_eax), 0x6cfb2cu);
    /* 005a9f00: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a9f03: call 0x5f7260 */ r_esp -= 4; W32(r_esp, 0x5a9f08u); f_005f7260();
    /* 005a9f08: mov esp, ebp */ r_esp = r_ebp;
    /* 005a9f0a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a9f0b: ret  */ FN_RET(0x005a9ef0); r_esp += 4; return;
}

void f_005aaa00(void) /* ??1CExpandoObject@@UAE@XZ_57 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005aaa00);
    /* 005aaa00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005aaa01: mov ebp, esp */ r_ebp = r_esp;
    /* 005aaa03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005aaa04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005aaa07: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005aaa0a: mov dword ptr [eax], 0x6cfcb4 */ W32((u32)(r_eax), 0x6cfcb4u);
    /* 005aaa10: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005aaa13: call 0x5fc150 */ r_esp -= 4; W32(r_esp, 0x5aaa18u); f_005fc150();
    /* 005aaa18: mov esp, ebp */ r_esp = r_ebp;
    /* 005aaa1a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005aaa1b: ret  */ FN_RET(0x005aaa00); r_esp += 4; return;
}

void f_005ab490(void) /* ??1CExpandoObject@@UAE@XZ_58 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ab490);
    /* 005ab490: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ab491: mov ebp, esp */ r_ebp = r_esp;
    /* 005ab493: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ab494: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ab497: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ab49a: mov dword ptr [eax], 0x6cfcfc */ W32((u32)(r_eax), 0x6cfcfcu);
    /* 005ab4a0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ab4a3: call 0x5f4ad0 */ r_esp -= 4; W32(r_esp, 0x5ab4a8u); f_005f4ad0();
    /* 005ab4a8: mov esp, ebp */ r_esp = r_ebp;
    /* 005ab4aa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ab4ab: ret  */ FN_RET(0x005ab490); r_esp += 4; return;
}

void f_005ab7f0(void) /* ??0_TaskCollection@details@Concurrency@@QAE@PAV_CancellationTokenState@12@@Z */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ab7f0);
    /* 005ab7f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ab7f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005ab7f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ab7f5: push 0x6a7bab */ { u32 v = 0x6a7babu; r_esp -= 4; W32(r_esp, v); }
    /* 005ab7fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ab800: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ab801: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ab804: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005ab809: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005ab80b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ab80c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005ab80f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005ab815: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005ab818: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ab81b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ab81c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ab81f: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x5ab824u); f_005fc0d0();
    /* 005ab824: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005ab82b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ab82e: mov dword ptr [ecx], 0x6cfdb0 */ W32((u32)(r_ecx), 0x6cfdb0u);
    /* 005ab834: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005ab836: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005ab83c: call 0x637810 */ r_esp -= 4; W32(r_esp, 0x5ab841u); f_00637810();
    /* 005ab841: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005ab843: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ab846: setl dl */ r_edx = (r_edx & 0xffffff00u) | ((((fS!=fO)) ? 1 : 0) & 0xffu);
    /* 005ab849: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ab84c: mov byte ptr [eax + 0x20], dl */ W8((u32)(r_eax+0x20u), (u8)r_edx);
    /* 005ab84f: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005ab855: call 0x5b4f00 */ r_esp -= 4; W32(r_esp, 0x5ab85au); f_005b4f00();
    /* 005ab85a: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ab85d: jne 0x5ab868 */ if (!fZ) goto L_005ab868;
L_005ab85f:; BB(0x005ab85f);
    /* 005ab85f: mov dword ptr [ebp - 0x14], 4 */ W32((u32)(r_ebp+0xffffffecu), 0x4u);
    /* 005ab866: jmp 0x5ab876 */ goto L_005ab876;
L_005ab868:; BB(0x005ab868);
    /* 005ab868: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005ab86e: call 0x5b4f00 */ r_esp -= 4; W32(r_esp, 0x5ab873u); f_005b4f00();
    /* 005ab873: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_005ab876:; BB(0x005ab876);
    /* 005ab876: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ab879: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ab87c: mov dword ptr [ecx + 0x24], edx */ W32((u32)(r_ecx+0x24u), r_edx);
    /* 005ab87f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005ab886: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ab889: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ab88c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ab893: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ab894: mov esp, ebp */ r_esp = r_ebp;
    /* 005ab896: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ab897: ret 4 */ FN_RET(0x005ab7f0); r_esp += 8; return;
}

void f_005abda0(void) /* ??1CExpandoObject@@UAE@XZ_59 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005abda0);
    /* 005abda0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005abda1: mov ebp, esp */ r_ebp = r_esp;
    /* 005abda3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005abda4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005abda7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005abdaa: mov dword ptr [eax], 0x6cfdd4 */ W32((u32)(r_eax), 0x6cfdd4u);
    /* 005abdb0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005abdb3: call 0x5f7260 */ r_esp -= 4; W32(r_esp, 0x5abdb8u); f_005f7260();
    /* 005abdb8: mov esp, ebp */ r_esp = r_ebp;
    /* 005abdba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005abdbb: ret  */ FN_RET(0x005abda0); r_esp += 4; return;
}

void f_005acdd0(void) /* ??_G_com_error@@UAEPAXI@Z_216 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005acdd0);
    /* 005acdd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005acdd1: mov ebp, esp */ r_ebp = r_esp;
    /* 005acdd3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005acdd4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005acdd7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005acdda: call 0x5a6d60 */ r_esp -= 4; W32(r_esp, 0x5acddfu); f_005a6d60();
    /* 005acddf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005acde2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005acde5: je 0x5acdf3 */ if (fZ) goto L_005acdf3;
L_005acde7:; BB(0x005acde7);
    /* 005acde7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005acdea: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005acdeb: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5acdf0u); f_00686cae();
    /* 005acdf0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005acdf3:; BB(0x005acdf3);
    /* 005acdf3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005acdf6: mov esp, ebp */ r_esp = r_ebp;
    /* 005acdf8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005acdf9: ret 4 */ FN_RET(0x005acdd0); r_esp += 8; return;
}

void f_005ace00(void) /* ??_G_com_error@@UAEPAXI@Z_217 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ace00);
    /* 005ace00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ace01: mov ebp, esp */ r_ebp = r_esp;
    /* 005ace03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ace04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ace07: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ace0a: call 0x5a8990 */ r_esp -= 4; W32(r_esp, 0x5ace0fu); f_005a8990();
    /* 005ace0f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ace12: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005ace15: je 0x5ace23 */ if (fZ) goto L_005ace23;
L_005ace17:; BB(0x005ace17);
    /* 005ace17: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ace1a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ace1b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5ace20u); f_00686cae();
    /* 005ace20: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005ace23:; BB(0x005ace23);
    /* 005ace23: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ace26: mov esp, ebp */ r_esp = r_ebp;
    /* 005ace28: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ace29: ret 4 */ FN_RET(0x005ace00); r_esp += 8; return;
}

void f_005ace30(void) /* ??_G_com_error@@UAEPAXI@Z_218 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ace30);
    /* 005ace30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ace31: mov ebp, esp */ r_ebp = r_esp;
    /* 005ace33: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ace34: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ace37: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ace3a: call 0x5a8fb0 */ r_esp -= 4; W32(r_esp, 0x5ace3fu); f_005a8fb0();
    /* 005ace3f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ace42: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005ace45: je 0x5ace53 */ if (fZ) goto L_005ace53;
L_005ace47:; BB(0x005ace47);
    /* 005ace47: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ace4a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ace4b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5ace50u); f_00686cae();
    /* 005ace50: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005ace53:; BB(0x005ace53);
    /* 005ace53: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ace56: mov esp, ebp */ r_esp = r_ebp;
    /* 005ace58: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ace59: ret 4 */ FN_RET(0x005ace30); r_esp += 8; return;
}

void f_005ace60(void) /* ??_G_com_error@@UAEPAXI@Z_219 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ace60);
    /* 005ace60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ace61: mov ebp, esp */ r_ebp = r_esp;
    /* 005ace63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ace64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ace67: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ace6a: call 0x5a9ef0 */ r_esp -= 4; W32(r_esp, 0x5ace6fu); f_005a9ef0();
    /* 005ace6f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ace72: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005ace75: je 0x5ace83 */ if (fZ) goto L_005ace83;
L_005ace77:; BB(0x005ace77);
    /* 005ace77: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ace7a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ace7b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5ace80u); f_00686cae();
    /* 005ace80: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005ace83:; BB(0x005ace83);
    /* 005ace83: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ace86: mov esp, ebp */ r_esp = r_ebp;
    /* 005ace88: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ace89: ret 4 */ FN_RET(0x005ace60); r_esp += 8; return;
}

void f_005ace90(void) /* ??_G_com_error@@UAEPAXI@Z_220 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ace90);
    /* 005ace90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ace91: mov ebp, esp */ r_ebp = r_esp;
    /* 005ace93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ace94: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ace97: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ace9a: call 0x5aaa00 */ r_esp -= 4; W32(r_esp, 0x5ace9fu); f_005aaa00();
    /* 005ace9f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005acea2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005acea5: je 0x5aceb3 */ if (fZ) goto L_005aceb3;
L_005acea7:; BB(0x005acea7);
    /* 005acea7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005aceaa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005aceab: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5aceb0u); f_00686cae();
    /* 005aceb0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005aceb3:; BB(0x005aceb3);
    /* 005aceb3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005aceb6: mov esp, ebp */ r_esp = r_ebp;
    /* 005aceb8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005aceb9: ret 4 */ FN_RET(0x005ace90); r_esp += 8; return;
}

void f_005acec0(void) /* ??_G_com_error@@UAEPAXI@Z_221 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005acec0);
    /* 005acec0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005acec1: mov ebp, esp */ r_ebp = r_esp;
    /* 005acec3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005acec4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005acec7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005aceca: call 0x5ab490 */ r_esp -= 4; W32(r_esp, 0x5acecfu); f_005ab490();
    /* 005acecf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005aced2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005aced5: je 0x5acee3 */ if (fZ) goto L_005acee3;
L_005aced7:; BB(0x005aced7);
    /* 005aced7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005aceda: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005acedb: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5acee0u); f_00686cae();
    /* 005acee0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005acee3:; BB(0x005acee3);
    /* 005acee3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005acee6: mov esp, ebp */ r_esp = r_ebp;
    /* 005acee8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005acee9: ret 4 */ FN_RET(0x005acec0); r_esp += 8; return;
}

void f_005acef0(void) /* ??_G_com_error@@UAEPAXI@Z_222 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005acef0);
    /* 005acef0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005acef1: mov ebp, esp */ r_ebp = r_esp;
    /* 005acef3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005acef4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005acef7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005acefa: call 0x5abda0 */ r_esp -= 4; W32(r_esp, 0x5aceffu); f_005abda0();
    /* 005aceff: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005acf02: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005acf05: je 0x5acf13 */ if (fZ) goto L_005acf13;
L_005acf07:; BB(0x005acf07);
    /* 005acf07: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005acf0a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005acf0b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5acf10u); f_00686cae();
    /* 005acf10: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005acf13:; BB(0x005acf13);
    /* 005acf13: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005acf16: mov esp, ebp */ r_esp = r_ebp;
    /* 005acf18: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005acf19: ret 4 */ FN_RET(0x005acef0); r_esp += 8; return;
}

void f_005acf20(void) /* ??_G_com_error@@UAEPAXI@Z_223 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005acf20);
    /* 005acf20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005acf21: mov ebp, esp */ r_ebp = r_esp;
    /* 005acf23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005acf24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005acf27: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005acf2a: call 0x5ac050 */ r_esp -= 4; W32(r_esp, 0x5acf2fu); f_005ac050();
    /* 005acf2f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005acf32: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005acf35: je 0x5acf43 */ if (fZ) goto L_005acf43;
L_005acf37:; BB(0x005acf37);
    /* 005acf37: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005acf3a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005acf3b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5acf40u); f_00686cae();
    /* 005acf40: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005acf43:; BB(0x005acf43);
    /* 005acf43: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005acf46: mov esp, ebp */ r_esp = r_ebp;
    /* 005acf48: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005acf49: ret 4 */ FN_RET(0x005acf20); r_esp += 8; return;
}

void f_005acf50(void) /* ??0_AFX_OLE_STATE@@QAE@XZ_49 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005acf50);
    /* 005acf50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005acf51: mov ebp, esp */ r_ebp = r_esp;
    /* 005acf53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005acf54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005acf57: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005acf5a: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x5acf5fu); f_005e9e20();
    /* 005acf5f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005acf62: mov dword ptr [eax], 0x6cfe80 */ W32((u32)(r_eax), 0x6cfe80u);
    /* 005acf68: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005acf6b: mov esp, ebp */ r_esp = r_ebp;
    /* 005acf6d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005acf6e: ret  */ FN_RET(0x005acf50); r_esp += 4; return;
}

void f_005acf70(void) /* ??1_AFX_OLE_STATE@@UAE@XZ_49 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005acf70);
    /* 005acf70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005acf71: mov ebp, esp */ r_ebp = r_esp;
    /* 005acf73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005acf74: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005acf77: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005acf7a: mov dword ptr [eax], 0x6cfe80 */ W32((u32)(r_eax), 0x6cfe80u);
    /* 005acf80: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005acf83: call 0x5e9e40 */ r_esp -= 4; W32(r_esp, 0x5acf88u); f_005e9e40();
    /* 005acf88: mov esp, ebp */ r_esp = r_ebp;
    /* 005acf8a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005acf8b: ret  */ FN_RET(0x005acf70); r_esp += 4; return;
}

void f_005af850(void) /* ??_G_com_error@@UAEPAXI@Z_224 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005af850);
    /* 005af850: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005af851: mov ebp, esp */ r_ebp = r_esp;
    /* 005af853: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005af854: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005af857: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005af85a: call 0x5acf70 */ r_esp -= 4; W32(r_esp, 0x5af85fu); f_005acf70();
    /* 005af85f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005af862: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005af865: je 0x5af873 */ if (fZ) goto L_005af873;
L_005af867:; BB(0x005af867);
    /* 005af867: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005af86a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005af86b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5af870u); f_00686cae();
    /* 005af870: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005af873:; BB(0x005af873);
    /* 005af873: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005af876: mov esp, ebp */ r_esp = r_ebp;
    /* 005af878: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005af879: ret 4 */ FN_RET(0x005af850); r_esp += 8; return;
}

void f_005af880(void) /* ??Y?$CStringT@_WV?$StrTraitMFC@_WV?$ChTraitsCRT@_W@ATL@@@@@ATL@@QAEAAV01@PBD@Z_4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005af880);
    /* 005af880: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005af881: mov ebp, esp */ r_ebp = r_esp;
    /* 005af883: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005af885: push 0x6a7d08 */ { u32 v = 0x6a7d08u; r_esp -= 4; W32(r_esp, v); }
    /* 005af88a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005af890: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005af891: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005af894: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005af899: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005af89b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005af89c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005af89f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005af8a5: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005af8a8: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005af8ab: call 0x5d7b60 */ r_esp -= 4; W32(r_esp, 0x5af8b0u); f_005d7b60();
    /* 005af8b0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005af8b7: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005af8ba: mov dword ptr [eax], 0x6cfeac */ W32((u32)(r_eax), 0x6cfeacu);
    /* 005af8c0: push 0xfdec */ { u32 v = 0xfdecu; r_esp -= 4; W32(r_esp, v); }
    /* 005af8c5: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005af8c8: call 0x5f1ad0 */ r_esp -= 4; W32(r_esp, 0x5af8cdu); f_005f1ad0();
    /* 005af8cd: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005af8d4: jmp 0x5af8df */ goto L_005af8df;
L_005af8d6:; BB(0x005af8d6);
    /* 005af8d6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005af8d9: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005af8dc: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_005af8df:; BB(0x005af8df);
    /* 005af8df: cmp dword ptr [ebp - 0x10], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005af8e3: jge 0x5af905 */ if ((fS==fO)) goto L_005af905;
L_005af8e5:; BB(0x005af8e5);
    /* 005af8e5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005af8e7: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005af8ea: add edx, 0x1389 */ {  u32 a = r_edx; u32 b = 0x1389u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005af8f0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005af8f1: push 0x20584554 */ { u32 v = 0x20584554u; r_esp -= 4; W32(r_esp, v); }
    /* 005af8f6: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 005af8fb: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 005af8fe: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x5af903u); f_006044b0();
    /* 005af903: jmp 0x5af8d6 */ goto L_005af8d6;
L_005af905:; BB(0x005af905);
    /* 005af905: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 005af90c: jmp 0x5af917 */ goto L_005af917;
L_005af90e:; BB(0x005af90e);
    /* 005af90e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005af911: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005af914: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
L_005af917:; BB(0x005af917);
    /* 005af917: cmp dword ptr [ebp - 0x14], 0xd */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005af91b: jge 0x5af93d */ if ((fS==fO)) goto L_005af93d;
L_005af91d:; BB(0x005af91d);
    /* 005af91d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005af91f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005af922: add edx, 0x13a2 */ {  u32 a = r_edx; u32 b = 0x13a2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005af928: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005af929: push 0x20584554 */ { u32 v = 0x20584554u; r_esp -= 4; W32(r_esp, v); }
    /* 005af92e: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 005af933: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 005af936: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x5af93bu); f_006044b0();
    /* 005af93b: jmp 0x5af90e */ goto L_005af90e;
L_005af93d:; BB(0x005af93d);
    /* 005af93d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005af940: mov dword ptr [0x793600], ecx */ W32((u32)(0x793600u), r_ecx);
    /* 005af946: mov dword ptr [0x793604], 0 */ W32((u32)(0x793604u), 0x0u);
    /* 005af950: mov dword ptr [0x7935fc], 0 */ W32((u32)(0x7935fcu), 0x0u);
    /* 005af95a: mov dword ptr [0x7935f8], 0 */ W32((u32)(0x7935f8u), 0x0u);
    /* 005af964: mov dword ptr [0x7935f4], 0 */ W32((u32)(0x7935f4u), 0x0u);
    /* 005af96e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005af975: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005af978: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005af97b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005af982: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005af983: mov esp, ebp */ r_esp = r_ebp;
    /* 005af985: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005af986: ret  */ FN_RET(0x005af880); r_esp += 4; return;
}

void f_005afd70(void) /* ?do_always_noconv@?$codecvt@DDU_Mbstatet@@@std@@MBE_NXZ_22 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005afd70);
    /* 005afd70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005afd71: mov ebp, esp */ r_ebp = r_esp;
    /* 005afd73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005afd74: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005afd77: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005afd79: mov esp, ebp */ r_esp = r_ebp;
    /* 005afd7b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005afd7c: ret  */ FN_RET(0x005afd70); r_esp += 4; return;
}

void f_005b1ef0(void) /* unknown_libname_821 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b1ef0);
    /* 005b1ef0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b1ef1: mov ebp, esp */ r_ebp = r_esp;
    /* 005b1ef3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b1ef4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b1ef7: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005b1ef9: mov esp, ebp */ r_esp = r_ebp;
    /* 005b1efb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b1efc: ret  */ FN_RET(0x005b1ef0); r_esp += 4; return;
}

void f_005b23d0(void) /* ??_G_com_error@@UAEPAXI@Z_225 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b23d0);
    /* 005b23d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b23d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005b23d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b23d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b23d7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b23da: call 0x5af990 */ r_esp -= 4; W32(r_esp, 0x5b23dfu); f_005af990();
    /* 005b23df: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b23e2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005b23e5: je 0x5b23f3 */ if (fZ) goto L_005b23f3;
L_005b23e7:; BB(0x005b23e7);
    /* 005b23e7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b23ea: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b23eb: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5b23f0u); f_00686cae();
    /* 005b23f0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005b23f3:; BB(0x005b23f3);
    /* 005b23f3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b23f6: mov esp, ebp */ r_esp = r_ebp;
    /* 005b23f8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b23f9: ret 4 */ FN_RET(0x005b23d0); r_esp += 8; return;
}

void f_005b2430(void) /* unknown_libname_822 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b2430);
    /* 005b2430: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b2431: mov ebp, esp */ r_ebp = r_esp;
    /* 005b2433: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b2434: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b2437: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005b2439: mov esp, ebp */ r_esp = r_ebp;
    /* 005b243b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b243c: ret  */ FN_RET(0x005b2430); r_esp += 4; return;
}

void f_005b2440(void) /* unknown_libname_581 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b2440);
    /* 005b2440: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b2441: mov ebp, esp */ r_ebp = r_esp;
    /* 005b2443: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b2444: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b2447: mov eax, 4 */ r_eax = 0x4u;
    /* 005b244c: mov esp, ebp */ r_esp = r_ebp;
    /* 005b244e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b244f: ret  */ FN_RET(0x005b2440); r_esp += 4; return;
}

void f_005b2530(void) /* ??1_Mtx_guard@@QAE@XZ_19 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b2530);
    /* 005b2530: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b2531: mov ebp, esp */ r_ebp = r_esp;
    /* 005b2533: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b2534: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b2537: push 0x6cf8e8 */ { u32 v = 0x6cf8e8u; r_esp -= 4; W32(r_esp, v); }
    /* 005b253c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b2541u); f_00630f40();
    /* 005b2541: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b2544: mov esp, ebp */ r_esp = r_ebp;
    /* 005b2546: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b2547: ret  */ FN_RET(0x005b2530); r_esp += 4; return;
}

void f_005b2630(void) /* unknown_libname_582 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b2630);
    /* 005b2630: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b2631: mov ebp, esp */ r_ebp = r_esp;
    /* 005b2633: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b2634: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b2637: mov eax, 4 */ r_eax = 0x4u;
    /* 005b263c: mov esp, ebp */ r_esp = r_ebp;
    /* 005b263e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b263f: ret  */ FN_RET(0x005b2630); r_esp += 4; return;
}

void f_005b2640(void) /* unknown_libname_823 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b2640);
    /* 005b2640: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b2641: mov ebp, esp */ r_ebp = r_esp;
    /* 005b2643: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b2644: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b2647: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b2649: mov esp, ebp */ r_esp = r_ebp;
    /* 005b264b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b264c: ret  */ FN_RET(0x005b2640); r_esp += 4; return;
}

void f_005b2650(void) /* unknown_libname_824 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b2650);
    /* 005b2650: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b2651: mov ebp, esp */ r_ebp = r_esp;
    /* 005b2653: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b2654: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b2657: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b2659: mov esp, ebp */ r_esp = r_ebp;
    /* 005b265b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b265c: ret  */ FN_RET(0x005b2650); r_esp += 4; return;
}

void f_005b2b00(void) /* ?do_always_noconv@?$codecvt@DDU_Mbstatet@@@std@@MBE_NXZ_23 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b2b00);
    /* 005b2b00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b2b01: mov ebp, esp */ r_ebp = r_esp;
    /* 005b2b03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b2b04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b2b07: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005b2b09: mov esp, ebp */ r_esp = r_ebp;
    /* 005b2b0b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b2b0c: ret  */ FN_RET(0x005b2b00); r_esp += 4; return;
}

void f_005b2c80(void) /* ?do_always_noconv@?$codecvt@DDU_Mbstatet@@@std@@MBE_NXZ_24 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b2c80);
    /* 005b2c80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b2c81: mov ebp, esp */ r_ebp = r_esp;
    /* 005b2c83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b2c84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b2c87: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005b2c89: mov esp, ebp */ r_esp = r_ebp;
    /* 005b2c8b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b2c8c: ret  */ FN_RET(0x005b2c80); r_esp += 4; return;
}

void f_005b3850(void) /* ?Exit@CSourceStream@@QAEJXZ_2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b3850);
    /* 005b3850: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b3851: mov ebp, esp */ r_ebp = r_esp;
    /* 005b3853: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b3854: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b3857: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005b3859: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b385c: call 0x5b6040 */ r_esp -= 4; W32(r_esp, 0x5b3861u); f_005b6040();
    /* 005b3861: mov esp, ebp */ r_esp = r_ebp;
    /* 005b3863: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b3864: ret  */ FN_RET(0x005b3850); r_esp += 4; return;
}

void f_005b6e42(void) /* _WinMain@16_59_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b6e42);
L_005b6e42:; BB(0x005b6e42);
    /* 005b6e42: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b6e45: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b6e48: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005b6e4b: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b6e4f: jge 0x5b6f39 */ if ((fS==fO)) goto L_005b6f39;
L_005b6e55:; BB(0x005b6e55);
    /* 005b6e55: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b6e58: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b6e59: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5b6e5eu); f_005dcb00();
    /* 005b6e5e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b6e61: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005b6e64: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b6e67: mov al, byte ptr [edx + 0x4a0] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x4a0u))) & 0xffu);
    /* 005b6e6d: mov byte ptr [ebp - 0x19], al */ W8((u32)(r_ebp+0xffffffe7u), (u8)r_eax);
    /* 005b6e70: movzx ecx, byte ptr [ebp - 0x19] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffe7u));
    /* 005b6e74: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b6e76: je 0x5b6f34 */ if (fZ) goto L_005b6f34;
L_005b6e7c:; BB(0x005b6e7c);
    /* 005b6e7c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b6e7f: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b6e82: mov ecx, dword ptr [eax + edx*4 + 0x580] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x580u));
    /* 005b6e89: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005b6e8c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b6e8f: shl edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 005b6e92: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b6e95: lea ecx, [eax + edx + 0x48] */ r_ecx = (u32)(r_eax+r_edx+0x48u);
    /* 005b6e99: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005b6e9b: shl edx, 3 */ { u32 c = (3u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 005b6e9e: mov eax, dword ptr [ecx + edx] */ r_eax = R32((u32)(r_ecx+r_edx));
    /* 005b6ea1: mov ecx, dword ptr [ecx + edx + 4] */ r_ecx = R32((u32)(r_ecx+r_edx+0x4u));
    /* 005b6ea5: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005b6ea8: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005b6eab: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b6eae: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b6eaf: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b6eb2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b6eb3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b6eb6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b6eb7: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5b6ebcu); f_005dcb00();
    /* 005b6ebc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b6ebf: mov ecx, eax */ r_ecx = r_eax;
    /* 005b6ec1: call 0x5d5cf0 */ r_esp -= 4; W32(r_esp, 0x5b6ec6u); f_005d5cf0();
    /* 005b6ec6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b6ec9: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b6ecc: mov ecx, dword ptr [eax + edx*4 + 0x580] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x580u));
    /* 005b6ed3: call 0x5cb9b0 */ r_esp -= 4; W32(r_esp, 0x5b6ed8u); f_005cb9b0();
    /* 005b6ed8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b6edb: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b6ede: mov eax, dword ptr [edx + ecx*4 + 0x634] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x634u));
    /* 005b6ee5: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005b6ee8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b6eeb: shl ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 005b6eee: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005b6ef1: lea eax, [edx + ecx + 0x48] */ r_eax = (u32)(r_edx+r_ecx+0x48u);
    /* 005b6ef5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005b6ef7: shl ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 005b6efa: mov edx, dword ptr [eax + ecx] */ r_edx = R32((u32)(r_eax+r_ecx));
    /* 005b6efd: mov eax, dword ptr [eax + ecx + 4] */ r_eax = R32((u32)(r_eax+r_ecx+0x4u));
    /* 005b6f01: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005b6f04: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005b6f07: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b6f0a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b6f0b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b6f0e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b6f0f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b6f12: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b6f13: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5b6f18u); f_005dcb00();
    /* 005b6f18: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b6f1b: mov ecx, eax */ r_ecx = r_eax;
    /* 005b6f1d: call 0x5d5cf0 */ r_esp -= 4; W32(r_esp, 0x5b6f22u); f_005d5cf0();
    /* 005b6f22: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b6f25: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b6f28: mov ecx, dword ptr [edx + ecx*4 + 0x634] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x634u));
    /* 005b6f2f: call 0x5cb9b0 */ r_esp -= 4; W32(r_esp, 0x5b6f34u); f_005cb9b0();
L_005b6f34:; BB(0x005b6f34);
    /* 005b6f34: jmp 0x5b6e42 */ goto L_005b6e42;
L_005b6f39:; BB(0x005b6f39);
    /* 005b6f39: mov esp, ebp */ r_esp = r_ebp;
    /* 005b6f3b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b6f3c: ret  */ FN_RET(0x005b6e42); r_esp += 4; return;
}

void f_005b6f34(void) /* _WinMain@16_59 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b6f34);
    /* 005b6f34: jmp 0x5b6e42 */ f_005b6e42(); return;
}

void f_005b85a0(void) /* ??0_AFX_OLE_STATE@@QAE@XZ_50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b85a0);
    /* 005b85a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b85a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005b85a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b85a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b85a7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b85aa: call 0x5cb4b0 */ r_esp -= 4; W32(r_esp, 0x5b85afu); f_005cb4b0();
    /* 005b85af: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b85b2: mov dword ptr [eax], 0x6d1a5c */ W32((u32)(r_eax), 0x6d1a5cu);
    /* 005b85b8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b85bb: mov esp, ebp */ r_esp = r_ebp;
    /* 005b85bd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b85be: ret  */ FN_RET(0x005b85a0); r_esp += 4; return;
}

void f_005b85c0(void) /* ??1_AFX_OLE_STATE@@UAE@XZ_50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b85c0);
    /* 005b85c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b85c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005b85c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b85c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b85c7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b85ca: mov dword ptr [eax], 0x6d1a5c */ W32((u32)(r_eax), 0x6d1a5cu);
    /* 005b85d0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b85d3: call 0x5cb590 */ r_esp -= 4; W32(r_esp, 0x5b85d8u); f_005cb590();
    /* 005b85d8: mov esp, ebp */ r_esp = r_ebp;
    /* 005b85da: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b85db: ret  */ FN_RET(0x005b85c0); r_esp += 4; return;
}

void f_005b8fc0(void) /* ??_G_com_error@@UAEPAXI@Z_226 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b8fc0);
    /* 005b8fc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b8fc1: mov ebp, esp */ r_ebp = r_esp;
    /* 005b8fc3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8fc4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b8fc7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b8fca: call 0x5b30a0 */ r_esp -= 4; W32(r_esp, 0x5b8fcfu); f_005b30a0();
    /* 005b8fcf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b8fd2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005b8fd5: je 0x5b8fe3 */ if (fZ) goto L_005b8fe3;
L_005b8fd7:; BB(0x005b8fd7);
    /* 005b8fd7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b8fda: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8fdb: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5b8fe0u); f_00686cae();
    /* 005b8fe0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005b8fe3:; BB(0x005b8fe3);
    /* 005b8fe3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b8fe6: mov esp, ebp */ r_esp = r_ebp;
    /* 005b8fe8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b8fe9: ret 4 */ FN_RET(0x005b8fc0); r_esp += 8; return;
}

void f_005b8ff0(void) /* ??_G_com_error@@UAEPAXI@Z_227 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b8ff0);
    /* 005b8ff0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b8ff1: mov ebp, esp */ r_ebp = r_esp;
    /* 005b8ff3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8ff4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b8ff7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b8ffa: call 0x5b85c0 */ r_esp -= 4; W32(r_esp, 0x5b8fffu); f_005b85c0();
    /* 005b8fff: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b9002: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005b9005: je 0x5b9013 */ if (fZ) goto L_005b9013;
L_005b9007:; BB(0x005b9007);
    /* 005b9007: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b900a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b900b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5b9010u); f_00686cae();
    /* 005b9010: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005b9013:; BB(0x005b9013);
    /* 005b9013: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b9016: mov esp, ebp */ r_esp = r_ebp;
    /* 005b9018: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b9019: ret 4 */ FN_RET(0x005b8ff0); r_esp += 8; return;
}

void f_005b9790(void) /* ??1CComCriticalSection@ATL@@QAE@XZ_18 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b9790);
    /* 005b9790: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b9791: mov ebp, esp */ r_ebp = r_esp;
    /* 005b9793: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b9794: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b9797: mov esp, ebp */ r_esp = r_ebp;
    /* 005b9799: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b979a: ret  */ FN_RET(0x005b9790); r_esp += 4; return;
}

void f_005b9bb7(void) /* _WinMain@16_60_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b9bb7);
L_005b9bb7:; BB(0x005b9bb7);
    /* 005b9bb7: mov eax, dword ptr [ebp - 0x418] */ r_eax = R32((u32)(r_ebp+0xfffffbe8u));
    /* 005b9bbd: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b9bc0: mov dword ptr [ebp - 0x418], eax */ W32((u32)(r_ebp+0xfffffbe8u), r_eax);
    /* 005b9bc6: cmp dword ptr [ebp - 0x418], 0x9b */ {  u32 a = R32((u32)(r_ebp+0xfffffbe8u)); u32 b = 0x9bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b9bd0: jg 0x5b9e51 */ if ((!fZ&&fS==fO)) goto L_005b9e51;
L_005b9bd6:; BB(0x005b9bd6);
    /* 005b9bd6: mov ecx, dword ptr [ebp - 0x418] */ r_ecx = R32((u32)(r_ebp+0xfffffbe8u));
    /* 005b9bdc: imul ecx, ecx, 0xc */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xcu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005b9bdf: cmp dword ptr [ecx + 0x770028], 0 */ {  u32 a = R32((u32)(r_ecx+0x770028u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b9be6: jne 0x5b9bea */ if (!fZ) goto L_005b9bea;
L_005b9be8:; BB(0x005b9be8);
    /* 005b9be8: jmp 0x5b9bb7 */ goto L_005b9bb7;
L_005b9bea:; BB(0x005b9bea);
    /* 005b9bea: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005b9bed: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b9bee: mov eax, dword ptr [ebp - 0x418] */ r_eax = R32((u32)(r_ebp+0xfffffbe8u));
    /* 005b9bf4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b9bf5: push 0x6d1bd0 */ { u32 v = 0x6d1bd0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b9bfa: lea ecx, [ebp - 0x408] */ r_ecx = (u32)(r_ebp+0xfffffbf8u);
    /* 005b9c00: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b9c01: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x5b9c07u); call_ind(t); }
    /* 005b9c07: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b9c0a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b9c0c: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005b9c0e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b9c11: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b9c14: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b9c15: mov eax, dword ptr [ebp - 0x410] */ r_eax = R32((u32)(r_ebp+0xfffffbf0u));
    /* 005b9c1b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b9c1c: mov ecx, dword ptr [ebp - 0x414] */ r_ecx = R32((u32)(r_ebp+0xfffffbecu));
    /* 005b9c22: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b9c23: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005b9c25: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005b9c27: mov edx, dword ptr [ebp - 0x418] */ r_edx = R32((u32)(r_ebp+0xfffffbe8u));
    /* 005b9c2d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b9c2e: lea eax, [ebp - 0x408] */ r_eax = (u32)(r_ebp+0xfffffbf8u);
    /* 005b9c34: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b9c35: mov ecx, dword ptr [ebp - 0x418] */ r_ecx = R32((u32)(r_ebp+0xfffffbe8u));
    /* 005b9c3b: add ecx, 0x3e8 */ {  u32 a = r_ecx; u32 b = 0x3e8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b9c41: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b9c42: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b9c44: mov ecx, dword ptr [ebp - 0x40c] */ r_ecx = R32((u32)(r_ebp+0xfffffbf4u));
    /* 005b9c4a: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x5b9c4fu); f_005fa5b0();
    /* 005b9c4f: mov dword ptr [ebp - 0x41c], eax */ W32((u32)(r_ebp+0xfffffbe4u), r_eax);
    /* 005b9c55: mov ecx, dword ptr [ebp - 0x41c] */ r_ecx = R32((u32)(r_ebp+0xfffffbe4u));
    /* 005b9c5b: call 0x5ef180 */ r_esp -= 4; W32(r_esp, 0x5b9c60u); f_005ef180();
    /* 005b9c60: mov edx, dword ptr [ebp - 0x41c] */ r_edx = R32((u32)(r_ebp+0xfffffbe4u));
    /* 005b9c66: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005b9c68: mov ecx, dword ptr [ebp - 0x41c] */ r_ecx = R32((u32)(r_ebp+0xfffffbe4u));
    /* 005b9c6e: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 005b9c71: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5b9c73u); call_ind(t); }
    /* 005b9c73: mov esi, eax */ r_esi = r_eax;
    /* 005b9c75: mov ecx, dword ptr [ebp - 0x41c] */ r_ecx = R32((u32)(r_ebp+0xfffffbe4u));
    /* 005b9c7b: call 0x5f5590 */ r_esp -= 4; W32(r_esp, 0x5b9c80u); f_005f5590();
    /* 005b9c80: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005b9c82: cmp esi, dword ptr [ebp - 4] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b9c85: jle 0x5b9cc4 */ if ((fZ||fS!=fO)) goto L_005b9cc4;
L_005b9c87:; BB(0x005b9c87);
    /* 005b9c87: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b9c8a: add eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b9c8d: mov dword ptr [ebp - 0x414], eax */ W32((u32)(r_ebp+0xfffffbecu), r_eax);
    /* 005b9c93: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b9c96: mov dword ptr [ebp - 0x410], ecx */ W32((u32)(r_ebp+0xfffffbf0u), r_ecx);
    /* 005b9c9c: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005b9ca3: mov edx, dword ptr [ebp - 0x410] */ r_edx = R32((u32)(r_ebp+0xfffffbf0u));
    /* 005b9ca9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b9caa: mov eax, dword ptr [ebp - 0x414] */ r_eax = R32((u32)(r_ebp+0xfffffbecu));
    /* 005b9cb0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b9cb1: mov ecx, dword ptr [ebp - 0x41c] */ r_ecx = R32((u32)(r_ebp+0xfffffbe4u));
    /* 005b9cb7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005b9cb9: mov ecx, dword ptr [ebp - 0x41c] */ r_ecx = R32((u32)(r_ebp+0xfffffbe4u));
    /* 005b9cbf: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005b9cc2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5b9cc4u); call_ind(t); }
L_005b9cc4:; BB(0x005b9cc4);
    /* 005b9cc4: mov ecx, dword ptr [ebp - 0x41c] */ r_ecx = R32((u32)(r_ebp+0xfffffbe4u));
    /* 005b9cca: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x5b9ccfu); f_005f5550();
    /* 005b9ccf: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b9cd2: sub ecx, dword ptr [ebp - 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005b9cd5: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b9cd7: jge 0x5b9dcd */ if ((fS==fO)) goto L_005b9dcd;
L_005b9cdd:; BB(0x005b9cdd);
    /* 005b9cdd: mov edx, dword ptr [ebp - 0x41c] */ r_edx = R32((u32)(r_ebp+0xfffffbe4u));
    /* 005b9ce3: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005b9ce5: mov ecx, dword ptr [ebp - 0x41c] */ r_ecx = R32((u32)(r_ebp+0xfffffbe4u));
    /* 005b9ceb: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 005b9cee: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5b9cf0u); call_ind(t); }
    /* 005b9cf0: mov esi, eax */ r_esi = r_eax;
    /* 005b9cf2: mov ecx, dword ptr [ebp - 0x41c] */ r_ecx = R32((u32)(r_ebp+0xfffffbe4u));
    /* 005b9cf8: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x5b9cfdu); f_005f5550();
    /* 005b9cfd: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005b9cff: cmp esi, dword ptr [ebp - 8] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b9d02: jle 0x5b9dcd */ if ((fZ||fS!=fO)) goto L_005b9dcd;
L_005b9d08:; BB(0x005b9d08);
    /* 005b9d08: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b9d0a: mov eax, dword ptr [ebp - 0x41c] */ r_eax = R32((u32)(r_ebp+0xfffffbe4u));
    /* 005b9d10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b9d11: mov ecx, dword ptr [ebp - 0x40c] */ r_ecx = R32((u32)(r_ebp+0xfffffbf4u));
    /* 005b9d17: call 0x5fbd40 */ r_esp -= 4; W32(r_esp, 0x5b9d1cu); f_005fbd40();
    /* 005b9d1c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b9d1f: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b9d22: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005b9d25: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b9d28: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b9d29: mov ecx, dword ptr [ebp - 0x420] */ r_ecx = R32((u32)(r_ebp+0xfffffbe0u));
    /* 005b9d2f: call 0x5b9320 */ r_esp -= 4; W32(r_esp, 0x5b9d34u); f_005b9320();
    /* 005b9d34: mov dword ptr [ebp - 0x40c], eax */ W32((u32)(r_ebp+0xfffffbf4u), r_eax);
    /* 005b9d3a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005b9d3d: mov dword ptr [ebp - 0x414], eax */ W32((u32)(r_ebp+0xfffffbecu), r_eax);
    /* 005b9d43: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b9d46: mov dword ptr [ebp - 0x410], ecx */ W32((u32)(r_ebp+0xfffffbf0u), r_ecx);
    /* 005b9d4c: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b9d51: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b9d56: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b9d5b: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b9d60: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b9d65: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b9d6a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b9d6d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b9d6e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b9d70: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b9d72: mov ecx, dword ptr [ebp - 0x40c] */ r_ecx = R32((u32)(r_ebp+0xfffffbf4u));
    /* 005b9d78: call 0x5f8570 */ r_esp -= 4; W32(r_esp, 0x5b9d7du); f_005f8570();
    /* 005b9d7d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b9d7e: mov ecx, dword ptr [ebp - 0x40c] */ r_ecx = R32((u32)(r_ebp+0xfffffbf4u));
    /* 005b9d84: call 0x5f8550 */ r_esp -= 4; W32(r_esp, 0x5b9d89u); f_005f8550();
    /* 005b9d89: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b9d8a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b9d8d: add eax, 0x384 */ {  u32 a = r_eax; u32 b = 0x384u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b9d92: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b9d93: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b9d95: mov ecx, dword ptr [ebp - 0x40c] */ r_ecx = R32((u32)(r_ebp+0xfffffbf4u));
    /* 005b9d9b: call 0x5fa880 */ r_esp -= 4; W32(r_esp, 0x5b9da0u); f_005fa880();
    /* 005b9da0: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b9da3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b9da4: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b9da7: add edx, 0x384 */ {  u32 a = r_edx; u32 b = 0x384u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b9dad: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b9dae: mov ecx, dword ptr [ebp - 0x420] */ r_ecx = R32((u32)(r_ebp+0xfffffbe0u));
    /* 005b9db4: call 0x5b9440 */ r_esp -= 4; W32(r_esp, 0x5b9db9u); f_005b9440();
    /* 005b9db9: mov eax, dword ptr [ebp - 0x418] */ r_eax = R32((u32)(r_ebp+0xfffffbe8u));
    /* 005b9dbf: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005b9dc2: mov dword ptr [ebp - 0x418], eax */ W32((u32)(r_ebp+0xfffffbe8u), r_eax);
    /* 005b9dc8: jmp 0x5b9bb7 */ goto L_005b9bb7;
L_005b9dcd:; BB(0x005b9dcd);
    /* 005b9dcd: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b9dd0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b9dd1: mov edx, dword ptr [ebp - 0x418] */ r_edx = R32((u32)(r_ebp+0xfffffbe8u));
    /* 005b9dd7: add edx, 0x3e8 */ {  u32 a = r_edx; u32 b = 0x3e8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b9ddd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b9dde: mov ecx, dword ptr [ebp - 0x420] */ r_ecx = R32((u32)(r_ebp+0xfffffbe0u));
    /* 005b9de4: call 0x5b9440 */ r_esp -= 4; W32(r_esp, 0x5b9de9u); f_005b9440();
    /* 005b9de9: mov ecx, dword ptr [ebp - 0x41c] */ r_ecx = R32((u32)(r_ebp+0xfffffbe4u));
    /* 005b9def: call 0x5f5590 */ r_esp -= 4; W32(r_esp, 0x5b9df4u); f_005f5590();
    /* 005b9df4: add eax, dword ptr [ebp - 0x410] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffbf0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b9dfa: mov dword ptr [ebp - 0x410], eax */ W32((u32)(r_ebp+0xfffffbf0u), r_eax);
    /* 005b9e00: mov eax, dword ptr [ebp - 0x41c] */ r_eax = R32((u32)(r_ebp+0xfffffbe4u));
    /* 005b9e06: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005b9e08: mov ecx, dword ptr [ebp - 0x41c] */ r_ecx = R32((u32)(r_ebp+0xfffffbe4u));
    /* 005b9e0e: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005b9e11: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5b9e13u); call_ind(t); }
    /* 005b9e13: mov esi, eax */ r_esi = r_eax;
    /* 005b9e15: mov ecx, dword ptr [ebp - 0x41c] */ r_ecx = R32((u32)(r_ebp+0xfffffbe4u));
    /* 005b9e1b: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x5b9e20u); f_005f5550();
    /* 005b9e20: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005b9e22: cmp dword ptr [ebp - 0xc], esi */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b9e25: jge 0x5b9e4c */ if ((fS==fO)) goto L_005b9e4c;
L_005b9e27:; BB(0x005b9e27);
    /* 005b9e27: mov ecx, dword ptr [ebp - 0x41c] */ r_ecx = R32((u32)(r_ebp+0xfffffbe4u));
    /* 005b9e2d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005b9e2f: mov ecx, dword ptr [ebp - 0x41c] */ r_ecx = R32((u32)(r_ebp+0xfffffbe4u));
    /* 005b9e35: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005b9e38: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5b9e3au); call_ind(t); }
    /* 005b9e3a: mov esi, eax */ r_esi = r_eax;
    /* 005b9e3c: mov ecx, dword ptr [ebp - 0x41c] */ r_ecx = R32((u32)(r_ebp+0xfffffbe4u));
    /* 005b9e42: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x5b9e47u); f_005f5550();
    /* 005b9e47: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005b9e49: mov dword ptr [ebp - 0xc], esi */ W32((u32)(r_ebp+0xfffffff4u), r_esi);
L_005b9e4c:; BB(0x005b9e4c);
    /* 005b9e4c: jmp 0x5b9bb7 */ goto L_005b9bb7;
L_005b9e51:; BB(0x005b9e51);
    /* 005b9e51: mov ecx, dword ptr [ebp - 0x420] */ r_ecx = R32((u32)(r_ebp+0xfffffbe0u));
    /* 005b9e57: call 0x5b94f0 */ r_esp -= 4; W32(r_esp, 0x5b9e5cu); f_005b94f0();
    /* 005b9e5c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b9e5d: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005b9e60: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005b9e62: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x5b9e67u); f_00686d72();
    /* 005b9e67: mov esp, ebp */ r_esp = r_ebp;
    /* 005b9e69: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b9e6a: ret 8 */ FN_RET(0x005b9bb7); r_esp += 12; return;
}

void f_005b9e70(void) /* ??_G_com_error@@UAEPAXI@Z_228 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b9e70);
    /* 005b9e70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b9e71: mov ebp, esp */ r_ebp = r_esp;
    /* 005b9e73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b9e74: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b9e77: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b9e7a: call 0x5b90d0 */ r_esp -= 4; W32(r_esp, 0x5b9e7fu); f_005b90d0();
    /* 005b9e7f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b9e82: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005b9e85: je 0x5b9e93 */ if (fZ) goto L_005b9e93;
L_005b9e87:; BB(0x005b9e87);
    /* 005b9e87: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b9e8a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b9e8b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5b9e90u); f_00686cae();
    /* 005b9e90: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005b9e93:; BB(0x005b9e93);
    /* 005b9e93: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b9e96: mov esp, ebp */ r_esp = r_ebp;
    /* 005b9e98: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b9e99: ret 4 */ FN_RET(0x005b9e70); r_esp += 8; return;
}

void f_005bbc30(void) /* ??1bad_alloc@std@@UAE@XZ */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bbc30);
    /* 005bbc30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bbc31: mov ebp, esp */ r_ebp = r_esp;
    /* 005bbc33: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bbc34: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005bbc37: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bbc3a: mov dword ptr [eax], 0x6d1c0c */ W32((u32)(r_eax), 0x6d1c0cu);
    /* 005bbc40: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bbc43: call dword ptr [0x6b2278] */ { u32 t = R32((u32)(0x6b2278u)); r_esp -= 4; W32(r_esp, 0x5bbc49u); call_ind(t); }
    /* 005bbc49: mov esp, ebp */ r_esp = r_ebp;
    /* 005bbc4b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bbc4c: ret  */ FN_RET(0x005bbc30); r_esp += 4; return;
}

void f_005bbc90(void) /* ??0bad_alloc@std@@QAE@ABV01@@Z */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bbc90);
    /* 005bbc90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bbc91: mov ebp, esp */ r_ebp = r_esp;
    /* 005bbc93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bbc94: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005bbc97: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005bbc9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bbc9b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bbc9e: call dword ptr [0x6b2210] */ { u32 t = R32((u32)(0x6b2210u)); r_esp -= 4; W32(r_esp, 0x5bbca4u); call_ind(t); }
    /* 005bbca4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bbca7: mov dword ptr [ecx], 0x6d1c0c */ W32((u32)(r_ecx), 0x6d1c0cu);
    /* 005bbcad: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bbcb0: mov esp, ebp */ r_esp = r_ebp;
    /* 005bbcb2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bbcb3: ret 4 */ FN_RET(0x005bbc90); r_esp += 8; return;
}

void f_005be2f0(void) /* ??_G_com_error@@UAEPAXI@Z_229 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005be2f0);
    /* 005be2f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005be2f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005be2f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005be2f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005be2f7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005be2fa: call 0x5bc890 */ r_esp -= 4; W32(r_esp, 0x5be2ffu); f_005bc890();
    /* 005be2ff: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005be302: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005be305: je 0x5be313 */ if (fZ) goto L_005be313;
L_005be307:; BB(0x005be307);
    /* 005be307: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005be30a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005be30b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5be310u); f_00686cae();
    /* 005be310: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005be313:; BB(0x005be313);
    /* 005be313: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005be316: mov esp, ebp */ r_esp = r_ebp;
    /* 005be318: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005be319: ret 4 */ FN_RET(0x005be2f0); r_esp += 8; return;
}

void f_005be3c0(void) /* ??_G_com_error@@UAEPAXI@Z_230 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005be3c0);
    /* 005be3c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005be3c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005be3c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005be3c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005be3c7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005be3ca: call 0x606a40 */ r_esp -= 4; W32(r_esp, 0x5be3cfu); f_00606a40();
    /* 005be3cf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005be3d2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005be3d5: je 0x5be3e3 */ if (fZ) goto L_005be3e3;
L_005be3d7:; BB(0x005be3d7);
    /* 005be3d7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005be3da: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005be3db: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5be3e0u); f_00686cae();
    /* 005be3e0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005be3e3:; BB(0x005be3e3);
    /* 005be3e3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005be3e6: mov esp, ebp */ r_esp = r_ebp;
    /* 005be3e8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005be3e9: ret 4 */ FN_RET(0x005be3c0); r_esp += 8; return;
}

void f_005bf260(void) /* ?SetOwningNode@SchedulingRing@details@Concurrency@@AAEXPAVSchedulingNode@23@@Z */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bf260);
    /* 005bf260: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bf261: mov ebp, esp */ r_ebp = r_esp;
    /* 005bf263: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bf264: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005bf267: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bf26a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005bf26d: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 005bf270: mov esp, ebp */ r_esp = r_ebp;
    /* 005bf272: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bf273: ret 4 */ FN_RET(0x005bf260); r_esp += 8; return;
}

void f_005bf280(void) /* ?unbuffered@streambuf@@IAEXH@Z_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bf280);
    /* 005bf280: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bf281: mov ebp, esp */ r_ebp = r_esp;
    /* 005bf283: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bf284: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005bf287: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bf28a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005bf28d: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 005bf290: mov esp, ebp */ r_esp = r_ebp;
    /* 005bf292: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bf293: ret 4 */ FN_RET(0x005bf280); r_esp += 8; return;
}

void f_005bfd00(void) /* ??_G_com_error@@UAEPAXI@Z_231 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bfd00);
    /* 005bfd00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bfd01: mov ebp, esp */ r_ebp = r_esp;
    /* 005bfd03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bfd04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005bfd07: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bfd0a: call 0x5bf3d0 */ r_esp -= 4; W32(r_esp, 0x5bfd0fu); f_005bf3d0();
    /* 005bfd0f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005bfd12: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005bfd15: je 0x5bfd23 */ if (fZ) goto L_005bfd23;
L_005bfd17:; BB(0x005bfd17);
    /* 005bfd17: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bfd1a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bfd1b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5bfd20u); f_00686cae();
    /* 005bfd20: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005bfd23:; BB(0x005bfd23);
    /* 005bfd23: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bfd26: mov esp, ebp */ r_esp = r_ebp;
    /* 005bfd28: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bfd29: ret 4 */ FN_RET(0x005bfd00); r_esp += 8; return;
}

void f_005c4750(void) /* ?Exit@CSourceStream@@QAEJXZ_3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c4750);
    /* 005c4750: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c4751: mov ebp, esp */ r_ebp = r_esp;
    /* 005c4753: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c4754: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c4757: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005c4759: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c475c: call 0x5c3110 */ r_esp -= 4; W32(r_esp, 0x5c4761u); f_005c3110();
    /* 005c4761: mov esp, ebp */ r_esp = r_ebp;
    /* 005c4763: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c4764: ret  */ FN_RET(0x005c4750); r_esp += 4; return;
}

void f_005c4770(void) /* unknown_libname_825 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c4770);
    /* 005c4770: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c4771: mov ebp, esp */ r_ebp = r_esp;
    /* 005c4773: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c4774: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c4777: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005c4779: mov esp, ebp */ r_esp = r_ebp;
    /* 005c477b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c477c: ret  */ FN_RET(0x005c4770); r_esp += 4; return;
}

void f_005c4780(void) /* ??_G_com_error@@UAEPAXI@Z_232 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c4780);
    /* 005c4780: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c4781: mov ebp, esp */ r_ebp = r_esp;
    /* 005c4783: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c4784: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c4787: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c478a: call 0x5c0b40 */ r_esp -= 4; W32(r_esp, 0x5c478fu); f_005c0b40();
    /* 005c478f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c4792: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005c4795: je 0x5c47a3 */ if (fZ) goto L_005c47a3;
L_005c4797:; BB(0x005c4797);
    /* 005c4797: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c479a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c479b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5c47a0u); f_00686cae();
    /* 005c47a0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005c47a3:; BB(0x005c47a3);
    /* 005c47a3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c47a6: mov esp, ebp */ r_esp = r_ebp;
    /* 005c47a8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c47a9: ret 4 */ FN_RET(0x005c4780); r_esp += 8; return;
}

void f_005c48d0(void) /* ??_G_com_error@@UAEPAXI@Z_233 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c48d0);
    /* 005c48d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c48d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005c48d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c48d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c48d7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c48da: call 0x5c2380 */ r_esp -= 4; W32(r_esp, 0x5c48dfu); f_005c2380();
    /* 005c48df: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c48e2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005c48e5: je 0x5c48f3 */ if (fZ) goto L_005c48f3;
L_005c48e7:; BB(0x005c48e7);
    /* 005c48e7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c48ea: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c48eb: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5c48f0u); f_00686cae();
    /* 005c48f0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005c48f3:; BB(0x005c48f3);
    /* 005c48f3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c48f6: mov esp, ebp */ r_esp = r_ebp;
    /* 005c48f8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c48f9: ret 4 */ FN_RET(0x005c48d0); r_esp += 8; return;
}

void f_005c80e0(void) /* ??_G_com_error@@UAEPAXI@Z_234 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c80e0);
    /* 005c80e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c80e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005c80e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c80e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c80e7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c80ea: call 0x5c6ed0 */ r_esp -= 4; W32(r_esp, 0x5c80efu); f_005c6ed0();
    /* 005c80ef: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c80f2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005c80f5: je 0x5c8103 */ if (fZ) goto L_005c8103;
L_005c80f7:; BB(0x005c80f7);
    /* 005c80f7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c80fa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c80fb: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5c8100u); f_00686cae();
    /* 005c8100: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005c8103:; BB(0x005c8103);
    /* 005c8103: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c8106: mov esp, ebp */ r_esp = r_ebp;
    /* 005c8108: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c8109: ret 4 */ FN_RET(0x005c80e0); r_esp += 8; return;
}

void f_005c84a0(void) /* ?SetAtGrow@?$CTypedPtrArray@VCObArray@@PAVCBitmap@@@@QAEXHPAVCBitmap@@@Z_8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c84a0);
    /* 005c84a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c84a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005c84a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c84a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c84a7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005c84aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c84ab: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005c84ae: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c84af: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c84b2: call 0x5dc7d0 */ r_esp -= 4; W32(r_esp, 0x5c84b7u); f_005dc7d0();
    /* 005c84b7: mov esp, ebp */ r_esp = r_ebp;
    /* 005c84b9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c84ba: ret 8 */ FN_RET(0x005c84a0); r_esp += 12; return;
}

void f_005c84e0(void) /* ?do_always_noconv@?$codecvt@DDU_Mbstatet@@@std@@MBE_NXZ_25 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c84e0);
    /* 005c84e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c84e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005c84e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c84e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c84e7: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005c84e9: mov esp, ebp */ r_esp = r_ebp;
    /* 005c84eb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c84ec: ret  */ FN_RET(0x005c84e0); r_esp += 4; return;
}

void f_005c84f0(void) /* ??1CComCriticalSection@ATL@@QAE@XZ_19 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c84f0);
    /* 005c84f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c84f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005c84f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c84f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c84f7: mov esp, ebp */ r_esp = r_ebp;
    /* 005c84f9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c84fa: ret  */ FN_RET(0x005c84f0); r_esp += 4; return;
}

void f_005c8610(void) /* unknown_libname_826 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c8610);
    /* 005c8610: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c8611: mov ebp, esp */ r_ebp = r_esp;
    /* 005c8613: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c8614: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c8617: mov esp, ebp */ r_esp = r_ebp;
    /* 005c8619: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c861a: ret 4 */ FN_RET(0x005c8610); r_esp += 8; return;
}

void f_005c87f0(void) /* ??1_Mtx_guard@@QAE@XZ_20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c87f0);
    /* 005c87f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c87f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005c87f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c87f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c87f7: push 0x6d1c4c */ { u32 v = 0x6d1c4cu; r_esp -= 4; W32(r_esp, v); }
    /* 005c87fc: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5c8801u); f_00630f40();
    /* 005c8801: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c8804: mov esp, ebp */ r_esp = r_ebp;
    /* 005c8806: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c8807: ret  */ FN_RET(0x005c87f0); r_esp += 4; return;
}

void f_005c8830(void) /* unknown_libname_827 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c8830);
    /* 005c8830: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c8831: mov ebp, esp */ r_ebp = r_esp;
    /* 005c8833: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c8834: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c8837: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005c8839: mov esp, ebp */ r_esp = r_ebp;
    /* 005c883b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c883c: ret  */ FN_RET(0x005c8830); r_esp += 4; return;
}

void f_005c8860(void) /* unknown_libname_828 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c8860);
    /* 005c8860: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c8861: mov ebp, esp */ r_ebp = r_esp;
    /* 005c8863: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c8864: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c8867: mov eax, 1 */ r_eax = 0x1u;
    /* 005c886c: mov esp, ebp */ r_esp = r_ebp;
    /* 005c886e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c886f: ret  */ FN_RET(0x005c8860); r_esp += 4; return;
}

void f_005c8870(void) /* unknown_libname_829 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c8870);
    /* 005c8870: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c8871: mov ebp, esp */ r_ebp = r_esp;
    /* 005c8873: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c8874: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c8877: mov eax, 1 */ r_eax = 0x1u;
    /* 005c887c: mov esp, ebp */ r_esp = r_ebp;
    /* 005c887e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c887f: ret  */ FN_RET(0x005c8870); r_esp += 4; return;
}

void f_005c8950(void) /* unknown_libname_830 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c8950);
    /* 005c8950: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c8951: mov ebp, esp */ r_ebp = r_esp;
    /* 005c8953: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c8954: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c8957: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005c8959: mov esp, ebp */ r_esp = r_ebp;
    /* 005c895b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c895c: ret  */ FN_RET(0x005c8950); r_esp += 4; return;
}

void f_005c8970(void) /* ?GetRibbonQuickAccessToolBarChevronOffset@CMFCVisualManagerWindows7@@UAEHXZ_3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c8970);
    /* 005c8970: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c8971: mov ebp, esp */ r_ebp = r_esp;
    /* 005c8973: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c8974: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c8977: mov eax, 0xd */ r_eax = 0xdu;
    /* 005c897c: mov esp, ebp */ r_esp = r_ebp;
    /* 005c897e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c897f: ret  */ FN_RET(0x005c8970); r_esp += 4; return;
}

void f_005c8990(void) /* ??8_ContextCallback@details@Concurrency@@QBE_NABV012@@Z_9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c8990);
    /* 005c8990: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c8991: mov ebp, esp */ r_ebp = r_esp;
    /* 005c8993: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c8994: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c8997: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005c8999: mov esp, ebp */ r_esp = r_ebp;
    /* 005c899b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c899c: ret 4 */ FN_RET(0x005c8990); r_esp += 8; return;
}

void f_005c89f0(void) /* unknown_libname_831 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c89f0);
    /* 005c89f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c89f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005c89f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c89f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c89f7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c89f9: mov esp, ebp */ r_esp = r_ebp;
    /* 005c89fb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c89fc: ret  */ FN_RET(0x005c89f0); r_esp += 4; return;
}

void f_005c8b80(void) /* ??_G_com_error@@UAEPAXI@Z_235 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c8b80);
    /* 005c8b80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c8b81: mov ebp, esp */ r_ebp = r_esp;
    /* 005c8b83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c8b84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c8b87: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c8b8a: call 0x5c8140 */ r_esp -= 4; W32(r_esp, 0x5c8b8fu); f_005c8140();
    /* 005c8b8f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c8b92: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005c8b95: je 0x5c8ba3 */ if (fZ) goto L_005c8ba3;
L_005c8b97:; BB(0x005c8b97);
    /* 005c8b97: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c8b9a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c8b9b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5c8ba0u); f_00686cae();
    /* 005c8ba0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005c8ba3:; BB(0x005c8ba3);
    /* 005c8ba3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c8ba6: mov esp, ebp */ r_esp = r_ebp;
    /* 005c8ba8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c8ba9: ret 4 */ FN_RET(0x005c8b80); r_esp += 8; return;
}

void f_005c8bb0(void) /* ??0?$_Order_node_base@W4agent_status@Concurrency@@@Concurrency@@QAE@XZ */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c8bb0);
    /* 005c8bb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c8bb1: mov ebp, esp */ r_ebp = r_esp;
    /* 005c8bb3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c8bb4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c8bb7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c8bba: call 0x5d0980 */ r_esp -= 4; W32(r_esp, 0x5c8bbfu); f_005d0980();
    /* 005c8bbf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c8bc2: mov dword ptr [eax], 0x6d23ac */ W32((u32)(r_eax), 0x6d23acu);
    /* 005c8bc8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c8bcb: mov dword ptr [ecx + 0xe0], 0 */ W32((u32)(r_ecx+0xe0u), 0x0u);
    /* 005c8bd5: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 005c8bd7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c8bd9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c8bdc: add edx, 0x18 */ {  u32 a = r_edx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c8bdf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c8be0: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x5c8be5u); f_00686fa2();
    /* 005c8be5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c8be8: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 005c8bea: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c8bec: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c8bef: add eax, 0x34 */ {  u32 a = r_eax; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c8bf2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c8bf3: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x5c8bf8u); f_00686fa2();
    /* 005c8bf8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c8bfb: push 0x8c */ { u32 v = 0x8cu; r_esp -= 4; W32(r_esp, v); }
    /* 005c8c00: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c8c02: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c8c05: add ecx, 0x54 */ {  u32 a = r_ecx; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c8c08: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c8c09: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x5c8c0eu); f_00686fa2();
    /* 005c8c0e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c8c11: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c8c14: mov byte ptr [edx + 0x14], 1 */ W8((u32)(r_edx+0x14u), 0x1u);
    /* 005c8c18: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c8c1b: mov byte ptr [eax + 0xe4], 0 */ W8((u32)(r_eax+0xe4u), 0x0u);
    /* 005c8c22: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c8c25: mov dword ptr [ecx + 0x10], 0x793618 */ W32((u32)(r_ecx+0x10u), 0x793618u);
    /* 005c8c2c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c8c2f: mov esp, ebp */ r_esp = r_ebp;
    /* 005c8c31: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c8c32: ret  */ FN_RET(0x005c8bb0); r_esp += 4; return;
}

void f_005c8c40(void) /* ??1CExpandoObject@@UAE@XZ_60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c8c40);
    /* 005c8c40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c8c41: mov ebp, esp */ r_ebp = r_esp;
    /* 005c8c43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c8c44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c8c47: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c8c4a: mov dword ptr [eax], 0x6d23ac */ W32((u32)(r_eax), 0x6d23acu);
    /* 005c8c50: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c8c53: call 0x5d0a00 */ r_esp -= 4; W32(r_esp, 0x5c8c58u); f_005d0a00();
    /* 005c8c58: mov esp, ebp */ r_esp = r_ebp;
    /* 005c8c5a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c8c5b: ret  */ FN_RET(0x005c8c40); r_esp += 4; return;
}

void f_005c9450(void) /* _WinMain@16_60_1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c9450);
L_005c9450:; BB(0x005c9450);
    /* 005c9450: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c9453: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c9456: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005c9459: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c945c: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005c945f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c9461: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005c9464: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c9467: jge 0x5c94ef */ if ((fS==fO)) goto L_005c94ef;
L_005c946d:; BB(0x005c946d);
    /* 005c946d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c9470: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005c9473: mov eax, dword ptr [edx + ecx*4] */ r_eax = R32((u32)(r_edx+r_ecx*4));
    /* 005c9476: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005c9479: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 005c9480: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c9487: jmp 0x5c9492 */ goto L_005c9492;
L_005c9489:; BB(0x005c9489);
    /* 005c9489: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c948c: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c948f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005c9492:; BB(0x005c9492);
    /* 005c9492: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c9495: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005c9498: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c949b: cmp ecx, dword ptr [eax] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c949d: jge 0x5c94b8 */ if ((fS==fO)) goto L_005c94b8;
L_005c949f:; BB(0x005c949f);
    /* 005c949f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c94a2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c94a5: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 005c94a8: cmp ecx, dword ptr [ebp - 0x18] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c94ab: jne 0x5c94b6 */ if (!fZ) goto L_005c94b6;
L_005c94ad:; BB(0x005c94ad);
    /* 005c94ad: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c94b0: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c94b3: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
L_005c94b6:; BB(0x005c94b6);
    /* 005c94b6: jmp 0x5c9489 */ goto L_005c9489;
L_005c94b8:; BB(0x005c94b8);
    /* 005c94b8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005c94bb: cmp eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c94be: jle 0x5c94ce */ if ((fZ||fS!=fO)) goto L_005c94ce;
L_005c94c0:; BB(0x005c94c0);
    /* 005c94c0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c94c3: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005c94c6: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c94c9: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005c94cc: jmp 0x5c94ea */ f_005c94ea(); return;
L_005c94ce:; BB(0x005c94ce);
    /* 005c94ce: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005c94d1: cmp eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c94d4: jne 0x5c94ea */ if (!fZ) goto L_005c94ea;
L_005c94d6:; BB(0x005c94d6);
    /* 005c94d6: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c94d9: cmp ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c94dc: jle 0x5c94ea */ if ((fZ||fS!=fO)) goto L_005c94ea;
L_005c94de:; BB(0x005c94de);
    /* 005c94de: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c94e1: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005c94e4: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c94e7: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_005c94ea:; BB(0x005c94ea);
    /* 005c94ea: jmp 0x5c9450 */ goto L_005c9450;
L_005c94ef:; BB(0x005c94ef);
    /* 005c94ef: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c94f6: jmp 0x5c9501 */ goto L_005c9501;
L_005c94f8:; BB(0x005c94f8);
    /* 005c94f8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c94fb: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c94fe: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005c9501:; BB(0x005c9501);
    /* 005c9501: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c9504: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005c9507: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c950a: cmp ecx, dword ptr [eax] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c950c: jge 0x5c952a */ if ((fS==fO)) goto L_005c952a;
L_005c950e:; BB(0x005c950e);
    /* 005c950e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c9511: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c9514: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 005c9517: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c9519: cmp ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c951c: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 005c951f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c9522: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005c9525: mov dword ptr [ecx + eax*4], edx */ W32((u32)(r_ecx+r_eax*4), r_edx);
    /* 005c9528: jmp 0x5c94f8 */ goto L_005c94f8;
L_005c952a:; BB(0x005c952a);
    /* 005c952a: cmp dword ptr [ebp + 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c952e: je 0x5c9538 */ if (fZ) goto L_005c9538;
L_005c9530:; BB(0x005c9530);
    /* 005c9530: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005c9533: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c9536: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
L_005c9538:; BB(0x005c9538);
    /* 005c9538: cmp dword ptr [ebp + 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c953c: je 0x5c9546 */ if (fZ) goto L_005c9546;
L_005c953e:; BB(0x005c953e);
    /* 005c953e: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 005c9541: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c9544: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
L_005c9546:; BB(0x005c9546);
    /* 005c9546: mov esp, ebp */ r_esp = r_ebp;
    /* 005c9548: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c9549: ret 0x10 */ FN_RET(0x005c9450); r_esp += 20; return;
}

void f_005c94ea(void) /* _WinMain@16_60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c94ea);
    /* 005c94ea: jmp 0x5c9450 */ f_005c9450(); return;
}

void f_005c9a20(void) /* ??_G_com_error@@UAEPAXI@Z_236 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c9a20);
    /* 005c9a20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c9a21: mov ebp, esp */ r_ebp = r_esp;
    /* 005c9a23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c9a24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c9a27: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c9a2a: call 0x5c8c40 */ r_esp -= 4; W32(r_esp, 0x5c9a2fu); f_005c8c40();
    /* 005c9a2f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c9a32: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005c9a35: je 0x5c9a43 */ if (fZ) goto L_005c9a43;
L_005c9a37:; BB(0x005c9a37);
    /* 005c9a37: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c9a3a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c9a3b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5c9a40u); f_00686cae();
    /* 005c9a40: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005c9a43:; BB(0x005c9a43);
    /* 005c9a43: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c9a46: mov esp, ebp */ r_esp = r_ebp;
    /* 005c9a48: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c9a49: ret 4 */ FN_RET(0x005c9a20); r_esp += 8; return;
}

void f_005caa80(void) /* ??1CExpandoObject@@UAE@XZ_61 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005caa80);
    /* 005caa80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005caa81: mov ebp, esp */ r_ebp = r_esp;
    /* 005caa83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005caa84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005caa87: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005caa8a: mov dword ptr [eax], 0x6d2444 */ W32((u32)(r_eax), 0x6d2444u);
    /* 005caa90: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005caa93: call 0x601ba0 */ r_esp -= 4; W32(r_esp, 0x5caa98u); f_00601ba0();
    /* 005caa98: mov esp, ebp */ r_esp = r_ebp;
    /* 005caa9a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005caa9b: ret  */ FN_RET(0x005caa80); r_esp += 4; return;
}

void f_005cb3a0(void) /* ??1CExpandoObject@@UAE@XZ_62 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cb3a0);
    /* 005cb3a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cb3a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005cb3a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cb3a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005cb3a7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cb3aa: mov dword ptr [eax], 0x6d2684 */ W32((u32)(r_eax), 0x6d2684u);
    /* 005cb3b0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cb3b3: call 0x601ba0 */ r_esp -= 4; W32(r_esp, 0x5cb3b8u); f_00601ba0();
    /* 005cb3b8: mov esp, ebp */ r_esp = r_ebp;
    /* 005cb3ba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cb3bb: ret  */ FN_RET(0x005cb3a0); r_esp += 4; return;
}

void f_005cb3f0(void) /* ??_G_com_error@@UAEPAXI@Z_237 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cb3f0);
    /* 005cb3f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cb3f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005cb3f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cb3f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005cb3f7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cb3fa: call 0x5c9af0 */ r_esp -= 4; W32(r_esp, 0x5cb3ffu); f_005c9af0();
    /* 005cb3ff: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005cb402: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005cb405: je 0x5cb413 */ if (fZ) goto L_005cb413;
L_005cb407:; BB(0x005cb407);
    /* 005cb407: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cb40a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cb40b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5cb410u); f_00686cae();
    /* 005cb410: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005cb413:; BB(0x005cb413);
    /* 005cb413: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cb416: mov esp, ebp */ r_esp = r_ebp;
    /* 005cb418: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cb419: ret 4 */ FN_RET(0x005cb3f0); r_esp += 8; return;
}

void f_005cb420(void) /* ??_G_com_error@@UAEPAXI@Z_238 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cb420);
    /* 005cb420: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cb421: mov ebp, esp */ r_ebp = r_esp;
    /* 005cb423: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cb424: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005cb427: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cb42a: call 0x5caa80 */ r_esp -= 4; W32(r_esp, 0x5cb42fu); f_005caa80();
    /* 005cb42f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005cb432: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005cb435: je 0x5cb443 */ if (fZ) goto L_005cb443;
L_005cb437:; BB(0x005cb437);
    /* 005cb437: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cb43a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cb43b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5cb440u); f_00686cae();
    /* 005cb440: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005cb443:; BB(0x005cb443);
    /* 005cb443: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cb446: mov esp, ebp */ r_esp = r_ebp;
    /* 005cb448: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cb449: ret 4 */ FN_RET(0x005cb420); r_esp += 8; return;
}

void f_005cb450(void) /* ??_G_com_error@@UAEPAXI@Z_239 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cb450);
    /* 005cb450: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cb451: mov ebp, esp */ r_ebp = r_esp;
    /* 005cb453: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cb454: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005cb457: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cb45a: call 0x5cb0b0 */ r_esp -= 4; W32(r_esp, 0x5cb45fu); f_005cb0b0();
    /* 005cb45f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005cb462: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005cb465: je 0x5cb473 */ if (fZ) goto L_005cb473;
L_005cb467:; BB(0x005cb467);
    /* 005cb467: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cb46a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cb46b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5cb470u); f_00686cae();
    /* 005cb470: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005cb473:; BB(0x005cb473);
    /* 005cb473: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cb476: mov esp, ebp */ r_esp = r_ebp;
    /* 005cb478: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cb479: ret 4 */ FN_RET(0x005cb450); r_esp += 8; return;
}

void f_005cb480(void) /* ??_G_com_error@@UAEPAXI@Z_240 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cb480);
    /* 005cb480: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cb481: mov ebp, esp */ r_ebp = r_esp;
    /* 005cb483: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cb484: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005cb487: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cb48a: call 0x5cb3a0 */ r_esp -= 4; W32(r_esp, 0x5cb48fu); f_005cb3a0();
    /* 005cb48f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005cb492: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005cb495: je 0x5cb4a3 */ if (fZ) goto L_005cb4a3;
L_005cb497:; BB(0x005cb497);
    /* 005cb497: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cb49a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cb49b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5cb4a0u); f_00686cae();
    /* 005cb4a0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005cb4a3:; BB(0x005cb4a3);
    /* 005cb4a3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cb4a6: mov esp, ebp */ r_esp = r_ebp;
    /* 005cb4a8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cb4a9: ret 4 */ FN_RET(0x005cb480); r_esp += 8; return;
}

void f_005cb590(void) /* ??1CExpandoObject@@UAE@XZ_63 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cb590);
    /* 005cb590: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cb591: mov ebp, esp */ r_ebp = r_esp;
    /* 005cb593: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cb594: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005cb597: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cb59a: mov dword ptr [eax], 0x6d277c */ W32((u32)(r_eax), 0x6d277cu);
    /* 005cb5a0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cb5a3: call 0x5f4ad0 */ r_esp -= 4; W32(r_esp, 0x5cb5a8u); f_005f4ad0();
    /* 005cb5a8: mov esp, ebp */ r_esp = r_ebp;
    /* 005cb5aa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cb5ab: ret  */ FN_RET(0x005cb590); r_esp += 4; return;
}

void f_005cc2c0(void) /* ?SetExclusiveRowMode@CPane@@UAEXH@Z */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cc2c0);
    /* 005cc2c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cc2c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005cc2c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cc2c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005cc2c7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cc2ca: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005cc2cd: mov dword ptr [eax + 0x178], ecx */ W32((u32)(r_eax+0x178u), r_ecx);
    /* 005cc2d3: mov esp, ebp */ r_esp = r_ebp;
    /* 005cc2d5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cc2d6: ret 4 */ FN_RET(0x005cc2c0); r_esp += 8; return;
}

void f_005cc2e0(void) /* ?GetExclusiveRowMode@CPane@@UBEHXZ */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cc2e0);
    /* 005cc2e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cc2e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005cc2e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cc2e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005cc2e7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cc2ea: mov eax, dword ptr [eax + 0x178] */ r_eax = R32((u32)(r_eax+0x178u));
    /* 005cc2f0: mov esp, ebp */ r_esp = r_ebp;
    /* 005cc2f2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cc2f3: ret  */ FN_RET(0x005cc2e0); r_esp += 4; return;
}

void f_005cc3c0(void) /* ??1CAtlWinModule@ATL@@QAE@XZ_3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cc3c0);
    /* 005cc3c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cc3c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005cc3c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cc3c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005cc3c7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cc3ca: call 0x5eb570 */ r_esp -= 4; W32(r_esp, 0x5cc3cfu); f_005eb570();
    /* 005cc3cf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cc3d2: call 0x5cc4e0 */ r_esp -= 4; W32(r_esp, 0x5cc3d7u); f_005cc4e0();
    /* 005cc3d7: mov esp, ebp */ r_esp = r_ebp;
    /* 005cc3d9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cc3da: ret  */ FN_RET(0x005cc3c0); r_esp += 4; return;
}

void f_005cd6e0(void) /* ??1CExpandoObject@@UAE@XZ_64 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cd6e0);
    /* 005cd6e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cd6e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005cd6e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cd6e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005cd6e7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cd6ea: mov dword ptr [eax], 0x6d2a3c */ W32((u32)(r_eax), 0x6d2a3cu);
    /* 005cd6f0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cd6f3: call 0x5f5fa0 */ r_esp -= 4; W32(r_esp, 0x5cd6f8u); f_005f5fa0();
    /* 005cd6f8: mov esp, ebp */ r_esp = r_ebp;
    /* 005cd6fa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cd6fb: ret  */ FN_RET(0x005cd6e0); r_esp += 4; return;
}

void f_005cd800(void) /* ?accHitTest@CFormView@@UAEJJJPAUtagVARIANT@@@Z_1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cd800);
    /* 005cd800: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cd801: mov ebp, esp */ r_ebp = r_esp;
    /* 005cd803: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cd804: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005cd807: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005cd80a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cd80b: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005cd80e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cd80f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005cd812: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cd813: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cd816: call 0x5cd7c0 */ r_esp -= 4; W32(r_esp, 0x5cd81bu); f_005cd7c0();
    /* 005cd81b: mov esp, ebp */ r_esp = r_ebp;
    /* 005cd81d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cd81e: ret 0xc */ FN_RET(0x005cd800); r_esp += 16; return;
}

void f_005cd9d0(void) /* ??_G_com_error@@UAEPAXI@Z_241 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cd9d0);
    /* 005cd9d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cd9d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005cd9d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cd9d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005cd9d7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cd9da: call 0x5cb590 */ r_esp -= 4; W32(r_esp, 0x5cd9dfu); f_005cb590();
    /* 005cd9df: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005cd9e2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005cd9e5: je 0x5cd9f3 */ if (fZ) goto L_005cd9f3;
L_005cd9e7:; BB(0x005cd9e7);
    /* 005cd9e7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cd9ea: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cd9eb: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5cd9f0u); f_00686cae();
    /* 005cd9f0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005cd9f3:; BB(0x005cd9f3);
    /* 005cd9f3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cd9f6: mov esp, ebp */ r_esp = r_ebp;
    /* 005cd9f8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cd9f9: ret 4 */ FN_RET(0x005cd9d0); r_esp += 8; return;
}

void f_005cda70(void) /* ??_G_com_error@@UAEPAXI@Z_242 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cda70);
    /* 005cda70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cda71: mov ebp, esp */ r_ebp = r_esp;
    /* 005cda73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cda74: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005cda77: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cda7a: call 0x5cc230 */ r_esp -= 4; W32(r_esp, 0x5cda7fu); f_005cc230();
    /* 005cda7f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005cda82: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005cda85: je 0x5cda93 */ if (fZ) goto L_005cda93;
L_005cda87:; BB(0x005cda87);
    /* 005cda87: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cda8a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cda8b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5cda90u); f_00686cae();
    /* 005cda90: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005cda93:; BB(0x005cda93);
    /* 005cda93: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cda96: mov esp, ebp */ r_esp = r_ebp;
    /* 005cda98: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cda99: ret 4 */ FN_RET(0x005cda70); r_esp += 8; return;
}

void f_005cdaa0(void) /* ??_G_com_error@@UAEPAXI@Z_243 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cdaa0);
    /* 005cdaa0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cdaa1: mov ebp, esp */ r_ebp = r_esp;
    /* 005cdaa3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cdaa4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005cdaa7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cdaaa: call 0x5cd390 */ r_esp -= 4; W32(r_esp, 0x5cdaafu); f_005cd390();
    /* 005cdaaf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005cdab2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005cdab5: je 0x5cdac3 */ if (fZ) goto L_005cdac3;
L_005cdab7:; BB(0x005cdab7);
    /* 005cdab7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cdaba: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cdabb: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5cdac0u); f_00686cae();
    /* 005cdac0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005cdac3:; BB(0x005cdac3);
    /* 005cdac3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cdac6: mov esp, ebp */ r_esp = r_ebp;
    /* 005cdac8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cdac9: ret 4 */ FN_RET(0x005cdaa0); r_esp += 8; return;
}

void f_005cdb00(void) /* ??1CExpandoObject@@UAE@XZ_65 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cdb00);
    /* 005cdb00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cdb01: mov ebp, esp */ r_ebp = r_esp;
    /* 005cdb03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cdb04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005cdb07: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cdb0a: mov dword ptr [eax], 0x6d2b04 */ W32((u32)(r_eax), 0x6d2b04u);
    /* 005cdb10: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cdb13: call 0x5f7260 */ r_esp -= 4; W32(r_esp, 0x5cdb18u); f_005f7260();
    /* 005cdb18: mov esp, ebp */ r_esp = r_ebp;
    /* 005cdb1a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cdb1b: ret  */ FN_RET(0x005cdb00); r_esp += 4; return;
}

void f_005cdc00(void) /* ??1CExpandoObject@@UAE@XZ_66 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cdc00);
    /* 005cdc00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cdc01: mov ebp, esp */ r_ebp = r_esp;
    /* 005cdc03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cdc04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005cdc07: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cdc0a: mov dword ptr [eax], 0x6d2b5c */ W32((u32)(r_eax), 0x6d2b5cu);
    /* 005cdc10: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cdc13: call 0x5f7260 */ r_esp -= 4; W32(r_esp, 0x5cdc18u); f_005f7260();
    /* 005cdc18: mov esp, ebp */ r_esp = r_ebp;
    /* 005cdc1a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cdc1b: ret  */ FN_RET(0x005cdc00); r_esp += 4; return;
}

void f_005cde00(void) /* ??1CExpandoObject@@UAE@XZ_67 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cde00);
    /* 005cde00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cde01: mov ebp, esp */ r_ebp = r_esp;
    /* 005cde03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cde04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005cde07: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cde0a: mov dword ptr [eax], 0x6d2bbc */ W32((u32)(r_eax), 0x6d2bbcu);
    /* 005cde10: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cde13: call 0x5f7260 */ r_esp -= 4; W32(r_esp, 0x5cde18u); f_005f7260();
    /* 005cde18: mov esp, ebp */ r_esp = r_ebp;
    /* 005cde1a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cde1b: ret  */ FN_RET(0x005cde00); r_esp += 4; return;
}

void f_005ce2c0(void) /* ??1CExpandoObject@@UAE@XZ_68 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ce2c0);
    /* 005ce2c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ce2c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005ce2c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ce2c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ce2c7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ce2ca: mov dword ptr [eax], 0x6d2ca4 */ W32((u32)(r_eax), 0x6d2ca4u);
    /* 005ce2d0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ce2d3: call 0x5f7260 */ r_esp -= 4; W32(r_esp, 0x5ce2d8u); f_005f7260();
    /* 005ce2d8: mov esp, ebp */ r_esp = r_ebp;
    /* 005ce2da: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ce2db: ret  */ FN_RET(0x005ce2c0); r_esp += 4; return;
}

void f_005ce6d0(void) /* ??1CExpandoObject@@UAE@XZ_69 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ce6d0);
    /* 005ce6d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ce6d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005ce6d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ce6d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ce6d7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ce6da: mov dword ptr [eax], 0x6d2d64 */ W32((u32)(r_eax), 0x6d2d64u);
    /* 005ce6e0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ce6e3: call 0x5f7260 */ r_esp -= 4; W32(r_esp, 0x5ce6e8u); f_005f7260();
    /* 005ce6e8: mov esp, ebp */ r_esp = r_ebp;
    /* 005ce6ea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ce6eb: ret  */ FN_RET(0x005ce6d0); r_esp += 4; return;
}

void f_005cebd0(void) /* ??1CExpandoObject@@UAE@XZ_70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cebd0);
    /* 005cebd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cebd1: mov ebp, esp */ r_ebp = r_esp;
    /* 005cebd3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cebd4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005cebd7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cebda: mov dword ptr [eax], 0x6d2e6c */ W32((u32)(r_eax), 0x6d2e6cu);
    /* 005cebe0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cebe3: call 0x5f7260 */ r_esp -= 4; W32(r_esp, 0x5cebe8u); f_005f7260();
    /* 005cebe8: mov esp, ebp */ r_esp = r_ebp;
    /* 005cebea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cebeb: ret  */ FN_RET(0x005cebd0); r_esp += 4; return;
}

void f_005ced40(void) /* ??1CExpandoObject@@UAE@XZ_71 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ced40);
    /* 005ced40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ced41: mov ebp, esp */ r_ebp = r_esp;
    /* 005ced43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ced44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ced47: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ced4a: mov dword ptr [eax], 0x6d2eb4 */ W32((u32)(r_eax), 0x6d2eb4u);
    /* 005ced50: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ced53: call 0x5f7260 */ r_esp -= 4; W32(r_esp, 0x5ced58u); f_005f7260();
    /* 005ced58: mov esp, ebp */ r_esp = r_ebp;
    /* 005ced5a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ced5b: ret  */ FN_RET(0x005ced40); r_esp += 4; return;
}

void f_005cf040(void) /* ??1CExpandoObject@@UAE@XZ_72 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cf040);
    /* 005cf040: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cf041: mov ebp, esp */ r_ebp = r_esp;
    /* 005cf043: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cf044: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005cf047: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cf04a: mov dword ptr [eax], 0x6d2f14 */ W32((u32)(r_eax), 0x6d2f14u);
    /* 005cf050: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cf053: call 0x5f7260 */ r_esp -= 4; W32(r_esp, 0x5cf058u); f_005f7260();
    /* 005cf058: mov esp, ebp */ r_esp = r_ebp;
    /* 005cf05a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cf05b: ret  */ FN_RET(0x005cf040); r_esp += 4; return;
}

void f_005cf4e0(void) /* ??1CExpandoObject@@UAE@XZ_73 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cf4e0);
    /* 005cf4e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cf4e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005cf4e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cf4e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005cf4e7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cf4ea: mov dword ptr [eax], 0x6d2f64 */ W32((u32)(r_eax), 0x6d2f64u);
    /* 005cf4f0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cf4f3: call 0x5f7260 */ r_esp -= 4; W32(r_esp, 0x5cf4f8u); f_005f7260();
    /* 005cf4f8: mov esp, ebp */ r_esp = r_ebp;
    /* 005cf4fa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cf4fb: ret  */ FN_RET(0x005cf4e0); r_esp += 4; return;
}

void f_005cfb60(void) /* ??1CExpandoObject@@UAE@XZ_74 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cfb60);
    /* 005cfb60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cfb61: mov ebp, esp */ r_ebp = r_esp;
    /* 005cfb63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cfb64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005cfb67: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cfb6a: mov dword ptr [eax], 0x6d3224 */ W32((u32)(r_eax), 0x6d3224u);
    /* 005cfb70: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cfb73: call 0x5f7260 */ r_esp -= 4; W32(r_esp, 0x5cfb78u); f_005f7260();
    /* 005cfb78: mov esp, ebp */ r_esp = r_ebp;
    /* 005cfb7a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cfb7b: ret  */ FN_RET(0x005cfb60); r_esp += 4; return;
}

void f_005cff00(void) /* ??1CExpandoObject@@UAE@XZ_75 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cff00);
    /* 005cff00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cff01: mov ebp, esp */ r_ebp = r_esp;
    /* 005cff03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cff04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005cff07: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cff0a: mov dword ptr [eax], 0x6d3364 */ W32((u32)(r_eax), 0x6d3364u);
    /* 005cff10: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cff13: call 0x5f7260 */ r_esp -= 4; W32(r_esp, 0x5cff18u); f_005f7260();
    /* 005cff18: mov esp, ebp */ r_esp = r_ebp;
    /* 005cff1a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cff1b: ret  */ FN_RET(0x005cff00); r_esp += 4; return;
}

void f_005d0580(void) /* ??1CExpandoObject@@UAE@XZ_76 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d0580);
    /* 005d0580: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d0581: mov ebp, esp */ r_ebp = r_esp;
    /* 005d0583: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d0584: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d0587: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d058a: mov dword ptr [eax], 0x6d33ec */ W32((u32)(r_eax), 0x6d33ecu);
    /* 005d0590: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0593: call 0x5f7260 */ r_esp -= 4; W32(r_esp, 0x5d0598u); f_005f7260();
    /* 005d0598: mov esp, ebp */ r_esp = r_ebp;
    /* 005d059a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d059b: ret  */ FN_RET(0x005d0580); r_esp += 4; return;
}

void f_005d0740(void) /* ??_G_com_error@@UAEPAXI@Z_244 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d0740);
    /* 005d0740: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d0741: mov ebp, esp */ r_ebp = r_esp;
    /* 005d0743: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d0744: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d0747: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d074a: call 0x5cdb00 */ r_esp -= 4; W32(r_esp, 0x5d074fu); f_005cdb00();
    /* 005d074f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d0752: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005d0755: je 0x5d0763 */ if (fZ) goto L_005d0763;
L_005d0757:; BB(0x005d0757);
    /* 005d0757: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d075a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d075b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5d0760u); f_00686cae();
    /* 005d0760: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005d0763:; BB(0x005d0763);
    /* 005d0763: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0766: mov esp, ebp */ r_esp = r_ebp;
    /* 005d0768: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d0769: ret 4 */ FN_RET(0x005d0740); r_esp += 8; return;
}

void f_005d0770(void) /* ??_G_com_error@@UAEPAXI@Z_245 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d0770);
    /* 005d0770: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d0771: mov ebp, esp */ r_ebp = r_esp;
    /* 005d0773: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d0774: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d0777: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d077a: call 0x5cdc00 */ r_esp -= 4; W32(r_esp, 0x5d077fu); f_005cdc00();
    /* 005d077f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d0782: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005d0785: je 0x5d0793 */ if (fZ) goto L_005d0793;
L_005d0787:; BB(0x005d0787);
    /* 005d0787: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d078a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d078b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5d0790u); f_00686cae();
    /* 005d0790: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005d0793:; BB(0x005d0793);
    /* 005d0793: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0796: mov esp, ebp */ r_esp = r_ebp;
    /* 005d0798: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d0799: ret 4 */ FN_RET(0x005d0770); r_esp += 8; return;
}

void f_005d07a0(void) /* ??_G_com_error@@UAEPAXI@Z_246 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d07a0);
    /* 005d07a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d07a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005d07a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d07a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d07a7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d07aa: call 0x5cde00 */ r_esp -= 4; W32(r_esp, 0x5d07afu); f_005cde00();
    /* 005d07af: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d07b2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005d07b5: je 0x5d07c3 */ if (fZ) goto L_005d07c3;
L_005d07b7:; BB(0x005d07b7);
    /* 005d07b7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d07ba: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d07bb: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5d07c0u); f_00686cae();
    /* 005d07c0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005d07c3:; BB(0x005d07c3);
    /* 005d07c3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d07c6: mov esp, ebp */ r_esp = r_ebp;
    /* 005d07c8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d07c9: ret 4 */ FN_RET(0x005d07a0); r_esp += 8; return;
}

void f_005d07d0(void) /* ??_G_com_error@@UAEPAXI@Z_247 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d07d0);
    /* 005d07d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d07d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005d07d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d07d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d07d7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d07da: call 0x5ce2c0 */ r_esp -= 4; W32(r_esp, 0x5d07dfu); f_005ce2c0();
    /* 005d07df: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d07e2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005d07e5: je 0x5d07f3 */ if (fZ) goto L_005d07f3;
L_005d07e7:; BB(0x005d07e7);
    /* 005d07e7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d07ea: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d07eb: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5d07f0u); f_00686cae();
    /* 005d07f0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005d07f3:; BB(0x005d07f3);
    /* 005d07f3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d07f6: mov esp, ebp */ r_esp = r_ebp;
    /* 005d07f8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d07f9: ret 4 */ FN_RET(0x005d07d0); r_esp += 8; return;
}

void f_005d0800(void) /* ??_G_com_error@@UAEPAXI@Z_248 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d0800);
    /* 005d0800: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d0801: mov ebp, esp */ r_ebp = r_esp;
    /* 005d0803: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d0804: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d0807: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d080a: call 0x5ce6d0 */ r_esp -= 4; W32(r_esp, 0x5d080fu); f_005ce6d0();
    /* 005d080f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d0812: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005d0815: je 0x5d0823 */ if (fZ) goto L_005d0823;
L_005d0817:; BB(0x005d0817);
    /* 005d0817: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d081a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d081b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5d0820u); f_00686cae();
    /* 005d0820: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005d0823:; BB(0x005d0823);
    /* 005d0823: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0826: mov esp, ebp */ r_esp = r_ebp;
    /* 005d0828: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d0829: ret 4 */ FN_RET(0x005d0800); r_esp += 8; return;
}

void f_005d0830(void) /* ??_G_com_error@@UAEPAXI@Z_249 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d0830);
    /* 005d0830: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d0831: mov ebp, esp */ r_ebp = r_esp;
    /* 005d0833: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d0834: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d0837: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d083a: call 0x5cebd0 */ r_esp -= 4; W32(r_esp, 0x5d083fu); f_005cebd0();
    /* 005d083f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d0842: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005d0845: je 0x5d0853 */ if (fZ) goto L_005d0853;
L_005d0847:; BB(0x005d0847);
    /* 005d0847: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d084a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d084b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5d0850u); f_00686cae();
    /* 005d0850: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005d0853:; BB(0x005d0853);
    /* 005d0853: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0856: mov esp, ebp */ r_esp = r_ebp;
    /* 005d0858: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d0859: ret 4 */ FN_RET(0x005d0830); r_esp += 8; return;
}

void f_005d0860(void) /* ??_G_com_error@@UAEPAXI@Z_250 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d0860);
    /* 005d0860: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d0861: mov ebp, esp */ r_ebp = r_esp;
    /* 005d0863: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d0864: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d0867: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d086a: call 0x5ced40 */ r_esp -= 4; W32(r_esp, 0x5d086fu); f_005ced40();
    /* 005d086f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d0872: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005d0875: je 0x5d0883 */ if (fZ) goto L_005d0883;
L_005d0877:; BB(0x005d0877);
    /* 005d0877: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d087a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d087b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5d0880u); f_00686cae();
    /* 005d0880: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005d0883:; BB(0x005d0883);
    /* 005d0883: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0886: mov esp, ebp */ r_esp = r_ebp;
    /* 005d0888: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d0889: ret 4 */ FN_RET(0x005d0860); r_esp += 8; return;
}

void f_005d0890(void) /* ??_G_com_error@@UAEPAXI@Z_251 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d0890);
    /* 005d0890: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d0891: mov ebp, esp */ r_ebp = r_esp;
    /* 005d0893: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d0894: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d0897: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d089a: call 0x5cf040 */ r_esp -= 4; W32(r_esp, 0x5d089fu); f_005cf040();
    /* 005d089f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d08a2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005d08a5: je 0x5d08b3 */ if (fZ) goto L_005d08b3;
L_005d08a7:; BB(0x005d08a7);
    /* 005d08a7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d08aa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d08ab: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5d08b0u); f_00686cae();
    /* 005d08b0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005d08b3:; BB(0x005d08b3);
    /* 005d08b3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d08b6: mov esp, ebp */ r_esp = r_ebp;
    /* 005d08b8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d08b9: ret 4 */ FN_RET(0x005d0890); r_esp += 8; return;
}

void f_005d08c0(void) /* ??_G_com_error@@UAEPAXI@Z_252 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d08c0);
    /* 005d08c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d08c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005d08c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d08c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d08c7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d08ca: call 0x5cf4e0 */ r_esp -= 4; W32(r_esp, 0x5d08cfu); f_005cf4e0();
    /* 005d08cf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d08d2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005d08d5: je 0x5d08e3 */ if (fZ) goto L_005d08e3;
L_005d08d7:; BB(0x005d08d7);
    /* 005d08d7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d08da: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d08db: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5d08e0u); f_00686cae();
    /* 005d08e0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005d08e3:; BB(0x005d08e3);
    /* 005d08e3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d08e6: mov esp, ebp */ r_esp = r_ebp;
    /* 005d08e8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d08e9: ret 4 */ FN_RET(0x005d08c0); r_esp += 8; return;
}

void f_005d08f0(void) /* ??_G_com_error@@UAEPAXI@Z_253 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d08f0);
    /* 005d08f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d08f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005d08f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d08f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d08f7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d08fa: call 0x5cfb60 */ r_esp -= 4; W32(r_esp, 0x5d08ffu); f_005cfb60();
    /* 005d08ff: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d0902: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005d0905: je 0x5d0913 */ if (fZ) goto L_005d0913;
L_005d0907:; BB(0x005d0907);
    /* 005d0907: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d090a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d090b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5d0910u); f_00686cae();
    /* 005d0910: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005d0913:; BB(0x005d0913);
    /* 005d0913: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0916: mov esp, ebp */ r_esp = r_ebp;
    /* 005d0918: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d0919: ret 4 */ FN_RET(0x005d08f0); r_esp += 8; return;
}

void f_005d0920(void) /* ??_G_com_error@@UAEPAXI@Z_254 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d0920);
    /* 005d0920: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d0921: mov ebp, esp */ r_ebp = r_esp;
    /* 005d0923: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d0924: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d0927: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d092a: call 0x5cff00 */ r_esp -= 4; W32(r_esp, 0x5d092fu); f_005cff00();
    /* 005d092f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d0932: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005d0935: je 0x5d0943 */ if (fZ) goto L_005d0943;
L_005d0937:; BB(0x005d0937);
    /* 005d0937: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d093a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d093b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5d0940u); f_00686cae();
    /* 005d0940: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005d0943:; BB(0x005d0943);
    /* 005d0943: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0946: mov esp, ebp */ r_esp = r_ebp;
    /* 005d0948: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d0949: ret 4 */ FN_RET(0x005d0920); r_esp += 8; return;
}

void f_005d0950(void) /* ??_G_com_error@@UAEPAXI@Z_255 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d0950);
    /* 005d0950: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d0951: mov ebp, esp */ r_ebp = r_esp;
    /* 005d0953: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d0954: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d0957: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d095a: call 0x5d0580 */ r_esp -= 4; W32(r_esp, 0x5d095fu); f_005d0580();
    /* 005d095f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d0962: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005d0965: je 0x5d0973 */ if (fZ) goto L_005d0973;
L_005d0967:; BB(0x005d0967);
    /* 005d0967: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d096a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d096b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5d0970u); f_00686cae();
    /* 005d0970: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005d0973:; BB(0x005d0973);
    /* 005d0973: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0976: mov esp, ebp */ r_esp = r_ebp;
    /* 005d0978: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d0979: ret 4 */ FN_RET(0x005d0950); r_esp += 8; return;
}

void f_005d0a00(void) /* ??1CExpandoObject@@UAE@XZ_77 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d0a00);
    /* 005d0a00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d0a01: mov ebp, esp */ r_ebp = r_esp;
    /* 005d0a03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d0a04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d0a07: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0a0a: mov dword ptr [eax], 0x6d347c */ W32((u32)(r_eax), 0x6d347cu);
    /* 005d0a10: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0a13: call 0x5e9e40 */ r_esp -= 4; W32(r_esp, 0x5d0a18u); f_005e9e40();
    /* 005d0a18: mov esp, ebp */ r_esp = r_ebp;
    /* 005d0a1a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d0a1b: ret  */ FN_RET(0x005d0a00); r_esp += 4; return;
}

void f_005d0a80(void) /* ?SetPaneDivider@CPaneContainer@@QAEXPAVCPaneDivider@@@Z */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d0a80);
    /* 005d0a80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d0a81: mov ebp, esp */ r_ebp = r_esp;
    /* 005d0a83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d0a84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d0a87: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0a8a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d0a8d: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 005d0a90: mov esp, ebp */ r_esp = r_ebp;
    /* 005d0a92: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d0a93: ret 4 */ FN_RET(0x005d0a80); r_esp += 8; return;
}

void f_005d1500(void) /* ??_G_com_error@@UAEPAXI@Z_256 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d1500);
    /* 005d1500: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d1501: mov ebp, esp */ r_ebp = r_esp;
    /* 005d1503: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d1504: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d1507: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d150a: call 0x5d0a00 */ r_esp -= 4; W32(r_esp, 0x5d150fu); f_005d0a00();
    /* 005d150f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d1512: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005d1515: je 0x5d1523 */ if (fZ) goto L_005d1523;
L_005d1517:; BB(0x005d1517);
    /* 005d1517: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d151a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d151b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5d1520u); f_00686cae();
    /* 005d1520: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005d1523:; BB(0x005d1523);
    /* 005d1523: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d1526: mov esp, ebp */ r_esp = r_ebp;
    /* 005d1528: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d1529: ret 4 */ FN_RET(0x005d1500); r_esp += 8; return;
}

void f_005d1530(void) /* ??0?$overwrite_buffer@W4agent_status@Concurrency@@@Concurrency@@QAE@XZ */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d1530);
    /* 005d1530: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d1531: mov ebp, esp */ r_ebp = r_esp;
    /* 005d1533: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d1535: push 0x6a8de8 */ { u32 v = 0x6a8de8u; r_esp -= 4; W32(r_esp, v); }
    /* 005d153a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005d1540: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d1541: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d1542: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005d1547: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d1549: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d154a: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005d154d: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005d1553: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005d1556: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d1559: call 0x5d7b60 */ r_esp -= 4; W32(r_esp, 0x5d155eu); f_005d7b60();
    /* 005d155e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d1565: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d1568: mov dword ptr [eax], 0x6d34e4 */ W32((u32)(r_eax), 0x6d34e4u);
    /* 005d156e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d1571: mov dword ptr [ecx + 0x88], 0 */ W32((u32)(r_ecx+0x88u), 0x0u);
    /* 005d157b: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d157e: mov dword ptr [edx + 0x80], 0xffffffff */ W32((u32)(r_edx+0x80u), 0xffffffffu);
    /* 005d1588: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d158b: mov dword ptr [eax + 0x84], 0 */ W32((u32)(r_eax+0x84u), 0x0u);
    /* 005d1595: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d1598: mov dword ptr [ecx + 0x8c], 0 */ W32((u32)(r_ecx+0x8cu), 0x0u);
    /* 005d15a2: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 005d15a4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d15a7: call 0x5d16b0 */ r_esp -= 4; W32(r_esp, 0x5d15acu); f_005d16b0();
    /* 005d15ac: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d15ae: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005d15b4: call 0x5f38b0 */ r_esp -= 4; W32(r_esp, 0x5d15b9u); f_005f38b0();
    /* 005d15b9: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d15bc: mov dword ptr [0x7947dc], edx */ W32((u32)(0x7947dcu), r_edx);
    /* 005d15c2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005d15c9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d15cc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d15cf: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005d15d6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d15d7: mov esp, ebp */ r_esp = r_ebp;
    /* 005d15d9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d15da: ret  */ FN_RET(0x005d1530); r_esp += 4; return;
}

void f_005d4bb0(void) /* ??1CExpandoObject@@UAE@XZ_78 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d4bb0);
    /* 005d4bb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d4bb1: mov ebp, esp */ r_ebp = r_esp;
    /* 005d4bb3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d4bb4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d4bb7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4bba: mov dword ptr [eax], 0x6d3cc8 */ W32((u32)(r_eax), 0x6d3cc8u);
    /* 005d4bc0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4bc3: call 0x600f70 */ r_esp -= 4; W32(r_esp, 0x5d4bc8u); f_00600f70();
    /* 005d4bc8: mov esp, ebp */ r_esp = r_ebp;
    /* 005d4bca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d4bcb: ret  */ FN_RET(0x005d4bb0); r_esp += 4; return;
}

void f_005d4c60(void) /* ??_G_com_error@@UAEPAXI@Z_257 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d4c60);
    /* 005d4c60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d4c61: mov ebp, esp */ r_ebp = r_esp;
    /* 005d4c63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d4c64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d4c67: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4c6a: call 0x5d15e0 */ r_esp -= 4; W32(r_esp, 0x5d4c6fu); f_005d15e0();
    /* 005d4c6f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d4c72: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005d4c75: je 0x5d4c83 */ if (fZ) goto L_005d4c83;
L_005d4c77:; BB(0x005d4c77);
    /* 005d4c77: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4c7a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d4c7b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5d4c80u); f_00686cae();
    /* 005d4c80: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005d4c83:; BB(0x005d4c83);
    /* 005d4c83: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4c86: mov esp, ebp */ r_esp = r_ebp;
    /* 005d4c88: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d4c89: ret 4 */ FN_RET(0x005d4c60); r_esp += 8; return;
}

void f_005d4c90(void) /* ??_G_com_error@@UAEPAXI@Z_258 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d4c90);
    /* 005d4c90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d4c91: mov ebp, esp */ r_ebp = r_esp;
    /* 005d4c93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d4c94: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d4c97: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4c9a: call 0x5d4a90 */ r_esp -= 4; W32(r_esp, 0x5d4c9fu); f_005d4a90();
    /* 005d4c9f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d4ca2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005d4ca5: je 0x5d4cb3 */ if (fZ) goto L_005d4cb3;
L_005d4ca7:; BB(0x005d4ca7);
    /* 005d4ca7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4caa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d4cab: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5d4cb0u); f_00686cae();
    /* 005d4cb0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005d4cb3:; BB(0x005d4cb3);
    /* 005d4cb3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4cb6: mov esp, ebp */ r_esp = r_ebp;
    /* 005d4cb8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d4cb9: ret 4 */ FN_RET(0x005d4c90); r_esp += 8; return;
}

void f_005d4cc0(void) /* ??_G_com_error@@UAEPAXI@Z_259 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d4cc0);
    /* 005d4cc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d4cc1: mov ebp, esp */ r_ebp = r_esp;
    /* 005d4cc3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d4cc4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d4cc7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4cca: call 0x5d4bb0 */ r_esp -= 4; W32(r_esp, 0x5d4ccfu); f_005d4bb0();
    /* 005d4ccf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d4cd2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005d4cd5: je 0x5d4ce3 */ if (fZ) goto L_005d4ce3;
L_005d4cd7:; BB(0x005d4cd7);
    /* 005d4cd7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4cda: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d4cdb: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5d4ce0u); f_00686cae();
    /* 005d4ce0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005d4ce3:; BB(0x005d4ce3);
    /* 005d4ce3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4ce6: mov esp, ebp */ r_esp = r_ebp;
    /* 005d4ce8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d4ce9: ret 4 */ FN_RET(0x005d4cc0); r_esp += 8; return;
}

void f_005d7530(void) /* unknown_libname_832 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d7530);
    /* 005d7530: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d7531: mov ebp, esp */ r_ebp = r_esp;
    /* 005d7533: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7534: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d7537: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005d7539: mov esp, ebp */ r_esp = r_ebp;
    /* 005d753b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d753c: ret  */ FN_RET(0x005d7530); r_esp += 4; return;
}

void f_005d7b00(void) /* ??_G_com_error@@UAEPAXI@Z_260 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d7b00);
    /* 005d7b00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d7b01: mov ebp, esp */ r_ebp = r_esp;
    /* 005d7b03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7b04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d7b07: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7b0a: call 0x5d4f50 */ r_esp -= 4; W32(r_esp, 0x5d7b0fu); f_005d4f50();
    /* 005d7b0f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d7b12: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005d7b15: je 0x5d7b23 */ if (fZ) goto L_005d7b23;
L_005d7b17:; BB(0x005d7b17);
    /* 005d7b17: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7b1a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7b1b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5d7b20u); f_00686cae();
    /* 005d7b20: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005d7b23:; BB(0x005d7b23);
    /* 005d7b23: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7b26: mov esp, ebp */ r_esp = r_ebp;
    /* 005d7b28: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d7b29: ret 4 */ FN_RET(0x005d7b00); r_esp += 8; return;
}

void f_005d7b30(void) /* ??_G_com_error@@UAEPAXI@Z_261 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d7b30);
    /* 005d7b30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d7b31: mov ebp, esp */ r_ebp = r_esp;
    /* 005d7b33: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7b34: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d7b37: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7b3a: call 0x5d75c0 */ r_esp -= 4; W32(r_esp, 0x5d7b3fu); f_005d75c0();
    /* 005d7b3f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d7b42: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005d7b45: je 0x5d7b53 */ if (fZ) goto L_005d7b53;
L_005d7b47:; BB(0x005d7b47);
    /* 005d7b47: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7b4a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7b4b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5d7b50u); f_00686cae();
    /* 005d7b50: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005d7b53:; BB(0x005d7b53);
    /* 005d7b53: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7b56: mov esp, ebp */ r_esp = r_ebp;
    /* 005d7b58: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d7b59: ret 4 */ FN_RET(0x005d7b30); r_esp += 8; return;
}

void f_005d9560(void) /* unknown_libname_591 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d9560);
    /* 005d9560: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d9561: mov ebp, esp */ r_ebp = r_esp;
    /* 005d9563: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9564: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d9567: mov eax, 4 */ r_eax = 0x4u;
    /* 005d956c: mov esp, ebp */ r_esp = r_ebp;
    /* 005d956e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d956f: ret  */ FN_RET(0x005d9560); r_esp += 4; return;
}

void f_005da052(void) /* _WinMain@16_61_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005da052);
L_005da052:; BB(0x005da052);
    /* 005da052: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005da055: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005da058: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005da05b: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005da061: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005da063: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005da069: mov eax, dword ptr [edx + 0x168] */ r_eax = R32((u32)(r_edx+0x168u));
    /* 005da06f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5da071u); call_ind(t); }
    /* 005da071: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005da074: jge 0x5da10e */ if ((fS==fO)) goto L_005da10e;
L_005da07a:; BB(0x005da07a);
    /* 005da07a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005da07d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005da07e: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 005da084: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005da086: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005da08c: mov edx, dword ptr [eax + 0x164] */ r_edx = R32((u32)(r_eax+0x164u));
    /* 005da092: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5da094u); call_ind(t); }
    /* 005da094: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005da095: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005da09b: call 0x6367d0 */ r_esp -= 4; W32(r_esp, 0x5da0a0u); f_006367d0();
    /* 005da0a0: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005da0a3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da0a5: je 0x5da0d9 */ if (fZ) goto L_005da0d9;
L_005da0a7:; BB(0x005da0a7);
    /* 005da0a7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005da0aa: add ecx, 0x186f9 */ {  u32 a = r_ecx; u32 b = 0x186f9u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005da0b0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005da0b1: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005da0b4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005da0b5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005da0b8: call 0x5f2300 */ r_esp -= 4; W32(r_esp, 0x5da0bdu); f_005f2300();
    /* 005da0bd: mov ecx, eax */ r_ecx = r_eax;
    /* 005da0bf: call 0x5ff060 */ r_esp -= 4; W32(r_esp, 0x5da0c4u); f_005ff060();
    /* 005da0c4: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005da0c7: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005da0ca: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005da0cc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005da0cf: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 005da0d5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5da0d7u); call_ind(t); }
    /* 005da0d7: jmp 0x5da109 */ f_005da109(); return;
L_005da0d9:; BB(0x005da0d9);
    /* 005da0d9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005da0dc: add ecx, 0x186f9 */ {  u32 a = r_ecx; u32 b = 0x186f9u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005da0e2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005da0e3: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005da0e6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005da0e7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005da0ea: call 0x5f2300 */ r_esp -= 4; W32(r_esp, 0x5da0efu); f_005f2300();
    /* 005da0ef: mov ecx, eax */ r_ecx = r_eax;
    /* 005da0f1: call 0x5ff060 */ r_esp -= 4; W32(r_esp, 0x5da0f6u); f_005ff060();
    /* 005da0f6: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005da0f9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005da0fc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005da0fe: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005da101: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 005da107: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5da109u); call_ind(t); }
    /* 005da109: jmp 0x5da052 */ goto L_005da052;
L_005da10e:; BB(0x005da10e);
    /* 005da10e: mov esp, ebp */ r_esp = r_ebp;
    /* 005da110: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005da111: ret 4 */ FN_RET(0x005da052); r_esp += 8; return;
}

void f_005da109(void) /* _WinMain@16_61 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005da109);
    /* 005da109: jmp 0x5da052 */ f_005da052(); return;
}

void f_005dca00(void) /* ??_G_com_error@@UAEPAXI@Z_262 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dca00);
    /* 005dca00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dca01: mov ebp, esp */ r_ebp = r_esp;
    /* 005dca03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dca04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005dca07: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dca0a: call 0x5d7bd0 */ r_esp -= 4; W32(r_esp, 0x5dca0fu); f_005d7bd0();
    /* 005dca0f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005dca12: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005dca15: je 0x5dca23 */ if (fZ) goto L_005dca23;
L_005dca17:; BB(0x005dca17);
    /* 005dca17: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dca1a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dca1b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5dca20u); f_00686cae();
    /* 005dca20: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005dca23:; BB(0x005dca23);
    /* 005dca23: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dca26: mov esp, ebp */ r_esp = r_ebp;
    /* 005dca28: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dca29: ret 4 */ FN_RET(0x005dca00); r_esp += 8; return;
}

void f_005dcf50(void) /* ??1_Mtx_guard@@QAE@XZ_21 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dcf50);
    /* 005dcf50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dcf51: mov ebp, esp */ r_ebp = r_esp;
    /* 005dcf53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dcf54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005dcf57: push 0x6d4b2c */ { u32 v = 0x6d4b2cu; r_esp -= 4; W32(r_esp, v); }
    /* 005dcf5c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5dcf61u); f_00630f40();
    /* 005dcf61: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dcf64: mov esp, ebp */ r_esp = r_ebp;
    /* 005dcf66: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dcf67: ret  */ FN_RET(0x005dcf50); r_esp += 4; return;
}

void f_005de469(void) /* _WinMain@16_62_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005de469);
L_005de469:; BB(0x005de469);
    /* 005de469: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005de46c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005de46f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005de472: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005de478: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005de47a: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005de480: mov eax, dword ptr [edx + 0x10c] */ r_eax = R32((u32)(r_edx+0x10cu));
    /* 005de486: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5de488u); call_ind(t); }
    /* 005de488: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005de48b: jge 0x5de51d */ if ((fS==fO)) goto L_005de51d;
L_005de491:; BB(0x005de491);
    /* 005de491: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005de494: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005de495: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5de49au); f_005dcb00();
    /* 005de49a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005de49d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005de4a0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005de4a3: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5de4a8u); f_0063aac0();
    /* 005de4a8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005de4aa: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005de4ad: cmp dword ptr [ebp - 0xc], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005de4b1: je 0x5de4cf */ if (fZ) goto L_005de4cf;
L_005de4b3:; BB(0x005de4b3);
    /* 005de4b3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005de4b6: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5de4bbu); f_0063aac0();
    /* 005de4bb: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005de4bd: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005de4c0: cmp dword ptr [ebp - 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005de4c4: je 0x5de4cf */ if (fZ) goto L_005de4cf;
L_005de4c6:; BB(0x005de4c6);
    /* 005de4c6: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005de4cd: jmp 0x5de4d6 */ goto L_005de4d6;
L_005de4cf:; BB(0x005de4cf);
    /* 005de4cf: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
L_005de4d6:; BB(0x005de4d6);
    /* 005de4d6: movzx ecx, byte ptr [ebp - 0x24] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffdcu));
    /* 005de4da: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005de4dc: je 0x5de518 */ if (fZ) goto L_005de518;
L_005de4de:; BB(0x005de4de);
    /* 005de4de: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005de4e1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005de4e2: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5de4e7u); f_005dcb00();
    /* 005de4e7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005de4ea: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005de4ed: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005de4f0: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5de4f5u); f_0063aac0();
    /* 005de4f5: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005de4f8: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005de4fb: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005de4fe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005de4ff: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005de502: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005de503: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x5de508u); f_00686ec0();
    /* 005de508: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005de50b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005de50d: jne 0x5de518 */ if (!fZ) goto L_005de518;
L_005de50f:; BB(0x005de50f);
    /* 005de50f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005de512: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005de515: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_005de518:; BB(0x005de518);
    /* 005de518: jmp 0x5de469 */ goto L_005de469;
L_005de51d:; BB(0x005de51d);
    /* 005de51d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005de520: mov esp, ebp */ r_esp = r_ebp;
    /* 005de522: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005de523: ret 4 */ FN_RET(0x005de469); r_esp += 8; return;
}

void f_005de518(void) /* _WinMain@16_62 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005de518);
    /* 005de518: jmp 0x5de469 */ f_005de469(); return;
}

void f_005dee70(void) /* ?do_always_noconv@?$codecvt@DDU_Mbstatet@@@std@@MBE_NXZ_26 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dee70);
    /* 005dee70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dee71: mov ebp, esp */ r_ebp = r_esp;
    /* 005dee73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dee74: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005dee77: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005dee79: mov esp, ebp */ r_esp = r_ebp;
    /* 005dee7b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dee7c: ret  */ FN_RET(0x005dee70); r_esp += 4; return;
}

void f_005dee80(void) /* ?do_always_noconv@?$codecvt@DDU_Mbstatet@@@std@@MBE_NXZ_27 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dee80);
    /* 005dee80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dee81: mov ebp, esp */ r_ebp = r_esp;
    /* 005dee83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dee84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005dee87: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005dee89: mov esp, ebp */ r_esp = r_ebp;
    /* 005dee8b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dee8c: ret  */ FN_RET(0x005dee80); r_esp += 4; return;
}

void f_005dee90(void) /* unknown_libname_833 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dee90);
    /* 005dee90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dee91: mov ebp, esp */ r_ebp = r_esp;
    /* 005dee93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dee94: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005dee97: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005dee99: mov esp, ebp */ r_esp = r_ebp;
    /* 005dee9b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dee9c: ret  */ FN_RET(0x005dee90); r_esp += 4; return;
}

void f_005deea0(void) /* ?do_always_noconv@?$codecvt@DDU_Mbstatet@@@std@@MBE_NXZ_28 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005deea0);
    /* 005deea0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005deea1: mov ebp, esp */ r_ebp = r_esp;
    /* 005deea3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005deea4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005deea7: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005deea9: mov esp, ebp */ r_esp = r_ebp;
    /* 005deeab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005deeac: ret  */ FN_RET(0x005deea0); r_esp += 4; return;
}

void f_005def00(void) /* ?GetImageHorzMargin@CMFCButton@@MBEHXZ_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005def00);
    /* 005def00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005def01: mov ebp, esp */ r_ebp = r_esp;
    /* 005def03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005def04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005def07: mov eax, 0xa */ r_eax = 0xau;
    /* 005def0c: mov esp, ebp */ r_esp = r_ebp;
    /* 005def0e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005def0f: ret  */ FN_RET(0x005def00); r_esp += 4; return;
}

void f_005defe0(void) /* unknown_libname_834 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005defe0);
    /* 005defe0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005defe1: mov ebp, esp */ r_ebp = r_esp;
    /* 005defe3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005defe4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005defe7: mov eax, 1 */ r_eax = 0x1u;
    /* 005defec: mov esp, ebp */ r_esp = r_ebp;
    /* 005defee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005defef: ret  */ FN_RET(0x005defe0); r_esp += 4; return;
}

void f_005df0d0(void) /* ??1_Mtx_guard@@QAE@XZ_22 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005df0d0);
    /* 005df0d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005df0d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005df0d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005df0d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005df0d7: push 0x6d4c40 */ { u32 v = 0x6d4c40u; r_esp -= 4; W32(r_esp, v); }
    /* 005df0dc: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5df0e1u); f_00630f40();
    /* 005df0e1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005df0e4: mov esp, ebp */ r_esp = r_ebp;
    /* 005df0e6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005df0e7: ret  */ FN_RET(0x005df0d0); r_esp += 4; return;
}

void f_005df0f0(void) /* ??1_Mtx_guard@@QAE@XZ_23 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005df0f0);
    /* 005df0f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005df0f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005df0f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005df0f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005df0f7: push 0x6d4c58 */ { u32 v = 0x6d4c58u; r_esp -= 4; W32(r_esp, v); }
    /* 005df0fc: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5df101u); f_00630f40();
    /* 005df101: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005df104: mov esp, ebp */ r_esp = r_ebp;
    /* 005df106: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005df107: ret  */ FN_RET(0x005df0f0); r_esp += 4; return;
}

void f_005df110(void) /* ??1_Mtx_guard@@QAE@XZ_24 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005df110);
    /* 005df110: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005df111: mov ebp, esp */ r_ebp = r_esp;
    /* 005df113: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005df114: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005df117: push 0x6d4c6c */ { u32 v = 0x6d4c6cu; r_esp -= 4; W32(r_esp, v); }
    /* 005df11c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5df121u); f_00630f40();
    /* 005df121: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005df124: mov esp, ebp */ r_esp = r_ebp;
    /* 005df126: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005df127: ret  */ FN_RET(0x005df110); r_esp += 4; return;
}

void f_005df130(void) /* ??1_Mtx_guard@@QAE@XZ_25 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005df130);
    /* 005df130: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005df131: mov ebp, esp */ r_ebp = r_esp;
    /* 005df133: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005df134: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005df137: push 0x6d4c80 */ { u32 v = 0x6d4c80u; r_esp -= 4; W32(r_esp, v); }
    /* 005df13c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5df141u); f_00630f40();
    /* 005df141: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005df144: mov esp, ebp */ r_esp = r_ebp;
    /* 005df146: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005df147: ret  */ FN_RET(0x005df130); r_esp += 4; return;
}

void f_005df170(void) /* ??1_Mtx_guard@@QAE@XZ_26 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005df170);
    /* 005df170: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005df171: mov ebp, esp */ r_ebp = r_esp;
    /* 005df173: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005df174: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005df177: push 0x6d4ca0 */ { u32 v = 0x6d4ca0u; r_esp -= 4; W32(r_esp, v); }
    /* 005df17c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5df181u); f_00630f40();
    /* 005df181: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005df184: mov esp, ebp */ r_esp = r_ebp;
    /* 005df186: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005df187: ret  */ FN_RET(0x005df170); r_esp += 4; return;
}

void f_005df190(void) /* ??1_Mtx_guard@@QAE@XZ_27 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005df190);
    /* 005df190: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005df191: mov ebp, esp */ r_ebp = r_esp;
    /* 005df193: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005df194: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005df197: push 0x6d4cb4 */ { u32 v = 0x6d4cb4u; r_esp -= 4; W32(r_esp, v); }
    /* 005df19c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5df1a1u); f_00630f40();
    /* 005df1a1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005df1a4: mov esp, ebp */ r_esp = r_ebp;
    /* 005df1a6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005df1a7: ret  */ FN_RET(0x005df190); r_esp += 4; return;
}

void f_005df1b0(void) /* ??1_Mtx_guard@@QAE@XZ_28 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005df1b0);
    /* 005df1b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005df1b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005df1b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005df1b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005df1b7: push 0x6d4cc8 */ { u32 v = 0x6d4cc8u; r_esp -= 4; W32(r_esp, v); }
    /* 005df1bc: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5df1c1u); f_00630f40();
    /* 005df1c1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005df1c4: mov esp, ebp */ r_esp = r_ebp;
    /* 005df1c6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005df1c7: ret  */ FN_RET(0x005df1b0); r_esp += 4; return;
}

void f_005df1d0(void) /* ??1_Mtx_guard@@QAE@XZ_29 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005df1d0);
    /* 005df1d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005df1d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005df1d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005df1d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005df1d7: push 0x6d4ce4 */ { u32 v = 0x6d4ce4u; r_esp -= 4; W32(r_esp, v); }
    /* 005df1dc: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5df1e1u); f_00630f40();
    /* 005df1e1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005df1e4: mov esp, ebp */ r_esp = r_ebp;
    /* 005df1e6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005df1e7: ret  */ FN_RET(0x005df1d0); r_esp += 4; return;
}

void f_005df1f0(void) /* ??1_Mtx_guard@@QAE@XZ_30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005df1f0);
    /* 005df1f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005df1f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005df1f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005df1f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005df1f7: push 0x6d4cfc */ { u32 v = 0x6d4cfcu; r_esp -= 4; W32(r_esp, v); }
    /* 005df1fc: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5df201u); f_00630f40();
    /* 005df201: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005df204: mov esp, ebp */ r_esp = r_ebp;
    /* 005df206: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005df207: ret  */ FN_RET(0x005df1f0); r_esp += 4; return;
}

void f_005df210(void) /* ??1_Mtx_guard@@QAE@XZ_31 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005df210);
    /* 005df210: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005df211: mov ebp, esp */ r_ebp = r_esp;
    /* 005df213: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005df214: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005df217: push 0x6d4d14 */ { u32 v = 0x6d4d14u; r_esp -= 4; W32(r_esp, v); }
    /* 005df21c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5df221u); f_00630f40();
    /* 005df221: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005df224: mov esp, ebp */ r_esp = r_ebp;
    /* 005df226: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005df227: ret  */ FN_RET(0x005df210); r_esp += 4; return;
}

void f_005df230(void) /* ??1_Mtx_guard@@QAE@XZ_32 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005df230);
    /* 005df230: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005df231: mov ebp, esp */ r_ebp = r_esp;
    /* 005df233: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005df234: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005df237: push 0x6d4d34 */ { u32 v = 0x6d4d34u; r_esp -= 4; W32(r_esp, v); }
    /* 005df23c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5df241u); f_00630f40();
    /* 005df241: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005df244: mov esp, ebp */ r_esp = r_ebp;
    /* 005df246: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005df247: ret  */ FN_RET(0x005df230); r_esp += 4; return;
}

