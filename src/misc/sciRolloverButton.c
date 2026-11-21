#include "protos.h"

void f_00603120(void) /* sciRolloverButton::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00603120);
    /* 00603120: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00603121: mov ebp, esp */ r_ebp = r_esp;
    /* 00603123: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00603124: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00603127: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060312a: call 0x601a80 */ r_esp -= 4; W32(r_esp, 0x60312fu); f_00601a80();
    /* 0060312f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00603132: mov dword ptr [eax], 0x6d76f4 */ W32((u32)(r_eax), 0x6d76f4u);
    /* 00603138: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060313b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0060313e: mov dword ptr [ecx + 0x1dc], edx */ W32((u32)(r_ecx+0x1dcu), r_edx);
    /* 00603144: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00603147: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0060314a: mov dword ptr [eax + 0x1e0], ecx */ W32((u32)(r_eax+0x1e0u), r_ecx);
    /* 00603150: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00603153: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00603156: mov dword ptr [edx + 0x1e4], eax */ W32((u32)(r_edx+0x1e4u), r_eax);
    /* 0060315c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060315f: mov esp, ebp */ r_esp = r_ebp;
    /* 00603161: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00603162: ret 0xc */ FN_RET(0x00603120); r_esp += 16; return;
}

