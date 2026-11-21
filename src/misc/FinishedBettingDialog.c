#include "protos.h"

void f_005cdad0(void) /* FinishedBettingDialog::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cdad0);
    /* 005cdad0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cdad1: mov ebp, esp */ r_ebp = r_esp;
    /* 005cdad3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cdad4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005cdad7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cdad9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cdadb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cdade: call 0x5f71f0 */ r_esp -= 4; W32(r_esp, 0x5cdae3u); f_005f71f0();
    /* 005cdae3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cdae6: mov dword ptr [eax], 0x6d2b04 */ W32((u32)(r_eax), 0x6d2b04u);
    /* 005cdaec: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cdaef: mov esp, ebp */ r_esp = r_ebp;
    /* 005cdaf1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cdaf2: ret  */ FN_RET(0x005cdad0); r_esp += 4; return;
}

void f_005cdb20(void) /* FinishedBettingDialog::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cdb20);
    /* 005cdb20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cdb21: mov ebp, esp */ r_ebp = r_esp;
    /* 005cdb23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cdb24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005cdb27: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cdb29: push 0x429 */ { u32 v = 0x429u; r_esp -= 4; W32(r_esp, v); }
    /* 005cdb2e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cdb31: call 0x5f83d0 */ r_esp -= 4; W32(r_esp, 0x5cdb36u); f_005f83d0();
    /* 005cdb36: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 005cdb38: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cdb3b: call 0x5f89d0 */ r_esp -= 4; W32(r_esp, 0x5cdb40u); f_005f89d0();
    /* 005cdb40: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cdb42: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005cdb44: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cdb46: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cdb48: push 0x2b */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 005cdb4a: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 005cdb4c: push 0x35 */ { u32 v = 0x35u; r_esp -= 4; W32(r_esp, v); }
    /* 005cdb4e: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 005cdb50: push 0x6b6940 */ { u32 v = 0x6b6940u; r_esp -= 4; W32(r_esp, v); }
    /* 005cdb55: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5cdb5au); f_00630f40();
    /* 005cdb5a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cdb5d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cdb5e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cdb60: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cdb62: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cdb65: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x5cdb6au); f_005fa5b0();
    /* 005cdb6a: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 005cdb6c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cdb6e: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 005cdb70: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 005cdb72: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 005cdb74: push 0x6d2b44 */ { u32 v = 0x6d2b44u; r_esp -= 4; W32(r_esp, v); }
    /* 005cdb79: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5cdb7eu); f_00630f40();
    /* 005cdb7e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cdb81: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cdb82: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cdb84: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 005cdb86: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 005cdb88: push 0x30d4e5 */ { u32 v = 0x30d4e5u; r_esp -= 4; W32(r_esp, v); }
    /* 005cdb8d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cdb8f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cdb91: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cdb94: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x5cdb99u); f_005f9de0();
    /* 005cdb99: mov esp, ebp */ r_esp = r_ebp;
    /* 005cdb9b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cdb9c: ret  */ FN_RET(0x005cdb20); r_esp += 4; return;
}

void f_005cdba0(void) /* FinishedBettingDialog::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cdba0);
    /* 005cdba0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cdba1: mov ebp, esp */ r_ebp = r_esp;
    /* 005cdba3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cdba4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005cdba7: mov eax, dword ptr [0x7947e4] */ r_eax = R32((u32)(0x7947e4u));
    /* 005cdbac: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cdbae: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005cdbb4: mov eax, dword ptr [edx + 0x270] */ r_eax = R32((u32)(r_edx+0x270u));
    /* 005cdbba: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5cdbbcu); call_ind(t); }
    /* 005cdbbc: mov esp, ebp */ r_esp = r_ebp;
    /* 005cdbbe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cdbbf: ret 4 */ FN_RET(0x005cdba0); r_esp += 8; return;
}

