#include "protos.h"

void f_005480b0(void) /* VideoBlackjackRoomScript::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005480b0);
    /* 005480b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005480b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005480b3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005480b6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005480b9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005480bc: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005480bf: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005480c2: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005480c6: je 0x5480ca */ if (fZ) goto L_005480ca;
L_005480c8:; BB(0x005480c8);
    /* 005480c8: jmp 0x5480d7 */ goto L_005480d7;
L_005480ca:; BB(0x005480ca);
    /* 005480ca: mov ecx, dword ptr [0x793408] */ r_ecx = R32((u32)(0x793408u));
    /* 005480d0: call 0x545bb0 */ r_esp -= 4; W32(r_esp, 0x5480d5u); f_00545bb0();
    /* 005480d5: jmp 0x5480f2 */ goto L_005480f2;
L_005480d7:; BB(0x005480d7);
    /* 005480d7: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 005480d9: jne 0x5480f2 */ if (!fZ) goto L_005480f2;
L_005480db:; BB(0x005480db);
    /* 005480db: push 0x15a */ { u32 v = 0x15au; r_esp -= 4; W32(r_esp, v); }
    /* 005480e0: push 0x6c6c64 */ { u32 v = 0x6c6c64u; r_esp -= 4; W32(r_esp, v); }
    /* 005480e5: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 005480ea: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5480efu); f_005e9f20();
    /* 005480ef: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005480f2:; BB(0x005480f2);
    /* 005480f2: mov esp, ebp */ r_esp = r_ebp;
    /* 005480f4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005480f5: ret  */ FN_RET(0x005480b0); r_esp += 4; return;
}

