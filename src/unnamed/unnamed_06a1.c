#include "protos.h"

void f_006a10b0(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006a10b0);
    /* 006a10b0: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 006a10b3: jmp 0x4a20f0 */ f_004a20f0(); return;
}

void f_006a1130(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006a1130);
    /* 006a1130: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 006a1133: jmp 0x484470 */ f_00484470(); return;
}

void f_006a1280(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006a1280);
    /* 006a1280: lea ecx, [ebp - 0x90] */ r_ecx = (u32)(r_ebp+0xffffff70u);
    /* 006a1286: jmp 0x484470 */ f_00484470(); return;
}

void f_006a1310(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006a1310);
    /* 006a1310: lea ecx, [ebp - 0x22e] */ r_ecx = (u32)(r_ebp+0xfffffdd2u);
    /* 006a1316: jmp 0x464210 */ f_00464210(); return;
}

void f_006a1440(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006a1440);
    /* 006a1440: mov eax, dword ptr [ebp - 0x288] */ r_eax = R32((u32)(r_ebp+0xfffffd78u));
    /* 006a1446: and eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 006a144b: je 0x6a1466 */ if (fZ) goto L_006a1466;
L_006a1451:; BB(0x006a1451);
    /* 006a1451: and dword ptr [ebp - 0x288], 0xffffff7f */ { u32 ad = (u32)(r_ebp+0xfffffd78u);  u32 a = R32(ad); u32 b = 0xffffff7fu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 006a145b: lea ecx, [ebp - 0x248] */ r_ecx = (u32)(r_ebp+0xfffffdb8u);
    /* 006a1461: jmp 0x464210 */ f_00464210(); return;
L_006a1466:; BB(0x006a1466);
    /* 006a1466: ret  */ FN_RET(0x006a1440); r_esp += 4; return;
}

void f_006a1550(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006a1550);
    /* 006a1550: lea ecx, [ebp - 0x260] */ r_ecx = (u32)(r_ebp+0xfffffda0u);
    /* 006a1556: jmp 0x464210 */ f_00464210(); return;
}

void f_006a15e0(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006a15e0);
    /* 006a15e0: mov eax, dword ptr [ebp - 0x288] */ r_eax = R32((u32)(r_ebp+0xfffffd78u));
    /* 006a15e6: and eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 006a15eb: je 0x6a1606 */ if (fZ) goto L_006a1606;
L_006a15f1:; BB(0x006a15f1);
    /* 006a15f1: and dword ptr [ebp - 0x288], 0xffffbfff */ { u32 ad = (u32)(r_ebp+0xfffffd78u);  u32 a = R32(ad); u32 b = 0xffffbfffu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 006a15fb: lea ecx, [ebp - 0x270] */ r_ecx = (u32)(r_ebp+0xfffffd90u);
    /* 006a1601: jmp 0x464210 */ f_00464210(); return;
L_006a1606:; BB(0x006a1606);
    /* 006a1606: ret  */ FN_RET(0x006a15e0); r_esp += 4; return;
}

void f_006a1850(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006a1850);
    /* 006a1850: mov eax, dword ptr [ebp - 0x4f0] */ r_eax = R32((u32)(r_ebp+0xfffffb10u));
    /* 006a1856: and eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 006a1859: je 0x6a1871 */ if (fZ) goto L_006a1871;
L_006a185f:; BB(0x006a185f);
    /* 006a185f: and dword ptr [ebp - 0x4f0], 0xfffffffb */ { u32 ad = (u32)(r_ebp+0xfffffb10u);  u32 a = R32(ad); u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 006a1866: lea ecx, [ebp - 0x37e] */ r_ecx = (u32)(r_ebp+0xfffffc82u);
    /* 006a186c: jmp 0x4a20f0 */ f_004a20f0(); return;
L_006a1871:; BB(0x006a1871);
    /* 006a1871: ret  */ FN_RET(0x006a1850); r_esp += 4; return;
}

void f_006a1970(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006a1970);
    /* 006a1970: mov ecx, dword ptr [ebp - 0x4c8] */ r_ecx = R32((u32)(r_ebp+0xfffffb38u));
    /* 006a1976: jmp 0x484470 */ f_00484470(); return;
}

void f_006a19b0(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006a19b0);
    /* 006a19b0: lea ecx, [ebp - 0x428] */ r_ecx = (u32)(r_ebp+0xfffffbd8u);
    /* 006a19b6: jmp 0x484470 */ f_00484470(); return;
}

void f_006a1a60(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006a1a60);
    /* 006a1a60: mov ecx, dword ptr [ebp - 0x660] */ r_ecx = R32((u32)(r_ebp+0xfffff9a0u));
    /* 006a1a66: jmp 0x484470 */ f_00484470(); return;
}

void f_006a1b10(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006a1b10);
    /* 006a1b10: lea ecx, [ebp - 0x4fc] */ r_ecx = (u32)(r_ebp+0xfffffb04u);
    /* 006a1b16: jmp 0x4a20f0 */ f_004a20f0(); return;
}

void f_006a1bc0(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006a1bc0);
    /* 006a1bc0: mov ecx, dword ptr [ebp - 0x6d0] */ r_ecx = R32((u32)(r_ebp+0xfffff930u));
    /* 006a1bc6: jmp 0x484470 */ f_00484470(); return;
}

void f_006a1c70(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006a1c70);
    /* 006a1c70: lea ecx, [ebp - 0x6fc] */ r_ecx = (u32)(r_ebp+0xfffff904u);
    /* 006a1c76: jmp 0x484470 */ f_00484470(); return;
}

