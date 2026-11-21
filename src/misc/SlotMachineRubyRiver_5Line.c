#include "protos.h"

void f_00539800(void) /* SlotMachineRubyRiver_5Line::vfunc21 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00539800);
    /* 00539800: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00539801: mov ebp, esp */ r_ebp = r_esp;
    /* 00539803: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00539804: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00539807: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053980a: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0053980d: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00539810: mov eax, dword ptr [eax + ecx*4 + 0x736870] */ r_eax = R32((u32)(r_eax+r_ecx*4+0x736870u));
    /* 00539817: mov esp, ebp */ r_esp = r_ebp;
    /* 00539819: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053981a: ret 8 */ FN_RET(0x00539800); r_esp += 12; return;
}

void f_00539820(void) /* SlotMachineRubyRiver_5Line::vfunc22 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00539820);
    /* 00539820: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00539821: mov ebp, esp */ r_ebp = r_esp;
    /* 00539823: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00539824: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00539827: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053982a: imul eax, eax, 0x58 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x58u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0053982d: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00539830: mov eax, dword ptr [eax + ecx*4 + 0x736768] */ r_eax = R32((u32)(r_eax+r_ecx*4+0x736768u));
    /* 00539837: mov esp, ebp */ r_esp = r_ebp;
    /* 00539839: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053983a: ret 8 */ FN_RET(0x00539820); r_esp += 12; return;
}

void f_00539840(void) /* SlotMachineRubyRiver_5Line::vfunc24 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00539840);
    /* 00539840: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00539841: mov ebp, esp */ r_ebp = r_esp;
    /* 00539843: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00539844: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00539847: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053984a: imul eax, eax, 0x28 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x28u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0053984d: mov eax, dword ptr [eax + 0x735898] */ r_eax = R32((u32)(r_eax+0x735898u));
    /* 00539853: mov esp, ebp */ r_esp = r_ebp;
    /* 00539855: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00539856: ret 4 */ FN_RET(0x00539840); r_esp += 8; return;
}

void f_00539860(void) /* SlotMachineRubyRiver_5Line::vfunc23 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00539860);
    /* 00539860: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00539861: mov ebp, esp */ r_ebp = r_esp;
    /* 00539863: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00539864: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00539867: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053986a: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0053986d: imul eax, eax, 0x1c */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x1cu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00539870: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00539873: mov eax, dword ptr [eax + ecx*4 + 0x735108] */ r_eax = R32((u32)(r_eax+r_ecx*4+0x735108u));
    /* 0053987a: mov esp, ebp */ r_esp = r_ebp;
    /* 0053987c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053987d: ret 8 */ FN_RET(0x00539860); r_esp += 12; return;
}

void f_00539880(void) /* SlotMachineRubyRiver_5Line::vfunc25 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00539880);
    /* 00539880: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00539881: mov ebp, esp */ r_ebp = r_esp;
    /* 00539883: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00539884: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00539887: mov eax, 0x16 */ r_eax = 0x16u;
    /* 0053988c: mov esp, ebp */ r_esp = r_ebp;
    /* 0053988e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053988f: ret  */ FN_RET(0x00539880); r_esp += 4; return;
}

void f_00539890(void) /* SlotMachineRubyRiver_5Line::vfunc26 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00539890);
    /* 00539890: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00539891: mov ebp, esp */ r_ebp = r_esp;
    /* 00539893: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00539894: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00539897: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053989a: imul eax, eax, 0x28 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x28u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0053989d: add eax, 0x735878 */ {  u32 a = r_eax; u32 b = 0x735878u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005398a2: mov esp, ebp */ r_esp = r_ebp;
    /* 005398a4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005398a5: ret 4 */ FN_RET(0x00539890); r_esp += 8; return;
}

