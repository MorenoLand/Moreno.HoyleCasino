#include "protos.h"

void f_00534340(void) /* ClassicSlotMachineUnit::vfunc5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534340);
    /* 00534340: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534341: mov ebp, esp */ r_ebp = r_esp;
    /* 00534343: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00534346: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00534349: mov dword ptr [ebp - 0xc], 0xc7 */ W32((u32)(r_ebp+0xfffffff4u), 0xc7u);
    /* 00534350: mov dword ptr [ebp - 8], 0x116 */ W32((u32)(r_ebp+0xfffffff8u), 0x116u);
    /* 00534357: mov dword ptr [ebp - 4], 0x164 */ W32((u32)(r_ebp+0xfffffffcu), 0x164u);
    /* 0053435e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00534361: mov eax, dword ptr [ebp + eax*4 - 0xc] */ r_eax = R32((u32)(r_ebp+r_eax*4+0xfffffff4u));
    /* 00534365: mov esp, ebp */ r_esp = r_ebp;
    /* 00534367: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534368: ret 4 */ FN_RET(0x00534340); r_esp += 8; return;
}

void f_005343a0(void) /* ClassicSlotMachineUnit::vfunc26 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005343a0);
    /* 005343a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005343a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005343a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005343a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005343a7: mov eax, 0x793398 */ r_eax = 0x793398u;
    /* 005343ac: mov esp, ebp */ r_esp = r_ebp;
    /* 005343ae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005343af: ret 4 */ FN_RET(0x005343a0); r_esp += 8; return;
}

void f_005385f0(void) /* ClassicSlotMachineUnit::vfunc13 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005385f0);
    /* 005385f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005385f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005385f3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005385f6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005385f9: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 005385fe: mov ecx, dword ptr [eax + 0x4f10] */ r_ecx = R32((u32)(r_eax+0x4f10u));
    /* 00538604: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00538607: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053860a: mov eax, dword ptr [edx*4 + 0x737090] */ r_eax = R32((u32)(r_edx*4+0x737090u));
    /* 00538611: mov esp, ebp */ r_esp = r_ebp;
    /* 00538613: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00538614: ret  */ FN_RET(0x005385f0); r_esp += 4; return;
}

