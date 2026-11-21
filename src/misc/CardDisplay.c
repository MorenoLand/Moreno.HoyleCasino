#include "protos.h"

void f_00643e30(void) /* CardDisplay::vfunc51 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00643e30);
    /* 00643e30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00643e31: mov ebp, esp */ r_ebp = r_esp;
    /* 00643e33: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00643e34: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00643e37: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00643e3a: mov ecx, dword ptr [eax + 0x19c] */ r_ecx = R32((u32)(r_eax+0x19cu));
    /* 00643e40: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00643e41: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00643e44: mov al, byte ptr [edx + 0x198] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x198u))) & 0xffu);
    /* 00643e4a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00643e4b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00643e4e: mov dx, word ptr [ecx + 0x190] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+0x190u))) & 0xffffu);
    /* 00643e55: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00643e56: call 0x643e70 */ r_esp -= 4; W32(r_esp, 0x643e5bu); f_00643e70();
    /* 00643e5b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00643e5e: mov esp, ebp */ r_esp = r_ebp;
    /* 00643e60: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00643e61: ret  */ FN_RET(0x00643e30); r_esp += 4; return;
}

void f_00644440(void) /* CardDisplay::vfunc52 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00644440);
    /* 00644440: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00644441: mov ebp, esp */ r_ebp = r_esp;
    /* 00644443: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00644444: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00644447: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064444a: mov cl, byte ptr [eax + 0x198] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x198u))) & 0xffu);
    /* 00644450: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00644451: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00644454: mov eax, dword ptr [edx + 0x19c] */ r_eax = R32((u32)(r_edx+0x19cu));
    /* 0064445a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064445b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064445e: mov dx, word ptr [ecx + 0x190] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+0x190u))) & 0xffffu);
    /* 00644465: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00644466: call 0x644480 */ r_esp -= 4; W32(r_esp, 0x64446bu); f_00644480();
    /* 0064446b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064446e: mov esp, ebp */ r_esp = r_ebp;
    /* 00644470: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00644471: ret  */ FN_RET(0x00644440); r_esp += 4; return;
}

