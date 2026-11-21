#include "protos.h"

void f_005398b0(void) /* SlotMachineRubyRiver_Prog::vfunc21 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005398b0);
    /* 005398b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005398b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005398b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005398b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005398b7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005398ba: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005398bd: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005398c0: mov eax, dword ptr [eax + ecx*4 + 0x736468] */ r_eax = R32((u32)(r_eax+r_ecx*4+0x736468u));
    /* 005398c7: mov esp, ebp */ r_esp = r_ebp;
    /* 005398c9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005398ca: ret 8 */ FN_RET(0x005398b0); r_esp += 12; return;
}

void f_005398d0(void) /* SlotMachineRubyRiver_Prog::vfunc22 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005398d0);
    /* 005398d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005398d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005398d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005398d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005398d7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005398da: imul eax, eax, 0x58 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x58u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005398dd: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005398e0: mov eax, dword ptr [eax + ecx*4 + 0x736360] */ r_eax = R32((u32)(r_eax+r_ecx*4+0x736360u));
    /* 005398e7: mov esp, ebp */ r_esp = r_ebp;
    /* 005398e9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005398ea: ret 8 */ FN_RET(0x005398d0); r_esp += 12; return;
}

void f_005398f0(void) /* SlotMachineRubyRiver_Prog::vfunc24 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005398f0);
    /* 005398f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005398f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005398f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005398f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005398f7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005398fa: imul eax, eax, 0x28 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x28u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005398fd: mov eax, dword ptr [eax + 0x735c08] */ r_eax = R32((u32)(r_eax+0x735c08u));
    /* 00539903: mov esp, ebp */ r_esp = r_ebp;
    /* 00539905: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00539906: ret 4 */ FN_RET(0x005398f0); r_esp += 8; return;
}

void f_00539910(void) /* SlotMachineRubyRiver_Prog::vfunc23 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00539910);
    /* 00539910: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00539911: mov ebp, esp */ r_ebp = r_esp;
    /* 00539913: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00539914: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00539917: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053991a: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0053991d: imul eax, eax, 0x1c */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x1cu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00539920: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00539923: mov eax, dword ptr [eax + ecx*4 + 0x7350b0] */ r_eax = R32((u32)(r_eax+r_ecx*4+0x7350b0u));
    /* 0053992a: mov esp, ebp */ r_esp = r_ebp;
    /* 0053992c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053992d: ret 8 */ FN_RET(0x00539910); r_esp += 12; return;
}

void f_00539930(void) /* SlotMachineRubyRiver_Prog::vfunc25 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00539930);
    /* 00539930: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00539931: mov ebp, esp */ r_ebp = r_esp;
    /* 00539933: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00539934: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00539937: mov eax, 0x16 */ r_eax = 0x16u;
    /* 0053993c: mov esp, ebp */ r_esp = r_ebp;
    /* 0053993e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053993f: ret  */ FN_RET(0x00539930); r_esp += 4; return;
}

void f_00539940(void) /* SlotMachineRubyRiver_Prog::vfunc26 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00539940);
    /* 00539940: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00539941: mov ebp, esp */ r_ebp = r_esp;
    /* 00539943: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00539944: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00539947: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053994a: imul eax, eax, 0x28 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x28u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0053994d: add eax, 0x735be8 */ {  u32 a = r_eax; u32 b = 0x735be8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00539952: mov esp, ebp */ r_esp = r_ebp;
    /* 00539954: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00539955: ret 4 */ FN_RET(0x00539940); r_esp += 8; return;
}

