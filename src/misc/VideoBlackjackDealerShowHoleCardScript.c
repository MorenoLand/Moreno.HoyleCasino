#include "protos.h"

void f_00546da0(void) /* VideoBlackjackDealerShowHoleCardScript::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00546da0);
    /* 00546da0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00546da1: mov ebp, esp */ r_ebp = r_esp;
    /* 00546da3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00546da5: push 0x6a517a */ { u32 v = 0x6a517au; r_esp -= 4; W32(r_esp, v); }
    /* 00546daa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00546db0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00546db1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00546db2: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00546db7: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00546db9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00546dba: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00546dbd: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00546dc3: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00546dc6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00546dc8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00546dcb: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x546dd0u); f_005fc0d0();
    /* 00546dd0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00546dd7: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00546dda: mov dword ptr [eax], 0x6c68f4 */ W32((u32)(r_eax), 0x6c68f4u);
    /* 00546de0: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00546de2: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00546de8: call 0x637810 */ r_esp -= 4; W32(r_esp, 0x546dedu); f_00637810();
    /* 00546ded: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00546df0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00546df3: mov dword ptr [ecx + 0x20], eax */ W32((u32)(r_ecx+0x20u), r_eax);
    /* 00546df6: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00546dfd: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00546e00: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00546e03: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00546e0a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00546e0b: mov esp, ebp */ r_esp = r_ebp;
    /* 00546e0d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00546e0e: ret  */ FN_RET(0x00546da0); r_esp += 4; return;
}

void f_00546e10(void) /* VideoBlackjackDealerShowHoleCardScript::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00546e10);
    /* 00546e10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00546e11: mov ebp, esp */ r_ebp = r_esp;
    /* 00546e13: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00546e16: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00546e19: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00546e1c: call 0x5fc360 */ r_esp -= 4; W32(r_esp, 0x546e21u); f_005fc360();
    /* 00546e21: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00546e24: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00546e28: je 0x546e38 */ if (fZ) goto L_00546e38;
L_00546e2a:; BB(0x00546e2a);
    /* 00546e2a: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00546e2e: je 0x546e50 */ if (fZ) goto L_00546e50;
L_00546e30:; BB(0x00546e30);
    /* 00546e30: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00546e34: je 0x546e73 */ if (fZ) goto L_00546e73;
L_00546e36:; BB(0x00546e36);
    /* 00546e36: jmp 0x546e8f */ goto L_00546e8f;
L_00546e38:; BB(0x00546e38);
    /* 00546e38: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00546e3b: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00546e3e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00546e3f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00546e41: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00546e44: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00546e46: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00546e49: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00546e4c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x546e4eu); call_ind(t); }
    /* 00546e4e: jmp 0x546eaa */ goto L_00546eaa;
L_00546e50:; BB(0x00546e50);
    /* 00546e50: mov ecx, dword ptr [0x793408] */ r_ecx = R32((u32)(0x793408u));
    /* 00546e56: call 0x5442b0 */ r_esp -= 4; W32(r_esp, 0x546e5bu); f_005442b0();
    /* 00546e5b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00546e5e: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00546e61: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00546e62: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00546e64: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00546e67: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00546e69: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00546e6c: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00546e6f: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x546e71u); call_ind(t); }
    /* 00546e71: jmp 0x546eaa */ goto L_00546eaa;
L_00546e73:; BB(0x00546e73);
    /* 00546e73: mov ecx, dword ptr [0x793404] */ r_ecx = R32((u32)(0x793404u));
    /* 00546e79: call 0x5493a0 */ r_esp -= 4; W32(r_esp, 0x546e7eu); f_005493a0();
    /* 00546e7e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00546e80: mov eax, dword ptr [0x793400] */ r_eax = R32((u32)(0x793400u));
    /* 00546e85: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00546e88: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x546e8du); f_005fc420();
    /* 00546e8d: jmp 0x546eaa */ goto L_00546eaa;
L_00546e8f:; BB(0x00546e8f);
    /* 00546e8f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00546e91: jne 0x546eaa */ if (!fZ) goto L_00546eaa;
L_00546e93:; BB(0x00546e93);
    /* 00546e93: push 0x5b7 */ { u32 v = 0x5b7u; r_esp -= 4; W32(r_esp, v); }
    /* 00546e98: push 0x6c66dc */ { u32 v = 0x6c66dcu; r_esp -= 4; W32(r_esp, v); }
    /* 00546e9d: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00546ea2: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x546ea7u); f_005e9f20();
    /* 00546ea7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00546eaa:; BB(0x00546eaa);
    /* 00546eaa: mov esp, ebp */ r_esp = r_ebp;
    /* 00546eac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00546ead: ret  */ FN_RET(0x00546e10); r_esp += 4; return;
}

