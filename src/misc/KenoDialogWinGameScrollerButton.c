#include "protos.h"

void f_0058fae0(void) /* KenoDialogWinGameScrollerButton::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0058fae0);
    /* 0058fae0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058fae1: mov ebp, esp */ r_ebp = r_esp;
    /* 0058fae3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0058fae4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0058fae7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058faea: call 0x601a80 */ r_esp -= 4; W32(r_esp, 0x58faefu); f_00601a80();
    /* 0058faef: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058faf2: mov dword ptr [eax], 0x6cde54 */ W32((u32)(r_eax), 0x6cde54u);
    /* 0058faf8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058fafb: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0058fafe: mov dword ptr [ecx + 0x1e0], edx */ W32((u32)(r_ecx+0x1e0u), r_edx);
    /* 0058fb04: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058fb07: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0058fb0a: mov dword ptr [eax + 0x1dc], ecx */ W32((u32)(r_eax+0x1dcu), r_ecx);
    /* 0058fb10: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058fb13: mov esp, ebp */ r_esp = r_ebp;
    /* 0058fb15: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058fb16: ret 8 */ FN_RET(0x0058fae0); r_esp += 12; return;
}

void f_0058fb40(void) /* KenoDialogWinGameScrollerButton::vfunc48 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0058fb40);
    /* 0058fb40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058fb41: mov ebp, esp */ r_ebp = r_esp;
    /* 0058fb43: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0058fb46: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0058fb49: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058fb4c: mov ecx, dword ptr [eax + 0x1e0] */ r_ecx = R32((u32)(r_eax+0x1e0u));
    /* 0058fb52: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0058fb55: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058fb59: je 0x58fb63 */ if (fZ) goto L_0058fb63;
L_0058fb5b:; BB(0x0058fb5b);
    /* 0058fb5b: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058fb5f: je 0x58fb73 */ if (fZ) goto L_0058fb73;
L_0058fb61:; BB(0x0058fb61);
    /* 0058fb61: jmp 0x58fb81 */ goto L_0058fb81;
L_0058fb63:; BB(0x0058fb63);
    /* 0058fb63: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058fb66: mov ecx, dword ptr [edx + 0x1dc] */ r_ecx = R32((u32)(r_edx+0x1dcu));
    /* 0058fb6c: call 0x58f800 */ r_esp -= 4; W32(r_esp, 0x58fb71u); f_0058f800();
    /* 0058fb71: jmp 0x58fb81 */ goto L_0058fb81;
L_0058fb73:; BB(0x0058fb73);
    /* 0058fb73: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058fb76: mov ecx, dword ptr [eax + 0x1dc] */ r_ecx = R32((u32)(r_eax+0x1dcu));
    /* 0058fb7c: call 0x58f8a0 */ r_esp -= 4; W32(r_esp, 0x58fb81u); f_0058f8a0();
L_0058fb81:; BB(0x0058fb81);
    /* 0058fb81: mov esp, ebp */ r_esp = r_ebp;
    /* 0058fb83: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058fb84: ret  */ FN_RET(0x0058fb40); r_esp += 4; return;
}

