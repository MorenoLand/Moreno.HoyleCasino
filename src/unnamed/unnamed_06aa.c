#include "protos.h"

void f_006aa030(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006aa030);
    /* 006aa030: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006aa033: jmp 0x5e9e40 */ f_005e9e40(); return;
}

void f_006aa090(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006aa090);
    /* 006aa090: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006aa093: add ecx, 0x84 */ {  u32 a = r_ecx; u32 b = 0x84u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006aa099: jmp 0x60c6a0 */ f_0060c6a0(); return;
}

void f_006aa100(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006aa100);
    /* 006aa100: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006aa103: add ecx, 0x13c */ {  u32 a = r_ecx; u32 b = 0x13cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006aa109: jmp 0x60c6a0 */ f_0060c6a0(); return;
}

void f_006aa160(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006aa160);
    /* 006aa160: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 006aa163: add ecx, 0x34 */ {  u32 a = r_ecx; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006aa166: jmp 0x60c6a0 */ f_0060c6a0(); return;
}

void f_006aa2b0(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006aa2b0);
    /* 006aa2b0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006aa2b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006aa2b4: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x6aa2b9u); f_00686cae();
    /* 006aa2b9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006aa2ba: ret  */ FN_RET(0x006aa2b0); r_esp += 4; return;
}

void f_006aa570(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006aa570);
    /* 006aa570: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006aa573: jmp 0x5e9e40 */ f_005e9e40(); return;
}

void f_006aa5a0(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006aa5a0);
    /* 006aa5a0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006aa5a3: jmp 0x603170 */ f_00603170(); return;
}

void f_006aa790(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006aa790);
    /* 006aa790: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006aa793: jmp 0x6060e0 */ f_006060e0(); return;
}

void f_006aa7e0(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006aa7e0);
    /* 006aa7e0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006aa7e3: jmp 0x601ba0 */ f_00601ba0(); return;
}

void f_006aa810(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006aa810);
    /* 006aa810: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006aa813: jmp 0x5e9e40 */ f_005e9e40(); return;
}

void f_006aa880(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006aa880);
    /* 006aa880: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006aa883: jmp 0x5f5fa0 */ f_005f5fa0(); return;
}

void f_006aa940(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006aa940);
    /* 006aa940: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006aa943: jmp 0x62aef0 */ f_0062aef0(); return;
}

void f_006aa9c0(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006aa9c0);
    /* 006aa9c0: mov eax, dword ptr [ebp - 0x54c] */ r_eax = R32((u32)(r_ebp+0xfffffab4u));
    /* 006aa9c6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006aa9c7: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x6aa9ccu); f_00686cae();
    /* 006aa9cc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006aa9cd: ret  */ FN_RET(0x006aa9c0); r_esp += 4; return;
}

void f_006aab00(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006aab00);
    /* 006aab00: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006aab03: jmp 0x5f4ad0 */ f_005f4ad0(); return;
}

void f_006aab60(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006aab60);
    /* 006aab60: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006aab63: jmp 0x5fc740 */ f_005fc740(); return;
}

void f_006aabb0(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006aabb0);
    /* 006aabb0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006aabb3: jmp 0x5f4ad0 */ f_005f4ad0(); return;
}

void f_006aac10(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006aac10);
    /* 006aac10: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006aac13: jmp 0x5e9e40 */ f_005e9e40(); return;
}

void f_006aac60(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006aac60);
    /* 006aac60: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006aac63: jmp 0x62aef0 */ f_0062aef0(); return;
}

void f_006aacb0(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006aacb0);
    /* 006aacb0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006aacb3: jmp 0x5ec760 */ f_005ec760(); return;
}

void f_006aad80(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006aad80);
    /* 006aad80: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006aad83: jmp 0x5e9e40 */ f_005e9e40(); return;
}

void f_006aadd0(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006aadd0);
    /* 006aadd0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006aadd3: jmp 0x6132a0 */ f_006132a0(); return;
}

void f_006aae20(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006aae20);
    /* 006aae20: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006aae23: jmp 0x5f5c40 */ f_005f5c40(); return;
}

void f_006aaee0(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006aaee0);
    /* 006aaee0: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006aaee3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006aaee4: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x6aaee9u); f_00686cae();
    /* 006aaee9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006aaeea: ret  */ FN_RET(0x006aaee0); r_esp += 4; return;
}

void f_006aaf80(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006aaf80);
    /* 006aaf80: lea ecx, [ebp - 0x58] */ r_ecx = (u32)(r_ebp+0xffffffa8u);
    /* 006aaf83: jmp 0x6117c0 */ f_006117c0(); return;
}

void f_006aafb0(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006aafb0);
    /* 006aafb0: lea ecx, [ebp - 0x50] */ r_ecx = (u32)(r_ebp+0xffffffb0u);
    /* 006aafb3: jmp dword ptr [0x6b20f4] */ { u32 t = R32((u32)(0x6b20f4u)); call_ind(t); return; }
}

void f_006aafe0(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006aafe0);
    /* 006aafe0: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006aafe3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006aafe4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006aafe7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006aafe8: call 0x5bc5c0 */ r_esp -= 4; W32(r_esp, 0x6aafedu); f_005bc5c0();
    /* 006aafed: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006aaff0: ret  */ FN_RET(0x006aafe0); r_esp += 4; return;
}

