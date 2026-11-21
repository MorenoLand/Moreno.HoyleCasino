#include "protos.h"

void f_006a7030(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006a7030);
    /* 006a7030: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 006a7033: jmp 0x5e9e40 */ f_005e9e40(); return;
}

void f_006a72b0(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006a72b0);
    /* 006a72b0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006a72b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a72b4: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x6a72b9u); f_00686cae();
    /* 006a72b9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a72ba: ret  */ FN_RET(0x006a72b0); r_esp += 4; return;
}

void f_006a72e0(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006a72e0);
    /* 006a72e0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006a72e3: jmp 0x5d7bd0 */ f_005d7bd0(); return;
}

void f_006a73d0(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006a73d0);
    /* 006a73d0: mov eax, dword ptr [0x7935ac] */ r_eax = R32((u32)(0x7935acu));
    /* 006a73d5: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006a73d8: mov dword ptr [0x7935ac], eax */ W32((u32)(0x7935acu), r_eax);
    /* 006a73dd: ret  */ FN_RET(0x006a73d0); r_esp += 4; return;
}

void f_006a7420(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006a7420);
    /* 006a7420: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006a7423: jmp 0x5e9e40 */ f_005e9e40(); return;
}

void f_006a7480(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006a7480);
    /* 006a7480: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 006a7483: jmp 0x5e9e40 */ f_005e9e40(); return;
}

void f_006a76f0(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006a76f0);
    /* 006a76f0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006a76f3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a76f4: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x6a76f9u); f_00686cae();
    /* 006a76f9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a76fa: ret  */ FN_RET(0x006a76f0); r_esp += 4; return;
}

void f_006a7770(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006a7770);
    /* 006a7770: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006a7773: jmp 0x5d7bd0 */ f_005d7bd0(); return;
}

void f_006a7830(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006a7830);
    /* 006a7830: mov eax, dword ptr [0x7935d4] */ r_eax = R32((u32)(0x7935d4u));
    /* 006a7835: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006a7838: mov dword ptr [0x7935d4], eax */ W32((u32)(0x7935d4u), r_eax);
    /* 006a783d: ret  */ FN_RET(0x006a7830); r_esp += 4; return;
}

void f_006a7880(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006a7880);
    /* 006a7880: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006a7883: jmp 0x5e9e40 */ f_005e9e40(); return;
}

void f_006a78e0(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006a78e0);
    /* 006a78e0: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 006a78e3: jmp 0x5e9e40 */ f_005e9e40(); return;
}

void f_006a79b0(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006a79b0);
    /* 006a79b0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006a79b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a79b4: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x6a79b9u); f_00686cae();
    /* 006a79b9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a79ba: ret  */ FN_RET(0x006a79b0); r_esp += 4; return;
}

void f_006a7b80(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006a7b80);
    /* 006a7b80: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006a7b83: jmp 0x5fc150 */ f_005fc150(); return;
}

void f_006a7c40(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006a7c40);
    /* 006a7c40: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006a7c43: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a7c44: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x6a7c49u); f_00686cae();
    /* 006a7c49: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a7c4a: ret  */ FN_RET(0x006a7c40); r_esp += 4; return;
}

void f_006a7c80(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006a7c80);
    /* 006a7c80: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006a7c83: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a7c84: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x6a7c89u); f_00686cae();
    /* 006a7c89: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a7c8a: ret  */ FN_RET(0x006a7c80); r_esp += 4; return;
}

void f_006a7d00(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006a7d00);
    /* 006a7d00: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006a7d03: jmp 0x5d7bd0 */ f_005d7bd0(); return;
}

void f_006a7dd0(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006a7dd0);
    /* 006a7dd0: mov eax, dword ptr [0x793608] */ r_eax = R32((u32)(0x793608u));
    /* 006a7dd5: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006a7dd8: mov dword ptr [0x793608], eax */ W32((u32)(0x793608u), r_eax);
    /* 006a7ddd: ret  */ FN_RET(0x006a7dd0); r_esp += 4; return;
}

void f_006a7e20(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006a7e20);
    /* 006a7e20: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006a7e23: jmp 0x5e9e40 */ f_005e9e40(); return;
}

void f_006a7eb0(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006a7eb0);
    /* 006a7eb0: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 006a7eb3: jmp 0x5e9e40 */ f_005e9e40(); return;
}

void f_006a7f40(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006a7f40);
    /* 006a7f40: lea ecx, [ebp + 0xc] */ r_ecx = (u32)(r_ebp+0xcu);
    /* 006a7f43: jmp 0x5be320 */ f_005be320(); return;
}

void f_006a7f70(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006a7f70);
    /* 006a7f70: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 006a7f73: jmp 0x5be320 */ f_005be320(); return;
}

void f_006a7fc0(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006a7fc0);
    /* 006a7fc0: lea ecx, [ebp - 0x50] */ r_ecx = (u32)(r_ebp+0xffffffb0u);
    /* 006a7fc3: jmp dword ptr [0x6b20f4] */ { u32 t = R32((u32)(0x6b20f4u)); call_ind(t); return; }
}

void f_006a7ff0(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006a7ff0);
    /* 006a7ff0: lea ecx, [ebp - 0x50] */ r_ecx = (u32)(r_ebp+0xffffffb0u);
    /* 006a7ff3: jmp dword ptr [0x6b20f4] */ { u32 t = R32((u32)(0x6b20f4u)); call_ind(t); return; }
}

