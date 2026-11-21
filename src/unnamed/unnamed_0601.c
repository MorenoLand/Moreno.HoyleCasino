#include "protos.h"

void f_00601730(void) /* sub_601730 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00601730);
    /* 00601730: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00601731: mov ebp, esp */ r_ebp = r_esp;
    /* 00601733: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00601734: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00601737: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 0060173d: call 0x5f3e50 */ r_esp -= 4; W32(r_esp, 0x601742u); f_005f3e50();
    /* 00601742: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00601745: sub eax, dword ptr [ecx + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x10u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00601748: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00601749: call 0x686eba */ r_esp -= 4; W32(r_esp, 0x60174eu); f_00686eba();
    /* 0060174e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00601751: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00601754: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 00601757: cmp eax, dword ptr [ecx + 0x178] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x178u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060175d: jge 0x60176c */ if ((fS==fO)) goto L_0060176c;
L_0060175f:; BB(0x0060175f);
    /* 0060175f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00601762: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 00601765: call 0x5eb220 */ r_esp -= 4; W32(r_esp, 0x60176au); f_005eb220();
    /* 0060176a: jmp 0x60178f */ goto L_0060178f;
L_0060176c:; BB(0x0060176c);
    /* 0060176c: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 00601772: call 0x5f3e50 */ r_esp -= 4; W32(r_esp, 0x601777u); f_005f3e50();
    /* 00601777: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060177a: mov dword ptr [ecx + 0x10], eax */ W32((u32)(r_ecx+0x10u), r_eax);
    /* 0060177d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00601780: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 00601783: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00601786: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00601787: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x60178cu); f_0062fbf0();
    /* 0060178c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0060178f:; BB(0x0060178f);
    /* 0060178f: mov esp, ebp */ r_esp = r_ebp;
    /* 00601791: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00601792: ret  */ FN_RET(0x00601730); r_esp += 4; return;
}

