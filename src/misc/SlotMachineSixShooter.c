#include "protos.h"

void f_00534850(void) /* SlotMachineSixShooter::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534850);
    /* 00534850: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534851: mov ebp, esp */ r_ebp = r_esp;
    /* 00534853: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534854: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534857: mov eax, 0x30f076 */ r_eax = 0x30f076u;
    /* 0053485c: mov esp, ebp */ r_esp = r_ebp;
    /* 0053485e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053485f: ret  */ FN_RET(0x00534850); r_esp += 4; return;
}

void f_00534900(void) /* SlotMachineSixShooter::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534900);
    /* 00534900: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534901: mov ebp, esp */ r_ebp = r_esp;
    /* 00534903: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534904: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534907: mov eax, 0xf4 */ r_eax = 0xf4u;
    /* 0053490c: mov esp, ebp */ r_esp = r_ebp;
    /* 0053490e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053490f: ret  */ FN_RET(0x00534900); r_esp += 4; return;
}

void f_00538c50(void) /* SlotMachineSixShooter::vfunc22 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00538c50);
    /* 00538c50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00538c51: mov ebp, esp */ r_ebp = r_esp;
    /* 00538c53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00538c54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00538c57: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00538c5a: imul eax, eax, 0x58 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x58u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00538c5d: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00538c60: mov eax, dword ptr [eax + ecx*4 + 0x72e788] */ r_eax = R32((u32)(r_eax+r_ecx*4+0x72e788u));
    /* 00538c67: mov esp, ebp */ r_esp = r_ebp;
    /* 00538c69: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00538c6a: ret 8 */ FN_RET(0x00538c50); r_esp += 12; return;
}

void f_00538c70(void) /* SlotMachineSixShooter::vfunc21 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00538c70);
    /* 00538c70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00538c71: mov ebp, esp */ r_ebp = r_esp;
    /* 00538c73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00538c74: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00538c77: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00538c7a: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00538c7d: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00538c80: mov eax, dword ptr [eax + ecx*4 + 0x72e890] */ r_eax = R32((u32)(r_eax+r_ecx*4+0x72e890u));
    /* 00538c87: mov esp, ebp */ r_esp = r_ebp;
    /* 00538c89: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00538c8a: ret 8 */ FN_RET(0x00538c70); r_esp += 12; return;
}

void f_00538c90(void) /* SlotMachineSixShooter::vfunc23 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00538c90);
    /* 00538c90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00538c91: mov ebp, esp */ r_ebp = r_esp;
    /* 00538c93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00538c94: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00538c97: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00538c9a: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00538c9d: imul eax, eax, 0x24 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x24u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00538ca0: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00538ca3: mov eax, dword ptr [eax + ecx*4 + 0x72e218] */ r_eax = R32((u32)(r_eax+r_ecx*4+0x72e218u));
    /* 00538caa: mov esp, ebp */ r_esp = r_ebp;
    /* 00538cac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00538cad: ret 8 */ FN_RET(0x00538c90); r_esp += 12; return;
}

void f_00538cb0(void) /* SlotMachineSixShooter::vfunc24 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00538cb0);
    /* 00538cb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00538cb1: mov ebp, esp */ r_ebp = r_esp;
    /* 00538cb3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00538cb4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00538cb7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00538cba: imul eax, eax, 0x28 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x28u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00538cbd: mov eax, dword ptr [eax + 0x72e2a8] */ r_eax = R32((u32)(r_eax+0x72e2a8u));
    /* 00538cc3: mov esp, ebp */ r_esp = r_ebp;
    /* 00538cc5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00538cc6: ret 4 */ FN_RET(0x00538cb0); r_esp += 8; return;
}

void f_00538ce0(void) /* SlotMachineSixShooter::vfunc26 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00538ce0);
    /* 00538ce0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00538ce1: mov ebp, esp */ r_ebp = r_esp;
    /* 00538ce3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00538ce4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00538ce7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00538cea: imul eax, eax, 0x28 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x28u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00538ced: add eax, 0x72e288 */ {  u32 a = r_eax; u32 b = 0x72e288u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00538cf2: mov esp, ebp */ r_esp = r_ebp;
    /* 00538cf4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00538cf5: ret 4 */ FN_RET(0x00538ce0); r_esp += 8; return;
}

