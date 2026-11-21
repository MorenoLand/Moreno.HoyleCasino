#include "protos.h"

void f_005d0500(void) /* RepayLoanDialog::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d0500);
    /* 005d0500: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d0501: mov ebp, esp */ r_ebp = r_esp;
    /* 005d0503: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d0505: push 0x6a8d95 */ { u32 v = 0x6a8d95u; r_esp -= 4; W32(r_esp, v); }
    /* 005d050a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005d0510: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d0511: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d0512: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005d0517: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d0519: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d051a: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005d051d: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005d0523: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005d0526: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d0528: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d052a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d052d: call 0x5f71f0 */ r_esp -= 4; W32(r_esp, 0x5d0532u); f_005f71f0();
    /* 005d0532: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d0539: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d053c: mov dword ptr [eax], 0x6d33ec */ W32((u32)(r_eax), 0x6d33ecu);
    /* 005d0542: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d0544: push 0x4de */ { u32 v = 0x4deu; r_esp -= 4; W32(r_esp, v); }
    /* 005d0549: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d054c: call 0x5f83d0 */ r_esp -= 4; W32(r_esp, 0x5d0551u); f_005f83d0();
    /* 005d0551: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d0554: mov byte ptr [ecx + 0x1ee], 0 */ W8((u32)(r_ecx+0x1eeu), 0x0u);
    /* 005d055b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005d0562: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d0565: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d0568: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005d056f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d0570: mov esp, ebp */ r_esp = r_ebp;
    /* 005d0572: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d0573: ret  */ FN_RET(0x005d0500); r_esp += 4; return;
}

void f_005d06c0(void) /* RepayLoanDialog::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d06c0);
    /* 005d06c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d06c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005d06c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d06c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d06c7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d06ca: mov byte ptr [eax + 0x1ee], 1 */ W8((u32)(r_eax+0x1eeu), 0x1u);
    /* 005d06d1: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005d06d7: call 0x5dc5e0 */ r_esp -= 4; W32(r_esp, 0x5d06dcu); f_005dc5e0();
    /* 005d06dc: mov esp, ebp */ r_esp = r_ebp;
    /* 005d06de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d06df: ret 4 */ FN_RET(0x005d06c0); r_esp += 8; return;
}

