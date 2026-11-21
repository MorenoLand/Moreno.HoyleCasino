#include "protos.h"

void f_0062aea0(void) /* Object::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062aea0);
    /* 0062aea0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062aea1: mov ebp, esp */ r_ebp = r_esp;
    /* 0062aea3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062aea4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0062aea7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062aeaa: mov dword ptr [eax], 0x6d96e0 */ W32((u32)(r_eax), 0x6d96e0u);
    /* 0062aeb0: mov ecx, dword ptr [0x15eee18] */ r_ecx = R32((u32)(0x15eee18u));
    /* 0062aeb6: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062aeb9: mov dword ptr [0x15eee18], ecx */ W32((u32)(0x15eee18u), r_ecx);
    /* 0062aebf: mov edx, dword ptr [0x15eee1c] */ r_edx = R32((u32)(0x15eee1cu));
    /* 0062aec5: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0062aec8: mov dword ptr [0x15eee1c], edx */ W32((u32)(0x15eee1cu), r_edx);
    /* 0062aece: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062aed1: mov ecx, dword ptr [0x15eee1c] */ r_ecx = R32((u32)(0x15eee1cu));
    /* 0062aed7: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 0062aeda: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062aedd: mov esp, ebp */ r_esp = r_ebp;
    /* 0062aedf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062aee0: ret  */ FN_RET(0x0062aea0); r_esp += 4; return;
}

void f_0062aef0(void) /* Object::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062aef0);
    /* 0062aef0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062aef1: mov ebp, esp */ r_ebp = r_esp;
    /* 0062aef3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062aef4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0062aef7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062aefa: mov dword ptr [eax], 0x6d96e0 */ W32((u32)(r_eax), 0x6d96e0u);
    /* 0062af00: mov ecx, dword ptr [0x15eee18] */ r_ecx = R32((u32)(0x15eee18u));
    /* 0062af06: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0062af09: mov dword ptr [0x15eee18], ecx */ W32((u32)(0x15eee18u), r_ecx);
    /* 0062af0f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062af12: mov dword ptr [edx + 4], 0 */ W32((u32)(r_edx+0x4u), 0x0u);
    /* 0062af19: mov esp, ebp */ r_esp = r_ebp;
    /* 0062af1b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062af1c: ret  */ FN_RET(0x0062aef0); r_esp += 4; return;
}

