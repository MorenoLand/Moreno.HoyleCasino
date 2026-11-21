#include "protos.h"

void f_005270b0(void) /* RouletteRoomScript::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005270b0);
    /* 005270b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005270b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005270b3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005270b6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005270b9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005270bc: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005270bf: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005270c2: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005270c6: je 0x5270d3 */ if (fZ) goto L_005270d3;
L_005270c8:; BB(0x005270c8);
    /* 005270c8: cmp dword ptr [ebp - 8], 0x1f4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1f4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005270cf: je 0x5270e0 */ if (fZ) goto L_005270e0;
L_005270d1:; BB(0x005270d1);
    /* 005270d1: jmp 0x52710b */ goto L_0052710b;
L_005270d3:; BB(0x005270d3);
    /* 005270d3: mov ecx, dword ptr [0x793378] */ r_ecx = R32((u32)(0x793378u));
    /* 005270d9: call 0x524500 */ r_esp -= 4; W32(r_esp, 0x5270deu); f_00524500();
    /* 005270de: jmp 0x527126 */ goto L_00527126;
L_005270e0:; BB(0x005270e0);
    /* 005270e0: mov ecx, dword ptr [0x793374] */ r_ecx = R32((u32)(0x793374u));
    /* 005270e6: call 0x527e50 */ r_esp -= 4; W32(r_esp, 0x5270ebu); f_00527e50();
    /* 005270eb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005270ed: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005270f0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005270f2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005270f5: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005270f8: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5270fau); call_ind(t); }
    /* 005270fa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005270fc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005270ff: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00527101: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00527104: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00527107: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x527109u); call_ind(t); }
    /* 00527109: jmp 0x527126 */ goto L_00527126;
L_0052710b:; BB(0x0052710b);
    /* 0052710b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0052710d: jne 0x527126 */ if (!fZ) goto L_00527126;
L_0052710f:; BB(0x0052710f);
    /* 0052710f: push 0x213 */ { u32 v = 0x213u; r_esp -= 4; W32(r_esp, v); }
    /* 00527114: push 0x6c357c */ { u32 v = 0x6c357cu; r_esp -= 4; W32(r_esp, v); }
    /* 00527119: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0052711e: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x527123u); f_005e9f20();
    /* 00527123: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00527126:; BB(0x00527126);
    /* 00527126: mov esp, ebp */ r_esp = r_ebp;
    /* 00527128: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00527129: ret  */ FN_RET(0x005270b0); r_esp += 4; return;
}

