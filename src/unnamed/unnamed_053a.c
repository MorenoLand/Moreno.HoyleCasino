#include "protos.h"

void f_0053a050(void) /* sub_53A050 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053a050);
    /* 0053a050: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053a051: mov ebp, esp */ r_ebp = r_esp;
    /* 0053a053: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053a054: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0053a057: movzx eax, byte ptr [ebp + 0x10] */ r_eax = (u32)R8((u32)(r_ebp+0x10u));
    /* 0053a05b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053a05d: je 0x53a07b */ if (fZ) goto L_0053a07b;
L_0053a05f:; BB(0x0053a05f);
    /* 0053a05f: push 0x6c5a44 */ { u32 v = 0x6c5a44u; r_esp -= 4; W32(r_esp, v); }
    /* 0053a064: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x53a069u); f_00630f40();
    /* 0053a069: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053a06c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053a06d: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0053a070: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053a071: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x53a076u); f_00686d8e();
    /* 0053a076: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053a079: jmp 0x53a0b7 */ goto L_0053a0b7;
L_0053a07b:; BB(0x0053a07b);
    /* 0053a07b: cmp dword ptr [ebp + 0xc], 1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053a07f: jle 0x53a09d */ if ((fZ||fS!=fO)) goto L_0053a09d;
L_0053a081:; BB(0x0053a081);
    /* 0053a081: push 0x6c5a1c */ { u32 v = 0x6c5a1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0053a086: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x53a08bu); f_00630f40();
    /* 0053a08b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053a08e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053a08f: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0053a092: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053a093: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x53a098u); f_00686d8e();
    /* 0053a098: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053a09b: jmp 0x53a0b7 */ goto L_0053a0b7;
L_0053a09d:; BB(0x0053a09d);
    /* 0053a09d: push 0x6c59e8 */ { u32 v = 0x6c59e8u; r_esp -= 4; W32(r_esp, v); }
    /* 0053a0a2: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x53a0a7u); f_00630f40();
    /* 0053a0a7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053a0aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053a0ab: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0053a0ae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053a0af: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x53a0b4u); f_00686d8e();
    /* 0053a0b4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0053a0b7:; BB(0x0053a0b7);
    /* 0053a0b7: mov esp, ebp */ r_esp = r_ebp;
    /* 0053a0b9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053a0ba: ret 0x10 */ FN_RET(0x0053a050); r_esp += 20; return;
}

void f_0053a140(void) /* sub_53A140 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053a140);
    /* 0053a140: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053a141: mov ebp, esp */ r_ebp = r_esp;
    /* 0053a143: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053a146: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0053a149: fldz  */ FPUSH(0.0);
    /* 0053a14b: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0053a14e: lea eax, [ebp - 0x18] */ r_eax = (u32)(r_ebp+0xffffffe8u);
    /* 0053a151: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053a152: mov ecx, dword ptr [0x7933e8] */ r_ecx = R32((u32)(0x7933e8u));
    /* 0053a158: call 0x5daa20 */ r_esp -= 4; W32(r_esp, 0x53a15du); f_005daa20();
    /* 0053a15d: fild dword ptr [eax] */ FPUSH((long double)(i32)R32((u32)(r_eax)));
    /* 0053a15f: fstp qword ptr [ebp - 8] */ W_F64((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 0053a162: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0053a165: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053a166: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x53a16bu); f_005dcb00();
    /* 0053a16b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053a16e: mov ecx, eax */ r_ecx = r_eax;
    /* 0053a170: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x53a175u); f_005d5a50();
    /* 0053a175: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0053a178: fild dword ptr [ebp - 0x20] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffe0u)));
    /* 0053a17b: fcomp qword ptr [ebp - 8] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xfffffff8u))); FPOP();
    /* 0053a17e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0053a180: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 0053a183: jp 0x53a1bb */ if (fP) goto L_0053a1bb;
L_0053a185:; BB(0x0053a185);
    /* 0053a185: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0053a188: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053a189: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x53a18eu); f_005dcb00();
    /* 0053a18e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053a191: mov ecx, eax */ r_ecx = r_eax;
    /* 0053a193: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x53a198u); f_005d5a50();
    /* 0053a198: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0053a19b: fild dword ptr [ebp - 0x24] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffdcu)));
    /* 0053a19e: fsubr qword ptr [ebp - 8] */ ST(0) = R_F64((u32)(r_ebp+0xfffffff8u)) - ST(0);
    /* 0053a1a1: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0053a1a4: fld qword ptr [ebp - 0x10] */ FPUSH(R_F64((u32)(r_ebp+0xfffffff0u)));
    /* 0053a1a7: fdiv qword ptr [ebp - 8] */ ST(0) = ST(0) / R_F64((u32)(r_ebp+0xfffffff8u));
    /* 0053a1aa: fcomp qword ptr [0x6b2c38] */ fx_compare(ST(0), R_F64((u32)(0x6b2c38u))); FPOP();
    /* 0053a1b0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0053a1b2: test ah, 1 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0053a1b5: jne 0x53a1bb */ if (!fZ) goto L_0053a1bb;
L_0053a1b7:; BB(0x0053a1b7);
    /* 0053a1b7: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0053a1b9: jmp 0x53a1bd */ goto L_0053a1bd;
L_0053a1bb:; BB(0x0053a1bb);
    /* 0053a1bb: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0053a1bd:; BB(0x0053a1bd);
    /* 0053a1bd: mov esp, ebp */ r_esp = r_ebp;
    /* 0053a1bf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053a1c0: ret 4 */ FN_RET(0x0053a140); r_esp += 8; return;
}

