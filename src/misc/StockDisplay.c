#include "protos.h"

void f_006448c0(void) /* StockDisplay::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006448c0);
    /* 006448c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006448c1: mov ebp, esp */ r_ebp = r_esp;
    /* 006448c3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006448c5: push 0x6abd4b */ { u32 v = 0x6abd4bu; r_esp -= 4; W32(r_esp, v); }
    /* 006448ca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006448d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006448d1: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006448d4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 006448d9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006448db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006448dc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 006448df: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 006448e5: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006448e8: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006448eb: mov dword ptr [eax], 0x6dc53c */ W32((u32)(r_eax), 0x6dc53cu);
    /* 006448f1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006448f8: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 006448ff: jmp 0x64490a */ goto L_0064490a;
L_00644901:; BB(0x00644901);
    /* 00644901: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00644904: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00644907: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0064490a:; BB(0x0064490a);
    /* 0064490a: cmp dword ptr [ebp - 0x10], 0x400 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x400u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00644911: jge 0x6449a8 */ if ((fS==fO)) goto L_006449a8;
L_00644917:; BB(0x00644917);
    /* 00644917: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064491a: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064491d: cmp dword ptr [eax + edx*4 + 0x194], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x194u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00644925: je 0x64495d */ if (fZ) goto L_0064495d;
L_00644927:; BB(0x00644927);
    /* 00644927: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064492a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064492d: mov eax, dword ptr [edx + ecx*4 + 0x194] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x194u));
    /* 00644934: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00644937: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064493a: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0064493d: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00644941: je 0x644956 */ if (fZ) goto L_00644956;
L_00644943:; BB(0x00644943);
    /* 00644943: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00644945: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00644948: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0064494a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064494d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064494f: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x644951u); call_ind(t); }
    /* 00644951: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00644954: jmp 0x64495d */ goto L_0064495d;
L_00644956:; BB(0x00644956);
    /* 00644956: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0064495d:; BB(0x0064495d);
    /* 0064495d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00644960: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00644963: cmp dword ptr [ecx + eax*4 + 0x1194], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x1194u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064496b: je 0x6449a3 */ if (fZ) goto L_006449a3;
L_0064496d:; BB(0x0064496d);
    /* 0064496d: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00644970: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00644973: mov ecx, dword ptr [eax + edx*4 + 0x1194] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x1194u));
    /* 0064497a: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0064497d: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00644980: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00644983: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00644987: je 0x64499c */ if (fZ) goto L_0064499c;
L_00644989:; BB(0x00644989);
    /* 00644989: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064498b: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0064498e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00644990: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00644993: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00644995: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x644997u); call_ind(t); }
    /* 00644997: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0064499a: jmp 0x6449a3 */ goto L_006449a3;
L_0064499c:; BB(0x0064499c);
    /* 0064499c: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_006449a3:; BB(0x006449a3);
    /* 006449a3: jmp 0x644901 */ goto L_00644901;
L_006449a8:; BB(0x006449a8);
    /* 006449a8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006449af: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006449b2: call 0x5f5fa0 */ r_esp -= 4; W32(r_esp, 0x6449b7u); f_005f5fa0();
    /* 006449b7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006449ba: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006449c1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006449c2: mov esp, ebp */ r_esp = r_ebp;
    /* 006449c4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006449c5: ret  */ FN_RET(0x006448c0); r_esp += 4; return;
}

void f_006449d0(void) /* StockDisplay::vfunc16 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006449d0);
    /* 006449d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006449d1: mov ebp, esp */ r_ebp = r_esp;
    /* 006449d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006449d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006449d7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006449da: call 0x5f5cc0 */ r_esp -= 4; W32(r_esp, 0x6449dfu); f_005f5cc0();
    /* 006449df: mov esp, ebp */ r_esp = r_ebp;
    /* 006449e1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006449e2: ret  */ FN_RET(0x006449d0); r_esp += 4; return;
}

void f_00644d60(void) /* StockDisplay::vfunc28 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00644d60);
    /* 00644d60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00644d61: mov ebp, esp */ r_ebp = r_esp;
    /* 00644d63: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00644d66: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00644d69: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00644d70: jmp 0x644d7b */ goto L_00644d7b;
L_00644d72:; BB(0x00644d72);
    /* 00644d72: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00644d75: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00644d78: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00644d7b:; BB(0x00644d7b);
    /* 00644d7b: cmp dword ptr [ebp - 4], 0x400 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x400u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00644d82: jge 0x644de8 */ if ((fS==fO)) goto L_00644de8;
L_00644d84:; BB(0x00644d84);
    /* 00644d84: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00644d87: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00644d8a: cmp dword ptr [edx + ecx*4 + 0x194], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x194u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00644d92: je 0x644db5 */ if (fZ) goto L_00644db5;
L_00644d94:; BB(0x00644d94);
    /* 00644d94: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00644d97: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00644d9a: mov edx, dword ptr [ecx + eax*4 + 0x194] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x194u));
    /* 00644da1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00644da4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00644da7: mov ecx, dword ptr [ecx + eax*4 + 0x194] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x194u));
    /* 00644dae: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00644db0: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00644db3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x644db5u); call_ind(t); }
L_00644db5:; BB(0x00644db5);
    /* 00644db5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00644db8: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00644dbb: cmp dword ptr [edx + ecx*4 + 0x1194], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x1194u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00644dc3: je 0x644de6 */ if (fZ) goto L_00644de6;
L_00644dc5:; BB(0x00644dc5);
    /* 00644dc5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00644dc8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00644dcb: mov edx, dword ptr [ecx + eax*4 + 0x1194] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x1194u));
    /* 00644dd2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00644dd5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00644dd8: mov ecx, dword ptr [ecx + eax*4 + 0x1194] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x1194u));
    /* 00644ddf: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00644de1: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00644de4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x644de6u); call_ind(t); }
L_00644de6:; BB(0x00644de6);
    /* 00644de6: jmp 0x644d72 */ goto L_00644d72;
L_00644de8:; BB(0x00644de8);
    /* 00644de8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00644deb: call 0x5eb5a0 */ r_esp -= 4; W32(r_esp, 0x644df0u); f_005eb5a0();
    /* 00644df0: mov esp, ebp */ r_esp = r_ebp;
    /* 00644df2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00644df3: ret  */ FN_RET(0x00644d60); r_esp += 4; return;
}

void f_00644e00(void) /* StockDisplay::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00644e00);
    /* 00644e00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00644e01: mov ebp, esp */ r_ebp = r_esp;
    /* 00644e03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00644e04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00644e07: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00644e0a: movzx ecx, byte ptr [eax + 4] */ r_ecx = (u32)R8((u32)(r_eax+0x4u));
    /* 00644e0e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00644e10: jne 0x644e44 */ if (!fZ) goto L_00644e44;
L_00644e12:; BB(0x00644e12);
    /* 00644e12: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00644e15: call 0x5f54a0 */ r_esp -= 4; W32(r_esp, 0x644e1au); f_005f54a0();
    /* 00644e1a: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00644e1d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00644e1f: je 0x644e44 */ if (fZ) goto L_00644e44;
L_00644e21:; BB(0x00644e21);
    /* 00644e21: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00644e24: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00644e26: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00644e29: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 00644e2f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x644e31u); call_ind(t); }
    /* 00644e31: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00644e34: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00644e36: je 0x644e44 */ if (fZ) goto L_00644e44;
L_00644e38:; BB(0x00644e38);
    /* 00644e38: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00644e3b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00644e3c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00644e3f: call 0x5f4ed0 */ r_esp -= 4; W32(r_esp, 0x644e44u); f_005f4ed0();
L_00644e44:; BB(0x00644e44);
    /* 00644e44: mov esp, ebp */ r_esp = r_ebp;
    /* 00644e46: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00644e47: ret 4 */ FN_RET(0x00644e00); r_esp += 8; return;
}

void f_00644e50(void) /* StockDisplay::vfunc4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00644e50);
    /* 00644e50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00644e51: mov ebp, esp */ r_ebp = r_esp;
    /* 00644e53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00644e54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00644e57: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00644e5a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00644e5b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00644e5e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00644e60: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00644e63: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 00644e69: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x644e6bu); call_ind(t); }
    /* 00644e6b: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00644e6e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00644e70: je 0x644eb7 */ if (fZ) goto L_00644eb7;
L_00644e72:; BB(0x00644e72);
    /* 00644e72: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00644e75: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00644e77: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00644e7a: mov edx, dword ptr [eax + 0xa8] */ r_edx = R32((u32)(r_eax+0xa8u));
    /* 00644e80: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x644e82u); call_ind(t); }
    /* 00644e82: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00644e85: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00644e87: je 0x644eb7 */ if (fZ) goto L_00644eb7;
L_00644e89:; BB(0x00644e89);
    /* 00644e89: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00644e8c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00644e8e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00644e91: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 00644e97: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x644e99u); call_ind(t); }
    /* 00644e99: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00644e9c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00644e9e: je 0x644eb7 */ if (fZ) goto L_00644eb7;
L_00644ea0:; BB(0x00644ea0);
    /* 00644ea0: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00644ea3: mov byte ptr [edx + 4], 1 */ W8((u32)(r_edx+0x4u), 0x1u);
    /* 00644ea7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00644eaa: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00644eac: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00644eaf: mov eax, dword ptr [edx + 0xc4] */ r_eax = R32((u32)(r_edx+0xc4u));
    /* 00644eb5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x644eb7u); call_ind(t); }
L_00644eb7:; BB(0x00644eb7);
    /* 00644eb7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00644eba: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00644ebb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00644ebe: call 0x5f4e90 */ r_esp -= 4; W32(r_esp, 0x644ec3u); f_005f4e90();
    /* 00644ec3: mov esp, ebp */ r_esp = r_ebp;
    /* 00644ec5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00644ec6: ret 4 */ FN_RET(0x00644e50); r_esp += 8; return;
}

void f_00644ed0(void) /* StockDisplay::vfunc33 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00644ed0);
    /* 00644ed0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00644ed1: mov ebp, esp */ r_ebp = r_esp;
    /* 00644ed3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00644ed6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00644ed9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00644ee0: jmp 0x644eeb */ goto L_00644eeb;
L_00644ee2:; BB(0x00644ee2);
    /* 00644ee2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00644ee5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00644ee8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00644eeb:; BB(0x00644eeb);
    /* 00644eeb: cmp dword ptr [ebp - 4], 0x400 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x400u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00644ef2: jge 0x644f39 */ if ((fS==fO)) goto L_00644f39;
L_00644ef4:; BB(0x00644ef4);
    /* 00644ef4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00644ef7: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00644efa: cmp dword ptr [edx + ecx*4 + 0x194], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x194u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00644f02: je 0x644f37 */ if (fZ) goto L_00644f37;
L_00644f04:; BB(0x00644f04);
    /* 00644f04: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00644f07: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00644f08: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00644f0b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00644f0e: mov eax, dword ptr [edx + ecx*4 + 0x194] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x194u));
    /* 00644f15: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00644f18: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00644f1b: mov ecx, dword ptr [edx + ecx*4 + 0x194] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x194u));
    /* 00644f22: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00644f24: mov edx, dword ptr [eax + 0x84] */ r_edx = R32((u32)(r_eax+0x84u));
    /* 00644f2a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x644f2cu); call_ind(t); }
    /* 00644f2c: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00644f2f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00644f31: je 0x644f37 */ if (fZ) goto L_00644f37;
L_00644f33:; BB(0x00644f33);
    /* 00644f33: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00644f35: jmp 0x644f3b */ goto L_00644f3b;
L_00644f37:; BB(0x00644f37);
    /* 00644f37: jmp 0x644ee2 */ goto L_00644ee2;
L_00644f39:; BB(0x00644f39);
    /* 00644f39: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_00644f3b:; BB(0x00644f3b);
    /* 00644f3b: mov esp, ebp */ r_esp = r_ebp;
    /* 00644f3d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00644f3e: ret 4 */ FN_RET(0x00644ed0); r_esp += 8; return;
}

void f_00645260(void) /* StockDisplay::vfunc17 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00645260);
    /* 00645260: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00645261: mov ebp, esp */ r_ebp = r_esp;
    /* 00645263: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00645266: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00645269: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064526c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064526e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00645271: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 00645274: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x645276u); call_ind(t); }
    /* 00645276: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00645279: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0064527b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0064527e: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00645281: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00645283: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00645286: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 00645289: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x64528bu); call_ind(t); }
    /* 0064528b: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0064528e: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00645290: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00645293: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00645297: jne 0x6452a4 */ if (!fZ) goto L_006452a4;
L_00645299:; BB(0x00645299);
    /* 00645299: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064529d: jne 0x6452a4 */ if (!fZ) goto L_006452a4;
L_0064529f:; BB(0x0064529f);
    /* 0064529f: jmp 0x6453d2 */ goto L_006453d2;
L_006452a4:; BB(0x006452a4);
    /* 006452a4: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 006452ab: jmp 0x6452b6 */ goto L_006452b6;
L_006452ad:; BB(0x006452ad);
    /* 006452ad: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006452b0: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006452b3: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_006452b6:; BB(0x006452b6);
    /* 006452b6: cmp dword ptr [ebp - 0xc], 0x400 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x400u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006452bd: jge 0x6453c2 */ if ((fS==fO)) goto L_006453c2;
L_006452c3:; BB(0x006452c3);
    /* 006452c3: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 006452c6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006452c9: cmp dword ptr [ecx + eax*4 + 0x194], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x194u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006452d1: je 0x645340 */ if (fZ) goto L_00645340;
L_006452d3:; BB(0x006452d3);
    /* 006452d3: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006452d6: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 006452d9: mov ecx, dword ptr [eax + edx*4 + 0x194] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x194u));
    /* 006452e0: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006452e3: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 006452e6: mov edx, dword ptr [eax + edx*4 + 0x194] */ r_edx = R32((u32)(r_eax+r_edx*4+0x194u));
    /* 006452ed: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006452ef: mov ecx, edx */ r_ecx = r_edx;
    /* 006452f1: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 006452f4: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6452f6u); call_ind(t); }
    /* 006452f6: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006452f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006452fa: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 006452fd: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00645300: mov edx, dword ptr [ecx + eax*4 + 0x194] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x194u));
    /* 00645307: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064530a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064530d: mov ecx, dword ptr [ecx + eax*4 + 0x194] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x194u));
    /* 00645314: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00645316: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 00645319: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64531bu); call_ind(t); }
    /* 0064531b: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0064531e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064531f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00645322: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00645325: mov eax, dword ptr [edx + ecx*4 + 0x194] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x194u));
    /* 0064532c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064532f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00645332: mov ecx, dword ptr [edx + ecx*4 + 0x194] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x194u));
    /* 00645339: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0064533b: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0064533e: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x645340u); call_ind(t); }
L_00645340:; BB(0x00645340);
    /* 00645340: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00645343: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00645346: cmp dword ptr [ecx + eax*4 + 0x1194], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x1194u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064534e: je 0x6453bd */ if (fZ) goto L_006453bd;
L_00645350:; BB(0x00645350);
    /* 00645350: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00645353: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00645356: mov ecx, dword ptr [eax + edx*4 + 0x1194] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x1194u));
    /* 0064535d: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00645360: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00645363: mov edx, dword ptr [eax + edx*4 + 0x1194] */ r_edx = R32((u32)(r_eax+r_edx*4+0x1194u));
    /* 0064536a: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0064536c: mov ecx, edx */ r_ecx = r_edx;
    /* 0064536e: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 00645371: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x645373u); call_ind(t); }
    /* 00645373: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00645376: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00645377: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064537a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064537d: mov edx, dword ptr [ecx + eax*4 + 0x1194] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x1194u));
    /* 00645384: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00645387: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064538a: mov ecx, dword ptr [ecx + eax*4 + 0x1194] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x1194u));
    /* 00645391: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00645393: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 00645396: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x645398u); call_ind(t); }
    /* 00645398: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0064539b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064539c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064539f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006453a2: mov eax, dword ptr [edx + ecx*4 + 0x1194] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x1194u));
    /* 006453a9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006453ac: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006453af: mov ecx, dword ptr [edx + ecx*4 + 0x1194] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x1194u));
    /* 006453b6: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 006453b8: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 006453bb: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6453bdu); call_ind(t); }
L_006453bd:; BB(0x006453bd);
    /* 006453bd: jmp 0x6452ad */ goto L_006452ad;
L_006453c2:; BB(0x006453c2);
    /* 006453c2: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006453c5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006453c6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006453c9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006453ca: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006453cd: call 0x5eb260 */ r_esp -= 4; W32(r_esp, 0x6453d2u); f_005eb260();
L_006453d2:; BB(0x006453d2);
    /* 006453d2: mov esp, ebp */ r_esp = r_ebp;
    /* 006453d4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006453d5: ret 8 */ FN_RET(0x00645260); r_esp += 12; return;
}

void f_00645440(void) /* StockDisplay::vfunc50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00645440);
    /* 00645440: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00645441: mov ebp, esp */ r_ebp = r_esp;
    /* 00645443: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00645445: push 0x6abd9b */ { u32 v = 0x6abd9bu; r_esp -= 4; W32(r_esp, v); }
    /* 0064544a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00645450: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00645451: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00645454: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00645459: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0064545b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064545c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0064545f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00645465: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00645468: push 0x1a0 */ { u32 v = 0x1a0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064546d: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x645472u); f_00686d82();
    /* 00645472: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00645475: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00645478: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0064547f: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00645483: je 0x645498 */ if (fZ) goto L_00645498;
L_00645485:; BB(0x00645485);
    /* 00645485: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00645488: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00645489: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064548b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064548e: call 0x643ce0 */ r_esp -= 4; W32(r_esp, 0x645493u); f_00643ce0();
    /* 00645493: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00645496: jmp 0x64549f */ goto L_0064549f;
L_00645498:; BB(0x00645498);
    /* 00645498: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_0064549f:; BB(0x0064549f);
    /* 0064549f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006454a2: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 006454a5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006454ac: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 006454af: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006454b2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006454b9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006454ba: mov esp, ebp */ r_esp = r_ebp;
    /* 006454bc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006454bd: ret 4 */ FN_RET(0x00645440); r_esp += 8; return;
}

