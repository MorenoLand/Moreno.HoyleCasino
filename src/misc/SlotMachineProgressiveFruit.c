#include "protos.h"

void f_00539960(void) /* SlotMachineProgressiveFruit::vfunc21 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00539960);
    /* 00539960: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00539961: mov ebp, esp */ r_ebp = r_esp;
    /* 00539963: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00539964: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00539967: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053996a: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0053996d: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00539970: mov eax, dword ptr [eax + ecx*4 + 0x736d90] */ r_eax = R32((u32)(r_eax+r_ecx*4+0x736d90u));
    /* 00539977: mov esp, ebp */ r_esp = r_ebp;
    /* 00539979: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053997a: ret 8 */ FN_RET(0x00539960); r_esp += 12; return;
}

void f_00539980(void) /* SlotMachineProgressiveFruit::vfunc22 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00539980);
    /* 00539980: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00539981: mov ebp, esp */ r_ebp = r_esp;
    /* 00539983: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00539984: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00539987: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053998a: imul eax, eax, 0x58 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x58u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0053998d: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00539990: mov eax, dword ptr [eax + ecx*4 + 0x736c88] */ r_eax = R32((u32)(r_eax+r_ecx*4+0x736c88u));
    /* 00539997: mov esp, ebp */ r_esp = r_ebp;
    /* 00539999: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053999a: ret 8 */ FN_RET(0x00539980); r_esp += 12; return;
}

void f_005399a0(void) /* SlotMachineProgressiveFruit::vfunc24 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005399a0);
    /* 005399a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005399a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005399a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005399a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005399a7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005399aa: imul eax, eax, 0x28 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x28u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005399ad: mov eax, dword ptr [eax + 0x736b90] */ r_eax = R32((u32)(r_eax+0x736b90u));
    /* 005399b3: mov esp, ebp */ r_esp = r_ebp;
    /* 005399b5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005399b6: ret 4 */ FN_RET(0x005399a0); r_esp += 8; return;
}

void f_005399c0(void) /* SlotMachineProgressiveFruit::vfunc23 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005399c0);
    /* 005399c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005399c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005399c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005399c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005399c7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005399ca: mov eax, dword ptr [eax*4 + 0x72ac7c] */ r_eax = R32((u32)(r_eax*4+0x72ac7cu));
    /* 005399d1: mov esp, ebp */ r_esp = r_ebp;
    /* 005399d3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005399d4: ret 8 */ FN_RET(0x005399c0); r_esp += 12; return;
}

void f_005399e0(void) /* SlotMachineProgressiveFruit::vfunc25 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005399e0);
    /* 005399e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005399e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005399e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005399e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005399e7: mov eax, 7 */ r_eax = 0x7u;
    /* 005399ec: mov esp, ebp */ r_esp = r_ebp;
    /* 005399ee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005399ef: ret  */ FN_RET(0x005399e0); r_esp += 4; return;
}

void f_005399f0(void) /* SlotMachineProgressiveFruit::vfunc26 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005399f0);
    /* 005399f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005399f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005399f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005399f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005399f7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005399fa: imul eax, eax, 0x28 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x28u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005399fd: add eax, 0x736b70 */ {  u32 a = r_eax; u32 b = 0x736b70u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00539a02: mov esp, ebp */ r_esp = r_ebp;
    /* 00539a04: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00539a05: ret 4 */ FN_RET(0x005399f0); r_esp += 8; return;
}

