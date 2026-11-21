#include "protos.h"

void f_00401060(void) /* baccaratai::func_00401060 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00401060);
    /* 00401060: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00401061: mov ebp, esp */ r_ebp = r_esp;
    /* 00401063: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00401066: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00401069: mov eax, dword ptr [0x7902ec] */ r_eax = R32((u32)(0x7902ecu));
    /* 0040106e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00401070: mov ecx, dword ptr [0x7902ec] */ r_ecx = R32((u32)(0x7902ecu));
    /* 00401076: mov eax, dword ptr [edx + 0x2b0] */ r_eax = R32((u32)(r_edx+0x2b0u));
    /* 0040107c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x40107eu); call_ind(t); }
    /* 0040107e: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00401081: mov ecx, dword ptr [0x7902ec] */ r_ecx = R32((u32)(0x7902ecu));
    /* 00401087: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00401089: mov ecx, dword ptr [0x7902ec] */ r_ecx = R32((u32)(0x7902ecu));
    /* 0040108f: mov eax, dword ptr [edx + 0x2b4] */ r_eax = R32((u32)(r_edx+0x2b4u));
    /* 00401095: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x401097u); call_ind(t); }
    /* 00401097: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0040109a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0040109d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040109e: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4010a3u); f_005dcb00();
    /* 004010a3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004010a6: mov edx, dword ptr [eax + 0x4a8] */ r_edx = R32((u32)(r_eax+0x4a8u));
    /* 004010ac: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 004010af: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004010b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004010b3: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4010b8u); f_005dcb00();
    /* 004010b8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004010bb: mov ecx, eax */ r_ecx = r_eax;
    /* 004010bd: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x4010c2u); f_005d5a50();
    /* 004010c2: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004010c5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004010c8: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 004010cb: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004010ce: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004010cf: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004010d2: call 0x4011e0 */ r_esp -= 4; W32(r_esp, 0x4010d7u); f_004011e0();
    /* 004010d7: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004010da: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004010dd: cmp eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004010e0: jge 0x4010f6 */ if ((fS==fO)) goto L_004010f6;
L_004010e2:; BB(0x004010e2);
    /* 004010e2: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 004010e4: push 0x6b2708 */ { u32 v = 0x6b2708u; r_esp -= 4; W32(r_esp, v); }
    /* 004010e9: push 0x6b26f8 */ { u32 v = 0x6b26f8u; r_esp -= 4; W32(r_esp, v); }
    /* 004010ee: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4010f3u); f_005e9f20();
    /* 004010f3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004010f6:; BB(0x004010f6);
    /* 004010f6: cmp dword ptr [ebp - 0x10], -4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xfffffffcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004010fa: jge 0x40110e */ if ((fS==fO)) goto L_0040110e;
L_004010fc:; BB(0x004010fc);
    /* 004010fc: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004010fe: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x401103u); f_0062fbf0();
    /* 00401103: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00401106: or edx, 0xffffffff */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00401109: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0040110b: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_0040110e:; BB(0x0040110e);
    /* 0040110e: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00401110: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x401115u); f_0062fbf0();
    /* 00401115: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00401118: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040111b: imul eax, dword ptr [ebp - 0xc] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xfffffff4u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040111f: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00401122: fild dword ptr [ebp - 0x20] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffe0u)));
    /* 00401125: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00401127: fstp qword ptr [ebp - 0x28] */ W_F64((u32)(r_ebp+0xffffffd8u), ST(0)); FPOP();
    /* 0040112a: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x40112fu); f_0062fbf0();
    /* 0040112f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00401132: mov ecx, eax */ r_ecx = r_eax;
    /* 00401134: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00401137: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0040113a: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0040113b: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0040113b, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0040113b, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0040113d: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00401140: fild dword ptr [ebp - 0x2c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd4u)));
    /* 00401143: fmul qword ptr [ebp - 0x28] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xffffffd8u));
    /* 00401146: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00401149: imul edx, dword ptr [ebp - 0xc] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ebp+0xfffffff4u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040114d: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 00401150: fild dword ptr [ebp - 0x30] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd0u)));
    /* 00401153: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00401155: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00401157: fstp qword ptr [ebp - 0x38] */ W_F64((u32)(r_ebp+0xffffffc8u), ST(0)); FPOP();
    /* 0040115a: fstp qword ptr [ebp - 0x40] */ W_F64((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 0040115d: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x401162u); f_0062fbf0();
    /* 00401162: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00401165: mov ecx, eax */ r_ecx = r_eax;
    /* 00401167: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040116a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0040116d: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0040116e: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0040116e, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0040116e, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00401170: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00401173: fild dword ptr [ebp - 0x44] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffbcu)));
    /* 00401176: fmul qword ptr [ebp - 0x40] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xffffffc0u));
    /* 00401179: fadd qword ptr [ebp - 0x38] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xffffffc8u));
    /* 0040117c: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x401181u); f_00686cc0();
    /* 00401181: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00401184: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00401187: cmp edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040118a: jle 0x401192 */ if ((fZ||fS!=fO)) goto L_00401192;
L_0040118c:; BB(0x0040118c);
    /* 0040118c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040118f: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_00401192:; BB(0x00401192);
    /* 00401192: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00401195: cmp ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00401198: jle 0x4011a0 */ if ((fZ||fS!=fO)) goto L_004011a0;
L_0040119a:; BB(0x0040119a);
    /* 0040119a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040119d: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
L_004011a0:; BB(0x004011a0);
    /* 004011a0: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004011a3: cmp eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004011a6: jge 0x4011ae */ if ((fS==fO)) goto L_004011ae;
L_004011a8:; BB(0x004011a8);
    /* 004011a8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004011ab: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
L_004011ae:; BB(0x004011ae);
    /* 004011ae: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004011b1: mov esp, ebp */ r_esp = r_ebp;
    /* 004011b3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004011b4: ret 4 */ FN_RET(0x00401060); r_esp += 8; return;
}

