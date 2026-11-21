#include "protos.h"

void f_00516dd0(void) /* sub_516DD0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00516dd0);
    /* 00516dd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00516dd1: mov ebp, esp */ r_ebp = r_esp;
    /* 00516dd3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00516dd9: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x516ddeu); f_0047e190();
    /* 00516dde: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00516de1: jne 0x516df8 */ if (!fZ) goto L_00516df8;
L_00516de3:; BB(0x00516de3);
    /* 00516de3: cmp dword ptr [0x793078], 7 */ {  u32 a = R32((u32)(0x793078u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00516dea: jge 0x516df2 */ if ((fS==fO)) goto L_00516df2;
L_00516dec:; BB(0x00516dec);
    /* 00516dec: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00516dee: jmp 0x516e1d */ goto L_00516e1d;
L_00516df2:; BB(0x00516df2);
    /* 00516df2: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00516df4: jmp 0x516e1d */ goto L_00516e1d;
L_00516df8:; BB(0x00516df8);
    /* 00516df8: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00516dfe: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x516e03u); f_0047e190();
    /* 00516e03: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00516e06: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 00516e08: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 00516e0a: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00516e0d: cmp dword ptr [0x793078], eax */ {  u32 a = R32((u32)(0x793078u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00516e13: jl 0x516e1b */ if ((fS!=fO)) goto L_00516e1b;
L_00516e15:; BB(0x00516e15);
    /* 00516e15: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00516e17: jmp 0x516e1d */ goto L_00516e1d;
L_00516e1b:; BB(0x00516e1b);
    /* 00516e1b: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_00516e1d:; BB(0x00516e1d);
    /* 00516e1d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00516e1e: ret  */ FN_RET(0x00516dd0); r_esp += 4; return;
}

void f_00516e20(void) /* sub_516E20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00516e20);
    /* 00516e20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00516e21: mov ebp, esp */ r_ebp = r_esp;
    /* 00516e23: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00516e26: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00516e27: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00516e2d: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x516e32u); f_0047e3b0();
    /* 00516e32: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00516e35: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00516e3c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00516e3f: call 0x4c6a70 */ r_esp -= 4; W32(r_esp, 0x516e44u); f_004c6a70();
    /* 00516e44: mov esi, eax */ r_esi = r_eax;
    /* 00516e46: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00516e4c: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x516e51u); f_0047bc20();
    /* 00516e51: mov ecx, eax */ r_ecx = r_eax;
    /* 00516e53: mov eax, esi */ r_eax = r_esi;
    /* 00516e55: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00516e56: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00516e56, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00516e56, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00516e58: mov dword ptr [0x793104], eax */ W32((u32)(0x793104u), r_eax);
    /* 00516e5d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00516e63: call 0x47bc60 */ r_esp -= 4; W32(r_esp, 0x516e68u); f_0047bc60();
    /* 00516e68: cmp dword ptr [0x793104], eax */ {  u32 a = R32((u32)(0x793104u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00516e6e: jg 0x516eda */ if ((!fZ&&fS==fO)) goto L_00516eda;
L_00516e70:; BB(0x00516e70);
    /* 00516e70: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00516e76: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x516e7bu); f_0047bc20();
    /* 00516e7b: imul eax, dword ptr [0x793104] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(0x793104u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00516e82: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00516e85: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00516e88: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00516e89: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00516e8c: call 0x4c6c10 */ r_esp -= 4; W32(r_esp, 0x516e91u); f_004c6c10();
    /* 00516e91: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00516e94: call 0x4da300 */ r_esp -= 4; W32(r_esp, 0x516e99u); f_004da300();
    /* 00516e99: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00516e9b: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00516e9d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00516ea0: call 0x4dc4d0 */ r_esp -= 4; W32(r_esp, 0x516ea5u); f_004dc4d0();
    /* 00516ea5: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00516ea7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00516eaa: call 0x4c7030 */ r_esp -= 4; W32(r_esp, 0x516eafu); f_004c7030();
    /* 00516eaf: mov eax, dword ptr [0x793104] */ r_eax = R32((u32)(0x793104u));
    /* 00516eb4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00516eb5: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00516ebb: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00516ebe: call 0x4f53c0 */ r_esp -= 4; W32(r_esp, 0x516ec3u); f_004f53c0();
    /* 00516ec3: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 00516ec6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00516ec9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00516ecc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00516ecd: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00516ed3: call 0x47ec90 */ r_esp -= 4; W32(r_esp, 0x516ed8u); f_0047ec90();
    /* 00516ed8: jmp 0x516f2f */ goto L_00516f2f;
L_00516eda:; BB(0x00516eda);
    /* 00516eda: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00516ee0: call 0x47bc60 */ r_esp -= 4; W32(r_esp, 0x516ee5u); f_0047bc60();
    /* 00516ee5: mov esi, eax */ r_esi = r_eax;
    /* 00516ee7: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00516eed: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x516ef2u); f_0047bc20();
    /* 00516ef2: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00516ef5: mov dword ptr [ebp - 4], esi */ W32((u32)(r_ebp+0xfffffffcu), r_esi);
    /* 00516ef8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00516efb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00516efc: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00516eff: call 0x4c6c10 */ r_esp -= 4; W32(r_esp, 0x516f04u); f_004c6c10();
    /* 00516f04: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00516f07: call 0x4da300 */ r_esp -= 4; W32(r_esp, 0x516f0cu); f_004da300();
    /* 00516f0c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00516f12: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00516f15: call 0x4f52a0 */ r_esp -= 4; W32(r_esp, 0x516f1au); f_004f52a0();
    /* 00516f1a: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 00516f1d: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00516f20: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00516f23: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00516f24: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00516f2a: call 0x47ec90 */ r_esp -= 4; W32(r_esp, 0x516f2fu); f_0047ec90();
L_00516f2f:; BB(0x00516f2f);
    /* 00516f2f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00516f32: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00516f33: mov esp, ebp */ r_esp = r_ebp;
    /* 00516f35: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00516f36: ret  */ FN_RET(0x00516e20); r_esp += 4; return;
}

void f_00516f40(void) /* sub_516F40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00516f40);
    /* 00516f40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00516f41: mov ebp, esp */ r_ebp = r_esp;
    /* 00516f43: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00516f46: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00516f47: mov dword ptr [ebp - 0xc], 0xffffff9d */ W32((u32)(r_ebp+0xfffffff4u), 0xffffff9du);
    /* 00516f4e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00516f54: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x516f59u); f_0047e3b0();
    /* 00516f59: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00516f5c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00516f63: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00516f66: call 0x4c6a70 */ r_esp -= 4; W32(r_esp, 0x516f6bu); f_004c6a70();
    /* 00516f6b: mov esi, eax */ r_esi = r_eax;
    /* 00516f6d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00516f73: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x516f78u); f_0047bc20();
    /* 00516f78: mov ecx, eax */ r_ecx = r_eax;
    /* 00516f7a: mov eax, esi */ r_eax = r_esi;
    /* 00516f7c: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00516f7d: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00516f7d, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00516f7d, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00516f7f: mov dword ptr [0x793104], eax */ W32((u32)(0x793104u), r_eax);
    /* 00516f84: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00516f8a: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00516f8d: call 0x4f67d0 */ r_esp -= 4; W32(r_esp, 0x516f92u); f_004f67d0();
    /* 00516f92: cmp dword ptr [0x793104], eax */ {  u32 a = R32((u32)(0x793104u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00516f98: jg 0x517017 */ if ((!fZ&&fS==fO)) goto L_00517017;
L_00516f9a:; BB(0x00516f9a);
    /* 00516f9a: movzx edx, byte ptr [ebp + 8] */ r_edx = (u32)R8((u32)(r_ebp+0x8u));
    /* 00516f9e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00516fa0: jne 0x51700b */ if (!fZ) goto L_0051700b;
L_00516fa2:; BB(0x00516fa2);
    /* 00516fa2: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00516fa8: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x516fadu); f_0047bc20();
    /* 00516fad: imul eax, dword ptr [0x793104] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(0x793104u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00516fb4: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00516fb7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00516fba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00516fbb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00516fbe: call 0x4c6c10 */ r_esp -= 4; W32(r_esp, 0x516fc3u); f_004c6c10();
    /* 00516fc3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00516fc6: call 0x4da300 */ r_esp -= 4; W32(r_esp, 0x516fcbu); f_004da300();
    /* 00516fcb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00516fcd: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00516fcf: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00516fd2: call 0x4dc4d0 */ r_esp -= 4; W32(r_esp, 0x516fd7u); f_004dc4d0();
    /* 00516fd7: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00516fd9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00516fdc: call 0x4c7030 */ r_esp -= 4; W32(r_esp, 0x516fe1u); f_004c7030();
    /* 00516fe1: mov ecx, dword ptr [0x793104] */ r_ecx = R32((u32)(0x793104u));
    /* 00516fe7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00516fe8: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00516fee: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00516ff1: call 0x4f5e80 */ r_esp -= 4; W32(r_esp, 0x516ff6u); f_004f5e80();
    /* 00516ff6: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 00516ff9: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00516ffc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00516fff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00517000: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00517006: call 0x47ec90 */ r_esp -= 4; W32(r_esp, 0x51700bu); f_0047ec90();
L_0051700b:; BB(0x0051700b);
    /* 0051700b: mov dword ptr [0x793064], 6 */ W32((u32)(0x793064u), 0x6u);
    /* 00517015: jmp 0x51708d */ goto L_0051708d;
L_00517017:; BB(0x00517017);
    /* 00517017: movzx ecx, byte ptr [ebp + 8] */ r_ecx = (u32)R8((u32)(r_ebp+0x8u));
    /* 0051701b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051701d: jne 0x517083 */ if (!fZ) goto L_00517083;
L_0051701f:; BB(0x0051701f);
    /* 0051701f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00517025: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00517028: call 0x4f67d0 */ r_esp -= 4; W32(r_esp, 0x51702du); f_004f67d0();
    /* 0051702d: mov esi, eax */ r_esi = r_eax;
    /* 0051702f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00517035: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x51703au); f_0047bc20();
    /* 0051703a: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0051703d: mov dword ptr [ebp - 4], esi */ W32((u32)(r_ebp+0xfffffffcu), r_esi);
    /* 00517040: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00517043: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00517044: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00517047: call 0x4c6c10 */ r_esp -= 4; W32(r_esp, 0x51704cu); f_004c6c10();
    /* 0051704c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051704f: call 0x4da300 */ r_esp -= 4; W32(r_esp, 0x517054u); f_004da300();
    /* 00517054: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00517056: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00517058: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051705b: call 0x4dc4d0 */ r_esp -= 4; W32(r_esp, 0x517060u); f_004dc4d0();
    /* 00517060: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00517066: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00517069: call 0x4f5cd0 */ r_esp -= 4; W32(r_esp, 0x51706eu); f_004f5cd0();
    /* 0051706e: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 00517071: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00517074: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00517077: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00517078: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051707e: call 0x47ec90 */ r_esp -= 4; W32(r_esp, 0x517083u); f_0047ec90();
L_00517083:; BB(0x00517083);
    /* 00517083: mov dword ptr [0x793064], 3 */ W32((u32)(0x793064u), 0x3u);
L_0051708d:; BB(0x0051708d);
    /* 0051708d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00517090: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00517091: mov esp, ebp */ r_esp = r_ebp;
    /* 00517093: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00517094: ret  */ FN_RET(0x00516f40); r_esp += 4; return;
}

