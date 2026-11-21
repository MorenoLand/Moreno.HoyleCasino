#include "protos.h"

void f_00538620(void) /* SlotMachineBugOut::vfunc22 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00538620);
    /* 00538620: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00538621: mov ebp, esp */ r_ebp = r_esp;
    /* 00538623: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00538624: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00538627: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053862a: imul eax, eax, 0x58 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x58u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0053862d: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00538630: mov eax, dword ptr [eax + ecx*4 + 0x72ac98] */ r_eax = R32((u32)(r_eax+r_ecx*4+0x72ac98u));
    /* 00538637: mov esp, ebp */ r_esp = r_ebp;
    /* 00538639: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053863a: ret 8 */ FN_RET(0x00538620); r_esp += 12; return;
}

void f_00538640(void) /* SlotMachineBugOut::vfunc21 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00538640);
    /* 00538640: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00538641: mov ebp, esp */ r_ebp = r_esp;
    /* 00538643: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00538644: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00538647: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053864a: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0053864d: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00538650: mov eax, dword ptr [eax + ecx*4 + 0x72ada0] */ r_eax = R32((u32)(r_eax+r_ecx*4+0x72ada0u));
    /* 00538657: mov esp, ebp */ r_esp = r_ebp;
    /* 00538659: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053865a: ret 8 */ FN_RET(0x00538640); r_esp += 12; return;
}

void f_00538660(void) /* SlotMachineBugOut::vfunc23 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00538660);
    /* 00538660: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00538661: mov ebp, esp */ r_ebp = r_esp;
    /* 00538663: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00538664: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00538667: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053866a: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0053866d: imul eax, eax, 0x1c */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x1cu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00538670: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00538673: mov eax, dword ptr [eax + ecx*4 + 0x72ac28] */ r_eax = R32((u32)(r_eax+r_ecx*4+0x72ac28u));
    /* 0053867a: mov esp, ebp */ r_esp = r_ebp;
    /* 0053867c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053867d: ret 8 */ FN_RET(0x00538660); r_esp += 12; return;
}

void f_00538680(void) /* SlotMachineBugOut::vfunc24 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00538680);
    /* 00538680: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00538681: mov ebp, esp */ r_ebp = r_esp;
    /* 00538683: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00538684: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00538687: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053868a: imul eax, eax, 0x28 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x28u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0053868d: mov eax, dword ptr [eax + 0x72b0c0] */ r_eax = R32((u32)(r_eax+0x72b0c0u));
    /* 00538693: mov esp, ebp */ r_esp = r_ebp;
    /* 00538695: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00538696: ret 4 */ FN_RET(0x00538680); r_esp += 8; return;
}

void f_005386a0(void) /* SlotMachineBugOut::vfunc25 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005386a0);
    /* 005386a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005386a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005386a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005386a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005386a7: mov eax, 7 */ r_eax = 0x7u;
    /* 005386ac: mov esp, ebp */ r_esp = r_ebp;
    /* 005386ae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005386af: ret  */ FN_RET(0x005386a0); r_esp += 4; return;
}

void f_005386b0(void) /* SlotMachineBugOut::vfunc26 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005386b0);
    /* 005386b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005386b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005386b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005386b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005386b7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005386ba: imul eax, eax, 0x28 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x28u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005386bd: add eax, 0x72b0a0 */ {  u32 a = r_eax; u32 b = 0x72b0a0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005386c2: mov esp, ebp */ r_esp = r_ebp;
    /* 005386c4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005386c5: ret 4 */ FN_RET(0x005386b0); r_esp += 8; return;
}

