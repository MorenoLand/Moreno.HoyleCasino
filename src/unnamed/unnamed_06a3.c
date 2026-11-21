#include "protos.h"

void f_006a3110(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006a3110);
    /* 006a3110: lea ecx, [ebp - 0x4c] */ r_ecx = (u32)(r_ebp+0xffffffb4u);
    /* 006a3113: jmp 0x4a20f0 */ f_004a20f0(); return;
}

void f_006a3290(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006a3290);
    /* 006a3290: lea ecx, [ebp - 0x10c] */ r_ecx = (u32)(r_ebp+0xfffffef4u);
    /* 006a3296: jmp 0x4a20f0 */ f_004a20f0(); return;
}

void f_006a32e0(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006a32e0);
    /* 006a32e0: mov eax, dword ptr [0x793150] */ r_eax = R32((u32)(0x793150u));
    /* 006a32e5: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006a32e8: mov dword ptr [0x793150], eax */ W32((u32)(0x793150u), r_eax);
    /* 006a32ed: ret  */ FN_RET(0x006a32e0); r_esp += 4; return;
}

void f_006a3330(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006a3330);
    /* 006a3330: lea ecx, [ebp - 0x2c] */ r_ecx = (u32)(r_ebp+0xffffffd4u);
    /* 006a3333: jmp 0x484470 */ f_00484470(); return;
}

void f_006a36b0(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006a36b0);
    /* 006a36b0: lea ecx, [ebp - 0x60] */ r_ecx = (u32)(r_ebp+0xffffffa0u);
    /* 006a36b3: jmp 0x484470 */ f_00484470(); return;
}

void f_006a3770(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006a3770);
    /* 006a3770: lea ecx, [ebp - 0x14c] */ r_ecx = (u32)(r_ebp+0xfffffeb4u);
    /* 006a3776: jmp 0x484470 */ f_00484470(); return;
}

void f_006a3880(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006a3880);
    /* 006a3880: mov eax, dword ptr [ebp - 0x4ac] */ r_eax = R32((u32)(r_ebp+0xfffffb54u));
    /* 006a3886: and eax, 0x8000000 */ {  u32 a = r_eax; u32 b = 0x8000000u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 006a388b: je 0x6a38a6 */ if (fZ) goto L_006a38a6;
L_006a3891:; BB(0x006a3891);
    /* 006a3891: and dword ptr [ebp - 0x4ac], 0xf7ffffff */ { u32 ad = (u32)(r_ebp+0xfffffb54u);  u32 a = R32(ad); u32 b = 0xf7ffffffu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 006a389b: lea ecx, [ebp - 0x3e4] */ r_ecx = (u32)(r_ebp+0xfffffc1cu);
    /* 006a38a1: jmp 0x4a20f0 */ f_004a20f0(); return;
L_006a38a6:; BB(0x006a38a6);
    /* 006a38a6: ret  */ FN_RET(0x006a3880); r_esp += 4; return;
}

void f_006a3b90(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006a3b90);
    /* 006a3b90: mov eax, dword ptr [ebp - 0x4b0] */ r_eax = R32((u32)(r_ebp+0xfffffb50u));
    /* 006a3b96: and eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 006a3b9b: je 0x6a3bb6 */ if (fZ) goto L_006a3bb6;
L_006a3ba1:; BB(0x006a3ba1);
    /* 006a3ba1: and dword ptr [ebp - 0x4b0], 0xfffeffff */ { u32 ad = (u32)(r_ebp+0xfffffb50u);  u32 a = R32(ad); u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 006a3bab: lea ecx, [ebp - 0x490] */ r_ecx = (u32)(r_ebp+0xfffffb70u);
    /* 006a3bb1: jmp 0x484470 */ f_00484470(); return;
L_006a3bb6:; BB(0x006a3bb6);
    /* 006a3bb6: ret  */ FN_RET(0x006a3b90); r_esp += 4; return;
}

void f_006a3c60(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006a3c60);
    /* 006a3c60: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006a3c63: jmp 0x5f7260 */ f_005f7260(); return;
}

void f_006a3cd0(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006a3cd0);
    /* 006a3cd0: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 006a3cd3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a3cd4: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x6a3cd9u); f_00686cae();
    /* 006a3cd9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a3cda: ret  */ FN_RET(0x006a3cd0); r_esp += 4; return;
}

void f_006a3d10(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006a3d10);
    /* 006a3d10: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006a3d13: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a3d14: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x6a3d19u); f_00686cae();
    /* 006a3d19: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a3d1a: ret  */ FN_RET(0x006a3d10); r_esp += 4; return;
}

void f_006a3d40(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006a3d40);
    /* 006a3d40: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006a3d43: jmp 0x5f7260 */ f_005f7260(); return;
}

void f_006a3dc0(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006a3dc0);
    /* 006a3dc0: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006a3dc3: jmp 0x5d7bd0 */ f_005d7bd0(); return;
}

void f_006a3ec0(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006a3ec0);
    /* 006a3ec0: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006a3ec3: jmp 0x5e9e40 */ f_005e9e40(); return;
}

