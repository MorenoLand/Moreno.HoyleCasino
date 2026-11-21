#include "protos.h"

void f_006004e0(void) /* sciCycleTo::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006004e0);
    /* 006004e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006004e1: mov ebp, esp */ r_ebp = r_esp;
    /* 006004e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006004e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006004e7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006004ea: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006004ed: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 006004f0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006004f3: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 006004f6: call 0x5eb240 */ r_esp -= 4; W32(r_esp, 0x6004fbu); f_005eb240();
    /* 006004fb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006004fe: mov dword ptr [ecx + 0x14], eax */ W32((u32)(r_ecx+0x14u), r_eax);
    /* 00600501: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600504: mov byte ptr [edx + 0x18], 1 */ W8((u32)(r_edx+0x18u), 0x1u);
    /* 00600508: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060050b: mov cl, byte ptr [ebp + 0xc] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 0060050e: mov byte ptr [eax + 0x19], cl */ W8((u32)(r_eax+0x19u), (u8)r_ecx);
    /* 00600511: mov esp, ebp */ r_esp = r_ebp;
    /* 00600513: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00600514: ret 8 */ FN_RET(0x006004e0); r_esp += 12; return;
}

void f_00600de0(void) /* sciCycleTo::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00600de0);
    /* 00600de0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00600de1: mov ebp, esp */ r_ebp = r_esp;
    /* 00600de3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00600de4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00600de7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00600dea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00600deb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600dee: call 0x600420 */ r_esp -= 4; W32(r_esp, 0x600df3u); f_00600420();
    /* 00600df3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600df6: mov dword ptr [ecx], 0x6d74c8 */ W32((u32)(r_ecx), 0x6d74c8u);
    /* 00600dfc: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600dff: mov dword ptr [edx + 0x1c], 0 */ W32((u32)(r_edx+0x1cu), 0x0u);
    /* 00600e06: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600e09: mov esp, ebp */ r_esp = r_ebp;
    /* 00600e0b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00600e0c: ret 4 */ FN_RET(0x00600de0); r_esp += 8; return;
}

