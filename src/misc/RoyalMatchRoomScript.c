#include "protos.h"

void f_005b1f00(void) /* RoyalMatchRoomScript::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b1f00);
    /* 005b1f00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b1f01: mov ebp, esp */ r_ebp = r_esp;
    /* 005b1f03: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b1f06: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b1f09: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b1f0c: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005b1f0f: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005b1f12: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b1f16: je 0x5b1f23 */ if (fZ) goto L_005b1f23;
L_005b1f18:; BB(0x005b1f18);
    /* 005b1f18: cmp dword ptr [ebp - 8], 0x1f4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1f4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b1f1f: je 0x5b1f30 */ if (fZ) goto L_005b1f30;
L_005b1f21:; BB(0x005b1f21);
    /* 005b1f21: jmp 0x5b1f5b */ goto L_005b1f5b;
L_005b1f23:; BB(0x005b1f23);
    /* 005b1f23: mov ecx, dword ptr [0x7935fc] */ r_ecx = R32((u32)(0x7935fcu));
    /* 005b1f29: call 0x5af1b0 */ r_esp -= 4; W32(r_esp, 0x5b1f2eu); f_005af1b0();
    /* 005b1f2e: jmp 0x5b1f76 */ goto L_005b1f76;
L_005b1f30:; BB(0x005b1f30);
    /* 005b1f30: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005b1f36: call 0x5b6a60 */ r_esp -= 4; W32(r_esp, 0x5b1f3bu); f_005b6a60();
    /* 005b1f3b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1f3d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b1f40: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005b1f42: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b1f45: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005b1f48: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5b1f4au); call_ind(t); }
    /* 005b1f4a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1f4c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b1f4f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005b1f51: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b1f54: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 005b1f57: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5b1f59u); call_ind(t); }
    /* 005b1f59: jmp 0x5b1f76 */ goto L_005b1f76;
L_005b1f5b:; BB(0x005b1f5b);
    /* 005b1f5b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 005b1f5d: jne 0x5b1f76 */ if (!fZ) goto L_005b1f76;
L_005b1f5f:; BB(0x005b1f5f);
    /* 005b1f5f: push 0x2ed */ { u32 v = 0x2edu; r_esp -= 4; W32(r_esp, v); }
    /* 005b1f64: push 0x6d01a8 */ { u32 v = 0x6d01a8u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1f69: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1f6e: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5b1f73u); f_005e9f20();
    /* 005b1f73: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005b1f76:; BB(0x005b1f76);
    /* 005b1f76: mov esp, ebp */ r_esp = r_ebp;
    /* 005b1f78: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b1f79: ret  */ FN_RET(0x005b1f00); r_esp += 4; return;
}

