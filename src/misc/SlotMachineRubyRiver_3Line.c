#include "protos.h"

void f_00539750(void) /* SlotMachineRubyRiver_3Line::vfunc21 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00539750);
    /* 00539750: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00539751: mov ebp, esp */ r_ebp = r_esp;
    /* 00539753: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00539754: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00539757: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053975a: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0053975d: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00539760: mov eax, dword ptr [eax + ecx*4 + 0x736468] */ r_eax = R32((u32)(r_eax+r_ecx*4+0x736468u));
    /* 00539767: mov esp, ebp */ r_esp = r_ebp;
    /* 00539769: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053976a: ret 8 */ FN_RET(0x00539750); r_esp += 12; return;
}

void f_00539770(void) /* SlotMachineRubyRiver_3Line::vfunc22 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00539770);
    /* 00539770: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00539771: mov ebp, esp */ r_ebp = r_esp;
    /* 00539773: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00539774: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00539777: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053977a: imul eax, eax, 0x58 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x58u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0053977d: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00539780: mov eax, dword ptr [eax + ecx*4 + 0x736360] */ r_eax = R32((u32)(r_eax+r_ecx*4+0x736360u));
    /* 00539787: mov esp, ebp */ r_esp = r_ebp;
    /* 00539789: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053978a: ret 8 */ FN_RET(0x00539770); r_esp += 12; return;
}

void f_00539790(void) /* SlotMachineRubyRiver_3Line::vfunc24 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00539790);
    /* 00539790: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00539791: mov ebp, esp */ r_ebp = r_esp;
    /* 00539793: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00539794: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00539797: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053979a: imul eax, eax, 0x28 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x28u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0053979d: mov eax, dword ptr [eax + 0x735528] */ r_eax = R32((u32)(r_eax+0x735528u));
    /* 005397a3: mov esp, ebp */ r_esp = r_ebp;
    /* 005397a5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005397a6: ret 4 */ FN_RET(0x00539790); r_esp += 8; return;
}

void f_005397b0(void) /* SlotMachineRubyRiver_3Line::vfunc23 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005397b0);
    /* 005397b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005397b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005397b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005397b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005397b7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005397ba: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005397bd: imul eax, eax, 0x1c */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x1cu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005397c0: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005397c3: mov eax, dword ptr [eax + ecx*4 + 0x7350b0] */ r_eax = R32((u32)(r_eax+r_ecx*4+0x7350b0u));
    /* 005397ca: mov esp, ebp */ r_esp = r_ebp;
    /* 005397cc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005397cd: ret 8 */ FN_RET(0x005397b0); r_esp += 12; return;
}

void f_005397d0(void) /* SlotMachineRubyRiver_3Line::vfunc25 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005397d0);
    /* 005397d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005397d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005397d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005397d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005397d7: mov eax, 0x16 */ r_eax = 0x16u;
    /* 005397dc: mov esp, ebp */ r_esp = r_ebp;
    /* 005397de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005397df: ret  */ FN_RET(0x005397d0); r_esp += 4; return;
}

void f_005397e0(void) /* SlotMachineRubyRiver_3Line::vfunc26 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005397e0);
    /* 005397e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005397e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005397e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005397e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005397e7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005397ea: imul eax, eax, 0x28 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x28u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005397ed: add eax, 0x735508 */ {  u32 a = r_eax; u32 b = 0x735508u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005397f2: mov esp, ebp */ r_esp = r_ebp;
    /* 005397f4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005397f5: ret 4 */ FN_RET(0x005397e0); r_esp += 8; return;
}

