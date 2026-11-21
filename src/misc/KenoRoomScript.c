#include "protos.h"

void f_00583990(void) /* KenoRoomScript::vfunc5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00583990);
    /* 00583990: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00583991: mov ebp, esp */ r_ebp = r_esp;
    /* 00583993: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00583996: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00583999: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0058399c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058399d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005839a0: call 0x5fc3a0 */ r_esp -= 4; W32(r_esp, 0x5839a5u); f_005fc3a0();
    /* 005839a5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005839a8: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 005839ab: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005839ae: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005839b2: je 0x5839b6 */ if (fZ) goto L_005839b6;
L_005839b4:; BB(0x005839b4);
    /* 005839b4: jmp 0x5839c1 */ goto L_005839c1;
L_005839b6:; BB(0x005839b6);
    /* 005839b6: mov ecx, dword ptr [0x79357c] */ r_ecx = R32((u32)(0x79357cu));
    /* 005839bc: call 0x5835b0 */ r_esp -= 4; W32(r_esp, 0x5839c1u); f_005835b0();
L_005839c1:; BB(0x005839c1);
    /* 005839c1: mov esp, ebp */ r_esp = r_ebp;
    /* 005839c3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005839c4: ret 4 */ FN_RET(0x00583990); r_esp += 8; return;
}

