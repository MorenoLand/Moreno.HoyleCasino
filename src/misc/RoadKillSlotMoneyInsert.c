#include "protos.h"

void f_0056fc50(void) /* RoadKillSlotMoneyInsert::vfunc48 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0056fc50);
    /* 0056fc50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056fc51: mov ebp, esp */ r_ebp = r_esp;
    /* 0056fc53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056fc54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0056fc57: mov eax, dword ptr [0x79344c] */ r_eax = R32((u32)(0x79344cu));
    /* 0056fc5c: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0056fc5f: call 0x5fc360 */ r_esp -= 4; W32(r_esp, 0x56fc64u); f_005fc360();
    /* 0056fc64: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056fc67: jne 0x56fc74 */ if (!fZ) goto L_0056fc74;
L_0056fc69:; BB(0x0056fc69);
    /* 0056fc69: mov ecx, dword ptr [0x79344c] */ r_ecx = R32((u32)(0x79344cu));
    /* 0056fc6f: call 0x5dc2e0 */ r_esp -= 4; W32(r_esp, 0x56fc74u); f_005dc2e0();
L_0056fc74:; BB(0x0056fc74);
    /* 0056fc74: mov esp, ebp */ r_esp = r_ebp;
    /* 0056fc76: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056fc77: ret  */ FN_RET(0x0056fc50); r_esp += 4; return;
}

