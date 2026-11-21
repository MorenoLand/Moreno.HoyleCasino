#include "protos.h"

void f_00600a70(void) /* sciCycleForward::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00600a70);
    /* 00600a70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00600a71: mov ebp, esp */ r_ebp = r_esp;
    /* 00600a73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00600a74: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00600a77: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00600a7a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00600a7b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600a7e: call 0x600420 */ r_esp -= 4; W32(r_esp, 0x600a83u); f_00600420();
    /* 00600a83: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600a86: mov dword ptr [ecx], 0x6d743c */ W32((u32)(r_ecx), 0x6d743cu);
    /* 00600a8c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600a8f: mov dword ptr [edx + 0xc], 1 */ W32((u32)(r_edx+0xcu), 0x1u);
    /* 00600a96: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600a99: mov esp, ebp */ r_esp = r_ebp;
    /* 00600a9b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00600a9c: ret 4 */ FN_RET(0x00600a70); r_esp += 8; return;
}

void f_00600b30(void) /* sciCycleForward::vfunc5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00600b30);
    /* 00600b30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00600b31: mov ebp, esp */ r_ebp = r_esp;
    /* 00600b33: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00600b34: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00600b37: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00600b39: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600b3c: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00600b3f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600b42: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00600b45: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00600b47: mov ecx, eax */ r_ecx = r_eax;
    /* 00600b49: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00600b4f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x600b51u); call_ind(t); }
    /* 00600b51: mov esp, ebp */ r_esp = r_ebp;
    /* 00600b53: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00600b54: ret  */ FN_RET(0x00600b30); r_esp += 4; return;
}

