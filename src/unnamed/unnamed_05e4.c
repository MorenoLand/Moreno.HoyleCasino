#include "protos.h"

void f_005e4390(void) /* sub_5E4390 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e4390);
    /* 005e4390: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e4391: mov ebp, esp */ r_ebp = r_esp;
    /* 005e4393: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e4396: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005e4399: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e439c: call 0x615260 */ r_esp -= 4; W32(r_esp, 0x5e43a1u); f_00615260();
    /* 005e43a1: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e43a4: je 0x5e43c5 */ if (fZ) goto L_005e43c5;
L_005e43a6:; BB(0x005e43a6);
    /* 005e43a6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e43a9: call 0x615260 */ r_esp -= 4; W32(r_esp, 0x5e43aeu); f_00615260();
    /* 005e43ae: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005e43b1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e43b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e43b5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e43b8: add ecx, 0x70 */ {  u32 a = r_ecx; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e43bb: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x5e43c0u); f_0060ca40();
    /* 005e43c0: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005e43c3: jmp 0x5e43cc */ goto L_005e43cc;
L_005e43c5:; BB(0x005e43c5);
    /* 005e43c5: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
L_005e43cc:; BB(0x005e43cc);
    /* 005e43cc: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e43cf: mov esp, ebp */ r_esp = r_ebp;
    /* 005e43d1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e43d2: ret  */ FN_RET(0x005e4390); r_esp += 4; return;
}

