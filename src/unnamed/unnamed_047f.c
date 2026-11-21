#include "protos.h"

void f_0047f090(void) /* sub_47F090 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047f090);
    /* 0047f090: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047f091: mov ebp, esp */ r_ebp = r_esp;
    /* 0047f093: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047f094: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0047f097: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047f09a: mov ecx, dword ptr [eax + 0x4a0] */ r_ecx = R32((u32)(r_eax+0x4a0u));
    /* 0047f0a0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047f0a3: mov eax, dword ptr [edx + 0x4a0] */ r_eax = R32((u32)(r_edx+0x4a0u));
    /* 0047f0a9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0047f0ab: mov ecx, eax */ r_ecx = r_eax;
    /* 0047f0ad: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0047f0b0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47f0b2u); call_ind(t); }
    /* 0047f0b2: mov esp, ebp */ r_esp = r_ebp;
    /* 0047f0b4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047f0b5: ret  */ FN_RET(0x0047f090); r_esp += 4; return;
}

void f_0047f0c0(void) /* sub_47F0C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047f0c0);
    /* 0047f0c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047f0c1: mov ebp, esp */ r_ebp = r_esp;
    /* 0047f0c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047f0c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0047f0c7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047f0ca: mov eax, dword ptr [eax + 0x484] */ r_eax = R32((u32)(r_eax+0x484u));
    /* 0047f0d0: mov esp, ebp */ r_esp = r_ebp;
    /* 0047f0d2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047f0d3: ret  */ FN_RET(0x0047f0c0); r_esp += 4; return;
}

void f_0047f8e0(void) /* sub_47F8E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047f8e0);
    /* 0047f8e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047f8e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0047f8e3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0047f8e6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0047f8e9: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0047f8ef: jmp 0x47f8fd */ goto L_0047f8fd;
L_0047f8f1:; BB(0x0047f8f1);
    /* 0047f8f1: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 0047f8f5: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0047f8f9: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_0047f8fd:; BB(0x0047f8fd);
    /* 0047f8fd: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0047f901: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047f904: movsx eax, word ptr [edx + 0x7d0] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x7d0u));
    /* 0047f90b: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047f90d: jge 0x47f934 */ if ((fS==fO)) goto L_0047f934;
L_0047f90f:; BB(0x0047f90f);
    /* 0047f90f: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0047f913: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047f916: mov eax, dword ptr [edx + ecx*4 + 0x4b0] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x4b0u));
    /* 0047f91d: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0047f921: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047f924: mov ecx, dword ptr [edx + ecx*4 + 0x4b0] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x4b0u));
    /* 0047f92b: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0047f92d: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 0047f930: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x47f932u); call_ind(t); }
    /* 0047f932: jmp 0x47f8f1 */ goto L_0047f8f1;
L_0047f934:; BB(0x0047f934);
    /* 0047f934: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047f937: mov word ptr [eax + 0x7d0], 0 */ W16((u32)(r_eax+0x7d0u), 0x0u);
    /* 0047f940: mov esp, ebp */ r_esp = r_ebp;
    /* 0047f942: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047f943: ret  */ FN_RET(0x0047f8e0); r_esp += 4; return;
}

void f_0047f950(void) /* sub_47F950 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047f950);
    /* 0047f950: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047f951: mov ebp, esp */ r_ebp = r_esp;
    /* 0047f953: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047f954: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0047f957: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 0047f95d: call 0x5da830 */ r_esp -= 4; W32(r_esp, 0x47f962u); f_005da830();
    /* 0047f962: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0047f965: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047f967: je 0x47f970 */ if (fZ) goto L_0047f970;
L_0047f969:; BB(0x0047f969);
    /* 0047f969: mov eax, 7 */ r_eax = 0x7u;
    /* 0047f96e: jmp 0x47f975 */ goto L_0047f975;
L_0047f970:; BB(0x0047f970);
    /* 0047f970: mov eax, 8 */ r_eax = 0x8u;
L_0047f975:; BB(0x0047f975);
    /* 0047f975: mov esp, ebp */ r_esp = r_ebp;
    /* 0047f977: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047f978: ret  */ FN_RET(0x0047f950); r_esp += 4; return;
}

void f_0047f980(void) /* sub_47F980 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047f980);
    /* 0047f980: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047f981: mov ebp, esp */ r_ebp = r_esp;
    /* 0047f983: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0047f986: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0047f989: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047f98b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047f98c: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0047f992: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0047f995: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047f996: fld1  */ FPUSH(1.0);
    /* 0047f998: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0047f99b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0047f99d: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0047f99f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047f9a1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047f9a3: push 0x391 */ { u32 v = 0x391u; r_esp -= 4; W32(r_esp, v); }
    /* 0047f9a8: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0047f9ad: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0047f9af: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0047f9b5: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 0047f9bb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47f9bdu); call_ind(t); }
    /* 0047f9bd: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0047f9c4: jmp 0x47f9cf */ goto L_0047f9cf;
L_0047f9c6:; BB(0x0047f9c6);
    /* 0047f9c6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0047f9c9: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0047f9cc: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0047f9cf:; BB(0x0047f9cf);
    /* 0047f9cf: cmp dword ptr [ebp - 0x10], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047f9d3: jge 0x47fa8d */ if ((fS==fO)) goto L_0047fa8d;
L_0047f9d9:; BB(0x0047f9d9);
    /* 0047f9d9: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0047f9dc: mov eax, dword ptr [edx + 0x4a4] */ r_eax = R32((u32)(r_edx+0x4a4u));
    /* 0047f9e2: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0047f9e5: jmp 0x47f9f0 */ goto L_0047f9f0;
L_0047f9e7:; BB(0x0047f9e7);
    /* 0047f9e7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0047f9ea: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0047f9ed: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
L_0047f9f0:; BB(0x0047f9f0);
    /* 0047f9f0: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0047f9f3: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 0047f9f6: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x47f9fbu); f_0060c9a0();
    /* 0047f9fb: cmp dword ptr [ebp - 0x14], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047f9fe: jge 0x47fa88 */ if ((fS==fO)) goto L_0047fa88;
L_0047fa04:; BB(0x0047fa04);
    /* 0047fa04: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0047fa07: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047fa08: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0047fa0b: mov ecx, dword ptr [ecx + 0x34] */ r_ecx = R32((u32)(r_ecx+0x34u));
    /* 0047fa0e: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x47fa13u); f_0060ca40();
    /* 0047fa13: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0047fa16: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0047fa19: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 0047fa1c: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x47fa21u); f_0060c9a0();
    /* 0047fa21: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0047fa24: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0047fa27: sub eax, dword ptr [ecx + 0x4a4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x4a4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0047fa2d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047fa2e: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x47fa33u); f_0062fbf0();
    /* 0047fa33: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047fa36: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0047fa39: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0047fa3c: mov eax, dword ptr [edx + 0x4a4] */ r_eax = R32((u32)(r_edx+0x4a4u));
    /* 0047fa42: add eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0047fa45: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047fa46: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0047fa49: mov ecx, dword ptr [ecx + 0x34] */ r_ecx = R32((u32)(r_ecx+0x34u));
    /* 0047fa4c: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x47fa51u); f_0060ca40();
    /* 0047fa51: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0047fa54: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047fa57: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0047fa58: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0047fa5b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047fa5c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0047fa5f: mov ecx, dword ptr [ecx + 0x34] */ r_ecx = R32((u32)(r_ecx+0x34u));
    /* 0047fa62: call 0x60ca70 */ r_esp -= 4; W32(r_esp, 0x47fa67u); f_0060ca70();
    /* 0047fa67: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047fa6a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0047fa6b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0047fa6e: mov ecx, dword ptr [eax + 0x4a4] */ r_ecx = R32((u32)(r_eax+0x4a4u));
    /* 0047fa74: add ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0047fa77: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047fa78: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0047fa7b: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 0047fa7e: call 0x60ca70 */ r_esp -= 4; W32(r_esp, 0x47fa83u); f_0060ca70();
    /* 0047fa83: jmp 0x47f9e7 */ goto L_0047f9e7;
L_0047fa88:; BB(0x0047fa88);
    /* 0047fa88: jmp 0x47f9c6 */ goto L_0047f9c6;
L_0047fa8d:; BB(0x0047fa8d);
    /* 0047fa8d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0047fa90: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0047fa93: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x47fa98u); f_0060c9a0();
    /* 0047fa98: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0047fa9b: mov dword ptr [ecx + 0x4a8], eax */ W32((u32)(r_ecx+0x4a8u), r_eax);
    /* 0047faa1: mov esp, ebp */ r_esp = r_ebp;
    /* 0047faa3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047faa4: ret  */ FN_RET(0x0047f980); r_esp += 4; return;
}

void f_0047fab0(void) /* sub_47FAB0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047fab0);
    /* 0047fab0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047fab1: mov ebp, esp */ r_ebp = r_esp;
    /* 0047fab3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047fab4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0047fab7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047faba: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0047fabd: call 0x60ca10 */ r_esp -= 4; W32(r_esp, 0x47fac2u); f_0060ca10();
    /* 0047fac2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047fac5: mov dword ptr [ecx + 0x4a4], 0 */ W32((u32)(r_ecx+0x4a4u), 0x0u);
    /* 0047facf: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047fad2: mov dword ptr [edx + 0x4a8], 0 */ W32((u32)(r_edx+0x4a8u), 0x0u);
    /* 0047fadc: mov esp, ebp */ r_esp = r_ebp;
    /* 0047fade: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047fadf: ret  */ FN_RET(0x0047fab0); r_esp += 4; return;
}

void f_0047fae0(void) /* sub_47FAE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047fae0);
    /* 0047fae0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047fae1: mov ebp, esp */ r_ebp = r_esp;
    /* 0047fae3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047fae4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0047fae7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047faea: mov dword ptr [eax + 0x414], 0 */ W32((u32)(r_eax+0x414u), 0x0u);
    /* 0047faf4: mov esp, ebp */ r_esp = r_ebp;
    /* 0047faf6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047faf7: ret  */ FN_RET(0x0047fae0); r_esp += 4; return;
}

void f_0047fb00(void) /* sub_47FB00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047fb00);
    /* 0047fb00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047fb01: mov ebp, esp */ r_ebp = r_esp;
    /* 0047fb03: sub esp, 0x10c */ {  u32 a = r_esp; u32 b = 0x10cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0047fb09: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0047fb0e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0047fb10: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0047fb13: mov dword ptr [ebp - 0x10c], ecx */ W32((u32)(r_ebp+0xfffffef4u), r_ecx);
    /* 0047fb19: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 0047fb1f: call 0x4fb890 */ r_esp -= 4; W32(r_esp, 0x47fb24u); f_004fb890();
    /* 0047fb24: movzx eax, byte ptr [ebp + 8] */ r_eax = (u32)R8((u32)(r_ebp+0x8u));
    /* 0047fb28: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047fb2a: je 0x47fb75 */ if (fZ) goto L_0047fb75;
L_0047fb2c:; BB(0x0047fb2c);
    /* 0047fb2c: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 0047fb32: call 0x4fc290 */ r_esp -= 4; W32(r_esp, 0x47fb37u); f_004fc290();
    /* 0047fb37: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047fb38: push 0x6bcd00 */ { u32 v = 0x6bcd00u; r_esp -= 4; W32(r_esp, v); }
    /* 0047fb3d: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x47fb42u); f_00630f40();
    /* 0047fb42: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047fb45: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047fb46: lea ecx, [ebp - 0x108] */ r_ecx = (u32)(r_ebp+0xfffffef8u);
    /* 0047fb4c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047fb4d: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x47fb53u); call_ind(t); }
    /* 0047fb53: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047fb56: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047fb58: push 0x6bccdc */ { u32 v = 0x6bccdcu; r_esp -= 4; W32(r_esp, v); }
    /* 0047fb5d: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x47fb62u); f_00630f40();
    /* 0047fb62: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047fb65: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047fb66: lea edx, [ebp - 0x108] */ r_edx = (u32)(r_ebp+0xfffffef8u);
    /* 0047fb6c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0047fb6d: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x47fb72u); f_0062ff10();
    /* 0047fb72: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0047fb75:; BB(0x0047fb75);
    /* 0047fb75: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047fb78: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0047fb7a: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x47fb7fu); f_00686d72();
    /* 0047fb7f: mov esp, ebp */ r_esp = r_ebp;
    /* 0047fb81: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047fb82: ret 4 */ FN_RET(0x0047fb00); r_esp += 8; return;
}

void f_0047fdf0(void) /* sub_47FDF0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047fdf0);
    /* 0047fdf0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047fdf1: mov ebp, esp */ r_ebp = r_esp;
    /* 0047fdf3: sub esp, 0x11c */ {  u32 a = r_esp; u32 b = 0x11cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0047fdf9: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0047fdfe: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0047fe00: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0047fe03: mov dword ptr [ebp - 0x118], ecx */ W32((u32)(r_ebp+0xfffffee8u), r_ecx);
    /* 0047fe09: mov ecx, dword ptr [ebp - 0x118] */ r_ecx = R32((u32)(r_ebp+0xfffffee8u));
    /* 0047fe0f: call 0x480f30 */ r_esp -= 4; W32(r_esp, 0x47fe14u); f_00480f30();
    /* 0047fe14: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0047fe17: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047fe19: je 0x47ff2a */ if (fZ) goto L_0047ff2a;
L_0047fe1f:; BB(0x0047fe1f);
    /* 0047fe1f: mov ecx, dword ptr [ebp - 0x118] */ r_ecx = R32((u32)(r_ebp+0xfffffee8u));
    /* 0047fe25: call 0x479930 */ r_esp -= 4; W32(r_esp, 0x47fe2au); f_00479930();
    /* 0047fe2a: mov byte ptr [ebp - 0x109], al */ W8((u32)(r_ebp+0xfffffef7u), (u8)r_eax);
    /* 0047fe30: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047fe36: call 0x479960 */ r_esp -= 4; W32(r_esp, 0x47fe3bu); f_00479960();
    /* 0047fe3b: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0047fe3e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047fe40: je 0x47fea3 */ if (fZ) goto L_0047fea3;
L_0047fe42:; BB(0x0047fe42);
    /* 0047fe42: movzx edx, byte ptr [ebp - 0x109] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffef7u));
    /* 0047fe49: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047fe4b: jne 0x47fea3 */ if (!fZ) goto L_0047fea3;
L_0047fe4d:; BB(0x0047fe4d);
    /* 0047fe4d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0047fe4f: push 0x6bcda0 */ { u32 v = 0x6bcda0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047fe54: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x47fe59u); f_00630f40();
    /* 0047fe59: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047fe5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047fe5d: push 0x6bcd74 */ { u32 v = 0x6bcd74u; r_esp -= 4; W32(r_esp, v); }
    /* 0047fe62: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x47fe67u); f_00630f40();
    /* 0047fe67: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047fe6a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047fe6b: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x47fe70u); f_0062ff10();
    /* 0047fe70: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047fe73: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047fe76: je 0x47fe7f */ if (fZ) goto L_0047fe7f;
L_0047fe78:; BB(0x0047fe78);
    /* 0047fe78: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0047fe7a: jmp 0x47ffa3 */ goto L_0047ffa3;
L_0047fe7f:; BB(0x0047fe7f);
    /* 0047fe7f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047fe85: call 0x4815d0 */ r_esp -= 4; W32(r_esp, 0x47fe8au); f_004815d0();
    /* 0047fe8a: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0047fe8c: mov ecx, dword ptr [ebp - 0x118] */ r_ecx = R32((u32)(r_ebp+0xfffffee8u));
    /* 0047fe92: call 0x47fb90 */ r_esp -= 4; W32(r_esp, 0x47fe97u); f_0047fb90();
    /* 0047fe97: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0047fe99: jmp 0x47ffa3 */ goto L_0047ffa3;
L_0047fea3:; BB(0x0047fea3);
    /* 0047fea3: push 0x795634 */ { u32 v = 0x795634u; r_esp -= 4; W32(r_esp, v); }
    /* 0047fea8: push 0x6bcd54 */ { u32 v = 0x6bcd54u; r_esp -= 4; W32(r_esp, v); }
    /* 0047fead: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x47feb2u); f_00630f40();
    /* 0047feb2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047feb5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047feb6: lea eax, [ebp - 0x108] */ r_eax = (u32)(r_ebp+0xfffffef8u);
    /* 0047febc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047febd: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x47fec3u); call_ind(t); }
    /* 0047fec3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047fec6: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0047fec8: push 0x6bcd40 */ { u32 v = 0x6bcd40u; r_esp -= 4; W32(r_esp, v); }
    /* 0047fecd: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x47fed2u); f_00630f40();
    /* 0047fed2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047fed5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047fed6: lea ecx, [ebp - 0x108] */ r_ecx = (u32)(r_ebp+0xfffffef8u);
    /* 0047fedc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047fedd: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x47fee2u); f_0062ff10();
    /* 0047fee2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047fee5: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047fee8: jne 0x47ff24 */ if (!fZ) goto L_0047ff24;
L_0047feea:; BB(0x0047feea);
    /* 0047feea: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047fef0: call 0x479960 */ r_esp -= 4; W32(r_esp, 0x47fef5u); f_00479960();
    /* 0047fef5: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0047fef8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047fefa: je 0x47ff07 */ if (fZ) goto L_0047ff07;
L_0047fefc:; BB(0x0047fefc);
    /* 0047fefc: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047ff02: call 0x4815d0 */ r_esp -= 4; W32(r_esp, 0x47ff07u); f_004815d0();
L_0047ff07:; BB(0x0047ff07);
    /* 0047ff07: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0047ff09: mov ecx, dword ptr [ebp - 0x118] */ r_ecx = R32((u32)(r_ebp+0xfffffee8u));
    /* 0047ff0f: call 0x47fb90 */ r_esp -= 4; W32(r_esp, 0x47ff14u); f_0047fb90();
    /* 0047ff14: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 0047ff19: mov byte ptr [eax + 0x4f04], 0 */ W8((u32)(r_eax+0x4f04u), 0x0u);
    /* 0047ff20: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0047ff22: jmp 0x47ffa3 */ goto L_0047ffa3;
L_0047ff24:; BB(0x0047ff24);
    /* 0047ff24: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0047ff26: jmp 0x47ffa3 */ goto L_0047ffa3;
L_0047ff2a:; BB(0x0047ff2a);
    /* 0047ff2a: mov ecx, dword ptr [ebp - 0x118] */ r_ecx = R32((u32)(r_ebp+0xfffffee8u));
    /* 0047ff30: mov edx, dword ptr [ecx + 0xfc] */ r_edx = R32((u32)(r_ecx+0xfcu));
    /* 0047ff36: mov dword ptr [ebp - 0x110], edx */ W32((u32)(r_ebp+0xfffffef0u), r_edx);
    /* 0047ff3c: cmp dword ptr [ebp - 0x110], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffef0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047ff43: jne 0x47ff62 */ if (!fZ) goto L_0047ff62;
L_0047ff45:; BB(0x0047ff45);
    /* 0047ff45: mov eax, dword ptr [ebp - 0x118] */ r_eax = R32((u32)(r_ebp+0xfffffee8u));
    /* 0047ff4b: movzx ecx, byte ptr [eax + 0x408] */ r_ecx = (u32)R8((u32)(r_eax+0x408u));
    /* 0047ff52: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047ff54: jne 0x47ff62 */ if (!fZ) goto L_0047ff62;
L_0047ff56:; BB(0x0047ff56);
    /* 0047ff56: mov dword ptr [ebp - 0x11c], 1 */ W32((u32)(r_ebp+0xfffffee4u), 0x1u);
    /* 0047ff60: jmp 0x47ff6c */ goto L_0047ff6c;
L_0047ff62:; BB(0x0047ff62);
    /* 0047ff62: mov dword ptr [ebp - 0x11c], 0 */ W32((u32)(r_ebp+0xfffffee4u), 0x0u);
L_0047ff6c:; BB(0x0047ff6c);
    /* 0047ff6c: mov dl, byte ptr [ebp - 0x11c] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffee4u))) & 0xffu);
    /* 0047ff72: mov byte ptr [ebp - 0x111], dl */ W8((u32)(r_ebp+0xfffffeefu), (u8)r_edx);
    /* 0047ff78: movzx eax, byte ptr [ebp - 0x111] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffeefu));
    /* 0047ff7f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047ff81: je 0x47ff94 */ if (fZ) goto L_0047ff94;
L_0047ff83:; BB(0x0047ff83);
    /* 0047ff83: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0047ff85: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 0047ff8b: call 0x4fcb30 */ r_esp -= 4; W32(r_esp, 0x47ff90u); f_004fcb30();
    /* 0047ff90: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0047ff92: jmp 0x47ffa3 */ goto L_0047ffa3;
L_0047ff94:; BB(0x0047ff94);
    /* 0047ff94: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0047ff96: mov ecx, dword ptr [ebp - 0x118] */ r_ecx = R32((u32)(r_ebp+0xfffffee8u));
    /* 0047ff9c: call 0x47fb90 */ r_esp -= 4; W32(r_esp, 0x47ffa1u); f_0047fb90();
    /* 0047ffa1: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_0047ffa3:; BB(0x0047ffa3);
    /* 0047ffa3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047ffa6: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0047ffa8: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x47ffadu); f_00686d72();
    /* 0047ffad: mov esp, ebp */ r_esp = r_ebp;
    /* 0047ffaf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047ffb0: ret  */ FN_RET(0x0047fdf0); r_esp += 4; return;
}

void f_0047ffc0(void) /* sub_47FFC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047ffc0);
    /* 0047ffc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047ffc1: mov ebp, esp */ r_ebp = r_esp;
    /* 0047ffc3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047ffc4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0047ffc7: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 0047ffcc: mov ecx, dword ptr [eax + 0x4efc] */ r_ecx = R32((u32)(r_eax+0x4efcu));
    /* 0047ffd2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047ffd3: call 0x520440 */ r_esp -= 4; W32(r_esp, 0x47ffd8u); f_00520440();
    /* 0047ffd8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047ffdb: mov esp, ebp */ r_esp = r_ebp;
    /* 0047ffdd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047ffde: ret  */ FN_RET(0x0047ffc0); r_esp += 4; return;
}

void f_0047ffe0(void) /* sub_47FFE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047ffe0);
    /* 0047ffe0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047ffe1: mov ebp, esp */ r_ebp = r_esp;
    /* 0047ffe3: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0047ffe6: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 0047ffe9: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0047fff0: jmp 0x47fffb */ goto L_0047fffb;
L_0047fff2:; BB(0x0047fff2);
    /* 0047fff2: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047fff5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0047fff8: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0047fffb:; BB(0x0047fffb);
    /* 0047fffb: cmp dword ptr [ebp - 8], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047ffff: jge 0x48002b */ if ((fS==fO)) goto L_0048002b;
L_00480001:; BB(0x00480001);
    /* 00480001: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00480004: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00480005: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00480008: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x48000du); f_0047e390();
    /* 0048000d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00480010: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00480013: call 0x4c6a70 */ r_esp -= 4; W32(r_esp, 0x480018u); f_004c6a70();
    /* 00480018: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048001b: mov dword ptr [ebp + edx*8 - 0x40], eax */ W32((u32)(r_ebp+r_edx*8+0xffffffc0u), r_eax);
    /* 0048001f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00480022: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00480025: mov dword ptr [ebp + eax*8 - 0x3c], ecx */ W32((u32)(r_ebp+r_eax*8+0xffffffc4u), r_ecx);
    /* 00480029: jmp 0x47fff2 */ goto L_0047fff2;
L_0048002b:; BB(0x0048002b);
    /* 0048002b: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0048002d: lea edx, [ebp - 0x40] */ r_edx = (u32)(r_ebp+0xffffffc0u);
    /* 00480030: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00480031: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00480034: call 0x480070 */ r_esp -= 4; W32(r_esp, 0x480039u); f_00480070();
    /* 00480039: mov dword ptr [ebp - 8], 6 */ W32((u32)(r_ebp+0xfffffff8u), 0x6u);
    /* 00480040: jmp 0x48004b */ goto L_0048004b;
L_00480042:; BB(0x00480042);
    /* 00480042: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00480045: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00480048: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0048004b:; BB(0x0048004b);
    /* 0048004b: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048004f: jl 0x480063 */ if ((fS!=fO)) goto L_00480063;
L_00480051:; BB(0x00480051);
    /* 00480051: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00480054: mov edx, dword ptr [ebp + ecx*8 - 0x3c] */ r_edx = R32((u32)(r_ebp+r_ecx*8+0xffffffc4u));
    /* 00480058: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00480059: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0048005c: call 0x480580 */ r_esp -= 4; W32(r_esp, 0x480061u); f_00480580();
    /* 00480061: jmp 0x480042 */ goto L_00480042;
L_00480063:; BB(0x00480063);
    /* 00480063: mov esp, ebp */ r_esp = r_ebp;
    /* 00480065: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00480066: ret  */ FN_RET(0x0047ffe0); r_esp += 4; return;
}

