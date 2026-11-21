#include "protos.h"

void f_00534fd0(void) /* SlotMachineMargaritaMadness_Prog::vfunc10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534fd0);
    /* 00534fd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534fd1: mov ebp, esp */ r_ebp = r_esp;
    /* 00534fd3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534fd4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534fd7: mov eax, 0x30f0ab */ r_eax = 0x30f0abu;
    /* 00534fdc: mov esp, ebp */ r_esp = r_ebp;
    /* 00534fde: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534fdf: ret  */ FN_RET(0x00534fd0); r_esp += 4; return;
}

void f_005395f0(void) /* SlotMachineMargaritaMadness_Prog::vfunc21 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005395f0);
    /* 005395f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005395f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005395f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005395f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005395f7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005395fa: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005395fd: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00539600: mov eax, dword ptr [eax + ecx*4 + 0x734950] */ r_eax = R32((u32)(r_eax+r_ecx*4+0x734950u));
    /* 00539607: mov esp, ebp */ r_esp = r_ebp;
    /* 00539609: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053960a: ret 8 */ FN_RET(0x005395f0); r_esp += 12; return;
}

void f_00539610(void) /* SlotMachineMargaritaMadness_Prog::vfunc22 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00539610);
    /* 00539610: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00539611: mov ebp, esp */ r_ebp = r_esp;
    /* 00539613: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00539614: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00539617: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053961a: imul eax, eax, 0x58 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x58u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0053961d: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00539620: mov eax, dword ptr [eax + ecx*4 + 0x734848] */ r_eax = R32((u32)(r_eax+r_ecx*4+0x734848u));
    /* 00539627: mov esp, ebp */ r_esp = r_ebp;
    /* 00539629: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053962a: ret 8 */ FN_RET(0x00539610); r_esp += 12; return;
}

void f_00539630(void) /* SlotMachineMargaritaMadness_Prog::vfunc24 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00539630);
    /* 00539630: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00539631: mov ebp, esp */ r_ebp = r_esp;
    /* 00539633: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00539634: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00539637: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053963a: imul eax, eax, 0x28 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x28u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0053963d: mov eax, dword ptr [eax + 0x733e00] */ r_eax = R32((u32)(r_eax+0x733e00u));
    /* 00539643: mov esp, ebp */ r_esp = r_ebp;
    /* 00539645: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00539646: ret 4 */ FN_RET(0x00539630); r_esp += 8; return;
}

void f_00539650(void) /* SlotMachineMargaritaMadness_Prog::vfunc23 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00539650);
    /* 00539650: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00539651: mov ebp, esp */ r_ebp = r_esp;
    /* 00539653: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00539654: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00539657: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053965a: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0053965d: imul eax, eax, 0x34 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x34u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00539660: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00539663: mov eax, dword ptr [eax + ecx*4 + 0x7339e0] */ r_eax = R32((u32)(r_eax+r_ecx*4+0x7339e0u));
    /* 0053966a: mov esp, ebp */ r_esp = r_ebp;
    /* 0053966c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053966d: ret 8 */ FN_RET(0x00539650); r_esp += 12; return;
}

void f_00539670(void) /* SlotMachineMargaritaMadness_Prog::vfunc25 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00539670);
    /* 00539670: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00539671: mov ebp, esp */ r_ebp = r_esp;
    /* 00539673: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00539674: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00539677: mov eax, 0xf */ r_eax = 0xfu;
    /* 0053967c: mov esp, ebp */ r_esp = r_ebp;
    /* 0053967e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053967f: ret  */ FN_RET(0x00539670); r_esp += 4; return;
}

void f_00539680(void) /* SlotMachineMargaritaMadness_Prog::vfunc26 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00539680);
    /* 00539680: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00539681: mov ebp, esp */ r_ebp = r_esp;
    /* 00539683: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00539684: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00539687: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053968a: imul eax, eax, 0x28 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x28u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0053968d: add eax, 0x733de0 */ {  u32 a = r_eax; u32 b = 0x733de0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00539692: mov esp, ebp */ r_esp = r_ebp;
    /* 00539694: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00539695: ret 4 */ FN_RET(0x00539680); r_esp += 8; return;
}

