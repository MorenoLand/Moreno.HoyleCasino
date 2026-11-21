#include "protos.h"

void f_006738e0(void) /* sub_6738E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006738e0);
    /* 006738e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006738e1: mov ebp, esp */ r_ebp = r_esp;
    /* 006738e3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006738e6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006738e9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006738ec: movzx ecx, byte ptr [eax + 0x1c4] */ r_ecx = (u32)R8((u32)(r_eax+0x1c4u));
    /* 006738f3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006738f5: jne 0x67394b */ if (!fZ) goto L_0067394b;
L_006738f7:; BB(0x006738f7);
    /* 006738f7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006738f9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006738fc: call 0x5fb720 */ r_esp -= 4; W32(r_esp, 0x673901u); f_005fb720();
    /* 00673901: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00673904: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00673907: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00673909: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0067390c: mov edx, dword ptr [eax + 0xb8] */ r_edx = R32((u32)(r_eax+0xb8u));
    /* 00673912: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x673914u); call_ind(t); }
    /* 00673914: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00673916: jne 0x67394b */ if (!fZ) goto L_0067394b;
L_00673918:; BB(0x00673918);
    /* 00673918: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067391a: push 0x6dfcdc */ { u32 v = 0x6dfcdcu; r_esp -= 4; W32(r_esp, v); }
    /* 0067391f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x673924u); f_00630f40();
    /* 00673924: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00673927: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00673928: push 0x6e167c */ { u32 v = 0x6e167cu; r_esp -= 4; W32(r_esp, v); }
    /* 0067392d: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x673932u); f_00630f40();
    /* 00673932: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00673935: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00673936: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x67393bu); f_0062ff10();
    /* 0067393b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067393e: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00673944: call 0x64f030 */ r_esp -= 4; W32(r_esp, 0x673949u); f_0064f030();
    /* 00673949: jmp 0x67397a */ goto L_0067397a;
L_0067394b:; BB(0x0067394b);
    /* 0067394b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0067394e: call 0x5f85d0 */ r_esp -= 4; W32(r_esp, 0x673953u); f_005f85d0();
    /* 00673953: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00673956: movzx ecx, byte ptr [eax + 0x1c4] */ r_ecx = (u32)R8((u32)(r_eax+0x1c4u));
    /* 0067395d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067395f: je 0x67397a */ if (fZ) goto L_0067397a;
L_00673961:; BB(0x00673961);
    /* 00673961: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00673964: mov eax, dword ptr [edx + 0x1bc] */ r_eax = R32((u32)(r_edx+0x1bcu));
    /* 0067396a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0067396d: mov ecx, dword ptr [ecx + 0x1bc] */ r_ecx = R32((u32)(r_ecx+0x1bcu));
    /* 00673973: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00673975: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00673978: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67397au); call_ind(t); }
L_0067397a:; BB(0x0067397a);
    /* 0067397a: mov esp, ebp */ r_esp = r_ebp;
    /* 0067397c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067397d: ret  */ FN_RET(0x006738e0); r_esp += 4; return;
}

void f_006739d0(void) /* sub_6739D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006739d0);
    /* 006739d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006739d1: mov ebp, esp */ r_ebp = r_esp;
    /* 006739d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006739d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006739d7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006739da: movzx ecx, byte ptr [eax + 0x1c4] */ r_ecx = (u32)R8((u32)(r_eax+0x1c4u));
    /* 006739e1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006739e3: je 0x673a26 */ if (fZ) goto L_00673a26;
L_006739e5:; BB(0x006739e5);
    /* 006739e5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006739e7: mov ecx, dword ptr [0x16306d0] */ r_ecx = R32((u32)(0x16306d0u));
    /* 006739ed: call 0x5fb810 */ r_esp -= 4; W32(r_esp, 0x6739f2u); f_005fb810();
    /* 006739f2: mov ecx, eax */ r_ecx = r_eax;
    /* 006739f4: call 0x60c3d0 */ r_esp -= 4; W32(r_esp, 0x6739f9u); f_0060c3d0();
    /* 006739f9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006739fb: mov ecx, dword ptr [0x16306d0] */ r_ecx = R32((u32)(0x16306d0u));
    /* 00673a01: call 0x5fb810 */ r_esp -= 4; W32(r_esp, 0x673a06u); f_005fb810();
    /* 00673a06: mov ecx, eax */ r_ecx = r_eax;
    /* 00673a08: call 0x674270 */ r_esp -= 4; W32(r_esp, 0x673a0du); f_00674270();
    /* 00673a0d: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00673a13: add ecx, 0x50 */ {  u32 a = r_ecx; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00673a16: call 0x667d10 */ r_esp -= 4; W32(r_esp, 0x673a1bu); f_00667d10();
    /* 00673a1b: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00673a1e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00673a20: jne 0x673a24 */ if (!fZ) goto L_00673a24;
L_00673a22:; BB(0x00673a22);
    /* 00673a22: jmp 0x673a3f */ goto L_00673a3f;
L_00673a24:; BB(0x00673a24);
    /* 00673a24: jmp 0x673a34 */ goto L_00673a34;
L_00673a26:; BB(0x00673a26);
    /* 00673a26: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00673a2c: add ecx, 0x50 */ {  u32 a = r_ecx; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00673a2f: call 0x667e60 */ r_esp -= 4; W32(r_esp, 0x673a34u); f_00667e60();
L_00673a34:; BB(0x00673a34);
    /* 00673a34: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00673a3a: call 0x64f030 */ r_esp -= 4; W32(r_esp, 0x673a3fu); f_0064f030();
L_00673a3f:; BB(0x00673a3f);
    /* 00673a3f: mov esp, ebp */ r_esp = r_ebp;
    /* 00673a41: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00673a42: ret  */ FN_RET(0x006739d0); r_esp += 4; return;
}

void f_00673a50(void) /* sub_673A50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00673a50);
    /* 00673a50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00673a51: mov ebp, esp */ r_ebp = r_esp;
    /* 00673a53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00673a54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00673a57: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00673a5d: call 0x64f030 */ r_esp -= 4; W32(r_esp, 0x673a62u); f_0064f030();
    /* 00673a62: mov esp, ebp */ r_esp = r_ebp;
    /* 00673a64: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00673a65: ret  */ FN_RET(0x00673a50); r_esp += 4; return;
}

void f_00673a70(void) /* sub_673A70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00673a70);
    /* 00673a70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00673a71: mov ebp, esp */ r_ebp = r_esp;
    /* 00673a73: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00673a76: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00673a79: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00673a7b: push 0x6de780 */ { u32 v = 0x6de780u; r_esp -= 4; W32(r_esp, v); }
    /* 00673a80: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x673a85u); f_00630f40();
    /* 00673a85: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00673a88: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00673a89: push 0x6e1694 */ { u32 v = 0x6e1694u; r_esp -= 4; W32(r_esp, v); }
    /* 00673a8e: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x673a93u); f_00630f40();
    /* 00673a93: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00673a96: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00673a97: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x673a9cu); f_0062ff10();
    /* 00673a9c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00673a9f: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00673aa2: jne 0x673b52 */ if (!fZ) goto L_00673b52;
L_00673aa8:; BB(0x00673aa8);
    /* 00673aa8: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00673aae: add ecx, 0x50 */ {  u32 a = r_ecx; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00673ab1: call 0x667e90 */ r_esp -= 4; W32(r_esp, 0x673ab6u); f_00667e90();
    /* 00673ab6: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00673ab9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00673abb: je 0x673b52 */ if (fZ) goto L_00673b52;
L_00673ac1:; BB(0x00673ac1);
    /* 00673ac1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00673ac3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00673ac5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00673ac8: call 0x5fb720 */ r_esp -= 4; W32(r_esp, 0x673acdu); f_005fb720();
    /* 00673acd: mov ecx, eax */ r_ecx = r_eax;
    /* 00673acf: call 0x615260 */ r_esp -= 4; W32(r_esp, 0x673ad4u); f_00615260();
    /* 00673ad4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00673ad5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00673ad7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00673ada: call 0x5fb720 */ r_esp -= 4; W32(r_esp, 0x673adfu); f_005fb720();
    /* 00673adf: mov ecx, eax */ r_ecx = r_eax;
    /* 00673ae1: call 0x628ab0 */ r_esp -= 4; W32(r_esp, 0x673ae6u); f_00628ab0();
    /* 00673ae6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00673ae8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00673aeb: call 0x5fb720 */ r_esp -= 4; W32(r_esp, 0x673af0u); f_005fb720();
    /* 00673af0: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00673af3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00673af6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00673af8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00673afb: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 00673b01: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x673b03u); call_ind(t); }
    /* 00673b03: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00673b05: jne 0x673b31 */ if (!fZ) goto L_00673b31;
L_00673b07:; BB(0x00673b07);
    /* 00673b07: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00673b09: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00673b0c: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x673b11u); f_005fb300();
    /* 00673b11: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00673b14: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00673b17: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00673b19: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00673b1c: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 00673b22: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x673b24u); call_ind(t); }
    /* 00673b24: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00673b2a: call 0x64f030 */ r_esp -= 4; W32(r_esp, 0x673b2fu); f_0064f030();
    /* 00673b2f: jmp 0x673b52 */ goto L_00673b52;
L_00673b31:; BB(0x00673b31);
    /* 00673b31: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00673b33: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00673b36: call 0x5fb720 */ r_esp -= 4; W32(r_esp, 0x673b3bu); f_005fb720();
    /* 00673b3b: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00673b3e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00673b40: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00673b42: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00673b45: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00673b47: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00673b4a: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 00673b50: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x673b52u); call_ind(t); }
L_00673b52:; BB(0x00673b52);
    /* 00673b52: mov esp, ebp */ r_esp = r_ebp;
    /* 00673b54: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00673b55: ret  */ FN_RET(0x00673a70); r_esp += 4; return;
}

void f_00673c20(void) /* sub_673C20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00673c20);
    /* 00673c20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00673c21: mov ebp, esp */ r_ebp = r_esp;
    /* 00673c23: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00673c26: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00673c2b: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00673c2d: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00673c30: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 00673c33: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00673c3a: jmp 0x673c45 */ goto L_00673c45;
L_00673c3c:; BB(0x00673c3c);
    /* 00673c3c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00673c3f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00673c42: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00673c45:; BB(0x00673c45);
    /* 00673c45: cmp dword ptr [ebp - 4], 0x64 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00673c49: jge 0x673c90 */ if ((fS==fO)) goto L_00673c90;
L_00673c4b:; BB(0x00673c4b);
    /* 00673c4b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00673c4e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00673c4f: lea edx, [ebp - 0x24] */ r_edx = (u32)(r_ebp+0xffffffdcu);
    /* 00673c52: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00673c53: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00673c59: add ecx, 0x50 */ {  u32 a = r_ecx; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00673c5c: call 0x667be0 */ r_esp -= 4; W32(r_esp, 0x673c61u); f_00667be0();
    /* 00673c61: lea eax, [ebp - 0x3c] */ r_eax = (u32)(r_ebp+0xffffffc4u);
    /* 00673c64: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00673c65: lea ecx, [ebp - 0x24] */ r_ecx = (u32)(r_ebp+0xffffffdcu);
    /* 00673c68: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00673c69: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00673c6f: add ecx, 0x50 */ {  u32 a = r_ecx; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00673c72: call 0x667ec0 */ r_esp -= 4; W32(r_esp, 0x673c77u); f_00667ec0();
    /* 00673c77: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00673c7a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00673c7c: je 0x673c8e */ if (fZ) goto L_00673c8e;
L_00673c7e:; BB(0x00673c7e);
    /* 00673c7e: lea eax, [ebp - 0x24] */ r_eax = (u32)(r_ebp+0xffffffdcu);
    /* 00673c81: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00673c82: lea ecx, [ebp - 0x3c] */ r_ecx = (u32)(r_ebp+0xffffffc4u);
    /* 00673c85: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00673c86: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00673c89: call 0x673b60 */ r_esp -= 4; W32(r_esp, 0x673c8eu); f_00673b60();
L_00673c8e:; BB(0x00673c8e);
    /* 00673c8e: jmp 0x673c3c */ goto L_00673c3c;
L_00673c90:; BB(0x00673c90);
    /* 00673c90: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00673c92: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00673c95: call 0x5fb720 */ r_esp -= 4; W32(r_esp, 0x673c9au); f_005fb720();
    /* 00673c9a: mov ecx, eax */ r_ecx = r_eax;
    /* 00673c9c: call 0x628d80 */ r_esp -= 4; W32(r_esp, 0x673ca1u); f_00628d80();
    /* 00673ca1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00673ca4: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00673ca6: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x673cabu); f_00686d72();
    /* 00673cab: mov esp, ebp */ r_esp = r_ebp;
    /* 00673cad: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00673cae: ret  */ FN_RET(0x00673c20); r_esp += 4; return;
}

