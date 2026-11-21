#include "protos.h"

void f_0053c030(void) /* sub_53C030 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053c030);
    /* 0053c030: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053c031: mov ebp, esp */ r_ebp = r_esp;
    /* 0053c033: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0053c035: push 0x6a4c12 */ { u32 v = 0x6a4c12u; r_esp -= 4; W32(r_esp, v); }
    /* 0053c03a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0053c040: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053c041: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053c044: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0053c049: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0053c04b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053c04c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0053c04f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0053c055: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0053c058: mov eax, dword ptr [0x7933f4] */ r_eax = R32((u32)(0x7933f4u));
    /* 0053c05d: cmp dword ptr [eax + 0x98], 0 */ {  u32 a = R32((u32)(r_eax+0x98u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053c064: je 0x53c0f8 */ if (fZ) goto L_0053c0f8;
L_0053c06a:; BB(0x0053c06a);
    /* 0053c06a: push 0x7e9 */ { u32 v = 0x7e9u; r_esp -= 4; W32(r_esp, v); }
    /* 0053c06f: mov ecx, dword ptr [0x7933f4] */ r_ecx = R32((u32)(0x7933f4u));
    /* 0053c075: mov ecx, dword ptr [ecx + 0x98] */ r_ecx = R32((u32)(r_ecx+0x98u));
    /* 0053c07b: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x53c080u); f_005eaf00();
    /* 0053c080: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053c082: mov edx, dword ptr [0x7933f4] */ r_edx = R32((u32)(0x7933f4u));
    /* 0053c088: mov eax, dword ptr [edx + 0x98] */ r_eax = R32((u32)(r_edx+0x98u));
    /* 0053c08e: mov ecx, dword ptr [0x7933f4] */ r_ecx = R32((u32)(0x7933f4u));
    /* 0053c094: mov ecx, dword ptr [ecx + 0x98] */ r_ecx = R32((u32)(r_ecx+0x98u));
    /* 0053c09a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0053c09c: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0053c0a2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53c0a4u); call_ind(t); }
    /* 0053c0a4: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0053c0a6: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x53c0abu); f_00686d82();
    /* 0053c0ab: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053c0ae: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0053c0b1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0053c0b8: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053c0bc: je 0x53c0cf */ if (fZ) goto L_0053c0cf;
L_0053c0be:; BB(0x0053c0be);
    /* 0053c0be: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0053c0c1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053c0c2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0053c0c5: call 0x6010a0 */ r_esp -= 4; W32(r_esp, 0x53c0cau); f_006010a0();
    /* 0053c0ca: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0053c0cd: jmp 0x53c0d6 */ goto L_0053c0d6;
L_0053c0cf:; BB(0x0053c0cf);
    /* 0053c0cf: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0053c0d6:; BB(0x0053c0d6);
    /* 0053c0d6: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0053c0d9: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0053c0dc: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0053c0e3: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0053c0e6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053c0e7: mov ecx, dword ptr [0x7933f4] */ r_ecx = R32((u32)(0x7933f4u));
    /* 0053c0ed: mov ecx, dword ptr [ecx + 0x98] */ r_ecx = R32((u32)(r_ecx+0x98u));
    /* 0053c0f3: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x53c0f8u); f_005f5d50();
L_0053c0f8:; BB(0x0053c0f8);
    /* 0053c0f8: mov edx, dword ptr [0x7933f4] */ r_edx = R32((u32)(0x7933f4u));
    /* 0053c0fe: cmp dword ptr [edx + 0x94], 0 */ {  u32 a = R32((u32)(r_edx+0x94u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053c105: je 0x53c194 */ if (fZ) goto L_0053c194;
L_0053c10b:; BB(0x0053c10b);
    /* 0053c10b: push 0x7e8 */ { u32 v = 0x7e8u; r_esp -= 4; W32(r_esp, v); }
    /* 0053c110: mov eax, dword ptr [0x7933f4] */ r_eax = R32((u32)(0x7933f4u));
    /* 0053c115: mov ecx, dword ptr [eax + 0x94] */ r_ecx = R32((u32)(r_eax+0x94u));
    /* 0053c11b: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x53c120u); f_005eaf00();
    /* 0053c120: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053c122: mov ecx, dword ptr [0x7933f4] */ r_ecx = R32((u32)(0x7933f4u));
    /* 0053c128: mov edx, dword ptr [ecx + 0x94] */ r_edx = R32((u32)(r_ecx+0x94u));
    /* 0053c12e: mov eax, dword ptr [0x7933f4] */ r_eax = R32((u32)(0x7933f4u));
    /* 0053c133: mov ecx, dword ptr [eax + 0x94] */ r_ecx = R32((u32)(r_eax+0x94u));
    /* 0053c139: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0053c13b: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0053c141: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53c143u); call_ind(t); }
    /* 0053c143: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0053c145: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x53c14au); f_00686d82();
    /* 0053c14a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053c14d: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0053c150: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0053c157: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053c15b: je 0x53c16c */ if (fZ) goto L_0053c16c;
L_0053c15d:; BB(0x0053c15d);
    /* 0053c15d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053c15f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053c162: call 0x6010a0 */ r_esp -= 4; W32(r_esp, 0x53c167u); f_006010a0();
    /* 0053c167: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0053c16a: jmp 0x53c173 */ goto L_0053c173;
L_0053c16c:; BB(0x0053c16c);
    /* 0053c16c: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0053c173:; BB(0x0053c173);
    /* 0053c173: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0053c176: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0053c179: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0053c180: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053c183: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053c184: mov eax, dword ptr [0x7933f4] */ r_eax = R32((u32)(0x7933f4u));
    /* 0053c189: mov ecx, dword ptr [eax + 0x94] */ r_ecx = R32((u32)(r_eax+0x94u));
    /* 0053c18f: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x53c194u); f_005f5d50();
L_0053c194:; BB(0x0053c194);
    /* 0053c194: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053c197: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0053c19e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0053c19f: mov esp, ebp */ r_esp = r_ebp;
    /* 0053c1a1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053c1a2: ret 4 */ FN_RET(0x0053c030); r_esp += 8; return;
}

void f_0053c200(void) /* sub_53C200 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053c200);
    /* 0053c200: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053c201: mov ebp, esp */ r_ebp = r_esp;
    /* 0053c203: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053c206: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 0053c209: mov dword ptr [ebp - 0x30], 0x172 */ W32((u32)(r_ebp+0xffffffd0u), 0x172u);
    /* 0053c210: mov dword ptr [ebp - 0x2c], 0x169 */ W32((u32)(r_ebp+0xffffffd4u), 0x169u);
    /* 0053c217: mov dword ptr [ebp - 0x28], 0x15e */ W32((u32)(r_ebp+0xffffffd8u), 0x15eu);
    /* 0053c21e: mov dword ptr [ebp - 0x24], 0xc9 */ W32((u32)(r_ebp+0xffffffdcu), 0xc9u);
    /* 0053c225: mov dword ptr [ebp - 0x20], 0xd6 */ W32((u32)(r_ebp+0xffffffe0u), 0xd6u);
    /* 0053c22c: mov dword ptr [ebp - 0x1c], 0xe0 */ W32((u32)(r_ebp+0xffffffe4u), 0xe0u);
    /* 0053c233: mov dword ptr [ebp - 0x18], 0x214 */ W32((u32)(r_ebp+0xffffffe8u), 0x214u);
    /* 0053c23a: mov dword ptr [ebp - 0x14], 0x1f5 */ W32((u32)(r_ebp+0xffffffecu), 0x1f5u);
    /* 0053c241: mov dword ptr [ebp - 0x10], 0x1d6 */ W32((u32)(r_ebp+0xfffffff0u), 0x1d6u);
    /* 0053c248: mov dword ptr [ebp - 0xc], 0x2c */ W32((u32)(r_ebp+0xfffffff4u), 0x2cu);
    /* 0053c24f: mov dword ptr [ebp - 8], 0x4c */ W32((u32)(r_ebp+0xfffffff8u), 0x4cu);
    /* 0053c256: mov dword ptr [ebp - 4], 0x69 */ W32((u32)(r_ebp+0xfffffffcu), 0x69u);
    /* 0053c25d: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0053c260: mov ecx, dword ptr [eax + 0xae0] */ r_ecx = R32((u32)(r_eax+0xae0u));
    /* 0053c266: mov eax, dword ptr [ebp + ecx*4 - 0x30] */ r_eax = R32((u32)(r_ebp+r_ecx*4+0xffffffd0u));
    /* 0053c26a: mov esp, ebp */ r_esp = r_ebp;
    /* 0053c26c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053c26d: ret 8 */ FN_RET(0x0053c200); r_esp += 12; return;
}

void f_0053c270(void) /* sub_53C270 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053c270);
    /* 0053c270: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053c271: mov ebp, esp */ r_ebp = r_esp;
    /* 0053c273: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053c276: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 0053c279: mov dword ptr [ebp - 0x30], 0x187 */ W32((u32)(r_ebp+0xffffffd0u), 0x187u);
    /* 0053c280: mov dword ptr [ebp - 0x2c], 0x15c */ W32((u32)(r_ebp+0xffffffd4u), 0x15cu);
    /* 0053c287: mov dword ptr [ebp - 0x28], 0x133 */ W32((u32)(r_ebp+0xffffffd8u), 0x133u);
    /* 0053c28e: mov dword ptr [ebp - 0x24], 0x186 */ W32((u32)(r_ebp+0xffffffdcu), 0x186u);
    /* 0053c295: mov dword ptr [ebp - 0x20], 0x15a */ W32((u32)(r_ebp+0xffffffe0u), 0x15au);
    /* 0053c29c: mov dword ptr [ebp - 0x1c], 0x132 */ W32((u32)(r_ebp+0xffffffe4u), 0x132u);
    /* 0053c2a3: mov dword ptr [ebp - 0x18], 0x101 */ W32((u32)(r_ebp+0xffffffe8u), 0x101u);
    /* 0053c2aa: mov dword ptr [ebp - 0x14], 0xe3 */ W32((u32)(r_ebp+0xffffffecu), 0xe3u);
    /* 0053c2b1: mov dword ptr [ebp - 0x10], 0xc7 */ W32((u32)(r_ebp+0xfffffff0u), 0xc7u);
    /* 0053c2b8: mov dword ptr [ebp - 0xc], 0x105 */ W32((u32)(r_ebp+0xfffffff4u), 0x105u);
    /* 0053c2bf: mov dword ptr [ebp - 8], 0xe6 */ W32((u32)(r_ebp+0xfffffff8u), 0xe6u);
    /* 0053c2c6: mov dword ptr [ebp - 4], 0xca */ W32((u32)(r_ebp+0xfffffffcu), 0xcau);
    /* 0053c2cd: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0053c2d0: mov ecx, dword ptr [eax + 0xae0] */ r_ecx = R32((u32)(r_eax+0xae0u));
    /* 0053c2d6: mov eax, dword ptr [ebp + ecx*4 - 0x30] */ r_eax = R32((u32)(r_ebp+r_ecx*4+0xffffffd0u));
    /* 0053c2da: mov esp, ebp */ r_esp = r_ebp;
    /* 0053c2dc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053c2dd: ret 8 */ FN_RET(0x0053c270); r_esp += 12; return;
}

void f_0053c480(void) /* sub_53C480 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053c480);
    /* 0053c480: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053c481: mov ebp, esp */ r_ebp = r_esp;
    /* 0053c483: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053c486: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0053c489: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0053c48f: call 0x637630 */ r_esp -= 4; W32(r_esp, 0x53c494u); f_00637630();
    /* 0053c494: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0053c497: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053c499: je 0x53c4cb */ if (fZ) goto L_0053c4cb;
L_0053c49b:; BB(0x0053c49b);
    /* 0053c49b: movzx ecx, byte ptr [0x795f94] */ r_ecx = (u32)R8((u32)(0x795f94u));
    /* 0053c4a2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053c4a4: jne 0x53c4cb */ if (!fZ) goto L_0053c4cb;
L_0053c4a6:; BB(0x0053c4a6);
    /* 0053c4a6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053c4a9: movzx eax, byte ptr [edx + 0x24] */ r_eax = (u32)R8((u32)(r_edx+0x24u));
    /* 0053c4ad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053c4af: jne 0x53c4cb */ if (!fZ) goto L_0053c4cb;
L_0053c4b1:; BB(0x0053c4b1);
    /* 0053c4b1: mov ecx, dword ptr [0x7933ec] */ r_ecx = R32((u32)(0x7933ecu));
    /* 0053c4b7: movzx edx, byte ptr [ecx + 0xfa] */ r_edx = (u32)R8((u32)(r_ecx+0xfau));
    /* 0053c4be: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053c4c0: jne 0x53c4cb */ if (!fZ) goto L_0053c4cb;
L_0053c4c2:; BB(0x0053c4c2);
    /* 0053c4c2: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 0053c4c9: jmp 0x53c4d2 */ goto L_0053c4d2;
L_0053c4cb:; BB(0x0053c4cb);
    /* 0053c4cb: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_0053c4d2:; BB(0x0053c4d2);
    /* 0053c4d2: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0053c4d5: mov esp, ebp */ r_esp = r_ebp;
    /* 0053c4d7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053c4d8: ret  */ FN_RET(0x0053c480); r_esp += 4; return;
}

void f_0053cf00(void) /* sub_53CF00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053cf00);
    /* 0053cf00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053cf01: mov ebp, esp */ r_ebp = r_esp;
    /* 0053cf03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053cf04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0053cf07: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053cf09: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053cf0c: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x53cf11u); f_005fb2b0();
    /* 0053cf11: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053cf13: jne 0x53cf58 */ if (!fZ) goto L_0053cf58;
L_0053cf15:; BB(0x0053cf15);
    /* 0053cf15: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053cf17: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0053cf1c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053cf1e: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0053cf20: movzx eax, byte ptr [ebp + 8] */ r_eax = (u32)R8((u32)(r_ebp+0x8u));
    /* 0053cf24: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 0053cf26: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 0053cf28: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0053cf2b: imul eax, eax, 0x23 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x23u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0053cf2e: add eax, 0x26 */ {  u32 a = r_eax; u32 b = 0x26u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0053cf31: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053cf32: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0053cf34: push 0x1398 */ { u32 v = 0x1398u; r_esp -= 4; W32(r_esp, v); }
    /* 0053cf39: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053cf3b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053cf3d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053cf40: call 0x5f9ce0 */ r_esp -= 4; W32(r_esp, 0x53cf45u); f_005f9ce0();
    /* 0053cf45: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0053cf47: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053cf49: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053cf4c: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x53cf51u); f_005fb2b0();
    /* 0053cf51: mov ecx, eax */ r_ecx = r_eax;
    /* 0053cf53: call 0x5eb5d0 */ r_esp -= 4; W32(r_esp, 0x53cf58u); f_005eb5d0();
L_0053cf58:; BB(0x0053cf58);
    /* 0053cf58: mov esp, ebp */ r_esp = r_ebp;
    /* 0053cf5a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053cf5b: ret 4 */ FN_RET(0x0053cf00); r_esp += 8; return;
}

