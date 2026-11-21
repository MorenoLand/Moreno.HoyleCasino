#include "protos.h"

void f_0059a750(void) /* bigraiseai::func_0059a750 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0059a750);
    /* 0059a750: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059a751: mov ebp, esp */ r_ebp = r_esp;
    /* 0059a753: sub esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0059a756: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0059a757: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0059a75a: mov eax, dword ptr [0x7935cc] */ r_eax = R32((u32)(0x7935ccu));
    /* 0059a75f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0059a761: mov ecx, dword ptr [0x7935cc] */ r_ecx = R32((u32)(0x7935ccu));
    /* 0059a767: mov eax, dword ptr [edx + 0x2b0] */ r_eax = R32((u32)(r_edx+0x2b0u));
    /* 0059a76d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59a76fu); call_ind(t); }
    /* 0059a76f: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0059a772: mov ecx, dword ptr [0x7935cc] */ r_ecx = R32((u32)(0x7935ccu));
    /* 0059a778: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0059a77a: mov ecx, dword ptr [0x7935cc] */ r_ecx = R32((u32)(0x7935ccu));
    /* 0059a780: mov eax, dword ptr [edx + 0x2b4] */ r_eax = R32((u32)(r_edx+0x2b4u));
    /* 0059a786: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59a788u); call_ind(t); }
    /* 0059a788: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0059a78b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0059a78e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059a78f: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x59a794u); f_005dcb00();
    /* 0059a794: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059a797: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0059a79a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0059a79d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0059a79f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0059a7a2: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0059a7a5: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x59a7a7u); call_ind(t); }
    /* 0059a7a7: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0059a7aa: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0059a7ad: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0059a7b0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0059a7b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059a7b4: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x59a7b9u); f_005dcb00();
    /* 0059a7b9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059a7bc: mov edx, dword ptr [eax + 0x4a8] */ r_edx = R32((u32)(r_eax+0x4a8u));
    /* 0059a7c2: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0059a7c5: cmp dword ptr [ebp - 0x10], -4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xfffffffcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059a7c9: jge 0x59a7dd */ if ((fS==fO)) goto L_0059a7dd;
L_0059a7cb:; BB(0x0059a7cb);
    /* 0059a7cb: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0059a7cd: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x59a7d2u); f_0062fbf0();
    /* 0059a7d2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059a7d5: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0059a7d8: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0059a7da: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0059a7dd:; BB(0x0059a7dd);
    /* 0059a7dd: mov esi, dword ptr [ebp - 8] */ r_esi = R32((u32)(r_ebp+0xfffffff8u));
    /* 0059a7e0: imul esi, dword ptr [ebp - 0x14] */ { i64 t = (i64)(i32)r_esi * (i64)(i32)R32((u32)(r_ebp+0xffffffecu)); r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0059a7e4: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0059a7e6: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x59a7ebu); f_0062fbf0();
    /* 0059a7eb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059a7ee: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0059a7f1: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0059a7f4: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 0059a7f7: fild dword ptr [ebp - 0x28] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd8u)));
    /* 0059a7fa: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0059a7fc: fstp qword ptr [ebp - 0x30] */ W_F64((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 0059a7ff: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x59a804u); f_0062fbf0();
    /* 0059a804: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059a807: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0059a80a: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0059a80d: fild dword ptr [ebp - 0x34] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffccu)));
    /* 0059a810: fdivr qword ptr [ebp - 0x30] */ ST(0) = R_F64((u32)(r_ebp+0xffffffd0u)) / ST(0);
    /* 0059a813: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0059a816: imul edx, dword ptr [ebp - 8] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ebp+0xfffffff8u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0059a81a: imul edx, dword ptr [ebp - 0x14] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ebp+0xffffffecu)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0059a81e: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 0059a821: fild dword ptr [ebp - 0x38] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc8u)));
    /* 0059a824: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0059a826: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0059a828: fstp qword ptr [ebp - 0x40] */ W_F64((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 0059a82b: fstp qword ptr [ebp - 0x48] */ W_F64((u32)(r_ebp+0xffffffb8u), ST(0)); FPOP();
    /* 0059a82e: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x59a833u); f_0062fbf0();
    /* 0059a833: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059a836: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0059a839: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0059a83c: fild dword ptr [ebp - 0x4c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb4u)));
    /* 0059a83f: fdivr qword ptr [ebp - 0x48] */ ST(0) = R_F64((u32)(r_ebp+0xffffffb8u)) / ST(0);
    /* 0059a842: fadd qword ptr [ebp - 0x40] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xffffffc0u));
    /* 0059a845: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x59a84au); f_00686cc0();
    /* 0059a84a: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0059a84b: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0059a84d: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0059a84f: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0059a852: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059a855: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0059a856: mov ecx, 5 */ r_ecx = 0x5u;
    /* 0059a85b: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0059a85b, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0059a85b, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0059a85d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059a85f: je 0x59a879 */ if (fZ) goto L_0059a879;
L_0059a861:; BB(0x0059a861);
    /* 0059a861: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059a864: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0059a865: mov ecx, 5 */ r_ecx = 0x5u;
    /* 0059a86a: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0059a86a, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0059a86a, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0059a86c: mov eax, 5 */ r_eax = 0x5u;
    /* 0059a871: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0059a873: add eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0059a876: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_0059a879:; BB(0x0059a879);
    /* 0059a879: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059a87c: cmp ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059a87f: jge 0x59a889 */ if ((fS==fO)) goto L_0059a889;
L_0059a881:; BB(0x0059a881);
    /* 0059a881: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0059a884: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0059a887: jmp 0x59a897 */ goto L_0059a897;
L_0059a889:; BB(0x0059a889);
    /* 0059a889: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059a88c: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059a88f: jle 0x59a897 */ if ((fZ||fS!=fO)) goto L_0059a897;
L_0059a891:; BB(0x0059a891);
    /* 0059a891: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059a894: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_0059a897:; BB(0x0059a897);
    /* 0059a897: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059a89a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059a89b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0059a89e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059a89f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0059a8a2: call 0x59a6c0 */ r_esp -= 4; W32(r_esp, 0x59a8a7u); f_0059a6c0();
    /* 0059a8a7: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0059a8aa: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059a8ac: jne 0x59a8b9 */ if (!fZ) goto L_0059a8b9;
L_0059a8ae:; BB(0x0059a8ae);
    /* 0059a8ae: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059a8b1: sub edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0059a8b4: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0059a8b7: jmp 0x59a897 */ goto L_0059a897;
L_0059a8b9:; BB(0x0059a8b9);
    /* 0059a8b9: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059a8bc: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059a8bf: jge 0x59a8c8 */ if ((fS==fO)) goto L_0059a8c8;
L_0059a8c1:; BB(0x0059a8c1);
    /* 0059a8c1: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
L_0059a8c8:; BB(0x0059a8c8);
    /* 0059a8c8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059a8cb: cmp ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059a8ce: jle 0x59a8e4 */ if ((fZ||fS!=fO)) goto L_0059a8e4;
L_0059a8d0:; BB(0x0059a8d0);
    /* 0059a8d0: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 0059a8d2: push 0x6cebe4 */ { u32 v = 0x6cebe4u; r_esp -= 4; W32(r_esp, v); }
    /* 0059a8d7: push 0x6c59b4 */ { u32 v = 0x6c59b4u; r_esp -= 4; W32(r_esp, v); }
    /* 0059a8dc: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x59a8e1u); f_005e9f20();
    /* 0059a8e1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0059a8e4:; BB(0x0059a8e4);
    /* 0059a8e4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059a8e6: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059a8e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059a8ea: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x59a8efu); f_0064c8a0();
    /* 0059a8ef: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059a8f2: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0059a8f5: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0059a8f8: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0059a8fb: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0059a8fe: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0059a900: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0059a903: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0059a906: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059a907: mov esp, ebp */ r_esp = r_ebp;
    /* 0059a909: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059a90a: ret 8 */ FN_RET(0x0059a750); r_esp += 12; return;
}

void f_0059a960(void) /* bigraiseai::func_0059a960 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0059a960);
    /* 0059a960: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059a961: mov ebp, esp */ r_ebp = r_esp;
    /* 0059a963: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0059a966: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0059a969: mov eax, dword ptr [0x7935cc] */ r_eax = R32((u32)(0x7935ccu));
    /* 0059a96e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0059a970: mov ecx, dword ptr [0x7935cc] */ r_ecx = R32((u32)(0x7935ccu));
    /* 0059a976: mov eax, dword ptr [edx + 0x2b0] */ r_eax = R32((u32)(r_edx+0x2b0u));
    /* 0059a97c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59a97eu); call_ind(t); }
    /* 0059a97e: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0059a981: mov ecx, dword ptr [0x7935cc] */ r_ecx = R32((u32)(0x7935ccu));
    /* 0059a987: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0059a989: mov ecx, dword ptr [0x7935cc] */ r_ecx = R32((u32)(0x7935ccu));
    /* 0059a98f: mov eax, dword ptr [edx + 0x2b4] */ r_eax = R32((u32)(r_edx+0x2b4u));
    /* 0059a995: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59a997u); call_ind(t); }
    /* 0059a997: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0059a99a: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0059a99d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0059a99f: imul edx, edx, 3 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x3u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0059a9a2: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0059a9a5: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059a9a8: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0059a9a9: mov ecx, 5 */ r_ecx = 0x5u;
    /* 0059a9ae: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0059a9ae, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0059a9ae, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0059a9b0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059a9b2: je 0x59a9cc */ if (fZ) goto L_0059a9cc;
L_0059a9b4:; BB(0x0059a9b4);
    /* 0059a9b4: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059a9b7: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0059a9b8: mov ecx, 5 */ r_ecx = 0x5u;
    /* 0059a9bd: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0059a9bd, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0059a9bd, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0059a9bf: mov eax, 5 */ r_eax = 0x5u;
    /* 0059a9c4: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0059a9c6: add eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0059a9c9: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_0059a9cc:; BB(0x0059a9cc);
    /* 0059a9cc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059a9cf: cmp ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059a9d2: jge 0x59a9dc */ if ((fS==fO)) goto L_0059a9dc;
L_0059a9d4:; BB(0x0059a9d4);
    /* 0059a9d4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0059a9d7: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0059a9da: jmp 0x59a9ea */ goto L_0059a9ea;
L_0059a9dc:; BB(0x0059a9dc);
    /* 0059a9dc: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059a9df: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059a9e2: jle 0x59a9ea */ if ((fZ||fS!=fO)) goto L_0059a9ea;
L_0059a9e4:; BB(0x0059a9e4);
    /* 0059a9e4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059a9e7: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_0059a9ea:; BB(0x0059a9ea);
    /* 0059a9ea: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059a9ed: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059a9ee: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0059a9f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059a9f2: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0059a9f5: call 0x59a6c0 */ r_esp -= 4; W32(r_esp, 0x59a9fau); f_0059a6c0();
    /* 0059a9fa: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0059a9fd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059a9ff: jne 0x59aa0c */ if (!fZ) goto L_0059aa0c;
L_0059aa01:; BB(0x0059aa01);
    /* 0059aa01: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059aa04: sub edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0059aa07: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0059aa0a: jmp 0x59a9ea */ goto L_0059a9ea;
L_0059aa0c:; BB(0x0059aa0c);
    /* 0059aa0c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059aa0f: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059aa12: jge 0x59aa1b */ if ((fS==fO)) goto L_0059aa1b;
L_0059aa14:; BB(0x0059aa14);
    /* 0059aa14: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
L_0059aa1b:; BB(0x0059aa1b);
    /* 0059aa1b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059aa1e: cmp ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059aa21: jle 0x59aa37 */ if ((fZ||fS!=fO)) goto L_0059aa37;
L_0059aa23:; BB(0x0059aa23);
    /* 0059aa23: push 0x73 */ { u32 v = 0x73u; r_esp -= 4; W32(r_esp, v); }
    /* 0059aa25: push 0x6cebe4 */ { u32 v = 0x6cebe4u; r_esp -= 4; W32(r_esp, v); }
    /* 0059aa2a: push 0x6c59b4 */ { u32 v = 0x6c59b4u; r_esp -= 4; W32(r_esp, v); }
    /* 0059aa2f: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x59aa34u); f_005e9f20();
    /* 0059aa34: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0059aa37:; BB(0x0059aa37);
    /* 0059aa37: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059aa39: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059aa3c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059aa3d: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x59aa42u); f_0064c8a0();
    /* 0059aa42: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059aa45: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0059aa48: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0059aa4b: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0059aa4e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0059aa51: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0059aa53: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0059aa56: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0059aa59: mov esp, ebp */ r_esp = r_ebp;
    /* 0059aa5b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059aa5c: ret 0xc */ FN_RET(0x0059a960); r_esp += 16; return;
}

void f_0059aa60(void) /* bigraiseai::func_0059aa60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0059aa60);
    /* 0059aa60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059aa61: mov ebp, esp */ r_ebp = r_esp;
    /* 0059aa63: sub esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0059aa66: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0059aa67: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0059aa6a: mov eax, dword ptr [0x7935cc] */ r_eax = R32((u32)(0x7935ccu));
    /* 0059aa6f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0059aa71: mov ecx, dword ptr [0x7935cc] */ r_ecx = R32((u32)(0x7935ccu));
    /* 0059aa77: mov eax, dword ptr [edx + 0x2b0] */ r_eax = R32((u32)(r_edx+0x2b0u));
    /* 0059aa7d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59aa7fu); call_ind(t); }
    /* 0059aa7f: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0059aa82: mov ecx, dword ptr [0x7935cc] */ r_ecx = R32((u32)(0x7935ccu));
    /* 0059aa88: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0059aa8a: mov ecx, dword ptr [0x7935cc] */ r_ecx = R32((u32)(0x7935ccu));
    /* 0059aa90: mov eax, dword ptr [edx + 0x2b4] */ r_eax = R32((u32)(r_edx+0x2b4u));
    /* 0059aa96: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59aa98u); call_ind(t); }
    /* 0059aa98: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0059aa9b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0059aa9e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059aa9f: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x59aaa4u); f_005dcb00();
    /* 0059aaa4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059aaa7: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0059aaaa: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0059aaad: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0059aaaf: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0059aab2: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0059aab5: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x59aab7u); call_ind(t); }
    /* 0059aab7: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0059aaba: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0059aabd: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0059aac0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0059aac3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059aac4: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x59aac9u); f_005dcb00();
    /* 0059aac9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059aacc: mov edx, dword ptr [eax + 0x4a8] */ r_edx = R32((u32)(r_eax+0x4a8u));
    /* 0059aad2: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0059aad5: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0059aad7: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x59aadcu); f_0062fbf0();
    /* 0059aadc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059aadf: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059aae2: jge 0x59ac3f */ if ((fS==fO)) goto L_0059ac3f;
L_0059aae8:; BB(0x0059aae8);
    /* 0059aae8: mov esi, dword ptr [ebp - 8] */ r_esi = R32((u32)(r_ebp+0xfffffff8u));
    /* 0059aaeb: imul esi, dword ptr [ebp - 0x14] */ { i64 t = (i64)(i32)r_esi * (i64)(i32)R32((u32)(r_ebp+0xffffffecu)); r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0059aaef: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0059aaf1: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x59aaf6u); f_0062fbf0();
    /* 0059aaf6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059aaf9: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0059aafc: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0059aaff: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 0059ab02: fild dword ptr [ebp - 0x28] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd8u)));
    /* 0059ab05: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0059ab07: fstp qword ptr [ebp - 0x30] */ W_F64((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 0059ab0a: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x59ab0fu); f_0062fbf0();
    /* 0059ab0f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059ab12: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0059ab15: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0059ab18: fild dword ptr [ebp - 0x34] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffccu)));
    /* 0059ab1b: fdivr qword ptr [ebp - 0x30] */ ST(0) = R_F64((u32)(r_ebp+0xffffffd0u)) / ST(0);
    /* 0059ab1e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0059ab21: imul eax, dword ptr [ebp - 8] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xfffffff8u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0059ab25: imul eax, dword ptr [ebp - 0x14] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xffffffecu)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0059ab29: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0059ab2c: fild dword ptr [ebp - 0x38] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc8u)));
    /* 0059ab2f: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0059ab31: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0059ab33: fstp qword ptr [ebp - 0x40] */ W_F64((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 0059ab36: fstp qword ptr [ebp - 0x48] */ W_F64((u32)(r_ebp+0xffffffb8u), ST(0)); FPOP();
    /* 0059ab39: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x59ab3eu); f_0062fbf0();
    /* 0059ab3e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059ab41: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0059ab44: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0059ab47: fild dword ptr [ebp - 0x4c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb4u)));
    /* 0059ab4a: fdivr qword ptr [ebp - 0x48] */ ST(0) = R_F64((u32)(r_ebp+0xffffffb8u)) / ST(0);
    /* 0059ab4d: fadd qword ptr [ebp - 0x40] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xffffffc0u));
    /* 0059ab50: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x59ab55u); f_00686cc0();
    /* 0059ab55: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0059ab58: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0059ab5a: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x59ab5fu); f_0062fbf0();
    /* 0059ab5f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059ab62: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059ab65: jne 0x59ab77 */ if (!fZ) goto L_0059ab77;
L_0059ab67:; BB(0x0059ab67);
    /* 0059ab67: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059ab6a: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0059ab6b: mov ecx, 3 */ r_ecx = 0x3u;
    /* 0059ab70: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0059ab70, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0059ab70, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0059ab72: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 0059ab75: jmp 0x59ab82 */ goto L_0059ab82;
L_0059ab77:; BB(0x0059ab77);
    /* 0059ab77: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059ab7a: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0059ab7b: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0059ab7d: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0059ab7f: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
L_0059ab82:; BB(0x0059ab82);
    /* 0059ab82: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0059ab85: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0059ab88: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059ab8b: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0059ab8c: mov ecx, 5 */ r_ecx = 0x5u;
    /* 0059ab91: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0059ab91, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0059ab91, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0059ab93: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059ab95: je 0x59abaf */ if (fZ) goto L_0059abaf;
L_0059ab97:; BB(0x0059ab97);
    /* 0059ab97: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059ab9a: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0059ab9b: mov ecx, 5 */ r_ecx = 0x5u;
    /* 0059aba0: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0059aba0, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0059aba0, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0059aba2: mov eax, 5 */ r_eax = 0x5u;
    /* 0059aba7: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0059aba9: add eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0059abac: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_0059abaf:; BB(0x0059abaf);
    /* 0059abaf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059abb2: cmp ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059abb5: jge 0x59abbf */ if ((fS==fO)) goto L_0059abbf;
L_0059abb7:; BB(0x0059abb7);
    /* 0059abb7: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0059abba: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0059abbd: jmp 0x59abcd */ goto L_0059abcd;
L_0059abbf:; BB(0x0059abbf);
    /* 0059abbf: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059abc2: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059abc5: jle 0x59abcd */ if ((fZ||fS!=fO)) goto L_0059abcd;
L_0059abc7:; BB(0x0059abc7);
    /* 0059abc7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059abca: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_0059abcd:; BB(0x0059abcd);
    /* 0059abcd: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059abd0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059abd1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0059abd4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059abd5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0059abd8: call 0x59a6c0 */ r_esp -= 4; W32(r_esp, 0x59abddu); f_0059a6c0();
    /* 0059abdd: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0059abe0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059abe2: jne 0x59abef */ if (!fZ) goto L_0059abef;
L_0059abe4:; BB(0x0059abe4);
    /* 0059abe4: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059abe7: sub edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0059abea: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0059abed: jmp 0x59abcd */ goto L_0059abcd;
L_0059abef:; BB(0x0059abef);
    /* 0059abef: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059abf2: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059abf5: jge 0x59abfe */ if ((fS==fO)) goto L_0059abfe;
L_0059abf7:; BB(0x0059abf7);
    /* 0059abf7: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
L_0059abfe:; BB(0x0059abfe);
    /* 0059abfe: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059ac01: cmp ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059ac04: jle 0x59ac1d */ if ((fZ||fS!=fO)) goto L_0059ac1d;
L_0059ac06:; BB(0x0059ac06);
    /* 0059ac06: push 0x9b */ { u32 v = 0x9bu; r_esp -= 4; W32(r_esp, v); }
    /* 0059ac0b: push 0x6cebe4 */ { u32 v = 0x6cebe4u; r_esp -= 4; W32(r_esp, v); }
    /* 0059ac10: push 0x6c59b4 */ { u32 v = 0x6c59b4u; r_esp -= 4; W32(r_esp, v); }
    /* 0059ac15: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x59ac1au); f_005e9f20();
    /* 0059ac1a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0059ac1d:; BB(0x0059ac1d);
    /* 0059ac1d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059ac1f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059ac22: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059ac23: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x59ac28u); f_0064c8a0();
    /* 0059ac28: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059ac2b: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0059ac2e: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0059ac31: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0059ac34: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0059ac37: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0059ac39: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0059ac3c: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
L_0059ac3f:; BB(0x0059ac3f);
    /* 0059ac3f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059ac40: mov esp, ebp */ r_esp = r_ebp;
    /* 0059ac42: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059ac43: ret 8 */ FN_RET(0x0059aa60); r_esp += 12; return;
}

void f_0059ac50(void) /* bigraiseai::func_0059ac50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0059ac50);
    /* 0059ac50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059ac51: mov ebp, esp */ r_ebp = r_esp;
    /* 0059ac53: sub esp, 0x78 */ {  u32 a = r_esp; u32 b = 0x78u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0059ac56: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0059ac57: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 0059ac5a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0059ac5d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059ac5e: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x59ac63u); f_005dcb00();
    /* 0059ac63: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059ac66: mov ecx, eax */ r_ecx = r_eax;
    /* 0059ac68: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x59ac6du); f_005d5a50();
    /* 0059ac6d: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0059ac70: mov ecx, dword ptr [0x7935cc] */ r_ecx = R32((u32)(0x7935ccu));
    /* 0059ac76: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0059ac78: mov ecx, dword ptr [0x7935cc] */ r_ecx = R32((u32)(0x7935ccu));
    /* 0059ac7e: mov eax, dword ptr [edx + 0x2b0] */ r_eax = R32((u32)(r_edx+0x2b0u));
    /* 0059ac84: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59ac86u); call_ind(t); }
    /* 0059ac86: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0059ac89: mov ecx, dword ptr [0x7935cc] */ r_ecx = R32((u32)(0x7935ccu));
    /* 0059ac8f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0059ac91: mov ecx, dword ptr [0x7935cc] */ r_ecx = R32((u32)(0x7935ccu));
    /* 0059ac97: mov eax, dword ptr [edx + 0x2b4] */ r_eax = R32((u32)(r_edx+0x2b4u));
    /* 0059ac9d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59ac9fu); call_ind(t); }
    /* 0059ac9f: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0059aca2: mov ecx, dword ptr [0x7935cc] */ r_ecx = R32((u32)(0x7935ccu));
    /* 0059aca8: call 0x5da8a0 */ r_esp -= 4; W32(r_esp, 0x59acadu); f_005da8a0();
    /* 0059acad: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0059acb0: mov ecx, dword ptr [0x7935cc] */ r_ecx = R32((u32)(0x7935ccu));
    /* 0059acb6: call 0x5dac90 */ r_esp -= 4; W32(r_esp, 0x59acbbu); f_005dac90();
    /* 0059acbb: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0059acbe: mov ecx, dword ptr [0x7935cc] */ r_ecx = R32((u32)(0x7935ccu));
    /* 0059acc4: call 0x5da8c0 */ r_esp -= 4; W32(r_esp, 0x59acc9u); f_005da8c0();
    /* 0059acc9: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0059accc: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 0059accf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059acd0: mov ecx, dword ptr [0x7935cc] */ r_ecx = R32((u32)(0x7935ccu));
    /* 0059acd6: call 0x5daa20 */ r_esp -= 4; W32(r_esp, 0x59acdbu); f_005daa20();
    /* 0059acdb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0059acdd: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0059ace0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0059ace3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059ace4: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x59ace9u); f_005dcb00();
    /* 0059ace9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059acec: mov ecx, dword ptr [eax + 0x4a8] */ r_ecx = R32((u32)(r_eax+0x4a8u));
    /* 0059acf2: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0059acf5: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0059acfc: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0059ad03: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0059ad06: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059ad07: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x59ad0cu); f_005dcb00();
    /* 0059ad0c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059ad0f: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 0059ad12: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 0059ad15: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0059ad17: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0059ad1a: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0059ad1d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59ad1fu); call_ind(t); }
    /* 0059ad1f: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0059ad22: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0059ad25: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0059ad28: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0059ad2b: cmp edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059ad2e: jl 0x59ad38 */ if ((fS!=fO)) goto L_0059ad38;
L_0059ad30:; BB(0x0059ad30);
    /* 0059ad30: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0059ad33: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0059ad36: jmp 0x59ad3e */ goto L_0059ad3e;
L_0059ad38:; BB(0x0059ad38);
    /* 0059ad38: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0059ad3b: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_0059ad3e:; BB(0x0059ad3e);
    /* 0059ad3e: cmp dword ptr [ebp - 0x28], -4 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0xfffffffcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059ad42: jge 0x59ad56 */ if ((fS==fO)) goto L_0059ad56;
L_0059ad44:; BB(0x0059ad44);
    /* 0059ad44: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0059ad46: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x59ad4bu); f_0062fbf0();
    /* 0059ad4b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059ad4e: or edx, 0xffffffff */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0059ad51: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0059ad53: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
L_0059ad56:; BB(0x0059ad56);
    /* 0059ad56: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059ad59: sub eax, dword ptr [ebp - 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0059ad5c: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059ad5f: jge 0x59aea8 */ if ((fS==fO)) goto L_0059aea8;
L_0059ad65:; BB(0x0059ad65);
    /* 0059ad65: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059ad68: cmp ecx, dword ptr [ebp - 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059ad6b: jne 0x59ad8e */ if (!fZ) goto L_0059ad8e;
L_0059ad6d:; BB(0x0059ad6d);
    /* 0059ad6d: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0059ad70: cmp edx, dword ptr [ebp - 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059ad73: jge 0x59ad8e */ if ((fS==fO)) goto L_0059ad8e;
L_0059ad75:; BB(0x0059ad75);
    /* 0059ad75: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0059ad78: sub eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0059ad7b: cmp eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059ad7e: jg 0x59ad8e */ if ((!fZ&&fS==fO)) goto L_0059ad8e;
L_0059ad80:; BB(0x0059ad80);
    /* 0059ad80: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0059ad83: sub ecx, dword ptr [ebp - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0059ad86: add ecx, dword ptr [ebp - 0x1c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0059ad89: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 0059ad8c: jmp 0x59adeb */ goto L_0059adeb;
L_0059ad8e:; BB(0x0059ad8e);
    /* 0059ad8e: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0059ad91: cmp edx, dword ptr [ebp - 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059ad94: jge 0x59adeb */ if ((fS==fO)) goto L_0059adeb;
L_0059ad96:; BB(0x0059ad96);
    /* 0059ad96: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0059ad99: sub eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0059ad9c: cmp eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059ad9f: jg 0x59adc0 */ if ((!fZ&&fS==fO)) goto L_0059adc0;
L_0059ada1:; BB(0x0059ada1);
    /* 0059ada1: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0059ada4: sub esi, dword ptr [ebp - 0x10] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0059ada7: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0059ada9: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x59adaeu); f_0062fbf0();
    /* 0059adae: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059adb1: mov ecx, eax */ r_ecx = r_eax;
    /* 0059adb3: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0059adb6: mov eax, esi */ r_eax = r_esi;
    /* 0059adb8: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0059adb9: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0059adb9, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0059adb9, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0059adbb: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0059adbe: jmp 0x59adeb */ goto L_0059adeb;
L_0059adc0:; BB(0x0059adc0);
    /* 0059adc0: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0059adc3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059adc4: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0059adc7: call 0x59b420 */ r_esp -= 4; W32(r_esp, 0x59adccu); f_0059b420();
    /* 0059adcc: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0059adcf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059add1: je 0x59adeb */ if (fZ) goto L_0059adeb;
L_0059add3:; BB(0x0059add3);
    /* 0059add3: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0059add5: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x59addau); f_0062fbf0();
    /* 0059adda: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059addd: mov ecx, eax */ r_ecx = r_eax;
    /* 0059addf: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0059ade2: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059ade5: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0059ade6: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0059ade6, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0059ade6, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0059ade8: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
L_0059adeb:; BB(0x0059adeb);
    /* 0059adeb: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0059adee: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0059adef: mov ecx, 5 */ r_ecx = 0x5u;
    /* 0059adf4: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0059adf4, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0059adf4, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0059adf6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059adf8: je 0x59ae12 */ if (fZ) goto L_0059ae12;
L_0059adfa:; BB(0x0059adfa);
    /* 0059adfa: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0059adfd: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0059adfe: mov ecx, 5 */ r_ecx = 0x5u;
    /* 0059ae03: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0059ae03, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0059ae03, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0059ae05: mov eax, 5 */ r_eax = 0x5u;
    /* 0059ae0a: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0059ae0c: add eax, dword ptr [ebp - 0x30] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffd0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0059ae0f: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
L_0059ae12:; BB(0x0059ae12);
    /* 0059ae12: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059ae16: jle 0x59aea8 */ if ((fZ||fS!=fO)) goto L_0059aea8;
L_0059ae1c:; BB(0x0059ae1c);
    /* 0059ae1c: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0059ae1f: cmp ecx, dword ptr [ebp - 0x1c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059ae22: jge 0x59ae2a */ if ((fS==fO)) goto L_0059ae2a;
L_0059ae24:; BB(0x0059ae24);
    /* 0059ae24: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0059ae27: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
L_0059ae2a:; BB(0x0059ae2a);
    /* 0059ae2a: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0059ae2d: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059ae30: jle 0x59ae38 */ if ((fZ||fS!=fO)) goto L_0059ae38;
L_0059ae32:; BB(0x0059ae32);
    /* 0059ae32: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0059ae35: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
L_0059ae38:; BB(0x0059ae38);
    /* 0059ae38: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0059ae3b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059ae3c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0059ae3f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059ae40: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0059ae43: call 0x59a6c0 */ r_esp -= 4; W32(r_esp, 0x59ae48u); f_0059a6c0();
    /* 0059ae48: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0059ae4b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059ae4d: jne 0x59ae5a */ if (!fZ) goto L_0059ae5a;
L_0059ae4f:; BB(0x0059ae4f);
    /* 0059ae4f: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0059ae52: sub edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0059ae55: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 0059ae58: jmp 0x59ae38 */ goto L_0059ae38;
L_0059ae5a:; BB(0x0059ae5a);
    /* 0059ae5a: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0059ae5d: cmp eax, dword ptr [ebp - 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059ae60: jl 0x59ae6a */ if ((fS!=fO)) goto L_0059ae6a;
L_0059ae62:; BB(0x0059ae62);
    /* 0059ae62: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0059ae65: cmp ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059ae68: jle 0x59ae81 */ if ((fZ||fS!=fO)) goto L_0059ae81;
L_0059ae6a:; BB(0x0059ae6a);
    /* 0059ae6a: push 0xe4 */ { u32 v = 0xe4u; r_esp -= 4; W32(r_esp, v); }
    /* 0059ae6f: push 0x6cebe4 */ { u32 v = 0x6cebe4u; r_esp -= 4; W32(r_esp, v); }
    /* 0059ae74: push 0x6c5a6c */ { u32 v = 0x6c5a6cu; r_esp -= 4; W32(r_esp, v); }
    /* 0059ae79: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x59ae7eu); f_005e9f20();
    /* 0059ae7e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0059ae81:; BB(0x0059ae81);
    /* 0059ae81: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059ae83: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0059ae86: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059ae87: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x59ae8cu); f_0064c8a0();
    /* 0059ae8c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059ae8f: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0059ae92: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 0059ae95: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0059ae98: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0059ae9b: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0059ae9d: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0059aea0: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0059aea3: jmp 0x59afd8 */ goto L_0059afd8;
L_0059aea8:; BB(0x0059aea8);
    /* 0059aea8: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0059aeab: imul esi, dword ptr [ebp - 0x2c] */ { i64 t = (i64)(i32)r_esi * (i64)(i32)R32((u32)(r_ebp+0xffffffd4u)); r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0059aeaf: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0059aeb1: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x59aeb6u); f_0062fbf0();
    /* 0059aeb6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059aeb9: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0059aebc: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0059aebf: mov dword ptr [ebp - 0x54], esi */ W32((u32)(r_ebp+0xffffffacu), r_esi);
    /* 0059aec2: fild dword ptr [ebp - 0x54] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffacu)));
    /* 0059aec5: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0059aec7: fstp qword ptr [ebp - 0x5c] */ W_F64((u32)(r_ebp+0xffffffa4u), ST(0)); FPOP();
    /* 0059aeca: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x59aecfu); f_0062fbf0();
    /* 0059aecf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059aed2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0059aed5: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 0059aed8: fild dword ptr [ebp - 0x60] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffa0u)));
    /* 0059aedb: fdivr qword ptr [ebp - 0x5c] */ ST(0) = R_F64((u32)(r_ebp+0xffffffa4u)) / ST(0);
    /* 0059aede: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0059aee1: imul ecx, dword ptr [ebp - 0x1c] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xffffffe4u)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0059aee5: imul ecx, dword ptr [ebp - 0x2c] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xffffffd4u)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0059aee9: mov dword ptr [ebp - 0x64], ecx */ W32((u32)(r_ebp+0xffffff9cu), r_ecx);
    /* 0059aeec: fild dword ptr [ebp - 0x64] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff9cu)));
    /* 0059aeef: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0059aef1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0059aef3: fstp qword ptr [ebp - 0x6c] */ W_F64((u32)(r_ebp+0xffffff94u), ST(0)); FPOP();
    /* 0059aef6: fstp qword ptr [ebp - 0x74] */ W_F64((u32)(r_ebp+0xffffff8cu), ST(0)); FPOP();
    /* 0059aef9: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x59aefeu); f_0062fbf0();
    /* 0059aefe: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059af01: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0059af04: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 0059af07: fild dword ptr [ebp - 0x78] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff88u)));
    /* 0059af0a: fdivr qword ptr [ebp - 0x74] */ ST(0) = R_F64((u32)(r_ebp+0xffffff8cu)) / ST(0);
    /* 0059af0d: fadd qword ptr [ebp - 0x6c] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xffffff94u));
    /* 0059af10: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x59af15u); f_00686cc0();
    /* 0059af15: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0059af18: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0059af1b: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0059af1c: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0059af1e: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0059af20: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0059af23: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0059af26: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0059af27: mov ecx, 5 */ r_ecx = 0x5u;
    /* 0059af2c: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0059af2c, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0059af2c, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0059af2e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059af30: je 0x59af4a */ if (fZ) goto L_0059af4a;
L_0059af32:; BB(0x0059af32);
    /* 0059af32: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0059af35: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0059af36: mov ecx, 5 */ r_ecx = 0x5u;
    /* 0059af3b: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0059af3b, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0059af3b, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0059af3d: mov eax, 5 */ r_eax = 0x5u;
    /* 0059af42: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0059af44: add eax, dword ptr [ebp - 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0059af47: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_0059af4a:; BB(0x0059af4a);
    /* 0059af4a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0059af4d: cmp ecx, dword ptr [ebp - 0x1c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059af50: jge 0x59af58 */ if ((fS==fO)) goto L_0059af58;
L_0059af52:; BB(0x0059af52);
    /* 0059af52: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0059af55: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
L_0059af58:; BB(0x0059af58);
    /* 0059af58: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0059af5b: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059af5e: jle 0x59af66 */ if ((fZ||fS!=fO)) goto L_0059af66;
L_0059af60:; BB(0x0059af60);
    /* 0059af60: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0059af63: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
L_0059af66:; BB(0x0059af66);
    /* 0059af66: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0059af69: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059af6a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0059af6d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059af6e: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0059af71: call 0x59a6c0 */ r_esp -= 4; W32(r_esp, 0x59af76u); f_0059a6c0();
    /* 0059af76: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0059af79: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059af7b: jne 0x59af88 */ if (!fZ) goto L_0059af88;
L_0059af7d:; BB(0x0059af7d);
    /* 0059af7d: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0059af80: sub edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0059af83: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0059af86: jmp 0x59af66 */ goto L_0059af66;
L_0059af88:; BB(0x0059af88);
    /* 0059af88: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0059af8b: cmp eax, dword ptr [ebp - 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059af8e: jge 0x59af97 */ if ((fS==fO)) goto L_0059af97;
L_0059af90:; BB(0x0059af90);
    /* 0059af90: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_0059af97:; BB(0x0059af97);
    /* 0059af97: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0059af9a: cmp ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059af9d: jle 0x59afb6 */ if ((fZ||fS!=fO)) goto L_0059afb6;
L_0059af9f:; BB(0x0059af9f);
    /* 0059af9f: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 0059afa4: push 0x6cebe4 */ { u32 v = 0x6cebe4u; r_esp -= 4; W32(r_esp, v); }
    /* 0059afa9: push 0x6c59b4 */ { u32 v = 0x6c59b4u; r_esp -= 4; W32(r_esp, v); }
    /* 0059afae: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x59afb3u); f_005e9f20();
    /* 0059afb3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0059afb6:; BB(0x0059afb6);
    /* 0059afb6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059afb8: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0059afbb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059afbc: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x59afc1u); f_0064c8a0();
    /* 0059afc1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059afc4: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0059afc7: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 0059afca: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0059afcd: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0059afd0: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0059afd2: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0059afd5: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
L_0059afd8:; BB(0x0059afd8);
    /* 0059afd8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059afd9: mov esp, ebp */ r_esp = r_ebp;
    /* 0059afdb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059afdc: ret 8 */ FN_RET(0x0059ac50); r_esp += 12; return;
}

