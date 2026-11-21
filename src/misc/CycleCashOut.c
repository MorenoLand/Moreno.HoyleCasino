#include "protos.h"

void f_0052f7f0(void) /* CycleCashOut::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0052f7f0);
    /* 0052f7f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052f7f1: mov ebp, esp */ r_ebp = r_esp;
    /* 0052f7f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052f7f5: push 0x6a46ab */ { u32 v = 0x6a46abu; r_esp -= 4; W32(r_esp, v); }
    /* 0052f7fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0052f800: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052f801: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052f802: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0052f807: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0052f809: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052f80a: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0052f80d: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0052f813: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0052f816: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0052f819: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052f81a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052f81d: call 0x600a70 */ r_esp -= 4; W32(r_esp, 0x52f822u); f_00600a70();
    /* 0052f822: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0052f829: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052f82c: mov dword ptr [ecx], 0x6c3d60 */ W32((u32)(r_ecx), 0x6c3d60u);
    /* 0052f832: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052f834: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052f835: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0052f83b: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0052f83e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052f83f: fld1  */ FPUSH(1.0);
    /* 0052f841: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0052f844: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052f846: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0052f848: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052f84a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052f84c: push 0x18a88 */ { u32 v = 0x18a88u; r_esp -= 4; W32(r_esp, v); }
    /* 0052f851: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0052f857: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0052f859: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0052f85f: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 0052f865: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x52f867u); call_ind(t); }
    /* 0052f867: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0052f86e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052f871: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052f874: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0052f87b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0052f87c: mov esp, ebp */ r_esp = r_ebp;
    /* 0052f87e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052f87f: ret 4 */ FN_RET(0x0052f7f0); r_esp += 8; return;
}

void f_0052f8b0(void) /* CycleCashOut::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0052f8b0);
    /* 0052f8b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052f8b1: mov ebp, esp */ r_ebp = r_esp;
    /* 0052f8b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052f8b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0052f8b7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052f8b9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0052f8bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052f8bd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052f8c0: call 0x6004e0 */ r_esp -= 4; W32(r_esp, 0x52f8c5u); f_006004e0();
    /* 0052f8c5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052f8c7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052f8ca: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0052f8cd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052f8d0: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0052f8d3: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0052f8d5: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0052f8db: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52f8ddu); call_ind(t); }
    /* 0052f8dd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052f8e0: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0052f8e3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052f8e6: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0052f8e9: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0052f8eb: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0052f8ee: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52f8f0u); call_ind(t); }
    /* 0052f8f0: mov esp, ebp */ r_esp = r_ebp;
    /* 0052f8f2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052f8f3: ret 8 */ FN_RET(0x0052f8b0); r_esp += 12; return;
}

void f_0052f900(void) /* CycleCashOut::vfunc5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0052f900);
    /* 0052f900: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052f901: mov ebp, esp */ r_ebp = r_esp;
    /* 0052f903: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052f904: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0052f907: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052f90a: call 0x600b30 */ r_esp -= 4; W32(r_esp, 0x52f90fu); f_00600b30();
    /* 0052f90f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052f912: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0052f915: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052f918: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0052f91b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0052f91d: mov ecx, eax */ r_ecx = r_eax;
    /* 0052f91f: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0052f922: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52f924u); call_ind(t); }
    /* 0052f924: mov esp, ebp */ r_esp = r_ebp;
    /* 0052f926: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052f927: ret  */ FN_RET(0x0052f900); r_esp += 4; return;
}

void f_00600ac0(void) /* CycleCashOut::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00600ac0);
    /* 00600ac0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00600ac1: mov ebp, esp */ r_ebp = r_esp;
    /* 00600ac3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00600ac6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00600ac9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00600acc: movzx ecx, byte ptr [eax + 0x18] */ r_ecx = (u32)R8((u32)(r_eax+0x18u));
    /* 00600ad0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00600ad2: jne 0x600ad6 */ if (!fZ) goto L_00600ad6;
L_00600ad4:; BB(0x00600ad4);
    /* 00600ad4: jmp 0x600b2a */ goto L_00600b2a;
L_00600ad6:; BB(0x00600ad6);
    /* 00600ad6: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00600ad9: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00600adb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00600ade: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 00600ae1: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x600ae3u); call_ind(t); }
    /* 00600ae3: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00600ae6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00600ae9: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00600aec: call 0x5eb220 */ r_esp -= 4; W32(r_esp, 0x600af1u); f_005eb220();
    /* 00600af1: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00600af4: je 0x600b2a */ if (fZ) goto L_00600b2a;
L_00600af6:; BB(0x00600af6);
    /* 00600af6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00600af9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600afc: cmp edx, dword ptr [ecx + 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x14u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00600aff: jle 0x600b10 */ if ((fZ||fS!=fO)) goto L_00600b10;
L_00600b01:; BB(0x00600b01);
    /* 00600b01: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00600b04: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00600b06: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00600b09: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 00600b0c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x600b0eu); call_ind(t); }
    /* 00600b0e: jmp 0x600b2a */ goto L_00600b2a;
L_00600b10:; BB(0x00600b10);
    /* 00600b10: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600b13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00600b14: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00600b17: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00600b1a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00600b1d: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00600b20: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00600b22: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00600b28: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x600b2au); call_ind(t); }
L_00600b2a:; BB(0x00600b2a);
    /* 00600b2a: mov esp, ebp */ r_esp = r_ebp;
    /* 00600b2c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00600b2d: ret  */ FN_RET(0x00600ac0); r_esp += 4; return;
}

