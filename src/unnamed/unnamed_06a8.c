#include "protos.h"

void f_006a8020(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006a8020);
    /* 006a8020: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006a8023: jmp dword ptr [0x6b2278] */ { u32 t = R32((u32)(0x6b2278u)); call_ind(t); return; }
}

void f_006a8050(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006a8050);
    /* 006a8050: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006a8053: jmp dword ptr [0x6b2278] */ { u32 t = R32((u32)(0x6b2278u)); call_ind(t); return; }
}

void f_006a80a0(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006a80a0);
    /* 006a80a0: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 006a80a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a80a4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006a80a7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006a80a8: call 0x5bc5c0 */ r_esp -= 4; W32(r_esp, 0x6a80adu); f_005bc5c0();
    /* 006a80ad: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006a80b0: ret  */ FN_RET(0x006a80a0); r_esp += 4; return;
}

void f_006a8100(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006a8100);
    /* 006a8100: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006a8103: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a8104: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x6a8109u); f_00686cae();
    /* 006a8109: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a810a: ret  */ FN_RET(0x006a8100); r_esp += 4; return;
}

void f_006a8270(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006a8270);
    /* 006a8270: lea ecx, [ebp - 0x50] */ r_ecx = (u32)(r_ebp+0xffffffb0u);
    /* 006a8273: jmp dword ptr [0x6b20f4] */ { u32 t = R32((u32)(0x6b20f4u)); call_ind(t); return; }
}

void f_006a82a0(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006a82a0);
    /* 006a82a0: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006a82a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a82a4: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x6a82a9u); f_00686cae();
    /* 006a82a9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a82aa: ret  */ FN_RET(0x006a82a0); r_esp += 4; return;
}

void f_006a83c0(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006a83c0);
    /* 006a83c0: lea ecx, [ebp - 0x50] */ r_ecx = (u32)(r_ebp+0xffffffb0u);
    /* 006a83c3: jmp dword ptr [0x6b20f4] */ { u32 t = R32((u32)(0x6b20f4u)); call_ind(t); return; }
}

void f_006a83f0(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006a83f0);
    /* 006a83f0: mov ecx, dword ptr [ebp - 0xe0] */ r_ecx = R32((u32)(r_ebp+0xffffff20u));
    /* 006a83f6: jmp 0x5e9e40 */ f_005e9e40(); return;
}

void f_006a8440(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006a8440);
    /* 006a8440: mov ecx, dword ptr [ebp - 0xa8] */ r_ecx = R32((u32)(r_ebp+0xffffff58u));
    /* 006a8446: add ecx, 0x28 */ {  u32 a = r_ecx; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006a8449: jmp 0x5be320 */ f_005be320(); return;
}

void f_006a84a0(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006a84a0);
    /* 006a84a0: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006a84a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a84a4: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x6a84a9u); f_00686cae();
    /* 006a84a9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a84aa: ret  */ FN_RET(0x006a84a0); r_esp += 4; return;
}

void f_006a85a0(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006a85a0);
    /* 006a85a0: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 006a85a3: jmp 0x5c0b40 */ f_005c0b40(); return;
}

void f_006a86c0(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006a86c0);
    /* 006a86c0: lea ecx, [ebp + 0xc] */ r_ecx = (u32)(r_ebp+0xcu);
    /* 006a86c3: jmp 0x5c3980 */ f_005c3980(); return;
}

void f_006a8710(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006a8710);
    /* 006a8710: lea ecx, [ebp - 0x44] */ r_ecx = (u32)(r_ebp+0xffffffbcu);
    /* 006a8713: jmp 0x5c3980 */ f_005c3980(); return;
}

void f_006a8740(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006a8740);
    /* 006a8740: lea ecx, [ebp - 0x50] */ r_ecx = (u32)(r_ebp+0xffffffb0u);
    /* 006a8743: jmp dword ptr [0x6b20f4] */ { u32 t = R32((u32)(0x6b20f4u)); call_ind(t); return; }
}

void f_006a8770(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006a8770);
    /* 006a8770: lea ecx, [ebp - 0x50] */ r_ecx = (u32)(r_ebp+0xffffffb0u);
    /* 006a8773: jmp dword ptr [0x6b20f4] */ { u32 t = R32((u32)(0x6b20f4u)); call_ind(t); return; }
}

void f_006a87a0(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006a87a0);
    /* 006a87a0: lea ecx, [ebp - 0x50] */ r_ecx = (u32)(r_ebp+0xffffffb0u);
    /* 006a87a3: jmp dword ptr [0x6b20f4] */ { u32 t = R32((u32)(0x6b20f4u)); call_ind(t); return; }
}

void f_006a87d0(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006a87d0);
    /* 006a87d0: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006a87d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a87d4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006a87d7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006a87d8: call 0x5bc5c0 */ r_esp -= 4; W32(r_esp, 0x6a87ddu); f_005bc5c0();
    /* 006a87dd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006a87e0: ret  */ FN_RET(0x006a87d0); r_esp += 4; return;
}

void f_006a8800(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006a8800);
    /* 006a8800: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006a8803: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a8804: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006a8807: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006a8808: call 0x5bc5c0 */ r_esp -= 4; W32(r_esp, 0x6a880du); f_005bc5c0();
    /* 006a880d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006a8810: ret  */ FN_RET(0x006a8800); r_esp += 4; return;
}

void f_006a8830(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006a8830);
    /* 006a8830: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006a8833: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a8834: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x6a8839u); f_00686cae();
    /* 006a8839: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a883a: ret  */ FN_RET(0x006a8830); r_esp += 4; return;
}

void f_006a8940(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006a8940);
    /* 006a8940: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006a8943: jmp 0x5d7bd0 */ f_005d7bd0(); return;
}

void f_006a89c0(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006a89c0);
    /* 006a89c0: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 006a89c3: jmp 0x5e9e40 */ f_005e9e40(); return;
}

void f_006a8af0(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006a8af0);
    /* 006a8af0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006a8af3: jmp 0x5f4ad0 */ f_005f4ad0(); return;
}

void f_006a8be0(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006a8be0);
    /* 006a8be0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006a8be3: jmp 0x5f7260 */ f_005f7260(); return;
}

void f_006a8db0(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006a8db0);
    /* 006a8db0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006a8db3: jmp 0x5e9e40 */ f_005e9e40(); return;
}

void f_006a8de0(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006a8de0);
    /* 006a8de0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006a8de3: jmp 0x5d7bd0 */ f_005d7bd0(); return;
}

void f_006a8fe0(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006a8fe0);
    /* 006a8fe0: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 006a8fe3: jmp 0x63a120 */ f_0063a120(); return;
}

