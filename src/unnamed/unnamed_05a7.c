#include "protos.h"

void f_005a7080(void) /* sub_5A7080 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a7080);
    /* 005a7080: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a7081: mov ebp, esp */ r_ebp = r_esp;
    /* 005a7083: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a7086: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005a7089: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a708c: cmp dword ptr [eax + 0x34], 0 */ {  u32 a = R32((u32)(r_eax+0x34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a7090: je 0x5a70a7 */ if (fZ) goto L_005a70a7;
L_005a7092:; BB(0x005a7092);
    /* 005a7092: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a7095: mov ecx, dword ptr [ecx + 0x34] */ r_ecx = R32((u32)(r_ecx+0x34u));
    /* 005a7098: call 0x5f8990 */ r_esp -= 4; W32(r_esp, 0x5a709du); f_005f8990();
    /* 005a709d: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a70a0: mov dword ptr [edx + 0x34], 0 */ W32((u32)(r_edx+0x34u), 0x0u);
L_005a70a7:; BB(0x005a70a7);
    /* 005a70a7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a70a9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a70ac: call 0x5a8730 */ r_esp -= 4; W32(r_esp, 0x5a70b1u); f_005a8730();
    /* 005a70b1: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a70b4: cmp dword ptr [eax + 0x28], 0 */ {  u32 a = R32((u32)(r_eax+0x28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a70b8: je 0x5a70f3 */ if (fZ) goto L_005a70f3;
L_005a70ba:; BB(0x005a70ba);
    /* 005a70ba: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a70bd: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 005a70c0: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005a70c3: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a70c6: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005a70c9: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a70cd: je 0x5a70e2 */ if (fZ) goto L_005a70e2;
L_005a70cf:; BB(0x005a70cf);
    /* 005a70cf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a70d1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a70d4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005a70d6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a70d9: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005a70db: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5a70ddu); call_ind(t); }
    /* 005a70dd: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005a70e0: jmp 0x5a70e9 */ goto L_005a70e9;
L_005a70e2:; BB(0x005a70e2);
    /* 005a70e2: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_005a70e9:; BB(0x005a70e9);
    /* 005a70e9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a70ec: mov dword ptr [ecx + 0x28], 0 */ W32((u32)(r_ecx+0x28u), 0x0u);
L_005a70f3:; BB(0x005a70f3);
    /* 005a70f3: mov esp, ebp */ r_esp = r_ebp;
    /* 005a70f5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a70f6: ret  */ FN_RET(0x005a7080); r_esp += 4; return;
}

void f_005a7100(void) /* sub_5A7100 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a7100);
    /* 005a7100: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a7101: mov ebp, esp */ r_ebp = r_esp;
    /* 005a7103: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a7104: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005a7107: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a710a: cmp dword ptr [eax + 0x38], 0 */ {  u32 a = R32((u32)(r_eax+0x38u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a710e: je 0x5a7125 */ if (fZ) goto L_005a7125;
L_005a7110:; BB(0x005a7110);
    /* 005a7110: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a7113: mov ecx, dword ptr [ecx + 0x38] */ r_ecx = R32((u32)(r_ecx+0x38u));
    /* 005a7116: call 0x5f8990 */ r_esp -= 4; W32(r_esp, 0x5a711bu); f_005f8990();
    /* 005a711b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a711e: mov dword ptr [edx + 0x38], 0 */ W32((u32)(r_edx+0x38u), 0x0u);
L_005a7125:; BB(0x005a7125);
    /* 005a7125: mov esp, ebp */ r_esp = r_ebp;
    /* 005a7127: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a7128: ret  */ FN_RET(0x005a7100); r_esp += 4; return;
}

void f_005a7130(void) /* sub_5A7130 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a7130);
    /* 005a7130: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a7131: mov ebp, esp */ r_ebp = r_esp;
    /* 005a7133: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a7134: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005a7137: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a713a: cmp dword ptr [eax + 0x30], 0 */ {  u32 a = R32((u32)(r_eax+0x30u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a713e: je 0x5a7155 */ if (fZ) goto L_005a7155;
L_005a7140:; BB(0x005a7140);
    /* 005a7140: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a7143: mov ecx, dword ptr [ecx + 0x30] */ r_ecx = R32((u32)(r_ecx+0x30u));
    /* 005a7146: call 0x5f8990 */ r_esp -= 4; W32(r_esp, 0x5a714bu); f_005f8990();
    /* 005a714b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a714e: mov dword ptr [edx + 0x30], 0 */ W32((u32)(r_edx+0x30u), 0x0u);
L_005a7155:; BB(0x005a7155);
    /* 005a7155: mov esp, ebp */ r_esp = r_ebp;
    /* 005a7157: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a7158: ret  */ FN_RET(0x005a7130); r_esp += 4; return;
}

void f_005a7160(void) /* sub_5A7160 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a7160);
    /* 005a7160: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a7161: mov ebp, esp */ r_ebp = r_esp;
    /* 005a7163: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a7166: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005a7169: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a716c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005a716f: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a7173: je 0x5a7181 */ if (fZ) goto L_005a7181;
L_005a7175:; BB(0x005a7175);
    /* 005a7175: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a7179: je 0x5a717d */ if (fZ) goto L_005a717d;
L_005a717b:; BB(0x005a717b);
    /* 005a717b: jmp 0x5a7188 */ goto L_005a7188;
L_005a717d:; BB(0x005a717d);
    /* 005a717d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a717f: jmp 0x5a718a */ goto L_005a718a;
L_005a7181:; BB(0x005a7181);
    /* 005a7181: mov eax, 1 */ r_eax = 0x1u;
    /* 005a7186: jmp 0x5a718a */ goto L_005a718a;
L_005a7188:; BB(0x005a7188);
    /* 005a7188: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005a718a:; BB(0x005a718a);
    /* 005a718a: mov esp, ebp */ r_esp = r_ebp;
    /* 005a718c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a718d: ret 4 */ FN_RET(0x005a7160); r_esp += 8; return;
}

void f_005a7190(void) /* sub_5A7190 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a7190);
    /* 005a7190: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a7191: mov ebp, esp */ r_ebp = r_esp;
    /* 005a7193: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a7194: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005a7197: cmp dword ptr [ebp + 8], 1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a719b: jne 0x5a71a1 */ if (!fZ) goto L_005a71a1;
L_005a719d:; BB(0x005a719d);
    /* 005a719d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a719f: jmp 0x5a71ca */ goto L_005a71ca;
L_005a71a1:; BB(0x005a71a1);
    /* 005a71a1: cmp dword ptr [ebp + 8], 2 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a71a5: je 0x5a71ad */ if (fZ) goto L_005a71ad;
L_005a71a7:; BB(0x005a71a7);
    /* 005a71a7: cmp dword ptr [ebp + 8], 3 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a71ab: jne 0x5a71b4 */ if (!fZ) goto L_005a71b4;
L_005a71ad:; BB(0x005a71ad);
    /* 005a71ad: mov eax, 1 */ r_eax = 0x1u;
    /* 005a71b2: jmp 0x5a71ca */ goto L_005a71ca;
L_005a71b4:; BB(0x005a71b4);
    /* 005a71b4: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a71b8: jne 0x5a71c8 */ if (!fZ) goto L_005a71c8;
L_005a71ba:; BB(0x005a71ba);
    /* 005a71ba: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a71bc: cmp dword ptr [ebp + 0xc], 2 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a71c0: setge al */ r_eax = (r_eax & 0xffffff00u) | ((((fS==fO)) ? 1 : 0) & 0xffu);
    /* 005a71c3: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a71c6: jmp 0x5a71ca */ goto L_005a71ca;
L_005a71c8:; BB(0x005a71c8);
    /* 005a71c8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005a71ca:; BB(0x005a71ca);
    /* 005a71ca: mov esp, ebp */ r_esp = r_ebp;
    /* 005a71cc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a71cd: ret 8 */ FN_RET(0x005a7190); r_esp += 12; return;
}

void f_005a71d0(void) /* sub_5A71D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a71d0);
    /* 005a71d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a71d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005a71d3: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a71d6: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005a71d9: mov dword ptr [ebp - 0x14], 0x138a */ W32((u32)(r_ebp+0xffffffecu), 0x138au);
    /* 005a71e0: mov dword ptr [ebp - 0x10], 0x138b */ W32((u32)(r_ebp+0xfffffff0u), 0x138bu);
    /* 005a71e7: mov dword ptr [ebp - 0xc], 0x1389 */ W32((u32)(r_ebp+0xfffffff4u), 0x1389u);
    /* 005a71ee: mov dword ptr [ebp - 8], 0x138c */ W32((u32)(r_ebp+0xfffffff8u), 0x138cu);
    /* 005a71f5: mov dword ptr [ebp - 4], 0x138f */ W32((u32)(r_ebp+0xfffffffcu), 0x138fu);
    /* 005a71fc: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a7200: jge 0x5a722b */ if ((fS==fO)) goto L_005a722b;
L_005a7202:; BB(0x005a7202);
    /* 005a7202: cmp dword ptr [ebp + 0x10], 2 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a7206: jne 0x5a722b */ if (!fZ) goto L_005a722b;
L_005a7208:; BB(0x005a7208);
    /* 005a7208: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005a720b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a720c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a720f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a7210: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005a7216: call 0x5b60a0 */ r_esp -= 4; W32(r_esp, 0x5a721bu); f_005b60a0();
    /* 005a721b: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005a721e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a7220: je 0x5a722b */ if (fZ) goto L_005a722b;
L_005a7222:; BB(0x005a7222);
    /* 005a7222: mov eax, 0x1390 */ r_eax = 0x1390u;
    /* 005a7227: jmp 0x5a7232 */ goto L_005a7232;
L_005a722b:; BB(0x005a722b);
    /* 005a722b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a722e: mov eax, dword ptr [ebp + eax*4 - 0x14] */ r_eax = R32((u32)(r_ebp+r_eax*4+0xffffffecu));
L_005a7232:; BB(0x005a7232);
    /* 005a7232: mov esp, ebp */ r_esp = r_ebp;
    /* 005a7234: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a7235: ret 0xc */ FN_RET(0x005a71d0); r_esp += 16; return;
}

void f_005a7240(void) /* sub_5A7240 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a7240);
    /* 005a7240: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a7241: mov ebp, esp */ r_ebp = r_esp;
    /* 005a7243: sub esp, 0xcc */ {  u32 a = r_esp; u32 b = 0xccu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a7249: mov dword ptr [ebp - 0xcc], ecx */ W32((u32)(r_ebp+0xffffff34u), r_ecx);
    /* 005a724f: mov dword ptr [ebp - 0xc8], 0x180 */ W32((u32)(r_ebp+0xffffff38u), 0x180u);
    /* 005a7259: mov dword ptr [ebp - 0xc4], 0xd2 */ W32((u32)(r_ebp+0xffffff3cu), 0xd2u);
    /* 005a7263: mov dword ptr [ebp - 0xc0], 0x143 */ W32((u32)(r_ebp+0xffffff40u), 0x143u);
    /* 005a726d: mov dword ptr [ebp - 0xbc], 0xec */ W32((u32)(r_ebp+0xffffff44u), 0xecu);
    /* 005a7277: mov dword ptr [ebp - 0xb8], 0x192 */ W32((u32)(r_ebp+0xffffff48u), 0x192u);
    /* 005a7281: mov dword ptr [ebp - 0xb4], 0xd2 */ W32((u32)(r_ebp+0xffffff4cu), 0xd2u);
    /* 005a728b: mov dword ptr [ebp - 0xb0], 0x176 */ W32((u32)(r_ebp+0xffffff50u), 0x176u);
    /* 005a7295: mov dword ptr [ebp - 0xac], 0x78 */ W32((u32)(r_ebp+0xffffff54u), 0x78u);
    /* 005a729f: mov dword ptr [ebp - 0xa8], 0x143 */ W32((u32)(r_ebp+0xffffff58u), 0x143u);
    /* 005a72a9: mov dword ptr [ebp - 0xa4], 0x93 */ W32((u32)(r_ebp+0xffffff5cu), 0x93u);
    /* 005a72b3: mov dword ptr [ebp - 0xa0], 0x192 */ W32((u32)(r_ebp+0xffffff60u), 0x192u);
    /* 005a72bd: mov dword ptr [ebp - 0x9c], 0x93 */ W32((u32)(r_ebp+0xffffff64u), 0x93u);
    /* 005a72c7: mov dword ptr [ebp - 0x98], 0xc0 */ W32((u32)(r_ebp+0xffffff68u), 0xc0u);
    /* 005a72d1: mov dword ptr [ebp - 0x94], 0xec */ W32((u32)(r_ebp+0xffffff6cu), 0xecu);
    /* 005a72db: mov dword ptr [ebp - 0x90], 0x91 */ W32((u32)(r_ebp+0xffffff70u), 0x91u);
    /* 005a72e5: mov dword ptr [ebp - 0x8c], 0xec */ W32((u32)(r_ebp+0xffffff74u), 0xecu);
    /* 005a72ef: mov dword ptr [ebp - 0x88], 0xe0 */ W32((u32)(r_ebp+0xffffff78u), 0xe0u);
    /* 005a72f9: mov dword ptr [ebp - 0x84], 0xec */ W32((u32)(r_ebp+0xffffff7cu), 0xecu);
    /* 005a7303: mov dword ptr [ebp - 0x80], 0xca */ W32((u32)(r_ebp+0xffffff80u), 0xcau);
    /* 005a730a: mov dword ptr [ebp - 0x7c], 0x93 */ W32((u32)(r_ebp+0xffffff84u), 0x93u);
    /* 005a7311: mov dword ptr [ebp - 0x78], 0x9b */ W32((u32)(r_ebp+0xffffff88u), 0x9bu);
    /* 005a7318: mov dword ptr [ebp - 0x74], 0x93 */ W32((u32)(r_ebp+0xffffff8cu), 0x93u);
    /* 005a731f: mov dword ptr [ebp - 0x70], 0xea */ W32((u32)(r_ebp+0xffffff90u), 0xeau);
    /* 005a7326: mov dword ptr [ebp - 0x6c], 0x93 */ W32((u32)(r_ebp+0xffffff94u), 0x93u);
    /* 005a732d: mov dword ptr [ebp - 0x68], 0x203 */ W32((u32)(r_ebp+0xffffff98u), 0x203u);
    /* 005a7334: mov dword ptr [ebp - 0x64], 0xae */ W32((u32)(r_ebp+0xffffff9cu), 0xaeu);
    /* 005a733b: mov dword ptr [ebp - 0x60], 0x1d5 */ W32((u32)(r_ebp+0xffffffa0u), 0x1d5u);
    /* 005a7342: mov dword ptr [ebp - 0x5c], 0xae */ W32((u32)(r_ebp+0xffffffa4u), 0xaeu);
    /* 005a7349: mov dword ptr [ebp - 0x58], 0x224 */ W32((u32)(r_ebp+0xffffffa8u), 0x224u);
    /* 005a7350: mov dword ptr [ebp - 0x54], 0xae */ W32((u32)(r_ebp+0xffffffacu), 0xaeu);
    /* 005a7357: mov dword ptr [ebp - 0x50], 0x203 */ W32((u32)(r_ebp+0xffffffb0u), 0x203u);
    /* 005a735e: mov dword ptr [ebp - 0x4c], 0x59 */ W32((u32)(r_ebp+0xffffffb4u), 0x59u);
    /* 005a7365: mov dword ptr [ebp - 0x48], 0x1d5 */ W32((u32)(r_ebp+0xffffffb8u), 0x1d5u);
    /* 005a736c: mov dword ptr [ebp - 0x44], 0x59 */ W32((u32)(r_ebp+0xffffffbcu), 0x59u);
    /* 005a7373: mov dword ptr [ebp - 0x40], 0x224 */ W32((u32)(r_ebp+0xffffffc0u), 0x224u);
    /* 005a737a: mov dword ptr [ebp - 0x3c], 0x59 */ W32((u32)(r_ebp+0xffffffc4u), 0x59u);
    /* 005a7381: mov dword ptr [ebp - 0x38], 0x39 */ W32((u32)(r_ebp+0xffffffc8u), 0x39u);
    /* 005a7388: mov dword ptr [ebp - 0x34], 0xae */ W32((u32)(r_ebp+0xffffffccu), 0xaeu);
    /* 005a738f: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 005a7396: mov dword ptr [ebp - 0x2c], 0xae */ W32((u32)(r_ebp+0xffffffd4u), 0xaeu);
    /* 005a739d: mov dword ptr [ebp - 0x28], 0x50 */ W32((u32)(r_ebp+0xffffffd8u), 0x50u);
    /* 005a73a4: mov dword ptr [ebp - 0x24], 0xae */ W32((u32)(r_ebp+0xffffffdcu), 0xaeu);
    /* 005a73ab: mov dword ptr [ebp - 0x20], 0x39 */ W32((u32)(r_ebp+0xffffffe0u), 0x39u);
    /* 005a73b2: mov dword ptr [ebp - 0x1c], 0x59 */ W32((u32)(r_ebp+0xffffffe4u), 0x59u);
    /* 005a73b9: mov dword ptr [ebp - 0x18], 1 */ W32((u32)(r_ebp+0xffffffe8u), 0x1u);
    /* 005a73c0: mov dword ptr [ebp - 0x14], 0x59 */ W32((u32)(r_ebp+0xffffffecu), 0x59u);
    /* 005a73c7: mov dword ptr [ebp - 0x10], 0x50 */ W32((u32)(r_ebp+0xfffffff0u), 0x50u);
    /* 005a73ce: mov dword ptr [ebp - 0xc], 0x59 */ W32((u32)(r_ebp+0xfffffff4u), 0x59u);
    /* 005a73d5: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a73d9: jne 0x5a73e8 */ if (!fZ) goto L_005a73e8;
L_005a73db:; BB(0x005a73db);
    /* 005a73db: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005a73de: imul eax, eax, 0xe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xeu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a73e1: add eax, 0x109 */ {  u32 a = r_eax; u32 b = 0x109u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a73e6: jmp 0x5a7455 */ goto L_005a7455;
L_005a73e8:; BB(0x005a73e8);
    /* 005a73e8: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005a73eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a73ec: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a73ef: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a73f0: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005a73f6: call 0x5b58f0 */ r_esp -= 4; W32(r_esp, 0x5a73fbu); f_005b58f0();
    /* 005a73fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a73fc: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 005a7402: call 0x5a7190 */ r_esp -= 4; W32(r_esp, 0x5a7407u); f_005a7190();
    /* 005a7407: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005a740a: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005a740d: imul edx, edx, 0xc */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xcu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a7410: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a7413: imul eax, eax, 0x30 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x30u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a7416: lea ecx, [ebp + eax - 0xc8] */ r_ecx = (u32)(r_ebp+r_eax+0xffffff38u);
    /* 005a741d: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005a7420: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a7423: add edx, dword ptr [ecx + eax*8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+r_eax*8)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005a7426: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005a7429: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005a742c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a742d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005a7430: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a7431: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005a7437: call 0x5b60a0 */ r_esp -= 4; W32(r_esp, 0x5a743cu); f_005b60a0();
    /* 005a743c: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005a743f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a7441: je 0x5a7452 */ if (fZ) goto L_005a7452;
L_005a7443:; BB(0x005a7443);
    /* 005a7443: cmp dword ptr [ebp + 0x10], 2 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a7447: jne 0x5a7452 */ if (!fZ) goto L_005a7452;
L_005a7449:; BB(0x005a7449);
    /* 005a7449: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a744c: sub ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005a744f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005a7452:; BB(0x005a7452);
    /* 005a7452: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
L_005a7455:; BB(0x005a7455);
    /* 005a7455: mov esp, ebp */ r_esp = r_ebp;
    /* 005a7457: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a7458: ret 0xc */ FN_RET(0x005a7240); r_esp += 16; return;
}

void f_005a7460(void) /* sub_5A7460 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a7460);
    /* 005a7460: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a7461: mov ebp, esp */ r_ebp = r_esp;
    /* 005a7463: sub esp, 0xcc */ {  u32 a = r_esp; u32 b = 0xccu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a7469: mov dword ptr [ebp - 0xcc], ecx */ W32((u32)(r_ebp+0xffffff34u), r_ecx);
    /* 005a746f: mov dword ptr [ebp - 0xc8], 0x180 */ W32((u32)(r_ebp+0xffffff38u), 0x180u);
    /* 005a7479: mov dword ptr [ebp - 0xc4], 0xd2 */ W32((u32)(r_ebp+0xffffff3cu), 0xd2u);
    /* 005a7483: mov dword ptr [ebp - 0xc0], 0x143 */ W32((u32)(r_ebp+0xffffff40u), 0x143u);
    /* 005a748d: mov dword ptr [ebp - 0xbc], 0xec */ W32((u32)(r_ebp+0xffffff44u), 0xecu);
    /* 005a7497: mov dword ptr [ebp - 0xb8], 0x192 */ W32((u32)(r_ebp+0xffffff48u), 0x192u);
    /* 005a74a1: mov dword ptr [ebp - 0xb4], 0xd2 */ W32((u32)(r_ebp+0xffffff4cu), 0xd2u);
    /* 005a74ab: mov dword ptr [ebp - 0xb0], 0x176 */ W32((u32)(r_ebp+0xffffff50u), 0x176u);
    /* 005a74b5: mov dword ptr [ebp - 0xac], 0x78 */ W32((u32)(r_ebp+0xffffff54u), 0x78u);
    /* 005a74bf: mov dword ptr [ebp - 0xa8], 0x143 */ W32((u32)(r_ebp+0xffffff58u), 0x143u);
    /* 005a74c9: mov dword ptr [ebp - 0xa4], 0x93 */ W32((u32)(r_ebp+0xffffff5cu), 0x93u);
    /* 005a74d3: mov dword ptr [ebp - 0xa0], 0x192 */ W32((u32)(r_ebp+0xffffff60u), 0x192u);
    /* 005a74dd: mov dword ptr [ebp - 0x9c], 0x93 */ W32((u32)(r_ebp+0xffffff64u), 0x93u);
    /* 005a74e7: mov dword ptr [ebp - 0x98], 0xc0 */ W32((u32)(r_ebp+0xffffff68u), 0xc0u);
    /* 005a74f1: mov dword ptr [ebp - 0x94], 0xec */ W32((u32)(r_ebp+0xffffff6cu), 0xecu);
    /* 005a74fb: mov dword ptr [ebp - 0x90], 0x91 */ W32((u32)(r_ebp+0xffffff70u), 0x91u);
    /* 005a7505: mov dword ptr [ebp - 0x8c], 0xec */ W32((u32)(r_ebp+0xffffff74u), 0xecu);
    /* 005a750f: mov dword ptr [ebp - 0x88], 0xe0 */ W32((u32)(r_ebp+0xffffff78u), 0xe0u);
    /* 005a7519: mov dword ptr [ebp - 0x84], 0xec */ W32((u32)(r_ebp+0xffffff7cu), 0xecu);
    /* 005a7523: mov dword ptr [ebp - 0x80], 0xca */ W32((u32)(r_ebp+0xffffff80u), 0xcau);
    /* 005a752a: mov dword ptr [ebp - 0x7c], 0x93 */ W32((u32)(r_ebp+0xffffff84u), 0x93u);
    /* 005a7531: mov dword ptr [ebp - 0x78], 0x9b */ W32((u32)(r_ebp+0xffffff88u), 0x9bu);
    /* 005a7538: mov dword ptr [ebp - 0x74], 0x93 */ W32((u32)(r_ebp+0xffffff8cu), 0x93u);
    /* 005a753f: mov dword ptr [ebp - 0x70], 0xea */ W32((u32)(r_ebp+0xffffff90u), 0xeau);
    /* 005a7546: mov dword ptr [ebp - 0x6c], 0x93 */ W32((u32)(r_ebp+0xffffff94u), 0x93u);
    /* 005a754d: mov dword ptr [ebp - 0x68], 0x203 */ W32((u32)(r_ebp+0xffffff98u), 0x203u);
    /* 005a7554: mov dword ptr [ebp - 0x64], 0xae */ W32((u32)(r_ebp+0xffffff9cu), 0xaeu);
    /* 005a755b: mov dword ptr [ebp - 0x60], 0x1d5 */ W32((u32)(r_ebp+0xffffffa0u), 0x1d5u);
    /* 005a7562: mov dword ptr [ebp - 0x5c], 0xae */ W32((u32)(r_ebp+0xffffffa4u), 0xaeu);
    /* 005a7569: mov dword ptr [ebp - 0x58], 0x224 */ W32((u32)(r_ebp+0xffffffa8u), 0x224u);
    /* 005a7570: mov dword ptr [ebp - 0x54], 0xae */ W32((u32)(r_ebp+0xffffffacu), 0xaeu);
    /* 005a7577: mov dword ptr [ebp - 0x50], 0x203 */ W32((u32)(r_ebp+0xffffffb0u), 0x203u);
    /* 005a757e: mov dword ptr [ebp - 0x4c], 0x59 */ W32((u32)(r_ebp+0xffffffb4u), 0x59u);
    /* 005a7585: mov dword ptr [ebp - 0x48], 0x1d5 */ W32((u32)(r_ebp+0xffffffb8u), 0x1d5u);
    /* 005a758c: mov dword ptr [ebp - 0x44], 0x59 */ W32((u32)(r_ebp+0xffffffbcu), 0x59u);
    /* 005a7593: mov dword ptr [ebp - 0x40], 0x224 */ W32((u32)(r_ebp+0xffffffc0u), 0x224u);
    /* 005a759a: mov dword ptr [ebp - 0x3c], 0x59 */ W32((u32)(r_ebp+0xffffffc4u), 0x59u);
    /* 005a75a1: mov dword ptr [ebp - 0x38], 0x39 */ W32((u32)(r_ebp+0xffffffc8u), 0x39u);
    /* 005a75a8: mov dword ptr [ebp - 0x34], 0xae */ W32((u32)(r_ebp+0xffffffccu), 0xaeu);
    /* 005a75af: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 005a75b6: mov dword ptr [ebp - 0x2c], 0xae */ W32((u32)(r_ebp+0xffffffd4u), 0xaeu);
    /* 005a75bd: mov dword ptr [ebp - 0x28], 0x50 */ W32((u32)(r_ebp+0xffffffd8u), 0x50u);
    /* 005a75c4: mov dword ptr [ebp - 0x24], 0xae */ W32((u32)(r_ebp+0xffffffdcu), 0xaeu);
    /* 005a75cb: mov dword ptr [ebp - 0x20], 0x39 */ W32((u32)(r_ebp+0xffffffe0u), 0x39u);
    /* 005a75d2: mov dword ptr [ebp - 0x1c], 0x59 */ W32((u32)(r_ebp+0xffffffe4u), 0x59u);
    /* 005a75d9: mov dword ptr [ebp - 0x18], 1 */ W32((u32)(r_ebp+0xffffffe8u), 0x1u);
    /* 005a75e0: mov dword ptr [ebp - 0x14], 0x59 */ W32((u32)(r_ebp+0xffffffecu), 0x59u);
    /* 005a75e7: mov dword ptr [ebp - 0x10], 0x50 */ W32((u32)(r_ebp+0xfffffff0u), 0x50u);
    /* 005a75ee: mov dword ptr [ebp - 0xc], 0x59 */ W32((u32)(r_ebp+0xfffffff4u), 0x59u);
    /* 005a75f5: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a75f9: jne 0x5a7602 */ if (!fZ) goto L_005a7602;
L_005a75fb:; BB(0x005a75fb);
    /* 005a75fb: mov eax, 0x46 */ r_eax = 0x46u;
    /* 005a7600: jmp 0x5a7649 */ goto L_005a7649;
L_005a7602:; BB(0x005a7602);
    /* 005a7602: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005a7605: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a7606: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a7609: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a760a: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005a7610: call 0x5b58f0 */ r_esp -= 4; W32(r_esp, 0x5a7615u); f_005b58f0();
    /* 005a7615: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a7616: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 005a761c: call 0x5a7190 */ r_esp -= 4; W32(r_esp, 0x5a7621u); f_005a7190();
    /* 005a7621: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005a7624: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005a7627: imul edx, edx, 0x30 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x30u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a762a: lea eax, [ebp + edx - 0xc8] */ r_eax = (u32)(r_ebp+r_edx+0xffffff38u);
    /* 005a7631: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005a7634: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005a7637: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005a763a: imul edx, edx, 6 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x6u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a763d: mov eax, dword ptr [eax + ecx*8 + 4] */ r_eax = R32((u32)(r_eax+r_ecx*8+0x4u));
    /* 005a7641: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005a7643: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005a7646: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
L_005a7649:; BB(0x005a7649);
    /* 005a7649: mov esp, ebp */ r_esp = r_ebp;
    /* 005a764b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a764c: ret 0xc */ FN_RET(0x005a7460); r_esp += 16; return;
}

void f_005a7d40(void) /* sub_5A7D40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a7d40);
    /* 005a7d40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a7d41: mov ebp, esp */ r_ebp = r_esp;
    /* 005a7d43: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a7d46: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005a7d49: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a7d4d: jne 0x5a7d8a */ if (!fZ) goto L_005a7d8a;
L_005a7d4f:; BB(0x005a7d4f);
    /* 005a7d4f: cmp dword ptr [ebp + 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a7d53: jne 0x5a7d7b */ if (!fZ) goto L_005a7d7b;
L_005a7d55:; BB(0x005a7d55);
    /* 005a7d55: mov eax, dword ptr [0x7935fc] */ r_eax = R32((u32)(0x7935fcu));
    /* 005a7d5a: movzx ecx, byte ptr [eax + 9] */ r_ecx = (u32)R8((u32)(r_eax+0x9u));
    /* 005a7d5e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a7d60: jne 0x5a7d7b */ if (!fZ) goto L_005a7d7b;
L_005a7d62:; BB(0x005a7d62);
    /* 005a7d62: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005a7d68: call 0x5b5730 */ r_esp -= 4; W32(r_esp, 0x5a7d6du); f_005b5730();
    /* 005a7d6d: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a7d70: je 0x5a7d7b */ if (fZ) goto L_005a7d7b;
L_005a7d72:; BB(0x005a7d72);
    /* 005a7d72: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
    /* 005a7d79: jmp 0x5a7d82 */ goto L_005a7d82;
L_005a7d7b:; BB(0x005a7d7b);
    /* 005a7d7b: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_005a7d82:; BB(0x005a7d82);
    /* 005a7d82: mov al, byte ptr [ebp - 0x10] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff0u))) & 0xffu);
    /* 005a7d85: jmp 0x5a7e8c */ goto L_005a7e8c;
L_005a7d8a:; BB(0x005a7d8a);
    /* 005a7d8a: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005a7d90: call 0x5b58a0 */ r_esp -= 4; W32(r_esp, 0x5a7d95u); f_005b58a0();
    /* 005a7d95: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a7d98: jne 0x5a7e8a */ if (!fZ) goto L_005a7e8a;
L_005a7d9e:; BB(0x005a7d9e);
    /* 005a7d9e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005a7da1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a7da2: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5a7da7u); f_005dcb00();
    /* 005a7da7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a7daa: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005a7dad: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a7db0: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5a7db5u); f_0063aac0();
    /* 005a7db5: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005a7db7: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005a7dba: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005a7dbc: cmp dword ptr [ebp - 4], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a7dc0: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 005a7dc3: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 005a7dc6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a7dc8: je 0x5a7e8a */ if (fZ) goto L_005a7e8a;
L_005a7dce:; BB(0x005a7dce);
    /* 005a7dce: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005a7dd1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a7dd2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a7dd5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a7dd6: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005a7ddc: call 0x5b60a0 */ r_esp -= 4; W32(r_esp, 0x5a7de1u); f_005b60a0();
    /* 005a7de1: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005a7de4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a7de6: jne 0x5a7e8a */ if (!fZ) goto L_005a7e8a;
L_005a7dec:; BB(0x005a7dec);
    /* 005a7dec: cmp dword ptr [ebp + 0x10], 2 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a7df0: jl 0x5a7e10 */ if ((fS!=fO)) goto L_005a7e10;
L_005a7df2:; BB(0x005a7df2);
    /* 005a7df2: cmp dword ptr [ebp + 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a7df6: jne 0x5a7e8a */ if (!fZ) goto L_005a7e8a;
L_005a7dfc:; BB(0x005a7dfc);
    /* 005a7dfc: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a7dff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a7e00: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005a7e06: call 0x5b58f0 */ r_esp -= 4; W32(r_esp, 0x5a7e0bu); f_005b58f0();
    /* 005a7e0b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a7e0e: jle 0x5a7e8a */ if ((fZ||fS!=fO)) goto L_005a7e8a;
L_005a7e10:; BB(0x005a7e10);
    /* 005a7e10: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005a7e13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a7e14: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005a7e17: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a7e18: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005a7e1e: call 0x5b3300 */ r_esp -= 4; W32(r_esp, 0x5a7e23u); f_005b3300();
    /* 005a7e23: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005a7e26: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a7e28: jne 0x5a7e40 */ if (!fZ) goto L_005a7e40;
L_005a7e2a:; BB(0x005a7e2a);
    /* 005a7e2a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a7e2d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a7e2e: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005a7e34: call 0x5b6040 */ r_esp -= 4; W32(r_esp, 0x5a7e39u); f_005b6040();
    /* 005a7e39: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005a7e3c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a7e3e: je 0x5a7e44 */ if (fZ) goto L_005a7e44;
L_005a7e40:; BB(0x005a7e40);
    /* 005a7e40: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005a7e42: jmp 0x5a7e8c */ goto L_005a7e8c;
L_005a7e44:; BB(0x005a7e44);
    /* 005a7e44: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005a7e47: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a7e48: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a7e4b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a7e4c: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005a7e52: call 0x5b5010 */ r_esp -= 4; W32(r_esp, 0x5a7e57u); f_005b5010();
    /* 005a7e57: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a7e5a: je 0x5a7e86 */ if (fZ) goto L_005a7e86;
L_005a7e5c:; BB(0x005a7e5c);
    /* 005a7e5c: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005a7e5f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a7e60: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a7e63: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a7e64: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005a7e6a: call 0x5b5010 */ r_esp -= 4; W32(r_esp, 0x5a7e6fu); f_005b5010();
    /* 005a7e6f: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a7e72: jne 0x5a7e8a */ if (!fZ) goto L_005a7e8a;
L_005a7e74:; BB(0x005a7e74);
    /* 005a7e74: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005a7e7a: call 0x5b6530 */ r_esp -= 4; W32(r_esp, 0x5a7e7fu); f_005b6530();
    /* 005a7e7f: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005a7e82: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a7e84: jne 0x5a7e8a */ if (!fZ) goto L_005a7e8a;
L_005a7e86:; BB(0x005a7e86);
    /* 005a7e86: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005a7e88: jmp 0x5a7e8c */ goto L_005a7e8c;
L_005a7e8a:; BB(0x005a7e8a);
    /* 005a7e8a: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_005a7e8c:; BB(0x005a7e8c);
    /* 005a7e8c: mov esp, ebp */ r_esp = r_ebp;
    /* 005a7e8e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a7e8f: ret 0xc */ FN_RET(0x005a7d40); r_esp += 16; return;
}

void f_005a7ea0(void) /* sub_5A7EA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a7ea0);
    /* 005a7ea0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a7ea1: mov ebp, esp */ r_ebp = r_esp;
    /* 005a7ea3: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a7ea6: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005a7ea9: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005a7eac: call 0x5a8890 */ r_esp -= 4; W32(r_esp, 0x5a7eb1u); f_005a8890();
    /* 005a7eb1: mov eax, dword ptr [0x793604] */ r_eax = R32((u32)(0x793604u));
    /* 005a7eb6: mov ecx, dword ptr [eax + 0x57c] */ r_ecx = R32((u32)(r_eax+0x57cu));
    /* 005a7ebc: mov edx, dword ptr [ecx + 0x808] */ r_edx = R32((u32)(r_ecx+0x808u));
    /* 005a7ec2: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005a7ec5: mov eax, dword ptr [0x793604] */ r_eax = R32((u32)(0x793604u));
    /* 005a7eca: mov ecx, dword ptr [eax + 0x57c] */ r_ecx = R32((u32)(r_eax+0x57cu));
    /* 005a7ed0: mov edx, dword ptr [ecx + 0x80c] */ r_edx = R32((u32)(r_ecx+0x80cu));
    /* 005a7ed6: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005a7ed9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005a7edc: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005a7edf: cmp dword ptr [ebp - 0x10], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a7ee2: jne 0x5a7ef7 */ if (!fZ) goto L_005a7ef7;
L_005a7ee4:; BB(0x005a7ee4);
    /* 005a7ee4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005a7ee7: mov edx, dword ptr [ecx + 0x44] */ r_edx = R32((u32)(r_ecx+0x44u));
    /* 005a7eea: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005a7eed: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 005a7ef0: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005a7ef2: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005a7ef5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5a7ef7u); call_ind(t); }
L_005a7ef7:; BB(0x005a7ef7);
    /* 005a7ef7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005a7efe: jmp 0x5a7f09 */ goto L_005a7f09;
L_005a7f00:; BB(0x005a7f00);
    /* 005a7f00: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a7f03: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005a7f06: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005a7f09:; BB(0x005a7f09);
    /* 005a7f09: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a7f0d: jge 0x5a7fa6 */ if ((fS==fO)) goto L_005a7fa6;
L_005a7f13:; BB(0x005a7f13);
    /* 005a7f13: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a7f16: mov eax, dword ptr [0x793604] */ r_eax = R32((u32)(0x793604u));
    /* 005a7f1b: mov ecx, dword ptr [eax + edx*4 + 0x664] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x664u));
    /* 005a7f22: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005a7f25: cmp dword ptr [ebp - 8], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a7f29: je 0x5a7f86 */ if (fZ) goto L_005a7f86;
L_005a7f2b:; BB(0x005a7f2b);
    /* 005a7f2b: mov edx, dword ptr [0x793604] */ r_edx = R32((u32)(0x793604u));
    /* 005a7f31: movzx eax, byte ptr [edx + 0x678] */ r_eax = (u32)R8((u32)(r_edx+0x678u));
    /* 005a7f38: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a7f3a: jne 0x5a7f86 */ if (!fZ) goto L_005a7f86;
L_005a7f3c:; BB(0x005a7f3c);
    /* 005a7f3c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a7f3f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a7f40: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005a7f43: call 0x5a7160 */ r_esp -= 4; W32(r_esp, 0x5a7f48u); f_005a7160();
    /* 005a7f48: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a7f49: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a7f4c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005a7f4f: mov ecx, dword ptr [eax + edx*4 + 0x58] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x58u));
    /* 005a7f53: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a7f56: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005a7f59: mov edx, dword ptr [eax + edx*4 + 0x58] */ r_edx = R32((u32)(r_eax+r_edx*4+0x58u));
    /* 005a7f5d: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005a7f5f: mov ecx, edx */ r_ecx = r_edx;
    /* 005a7f61: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 005a7f67: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5a7f69u); call_ind(t); }
    /* 005a7f69: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a7f6c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005a7f6f: mov edx, dword ptr [ecx + eax*4 + 0x58] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x58u));
    /* 005a7f73: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a7f76: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005a7f79: mov ecx, dword ptr [ecx + eax*4 + 0x58] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x58u));
    /* 005a7f7d: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005a7f7f: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005a7f82: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5a7f84u); call_ind(t); }
    /* 005a7f84: jmp 0x5a7fa1 */ goto L_005a7fa1;
L_005a7f86:; BB(0x005a7f86);
    /* 005a7f86: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a7f89: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005a7f8c: mov eax, dword ptr [edx + ecx*4 + 0x58] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x58u));
    /* 005a7f90: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a7f93: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005a7f96: mov ecx, dword ptr [edx + ecx*4 + 0x58] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x58u));
    /* 005a7f9a: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005a7f9c: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 005a7f9f: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5a7fa1u); call_ind(t); }
L_005a7fa1:; BB(0x005a7fa1);
    /* 005a7fa1: jmp 0x5a7f00 */ goto L_005a7f00;
L_005a7fa6:; BB(0x005a7fa6);
    /* 005a7fa6: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005a7fad: jmp 0x5a7fb8 */ goto L_005a7fb8;
L_005a7faf:; BB(0x005a7faf);
    /* 005a7faf: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a7fb2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a7fb5: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_005a7fb8:; BB(0x005a7fb8);
    /* 005a7fb8: cmp dword ptr [ebp - 0xc], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a7fbc: jge 0x5a8096 */ if ((fS==fO)) goto L_005a8096;
L_005a7fc2:; BB(0x005a7fc2);
    /* 005a7fc2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a7fc5: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005a7fc8: mov ecx, dword ptr [edx + ecx*4 + 4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 005a7fcc: call 0x5ac460 */ r_esp -= 4; W32(r_esp, 0x5a7fd1u); f_005ac460();
    /* 005a7fd1: cmp dword ptr [ebp - 0xc], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a7fd5: je 0x5a8091 */ if (fZ) goto L_005a8091;
L_005a7fdb:; BB(0x005a7fdb);
    /* 005a7fdb: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a7fde: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a7fdf: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005a7fe5: call 0x5b60c0 */ r_esp -= 4; W32(r_esp, 0x5a7feau); f_005b60c0();
    /* 005a7fea: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005a7fed: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a7fef: je 0x5a8091 */ if (fZ) goto L_005a8091;
L_005a7ff5:; BB(0x005a7ff5);
    /* 005a7ff5: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005a7ffb: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x5a8000u); f_005da7b0();
    /* 005a8000: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005a8003: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a8005: je 0x5a8091 */ if (fZ) goto L_005a8091;
L_005a800b:; BB(0x005a800b);
    /* 005a800b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a800e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a800f: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005a8015: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005a8017: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005a801d: mov eax, dword ptr [edx + 0x2c4] */ r_eax = R32((u32)(r_edx+0x2c4u));
    /* 005a8023: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5a8025u); call_ind(t); }
    /* 005a8025: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005a8028: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a802a: jne 0x5a8091 */ if (!fZ) goto L_005a8091;
L_005a802c:; BB(0x005a802c);
    /* 005a802c: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a802f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005a8032: mov ecx, dword ptr [eax + edx*4 + 0x18] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x18u));
    /* 005a8036: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a8039: imul edx, edx, 0x1e0 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x1e0u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a803f: cmp dword ptr [ecx + edx + 0x17c], 0 */ {  u32 a = R32((u32)(r_ecx+r_edx+0x17cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a8047: jne 0x5a8091 */ if (!fZ) goto L_005a8091;
L_005a8049:; BB(0x005a8049);
    /* 005a8049: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a804b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a804e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a804f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a8052: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005a8055: mov eax, dword ptr [edx + ecx*4 + 0x18] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x18u));
    /* 005a8059: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a805c: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005a805f: mov ecx, dword ptr [edx + ecx*4 + 0x18] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x18u));
    /* 005a8063: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005a8065: mov edx, dword ptr [eax + 0xb8] */ r_edx = R32((u32)(r_eax+0xb8u));
    /* 005a806b: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5a806du); call_ind(t); }
    /* 005a806d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a806f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a8072: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a8073: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a8076: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005a8079: mov eax, dword ptr [edx + ecx*4 + 0x48] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x48u));
    /* 005a807d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a8080: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005a8083: mov ecx, dword ptr [edx + ecx*4 + 0x48] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x48u));
    /* 005a8087: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005a8089: mov edx, dword ptr [eax + 0xb8] */ r_edx = R32((u32)(r_eax+0xb8u));
    /* 005a808f: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5a8091u); call_ind(t); }
L_005a8091:; BB(0x005a8091);
    /* 005a8091: jmp 0x5a7faf */ goto L_005a7faf;
L_005a8096:; BB(0x005a8096);
    /* 005a8096: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005a809c: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x5a80a1u); f_005da7b0();
    /* 005a80a1: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005a80a4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a80a6: je 0x5a80c7 */ if (fZ) goto L_005a80c7;
L_005a80a8:; BB(0x005a80a8);
    /* 005a80a8: cmp dword ptr [0x163068c], 0 */ {  u32 a = R32((u32)(0x163068cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a80af: jne 0x5a80c7 */ if (!fZ) goto L_005a80c7;
L_005a80b1:; BB(0x005a80b1);
    /* 005a80b1: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005a80b7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005a80b9: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005a80bf: mov eax, dword ptr [edx + 0x2f0] */ r_eax = R32((u32)(r_edx+0x2f0u));
    /* 005a80c5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5a80c7u); call_ind(t); }
L_005a80c7:; BB(0x005a80c7);
    /* 005a80c7: mov esp, ebp */ r_esp = r_ebp;
    /* 005a80c9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a80ca: ret  */ FN_RET(0x005a7ea0); r_esp += 4; return;
}

