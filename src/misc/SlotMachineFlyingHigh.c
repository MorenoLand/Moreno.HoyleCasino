#include "protos.h"

void f_00538830(void) /* SlotMachineFlyingHigh::vfunc22 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00538830);
    /* 00538830: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00538831: mov ebp, esp */ r_ebp = r_esp;
    /* 00538833: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00538834: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00538837: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053883a: imul eax, eax, 0x58 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x58u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0053883d: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00538840: mov eax, dword ptr [eax + ecx*4 + 0x72bdb8] */ r_eax = R32((u32)(r_eax+r_ecx*4+0x72bdb8u));
    /* 00538847: mov esp, ebp */ r_esp = r_ebp;
    /* 00538849: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053884a: ret 8 */ FN_RET(0x00538830); r_esp += 12; return;
}

void f_00538850(void) /* SlotMachineFlyingHigh::vfunc21 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00538850);
    /* 00538850: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00538851: mov ebp, esp */ r_ebp = r_esp;
    /* 00538853: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00538854: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00538857: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053885a: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0053885d: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00538860: mov eax, dword ptr [eax + ecx*4 + 0x72bec0] */ r_eax = R32((u32)(r_eax+r_ecx*4+0x72bec0u));
    /* 00538867: mov esp, ebp */ r_esp = r_ebp;
    /* 00538869: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053886a: ret 8 */ FN_RET(0x00538850); r_esp += 12; return;
}

void f_00538870(void) /* SlotMachineFlyingHigh::vfunc23 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00538870);
    /* 00538870: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00538871: mov ebp, esp */ r_ebp = r_esp;
    /* 00538873: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00538874: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00538877: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053887a: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0053887d: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00538880: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00538883: mov eax, dword ptr [eax + ecx*4 + 0x72bd58] */ r_eax = R32((u32)(r_eax+r_ecx*4+0x72bd58u));
    /* 0053888a: mov esp, ebp */ r_esp = r_ebp;
    /* 0053888c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053888d: ret 8 */ FN_RET(0x00538870); r_esp += 12; return;
}

void f_00538890(void) /* SlotMachineFlyingHigh::vfunc24 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00538890);
    /* 00538890: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00538891: mov ebp, esp */ r_ebp = r_esp;
    /* 00538893: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00538894: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00538897: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053889a: imul eax, eax, 0x28 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x28u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0053889d: mov eax, dword ptr [eax + 0x72c1e0] */ r_eax = R32((u32)(r_eax+0x72c1e0u));
    /* 005388a3: mov esp, ebp */ r_esp = r_ebp;
    /* 005388a5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005388a6: ret 4 */ FN_RET(0x00538890); r_esp += 8; return;
}

void f_005388b0(void) /* SlotMachineFlyingHigh::vfunc25 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005388b0);
    /* 005388b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005388b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005388b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005388b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005388b7: mov eax, 8 */ r_eax = 0x8u;
    /* 005388bc: mov esp, ebp */ r_esp = r_ebp;
    /* 005388be: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005388bf: ret  */ FN_RET(0x005388b0); r_esp += 4; return;
}

void f_005388c0(void) /* SlotMachineFlyingHigh::vfunc26 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005388c0);
    /* 005388c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005388c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005388c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005388c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005388c7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005388ca: imul eax, eax, 0x28 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x28u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005388cd: add eax, 0x72c1c0 */ {  u32 a = r_eax; u32 b = 0x72c1c0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005388d2: mov esp, ebp */ r_esp = r_ebp;
    /* 005388d4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005388d5: ret 4 */ FN_RET(0x005388c0); r_esp += 8; return;
}

