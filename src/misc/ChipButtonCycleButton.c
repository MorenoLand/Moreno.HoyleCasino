#include "protos.h"

void f_005cb320(void) /* ChipButtonCycleButton::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cb320);
    /* 005cb320: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cb321: mov ebp, esp */ r_ebp = r_esp;
    /* 005cb323: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cb325: push 0x6a8ad5 */ { u32 v = 0x6a8ad5u; r_esp -= 4; W32(r_esp, v); }
    /* 005cb32a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005cb330: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cb331: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cb332: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005cb337: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005cb339: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cb33a: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005cb33d: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005cb343: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005cb346: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cb349: call 0x601a80 */ r_esp -= 4; W32(r_esp, 0x5cb34eu); f_00601a80();
    /* 005cb34e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005cb355: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cb358: mov dword ptr [eax], 0x6d2684 */ W32((u32)(r_eax), 0x6d2684u);
    /* 005cb35e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cb361: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005cb364: mov dword ptr [ecx + 0x1dc], edx */ W32((u32)(r_ecx+0x1dcu), r_edx);
    /* 005cb36a: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005cb36c: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 005cb36e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cb371: call 0x602ef0 */ r_esp -= 4; W32(r_esp, 0x5cb376u); f_00602ef0();
    /* 005cb376: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005cb37d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cb380: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cb383: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005cb38a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005cb38b: mov esp, ebp */ r_esp = r_ebp;
    /* 005cb38d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cb38e: ret 4 */ FN_RET(0x005cb320); r_esp += 8; return;
}

void f_005cb3c0(void) /* ChipButtonCycleButton::vfunc48 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cb3c0);
    /* 005cb3c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cb3c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005cb3c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cb3c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005cb3c7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cb3ca: mov ecx, dword ptr [eax + 0x1dc] */ r_ecx = R32((u32)(r_eax+0x1dcu));
    /* 005cb3d0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cb3d1: mov edx, dword ptr [0x7947e4] */ r_edx = R32((u32)(0x7947e4u));
    /* 005cb3d7: mov ecx, dword ptr [edx + 0x68] */ r_ecx = R32((u32)(r_edx+0x68u));
    /* 005cb3da: call 0x5ca640 */ r_esp -= 4; W32(r_esp, 0x5cb3dfu); f_005ca640();
    /* 005cb3df: mov esp, ebp */ r_esp = r_ebp;
    /* 005cb3e1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cb3e2: ret  */ FN_RET(0x005cb3c0); r_esp += 4; return;
}

