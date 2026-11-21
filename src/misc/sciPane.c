#include "protos.h"

void f_00625bf0(void) /* sciPane::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00625bf0);
    /* 00625bf0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00625bf1: mov ebp, esp */ r_ebp = r_esp;
    /* 00625bf3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00625bf4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00625bf7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00625bfa: call 0x5ff310 */ r_esp -= 4; W32(r_esp, 0x625bffu); f_005ff310();
    /* 00625bff: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00625c02: mov dword ptr [eax], 0x6d8f5c */ W32((u32)(r_eax), 0x6d8f5cu);
    /* 00625c08: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00625c0b: mov byte ptr [ecx + 0x21c], 1 */ W8((u32)(r_ecx+0x21cu), 0x1u);
    /* 00625c12: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00625c15: mov byte ptr [edx + 0x21d], 0 */ W8((u32)(r_edx+0x21du), 0x0u);
    /* 00625c1c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00625c1f: mov esp, ebp */ r_esp = r_ebp;
    /* 00625c21: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00625c22: ret  */ FN_RET(0x00625bf0); r_esp += 4; return;
}

void f_00625c50(void) /* sciPane::vfunc61 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00625c50);
    /* 00625c50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00625c51: mov ebp, esp */ r_ebp = r_esp;
    /* 00625c53: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00625c56: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00625c59: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00625c5c: call 0x606140 */ r_esp -= 4; W32(r_esp, 0x625c61u); f_00606140();
    /* 00625c61: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00625c64: cmp dword ptr [eax + 0x210], 0 */ {  u32 a = R32((u32)(r_eax+0x210u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00625c6b: je 0x625d0c */ if (fZ) goto L_00625d0c;
L_00625c71:; BB(0x00625c71);
    /* 00625c71: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00625c74: movzx edx, byte ptr [ecx + 0x21c] */ r_edx = (u32)R8((u32)(r_ecx+0x21cu));
    /* 00625c7b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00625c7d: je 0x625cc3 */ if (fZ) goto L_00625cc3;
L_00625c7f:; BB(0x00625c7f);
    /* 00625c7f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00625c86: jmp 0x625c91 */ goto L_00625c91;
L_00625c88:; BB(0x00625c88);
    /* 00625c88: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00625c8b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00625c8e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00625c91:; BB(0x00625c91);
    /* 00625c91: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00625c94: mov ecx, dword ptr [ecx + 0x210] */ r_ecx = R32((u32)(r_ecx+0x210u));
    /* 00625c9a: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x625c9fu); f_0060c9a0();
    /* 00625c9f: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00625ca2: jge 0x625cc1 */ if ((fS==fO)) goto L_00625cc1;
L_00625ca4:; BB(0x00625ca4);
    /* 00625ca4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00625ca6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00625ca9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00625caa: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00625cad: mov ecx, dword ptr [eax + 0x210] */ r_ecx = R32((u32)(r_eax+0x210u));
    /* 00625cb3: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x625cb8u); f_0060ca40();
    /* 00625cb8: mov ecx, eax */ r_ecx = r_eax;
    /* 00625cba: call 0x5f5620 */ r_esp -= 4; W32(r_esp, 0x625cbfu); f_005f5620();
    /* 00625cbf: jmp 0x625c88 */ goto L_00625c88;
L_00625cc1:; BB(0x00625cc1);
    /* 00625cc1: jmp 0x625d0c */ goto L_00625d0c;
L_00625cc3:; BB(0x00625cc3);
    /* 00625cc3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00625cca: jmp 0x625cd5 */ goto L_00625cd5;
L_00625ccc:; BB(0x00625ccc);
    /* 00625ccc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00625ccf: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00625cd2: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00625cd5:; BB(0x00625cd5);
    /* 00625cd5: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00625cd8: mov ecx, dword ptr [edx + 0x210] */ r_ecx = R32((u32)(r_edx+0x210u));
    /* 00625cde: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x625ce3u); f_0060c9a0();
    /* 00625ce3: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00625ce6: jge 0x625d0c */ if ((fS==fO)) goto L_00625d0c;
L_00625ce8:; BB(0x00625ce8);
    /* 00625ce8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00625ceb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00625cec: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00625cef: mov ecx, dword ptr [ecx + 0x210] */ r_ecx = R32((u32)(r_ecx+0x210u));
    /* 00625cf5: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x625cfau); f_0060ca40();
    /* 00625cfa: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00625cfd: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00625d00: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00625d02: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00625d05: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 00625d08: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x625d0au); call_ind(t); }
    /* 00625d0a: jmp 0x625ccc */ goto L_00625ccc;
L_00625d0c:; BB(0x00625d0c);
    /* 00625d0c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00625d0f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00625d10: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00625d13: mov ecx, dword ptr [ecx + 0x214] */ r_ecx = R32((u32)(r_ecx+0x214u));
    /* 00625d19: call 0x5ff960 */ r_esp -= 4; W32(r_esp, 0x625d1eu); f_005ff960();
    /* 00625d1e: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 00625d20: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00625d23: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00625d25: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00625d28: mov edx, dword ptr [eax + 0x6c] */ r_edx = R32((u32)(r_eax+0x6cu));
    /* 00625d2b: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x625d2du); call_ind(t); }
    /* 00625d2d: mov esp, ebp */ r_esp = r_ebp;
    /* 00625d2f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00625d30: ret  */ FN_RET(0x00625c50); r_esp += 4; return;
}

void f_00625d40(void) /* sciPane::vfunc62 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00625d40);
    /* 00625d40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00625d41: mov ebp, esp */ r_ebp = r_esp;
    /* 00625d43: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00625d46: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00625d49: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00625d4c: call 0x6001b0 */ r_esp -= 4; W32(r_esp, 0x625d51u); f_006001b0();
    /* 00625d51: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00625d54: cmp dword ptr [eax + 0x210], 0 */ {  u32 a = R32((u32)(r_eax+0x210u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00625d5b: je 0x625dfc */ if (fZ) goto L_00625dfc;
L_00625d61:; BB(0x00625d61);
    /* 00625d61: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00625d64: movzx edx, byte ptr [ecx + 0x21c] */ r_edx = (u32)R8((u32)(r_ecx+0x21cu));
    /* 00625d6b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00625d6d: je 0x625db3 */ if (fZ) goto L_00625db3;
L_00625d6f:; BB(0x00625d6f);
    /* 00625d6f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00625d76: jmp 0x625d81 */ goto L_00625d81;
L_00625d78:; BB(0x00625d78);
    /* 00625d78: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00625d7b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00625d7e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00625d81:; BB(0x00625d81);
    /* 00625d81: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00625d84: mov ecx, dword ptr [ecx + 0x210] */ r_ecx = R32((u32)(r_ecx+0x210u));
    /* 00625d8a: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x625d8fu); f_0060c9a0();
    /* 00625d8f: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00625d92: jge 0x625db1 */ if ((fS==fO)) goto L_00625db1;
L_00625d94:; BB(0x00625d94);
    /* 00625d94: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00625d96: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00625d99: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00625d9a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00625d9d: mov ecx, dword ptr [eax + 0x210] */ r_ecx = R32((u32)(r_eax+0x210u));
    /* 00625da3: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x625da8u); f_0060ca40();
    /* 00625da8: mov ecx, eax */ r_ecx = r_eax;
    /* 00625daa: call 0x5f5620 */ r_esp -= 4; W32(r_esp, 0x625dafu); f_005f5620();
    /* 00625daf: jmp 0x625d78 */ goto L_00625d78;
L_00625db1:; BB(0x00625db1);
    /* 00625db1: jmp 0x625dfc */ goto L_00625dfc;
L_00625db3:; BB(0x00625db3);
    /* 00625db3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00625dba: jmp 0x625dc5 */ goto L_00625dc5;
L_00625dbc:; BB(0x00625dbc);
    /* 00625dbc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00625dbf: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00625dc2: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00625dc5:; BB(0x00625dc5);
    /* 00625dc5: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00625dc8: mov ecx, dword ptr [edx + 0x210] */ r_ecx = R32((u32)(r_edx+0x210u));
    /* 00625dce: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x625dd3u); f_0060c9a0();
    /* 00625dd3: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00625dd6: jge 0x625dfc */ if ((fS==fO)) goto L_00625dfc;
L_00625dd8:; BB(0x00625dd8);
    /* 00625dd8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00625ddb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00625ddc: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00625ddf: mov ecx, dword ptr [ecx + 0x210] */ r_ecx = R32((u32)(r_ecx+0x210u));
    /* 00625de5: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x625deau); f_0060ca40();
    /* 00625dea: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00625ded: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00625df0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00625df2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00625df5: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 00625df8: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x625dfau); call_ind(t); }
    /* 00625dfa: jmp 0x625dbc */ goto L_00625dbc;
L_00625dfc:; BB(0x00625dfc);
    /* 00625dfc: mov esp, ebp */ r_esp = r_ebp;
    /* 00625dfe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00625dff: ret  */ FN_RET(0x00625d40); r_esp += 4; return;
}

void f_00625e20(void) /* sciPane::vfunc17 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00625e20);
    /* 00625e20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00625e21: mov ebp, esp */ r_ebp = r_esp;
    /* 00625e23: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00625e26: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00625e29: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00625e2c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00625e2f: sub ecx, dword ptr [eax + 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x10u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00625e32: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00625e35: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00625e38: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00625e3b: sub eax, dword ptr [edx + 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x14u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00625e3e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00625e41: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00625e44: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00625e45: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00625e48: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00625e49: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00625e4c: call 0x5ff510 */ r_esp -= 4; W32(r_esp, 0x625e51u); f_005ff510();
    /* 00625e51: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00625e54: movzx ecx, byte ptr [eax + 0x21d] */ r_ecx = (u32)R8((u32)(r_eax+0x21du));
    /* 00625e5b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00625e5d: jne 0x625e61 */ if (!fZ) goto L_00625e61;
L_00625e5f:; BB(0x00625e5f);
    /* 00625e5f: jmp 0x625ed4 */ goto L_00625ed4;
L_00625e61:; BB(0x00625e61);
    /* 00625e61: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00625e68: jmp 0x625e73 */ goto L_00625e73;
L_00625e6a:; BB(0x00625e6a);
    /* 00625e6a: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00625e6d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00625e70: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_00625e73:; BB(0x00625e73);
    /* 00625e73: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00625e76: mov ecx, dword ptr [eax + 0x210] */ r_ecx = R32((u32)(r_eax+0x210u));
    /* 00625e7c: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x625e81u); f_0060c9a0();
    /* 00625e81: cmp dword ptr [ebp - 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00625e84: jge 0x625ed4 */ if ((fS==fO)) goto L_00625ed4;
L_00625e86:; BB(0x00625e86);
    /* 00625e86: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00625e89: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00625e8a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00625e8d: mov ecx, dword ptr [edx + 0x210] */ r_ecx = R32((u32)(r_edx+0x210u));
    /* 00625e93: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x625e98u); f_0060ca40();
    /* 00625e98: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00625e9b: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00625e9f: jne 0x625ea3 */ if (!fZ) goto L_00625ea3;
L_00625ea1:; BB(0x00625ea1);
    /* 00625ea1: jmp 0x625e6a */ goto L_00625e6a;
L_00625ea3:; BB(0x00625ea3);
    /* 00625ea3: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00625ea6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00625ea8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00625eab: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 00625eae: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x625eb0u); call_ind(t); }
    /* 00625eb0: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00625eb3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00625eb4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00625eb7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00625eb9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00625ebc: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 00625ebf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x625ec1u); call_ind(t); }
    /* 00625ec1: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00625ec4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00625ec5: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00625ec8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00625eca: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00625ecd: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00625ed0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x625ed2u); call_ind(t); }
    /* 00625ed2: jmp 0x625e6a */ goto L_00625e6a;
L_00625ed4:; BB(0x00625ed4);
    /* 00625ed4: mov esp, ebp */ r_esp = r_ebp;
    /* 00625ed6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00625ed7: ret 8 */ FN_RET(0x00625e20); r_esp += 12; return;
}

