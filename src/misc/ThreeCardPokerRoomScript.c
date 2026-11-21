#include "protos.h"

void f_0053fba0(void) /* ThreeCardPokerRoomScript::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053fba0);
    /* 0053fba0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053fba1: mov ebp, esp */ r_ebp = r_esp;
    /* 0053fba3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053fba6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0053fba9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053fbac: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0053fbaf: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0053fbb2: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053fbb6: je 0x53fbc3 */ if (fZ) goto L_0053fbc3;
L_0053fbb8:; BB(0x0053fbb8);
    /* 0053fbb8: cmp dword ptr [ebp - 8], 0x1f4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1f4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053fbbf: je 0x53fbd0 */ if (fZ) goto L_0053fbd0;
L_0053fbc1:; BB(0x0053fbc1);
    /* 0053fbc1: jmp 0x53fbfb */ goto L_0053fbfb;
L_0053fbc3:; BB(0x0053fbc3);
    /* 0053fbc3: mov ecx, dword ptr [0x7933f0] */ r_ecx = R32((u32)(0x7933f0u));
    /* 0053fbc9: call 0x53d3c0 */ r_esp -= 4; W32(r_esp, 0x53fbceu); f_0053d3c0();
    /* 0053fbce: jmp 0x53fc16 */ goto L_0053fc16;
L_0053fbd0:; BB(0x0053fbd0);
    /* 0053fbd0: mov ecx, dword ptr [0x7933ec] */ r_ecx = R32((u32)(0x7933ecu));
    /* 0053fbd6: call 0x5408b0 */ r_esp -= 4; W32(r_esp, 0x53fbdbu); f_005408b0();
    /* 0053fbdb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0053fbdd: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053fbe0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0053fbe2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053fbe5: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0053fbe8: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x53fbeau); call_ind(t); }
    /* 0053fbea: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053fbec: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053fbef: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0053fbf1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053fbf4: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0053fbf7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53fbf9u); call_ind(t); }
    /* 0053fbf9: jmp 0x53fc16 */ goto L_0053fc16;
L_0053fbfb:; BB(0x0053fbfb);
    /* 0053fbfb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0053fbfd: jne 0x53fc16 */ if (!fZ) goto L_0053fc16;
L_0053fbff:; BB(0x0053fbff);
    /* 0053fbff: push 0x1b5 */ { u32 v = 0x1b5u; r_esp -= 4; W32(r_esp, v); }
    /* 0053fc04: push 0x6c6198 */ { u32 v = 0x6c6198u; r_esp -= 4; W32(r_esp, v); }
    /* 0053fc09: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0053fc0e: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x53fc13u); f_005e9f20();
    /* 0053fc13: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0053fc16:; BB(0x0053fc16);
    /* 0053fc16: mov esp, ebp */ r_esp = r_ebp;
    /* 0053fc18: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053fc19: ret  */ FN_RET(0x0053fba0); r_esp += 4; return;
}

