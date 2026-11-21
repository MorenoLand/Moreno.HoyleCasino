#include "protos.h"

void f_00600b60(void) /* sciCycleForwardWithCue::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00600b60);
    /* 00600b60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00600b61: mov ebp, esp */ r_ebp = r_esp;
    /* 00600b63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00600b64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00600b67: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00600b6a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00600b6b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600b6e: call 0x600a70 */ r_esp -= 4; W32(r_esp, 0x600b73u); f_00600a70();
    /* 00600b73: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600b76: mov dword ptr [ecx], 0x6d7458 */ W32((u32)(r_ecx), 0x6d7458u);
    /* 00600b7c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600b7f: mov esp, ebp */ r_esp = r_ebp;
    /* 00600b81: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00600b82: ret 4 */ FN_RET(0x00600b60); r_esp += 8; return;
}

void f_00600bb0(void) /* sciCycleForwardWithCue::vfunc5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00600bb0);
    /* 00600bb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00600bb1: mov ebp, esp */ r_ebp = r_esp;
    /* 00600bb3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00600bb4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00600bb7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600bba: cmp dword ptr [eax + 8], 0 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00600bbe: je 0x600bd5 */ if (fZ) goto L_00600bd5;
L_00600bc0:; BB(0x00600bc0);
    /* 00600bc0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00600bc2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600bc5: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00600bc8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600bcb: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00600bce: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00600bd0: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00600bd3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x600bd5u); call_ind(t); }
L_00600bd5:; BB(0x00600bd5);
    /* 00600bd5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600bd8: call 0x600b30 */ r_esp -= 4; W32(r_esp, 0x600bddu); f_00600b30();
    /* 00600bdd: mov esp, ebp */ r_esp = r_ebp;
    /* 00600bdf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00600be0: ret  */ FN_RET(0x00600bb0); r_esp += 4; return;
}

