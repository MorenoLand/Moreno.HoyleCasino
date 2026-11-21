#include "protos.h"

void f_00401000(void) /* ??0_AFX_OLE_STATE@@QAE@XZ */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00401000);
    /* 00401000: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00401001: mov ebp, esp */ r_ebp = r_esp;
    /* 00401003: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00401004: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00401007: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040100a: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x40100fu); f_005e9e20();
    /* 0040100f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00401012: mov dword ptr [eax], 0x6b26f4 */ W32((u32)(r_eax), 0x6b26f4u);
    /* 00401018: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040101b: mov esp, ebp */ r_esp = r_ebp;
    /* 0040101d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040101e: ret  */ FN_RET(0x00401000); r_esp += 4; return;
}

void f_00401020(void) /* ??1_AFX_OLE_STATE@@UAE@XZ */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00401020);
    /* 00401020: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00401021: mov ebp, esp */ r_ebp = r_esp;
    /* 00401023: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00401024: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00401027: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040102a: mov dword ptr [eax], 0x6b26f4 */ W32((u32)(r_eax), 0x6b26f4u);
    /* 00401030: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00401033: call 0x5e9e40 */ r_esp -= 4; W32(r_esp, 0x401038u); f_005e9e40();
    /* 00401038: mov esp, ebp */ r_esp = r_ebp;
    /* 0040103a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040103b: ret  */ FN_RET(0x00401020); r_esp += 4; return;
}

void f_00401280(void) /* ??_G_com_error@@UAEPAXI@Z */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00401280);
    /* 00401280: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00401281: mov ebp, esp */ r_ebp = r_esp;
    /* 00401283: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00401284: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00401287: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040128a: call 0x401020 */ r_esp -= 4; W32(r_esp, 0x40128fu); f_00401020();
    /* 0040128f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00401292: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00401295: je 0x4012a3 */ if (fZ) goto L_004012a3;
L_00401297:; BB(0x00401297);
    /* 00401297: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040129a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040129b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x4012a0u); f_00686cae();
    /* 004012a0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004012a3:; BB(0x004012a3);
    /* 004012a3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004012a6: mov esp, ebp */ r_esp = r_ebp;
    /* 004012a8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004012a9: ret 4 */ FN_RET(0x00401280); r_esp += 8; return;
}

void f_00402540(void) /* ??1CExpandoObject@@UAE@XZ */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00402540);
    /* 00402540: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00402541: mov ebp, esp */ r_ebp = r_esp;
    /* 00402543: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00402544: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00402547: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040254a: mov dword ptr [eax], 0x6b2834 */ W32((u32)(r_eax), 0x6b2834u);
    /* 00402550: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00402553: call 0x5eac00 */ r_esp -= 4; W32(r_esp, 0x402558u); f_005eac00();
    /* 00402558: mov esp, ebp */ r_esp = r_ebp;
    /* 0040255a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040255b: ret  */ FN_RET(0x00402540); r_esp += 4; return;
}

void f_00402d60(void) /* ?SetAtGrow@?$CTypedPtrArray@VCObArray@@PAVCBitmap@@@@QAEXHPAVCBitmap@@@Z */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00402d60);
    /* 00402d60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00402d61: mov ebp, esp */ r_ebp = r_esp;
    /* 00402d63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00402d64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00402d67: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00402d6a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00402d6b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00402d6e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00402d6f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00402d72: call 0x402c60 */ r_esp -= 4; W32(r_esp, 0x402d77u); f_00402c60();
    /* 00402d77: mov esp, ebp */ r_esp = r_ebp;
    /* 00402d79: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00402d7a: ret 8 */ FN_RET(0x00402d60); r_esp += 12; return;
}

void f_00402f00(void) /* ??1CExpandoObject@@UAE@XZ_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00402f00);
    /* 00402f00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00402f01: mov ebp, esp */ r_ebp = r_esp;
    /* 00402f03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00402f04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00402f07: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00402f0a: mov dword ptr [eax], 0x6b29f4 */ W32((u32)(r_eax), 0x6b29f4u);
    /* 00402f10: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00402f13: call 0x584760 */ r_esp -= 4; W32(r_esp, 0x402f18u); f_00584760();
    /* 00402f18: mov esp, ebp */ r_esp = r_ebp;
    /* 00402f1a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00402f1b: ret  */ FN_RET(0x00402f00); r_esp += 4; return;
}

void f_00402f50(void) /* unknown_libname_473 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00402f50);
    /* 00402f50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00402f51: mov ebp, esp */ r_ebp = r_esp;
    /* 00402f53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00402f54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00402f57: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00402f5a: mov eax, dword ptr [eax + 0x74] */ r_eax = R32((u32)(r_eax+0x74u));
    /* 00402f5d: mov esp, ebp */ r_esp = r_ebp;
    /* 00402f5f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00402f60: ret  */ FN_RET(0x00402f50); r_esp += 4; return;
}

void f_00403c20(void) /* ??1CExpandoObject@@UAE@XZ_1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00403c20);
    /* 00403c20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00403c21: mov ebp, esp */ r_ebp = r_esp;
    /* 00403c23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00403c24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00403c27: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00403c2a: mov dword ptr [eax], 0x6b2bf0 */ W32((u32)(r_eax), 0x6b2bf0u);
    /* 00403c30: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00403c33: call 0x5fc150 */ r_esp -= 4; W32(r_esp, 0x403c38u); f_005fc150();
    /* 00403c38: mov esp, ebp */ r_esp = r_ebp;
    /* 00403c3a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00403c3b: ret  */ FN_RET(0x00403c20); r_esp += 4; return;
}

void f_00403f10(void) /* ??_G_com_error@@UAEPAXI@Z_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00403f10);
    /* 00403f10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00403f11: mov ebp, esp */ r_ebp = r_esp;
    /* 00403f13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00403f14: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00403f17: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00403f1a: call 0x401380 */ r_esp -= 4; W32(r_esp, 0x403f1fu); f_00401380();
    /* 00403f1f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00403f22: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00403f25: je 0x403f33 */ if (fZ) goto L_00403f33;
L_00403f27:; BB(0x00403f27);
    /* 00403f27: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00403f2a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00403f2b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x403f30u); f_00686cae();
    /* 00403f30: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00403f33:; BB(0x00403f33);
    /* 00403f33: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00403f36: mov esp, ebp */ r_esp = r_ebp;
    /* 00403f38: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00403f39: ret 4 */ FN_RET(0x00403f10); r_esp += 8; return;
}

void f_00403f40(void) /* ??8_ContextCallback@details@Concurrency@@QBE_NABV012@@Z */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00403f40);
    /* 00403f40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00403f41: mov ebp, esp */ r_ebp = r_esp;
    /* 00403f43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00403f44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00403f47: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00403f49: mov esp, ebp */ r_esp = r_ebp;
    /* 00403f4b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00403f4c: ret 4 */ FN_RET(0x00403f40); r_esp += 8; return;
}

void f_00403f90(void) /* ??_G_com_error@@UAEPAXI@Z_1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00403f90);
    /* 00403f90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00403f91: mov ebp, esp */ r_ebp = r_esp;
    /* 00403f93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00403f94: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00403f97: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00403f9a: call 0x402540 */ r_esp -= 4; W32(r_esp, 0x403f9fu); f_00402540();
    /* 00403f9f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00403fa2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00403fa5: je 0x403fb3 */ if (fZ) goto L_00403fb3;
L_00403fa7:; BB(0x00403fa7);
    /* 00403fa7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00403faa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00403fab: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x403fb0u); f_00686cae();
    /* 00403fb0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00403fb3:; BB(0x00403fb3);
    /* 00403fb3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00403fb6: mov esp, ebp */ r_esp = r_ebp;
    /* 00403fb8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00403fb9: ret 4 */ FN_RET(0x00403f90); r_esp += 8; return;
}

void f_00403fc0(void) /* ??_G_com_error@@UAEPAXI@Z_2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00403fc0);
    /* 00403fc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00403fc1: mov ebp, esp */ r_ebp = r_esp;
    /* 00403fc3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00403fc4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00403fc7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00403fca: call 0x4026c0 */ r_esp -= 4; W32(r_esp, 0x403fcfu); f_004026c0();
    /* 00403fcf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00403fd2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00403fd5: je 0x403fe3 */ if (fZ) goto L_00403fe3;
L_00403fd7:; BB(0x00403fd7);
    /* 00403fd7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00403fda: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00403fdb: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x403fe0u); f_00686cae();
    /* 00403fe0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00403fe3:; BB(0x00403fe3);
    /* 00403fe3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00403fe6: mov esp, ebp */ r_esp = r_ebp;
    /* 00403fe8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00403fe9: ret 4 */ FN_RET(0x00403fc0); r_esp += 8; return;
}

void f_00404060(void) /* ??_G_com_error@@UAEPAXI@Z_3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00404060);
    /* 00404060: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00404061: mov ebp, esp */ r_ebp = r_esp;
    /* 00404063: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00404064: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00404067: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040406a: call 0x402b70 */ r_esp -= 4; W32(r_esp, 0x40406fu); f_00402b70();
    /* 0040406f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00404072: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00404075: je 0x404083 */ if (fZ) goto L_00404083;
L_00404077:; BB(0x00404077);
    /* 00404077: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040407a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040407b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x404080u); f_00686cae();
    /* 00404080: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00404083:; BB(0x00404083);
    /* 00404083: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00404086: mov esp, ebp */ r_esp = r_ebp;
    /* 00404088: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00404089: ret 4 */ FN_RET(0x00404060); r_esp += 8; return;
}

void f_00404090(void) /* ??_G_com_error@@UAEPAXI@Z_4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00404090);
    /* 00404090: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00404091: mov ebp, esp */ r_ebp = r_esp;
    /* 00404093: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00404094: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00404097: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040409a: call 0x402f00 */ r_esp -= 4; W32(r_esp, 0x40409fu); f_00402f00();
    /* 0040409f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004040a2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 004040a5: je 0x4040b3 */ if (fZ) goto L_004040b3;
L_004040a7:; BB(0x004040a7);
    /* 004040a7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004040aa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004040ab: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x4040b0u); f_00686cae();
    /* 004040b0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004040b3:; BB(0x004040b3);
    /* 004040b3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004040b6: mov esp, ebp */ r_esp = r_ebp;
    /* 004040b8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004040b9: ret 4 */ FN_RET(0x00404090); r_esp += 8; return;
}

void f_004040c0(void) /* ??_G_com_error@@UAEPAXI@Z_5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004040c0);
    /* 004040c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004040c1: mov ebp, esp */ r_ebp = r_esp;
    /* 004040c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004040c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004040c7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004040ca: call 0x403000 */ r_esp -= 4; W32(r_esp, 0x4040cfu); f_00403000();
    /* 004040cf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004040d2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 004040d5: je 0x4040e3 */ if (fZ) goto L_004040e3;
L_004040d7:; BB(0x004040d7);
    /* 004040d7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004040da: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004040db: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x4040e0u); f_00686cae();
    /* 004040e0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004040e3:; BB(0x004040e3);
    /* 004040e3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004040e6: mov esp, ebp */ r_esp = r_ebp;
    /* 004040e8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004040e9: ret 4 */ FN_RET(0x004040c0); r_esp += 8; return;
}

void f_004040f0(void) /* ??_G_com_error@@UAEPAXI@Z_6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004040f0);
    /* 004040f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004040f1: mov ebp, esp */ r_ebp = r_esp;
    /* 004040f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004040f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004040f7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004040fa: call 0x403c20 */ r_esp -= 4; W32(r_esp, 0x4040ffu); f_00403c20();
    /* 004040ff: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00404102: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00404105: je 0x404113 */ if (fZ) goto L_00404113;
L_00404107:; BB(0x00404107);
    /* 00404107: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040410a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040410b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x404110u); f_00686cae();
    /* 00404110: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00404113:; BB(0x00404113);
    /* 00404113: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00404116: mov esp, ebp */ r_esp = r_ebp;
    /* 00404118: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00404119: ret 4 */ FN_RET(0x004040f0); r_esp += 8; return;
}

void f_00404120(void) /* ??0_AFX_OLE_STATE@@QAE@XZ_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00404120);
    /* 00404120: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00404121: mov ebp, esp */ r_ebp = r_esp;
    /* 00404123: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00404124: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00404127: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040412a: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x40412fu); f_005e9e20();
    /* 0040412f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00404132: mov dword ptr [eax], 0x6b2c14 */ W32((u32)(r_eax), 0x6b2c14u);
    /* 00404138: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040413b: mov esp, ebp */ r_esp = r_ebp;
    /* 0040413d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040413e: ret  */ FN_RET(0x00404120); r_esp += 4; return;
}

void f_00404140(void) /* ??1_AFX_OLE_STATE@@UAE@XZ_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00404140);
    /* 00404140: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00404141: mov ebp, esp */ r_ebp = r_esp;
    /* 00404143: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00404144: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00404147: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040414a: mov dword ptr [eax], 0x6b2c14 */ W32((u32)(r_eax), 0x6b2c14u);
    /* 00404150: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00404153: call 0x5e9e40 */ r_esp -= 4; W32(r_esp, 0x404158u); f_005e9e40();
    /* 00404158: mov esp, ebp */ r_esp = r_ebp;
    /* 0040415a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040415b: ret  */ FN_RET(0x00404140); r_esp += 4; return;
}

void f_004051d0(void) /* ??_G_com_error@@UAEPAXI@Z_7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004051d0);
    /* 004051d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004051d1: mov ebp, esp */ r_ebp = r_esp;
    /* 004051d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004051d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004051d7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004051da: call 0x404140 */ r_esp -= 4; W32(r_esp, 0x4051dfu); f_00404140();
    /* 004051df: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004051e2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 004051e5: je 0x4051f3 */ if (fZ) goto L_004051f3;
L_004051e7:; BB(0x004051e7);
    /* 004051e7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004051ea: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004051eb: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x4051f0u); f_00686cae();
    /* 004051f0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004051f3:; BB(0x004051f3);
    /* 004051f3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004051f6: mov esp, ebp */ r_esp = r_ebp;
    /* 004051f8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004051f9: ret 4 */ FN_RET(0x004051d0); r_esp += 8; return;
}

void f_00405a30(void) /* unknown_libname_736 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00405a30);
    /* 00405a30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00405a31: mov ebp, esp */ r_ebp = r_esp;
    /* 00405a33: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00405a34: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00405a37: mov esp, ebp */ r_esp = r_ebp;
    /* 00405a39: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00405a3a: ret 4 */ FN_RET(0x00405a30); r_esp += 8; return;
}

void f_00405a40(void) /* unknown_libname_737 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00405a40);
    /* 00405a40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00405a41: mov ebp, esp */ r_ebp = r_esp;
    /* 00405a43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00405a44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00405a47: mov esp, ebp */ r_esp = r_ebp;
    /* 00405a49: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00405a4a: ret 4 */ FN_RET(0x00405a40); r_esp += 8; return;
}

void f_00406650(void) /* ?do_deallocate@_Null_resource@?1??null_memory_resource@@YAPAVmemory_resource@pmr@std@@XZ@EAEXPAXII@Z */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00406650);
    /* 00406650: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00406651: mov ebp, esp */ r_ebp = r_esp;
    /* 00406653: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00406654: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00406657: mov esp, ebp */ r_esp = r_ebp;
    /* 00406659: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040665a: ret 0xc */ FN_RET(0x00406650); r_esp += 16; return;
}

void f_004066b0(void) /* unknown_libname_477 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004066b0);
    /* 004066b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004066b1: mov ebp, esp */ r_ebp = r_esp;
    /* 004066b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004066b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004066b7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004066b9: mov esp, ebp */ r_esp = r_ebp;
    /* 004066bb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004066bc: ret 0x18 */ FN_RET(0x004066b0); r_esp += 28; return;
}

void f_00406840(void) /* unknown_libname_478 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00406840);
    /* 00406840: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00406841: mov ebp, esp */ r_ebp = r_esp;
    /* 00406843: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00406844: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00406847: mov esp, ebp */ r_esp = r_ebp;
    /* 00406849: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040684a: ret 0x18 */ FN_RET(0x00406840); r_esp += 28; return;
}

void f_00406850(void) /* unknown_libname_479 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00406850);
    /* 00406850: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00406851: mov ebp, esp */ r_ebp = r_esp;
    /* 00406853: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00406854: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00406857: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00406859: mov esp, ebp */ r_esp = r_ebp;
    /* 0040685b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040685c: ret 0xc */ FN_RET(0x00406850); r_esp += 16; return;
}

void f_004068a0(void) /* ??_G_com_error@@UAEPAXI@Z_8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004068a0);
    /* 004068a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004068a1: mov ebp, esp */ r_ebp = r_esp;
    /* 004068a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004068a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004068a7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004068aa: call 0x4052b0 */ r_esp -= 4; W32(r_esp, 0x4068afu); f_004052b0();
    /* 004068af: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004068b2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 004068b5: je 0x4068c3 */ if (fZ) goto L_004068c3;
L_004068b7:; BB(0x004068b7);
    /* 004068b7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004068ba: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004068bb: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x4068c0u); f_00686cae();
    /* 004068c0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004068c3:; BB(0x004068c3);
    /* 004068c3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004068c6: mov esp, ebp */ r_esp = r_ebp;
    /* 004068c8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004068c9: ret 4 */ FN_RET(0x004068a0); r_esp += 8; return;
}

void f_004069c0(void) /* ??1_Mtx_guard@@QAE@XZ */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004069c0);
    /* 004069c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004069c1: mov ebp, esp */ r_ebp = r_esp;
    /* 004069c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004069c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004069c7: push 0x6b27fc */ { u32 v = 0x6b27fcu; r_esp -= 4; W32(r_esp, v); }
    /* 004069cc: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4069d1u); f_00630f40();
    /* 004069d1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004069d4: mov esp, ebp */ r_esp = r_ebp;
    /* 004069d6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004069d7: ret  */ FN_RET(0x004069c0); r_esp += 4; return;
}

void f_00406a00(void) /* unknown_libname_738 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00406a00);
    /* 00406a00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00406a01: mov ebp, esp */ r_ebp = r_esp;
    /* 00406a03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00406a04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00406a07: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00406a09: mov esp, ebp */ r_esp = r_ebp;
    /* 00406a0b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00406a0c: ret  */ FN_RET(0x00406a00); r_esp += 4; return;
}

void f_00406a30(void) /* unknown_libname_480 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00406a30);
    /* 00406a30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00406a31: mov ebp, esp */ r_ebp = r_esp;
    /* 00406a33: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00406a34: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00406a37: mov eax, 4 */ r_eax = 0x4u;
    /* 00406a3c: mov esp, ebp */ r_esp = r_ebp;
    /* 00406a3e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00406a3f: ret  */ FN_RET(0x00406a30); r_esp += 4; return;
}

void f_00406a40(void) /* unknown_libname_481 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00406a40);
    /* 00406a40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00406a41: mov ebp, esp */ r_ebp = r_esp;
    /* 00406a43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00406a44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00406a47: mov eax, 4 */ r_eax = 0x4u;
    /* 00406a4c: mov esp, ebp */ r_esp = r_ebp;
    /* 00406a4e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00406a4f: ret  */ FN_RET(0x00406a40); r_esp += 4; return;
}

void f_00406ba0(void) /* unknown_libname_739 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00406ba0);
    /* 00406ba0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00406ba1: mov ebp, esp */ r_ebp = r_esp;
    /* 00406ba3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00406ba4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00406ba7: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00406ba9: mov esp, ebp */ r_esp = r_ebp;
    /* 00406bab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00406bac: ret  */ FN_RET(0x00406ba0); r_esp += 4; return;
}

void f_00406bb0(void) /* unknown_libname_740 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00406bb0);
    /* 00406bb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00406bb1: mov ebp, esp */ r_ebp = r_esp;
    /* 00406bb3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00406bb4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00406bb7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00406bb9: mov esp, ebp */ r_esp = r_ebp;
    /* 00406bbb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00406bbc: ret  */ FN_RET(0x00406bb0); r_esp += 4; return;
}

void f_00407150(void) /* unknown_libname_741 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00407150);
    /* 00407150: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00407151: mov ebp, esp */ r_ebp = r_esp;
    /* 00407153: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00407154: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00407157: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00407159: mov esp, ebp */ r_esp = r_ebp;
    /* 0040715b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040715c: ret  */ FN_RET(0x00407150); r_esp += 4; return;
}

void f_00407180(void) /* unknown_libname_483 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00407180);
    /* 00407180: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00407181: mov ebp, esp */ r_ebp = r_esp;
    /* 00407183: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00407184: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00407187: mov esp, ebp */ r_esp = r_ebp;
    /* 00407189: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040718a: ret 0x10 */ FN_RET(0x00407180); r_esp += 20; return;
}

void f_00407190(void) /* unknown_libname_742 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00407190);
    /* 00407190: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00407191: mov ebp, esp */ r_ebp = r_esp;
    /* 00407193: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00407194: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00407197: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040719a: mov esp, ebp */ r_esp = r_ebp;
    /* 0040719c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040719d: ret  */ FN_RET(0x00407190); r_esp += 4; return;
}

void f_004071a0(void) /* unknown_libname_244 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004071a0);
    /* 004071a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004071a1: mov ebp, esp */ r_ebp = r_esp;
    /* 004071a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004071a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004071a7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004071aa: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004071ac: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004071af: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 004071b2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4071b4u); call_ind(t); }
    /* 004071b4: mov esp, ebp */ r_esp = r_ebp;
    /* 004071b6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004071b7: ret  */ FN_RET(0x004071a0); r_esp += 4; return;
}

void f_004071c0(void) /* unknown_libname_485 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004071c0);
    /* 004071c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004071c1: mov ebp, esp */ r_ebp = r_esp;
    /* 004071c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004071c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004071c7: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004071ca: mov esp, ebp */ r_esp = r_ebp;
    /* 004071cc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004071cd: ret 4 */ FN_RET(0x004071c0); r_esp += 8; return;
}

void f_00407390(void) /* ?EnsureLinked@CAtlStringMgrStaticInitializer@ATLImplementationDetails@ATL@@QAEPAXXZ */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00407390);
    /* 00407390: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00407391: mov ebp, esp */ r_ebp = r_esp;
    /* 00407393: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00407394: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00407397: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040739a: mov esp, ebp */ r_esp = r_ebp;
    /* 0040739c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040739d: ret  */ FN_RET(0x00407390); r_esp += 4; return;
}

void f_004073a0(void) /* ??1CComCriticalSection@ATL@@QAE@XZ */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004073a0);
    /* 004073a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004073a1: mov ebp, esp */ r_ebp = r_esp;
    /* 004073a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004073a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004073a7: mov esp, ebp */ r_esp = r_ebp;
    /* 004073a9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004073aa: ret  */ FN_RET(0x004073a0); r_esp += 4; return;
}

void f_00407590(void) /* ?Release@MultiWaitBlockHolder@details@Concurrency@@QAEXXZ */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00407590);
    /* 00407590: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00407591: mov ebp, esp */ r_ebp = r_esp;
    /* 00407593: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00407594: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00407597: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040759a: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0040759d: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004075a0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004075a3: mov dword ptr [edx + 0x14], ecx */ W32((u32)(r_edx+0x14u), r_ecx);
    /* 004075a6: mov esp, ebp */ r_esp = r_ebp;
    /* 004075a8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004075a9: ret  */ FN_RET(0x00407590); r_esp += 4; return;
}

void f_004075b0(void) /* unknown_libname_247 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004075b0);
    /* 004075b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004075b1: mov ebp, esp */ r_ebp = r_esp;
    /* 004075b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004075b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004075b7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004075ba: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 004075bd: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004075c0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004075c3: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 004075c6: mov esp, ebp */ r_esp = r_ebp;
    /* 004075c8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004075c9: ret  */ FN_RET(0x004075b0); r_esp += 4; return;
}

void f_00409100(void) /* ?Exit@CSourceStream@@QAEJXZ */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00409100);
    /* 00409100: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409101: mov ebp, esp */ r_ebp = r_esp;
    /* 00409103: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00409104: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00409107: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00409109: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040910c: call 0x409140 */ r_esp -= 4; W32(r_esp, 0x409111u); f_00409140();
    /* 00409111: mov esp, ebp */ r_esp = r_ebp;
    /* 00409113: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00409114: ret  */ FN_RET(0x00409100); r_esp += 4; return;
}

void f_00409120(void) /* ?CleanUp@CAtlAllocator@@QAEXXZ */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00409120);
    /* 00409120: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409121: mov ebp, esp */ r_ebp = r_esp;
    /* 00409123: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00409124: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00409127: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00409129: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040912c: call 0x409140 */ r_esp -= 4; W32(r_esp, 0x409131u); f_00409140();
    /* 00409131: mov esp, ebp */ r_esp = r_ebp;
    /* 00409133: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00409134: ret  */ FN_RET(0x00409120); r_esp += 4; return;
}

void f_004091b0(void) /* ?CleanUp@CAtlAllocator@@QAEXXZ_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004091b0);
    /* 004091b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004091b1: mov ebp, esp */ r_ebp = r_esp;
    /* 004091b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004091b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004091b7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004091b9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004091bc: call 0x409060 */ r_esp -= 4; W32(r_esp, 0x4091c1u); f_00409060();
    /* 004091c1: mov esp, ebp */ r_esp = r_ebp;
    /* 004091c3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004091c4: ret  */ FN_RET(0x004091b0); r_esp += 4; return;
}

void f_004091d0(void) /* ?Exit@CSourceStream@@QAEJXZ_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004091d0);
    /* 004091d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004091d1: mov ebp, esp */ r_ebp = r_esp;
    /* 004091d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004091d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004091d7: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004091d9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004091dc: call 0x409060 */ r_esp -= 4; W32(r_esp, 0x4091e1u); f_00409060();
    /* 004091e1: mov esp, ebp */ r_esp = r_ebp;
    /* 004091e3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004091e4: ret  */ FN_RET(0x004091d0); r_esp += 4; return;
}

void f_00409510(void) /* unknown_libname_743 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00409510);
    /* 00409510: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409511: mov ebp, esp */ r_ebp = r_esp;
    /* 00409513: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00409514: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00409517: mov esp, ebp */ r_esp = r_ebp;
    /* 00409519: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040951a: ret 4 */ FN_RET(0x00409510); r_esp += 8; return;
}

void f_00409850(void) /* ??0_AFX_OLE_STATE@@QAE@XZ_1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00409850);
    /* 00409850: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409851: mov ebp, esp */ r_ebp = r_esp;
    /* 00409853: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00409854: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00409857: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040985a: call 0x5cb4b0 */ r_esp -= 4; W32(r_esp, 0x40985fu); f_005cb4b0();
    /* 0040985f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00409862: mov dword ptr [eax], 0x6b365c */ W32((u32)(r_eax), 0x6b365cu);
    /* 00409868: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040986b: mov esp, ebp */ r_esp = r_ebp;
    /* 0040986d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040986e: ret  */ FN_RET(0x00409850); r_esp += 4; return;
}

void f_00409870(void) /* ??1_AFX_OLE_STATE@@UAE@XZ_1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00409870);
    /* 00409870: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409871: mov ebp, esp */ r_ebp = r_esp;
    /* 00409873: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00409874: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00409877: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040987a: mov dword ptr [eax], 0x6b365c */ W32((u32)(r_eax), 0x6b365cu);
    /* 00409880: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00409883: call 0x5cb590 */ r_esp -= 4; W32(r_esp, 0x409888u); f_005cb590();
    /* 00409888: mov esp, ebp */ r_esp = r_ebp;
    /* 0040988a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040988b: ret  */ FN_RET(0x00409870); r_esp += 4; return;
}

void f_00409ff0(void) /* ??_G_com_error@@UAEPAXI@Z_9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00409ff0);
    /* 00409ff0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409ff1: mov ebp, esp */ r_ebp = r_esp;
    /* 00409ff3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00409ff4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00409ff7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00409ffa: call 0x4076d0 */ r_esp -= 4; W32(r_esp, 0x409fffu); f_004076d0();
    /* 00409fff: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040a002: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0040a005: je 0x40a013 */ if (fZ) goto L_0040a013;
L_0040a007:; BB(0x0040a007);
    /* 0040a007: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040a00a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040a00b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x40a010u); f_00686cae();
    /* 0040a010: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0040a013:; BB(0x0040a013);
    /* 0040a013: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040a016: mov esp, ebp */ r_esp = r_ebp;
    /* 0040a018: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040a019: ret 4 */ FN_RET(0x00409ff0); r_esp += 8; return;
}

void f_0040a040(void) /* ??_G_com_error@@UAEPAXI@Z_10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040a040);
    /* 0040a040: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040a041: mov ebp, esp */ r_ebp = r_esp;
    /* 0040a043: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040a044: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0040a047: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040a04a: call 0x409870 */ r_esp -= 4; W32(r_esp, 0x40a04fu); f_00409870();
    /* 0040a04f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040a052: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0040a055: je 0x40a063 */ if (fZ) goto L_0040a063;
L_0040a057:; BB(0x0040a057);
    /* 0040a057: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040a05a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040a05b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x40a060u); f_00686cae();
    /* 0040a060: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0040a063:; BB(0x0040a063);
    /* 0040a063: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040a066: mov esp, ebp */ r_esp = r_ebp;
    /* 0040a068: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040a069: ret 4 */ FN_RET(0x0040a040); r_esp += 8; return;
}

void f_0040a070(void) /* ??0_AFX_OLE_STATE@@QAE@XZ_2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040a070);
    /* 0040a070: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040a071: mov ebp, esp */ r_ebp = r_esp;
    /* 0040a073: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040a074: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0040a077: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040a07a: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x40a07fu); f_005e9e20();
    /* 0040a07f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040a082: mov dword ptr [eax], 0x6b373c */ W32((u32)(r_eax), 0x6b373cu);
    /* 0040a088: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040a08b: mov esp, ebp */ r_esp = r_ebp;
    /* 0040a08d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040a08e: ret  */ FN_RET(0x0040a070); r_esp += 4; return;
}

void f_0040a090(void) /* ??1_AFX_OLE_STATE@@UAE@XZ_2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040a090);
    /* 0040a090: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040a091: mov ebp, esp */ r_ebp = r_esp;
    /* 0040a093: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040a094: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0040a097: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040a09a: mov dword ptr [eax], 0x6b373c */ W32((u32)(r_eax), 0x6b373cu);
    /* 0040a0a0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040a0a3: call 0x5e9e40 */ r_esp -= 4; W32(r_esp, 0x40a0a8u); f_005e9e40();
    /* 0040a0a8: mov esp, ebp */ r_esp = r_ebp;
    /* 0040a0aa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040a0ab: ret  */ FN_RET(0x0040a090); r_esp += 4; return;
}

void f_0040c3f0(void) /* ??_G_com_error@@UAEPAXI@Z_11 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040c3f0);
    /* 0040c3f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040c3f1: mov ebp, esp */ r_ebp = r_esp;
    /* 0040c3f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040c3f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0040c3f7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040c3fa: call 0x40a090 */ r_esp -= 4; W32(r_esp, 0x40c3ffu); f_0040a090();
    /* 0040c3ff: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040c402: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0040c405: je 0x40c413 */ if (fZ) goto L_0040c413;
L_0040c407:; BB(0x0040c407);
    /* 0040c407: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040c40a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040c40b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x40c410u); f_00686cae();
    /* 0040c410: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0040c413:; BB(0x0040c413);
    /* 0040c413: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040c416: mov esp, ebp */ r_esp = r_ebp;
    /* 0040c418: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040c419: ret 4 */ FN_RET(0x0040c3f0); r_esp += 8; return;
}

void f_0040fb40(void) /* ?SetAtGrow@?$CTypedPtrArray@VCObArray@@PAVCBitmap@@@@QAEXHPAVCBitmap@@@Z_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040fb40);
    /* 0040fb40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040fb41: mov ebp, esp */ r_ebp = r_esp;
    /* 0040fb43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040fb44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0040fb47: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0040fb4a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040fb4b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0040fb4e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040fb4f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040fb52: call 0x40f4a0 */ r_esp -= 4; W32(r_esp, 0x40fb57u); f_0040f4a0();
    /* 0040fb57: mov esp, ebp */ r_esp = r_ebp;
    /* 0040fb59: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040fb5a: ret 8 */ FN_RET(0x0040fb40); r_esp += 12; return;
}

void f_0040fc00(void) /* ??1CExpandoObject@@UAE@XZ_2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040fc00);
    /* 0040fc00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040fc01: mov ebp, esp */ r_ebp = r_esp;
    /* 0040fc03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040fc04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0040fc07: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040fc0a: mov dword ptr [eax], 0x6b39f4 */ W32((u32)(r_eax), 0x6b39f4u);
    /* 0040fc10: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040fc13: call 0x5f4ad0 */ r_esp -= 4; W32(r_esp, 0x40fc18u); f_005f4ad0();
    /* 0040fc18: mov esp, ebp */ r_esp = r_ebp;
    /* 0040fc1a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040fc1b: ret  */ FN_RET(0x0040fc00); r_esp += 4; return;
}

void f_00410010(void) /* ??1CExpandoObject@@UAE@XZ_3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00410010);
    /* 00410010: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00410011: mov ebp, esp */ r_ebp = r_esp;
    /* 00410013: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00410014: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00410017: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041001a: mov dword ptr [eax], 0x6b3aa8 */ W32((u32)(r_eax), 0x6b3aa8u);
    /* 00410020: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00410023: call 0x5fc150 */ r_esp -= 4; W32(r_esp, 0x410028u); f_005fc150();
    /* 00410028: mov esp, ebp */ r_esp = r_ebp;
    /* 0041002a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041002b: ret  */ FN_RET(0x00410010); r_esp += 4; return;
}

void f_00411560(void) /* ??1CExpandoObject@@UAE@XZ_4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00411560);
    /* 00411560: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00411561: mov ebp, esp */ r_ebp = r_esp;
    /* 00411563: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00411564: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00411567: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041156a: mov dword ptr [eax], 0x6b3b5c */ W32((u32)(r_eax), 0x6b3b5cu);
    /* 00411570: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00411573: call 0x5f7260 */ r_esp -= 4; W32(r_esp, 0x411578u); f_005f7260();
    /* 00411578: mov esp, ebp */ r_esp = r_ebp;
    /* 0041157a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041157b: ret  */ FN_RET(0x00411560); r_esp += 4; return;
}

void f_00411790(void) /* ??1CExpandoObject@@UAE@XZ_5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00411790);
    /* 00411790: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00411791: mov ebp, esp */ r_ebp = r_esp;
    /* 00411793: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00411794: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00411797: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041179a: mov dword ptr [eax], 0x6b3bf4 */ W32((u32)(r_eax), 0x6b3bf4u);
    /* 004117a0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004117a3: call 0x5f7260 */ r_esp -= 4; W32(r_esp, 0x4117a8u); f_005f7260();
    /* 004117a8: mov esp, ebp */ r_esp = r_ebp;
    /* 004117aa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004117ab: ret  */ FN_RET(0x00411790); r_esp += 4; return;
}

void f_00411da0(void) /* ??1CExpandoObject@@UAE@XZ_6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00411da0);
    /* 00411da0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00411da1: mov ebp, esp */ r_ebp = r_esp;
    /* 00411da3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00411da4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00411da7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00411daa: mov dword ptr [eax], 0x6b3cbc */ W32((u32)(r_eax), 0x6b3cbcu);
    /* 00411db0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00411db3: call 0x5f7260 */ r_esp -= 4; W32(r_esp, 0x411db8u); f_005f7260();
    /* 00411db8: mov esp, ebp */ r_esp = r_ebp;
    /* 00411dba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00411dbb: ret  */ FN_RET(0x00411da0); r_esp += 4; return;
}

void f_004120d0(void) /* ??_G_com_error@@UAEPAXI@Z_12 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004120d0);
    /* 004120d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004120d1: mov ebp, esp */ r_ebp = r_esp;
    /* 004120d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004120d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004120d7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004120da: call 0x40c4f0 */ r_esp -= 4; W32(r_esp, 0x4120dfu); f_0040c4f0();
    /* 004120df: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004120e2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 004120e5: je 0x4120f3 */ if (fZ) goto L_004120f3;
L_004120e7:; BB(0x004120e7);
    /* 004120e7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004120ea: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004120eb: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x4120f0u); f_00686cae();
    /* 004120f0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004120f3:; BB(0x004120f3);
    /* 004120f3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004120f6: mov esp, ebp */ r_esp = r_ebp;
    /* 004120f8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004120f9: ret 4 */ FN_RET(0x004120d0); r_esp += 8; return;
}

void f_00412100(void) /* ??_G_com_error@@UAEPAXI@Z_13 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00412100);
    /* 00412100: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00412101: mov ebp, esp */ r_ebp = r_esp;
    /* 00412103: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00412104: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00412107: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041210a: call 0x40dd20 */ r_esp -= 4; W32(r_esp, 0x41210fu); f_0040dd20();
    /* 0041210f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00412112: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00412115: je 0x412123 */ if (fZ) goto L_00412123;
L_00412117:; BB(0x00412117);
    /* 00412117: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041211a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041211b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x412120u); f_00686cae();
    /* 00412120: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00412123:; BB(0x00412123);
    /* 00412123: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00412126: mov esp, ebp */ r_esp = r_ebp;
    /* 00412128: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00412129: ret 4 */ FN_RET(0x00412100); r_esp += 8; return;
}

void f_00412140(void) /* ??_G_com_error@@UAEPAXI@Z_14 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00412140);
    /* 00412140: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00412141: mov ebp, esp */ r_ebp = r_esp;
    /* 00412143: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00412144: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00412147: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041214a: call 0x40ed10 */ r_esp -= 4; W32(r_esp, 0x41214fu); f_0040ed10();
    /* 0041214f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00412152: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00412155: je 0x412163 */ if (fZ) goto L_00412163;
L_00412157:; BB(0x00412157);
    /* 00412157: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041215a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041215b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x412160u); f_00686cae();
    /* 00412160: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00412163:; BB(0x00412163);
    /* 00412163: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00412166: mov esp, ebp */ r_esp = r_ebp;
    /* 00412168: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00412169: ret 4 */ FN_RET(0x00412140); r_esp += 8; return;
}

void f_00412170(void) /* ??_G_com_error@@UAEPAXI@Z_15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00412170);
    /* 00412170: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00412171: mov ebp, esp */ r_ebp = r_esp;
    /* 00412173: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00412174: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00412177: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041217a: call 0x40fc00 */ r_esp -= 4; W32(r_esp, 0x41217fu); f_0040fc00();
    /* 0041217f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00412182: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00412185: je 0x412193 */ if (fZ) goto L_00412193;
L_00412187:; BB(0x00412187);
    /* 00412187: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041218a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041218b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x412190u); f_00686cae();
    /* 00412190: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00412193:; BB(0x00412193);
    /* 00412193: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00412196: mov esp, ebp */ r_esp = r_ebp;
    /* 00412198: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00412199: ret 4 */ FN_RET(0x00412170); r_esp += 8; return;
}

void f_004121a0(void) /* ??_G_com_error@@UAEPAXI@Z_16 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004121a0);
    /* 004121a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004121a1: mov ebp, esp */ r_ebp = r_esp;
    /* 004121a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004121a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004121a7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004121aa: call 0x410010 */ r_esp -= 4; W32(r_esp, 0x4121afu); f_00410010();
    /* 004121af: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004121b2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 004121b5: je 0x4121c3 */ if (fZ) goto L_004121c3;
L_004121b7:; BB(0x004121b7);
    /* 004121b7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004121ba: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004121bb: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x4121c0u); f_00686cae();
    /* 004121c0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004121c3:; BB(0x004121c3);
    /* 004121c3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004121c6: mov esp, ebp */ r_esp = r_ebp;
    /* 004121c8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004121c9: ret 4 */ FN_RET(0x004121a0); r_esp += 8; return;
}

void f_004121d0(void) /* ??_G_com_error@@UAEPAXI@Z_17 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004121d0);
    /* 004121d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004121d1: mov ebp, esp */ r_ebp = r_esp;
    /* 004121d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004121d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004121d7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004121da: call 0x411560 */ r_esp -= 4; W32(r_esp, 0x4121dfu); f_00411560();
    /* 004121df: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004121e2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 004121e5: je 0x4121f3 */ if (fZ) goto L_004121f3;
L_004121e7:; BB(0x004121e7);
    /* 004121e7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004121ea: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004121eb: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x4121f0u); f_00686cae();
    /* 004121f0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004121f3:; BB(0x004121f3);
    /* 004121f3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004121f6: mov esp, ebp */ r_esp = r_ebp;
    /* 004121f8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004121f9: ret 4 */ FN_RET(0x004121d0); r_esp += 8; return;
}

void f_00412200(void) /* ??_G_com_error@@UAEPAXI@Z_18 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00412200);
    /* 00412200: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00412201: mov ebp, esp */ r_ebp = r_esp;
    /* 00412203: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00412204: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00412207: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041220a: call 0x411790 */ r_esp -= 4; W32(r_esp, 0x41220fu); f_00411790();
    /* 0041220f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00412212: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00412215: je 0x412223 */ if (fZ) goto L_00412223;
L_00412217:; BB(0x00412217);
    /* 00412217: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041221a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041221b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x412220u); f_00686cae();
    /* 00412220: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00412223:; BB(0x00412223);
    /* 00412223: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00412226: mov esp, ebp */ r_esp = r_ebp;
    /* 00412228: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00412229: ret 4 */ FN_RET(0x00412200); r_esp += 8; return;
}

void f_00412230(void) /* ??_G_com_error@@UAEPAXI@Z_19 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00412230);
    /* 00412230: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00412231: mov ebp, esp */ r_ebp = r_esp;
    /* 00412233: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00412234: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00412237: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041223a: call 0x411da0 */ r_esp -= 4; W32(r_esp, 0x41223fu); f_00411da0();
    /* 0041223f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00412242: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00412245: je 0x412253 */ if (fZ) goto L_00412253;
L_00412247:; BB(0x00412247);
    /* 00412247: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041224a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041224b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x412250u); f_00686cae();
    /* 00412250: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00412253:; BB(0x00412253);
    /* 00412253: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00412256: mov esp, ebp */ r_esp = r_ebp;
    /* 00412258: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00412259: ret 4 */ FN_RET(0x00412230); r_esp += 8; return;
}

void f_00412260(void) /* ??0_AFX_OLE_STATE@@QAE@XZ_3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00412260);
    /* 00412260: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00412261: mov ebp, esp */ r_ebp = r_esp;
    /* 00412263: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00412264: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00412267: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041226a: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x41226fu); f_005e9e20();
    /* 0041226f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00412272: mov dword ptr [eax], 0x6b3e18 */ W32((u32)(r_eax), 0x6b3e18u);
    /* 00412278: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041227b: mov esp, ebp */ r_esp = r_ebp;
    /* 0041227d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041227e: ret  */ FN_RET(0x00412260); r_esp += 4; return;
}

void f_00412280(void) /* ??1_AFX_OLE_STATE@@UAE@XZ_3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00412280);
    /* 00412280: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00412281: mov ebp, esp */ r_ebp = r_esp;
    /* 00412283: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00412284: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00412287: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041228a: mov dword ptr [eax], 0x6b3e18 */ W32((u32)(r_eax), 0x6b3e18u);
    /* 00412290: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00412293: call 0x5e9e40 */ r_esp -= 4; W32(r_esp, 0x412298u); f_005e9e40();
    /* 00412298: mov esp, ebp */ r_esp = r_ebp;
    /* 0041229a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041229b: ret  */ FN_RET(0x00412280); r_esp += 4; return;
}

void f_00414cb0(void) /* ??_G_com_error@@UAEPAXI@Z_20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00414cb0);
    /* 00414cb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00414cb1: mov ebp, esp */ r_ebp = r_esp;
    /* 00414cb3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00414cb4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00414cb7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00414cba: call 0x412280 */ r_esp -= 4; W32(r_esp, 0x414cbfu); f_00412280();
    /* 00414cbf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00414cc2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00414cc5: je 0x414cd3 */ if (fZ) goto L_00414cd3;
L_00414cc7:; BB(0x00414cc7);
    /* 00414cc7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00414cca: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00414ccb: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x414cd0u); f_00686cae();
    /* 00414cd0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00414cd3:; BB(0x00414cd3);
    /* 00414cd3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00414cd6: mov esp, ebp */ r_esp = r_ebp;
    /* 00414cd8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00414cd9: ret 4 */ FN_RET(0x00414cb0); r_esp += 8; return;
}

void f_004176a0(void) /* ??_G_com_error@@UAEPAXI@Z_21 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004176a0);
    /* 004176a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004176a1: mov ebp, esp */ r_ebp = r_esp;
    /* 004176a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004176a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004176a7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004176aa: call 0x414df0 */ r_esp -= 4; W32(r_esp, 0x4176afu); f_00414df0();
    /* 004176af: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004176b2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 004176b5: je 0x4176c3 */ if (fZ) goto L_004176c3;
L_004176b7:; BB(0x004176b7);
    /* 004176b7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004176ba: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004176bb: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x4176c0u); f_00686cae();
    /* 004176c0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004176c3:; BB(0x004176c3);
    /* 004176c3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004176c6: mov esp, ebp */ r_esp = r_ebp;
    /* 004176c8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004176c9: ret 4 */ FN_RET(0x004176a0); r_esp += 8; return;
}

void f_004177c0(void) /* ??1_Mtx_guard@@QAE@XZ_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004177c0);
    /* 004177c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004177c1: mov ebp, esp */ r_ebp = r_esp;
    /* 004177c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004177c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004177c7: push 0x6b3878 */ { u32 v = 0x6b3878u; r_esp -= 4; W32(r_esp, v); }
    /* 004177cc: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4177d1u); f_00630f40();
    /* 004177d1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004177d4: mov esp, ebp */ r_esp = r_ebp;
    /* 004177d6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004177d7: ret  */ FN_RET(0x004177c0); r_esp += 4; return;
}

void f_00417800(void) /* ?do_always_noconv@?$codecvt@DDU_Mbstatet@@@std@@MBE_NXZ */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00417800);
    /* 00417800: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00417801: mov ebp, esp */ r_ebp = r_esp;
    /* 00417803: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00417804: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00417807: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00417809: mov esp, ebp */ r_esp = r_ebp;
    /* 0041780b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041780c: ret  */ FN_RET(0x00417800); r_esp += 4; return;
}

void f_00417830(void) /* unknown_libname_488 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00417830);
    /* 00417830: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00417831: mov ebp, esp */ r_ebp = r_esp;
    /* 00417833: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00417834: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00417837: mov eax, 4 */ r_eax = 0x4u;
    /* 0041783c: mov esp, ebp */ r_esp = r_ebp;
    /* 0041783e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041783f: ret  */ FN_RET(0x00417830); r_esp += 4; return;
}

void f_00417840(void) /* unknown_libname_489 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00417840);
    /* 00417840: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00417841: mov ebp, esp */ r_ebp = r_esp;
    /* 00417843: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00417844: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00417847: mov eax, 4 */ r_eax = 0x4u;
    /* 0041784c: mov esp, ebp */ r_esp = r_ebp;
    /* 0041784e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041784f: ret  */ FN_RET(0x00417840); r_esp += 4; return;
}

void f_00417af0(void) /* unknown_libname_744 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00417af0);
    /* 00417af0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00417af1: mov ebp, esp */ r_ebp = r_esp;
    /* 00417af3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00417af4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00417af7: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00417af9: mov esp, ebp */ r_esp = r_ebp;
    /* 00417afb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00417afc: ret  */ FN_RET(0x00417af0); r_esp += 4; return;
}

void f_00417b00(void) /* ?GetContextKind@UMSThreadInternalContext@details@Concurrency@@UBE?AW4ContextKind@ContextBase@23@XZ */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00417b00);
    /* 00417b00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00417b01: mov ebp, esp */ r_ebp = r_esp;
    /* 00417b03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00417b04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00417b07: mov eax, 2 */ r_eax = 0x2u;
    /* 00417b0c: mov esp, ebp */ r_esp = r_ebp;
    /* 00417b0e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00417b0f: ret  */ FN_RET(0x00417b00); r_esp += 4; return;
}

void f_00418180(void) /* ?do_always_noconv@?$codecvt@DDU_Mbstatet@@@std@@MBE_NXZ_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00418180);
    /* 00418180: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00418181: mov ebp, esp */ r_ebp = r_esp;
    /* 00418183: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00418184: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00418187: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00418189: mov esp, ebp */ r_esp = r_ebp;
    /* 0041818b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041818c: ret  */ FN_RET(0x00418180); r_esp += 4; return;
}

void f_00418cc2(void) /* _WinMain@16_0_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00418cc2);
L_00418cc2:; BB(0x00418cc2);
    /* 00418cc2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00418cc5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00418cc8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00418ccb: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00418ccf: jge 0x418d59 */ if ((fS==fO)) goto L_00418d59;
L_00418cd5:; BB(0x00418cd5);
    /* 00418cd5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00418cd8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00418cd9: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x418cdeu); f_005dcb00();
    /* 00418cde: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00418ce1: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00418ce4: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00418ce7: mov al, byte ptr [edx + 0x4a0] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x4a0u))) & 0xffu);
    /* 00418ced: mov byte ptr [ebp - 0x11], al */ W8((u32)(r_ebp+0xffffffefu), (u8)r_eax);
    /* 00418cf0: movzx ecx, byte ptr [ebp - 0x11] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffefu));
    /* 00418cf4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00418cf6: je 0x418d54 */ if (fZ) goto L_00418d54;
L_00418cf8:; BB(0x00418cf8);
    /* 00418cf8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00418cfb: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00418cfe: mov ecx, dword ptr [eax + edx*4 + 0x468] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x468u));
    /* 00418d05: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00418d08: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00418d0b: shl edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00418d0e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00418d11: lea ecx, [eax + edx + 0x48] */ r_ecx = (u32)(r_eax+r_edx+0x48u);
    /* 00418d15: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00418d17: shl edx, 3 */ { u32 c = (3u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00418d1a: mov eax, dword ptr [ecx + edx] */ r_eax = R32((u32)(r_ecx+r_edx));
    /* 00418d1d: mov ecx, dword ptr [ecx + edx + 4] */ r_ecx = R32((u32)(r_ecx+r_edx+0x4u));
    /* 00418d21: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00418d24: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00418d27: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00418d2a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00418d2b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00418d2e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00418d2f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00418d32: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00418d33: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x418d38u); f_005dcb00();
    /* 00418d38: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00418d3b: mov ecx, eax */ r_ecx = r_eax;
    /* 00418d3d: call 0x5d5cf0 */ r_esp -= 4; W32(r_esp, 0x418d42u); f_005d5cf0();
    /* 00418d42: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00418d45: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00418d48: mov ecx, dword ptr [eax + edx*4 + 0x468] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x468u));
    /* 00418d4f: call 0x5cb9b0 */ r_esp -= 4; W32(r_esp, 0x418d54u); f_005cb9b0();
L_00418d54:; BB(0x00418d54);
    /* 00418d54: jmp 0x418cc2 */ goto L_00418cc2;
L_00418d59:; BB(0x00418d59);
    /* 00418d59: mov esp, ebp */ r_esp = r_ebp;
    /* 00418d5b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00418d5c: ret  */ FN_RET(0x00418cc2); r_esp += 4; return;
}

void f_00418d54(void) /* _WinMain@16_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00418d54);
    /* 00418d54: jmp 0x418cc2 */ f_00418cc2(); return;
}

void f_0041a810(void) /* ?Exit@CSourceStream@@QAEJXZ_1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041a810);
    /* 0041a810: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041a811: mov ebp, esp */ r_ebp = r_esp;
    /* 0041a813: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041a814: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0041a817: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0041a819: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041a81c: call 0x41a830 */ r_esp -= 4; W32(r_esp, 0x41a821u); f_0041a830();
    /* 0041a821: mov esp, ebp */ r_esp = r_ebp;
    /* 0041a823: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041a824: ret  */ FN_RET(0x0041a810); r_esp += 4; return;
}

void f_0041d860(void) /* ??0_AFX_OLE_STATE@@QAE@XZ_4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041d860);
    /* 0041d860: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041d861: mov ebp, esp */ r_ebp = r_esp;
    /* 0041d863: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041d864: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0041d867: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041d86a: call 0x5cb4b0 */ r_esp -= 4; W32(r_esp, 0x41d86fu); f_005cb4b0();
    /* 0041d86f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041d872: mov dword ptr [eax], 0x6b5a2c */ W32((u32)(r_eax), 0x6b5a2cu);
    /* 0041d878: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041d87b: mov esp, ebp */ r_esp = r_ebp;
    /* 0041d87d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041d87e: ret  */ FN_RET(0x0041d860); r_esp += 4; return;
}

void f_0041d880(void) /* ??1_AFX_OLE_STATE@@UAE@XZ_4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041d880);
    /* 0041d880: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041d881: mov ebp, esp */ r_ebp = r_esp;
    /* 0041d883: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041d884: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0041d887: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041d88a: mov dword ptr [eax], 0x6b5a2c */ W32((u32)(r_eax), 0x6b5a2cu);
    /* 0041d890: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041d893: call 0x5cb590 */ r_esp -= 4; W32(r_esp, 0x41d898u); f_005cb590();
    /* 0041d898: mov esp, ebp */ r_esp = r_ebp;
    /* 0041d89a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041d89b: ret  */ FN_RET(0x0041d880); r_esp += 4; return;
}

void f_0041dca0(void) /* ??_G_com_error@@UAEPAXI@Z_22 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041dca0);
    /* 0041dca0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041dca1: mov ebp, esp */ r_ebp = r_esp;
    /* 0041dca3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041dca4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0041dca7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041dcaa: call 0x418320 */ r_esp -= 4; W32(r_esp, 0x41dcafu); f_00418320();
    /* 0041dcaf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041dcb2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0041dcb5: je 0x41dcc3 */ if (fZ) goto L_0041dcc3;
L_0041dcb7:; BB(0x0041dcb7);
    /* 0041dcb7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041dcba: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041dcbb: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x41dcc0u); f_00686cae();
    /* 0041dcc0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0041dcc3:; BB(0x0041dcc3);
    /* 0041dcc3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041dcc6: mov esp, ebp */ r_esp = r_ebp;
    /* 0041dcc8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041dcc9: ret 4 */ FN_RET(0x0041dca0); r_esp += 8; return;
}

void f_0041dcd0(void) /* ??_G_com_error@@UAEPAXI@Z_23 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041dcd0);
    /* 0041dcd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041dcd1: mov ebp, esp */ r_ebp = r_esp;
    /* 0041dcd3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041dcd4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0041dcd7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041dcda: call 0x41d880 */ r_esp -= 4; W32(r_esp, 0x41dcdfu); f_0041d880();
    /* 0041dcdf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041dce2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0041dce5: je 0x41dcf3 */ if (fZ) goto L_0041dcf3;
L_0041dce7:; BB(0x0041dce7);
    /* 0041dce7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041dcea: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041dceb: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x41dcf0u); f_00686cae();
    /* 0041dcf0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0041dcf3:; BB(0x0041dcf3);
    /* 0041dcf3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041dcf6: mov esp, ebp */ r_esp = r_ebp;
    /* 0041dcf8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041dcf9: ret 4 */ FN_RET(0x0041dcd0); r_esp += 8; return;
}

void f_0041dd00(void) /* ??0_AFX_OLE_STATE@@QAE@XZ_5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041dd00);
    /* 0041dd00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041dd01: mov ebp, esp */ r_ebp = r_esp;
    /* 0041dd03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041dd04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0041dd07: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041dd0a: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x41dd0fu); f_005e9e20();
    /* 0041dd0f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041dd12: mov dword ptr [eax], 0x6b5af8 */ W32((u32)(r_eax), 0x6b5af8u);
    /* 0041dd18: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041dd1b: mov esp, ebp */ r_esp = r_ebp;
    /* 0041dd1d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041dd1e: ret  */ FN_RET(0x0041dd00); r_esp += 4; return;
}

void f_0041dd20(void) /* ??1_AFX_OLE_STATE@@UAE@XZ_5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041dd20);
    /* 0041dd20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041dd21: mov ebp, esp */ r_ebp = r_esp;
    /* 0041dd23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041dd24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0041dd27: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041dd2a: mov dword ptr [eax], 0x6b5af8 */ W32((u32)(r_eax), 0x6b5af8u);
    /* 0041dd30: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041dd33: call 0x5e9e40 */ r_esp -= 4; W32(r_esp, 0x41dd38u); f_005e9e40();
    /* 0041dd38: mov esp, ebp */ r_esp = r_ebp;
    /* 0041dd3a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041dd3b: ret  */ FN_RET(0x0041dd20); r_esp += 4; return;
}

void f_0041e540(void) /* ??_G_com_error@@UAEPAXI@Z_24 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041e540);
    /* 0041e540: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041e541: mov ebp, esp */ r_ebp = r_esp;
    /* 0041e543: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041e544: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0041e547: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041e54a: call 0x41dd20 */ r_esp -= 4; W32(r_esp, 0x41e54fu); f_0041dd20();
    /* 0041e54f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041e552: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0041e555: je 0x41e563 */ if (fZ) goto L_0041e563;
L_0041e557:; BB(0x0041e557);
    /* 0041e557: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041e55a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041e55b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x41e560u); f_00686cae();
    /* 0041e560: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0041e563:; BB(0x0041e563);
    /* 0041e563: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041e566: mov esp, ebp */ r_esp = r_ebp;
    /* 0041e568: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041e569: ret 4 */ FN_RET(0x0041e540); r_esp += 8; return;
}

void f_00420950(void) /* ??0_AFX_OLE_STATE@@QAE@XZ_6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00420950);
    /* 00420950: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00420951: mov ebp, esp */ r_ebp = r_esp;
    /* 00420953: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00420954: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00420957: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042095a: call 0x5cc1d0 */ r_esp -= 4; W32(r_esp, 0x42095fu); f_005cc1d0();
    /* 0042095f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00420962: mov dword ptr [eax], 0x6b5ddc */ W32((u32)(r_eax), 0x6b5ddcu);
    /* 00420968: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042096b: mov esp, ebp */ r_esp = r_ebp;
    /* 0042096d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042096e: ret  */ FN_RET(0x00420950); r_esp += 4; return;
}

void f_00420970(void) /* ??1_AFX_OLE_STATE@@UAE@XZ_6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00420970);
    /* 00420970: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00420971: mov ebp, esp */ r_ebp = r_esp;
    /* 00420973: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00420974: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00420977: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042097a: mov dword ptr [eax], 0x6b5ddc */ W32((u32)(r_eax), 0x6b5ddcu);
    /* 00420980: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00420983: call 0x5cc230 */ r_esp -= 4; W32(r_esp, 0x420988u); f_005cc230();
    /* 00420988: mov esp, ebp */ r_esp = r_ebp;
    /* 0042098a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042098b: ret  */ FN_RET(0x00420970); r_esp += 4; return;
}

void f_00420b20(void) /* ?SetAtGrow@?$CTypedPtrArray@VCObArray@@PAVCBitmap@@@@QAEXHPAVCBitmap@@@Z_1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00420b20);
    /* 00420b20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00420b21: mov ebp, esp */ r_ebp = r_esp;
    /* 00420b23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00420b24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00420b27: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00420b2a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00420b2b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00420b2e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00420b2f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00420b32: call 0x4209a0 */ r_esp -= 4; W32(r_esp, 0x420b37u); f_004209a0();
    /* 00420b37: mov esp, ebp */ r_esp = r_ebp;
    /* 00420b39: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00420b3a: ret 8 */ FN_RET(0x00420b20); r_esp += 12; return;
}

void f_00421430(void) /* ??1CExpandoObject@@UAE@XZ_7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00421430);
    /* 00421430: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00421431: mov ebp, esp */ r_ebp = r_esp;
    /* 00421433: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00421434: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00421437: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042143a: mov dword ptr [eax], 0x6b5fa0 */ W32((u32)(r_eax), 0x6b5fa0u);
    /* 00421440: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00421443: call 0x5fc150 */ r_esp -= 4; W32(r_esp, 0x421448u); f_005fc150();
    /* 00421448: mov esp, ebp */ r_esp = r_ebp;
    /* 0042144a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042144b: ret  */ FN_RET(0x00421430); r_esp += 4; return;
}

void f_00421f00(void) /* ??1CExpandoObject@@UAE@XZ_8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00421f00);
    /* 00421f00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00421f01: mov ebp, esp */ r_ebp = r_esp;
    /* 00421f03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00421f04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00421f07: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00421f0a: mov dword ptr [eax], 0x6b6044 */ W32((u32)(r_eax), 0x6b6044u);
    /* 00421f10: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00421f13: call 0x5f7260 */ r_esp -= 4; W32(r_esp, 0x421f18u); f_005f7260();
    /* 00421f18: mov esp, ebp */ r_esp = r_ebp;
    /* 00421f1a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00421f1b: ret  */ FN_RET(0x00421f00); r_esp += 4; return;
}

void f_00422400(void) /* ??_G_com_error@@UAEPAXI@Z_25 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00422400);
    /* 00422400: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00422401: mov ebp, esp */ r_ebp = r_esp;
    /* 00422403: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00422404: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00422407: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042240a: call 0x41e660 */ r_esp -= 4; W32(r_esp, 0x42240fu); f_0041e660();
    /* 0042240f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00422412: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00422415: je 0x422423 */ if (fZ) goto L_00422423;
L_00422417:; BB(0x00422417);
    /* 00422417: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042241a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042241b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x422420u); f_00686cae();
    /* 00422420: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00422423:; BB(0x00422423);
    /* 00422423: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00422426: mov esp, ebp */ r_esp = r_ebp;
    /* 00422428: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00422429: ret 4 */ FN_RET(0x00422400); r_esp += 8; return;
}

void f_00422430(void) /* ??_G_com_error@@UAEPAXI@Z_26 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00422430);
    /* 00422430: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00422431: mov ebp, esp */ r_ebp = r_esp;
    /* 00422433: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00422434: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00422437: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042243a: call 0x41fde0 */ r_esp -= 4; W32(r_esp, 0x42243fu); f_0041fde0();
    /* 0042243f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00422442: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00422445: je 0x422453 */ if (fZ) goto L_00422453;
L_00422447:; BB(0x00422447);
    /* 00422447: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042244a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042244b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x422450u); f_00686cae();
    /* 00422450: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00422453:; BB(0x00422453);
    /* 00422453: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00422456: mov esp, ebp */ r_esp = r_ebp;
    /* 00422458: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00422459: ret 4 */ FN_RET(0x00422430); r_esp += 8; return;
}

void f_00422460(void) /* ??_G_com_error@@UAEPAXI@Z_27 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00422460);
    /* 00422460: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00422461: mov ebp, esp */ r_ebp = r_esp;
    /* 00422463: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00422464: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00422467: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042246a: call 0x420970 */ r_esp -= 4; W32(r_esp, 0x42246fu); f_00420970();
    /* 0042246f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00422472: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00422475: je 0x422483 */ if (fZ) goto L_00422483;
L_00422477:; BB(0x00422477);
    /* 00422477: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042247a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042247b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x422480u); f_00686cae();
    /* 00422480: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00422483:; BB(0x00422483);
    /* 00422483: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00422486: mov esp, ebp */ r_esp = r_ebp;
    /* 00422488: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00422489: ret 4 */ FN_RET(0x00422460); r_esp += 8; return;
}

void f_00422490(void) /* ??_G_com_error@@UAEPAXI@Z_28 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00422490);
    /* 00422490: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00422491: mov ebp, esp */ r_ebp = r_esp;
    /* 00422493: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00422494: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00422497: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042249a: call 0x420c40 */ r_esp -= 4; W32(r_esp, 0x42249fu); f_00420c40();
    /* 0042249f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004224a2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 004224a5: je 0x4224b3 */ if (fZ) goto L_004224b3;
L_004224a7:; BB(0x004224a7);
    /* 004224a7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004224aa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004224ab: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x4224b0u); f_00686cae();
    /* 004224b0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004224b3:; BB(0x004224b3);
    /* 004224b3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004224b6: mov esp, ebp */ r_esp = r_ebp;
    /* 004224b8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004224b9: ret 4 */ FN_RET(0x00422490); r_esp += 8; return;
}

void f_004224c0(void) /* ??_G_com_error@@UAEPAXI@Z_29 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004224c0);
    /* 004224c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004224c1: mov ebp, esp */ r_ebp = r_esp;
    /* 004224c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004224c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004224c7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004224ca: call 0x421430 */ r_esp -= 4; W32(r_esp, 0x4224cfu); f_00421430();
    /* 004224cf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004224d2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 004224d5: je 0x4224e3 */ if (fZ) goto L_004224e3;
L_004224d7:; BB(0x004224d7);
    /* 004224d7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004224da: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004224db: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x4224e0u); f_00686cae();
    /* 004224e0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004224e3:; BB(0x004224e3);
    /* 004224e3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004224e6: mov esp, ebp */ r_esp = r_ebp;
    /* 004224e8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004224e9: ret 4 */ FN_RET(0x004224c0); r_esp += 8; return;
}

void f_004224f0(void) /* ??_G_com_error@@UAEPAXI@Z_30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004224f0);
    /* 004224f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004224f1: mov ebp, esp */ r_ebp = r_esp;
    /* 004224f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004224f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004224f7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004224fa: call 0x421f00 */ r_esp -= 4; W32(r_esp, 0x4224ffu); f_00421f00();
    /* 004224ff: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00422502: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00422505: je 0x422513 */ if (fZ) goto L_00422513;
L_00422507:; BB(0x00422507);
    /* 00422507: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042250a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042250b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x422510u); f_00686cae();
    /* 00422510: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00422513:; BB(0x00422513);
    /* 00422513: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00422516: mov esp, ebp */ r_esp = r_ebp;
    /* 00422518: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00422519: ret 4 */ FN_RET(0x004224f0); r_esp += 8; return;
}

void f_00422520(void) /* ??0_AFX_OLE_STATE@@QAE@XZ_7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00422520);
    /* 00422520: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00422521: mov ebp, esp */ r_ebp = r_esp;
    /* 00422523: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00422524: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00422527: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042252a: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x42252fu); f_005e9e20();
    /* 0042252f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00422532: mov dword ptr [eax], 0x6b60d8 */ W32((u32)(r_eax), 0x6b60d8u);
    /* 00422538: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042253b: mov esp, ebp */ r_esp = r_ebp;
    /* 0042253d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042253e: ret  */ FN_RET(0x00422520); r_esp += 4; return;
}

void f_00422540(void) /* ??1_AFX_OLE_STATE@@UAE@XZ_7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00422540);
    /* 00422540: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00422541: mov ebp, esp */ r_ebp = r_esp;
    /* 00422543: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00422544: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00422547: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042254a: mov dword ptr [eax], 0x6b60d8 */ W32((u32)(r_eax), 0x6b60d8u);
    /* 00422550: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00422553: call 0x5e9e40 */ r_esp -= 4; W32(r_esp, 0x422558u); f_005e9e40();
    /* 00422558: mov esp, ebp */ r_esp = r_ebp;
    /* 0042255a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042255b: ret  */ FN_RET(0x00422540); r_esp += 4; return;
}

void f_00423c90(void) /* ??_G_com_error@@UAEPAXI@Z_31 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00423c90);
    /* 00423c90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00423c91: mov ebp, esp */ r_ebp = r_esp;
    /* 00423c93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00423c94: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00423c97: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00423c9a: call 0x422540 */ r_esp -= 4; W32(r_esp, 0x423c9fu); f_00422540();
    /* 00423c9f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00423ca2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00423ca5: je 0x423cb3 */ if (fZ) goto L_00423cb3;
L_00423ca7:; BB(0x00423ca7);
    /* 00423ca7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00423caa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00423cab: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x423cb0u); f_00686cae();
    /* 00423cb0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00423cb3:; BB(0x00423cb3);
    /* 00423cb3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00423cb6: mov esp, ebp */ r_esp = r_ebp;
    /* 00423cb8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00423cb9: ret 4 */ FN_RET(0x00423c90); r_esp += 8; return;
}

void f_004252f0(void) /* ??_G_com_error@@UAEPAXI@Z_32 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004252f0);
    /* 004252f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004252f1: mov ebp, esp */ r_ebp = r_esp;
    /* 004252f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004252f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004252f7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004252fa: call 0x423d60 */ r_esp -= 4; W32(r_esp, 0x4252ffu); f_00423d60();
    /* 004252ff: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00425302: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00425305: je 0x425313 */ if (fZ) goto L_00425313;
L_00425307:; BB(0x00425307);
    /* 00425307: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042530a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042530b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x425310u); f_00686cae();
    /* 00425310: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00425313:; BB(0x00425313);
    /* 00425313: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00425316: mov esp, ebp */ r_esp = r_ebp;
    /* 00425318: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00425319: ret 4 */ FN_RET(0x004252f0); r_esp += 8; return;
}

void f_00425320(void) /* ??_G_com_error@@UAEPAXI@Z_33 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00425320);
    /* 00425320: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00425321: mov ebp, esp */ r_ebp = r_esp;
    /* 00425323: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00425324: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00425327: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042532a: call 0x5ec760 */ r_esp -= 4; W32(r_esp, 0x42532fu); f_005ec760();
    /* 0042532f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00425332: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00425335: je 0x425343 */ if (fZ) goto L_00425343;
L_00425337:; BB(0x00425337);
    /* 00425337: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042533a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042533b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x425340u); f_00686cae();
    /* 00425340: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00425343:; BB(0x00425343);
    /* 00425343: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00425346: mov esp, ebp */ r_esp = r_ebp;
    /* 00425348: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00425349: ret 4 */ FN_RET(0x00425320); r_esp += 8; return;
}

void f_00425440(void) /* ??1_Mtx_guard@@QAE@XZ_1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00425440);
    /* 00425440: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00425441: mov ebp, esp */ r_ebp = r_esp;
    /* 00425443: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00425444: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00425447: push 0x6b671c */ { u32 v = 0x6b671cu; r_esp -= 4; W32(r_esp, v); }
    /* 0042544c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x425451u); f_00630f40();
    /* 00425451: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00425454: mov esp, ebp */ r_esp = r_ebp;
    /* 00425456: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00425457: ret  */ FN_RET(0x00425440); r_esp += 4; return;
}

void f_00425480(void) /* unknown_libname_745 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00425480);
    /* 00425480: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00425481: mov ebp, esp */ r_ebp = r_esp;
    /* 00425483: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00425484: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00425487: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00425489: mov esp, ebp */ r_esp = r_ebp;
    /* 0042548b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042548c: ret  */ FN_RET(0x00425480); r_esp += 4; return;
}

void f_004254b0(void) /* unknown_libname_490 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004254b0);
    /* 004254b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004254b1: mov ebp, esp */ r_ebp = r_esp;
    /* 004254b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004254b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004254b7: mov eax, 4 */ r_eax = 0x4u;
    /* 004254bc: mov esp, ebp */ r_esp = r_ebp;
    /* 004254be: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004254bf: ret  */ FN_RET(0x004254b0); r_esp += 4; return;
}

void f_004254c0(void) /* unknown_libname_491 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004254c0);
    /* 004254c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004254c1: mov ebp, esp */ r_ebp = r_esp;
    /* 004254c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004254c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004254c7: mov eax, 4 */ r_eax = 0x4u;
    /* 004254cc: mov esp, ebp */ r_esp = r_ebp;
    /* 004254ce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004254cf: ret  */ FN_RET(0x004254c0); r_esp += 4; return;
}

void f_00425620(void) /* unknown_libname_746 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00425620);
    /* 00425620: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00425621: mov ebp, esp */ r_ebp = r_esp;
    /* 00425623: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00425624: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00425627: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00425629: mov esp, ebp */ r_esp = r_ebp;
    /* 0042562b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042562c: ret  */ FN_RET(0x00425620); r_esp += 4; return;
}

void f_00425630(void) /* unknown_libname_492 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00425630);
    /* 00425630: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00425631: mov ebp, esp */ r_ebp = r_esp;
    /* 00425633: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00425634: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00425637: mov eax, 3 */ r_eax = 0x3u;
    /* 0042563c: mov esp, ebp */ r_esp = r_ebp;
    /* 0042563e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042563f: ret  */ FN_RET(0x00425630); r_esp += 4; return;
}

void f_00425bd0(void) /* ?do_always_noconv@?$codecvt@DDU_Mbstatet@@@std@@MBE_NXZ_1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00425bd0);
    /* 00425bd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00425bd1: mov ebp, esp */ r_ebp = r_esp;
    /* 00425bd3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00425bd4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00425bd7: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00425bd9: mov esp, ebp */ r_esp = r_ebp;
    /* 00425bdb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00425bdc: ret  */ FN_RET(0x00425bd0); r_esp += 4; return;
}

void f_00427890(void) /* ??0_AFX_OLE_STATE@@QAE@XZ_8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00427890);
    /* 00427890: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00427891: mov ebp, esp */ r_ebp = r_esp;
    /* 00427893: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00427894: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00427897: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042789a: call 0x5cb4b0 */ r_esp -= 4; W32(r_esp, 0x42789fu); f_005cb4b0();
    /* 0042789f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004278a2: mov dword ptr [eax], 0x6b6854 */ W32((u32)(r_eax), 0x6b6854u);
    /* 004278a8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004278ab: mov esp, ebp */ r_esp = r_ebp;
    /* 004278ad: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004278ae: ret  */ FN_RET(0x00427890); r_esp += 4; return;
}

void f_004278b0(void) /* ??1_AFX_OLE_STATE@@UAE@XZ_8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004278b0);
    /* 004278b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004278b1: mov ebp, esp */ r_ebp = r_esp;
    /* 004278b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004278b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004278b7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004278ba: mov dword ptr [eax], 0x6b6854 */ W32((u32)(r_eax), 0x6b6854u);
    /* 004278c0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004278c3: call 0x5cb590 */ r_esp -= 4; W32(r_esp, 0x4278c8u); f_005cb590();
    /* 004278c8: mov esp, ebp */ r_esp = r_ebp;
    /* 004278ca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004278cb: ret  */ FN_RET(0x004278b0); r_esp += 4; return;
}

void f_00427f60(void) /* ??_G_com_error@@UAEPAXI@Z_34 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00427f60);
    /* 00427f60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00427f61: mov ebp, esp */ r_ebp = r_esp;
    /* 00427f63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00427f64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00427f67: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00427f6a: call 0x425c40 */ r_esp -= 4; W32(r_esp, 0x427f6fu); f_00425c40();
    /* 00427f6f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00427f72: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00427f75: je 0x427f83 */ if (fZ) goto L_00427f83;
L_00427f77:; BB(0x00427f77);
    /* 00427f77: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00427f7a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00427f7b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x427f80u); f_00686cae();
    /* 00427f80: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00427f83:; BB(0x00427f83);
    /* 00427f83: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00427f86: mov esp, ebp */ r_esp = r_ebp;
    /* 00427f88: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00427f89: ret 4 */ FN_RET(0x00427f60); r_esp += 8; return;
}

void f_00427f90(void) /* ??_G_com_error@@UAEPAXI@Z_35 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00427f90);
    /* 00427f90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00427f91: mov ebp, esp */ r_ebp = r_esp;
    /* 00427f93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00427f94: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00427f97: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00427f9a: call 0x4278b0 */ r_esp -= 4; W32(r_esp, 0x427f9fu); f_004278b0();
    /* 00427f9f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00427fa2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00427fa5: je 0x427fb3 */ if (fZ) goto L_00427fb3;
L_00427fa7:; BB(0x00427fa7);
    /* 00427fa7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00427faa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00427fab: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x427fb0u); f_00686cae();
    /* 00427fb0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00427fb3:; BB(0x00427fb3);
    /* 00427fb3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00427fb6: mov esp, ebp */ r_esp = r_ebp;
    /* 00427fb8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00427fb9: ret 4 */ FN_RET(0x00427f90); r_esp += 8; return;
}

void f_00427fc0(void) /* ??0_AFX_OLE_STATE@@QAE@XZ_9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00427fc0);
    /* 00427fc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00427fc1: mov ebp, esp */ r_ebp = r_esp;
    /* 00427fc3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00427fc4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00427fc7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00427fca: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x427fcfu); f_005e9e20();
    /* 00427fcf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00427fd2: mov dword ptr [eax], 0x6b6958 */ W32((u32)(r_eax), 0x6b6958u);
    /* 00427fd8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00427fdb: mov esp, ebp */ r_esp = r_ebp;
    /* 00427fdd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00427fde: ret  */ FN_RET(0x00427fc0); r_esp += 4; return;
}

void f_00427fe0(void) /* ??1_AFX_OLE_STATE@@UAE@XZ_9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00427fe0);
    /* 00427fe0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00427fe1: mov ebp, esp */ r_ebp = r_esp;
    /* 00427fe3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00427fe4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00427fe7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00427fea: mov dword ptr [eax], 0x6b6958 */ W32((u32)(r_eax), 0x6b6958u);
    /* 00427ff0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00427ff3: call 0x5e9e40 */ r_esp -= 4; W32(r_esp, 0x427ff8u); f_005e9e40();
    /* 00427ff8: mov esp, ebp */ r_esp = r_ebp;
    /* 00427ffa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00427ffb: ret  */ FN_RET(0x00427fe0); r_esp += 4; return;
}

void f_00428be0(void) /* unknown_libname_747 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00428be0);
    /* 00428be0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00428be1: mov ebp, esp */ r_ebp = r_esp;
    /* 00428be3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00428be4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00428be7: mov esp, ebp */ r_esp = r_ebp;
    /* 00428be9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00428bea: ret 4 */ FN_RET(0x00428be0); r_esp += 8; return;
}

void f_00428bf0(void) /* ??_G_com_error@@UAEPAXI@Z_36 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00428bf0);
    /* 00428bf0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00428bf1: mov ebp, esp */ r_ebp = r_esp;
    /* 00428bf3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00428bf4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00428bf7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00428bfa: call 0x427fe0 */ r_esp -= 4; W32(r_esp, 0x428bffu); f_00427fe0();
    /* 00428bff: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00428c02: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00428c05: je 0x428c13 */ if (fZ) goto L_00428c13;
L_00428c07:; BB(0x00428c07);
    /* 00428c07: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00428c0a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00428c0b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x428c10u); f_00686cae();
    /* 00428c10: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00428c13:; BB(0x00428c13);
    /* 00428c13: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00428c16: mov esp, ebp */ r_esp = r_ebp;
    /* 00428c18: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00428c19: ret 4 */ FN_RET(0x00428bf0); r_esp += 8; return;
}

void f_0042be40(void) /* ??0_AFX_OLE_STATE@@QAE@XZ_10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042be40);
    /* 0042be40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042be41: mov ebp, esp */ r_ebp = r_esp;
    /* 0042be43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042be44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0042be47: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042be4a: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x42be4fu); f_005e9e20();
    /* 0042be4f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042be52: mov dword ptr [eax], 0x6b6b6c */ W32((u32)(r_eax), 0x6b6b6cu);
    /* 0042be58: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042be5b: mov esp, ebp */ r_esp = r_ebp;
    /* 0042be5d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042be5e: ret  */ FN_RET(0x0042be40); r_esp += 4; return;
}

void f_0042be60(void) /* ??1_AFX_OLE_STATE@@UAE@XZ_10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042be60);
    /* 0042be60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042be61: mov ebp, esp */ r_ebp = r_esp;
    /* 0042be63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042be64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0042be67: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042be6a: mov dword ptr [eax], 0x6b6b6c */ W32((u32)(r_eax), 0x6b6b6cu);
    /* 0042be70: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042be73: call 0x5e9e40 */ r_esp -= 4; W32(r_esp, 0x42be78u); f_005e9e40();
    /* 0042be78: mov esp, ebp */ r_esp = r_ebp;
    /* 0042be7a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042be7b: ret  */ FN_RET(0x0042be60); r_esp += 4; return;
}

void f_0042d340(void) /* ??1CExpandoObject@@UAE@XZ_9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042d340);
    /* 0042d340: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042d341: mov ebp, esp */ r_ebp = r_esp;
    /* 0042d343: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042d344: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0042d347: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042d34a: mov dword ptr [eax], 0x6b6ccc */ W32((u32)(r_eax), 0x6b6cccu);
    /* 0042d350: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042d353: call 0x5f5c40 */ r_esp -= 4; W32(r_esp, 0x42d358u); f_005f5c40();
    /* 0042d358: mov esp, ebp */ r_esp = r_ebp;
    /* 0042d35a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042d35b: ret  */ FN_RET(0x0042d340); r_esp += 4; return;
}

void f_0042ef50(void) /* ??_G_com_error@@UAEPAXI@Z_37 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042ef50);
    /* 0042ef50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042ef51: mov ebp, esp */ r_ebp = r_esp;
    /* 0042ef53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042ef54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0042ef57: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042ef5a: call 0x428d20 */ r_esp -= 4; W32(r_esp, 0x42ef5fu); f_00428d20();
    /* 0042ef5f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042ef62: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0042ef65: je 0x42ef73 */ if (fZ) goto L_0042ef73;
L_0042ef67:; BB(0x0042ef67);
    /* 0042ef67: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042ef6a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042ef6b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x42ef70u); f_00686cae();
    /* 0042ef70: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0042ef73:; BB(0x0042ef73);
    /* 0042ef73: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042ef76: mov esp, ebp */ r_esp = r_ebp;
    /* 0042ef78: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042ef79: ret 4 */ FN_RET(0x0042ef50); r_esp += 8; return;
}

void f_0042ef80(void) /* ??_G_com_error@@UAEPAXI@Z_38 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042ef80);
    /* 0042ef80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042ef81: mov ebp, esp */ r_ebp = r_esp;
    /* 0042ef83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042ef84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0042ef87: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042ef8a: call 0x42be60 */ r_esp -= 4; W32(r_esp, 0x42ef8fu); f_0042be60();
    /* 0042ef8f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042ef92: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0042ef95: je 0x42efa3 */ if (fZ) goto L_0042efa3;
L_0042ef97:; BB(0x0042ef97);
    /* 0042ef97: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042ef9a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042ef9b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x42efa0u); f_00686cae();
    /* 0042efa0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0042efa3:; BB(0x0042efa3);
    /* 0042efa3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042efa6: mov esp, ebp */ r_esp = r_ebp;
    /* 0042efa8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042efa9: ret 4 */ FN_RET(0x0042ef80); r_esp += 8; return;
}

void f_0042efb0(void) /* ??_G_com_error@@UAEPAXI@Z_39 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042efb0);
    /* 0042efb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042efb1: mov ebp, esp */ r_ebp = r_esp;
    /* 0042efb3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042efb4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0042efb7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042efba: call 0x42bfe0 */ r_esp -= 4; W32(r_esp, 0x42efbfu); f_0042bfe0();
    /* 0042efbf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042efc2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0042efc5: je 0x42efd3 */ if (fZ) goto L_0042efd3;
L_0042efc7:; BB(0x0042efc7);
    /* 0042efc7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042efca: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042efcb: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x42efd0u); f_00686cae();
    /* 0042efd0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0042efd3:; BB(0x0042efd3);
    /* 0042efd3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042efd6: mov esp, ebp */ r_esp = r_ebp;
    /* 0042efd8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042efd9: ret 4 */ FN_RET(0x0042efb0); r_esp += 8; return;
}

void f_0042efe0(void) /* ??_G_com_error@@UAEPAXI@Z_40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042efe0);
    /* 0042efe0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042efe1: mov ebp, esp */ r_ebp = r_esp;
    /* 0042efe3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042efe4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0042efe7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042efea: call 0x42d340 */ r_esp -= 4; W32(r_esp, 0x42efefu); f_0042d340();
    /* 0042efef: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042eff2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0042eff5: je 0x42f003 */ if (fZ) goto L_0042f003;
L_0042eff7:; BB(0x0042eff7);
    /* 0042eff7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042effa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042effb: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x42f000u); f_00686cae();
    /* 0042f000: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0042f003:; BB(0x0042f003);
    /* 0042f003: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042f006: mov esp, ebp */ r_esp = r_ebp;
    /* 0042f008: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042f009: ret 4 */ FN_RET(0x0042efe0); r_esp += 8; return;
}

void f_0042f010(void) /* ??_G_com_error@@UAEPAXI@Z_41 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042f010);
    /* 0042f010: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042f011: mov ebp, esp */ r_ebp = r_esp;
    /* 0042f013: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042f014: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0042f017: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042f01a: call 0x600e10 */ r_esp -= 4; W32(r_esp, 0x42f01fu); f_00600e10();
    /* 0042f01f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042f022: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0042f025: je 0x42f033 */ if (fZ) goto L_0042f033;
L_0042f027:; BB(0x0042f027);
    /* 0042f027: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042f02a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042f02b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x42f030u); f_00686cae();
    /* 0042f030: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0042f033:; BB(0x0042f033);
    /* 0042f033: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042f036: mov esp, ebp */ r_esp = r_ebp;
    /* 0042f038: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042f039: ret 4 */ FN_RET(0x0042f010); r_esp += 8; return;
}

void f_0042f100(void) /* ??1CExpandoObject@@UAE@XZ_10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042f100);
    /* 0042f100: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042f101: mov ebp, esp */ r_ebp = r_esp;
    /* 0042f103: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042f104: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0042f107: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042f10a: mov dword ptr [eax], 0x6b7350 */ W32((u32)(r_eax), 0x6b7350u);
    /* 0042f110: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042f113: call 0x5e9e40 */ r_esp -= 4; W32(r_esp, 0x42f118u); f_005e9e40();
    /* 0042f118: mov esp, ebp */ r_esp = r_ebp;
    /* 0042f11a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042f11b: ret  */ FN_RET(0x0042f100); r_esp += 4; return;
}

void f_00431150(void) /* ??_G_com_error@@UAEPAXI@Z_42 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00431150);
    /* 00431150: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00431151: mov ebp, esp */ r_ebp = r_esp;
    /* 00431153: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00431154: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00431157: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043115a: call 0x42f100 */ r_esp -= 4; W32(r_esp, 0x43115fu); f_0042f100();
    /* 0043115f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00431162: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00431165: je 0x431173 */ if (fZ) goto L_00431173;
L_00431167:; BB(0x00431167);
    /* 00431167: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043116a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043116b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x431170u); f_00686cae();
    /* 00431170: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00431173:; BB(0x00431173);
    /* 00431173: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00431176: mov esp, ebp */ r_esp = r_ebp;
    /* 00431178: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00431179: ret 4 */ FN_RET(0x00431150); r_esp += 8; return;
}

void f_004337d0(void) /* ??_G_com_error@@UAEPAXI@Z_43 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004337d0);
    /* 004337d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004337d1: mov ebp, esp */ r_ebp = r_esp;
    /* 004337d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004337d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004337d7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004337da: call 0x431d10 */ r_esp -= 4; W32(r_esp, 0x4337dfu); f_00431d10();
    /* 004337df: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004337e2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 004337e5: je 0x4337f3 */ if (fZ) goto L_004337f3;
L_004337e7:; BB(0x004337e7);
    /* 004337e7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004337ea: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004337eb: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x4337f0u); f_00686cae();
    /* 004337f0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004337f3:; BB(0x004337f3);
    /* 004337f3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004337f6: mov esp, ebp */ r_esp = r_ebp;
    /* 004337f8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004337f9: ret 4 */ FN_RET(0x004337d0); r_esp += 8; return;
}

void f_004338f0(void) /* ??1_Mtx_guard@@QAE@XZ_2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004338f0);
    /* 004338f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004338f1: mov ebp, esp */ r_ebp = r_esp;
    /* 004338f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004338f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004338f7: push 0x6b6b0c */ { u32 v = 0x6b6b0cu; r_esp -= 4; W32(r_esp, v); }
    /* 004338fc: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x433901u); f_00630f40();
    /* 00433901: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00433904: mov esp, ebp */ r_esp = r_ebp;
    /* 00433906: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00433907: ret  */ FN_RET(0x004338f0); r_esp += 4; return;
}

void f_00433930(void) /* unknown_libname_748 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00433930);
    /* 00433930: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00433931: mov ebp, esp */ r_ebp = r_esp;
    /* 00433933: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00433934: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00433937: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00433939: mov esp, ebp */ r_esp = r_ebp;
    /* 0043393b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043393c: ret  */ FN_RET(0x00433930); r_esp += 4; return;
}

void f_00433960(void) /* unknown_libname_494 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00433960);
    /* 00433960: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00433961: mov ebp, esp */ r_ebp = r_esp;
    /* 00433963: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00433964: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00433967: mov eax, 4 */ r_eax = 0x4u;
    /* 0043396c: mov esp, ebp */ r_esp = r_ebp;
    /* 0043396e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043396f: ret  */ FN_RET(0x00433960); r_esp += 4; return;
}

void f_00433970(void) /* unknown_libname_495 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00433970);
    /* 00433970: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00433971: mov ebp, esp */ r_ebp = r_esp;
    /* 00433973: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00433974: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00433977: mov eax, 4 */ r_eax = 0x4u;
    /* 0043397c: mov esp, ebp */ r_esp = r_ebp;
    /* 0043397e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043397f: ret  */ FN_RET(0x00433970); r_esp += 4; return;
}

void f_00433b30(void) /* unknown_libname_749 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00433b30);
    /* 00433b30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00433b31: mov ebp, esp */ r_ebp = r_esp;
    /* 00433b33: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00433b34: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00433b37: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00433b39: mov esp, ebp */ r_esp = r_ebp;
    /* 00433b3b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00433b3c: ret  */ FN_RET(0x00433b30); r_esp += 4; return;
}

void f_00433b40(void) /* unknown_libname_496 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00433b40);
    /* 00433b40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00433b41: mov ebp, esp */ r_ebp = r_esp;
    /* 00433b43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00433b44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00433b47: mov eax, 4 */ r_eax = 0x4u;
    /* 00433b4c: mov esp, ebp */ r_esp = r_ebp;
    /* 00433b4e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00433b4f: ret  */ FN_RET(0x00433b40); r_esp += 4; return;
}

void f_004340e0(void) /* ?do_always_noconv@?$codecvt@DDU_Mbstatet@@@std@@MBE_NXZ_2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004340e0);
    /* 004340e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004340e1: mov ebp, esp */ r_ebp = r_esp;
    /* 004340e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004340e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004340e7: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 004340e9: mov esp, ebp */ r_esp = r_ebp;
    /* 004340eb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004340ec: ret  */ FN_RET(0x004340e0); r_esp += 4; return;
}

void f_004340f0(void) /* unknown_libname_497 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004340f0);
    /* 004340f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004340f1: mov ebp, esp */ r_ebp = r_esp;
    /* 004340f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004340f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004340f7: mov eax, 4 */ r_eax = 0x4u;
    /* 004340fc: mov esp, ebp */ r_esp = r_ebp;
    /* 004340fe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004340ff: ret  */ FN_RET(0x004340f0); r_esp += 4; return;
}

void f_0043bbb0(void) /* ??1CExpandoObject@@UAE@XZ_11 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043bbb0);
    /* 0043bbb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043bbb1: mov ebp, esp */ r_ebp = r_esp;
    /* 0043bbb3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043bbb4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043bbb7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043bbba: mov dword ptr [eax], 0x6b8084 */ W32((u32)(r_eax), 0x6b8084u);
    /* 0043bbc0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043bbc3: call 0x5cb590 */ r_esp -= 4; W32(r_esp, 0x43bbc8u); f_005cb590();
    /* 0043bbc8: mov esp, ebp */ r_esp = r_ebp;
    /* 0043bbca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043bbcb: ret  */ FN_RET(0x0043bbb0); r_esp += 4; return;
}

void f_0043d110(void) /* ??_G_com_error@@UAEPAXI@Z_44 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043d110);
    /* 0043d110: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043d111: mov ebp, esp */ r_ebp = r_esp;
    /* 0043d113: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043d114: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043d117: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d11a: call 0x434150 */ r_esp -= 4; W32(r_esp, 0x43d11fu); f_00434150();
    /* 0043d11f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043d122: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0043d125: je 0x43d133 */ if (fZ) goto L_0043d133;
L_0043d127:; BB(0x0043d127);
    /* 0043d127: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d12a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043d12b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x43d130u); f_00686cae();
    /* 0043d130: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0043d133:; BB(0x0043d133);
    /* 0043d133: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d136: mov esp, ebp */ r_esp = r_ebp;
    /* 0043d138: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043d139: ret 4 */ FN_RET(0x0043d110); r_esp += 8; return;
}

void f_0043d140(void) /* ??_G_com_error@@UAEPAXI@Z_45 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043d140);
    /* 0043d140: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043d141: mov ebp, esp */ r_ebp = r_esp;
    /* 0043d143: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043d144: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043d147: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d14a: call 0x43bbb0 */ r_esp -= 4; W32(r_esp, 0x43d14fu); f_0043bbb0();
    /* 0043d14f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043d152: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0043d155: je 0x43d163 */ if (fZ) goto L_0043d163;
L_0043d157:; BB(0x0043d157);
    /* 0043d157: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d15a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043d15b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x43d160u); f_00686cae();
    /* 0043d160: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0043d163:; BB(0x0043d163);
    /* 0043d163: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d166: mov esp, ebp */ r_esp = r_ebp;
    /* 0043d168: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043d169: ret 4 */ FN_RET(0x0043d140); r_esp += 8; return;
}

void f_0043d260(void) /* ??1CExpandoObject@@UAE@XZ_12 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043d260);
    /* 0043d260: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043d261: mov ebp, esp */ r_ebp = r_esp;
    /* 0043d263: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043d264: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043d267: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d26a: mov dword ptr [eax], 0x6b81f4 */ W32((u32)(r_eax), 0x6b81f4u);
    /* 0043d270: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d273: call 0x5f5c40 */ r_esp -= 4; W32(r_esp, 0x43d278u); f_005f5c40();
    /* 0043d278: mov esp, ebp */ r_esp = r_ebp;
    /* 0043d27a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043d27b: ret  */ FN_RET(0x0043d260); r_esp += 4; return;
}

void f_0043f240(void) /* ??_G_com_error@@UAEPAXI@Z_46 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043f240);
    /* 0043f240: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043f241: mov ebp, esp */ r_ebp = r_esp;
    /* 0043f243: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043f244: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043f247: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043f24a: call 0x43d260 */ r_esp -= 4; W32(r_esp, 0x43f24fu); f_0043d260();
    /* 0043f24f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043f252: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0043f255: je 0x43f263 */ if (fZ) goto L_0043f263;
L_0043f257:; BB(0x0043f257);
    /* 0043f257: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043f25a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043f25b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x43f260u); f_00686cae();
    /* 0043f260: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0043f263:; BB(0x0043f263);
    /* 0043f263: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043f266: mov esp, ebp */ r_esp = r_ebp;
    /* 0043f268: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043f269: ret 4 */ FN_RET(0x0043f240); r_esp += 8; return;
}

void f_00443410(void) /* ??$_Idl_distance@PADPAD@std@@YA?A_PABQAD0@Z */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00443410);
    /* 00443410: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00443411: mov ebp, esp */ r_ebp = r_esp;
    /* 00443413: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00443416: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00443419: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0044341b: sub eax, dword ptr [ecx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0044341d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044341e: ret  */ FN_RET(0x00443410); r_esp += 4; return;
}

void f_00443420(void) /* ??0_AFX_OLE_STATE@@QAE@XZ_11 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00443420);
    /* 00443420: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00443421: mov ebp, esp */ r_ebp = r_esp;
    /* 00443423: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00443424: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00443427: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044342a: call 0x60b4a0 */ r_esp -= 4; W32(r_esp, 0x44342fu); f_0060b4a0();
    /* 0044342f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00443432: mov dword ptr [eax], 0x6b8334 */ W32((u32)(r_eax), 0x6b8334u);
    /* 00443438: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044343b: mov esp, ebp */ r_esp = r_ebp;
    /* 0044343d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044343e: ret  */ FN_RET(0x00443420); r_esp += 4; return;
}

void f_00443440(void) /* ??1_AFX_OLE_STATE@@UAE@XZ_11 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00443440);
    /* 00443440: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00443441: mov ebp, esp */ r_ebp = r_esp;
    /* 00443443: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00443444: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00443447: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044344a: mov dword ptr [eax], 0x6b8334 */ W32((u32)(r_eax), 0x6b8334u);
    /* 00443450: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00443453: call 0x60b5b0 */ r_esp -= 4; W32(r_esp, 0x443458u); f_0060b5b0();
    /* 00443458: mov esp, ebp */ r_esp = r_ebp;
    /* 0044345a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044345b: ret  */ FN_RET(0x00443440); r_esp += 4; return;
}

void f_00443ac0(void) /* ??1CExpandoObject@@UAE@XZ_13 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00443ac0);
    /* 00443ac0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00443ac1: mov ebp, esp */ r_ebp = r_esp;
    /* 00443ac3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00443ac4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00443ac7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00443aca: mov dword ptr [eax], 0x6b8404 */ W32((u32)(r_eax), 0x6b8404u);
    /* 00443ad0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00443ad3: call 0x600e10 */ r_esp -= 4; W32(r_esp, 0x443ad8u); f_00600e10();
    /* 00443ad8: mov esp, ebp */ r_esp = r_ebp;
    /* 00443ada: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00443adb: ret  */ FN_RET(0x00443ac0); r_esp += 4; return;
}

void f_00443ba0(void) /* ??_G_com_error@@UAEPAXI@Z_47 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00443ba0);
    /* 00443ba0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00443ba1: mov ebp, esp */ r_ebp = r_esp;
    /* 00443ba3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00443ba4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00443ba7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00443baa: call 0x43f430 */ r_esp -= 4; W32(r_esp, 0x443bafu); f_0043f430();
    /* 00443baf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00443bb2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00443bb5: je 0x443bc3 */ if (fZ) goto L_00443bc3;
L_00443bb7:; BB(0x00443bb7);
    /* 00443bb7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00443bba: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00443bbb: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x443bc0u); f_00686cae();
    /* 00443bc0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00443bc3:; BB(0x00443bc3);
    /* 00443bc3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00443bc6: mov esp, ebp */ r_esp = r_ebp;
    /* 00443bc8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00443bc9: ret 4 */ FN_RET(0x00443ba0); r_esp += 8; return;
}

void f_00443bf0(void) /* ??_G_com_error@@UAEPAXI@Z_48 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00443bf0);
    /* 00443bf0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00443bf1: mov ebp, esp */ r_ebp = r_esp;
    /* 00443bf3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00443bf4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00443bf7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00443bfa: call 0x443440 */ r_esp -= 4; W32(r_esp, 0x443bffu); f_00443440();
    /* 00443bff: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00443c02: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00443c05: je 0x443c13 */ if (fZ) goto L_00443c13;
L_00443c07:; BB(0x00443c07);
    /* 00443c07: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00443c0a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00443c0b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x443c10u); f_00686cae();
    /* 00443c10: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00443c13:; BB(0x00443c13);
    /* 00443c13: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00443c16: mov esp, ebp */ r_esp = r_ebp;
    /* 00443c18: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00443c19: ret 4 */ FN_RET(0x00443bf0); r_esp += 8; return;
}

void f_00443c20(void) /* ??_G_com_error@@UAEPAXI@Z_49 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00443c20);
    /* 00443c20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00443c21: mov ebp, esp */ r_ebp = r_esp;
    /* 00443c23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00443c24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00443c27: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00443c2a: call 0x443ac0 */ r_esp -= 4; W32(r_esp, 0x443c2fu); f_00443ac0();
    /* 00443c2f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00443c32: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00443c35: je 0x443c43 */ if (fZ) goto L_00443c43;
L_00443c37:; BB(0x00443c37);
    /* 00443c37: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00443c3a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00443c3b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x443c40u); f_00686cae();
    /* 00443c40: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00443c43:; BB(0x00443c43);
    /* 00443c43: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00443c46: mov esp, ebp */ r_esp = r_ebp;
    /* 00443c48: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00443c49: ret 4 */ FN_RET(0x00443c20); r_esp += 8; return;
}

