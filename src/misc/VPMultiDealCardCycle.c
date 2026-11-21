#include "protos.h"

void f_00565210(void) /* VPMultiDealCardCycle::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00565210);
    /* 00565210: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00565211: mov ebp, esp */ r_ebp = r_esp;
    /* 00565213: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00565214: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00565217: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0056521a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056521b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056521e: call 0x6010a0 */ r_esp -= 4; W32(r_esp, 0x565223u); f_006010a0();
    /* 00565223: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00565226: mov dword ptr [ecx], 0x6c9ab8 */ W32((u32)(r_ecx), 0x6c9ab8u);
    /* 0056522c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056522f: mov esp, ebp */ r_esp = r_ebp;
    /* 00565231: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00565232: ret 4 */ FN_RET(0x00565210); r_esp += 8; return;
}

void f_00565240(void) /* VPMultiDealCardCycle::vfunc5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00565240);
    /* 00565240: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00565241: mov ebp, esp */ r_ebp = r_esp;
    /* 00565243: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00565244: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00565247: mov eax, dword ptr [0x793440] */ r_eax = R32((u32)(0x793440u));
    /* 0056524c: mov ecx, dword ptr [eax + 0xf8] */ r_ecx = R32((u32)(r_eax+0xf8u));
    /* 00565252: mov edx, dword ptr [0x793440] */ r_edx = R32((u32)(0x793440u));
    /* 00565258: mov eax, dword ptr [edx + ecx*4 + 0x1c] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x1cu));
    /* 0056525c: mov ecx, dword ptr [0x793440] */ r_ecx = R32((u32)(0x793440u));
    /* 00565262: mov edx, dword ptr [ecx + 0xf8] */ r_edx = R32((u32)(r_ecx+0xf8u));
    /* 00565268: mov ecx, dword ptr [0x793440] */ r_ecx = R32((u32)(0x793440u));
    /* 0056526e: mov ecx, dword ptr [ecx + edx*4 + 0x1c] */ r_ecx = R32((u32)(r_ecx+r_edx*4+0x1cu));
    /* 00565272: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00565274: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00565277: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x565279u); call_ind(t); }
    /* 00565279: mov ecx, dword ptr [0x793440] */ r_ecx = R32((u32)(0x793440u));
    /* 0056527f: mov edx, dword ptr [ecx + 0xf8] */ r_edx = R32((u32)(r_ecx+0xf8u));
    /* 00565285: mov eax, dword ptr [0x793440] */ r_eax = R32((u32)(0x793440u));
    /* 0056528a: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 0056528e: mov edx, dword ptr [0x793440] */ r_edx = R32((u32)(0x793440u));
    /* 00565294: mov eax, dword ptr [edx + 0xf8] */ r_eax = R32((u32)(r_edx+0xf8u));
    /* 0056529a: mov edx, dword ptr [0x793440] */ r_edx = R32((u32)(0x793440u));
    /* 005652a0: mov eax, dword ptr [edx + eax*4 + 8] */ r_eax = R32((u32)(r_edx+r_eax*4+0x8u));
    /* 005652a4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005652a6: mov ecx, eax */ r_ecx = r_eax;
    /* 005652a8: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005652ab: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5652adu); call_ind(t); }
    /* 005652ad: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005652b0: call 0x6005d0 */ r_esp -= 4; W32(r_esp, 0x5652b5u); f_006005d0();
    /* 005652b5: mov esp, ebp */ r_esp = r_ebp;
    /* 005652b7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005652b8: ret  */ FN_RET(0x00565240); r_esp += 4; return;
}

