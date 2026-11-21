#include "protos.h"

void f_0040a0b0(void) /* sub_40A0B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040a0b0);
    /* 0040a0b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040a0b1: mov ebp, esp */ r_ebp = r_esp;
    /* 0040a0b3: sub esp, 0x88 */ {  u32 a = r_esp; u32 b = 0x88u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040a0b9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0040a0ba: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0040a0bb: mov dword ptr [ebp - 0x68], ecx */ W32((u32)(r_ebp+0xffffff98u), r_ecx);
    /* 0040a0be: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 0040a0c5: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0040a0cc: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0040a0d3: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 0040a0da: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 0040a0e1: mov byte ptr [ebp - 0x19], 0 */ W8((u32)(r_ebp+0xffffffe7u), 0x0u);
    /* 0040a0e5: mov byte ptr [ebp - 0x2d], 0 */ W8((u32)(r_ebp+0xffffffd3u), 0x0u);
    /* 0040a0e9: mov ecx, dword ptr [0x790320] */ r_ecx = R32((u32)(0x790320u));
    /* 0040a0ef: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x40a0f4u); f_005da7b0();
    /* 0040a0f4: mov byte ptr [ebp - 0x35], al */ W8((u32)(r_ebp+0xffffffcbu), (u8)r_eax);
    /* 0040a0f7: mov eax, dword ptr [0x790320] */ r_eax = R32((u32)(0x790320u));
    /* 0040a0fc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040a0fe: mov ecx, dword ptr [0x790320] */ r_ecx = R32((u32)(0x790320u));
    /* 0040a104: mov eax, dword ptr [edx + 0x2b0] */ r_eax = R32((u32)(r_edx+0x2b0u));
    /* 0040a10a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x40a10cu); call_ind(t); }
    /* 0040a10c: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0040a10f: mov ecx, dword ptr [0x790320] */ r_ecx = R32((u32)(0x790320u));
    /* 0040a115: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0040a117: mov ecx, dword ptr [0x790320] */ r_ecx = R32((u32)(0x790320u));
    /* 0040a11d: mov eax, dword ptr [edx + 0x2b4] */ r_eax = R32((u32)(r_edx+0x2b4u));
    /* 0040a123: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x40a125u); call_ind(t); }
    /* 0040a125: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0040a128: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0040a12b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040a12c: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x40a131u); f_005dcb00();
    /* 0040a131: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040a134: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0040a137: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0040a13a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040a13b: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x40a140u); f_005dcb00();
    /* 0040a140: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040a143: mov ecx, eax */ r_ecx = r_eax;
    /* 0040a145: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x40a14au); f_005d5a50();
    /* 0040a14a: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0040a14d: mov eax, dword ptr [0x790324] */ r_eax = R32((u32)(0x790324u));
    /* 0040a152: mov ecx, dword ptr [eax + 0x4e0] */ r_ecx = R32((u32)(r_eax+0x4e0u));
    /* 0040a158: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0040a15b: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 0040a162: movzx edx, byte ptr [ebp - 0x35] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffcbu));
    /* 0040a166: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040a168: je 0x40a769 */ if (fZ) goto L_0040a769;
L_0040a16e:; BB(0x0040a16e);
    /* 0040a16e: lea eax, [ebp - 0x54] */ r_eax = (u32)(r_ebp+0xffffffacu);
    /* 0040a171: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040a172: mov ecx, dword ptr [0x790320] */ r_ecx = R32((u32)(0x790320u));
    /* 0040a178: call 0x5daa20 */ r_esp -= 4; W32(r_esp, 0x40a17du); f_005daa20();
    /* 0040a17d: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0040a17f: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0040a182: lea edx, [ebp - 0x5c] */ r_edx = (u32)(r_ebp+0xffffffa4u);
    /* 0040a185: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040a186: mov ecx, dword ptr [0x790320] */ r_ecx = R32((u32)(0x790320u));
    /* 0040a18c: call 0x5daae0 */ r_esp -= 4; W32(r_esp, 0x40a191u); f_005daae0();
    /* 0040a191: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0040a193: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0040a196: mov ecx, dword ptr [0x790320] */ r_ecx = R32((u32)(0x790320u));
    /* 0040a19c: call 0x5da8a0 */ r_esp -= 4; W32(r_esp, 0x40a1a1u); f_005da8a0();
    /* 0040a1a1: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0040a1a4: mov ecx, dword ptr [0x790320] */ r_ecx = R32((u32)(0x790320u));
    /* 0040a1aa: call 0x5da8c0 */ r_esp -= 4; W32(r_esp, 0x40a1afu); f_005da8c0();
    /* 0040a1af: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0040a1b2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040a1b5: cmp ecx, dword ptr [ebp - 0x24] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040a1b8: jge 0x40a1c1 */ if ((fS==fO)) goto L_0040a1c1;
L_0040a1ba:; BB(0x0040a1ba);
    /* 0040a1ba: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040a1bc: jmp 0x40afb7 */ goto L_0040afb7;
L_0040a1c1:; BB(0x0040a1c1);
    /* 0040a1c1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040a1c4: cmp edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040a1c7: jne 0x40a1d1 */ if (!fZ) goto L_0040a1d1;
L_0040a1c9:; BB(0x0040a1c9);
    /* 0040a1c9: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040a1cc: jmp 0x40afb7 */ goto L_0040afb7;
L_0040a1d1:; BB(0x0040a1d1);
    /* 0040a1d1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040a1d4: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0040a1d5: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0040a1d7: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0040a1d9: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0040a1dc: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040a1df: cmp eax, dword ptr [ebp - 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040a1e2: jle 0x40a262 */ if ((fZ||fS!=fO)) goto L_0040a262;
L_0040a1e4:; BB(0x0040a1e4);
    /* 0040a1e4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040a1e7: sub ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0040a1ea: mov dword ptr [ebp - 0x6c], ecx */ W32((u32)(r_ebp+0xffffff94u), r_ecx);
    /* 0040a1ed: fild dword ptr [ebp - 0x6c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff94u)));
    /* 0040a1f0: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040a1f3: sub edx, dword ptr [ebp - 0x20] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0040a1f6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040a1f7: fstp qword ptr [ebp - 0x74] */ W_F64((u32)(r_ebp+0xffffff8cu), ST(0)); FPOP();
    /* 0040a1fa: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x40a1ffu); f_0062fbf0();
    /* 0040a1ff: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040a202: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 0040a205: fild dword ptr [ebp - 0x78] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff88u)));
    /* 0040a208: fdiv qword ptr [0x6b3728] */ ST(0) = ST(0) / R_F64((u32)(0x6b3728u));
    /* 0040a20e: fadd qword ptr [0x6b3748] */ ST(0) = ST(0) + R_F64((u32)(0x6b3748u));
    /* 0040a214: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040a217: sub eax, dword ptr [ebp - 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0040a21a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040a21b: fstp qword ptr [ebp - 0x80] */ W_F64((u32)(r_ebp+0xffffff80u), ST(0)); FPOP();
    /* 0040a21e: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x40a223u); f_0062fbf0();
    /* 0040a223: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040a226: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 0040a22c: fild dword ptr [ebp - 0x84] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff7cu)));
    /* 0040a232: fdiv qword ptr [0x6b3728] */ ST(0) = ST(0) / R_F64((u32)(0x6b3728u));
    /* 0040a238: fimul dword ptr [ebp - 4] */ ST(0) = ST(0) * (long double)(i32)R32((u32)(r_ebp+0xfffffffcu));
    /* 0040a23b: fadd qword ptr [ebp - 0x80] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xffffff80u));
    /* 0040a23e: fcomp qword ptr [ebp - 0x74] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xffffff8cu))); FPOP();
    /* 0040a241: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0040a243: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 0040a246: jp 0x40a262 */ if (fP) goto L_0040a262;
L_0040a248:; BB(0x0040a248);
    /* 0040a248: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0040a24a: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x40a24fu); f_0062fbf0();
    /* 0040a24f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040a252: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040a255: add ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040a258: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040a25a: jge 0x40a262 */ if ((fS==fO)) goto L_0040a262;
L_0040a25c:; BB(0x0040a25c);
    /* 0040a25c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040a25f: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
L_0040a262:; BB(0x0040a262);
    /* 0040a262: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0040a265: cmp eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040a268: jle 0x40a270 */ if ((fZ||fS!=fO)) goto L_0040a270;
L_0040a26a:; BB(0x0040a26a);
    /* 0040a26a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040a26d: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
L_0040a270:; BB(0x0040a270);
    /* 0040a270: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040a273: cmp edx, dword ptr [ebp - 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040a276: jne 0x40a2a0 */ if (!fZ) goto L_0040a2a0;
L_0040a278:; BB(0x0040a278);
    /* 0040a278: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040a27b: add eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040a27e: cmp dword ptr [ebp - 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040a281: jle 0x40a2a0 */ if ((fZ||fS!=fO)) goto L_0040a2a0;
L_0040a283:; BB(0x0040a283);
    /* 0040a283: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0040a286: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040a287: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x40a28cu); f_005dcb00();
    /* 0040a28c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040a28f: cmp dword ptr [eax + 0x4a4], 4 */ {  u32 a = R32((u32)(r_eax+0x4a4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040a296: je 0x40a2a0 */ if (fZ) goto L_0040a2a0;
L_0040a298:; BB(0x0040a298);
    /* 0040a298: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040a29b: jmp 0x40afb7 */ goto L_0040afb7;
L_0040a2a0:; BB(0x0040a2a0);
    /* 0040a2a0: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040a2a3: cmp edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040a2a6: jl 0x40a2c5 */ if ((fS!=fO)) goto L_0040a2c5;
L_0040a2a8:; BB(0x0040a2a8);
    /* 0040a2a8: mov byte ptr [ebp - 0x19], 1 */ W8((u32)(r_ebp+0xffffffe7u), 0x1u);
    /* 0040a2ac: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040a2af: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0040a2b2: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0040a2b5: cmp ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040a2b8: jle 0x40a2c0 */ if ((fZ||fS!=fO)) goto L_0040a2c0;
L_0040a2ba:; BB(0x0040a2ba);
    /* 0040a2ba: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040a2bd: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
L_0040a2c0:; BB(0x0040a2c0);
    /* 0040a2c0: jmp 0x40a368 */ goto L_0040a368;
L_0040a2c5:; BB(0x0040a2c5);
    /* 0040a2c5: mov byte ptr [ebp - 0x19], 0 */ W8((u32)(r_ebp+0xffffffe7u), 0x0u);
    /* 0040a2c9: cmp dword ptr [ebp - 0x14], 0xa */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040a2cd: jl 0x40a2d8 */ if ((fS!=fO)) goto L_0040a2d8;
L_0040a2cf:; BB(0x0040a2cf);
    /* 0040a2cf: mov dword ptr [ebp - 0x3c], 0x32 */ W32((u32)(r_ebp+0xffffffc4u), 0x32u);
    /* 0040a2d6: jmp 0x40a2e1 */ goto L_0040a2e1;
L_0040a2d8:; BB(0x0040a2d8);
    /* 0040a2d8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0040a2db: imul eax, eax, 5 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x5u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040a2de: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
L_0040a2e1:; BB(0x0040a2e1);
    /* 0040a2e1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040a2e4: sub ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0040a2e7: cmp dword ptr [ebp - 0x20], ecx */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040a2ea: jle 0x40a302 */ if ((fZ||fS!=fO)) goto L_0040a302;
L_0040a2ec:; BB(0x0040a2ec);
    /* 0040a2ec: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040a2ef: sub edx, dword ptr [ebp - 0x20] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0040a2f2: mov eax, 6 */ r_eax = 0x6u;
    /* 0040a2f7: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0040a2f9: imul eax, eax, 0xf */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xfu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040a2fc: add eax, dword ptr [ebp - 0x3c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffc4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040a2ff: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
L_0040a302:; BB(0x0040a302);
    /* 0040a302: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040a305: sub ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0040a308: cmp ecx, dword ptr [ebp - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040a30b: jg 0x40a318 */ if ((!fZ&&fS==fO)) goto L_0040a318;
L_0040a30d:; BB(0x0040a30d);
    /* 0040a30d: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040a310: sub edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0040a313: cmp edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040a316: jle 0x40a321 */ if ((fZ||fS!=fO)) goto L_0040a321;
L_0040a318:; BB(0x0040a318);
    /* 0040a318: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0040a31b: add eax, 0x1e */ {  u32 a = r_eax; u32 b = 0x1eu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040a31e: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
L_0040a321:; BB(0x0040a321);
    /* 0040a321: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040a324: sub ecx, dword ptr [ebp - 0x20] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0040a327: cmp ecx, 0x19 */ {  u32 a = r_ecx; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040a32a: jle 0x40a335 */ if ((fZ||fS!=fO)) goto L_0040a335;
L_0040a32c:; BB(0x0040a32c);
    /* 0040a32c: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0040a32f: sub edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0040a332: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
L_0040a335:; BB(0x0040a335);
    /* 0040a335: cmp dword ptr [ebp - 0x3c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040a339: jge 0x40a342 */ if ((fS==fO)) goto L_0040a342;
L_0040a33b:; BB(0x0040a33b);
    /* 0040a33b: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
L_0040a342:; BB(0x0040a342);
    /* 0040a342: cmp dword ptr [ebp - 0x3c], 0x4b */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x4bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040a346: jle 0x40a34f */ if ((fZ||fS!=fO)) goto L_0040a34f;
L_0040a348:; BB(0x0040a348);
    /* 0040a348: mov dword ptr [ebp - 0x3c], 0x4b */ W32((u32)(r_ebp+0xffffffc4u), 0x4bu);
L_0040a34f:; BB(0x0040a34f);
    /* 0040a34f: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0040a351: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x40a356u); f_0062fbf0();
    /* 0040a356: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040a359: cmp eax, dword ptr [ebp - 0x3c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffc4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040a35c: jge 0x40a364 */ if ((fS==fO)) goto L_0040a364;
L_0040a35e:; BB(0x0040a35e);
    /* 0040a35e: mov byte ptr [ebp - 0x2d], 1 */ W8((u32)(r_ebp+0xffffffd3u), 0x1u);
    /* 0040a362: jmp 0x40a368 */ goto L_0040a368;
L_0040a364:; BB(0x0040a364);
    /* 0040a364: mov byte ptr [ebp - 0x2d], 0 */ W8((u32)(r_ebp+0xffffffd3u), 0x0u);
L_0040a368:; BB(0x0040a368);
    /* 0040a368: movzx eax, byte ptr [ebp - 0x19] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffe7u));
    /* 0040a36c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040a36e: jne 0x40a37c */ if (!fZ) goto L_0040a37c;
L_0040a370:; BB(0x0040a370);
    /* 0040a370: movzx ecx, byte ptr [ebp - 0x2d] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffd3u));
    /* 0040a374: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040a376: je 0x40a769 */ if (fZ) goto L_0040a769;
L_0040a37c:; BB(0x0040a37c);
    /* 0040a37c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040a37f: cmp edx, dword ptr [ebp - 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040a382: jne 0x40a5ba */ if (!fZ) goto L_0040a5ba;
L_0040a388:; BB(0x0040a388);
    /* 0040a388: movzx eax, byte ptr [ebp - 0x19] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffe7u));
    /* 0040a38c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040a38e: je 0x40a4d1 */ if (fZ) goto L_0040a4d1;
L_0040a394:; BB(0x0040a394);
    /* 0040a394: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0040a396: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x40a39bu); f_0062fbf0();
    /* 0040a39b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040a39e: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0040a3a1: cmp dword ptr [ebp - 0x48], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040a3a5: jge 0x40a3fe */ if ((fS==fO)) goto L_0040a3fe;
L_0040a3a7:; BB(0x0040a3a7);
    /* 0040a3a7: mov esi, dword ptr [ebp - 0x10] */ r_esi = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040a3aa: sub esi, dword ptr [ebp - 0xc] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0040a3ad: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0040a3af: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x40a3b4u); f_0062fbf0();
    /* 0040a3b4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040a3b7: imul eax, dword ptr [ebp - 0x24] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xffffffdcu)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040a3bb: lea ecx, [esi + eax + 1] */ r_ecx = (u32)(r_esi+r_eax+0x1u);
    /* 0040a3bf: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 0040a3c2: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040a3c5: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0040a3c6: mov ecx, 5 */ r_ecx = 0x5u;
    /* 0040a3cb: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0040a3cb, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0040a3cb, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0040a3cd: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040a3d0: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0040a3d2: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0040a3d5: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040a3d8: cmp ecx, dword ptr [ebp - 0x24] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040a3db: jge 0x40a3df */ if ((fS==fO)) goto L_0040a3df;
L_0040a3dd:; BB(0x0040a3dd);
    /* 0040a3dd: jmp 0x40a3f9 */ goto L_0040a3f9;
L_0040a3df:; BB(0x0040a3df);
    /* 0040a3df: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040a3e2: cmp edx, dword ptr [ebp - 0x34] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffccu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040a3e5: jle 0x40a3f1 */ if ((fZ||fS!=fO)) goto L_0040a3f1;
L_0040a3e7:; BB(0x0040a3e7);
    /* 0040a3e7: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0040a3ea: jmp 0x40afb7 */ goto L_0040afb7;
L_0040a3f1:; BB(0x0040a3f1);
    /* 0040a3f1: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040a3f4: jmp 0x40afb7 */ goto L_0040afb7;
L_0040a3f9:; BB(0x0040a3f9);
    /* 0040a3f9: jmp 0x40a4cc */ goto L_0040a4cc;
L_0040a3fe:; BB(0x0040a3fe);
    /* 0040a3fe: cmp dword ptr [ebp - 0x48], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040a402: jge 0x40a4cc */ if ((fS==fO)) goto L_0040a4cc;
L_0040a408:; BB(0x0040a408);
    /* 0040a408: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 0040a40a: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x40a40fu); f_0062fbf0();
    /* 0040a40f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040a412: imul eax, dword ptr [ebp - 0x24] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xffffffdcu)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040a416: cmp dword ptr [ebp - 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040a419: jge 0x40a476 */ if ((fS==fO)) goto L_0040a476;
L_0040a41b:; BB(0x0040a41b);
    /* 0040a41b: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 0040a41d: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x40a422u); f_0062fbf0();
    /* 0040a422: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040a425: mov esi, eax */ r_esi = r_eax;
    /* 0040a427: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0040a429: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x40a42eu); f_0062fbf0();
    /* 0040a42e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040a431: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0040a433: imul esi, dword ptr [ebp - 0x24] */ { i64 t = (i64)(i32)r_esi * (i64)(i32)R32((u32)(r_ebp+0xffffffdcu)); r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040a437: add esi, dword ptr [ebp - 0xc] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0040a43a: mov dword ptr [ebp - 0x4c], esi */ W32((u32)(r_ebp+0xffffffb4u), r_esi);
    /* 0040a43d: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040a440: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0040a441: mov ecx, 5 */ r_ecx = 0x5u;
    /* 0040a446: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0040a446, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0040a446, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0040a448: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040a44b: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0040a44d: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0040a450: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040a453: cmp ecx, dword ptr [ebp - 0x24] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040a456: jge 0x40a45a */ if ((fS==fO)) goto L_0040a45a;
L_0040a458:; BB(0x0040a458);
    /* 0040a458: jmp 0x40a474 */ goto L_0040a474;
L_0040a45a:; BB(0x0040a45a);
    /* 0040a45a: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040a45d: cmp edx, dword ptr [ebp - 0x34] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffccu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040a460: jle 0x40a46c */ if ((fZ||fS!=fO)) goto L_0040a46c;
L_0040a462:; BB(0x0040a462);
    /* 0040a462: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0040a465: jmp 0x40afb7 */ goto L_0040afb7;
L_0040a46c:; BB(0x0040a46c);
    /* 0040a46c: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040a46f: jmp 0x40afb7 */ goto L_0040afb7;
L_0040a474:; BB(0x0040a474);
    /* 0040a474: jmp 0x40a4cc */ goto L_0040a4cc;
L_0040a476:; BB(0x0040a476);
    /* 0040a476: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 0040a478: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x40a47du); f_0062fbf0();
    /* 0040a47d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040a480: mov esi, eax */ r_esi = r_eax;
    /* 0040a482: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 0040a484: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x40a489u); f_0062fbf0();
    /* 0040a489: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040a48c: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0040a48e: imul esi, dword ptr [ebp - 0x24] */ { i64 t = (i64)(i32)r_esi * (i64)(i32)R32((u32)(r_ebp+0xffffffdcu)); r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040a492: mov dword ptr [ebp - 0x4c], esi */ W32((u32)(r_ebp+0xffffffb4u), r_esi);
    /* 0040a495: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040a498: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0040a499: mov ecx, 5 */ r_ecx = 0x5u;
    /* 0040a49e: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0040a49e, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0040a49e, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0040a4a0: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040a4a3: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0040a4a5: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0040a4a8: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040a4ab: cmp ecx, dword ptr [ebp - 0x24] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040a4ae: jge 0x40a4b2 */ if ((fS==fO)) goto L_0040a4b2;
L_0040a4b0:; BB(0x0040a4b0);
    /* 0040a4b0: jmp 0x40a4cc */ goto L_0040a4cc;
L_0040a4b2:; BB(0x0040a4b2);
    /* 0040a4b2: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040a4b5: cmp edx, dword ptr [ebp - 0x34] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffccu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040a4b8: jle 0x40a4c4 */ if ((fZ||fS!=fO)) goto L_0040a4c4;
L_0040a4ba:; BB(0x0040a4ba);
    /* 0040a4ba: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0040a4bd: jmp 0x40afb7 */ goto L_0040afb7;
L_0040a4c4:; BB(0x0040a4c4);
    /* 0040a4c4: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040a4c7: jmp 0x40afb7 */ goto L_0040afb7;
L_0040a4cc:; BB(0x0040a4cc);
    /* 0040a4cc: jmp 0x40a5b5 */ goto L_0040a5b5;
L_0040a4d1:; BB(0x0040a4d1);
    /* 0040a4d1: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0040a4d3: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x40a4d8u); f_0062fbf0();
    /* 0040a4d8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040a4db: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0040a4de: cmp dword ptr [ebp - 0x48], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040a4e2: jge 0x40a5b5 */ if ((fS==fO)) goto L_0040a5b5;
L_0040a4e8:; BB(0x0040a4e8);
    /* 0040a4e8: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 0040a4ea: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x40a4efu); f_0062fbf0();
    /* 0040a4ef: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040a4f2: imul eax, dword ptr [ebp - 0x24] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xffffffdcu)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040a4f6: cmp dword ptr [ebp - 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040a4f9: jge 0x40a55f */ if ((fS==fO)) goto L_0040a55f;
L_0040a4fb:; BB(0x0040a4fb);
    /* 0040a4fb: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040a4fe: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0040a4ff: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0040a501: mov esi, eax */ r_esi = r_eax;
    /* 0040a503: sar esi, 1 */ { u32 c = (1u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 0040a505: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 0040a507: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x40a50cu); f_0062fbf0();
    /* 0040a50c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040a50f: mov edi, eax */ r_edi = r_eax;
    /* 0040a511: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 0040a513: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x40a518u); f_0062fbf0();
    /* 0040a518: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040a51b: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0040a51d: imul edi, dword ptr [ebp - 0x24] */ { i64 t = (i64)(i32)r_edi * (i64)(i32)R32((u32)(r_ebp+0xffffffdcu)); r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040a521: add esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0040a523: mov dword ptr [ebp - 0x4c], esi */ W32((u32)(r_ebp+0xffffffb4u), r_esi);
    /* 0040a526: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040a529: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0040a52a: mov ecx, 5 */ r_ecx = 0x5u;
    /* 0040a52f: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0040a52f, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0040a52f, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0040a531: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040a534: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0040a536: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0040a539: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040a53c: cmp ecx, dword ptr [ebp - 0x24] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040a53f: jge 0x40a543 */ if ((fS==fO)) goto L_0040a543;
L_0040a541:; BB(0x0040a541);
    /* 0040a541: jmp 0x40a55d */ goto L_0040a55d;
L_0040a543:; BB(0x0040a543);
    /* 0040a543: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040a546: cmp edx, dword ptr [ebp - 0x34] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffccu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040a549: jle 0x40a555 */ if ((fZ||fS!=fO)) goto L_0040a555;
L_0040a54b:; BB(0x0040a54b);
    /* 0040a54b: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0040a54e: jmp 0x40afb7 */ goto L_0040afb7;
L_0040a555:; BB(0x0040a555);
    /* 0040a555: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040a558: jmp 0x40afb7 */ goto L_0040afb7;
L_0040a55d:; BB(0x0040a55d);
    /* 0040a55d: jmp 0x40a5b5 */ goto L_0040a5b5;
L_0040a55f:; BB(0x0040a55f);
    /* 0040a55f: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 0040a561: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x40a566u); f_0062fbf0();
    /* 0040a566: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040a569: mov esi, eax */ r_esi = r_eax;
    /* 0040a56b: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 0040a56d: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x40a572u); f_0062fbf0();
    /* 0040a572: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040a575: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0040a577: imul esi, dword ptr [ebp - 0x24] */ { i64 t = (i64)(i32)r_esi * (i64)(i32)R32((u32)(r_ebp+0xffffffdcu)); r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040a57b: mov dword ptr [ebp - 0x4c], esi */ W32((u32)(r_ebp+0xffffffb4u), r_esi);
    /* 0040a57e: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040a581: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0040a582: mov ecx, 5 */ r_ecx = 0x5u;
    /* 0040a587: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0040a587, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0040a587, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0040a589: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040a58c: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0040a58e: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0040a591: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040a594: cmp ecx, dword ptr [ebp - 0x24] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040a597: jge 0x40a59b */ if ((fS==fO)) goto L_0040a59b;
L_0040a599:; BB(0x0040a599);
    /* 0040a599: jmp 0x40a5b5 */ goto L_0040a5b5;
L_0040a59b:; BB(0x0040a59b);
    /* 0040a59b: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040a59e: cmp edx, dword ptr [ebp - 0x34] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffccu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040a5a1: jle 0x40a5ad */ if ((fZ||fS!=fO)) goto L_0040a5ad;
L_0040a5a3:; BB(0x0040a5a3);
    /* 0040a5a3: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0040a5a6: jmp 0x40afb7 */ goto L_0040afb7;
L_0040a5ad:; BB(0x0040a5ad);
    /* 0040a5ad: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040a5b0: jmp 0x40afb7 */ goto L_0040afb7;
L_0040a5b5:; BB(0x0040a5b5);
    /* 0040a5b5: jmp 0x40a769 */ goto L_0040a769;
L_0040a5ba:; BB(0x0040a5ba);
    /* 0040a5ba: movzx eax, byte ptr [ebp - 0x19] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffe7u));
    /* 0040a5be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040a5c0: je 0x40a66c */ if (fZ) goto L_0040a66c;
L_0040a5c6:; BB(0x0040a5c6);
    /* 0040a5c6: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0040a5c8: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x40a5cdu); f_0062fbf0();
    /* 0040a5cd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040a5d0: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0040a5d3: cmp dword ptr [ebp - 0x48], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040a5d7: jge 0x40a5f7 */ if ((fS==fO)) goto L_0040a5f7;
L_0040a5d9:; BB(0x0040a5d9);
    /* 0040a5d9: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040a5dc: sub esi, dword ptr [ebp - 4] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0040a5df: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 0040a5e1: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x40a5e6u); f_0062fbf0();
    /* 0040a5e6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040a5e9: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040a5ec: imul eax, dword ptr [ebp - 0x24] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xffffffdcu)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040a5f0: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0040a5f2: mov dword ptr [ebp - 0x4c], esi */ W32((u32)(r_ebp+0xffffffb4u), r_esi);
    /* 0040a5f5: jmp 0x40a630 */ goto L_0040a630;
L_0040a5f7:; BB(0x0040a5f7);
    /* 0040a5f7: cmp dword ptr [ebp - 0x48], 7 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040a5fb: jge 0x40a629 */ if ((fS==fO)) goto L_0040a629;
L_0040a5fd:; BB(0x0040a5fd);
    /* 0040a5fd: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040a600: sub esi, dword ptr [ebp - 4] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0040a603: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0040a605: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x40a60au); f_0062fbf0();
    /* 0040a60a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040a60d: mov edi, eax */ r_edi = r_eax;
    /* 0040a60f: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0040a611: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x40a616u); f_0062fbf0();
    /* 0040a616: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040a619: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0040a61b: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0040a61e: imul edi, dword ptr [ebp - 0x24] */ { i64 t = (i64)(i32)r_edi * (i64)(i32)R32((u32)(r_ebp+0xffffffdcu)); r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040a622: add esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0040a624: mov dword ptr [ebp - 0x4c], esi */ W32((u32)(r_ebp+0xffffffb4u), r_esi);
    /* 0040a627: jmp 0x40a630 */ goto L_0040a630;
L_0040a629:; BB(0x0040a629);
    /* 0040a629: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_0040a630:; BB(0x0040a630);
    /* 0040a630: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040a633: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0040a634: mov ecx, 5 */ r_ecx = 0x5u;
    /* 0040a639: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0040a639, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0040a639, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0040a63b: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040a63e: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0040a640: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0040a643: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040a646: cmp ecx, dword ptr [ebp - 0x24] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040a649: jge 0x40a64d */ if ((fS==fO)) goto L_0040a64d;
L_0040a64b:; BB(0x0040a64b);
    /* 0040a64b: jmp 0x40a667 */ goto L_0040a667;
L_0040a64d:; BB(0x0040a64d);
    /* 0040a64d: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040a650: cmp edx, dword ptr [ebp - 0x34] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffccu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040a653: jle 0x40a65f */ if ((fZ||fS!=fO)) goto L_0040a65f;
L_0040a655:; BB(0x0040a655);
    /* 0040a655: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0040a658: jmp 0x40afb7 */ goto L_0040afb7;
L_0040a65f:; BB(0x0040a65f);
    /* 0040a65f: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040a662: jmp 0x40afb7 */ goto L_0040afb7;
L_0040a667:; BB(0x0040a667);
    /* 0040a667: jmp 0x40a769 */ goto L_0040a769;
L_0040a66c:; BB(0x0040a66c);
    /* 0040a66c: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0040a66e: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x40a673u); f_0062fbf0();
    /* 0040a673: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040a676: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0040a679: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040a67c: sub eax, dword ptr [ebp - 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0040a67f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040a682: jne 0x40a68d */ if (!fZ) goto L_0040a68d;
L_0040a684:; BB(0x0040a684);
    /* 0040a684: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0040a687: sub ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0040a68a: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
L_0040a68d:; BB(0x0040a68d);
    /* 0040a68d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040a690: sub edx, dword ptr [ebp - 0x20] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0040a693: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040a696: jne 0x40a6a3 */ if (!fZ) goto L_0040a6a3;
L_0040a698:; BB(0x0040a698);
    /* 0040a698: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0040a69b: sub eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0040a69e: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0040a6a1: jmp 0x40a6b7 */ goto L_0040a6b7;
L_0040a6a3:; BB(0x0040a6a3);
    /* 0040a6a3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040a6a6: sub ecx, dword ptr [ebp - 0x20] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0040a6a9: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040a6ac: jne 0x40a6b7 */ if (!fZ) goto L_0040a6b7;
L_0040a6ae:; BB(0x0040a6ae);
    /* 0040a6ae: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0040a6b1: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0040a6b4: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
L_0040a6b7:; BB(0x0040a6b7);
    /* 0040a6b7: cmp dword ptr [ebp - 0x48], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040a6bb: jge 0x40a6e6 */ if ((fS==fO)) goto L_0040a6e6;
L_0040a6bd:; BB(0x0040a6bd);
    /* 0040a6bd: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040a6c0: sub esi, dword ptr [ebp - 4] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0040a6c3: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 0040a6c5: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x40a6cau); f_0062fbf0();
    /* 0040a6ca: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040a6cd: mov edi, eax */ r_edi = r_eax;
    /* 0040a6cf: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0040a6d1: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x40a6d6u); f_0062fbf0();
    /* 0040a6d6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040a6d9: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0040a6db: imul edi, dword ptr [ebp - 0x24] */ { i64 t = (i64)(i32)r_edi * (i64)(i32)R32((u32)(r_ebp+0xffffffdcu)); r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040a6df: add esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0040a6e1: mov dword ptr [ebp - 0x4c], esi */ W32((u32)(r_ebp+0xffffffb4u), r_esi);
    /* 0040a6e4: jmp 0x40a732 */ goto L_0040a732;
L_0040a6e6:; BB(0x0040a6e6);
    /* 0040a6e6: cmp dword ptr [ebp - 0x48], 6 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040a6ea: jge 0x40a72b */ if ((fS==fO)) goto L_0040a72b;
L_0040a6ec:; BB(0x0040a6ec);
    /* 0040a6ec: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040a6ef: sub esi, dword ptr [ebp - 4] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0040a6f2: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0040a6f4: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x40a6f9u); f_0062fbf0();
    /* 0040a6f9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040a6fc: mov ecx, eax */ r_ecx = r_eax;
    /* 0040a6fe: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040a701: mov eax, esi */ r_eax = r_esi;
    /* 0040a703: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0040a704: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0040a704, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0040a704, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0040a706: mov esi, eax */ r_esi = r_eax;
    /* 0040a708: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 0040a70a: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x40a70fu); f_0062fbf0();
    /* 0040a70f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040a712: mov edi, eax */ r_edi = r_eax;
    /* 0040a714: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 0040a716: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x40a71bu); f_0062fbf0();
    /* 0040a71b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040a71e: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0040a720: imul edi, dword ptr [ebp - 0x24] */ { i64 t = (i64)(i32)r_edi * (i64)(i32)R32((u32)(r_ebp+0xffffffdcu)); r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040a724: add esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0040a726: mov dword ptr [ebp - 0x4c], esi */ W32((u32)(r_ebp+0xffffffb4u), r_esi);
    /* 0040a729: jmp 0x40a732 */ goto L_0040a732;
L_0040a72b:; BB(0x0040a72b);
    /* 0040a72b: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_0040a732:; BB(0x0040a732);
    /* 0040a732: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040a735: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0040a736: mov ecx, 5 */ r_ecx = 0x5u;
    /* 0040a73b: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0040a73b, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0040a73b, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0040a73d: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040a740: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0040a742: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0040a745: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040a748: cmp ecx, dword ptr [ebp - 0x24] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040a74b: jge 0x40a74f */ if ((fS==fO)) goto L_0040a74f;
L_0040a74d:; BB(0x0040a74d);
    /* 0040a74d: jmp 0x40a769 */ goto L_0040a769;
L_0040a74f:; BB(0x0040a74f);
    /* 0040a74f: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040a752: cmp edx, dword ptr [ebp - 0x34] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffccu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040a755: jle 0x40a761 */ if ((fZ||fS!=fO)) goto L_0040a761;
L_0040a757:; BB(0x0040a757);
    /* 0040a757: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0040a75a: jmp 0x40afb7 */ goto L_0040afb7;
L_0040a761:; BB(0x0040a761);
    /* 0040a761: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040a764: jmp 0x40afb7 */ goto L_0040afb7;
L_0040a769:; BB(0x0040a769);
    /* 0040a769: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040a76c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040a76d: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0040a770: call 0x40afe0 */ r_esp -= 4; W32(r_esp, 0x40a775u); f_0040afe0();
    /* 0040a775: cmp eax, dword ptr [ebp - 0x24] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040a778: jge 0x40a781 */ if ((fS==fO)) goto L_0040a781;
L_0040a77a:; BB(0x0040a77a);
    /* 0040a77a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040a77c: jmp 0x40afb7 */ goto L_0040afb7;
L_0040a781:; BB(0x0040a781);
    /* 0040a781: movzx ecx, byte ptr [ebp - 0x35] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffcbu));
    /* 0040a785: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040a787: jne 0x40a7a8 */ if (!fZ) goto L_0040a7a8;
L_0040a789:; BB(0x0040a789);
    /* 0040a789: fild dword ptr [ebp - 4] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffffcu)));
    /* 0040a78c: fdiv qword ptr [0x6b3740] */ ST(0) = ST(0) / R_F64((u32)(0x6b3740u));
    /* 0040a792: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x40a797u); f_00686cc0();
    /* 0040a797: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0040a79a: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0040a79d: cmp edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040a7a0: jle 0x40a7a8 */ if ((fZ||fS!=fO)) goto L_0040a7a8;
L_0040a7a2:; BB(0x0040a7a2);
    /* 0040a7a2: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040a7a5: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
L_0040a7a8:; BB(0x0040a7a8);
    /* 0040a7a8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0040a7ab: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040a7ac: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x40a7b1u); f_005dcb00();
    /* 0040a7b1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040a7b4: mov edx, dword ptr [eax + 0x4a4] */ r_edx = R32((u32)(r_eax+0x4a4u));
    /* 0040a7ba: mov dword ptr [ebp - 0x88], edx */ W32((u32)(r_ebp+0xffffff78u), r_edx);
    /* 0040a7c0: cmp dword ptr [ebp - 0x88], 7 */ {  u32 a = R32((u32)(r_ebp+0xffffff78u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0040a7c7: ja 0x40afab */ if ((!fC&&!fZ)) goto L_0040afab;
L_0040a7cd:; BB(0x0040a7cd);
    /* 0040a7cd: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0040a7d3: jmp dword ptr [eax*4 + 0x40afc0] */ { u32 t = R32((u32)(r_eax*4+0x40afc0u)); switch (t) { case 0x40a7dau: goto L_0040a7da; case 0x40a81au: goto L_0040a81a; case 0x40a8b2u: goto L_0040a8b2; case 0x40a94cu: goto L_0040a94c; case 0x40a9e6u: goto L_0040a9e6; case 0x40ab39u: goto L_0040ab39; case 0x40ac46u: goto L_0040ac46; case 0x40ae43u: goto L_0040ae43; default: UNSUP(0x0040a7d3, "jump table entry is not a known target"); } }
L_0040a7da:; BB(0x0040a7da);
    /* 0040a7da: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0040a7dd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040a7de: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0040a7e1: call 0x40afe0 */ r_esp -= 4; W32(r_esp, 0x40a7e6u); f_0040afe0();
    /* 0040a7e6: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0040a7e9: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040a7ec: cmp edx, dword ptr [ebp - 0x24] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040a7ef: jge 0x40a7fb */ if ((fS==fO)) goto L_0040a7fb;
L_0040a7f1:; BB(0x0040a7f1);
    /* 0040a7f1: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040a7f4: jmp 0x40afb7 */ goto L_0040afb7;
L_0040a7fb:; BB(0x0040a7fb);
    /* 0040a7fb: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040a7fe: cmp eax, dword ptr [ebp - 0x34] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffccu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040a801: jle 0x40a80d */ if ((fZ||fS!=fO)) goto L_0040a80d;
L_0040a803:; BB(0x0040a803);
    /* 0040a803: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0040a806: jmp 0x40afb7 */ goto L_0040afb7;
L_0040a80d:; BB(0x0040a80d);
    /* 0040a80d: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040a810: jmp 0x40afb7 */ goto L_0040afb7;
L_0040a81a:; BB(0x0040a81a);
    /* 0040a81a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0040a81d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040a81e: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0040a821: call 0x40afe0 */ r_esp -= 4; W32(r_esp, 0x40a826u); f_0040afe0();
    /* 0040a826: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0040a828: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0040a82b: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040a82e: shl edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0040a830: cmp dword ptr [ebp - 0x4c], edx */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040a833: jne 0x40a84b */ if (!fZ) goto L_0040a84b;
L_0040a835:; BB(0x0040a835);
    /* 0040a835: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0040a837: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x40a83cu); f_0062fbf0();
    /* 0040a83c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040a83f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040a841: jne 0x40a84b */ if (!fZ) goto L_0040a84b;
L_0040a843:; BB(0x0040a843);
    /* 0040a843: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040a846: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0040a849: jmp 0x40a881 */ goto L_0040a881;
L_0040a84b:; BB(0x0040a84b);
    /* 0040a84b: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040a84e: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0040a84f: mov ecx, 0xa */ r_ecx = 0xau;
    /* 0040a854: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0040a854, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0040a854, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0040a856: mov esi, eax */ r_esi = r_eax;
    /* 0040a858: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0040a85a: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x40a85fu); f_0062fbf0();
    /* 0040a85f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040a862: sub eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0040a865: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040a868: add esi, dword ptr [ebp - 0x4c] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xffffffb4u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0040a86b: mov dword ptr [ebp - 0x4c], esi */ W32((u32)(r_ebp+0xffffffb4u), r_esi);
    /* 0040a86e: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040a871: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0040a872: mov ecx, 5 */ r_ecx = 0x5u;
    /* 0040a877: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0040a877, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0040a877, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0040a879: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040a87c: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0040a87e: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
L_0040a881:; BB(0x0040a881);
    /* 0040a881: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040a884: cmp ecx, dword ptr [ebp - 0x24] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040a887: jge 0x40a893 */ if ((fS==fO)) goto L_0040a893;
L_0040a889:; BB(0x0040a889);
    /* 0040a889: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040a88c: jmp 0x40afb7 */ goto L_0040afb7;
L_0040a893:; BB(0x0040a893);
    /* 0040a893: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040a896: cmp edx, dword ptr [ebp - 0x34] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffccu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040a899: jle 0x40a8a5 */ if ((fZ||fS!=fO)) goto L_0040a8a5;
L_0040a89b:; BB(0x0040a89b);
    /* 0040a89b: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0040a89e: jmp 0x40afb7 */ goto L_0040afb7;
L_0040a8a5:; BB(0x0040a8a5);
    /* 0040a8a5: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040a8a8: jmp 0x40afb7 */ goto L_0040afb7;
L_0040a8b2:; BB(0x0040a8b2);
    /* 0040a8b2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040a8b5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040a8b6: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0040a8b9: call 0x40afe0 */ r_esp -= 4; W32(r_esp, 0x40a8beu); f_0040afe0();
    /* 0040a8be: imul eax, eax, 5 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x5u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040a8c1: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0040a8c4: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040a8c7: imul ecx, ecx, 5 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x5u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040a8ca: cmp dword ptr [ebp - 0x4c], ecx */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040a8cd: jne 0x40a8e5 */ if (!fZ) goto L_0040a8e5;
L_0040a8cf:; BB(0x0040a8cf);
    /* 0040a8cf: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0040a8d1: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x40a8d6u); f_0062fbf0();
    /* 0040a8d6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040a8d9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040a8db: jne 0x40a8e5 */ if (!fZ) goto L_0040a8e5;
L_0040a8dd:; BB(0x0040a8dd);
    /* 0040a8dd: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040a8e0: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 0040a8e3: jmp 0x40a91b */ goto L_0040a91b;
L_0040a8e5:; BB(0x0040a8e5);
    /* 0040a8e5: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040a8e8: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0040a8e9: mov ecx, 0xa */ r_ecx = 0xau;
    /* 0040a8ee: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0040a8ee, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0040a8ee, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0040a8f0: mov esi, eax */ r_esi = r_eax;
    /* 0040a8f2: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0040a8f4: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x40a8f9u); f_0062fbf0();
    /* 0040a8f9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040a8fc: sub eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0040a8ff: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040a902: add esi, dword ptr [ebp - 0x4c] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xffffffb4u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0040a905: mov dword ptr [ebp - 0x4c], esi */ W32((u32)(r_ebp+0xffffffb4u), r_esi);
    /* 0040a908: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040a90b: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0040a90c: mov ecx, 5 */ r_ecx = 0x5u;
    /* 0040a911: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0040a911, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0040a911, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0040a913: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040a916: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0040a918: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
L_0040a91b:; BB(0x0040a91b);
    /* 0040a91b: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040a91e: cmp ecx, dword ptr [ebp - 0x24] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040a921: jge 0x40a92d */ if ((fS==fO)) goto L_0040a92d;
L_0040a923:; BB(0x0040a923);
    /* 0040a923: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040a926: jmp 0x40afb7 */ goto L_0040afb7;
L_0040a92d:; BB(0x0040a92d);
    /* 0040a92d: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040a930: cmp edx, dword ptr [ebp - 0x34] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffccu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040a933: jle 0x40a93f */ if ((fZ||fS!=fO)) goto L_0040a93f;
L_0040a935:; BB(0x0040a935);
    /* 0040a935: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0040a938: jmp 0x40afb7 */ goto L_0040afb7;
L_0040a93f:; BB(0x0040a93f);
    /* 0040a93f: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040a942: jmp 0x40afb7 */ goto L_0040afb7;
L_0040a94c:; BB(0x0040a94c);
    /* 0040a94c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040a94f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040a950: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0040a953: call 0x40afe0 */ r_esp -= 4; W32(r_esp, 0x40a958u); f_0040afe0();
    /* 0040a958: imul eax, eax, 0xa */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xau; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040a95b: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0040a95e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040a961: imul ecx, ecx, 0xa */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xau; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040a964: cmp dword ptr [ebp - 0x4c], ecx */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040a967: jne 0x40a97f */ if (!fZ) goto L_0040a97f;
L_0040a969:; BB(0x0040a969);
    /* 0040a969: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0040a96b: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x40a970u); f_0062fbf0();
    /* 0040a970: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040a973: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040a975: jne 0x40a97f */ if (!fZ) goto L_0040a97f;
L_0040a977:; BB(0x0040a977);
    /* 0040a977: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040a97a: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 0040a97d: jmp 0x40a9b5 */ goto L_0040a9b5;
L_0040a97f:; BB(0x0040a97f);
    /* 0040a97f: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040a982: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0040a983: mov ecx, 0xa */ r_ecx = 0xau;
    /* 0040a988: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0040a988, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0040a988, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0040a98a: mov esi, eax */ r_esi = r_eax;
    /* 0040a98c: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0040a98e: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x40a993u); f_0062fbf0();
    /* 0040a993: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040a996: sub eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0040a999: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040a99c: add esi, dword ptr [ebp - 0x4c] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xffffffb4u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0040a99f: mov dword ptr [ebp - 0x4c], esi */ W32((u32)(r_ebp+0xffffffb4u), r_esi);
    /* 0040a9a2: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040a9a5: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0040a9a6: mov ecx, 5 */ r_ecx = 0x5u;
    /* 0040a9ab: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0040a9ab, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0040a9ab, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0040a9ad: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040a9b0: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0040a9b2: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
L_0040a9b5:; BB(0x0040a9b5);
    /* 0040a9b5: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040a9b8: cmp ecx, dword ptr [ebp - 0x24] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040a9bb: jge 0x40a9c7 */ if ((fS==fO)) goto L_0040a9c7;
L_0040a9bd:; BB(0x0040a9bd);
    /* 0040a9bd: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040a9c0: jmp 0x40afb7 */ goto L_0040afb7;
L_0040a9c7:; BB(0x0040a9c7);
    /* 0040a9c7: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040a9ca: cmp edx, dword ptr [ebp - 0x34] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffccu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040a9cd: jle 0x40a9d9 */ if ((fZ||fS!=fO)) goto L_0040a9d9;
L_0040a9cf:; BB(0x0040a9cf);
    /* 0040a9cf: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0040a9d2: jmp 0x40afb7 */ goto L_0040afb7;
L_0040a9d9:; BB(0x0040a9d9);
    /* 0040a9d9: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040a9dc: jmp 0x40afb7 */ goto L_0040afb7;
L_0040a9e6:; BB(0x0040a9e6);
    /* 0040a9e6: cmp dword ptr [ebp - 0x14], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040a9ea: jge 0x40aa8a */ if ((fS==fO)) goto L_0040aa8a;
L_0040a9f0:; BB(0x0040a9f0);
    /* 0040a9f0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040a9f3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040a9f4: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0040a9f7: call 0x40afe0 */ r_esp -= 4; W32(r_esp, 0x40a9fcu); f_0040afe0();
    /* 0040a9fc: imul eax, eax, 5 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x5u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040a9ff: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0040aa02: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040aa05: imul ecx, ecx, 5 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x5u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040aa08: cmp dword ptr [ebp - 0x4c], ecx */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040aa0b: jne 0x40aa23 */ if (!fZ) goto L_0040aa23;
L_0040aa0d:; BB(0x0040aa0d);
    /* 0040aa0d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0040aa0f: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x40aa14u); f_0062fbf0();
    /* 0040aa14: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040aa17: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040aa19: jne 0x40aa23 */ if (!fZ) goto L_0040aa23;
L_0040aa1b:; BB(0x0040aa1b);
    /* 0040aa1b: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040aa1e: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 0040aa21: jmp 0x40aa59 */ goto L_0040aa59;
L_0040aa23:; BB(0x0040aa23);
    /* 0040aa23: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040aa26: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0040aa27: mov ecx, 0xa */ r_ecx = 0xau;
    /* 0040aa2c: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0040aa2c, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0040aa2c, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0040aa2e: mov esi, eax */ r_esi = r_eax;
    /* 0040aa30: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0040aa32: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x40aa37u); f_0062fbf0();
    /* 0040aa37: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040aa3a: sub eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0040aa3d: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040aa40: add esi, dword ptr [ebp - 0x4c] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xffffffb4u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0040aa43: mov dword ptr [ebp - 0x4c], esi */ W32((u32)(r_ebp+0xffffffb4u), r_esi);
    /* 0040aa46: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040aa49: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0040aa4a: mov ecx, 5 */ r_ecx = 0x5u;
    /* 0040aa4f: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0040aa4f, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0040aa4f, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0040aa51: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040aa54: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0040aa56: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
L_0040aa59:; BB(0x0040aa59);
    /* 0040aa59: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040aa5c: cmp ecx, dword ptr [ebp - 0x24] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040aa5f: jge 0x40aa6b */ if ((fS==fO)) goto L_0040aa6b;
L_0040aa61:; BB(0x0040aa61);
    /* 0040aa61: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040aa64: jmp 0x40afb7 */ goto L_0040afb7;
L_0040aa6b:; BB(0x0040aa6b);
    /* 0040aa6b: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040aa6e: cmp edx, dword ptr [ebp - 0x34] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffccu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040aa71: jle 0x40aa7d */ if ((fZ||fS!=fO)) goto L_0040aa7d;
L_0040aa73:; BB(0x0040aa73);
    /* 0040aa73: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0040aa76: jmp 0x40afb7 */ goto L_0040afb7;
L_0040aa7d:; BB(0x0040aa7d);
    /* 0040aa7d: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040aa80: jmp 0x40afb7 */ goto L_0040afb7;
L_0040aa8a:; BB(0x0040aa8a);
    /* 0040aa8a: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0040aa8c: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x40aa91u); f_0062fbf0();
    /* 0040aa91: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040aa94: mov ecx, eax */ r_ecx = r_eax;
    /* 0040aa96: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040aa99: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0040aa9c: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0040aa9d: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0040aa9d, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0040aa9d, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0040aa9f: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0040aaa2: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0040aaa5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040aaa6: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0040aaa9: call 0x40afe0 */ r_esp -= 4; W32(r_esp, 0x40aaaeu); f_0040afe0();
    /* 0040aaae: imul eax, eax, 5 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x5u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040aab1: cmp dword ptr [ebp - 0x4c], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040aab4: jge 0x40ab2c */ if ((fS==fO)) goto L_0040ab2c;
L_0040aab6:; BB(0x0040aab6);
    /* 0040aab6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040aab9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040aaba: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0040aabd: call 0x40afe0 */ r_esp -= 4; W32(r_esp, 0x40aac2u); f_0040afe0();
    /* 0040aac2: imul eax, eax, 5 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x5u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040aac5: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0040aac8: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040aacb: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0040aacc: mov ecx, 0xa */ r_ecx = 0xau;
    /* 0040aad1: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0040aad1, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0040aad1, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0040aad3: mov esi, eax */ r_esi = r_eax;
    /* 0040aad5: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0040aad7: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x40aadcu); f_0062fbf0();
    /* 0040aadc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040aadf: sub eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0040aae2: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040aae5: add esi, dword ptr [ebp - 0x4c] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xffffffb4u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0040aae8: mov dword ptr [ebp - 0x4c], esi */ W32((u32)(r_ebp+0xffffffb4u), r_esi);
    /* 0040aaeb: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040aaee: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0040aaef: mov ecx, 5 */ r_ecx = 0x5u;
    /* 0040aaf4: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0040aaf4, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0040aaf4, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0040aaf6: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040aaf9: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0040aafb: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0040aafe: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040ab01: cmp ecx, dword ptr [ebp - 0x24] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040ab04: jge 0x40ab10 */ if ((fS==fO)) goto L_0040ab10;
L_0040ab06:; BB(0x0040ab06);
    /* 0040ab06: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040ab09: jmp 0x40afb7 */ goto L_0040afb7;
L_0040ab10:; BB(0x0040ab10);
    /* 0040ab10: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040ab13: cmp edx, dword ptr [ebp - 0x34] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffccu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040ab16: jle 0x40ab22 */ if ((fZ||fS!=fO)) goto L_0040ab22;
L_0040ab18:; BB(0x0040ab18);
    /* 0040ab18: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0040ab1b: jmp 0x40afb7 */ goto L_0040afb7;
L_0040ab22:; BB(0x0040ab22);
    /* 0040ab22: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040ab25: jmp 0x40afb7 */ goto L_0040afb7;
L_0040ab2c:; BB(0x0040ab2c);
    /* 0040ab2c: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040ab2f: jmp 0x40afb7 */ goto L_0040afb7;
L_0040ab39:; BB(0x0040ab39);
    /* 0040ab39: cmp dword ptr [ebp - 0x14], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040ab3d: jg 0x40ab4f */ if ((!fZ&&fS==fO)) goto L_0040ab4f;
L_0040ab3f:; BB(0x0040ab3f);
    /* 0040ab3f: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040ab42: cmp dword ptr [eax + 0x4ac], 1 */ {  u32 a = R32((u32)(r_eax+0x4acu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040ab49: jle 0x40ac30 */ if ((fZ||fS!=fO)) goto L_0040ac30;
L_0040ab4f:; BB(0x0040ab4f);
    /* 0040ab4f: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040ab52: movzx edx, byte ptr [ecx + 0x4b0] */ r_edx = (u32)R8((u32)(r_ecx+0x4b0u));
    /* 0040ab59: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ab5b: je 0x40ab80 */ if (fZ) goto L_0040ab80;
L_0040ab5d:; BB(0x0040ab5d);
    /* 0040ab5d: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040ab60: mov dword ptr [eax + 0x4ac], 1 */ W32((u32)(r_eax+0x4acu), 0x1u);
    /* 0040ab6a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0040ab6d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040ab6e: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0040ab71: call 0x40afe0 */ r_esp -= 4; W32(r_esp, 0x40ab76u); f_0040afe0();
    /* 0040ab76: jmp 0x40afb7 */ goto L_0040afb7;
L_0040ab80:; BB(0x0040ab80);
    /* 0040ab80: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040ab83: cmp dword ptr [edx + 0x4ac], 4 */ {  u32 a = R32((u32)(r_edx+0x4acu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040ab8a: jl 0x40abb0 */ if ((fS!=fO)) goto L_0040abb0;
L_0040ab8c:; BB(0x0040ab8c);
    /* 0040ab8c: cmp dword ptr [ebp - 0x14], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040ab90: jge 0x40abb0 */ if ((fS==fO)) goto L_0040abb0;
L_0040ab92:; BB(0x0040ab92);
    /* 0040ab92: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040ab95: mov dword ptr [eax + 0x4ac], 1 */ W32((u32)(r_eax+0x4acu), 0x1u);
    /* 0040ab9f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0040aba2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040aba3: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0040aba6: call 0x40afe0 */ r_esp -= 4; W32(r_esp, 0x40ababu); f_0040afe0();
    /* 0040abab: jmp 0x40afb7 */ goto L_0040afb7;
L_0040abb0:; BB(0x0040abb0);
    /* 0040abb0: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040abb3: mov eax, dword ptr [edx + 0x4ac] */ r_eax = R32((u32)(r_edx+0x4acu));
    /* 0040abb9: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040abbc: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040abbf: mov dword ptr [ecx + 0x4ac], eax */ W32((u32)(r_ecx+0x4acu), r_eax);
    /* 0040abc5: cmp dword ptr [ebp - 0x40], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040abc9: jne 0x40abde */ if (!fZ) goto L_0040abde;
L_0040abcb:; BB(0x0040abcb);
    /* 0040abcb: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0040abce: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040abcf: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0040abd2: call 0x40afe0 */ r_esp -= 4; W32(r_esp, 0x40abd7u); f_0040afe0();
    /* 0040abd7: jmp 0x40afb7 */ goto L_0040afb7;
L_0040abde:; BB(0x0040abde);
    /* 0040abde: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0040abe1: cmp eax, dword ptr [ebp - 0x24] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040abe4: jge 0x40abf0 */ if ((fS==fO)) goto L_0040abf0;
L_0040abe6:; BB(0x0040abe6);
    /* 0040abe6: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040abe9: jmp 0x40afb7 */ goto L_0040afb7;
L_0040abf0:; BB(0x0040abf0);
    /* 0040abf0: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0040abf3: cmp ecx, dword ptr [ebp - 0x34] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffccu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040abf6: jle 0x40ac02 */ if ((fZ||fS!=fO)) goto L_0040ac02;
L_0040abf8:; BB(0x0040abf8);
    /* 0040abf8: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0040abfb: jmp 0x40afb7 */ goto L_0040afb7;
L_0040ac02:; BB(0x0040ac02);
    /* 0040ac02: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040ac05: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0040ac06: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0040ac08: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0040ac0a: cmp dword ptr [ebp - 0x40], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040ac0d: jle 0x40ac26 */ if ((fZ||fS!=fO)) goto L_0040ac26;
L_0040ac0f:; BB(0x0040ac0f);
    /* 0040ac0f: movzx edx, byte ptr [ebp - 0x19] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffe7u));
    /* 0040ac13: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ac15: jne 0x40ac26 */ if (!fZ) goto L_0040ac26;
L_0040ac17:; BB(0x0040ac17);
    /* 0040ac17: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040ac1a: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0040ac1b: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0040ac1d: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0040ac1f: jmp 0x40afb7 */ goto L_0040afb7;
L_0040ac26:; BB(0x0040ac26);
    /* 0040ac26: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0040ac29: jmp 0x40afb7 */ goto L_0040afb7;
L_0040ac30:; BB(0x0040ac30);
    /* 0040ac30: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040ac33: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040ac34: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0040ac37: call 0x40afe0 */ r_esp -= 4; W32(r_esp, 0x40ac3cu); f_0040afe0();
    /* 0040ac3c: jmp 0x40afb7 */ goto L_0040afb7;
L_0040ac46:; BB(0x0040ac46);
    /* 0040ac46: cmp dword ptr [ebp - 0x14], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040ac4a: jge 0x40acea */ if ((fS==fO)) goto L_0040acea;
L_0040ac50:; BB(0x0040ac50);
    /* 0040ac50: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0040ac53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040ac54: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0040ac57: call 0x40afe0 */ r_esp -= 4; W32(r_esp, 0x40ac5cu); f_0040afe0();
    /* 0040ac5c: imul eax, eax, 5 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x5u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040ac5f: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0040ac62: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040ac65: imul edx, edx, 5 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x5u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040ac68: cmp dword ptr [ebp - 0x4c], edx */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ac6b: jne 0x40ac83 */ if (!fZ) goto L_0040ac83;
L_0040ac6d:; BB(0x0040ac6d);
    /* 0040ac6d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ac6f: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x40ac74u); f_0062fbf0();
    /* 0040ac74: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040ac77: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ac79: jne 0x40ac83 */ if (!fZ) goto L_0040ac83;
L_0040ac7b:; BB(0x0040ac7b);
    /* 0040ac7b: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040ac7e: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0040ac81: jmp 0x40acb9 */ goto L_0040acb9;
L_0040ac83:; BB(0x0040ac83);
    /* 0040ac83: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040ac86: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0040ac87: mov ecx, 0xa */ r_ecx = 0xau;
    /* 0040ac8c: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0040ac8c, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0040ac8c, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0040ac8e: mov esi, eax */ r_esi = r_eax;
    /* 0040ac90: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0040ac92: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x40ac97u); f_0062fbf0();
    /* 0040ac97: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040ac9a: sub eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0040ac9d: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040aca0: add esi, dword ptr [ebp - 0x4c] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xffffffb4u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0040aca3: mov dword ptr [ebp - 0x4c], esi */ W32((u32)(r_ebp+0xffffffb4u), r_esi);
    /* 0040aca6: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040aca9: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0040acaa: mov ecx, 5 */ r_ecx = 0x5u;
    /* 0040acaf: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0040acaf, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0040acaf, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0040acb1: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040acb4: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0040acb6: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
L_0040acb9:; BB(0x0040acb9);
    /* 0040acb9: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040acbc: cmp ecx, dword ptr [ebp - 0x24] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040acbf: jge 0x40accb */ if ((fS==fO)) goto L_0040accb;
L_0040acc1:; BB(0x0040acc1);
    /* 0040acc1: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040acc4: jmp 0x40afb7 */ goto L_0040afb7;
L_0040accb:; BB(0x0040accb);
    /* 0040accb: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040acce: cmp edx, dword ptr [ebp - 0x34] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffccu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040acd1: jle 0x40acdd */ if ((fZ||fS!=fO)) goto L_0040acdd;
L_0040acd3:; BB(0x0040acd3);
    /* 0040acd3: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0040acd6: jmp 0x40afb7 */ goto L_0040afb7;
L_0040acdd:; BB(0x0040acdd);
    /* 0040acdd: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040ace0: jmp 0x40afb7 */ goto L_0040afb7;
L_0040acea:; BB(0x0040acea);
    /* 0040acea: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040aced: movzx ecx, byte ptr [eax + 0x4b0] */ r_ecx = (u32)R8((u32)(r_eax+0x4b0u));
    /* 0040acf4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040acf6: jne 0x40adca */ if (!fZ) goto L_0040adca;
L_0040acfc:; BB(0x0040acfc);
    /* 0040acfc: cmp dword ptr [ebp - 0x40], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ad00: jne 0x40ad78 */ if (!fZ) goto L_0040ad78;
L_0040ad02:; BB(0x0040ad02);
    /* 0040ad02: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0040ad05: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040ad06: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0040ad09: call 0x40afe0 */ r_esp -= 4; W32(r_esp, 0x40ad0eu); f_0040afe0();
    /* 0040ad0e: imul eax, eax, 5 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x5u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040ad11: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0040ad14: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040ad17: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0040ad18: mov ecx, 0xa */ r_ecx = 0xau;
    /* 0040ad1d: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0040ad1d, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0040ad1d, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0040ad1f: mov esi, eax */ r_esi = r_eax;
    /* 0040ad21: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0040ad23: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x40ad28u); f_0062fbf0();
    /* 0040ad28: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040ad2b: sub eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0040ad2e: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040ad31: add esi, dword ptr [ebp - 0x4c] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xffffffb4u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0040ad34: mov dword ptr [ebp - 0x4c], esi */ W32((u32)(r_ebp+0xffffffb4u), r_esi);
    /* 0040ad37: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040ad3a: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0040ad3b: mov ecx, 5 */ r_ecx = 0x5u;
    /* 0040ad40: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0040ad40, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0040ad40, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0040ad42: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040ad45: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0040ad47: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0040ad4a: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040ad4d: cmp ecx, dword ptr [ebp - 0x24] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040ad50: jge 0x40ad5c */ if ((fS==fO)) goto L_0040ad5c;
L_0040ad52:; BB(0x0040ad52);
    /* 0040ad52: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040ad55: jmp 0x40afb7 */ goto L_0040afb7;
L_0040ad5c:; BB(0x0040ad5c);
    /* 0040ad5c: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040ad5f: cmp edx, dword ptr [ebp - 0x34] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffccu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040ad62: jle 0x40ad6e */ if ((fZ||fS!=fO)) goto L_0040ad6e;
L_0040ad64:; BB(0x0040ad64);
    /* 0040ad64: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0040ad67: jmp 0x40afb7 */ goto L_0040afb7;
L_0040ad6e:; BB(0x0040ad6e);
    /* 0040ad6e: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040ad71: jmp 0x40afb7 */ goto L_0040afb7;
L_0040ad78:; BB(0x0040ad78);
    /* 0040ad78: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0040ad7b: cmp eax, dword ptr [ebp - 0x24] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040ad7e: jge 0x40ad8a */ if ((fS==fO)) goto L_0040ad8a;
L_0040ad80:; BB(0x0040ad80);
    /* 0040ad80: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040ad83: jmp 0x40afb7 */ goto L_0040afb7;
L_0040ad8a:; BB(0x0040ad8a);
    /* 0040ad8a: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0040ad8d: cmp ecx, dword ptr [ebp - 0x34] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffccu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040ad90: jle 0x40ad9c */ if ((fZ||fS!=fO)) goto L_0040ad9c;
L_0040ad92:; BB(0x0040ad92);
    /* 0040ad92: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0040ad95: jmp 0x40afb7 */ goto L_0040afb7;
L_0040ad9c:; BB(0x0040ad9c);
    /* 0040ad9c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040ad9f: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0040ada0: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0040ada2: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0040ada4: cmp dword ptr [ebp - 0x40], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040ada7: jle 0x40adc0 */ if ((fZ||fS!=fO)) goto L_0040adc0;
L_0040ada9:; BB(0x0040ada9);
    /* 0040ada9: movzx edx, byte ptr [ebp - 0x19] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffe7u));
    /* 0040adad: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040adaf: jne 0x40adc0 */ if (!fZ) goto L_0040adc0;
L_0040adb1:; BB(0x0040adb1);
    /* 0040adb1: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040adb4: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0040adb5: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0040adb7: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0040adb9: jmp 0x40afb7 */ goto L_0040afb7;
L_0040adc0:; BB(0x0040adc0);
    /* 0040adc0: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0040adc3: jmp 0x40afb7 */ goto L_0040afb7;
L_0040adca:; BB(0x0040adca);
    /* 0040adca: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040adcd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040adce: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0040add1: call 0x40afe0 */ r_esp -= 4; W32(r_esp, 0x40add6u); f_0040afe0();
    /* 0040add6: imul eax, eax, 5 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x5u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040add9: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0040addc: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040addf: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0040ade0: mov ecx, 0xa */ r_ecx = 0xau;
    /* 0040ade5: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0040ade5, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0040ade5, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0040ade7: mov esi, eax */ r_esi = r_eax;
    /* 0040ade9: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0040adeb: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x40adf0u); f_0062fbf0();
    /* 0040adf0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040adf3: sub eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0040adf6: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040adf9: add esi, dword ptr [ebp - 0x4c] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xffffffb4u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0040adfc: mov dword ptr [ebp - 0x4c], esi */ W32((u32)(r_ebp+0xffffffb4u), r_esi);
    /* 0040adff: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040ae02: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0040ae03: mov ecx, 5 */ r_ecx = 0x5u;
    /* 0040ae08: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0040ae08, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0040ae08, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0040ae0a: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040ae0d: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0040ae0f: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0040ae12: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040ae15: cmp ecx, dword ptr [ebp - 0x24] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040ae18: jge 0x40ae24 */ if ((fS==fO)) goto L_0040ae24;
L_0040ae1a:; BB(0x0040ae1a);
    /* 0040ae1a: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040ae1d: jmp 0x40afb7 */ goto L_0040afb7;
L_0040ae24:; BB(0x0040ae24);
    /* 0040ae24: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040ae27: cmp edx, dword ptr [ebp - 0x34] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffccu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040ae2a: jle 0x40ae36 */ if ((fZ||fS!=fO)) goto L_0040ae36;
L_0040ae2c:; BB(0x0040ae2c);
    /* 0040ae2c: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0040ae2f: jmp 0x40afb7 */ goto L_0040afb7;
L_0040ae36:; BB(0x0040ae36);
    /* 0040ae36: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040ae39: jmp 0x40afb7 */ goto L_0040afb7;
L_0040ae43:; BB(0x0040ae43);
    /* 0040ae43: cmp dword ptr [ebp - 0x14], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040ae47: jge 0x40aee5 */ if ((fS==fO)) goto L_0040aee5;
L_0040ae4d:; BB(0x0040ae4d);
    /* 0040ae4d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040ae50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040ae51: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0040ae54: call 0x40afe0 */ r_esp -= 4; W32(r_esp, 0x40ae59u); f_0040afe0();
    /* 0040ae59: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0040ae5b: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0040ae5e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040ae61: shl ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0040ae63: cmp dword ptr [ebp - 0x4c], ecx */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ae66: jne 0x40ae7e */ if (!fZ) goto L_0040ae7e;
L_0040ae68:; BB(0x0040ae68);
    /* 0040ae68: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ae6a: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x40ae6fu); f_0062fbf0();
    /* 0040ae6f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040ae72: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ae74: jne 0x40ae7e */ if (!fZ) goto L_0040ae7e;
L_0040ae76:; BB(0x0040ae76);
    /* 0040ae76: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040ae79: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 0040ae7c: jmp 0x40aeb4 */ goto L_0040aeb4;
L_0040ae7e:; BB(0x0040ae7e);
    /* 0040ae7e: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040ae81: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0040ae82: mov ecx, 0xa */ r_ecx = 0xau;
    /* 0040ae87: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0040ae87, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0040ae87, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0040ae89: mov esi, eax */ r_esi = r_eax;
    /* 0040ae8b: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0040ae8d: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x40ae92u); f_0062fbf0();
    /* 0040ae92: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040ae95: sub eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0040ae98: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040ae9b: add esi, dword ptr [ebp - 0x4c] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xffffffb4u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0040ae9e: mov dword ptr [ebp - 0x4c], esi */ W32((u32)(r_ebp+0xffffffb4u), r_esi);
    /* 0040aea1: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040aea4: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0040aea5: mov ecx, 5 */ r_ecx = 0x5u;
    /* 0040aeaa: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0040aeaa, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0040aeaa, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0040aeac: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040aeaf: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0040aeb1: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
L_0040aeb4:; BB(0x0040aeb4);
    /* 0040aeb4: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040aeb7: cmp ecx, dword ptr [ebp - 0x24] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040aeba: jge 0x40aec6 */ if ((fS==fO)) goto L_0040aec6;
L_0040aebc:; BB(0x0040aebc);
    /* 0040aebc: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040aebf: jmp 0x40afb7 */ goto L_0040afb7;
L_0040aec6:; BB(0x0040aec6);
    /* 0040aec6: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040aec9: cmp edx, dword ptr [ebp - 0x34] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffccu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040aecc: jle 0x40aed8 */ if ((fZ||fS!=fO)) goto L_0040aed8;
L_0040aece:; BB(0x0040aece);
    /* 0040aece: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0040aed1: jmp 0x40afb7 */ goto L_0040afb7;
L_0040aed8:; BB(0x0040aed8);
    /* 0040aed8: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040aedb: jmp 0x40afb7 */ goto L_0040afb7;
L_0040aee5:; BB(0x0040aee5);
    /* 0040aee5: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040aee8: movzx ecx, byte ptr [eax + 0x4b0] */ r_ecx = (u32)R8((u32)(r_eax+0x4b0u));
    /* 0040aeef: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040aef1: je 0x40af41 */ if (fZ) goto L_0040af41;
L_0040aef3:; BB(0x0040aef3);
    /* 0040aef3: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0040aef6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040aef7: lea eax, [ebp - 0x64] */ r_eax = (u32)(r_ebp+0xffffff9cu);
    /* 0040aefa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040aefb: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0040af01: call 0x41a2d0 */ r_esp -= 4; W32(r_esp, 0x40af06u); f_0041a2d0();
    /* 0040af06: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0040af08: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0040af0b: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0040af0e: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 0040af11: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0040af14: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0040af16: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0040af19: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040af1c: cmp ecx, dword ptr [ebp - 0x24] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040af1f: jge 0x40af2b */ if ((fS==fO)) goto L_0040af2b;
L_0040af21:; BB(0x0040af21);
    /* 0040af21: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040af24: jmp 0x40afb7 */ goto L_0040afb7;
L_0040af2b:; BB(0x0040af2b);
    /* 0040af2b: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040af2e: cmp edx, dword ptr [ebp - 0x34] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffccu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040af31: jle 0x40af3a */ if ((fZ||fS!=fO)) goto L_0040af3a;
L_0040af33:; BB(0x0040af33);
    /* 0040af33: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0040af36: jmp 0x40afb7 */ goto L_0040afb7;
L_0040af3a:; BB(0x0040af3a);
    /* 0040af3a: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040af3d: jmp 0x40afb7 */ goto L_0040afb7;
L_0040af41:; BB(0x0040af41);
    /* 0040af41: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040af44: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040af45: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0040af48: call 0x40afe0 */ r_esp -= 4; W32(r_esp, 0x40af4du); f_0040afe0();
    /* 0040af4d: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0040af4f: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0040af52: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040af55: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0040af56: mov ecx, 0xa */ r_ecx = 0xau;
    /* 0040af5b: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0040af5b, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0040af5b, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0040af5d: mov esi, eax */ r_esi = r_eax;
    /* 0040af5f: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0040af61: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x40af66u); f_0062fbf0();
    /* 0040af66: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040af69: sub eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0040af6c: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040af6f: add esi, dword ptr [ebp - 0x4c] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xffffffb4u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0040af72: mov dword ptr [ebp - 0x4c], esi */ W32((u32)(r_ebp+0xffffffb4u), r_esi);
    /* 0040af75: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040af78: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0040af79: mov ecx, 5 */ r_ecx = 0x5u;
    /* 0040af7e: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0040af7e, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0040af7e, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0040af80: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040af83: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0040af85: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0040af88: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040af8b: cmp ecx, dword ptr [ebp - 0x24] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040af8e: jge 0x40af97 */ if ((fS==fO)) goto L_0040af97;
L_0040af90:; BB(0x0040af90);
    /* 0040af90: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040af93: jmp 0x40afb7 */ goto L_0040afb7;
L_0040af97:; BB(0x0040af97);
    /* 0040af97: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040af9a: cmp edx, dword ptr [ebp - 0x34] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffccu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040af9d: jle 0x40afa6 */ if ((fZ||fS!=fO)) goto L_0040afa6;
L_0040af9f:; BB(0x0040af9f);
    /* 0040af9f: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0040afa2: jmp 0x40afb7 */ goto L_0040afb7;
L_0040afa6:; BB(0x0040afa6);
    /* 0040afa6: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040afa9: jmp 0x40afb7 */ goto L_0040afb7;
L_0040afab:; BB(0x0040afab);
    /* 0040afab: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040afae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040afaf: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0040afb2: call 0x40afe0 */ r_esp -= 4; W32(r_esp, 0x40afb7u); f_0040afe0();
L_0040afb7:; BB(0x0040afb7);
    /* 0040afb7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0040afb8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0040afb9: mov esp, ebp */ r_esp = r_ebp;
    /* 0040afbb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040afbc: ret 4 */ FN_RET(0x0040a0b0); r_esp += 8; return;
}

void f_0040afe0(void) /* sub_40AFE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040afe0);
    /* 0040afe0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040afe1: mov ebp, esp */ r_ebp = r_esp;
    /* 0040afe3: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040afe6: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0040afe9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040afec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040afed: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x40aff2u); f_005dcb00();
    /* 0040aff2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040aff5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0040aff8: mov ecx, dword ptr [0x790320] */ r_ecx = R32((u32)(0x790320u));
    /* 0040affe: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0040b000: mov ecx, dword ptr [0x790320] */ r_ecx = R32((u32)(0x790320u));
    /* 0040b006: mov eax, dword ptr [edx + 0x2b0] */ r_eax = R32((u32)(r_edx+0x2b0u));
    /* 0040b00c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x40b00eu); call_ind(t); }
    /* 0040b00e: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0040b011: mov ecx, dword ptr [0x790320] */ r_ecx = R32((u32)(0x790320u));
    /* 0040b017: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x40b01cu); f_005da7b0();
    /* 0040b01c: mov byte ptr [ebp - 0xd], al */ W8((u32)(r_ebp+0xfffffff3u), (u8)r_eax);
    /* 0040b01f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040b022: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x40b027u); f_005d5a50();
    /* 0040b027: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0040b02a: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0040b030: mov edx, dword ptr [ecx + 0x4e0] */ r_edx = R32((u32)(r_ecx+0x4e0u));
    /* 0040b036: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0040b039: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040b03c: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040b03f: jle 0x40b089 */ if ((fZ||fS!=fO)) goto L_0040b089;
L_0040b041:; BB(0x0040b041);
    /* 0040b041: movzx ecx, byte ptr [ebp - 0xd] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffff3u));
    /* 0040b045: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040b047: jne 0x40b081 */ if (!fZ) goto L_0040b081;
L_0040b049:; BB(0x0040b049);
    /* 0040b049: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040b04c: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x40b051u); f_0063aac0();
    /* 0040b051: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040b053: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0040b056: cmp dword ptr [ebp - 0x18], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040b05a: je 0x40b078 */ if (fZ) goto L_0040b078;
L_0040b05c:; BB(0x0040b05c);
    /* 0040b05c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040b05f: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x40b064u); f_0063aac0();
    /* 0040b064: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0040b066: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0040b069: cmp dword ptr [ebp - 0x1c], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040b06d: je 0x40b078 */ if (fZ) goto L_0040b078;
L_0040b06f:; BB(0x0040b06f);
    /* 0040b06f: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0040b076: jmp 0x40b07f */ goto L_0040b07f;
L_0040b078:; BB(0x0040b078);
    /* 0040b078: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
L_0040b07f:; BB(0x0040b07f);
    /* 0040b07f: jmp 0x40b089 */ goto L_0040b089;
L_0040b081:; BB(0x0040b081);
    /* 0040b081: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040b084: jmp 0x40b1ba */ goto L_0040b1ba;
L_0040b089:; BB(0x0040b089);
    /* 0040b089: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040b08d: jge 0x40b09c */ if ((fS==fO)) goto L_0040b09c;
L_0040b08f:; BB(0x0040b08f);
    /* 0040b08f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040b092: jmp 0x40b1ba */ goto L_0040b1ba;
L_0040b09c:; BB(0x0040b09c);
    /* 0040b09c: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040b0a0: jne 0x40b0c5 */ if (!fZ) goto L_0040b0c5;
L_0040b0a2:; BB(0x0040b0a2);
    /* 0040b0a2: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040b0a5: shl edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0040b0a7: cmp edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040b0aa: jle 0x40b0b6 */ if ((fZ||fS!=fO)) goto L_0040b0b6;
L_0040b0ac:; BB(0x0040b0ac);
    /* 0040b0ac: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040b0af: jmp 0x40b1ba */ goto L_0040b1ba;
L_0040b0b6:; BB(0x0040b0b6);
    /* 0040b0b6: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040b0b9: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0040b0bb: jmp 0x40b1ba */ goto L_0040b1ba;
L_0040b0c5:; BB(0x0040b0c5);
    /* 0040b0c5: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040b0c9: jge 0x40b0eb */ if ((fS==fO)) goto L_0040b0eb;
L_0040b0cb:; BB(0x0040b0cb);
    /* 0040b0cb: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040b0ce: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040b0d1: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040b0d4: jle 0x40b0e0 */ if ((fZ||fS!=fO)) goto L_0040b0e0;
L_0040b0d6:; BB(0x0040b0d6);
    /* 0040b0d6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040b0d9: jmp 0x40b1ba */ goto L_0040b1ba;
L_0040b0e0:; BB(0x0040b0e0);
    /* 0040b0e0: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040b0e3: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040b0e6: jmp 0x40b1ba */ goto L_0040b1ba;
L_0040b0eb:; BB(0x0040b0eb);
    /* 0040b0eb: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040b0ef: jne 0x40b111 */ if (!fZ) goto L_0040b111;
L_0040b0f1:; BB(0x0040b0f1);
    /* 0040b0f1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040b0f4: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0040b0f7: cmp ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040b0fa: jle 0x40b106 */ if ((fZ||fS!=fO)) goto L_0040b106;
L_0040b0fc:; BB(0x0040b0fc);
    /* 0040b0fc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040b0ff: jmp 0x40b1ba */ goto L_0040b1ba;
L_0040b106:; BB(0x0040b106);
    /* 0040b106: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040b109: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0040b10c: jmp 0x40b1ba */ goto L_0040b1ba;
L_0040b111:; BB(0x0040b111);
    /* 0040b111: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040b115: jne 0x40b137 */ if (!fZ) goto L_0040b137;
L_0040b117:; BB(0x0040b117);
    /* 0040b117: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040b11a: imul edx, edx, 6 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x6u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040b11d: cmp edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040b120: jle 0x40b12c */ if ((fZ||fS!=fO)) goto L_0040b12c;
L_0040b122:; BB(0x0040b122);
    /* 0040b122: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040b125: jmp 0x40b1ba */ goto L_0040b1ba;
L_0040b12c:; BB(0x0040b12c);
    /* 0040b12c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040b12f: imul eax, eax, 6 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x6u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040b132: jmp 0x40b1ba */ goto L_0040b1ba;
L_0040b137:; BB(0x0040b137);
    /* 0040b137: cmp dword ptr [ebp - 8], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040b13b: jne 0x40b157 */ if (!fZ) goto L_0040b157;
L_0040b13d:; BB(0x0040b13d);
    /* 0040b13d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040b140: imul eax, eax, 6 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x6u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040b143: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040b146: jle 0x40b14f */ if ((fZ||fS!=fO)) goto L_0040b14f;
L_0040b148:; BB(0x0040b148);
    /* 0040b148: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040b14b: jmp 0x40b1ba */ goto L_0040b1ba;
L_0040b14f:; BB(0x0040b14f);
    /* 0040b14f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040b152: imul eax, eax, 6 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x6u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040b155: jmp 0x40b1ba */ goto L_0040b1ba;
L_0040b157:; BB(0x0040b157);
    /* 0040b157: cmp dword ptr [ebp - 8], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040b15b: jne 0x40b177 */ if (!fZ) goto L_0040b177;
L_0040b15d:; BB(0x0040b15d);
    /* 0040b15d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040b160: shl ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0040b163: cmp ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040b166: jle 0x40b16f */ if ((fZ||fS!=fO)) goto L_0040b16f;
L_0040b168:; BB(0x0040b168);
    /* 0040b168: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040b16b: jmp 0x40b1ba */ goto L_0040b1ba;
L_0040b16f:; BB(0x0040b16f);
    /* 0040b16f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040b172: shl eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0040b175: jmp 0x40b1ba */ goto L_0040b1ba;
L_0040b177:; BB(0x0040b177);
    /* 0040b177: cmp dword ptr [ebp - 8], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040b17b: jne 0x40b197 */ if (!fZ) goto L_0040b197;
L_0040b17d:; BB(0x0040b17d);
    /* 0040b17d: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040b180: imul edx, edx, 0xa */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xau; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040b183: cmp edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040b186: jle 0x40b18f */ if ((fZ||fS!=fO)) goto L_0040b18f;
L_0040b188:; BB(0x0040b188);
    /* 0040b188: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040b18b: jmp 0x40b1ba */ goto L_0040b1ba;
L_0040b18f:; BB(0x0040b18f);
    /* 0040b18f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040b192: imul eax, eax, 0xa */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xau; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040b195: jmp 0x40b1ba */ goto L_0040b1ba;
L_0040b197:; BB(0x0040b197);
    /* 0040b197: cmp dword ptr [ebp - 8], 9 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040b19b: jl 0x40b1b7 */ if ((fS!=fO)) goto L_0040b1b7;
L_0040b19d:; BB(0x0040b19d);
    /* 0040b19d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040b1a0: imul eax, eax, 0xc */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xcu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040b1a3: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040b1a6: jle 0x40b1af */ if ((fZ||fS!=fO)) goto L_0040b1af;
L_0040b1a8:; BB(0x0040b1a8);
    /* 0040b1a8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040b1ab: jmp 0x40b1ba */ goto L_0040b1ba;
L_0040b1af:; BB(0x0040b1af);
    /* 0040b1af: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040b1b2: imul eax, eax, 0xc */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xcu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040b1b5: jmp 0x40b1ba */ goto L_0040b1ba;
L_0040b1b7:; BB(0x0040b1b7);
    /* 0040b1b7: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
L_0040b1ba:; BB(0x0040b1ba);
    /* 0040b1ba: mov esp, ebp */ r_esp = r_ebp;
    /* 0040b1bc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040b1bd: ret 4 */ FN_RET(0x0040afe0); r_esp += 8; return;
}

