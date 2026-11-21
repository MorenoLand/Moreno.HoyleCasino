#include "protos.h"

void f_00689db0(void) /* Timer::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00689db0);
    /* 00689db0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00689db1: mov ebp, esp */ r_ebp = r_esp;
    /* 00689db3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00689db4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00689db7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00689dba: call 0x62aea0 */ r_esp -= 4; W32(r_esp, 0x689dbfu); f_0062aea0();
    /* 00689dbf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00689dc2: mov dword ptr [eax], 0x6e5608 */ W32((u32)(r_eax), 0x6e5608u);
    /* 00689dc8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00689dcb: mov dword ptr [ecx], 0x6e55f8 */ W32((u32)(r_ecx), 0x6e55f8u);
    /* 00689dd1: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00689dd3: push 0x1631bcc */ { u32 v = 0x1631bccu; r_esp -= 4; W32(r_esp, v); }
    /* 00689dd8: call dword ptr [0x6b248c] */ { u32 t = R32((u32)(0x6b248cu)); r_esp -= 4; W32(r_esp, 0x689ddeu); call_ind(t); }
    /* 00689dde: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00689de1: mov esp, ebp */ r_esp = r_ebp;
    /* 00689de3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00689de4: ret  */ FN_RET(0x00689db0); r_esp += 4; return;
}

void f_00689e10(void) /* Timer::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00689e10);
    /* 00689e10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00689e11: mov ebp, esp */ r_ebp = r_esp;
    /* 00689e13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00689e14: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00689e17: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00689e1a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00689e1c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00689e1f: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00689e22: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x689e24u); call_ind(t); }
    /* 00689e24: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00689e27: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00689e29: mov ecx, 0x32 */ r_ecx = 0x32u;
    /* 00689e2e: div ecx */ { u32 d = r_ecx; if (!d) UNSUP(0x00689e2e, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x00689e2e, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00689e30: mov esp, ebp */ r_esp = r_ebp;
    /* 00689e32: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00689e33: ret  */ FN_RET(0x00689e10); r_esp += 4; return;
}

void f_00689e40(void) /* Timer::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00689e40);
    /* 00689e40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00689e41: mov ebp, esp */ r_ebp = r_esp;
    /* 00689e43: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00689e46: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00689e49: mov eax, dword ptr [0x1631bcc] */ r_eax = R32((u32)(0x1631bccu));
    /* 00689e4e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00689e4f: call dword ptr [0x6b2484] */ { u32 t = R32((u32)(0x6b2484u)); r_esp -= 4; W32(r_esp, 0x689e55u); call_ind(t); }
    /* 00689e55: call dword ptr [0x6b2474] */ { u32 t = R32((u32)(0x6b2474u)); r_esp -= 4; W32(r_esp, 0x689e5bu); call_ind(t); }
    /* 00689e5b: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00689e5e: mov ecx, dword ptr [0x1631bcc] */ r_ecx = R32((u32)(0x1631bccu));
    /* 00689e64: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00689e65: call dword ptr [0x6b2488] */ { u32 t = R32((u32)(0x6b2488u)); r_esp -= 4; W32(r_esp, 0x689e6bu); call_ind(t); }
    /* 00689e6b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00689e6e: mov esp, ebp */ r_esp = r_ebp;
    /* 00689e70: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00689e71: ret  */ FN_RET(0x00689e40); r_esp += 4; return;
}

