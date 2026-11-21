#include "protos.h"

void f_005cfe70(void) /* CreditCardDialog::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cfe70);
    /* 005cfe70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cfe71: mov ebp, esp */ r_ebp = r_esp;
    /* 005cfe73: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cfe75: push 0x6a8d26 */ { u32 v = 0x6a8d26u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfe7a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005cfe80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cfe81: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cfe82: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005cfe87: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005cfe89: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cfe8a: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005cfe8d: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005cfe93: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005cfe96: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfe98: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfe9a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cfe9d: call 0x5f71f0 */ r_esp -= 4; W32(r_esp, 0x5cfea2u); f_005f71f0();
    /* 005cfea2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005cfea9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cfeac: mov dword ptr [eax], 0x6d3364 */ W32((u32)(r_eax), 0x6d3364u);
    /* 005cfeb2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfeb4: push 0x442 */ { u32 v = 0x442u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfeb9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cfebc: call 0x5f83d0 */ r_esp -= 4; W32(r_esp, 0x5cfec1u); f_005f83d0();
    /* 005cfec1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cfec4: mov byte ptr [ecx + 0x200], 0 */ W8((u32)(r_ecx+0x200u), 0x0u);
    /* 005cfecb: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cfece: mov dword ptr [edx + 0x1fc], 0 */ W32((u32)(r_edx+0x1fcu), 0x0u);
    /* 005cfed8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005cfedf: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cfee2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cfee5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005cfeec: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005cfeed: mov esp, ebp */ r_esp = r_ebp;
    /* 005cfeef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cfef0: ret  */ FN_RET(0x005cfe70); r_esp += 4; return;
}

void f_005d0100(void) /* CreditCardDialog::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d0100);
    /* 005d0100: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d0101: mov ebp, esp */ r_ebp = r_esp;
    /* 005d0103: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d0104: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d0107: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d010a: mov byte ptr [eax + 0x200], 1 */ W8((u32)(r_eax+0x200u), 0x1u);
    /* 005d0111: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d0113: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0116: mov ecx, dword ptr [ecx + 0x1bc] */ r_ecx = R32((u32)(r_ecx+0x1bcu));
    /* 005d011c: call 0x5f5df0 */ r_esp -= 4; W32(r_esp, 0x5d0121u); f_005f5df0();
    /* 005d0121: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0124: call 0x5f87d0 */ r_esp -= 4; W32(r_esp, 0x5d0129u); f_005f87d0();
    /* 005d0129: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005d012f: call 0x5dc4f0 */ r_esp -= 4; W32(r_esp, 0x5d0134u); f_005dc4f0();
    /* 005d0134: mov esp, ebp */ r_esp = r_ebp;
    /* 005d0136: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d0137: ret 4 */ FN_RET(0x005d0100); r_esp += 8; return;
}

