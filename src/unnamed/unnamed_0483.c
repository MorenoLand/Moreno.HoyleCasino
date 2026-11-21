#include "protos.h"

void f_004830e0(void) /* sub_4830E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004830e0);
    /* 004830e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004830e1: mov ebp, esp */ r_ebp = r_esp;
    /* 004830e3: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004830e6: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 004830e9: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 004830f0: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 004830f7: fldz  */ FPUSH(0.0);
    /* 004830f9: fstp qword ptr [ebp - 0x18] */ W_F64((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 004830fc: fild dword ptr [ebp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x14u)));
    /* 004830ff: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00483102: fadd qword ptr [eax] */ ST(0) = ST(0) + R_F64((u32)(r_eax));
    /* 00483104: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00483107: fstp qword ptr [ecx] */ W_F64((u32)(r_ecx), ST(0)); FPOP();
    /* 00483109: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048310c: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0048310f: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00483112: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 00483115: cmp dword ptr [eax], 0 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00483118: jle 0x483132 */ if ((fZ||fS!=fO)) goto L_00483132;
L_0048311a:; BB(0x0048311a);
    /* 0048311a: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 0048311d: fild dword ptr [ecx] */ FPUSH((long double)(i32)R32((u32)(r_ecx)));
    /* 0048311f: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00483122: fadd qword ptr [edx] */ ST(0) = ST(0) + R_F64((u32)(r_edx));
    /* 00483124: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00483127: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 00483129: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048312c: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048312f: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_00483132:; BB(0x00483132);
    /* 00483132: cmp dword ptr [ebp + 0x10], 2 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00483136: jne 0x48315a */ if (!fZ) goto L_0048315a;
L_00483138:; BB(0x00483138);
    /* 00483138: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 0048313b: cmp dword ptr [edx + 4], 0 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048313f: jle 0x48315a */ if ((fZ||fS!=fO)) goto L_0048315a;
L_00483141:; BB(0x00483141);
    /* 00483141: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 00483144: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 00483147: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0048314a: fadd qword ptr [ecx] */ ST(0) = ST(0) + R_F64((u32)(r_ecx));
    /* 0048314c: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0048314f: fstp qword ptr [edx] */ W_F64((u32)(r_edx), ST(0)); FPOP();
    /* 00483151: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00483154: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00483157: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0048315a:; BB(0x0048315a);
    /* 0048315a: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00483161: jmp 0x48316c */ goto L_0048316c;
L_00483163:; BB(0x00483163);
    /* 00483163: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00483166: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00483169: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_0048316c:; BB(0x0048316c);
    /* 0048316c: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048316f: cmp edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00483172: jge 0x4831b5 */ if ((fS==fO)) goto L_004831b5;
L_00483174:; BB(0x00483174);
    /* 00483174: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 00483177: imul eax, eax, 0x30 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x30u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0048317a: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0048317d: sub ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00483180: imul ecx, ecx, 0x18 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x18u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00483183: lea edx, [eax + ecx + 0x71e3c8] */ r_edx = (u32)(r_eax+r_ecx+0x71e3c8u);
    /* 0048318a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048318d: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 00483190: imul ecx, dword ptr [ebp + 0x1c] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0x1cu)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00483194: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00483197: fild dword ptr [ebp - 0x20] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffe0u)));
    /* 0048319a: fdiv qword ptr [0x6bc208] */ ST(0) = ST(0) / R_F64((u32)(0x6bc208u));
    /* 004831a0: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 004831a3: fadd qword ptr [edx] */ ST(0) = ST(0) + R_F64((u32)(r_edx));
    /* 004831a5: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004831a8: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 004831aa: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004831ad: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004831b0: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004831b3: jmp 0x483163 */ goto L_00483163;
L_004831b5:; BB(0x004831b5);
    /* 004831b5: fild dword ptr [ebp - 8] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff8u)));
    /* 004831b8: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 004831bb: fdivr qword ptr [edx] */ ST(0) = R_F64((u32)(r_edx)) / ST(0);
    /* 004831bd: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004831c0: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 004831c2: fild dword ptr [ebp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x14u)));
    /* 004831c5: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 004831c8: fsub qword ptr [ecx] */ ST(0) = ST(0) - R_F64((u32)(r_ecx));
    /* 004831ca: fstp qword ptr [ebp - 0x18] */ W_F64((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 004831cd: fld qword ptr [ebp - 0x18] */ FPUSH(R_F64((u32)(r_ebp+0xffffffe8u)));
    /* 004831d0: fmul qword ptr [ebp - 0x18] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xffffffe8u));
    /* 004831d3: fstp qword ptr [ebp - 0x18] */ W_F64((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 004831d6: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004831d9: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 004831db: fadd qword ptr [ebp - 0x18] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xffffffe8u));
    /* 004831de: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004831e1: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 004831e3: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 004831e6: cmp dword ptr [ecx], 0 */ {  u32 a = R32((u32)(r_ecx)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004831e9: jle 0x48320e */ if ((fZ||fS!=fO)) goto L_0048320e;
L_004831eb:; BB(0x004831eb);
    /* 004831eb: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 004831ee: fild dword ptr [edx] */ FPUSH((long double)(i32)R32((u32)(r_edx)));
    /* 004831f0: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004831f3: fsub qword ptr [eax] */ ST(0) = ST(0) - R_F64((u32)(r_eax));
    /* 004831f5: fstp qword ptr [ebp - 0x18] */ W_F64((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 004831f8: fld qword ptr [ebp - 0x18] */ FPUSH(R_F64((u32)(r_ebp+0xffffffe8u)));
    /* 004831fb: fmul qword ptr [ebp - 0x18] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xffffffe8u));
    /* 004831fe: fstp qword ptr [ebp - 0x18] */ W_F64((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 00483201: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00483204: fld qword ptr [ecx] */ FPUSH(R_F64((u32)(r_ecx)));
    /* 00483206: fadd qword ptr [ebp - 0x18] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xffffffe8u));
    /* 00483209: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0048320c: fstp qword ptr [edx] */ W_F64((u32)(r_edx), ST(0)); FPOP();
L_0048320e:; BB(0x0048320e);
    /* 0048320e: cmp dword ptr [ebp + 0x10], 2 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00483212: jne 0x483241 */ if (!fZ) goto L_00483241;
L_00483214:; BB(0x00483214);
    /* 00483214: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 00483217: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048321b: jle 0x483241 */ if ((fZ||fS!=fO)) goto L_00483241;
L_0048321d:; BB(0x0048321d);
    /* 0048321d: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 00483220: fild dword ptr [ecx + 4] */ FPUSH((long double)(i32)R32((u32)(r_ecx+0x4u)));
    /* 00483223: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00483226: fsub qword ptr [edx] */ ST(0) = ST(0) - R_F64((u32)(r_edx));
    /* 00483228: fstp qword ptr [ebp - 0x18] */ W_F64((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 0048322b: fld qword ptr [ebp - 0x18] */ FPUSH(R_F64((u32)(r_ebp+0xffffffe8u)));
    /* 0048322e: fmul qword ptr [ebp - 0x18] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xffffffe8u));
    /* 00483231: fstp qword ptr [ebp - 0x18] */ W_F64((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 00483234: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00483237: fld qword ptr [eax] */ FPUSH(R_F64((u32)(r_eax)));
    /* 00483239: fadd qword ptr [ebp - 0x18] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xffffffe8u));
    /* 0048323c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0048323f: fstp qword ptr [ecx] */ W_F64((u32)(r_ecx), ST(0)); FPOP();
L_00483241:; BB(0x00483241);
    /* 00483241: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00483248: jmp 0x483253 */ goto L_00483253;
L_0048324a:; BB(0x0048324a);
    /* 0048324a: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048324d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00483250: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_00483253:; BB(0x00483253);
    /* 00483253: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00483256: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00483259: jge 0x4832a7 */ if ((fS==fO)) goto L_004832a7;
L_0048325b:; BB(0x0048325b);
    /* 0048325b: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 0048325e: imul ecx, ecx, 0x30 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x30u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00483261: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00483264: sub edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00483267: imul edx, edx, 0x18 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x18u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0048326a: lea eax, [ecx + edx + 0x71e3c8] */ r_eax = (u32)(r_ecx+r_edx+0x71e3c8u);
    /* 00483271: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00483274: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 00483277: imul edx, dword ptr [ebp + 0x1c] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ebp+0x1cu)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0048327b: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0048327e: fild dword ptr [ebp - 0x24] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffdcu)));
    /* 00483281: fdiv qword ptr [0x6bc208] */ ST(0) = ST(0) / R_F64((u32)(0x6bc208u));
    /* 00483287: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0048328a: fsub qword ptr [eax] */ ST(0) = ST(0) - R_F64((u32)(r_eax));
    /* 0048328c: fstp qword ptr [ebp - 0x18] */ W_F64((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 0048328f: fld qword ptr [ebp - 0x18] */ FPUSH(R_F64((u32)(r_ebp+0xffffffe8u)));
    /* 00483292: fmul qword ptr [ebp - 0x18] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xffffffe8u));
    /* 00483295: fstp qword ptr [ebp - 0x18] */ W_F64((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 00483298: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0048329b: fld qword ptr [ecx] */ FPUSH(R_F64((u32)(r_ecx)));
    /* 0048329d: fadd qword ptr [ebp - 0x18] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xffffffe8u));
    /* 004832a0: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004832a3: fstp qword ptr [edx] */ W_F64((u32)(r_edx), ST(0)); FPOP();
    /* 004832a5: jmp 0x48324a */ goto L_0048324a;
L_004832a7:; BB(0x004832a7);
    /* 004832a7: fild dword ptr [ebp - 8] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff8u)));
    /* 004832aa: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004832ad: fdivr qword ptr [eax] */ ST(0) = R_F64((u32)(r_eax)) / ST(0);
    /* 004832af: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004832b2: fstp qword ptr [ecx] */ W_F64((u32)(r_ecx), ST(0)); FPOP();
    /* 004832b4: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004832b7: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004832ba: fld qword ptr [edx] */ FPUSH(R_F64((u32)(r_edx)));
    /* 004832bc: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 004832bf: call 0x686ee4 */ r_esp -= 4; W32(r_esp, 0x4832c4u); f_00686ee4();
    /* 004832c4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004832c7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004832ca: fstp qword ptr [eax] */ W_F64((u32)(r_eax), ST(0)); FPOP();
    /* 004832cc: mov esp, ebp */ r_esp = r_ebp;
    /* 004832ce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004832cf: ret 0x1c */ FN_RET(0x004830e0); r_esp += 32; return;
}

void f_004832e0(void) /* sub_4832E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004832e0);
    /* 004832e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004832e1: mov ebp, esp */ r_ebp = r_esp;
    /* 004832e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004832e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004832e7: push 0x5b */ { u32 v = 0x5bu; r_esp -= 4; W32(r_esp, v); }
    /* 004832e9: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4832eeu); f_0062fbf0();
    /* 004832ee: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004832f1: fld qword ptr [eax*8 + 0x71e568] */ FPUSH(R_F64((u32)(r_eax*8+0x71e568u)));
    /* 004832f8: mov esp, ebp */ r_esp = r_ebp;
    /* 004832fa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004832fb: ret  */ FN_RET(0x004832e0); r_esp += 4; return;
}

void f_00483630(void) /* sub_483630 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00483630);
    /* 00483630: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00483631: mov ebp, esp */ r_ebp = r_esp;
    /* 00483633: sub esp, 0x90 */ {  u32 a = r_esp; u32 b = 0x90u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00483639: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0048363e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00483640: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00483643: mov dword ptr [ebp - 0x90], ecx */ W32((u32)(r_ebp+0xffffff70u), r_ecx);
    /* 00483649: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0048364c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048364d: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 00483653: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x483658u); f_0047e390();
    /* 00483658: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0048365b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048365e: call 0x4c70d0 */ r_esp -= 4; W32(r_esp, 0x483663u); f_004c70d0();
    /* 00483663: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00483666: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00483669: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048366a: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x48366fu); f_005dcb00();
    /* 0048366f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00483672: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 00483675: push 0x6bd1a4 */ { u32 v = 0x6bd1a4u; r_esp -= 4; W32(r_esp, v); }
    /* 0048367a: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x48367fu); f_0062fde0();
    /* 0048367f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00483682: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00483685: call 0x4c6150 */ r_esp -= 4; W32(r_esp, 0x48368au); f_004c6150();
    /* 0048368a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048368b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0048368e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048368f: push 0x6bd194 */ { u32 v = 0x6bd194u; r_esp -= 4; W32(r_esp, v); }
    /* 00483694: lea eax, [ebp - 0x78] */ r_eax = (u32)(r_ebp+0xffffff88u);
    /* 00483697: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00483698: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x48369eu); call_ind(t); }
    /* 0048369e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004836a1: lea ecx, [ebp - 0x78] */ r_ecx = (u32)(r_ebp+0xffffff88u);
    /* 004836a4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004836a5: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x4836aau); f_0062fde0();
    /* 004836aa: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004836ad: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004836b0: call 0x4c6a70 */ r_esp -= 4; W32(r_esp, 0x4836b5u); f_004c6a70();
    /* 004836b5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004836b6: lea edx, [ebp - 0x84] */ r_edx = (u32)(r_ebp+0xffffff7cu);
    /* 004836bc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004836bd: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 004836c0: call 0x5d5a90 */ r_esp -= 4; W32(r_esp, 0x4836c5u); f_005d5a90();
    /* 004836c5: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 004836c7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004836c8: push 0x6bd17c */ { u32 v = 0x6bd17cu; r_esp -= 4; W32(r_esp, v); }
    /* 004836cd: lea ecx, [ebp - 0x78] */ r_ecx = (u32)(r_ebp+0xffffff88u);
    /* 004836d0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004836d1: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4836d7u); call_ind(t); }
    /* 004836d7: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004836da: lea edx, [ebp - 0x78] */ r_edx = (u32)(r_ebp+0xffffff88u);
    /* 004836dd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004836de: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x4836e3u); f_0062fde0();
    /* 004836e3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004836e6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004836e9: mov ecx, dword ptr [eax + 0x3fc] */ r_ecx = R32((u32)(r_eax+0x3fcu));
    /* 004836ef: mov dword ptr [ebp - 0x88], ecx */ W32((u32)(r_ebp+0xffffff78u), r_ecx);
    /* 004836f5: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 004836fb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004836fc: push 0x6bd164 */ { u32 v = 0x6bd164u; r_esp -= 4; W32(r_esp, v); }
    /* 00483701: lea eax, [ebp - 0x78] */ r_eax = (u32)(r_ebp+0xffffff88u);
    /* 00483704: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00483705: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x48370bu); call_ind(t); }
    /* 0048370b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048370e: lea ecx, [ebp - 0x78] */ r_ecx = (u32)(r_ebp+0xffffff88u);
    /* 00483711: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00483712: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x483717u); f_0062fde0();
    /* 00483717: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048371a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048371d: mov eax, dword ptr [edx + 0x400] */ r_eax = R32((u32)(r_edx+0x400u));
    /* 00483723: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 00483729: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 0048372f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00483730: push 0x6bd14c */ { u32 v = 0x6bd14cu; r_esp -= 4; W32(r_esp, v); }
    /* 00483735: lea edx, [ebp - 0x78] */ r_edx = (u32)(r_ebp+0xffffff88u);
    /* 00483738: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00483739: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x48373fu); call_ind(t); }
    /* 0048373f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00483742: lea eax, [ebp - 0x78] */ r_eax = (u32)(r_ebp+0xffffff88u);
    /* 00483745: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00483746: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x48374bu); f_0062fde0();
    /* 0048374b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048374e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00483751: call 0x4c70d0 */ r_esp -= 4; W32(r_esp, 0x483756u); f_004c70d0();
    /* 00483756: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00483757: push 0x6bd140 */ { u32 v = 0x6bd140u; r_esp -= 4; W32(r_esp, v); }
    /* 0048375c: lea ecx, [ebp - 0x78] */ r_ecx = (u32)(r_ebp+0xffffff88u);
    /* 0048375f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00483760: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x483766u); call_ind(t); }
    /* 00483766: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00483769: lea edx, [ebp - 0x78] */ r_edx = (u32)(r_ebp+0xffffff88u);
    /* 0048376c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048376d: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x483772u); f_0062fde0();
    /* 00483772: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00483775: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00483778: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0048377a: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x48377fu); f_00686d72();
    /* 0048377f: mov esp, ebp */ r_esp = r_ebp;
    /* 00483781: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00483782: ret 4 */ FN_RET(0x00483630); r_esp += 8; return;
}

void f_00483790(void) /* sub_483790 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00483790);
    /* 00483790: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00483791: mov ebp, esp */ r_ebp = r_esp;
    /* 00483793: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00483796: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00483799: mov byte ptr [ebp - 0xe], 0 */ W8((u32)(r_ebp+0xfffffff2u), 0x0u);
    /* 0048379d: mov byte ptr [ebp - 0xd], 0 */ W8((u32)(r_ebp+0xfffffff3u), 0x0u);
    /* 004837a1: mov dword ptr [ebp - 0x14], 0xffffffff */ W32((u32)(r_ebp+0xffffffecu), 0xffffffffu);
    /* 004837a8: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 004837af: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004837b2: call 0x480f80 */ r_esp -= 4; W32(r_esp, 0x4837b7u); f_00480f80();
    /* 004837b7: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004837ba: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 004837bc: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 004837be: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004837c1: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004837c4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004837c6: push 0x30e7a3 */ { u32 v = 0x30e7a3u; r_esp -= 4; W32(r_esp, v); }
    /* 004837cb: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 004837d1: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x4837d6u); f_005f2a60();
    /* 004837d6: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 004837d9: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004837dc: mov edx, dword ptr [ecx*4 + 0x71e860] */ r_edx = R32((u32)(r_ecx*4+0x71e860u));
    /* 004837e3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004837e4: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4837e9u); f_00630f40();
    /* 004837e9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004837ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004837ed: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004837f0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004837f2: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004837f5: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 004837fb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4837fdu); call_ind(t); }
    /* 004837fd: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00483800: call 0x480ea0 */ r_esp -= 4; W32(r_esp, 0x483805u); f_00480ea0();
    /* 00483805: mov byte ptr [ebp - 0xe], al */ W8((u32)(r_ebp+0xfffffff2u), (u8)r_eax);
    /* 00483808: movzx ecx, byte ptr [ebp - 0xe] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffff2u));
    /* 0048380c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048380e: jne 0x483830 */ if (!fZ) goto L_00483830;
L_00483810:; BB(0x00483810);
    /* 00483810: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00483812: mov edx, dword ptr [0x791eb8] */ r_edx = R32((u32)(0x791eb8u));
    /* 00483818: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0048381b: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 00483821: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00483824: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00483826: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00483829: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x48382bu); call_ind(t); }
    /* 0048382b: jmp 0x483902 */ goto L_00483902;
L_00483830:; BB(0x00483830);
    /* 00483830: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00483833: call 0x480c80 */ r_esp -= 4; W32(r_esp, 0x483838u); f_00480c80();
    /* 00483838: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0048383b: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0048383e: call 0x480f80 */ r_esp -= 4; W32(r_esp, 0x483843u); f_00480f80();
    /* 00483843: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00483846: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00483848: je 0x48385c */ if (fZ) goto L_0048385c;
L_0048384a:; BB(0x0048384a);
    /* 0048384a: mov byte ptr [ebp - 0xd], 1 */ W8((u32)(r_ebp+0xfffffff3u), 0x1u);
    /* 0048384e: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00483851: mov eax, dword ptr [edx + 0x400] */ r_eax = R32((u32)(r_edx+0x400u));
    /* 00483857: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0048385a: jmp 0x48387a */ goto L_0048387a;
L_0048385c:; BB(0x0048385c);
    /* 0048385c: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048385f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00483860: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00483863: call 0x4810c0 */ r_esp -= 4; W32(r_esp, 0x483868u); f_004810c0();
    /* 00483868: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0048386b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048386d: jne 0x48387a */ if (!fZ) goto L_0048387a;
L_0048386f:; BB(0x0048386f);
    /* 0048386f: mov byte ptr [ebp - 0xd], 1 */ W8((u32)(r_ebp+0xfffffff3u), 0x1u);
    /* 00483873: mov dword ptr [ebp - 0x14], 0xffffffff */ W32((u32)(r_ebp+0xffffffecu), 0xffffffffu);
L_0048387a:; BB(0x0048387a);
    /* 0048387a: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 0048387d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048387e: lea ecx, [ebp - 0xc] */ r_ecx = (u32)(r_ebp+0xfffffff4u);
    /* 00483881: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00483882: lea edx, [ebp - 4] */ r_edx = (u32)(r_ebp+0xfffffffcu);
    /* 00483885: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00483886: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00483889: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048388a: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0048388d: call 0x481500 */ r_esp -= 4; W32(r_esp, 0x483892u); f_00481500();
    /* 00483892: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00483894: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x483899u); f_005dcb00();
    /* 00483899: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048389c: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0048389f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004838a2: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x4838a7u); f_0063aac0();
    /* 004838a7: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004838aa: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 004838ad: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004838b0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004838b1: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004838b4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004838b5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004838b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004838b9: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004838bc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004838bd: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004838c0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004838c1: mov al, byte ptr [ebp - 0xd] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff3u))) & 0xffu);
    /* 004838c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004838c5: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004838c8: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004838cb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004838cc: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 004838d2: call 0x4fc950 */ r_esp -= 4; W32(r_esp, 0x4838d7u); f_004fc950();
    /* 004838d7: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 004838de: jmp 0x4838e9 */ goto L_004838e9;
L_004838e0:; BB(0x004838e0);
    /* 004838e0: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004838e3: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004838e6: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
L_004838e9:; BB(0x004838e9);
    /* 004838e9: cmp dword ptr [ebp - 0x20], 7 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004838ed: jge 0x483902 */ if ((fS==fO)) goto L_00483902;
L_004838ef:; BB(0x004838ef);
    /* 004838ef: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004838f2: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004838f5: mov dword ptr [ecx + eax*4 + 0x3e4], 0xffffffff */ W32((u32)(r_ecx+r_eax*4+0x3e4u), 0xffffffffu);
    /* 00483900: jmp 0x4838e0 */ goto L_004838e0;
L_00483902:; BB(0x00483902);
    /* 00483902: mov esp, ebp */ r_esp = r_ebp;
    /* 00483904: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00483905: ret  */ FN_RET(0x00483790); r_esp += 4; return;
}

void f_00483910(void) /* sub_483910 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00483910);
    /* 00483910: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00483911: mov ebp, esp */ r_ebp = r_esp;
    /* 00483913: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00483916: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00483919: mov byte ptr [ebp - 5], 0 */ W8((u32)(r_ebp+0xfffffffbu), 0x0u);
    /* 0048391d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00483924: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00483927: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00483928: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048392b: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x483930u); f_0047e390();
    /* 00483930: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00483933: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00483937: jne 0x48394d */ if (!fZ) goto L_0048394d;
L_00483939:; BB(0x00483939);
    /* 00483939: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048393b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0048393e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00483940: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00483943: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00483946: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x483948u); call_ind(t); }
    /* 00483948: jmp 0x4839da */ goto L_004839da;
L_0048394d:; BB(0x0048394d);
    /* 0048394d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00483950: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00483953: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00483954: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00483957: call 0x4817b0 */ r_esp -= 4; W32(r_esp, 0x48395cu); f_004817b0();
    /* 0048395c: mov byte ptr [ebp - 5], al */ W8((u32)(r_ebp+0xfffffffbu), (u8)r_eax);
    /* 0048395f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00483962: call 0x4c61b0 */ r_esp -= 4; W32(r_esp, 0x483967u); f_004c61b0();
    /* 00483967: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0048396a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048396c: je 0x4839a7 */ if (fZ) goto L_004839a7;
L_0048396e:; BB(0x0048396e);
    /* 0048396e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00483971: call 0x47cce0 */ r_esp -= 4; W32(r_esp, 0x483976u); f_0047cce0();
    /* 00483976: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00483979: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048397d: je 0x4839a5 */ if (fZ) goto L_004839a5;
L_0048397f:; BB(0x0048397f);
    /* 0048397f: movzx ecx, byte ptr [ebp - 5] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffffbu));
    /* 00483983: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00483985: je 0x483997 */ if (fZ) goto L_00483997;
L_00483987:; BB(0x00483987);
    /* 00483987: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0048398a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048398b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048398e: call 0x4cd540 */ r_esp -= 4; W32(r_esp, 0x483993u); f_004cd540();
    /* 00483993: jmp 0x4839da */ goto L_004839da;
L_00483997:; BB(0x00483997);
    /* 00483997: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0048399a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048399b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048399e: call 0x4cd560 */ r_esp -= 4; W32(r_esp, 0x4839a3u); f_004cd560();
    /* 004839a3: jmp 0x4839da */ goto L_004839da;
L_004839a5:; BB(0x004839a5);
    /* 004839a5: jmp 0x4839cb */ goto L_004839cb;
L_004839a7:; BB(0x004839a7);
    /* 004839a7: movzx ecx, byte ptr [ebp - 5] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffffbu));
    /* 004839ab: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004839ad: je 0x4839bd */ if (fZ) goto L_004839bd;
L_004839af:; BB(0x004839af);
    /* 004839af: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004839b2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004839b3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004839b6: call 0x4cd4e0 */ r_esp -= 4; W32(r_esp, 0x4839bbu); f_004cd4e0();
    /* 004839bb: jmp 0x4839c9 */ goto L_004839c9;
L_004839bd:; BB(0x004839bd);
    /* 004839bd: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004839c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004839c1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004839c4: call 0x4cd520 */ r_esp -= 4; W32(r_esp, 0x4839c9u); f_004cd520();
L_004839c9:; BB(0x004839c9);
    /* 004839c9: jmp 0x4839da */ goto L_004839da;
L_004839cb:; BB(0x004839cb);
    /* 004839cb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004839cd: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004839d0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004839d2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004839d5: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004839d8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4839dau); call_ind(t); }
L_004839da:; BB(0x004839da);
    /* 004839da: mov esp, ebp */ r_esp = r_ebp;
    /* 004839dc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004839dd: ret 8 */ FN_RET(0x00483910); r_esp += 12; return;
}

void f_004839e0(void) /* sub_4839E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004839e0);
    /* 004839e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004839e1: mov ebp, esp */ r_ebp = r_esp;
    /* 004839e3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004839e6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004839e9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004839f0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004839f3: call 0x481260 */ r_esp -= 4; W32(r_esp, 0x4839f8u); f_00481260();
    /* 004839f8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004839fb: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004839ff: jne 0x483a12 */ if (!fZ) goto L_00483a12;
L_00483a01:; BB(0x00483a01);
    /* 00483a01: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00483a03: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00483a06: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00483a08: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00483a0b: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00483a0e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x483a10u); call_ind(t); }
    /* 00483a10: jmp 0x483a5f */ goto L_00483a5f;
L_00483a12:; BB(0x00483a12);
    /* 00483a12: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00483a15: call 0x4c61b0 */ r_esp -= 4; W32(r_esp, 0x483a1au); f_004c61b0();
    /* 00483a1a: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00483a1d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00483a1f: je 0x483a42 */ if (fZ) goto L_00483a42;
L_00483a21:; BB(0x00483a21);
    /* 00483a21: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00483a24: call 0x47cce0 */ r_esp -= 4; W32(r_esp, 0x483a29u); f_0047cce0();
    /* 00483a29: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00483a2c: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00483a30: je 0x483a40 */ if (fZ) goto L_00483a40;
L_00483a32:; BB(0x00483a32);
    /* 00483a32: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00483a35: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00483a36: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00483a39: call 0x4cd5c0 */ r_esp -= 4; W32(r_esp, 0x483a3eu); f_004cd5c0();
    /* 00483a3e: jmp 0x483a5f */ goto L_00483a5f;
L_00483a40:; BB(0x00483a40);
    /* 00483a40: jmp 0x483a50 */ goto L_00483a50;
L_00483a42:; BB(0x00483a42);
    /* 00483a42: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00483a45: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00483a46: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00483a49: call 0x4cd5a0 */ r_esp -= 4; W32(r_esp, 0x483a4eu); f_004cd5a0();
    /* 00483a4e: jmp 0x483a5f */ goto L_00483a5f;
L_00483a50:; BB(0x00483a50);
    /* 00483a50: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00483a52: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00483a55: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00483a57: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00483a5a: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00483a5d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x483a5fu); call_ind(t); }
L_00483a5f:; BB(0x00483a5f);
    /* 00483a5f: mov esp, ebp */ r_esp = r_ebp;
    /* 00483a61: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00483a62: ret 4 */ FN_RET(0x004839e0); r_esp += 8; return;
}

void f_00483e50(void) /* sub_483E50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00483e50);
    /* 00483e50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00483e51: mov ebp, esp */ r_ebp = r_esp;
    /* 00483e53: sub esp, 0xd8 */ {  u32 a = r_esp; u32 b = 0xd8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00483e59: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00483e5e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00483e60: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00483e63: mov dword ptr [ebp - 0xd4], ecx */ W32((u32)(r_ebp+0xffffff2cu), r_ecx);
    /* 00483e69: mov eax, dword ptr [ebp - 0xd4] */ r_eax = R32((u32)(r_ebp+0xffffff2cu));
    /* 00483e6f: cmp dword ptr [eax + 0x3dc], 0x3e8 */ {  u32 a = R32((u32)(r_eax+0x3dcu)); u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00483e79: jne 0x483e86 */ if (!fZ) goto L_00483e86;
L_00483e7b:; BB(0x00483e7b);
    /* 00483e7b: mov word ptr [ebp - 0x68], 1 */ W16((u32)(r_ebp+0xffffff98u), 0x1u);
    /* 00483e81: jmp 0x483f10 */ goto L_00483f10;
L_00483e86:; BB(0x00483e86);
    /* 00483e86: mov ecx, dword ptr [ebp - 0xd4] */ r_ecx = R32((u32)(r_ebp+0xffffff2cu));
    /* 00483e8c: cmp dword ptr [ecx + 0x3dc], 0x1388 */ {  u32 a = R32((u32)(r_ecx+0x3dcu)); u32 b = 0x1388u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00483e96: jne 0x483ea0 */ if (!fZ) goto L_00483ea0;
L_00483e98:; BB(0x00483e98);
    /* 00483e98: mov word ptr [ebp - 0x68], 2 */ W16((u32)(r_ebp+0xffffff98u), 0x2u);
    /* 00483e9e: jmp 0x483f10 */ goto L_00483f10;
L_00483ea0:; BB(0x00483ea0);
    /* 00483ea0: mov edx, dword ptr [ebp - 0xd4] */ r_edx = R32((u32)(r_ebp+0xffffff2cu));
    /* 00483ea6: cmp dword ptr [edx + 0x3dc], 0x61a8 */ {  u32 a = R32((u32)(r_edx+0x3dcu)); u32 b = 0x61a8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00483eb0: jne 0x483eba */ if (!fZ) goto L_00483eba;
L_00483eb2:; BB(0x00483eb2);
    /* 00483eb2: mov word ptr [ebp - 0x68], 3 */ W16((u32)(r_ebp+0xffffff98u), 0x3u);
    /* 00483eb8: jmp 0x483f10 */ goto L_00483f10;
L_00483eba:; BB(0x00483eba);
    /* 00483eba: mov eax, dword ptr [ebp - 0xd4] */ r_eax = R32((u32)(r_ebp+0xffffff2cu));
    /* 00483ec0: cmp dword ptr [eax + 0x3dc], 0xc350 */ {  u32 a = R32((u32)(r_eax+0x3dcu)); u32 b = 0xc350u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00483eca: jne 0x483ed4 */ if (!fZ) goto L_00483ed4;
L_00483ecc:; BB(0x00483ecc);
    /* 00483ecc: mov word ptr [ebp - 0x68], 4 */ W16((u32)(r_ebp+0xffffff98u), 0x4u);
    /* 00483ed2: jmp 0x483f10 */ goto L_00483f10;
L_00483ed4:; BB(0x00483ed4);
    /* 00483ed4: mov ecx, dword ptr [ebp - 0xd4] */ r_ecx = R32((u32)(r_ebp+0xffffff2cu));
    /* 00483eda: cmp dword ptr [ecx + 0x3dc], 0x186a0 */ {  u32 a = R32((u32)(r_ecx+0x3dcu)); u32 b = 0x186a0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00483ee4: jne 0x483eee */ if (!fZ) goto L_00483eee;
L_00483ee6:; BB(0x00483ee6);
    /* 00483ee6: mov word ptr [ebp - 0x68], 5 */ W16((u32)(r_ebp+0xffffff98u), 0x5u);
    /* 00483eec: jmp 0x483f10 */ goto L_00483f10;
L_00483eee:; BB(0x00483eee);
    /* 00483eee: mov edx, dword ptr [ebp - 0xd4] */ r_edx = R32((u32)(r_ebp+0xffffff2cu));
    /* 00483ef4: cmp dword ptr [edx + 0x3dc], 0x7a120 */ {  u32 a = R32((u32)(r_edx+0x3dcu)); u32 b = 0x7a120u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00483efe: jne 0x483f08 */ if (!fZ) goto L_00483f08;
L_00483f00:; BB(0x00483f00);
    /* 00483f00: mov word ptr [ebp - 0x68], 6 */ W16((u32)(r_ebp+0xffffff98u), 0x6u);
    /* 00483f06: jmp 0x483f10 */ goto L_00483f10;
L_00483f08:; BB(0x00483f08);
    /* 00483f08: xor ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a ^ b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00483f0b: jmp 0x4841fb */ goto L_004841fb;
L_00483f10:; BB(0x00483f10);
    /* 00483f10: mov ecx, dword ptr [ebp - 0xd4] */ r_ecx = R32((u32)(r_ebp+0xffffff2cu));
    /* 00483f16: call 0x47e170 */ r_esp -= 4; W32(r_esp, 0x483f1bu); f_0047e170();
    /* 00483f1b: mov dword ptr [ebp - 0xd8], eax */ W32((u32)(r_ebp+0xffffff28u), r_eax);
    /* 00483f21: mov eax, dword ptr [ebp - 0xd8] */ r_eax = R32((u32)(r_ebp+0xffffff28u));
    /* 00483f27: sub eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00483f2a: mov dword ptr [ebp - 0xd8], eax */ W32((u32)(r_ebp+0xffffff28u), r_eax);
    /* 00483f30: cmp dword ptr [ebp - 0xd8], 0x10 */ {  u32 a = R32((u32)(r_ebp+0xffffff28u)); u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00483f37: ja 0x483f46 */ if ((!fC&&!fZ)) goto L_00483f46;
L_00483f39:; BB(0x00483f39);
    /* 00483f39: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 00483f3f: jmp dword ptr [ecx*4 + 0x48420c] */ { u32 t = R32((u32)(r_ecx*4+0x48420cu)); switch (t) { case 0x483f4eu: goto L_00483f4e; case 0x483f56u: goto L_00483f56; case 0x483f5eu: goto L_00483f5e; case 0x483f66u: goto L_00483f66; case 0x483f6eu: goto L_00483f6e; case 0x483f76u: goto L_00483f76; case 0x483f46u: goto L_00483f46; case 0x483f8eu: goto L_00483f8e; case 0x483f7eu: goto L_00483f7e; case 0x483f86u: goto L_00483f86; case 0x483f96u: goto L_00483f96; default: UNSUP(0x00483f3f, "jump table entry is not a known target"); } }
L_00483f46:; BB(0x00483f46);
    /* 00483f46: xor ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a ^ b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00483f49: jmp 0x4841fb */ goto L_004841fb;
L_00483f4e:; BB(0x00483f4e);
    /* 00483f4e: mov word ptr [ebp - 0x50], 1 */ W16((u32)(r_ebp+0xffffffb0u), 0x1u);
    /* 00483f54: jmp 0x483f9c */ goto L_00483f9c;
L_00483f56:; BB(0x00483f56);
    /* 00483f56: mov word ptr [ebp - 0x50], 2 */ W16((u32)(r_ebp+0xffffffb0u), 0x2u);
    /* 00483f5c: jmp 0x483f9c */ goto L_00483f9c;
L_00483f5e:; BB(0x00483f5e);
    /* 00483f5e: mov word ptr [ebp - 0x50], 3 */ W16((u32)(r_ebp+0xffffffb0u), 0x3u);
    /* 00483f64: jmp 0x483f9c */ goto L_00483f9c;
L_00483f66:; BB(0x00483f66);
    /* 00483f66: mov word ptr [ebp - 0x50], 4 */ W16((u32)(r_ebp+0xffffffb0u), 0x4u);
    /* 00483f6c: jmp 0x483f9c */ goto L_00483f9c;
L_00483f6e:; BB(0x00483f6e);
    /* 00483f6e: mov word ptr [ebp - 0x50], 5 */ W16((u32)(r_ebp+0xffffffb0u), 0x5u);
    /* 00483f74: jmp 0x483f9c */ goto L_00483f9c;
L_00483f76:; BB(0x00483f76);
    /* 00483f76: mov word ptr [ebp - 0x50], 6 */ W16((u32)(r_ebp+0xffffffb0u), 0x6u);
    /* 00483f7c: jmp 0x483f9c */ goto L_00483f9c;
L_00483f7e:; BB(0x00483f7e);
    /* 00483f7e: mov word ptr [ebp - 0x50], 7 */ W16((u32)(r_ebp+0xffffffb0u), 0x7u);
    /* 00483f84: jmp 0x483f9c */ goto L_00483f9c;
L_00483f86:; BB(0x00483f86);
    /* 00483f86: mov word ptr [ebp - 0x50], 8 */ W16((u32)(r_ebp+0xffffffb0u), 0x8u);
    /* 00483f8c: jmp 0x483f9c */ goto L_00483f9c;
L_00483f8e:; BB(0x00483f8e);
    /* 00483f8e: mov word ptr [ebp - 0x50], 9 */ W16((u32)(r_ebp+0xffffffb0u), 0x9u);
    /* 00483f94: jmp 0x483f9c */ goto L_00483f9c;
L_00483f96:; BB(0x00483f96);
    /* 00483f96: mov word ptr [ebp - 0x50], 0xa */ W16((u32)(r_ebp+0xffffffb0u), 0xau);
L_00483f9c:; BB(0x00483f9c);
    /* 00483f9c: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00483fa2: jmp 0x483fb0 */ goto L_00483fb0;
L_00483fa4:; BB(0x00483fa4);
    /* 00483fa4: mov dx, word ptr [ebp - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 00483fa8: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00483fac: mov word ptr [ebp - 4], dx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_edx);
L_00483fb0:; BB(0x00483fb0);
    /* 00483fb0: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00483fb4: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00483fb7: jge 0x484062 */ if ((fS==fO)) goto L_00484062;
L_00483fbd:; BB(0x00483fbd);
    /* 00483fbd: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00483fc1: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00483fc4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00483fc5: movsx edx, word ptr [ebp - 0x68] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff98u));
    /* 00483fc9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00483fca: movsx eax, word ptr [ebp - 0x50] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffb0u));
    /* 00483fce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00483fcf: push 0x6bd2a8 */ { u32 v = 0x6bd2a8u; r_esp -= 4; W32(r_esp, v); }
    /* 00483fd4: lea ecx, [ebp - 0xd0] */ r_ecx = (u32)(r_ebp+0xffffff30u);
    /* 00483fda: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00483fdb: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x483fe1u); call_ind(t); }
    /* 00483fe1: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00483fe4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00483fe6: lea edx, [ebp - 0xd0] */ r_edx = (u32)(r_ebp+0xffffff30u);
    /* 00483fec: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00483fed: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 00483ff2: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00483ff5: call 0x607960 */ r_esp -= 4; W32(r_esp, 0x483ffau); f_00607960();
    /* 00483ffa: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00483ffe: mov dword ptr [ebp + ecx*4 - 0x64], eax */ W32((u32)(r_ebp+r_ecx*4+0xffffff9cu), r_eax);
    /* 00484002: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00484006: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00484009: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048400a: movsx eax, word ptr [ebp - 0x68] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff98u));
    /* 0048400e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048400f: movsx ecx, word ptr [ebp - 0x50] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffb0u));
    /* 00484013: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00484014: push 0x6bd290 */ { u32 v = 0x6bd290u; r_esp -= 4; W32(r_esp, v); }
    /* 00484019: lea edx, [ebp - 0xd0] */ r_edx = (u32)(r_ebp+0xffffff30u);
    /* 0048401f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00484020: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x484026u); call_ind(t); }
    /* 00484026: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00484029: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0048402b: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0048402f: imul eax, eax, 0xc */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xcu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00484032: lea ecx, [ebp + eax - 0x44] */ r_ecx = (u32)(r_ebp+r_eax+0xffffffbcu);
    /* 00484036: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00484037: push 0x6bd288 */ { u32 v = 0x6bd288u; r_esp -= 4; W32(r_esp, v); }
    /* 0048403c: lea edx, [ebp - 0xd0] */ r_edx = (u32)(r_ebp+0xffffff30u);
    /* 00484042: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00484043: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 00484048: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0048404b: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 00484051: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 00484054: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00484056: mov ecx, eax */ r_ecx = r_eax;
    /* 00484058: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 0048405b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x48405du); call_ind(t); }
    /* 0048405d: jmp 0x483fa4 */ goto L_00483fa4;
L_00484062:; BB(0x00484062);
    /* 00484062: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00484065: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00484066: mov ecx, dword ptr [ebp - 0xd4] */ r_ecx = R32((u32)(r_ebp+0xffffff2cu));
    /* 0048406c: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x484071u); f_0047e390();
    /* 00484071: mov ecx, eax */ r_ecx = r_eax;
    /* 00484073: call 0x4c6a70 */ r_esp -= 4; W32(r_esp, 0x484078u); f_004c6a70();
    /* 00484078: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0048407b: mov word ptr [ebp - 0x48], 5 */ W16((u32)(r_ebp+0xffffffb8u), 0x5u);
    /* 00484081: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00484087: jmp 0x484095 */ goto L_00484095;
L_00484089:; BB(0x00484089);
    /* 00484089: mov dx, word ptr [ebp - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 0048408d: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00484091: mov word ptr [ebp - 4], dx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_edx);
L_00484095:; BB(0x00484095);
    /* 00484095: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00484099: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048409c: jge 0x4840b7 */ if ((fS==fO)) goto L_004840b7;
L_0048409e:; BB(0x0048409e);
    /* 0048409e: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004840a2: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 004840a5: cmp edx, dword ptr [ebp + ecx*4 - 0x64] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+r_ecx*4+0xffffff9cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004840a9: jle 0x4840b5 */ if ((fZ||fS!=fO)) goto L_004840b5;
L_004840ab:; BB(0x004840ab);
    /* 004840ab: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004840af: mov word ptr [ebp - 0x48], ax */ W16((u32)(r_ebp+0xffffffb8u), (u16)r_eax);
    /* 004840b3: jmp 0x4840b7 */ goto L_004840b7;
L_004840b5:; BB(0x004840b5);
    /* 004840b5: jmp 0x484089 */ goto L_00484089;
L_004840b7:; BB(0x004840b7);
    /* 004840b7: movsx ecx, word ptr [ebp - 0x48] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffb8u));
    /* 004840bb: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004840be: jne 0x4840c8 */ if (!fZ) goto L_004840c8;
L_004840c0:; BB(0x004840c0);
    /* 004840c0: xor ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a ^ b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004840c3: jmp 0x4841fb */ goto L_004841fb;
L_004840c8:; BB(0x004840c8);
    /* 004840c8: movsx edx, word ptr [ebp - 0x48] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffb8u));
    /* 004840cc: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004840cf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004840d0: movsx eax, word ptr [ebp - 0x68] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff98u));
    /* 004840d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004840d5: movsx ecx, word ptr [ebp - 0x50] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffb0u));
    /* 004840d9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004840da: push 0x6bd2a8 */ { u32 v = 0x6bd2a8u; r_esp -= 4; W32(r_esp, v); }
    /* 004840df: lea edx, [ebp - 0xd0] */ r_edx = (u32)(r_ebp+0xffffff30u);
    /* 004840e5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004840e6: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4840ecu); call_ind(t); }
    /* 004840ec: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004840ef: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 004840f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004840f3: lea ecx, [ebp - 0xd0] */ r_ecx = (u32)(r_ebp+0xffffff30u);
    /* 004840f9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004840fa: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 00484100: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 00484103: call 0x6079d0 */ r_esp -= 4; W32(r_esp, 0x484108u); f_006079d0();
    /* 00484108: movsx eax, word ptr [ebp - 0x48] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffb8u));
    /* 0048410c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048410f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00484110: movsx ecx, word ptr [ebp - 0x68] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff98u));
    /* 00484114: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00484115: movsx edx, word ptr [ebp - 0x50] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffb0u));
    /* 00484119: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048411a: push 0x6bd290 */ { u32 v = 0x6bd290u; r_esp -= 4; W32(r_esp, v); }
    /* 0048411f: lea eax, [ebp - 0xd0] */ r_eax = (u32)(r_ebp+0xffffff30u);
    /* 00484125: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00484126: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x48412cu); call_ind(t); }
    /* 0048412c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048412f: movsx ecx, word ptr [ebp - 0x48] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffb8u));
    /* 00484133: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00484136: mov word ptr [ebp - 4], cx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_ecx);
    /* 0048413a: jmp 0x484148 */ goto L_00484148;
L_0048413c:; BB(0x0048413c);
    /* 0048413c: mov dx, word ptr [ebp - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 00484140: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00484144: mov word ptr [ebp - 4], dx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_edx);
L_00484148:; BB(0x00484148);
    /* 00484148: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0048414c: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048414f: jge 0x4841f4 */ if ((fS==fO)) goto L_004841f4;
L_00484155:; BB(0x00484155);
    /* 00484155: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00484159: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048415c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048415d: movsx edx, word ptr [ebp - 0x68] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff98u));
    /* 00484161: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00484162: movsx eax, word ptr [ebp - 0x50] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffb0u));
    /* 00484166: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00484167: push 0x6bd2a8 */ { u32 v = 0x6bd2a8u; r_esp -= 4; W32(r_esp, v); }
    /* 0048416c: lea ecx, [ebp - 0xd0] */ r_ecx = (u32)(r_ebp+0xffffff30u);
    /* 00484172: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00484173: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x484179u); call_ind(t); }
    /* 00484179: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048417c: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00484180: mov eax, dword ptr [ebp + edx*4 - 0x68] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffff98u));
    /* 00484184: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00484185: lea ecx, [ebp - 0xd0] */ r_ecx = (u32)(r_ebp+0xffffff30u);
    /* 0048418b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048418c: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 00484192: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 00484195: call 0x6079d0 */ r_esp -= 4; W32(r_esp, 0x48419au); f_006079d0();
    /* 0048419a: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0048419e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004841a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004841a2: movsx ecx, word ptr [ebp - 0x68] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff98u));
    /* 004841a6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004841a7: movsx edx, word ptr [ebp - 0x50] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffb0u));
    /* 004841ab: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004841ac: push 0x6bd290 */ { u32 v = 0x6bd290u; r_esp -= 4; W32(r_esp, v); }
    /* 004841b1: lea eax, [ebp - 0xd0] */ r_eax = (u32)(r_ebp+0xffffff30u);
    /* 004841b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004841b8: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4841beu); call_ind(t); }
    /* 004841be: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004841c1: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004841c5: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004841c8: imul ecx, ecx, 0xc */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xcu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004841cb: lea edx, [ebp + ecx - 0x44] */ r_edx = (u32)(r_ebp+r_ecx+0xffffffbcu);
    /* 004841cf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004841d0: lea eax, [ebp - 0xd0] */ r_eax = (u32)(r_ebp+0xffffff30u);
    /* 004841d6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004841d7: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 004841dd: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 004841e0: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 004841e5: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 004841e8: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004841ea: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 004841ed: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4841efu); call_ind(t); }
    /* 004841ef: jmp 0x48413c */ goto L_0048413c;
L_004841f4:; BB(0x004841f4);
    /* 004841f4: movsx eax, word ptr [ebp - 0x48] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffb8u));
    /* 004841f8: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_004841fb:; BB(0x004841fb);
    /* 004841fb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004841fe: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00484200: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x484205u); f_00686d72();
    /* 00484205: mov esp, ebp */ r_esp = r_ebp;
    /* 00484207: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00484208: ret 4 */ FN_RET(0x00483e50); r_esp += 8; return;
}

