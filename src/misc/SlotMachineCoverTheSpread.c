#include "protos.h"

void f_005344b0(void) /* SlotMachineCoverTheSpread::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005344b0);
    /* 005344b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005344b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005344b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005344b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005344b7: mov eax, 0x15fc0 */ r_eax = 0x15fc0u;
    /* 005344bc: mov esp, ebp */ r_esp = r_ebp;
    /* 005344be: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005344bf: ret  */ FN_RET(0x005344b0); r_esp += 4; return;
}

void f_005344c0(void) /* SlotMachineCoverTheSpread::vfunc4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005344c0);
    /* 005344c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005344c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005344c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005344c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005344c7: mov eax, 0x15fa2 */ r_eax = 0x15fa2u;
    /* 005344cc: mov esp, ebp */ r_esp = r_ebp;
    /* 005344ce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005344cf: ret  */ FN_RET(0x005344c0); r_esp += 4; return;
}

void f_00538780(void) /* SlotMachineCoverTheSpread::vfunc22 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00538780);
    /* 00538780: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00538781: mov ebp, esp */ r_ebp = r_esp;
    /* 00538783: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00538784: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00538787: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053878a: imul eax, eax, 0x58 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x58u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0053878d: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00538790: mov eax, dword ptr [eax + ecx*4 + 0x72b838] */ r_eax = R32((u32)(r_eax+r_ecx*4+0x72b838u));
    /* 00538797: mov esp, ebp */ r_esp = r_ebp;
    /* 00538799: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053879a: ret 8 */ FN_RET(0x00538780); r_esp += 12; return;
}

void f_005387a0(void) /* SlotMachineCoverTheSpread::vfunc21 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005387a0);
    /* 005387a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005387a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005387a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005387a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005387a7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005387aa: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005387ad: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005387b0: mov eax, dword ptr [eax + ecx*4 + 0x72b940] */ r_eax = R32((u32)(r_eax+r_ecx*4+0x72b940u));
    /* 005387b7: mov esp, ebp */ r_esp = r_ebp;
    /* 005387b9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005387ba: ret 8 */ FN_RET(0x005387a0); r_esp += 12; return;
}

void f_005387c0(void) /* SlotMachineCoverTheSpread::vfunc23 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005387c0);
    /* 005387c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005387c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005387c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005387c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005387c7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005387ca: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005387cd: imul eax, eax, 0x1c */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x1cu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005387d0: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005387d3: mov eax, dword ptr [eax + ecx*4 + 0x72b7e0] */ r_eax = R32((u32)(r_eax+r_ecx*4+0x72b7e0u));
    /* 005387da: mov esp, ebp */ r_esp = r_ebp;
    /* 005387dc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005387dd: ret 8 */ FN_RET(0x005387c0); r_esp += 12; return;
}

void f_005387e0(void) /* SlotMachineCoverTheSpread::vfunc24 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005387e0);
    /* 005387e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005387e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005387e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005387e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005387e7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005387ea: imul eax, eax, 0x28 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x28u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005387ed: mov eax, dword ptr [eax + 0x72bc60] */ r_eax = R32((u32)(r_eax+0x72bc60u));
    /* 005387f3: mov esp, ebp */ r_esp = r_ebp;
    /* 005387f5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005387f6: ret 4 */ FN_RET(0x005387e0); r_esp += 8; return;
}

void f_00538800(void) /* SlotMachineCoverTheSpread::vfunc25 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00538800);
    /* 00538800: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00538801: mov ebp, esp */ r_ebp = r_esp;
    /* 00538803: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00538804: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00538807: mov eax, 7 */ r_eax = 0x7u;
    /* 0053880c: mov esp, ebp */ r_esp = r_ebp;
    /* 0053880e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053880f: ret  */ FN_RET(0x00538800); r_esp += 4; return;
}

void f_00538810(void) /* SlotMachineCoverTheSpread::vfunc26 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00538810);
    /* 00538810: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00538811: mov ebp, esp */ r_ebp = r_esp;
    /* 00538813: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00538814: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00538817: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053881a: imul eax, eax, 0x28 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x28u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0053881d: add eax, 0x72bc40 */ {  u32 a = r_eax; u32 b = 0x72bc40u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00538822: mov esp, ebp */ r_esp = r_ebp;
    /* 00538824: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00538825: ret 4 */ FN_RET(0x00538810); r_esp += 8; return;
}

