#include "protos.h"

void f_00677100(void) /* sub_677100 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00677100);
    /* 00677100: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00677101: mov ebp, esp */ r_ebp = r_esp;
    /* 00677103: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00677106: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00677109: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0067710f: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x677114u); f_006375b0();
    /* 00677114: mov ecx, eax */ r_ecx = r_eax;
    /* 00677116: call 0x63a040 */ r_esp -= 4; W32(r_esp, 0x67711bu); f_0063a040();
    /* 0067711b: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0067711e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00677121: call 0x677400 */ r_esp -= 4; W32(r_esp, 0x677126u); f_00677400();
    /* 00677126: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00677129: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0067712f: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x677134u); f_006375b0();
    /* 00677134: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00677137: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0067713a: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x67713fu); f_0063aac0();
    /* 0067713f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00677142: mov dword ptr [eax + 0x374], ecx */ W32((u32)(r_eax+0x374u), r_ecx);
    /* 00677148: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0067714e: call 0x637610 */ r_esp -= 4; W32(r_esp, 0x677153u); f_00637610();
    /* 00677153: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00677156: call 0x677400 */ r_esp -= 4; W32(r_esp, 0x67715bu); f_00677400();
    /* 0067715b: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067715e: je 0x677176 */ if (fZ) goto L_00677176;
L_00677160:; BB(0x00677160);
    /* 00677160: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 00677166: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00677168: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0067716e: mov edx, dword ptr [eax + 0x10c] */ r_edx = R32((u32)(r_eax+0x10cu));
    /* 00677174: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x677176u); call_ind(t); }
L_00677176:; BB(0x00677176);
    /* 00677176: mov esp, ebp */ r_esp = r_ebp;
    /* 00677178: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00677179: ret  */ FN_RET(0x00677100); r_esp += 4; return;
}

void f_00677350(void) /* sub_677350 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00677350);
    /* 00677350: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00677351: mov ebp, esp */ r_ebp = r_esp;
    /* 00677353: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00677356: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00677359: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00677360: jmp 0x67736b */ goto L_0067736b;
L_00677362:; BB(0x00677362);
    /* 00677362: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00677365: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00677368: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0067736b:; BB(0x0067736b);
    /* 0067736b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067736d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00677370: call 0x5fb720 */ r_esp -= 4; W32(r_esp, 0x677375u); f_005fb720();
    /* 00677375: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00677378: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0067737b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067737d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00677380: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 00677386: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x677388u); call_ind(t); }
    /* 00677388: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067738b: jge 0x6773f0 */ if ((fS==fO)) goto L_006773f0;
L_0067738d:; BB(0x0067738d);
    /* 0067738d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067738f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00677392: call 0x5fb720 */ r_esp -= 4; W32(r_esp, 0x677397u); f_005fb720();
    /* 00677397: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0067739a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0067739d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067739e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006773a1: add ecx, 0x70 */ {  u32 a = r_ecx; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006773a4: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x6773a9u); f_0060ca40();
    /* 006773a9: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 006773ac: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006773b2: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x6773b7u); f_006375b0();
    /* 006773b7: mov ecx, eax */ r_ecx = r_eax;
    /* 006773b9: call 0x63a040 */ r_esp -= 4; W32(r_esp, 0x6773beu); f_0063a040();
    /* 006773be: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006773c1: cmp dword ptr [edx + 0x14], eax */ {  u32 a = R32((u32)(r_edx+0x14u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006773c4: jne 0x6773eb */ if (!fZ) goto L_006773eb;
L_006773c6:; BB(0x006773c6);
    /* 006773c6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006773c8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006773cb: call 0x5fb720 */ r_esp -= 4; W32(r_esp, 0x6773d0u); f_005fb720();
    /* 006773d0: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 006773d3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006773d5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006773d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006773d9: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006773dc: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006773de: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006773e1: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 006773e7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6773e9u); call_ind(t); }
    /* 006773e9: jmp 0x6773f0 */ goto L_006773f0;
L_006773eb:; BB(0x006773eb);
    /* 006773eb: jmp 0x677362 */ goto L_00677362;
L_006773f0:; BB(0x006773f0);
    /* 006773f0: mov esp, ebp */ r_esp = r_ebp;
    /* 006773f2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006773f3: ret  */ FN_RET(0x00677350); r_esp += 4; return;
}

void f_00677400(void) /* sub_677400 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00677400);
    /* 00677400: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00677401: mov ebp, esp */ r_ebp = r_esp;
    /* 00677403: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00677406: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00677409: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067740b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0067740e: call 0x5fb720 */ r_esp -= 4; W32(r_esp, 0x677413u); f_005fb720();
    /* 00677413: mov ecx, eax */ r_ecx = r_eax;
    /* 00677415: call 0x5e4390 */ r_esp -= 4; W32(r_esp, 0x67741au); f_005e4390();
    /* 0067741a: mov eax, dword ptr [eax + 0x14] */ r_eax = R32((u32)(r_eax+0x14u));
    /* 0067741d: mov esp, ebp */ r_esp = r_ebp;
    /* 0067741f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00677420: ret  */ FN_RET(0x00677400); r_esp += 4; return;
}

void f_00677c90(void) /* sub_677C90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00677c90);
    /* 00677c90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00677c91: mov ebp, esp */ r_ebp = r_esp;
    /* 00677c93: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00677c96: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00677c99: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 00677c9e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00677ca0: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00677ca6: mov eax, dword ptr [edx + 0x1f0] */ r_eax = R32((u32)(r_edx+0x1f0u));
    /* 00677cac: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x677caeu); call_ind(t); }
    /* 00677cae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00677cb0: jne 0x677cc2 */ if (!fZ) goto L_00677cc2;
L_00677cb2:; BB(0x00677cb2);
    /* 00677cb2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00677cb5: call 0x677f70 */ r_esp -= 4; W32(r_esp, 0x677cbau); f_00677f70();
    /* 00677cba: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00677cbd: call 0x6780c0 */ r_esp -= 4; W32(r_esp, 0x677cc2u); f_006780c0();
L_00677cc2:; BB(0x00677cc2);
    /* 00677cc2: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00677cc8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00677cca: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00677cd0: mov eax, dword ptr [edx + 0x1c8] */ r_eax = R32((u32)(r_edx+0x1c8u));
    /* 00677cd6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x677cd8u); call_ind(t); }
    /* 00677cd8: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00677cdb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00677cdd: je 0x677d03 */ if (fZ) goto L_00677d03;
L_00677cdf:; BB(0x00677cdf);
    /* 00677cdf: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00677ce5: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x677ceau); f_006375b0();
    /* 00677cea: mov ecx, eax */ r_ecx = r_eax;
    /* 00677cec: call 0x639ff0 */ r_esp -= 4; W32(r_esp, 0x677cf1u); f_00639ff0();
    /* 00677cf1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00677cf2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00677cf4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00677cf7: call 0x5fb3a0 */ r_esp -= 4; W32(r_esp, 0x677cfcu); f_005fb3a0();
    /* 00677cfc: mov ecx, eax */ r_ecx = r_eax;
    /* 00677cfe: call 0x6065d0 */ r_esp -= 4; W32(r_esp, 0x677d03u); f_006065d0();
L_00677d03:; BB(0x00677d03);
    /* 00677d03: mov esp, ebp */ r_esp = r_ebp;
    /* 00677d05: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00677d06: ret  */ FN_RET(0x00677c90); r_esp += 4; return;
}

void f_00677ec0(void) /* sub_677EC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00677ec0);
    /* 00677ec0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00677ec1: mov ebp, esp */ r_ebp = r_esp;
    /* 00677ec3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00677ec4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00677ec7: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 00677ecc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00677ece: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00677ed4: mov eax, dword ptr [edx + 0x1f0] */ r_eax = R32((u32)(r_edx+0x1f0u));
    /* 00677eda: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x677edcu); call_ind(t); }
    /* 00677edc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00677ede: jne 0x677eff */ if (!fZ) goto L_00677eff;
L_00677ee0:; BB(0x00677ee0);
    /* 00677ee0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00677ee3: call 0x678170 */ r_esp -= 4; W32(r_esp, 0x677ee8u); f_00678170();
    /* 00677ee8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00677ee9: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00677eef: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00677ef1: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00677ef7: mov eax, dword ptr [edx + 0x394] */ r_eax = R32((u32)(r_edx+0x394u));
    /* 00677efd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x677effu); call_ind(t); }
L_00677eff:; BB(0x00677eff);
    /* 00677eff: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00677f05: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00677f07: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00677f0d: mov eax, dword ptr [edx + 0x1c8] */ r_eax = R32((u32)(r_edx+0x1c8u));
    /* 00677f13: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x677f15u); call_ind(t); }
    /* 00677f15: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00677f18: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00677f1a: je 0x677f44 */ if (fZ) goto L_00677f44;
L_00677f1c:; BB(0x00677f1c);
    /* 00677f1c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00677f1e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00677f21: call 0x5fb3a0 */ r_esp -= 4; W32(r_esp, 0x677f26u); f_005fb3a0();
    /* 00677f26: mov ecx, eax */ r_ecx = r_eax;
    /* 00677f28: call 0x606570 */ r_esp -= 4; W32(r_esp, 0x677f2du); f_00606570();
    /* 00677f2d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00677f2e: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00677f34: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00677f36: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00677f3c: mov edx, dword ptr [eax + 0x39c] */ r_edx = R32((u32)(r_eax+0x39cu));
    /* 00677f42: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x677f44u); call_ind(t); }
L_00677f44:; BB(0x00677f44);
    /* 00677f44: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00677f4a: call 0x637610 */ r_esp -= 4; W32(r_esp, 0x677f4fu); f_00637610();
    /* 00677f4f: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 00677f54: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00677f56: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00677f5c: mov eax, dword ptr [edx + 0x114] */ r_eax = R32((u32)(r_edx+0x114u));
    /* 00677f62: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x677f64u); call_ind(t); }
    /* 00677f64: mov esp, ebp */ r_esp = r_ebp;
    /* 00677f66: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00677f67: ret  */ FN_RET(0x00677ec0); r_esp += 4; return;
}

