#include "protos.h"

void f_005a5840(void) /* sub_5A5840 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a5840);
    /* 005a5840: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a5841: mov ebp, esp */ r_ebp = r_esp;
    /* 005a5843: sub esp, 0x88 */ {  u32 a = r_esp; u32 b = 0x88u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a5849: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005a584a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005a584b: mov dword ptr [ebp - 0x68], ecx */ W32((u32)(r_ebp+0xffffff98u), r_ecx);
    /* 005a584e: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 005a5855: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005a585c: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005a5863: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 005a586a: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 005a5871: mov byte ptr [ebp - 0x19], 0 */ W8((u32)(r_ebp+0xffffffe7u), 0x0u);
    /* 005a5875: mov byte ptr [ebp - 0x2d], 0 */ W8((u32)(r_ebp+0xffffffd3u), 0x0u);
    /* 005a5879: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005a587f: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x5a5884u); f_005da7b0();
    /* 005a5884: mov byte ptr [ebp - 0x35], al */ W8((u32)(r_ebp+0xffffffcbu), (u8)r_eax);
    /* 005a5887: mov eax, dword ptr [0x793600] */ r_eax = R32((u32)(0x793600u));
    /* 005a588c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005a588e: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005a5894: mov eax, dword ptr [edx + 0x2b0] */ r_eax = R32((u32)(r_edx+0x2b0u));
    /* 005a589a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5a589cu); call_ind(t); }
    /* 005a589c: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005a589f: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005a58a5: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005a58a7: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005a58ad: mov eax, dword ptr [edx + 0x2b4] */ r_eax = R32((u32)(r_edx+0x2b4u));
    /* 005a58b3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5a58b5u); call_ind(t); }
    /* 005a58b5: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005a58b8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a58bb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a58bc: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5a58c1u); f_005dcb00();
    /* 005a58c1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a58c4: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 005a58c7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005a58ca: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a58cb: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5a58d0u); f_005dcb00();
    /* 005a58d0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a58d3: mov ecx, eax */ r_ecx = r_eax;
    /* 005a58d5: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x5a58dau); f_005d5a50();
    /* 005a58da: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005a58dd: mov eax, dword ptr [0x793604] */ r_eax = R32((u32)(0x793604u));
    /* 005a58e2: mov ecx, dword ptr [eax + 0x5c8] */ r_ecx = R32((u32)(r_eax+0x5c8u));
    /* 005a58e8: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005a58eb: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 005a58f2: movzx edx, byte ptr [ebp - 0x35] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffcbu));
    /* 005a58f6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a58f8: je 0x5a5eed */ if (fZ) goto L_005a5eed;
L_005a58fe:; BB(0x005a58fe);
    /* 005a58fe: lea eax, [ebp - 0x54] */ r_eax = (u32)(r_ebp+0xffffffacu);
    /* 005a5901: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a5902: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005a5908: call 0x5daa20 */ r_esp -= 4; W32(r_esp, 0x5a590du); f_005daa20();
    /* 005a590d: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005a590f: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005a5912: lea edx, [ebp - 0x5c] */ r_edx = (u32)(r_ebp+0xffffffa4u);
    /* 005a5915: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a5916: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005a591c: call 0x5daae0 */ r_esp -= 4; W32(r_esp, 0x5a5921u); f_005daae0();
    /* 005a5921: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005a5923: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005a5926: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005a592c: call 0x5da8a0 */ r_esp -= 4; W32(r_esp, 0x5a5931u); f_005da8a0();
    /* 005a5931: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005a5934: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005a593a: call 0x5da8c0 */ r_esp -= 4; W32(r_esp, 0x5a593fu); f_005da8c0();
    /* 005a593f: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005a5942: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a5945: cmp ecx, dword ptr [ebp - 0x24] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a5948: jge 0x5a5951 */ if ((fS==fO)) goto L_005a5951;
L_005a594a:; BB(0x005a594a);
    /* 005a594a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a594c: jmp 0x5a6735 */ goto L_005a6735;
L_005a5951:; BB(0x005a5951);
    /* 005a5951: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a5954: cmp edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a5957: jne 0x5a5961 */ if (!fZ) goto L_005a5961;
L_005a5959:; BB(0x005a5959);
    /* 005a5959: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005a595c: jmp 0x5a6735 */ goto L_005a6735;
L_005a5961:; BB(0x005a5961);
    /* 005a5961: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a5964: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005a5965: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005a5967: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005a5969: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 005a596c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a596f: cmp eax, dword ptr [ebp - 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a5972: jle 0x5a59f2 */ if ((fZ||fS!=fO)) goto L_005a59f2;
L_005a5974:; BB(0x005a5974);
    /* 005a5974: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005a5977: sub ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005a597a: mov dword ptr [ebp - 0x6c], ecx */ W32((u32)(r_ebp+0xffffff94u), r_ecx);
    /* 005a597d: fild dword ptr [ebp - 0x6c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff94u)));
    /* 005a5980: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a5983: sub edx, dword ptr [ebp - 0x20] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005a5986: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a5987: fstp qword ptr [ebp - 0x74] */ W_F64((u32)(r_ebp+0xffffff8cu), ST(0)); FPOP();
    /* 005a598a: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5a598fu); f_0062fbf0();
    /* 005a598f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a5992: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 005a5995: fild dword ptr [ebp - 0x78] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff88u)));
    /* 005a5998: fdiv qword ptr [0x6b3728] */ ST(0) = ST(0) / R_F64((u32)(0x6b3728u));
    /* 005a599e: fadd qword ptr [0x6b3748] */ ST(0) = ST(0) + R_F64((u32)(0x6b3748u));
    /* 005a59a4: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a59a7: sub eax, dword ptr [ebp - 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005a59aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a59ab: fstp qword ptr [ebp - 0x80] */ W_F64((u32)(r_ebp+0xffffff80u), ST(0)); FPOP();
    /* 005a59ae: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5a59b3u); f_0062fbf0();
    /* 005a59b3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a59b6: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 005a59bc: fild dword ptr [ebp - 0x84] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff7cu)));
    /* 005a59c2: fdiv qword ptr [0x6b3728] */ ST(0) = ST(0) / R_F64((u32)(0x6b3728u));
    /* 005a59c8: fimul dword ptr [ebp - 4] */ ST(0) = ST(0) * (long double)(i32)R32((u32)(r_ebp+0xfffffffcu));
    /* 005a59cb: fadd qword ptr [ebp - 0x80] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xffffff80u));
    /* 005a59ce: fcomp qword ptr [ebp - 0x74] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xffffff8cu))); FPOP();
    /* 005a59d1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a59d3: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 005a59d6: jp 0x5a59f2 */ if (fP) goto L_005a59f2;
L_005a59d8:; BB(0x005a59d8);
    /* 005a59d8: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 005a59da: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5a59dfu); f_0062fbf0();
    /* 005a59df: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a59e2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a59e5: add ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005a59e8: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a59ea: jge 0x5a59f2 */ if ((fS==fO)) goto L_005a59f2;
L_005a59ec:; BB(0x005a59ec);
    /* 005a59ec: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a59ef: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
L_005a59f2:; BB(0x005a59f2);
    /* 005a59f2: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005a59f5: cmp eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a59f8: jle 0x5a5a00 */ if ((fZ||fS!=fO)) goto L_005a5a00;
L_005a59fa:; BB(0x005a59fa);
    /* 005a59fa: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005a59fd: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
L_005a5a00:; BB(0x005a5a00);
    /* 005a5a00: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a5a03: cmp edx, dword ptr [ebp - 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a5a06: jne 0x5a5a30 */ if (!fZ) goto L_005a5a30;
L_005a5a08:; BB(0x005a5a08);
    /* 005a5a08: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005a5a0b: add eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a5a0e: cmp dword ptr [ebp - 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a5a11: jle 0x5a5a30 */ if ((fZ||fS!=fO)) goto L_005a5a30;
L_005a5a13:; BB(0x005a5a13);
    /* 005a5a13: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a5a16: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a5a17: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5a5a1cu); f_005dcb00();
    /* 005a5a1c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a5a1f: cmp dword ptr [eax + 0x4a4], 4 */ {  u32 a = R32((u32)(r_eax+0x4a4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a5a26: je 0x5a5a30 */ if (fZ) goto L_005a5a30;
L_005a5a28:; BB(0x005a5a28);
    /* 005a5a28: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005a5a2b: jmp 0x5a6735 */ goto L_005a6735;
L_005a5a30:; BB(0x005a5a30);
    /* 005a5a30: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005a5a33: cmp edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a5a36: jl 0x5a5a55 */ if ((fS!=fO)) goto L_005a5a55;
L_005a5a38:; BB(0x005a5a38);
    /* 005a5a38: mov byte ptr [ebp - 0x19], 1 */ W8((u32)(r_ebp+0xffffffe7u), 0x1u);
    /* 005a5a3c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005a5a3f: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 005a5a42: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005a5a45: cmp ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a5a48: jle 0x5a5a50 */ if ((fZ||fS!=fO)) goto L_005a5a50;
L_005a5a4a:; BB(0x005a5a4a);
    /* 005a5a4a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a5a4d: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
L_005a5a50:; BB(0x005a5a50);
    /* 005a5a50: jmp 0x5a5af8 */ goto L_005a5af8;
L_005a5a55:; BB(0x005a5a55);
    /* 005a5a55: mov byte ptr [ebp - 0x19], 0 */ W8((u32)(r_ebp+0xffffffe7u), 0x0u);
    /* 005a5a59: cmp dword ptr [ebp - 0x14], 0xa */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a5a5d: jl 0x5a5a68 */ if ((fS!=fO)) goto L_005a5a68;
L_005a5a5f:; BB(0x005a5a5f);
    /* 005a5a5f: mov dword ptr [ebp - 0x3c], 0x32 */ W32((u32)(r_ebp+0xffffffc4u), 0x32u);
    /* 005a5a66: jmp 0x5a5a71 */ goto L_005a5a71;
L_005a5a68:; BB(0x005a5a68);
    /* 005a5a68: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005a5a6b: imul eax, eax, 5 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x5u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a5a6e: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
L_005a5a71:; BB(0x005a5a71);
    /* 005a5a71: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a5a74: sub ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005a5a77: cmp dword ptr [ebp - 0x20], ecx */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a5a7a: jle 0x5a5a92 */ if ((fZ||fS!=fO)) goto L_005a5a92;
L_005a5a7c:; BB(0x005a5a7c);
    /* 005a5a7c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a5a7f: sub edx, dword ptr [ebp - 0x20] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005a5a82: mov eax, 6 */ r_eax = 0x6u;
    /* 005a5a87: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005a5a89: imul eax, eax, 0xf */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xfu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a5a8c: add eax, dword ptr [ebp - 0x3c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffc4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a5a8f: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
L_005a5a92:; BB(0x005a5a92);
    /* 005a5a92: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005a5a95: sub ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005a5a98: cmp ecx, dword ptr [ebp - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a5a9b: jg 0x5a5aa8 */ if ((!fZ&&fS==fO)) goto L_005a5aa8;
L_005a5a9d:; BB(0x005a5a9d);
    /* 005a5a9d: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005a5aa0: sub edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005a5aa3: cmp edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a5aa6: jle 0x5a5ab1 */ if ((fZ||fS!=fO)) goto L_005a5ab1;
L_005a5aa8:; BB(0x005a5aa8);
    /* 005a5aa8: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 005a5aab: add eax, 0x1e */ {  u32 a = r_eax; u32 b = 0x1eu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a5aae: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
L_005a5ab1:; BB(0x005a5ab1);
    /* 005a5ab1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a5ab4: sub ecx, dword ptr [ebp - 0x20] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005a5ab7: cmp ecx, 0x19 */ {  u32 a = r_ecx; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a5aba: jle 0x5a5ac5 */ if ((fZ||fS!=fO)) goto L_005a5ac5;
L_005a5abc:; BB(0x005a5abc);
    /* 005a5abc: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005a5abf: sub edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005a5ac2: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
L_005a5ac5:; BB(0x005a5ac5);
    /* 005a5ac5: cmp dword ptr [ebp - 0x3c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a5ac9: jge 0x5a5ad2 */ if ((fS==fO)) goto L_005a5ad2;
L_005a5acb:; BB(0x005a5acb);
    /* 005a5acb: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
L_005a5ad2:; BB(0x005a5ad2);
    /* 005a5ad2: cmp dword ptr [ebp - 0x3c], 0x4b */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x4bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a5ad6: jle 0x5a5adf */ if ((fZ||fS!=fO)) goto L_005a5adf;
L_005a5ad8:; BB(0x005a5ad8);
    /* 005a5ad8: mov dword ptr [ebp - 0x3c], 0x4b */ W32((u32)(r_ebp+0xffffffc4u), 0x4bu);
L_005a5adf:; BB(0x005a5adf);
    /* 005a5adf: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 005a5ae1: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5a5ae6u); f_0062fbf0();
    /* 005a5ae6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a5ae9: cmp eax, dword ptr [ebp - 0x3c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffc4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a5aec: jge 0x5a5af4 */ if ((fS==fO)) goto L_005a5af4;
L_005a5aee:; BB(0x005a5aee);
    /* 005a5aee: mov byte ptr [ebp - 0x2d], 1 */ W8((u32)(r_ebp+0xffffffd3u), 0x1u);
    /* 005a5af2: jmp 0x5a5af8 */ goto L_005a5af8;
L_005a5af4:; BB(0x005a5af4);
    /* 005a5af4: mov byte ptr [ebp - 0x2d], 0 */ W8((u32)(r_ebp+0xffffffd3u), 0x0u);
L_005a5af8:; BB(0x005a5af8);
    /* 005a5af8: movzx eax, byte ptr [ebp - 0x19] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffe7u));
    /* 005a5afc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a5afe: jne 0x5a5b0c */ if (!fZ) goto L_005a5b0c;
L_005a5b00:; BB(0x005a5b00);
    /* 005a5b00: movzx ecx, byte ptr [ebp - 0x2d] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffd3u));
    /* 005a5b04: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a5b06: je 0x5a5eed */ if (fZ) goto L_005a5eed;
L_005a5b0c:; BB(0x005a5b0c);
    /* 005a5b0c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a5b0f: cmp edx, dword ptr [ebp - 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a5b12: jne 0x5a5d40 */ if (!fZ) goto L_005a5d40;
L_005a5b18:; BB(0x005a5b18);
    /* 005a5b18: movzx eax, byte ptr [ebp - 0x19] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffe7u));
    /* 005a5b1c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a5b1e: je 0x5a5c5b */ if (fZ) goto L_005a5c5b;
L_005a5b24:; BB(0x005a5b24);
    /* 005a5b24: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005a5b26: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5a5b2bu); f_0062fbf0();
    /* 005a5b2b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a5b2e: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 005a5b31: cmp dword ptr [ebp - 0x48], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a5b35: jge 0x5a5b8c */ if ((fS==fO)) goto L_005a5b8c;
L_005a5b37:; BB(0x005a5b37);
    /* 005a5b37: mov esi, dword ptr [ebp - 0x10] */ r_esi = R32((u32)(r_ebp+0xfffffff0u));
    /* 005a5b3a: sub esi, dword ptr [ebp - 0xc] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005a5b3d: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005a5b3f: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5a5b44u); f_0062fbf0();
    /* 005a5b44: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a5b47: imul eax, dword ptr [ebp - 0x24] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xffffffdcu)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a5b4b: lea ecx, [esi + eax + 1] */ r_ecx = (u32)(r_esi+r_eax+0x1u);
    /* 005a5b4f: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 005a5b52: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a5b55: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005a5b56: mov ecx, 5 */ r_ecx = 0x5u;
    /* 005a5b5b: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005a5b5b, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005a5b5b, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005a5b5d: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a5b60: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005a5b62: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 005a5b65: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a5b68: cmp ecx, dword ptr [ebp - 0x24] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a5b6b: jl 0x5a5b87 */ if ((fS!=fO)) goto L_005a5b87;
L_005a5b6d:; BB(0x005a5b6d);
    /* 005a5b6d: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a5b70: cmp edx, dword ptr [ebp - 0x34] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffccu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a5b73: jle 0x5a5b7f */ if ((fZ||fS!=fO)) goto L_005a5b7f;
L_005a5b75:; BB(0x005a5b75);
    /* 005a5b75: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005a5b78: jmp 0x5a6735 */ goto L_005a6735;
L_005a5b7f:; BB(0x005a5b7f);
    /* 005a5b7f: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a5b82: jmp 0x5a6735 */ goto L_005a6735;
L_005a5b87:; BB(0x005a5b87);
    /* 005a5b87: jmp 0x5a5c56 */ goto L_005a5c56;
L_005a5b8c:; BB(0x005a5b8c);
    /* 005a5b8c: cmp dword ptr [ebp - 0x48], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a5b90: jge 0x5a5c56 */ if ((fS==fO)) goto L_005a5c56;
L_005a5b96:; BB(0x005a5b96);
    /* 005a5b96: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 005a5b98: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5a5b9du); f_0062fbf0();
    /* 005a5b9d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a5ba0: imul eax, dword ptr [ebp - 0x24] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xffffffdcu)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a5ba4: cmp dword ptr [ebp - 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a5ba7: jge 0x5a5c02 */ if ((fS==fO)) goto L_005a5c02;
L_005a5ba9:; BB(0x005a5ba9);
    /* 005a5ba9: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 005a5bab: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5a5bb0u); f_0062fbf0();
    /* 005a5bb0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a5bb3: mov esi, eax */ r_esi = r_eax;
    /* 005a5bb5: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 005a5bb7: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5a5bbcu); f_0062fbf0();
    /* 005a5bbc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a5bbf: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005a5bc1: imul esi, dword ptr [ebp - 0x24] */ { i64 t = (i64)(i32)r_esi * (i64)(i32)R32((u32)(r_ebp+0xffffffdcu)); r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a5bc5: add esi, dword ptr [ebp - 0xc] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005a5bc8: mov dword ptr [ebp - 0x4c], esi */ W32((u32)(r_ebp+0xffffffb4u), r_esi);
    /* 005a5bcb: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a5bce: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005a5bcf: mov ecx, 5 */ r_ecx = 0x5u;
    /* 005a5bd4: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005a5bd4, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005a5bd4, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005a5bd6: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a5bd9: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005a5bdb: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 005a5bde: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a5be1: cmp ecx, dword ptr [ebp - 0x24] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a5be4: jl 0x5a5c00 */ if ((fS!=fO)) goto L_005a5c00;
L_005a5be6:; BB(0x005a5be6);
    /* 005a5be6: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a5be9: cmp edx, dword ptr [ebp - 0x34] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffccu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a5bec: jle 0x5a5bf8 */ if ((fZ||fS!=fO)) goto L_005a5bf8;
L_005a5bee:; BB(0x005a5bee);
    /* 005a5bee: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005a5bf1: jmp 0x5a6735 */ goto L_005a6735;
L_005a5bf8:; BB(0x005a5bf8);
    /* 005a5bf8: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a5bfb: jmp 0x5a6735 */ goto L_005a6735;
L_005a5c00:; BB(0x005a5c00);
    /* 005a5c00: jmp 0x5a5c56 */ goto L_005a5c56;
L_005a5c02:; BB(0x005a5c02);
    /* 005a5c02: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 005a5c04: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5a5c09u); f_0062fbf0();
    /* 005a5c09: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a5c0c: mov esi, eax */ r_esi = r_eax;
    /* 005a5c0e: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 005a5c10: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5a5c15u); f_0062fbf0();
    /* 005a5c15: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a5c18: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005a5c1a: imul esi, dword ptr [ebp - 0x24] */ { i64 t = (i64)(i32)r_esi * (i64)(i32)R32((u32)(r_ebp+0xffffffdcu)); r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a5c1e: mov dword ptr [ebp - 0x4c], esi */ W32((u32)(r_ebp+0xffffffb4u), r_esi);
    /* 005a5c21: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a5c24: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005a5c25: mov ecx, 5 */ r_ecx = 0x5u;
    /* 005a5c2a: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005a5c2a, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005a5c2a, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005a5c2c: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a5c2f: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005a5c31: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 005a5c34: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a5c37: cmp ecx, dword ptr [ebp - 0x24] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a5c3a: jl 0x5a5c56 */ if ((fS!=fO)) goto L_005a5c56;
L_005a5c3c:; BB(0x005a5c3c);
    /* 005a5c3c: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a5c3f: cmp edx, dword ptr [ebp - 0x34] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffccu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a5c42: jle 0x5a5c4e */ if ((fZ||fS!=fO)) goto L_005a5c4e;
L_005a5c44:; BB(0x005a5c44);
    /* 005a5c44: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005a5c47: jmp 0x5a6735 */ goto L_005a6735;
L_005a5c4e:; BB(0x005a5c4e);
    /* 005a5c4e: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a5c51: jmp 0x5a6735 */ goto L_005a6735;
L_005a5c56:; BB(0x005a5c56);
    /* 005a5c56: jmp 0x5a5d3b */ goto L_005a5d3b;
L_005a5c5b:; BB(0x005a5c5b);
    /* 005a5c5b: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005a5c5d: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5a5c62u); f_0062fbf0();
    /* 005a5c62: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a5c65: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 005a5c68: cmp dword ptr [ebp - 0x48], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a5c6c: jge 0x5a5d3b */ if ((fS==fO)) goto L_005a5d3b;
L_005a5c72:; BB(0x005a5c72);
    /* 005a5c72: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 005a5c74: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5a5c79u); f_0062fbf0();
    /* 005a5c79: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a5c7c: imul eax, dword ptr [ebp - 0x24] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xffffffdcu)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a5c80: cmp dword ptr [ebp - 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a5c83: jge 0x5a5ce7 */ if ((fS==fO)) goto L_005a5ce7;
L_005a5c85:; BB(0x005a5c85);
    /* 005a5c85: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a5c88: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005a5c89: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005a5c8b: mov esi, eax */ r_esi = r_eax;
    /* 005a5c8d: sar esi, 1 */ { u32 c = (1u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 005a5c8f: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 005a5c91: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5a5c96u); f_0062fbf0();
    /* 005a5c96: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a5c99: mov edi, eax */ r_edi = r_eax;
    /* 005a5c9b: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 005a5c9d: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5a5ca2u); f_0062fbf0();
    /* 005a5ca2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a5ca5: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 005a5ca7: imul edi, dword ptr [ebp - 0x24] */ { i64 t = (i64)(i32)r_edi * (i64)(i32)R32((u32)(r_ebp+0xffffffdcu)); r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a5cab: add esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005a5cad: mov dword ptr [ebp - 0x4c], esi */ W32((u32)(r_ebp+0xffffffb4u), r_esi);
    /* 005a5cb0: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a5cb3: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005a5cb4: mov ecx, 5 */ r_ecx = 0x5u;
    /* 005a5cb9: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005a5cb9, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005a5cb9, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005a5cbb: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a5cbe: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005a5cc0: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 005a5cc3: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a5cc6: cmp ecx, dword ptr [ebp - 0x24] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a5cc9: jl 0x5a5ce5 */ if ((fS!=fO)) goto L_005a5ce5;
L_005a5ccb:; BB(0x005a5ccb);
    /* 005a5ccb: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a5cce: cmp edx, dword ptr [ebp - 0x34] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffccu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a5cd1: jle 0x5a5cdd */ if ((fZ||fS!=fO)) goto L_005a5cdd;
L_005a5cd3:; BB(0x005a5cd3);
    /* 005a5cd3: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005a5cd6: jmp 0x5a6735 */ goto L_005a6735;
L_005a5cdd:; BB(0x005a5cdd);
    /* 005a5cdd: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a5ce0: jmp 0x5a6735 */ goto L_005a6735;
L_005a5ce5:; BB(0x005a5ce5);
    /* 005a5ce5: jmp 0x5a5d3b */ goto L_005a5d3b;
L_005a5ce7:; BB(0x005a5ce7);
    /* 005a5ce7: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 005a5ce9: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5a5ceeu); f_0062fbf0();
    /* 005a5cee: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a5cf1: mov esi, eax */ r_esi = r_eax;
    /* 005a5cf3: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 005a5cf5: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5a5cfau); f_0062fbf0();
    /* 005a5cfa: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a5cfd: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005a5cff: imul esi, dword ptr [ebp - 0x24] */ { i64 t = (i64)(i32)r_esi * (i64)(i32)R32((u32)(r_ebp+0xffffffdcu)); r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a5d03: mov dword ptr [ebp - 0x4c], esi */ W32((u32)(r_ebp+0xffffffb4u), r_esi);
    /* 005a5d06: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a5d09: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005a5d0a: mov ecx, 5 */ r_ecx = 0x5u;
    /* 005a5d0f: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005a5d0f, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005a5d0f, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005a5d11: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a5d14: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005a5d16: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 005a5d19: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a5d1c: cmp ecx, dword ptr [ebp - 0x24] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a5d1f: jl 0x5a5d3b */ if ((fS!=fO)) goto L_005a5d3b;
L_005a5d21:; BB(0x005a5d21);
    /* 005a5d21: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a5d24: cmp edx, dword ptr [ebp - 0x34] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffccu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a5d27: jle 0x5a5d33 */ if ((fZ||fS!=fO)) goto L_005a5d33;
L_005a5d29:; BB(0x005a5d29);
    /* 005a5d29: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005a5d2c: jmp 0x5a6735 */ goto L_005a6735;
L_005a5d33:; BB(0x005a5d33);
    /* 005a5d33: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a5d36: jmp 0x5a6735 */ goto L_005a6735;
L_005a5d3b:; BB(0x005a5d3b);
    /* 005a5d3b: jmp 0x5a5eed */ goto L_005a5eed;
L_005a5d40:; BB(0x005a5d40);
    /* 005a5d40: movzx eax, byte ptr [ebp - 0x19] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffe7u));
    /* 005a5d44: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a5d46: je 0x5a5df0 */ if (fZ) goto L_005a5df0;
L_005a5d4c:; BB(0x005a5d4c);
    /* 005a5d4c: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005a5d4e: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5a5d53u); f_0062fbf0();
    /* 005a5d53: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a5d56: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 005a5d59: cmp dword ptr [ebp - 0x48], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a5d5d: jge 0x5a5d7d */ if ((fS==fO)) goto L_005a5d7d;
L_005a5d5f:; BB(0x005a5d5f);
    /* 005a5d5f: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 005a5d62: sub esi, dword ptr [ebp - 4] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005a5d65: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 005a5d67: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5a5d6cu); f_0062fbf0();
    /* 005a5d6c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a5d6f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a5d72: imul eax, dword ptr [ebp - 0x24] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xffffffdcu)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a5d76: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005a5d78: mov dword ptr [ebp - 0x4c], esi */ W32((u32)(r_ebp+0xffffffb4u), r_esi);
    /* 005a5d7b: jmp 0x5a5db6 */ goto L_005a5db6;
L_005a5d7d:; BB(0x005a5d7d);
    /* 005a5d7d: cmp dword ptr [ebp - 0x48], 7 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a5d81: jge 0x5a5daf */ if ((fS==fO)) goto L_005a5daf;
L_005a5d83:; BB(0x005a5d83);
    /* 005a5d83: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 005a5d86: sub esi, dword ptr [ebp - 4] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005a5d89: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005a5d8b: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5a5d90u); f_0062fbf0();
    /* 005a5d90: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a5d93: mov edi, eax */ r_edi = r_eax;
    /* 005a5d95: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005a5d97: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5a5d9cu); f_0062fbf0();
    /* 005a5d9c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a5d9f: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 005a5da1: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005a5da4: imul edi, dword ptr [ebp - 0x24] */ { i64 t = (i64)(i32)r_edi * (i64)(i32)R32((u32)(r_ebp+0xffffffdcu)); r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a5da8: add esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005a5daa: mov dword ptr [ebp - 0x4c], esi */ W32((u32)(r_ebp+0xffffffb4u), r_esi);
    /* 005a5dad: jmp 0x5a5db6 */ goto L_005a5db6;
L_005a5daf:; BB(0x005a5daf);
    /* 005a5daf: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_005a5db6:; BB(0x005a5db6);
    /* 005a5db6: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a5db9: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005a5dba: mov ecx, 5 */ r_ecx = 0x5u;
    /* 005a5dbf: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005a5dbf, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005a5dbf, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005a5dc1: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a5dc4: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005a5dc6: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 005a5dc9: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a5dcc: cmp ecx, dword ptr [ebp - 0x24] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a5dcf: jl 0x5a5deb */ if ((fS!=fO)) goto L_005a5deb;
L_005a5dd1:; BB(0x005a5dd1);
    /* 005a5dd1: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a5dd4: cmp edx, dword ptr [ebp - 0x34] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffccu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a5dd7: jle 0x5a5de3 */ if ((fZ||fS!=fO)) goto L_005a5de3;
L_005a5dd9:; BB(0x005a5dd9);
    /* 005a5dd9: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005a5ddc: jmp 0x5a6735 */ goto L_005a6735;
L_005a5de3:; BB(0x005a5de3);
    /* 005a5de3: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a5de6: jmp 0x5a6735 */ goto L_005a6735;
L_005a5deb:; BB(0x005a5deb);
    /* 005a5deb: jmp 0x5a5eed */ goto L_005a5eed;
L_005a5df0:; BB(0x005a5df0);
    /* 005a5df0: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005a5df2: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5a5df7u); f_0062fbf0();
    /* 005a5df7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a5dfa: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 005a5dfd: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a5e00: sub eax, dword ptr [ebp - 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005a5e03: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a5e06: jne 0x5a5e13 */ if (!fZ) goto L_005a5e13;
L_005a5e08:; BB(0x005a5e08);
    /* 005a5e08: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005a5e0b: sub ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005a5e0e: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 005a5e11: jmp 0x5a5e3d */ goto L_005a5e3d;
L_005a5e13:; BB(0x005a5e13);
    /* 005a5e13: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a5e16: sub edx, dword ptr [ebp - 0x20] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005a5e19: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a5e1c: jne 0x5a5e29 */ if (!fZ) goto L_005a5e29;
L_005a5e1e:; BB(0x005a5e1e);
    /* 005a5e1e: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 005a5e21: sub eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005a5e24: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 005a5e27: jmp 0x5a5e3d */ goto L_005a5e3d;
L_005a5e29:; BB(0x005a5e29);
    /* 005a5e29: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a5e2c: sub ecx, dword ptr [ebp - 0x20] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005a5e2f: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a5e32: jne 0x5a5e3d */ if (!fZ) goto L_005a5e3d;
L_005a5e34:; BB(0x005a5e34);
    /* 005a5e34: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005a5e37: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005a5e3a: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
L_005a5e3d:; BB(0x005a5e3d);
    /* 005a5e3d: cmp dword ptr [ebp - 0x48], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a5e41: jge 0x5a5e6c */ if ((fS==fO)) goto L_005a5e6c;
L_005a5e43:; BB(0x005a5e43);
    /* 005a5e43: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 005a5e46: sub esi, dword ptr [ebp - 4] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005a5e49: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 005a5e4b: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5a5e50u); f_0062fbf0();
    /* 005a5e50: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a5e53: mov edi, eax */ r_edi = r_eax;
    /* 005a5e55: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 005a5e57: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5a5e5cu); f_0062fbf0();
    /* 005a5e5c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a5e5f: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 005a5e61: imul edi, dword ptr [ebp - 0x24] */ { i64 t = (i64)(i32)r_edi * (i64)(i32)R32((u32)(r_ebp+0xffffffdcu)); r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a5e65: add esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005a5e67: mov dword ptr [ebp - 0x4c], esi */ W32((u32)(r_ebp+0xffffffb4u), r_esi);
    /* 005a5e6a: jmp 0x5a5eb8 */ goto L_005a5eb8;
L_005a5e6c:; BB(0x005a5e6c);
    /* 005a5e6c: cmp dword ptr [ebp - 0x48], 6 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a5e70: jge 0x5a5eb1 */ if ((fS==fO)) goto L_005a5eb1;
L_005a5e72:; BB(0x005a5e72);
    /* 005a5e72: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 005a5e75: sub esi, dword ptr [ebp - 4] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005a5e78: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005a5e7a: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5a5e7fu); f_0062fbf0();
    /* 005a5e7f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a5e82: mov ecx, eax */ r_ecx = r_eax;
    /* 005a5e84: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005a5e87: mov eax, esi */ r_eax = r_esi;
    /* 005a5e89: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005a5e8a: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005a5e8a, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005a5e8a, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005a5e8c: mov esi, eax */ r_esi = r_eax;
    /* 005a5e8e: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 005a5e90: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5a5e95u); f_0062fbf0();
    /* 005a5e95: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a5e98: mov edi, eax */ r_edi = r_eax;
    /* 005a5e9a: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 005a5e9c: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5a5ea1u); f_0062fbf0();
    /* 005a5ea1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a5ea4: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 005a5ea6: imul edi, dword ptr [ebp - 0x24] */ { i64 t = (i64)(i32)r_edi * (i64)(i32)R32((u32)(r_ebp+0xffffffdcu)); r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a5eaa: add esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005a5eac: mov dword ptr [ebp - 0x4c], esi */ W32((u32)(r_ebp+0xffffffb4u), r_esi);
    /* 005a5eaf: jmp 0x5a5eb8 */ goto L_005a5eb8;
L_005a5eb1:; BB(0x005a5eb1);
    /* 005a5eb1: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_005a5eb8:; BB(0x005a5eb8);
    /* 005a5eb8: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a5ebb: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005a5ebc: mov ecx, 5 */ r_ecx = 0x5u;
    /* 005a5ec1: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005a5ec1, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005a5ec1, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005a5ec3: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a5ec6: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005a5ec8: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 005a5ecb: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a5ece: cmp ecx, dword ptr [ebp - 0x24] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a5ed1: jl 0x5a5eed */ if ((fS!=fO)) goto L_005a5eed;
L_005a5ed3:; BB(0x005a5ed3);
    /* 005a5ed3: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a5ed6: cmp edx, dword ptr [ebp - 0x34] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffccu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a5ed9: jle 0x5a5ee5 */ if ((fZ||fS!=fO)) goto L_005a5ee5;
L_005a5edb:; BB(0x005a5edb);
    /* 005a5edb: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005a5ede: jmp 0x5a6735 */ goto L_005a6735;
L_005a5ee5:; BB(0x005a5ee5);
    /* 005a5ee5: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a5ee8: jmp 0x5a6735 */ goto L_005a6735;
L_005a5eed:; BB(0x005a5eed);
    /* 005a5eed: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a5ef0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a5ef1: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 005a5ef4: call 0x5a4960 */ r_esp -= 4; W32(r_esp, 0x5a5ef9u); f_005a4960();
    /* 005a5ef9: cmp eax, dword ptr [ebp - 0x24] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a5efc: jge 0x5a5f05 */ if ((fS==fO)) goto L_005a5f05;
L_005a5efe:; BB(0x005a5efe);
    /* 005a5efe: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a5f00: jmp 0x5a6735 */ goto L_005a6735;
L_005a5f05:; BB(0x005a5f05);
    /* 005a5f05: movzx ecx, byte ptr [ebp - 0x35] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffcbu));
    /* 005a5f09: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a5f0b: jne 0x5a5f26 */ if (!fZ) goto L_005a5f26;
L_005a5f0d:; BB(0x005a5f0d);
    /* 005a5f0d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a5f10: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005a5f11: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005a5f13: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005a5f15: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 005a5f18: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005a5f1b: cmp edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a5f1e: jle 0x5a5f26 */ if ((fZ||fS!=fO)) goto L_005a5f26;
L_005a5f20:; BB(0x005a5f20);
    /* 005a5f20: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005a5f23: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
L_005a5f26:; BB(0x005a5f26);
    /* 005a5f26: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a5f29: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a5f2a: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5a5f2fu); f_005dcb00();
    /* 005a5f2f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a5f32: mov edx, dword ptr [eax + 0x4a4] */ r_edx = R32((u32)(r_eax+0x4a4u));
    /* 005a5f38: mov dword ptr [ebp - 0x88], edx */ W32((u32)(r_ebp+0xffffff78u), r_edx);
    /* 005a5f3e: cmp dword ptr [ebp - 0x88], 7 */ {  u32 a = R32((u32)(r_ebp+0xffffff78u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005a5f45: ja 0x5a6729 */ if ((!fC&&!fZ)) goto L_005a6729;
L_005a5f4b:; BB(0x005a5f4b);
    /* 005a5f4b: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 005a5f51: jmp dword ptr [eax*4 + 0x5a6740] */ { u32 t = R32((u32)(r_eax*4+0x5a6740u)); switch (t) { case 0x5a5f58u: goto L_005a5f58; case 0x5a5f98u: goto L_005a5f98; case 0x5a6030u: goto L_005a6030; case 0x5a60cau: goto L_005a60ca; case 0x5a6164u: goto L_005a6164; case 0x5a62b7u: goto L_005a62b7; case 0x5a63c4u: goto L_005a63c4; case 0x5a65c1u: goto L_005a65c1; default: UNSUP(0x005a5f51, "jump table entry is not a known target"); } }
L_005a5f58:; BB(0x005a5f58);
    /* 005a5f58: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a5f5b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a5f5c: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 005a5f5f: call 0x5a4960 */ r_esp -= 4; W32(r_esp, 0x5a5f64u); f_005a4960();
    /* 005a5f64: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 005a5f67: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a5f6a: cmp edx, dword ptr [ebp - 0x24] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a5f6d: jge 0x5a5f79 */ if ((fS==fO)) goto L_005a5f79;
L_005a5f6f:; BB(0x005a5f6f);
    /* 005a5f6f: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005a5f72: jmp 0x5a6735 */ goto L_005a6735;
L_005a5f79:; BB(0x005a5f79);
    /* 005a5f79: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a5f7c: cmp eax, dword ptr [ebp - 0x34] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffccu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a5f7f: jle 0x5a5f8b */ if ((fZ||fS!=fO)) goto L_005a5f8b;
L_005a5f81:; BB(0x005a5f81);
    /* 005a5f81: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005a5f84: jmp 0x5a6735 */ goto L_005a6735;
L_005a5f8b:; BB(0x005a5f8b);
    /* 005a5f8b: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a5f8e: jmp 0x5a6735 */ goto L_005a6735;
L_005a5f98:; BB(0x005a5f98);
    /* 005a5f98: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a5f9b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a5f9c: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 005a5f9f: call 0x5a4960 */ r_esp -= 4; W32(r_esp, 0x5a5fa4u); f_005a4960();
    /* 005a5fa4: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005a5fa6: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 005a5fa9: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005a5fac: shl edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 005a5fae: cmp dword ptr [ebp - 0x4c], edx */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a5fb1: jne 0x5a5fc9 */ if (!fZ) goto L_005a5fc9;
L_005a5fb3:; BB(0x005a5fb3);
    /* 005a5fb3: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005a5fb5: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5a5fbau); f_0062fbf0();
    /* 005a5fba: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a5fbd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a5fbf: jne 0x5a5fc9 */ if (!fZ) goto L_005a5fc9;
L_005a5fc1:; BB(0x005a5fc1);
    /* 005a5fc1: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005a5fc4: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 005a5fc7: jmp 0x5a5fff */ goto L_005a5fff;
L_005a5fc9:; BB(0x005a5fc9);
    /* 005a5fc9: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a5fcc: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005a5fcd: mov ecx, 0xa */ r_ecx = 0xau;
    /* 005a5fd2: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005a5fd2, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005a5fd2, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005a5fd4: mov esi, eax */ r_esi = r_eax;
    /* 005a5fd6: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005a5fd8: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5a5fddu); f_0062fbf0();
    /* 005a5fdd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a5fe0: sub eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005a5fe3: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a5fe6: add esi, dword ptr [ebp - 0x4c] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xffffffb4u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005a5fe9: mov dword ptr [ebp - 0x4c], esi */ W32((u32)(r_ebp+0xffffffb4u), r_esi);
    /* 005a5fec: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a5fef: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005a5ff0: mov ecx, 5 */ r_ecx = 0x5u;
    /* 005a5ff5: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005a5ff5, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005a5ff5, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005a5ff7: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a5ffa: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005a5ffc: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
L_005a5fff:; BB(0x005a5fff);
    /* 005a5fff: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a6002: cmp ecx, dword ptr [ebp - 0x24] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a6005: jge 0x5a6011 */ if ((fS==fO)) goto L_005a6011;
L_005a6007:; BB(0x005a6007);
    /* 005a6007: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005a600a: jmp 0x5a6735 */ goto L_005a6735;
L_005a6011:; BB(0x005a6011);
    /* 005a6011: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a6014: cmp edx, dword ptr [ebp - 0x34] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffccu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a6017: jle 0x5a6023 */ if ((fZ||fS!=fO)) goto L_005a6023;
L_005a6019:; BB(0x005a6019);
    /* 005a6019: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005a601c: jmp 0x5a6735 */ goto L_005a6735;
L_005a6023:; BB(0x005a6023);
    /* 005a6023: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a6026: jmp 0x5a6735 */ goto L_005a6735;
L_005a6030:; BB(0x005a6030);
    /* 005a6030: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a6033: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a6034: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 005a6037: call 0x5a4960 */ r_esp -= 4; W32(r_esp, 0x5a603cu); f_005a4960();
    /* 005a603c: imul eax, eax, 5 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x5u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a603f: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 005a6042: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005a6045: imul ecx, ecx, 5 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x5u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a6048: cmp dword ptr [ebp - 0x4c], ecx */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a604b: jne 0x5a6063 */ if (!fZ) goto L_005a6063;
L_005a604d:; BB(0x005a604d);
    /* 005a604d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005a604f: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5a6054u); f_0062fbf0();
    /* 005a6054: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a6057: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a6059: jne 0x5a6063 */ if (!fZ) goto L_005a6063;
L_005a605b:; BB(0x005a605b);
    /* 005a605b: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005a605e: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 005a6061: jmp 0x5a6099 */ goto L_005a6099;
L_005a6063:; BB(0x005a6063);
    /* 005a6063: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a6066: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005a6067: mov ecx, 0xa */ r_ecx = 0xau;
    /* 005a606c: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005a606c, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005a606c, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005a606e: mov esi, eax */ r_esi = r_eax;
    /* 005a6070: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005a6072: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5a6077u); f_0062fbf0();
    /* 005a6077: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a607a: sub eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005a607d: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a6080: add esi, dword ptr [ebp - 0x4c] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xffffffb4u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005a6083: mov dword ptr [ebp - 0x4c], esi */ W32((u32)(r_ebp+0xffffffb4u), r_esi);
    /* 005a6086: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a6089: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005a608a: mov ecx, 5 */ r_ecx = 0x5u;
    /* 005a608f: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005a608f, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005a608f, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005a6091: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a6094: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005a6096: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
L_005a6099:; BB(0x005a6099);
    /* 005a6099: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a609c: cmp ecx, dword ptr [ebp - 0x24] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a609f: jge 0x5a60ab */ if ((fS==fO)) goto L_005a60ab;
L_005a60a1:; BB(0x005a60a1);
    /* 005a60a1: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005a60a4: jmp 0x5a6735 */ goto L_005a6735;
L_005a60ab:; BB(0x005a60ab);
    /* 005a60ab: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a60ae: cmp edx, dword ptr [ebp - 0x34] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffccu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a60b1: jle 0x5a60bd */ if ((fZ||fS!=fO)) goto L_005a60bd;
L_005a60b3:; BB(0x005a60b3);
    /* 005a60b3: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005a60b6: jmp 0x5a6735 */ goto L_005a6735;
L_005a60bd:; BB(0x005a60bd);
    /* 005a60bd: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a60c0: jmp 0x5a6735 */ goto L_005a6735;
L_005a60ca:; BB(0x005a60ca);
    /* 005a60ca: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a60cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a60ce: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 005a60d1: call 0x5a4960 */ r_esp -= 4; W32(r_esp, 0x5a60d6u); f_005a4960();
    /* 005a60d6: imul eax, eax, 0xa */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xau; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a60d9: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 005a60dc: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005a60df: imul ecx, ecx, 0xa */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xau; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a60e2: cmp dword ptr [ebp - 0x4c], ecx */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a60e5: jne 0x5a60fd */ if (!fZ) goto L_005a60fd;
L_005a60e7:; BB(0x005a60e7);
    /* 005a60e7: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005a60e9: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5a60eeu); f_0062fbf0();
    /* 005a60ee: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a60f1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a60f3: jne 0x5a60fd */ if (!fZ) goto L_005a60fd;
L_005a60f5:; BB(0x005a60f5);
    /* 005a60f5: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005a60f8: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 005a60fb: jmp 0x5a6133 */ goto L_005a6133;
L_005a60fd:; BB(0x005a60fd);
    /* 005a60fd: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a6100: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005a6101: mov ecx, 0xa */ r_ecx = 0xau;
    /* 005a6106: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005a6106, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005a6106, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005a6108: mov esi, eax */ r_esi = r_eax;
    /* 005a610a: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005a610c: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5a6111u); f_0062fbf0();
    /* 005a6111: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a6114: sub eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005a6117: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a611a: add esi, dword ptr [ebp - 0x4c] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xffffffb4u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005a611d: mov dword ptr [ebp - 0x4c], esi */ W32((u32)(r_ebp+0xffffffb4u), r_esi);
    /* 005a6120: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a6123: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005a6124: mov ecx, 5 */ r_ecx = 0x5u;
    /* 005a6129: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005a6129, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005a6129, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005a612b: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a612e: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005a6130: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
L_005a6133:; BB(0x005a6133);
    /* 005a6133: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a6136: cmp ecx, dword ptr [ebp - 0x24] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a6139: jge 0x5a6145 */ if ((fS==fO)) goto L_005a6145;
L_005a613b:; BB(0x005a613b);
    /* 005a613b: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005a613e: jmp 0x5a6735 */ goto L_005a6735;
L_005a6145:; BB(0x005a6145);
    /* 005a6145: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a6148: cmp edx, dword ptr [ebp - 0x34] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffccu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a614b: jle 0x5a6157 */ if ((fZ||fS!=fO)) goto L_005a6157;
L_005a614d:; BB(0x005a614d);
    /* 005a614d: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005a6150: jmp 0x5a6735 */ goto L_005a6735;
L_005a6157:; BB(0x005a6157);
    /* 005a6157: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a615a: jmp 0x5a6735 */ goto L_005a6735;
L_005a6164:; BB(0x005a6164);
    /* 005a6164: cmp dword ptr [ebp - 0x14], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a6168: jge 0x5a6208 */ if ((fS==fO)) goto L_005a6208;
L_005a616e:; BB(0x005a616e);
    /* 005a616e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a6171: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a6172: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 005a6175: call 0x5a4960 */ r_esp -= 4; W32(r_esp, 0x5a617au); f_005a4960();
    /* 005a617a: imul eax, eax, 5 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x5u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a617d: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 005a6180: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005a6183: imul ecx, ecx, 5 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x5u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a6186: cmp dword ptr [ebp - 0x4c], ecx */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a6189: jne 0x5a61a1 */ if (!fZ) goto L_005a61a1;
L_005a618b:; BB(0x005a618b);
    /* 005a618b: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005a618d: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5a6192u); f_0062fbf0();
    /* 005a6192: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a6195: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a6197: jne 0x5a61a1 */ if (!fZ) goto L_005a61a1;
L_005a6199:; BB(0x005a6199);
    /* 005a6199: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005a619c: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 005a619f: jmp 0x5a61d7 */ goto L_005a61d7;
L_005a61a1:; BB(0x005a61a1);
    /* 005a61a1: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a61a4: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005a61a5: mov ecx, 0xa */ r_ecx = 0xau;
    /* 005a61aa: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005a61aa, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005a61aa, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005a61ac: mov esi, eax */ r_esi = r_eax;
    /* 005a61ae: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005a61b0: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5a61b5u); f_0062fbf0();
    /* 005a61b5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a61b8: sub eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005a61bb: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a61be: add esi, dword ptr [ebp - 0x4c] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xffffffb4u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005a61c1: mov dword ptr [ebp - 0x4c], esi */ W32((u32)(r_ebp+0xffffffb4u), r_esi);
    /* 005a61c4: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a61c7: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005a61c8: mov ecx, 5 */ r_ecx = 0x5u;
    /* 005a61cd: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005a61cd, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005a61cd, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005a61cf: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a61d2: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005a61d4: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
L_005a61d7:; BB(0x005a61d7);
    /* 005a61d7: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a61da: cmp ecx, dword ptr [ebp - 0x24] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a61dd: jge 0x5a61e9 */ if ((fS==fO)) goto L_005a61e9;
L_005a61df:; BB(0x005a61df);
    /* 005a61df: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005a61e2: jmp 0x5a6735 */ goto L_005a6735;
L_005a61e9:; BB(0x005a61e9);
    /* 005a61e9: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a61ec: cmp edx, dword ptr [ebp - 0x34] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffccu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a61ef: jle 0x5a61fb */ if ((fZ||fS!=fO)) goto L_005a61fb;
L_005a61f1:; BB(0x005a61f1);
    /* 005a61f1: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005a61f4: jmp 0x5a6735 */ goto L_005a6735;
L_005a61fb:; BB(0x005a61fb);
    /* 005a61fb: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a61fe: jmp 0x5a6735 */ goto L_005a6735;
L_005a6208:; BB(0x005a6208);
    /* 005a6208: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005a620a: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5a620fu); f_0062fbf0();
    /* 005a620f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a6212: mov ecx, eax */ r_ecx = r_eax;
    /* 005a6214: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005a6217: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005a621a: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005a621b: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005a621b, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005a621b, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005a621d: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 005a6220: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005a6223: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a6224: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 005a6227: call 0x5a4960 */ r_esp -= 4; W32(r_esp, 0x5a622cu); f_005a4960();
    /* 005a622c: imul eax, eax, 5 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x5u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a622f: cmp dword ptr [ebp - 0x4c], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a6232: jge 0x5a62aa */ if ((fS==fO)) goto L_005a62aa;
L_005a6234:; BB(0x005a6234);
    /* 005a6234: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a6237: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a6238: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 005a623b: call 0x5a4960 */ r_esp -= 4; W32(r_esp, 0x5a6240u); f_005a4960();
    /* 005a6240: imul eax, eax, 5 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x5u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a6243: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 005a6246: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a6249: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005a624a: mov ecx, 0xa */ r_ecx = 0xau;
    /* 005a624f: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005a624f, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005a624f, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005a6251: mov esi, eax */ r_esi = r_eax;
    /* 005a6253: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005a6255: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5a625au); f_0062fbf0();
    /* 005a625a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a625d: sub eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005a6260: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a6263: add esi, dword ptr [ebp - 0x4c] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xffffffb4u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005a6266: mov dword ptr [ebp - 0x4c], esi */ W32((u32)(r_ebp+0xffffffb4u), r_esi);
    /* 005a6269: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a626c: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005a626d: mov ecx, 5 */ r_ecx = 0x5u;
    /* 005a6272: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005a6272, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005a6272, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005a6274: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a6277: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005a6279: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 005a627c: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a627f: cmp ecx, dword ptr [ebp - 0x24] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a6282: jge 0x5a628e */ if ((fS==fO)) goto L_005a628e;
L_005a6284:; BB(0x005a6284);
    /* 005a6284: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005a6287: jmp 0x5a6735 */ goto L_005a6735;
L_005a628e:; BB(0x005a628e);
    /* 005a628e: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a6291: cmp edx, dword ptr [ebp - 0x34] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffccu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a6294: jle 0x5a62a0 */ if ((fZ||fS!=fO)) goto L_005a62a0;
L_005a6296:; BB(0x005a6296);
    /* 005a6296: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005a6299: jmp 0x5a6735 */ goto L_005a6735;
L_005a62a0:; BB(0x005a62a0);
    /* 005a62a0: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a62a3: jmp 0x5a6735 */ goto L_005a6735;
L_005a62aa:; BB(0x005a62aa);
    /* 005a62aa: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a62ad: jmp 0x5a6735 */ goto L_005a6735;
L_005a62b7:; BB(0x005a62b7);
    /* 005a62b7: cmp dword ptr [ebp - 0x14], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a62bb: jg 0x5a62cd */ if ((!fZ&&fS==fO)) goto L_005a62cd;
L_005a62bd:; BB(0x005a62bd);
    /* 005a62bd: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 005a62c0: cmp dword ptr [eax + 0x4ac], 1 */ {  u32 a = R32((u32)(r_eax+0x4acu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a62c7: jle 0x5a63ae */ if ((fZ||fS!=fO)) goto L_005a63ae;
L_005a62cd:; BB(0x005a62cd);
    /* 005a62cd: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005a62d0: movzx edx, byte ptr [ecx + 0x4b0] */ r_edx = (u32)R8((u32)(r_ecx+0x4b0u));
    /* 005a62d7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a62d9: je 0x5a62fe */ if (fZ) goto L_005a62fe;
L_005a62db:; BB(0x005a62db);
    /* 005a62db: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 005a62de: mov dword ptr [eax + 0x4ac], 1 */ W32((u32)(r_eax+0x4acu), 0x1u);
    /* 005a62e8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a62eb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a62ec: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 005a62ef: call 0x5a4960 */ r_esp -= 4; W32(r_esp, 0x5a62f4u); f_005a4960();
    /* 005a62f4: jmp 0x5a6735 */ goto L_005a6735;
L_005a62fe:; BB(0x005a62fe);
    /* 005a62fe: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005a6301: cmp dword ptr [edx + 0x4ac], 4 */ {  u32 a = R32((u32)(r_edx+0x4acu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a6308: jl 0x5a632e */ if ((fS!=fO)) goto L_005a632e;
L_005a630a:; BB(0x005a630a);
    /* 005a630a: cmp dword ptr [ebp - 0x14], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a630e: jge 0x5a632e */ if ((fS==fO)) goto L_005a632e;
L_005a6310:; BB(0x005a6310);
    /* 005a6310: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 005a6313: mov dword ptr [eax + 0x4ac], 1 */ W32((u32)(r_eax+0x4acu), 0x1u);
    /* 005a631d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a6320: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a6321: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 005a6324: call 0x5a4960 */ r_esp -= 4; W32(r_esp, 0x5a6329u); f_005a4960();
    /* 005a6329: jmp 0x5a6735 */ goto L_005a6735;
L_005a632e:; BB(0x005a632e);
    /* 005a632e: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005a6331: mov eax, dword ptr [edx + 0x4ac] */ r_eax = R32((u32)(r_edx+0x4acu));
    /* 005a6337: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a633a: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005a633d: mov dword ptr [ecx + 0x4ac], eax */ W32((u32)(r_ecx+0x4acu), r_eax);
    /* 005a6343: cmp dword ptr [ebp - 0x40], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a6347: jne 0x5a635c */ if (!fZ) goto L_005a635c;
L_005a6349:; BB(0x005a6349);
    /* 005a6349: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005a634c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a634d: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 005a6350: call 0x5a4960 */ r_esp -= 4; W32(r_esp, 0x5a6355u); f_005a4960();
    /* 005a6355: jmp 0x5a6735 */ goto L_005a6735;
L_005a635c:; BB(0x005a635c);
    /* 005a635c: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 005a635f: cmp eax, dword ptr [ebp - 0x24] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a6362: jge 0x5a636e */ if ((fS==fO)) goto L_005a636e;
L_005a6364:; BB(0x005a6364);
    /* 005a6364: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005a6367: jmp 0x5a6735 */ goto L_005a6735;
L_005a636e:; BB(0x005a636e);
    /* 005a636e: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005a6371: cmp ecx, dword ptr [ebp - 0x34] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffccu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a6374: jle 0x5a6380 */ if ((fZ||fS!=fO)) goto L_005a6380;
L_005a6376:; BB(0x005a6376);
    /* 005a6376: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005a6379: jmp 0x5a6735 */ goto L_005a6735;
L_005a6380:; BB(0x005a6380);
    /* 005a6380: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005a6383: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005a6384: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005a6386: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005a6388: cmp dword ptr [ebp - 0x40], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a638b: jle 0x5a63a4 */ if ((fZ||fS!=fO)) goto L_005a63a4;
L_005a638d:; BB(0x005a638d);
    /* 005a638d: movzx edx, byte ptr [ebp - 0x19] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffe7u));
    /* 005a6391: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a6393: jne 0x5a63a4 */ if (!fZ) goto L_005a63a4;
L_005a6395:; BB(0x005a6395);
    /* 005a6395: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005a6398: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005a6399: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005a639b: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005a639d: jmp 0x5a6735 */ goto L_005a6735;
L_005a63a4:; BB(0x005a63a4);
    /* 005a63a4: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 005a63a7: jmp 0x5a6735 */ goto L_005a6735;
L_005a63ae:; BB(0x005a63ae);
    /* 005a63ae: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a63b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a63b2: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 005a63b5: call 0x5a4960 */ r_esp -= 4; W32(r_esp, 0x5a63bau); f_005a4960();
    /* 005a63ba: jmp 0x5a6735 */ goto L_005a6735;
L_005a63c4:; BB(0x005a63c4);
    /* 005a63c4: cmp dword ptr [ebp - 0x14], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a63c8: jge 0x5a6468 */ if ((fS==fO)) goto L_005a6468;
L_005a63ce:; BB(0x005a63ce);
    /* 005a63ce: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a63d1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a63d2: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 005a63d5: call 0x5a4960 */ r_esp -= 4; W32(r_esp, 0x5a63dau); f_005a4960();
    /* 005a63da: imul eax, eax, 5 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x5u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a63dd: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 005a63e0: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005a63e3: imul edx, edx, 5 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x5u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a63e6: cmp dword ptr [ebp - 0x4c], edx */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a63e9: jne 0x5a6401 */ if (!fZ) goto L_005a6401;
L_005a63eb:; BB(0x005a63eb);
    /* 005a63eb: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005a63ed: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5a63f2u); f_0062fbf0();
    /* 005a63f2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a63f5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a63f7: jne 0x5a6401 */ if (!fZ) goto L_005a6401;
L_005a63f9:; BB(0x005a63f9);
    /* 005a63f9: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005a63fc: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 005a63ff: jmp 0x5a6437 */ goto L_005a6437;
L_005a6401:; BB(0x005a6401);
    /* 005a6401: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a6404: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005a6405: mov ecx, 0xa */ r_ecx = 0xau;
    /* 005a640a: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005a640a, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005a640a, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005a640c: mov esi, eax */ r_esi = r_eax;
    /* 005a640e: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005a6410: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5a6415u); f_0062fbf0();
    /* 005a6415: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a6418: sub eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005a641b: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a641e: add esi, dword ptr [ebp - 0x4c] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xffffffb4u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005a6421: mov dword ptr [ebp - 0x4c], esi */ W32((u32)(r_ebp+0xffffffb4u), r_esi);
    /* 005a6424: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a6427: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005a6428: mov ecx, 5 */ r_ecx = 0x5u;
    /* 005a642d: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005a642d, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005a642d, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005a642f: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a6432: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005a6434: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
L_005a6437:; BB(0x005a6437);
    /* 005a6437: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a643a: cmp ecx, dword ptr [ebp - 0x24] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a643d: jge 0x5a6449 */ if ((fS==fO)) goto L_005a6449;
L_005a643f:; BB(0x005a643f);
    /* 005a643f: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005a6442: jmp 0x5a6735 */ goto L_005a6735;
L_005a6449:; BB(0x005a6449);
    /* 005a6449: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a644c: cmp edx, dword ptr [ebp - 0x34] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffccu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a644f: jle 0x5a645b */ if ((fZ||fS!=fO)) goto L_005a645b;
L_005a6451:; BB(0x005a6451);
    /* 005a6451: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005a6454: jmp 0x5a6735 */ goto L_005a6735;
L_005a645b:; BB(0x005a645b);
    /* 005a645b: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a645e: jmp 0x5a6735 */ goto L_005a6735;
L_005a6468:; BB(0x005a6468);
    /* 005a6468: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 005a646b: movzx ecx, byte ptr [eax + 0x4b0] */ r_ecx = (u32)R8((u32)(r_eax+0x4b0u));
    /* 005a6472: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a6474: jne 0x5a6548 */ if (!fZ) goto L_005a6548;
L_005a647a:; BB(0x005a647a);
    /* 005a647a: cmp dword ptr [ebp - 0x40], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a647e: jne 0x5a64f6 */ if (!fZ) goto L_005a64f6;
L_005a6480:; BB(0x005a6480);
    /* 005a6480: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005a6483: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a6484: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 005a6487: call 0x5a4960 */ r_esp -= 4; W32(r_esp, 0x5a648cu); f_005a4960();
    /* 005a648c: imul eax, eax, 5 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x5u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a648f: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 005a6492: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a6495: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005a6496: mov ecx, 0xa */ r_ecx = 0xau;
    /* 005a649b: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005a649b, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005a649b, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005a649d: mov esi, eax */ r_esi = r_eax;
    /* 005a649f: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005a64a1: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5a64a6u); f_0062fbf0();
    /* 005a64a6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a64a9: sub eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005a64ac: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a64af: add esi, dword ptr [ebp - 0x4c] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xffffffb4u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005a64b2: mov dword ptr [ebp - 0x4c], esi */ W32((u32)(r_ebp+0xffffffb4u), r_esi);
    /* 005a64b5: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a64b8: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005a64b9: mov ecx, 5 */ r_ecx = 0x5u;
    /* 005a64be: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005a64be, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005a64be, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005a64c0: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a64c3: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005a64c5: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 005a64c8: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a64cb: cmp ecx, dword ptr [ebp - 0x24] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a64ce: jge 0x5a64da */ if ((fS==fO)) goto L_005a64da;
L_005a64d0:; BB(0x005a64d0);
    /* 005a64d0: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005a64d3: jmp 0x5a6735 */ goto L_005a6735;
L_005a64da:; BB(0x005a64da);
    /* 005a64da: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a64dd: cmp edx, dword ptr [ebp - 0x34] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffccu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a64e0: jle 0x5a64ec */ if ((fZ||fS!=fO)) goto L_005a64ec;
L_005a64e2:; BB(0x005a64e2);
    /* 005a64e2: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005a64e5: jmp 0x5a6735 */ goto L_005a6735;
L_005a64ec:; BB(0x005a64ec);
    /* 005a64ec: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a64ef: jmp 0x5a6735 */ goto L_005a6735;
L_005a64f6:; BB(0x005a64f6);
    /* 005a64f6: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 005a64f9: cmp eax, dword ptr [ebp - 0x24] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a64fc: jge 0x5a6508 */ if ((fS==fO)) goto L_005a6508;
L_005a64fe:; BB(0x005a64fe);
    /* 005a64fe: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005a6501: jmp 0x5a6735 */ goto L_005a6735;
L_005a6508:; BB(0x005a6508);
    /* 005a6508: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005a650b: cmp ecx, dword ptr [ebp - 0x34] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffccu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a650e: jle 0x5a651a */ if ((fZ||fS!=fO)) goto L_005a651a;
L_005a6510:; BB(0x005a6510);
    /* 005a6510: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005a6513: jmp 0x5a6735 */ goto L_005a6735;
L_005a651a:; BB(0x005a651a);
    /* 005a651a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005a651d: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005a651e: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005a6520: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005a6522: cmp dword ptr [ebp - 0x40], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a6525: jle 0x5a653e */ if ((fZ||fS!=fO)) goto L_005a653e;
L_005a6527:; BB(0x005a6527);
    /* 005a6527: movzx edx, byte ptr [ebp - 0x19] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffe7u));
    /* 005a652b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a652d: jne 0x5a653e */ if (!fZ) goto L_005a653e;
L_005a652f:; BB(0x005a652f);
    /* 005a652f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005a6532: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005a6533: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005a6535: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005a6537: jmp 0x5a6735 */ goto L_005a6735;
L_005a653e:; BB(0x005a653e);
    /* 005a653e: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 005a6541: jmp 0x5a6735 */ goto L_005a6735;
L_005a6548:; BB(0x005a6548);
    /* 005a6548: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a654b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a654c: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 005a654f: call 0x5a4960 */ r_esp -= 4; W32(r_esp, 0x5a6554u); f_005a4960();
    /* 005a6554: imul eax, eax, 5 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x5u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a6557: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 005a655a: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a655d: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005a655e: mov ecx, 0xa */ r_ecx = 0xau;
    /* 005a6563: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005a6563, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005a6563, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005a6565: mov esi, eax */ r_esi = r_eax;
    /* 005a6567: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005a6569: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5a656eu); f_0062fbf0();
    /* 005a656e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a6571: sub eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005a6574: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a6577: add esi, dword ptr [ebp - 0x4c] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xffffffb4u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005a657a: mov dword ptr [ebp - 0x4c], esi */ W32((u32)(r_ebp+0xffffffb4u), r_esi);
    /* 005a657d: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a6580: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005a6581: mov ecx, 5 */ r_ecx = 0x5u;
    /* 005a6586: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005a6586, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005a6586, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005a6588: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a658b: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005a658d: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 005a6590: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a6593: cmp ecx, dword ptr [ebp - 0x24] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a6596: jge 0x5a65a2 */ if ((fS==fO)) goto L_005a65a2;
L_005a6598:; BB(0x005a6598);
    /* 005a6598: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005a659b: jmp 0x5a6735 */ goto L_005a6735;
L_005a65a2:; BB(0x005a65a2);
    /* 005a65a2: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a65a5: cmp edx, dword ptr [ebp - 0x34] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffccu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a65a8: jle 0x5a65b4 */ if ((fZ||fS!=fO)) goto L_005a65b4;
L_005a65aa:; BB(0x005a65aa);
    /* 005a65aa: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005a65ad: jmp 0x5a6735 */ goto L_005a6735;
L_005a65b4:; BB(0x005a65b4);
    /* 005a65b4: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a65b7: jmp 0x5a6735 */ goto L_005a6735;
L_005a65c1:; BB(0x005a65c1);
    /* 005a65c1: cmp dword ptr [ebp - 0x14], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a65c5: jge 0x5a6663 */ if ((fS==fO)) goto L_005a6663;
L_005a65cb:; BB(0x005a65cb);
    /* 005a65cb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a65ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a65cf: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 005a65d2: call 0x5a4960 */ r_esp -= 4; W32(r_esp, 0x5a65d7u); f_005a4960();
    /* 005a65d7: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005a65d9: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 005a65dc: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005a65df: shl ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 005a65e1: cmp dword ptr [ebp - 0x4c], ecx */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a65e4: jne 0x5a65fc */ if (!fZ) goto L_005a65fc;
L_005a65e6:; BB(0x005a65e6);
    /* 005a65e6: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005a65e8: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5a65edu); f_0062fbf0();
    /* 005a65ed: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a65f0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a65f2: jne 0x5a65fc */ if (!fZ) goto L_005a65fc;
L_005a65f4:; BB(0x005a65f4);
    /* 005a65f4: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005a65f7: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 005a65fa: jmp 0x5a6632 */ goto L_005a6632;
L_005a65fc:; BB(0x005a65fc);
    /* 005a65fc: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a65ff: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005a6600: mov ecx, 0xa */ r_ecx = 0xau;
    /* 005a6605: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005a6605, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005a6605, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005a6607: mov esi, eax */ r_esi = r_eax;
    /* 005a6609: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005a660b: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5a6610u); f_0062fbf0();
    /* 005a6610: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a6613: sub eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005a6616: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a6619: add esi, dword ptr [ebp - 0x4c] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xffffffb4u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005a661c: mov dword ptr [ebp - 0x4c], esi */ W32((u32)(r_ebp+0xffffffb4u), r_esi);
    /* 005a661f: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a6622: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005a6623: mov ecx, 5 */ r_ecx = 0x5u;
    /* 005a6628: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005a6628, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005a6628, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005a662a: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a662d: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005a662f: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
L_005a6632:; BB(0x005a6632);
    /* 005a6632: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a6635: cmp ecx, dword ptr [ebp - 0x24] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a6638: jge 0x5a6644 */ if ((fS==fO)) goto L_005a6644;
L_005a663a:; BB(0x005a663a);
    /* 005a663a: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005a663d: jmp 0x5a6735 */ goto L_005a6735;
L_005a6644:; BB(0x005a6644);
    /* 005a6644: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a6647: cmp edx, dword ptr [ebp - 0x34] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffccu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a664a: jle 0x5a6656 */ if ((fZ||fS!=fO)) goto L_005a6656;
L_005a664c:; BB(0x005a664c);
    /* 005a664c: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005a664f: jmp 0x5a6735 */ goto L_005a6735;
L_005a6656:; BB(0x005a6656);
    /* 005a6656: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a6659: jmp 0x5a6735 */ goto L_005a6735;
L_005a6663:; BB(0x005a6663);
    /* 005a6663: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 005a6666: movzx ecx, byte ptr [eax + 0x4b0] */ r_ecx = (u32)R8((u32)(r_eax+0x4b0u));
    /* 005a666d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a666f: je 0x5a66bf */ if (fZ) goto L_005a66bf;
L_005a6671:; BB(0x005a6671);
    /* 005a6671: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005a6674: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a6675: lea eax, [ebp - 0x64] */ r_eax = (u32)(r_ebp+0xffffff9cu);
    /* 005a6678: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a6679: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005a667f: call 0x5b5130 */ r_esp -= 4; W32(r_esp, 0x5a6684u); f_005b5130();
    /* 005a6684: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005a6686: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005a6689: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 005a668c: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 005a668f: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005a6692: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005a6694: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 005a6697: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a669a: cmp ecx, dword ptr [ebp - 0x24] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a669d: jge 0x5a66a9 */ if ((fS==fO)) goto L_005a66a9;
L_005a669f:; BB(0x005a669f);
    /* 005a669f: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005a66a2: jmp 0x5a6735 */ goto L_005a6735;
L_005a66a9:; BB(0x005a66a9);
    /* 005a66a9: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a66ac: cmp edx, dword ptr [ebp - 0x34] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffccu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a66af: jle 0x5a66b8 */ if ((fZ||fS!=fO)) goto L_005a66b8;
L_005a66b1:; BB(0x005a66b1);
    /* 005a66b1: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005a66b4: jmp 0x5a6735 */ goto L_005a6735;
L_005a66b8:; BB(0x005a66b8);
    /* 005a66b8: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a66bb: jmp 0x5a6735 */ goto L_005a6735;
L_005a66bf:; BB(0x005a66bf);
    /* 005a66bf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a66c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a66c3: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 005a66c6: call 0x5a4960 */ r_esp -= 4; W32(r_esp, 0x5a66cbu); f_005a4960();
    /* 005a66cb: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005a66cd: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 005a66d0: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a66d3: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005a66d4: mov ecx, 0xa */ r_ecx = 0xau;
    /* 005a66d9: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005a66d9, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005a66d9, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005a66db: mov esi, eax */ r_esi = r_eax;
    /* 005a66dd: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005a66df: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5a66e4u); f_0062fbf0();
    /* 005a66e4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a66e7: sub eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005a66ea: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a66ed: add esi, dword ptr [ebp - 0x4c] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xffffffb4u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005a66f0: mov dword ptr [ebp - 0x4c], esi */ W32((u32)(r_ebp+0xffffffb4u), r_esi);
    /* 005a66f3: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a66f6: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005a66f7: mov ecx, 5 */ r_ecx = 0x5u;
    /* 005a66fc: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005a66fc, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005a66fc, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005a66fe: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a6701: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005a6703: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 005a6706: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a6709: cmp ecx, dword ptr [ebp - 0x24] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a670c: jge 0x5a6715 */ if ((fS==fO)) goto L_005a6715;
L_005a670e:; BB(0x005a670e);
    /* 005a670e: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005a6711: jmp 0x5a6735 */ goto L_005a6735;
L_005a6715:; BB(0x005a6715);
    /* 005a6715: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a6718: cmp edx, dword ptr [ebp - 0x34] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffccu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a671b: jle 0x5a6724 */ if ((fZ||fS!=fO)) goto L_005a6724;
L_005a671d:; BB(0x005a671d);
    /* 005a671d: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005a6720: jmp 0x5a6735 */ goto L_005a6735;
L_005a6724:; BB(0x005a6724);
    /* 005a6724: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a6727: jmp 0x5a6735 */ goto L_005a6735;
L_005a6729:; BB(0x005a6729);
    /* 005a6729: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a672c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a672d: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 005a6730: call 0x5a4960 */ r_esp -= 4; W32(r_esp, 0x5a6735u); f_005a4960();
L_005a6735:; BB(0x005a6735);
    /* 005a6735: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a6736: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005a6737: mov esp, ebp */ r_esp = r_ebp;
    /* 005a6739: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a673a: ret 4 */ FN_RET(0x005a5840); r_esp += 8; return;
}

