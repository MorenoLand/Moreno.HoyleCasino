#include "protos.h"

void f_005ca9f0(void) /* CasinoChipButton::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ca9f0);
    /* 005ca9f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ca9f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005ca9f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ca9f5: push 0x6a8a46 */ { u32 v = 0x6a8a46u; r_esp -= 4; W32(r_esp, v); }
    /* 005ca9fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005caa00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005caa01: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005caa02: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005caa07: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005caa09: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005caa0a: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005caa0d: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005caa13: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005caa16: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005caa19: call 0x601a80 */ r_esp -= 4; W32(r_esp, 0x5caa1eu); f_00601a80();
    /* 005caa1e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005caa25: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005caa28: mov dword ptr [eax], 0x6d2444 */ W32((u32)(r_eax), 0x6d2444u);
    /* 005caa2e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005caa31: fld qword ptr [ebp + 8] */ FPUSH(R_F64((u32)(r_ebp+0x8u)));
    /* 005caa34: fstp qword ptr [ecx + 0x1e0] */ W_F64((u32)(r_ecx+0x1e0u), ST(0)); FPOP();
    /* 005caa3a: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005caa3d: mov byte ptr [edx + 0x1b5], 1 */ W8((u32)(r_edx+0x1b5u), 0x1u);
    /* 005caa44: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005caa46: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005caa49: call 0x5eb700 */ r_esp -= 4; W32(r_esp, 0x5caa4eu); f_005eb700();
    /* 005caa4e: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005caa50: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 005caa52: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005caa55: call 0x602ef0 */ r_esp -= 4; W32(r_esp, 0x5caa5au); f_00602ef0();
    /* 005caa5a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005caa61: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005caa64: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005caa67: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005caa6e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005caa6f: mov esp, ebp */ r_esp = r_ebp;
    /* 005caa71: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005caa72: ret 8 */ FN_RET(0x005ca9f0); r_esp += 12; return;
}

void f_005caaa0(void) /* CasinoChipButton::vfunc48 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005caaa0);
    /* 005caaa0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005caaa1: mov ebp, esp */ r_ebp = r_esp;
    /* 005caaa3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005caaa6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005caaa9: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005caab0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005caab7: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005caaba: fld qword ptr [0x6b3e40] */ FPUSH(R_F64((u32)(0x6b3e40u)));
    /* 005caac0: fcomp qword ptr [eax + 0x1e0] */ fx_compare(ST(0), R_F64((u32)(r_eax+0x1e0u))); FPOP();
    /* 005caac6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005caac8: test ah, 0x44 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x44u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 005caacb: jp 0x5caad6 */ if (fP) goto L_005caad6;
L_005caacd:; BB(0x005caacd);
    /* 005caacd: mov dword ptr [ebp - 4], 0x19 */ W32((u32)(r_ebp+0xfffffffcu), 0x19u);
    /* 005caad4: jmp 0x5caae7 */ goto L_005caae7;
L_005caad6:; BB(0x005caad6);
    /* 005caad6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005caad9: fld qword ptr [ecx + 0x1e0] */ FPUSH(R_F64((u32)(r_ecx+0x1e0u)));
    /* 005caadf: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x5caae4u); f_00686cc0();
    /* 005caae4: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_005caae7:; BB(0x005caae7);
    /* 005caae7: lea edx, [ebp - 8] */ r_edx = (u32)(r_ebp+0xfffffff8u);
    /* 005caaea: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005caaeb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005caaee: call 0x5caea0 */ r_esp -= 4; W32(r_esp, 0x5caaf3u); f_005caea0();
    /* 005caaf3: mov esp, ebp */ r_esp = r_ebp;
    /* 005caaf5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005caaf6: ret  */ FN_RET(0x005caaa0); r_esp += 4; return;
}

void f_005cab00(void) /* CasinoChipButton::vfunc49 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cab00);
    /* 005cab00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cab01: mov ebp, esp */ r_ebp = r_esp;
    /* 005cab03: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cab06: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005cab09: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005cab10: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005cab17: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cab1a: fld qword ptr [0x6b3e40] */ FPUSH(R_F64((u32)(0x6b3e40u)));
    /* 005cab20: fcomp qword ptr [eax + 0x1e0] */ fx_compare(ST(0), R_F64((u32)(r_eax+0x1e0u))); FPOP();
    /* 005cab26: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005cab28: test ah, 0x44 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x44u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 005cab2b: jp 0x5cab36 */ if (fP) goto L_005cab36;
L_005cab2d:; BB(0x005cab2d);
    /* 005cab2d: mov dword ptr [ebp - 4], 0xffffffe7 */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffe7u);
    /* 005cab34: jmp 0x5cab4a */ goto L_005cab4a;
L_005cab36:; BB(0x005cab36);
    /* 005cab36: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cab39: fld qword ptr [ecx + 0x1e0] */ FPUSH(R_F64((u32)(r_ecx+0x1e0u)));
    /* 005cab3f: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x5cab44u); f_00686cc0();
    /* 005cab44: imul eax, eax, -1 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xffffffffu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005cab47: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_005cab4a:; BB(0x005cab4a);
    /* 005cab4a: lea edx, [ebp - 8] */ r_edx = (u32)(r_ebp+0xfffffff8u);
    /* 005cab4d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cab4e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cab51: call 0x5caea0 */ r_esp -= 4; W32(r_esp, 0x5cab56u); f_005caea0();
    /* 005cab56: mov esp, ebp */ r_esp = r_ebp;
    /* 005cab58: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cab59: ret  */ FN_RET(0x005cab00); r_esp += 4; return;
}

