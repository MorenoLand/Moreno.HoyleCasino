#include "protos.h"

void f_00600da0(void) /* sciCycleReverseWithCue::vfunc5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00600da0);
    /* 00600da0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00600da1: mov ebp, esp */ r_ebp = r_esp;
    /* 00600da3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00600da4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00600da7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600daa: cmp dword ptr [eax + 8], 0 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00600dae: je 0x600dc5 */ if (fZ) goto L_00600dc5;
L_00600db0:; BB(0x00600db0);
    /* 00600db0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00600db2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600db5: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00600db8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600dbb: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00600dbe: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00600dc0: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00600dc3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x600dc5u); call_ind(t); }
L_00600dc5:; BB(0x00600dc5);
    /* 00600dc5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600dc8: call 0x600d20 */ r_esp -= 4; W32(r_esp, 0x600dcdu); f_00600d20();
    /* 00600dcd: mov esp, ebp */ r_esp = r_ebp;
    /* 00600dcf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00600dd0: ret  */ FN_RET(0x00600da0); r_esp += 4; return;
}

