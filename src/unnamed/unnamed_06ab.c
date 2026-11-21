#include "protos.h"

void f_006ab010(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006ab010);
    /* 006ab010: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ab013: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ab014: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006ab017: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006ab018: call 0x5bc5c0 */ r_esp -= 4; W32(r_esp, 0x6ab01du); f_005bc5c0();
    /* 006ab01d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ab020: ret  */ FN_RET(0x006ab010); r_esp += 4; return;
}

void f_006ab040(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006ab040);
    /* 006ab040: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006ab043: jmp 0x62aef0 */ f_0062aef0(); return;
}

void f_006ab120(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006ab120);
    /* 006ab120: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006ab123: jmp 0x62aef0 */ f_0062aef0(); return;
}

void f_006ab150(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006ab150);
    /* 006ab150: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 006ab153: jmp 0x5f4ad0 */ f_005f4ad0(); return;
}

void f_006ab1d0(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006ab1d0);
    /* 006ab1d0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006ab1d3: jmp 0x61e400 */ f_0061e400(); return;
}

void f_006ab2a0(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006ab2a0);
    /* 006ab2a0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006ab2a3: jmp 0x62aef0 */ f_0062aef0(); return;
}

void f_006ab2f0(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006ab2f0);
    /* 006ab2f0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006ab2f3: jmp 0x62aef0 */ f_0062aef0(); return;
}

void f_006ab370(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006ab370);
    /* 006ab370: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006ab373: jmp 0x62aef0 */ f_0062aef0(); return;
}

void f_006ab3c0(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006ab3c0);
    /* 006ab3c0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006ab3c3: jmp 0x62aef0 */ f_0062aef0(); return;
}

void f_006ab410(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006ab410);
    /* 006ab410: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006ab413: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ab414: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x6ab419u); f_00686cae();
    /* 006ab419: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ab41a: ret  */ FN_RET(0x006ab410); r_esp += 4; return;
}

void f_006ab450(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006ab450);
    /* 006ab450: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 006ab453: jmp 0x5f4ad0 */ f_005f4ad0(); return;
}

void f_006ab4b0(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006ab4b0);
    /* 006ab4b0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006ab4b3: jmp 0x5f4ad0 */ f_005f4ad0(); return;
}

void f_006ab500(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006ab500);
    /* 006ab500: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006ab503: jmp 0x614a10 */ f_00614a10(); return;
}

void f_006ab590(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006ab590);
    /* 006ab590: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006ab593: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ab594: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x6ab599u); f_00686cae();
    /* 006ab599: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ab59a: ret  */ FN_RET(0x006ab590); r_esp += 4; return;
}

void f_006ab630(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006ab630);
    /* 006ab630: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006ab633: jmp 0x5f4ad0 */ f_005f4ad0(); return;
}

void f_006ab6c0(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006ab6c0);
    /* 006ab6c0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006ab6c3: jmp 0x62aef0 */ f_0062aef0(); return;
}

void f_006ab710(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006ab710);
    /* 006ab710: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006ab713: jmp 0x62aef0 */ f_0062aef0(); return;
}

void f_006ab740(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006ab740);
    /* 006ab740: mov eax, dword ptr [0x162ee60] */ r_eax = R32((u32)(0x162ee60u));
    /* 006ab745: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006ab748: mov dword ptr [0x162ee60], eax */ W32((u32)(0x162ee60u), r_eax);
    /* 006ab74d: ret  */ FN_RET(0x006ab740); r_esp += 4; return;
}

void f_006ab770(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006ab770);
    /* 006ab770: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ab773: jmp 0x62aef0 */ f_0062aef0(); return;
}

void f_006ab7c0(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006ab7c0);
    /* 006ab7c0: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ab7c3: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006ab7c6: jmp 0x62f990 */ f_0062f990(); return;
}

void f_006ab810(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006ab810);
    /* 006ab810: lea ecx, [ebp - 0x30] */ r_ecx = (u32)(r_ebp+0xffffffd0u);
    /* 006ab813: jmp 0x610250 */ f_00610250(); return;
}

void f_006ab8c0(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006ab8c0);
    /* 006ab8c0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006ab8c3: jmp 0x5f2eb0 */ f_005f2eb0(); return;
}

void f_006abae0(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006abae0);
    /* 006abae0: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006abae3: jmp 0x5e9e40 */ f_005e9e40(); return;
}

void f_006abb90(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006abb90);
    /* 006abb90: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006abb93: jmp 0x5f7260 */ f_005f7260(); return;
}

void f_006abd20(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006abd20);
    /* 006abd20: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006abd23: jmp 0x5f5fa0 */ f_005f5fa0(); return;
}

void f_006abd90(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006abd90);
    /* 006abd90: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006abd93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006abd94: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x6abd99u); f_00686cae();
    /* 006abd99: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006abd9a: ret  */ FN_RET(0x006abd90); r_esp += 4; return;
}

void f_006abdc0(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006abdc0);
    /* 006abdc0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006abdc3: jmp 0x5e9e40 */ f_005e9e40(); return;
}

void f_006abf70(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006abf70);
    /* 006abf70: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006abf73: jmp 0x5eac00 */ f_005eac00(); return;
}

void f_006abfd0(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006abfd0);
    /* 006abfd0: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 006abfd3: jmp 0x5f0d60 */ f_005f0d60(); return;
}

