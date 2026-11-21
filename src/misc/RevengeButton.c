#include "protos.h"

void f_0064bf00(void) /* RevengeButton::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064bf00);
    /* 0064bf00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064bf01: mov ebp, esp */ r_ebp = r_esp;
    /* 0064bf03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064bf04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0064bf07: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064bf0a: call 0x601a80 */ r_esp -= 4; W32(r_esp, 0x64bf0fu); f_00601a80();
    /* 0064bf0f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064bf12: mov dword ptr [eax], 0x6dcb74 */ W32((u32)(r_eax), 0x6dcb74u);
    /* 0064bf18: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064bf1b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0064bf1e: mov dword ptr [ecx + 0x1dc], edx */ W32((u32)(r_ecx+0x1dcu), r_edx);
    /* 0064bf24: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064bf27: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0064bf2a: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 0064bf2d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064bf30: mov esp, ebp */ r_esp = r_ebp;
    /* 0064bf32: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064bf33: ret 8 */ FN_RET(0x0064bf00); r_esp += 12; return;
}

void f_0064bf60(void) /* RevengeButton::vfunc16 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064bf60);
    /* 0064bf60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064bf61: mov ebp, esp */ r_ebp = r_esp;
    /* 0064bf63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064bf64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0064bf67: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064bf6a: call 0x5f5cc0 */ r_esp -= 4; W32(r_esp, 0x64bf6fu); f_005f5cc0();
    /* 0064bf6f: push 0x231abf */ { u32 v = 0x231abfu; r_esp -= 4; W32(r_esp, v); }
    /* 0064bf74: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064bf77: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064bf79: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064bf7c: mov eax, dword ptr [edx + 0xc8] */ r_eax = R32((u32)(r_edx+0xc8u));
    /* 0064bf82: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64bf84u); call_ind(t); }
    /* 0064bf84: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0064bf86: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0064bf88: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064bf8a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064bf8c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064bf8f: call 0x6023d0 */ r_esp -= 4; W32(r_esp, 0x64bf94u); f_006023d0();
    /* 0064bf94: mov esp, ebp */ r_esp = r_ebp;
    /* 0064bf96: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064bf97: ret  */ FN_RET(0x0064bf60); r_esp += 4; return;
}

void f_0064bfa0(void) /* RevengeButton::vfunc27 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064bfa0);
    /* 0064bfa0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064bfa1: mov ebp, esp */ r_ebp = r_esp;
    /* 0064bfa3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064bfa4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0064bfa7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0064bfaa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064bfab: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064bfae: call 0x6024b0 */ r_esp -= 4; W32(r_esp, 0x64bfb3u); f_006024b0();
    /* 0064bfb3: mov esp, ebp */ r_esp = r_ebp;
    /* 0064bfb5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064bfb6: ret 4 */ FN_RET(0x0064bfa0); r_esp += 8; return;
}

void f_0064bfc0(void) /* RevengeButton::vfunc29 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064bfc0);
    /* 0064bfc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064bfc1: mov ebp, esp */ r_ebp = r_esp;
    /* 0064bfc3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064bfc4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0064bfc7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064bfca: call 0x602500 */ r_esp -= 4; W32(r_esp, 0x64bfcfu); f_00602500();
    /* 0064bfcf: mov esp, ebp */ r_esp = r_ebp;
    /* 0064bfd1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064bfd2: ret  */ FN_RET(0x0064bfc0); r_esp += 4; return;
}

void f_0064bfe0(void) /* RevengeButton::vfunc28 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064bfe0);
    /* 0064bfe0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064bfe1: mov ebp, esp */ r_ebp = r_esp;
    /* 0064bfe3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064bfe4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0064bfe7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064bfea: call 0x602550 */ r_esp -= 4; W32(r_esp, 0x64bfefu); f_00602550();
    /* 0064bfef: mov esp, ebp */ r_esp = r_ebp;
    /* 0064bff1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064bff2: ret  */ FN_RET(0x0064bfe0); r_esp += 4; return;
}

void f_0064c000(void) /* RevengeButton::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064c000);
    /* 0064c000: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064c001: mov ebp, esp */ r_ebp = r_esp;
    /* 0064c003: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064c004: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0064c007: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0064c00a: mov byte ptr [eax + 4], 1 */ W8((u32)(r_eax+0x4u), 0x1u);
    /* 0064c00e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0064c011: mov byte ptr [ecx + 0x14], 0x72 */ W8((u32)(r_ecx+0x14u), 0x72u);
    /* 0064c015: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064c017: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064c019: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064c01c: mov ecx, dword ptr [edx + 0x1dc] */ r_ecx = R32((u32)(r_edx+0x1dcu));
    /* 0064c022: call 0x648550 */ r_esp -= 4; W32(r_esp, 0x64c027u); f_00648550();
    /* 0064c027: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0064c02a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064c02b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064c02e: call 0x5f4ed0 */ r_esp -= 4; W32(r_esp, 0x64c033u); f_005f4ed0();
    /* 0064c033: mov esp, ebp */ r_esp = r_ebp;
    /* 0064c035: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064c036: ret 4 */ FN_RET(0x0064c000); r_esp += 8; return;
}

void f_0064c040(void) /* RevengeButton::vfunc4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064c040);
    /* 0064c040: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064c041: mov ebp, esp */ r_ebp = r_esp;
    /* 0064c043: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064c044: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0064c047: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0064c04a: mov byte ptr [eax + 4], 1 */ W8((u32)(r_eax+0x4u), 0x1u);
    /* 0064c04e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064c051: mov byte ptr [ecx + 8], 0 */ W8((u32)(r_ecx+0x8u), 0x0u);
    /* 0064c055: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064c058: mov byte ptr [edx + 9], 0 */ W8((u32)(r_edx+0x9u), 0x0u);
    /* 0064c05c: mov esp, ebp */ r_esp = r_ebp;
    /* 0064c05e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064c05f: ret 4 */ FN_RET(0x0064c040); r_esp += 8; return;
}

