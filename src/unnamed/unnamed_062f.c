#include "protos.h"

void f_0062f8e0(void) /* sub_62F8E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062f8e0);
    /* 0062f8e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062f8e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0062f8e3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0062f8e6: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0062f8e8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062f8e9: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0062f8ec: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0062f8ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062f8ef: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x62f8f4u); f_00686ec0();
    /* 0062f8f4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062f8f7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062f8f8: ret  */ FN_RET(0x0062f8e0); r_esp += 4; return;
}

void f_0062fa00(void) /* sub_62FA00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062fa00);
    /* 0062fa00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062fa01: mov ebp, esp */ r_ebp = r_esp;
    /* 0062fa03: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062fa06: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0062fa09: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062fa0c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062fa0f: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0062fa12: cmp edx, dword ptr [ecx + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062fa15: jne 0x62fa40 */ if (!fZ) goto L_0062fa40;
L_0062fa17:; BB(0x0062fa17);
    /* 0062fa17: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062fa1a: cmp dword ptr [eax + 0xc], 0 */ {  u32 a = R32((u32)(r_eax+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062fa1e: jne 0x62fa2a */ if (!fZ) goto L_0062fa2a;
L_0062fa20:; BB(0x0062fa20);
    /* 0062fa20: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062fa23: mov dword ptr [ecx + 0xc], 1 */ W32((u32)(r_ecx+0xcu), 0x1u);
L_0062fa2a:; BB(0x0062fa2a);
    /* 0062fa2a: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062fa2d: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 0062fa30: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0062fa32: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062fa35: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 0062fa38: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062fa3b: call 0x62faa0 */ r_esp -= 4; W32(r_esp, 0x62fa40u); f_0062faa0();
L_0062fa40:; BB(0x0062fa40);
    /* 0062fa40: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062fa43: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0062fa46: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062fa49: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 0062fa4c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0062fa4f: mov dword ptr [edx + eax*8], ecx */ W32((u32)(r_edx+r_eax*8), r_ecx);
    /* 0062fa52: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0062fa55: mov dword ptr [edx + eax*8 + 4], ecx */ W32((u32)(r_edx+r_eax*8+0x4u), r_ecx);
    /* 0062fa59: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062fa5c: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0062fa5f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062fa62: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062fa65: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 0062fa68: mov esp, ebp */ r_esp = r_ebp;
    /* 0062fa6a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062fa6b: ret 8 */ FN_RET(0x0062fa00); r_esp += 12; return;
}

void f_0062faa0(void) /* sub_62FAA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062faa0);
    /* 0062faa0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062faa1: mov ebp, esp */ r_ebp = r_esp;
    /* 0062faa3: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062faa6: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0062faa9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062faac: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0062faaf: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0062fab2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0062fab4: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062fab7: mov edx, 8 */ r_edx = 0x8u;
    /* 0062fabc: mul edx */ { u64 t = (u64)r_eax * r_edx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 0062fabe: seto cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fO) ? 1 : 0) & 0xffu);
    /* 0062fac1: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0062fac3: or ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0062fac5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062fac6: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x62facbu); f_00686d82();
    /* 0062facb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062face: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0062fad1: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062fad5: je 0x62fb14 */ if (fZ) goto L_0062fb14;
L_0062fad7:; BB(0x0062fad7);
    /* 0062fad7: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062fada: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0062fadd: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062fae0: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
L_0062fae3:; BB(0x0062fae3);
    /* 0062fae3: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0062fae6: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fS = ((r >> 31) & 1); }
    /* 0062fae9: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0062faec: js 0x62fb0c */ if (fS) goto L_0062fb0c;
L_0062faee:; BB(0x0062faee);
    /* 0062faee: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062faf1: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 0062faf7: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062fafa: mov dword ptr [ecx + 4], 0 */ W32((u32)(r_ecx+0x4u), 0x0u);
    /* 0062fb01: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062fb04: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0062fb07: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0062fb0a: jmp 0x62fae3 */ goto L_0062fae3;
L_0062fb0c:; BB(0x0062fb0c);
    /* 0062fb0c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062fb0f: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0062fb12: jmp 0x62fb1b */ goto L_0062fb1b;
L_0062fb14:; BB(0x0062fb14);
    /* 0062fb14: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0062fb1b:; BB(0x0062fb1b);
    /* 0062fb1b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062fb1e: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0062fb21: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062fb24: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0062fb27: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062fb2a: cmp dword ptr [eax + 0x10], 0 */ {  u32 a = R32((u32)(r_eax+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062fb2e: je 0x62fb8a */ if (fZ) goto L_0062fb8a;
L_0062fb30:; BB(0x0062fb30);
    /* 0062fb30: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062fb33: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0062fb36: shl edx, 3 */ { u32 c = (3u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0062fb39: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062fb3a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062fb3d: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 0062fb40: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062fb41: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062fb44: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062fb45: call dword ptr [0x6b22d8] */ { u32 t = R32((u32)(0x6b22d8u)); r_esp -= 4; W32(r_esp, 0x62fb4bu); call_ind(t); }
    /* 0062fb4b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062fb4e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062fb51: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062fb54: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 0062fb57: sub edx, dword ptr [ecx + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x8u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0062fb5a: shl edx, 3 */ { u32 c = (3u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0062fb5d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062fb5e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062fb60: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062fb63: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0062fb66: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062fb69: lea eax, [edx + ecx*8] */ r_eax = (u32)(r_edx+r_ecx*8);
    /* 0062fb6c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062fb6d: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x62fb72u); f_00686fa2();
    /* 0062fb72: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062fb75: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062fb78: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 0062fb7b: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0062fb7e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0062fb81: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062fb82: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x62fb87u); f_00686cae();
    /* 0062fb87: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0062fb8a:; BB(0x0062fb8a);
    /* 0062fb8a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062fb8d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062fb90: mov dword ptr [ecx + 0x10], edx */ W32((u32)(r_ecx+0x10u), r_edx);
    /* 0062fb93: mov esp, ebp */ r_esp = r_ebp;
    /* 0062fb95: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062fb96: ret  */ FN_RET(0x0062faa0); r_esp += 4; return;
}

void f_0062fba0(void) /* sub_62FBA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062fba0);
    /* 0062fba0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062fba1: mov ebp, esp */ r_ebp = r_esp;
    /* 0062fba3: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062fba7: je 0x62fbbd */ if (fZ) goto L_0062fbbd;
L_0062fba9:; BB(0x0062fba9);
    /* 0062fba9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0062fbac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062fbad: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 0062fbb3: mov ecx, dword ptr [ecx + 0x24] */ r_ecx = R32((u32)(r_ecx+0x24u));
    /* 0062fbb6: call 0x6146a0 */ r_esp -= 4; W32(r_esp, 0x62fbbbu); f_006146a0();
    /* 0062fbbb: jmp 0x62fbbf */ goto L_0062fbbf;
L_0062fbbd:; BB(0x0062fbbd);
    /* 0062fbbd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0062fbbf:; BB(0x0062fbbf);
    /* 0062fbbf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062fbc0: ret  */ FN_RET(0x0062fba0); r_esp += 4; return;
}

void f_0062fc30(void) /* sub_62FC30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062fc30);
    /* 0062fc30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062fc31: mov ebp, esp */ r_ebp = r_esp;
    /* 0062fc33: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062fc34: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0062fc37: cmp eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062fc3a: jle 0x62fc5b */ if ((fZ||fS!=fO)) goto L_0062fc5b;
L_0062fc3c:; BB(0x0062fc3c);
    /* 0062fc3c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0062fc3f: sub ecx, dword ptr [ebp + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0062fc42: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0062fc45: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062fc48: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0062fc4b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062fc4c: call 0x62fba0 */ r_esp -= 4; W32(r_esp, 0x62fc51u); f_0062fba0();
    /* 0062fc51: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062fc54: add eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062fc57: jmp 0x62fc76 */ goto L_0062fc76;
L_0062fc5b:; BB(0x0062fc5b);
    /* 0062fc5b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0062fc5e: sub eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0062fc61: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0062fc64: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062fc67: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062fc6a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062fc6b: call 0x62fba0 */ r_esp -= 4; W32(r_esp, 0x62fc70u); f_0062fba0();
    /* 0062fc70: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062fc73: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_0062fc76:; BB(0x0062fc76);
    /* 0062fc76: mov esp, ebp */ r_esp = r_ebp;
    /* 0062fc78: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062fc79: ret  */ FN_RET(0x0062fc30); r_esp += 4; return;
}

void f_0062fe60(void) /* sub_62FE60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062fe60);
    /* 0062fe60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062fe61: mov ebp, esp */ r_ebp = r_esp;
    /* 0062fe63: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0062fe66: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062fe67: call dword ptr [0x6b20d0] */ { u32 t = R32((u32)(0x6b20d0u)); r_esp -= 4; W32(r_esp, 0x62fe6du); call_ind(t); }
    /* 0062fe6d: movzx ecx, byte ptr [0x162ee6d] */ r_ecx = (u32)R8((u32)(0x162ee6du));
    /* 0062fe74: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062fe76: jne 0x62fead */ if (!fZ) goto L_0062fead;
L_0062fe78:; BB(0x0062fe78);
    /* 0062fe78: cmp dword ptr [0x7960d8], 0 */ {  u32 a = R32((u32)(0x7960d8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062fe7f: je 0x62fead */ if (fZ) goto L_0062fead;
L_0062fe81:; BB(0x0062fe81);
    /* 0062fe81: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 0062fe87: cmp dword ptr [edx + 0x14], 0 */ {  u32 a = R32((u32)(r_edx+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062fe8b: je 0x62fead */ if (fZ) goto L_0062fead;
L_0062fe8d:; BB(0x0062fe8d);
    /* 0062fe8d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062fe8f: push 0x6d9d3c */ { u32 v = 0x6d9d3cu; r_esp -= 4; W32(r_esp, v); }
    /* 0062fe94: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 0062fe99: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0062fe9c: call 0x607900 */ r_esp -= 4; W32(r_esp, 0x62fea1u); f_00607900();
    /* 0062fea1: mov byte ptr [0x162ee6c], al */ W8((u32)(0x162ee6cu), (u8)r_eax);
    /* 0062fea6: mov byte ptr [0x162ee6d], 1 */ W8((u32)(0x162ee6du), 0x1u);
L_0062fead:; BB(0x0062fead);
    /* 0062fead: movzx ecx, byte ptr [0x162ee6c] */ r_ecx = (u32)R8((u32)(0x162ee6cu));
    /* 0062feb4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062feb6: je 0x62ff05 */ if (fZ) goto L_0062ff05;
L_0062feb8:; BB(0x0062feb8);
    /* 0062feb8: cmp dword ptr [0x162ee68], 0 */ {  u32 a = R32((u32)(0x162ee68u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062febf: jne 0x62fed8 */ if (!fZ) goto L_0062fed8;
L_0062fec1:; BB(0x0062fec1);
    /* 0062fec1: push 0x6d9d38 */ { u32 v = 0x6d9d38u; r_esp -= 4; W32(r_esp, v); }
    /* 0062fec6: push 0x6d9d28 */ { u32 v = 0x6d9d28u; r_esp -= 4; W32(r_esp, v); }
    /* 0062fecb: call 0x5ea9c0 */ r_esp -= 4; W32(r_esp, 0x62fed0u); f_005ea9c0();
    /* 0062fed0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062fed3: mov dword ptr [0x162ee68], eax */ W32((u32)(0x162ee68u), r_eax);
L_0062fed8:; BB(0x0062fed8);
    /* 0062fed8: cmp dword ptr [0x162ee68], 0 */ {  u32 a = R32((u32)(0x162ee68u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062fedf: je 0x62ff05 */ if (fZ) goto L_0062ff05;
L_0062fee1:; BB(0x0062fee1);
    /* 0062fee1: mov edx, dword ptr [0x162ee68] */ r_edx = R32((u32)(0x162ee68u));
    /* 0062fee7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062fee8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0062feeb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062feec: call dword ptr [0x6b217c] */ { u32 t = R32((u32)(0x6b217cu)); r_esp -= 4; W32(r_esp, 0x62fef2u); call_ind(t); }
    /* 0062fef2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062fef5: mov ecx, dword ptr [0x162ee68] */ r_ecx = R32((u32)(0x162ee68u));
    /* 0062fefb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062fefc: call dword ptr [0x6b21a4] */ { u32 t = R32((u32)(0x6b21a4u)); r_esp -= 4; W32(r_esp, 0x62ff02u); call_ind(t); }
    /* 0062ff02: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0062ff05:; BB(0x0062ff05);
    /* 0062ff05: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062ff06: ret  */ FN_RET(0x0062fe60); r_esp += 4; return;
}

void f_0062ff10(void) /* sub_62FF10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062ff10);
    /* 0062ff10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062ff11: mov ebp, esp */ r_ebp = r_esp;
    /* 0062ff13: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0062ff15: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0062ff18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062ff19: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0062ff1c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062ff1d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0062ff20: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062ff21: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062ff23: call 0x62ff50 */ r_esp -= 4; W32(r_esp, 0x62ff28u); f_0062ff50();
    /* 0062ff28: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062ff2b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062ff2c: ret  */ FN_RET(0x0062ff10); r_esp += 4; return;
}

void f_0062ff30(void) /* sub_62FF30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062ff30);
    /* 0062ff30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062ff31: mov ebp, esp */ r_ebp = r_esp;
    /* 0062ff33: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0062ff36: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062ff37: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0062ff3a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062ff3b: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0062ff3e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062ff3f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0062ff42: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062ff43: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062ff45: call 0x62ff50 */ r_esp -= 4; W32(r_esp, 0x62ff4au); f_0062ff50();
    /* 0062ff4a: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062ff4d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062ff4e: ret  */ FN_RET(0x0062ff30); r_esp += 4; return;
}

void f_0062ff50(void) /* sub_62FF50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062ff50);
    /* 0062ff50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062ff51: mov ebp, esp */ r_ebp = r_esp;
    /* 0062ff53: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062ff56: cmp dword ptr [0x162ee80], 0 */ {  u32 a = R32((u32)(0x162ee80u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062ff5d: jne 0x62ffd0 */ if (!fZ) goto L_0062ffd0;
L_0062ff5f:; BB(0x0062ff5f);
    /* 0062ff5f: cmp dword ptr [0x7960d8], 0 */ {  u32 a = R32((u32)(0x7960d8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062ff66: je 0x62ffb7 */ if (fZ) goto L_0062ffb7;
L_0062ff68:; BB(0x0062ff68);
    /* 0062ff68: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 0062ff6d: cmp dword ptr [eax + 0x10], 0 */ {  u32 a = R32((u32)(r_eax+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062ff71: je 0x62ffb7 */ if (fZ) goto L_0062ffb7;
L_0062ff73:; BB(0x0062ff73);
    /* 0062ff73: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062ff75: push 0x75ee04 */ { u32 v = 0x75ee04u; r_esp -= 4; W32(r_esp, v); }
    /* 0062ff7a: push 0x75edec */ { u32 v = 0x75edecu; r_esp -= 4; W32(r_esp, v); }
    /* 0062ff7f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062ff81: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 0062ff87: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 0062ff8a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062ff8b: call 0x686ede */ r_esp -= 4; W32(r_esp, 0x62ff90u); f_00686ede();
    /* 0062ff90: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062ff93: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0062ff96: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0062ff99: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062ff9a: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0062ff9d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062ff9e: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0062ffa1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062ffa2: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062ffa5: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 0062ffab: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062ffac: call dword ptr [0x6b2440] */ { u32 t = R32((u32)(0x6b2440u)); r_esp -= 4; W32(r_esp, 0x62ffb2u); call_ind(t); }
    /* 0062ffb2: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0062ffb5: jmp 0x62ffce */ goto L_0062ffce;
L_0062ffb7:; BB(0x0062ffb7);
    /* 0062ffb7: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0062ffba: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062ffbb: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0062ffbe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062ffbf: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0062ffc2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062ffc3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062ffc5: call dword ptr [0x6b2440] */ { u32 t = R32((u32)(0x6b2440u)); r_esp -= 4; W32(r_esp, 0x62ffcbu); call_ind(t); }
    /* 0062ffcb: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0062ffce:; BB(0x0062ffce);
    /* 0062ffce: jmp 0x630026 */ goto L_00630026;
L_0062ffd0:; BB(0x0062ffd0);
    /* 0062ffd0: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 0062ffd6: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0062ffd8: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0062ffde: mov edx, dword ptr [eax + 0x58] */ r_edx = R32((u32)(r_eax+0x58u));
    /* 0062ffe1: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x62ffe3u); call_ind(t); }
    /* 0062ffe3: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0062ffe6: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 0062ffe9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062ffea: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0062ffed: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062ffee: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0062fff1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062fff2: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0062fff5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062fff6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062fff9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0062fffb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062fffe: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00630001: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x630003u); call_ind(t); }
    /* 00630003: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00630006: mov edx, dword ptr [ecx + 0x1c0] */ r_edx = R32((u32)(r_ecx+0x1c0u));
    /* 0063000c: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0063000f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00630012: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00630013: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00630019: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0063001b: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00630021: mov eax, dword ptr [edx + 0x5c] */ r_eax = R32((u32)(r_edx+0x5cu));
    /* 00630024: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x630026u); call_ind(t); }
L_00630026:; BB(0x00630026);
    /* 00630026: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00630029: mov esp, ebp */ r_esp = r_ebp;
    /* 0063002b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063002c: ret  */ FN_RET(0x0062ff50); r_esp += 4; return;
}

