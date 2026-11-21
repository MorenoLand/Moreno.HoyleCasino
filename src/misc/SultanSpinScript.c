#include "protos.h"

void f_00577d40(void) /* SultanSpinScript::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00577d40);
    /* 00577d40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00577d41: mov ebp, esp */ r_ebp = r_esp;
    /* 00577d43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00577d44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00577d47: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00577d49: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00577d4c: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x577d51u); f_005fc0d0();
    /* 00577d51: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00577d54: mov dword ptr [eax], 0x6cb150 */ W32((u32)(r_eax), 0x6cb150u);
    /* 00577d5a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00577d5d: mov dword ptr [ecx + 0x20], 0 */ W32((u32)(r_ecx+0x20u), 0x0u);
    /* 00577d64: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00577d67: mov dword ptr [edx + 0x24], 0 */ W32((u32)(r_edx+0x24u), 0x0u);
    /* 00577d6e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00577d71: mov esp, ebp */ r_esp = r_ebp;
    /* 00577d73: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00577d74: ret  */ FN_RET(0x00577d40); r_esp += 4; return;
}

void f_00577da0(void) /* SultanSpinScript::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00577da0);
    /* 00577da0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00577da1: mov ebp, esp */ r_ebp = r_esp;
    /* 00577da3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00577da5: push 0x6a6526 */ { u32 v = 0x6a6526u; r_esp -= 4; W32(r_esp, v); }
    /* 00577daa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00577db0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00577db1: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00577db4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00577db9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00577dbb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00577dbc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00577dbf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00577dc5: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 00577dc8: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00577dcb: call 0x5fc360 */ r_esp -= 4; W32(r_esp, 0x577dd0u); f_005fc360();
    /* 00577dd0: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00577dd3: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00577dd7: je 0x577dee */ if (fZ) goto L_00577dee;
L_00577dd9:; BB(0x00577dd9);
    /* 00577dd9: cmp dword ptr [ebp - 0x34], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00577ddd: je 0x577e29 */ if (fZ) goto L_00577e29;
L_00577ddf:; BB(0x00577ddf);
    /* 00577ddf: cmp dword ptr [ebp - 0x34], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00577de3: je 0x578124 */ if (fZ) goto L_00578124;
L_00577de9:; BB(0x00577de9);
    /* 00577de9: jmp 0x578162 */ goto L_00578162;
L_00577dee:; BB(0x00577dee);
    /* 00577dee: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00577df0: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00577df3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00577df5: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00577df8: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00577dfb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x577dfdu); call_ind(t); }
    /* 00577dfd: mov ecx, dword ptr [0x79345c] */ r_ecx = R32((u32)(0x79345cu));
    /* 00577e03: call 0x576860 */ r_esp -= 4; W32(r_esp, 0x577e08u); f_00576860();
    /* 00577e08: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00577e0a: mov ecx, dword ptr [0x79345c] */ r_ecx = R32((u32)(0x79345cu));
    /* 00577e10: call 0x576ce0 */ r_esp -= 4; W32(r_esp, 0x577e15u); f_00576ce0();
    /* 00577e15: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00577e18: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00577e19: mov ecx, dword ptr [0x79345c] */ r_ecx = R32((u32)(0x79345cu));
    /* 00577e1f: call 0x5750b0 */ r_esp -= 4; W32(r_esp, 0x577e24u); f_005750b0();
    /* 00577e24: jmp 0x578162 */ goto L_00578162;
L_00577e29:; BB(0x00577e29);
    /* 00577e29: mov edx, dword ptr [0x79345c] */ r_edx = R32((u32)(0x79345cu));
    /* 00577e2f: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 00577e32: mov dword ptr [eax + 0x178], 6 */ W32((u32)(r_eax+0x178u), 0x6u);
    /* 00577e3c: push 0x1601d */ { u32 v = 0x1601du; r_esp -= 4; W32(r_esp, v); }
    /* 00577e41: mov ecx, dword ptr [0x79345c] */ r_ecx = R32((u32)(0x79345cu));
    /* 00577e47: mov ecx, dword ptr [ecx + 0x10] */ r_ecx = R32((u32)(r_ecx+0x10u));
    /* 00577e4a: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x577e4fu); f_005eaf00();
    /* 00577e4f: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00577e51: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x577e56u); f_00686d82();
    /* 00577e56: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00577e59: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00577e5c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00577e63: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00577e67: je 0x577e78 */ if (fZ) goto L_00577e78;
L_00577e69:; BB(0x00577e69);
    /* 00577e69: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00577e6b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00577e6e: call 0x600a70 */ r_esp -= 4; W32(r_esp, 0x577e73u); f_00600a70();
    /* 00577e73: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00577e76: jmp 0x577e7f */ goto L_00577e7f;
L_00577e78:; BB(0x00577e78);
    /* 00577e78: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_00577e7f:; BB(0x00577e7f);
    /* 00577e7f: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00577e82: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00577e85: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00577e8c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00577e8f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00577e90: mov ecx, dword ptr [0x79345c] */ r_ecx = R32((u32)(0x79345cu));
    /* 00577e96: mov ecx, dword ptr [ecx + 0x10] */ r_ecx = R32((u32)(r_ecx+0x10u));
    /* 00577e99: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x577e9eu); f_005f5d50();
    /* 00577e9e: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00577ea1: cmp dword ptr [edx + 0x20], 0 */ {  u32 a = R32((u32)(r_edx+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00577ea5: jne 0x577eff */ if (!fZ) goto L_00577eff;
L_00577ea7:; BB(0x00577ea7);
    /* 00577ea7: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00577eaa: cmp dword ptr [eax + 0x24], 0 */ {  u32 a = R32((u32)(r_eax+0x24u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00577eae: jne 0x577eff */ if (!fZ) goto L_00577eff;
L_00577eb0:; BB(0x00577eb0);
    /* 00577eb0: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00577eb6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00577eb8: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00577ebe: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 00577ec1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x577ec3u); call_ind(t); }
    /* 00577ec3: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00577ec6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00577ec8: je 0x577eff */ if (fZ) goto L_00577eff;
L_00577eca:; BB(0x00577eca);
    /* 00577eca: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00577ecc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00577ecd: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 00577ed3: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00577ed6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00577ed7: fld1  */ FPUSH(1.0);
    /* 00577ed9: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00577edc: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00577ede: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00577ee0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00577ee2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00577ee4: push 0x1925b */ { u32 v = 0x1925bu; r_esp -= 4; W32(r_esp, v); }
    /* 00577ee9: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00577eef: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00577ef1: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00577ef7: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 00577efd: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x577effu); call_ind(t); }
L_00577eff:; BB(0x00577eff);
    /* 00577eff: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00577f02: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00577f05: mov edx, dword ptr [0x79345c] */ r_edx = R32((u32)(0x79345cu));
    /* 00577f0b: mov eax, dword ptr [edx + ecx*4 + 0x38] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x38u));
    /* 00577f0f: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00577f12: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00577f15: mov ecx, dword ptr [0x79345c] */ r_ecx = R32((u32)(0x79345cu));
    /* 00577f1b: mov ecx, dword ptr [ecx + edx*4 + 0x38] */ r_ecx = R32((u32)(r_ecx+r_edx*4+0x38u));
    /* 00577f1f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00577f21: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00577f24: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x577f26u); call_ind(t); }
    /* 00577f26: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00577f29: cmp dword ptr [ecx + 0x24], 2 */ {  u32 a = R32((u32)(r_ecx+0x24u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00577f2d: jl 0x577f6f */ if ((fS!=fO)) goto L_00577f6f;
L_00577f2f:; BB(0x00577f2f);
    /* 00577f2f: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00577f32: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 00577f35: mov ecx, dword ptr [0x79345c] */ r_ecx = R32((u32)(0x79345cu));
    /* 00577f3b: mov edx, dword ptr [ecx + eax*4 + 0x80] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x80u));
    /* 00577f42: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00577f43: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00577f46: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00577f49: mov edx, dword ptr [0x79345c] */ r_edx = R32((u32)(0x79345cu));
    /* 00577f4f: mov eax, dword ptr [edx + ecx*4 + 0x38] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x38u));
    /* 00577f53: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00577f56: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00577f59: mov ecx, dword ptr [0x79345c] */ r_ecx = R32((u32)(0x79345cu));
    /* 00577f5f: mov ecx, dword ptr [ecx + edx*4 + 0x38] */ r_ecx = R32((u32)(r_ecx+r_edx*4+0x38u));
    /* 00577f63: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00577f65: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00577f6b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x577f6du); call_ind(t); }
    /* 00577f6d: jmp 0x577fa5 */ goto L_00577fa5;
L_00577f6f:; BB(0x00577f6f);
    /* 00577f6f: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00577f71: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x577f76u); f_0062fbf0();
    /* 00577f76: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00577f79: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00577f7a: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00577f7d: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00577f80: mov eax, dword ptr [0x79345c] */ r_eax = R32((u32)(0x79345cu));
    /* 00577f85: mov ecx, dword ptr [eax + edx*4 + 0x38] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x38u));
    /* 00577f89: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00577f8c: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 00577f8f: mov edx, dword ptr [0x79345c] */ r_edx = R32((u32)(0x79345cu));
    /* 00577f95: mov eax, dword ptr [edx + eax*4 + 0x38] */ r_eax = R32((u32)(r_edx+r_eax*4+0x38u));
    /* 00577f99: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00577f9b: mov ecx, eax */ r_ecx = r_eax;
    /* 00577f9d: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00577fa3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x577fa5u); call_ind(t); }
L_00577fa5:; BB(0x00577fa5);
    /* 00577fa5: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00577fa7: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x577facu); f_00686d82();
    /* 00577fac: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00577faf: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00577fb2: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00577fb9: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00577fbd: je 0x577fd2 */ if (fZ) goto L_00577fd2;
L_00577fbf:; BB(0x00577fbf);
    /* 00577fbf: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00577fc2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00577fc3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00577fc5: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00577fc8: call 0x577b80 */ r_esp -= 4; W32(r_esp, 0x577fcdu); f_00577b80();
    /* 00577fcd: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00577fd0: jmp 0x577fd9 */ goto L_00577fd9;
L_00577fd2:; BB(0x00577fd2);
    /* 00577fd2: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_00577fd9:; BB(0x00577fd9);
    /* 00577fd9: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00577fdc: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00577fdf: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00577fe6: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00577fe9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00577fea: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00577fed: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00577ff0: mov eax, dword ptr [0x79345c] */ r_eax = R32((u32)(0x79345cu));
    /* 00577ff5: mov ecx, dword ptr [eax + edx*4 + 0x38] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x38u));
    /* 00577ff9: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x577ffeu); f_005f5d50();
    /* 00577ffe: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00578001: cmp dword ptr [ecx + 0x24], 2 */ {  u32 a = R32((u32)(r_ecx+0x24u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00578005: jl 0x578014 */ if ((fS!=fO)) goto L_00578014;
L_00578007:; BB(0x00578007);
    /* 00578007: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0057800a: cmp dword ptr [edx + 0x20], 0 */ {  u32 a = R32((u32)(r_edx+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057800e: jne 0x5780c8 */ if (!fZ) goto L_005780c8;
L_00578014:; BB(0x00578014);
    /* 00578014: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00578017: cmp dword ptr [eax + 0x20], 0 */ {  u32 a = R32((u32)(r_eax+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057801b: je 0x578077 */ if (fZ) goto L_00578077;
L_0057801d:; BB(0x0057801d);
    /* 0057801d: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0057801f: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x578024u); f_00686d82();
    /* 00578024: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00578027: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0057802a: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00578031: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00578035: je 0x578048 */ if (fZ) goto L_00578048;
L_00578037:; BB(0x00578037);
    /* 00578037: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00578039: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057803b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0057803e: call 0x577b80 */ r_esp -= 4; W32(r_esp, 0x578043u); f_00577b80();
    /* 00578043: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00578046: jmp 0x57804f */ goto L_0057804f;
L_00578048:; BB(0x00578048);
    /* 00578048: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_0057804f:; BB(0x0057804f);
    /* 0057804f: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00578052: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00578055: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0057805c: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0057805f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00578060: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00578063: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00578066: mov edx, dword ptr [0x79345c] */ r_edx = R32((u32)(0x79345cu));
    /* 0057806c: mov ecx, dword ptr [edx + ecx*4 + 0x34] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x34u));
    /* 00578070: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x578075u); f_005f5d50();
    /* 00578075: jmp 0x5780c8 */ goto L_005780c8;
L_00578077:; BB(0x00578077);
    /* 00578077: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00578079: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x57807eu); f_00686d82();
    /* 0057807e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00578081: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00578084: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0057808b: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057808f: je 0x5780a2 */ if (fZ) goto L_005780a2;
L_00578091:; BB(0x00578091);
    /* 00578091: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00578093: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00578095: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00578098: call 0x577b80 */ r_esp -= 4; W32(r_esp, 0x57809du); f_00577b80();
    /* 0057809d: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 005780a0: jmp 0x5780a9 */ goto L_005780a9;
L_005780a2:; BB(0x005780a2);
    /* 005780a2: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_005780a9:; BB(0x005780a9);
    /* 005780a9: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 005780ac: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005780af: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005780b6: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005780b9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005780ba: mov edx, dword ptr [0x79345c] */ r_edx = R32((u32)(0x79345cu));
    /* 005780c0: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 005780c3: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x5780c8u); f_005f5d50();
L_005780c8:; BB(0x005780c8);
    /* 005780c8: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005780cb: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 005780ce: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005780d1: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005780d4: mov dword ptr [edx + 0x20], ecx */ W32((u32)(r_edx+0x20u), r_ecx);
    /* 005780d7: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005780da: cmp dword ptr [eax + 0x20], 3 */ {  u32 a = R32((u32)(r_eax+0x20u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005780de: jl 0x5780f9 */ if ((fS!=fO)) goto L_005780f9;
L_005780e0:; BB(0x005780e0);
    /* 005780e0: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005780e3: mov dword ptr [ecx + 0x20], 0 */ W32((u32)(r_ecx+0x20u), 0x0u);
    /* 005780ea: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005780ed: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 005780f0: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005780f3: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005780f6: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
L_005780f9:; BB(0x005780f9);
    /* 005780f9: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005780fc: cmp dword ptr [edx + 0x24], 3 */ {  u32 a = R32((u32)(r_edx+0x24u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00578100: jge 0x578113 */ if ((fS==fO)) goto L_00578113;
L_00578102:; BB(0x00578102);
    /* 00578102: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00578104: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00578107: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00578109: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0057810c: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0057810f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x578111u); call_ind(t); }
    /* 00578111: jmp 0x578122 */ goto L_00578122;
L_00578113:; BB(0x00578113);
    /* 00578113: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00578115: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00578118: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0057811a: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0057811d: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00578120: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x578122u); call_ind(t); }
L_00578122:; BB(0x00578122);
    /* 00578122: jmp 0x578162 */ goto L_00578162;
L_00578124:; BB(0x00578124);
    /* 00578124: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00578126: mov ecx, dword ptr [0x793458] */ r_ecx = R32((u32)(0x793458u));
    /* 0057812c: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0057812f: mov eax, dword ptr [0x793458] */ r_eax = R32((u32)(0x793458u));
    /* 00578134: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00578137: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00578139: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0057813c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57813eu); call_ind(t); }
    /* 0057813e: mov ecx, dword ptr [0x793458] */ r_ecx = R32((u32)(0x793458u));
    /* 00578144: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00578147: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00578148: mov ecx, dword ptr [0x79345c] */ r_ecx = R32((u32)(0x79345cu));
    /* 0057814e: call 0x575190 */ r_esp -= 4; W32(r_esp, 0x578153u); f_00575190();
    /* 00578153: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00578155: mov eax, dword ptr [0x793458] */ r_eax = R32((u32)(0x793458u));
    /* 0057815a: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0057815d: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x578162u); f_005fc420();
L_00578162:; BB(0x00578162);
    /* 00578162: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00578165: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0057816c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0057816d: mov esp, ebp */ r_esp = r_ebp;
    /* 0057816f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00578170: ret  */ FN_RET(0x00577da0); r_esp += 4; return;
}

