#include "protos.h"

void f_00577120(void) /* SultanMoneyInsert::vfunc48 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00577120);
    /* 00577120: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00577121: mov ebp, esp */ r_ebp = r_esp;
    /* 00577123: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00577124: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00577127: mov eax, dword ptr [0x793458] */ r_eax = R32((u32)(0x793458u));
    /* 0057712c: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0057712f: call 0x5fc360 */ r_esp -= 4; W32(r_esp, 0x577134u); f_005fc360();
    /* 00577134: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00577137: jne 0x577144 */ if (!fZ) goto L_00577144;
L_00577139:; BB(0x00577139);
    /* 00577139: mov ecx, dword ptr [0x793458] */ r_ecx = R32((u32)(0x793458u));
    /* 0057713f: call 0x5dc2e0 */ r_esp -= 4; W32(r_esp, 0x577144u); f_005dc2e0();
L_00577144:; BB(0x00577144);
    /* 00577144: mov esp, ebp */ r_esp = r_ebp;
    /* 00577146: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00577147: ret  */ FN_RET(0x00577120); r_esp += 4; return;
}

