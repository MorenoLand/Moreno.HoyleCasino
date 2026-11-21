#include "protos.h"

void f_005396a0(void) /* SlotMachineRubyRiver::vfunc21 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005396a0);
    /* 005396a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005396a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005396a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005396a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005396a7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005396aa: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005396ad: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005396b0: mov eax, dword ptr [eax + ecx*4 + 0x736060] */ r_eax = R32((u32)(r_eax+r_ecx*4+0x736060u));
    /* 005396b7: mov esp, ebp */ r_esp = r_ebp;
    /* 005396b9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005396ba: ret 8 */ FN_RET(0x005396a0); r_esp += 12; return;
}

void f_005396c0(void) /* SlotMachineRubyRiver::vfunc22 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005396c0);
    /* 005396c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005396c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005396c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005396c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005396c7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005396ca: imul eax, eax, 0x58 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x58u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005396cd: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005396d0: mov eax, dword ptr [eax + ecx*4 + 0x735f58] */ r_eax = R32((u32)(r_eax+r_ecx*4+0x735f58u));
    /* 005396d7: mov esp, ebp */ r_esp = r_ebp;
    /* 005396d9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005396da: ret 8 */ FN_RET(0x005396c0); r_esp += 12; return;
}

void f_005396e0(void) /* SlotMachineRubyRiver::vfunc24 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005396e0);
    /* 005396e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005396e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005396e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005396e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005396e7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005396ea: imul eax, eax, 0x28 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x28u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005396ed: mov eax, dword ptr [eax + 0x7351b8] */ r_eax = R32((u32)(r_eax+0x7351b8u));
    /* 005396f3: mov esp, ebp */ r_esp = r_ebp;
    /* 005396f5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005396f6: ret 4 */ FN_RET(0x005396e0); r_esp += 8; return;
}

void f_00539700(void) /* SlotMachineRubyRiver::vfunc23 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00539700);
    /* 00539700: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00539701: mov ebp, esp */ r_ebp = r_esp;
    /* 00539703: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00539704: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00539707: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053970a: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0053970d: imul eax, eax, 0x1c */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x1cu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00539710: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00539713: mov eax, dword ptr [eax + ecx*4 + 0x735058] */ r_eax = R32((u32)(r_eax+r_ecx*4+0x735058u));
    /* 0053971a: mov esp, ebp */ r_esp = r_ebp;
    /* 0053971c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053971d: ret 8 */ FN_RET(0x00539700); r_esp += 12; return;
}

void f_00539720(void) /* SlotMachineRubyRiver::vfunc25 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00539720);
    /* 00539720: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00539721: mov ebp, esp */ r_ebp = r_esp;
    /* 00539723: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00539724: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00539727: mov eax, 0x16 */ r_eax = 0x16u;
    /* 0053972c: mov esp, ebp */ r_esp = r_ebp;
    /* 0053972e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053972f: ret  */ FN_RET(0x00539720); r_esp += 4; return;
}

void f_00539730(void) /* SlotMachineRubyRiver::vfunc26 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00539730);
    /* 00539730: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00539731: mov ebp, esp */ r_ebp = r_esp;
    /* 00539733: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00539734: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00539737: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053973a: imul eax, eax, 0x28 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x28u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0053973d: add eax, 0x735198 */ {  u32 a = r_eax; u32 b = 0x735198u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00539742: mov esp, ebp */ r_esp = r_ebp;
    /* 00539744: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00539745: ret 4 */ FN_RET(0x00539730); r_esp += 8; return;
}

