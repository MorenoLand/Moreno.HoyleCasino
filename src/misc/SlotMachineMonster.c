#include "protos.h"

void f_00534560(void) /* SlotMachineMonster::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534560);
    /* 00534560: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534561: mov ebp, esp */ r_ebp = r_esp;
    /* 00534563: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534564: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534567: mov eax, 0x15fbd */ r_eax = 0x15fbdu;
    /* 0053456c: mov esp, ebp */ r_esp = r_ebp;
    /* 0053456e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053456f: ret  */ FN_RET(0x00534560); r_esp += 4; return;
}

void f_00534570(void) /* SlotMachineMonster::vfunc4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534570);
    /* 00534570: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534571: mov ebp, esp */ r_ebp = r_esp;
    /* 00534573: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534574: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534577: mov eax, 0x15fa4 */ r_eax = 0x15fa4u;
    /* 0053457c: mov esp, ebp */ r_esp = r_ebp;
    /* 0053457e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053457f: ret  */ FN_RET(0x00534570); r_esp += 4; return;
}

void f_00534580(void) /* SlotMachineMonster::vfunc3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534580);
    /* 00534580: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534581: mov ebp, esp */ r_ebp = r_esp;
    /* 00534583: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534584: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534587: mov eax, 0x16055 */ r_eax = 0x16055u;
    /* 0053458c: mov esp, ebp */ r_esp = r_ebp;
    /* 0053458e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053458f: ret  */ FN_RET(0x00534580); r_esp += 4; return;
}

void f_00538990(void) /* SlotMachineMonster::vfunc22 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00538990);
    /* 00538990: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00538991: mov ebp, esp */ r_ebp = r_esp;
    /* 00538993: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00538994: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00538997: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053899a: imul eax, eax, 0x58 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x58u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0053899d: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005389a0: mov eax, dword ptr [eax + ecx*4 + 0x72c930] */ r_eax = R32((u32)(r_eax+r_ecx*4+0x72c930u));
    /* 005389a7: mov esp, ebp */ r_esp = r_ebp;
    /* 005389a9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005389aa: ret 8 */ FN_RET(0x00538990); r_esp += 12; return;
}

void f_005389b0(void) /* SlotMachineMonster::vfunc21 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005389b0);
    /* 005389b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005389b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005389b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005389b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005389b7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005389ba: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005389bd: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005389c0: mov eax, dword ptr [eax + ecx*4 + 0x72ca38] */ r_eax = R32((u32)(r_eax+r_ecx*4+0x72ca38u));
    /* 005389c7: mov esp, ebp */ r_esp = r_ebp;
    /* 005389c9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005389ca: ret 8 */ FN_RET(0x005389b0); r_esp += 12; return;
}

void f_005389d0(void) /* SlotMachineMonster::vfunc23 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005389d0);
    /* 005389d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005389d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005389d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005389d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005389d7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005389da: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005389dd: imul eax, eax, 0x24 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x24u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005389e0: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005389e3: mov eax, dword ptr [eax + ecx*4 + 0x72c878] */ r_eax = R32((u32)(r_eax+r_ecx*4+0x72c878u));
    /* 005389ea: mov esp, ebp */ r_esp = r_ebp;
    /* 005389ec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005389ed: ret 8 */ FN_RET(0x005389d0); r_esp += 12; return;
}

void f_005389f0(void) /* SlotMachineMonster::vfunc24 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005389f0);
    /* 005389f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005389f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005389f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005389f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005389f7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005389fa: imul eax, eax, 0x28 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x28u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005389fd: mov eax, dword ptr [eax + 0x72cd58] */ r_eax = R32((u32)(r_eax+0x72cd58u));
    /* 00538a03: mov esp, ebp */ r_esp = r_ebp;
    /* 00538a05: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00538a06: ret 4 */ FN_RET(0x005389f0); r_esp += 8; return;
}

void f_00538a10(void) /* SlotMachineMonster::vfunc25 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00538a10);
    /* 00538a10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00538a11: mov ebp, esp */ r_ebp = r_esp;
    /* 00538a13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00538a14: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00538a17: mov eax, 9 */ r_eax = 0x9u;
    /* 00538a1c: mov esp, ebp */ r_esp = r_ebp;
    /* 00538a1e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00538a1f: ret  */ FN_RET(0x00538a10); r_esp += 4; return;
}

void f_00538a20(void) /* SlotMachineMonster::vfunc26 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00538a20);
    /* 00538a20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00538a21: mov ebp, esp */ r_ebp = r_esp;
    /* 00538a23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00538a24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00538a27: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00538a2a: imul eax, eax, 0x28 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x28u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00538a2d: add eax, 0x72cd38 */ {  u32 a = r_eax; u32 b = 0x72cd38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00538a32: mov esp, ebp */ r_esp = r_ebp;
    /* 00538a34: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00538a35: ret 4 */ FN_RET(0x00538a20); r_esp += 8; return;
}

