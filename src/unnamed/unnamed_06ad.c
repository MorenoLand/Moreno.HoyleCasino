#include "protos.h"

void f_006ad000(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006ad000);
    /* 006ad000: mov eax, dword ptr [ebp - 0x4c0] */ r_eax = R32((u32)(r_ebp+0xfffffb40u));
    /* 006ad006: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ad007: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x6ad00cu); f_00686cae();
    /* 006ad00c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ad00d: ret  */ FN_RET(0x006ad000); r_esp += 4; return;
}

void f_006ad080(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006ad080);
    /* 006ad080: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 006ad083: jmp 0x5f5c40 */ f_005f5c40(); return;
}

void f_006ad200(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006ad200);
    /* 006ad200: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006ad203: jmp 0x5fc150 */ f_005fc150(); return;
}

void f_006ad270(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006ad270);
    /* 006ad270: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006ad273: jmp 0x5f7260 */ f_005f7260(); return;
}

void f_006ad2c0(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006ad2c0);
    /* 006ad2c0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006ad2c3: jmp 0x5f7260 */ f_005f7260(); return;
}

void f_006ad3b0(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006ad3b0);
    /* 006ad3b0: mov ecx, dword ptr [ebp - 0x418] */ r_ecx = R32((u32)(r_ebp+0xfffffbe8u));
    /* 006ad3b6: jmp 0x5e9e40 */ f_005e9e40(); return;
}

void f_006ad4d0(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006ad4d0);
    /* 006ad4d0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006ad4d3: add ecx, 0x6c */ {  u32 a = r_ecx; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006ad4d6: jmp 0x676430 */ f_00676430(); return;
}

void f_006ad5f0(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006ad5f0);
    /* 006ad5f0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006ad5f3: jmp 0x5f7260 */ f_005f7260(); return;
}

void f_006ad620(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006ad620);
    /* 006ad620: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006ad623: jmp 0x5f7260 */ f_005f7260(); return;
}

void f_006ad6c0(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006ad6c0);
    /* 006ad6c0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006ad6c3: jmp 0x5f7260 */ f_005f7260(); return;
}

void f_006ad760(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006ad760);
    /* 006ad760: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006ad763: jmp 0x5fc150 */ f_005fc150(); return;
}

void f_006ad7b0(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006ad7b0);
    /* 006ad7b0: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 006ad7b6: jmp 0x5f5fa0 */ f_005f5fa0(); return;
}

void f_006ad820(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006ad820);
    /* 006ad820: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ad823: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ad824: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x6ad829u); f_00686cae();
    /* 006ad829: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ad82a: ret  */ FN_RET(0x006ad820); r_esp += 4; return;
}

void f_006ad900(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006ad900);
    /* 006ad900: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ad903: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ad904: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x6ad909u); f_00686cae();
    /* 006ad909: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ad90a: ret  */ FN_RET(0x006ad900); r_esp += 4; return;
}

void f_006adae0(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006adae0);
    /* 006adae0: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 006adae3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006adae4: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x6adae9u); f_00686cae();
    /* 006adae9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006adaea: ret  */ FN_RET(0x006adae0); r_esp += 4; return;
}

void f_006adb40(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006adb40);
    /* 006adb40: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006adb43: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006adb44: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x6adb49u); f_00686cae();
    /* 006adb49: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006adb4a: ret  */ FN_RET(0x006adb40); r_esp += 4; return;
}

void f_006adc00(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006adc00);
    /* 006adc00: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 006adc03: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006adc04: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x6adc09u); f_00686cae();
    /* 006adc09: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006adc0a: ret  */ FN_RET(0x006adc00); r_esp += 4; return;
}

void f_006adc60(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006adc60);
    /* 006adc60: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 006adc63: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006adc64: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x6adc69u); f_00686cae();
    /* 006adc69: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006adc6a: ret  */ FN_RET(0x006adc60); r_esp += 4; return;
}

void f_006add30(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006add30);
    /* 006add30: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006add33: jmp 0x625fe0 */ f_00625fe0(); return;
}

void f_006add90(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006add90);
    /* 006add90: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006add93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006add94: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x6add99u); f_00686cae();
    /* 006add99: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006add9a: ret  */ FN_RET(0x006add90); r_esp += 4; return;
}

void f_006addc0(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006addc0);
    /* 006addc0: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006addc3: jmp 0x607870 */ f_00607870(); return;
}

void f_006ade20(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006ade20);
    /* 006ade20: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006ade23: jmp 0x624ef0 */ f_00624ef0(); return;
}

void f_006adf00(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006adf00);
    /* 006adf00: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 006adf03: jmp 0x607870 */ f_00607870(); return;
}

void f_006adfd0(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006adfd0);
    /* 006adfd0: lea ecx, [ebp - 0x50] */ r_ecx = (u32)(r_ebp+0xffffffb0u);
    /* 006adfd3: jmp 0x68bb20 */ f_0068bb20(); return;
}

