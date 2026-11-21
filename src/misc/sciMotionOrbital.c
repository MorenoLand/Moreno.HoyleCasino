#include "protos.h"

void f_00607130(void) /* sciMotionOrbital::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00607130);
    /* 00607130: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00607131: mov ebp, esp */ r_ebp = r_esp;
    /* 00607133: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00607136: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00607139: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0060713c: movzx ecx, byte ptr [eax + 0xc] */ r_ecx = (u32)R8((u32)(r_eax+0xcu));
    /* 00607140: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00607142: jne 0x607149 */ if (!fZ) goto L_00607149;
L_00607144:; BB(0x00607144);
    /* 00607144: jmp 0x6072b0 */ goto L_006072b0;
L_00607149:; BB(0x00607149);
    /* 00607149: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 0060714f: call 0x5f3e50 */ r_esp -= 4; W32(r_esp, 0x607154u); f_005f3e50();
    /* 00607154: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00607157: sub eax, dword ptr [edx + 0x28] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x28u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0060715a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060715b: call 0x686eba */ r_esp -= 4; W32(r_esp, 0x607160u); f_00686eba();
    /* 00607160: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00607163: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00607166: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00607169: cmp eax, dword ptr [edx + 0x184] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x184u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060716f: jge 0x607176 */ if ((fS==fO)) goto L_00607176;
L_00607171:; BB(0x00607171);
    /* 00607171: jmp 0x6072b0 */ goto L_006072b0;
L_00607176:; BB(0x00607176);
    /* 00607176: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 0060717c: call 0x5f3e50 */ r_esp -= 4; W32(r_esp, 0x607181u); f_005f3e50();
    /* 00607181: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00607184: mov dword ptr [ecx + 0x28], eax */ W32((u32)(r_ecx+0x28u), r_eax);
    /* 00607187: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0060718a: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0060718d: cmp dword ptr [eax + 0x184], 0 */ {  u32 a = R32((u32)(r_eax+0x184u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00607194: jne 0x6071a6 */ if (!fZ) goto L_006071a6;
L_00607196:; BB(0x00607196);
    /* 00607196: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00607199: fld dword ptr [ecx + 0x3c] */ FPUSH(R_F32((u32)(r_ecx+0x3cu)));
    /* 0060719c: fld1  */ FPUSH(1.0);
    /* 0060719e: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 006071a0: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006071a3: fstp dword ptr [edx + 0x30] */ W_F32((u32)(r_edx+0x30u), ST(0)); FPOP();
L_006071a6:; BB(0x006071a6);
    /* 006071a6: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 006071a9: fld dword ptr [eax + 0x30] */ FPUSH(R_F32((u32)(r_eax+0x30u)));
    /* 006071ac: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006071af: fadd dword ptr [ecx + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x3cu));
    /* 006071b2: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006071b5: fstp dword ptr [edx + 0x30] */ W_F32((u32)(r_edx+0x30u), ST(0)); FPOP();
    /* 006071b8: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 006071bb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006071bd: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006071c0: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 006071c3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6071c5u); call_ind(t); }
    /* 006071c5: fstp dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
    /* 006071c8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006071cb: fld dword ptr [ecx + 0x40] */ FPUSH(R_F32((u32)(r_ecx+0x40u)));
    /* 006071ce: fmul dword ptr [ebp - 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffff4u));
    /* 006071d1: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006071d4: fld dword ptr [edx + 0x34] */ FPUSH(R_F32((u32)(r_edx+0x34u)));
    /* 006071d7: fmul qword ptr [0x6d7e30] */ ST(0) = ST(0) * R_F64((u32)(0x6d7e30u));
    /* 006071dd: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 006071e0: fmul dword ptr [eax + 0x30] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x30u));
    /* 006071e3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006071e6: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 006071e9: fstp qword ptr [ebp - 0x18] */ W_F64((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 006071ec: call 0x687312 */ r_esp -= 4; W32(r_esp, 0x6071f1u); f_00687312();
    /* 006071f1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006071f4: fstp dword ptr [ebp - 0x1c] */ W_F32((u32)(r_ebp+0xffffffe4u), ST(0)); FPOP();
    /* 006071f7: fld dword ptr [ebp - 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe4u)));
    /* 006071fa: fmul qword ptr [ebp - 0x18] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xffffffe8u));
    /* 006071fd: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00607200: fiadd dword ptr [ecx + 0x10] */ ST(0) = ST(0) + (long double)(i32)R32((u32)(r_ecx+0x10u));
    /* 00607203: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00607206: fstp dword ptr [edx + 0x18] */ W_F32((u32)(r_edx+0x18u), ST(0)); FPOP();
    /* 00607209: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0060720c: fld dword ptr [eax + 0x34] */ FPUSH(R_F32((u32)(r_eax+0x34u)));
    /* 0060720f: fmul qword ptr [0x6d7e30] */ ST(0) = ST(0) * R_F64((u32)(0x6d7e30u));
    /* 00607215: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00607218: fmul dword ptr [ecx + 0x30] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x30u));
    /* 0060721b: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060721e: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 00607221: call 0x68730c */ r_esp -= 4; W32(r_esp, 0x607226u); f_0068730c();
    /* 00607226: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00607229: fstp dword ptr [ebp - 0x20] */ W_F32((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
    /* 0060722c: fld dword ptr [ebp - 0x20] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe0u)));
    /* 0060722f: fmul dword ptr [ebp - 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffff4u));
    /* 00607232: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00607235: fiadd dword ptr [edx + 0x14] */ ST(0) = ST(0) + (long double)(i32)R32((u32)(r_edx+0x14u));
    /* 00607238: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0060723b: fstp dword ptr [eax + 0x1c] */ W_F32((u32)(r_eax+0x1cu), ST(0)); FPOP();
    /* 0060723e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00607241: fld dword ptr [ecx + 0x18] */ FPUSH(R_F32((u32)(r_ecx+0x18u)));
    /* 00607244: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x607249u); f_00686cc0();
    /* 00607249: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0060724c: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0060724f: fld dword ptr [edx + 0x1c] */ FPUSH(R_F32((u32)(r_edx+0x1cu)));
    /* 00607252: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x607257u); f_00686cc0();
    /* 00607257: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0060725a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060725d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060725e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00607261: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00607262: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00607265: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00607268: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0060726b: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0060726e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00607270: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00607273: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x607275u); call_ind(t); }
    /* 00607275: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00607278: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060727b: sub edx, dword ptr [ecx + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x10u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0060727e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060727f: call 0x686eba */ r_esp -= 4; W32(r_esp, 0x607284u); f_00686eba();
    /* 00607284: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00607287: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060728a: jge 0x6072b0 */ if ((fS==fO)) goto L_006072b0;
L_0060728c:; BB(0x0060728c);
    /* 0060728c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0060728f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00607292: sub ecx, dword ptr [eax + 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x14u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00607295: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00607296: call 0x686eba */ r_esp -= 4; W32(r_esp, 0x60729bu); f_00686eba();
    /* 0060729b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060729e: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006072a1: jge 0x6072b0 */ if ((fS==fO)) goto L_006072b0;
L_006072a3:; BB(0x006072a3);
    /* 006072a3: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006072a6: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006072a8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006072ab: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 006072ae: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6072b0u); call_ind(t); }
L_006072b0:; BB(0x006072b0);
    /* 006072b0: mov esp, ebp */ r_esp = r_ebp;
    /* 006072b2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006072b3: ret  */ FN_RET(0x00607130); r_esp += 4; return;
}

