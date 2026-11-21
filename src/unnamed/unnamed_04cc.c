#include "protos.h"

void f_004cc3b0(void) /* sub_4CC3B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004cc3b0);
    /* 004cc3b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004cc3b1: mov ebp, esp */ r_ebp = r_esp;
    /* 004cc3b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004cc3b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004cc3b7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004cc3ba: mov ax, word ptr [eax + 0x134] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x134u))) & 0xffffu);
    /* 004cc3c1: mov esp, ebp */ r_esp = r_ebp;
    /* 004cc3c3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004cc3c4: ret  */ FN_RET(0x004cc3b0); r_esp += 4; return;
}

void f_004cc3d0(void) /* sub_4CC3D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004cc3d0);
    /* 004cc3d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004cc3d1: mov ebp, esp */ r_ebp = r_esp;
    /* 004cc3d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004cc3d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004cc3d7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004cc3da: mov ax, word ptr [eax + 0x136] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x136u))) & 0xffffu);
    /* 004cc3e1: mov esp, ebp */ r_esp = r_ebp;
    /* 004cc3e3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004cc3e4: ret  */ FN_RET(0x004cc3d0); r_esp += 4; return;
}

void f_004cc4b0(void) /* sub_4CC4B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004cc4b0);
    /* 004cc4b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004cc4b1: mov ebp, esp */ r_ebp = r_esp;
    /* 004cc4b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004cc4b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004cc4b7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004cc4ba: movsx ecx, word ptr [eax + 0x64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x64u));
    /* 004cc4be: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cc4c1: jne 0x4cc4d3 */ if (!fZ) goto L_004cc4d3;
L_004cc4c3:; BB(0x004cc4c3);
    /* 004cc4c3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004cc4c6: movsx eax, word ptr [edx + 0x13a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x13au));
    /* 004cc4cd: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 004cc4cf: jmp 0x4cc4dd */ goto L_004cc4dd;
L_004cc4d3:; BB(0x004cc4d3);
    /* 004cc4d3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004cc4d6: mov ax, word ptr [eax + 0x13a] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x13au))) & 0xffffu);
L_004cc4dd:; BB(0x004cc4dd);
    /* 004cc4dd: mov esp, ebp */ r_esp = r_ebp;
    /* 004cc4df: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004cc4e0: ret  */ FN_RET(0x004cc4b0); r_esp += 4; return;
}

void f_004cc4f0(void) /* sub_4CC4F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004cc4f0);
    /* 004cc4f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004cc4f1: mov ebp, esp */ r_ebp = r_esp;
    /* 004cc4f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004cc4f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004cc4f7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004cc4fa: movsx ecx, word ptr [eax + 0x64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x64u));
    /* 004cc4fe: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cc501: jne 0x4cc516 */ if (!fZ) goto L_004cc516;
L_004cc503:; BB(0x004cc503);
    /* 004cc503: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004cc506: movsx eax, word ptr [edx + 0x13c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x13cu));
    /* 004cc50d: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004cc50e: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004cc510: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004cc512: jmp 0x4cc520 */ goto L_004cc520;
L_004cc516:; BB(0x004cc516);
    /* 004cc516: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004cc519: mov ax, word ptr [eax + 0x13c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x13cu))) & 0xffffu);
L_004cc520:; BB(0x004cc520);
    /* 004cc520: mov esp, ebp */ r_esp = r_ebp;
    /* 004cc522: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004cc523: ret  */ FN_RET(0x004cc4f0); r_esp += 4; return;
}

void f_004cc530(void) /* sub_4CC530 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004cc530);
    /* 004cc530: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004cc531: mov ebp, esp */ r_ebp = r_esp;
    /* 004cc533: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004cc534: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004cc537: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004cc53a: mov ax, word ptr [eax + 0x13e] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x13eu))) & 0xffffu);
    /* 004cc541: mov esp, ebp */ r_esp = r_ebp;
    /* 004cc543: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004cc544: ret  */ FN_RET(0x004cc530); r_esp += 4; return;
}

void f_004cc550(void) /* sub_4CC550 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004cc550);
    /* 004cc550: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004cc551: mov ebp, esp */ r_ebp = r_esp;
    /* 004cc553: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004cc554: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004cc557: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004cc55a: mov ax, word ptr [eax + 0x140] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x140u))) & 0xffffu);
    /* 004cc561: mov esp, ebp */ r_esp = r_ebp;
    /* 004cc563: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004cc564: ret  */ FN_RET(0x004cc550); r_esp += 4; return;
}

void f_004cc7e0(void) /* sub_4CC7E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004cc7e0);
    /* 004cc7e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004cc7e1: mov ebp, esp */ r_ebp = r_esp;
    /* 004cc7e3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004cc7e6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004cc7e9: fld qword ptr [0x6b2c38] */ FPUSH(R_F64((u32)(0x6b2c38u)));
    /* 004cc7ef: fstp qword ptr [ebp - 8] */ W_F64((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 004cc7f2: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 004cc7f6: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 004cc7f9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004cc7fc: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004cc7ff: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 004cc802: cmp dword ptr [ebp - 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004cc806: ja 0x4cc843 */ if ((!fC&&!fZ)) goto L_004cc843;
L_004cc808:; BB(0x004cc808);
    /* 004cc808: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004cc80b: jmp dword ptr [edx*4 + 0x4cc870] */ { u32 t = R32((u32)(r_edx*4+0x4cc870u)); switch (t) { case 0x4cc812u: goto L_004cc812; case 0x4cc81du: goto L_004cc81d; case 0x4cc828u: goto L_004cc828; case 0x4cc82fu: goto L_004cc82f; case 0x4cc83au: goto L_004cc83a; default: UNSUP(0x004cc80b, "jump table entry is not a known target"); } }
L_004cc812:; BB(0x004cc812);
    /* 004cc812: fld qword ptr [0x6b2c38] */ FPUSH(R_F64((u32)(0x6b2c38u)));
    /* 004cc818: fstp qword ptr [ebp - 8] */ W_F64((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 004cc81b: jmp 0x4cc843 */ goto L_004cc843;
L_004cc81d:; BB(0x004cc81d);
    /* 004cc81d: fld qword ptr [0x6b2c40] */ FPUSH(R_F64((u32)(0x6b2c40u)));
    /* 004cc823: fstp qword ptr [ebp - 8] */ W_F64((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 004cc826: jmp 0x4cc843 */ goto L_004cc843;
L_004cc828:; BB(0x004cc828);
    /* 004cc828: fld1  */ FPUSH(1.0);
    /* 004cc82a: fstp qword ptr [ebp - 8] */ W_F64((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 004cc82d: jmp 0x4cc843 */ goto L_004cc843;
L_004cc82f:; BB(0x004cc82f);
    /* 004cc82f: fld qword ptr [0x6b3e40] */ FPUSH(R_F64((u32)(0x6b3e40u)));
    /* 004cc835: fstp qword ptr [ebp - 8] */ W_F64((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 004cc838: jmp 0x4cc843 */ goto L_004cc843;
L_004cc83a:; BB(0x004cc83a);
    /* 004cc83a: fld qword ptr [0x6bf7d8] */ FPUSH(R_F64((u32)(0x6bf7d8u)));
    /* 004cc840: fstp qword ptr [ebp - 8] */ W_F64((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
L_004cc843:; BB(0x004cc843);
    /* 004cc843: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004cc845: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004cc848: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cc849: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004cc84c: fld qword ptr [ebp - 8] */ FPUSH(R_F64((u32)(r_ebp+0xfffffff8u)));
    /* 004cc84f: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 004cc852: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004cc855: fldz  */ FPUSH(0.0);
    /* 004cc857: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 004cc85a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004cc85c: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 004cc85f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004cc860: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004cc863: call 0x4c6250 */ r_esp -= 4; W32(r_esp, 0x4cc868u); f_004c6250();
    /* 004cc868: mov esp, ebp */ r_esp = r_ebp;
    /* 004cc86a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004cc86b: ret 0xc */ FN_RET(0x004cc7e0); r_esp += 16; return;
}

void f_004cc980(void) /* sub_4CC980 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004cc980);
    /* 004cc980: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004cc981: mov ebp, esp */ r_ebp = r_esp;
    /* 004cc983: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004cc984: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004cc987: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004cc989: push 0x803 */ { u32 v = 0x803u; r_esp -= 4; W32(r_esp, v); }
    /* 004cc98e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004cc991: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cc992: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004cc995: call 0x4cc7e0 */ r_esp -= 4; W32(r_esp, 0x4cc99au); f_004cc7e0();
    /* 004cc99a: mov esp, ebp */ r_esp = r_ebp;
    /* 004cc99c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004cc99d: ret 4 */ FN_RET(0x004cc980); r_esp += 8; return;
}

void f_004cc9a0(void) /* sub_4CC9A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004cc9a0);
    /* 004cc9a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004cc9a1: mov ebp, esp */ r_ebp = r_esp;
    /* 004cc9a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004cc9a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004cc9a7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004cc9a9: push 0x803 */ { u32 v = 0x803u; r_esp -= 4; W32(r_esp, v); }
    /* 004cc9ae: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004cc9b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cc9b2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004cc9b5: call 0x4cc7e0 */ r_esp -= 4; W32(r_esp, 0x4cc9bau); f_004cc7e0();
    /* 004cc9ba: mov esp, ebp */ r_esp = r_ebp;
    /* 004cc9bc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004cc9bd: ret 4 */ FN_RET(0x004cc9a0); r_esp += 8; return;
}

void f_004cc9c0(void) /* sub_4CC9C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004cc9c0);
    /* 004cc9c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004cc9c1: mov ebp, esp */ r_ebp = r_esp;
    /* 004cc9c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004cc9c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004cc9c7: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004cc9c9: push 0x804 */ { u32 v = 0x804u; r_esp -= 4; W32(r_esp, v); }
    /* 004cc9ce: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004cc9d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cc9d2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004cc9d5: call 0x4cc7e0 */ r_esp -= 4; W32(r_esp, 0x4cc9dau); f_004cc7e0();
    /* 004cc9da: mov esp, ebp */ r_esp = r_ebp;
    /* 004cc9dc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004cc9dd: ret 4 */ FN_RET(0x004cc9c0); r_esp += 8; return;
}

void f_004cc9e0(void) /* sub_4CC9E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004cc9e0);
    /* 004cc9e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004cc9e1: mov ebp, esp */ r_ebp = r_esp;
    /* 004cc9e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004cc9e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004cc9e7: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004cc9e9: push 0x802 */ { u32 v = 0x802u; r_esp -= 4; W32(r_esp, v); }
    /* 004cc9ee: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004cc9f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cc9f2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004cc9f5: call 0x4cc7e0 */ r_esp -= 4; W32(r_esp, 0x4cc9fau); f_004cc7e0();
    /* 004cc9fa: mov esp, ebp */ r_esp = r_ebp;
    /* 004cc9fc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004cc9fd: ret 4 */ FN_RET(0x004cc9e0); r_esp += 8; return;
}

void f_004cca00(void) /* sub_4CCA00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004cca00);
    /* 004cca00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004cca01: mov ebp, esp */ r_ebp = r_esp;
    /* 004cca03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004cca04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004cca07: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004cca09: push 0x807 */ { u32 v = 0x807u; r_esp -= 4; W32(r_esp, v); }
    /* 004cca0e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004cca11: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cca12: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004cca15: call 0x4cc7e0 */ r_esp -= 4; W32(r_esp, 0x4cca1au); f_004cc7e0();
    /* 004cca1a: mov esp, ebp */ r_esp = r_ebp;
    /* 004cca1c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004cca1d: ret 4 */ FN_RET(0x004cca00); r_esp += 8; return;
}

void f_004cca20(void) /* sub_4CCA20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004cca20);
    /* 004cca20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004cca21: mov ebp, esp */ r_ebp = r_esp;
    /* 004cca23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004cca24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004cca27: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004cca29: push 0x807 */ { u32 v = 0x807u; r_esp -= 4; W32(r_esp, v); }
    /* 004cca2e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004cca31: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cca32: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004cca35: call 0x4cc7e0 */ r_esp -= 4; W32(r_esp, 0x4cca3au); f_004cc7e0();
    /* 004cca3a: mov esp, ebp */ r_esp = r_ebp;
    /* 004cca3c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004cca3d: ret 4 */ FN_RET(0x004cca20); r_esp += 8; return;
}

void f_004cca60(void) /* sub_4CCA60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004cca60);
    /* 004cca60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004cca61: mov ebp, esp */ r_ebp = r_esp;
    /* 004cca63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004cca64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004cca67: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cca6b: je 0x4cca7c */ if (fZ) goto L_004cca7c;
L_004cca6d:; BB(0x004cca6d);
    /* 004cca6d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004cca6f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004cca72: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004cca74: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004cca77: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004cca7a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4cca7cu); call_ind(t); }
L_004cca7c:; BB(0x004cca7c);
    /* 004cca7c: mov esp, ebp */ r_esp = r_ebp;
    /* 004cca7e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004cca7f: ret 4 */ FN_RET(0x004cca60); r_esp += 8; return;
}

void f_004cca90(void) /* sub_4CCA90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004cca90);
    /* 004cca90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004cca91: mov ebp, esp */ r_ebp = r_esp;
    /* 004cca93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004cca94: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004cca97: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004cca99: push 0x7fd */ { u32 v = 0x7fdu; r_esp -= 4; W32(r_esp, v); }
    /* 004cca9e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004ccaa1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ccaa2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ccaa5: call 0x4cc7e0 */ r_esp -= 4; W32(r_esp, 0x4ccaaau); f_004cc7e0();
    /* 004ccaaa: mov esp, ebp */ r_esp = r_ebp;
    /* 004ccaac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ccaad: ret 4 */ FN_RET(0x004cca90); r_esp += 8; return;
}

void f_004ccab0(void) /* sub_4CCAB0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004ccab0);
    /* 004ccab0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ccab1: mov ebp, esp */ r_ebp = r_esp;
    /* 004ccab3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004ccab4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004ccab7: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ccabb: je 0x4ccacc */ if (fZ) goto L_004ccacc;
L_004ccabd:; BB(0x004ccabd);
    /* 004ccabd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004ccabf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004ccac2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004ccac4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004ccac7: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004ccaca: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4ccaccu); call_ind(t); }
L_004ccacc:; BB(0x004ccacc);
    /* 004ccacc: mov esp, ebp */ r_esp = r_ebp;
    /* 004ccace: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ccacf: ret 4 */ FN_RET(0x004ccab0); r_esp += 8; return;
}

void f_004ccae0(void) /* sub_4CCAE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004ccae0);
    /* 004ccae0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ccae1: mov ebp, esp */ r_ebp = r_esp;
    /* 004ccae3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004ccae4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004ccae7: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004ccae9: push 0x7fe */ { u32 v = 0x7feu; r_esp -= 4; W32(r_esp, v); }
    /* 004ccaee: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004ccaf1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ccaf2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ccaf5: call 0x4cc7e0 */ r_esp -= 4; W32(r_esp, 0x4ccafau); f_004cc7e0();
    /* 004ccafa: mov esp, ebp */ r_esp = r_ebp;
    /* 004ccafc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ccafd: ret 4 */ FN_RET(0x004ccae0); r_esp += 8; return;
}

void f_004ccb20(void) /* sub_4CCB20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004ccb20);
    /* 004ccb20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ccb21: mov ebp, esp */ r_ebp = r_esp;
    /* 004ccb23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004ccb24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004ccb27: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004ccb29: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004ccb2b: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4ccb30u); f_0062fbf0();
    /* 004ccb30: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ccb33: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 004ccb35: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 004ccb37: and eax, 0xfffffbef */ {  u32 a = r_eax; u32 b = 0xfffffbefu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004ccb3c: add eax, 0x80d */ {  u32 a = r_eax; u32 b = 0x80du; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004ccb41: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ccb42: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004ccb45: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ccb46: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ccb49: call 0x4cc7e0 */ r_esp -= 4; W32(r_esp, 0x4ccb4eu); f_004cc7e0();
    /* 004ccb4e: mov esp, ebp */ r_esp = r_ebp;
    /* 004ccb50: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ccb51: ret 4 */ FN_RET(0x004ccb20); r_esp += 8; return;
}

void f_004ccb60(void) /* sub_4CCB60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004ccb60);
    /* 004ccb60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ccb61: mov ebp, esp */ r_ebp = r_esp;
    /* 004ccb63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004ccb64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004ccb67: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004ccb69: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004ccb6b: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4ccb70u); f_0062fbf0();
    /* 004ccb70: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ccb73: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 004ccb75: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 004ccb77: and eax, 0xfffffbee */ {  u32 a = r_eax; u32 b = 0xfffffbeeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004ccb7c: add eax, 0x80e */ {  u32 a = r_eax; u32 b = 0x80eu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004ccb81: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ccb82: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004ccb85: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ccb86: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ccb89: call 0x4cc7e0 */ r_esp -= 4; W32(r_esp, 0x4ccb8eu); f_004cc7e0();
    /* 004ccb8e: mov esp, ebp */ r_esp = r_ebp;
    /* 004ccb90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ccb91: ret 4 */ FN_RET(0x004ccb60); r_esp += 8; return;
}

void f_004ccba0(void) /* sub_4CCBA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004ccba0);
    /* 004ccba0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ccba1: mov ebp, esp */ r_ebp = r_esp;
    /* 004ccba3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004ccba4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004ccba7: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004ccba9: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004ccbab: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4ccbb0u); f_0062fbf0();
    /* 004ccbb0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ccbb3: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 004ccbb5: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 004ccbb7: and eax, 0xfffffbef */ {  u32 a = r_eax; u32 b = 0xfffffbefu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004ccbbc: add eax, 0x80d */ {  u32 a = r_eax; u32 b = 0x80du; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004ccbc1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ccbc2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004ccbc5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ccbc6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ccbc9: call 0x4cc7e0 */ r_esp -= 4; W32(r_esp, 0x4ccbceu); f_004cc7e0();
    /* 004ccbce: mov esp, ebp */ r_esp = r_ebp;
    /* 004ccbd0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ccbd1: ret 4 */ FN_RET(0x004ccba0); r_esp += 8; return;
}

void f_004ccbe0(void) /* sub_4CCBE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004ccbe0);
    /* 004ccbe0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ccbe1: mov ebp, esp */ r_ebp = r_esp;
    /* 004ccbe3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004ccbe4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004ccbe7: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004ccbe9: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004ccbeb: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4ccbf0u); f_0062fbf0();
    /* 004ccbf0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ccbf3: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 004ccbf5: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 004ccbf7: and eax, 0xfffffbe9 */ {  u32 a = r_eax; u32 b = 0xfffffbe9u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004ccbfc: add eax, 0x813 */ {  u32 a = r_eax; u32 b = 0x813u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004ccc01: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ccc02: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004ccc05: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ccc06: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ccc09: call 0x4cc7e0 */ r_esp -= 4; W32(r_esp, 0x4ccc0eu); f_004cc7e0();
    /* 004ccc0e: mov esp, ebp */ r_esp = r_ebp;
    /* 004ccc10: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ccc11: ret 4 */ FN_RET(0x004ccbe0); r_esp += 8; return;
}

void f_004ccc20(void) /* sub_4CCC20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004ccc20);
    /* 004ccc20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ccc21: mov ebp, esp */ r_ebp = r_esp;
    /* 004ccc23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004ccc24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004ccc27: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004ccc29: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004ccc2b: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4ccc30u); f_0062fbf0();
    /* 004ccc30: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ccc33: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 004ccc35: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 004ccc37: and eax, 0xfffffbeb */ {  u32 a = r_eax; u32 b = 0xfffffbebu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004ccc3c: add eax, 0x811 */ {  u32 a = r_eax; u32 b = 0x811u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004ccc41: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ccc42: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004ccc45: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ccc46: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ccc49: call 0x4cc7e0 */ r_esp -= 4; W32(r_esp, 0x4ccc4eu); f_004cc7e0();
    /* 004ccc4e: mov esp, ebp */ r_esp = r_ebp;
    /* 004ccc50: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ccc51: ret 4 */ FN_RET(0x004ccc20); r_esp += 8; return;
}

void f_004ccc60(void) /* sub_4CCC60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004ccc60);
    /* 004ccc60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ccc61: mov ebp, esp */ r_ebp = r_esp;
    /* 004ccc63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004ccc64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004ccc67: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004ccc69: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004ccc6b: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4ccc70u); f_0062fbf0();
    /* 004ccc70: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ccc73: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 004ccc75: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 004ccc77: and eax, 0xfffffbd7 */ {  u32 a = r_eax; u32 b = 0xfffffbd7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004ccc7c: add eax, 0x819 */ {  u32 a = r_eax; u32 b = 0x819u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004ccc81: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ccc82: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004ccc85: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ccc86: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ccc89: call 0x4cc7e0 */ r_esp -= 4; W32(r_esp, 0x4ccc8eu); f_004cc7e0();
    /* 004ccc8e: mov esp, ebp */ r_esp = r_ebp;
    /* 004ccc90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ccc91: ret 4 */ FN_RET(0x004ccc60); r_esp += 8; return;
}

void f_004ccca0(void) /* sub_4CCCA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004ccca0);
    /* 004ccca0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ccca1: mov ebp, esp */ r_ebp = r_esp;
    /* 004ccca3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004ccca4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004ccca7: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004ccca9: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004cccab: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4cccb0u); f_0062fbf0();
    /* 004cccb0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004cccb3: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 004cccb5: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 004cccb7: and eax, 0xfffffbd6 */ {  u32 a = r_eax; u32 b = 0xfffffbd6u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004cccbc: add eax, 0x81a */ {  u32 a = r_eax; u32 b = 0x81au; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004cccc1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cccc2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004cccc5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cccc6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004cccc9: call 0x4cc7e0 */ r_esp -= 4; W32(r_esp, 0x4cccceu); f_004cc7e0();
    /* 004cccce: mov esp, ebp */ r_esp = r_ebp;
    /* 004cccd0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004cccd1: ret 4 */ FN_RET(0x004ccca0); r_esp += 8; return;
}

void f_004ccce0(void) /* sub_4CCCE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004ccce0);
    /* 004ccce0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ccce1: mov ebp, esp */ r_ebp = r_esp;
    /* 004ccce3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004ccce4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004ccce7: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004ccce9: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004ccceb: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4cccf0u); f_0062fbf0();
    /* 004cccf0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004cccf3: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 004cccf5: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 004cccf7: and eax, 0xfffffbd7 */ {  u32 a = r_eax; u32 b = 0xfffffbd7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004cccfc: add eax, 0x819 */ {  u32 a = r_eax; u32 b = 0x819u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004ccd01: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ccd02: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004ccd05: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ccd06: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ccd09: call 0x4cc7e0 */ r_esp -= 4; W32(r_esp, 0x4ccd0eu); f_004cc7e0();
    /* 004ccd0e: mov esp, ebp */ r_esp = r_ebp;
    /* 004ccd10: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ccd11: ret 4 */ FN_RET(0x004ccce0); r_esp += 8; return;
}

void f_004ccd20(void) /* sub_4CCD20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004ccd20);
    /* 004ccd20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ccd21: mov ebp, esp */ r_ebp = r_esp;
    /* 004ccd23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004ccd24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004ccd27: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004ccd29: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004ccd2b: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4ccd30u); f_0062fbf0();
    /* 004ccd30: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ccd33: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 004ccd35: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 004ccd37: and eax, 0xfffffbd1 */ {  u32 a = r_eax; u32 b = 0xfffffbd1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004ccd3c: add eax, 0x81f */ {  u32 a = r_eax; u32 b = 0x81fu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004ccd41: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ccd42: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004ccd45: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ccd46: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ccd49: call 0x4cc7e0 */ r_esp -= 4; W32(r_esp, 0x4ccd4eu); f_004cc7e0();
    /* 004ccd4e: mov esp, ebp */ r_esp = r_ebp;
    /* 004ccd50: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ccd51: ret 4 */ FN_RET(0x004ccd20); r_esp += 8; return;
}

void f_004ccd60(void) /* sub_4CCD60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004ccd60);
    /* 004ccd60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ccd61: mov ebp, esp */ r_ebp = r_esp;
    /* 004ccd63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004ccd64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004ccd67: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004ccd69: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004ccd6b: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4ccd70u); f_0062fbf0();
    /* 004ccd70: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ccd73: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 004ccd75: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 004ccd77: and eax, 0xfffffbed */ {  u32 a = r_eax; u32 b = 0xfffffbedu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004ccd7c: add eax, 0x81d */ {  u32 a = r_eax; u32 b = 0x81du; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004ccd81: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ccd82: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004ccd85: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ccd86: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ccd89: call 0x4cc7e0 */ r_esp -= 4; W32(r_esp, 0x4ccd8eu); f_004cc7e0();
    /* 004ccd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 004ccd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ccd91: ret 4 */ FN_RET(0x004ccd60); r_esp += 8; return;
}

void f_004ccda0(void) /* sub_4CCDA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004ccda0);
    /* 004ccda0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ccda1: mov ebp, esp */ r_ebp = r_esp;
    /* 004ccda3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004ccda4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004ccda7: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004ccda9: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004ccdab: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4ccdb0u); f_0062fbf0();
    /* 004ccdb0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ccdb3: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 004ccdb5: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 004ccdb7: and eax, 0xfffffff4 */ {  u32 a = r_eax; u32 b = 0xfffffff4u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004ccdba: add eax, 0x402 */ {  u32 a = r_eax; u32 b = 0x402u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004ccdbf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ccdc0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004ccdc3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ccdc4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ccdc7: call 0x4cc7e0 */ r_esp -= 4; W32(r_esp, 0x4ccdccu); f_004cc7e0();
    /* 004ccdcc: mov esp, ebp */ r_esp = r_ebp;
    /* 004ccdce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ccdcf: ret 4 */ FN_RET(0x004ccda0); r_esp += 8; return;
}

void f_004ccde0(void) /* sub_4CCDE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004ccde0);
    /* 004ccde0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ccde1: mov ebp, esp */ r_ebp = r_esp;
    /* 004ccde3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004ccde4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004ccde7: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004ccde9: push 0x816 */ { u32 v = 0x816u; r_esp -= 4; W32(r_esp, v); }
    /* 004ccdee: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004ccdf1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ccdf2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ccdf5: call 0x4cc7e0 */ r_esp -= 4; W32(r_esp, 0x4ccdfau); f_004cc7e0();
    /* 004ccdfa: mov esp, ebp */ r_esp = r_ebp;
    /* 004ccdfc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ccdfd: ret 4 */ FN_RET(0x004ccde0); r_esp += 8; return;
}

void f_004cce00(void) /* sub_4CCE00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004cce00);
    /* 004cce00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004cce01: mov ebp, esp */ r_ebp = r_esp;
    /* 004cce03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004cce04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004cce07: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004cce09: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004cce0b: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4cce10u); f_0062fbf0();
    /* 004cce10: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004cce13: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 004cce15: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 004cce17: and eax, 0xfffffbce */ {  u32 a = r_eax; u32 b = 0xfffffbceu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004cce1c: add eax, 0x828 */ {  u32 a = r_eax; u32 b = 0x828u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004cce21: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cce22: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004cce25: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cce26: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004cce29: call 0x4cc7e0 */ r_esp -= 4; W32(r_esp, 0x4cce2eu); f_004cc7e0();
    /* 004cce2e: mov esp, ebp */ r_esp = r_ebp;
    /* 004cce30: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004cce31: ret 4 */ FN_RET(0x004cce00); r_esp += 8; return;
}

void f_004cce40(void) /* sub_4CCE40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004cce40);
    /* 004cce40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004cce41: mov ebp, esp */ r_ebp = r_esp;
    /* 004cce43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004cce44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004cce47: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004cce49: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004cce4b: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4cce50u); f_0062fbf0();
    /* 004cce50: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004cce53: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 004cce55: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 004cce57: and eax, 0xfffffbfd */ {  u32 a = r_eax; u32 b = 0xfffffbfdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004cce5c: add eax, 0x805 */ {  u32 a = r_eax; u32 b = 0x805u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004cce61: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cce62: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004cce65: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cce66: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004cce69: call 0x4cc7e0 */ r_esp -= 4; W32(r_esp, 0x4cce6eu); f_004cc7e0();
    /* 004cce6e: mov esp, ebp */ r_esp = r_ebp;
    /* 004cce70: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004cce71: ret 4 */ FN_RET(0x004cce40); r_esp += 8; return;
}

void f_004cce80(void) /* sub_4CCE80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004cce80);
    /* 004cce80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004cce81: mov ebp, esp */ r_ebp = r_esp;
    /* 004cce83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004cce84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004cce87: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004cce89: push 0x80c */ { u32 v = 0x80cu; r_esp -= 4; W32(r_esp, v); }
    /* 004cce8e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004cce91: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cce92: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004cce95: call 0x4cc7e0 */ r_esp -= 4; W32(r_esp, 0x4cce9au); f_004cc7e0();
    /* 004cce9a: mov esp, ebp */ r_esp = r_ebp;
    /* 004cce9c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004cce9d: ret 4 */ FN_RET(0x004cce80); r_esp += 8; return;
}

void f_004ccea0(void) /* sub_4CCEA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004ccea0);
    /* 004ccea0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ccea1: mov ebp, esp */ r_ebp = r_esp;
    /* 004ccea3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004ccea4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004ccea7: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cceab: je 0x4ccebc */ if (fZ) goto L_004ccebc;
L_004ccead:; BB(0x004ccead);
    /* 004ccead: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004cceaf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004cceb2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004cceb4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004cceb7: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004cceba: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4ccebcu); call_ind(t); }
L_004ccebc:; BB(0x004ccebc);
    /* 004ccebc: mov esp, ebp */ r_esp = r_ebp;
    /* 004ccebe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ccebf: ret 4 */ FN_RET(0x004ccea0); r_esp += 8; return;
}

void f_004cced0(void) /* sub_4CCED0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004cced0);
    /* 004cced0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004cced1: mov ebp, esp */ r_ebp = r_esp;
    /* 004cced3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004cced4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004cced7: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004cced9: push 0x80b */ { u32 v = 0x80bu; r_esp -= 4; W32(r_esp, v); }
    /* 004ccede: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004ccee1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ccee2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ccee5: call 0x4cc7e0 */ r_esp -= 4; W32(r_esp, 0x4cceeau); f_004cc7e0();
    /* 004cceea: mov esp, ebp */ r_esp = r_ebp;
    /* 004cceec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004cceed: ret 4 */ FN_RET(0x004cced0); r_esp += 8; return;
}

void f_004ccef0(void) /* sub_4CCEF0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004ccef0);
    /* 004ccef0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ccef1: mov ebp, esp */ r_ebp = r_esp;
    /* 004ccef3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004ccef4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004ccef7: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004ccef9: push 0x818 */ { u32 v = 0x818u; r_esp -= 4; W32(r_esp, v); }
    /* 004ccefe: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004ccf01: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ccf02: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ccf05: call 0x4cc7e0 */ r_esp -= 4; W32(r_esp, 0x4ccf0au); f_004cc7e0();
    /* 004ccf0a: mov esp, ebp */ r_esp = r_ebp;
    /* 004ccf0c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ccf0d: ret 4 */ FN_RET(0x004ccef0); r_esp += 8; return;
}

void f_004ccf10(void) /* sub_4CCF10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004ccf10);
    /* 004ccf10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ccf11: mov ebp, esp */ r_ebp = r_esp;
    /* 004ccf13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004ccf14: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004ccf17: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ccf1b: je 0x4ccf2c */ if (fZ) goto L_004ccf2c;
L_004ccf1d:; BB(0x004ccf1d);
    /* 004ccf1d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004ccf1f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004ccf22: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004ccf24: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004ccf27: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004ccf2a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4ccf2cu); call_ind(t); }
L_004ccf2c:; BB(0x004ccf2c);
    /* 004ccf2c: mov esp, ebp */ r_esp = r_ebp;
    /* 004ccf2e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ccf2f: ret 4 */ FN_RET(0x004ccf10); r_esp += 8; return;
}

void f_004ccf40(void) /* sub_4CCF40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004ccf40);
    /* 004ccf40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ccf41: mov ebp, esp */ r_ebp = r_esp;
    /* 004ccf43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004ccf44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004ccf47: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004ccf49: push 0x817 */ { u32 v = 0x817u; r_esp -= 4; W32(r_esp, v); }
    /* 004ccf4e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004ccf51: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ccf52: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ccf55: call 0x4cc7e0 */ r_esp -= 4; W32(r_esp, 0x4ccf5au); f_004cc7e0();
    /* 004ccf5a: mov esp, ebp */ r_esp = r_ebp;
    /* 004ccf5c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ccf5d: ret 4 */ FN_RET(0x004ccf40); r_esp += 8; return;
}

void f_004ccf60(void) /* sub_4CCF60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004ccf60);
    /* 004ccf60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ccf61: mov ebp, esp */ r_ebp = r_esp;
    /* 004ccf63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004ccf64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004ccf67: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004ccf69: push 0x7fe */ { u32 v = 0x7feu; r_esp -= 4; W32(r_esp, v); }
    /* 004ccf6e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004ccf71: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ccf72: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ccf75: call 0x4cc7e0 */ r_esp -= 4; W32(r_esp, 0x4ccf7au); f_004cc7e0();
    /* 004ccf7a: mov esp, ebp */ r_esp = r_ebp;
    /* 004ccf7c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ccf7d: ret 4 */ FN_RET(0x004ccf60); r_esp += 8; return;
}

void f_004ccf80(void) /* sub_4CCF80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004ccf80);
    /* 004ccf80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ccf81: mov ebp, esp */ r_ebp = r_esp;
    /* 004ccf83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004ccf84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004ccf87: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004ccf89: push 0x815 */ { u32 v = 0x815u; r_esp -= 4; W32(r_esp, v); }
    /* 004ccf8e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004ccf91: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ccf92: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ccf95: call 0x4cc7e0 */ r_esp -= 4; W32(r_esp, 0x4ccf9au); f_004cc7e0();
    /* 004ccf9a: mov esp, ebp */ r_esp = r_ebp;
    /* 004ccf9c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ccf9d: ret 4 */ FN_RET(0x004ccf80); r_esp += 8; return;
}

void f_004ccfa0(void) /* sub_4CCFA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004ccfa0);
    /* 004ccfa0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ccfa1: mov ebp, esp */ r_ebp = r_esp;
    /* 004ccfa3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004ccfa4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004ccfa7: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004ccfa9: push 0x80a */ { u32 v = 0x80au; r_esp -= 4; W32(r_esp, v); }
    /* 004ccfae: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004ccfb1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ccfb2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ccfb5: call 0x4cc7e0 */ r_esp -= 4; W32(r_esp, 0x4ccfbau); f_004cc7e0();
    /* 004ccfba: mov esp, ebp */ r_esp = r_ebp;
    /* 004ccfbc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ccfbd: ret 4 */ FN_RET(0x004ccfa0); r_esp += 8; return;
}

void f_004ccfc0(void) /* sub_4CCFC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004ccfc0);
    /* 004ccfc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ccfc1: mov ebp, esp */ r_ebp = r_esp;
    /* 004ccfc3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004ccfc4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004ccfc7: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004ccfc9: push 0x80f */ { u32 v = 0x80fu; r_esp -= 4; W32(r_esp, v); }
    /* 004ccfce: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004ccfd1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ccfd2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ccfd5: call 0x4cc7e0 */ r_esp -= 4; W32(r_esp, 0x4ccfdau); f_004cc7e0();
    /* 004ccfda: mov esp, ebp */ r_esp = r_ebp;
    /* 004ccfdc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ccfdd: ret 4 */ FN_RET(0x004ccfc0); r_esp += 8; return;
}

void f_004ccfe0(void) /* sub_4CCFE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004ccfe0);
    /* 004ccfe0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ccfe1: mov ebp, esp */ r_ebp = r_esp;
    /* 004ccfe3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004ccfe4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004ccfe7: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004ccfe9: push 0x81b */ { u32 v = 0x81bu; r_esp -= 4; W32(r_esp, v); }
    /* 004ccfee: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004ccff1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ccff2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ccff5: call 0x4cc7e0 */ r_esp -= 4; W32(r_esp, 0x4ccffau); f_004cc7e0();
    /* 004ccffa: mov esp, ebp */ r_esp = r_ebp;
    /* 004ccffc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ccffd: ret 4 */ FN_RET(0x004ccfe0); r_esp += 8; return;
}

