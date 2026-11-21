#include "protos.h"

void f_0063f1c0(void) /* sub_63F1C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0063f1c0);
    /* 0063f1c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063f1c1: mov ebp, esp */ r_ebp = r_esp;
    /* 0063f1c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063f1c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0063f1c7: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063f1cb: jne 0x63f1da */ if (!fZ) goto L_0063f1da;
L_0063f1cd:; BB(0x0063f1cd);
    /* 0063f1cd: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0063f1d0: imul eax, eax, 0x64 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x64u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0063f1d3: add eax, 0x32 */ {  u32 a = r_eax; u32 b = 0x32u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063f1d6: jmp 0x63f1e7 */ goto L_0063f1e7;
L_0063f1da:; BB(0x0063f1da);
    /* 0063f1da: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0063f1dd: imul eax, eax, 0x64 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x64u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0063f1e0: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0063f1e3: lea eax, [eax + ecx + 0x34] */ r_eax = (u32)(r_eax+r_ecx+0x34u);
L_0063f1e7:; BB(0x0063f1e7);
    /* 0063f1e7: mov esp, ebp */ r_esp = r_ebp;
    /* 0063f1e9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063f1ea: ret 8 */ FN_RET(0x0063f1c0); r_esp += 12; return;
}

void f_0063f1f0(void) /* sub_63F1F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0063f1f0);
    /* 0063f1f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063f1f1: mov ebp, esp */ r_ebp = r_esp;
    /* 0063f1f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063f1f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0063f1f7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0063f1fa: sub eax, 0x34 */ {  u32 a = r_eax; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0063f1fd: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0063f1fe: mov ecx, 0x64 */ r_ecx = 0x64u;
    /* 0063f203: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0063f203, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0063f203, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0063f205: mov esp, ebp */ r_esp = r_ebp;
    /* 0063f207: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063f208: ret 4 */ FN_RET(0x0063f1f0); r_esp += 8; return;
}

