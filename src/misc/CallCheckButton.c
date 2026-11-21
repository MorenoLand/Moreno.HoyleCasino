#include "protos.h"

void f_00469d00(void) /* CallCheckButton::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00469d00);
    /* 00469d00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00469d01: mov ebp, esp */ r_ebp = r_esp;
    /* 00469d03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00469d04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00469d07: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00469d0a: call 0x601a80 */ r_esp -= 4; W32(r_esp, 0x469d0fu); f_00601a80();
    /* 00469d0f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00469d12: mov dword ptr [eax], 0x6bb5cc */ W32((u32)(r_eax), 0x6bb5ccu);
    /* 00469d18: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00469d1b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00469d1e: mov dword ptr [ecx + 0x1dc], edx */ W32((u32)(r_ecx+0x1dcu), r_edx);
    /* 00469d24: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00469d27: mov esp, ebp */ r_esp = r_ebp;
    /* 00469d29: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00469d2a: ret 4 */ FN_RET(0x00469d00); r_esp += 8; return;
}

void f_00469d30(void) /* CallCheckButton::vfunc48 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00469d30);
    /* 00469d30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00469d31: mov ebp, esp */ r_ebp = r_esp;
    /* 00469d33: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00469d36: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00469d39: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00469d40: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 00469d46: call 0x57ae30 */ r_esp -= 4; W32(r_esp, 0x469d4bu); f_0057ae30();
    /* 00469d4b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00469d4d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00469d4f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00469d55: call 0x47aab0 */ r_esp -= 4; W32(r_esp, 0x469d5au); f_0047aab0();
    /* 00469d5a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00469d5c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00469d5f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00469d61: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00469d64: mov eax, dword ptr [edx + 0xd8] */ r_eax = R32((u32)(r_edx+0xd8u));
    /* 00469d6a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x469d6cu); call_ind(t); }
    /* 00469d6c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00469d6f: mov ecx, dword ptr [ecx + 0x1dc] */ r_ecx = R32((u32)(r_ecx+0x1dcu));
    /* 00469d75: call 0x5f87d0 */ r_esp -= 4; W32(r_esp, 0x469d7au); f_005f87d0();
    /* 00469d7a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00469d7d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00469d7e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00469d81: mov ecx, dword ptr [eax + 0x1dc] */ r_ecx = R32((u32)(r_eax+0x1dcu));
    /* 00469d87: call 0x519a40 */ r_esp -= 4; W32(r_esp, 0x469d8cu); f_00519a40();
    /* 00469d8c: mov esp, ebp */ r_esp = r_ebp;
    /* 00469d8e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00469d8f: ret  */ FN_RET(0x00469d30); r_esp += 4; return;
}

