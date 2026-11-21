#include "protos.h"

void f_005558c0(void) /* DealCardCycle::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005558c0);
    /* 005558c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005558c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005558c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005558c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005558c7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005558ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005558cb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005558ce: call 0x6010a0 */ r_esp -= 4; W32(r_esp, 0x5558d3u); f_006010a0();
    /* 005558d3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005558d6: mov dword ptr [ecx], 0x6c8688 */ W32((u32)(r_ecx), 0x6c8688u);
    /* 005558dc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005558df: mov esp, ebp */ r_esp = r_ebp;
    /* 005558e1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005558e2: ret 4 */ FN_RET(0x005558c0); r_esp += 8; return;
}

void f_005558f0(void) /* DealCardCycle::vfunc5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005558f0);
    /* 005558f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005558f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005558f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005558f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005558f7: mov eax, dword ptr [0x793424] */ r_eax = R32((u32)(0x793424u));
    /* 005558fc: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 005558ff: mov edx, dword ptr [0x793424] */ r_edx = R32((u32)(0x793424u));
    /* 00555905: mov eax, dword ptr [edx + ecx*4 + 0x18] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x18u));
    /* 00555909: mov ecx, dword ptr [0x793424] */ r_ecx = R32((u32)(0x793424u));
    /* 0055590f: mov edx, dword ptr [ecx + 0x2c] */ r_edx = R32((u32)(r_ecx+0x2cu));
    /* 00555912: mov ecx, dword ptr [0x793424] */ r_ecx = R32((u32)(0x793424u));
    /* 00555918: mov ecx, dword ptr [ecx + edx*4 + 0x18] */ r_ecx = R32((u32)(r_ecx+r_edx*4+0x18u));
    /* 0055591c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0055591e: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00555921: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x555923u); call_ind(t); }
    /* 00555923: mov ecx, dword ptr [0x793424] */ r_ecx = R32((u32)(0x793424u));
    /* 00555929: mov edx, dword ptr [ecx + 0x2c] */ r_edx = R32((u32)(r_ecx+0x2cu));
    /* 0055592c: mov eax, dword ptr [0x793424] */ r_eax = R32((u32)(0x793424u));
    /* 00555931: mov ecx, dword ptr [eax + edx*4 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 00555935: mov edx, dword ptr [0x793424] */ r_edx = R32((u32)(0x793424u));
    /* 0055593b: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 0055593e: mov edx, dword ptr [0x793424] */ r_edx = R32((u32)(0x793424u));
    /* 00555944: mov eax, dword ptr [edx + eax*4 + 4] */ r_eax = R32((u32)(r_edx+r_eax*4+0x4u));
    /* 00555948: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0055594a: mov ecx, eax */ r_ecx = r_eax;
    /* 0055594c: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0055594f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x555951u); call_ind(t); }
    /* 00555951: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00555954: call 0x6005d0 */ r_esp -= 4; W32(r_esp, 0x555959u); f_006005d0();
    /* 00555959: mov esp, ebp */ r_esp = r_ebp;
    /* 0055595b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055595c: ret  */ FN_RET(0x005558f0); r_esp += 4; return;
}

