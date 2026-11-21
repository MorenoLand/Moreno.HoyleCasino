#include "protos.h"

void f_00600c20(void) /* sciCycleForwardCount::vfunc5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00600c20);
    /* 00600c20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00600c21: mov ebp, esp */ r_ebp = r_esp;
    /* 00600c23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00600c24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00600c27: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600c2a: call 0x600b30 */ r_esp -= 4; W32(r_esp, 0x600c2fu); f_00600b30();
    /* 00600c2f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600c32: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 00600c35: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00600c38: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600c3b: mov dword ptr [edx + 0x1c], ecx */ W32((u32)(r_edx+0x1cu), r_ecx);
    /* 00600c3e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600c41: cmp dword ptr [eax + 0x1c], 0 */ {  u32 a = R32((u32)(r_eax+0x1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00600c45: jg 0x600c4e */ if ((!fZ&&fS==fO)) goto L_00600c4e;
L_00600c47:; BB(0x00600c47);
    /* 00600c47: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600c4a: mov byte ptr [ecx + 0x18], 0 */ W8((u32)(r_ecx+0x18u), 0x0u);
L_00600c4e:; BB(0x00600c4e);
    /* 00600c4e: mov esp, ebp */ r_esp = r_ebp;
    /* 00600c50: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00600c51: ret  */ FN_RET(0x00600c20); r_esp += 4; return;
}

