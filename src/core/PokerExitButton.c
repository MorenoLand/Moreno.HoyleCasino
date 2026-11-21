#include "protos.h"

void f_005203c0(void) /* PokerExitButton::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005203c0);
    /* 005203c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005203c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005203c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005203c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005203c7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005203ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005203cb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005203ce: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005203d0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005203d3: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 005203d9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5203dbu); call_ind(t); }
    /* 005203db: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005203de: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005203e0: je 0x520422 */ if (fZ) goto L_00520422;
L_005203e2:; BB(0x005203e2);
    /* 005203e2: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005203e5: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 005203e8: and eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005203eb: je 0x520422 */ if (fZ) goto L_00520422;
L_005203ed:; BB(0x005203ed);
    /* 005203ed: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005203f0: mov byte ptr [ecx + 4], 1 */ W8((u32)(r_ecx+0x4u), 0x1u);
    /* 005203f4: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005203f6: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 005203fc: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005203fe: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00520404: mov edx, dword ptr [eax + 0x258] */ r_edx = R32((u32)(r_eax+0x258u));
    /* 0052040a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x52040cu); call_ind(t); }
    /* 0052040c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052040d: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00520412: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00520414: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0052041a: mov eax, dword ptr [edx + 0x334] */ r_eax = R32((u32)(r_edx+0x334u));
    /* 00520420: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x520422u); call_ind(t); }
L_00520422:; BB(0x00520422);
    /* 00520422: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00520425: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00520426: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00520429: call 0x5f4d00 */ r_esp -= 4; W32(r_esp, 0x52042eu); f_005f4d00();
    /* 0052042e: mov esp, ebp */ r_esp = r_ebp;
    /* 00520430: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00520431: ret 4 */ FN_RET(0x005203c0); r_esp += 8; return;
}

