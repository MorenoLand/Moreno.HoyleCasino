#include "protos.h"

void f_006a2020(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006a2020);
    /* 006a2020: mov eax, dword ptr [ebp - 0x854] */ r_eax = R32((u32)(r_ebp+0xfffff7acu));
    /* 006a2026: and eax, 0x400000 */ {  u32 a = r_eax; u32 b = 0x400000u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 006a202b: je 0x6a2046 */ if (fZ) goto L_006a2046;
L_006a2031:; BB(0x006a2031);
    /* 006a2031: and dword ptr [ebp - 0x854], 0xffbfffff */ { u32 ad = (u32)(r_ebp+0xfffff7acu);  u32 a = R32(ad); u32 b = 0xffbfffffu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 006a203b: lea ecx, [ebp - 0x818] */ r_ecx = (u32)(r_ebp+0xfffff7e8u);
    /* 006a2041: jmp 0x484470 */ f_00484470(); return;
L_006a2046:; BB(0x006a2046);
    /* 006a2046: ret  */ FN_RET(0x006a2020); r_esp += 4; return;
}

void f_006a2180(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006a2180);
    /* 006a2180: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 006a2183: jmp 0x5e9e40 */ f_005e9e40(); return;
}

void f_006a2610(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006a2610);
    /* 006a2610: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 006a2613: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a2614: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x6a2619u); f_00686cae();
    /* 006a2619: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a261a: ret  */ FN_RET(0x006a2610); r_esp += 4; return;
}

void f_006a26f0(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006a26f0);
    /* 006a26f0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006a26f3: jmp 0x5d7bd0 */ f_005d7bd0(); return;
}

void f_006a2840(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006a2840);
    /* 006a2840: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006a2843: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a2844: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x6a2849u); f_00686cae();
    /* 006a2849: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a284a: ret  */ FN_RET(0x006a2840); r_esp += 4; return;
}

void f_006a28d0(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006a28d0);
    /* 006a28d0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006a28d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a28d4: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x6a28d9u); f_00686cae();
    /* 006a28d9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a28da: ret  */ FN_RET(0x006a28d0); r_esp += 4; return;
}

void f_006a2920(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006a2920);
    /* 006a2920: lea ecx, [ebp - 0x30] */ r_ecx = (u32)(r_ebp+0xffffffd0u);
    /* 006a2923: jmp 0x484470 */ f_00484470(); return;
}

void f_006a29e0(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006a29e0);
    /* 006a29e0: lea ecx, [ebp - 0xbf] */ r_ecx = (u32)(r_ebp+0xffffff41u);
    /* 006a29e6: jmp 0x464210 */ f_00464210(); return;
}

void f_006a2aa0(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006a2aa0);
    /* 006a2aa0: lea ecx, [ebp - 0x64] */ r_ecx = (u32)(r_ebp+0xffffff9cu);
    /* 006a2aa3: jmp 0x4a20f0 */ f_004a20f0(); return;
}

void f_006a2b60(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006a2b60);
    /* 006a2b60: lea ecx, [ebp - 0x12c] */ r_ecx = (u32)(r_ebp+0xfffffed4u);
    /* 006a2b66: jmp 0x484470 */ f_00484470(); return;
}

void f_006a2c40(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006a2c40);
    /* 006a2c40: lea ecx, [ebp - 0x24] */ r_ecx = (u32)(r_ebp+0xffffffdcu);
    /* 006a2c43: jmp 0x484470 */ f_00484470(); return;
}

void f_006a2e30(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006a2e30);
    /* 006a2e30: lea ecx, [ebp - 0x74] */ r_ecx = (u32)(r_ebp+0xffffff8cu);
    /* 006a2e33: jmp 0x4a20f0 */ f_004a20f0(); return;
}

void f_006a2f50(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006a2f50);
    /* 006a2f50: lea ecx, [ebp - 0x226] */ r_ecx = (u32)(r_ebp+0xfffffddau);
    /* 006a2f56: jmp 0x464210 */ f_00464210(); return;
}

void f_006a2fb0(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006a2fb0);
    /* 006a2fb0: lea ecx, [ebp - 0x1d8] */ r_ecx = (u32)(r_ebp+0xfffffe28u);
    /* 006a2fb6: jmp 0x484470 */ f_00484470(); return;
}

