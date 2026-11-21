#include "protos.h"

void f_00563440(void) /* VPMultiCycleCashOut::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00563440);
    /* 00563440: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00563441: mov ebp, esp */ r_ebp = r_esp;
    /* 00563443: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00563445: push 0x6a5a15 */ { u32 v = 0x6a5a15u; r_esp -= 4; W32(r_esp, v); }
    /* 0056344a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00563450: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00563451: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00563452: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00563457: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00563459: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056345a: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0056345d: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00563463: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00563466: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00563469: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056346a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056346d: call 0x600a70 */ r_esp -= 4; W32(r_esp, 0x563472u); f_00600a70();
    /* 00563472: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00563479: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056347c: mov dword ptr [ecx], 0x6c98ec */ W32((u32)(r_ecx), 0x6c98ecu);
    /* 00563482: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00563484: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00563485: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0056348b: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0056348e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056348f: fld1  */ FPUSH(1.0);
    /* 00563491: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00563494: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00563496: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00563498: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056349a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056349c: push 0x18a88 */ { u32 v = 0x18a88u; r_esp -= 4; W32(r_esp, v); }
    /* 005634a1: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 005634a7: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005634a9: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005634af: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 005634b5: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5634b7u); call_ind(t); }
    /* 005634b7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005634be: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005634c1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005634c4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005634cb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005634cc: mov esp, ebp */ r_esp = r_ebp;
    /* 005634ce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005634cf: ret 4 */ FN_RET(0x00563440); r_esp += 8; return;
}

void f_00563500(void) /* VPMultiCycleCashOut::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00563500);
    /* 00563500: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00563501: mov ebp, esp */ r_ebp = r_esp;
    /* 00563503: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00563504: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00563507: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00563509: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0056350c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056350d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00563510: call 0x6004e0 */ r_esp -= 4; W32(r_esp, 0x563515u); f_006004e0();
    /* 00563515: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00563517: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056351a: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0056351d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00563520: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00563523: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00563525: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0056352b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56352du); call_ind(t); }
    /* 0056352d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00563530: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00563533: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00563536: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00563539: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0056353b: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0056353e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x563540u); call_ind(t); }
    /* 00563540: mov esp, ebp */ r_esp = r_ebp;
    /* 00563542: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00563543: ret 8 */ FN_RET(0x00563500); r_esp += 12; return;
}

void f_00563550(void) /* VPMultiCycleCashOut::vfunc5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00563550);
    /* 00563550: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00563551: mov ebp, esp */ r_ebp = r_esp;
    /* 00563553: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00563554: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00563557: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056355a: call 0x600b30 */ r_esp -= 4; W32(r_esp, 0x56355fu); f_00600b30();
    /* 0056355f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00563562: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00563565: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00563568: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0056356b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0056356d: mov ecx, eax */ r_ecx = r_eax;
    /* 0056356f: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00563572: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x563574u); call_ind(t); }
    /* 00563574: mov esp, ebp */ r_esp = r_ebp;
    /* 00563576: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00563577: ret  */ FN_RET(0x00563550); r_esp += 4; return;
}

