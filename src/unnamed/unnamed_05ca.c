#include "protos.h"

void f_005ca110(void) /* sub_5CA110 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ca110);
    /* 005ca110: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ca111: mov ebp, esp */ r_ebp = r_esp;
    /* 005ca113: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ca116: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005ca119: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005ca120: jmp 0x5ca12b */ goto L_005ca12b;
L_005ca122:; BB(0x005ca122);
    /* 005ca122: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ca125: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ca128: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005ca12b:; BB(0x005ca12b);
    /* 005ca12b: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ca12f: jge 0x5ca15e */ if ((fS==fO)) goto L_005ca15e;
L_005ca131:; BB(0x005ca131);
    /* 005ca131: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ca134: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ca137: cmp dword ptr [edx + ecx*4 + 4], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca13c: je 0x5ca15c */ if (fZ) goto L_005ca15c;
L_005ca13e:; BB(0x005ca13e);
    /* 005ca13e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ca141: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ca144: mov edx, dword ptr [ecx + eax*4 + 4] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 005ca148: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ca14b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ca14e: mov ecx, dword ptr [ecx + eax*4 + 4] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 005ca152: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005ca154: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 005ca15a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ca15cu); call_ind(t); }
L_005ca15c:; BB(0x005ca15c);
    /* 005ca15c: jmp 0x5ca122 */ goto L_005ca122;
L_005ca15e:; BB(0x005ca15e);
    /* 005ca15e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005ca165: jmp 0x5ca170 */ goto L_005ca170;
L_005ca167:; BB(0x005ca167);
    /* 005ca167: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ca16a: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ca16d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005ca170:; BB(0x005ca170);
    /* 005ca170: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ca174: jge 0x5ca1a3 */ if ((fS==fO)) goto L_005ca1a3;
L_005ca176:; BB(0x005ca176);
    /* 005ca176: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ca179: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ca17c: cmp dword ptr [eax + edx*4 + 0x14], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca181: je 0x5ca1a1 */ if (fZ) goto L_005ca1a1;
L_005ca183:; BB(0x005ca183);
    /* 005ca183: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ca186: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ca189: mov eax, dword ptr [edx + ecx*4 + 0x14] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x14u));
    /* 005ca18d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ca190: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ca193: mov ecx, dword ptr [edx + ecx*4 + 0x14] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x14u));
    /* 005ca197: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005ca199: mov edx, dword ptr [eax + 0xd0] */ r_edx = R32((u32)(r_eax+0xd0u));
    /* 005ca19f: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5ca1a1u); call_ind(t); }
L_005ca1a1:; BB(0x005ca1a1);
    /* 005ca1a1: jmp 0x5ca167 */ goto L_005ca167;
L_005ca1a3:; BB(0x005ca1a3);
    /* 005ca1a3: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ca1a6: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 005ca1a9: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ca1ac: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 005ca1af: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005ca1b1: mov ecx, eax */ r_ecx = r_eax;
    /* 005ca1b3: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 005ca1b9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ca1bbu); call_ind(t); }
    /* 005ca1bb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ca1be: cmp dword ptr [ecx + 0x20], 0 */ {  u32 a = R32((u32)(r_ecx+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca1c2: je 0x5ca1d7 */ if (fZ) goto L_005ca1d7;
L_005ca1c4:; BB(0x005ca1c4);
    /* 005ca1c4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ca1c7: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 005ca1ca: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ca1cd: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 005ca1d0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ca1d2: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005ca1d5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ca1d7u); call_ind(t); }
L_005ca1d7:; BB(0x005ca1d7);
    /* 005ca1d7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ca1da: cmp dword ptr [ecx + 0x24], 0 */ {  u32 a = R32((u32)(r_ecx+0x24u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca1de: je 0x5ca1f3 */ if (fZ) goto L_005ca1f3;
L_005ca1e0:; BB(0x005ca1e0);
    /* 005ca1e0: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ca1e3: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 005ca1e6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ca1e9: mov ecx, dword ptr [ecx + 0x24] */ r_ecx = R32((u32)(r_ecx+0x24u));
    /* 005ca1ec: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ca1ee: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005ca1f1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ca1f3u); call_ind(t); }
L_005ca1f3:; BB(0x005ca1f3);
    /* 005ca1f3: mov esp, ebp */ r_esp = r_ebp;
    /* 005ca1f5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ca1f6: ret  */ FN_RET(0x005ca110); r_esp += 4; return;
}

void f_005ca200(void) /* sub_5CA200 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ca200);
    /* 005ca200: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ca201: mov ebp, esp */ r_ebp = r_esp;
    /* 005ca203: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ca206: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005ca209: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005ca20c: cmp dword ptr [eax + 0x20], 0 */ {  u32 a = R32((u32)(r_eax+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca210: je 0x5ca225 */ if (fZ) goto L_005ca225;
L_005ca212:; BB(0x005ca212);
    /* 005ca212: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005ca215: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 005ca218: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005ca21b: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 005ca21e: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005ca220: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005ca223: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ca225u); call_ind(t); }
L_005ca225:; BB(0x005ca225);
    /* 005ca225: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005ca228: call 0x5ca8b0 */ r_esp -= 4; W32(r_esp, 0x5ca22du); f_005ca8b0();
    /* 005ca22d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005ca234: jmp 0x5ca23f */ goto L_005ca23f;
L_005ca236:; BB(0x005ca236);
    /* 005ca236: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ca239: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ca23c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005ca23f:; BB(0x005ca23f);
    /* 005ca23f: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ca243: jge 0x5ca272 */ if ((fS==fO)) goto L_005ca272;
L_005ca245:; BB(0x005ca245);
    /* 005ca245: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ca248: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005ca24b: cmp dword ptr [eax + edx*4 + 4], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca250: je 0x5ca270 */ if (fZ) goto L_005ca270;
L_005ca252:; BB(0x005ca252);
    /* 005ca252: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ca255: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005ca258: mov eax, dword ptr [edx + ecx*4 + 4] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 005ca25c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ca25f: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005ca262: mov ecx, dword ptr [edx + ecx*4 + 4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 005ca266: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005ca268: mov edx, dword ptr [eax + 0xcc] */ r_edx = R32((u32)(r_eax+0xccu));
    /* 005ca26e: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5ca270u); call_ind(t); }
L_005ca270:; BB(0x005ca270);
    /* 005ca270: jmp 0x5ca236 */ goto L_005ca236;
L_005ca272:; BB(0x005ca272);
    /* 005ca272: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005ca275: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 005ca278: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005ca27b: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 005ca27e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005ca280: mov ecx, eax */ r_ecx = r_eax;
    /* 005ca282: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 005ca288: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ca28au); call_ind(t); }
    /* 005ca28a: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005ca290: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005ca292: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005ca298: mov eax, dword ptr [edx + 0x25c] */ r_eax = R32((u32)(r_edx+0x25cu));
    /* 005ca29e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ca2a0u); call_ind(t); }
    /* 005ca2a0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca2a2: je 0x5ca3e0 */ if (fZ) goto L_005ca3e0;
L_005ca2a8:; BB(0x005ca2a8);
    /* 005ca2a8: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005ca2ae: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005ca2b0: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005ca2b6: mov eax, dword ptr [edx + 0x25c] */ r_eax = R32((u32)(r_edx+0x25cu));
    /* 005ca2bc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ca2beu); call_ind(t); }
    /* 005ca2be: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005ca2c1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ca2c4: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5ca2c9u); f_0063aac0();
    /* 005ca2c9: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005ca2cb: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005ca2ce: cmp dword ptr [ebp - 0x18], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca2d2: je 0x5ca2f0 */ if (fZ) goto L_005ca2f0;
L_005ca2d4:; BB(0x005ca2d4);
    /* 005ca2d4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ca2d7: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5ca2dcu); f_0063aac0();
    /* 005ca2dc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ca2de: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005ca2e1: cmp dword ptr [ebp - 0x1c], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca2e5: je 0x5ca2f0 */ if (fZ) goto L_005ca2f0;
L_005ca2e7:; BB(0x005ca2e7);
    /* 005ca2e7: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 005ca2ee: jmp 0x5ca2f7 */ goto L_005ca2f7;
L_005ca2f0:; BB(0x005ca2f0);
    /* 005ca2f0: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
L_005ca2f7:; BB(0x005ca2f7);
    /* 005ca2f7: movzx eax, byte ptr [ebp - 0x28] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffd8u));
    /* 005ca2fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca2fd: je 0x5ca3e0 */ if (fZ) goto L_005ca3e0;
L_005ca303:; BB(0x005ca303);
    /* 005ca303: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005ca306: call 0x5ca3f0 */ r_esp -= 4; W32(r_esp, 0x5ca30bu); f_005ca3f0();
    /* 005ca30b: lea ecx, [ebp - 0xc] */ r_ecx = (u32)(r_ebp+0xfffffff4u);
    /* 005ca30e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ca30f: mov edx, dword ptr [0x7947e4] */ r_edx = R32((u32)(0x7947e4u));
    /* 005ca315: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005ca317: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005ca31d: mov edx, dword ptr [eax + 0x25c] */ r_edx = R32((u32)(r_eax+0x25cu));
    /* 005ca323: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5ca325u); call_ind(t); }
    /* 005ca325: mov ecx, eax */ r_ecx = r_eax;
    /* 005ca327: call 0x5d5a90 */ r_esp -= 4; W32(r_esp, 0x5ca32cu); f_005d5a90();
    /* 005ca32c: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005ca32f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ca330: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ca332: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ca333: mov eax, dword ptr [0x7947e4] */ r_eax = R32((u32)(0x7947e4u));
    /* 005ca338: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ca33a: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005ca340: mov eax, dword ptr [edx + 0x25c] */ r_eax = R32((u32)(r_edx+0x25cu));
    /* 005ca346: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ca348u); call_ind(t); }
    /* 005ca348: add eax, 0x4bc */ {  u32 a = r_eax; u32 b = 0x4bcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ca34d: mov ecx, eax */ r_ecx = r_eax;
    /* 005ca34f: call 0x64c6e0 */ r_esp -= 4; W32(r_esp, 0x5ca354u); f_0064c6e0();
    /* 005ca354: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005ca357: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca359: je 0x5ca395 */ if (fZ) goto L_005ca395;
L_005ca35b:; BB(0x005ca35b);
    /* 005ca35b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ca35d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ca35f: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5ca364u); f_0064c8a0();
    /* 005ca364: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ca367: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005ca36a: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005ca36d: mov edx, dword ptr [0x7947e4] */ r_edx = R32((u32)(0x7947e4u));
    /* 005ca373: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005ca375: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005ca37b: mov edx, dword ptr [eax + 0x25c] */ r_edx = R32((u32)(r_eax+0x25cu));
    /* 005ca381: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5ca383u); call_ind(t); }
    /* 005ca383: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ca386: mov dword ptr [eax + 0x4bc], ecx */ W32((u32)(r_eax+0x4bcu), r_ecx);
    /* 005ca38c: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ca38f: mov dword ptr [eax + 0x4c0], edx */ W32((u32)(r_eax+0x4c0u), r_edx);
L_005ca395:; BB(0x005ca395);
    /* 005ca395: mov eax, dword ptr [0x7947e4] */ r_eax = R32((u32)(0x7947e4u));
    /* 005ca39a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ca39c: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005ca3a2: mov eax, dword ptr [edx + 0x25c] */ r_eax = R32((u32)(r_edx+0x25cu));
    /* 005ca3a8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ca3aau); call_ind(t); }
    /* 005ca3aa: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005ca3ad: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ca3af: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005ca3b5: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005ca3b7: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005ca3bd: mov eax, dword ptr [edx + 0x25c] */ r_eax = R32((u32)(r_edx+0x25cu));
    /* 005ca3c3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ca3c5u); call_ind(t); }
    /* 005ca3c5: mov ecx, dword ptr [eax + 0x4c0] */ r_ecx = R32((u32)(r_eax+0x4c0u));
    /* 005ca3cb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ca3cc: mov edx, dword ptr [eax + 0x4bc] */ r_edx = R32((u32)(r_eax+0x4bcu));
    /* 005ca3d2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ca3d3: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005ca3d6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ca3d8: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005ca3db: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005ca3de: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ca3e0u); call_ind(t); }
L_005ca3e0:; BB(0x005ca3e0);
    /* 005ca3e0: mov esp, ebp */ r_esp = r_ebp;
    /* 005ca3e2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ca3e3: ret  */ FN_RET(0x005ca200); r_esp += 4; return;
}

void f_005ca3f0(void) /* sub_5CA3F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ca3f0);
    /* 005ca3f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ca3f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005ca3f3: sub esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ca3f6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005ca3f7: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 005ca3fa: mov dword ptr [ebp - 0x40], 0x5f5e100 */ W32((u32)(r_ebp+0xffffffc0u), 0x5f5e100u);
    /* 005ca401: mov dword ptr [ebp - 0x3c], 0x989680 */ W32((u32)(r_ebp+0xffffffc4u), 0x989680u);
    /* 005ca408: mov dword ptr [ebp - 0x38], 0xf4240 */ W32((u32)(r_ebp+0xffffffc8u), 0xf4240u);
    /* 005ca40f: mov dword ptr [ebp - 0x34], 0x7a120 */ W32((u32)(r_ebp+0xffffffccu), 0x7a120u);
    /* 005ca416: mov dword ptr [ebp - 0x30], 0x186a0 */ W32((u32)(r_ebp+0xffffffd0u), 0x186a0u);
    /* 005ca41d: mov dword ptr [ebp - 0x2c], 0xc350 */ W32((u32)(r_ebp+0xffffffd4u), 0xc350u);
    /* 005ca424: mov dword ptr [ebp - 0x28], 0x61a8 */ W32((u32)(r_ebp+0xffffffd8u), 0x61a8u);
    /* 005ca42b: mov dword ptr [ebp - 0x24], 0x2710 */ W32((u32)(r_ebp+0xffffffdcu), 0x2710u);
    /* 005ca432: mov dword ptr [ebp - 0x20], 0x1388 */ W32((u32)(r_ebp+0xffffffe0u), 0x1388u);
    /* 005ca439: mov dword ptr [ebp - 0x1c], 0x3e8 */ W32((u32)(r_ebp+0xffffffe4u), 0x3e8u);
    /* 005ca440: mov dword ptr [ebp - 0x18], 0x1f4 */ W32((u32)(r_ebp+0xffffffe8u), 0x1f4u);
    /* 005ca447: mov dword ptr [ebp - 0x14], 0x64 */ W32((u32)(r_ebp+0xffffffecu), 0x64u);
    /* 005ca44e: mov eax, dword ptr [0x7947e4] */ r_eax = R32((u32)(0x7947e4u));
    /* 005ca453: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ca455: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005ca45b: mov eax, dword ptr [edx + 0x25c] */ r_eax = R32((u32)(r_edx+0x25cu));
    /* 005ca461: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ca463u); call_ind(t); }
    /* 005ca463: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005ca466: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 005ca469: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ca46a: lea edx, [ebp - 8] */ r_edx = (u32)(r_ebp+0xfffffff8u);
    /* 005ca46d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ca46e: mov eax, dword ptr [0x7947e4] */ r_eax = R32((u32)(0x7947e4u));
    /* 005ca473: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ca475: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005ca47b: mov eax, dword ptr [edx + 0x26c] */ r_eax = R32((u32)(r_edx+0x26cu));
    /* 005ca481: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ca483u); call_ind(t); }
    /* 005ca483: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca487: je 0x5ca4b1 */ if (fZ) goto L_005ca4b1;
L_005ca489:; BB(0x005ca489);
    /* 005ca489: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ca48c: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x5ca491u); f_005d5a50();
    /* 005ca491: cmp eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ca494: jge 0x5ca4a3 */ if ((fS==fO)) goto L_005ca4a3;
L_005ca496:; BB(0x005ca496);
    /* 005ca496: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ca499: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x5ca49eu); f_005d5a50();
    /* 005ca49e: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 005ca4a1: jmp 0x5ca4a9 */ goto L_005ca4a9;
L_005ca4a3:; BB(0x005ca4a3);
    /* 005ca4a3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ca4a6: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
L_005ca4a9:; BB(0x005ca4a9);
    /* 005ca4a9: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005ca4ac: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 005ca4af: jmp 0x5ca4bc */ goto L_005ca4bc;
L_005ca4b1:; BB(0x005ca4b1);
    /* 005ca4b1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ca4b4: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x5ca4b9u); f_005d5a50();
    /* 005ca4b9: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
L_005ca4bc:; BB(0x005ca4bc);
    /* 005ca4bc: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 005ca4bf: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 005ca4c2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ca4c5: call 0x5d5f30 */ r_esp -= 4; W32(r_esp, 0x5ca4cau); f_005d5f30();
    /* 005ca4ca: mov esi, eax */ r_esi = r_eax;
    /* 005ca4cc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ca4cf: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x5ca4d4u); f_005d5a50();
    /* 005ca4d4: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ca4d6: jle 0x5ca4fa */ if ((fZ||fS!=fO)) goto L_005ca4fa;
L_005ca4d8:; BB(0x005ca4d8);
    /* 005ca4d8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ca4da: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ca4dc: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5ca4e1u); f_0064c8a0();
    /* 005ca4e1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ca4e4: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 005ca4e7: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 005ca4ea: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005ca4ed: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ca4ee: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005ca4f1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ca4f2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ca4f5: call 0x5d5e10 */ r_esp -= 4; W32(r_esp, 0x5ca4fau); f_005d5e10();
L_005ca4fa:; BB(0x005ca4fa);
    /* 005ca4fa: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 005ca4fd: mov dword ptr [eax + 0x30], 0x32 */ W32((u32)(r_eax+0x30u), 0x32u);
    /* 005ca504: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005ca50b: jmp 0x5ca516 */ goto L_005ca516;
L_005ca50d:; BB(0x005ca50d);
    /* 005ca50d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ca510: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ca513: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_005ca516:; BB(0x005ca516);
    /* 005ca516: cmp dword ptr [ebp - 0xc], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ca51a: jge 0x5ca539 */ if ((fS==fO)) goto L_005ca539;
L_005ca51c:; BB(0x005ca51c);
    /* 005ca51c: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ca51f: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 005ca522: cmp eax, dword ptr [ebp + edx*4 - 0x40] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+r_edx*4+0xffffffc0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ca526: jl 0x5ca537 */ if ((fS!=fO)) goto L_005ca537;
L_005ca528:; BB(0x005ca528);
    /* 005ca528: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005ca52b: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ca52e: mov eax, dword ptr [ebp + edx*4 - 0x40] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffffc0u));
    /* 005ca532: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 005ca535: jmp 0x5ca539 */ goto L_005ca539;
L_005ca537:; BB(0x005ca537);
    /* 005ca537: jmp 0x5ca50d */ goto L_005ca50d;
L_005ca539:; BB(0x005ca539);
    /* 005ca539: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005ca53c: call 0x5ca570 */ r_esp -= 4; W32(r_esp, 0x5ca541u); f_005ca570();
L_005ca541:; BB(0x005ca541);
    /* 005ca541: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005ca544: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005ca547: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 005ca54a: fild dword ptr [eax + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x30u)));
    /* 005ca54d: fcomp qword ptr [edx + 0x1e0] */ fx_compare(ST(0), R_F64((u32)(r_edx+0x1e0u))); FPOP();
    /* 005ca553: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005ca555: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 005ca558: jp 0x5ca566 */ if (fP) goto L_005ca566;
L_005ca55a:; BB(0x005ca55a);
    /* 005ca55a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ca55c: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005ca55f: call 0x5ca640 */ r_esp -= 4; W32(r_esp, 0x5ca564u); f_005ca640();
    /* 005ca564: jmp 0x5ca541 */ goto L_005ca541;
L_005ca566:; BB(0x005ca566);
    /* 005ca566: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ca567: mov esp, ebp */ r_esp = r_ebp;
    /* 005ca569: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ca56a: ret  */ FN_RET(0x005ca3f0); r_esp += 4; return;
}

void f_005ca570(void) /* sub_5CA570 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ca570);
    /* 005ca570: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ca571: mov ebp, esp */ r_ebp = r_esp;
    /* 005ca573: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ca574: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ca577: mov eax, dword ptr [0x7947e4] */ r_eax = R32((u32)(0x7947e4u));
    /* 005ca57c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ca57e: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005ca584: mov eax, dword ptr [edx + 0x25c] */ r_eax = R32((u32)(r_edx+0x25cu));
    /* 005ca58a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ca58cu); call_ind(t); }
    /* 005ca58c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca58e: jne 0x5ca595 */ if (!fZ) goto L_005ca595;
L_005ca590:; BB(0x005ca590);
    /* 005ca590: jmp 0x5ca63c */ goto L_005ca63c;
L_005ca595:; BB(0x005ca595);
    /* 005ca595: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ca598: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005ca59b: fld1  */ FPUSH(1.0);
    /* 005ca59d: fcomp qword ptr [edx + 0x1e0] */ fx_compare(ST(0), R_F64((u32)(r_edx+0x1e0u))); FPOP();
    /* 005ca5a3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005ca5a5: test ah, 0x44 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x44u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 005ca5a8: jp 0x5ca5c4 */ if (fP) goto L_005ca5c4;
L_005ca5aa:; BB(0x005ca5aa);
    /* 005ca5aa: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ca5ad: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005ca5b0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ca5b3: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 005ca5b6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005ca5b8: mov ecx, eax */ r_ecx = r_eax;
    /* 005ca5ba: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 005ca5c0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ca5c2u); call_ind(t); }
    /* 005ca5c2: jmp 0x5ca5da */ goto L_005ca5da;
L_005ca5c4:; BB(0x005ca5c4);
    /* 005ca5c4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ca5c7: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 005ca5ca: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ca5cd: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005ca5d0: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005ca5d2: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 005ca5d8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ca5dau); call_ind(t); }
L_005ca5da:; BB(0x005ca5da);
    /* 005ca5da: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ca5dd: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005ca5e0: fld qword ptr [0x6d2438] */ FPUSH(R_F64((u32)(0x6d2438u)));
    /* 005ca5e6: fcomp qword ptr [edx + 0x1e0] */ fx_compare(ST(0), R_F64((u32)(r_edx+0x1e0u))); FPOP();
    /* 005ca5ec: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005ca5ee: test ah, 0x44 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x44u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 005ca5f1: jnp 0x5ca60c */ if (!fP) goto L_005ca60c;
L_005ca5f3:; BB(0x005ca5f3);
    /* 005ca5f3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ca5f6: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005ca5f9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ca5fc: fild dword ptr [edx + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x30u)));
    /* 005ca5ff: fcomp qword ptr [ecx + 0x1e0] */ fx_compare(ST(0), R_F64((u32)(r_ecx+0x1e0u))); FPOP();
    /* 005ca605: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005ca607: test ah, 0x44 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x44u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 005ca60a: jp 0x5ca626 */ if (fP) goto L_005ca626;
L_005ca60c:; BB(0x005ca60c);
    /* 005ca60c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ca60f: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 005ca612: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ca615: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 005ca618: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005ca61a: mov ecx, eax */ r_ecx = r_eax;
    /* 005ca61c: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 005ca622: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ca624u); call_ind(t); }
    /* 005ca624: jmp 0x5ca63c */ goto L_005ca63c;
L_005ca626:; BB(0x005ca626);
    /* 005ca626: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ca629: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 005ca62c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ca62f: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 005ca632: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005ca634: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 005ca63a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ca63cu); call_ind(t); }
L_005ca63c:; BB(0x005ca63c);
    /* 005ca63c: mov esp, ebp */ r_esp = r_ebp;
    /* 005ca63e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ca63f: ret  */ FN_RET(0x005ca570); r_esp += 4; return;
}

void f_005ca640(void) /* sub_5CA640 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ca640);
    /* 005ca640: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ca641: mov ebp, esp */ r_ebp = r_esp;
    /* 005ca643: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ca646: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005ca649: cmp dword ptr [ebp + 8], 1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca64d: jne 0x5ca66a */ if (!fZ) goto L_005ca66a;
L_005ca64f:; BB(0x005ca64f);
    /* 005ca64f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ca652: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005ca655: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ca658: fild dword ptr [edx + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x30u)));
    /* 005ca65b: fcomp qword ptr [ecx + 0x1e0] */ fx_compare(ST(0), R_F64((u32)(r_ecx+0x1e0u))); FPOP();
    /* 005ca661: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005ca663: test ah, 0x44 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x44u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 005ca666: jp 0x5ca66a */ if (fP) goto L_005ca66a;
L_005ca668:; BB(0x005ca668);
    /* 005ca668: jmp 0x5ca6b2 */ goto L_005ca6b2;
L_005ca66a:; BB(0x005ca66a);
    /* 005ca66a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005ca671: jmp 0x5ca67c */ goto L_005ca67c;
L_005ca673:; BB(0x005ca673);
    /* 005ca673: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ca676: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ca679: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005ca67c:; BB(0x005ca67c);
    /* 005ca67c: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ca680: jge 0x5ca697 */ if ((fS==fO)) goto L_005ca697;
L_005ca682:; BB(0x005ca682);
    /* 005ca682: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ca685: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ca686: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ca689: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ca68c: mov ecx, dword ptr [eax + edx*4 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 005ca690: call 0x5cad50 */ r_esp -= 4; W32(r_esp, 0x5ca695u); f_005cad50();
    /* 005ca695: jmp 0x5ca673 */ goto L_005ca673;
L_005ca697:; BB(0x005ca697);
    /* 005ca697: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ca69a: call 0x5ca570 */ r_esp -= 4; W32(r_esp, 0x5ca69fu); f_005ca570();
    /* 005ca69f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ca6a2: movzx edx, byte ptr [ecx + 0x28] */ r_edx = (u32)R8((u32)(r_ecx+0x28u));
    /* 005ca6a6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca6a8: je 0x5ca6b2 */ if (fZ) goto L_005ca6b2;
L_005ca6aa:; BB(0x005ca6aa);
    /* 005ca6aa: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ca6ad: call 0x5ca7b0 */ r_esp -= 4; W32(r_esp, 0x5ca6b2u); f_005ca7b0();
L_005ca6b2:; BB(0x005ca6b2);
    /* 005ca6b2: mov esp, ebp */ r_esp = r_ebp;
    /* 005ca6b4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ca6b5: ret 4 */ FN_RET(0x005ca640); r_esp += 8; return;
}

void f_005ca6c0(void) /* sub_5CA6C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ca6c0);
    /* 005ca6c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ca6c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005ca6c3: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ca6c6: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005ca6c9: mov eax, dword ptr [0x7947e4] */ r_eax = R32((u32)(0x7947e4u));
    /* 005ca6ce: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ca6d0: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005ca6d6: mov eax, dword ptr [edx + 0x25c] */ r_eax = R32((u32)(r_edx+0x25cu));
    /* 005ca6dc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ca6deu); call_ind(t); }
    /* 005ca6de: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005ca6e1: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca6e5: je 0x5ca77c */ if (fZ) goto L_005ca77c;
L_005ca6eb:; BB(0x005ca6eb);
    /* 005ca6eb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ca6ee: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5ca6f3u); f_0063aac0();
    /* 005ca6f3: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005ca6f5: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005ca6f8: cmp dword ptr [ebp - 0x18], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca6fc: je 0x5ca71a */ if (fZ) goto L_005ca71a;
L_005ca6fe:; BB(0x005ca6fe);
    /* 005ca6fe: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ca701: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5ca706u); f_0063aac0();
    /* 005ca706: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ca708: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005ca70b: cmp dword ptr [ebp - 0x1c], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca70f: je 0x5ca71a */ if (fZ) goto L_005ca71a;
L_005ca711:; BB(0x005ca711);
    /* 005ca711: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005ca718: jmp 0x5ca721 */ goto L_005ca721;
L_005ca71a:; BB(0x005ca71a);
    /* 005ca71a: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
L_005ca721:; BB(0x005ca721);
    /* 005ca721: movzx eax, byte ptr [ebp - 0x24] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffdcu));
    /* 005ca725: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca727: je 0x5ca77c */ if (fZ) goto L_005ca77c;
L_005ca729:; BB(0x005ca729);
    /* 005ca729: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ca72b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ca72d: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5ca732u); f_0064c8a0();
    /* 005ca732: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ca735: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005ca738: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005ca73b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ca73e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ca73f: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ca742: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ca743: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ca746: call 0x5d5e10 */ r_esp -= 4; W32(r_esp, 0x5ca74bu); f_005d5e10();
    /* 005ca74b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ca74e: call 0x5ca8b0 */ r_esp -= 4; W32(r_esp, 0x5ca753u); f_005ca8b0();
    /* 005ca753: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ca755: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ca757: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5ca75cu); f_0064c8a0();
    /* 005ca75c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ca75f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005ca762: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005ca765: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ca767: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ca76a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ca76b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ca76e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ca76f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ca772: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005ca774: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ca777: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 005ca77a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5ca77cu); call_ind(t); }
L_005ca77c:; BB(0x005ca77c);
    /* 005ca77c: mov esp, ebp */ r_esp = r_ebp;
    /* 005ca77e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ca77f: ret  */ FN_RET(0x005ca6c0); r_esp += 4; return;
}

void f_005ca7b0(void) /* sub_5CA7B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ca7b0);
    /* 005ca7b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ca7b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005ca7b3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ca7b6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005ca7b9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005ca7c0: jmp 0x5ca7cb */ goto L_005ca7cb;
L_005ca7c2:; BB(0x005ca7c2);
    /* 005ca7c2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ca7c5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ca7c8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005ca7cb:; BB(0x005ca7cb);
    /* 005ca7cb: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ca7cf: jge 0x5ca7f1 */ if ((fS==fO)) goto L_005ca7f1;
L_005ca7d1:; BB(0x005ca7d1);
    /* 005ca7d1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ca7d4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ca7d7: mov eax, dword ptr [edx + ecx*4 + 4] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 005ca7db: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ca7de: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ca7e1: mov ecx, dword ptr [edx + ecx*4 + 4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 005ca7e5: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005ca7e7: mov edx, dword ptr [eax + 0xcc] */ r_edx = R32((u32)(r_eax+0xccu));
    /* 005ca7ed: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5ca7efu); call_ind(t); }
    /* 005ca7ef: jmp 0x5ca7c2 */ goto L_005ca7c2;
L_005ca7f1:; BB(0x005ca7f1);
    /* 005ca7f1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ca7f4: cmp dword ptr [eax + 0x2c], 0 */ {  u32 a = R32((u32)(r_eax+0x2cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca7f8: jne 0x5ca7ff */ if (!fZ) goto L_005ca7ff;
L_005ca7fa:; BB(0x005ca7fa);
    /* 005ca7fa: jmp 0x5ca89d */ goto L_005ca89d;
L_005ca7ff:; BB(0x005ca7ff);
    /* 005ca7ff: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005ca806: jmp 0x5ca811 */ goto L_005ca811;
L_005ca808:; BB(0x005ca808);
    /* 005ca808: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ca80b: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ca80e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005ca811:; BB(0x005ca811);
    /* 005ca811: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ca815: jge 0x5ca89d */ if ((fS==fO)) goto L_005ca89d;
L_005ca81b:; BB(0x005ca81b);
    /* 005ca81b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ca81e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ca821: mov ecx, dword ptr [eax + edx*4 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 005ca825: fld qword ptr [0x6b3e40] */ FPUSH(R_F64((u32)(0x6b3e40u)));
    /* 005ca82b: fcomp qword ptr [ecx + 0x1e0] */ fx_compare(ST(0), R_F64((u32)(r_ecx+0x1e0u))); FPOP();
    /* 005ca831: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005ca833: test ah, 0x44 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x44u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 005ca836: jnp 0x5ca858 */ if (!fP) goto L_005ca858;
L_005ca838:; BB(0x005ca838);
    /* 005ca838: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ca83b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ca83e: mov ecx, dword ptr [eax + edx*4 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 005ca842: fld qword ptr [ecx + 0x1e0] */ FPUSH(R_F64((u32)(r_ecx+0x1e0u)));
    /* 005ca848: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x5ca84du); f_00686cc0();
    /* 005ca84d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ca850: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005ca851: idiv dword ptr [ecx + 0x2c] */ { i32 d = (i32)R32((u32)(r_ecx+0x2cu)); if (!d) UNSUP(0x005ca851, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005ca851, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005ca854: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca856: je 0x5ca87a */ if (fZ) goto L_005ca87a;
L_005ca858:; BB(0x005ca858);
    /* 005ca858: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ca85b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ca85e: mov ecx, dword ptr [eax + edx*4 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 005ca862: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ca865: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ca868: mov edx, dword ptr [eax + edx*4 + 4] */ r_edx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 005ca86c: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005ca86e: mov ecx, edx */ r_ecx = r_edx;
    /* 005ca870: mov edx, dword ptr [eax + 0xd0] */ r_edx = R32((u32)(r_eax+0xd0u));
    /* 005ca876: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5ca878u); call_ind(t); }
    /* 005ca878: jmp 0x5ca898 */ goto L_005ca898;
L_005ca87a:; BB(0x005ca87a);
    /* 005ca87a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ca87d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ca880: mov edx, dword ptr [ecx + eax*4 + 4] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 005ca884: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ca887: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ca88a: mov ecx, dword ptr [ecx + eax*4 + 4] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 005ca88e: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005ca890: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 005ca896: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ca898u); call_ind(t); }
L_005ca898:; BB(0x005ca898);
    /* 005ca898: jmp 0x5ca808 */ goto L_005ca808;
L_005ca89d:; BB(0x005ca89d);
    /* 005ca89d: mov esp, ebp */ r_esp = r_ebp;
    /* 005ca89f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ca8a0: ret  */ FN_RET(0x005ca7b0); r_esp += 4; return;
}

void f_005ca8b0(void) /* sub_5CA8B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ca8b0);
    /* 005ca8b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ca8b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005ca8b3: sub esp, 0x8c */ {  u32 a = r_esp; u32 b = 0x8cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ca8b9: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005ca8be: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005ca8c0: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005ca8c3: mov dword ptr [ebp - 0x88], ecx */ W32((u32)(r_ebp+0xffffff78u), r_ecx);
    /* 005ca8c9: mov eax, dword ptr [0x7947e4] */ r_eax = R32((u32)(0x7947e4u));
    /* 005ca8ce: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ca8d0: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005ca8d6: mov eax, dword ptr [edx + 0x25c] */ r_eax = R32((u32)(r_edx+0x25cu));
    /* 005ca8dc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ca8deu); call_ind(t); }
    /* 005ca8de: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005ca8e1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ca8e4: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5ca8e9u); f_0063aac0();
    /* 005ca8e9: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005ca8eb: mov dword ptr [ebp - 0x80], ecx */ W32((u32)(r_ebp+0xffffff80u), r_ecx);
    /* 005ca8ee: cmp dword ptr [ebp - 0x80], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff80u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca8f2: je 0x5ca919 */ if (fZ) goto L_005ca919;
L_005ca8f4:; BB(0x005ca8f4);
    /* 005ca8f4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ca8f7: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5ca8fcu); f_0063aac0();
    /* 005ca8fc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ca8fe: mov dword ptr [ebp - 0x84], edx */ W32((u32)(r_ebp+0xffffff7cu), r_edx);
    /* 005ca904: cmp dword ptr [ebp - 0x84], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff7cu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca90b: je 0x5ca919 */ if (fZ) goto L_005ca919;
L_005ca90d:; BB(0x005ca90d);
    /* 005ca90d: mov dword ptr [ebp - 0x8c], 0 */ W32((u32)(r_ebp+0xffffff74u), 0x0u);
    /* 005ca917: jmp 0x5ca923 */ goto L_005ca923;
L_005ca919:; BB(0x005ca919);
    /* 005ca919: mov dword ptr [ebp - 0x8c], 1 */ W32((u32)(r_ebp+0xffffff74u), 0x1u);
L_005ca923:; BB(0x005ca923);
    /* 005ca923: movzx eax, byte ptr [ebp - 0x8c] */ r_eax = (u32)R8((u32)(r_ebp+0xffffff74u));
    /* 005ca92a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca92c: jne 0x5ca933 */ if (!fZ) goto L_005ca933;
L_005ca92e:; BB(0x005ca92e);
    /* 005ca92e: jmp 0x5ca9e2 */ goto L_005ca9e2;
L_005ca933:; BB(0x005ca933);
    /* 005ca933: lea ecx, [ebp - 0x7c] */ r_ecx = (u32)(r_ebp+0xffffff84u);
    /* 005ca936: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ca937: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ca93a: call 0x5d5de0 */ r_esp -= 4; W32(r_esp, 0x5ca93fu); f_005d5de0();
    /* 005ca93f: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 005ca945: cmp dword ptr [edx + 0x24], 0 */ {  u32 a = R32((u32)(r_edx+0x24u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca949: je 0x5ca9e2 */ if (fZ) goto L_005ca9e2;
L_005ca94f:; BB(0x005ca94f);
    /* 005ca94f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ca951: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ca953: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ca955: lea eax, [ebp - 0x70] */ r_eax = (u32)(r_ebp+0xffffff90u);
    /* 005ca958: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ca959: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 005ca95c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ca95d: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 005ca960: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ca961: call 0x64c8d0 */ r_esp -= 4; W32(r_esp, 0x5ca966u); f_0064c8d0();
    /* 005ca966: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ca969: lea eax, [ebp - 0x70] */ r_eax = (u32)(r_ebp+0xffffff90u);
    /* 005ca96c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ca96d: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x5ca972u); f_00686ecc();
    /* 005ca972: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ca975: sub eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005ca978: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 005ca97b: lea ecx, [ebp - 0x70] */ r_ecx = (u32)(r_ebp+0xffffff90u);
    /* 005ca97e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ca97f: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 005ca985: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 005ca988: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 005ca98e: mov ecx, dword ptr [ecx + 0x24] */ r_ecx = R32((u32)(r_ecx+0x24u));
    /* 005ca991: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ca993: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 005ca999: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ca99bu); call_ind(t); }
    /* 005ca99b: push 0x1cd */ { u32 v = 0x1cdu; r_esp -= 4; W32(r_esp, v); }
    /* 005ca9a0: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 005ca9a3: shl ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 005ca9a6: mov edx, 0x267 */ r_edx = 0x267u;
    /* 005ca9ab: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005ca9ad: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ca9ae: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 005ca9b4: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 005ca9b7: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 005ca9bd: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 005ca9c0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005ca9c2: mov ecx, eax */ r_ecx = r_eax;
    /* 005ca9c4: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005ca9c7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ca9c9u); call_ind(t); }
    /* 005ca9c9: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 005ca9cf: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 005ca9d2: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 005ca9d8: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 005ca9db: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005ca9dd: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005ca9e0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ca9e2u); call_ind(t); }
L_005ca9e2:; BB(0x005ca9e2);
    /* 005ca9e2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ca9e5: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005ca9e7: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x5ca9ecu); f_00686d72();
    /* 005ca9ec: mov esp, ebp */ r_esp = r_ebp;
    /* 005ca9ee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ca9ef: ret  */ FN_RET(0x005ca8b0); r_esp += 4; return;
}

void f_005cab60(void) /* sub_5CAB60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cab60);
    /* 005cab60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cab61: mov ebp, esp */ r_ebp = r_esp;
    /* 005cab63: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cab66: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005cab69: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005cab70: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cab73: fld qword ptr [0x6b3e40] */ FPUSH(R_F64((u32)(0x6b3e40u)));
    /* 005cab79: fcomp qword ptr [eax + 0x1e0] */ fx_compare(ST(0), R_F64((u32)(r_eax+0x1e0u))); FPOP();
    /* 005cab7f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005cab81: test ah, 0x44 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x44u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 005cab84: jp 0x5cab90 */ if (fP) goto L_005cab90;
L_005cab86:; BB(0x005cab86);
    /* 005cab86: mov eax, 0x42d */ r_eax = 0x42du;
    /* 005cab8b: jmp 0x5cad07 */ goto L_005cad07;
L_005cab90:; BB(0x005cab90);
    /* 005cab90: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cab93: fld qword ptr [ecx + 0x1e0] */ FPUSH(R_F64((u32)(r_ecx+0x1e0u)));
    /* 005cab99: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x5cab9eu); f_00686cc0();
    /* 005cab9e: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005caba1: cmp dword ptr [ebp - 0xc], 0x2710 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x2710u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005caba8: jg 0x5cac17 */ if ((!fZ&&fS==fO)) goto L_005cac17;
L_005cabaa:; BB(0x005cabaa);
    /* 005cabaa: cmp dword ptr [ebp - 0xc], 0x2710 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x2710u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cabb1: je 0x5cac9e */ if (fZ) goto L_005cac9e;
L_005cabb7:; BB(0x005cabb7);
    /* 005cabb7: cmp dword ptr [ebp - 0xc], 0x64 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cabbb: jg 0x5cabeb */ if ((!fZ&&fS==fO)) goto L_005cabeb;
L_005cabbd:; BB(0x005cabbd);
    /* 005cabbd: cmp dword ptr [ebp - 0xc], 0x64 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cabc1: je 0x5cacc2 */ if (fZ) goto L_005cacc2;
L_005cabc7:; BB(0x005cabc7);
    /* 005cabc7: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cabca: sub edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005cabcd: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005cabd0: cmp dword ptr [ebp - 0xc], 0x2d */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005cabd4: ja 0x5cacff */ if ((!fC&&!fZ)) goto L_005cacff;
L_005cabda:; BB(0x005cabda);
    /* 005cabda: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cabdd: movzx ecx, byte ptr [eax + 0x5cad20] */ r_ecx = (u32)R8((u32)(r_eax+0x5cad20u));
    /* 005cabe4: jmp dword ptr [ecx*4 + 0x5cad0c] */ { u32 t = R32((u32)(r_ecx*4+0x5cad0cu)); switch (t) { case 0x5cace6u: goto L_005cace6; case 0x5cacddu: goto L_005cacdd; case 0x5cacd4u: goto L_005cacd4; case 0x5caccbu: goto L_005caccb; case 0x5cacffu: goto L_005cacff; default: UNSUP(0x005cabe4, "jump table entry is not a known target"); } }
L_005cabeb:; BB(0x005cabeb);
    /* 005cabeb: cmp dword ptr [ebp - 0xc], 0x1f4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x1f4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cabf2: je 0x5cacb9 */ if (fZ) goto L_005cacb9;
L_005cabf8:; BB(0x005cabf8);
    /* 005cabf8: cmp dword ptr [ebp - 0xc], 0x3e8 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cabff: je 0x5cacb0 */ if (fZ) goto L_005cacb0;
L_005cac05:; BB(0x005cac05);
    /* 005cac05: cmp dword ptr [ebp - 0xc], 0x1388 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x1388u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cac0c: je 0x5caca7 */ if (fZ) goto L_005caca7;
L_005cac12:; BB(0x005cac12);
    /* 005cac12: jmp 0x5cacff */ goto L_005cacff;
L_005cac17:; BB(0x005cac17);
    /* 005cac17: cmp dword ptr [ebp - 0xc], 0x7a120 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x7a120u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cac1e: jg 0x5cac49 */ if ((!fZ&&fS==fO)) goto L_005cac49;
L_005cac20:; BB(0x005cac20);
    /* 005cac20: cmp dword ptr [ebp - 0xc], 0x7a120 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x7a120u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cac27: je 0x5cac7a */ if (fZ) goto L_005cac7a;
L_005cac29:; BB(0x005cac29);
    /* 005cac29: cmp dword ptr [ebp - 0xc], 0x61a8 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x61a8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cac30: je 0x5cac95 */ if (fZ) goto L_005cac95;
L_005cac32:; BB(0x005cac32);
    /* 005cac32: cmp dword ptr [ebp - 0xc], 0xc350 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xc350u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cac39: je 0x5cac8c */ if (fZ) goto L_005cac8c;
L_005cac3b:; BB(0x005cac3b);
    /* 005cac3b: cmp dword ptr [ebp - 0xc], 0x186a0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x186a0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cac42: je 0x5cac83 */ if (fZ) goto L_005cac83;
L_005cac44:; BB(0x005cac44);
    /* 005cac44: jmp 0x5cacff */ goto L_005cacff;
L_005cac49:; BB(0x005cac49);
    /* 005cac49: cmp dword ptr [ebp - 0xc], 0xf4240 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xf4240u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cac50: je 0x5cac71 */ if (fZ) goto L_005cac71;
L_005cac52:; BB(0x005cac52);
    /* 005cac52: cmp dword ptr [ebp - 0xc], 0x989680 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x989680u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cac59: je 0x5cacf1 */ if (fZ) goto L_005cacf1;
L_005cac5f:; BB(0x005cac5f);
    /* 005cac5f: cmp dword ptr [ebp - 0xc], 0x5f5e100 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x5f5e100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cac66: je 0x5cacf8 */ if (fZ) goto L_005cacf8;
L_005cac6c:; BB(0x005cac6c);
    /* 005cac6c: jmp 0x5cacff */ goto L_005cacff;
L_005cac71:; BB(0x005cac71);
    /* 005cac71: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cac74: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005cac77: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_005cac7a:; BB(0x005cac7a);
    /* 005cac7a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cac7d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005cac80: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005cac83:; BB(0x005cac83);
    /* 005cac83: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cac86: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005cac89: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005cac8c:; BB(0x005cac8c);
    /* 005cac8c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cac8f: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005cac92: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_005cac95:; BB(0x005cac95);
    /* 005cac95: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cac98: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005cac9b: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005cac9e:; BB(0x005cac9e);
    /* 005cac9e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005caca1: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005caca4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005caca7:; BB(0x005caca7);
    /* 005caca7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cacaa: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005cacad: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_005cacb0:; BB(0x005cacb0);
    /* 005cacb0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cacb3: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005cacb6: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005cacb9:; BB(0x005cacb9);
    /* 005cacb9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cacbc: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005cacbf: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005cacc2:; BB(0x005cacc2);
    /* 005cacc2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cacc5: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005cacc8: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_005caccb:; BB(0x005caccb);
    /* 005caccb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cacce: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005cacd1: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005cacd4:; BB(0x005cacd4);
    /* 005cacd4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cacd7: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005cacda: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005cacdd:; BB(0x005cacdd);
    /* 005cacdd: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cace0: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005cace3: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_005cace6:; BB(0x005cace6);
    /* 005cace6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cace9: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005cacec: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005cacef: jmp 0x5cacff */ goto L_005cacff;
L_005cacf1:; BB(0x005cacf1);
    /* 005cacf1: mov eax, 0x440 */ r_eax = 0x440u;
    /* 005cacf6: jmp 0x5cad07 */ goto L_005cad07;
L_005cacf8:; BB(0x005cacf8);
    /* 005cacf8: mov eax, 0x43f */ r_eax = 0x43fu;
    /* 005cacfd: jmp 0x5cad07 */ goto L_005cad07;
L_005cacff:; BB(0x005cacff);
    /* 005cacff: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cad02: add eax, 0x3f8 */ {  u32 a = r_eax; u32 b = 0x3f8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_005cad07:; BB(0x005cad07);
    /* 005cad07: mov esp, ebp */ r_esp = r_ebp;
    /* 005cad09: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cad0a: ret  */ FN_RET(0x005cab60); r_esp += 4; return;
}

void f_005cad50(void) /* sub_5CAD50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cad50);
    /* 005cad50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cad51: mov ebp, esp */ r_ebp = r_esp;
    /* 005cad53: sub esp, 0x9c */ {  u32 a = r_esp; u32 b = 0x9cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cad59: mov dword ptr [ebp - 0x9c], ecx */ W32((u32)(r_ebp+0xffffff64u), r_ecx);
    /* 005cad5f: fld qword ptr [0x6b3e40] */ FPUSH(R_F64((u32)(0x6b3e40u)));
    /* 005cad65: fstp qword ptr [ebp - 0x98] */ W_F64((u32)(r_ebp+0xffffff68u), ST(0)); FPOP();
    /* 005cad6b: fld1  */ FPUSH(1.0);
    /* 005cad6d: fstp qword ptr [ebp - 0x90] */ W_F64((u32)(r_ebp+0xffffff70u), ST(0)); FPOP();
    /* 005cad73: fld qword ptr [0x6be720] */ FPUSH(R_F64((u32)(0x6be720u)));
    /* 005cad79: fstp qword ptr [ebp - 0x88] */ W_F64((u32)(r_ebp+0xffffff78u), ST(0)); FPOP();
    /* 005cad7f: fld qword ptr [0x6be518] */ FPUSH(R_F64((u32)(0x6be518u)));
    /* 005cad85: fstp qword ptr [ebp - 0x80] */ W_F64((u32)(r_ebp+0xffffff80u), ST(0)); FPOP();
    /* 005cad88: fld qword ptr [0x6d2430] */ FPUSH(R_F64((u32)(0x6d2430u)));
    /* 005cad8e: fstp qword ptr [ebp - 0x78] */ W_F64((u32)(r_ebp+0xffffff88u), ST(0)); FPOP();
    /* 005cad91: fld qword ptr [0x6be520] */ FPUSH(R_F64((u32)(0x6be520u)));
    /* 005cad97: fstp qword ptr [ebp - 0x70] */ W_F64((u32)(r_ebp+0xffffff90u), ST(0)); FPOP();
    /* 005cad9a: fld qword ptr [0x6b4b00] */ FPUSH(R_F64((u32)(0x6b4b00u)));
    /* 005cada0: fstp qword ptr [ebp - 0x68] */ W_F64((u32)(r_ebp+0xffffff98u), ST(0)); FPOP();
    /* 005cada3: fld qword ptr [0x6d2568] */ FPUSH(R_F64((u32)(0x6d2568u)));
    /* 005cada9: fstp qword ptr [ebp - 0x60] */ W_F64((u32)(r_ebp+0xffffffa0u), ST(0)); FPOP();
    /* 005cadac: fld qword ptr [0x6bc208] */ FPUSH(R_F64((u32)(0x6bc208u)));
    /* 005cadb2: fstp qword ptr [ebp - 0x58] */ W_F64((u32)(r_ebp+0xffffffa8u), ST(0)); FPOP();
    /* 005cadb5: fld qword ptr [0x6d2560] */ FPUSH(R_F64((u32)(0x6d2560u)));
    /* 005cadbb: fstp qword ptr [ebp - 0x50] */ W_F64((u32)(r_ebp+0xffffffb0u), ST(0)); FPOP();
    /* 005cadbe: fld qword ptr [0x6d2558] */ FPUSH(R_F64((u32)(0x6d2558u)));
    /* 005cadc4: fstp qword ptr [ebp - 0x48] */ W_F64((u32)(r_ebp+0xffffffb8u), ST(0)); FPOP();
    /* 005cadc7: fld qword ptr [0x6d2550] */ FPUSH(R_F64((u32)(0x6d2550u)));
    /* 005cadcd: fstp qword ptr [ebp - 0x40] */ W_F64((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 005cadd0: fld qword ptr [0x6d2548] */ FPUSH(R_F64((u32)(0x6d2548u)));
    /* 005cadd6: fstp qword ptr [ebp - 0x38] */ W_F64((u32)(r_ebp+0xffffffc8u), ST(0)); FPOP();
    /* 005cadd9: fld qword ptr [0x6cae30] */ FPUSH(R_F64((u32)(0x6cae30u)));
    /* 005caddf: fstp qword ptr [ebp - 0x30] */ W_F64((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 005cade2: fld qword ptr [0x6d2540] */ FPUSH(R_F64((u32)(0x6d2540u)));
    /* 005cade8: fstp qword ptr [ebp - 0x28] */ W_F64((u32)(r_ebp+0xffffffd8u), ST(0)); FPOP();
    /* 005cadeb: fld qword ptr [0x6ca358] */ FPUSH(R_F64((u32)(0x6ca358u)));
    /* 005cadf1: fstp qword ptr [ebp - 0x20] */ W_F64((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
    /* 005cadf4: fld qword ptr [0x6d2538] */ FPUSH(R_F64((u32)(0x6d2538u)));
    /* 005cadfa: fstp qword ptr [ebp - 0x18] */ W_F64((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 005cadfd: fld qword ptr [0x6d2438] */ FPUSH(R_F64((u32)(0x6d2438u)));
    /* 005cae03: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 005cae06: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005cae0d: jmp 0x5cae18 */ goto L_005cae18;
L_005cae0f:; BB(0x005cae0f);
    /* 005cae0f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cae12: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005cae15: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005cae18:; BB(0x005cae18);
    /* 005cae18: cmp dword ptr [ebp - 4], 0x12 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cae1c: jge 0x5cae98 */ if ((fS==fO)) goto L_005cae98;
L_005cae1e:; BB(0x005cae1e);
    /* 005cae1e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cae21: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 005cae27: fld qword ptr [edx + 0x1e0] */ FPUSH(R_F64((u32)(r_edx+0x1e0u)));
    /* 005cae2d: fcomp qword ptr [ebp + ecx*8 - 0x98] */ fx_compare(ST(0), R_F64((u32)(r_ebp+r_ecx*8+0xffffff68u))); FPOP();
    /* 005cae34: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005cae36: test ah, 0x44 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x44u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 005cae39: jp 0x5cae93 */ if (fP) goto L_005cae93;
L_005cae3b:; BB(0x005cae3b);
    /* 005cae3b: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cae3f: jne 0x5cae59 */ if (!fZ) goto L_005cae59;
L_005cae41:; BB(0x005cae41);
    /* 005cae41: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 005cae47: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cae4a: fld qword ptr [ebp + ecx*8 - 0xa0] */ FPUSH(R_F64((u32)(r_ebp+r_ecx*8+0xffffff60u)));
    /* 005cae51: fstp qword ptr [eax + 0x1e0] */ W_F64((u32)(r_eax+0x1e0u), ST(0)); FPOP();
    /* 005cae57: jmp 0x5cae6f */ goto L_005cae6f;
L_005cae59:; BB(0x005cae59);
    /* 005cae59: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 005cae5f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cae62: fld qword ptr [ebp + eax*8 - 0x90] */ FPUSH(R_F64((u32)(r_ebp+r_eax*8+0xffffff70u)));
    /* 005cae69: fstp qword ptr [edx + 0x1e0] */ W_F64((u32)(r_edx+0x1e0u), ST(0)); FPOP();
L_005cae6f:; BB(0x005cae6f);
    /* 005cae6f: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 005cae75: call 0x5cab60 */ r_esp -= 4; W32(r_esp, 0x5cae7au); f_005cab60();
    /* 005cae7a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cae7b: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 005cae81: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005cae83: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 005cae89: mov eax, dword ptr [edx + 0xc8] */ r_eax = R32((u32)(r_edx+0xc8u));
    /* 005cae8f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5cae91u); call_ind(t); }
    /* 005cae91: jmp 0x5cae98 */ goto L_005cae98;
L_005cae93:; BB(0x005cae93);
    /* 005cae93: jmp 0x5cae0f */ goto L_005cae0f;
L_005cae98:; BB(0x005cae98);
    /* 005cae98: mov esp, ebp */ r_esp = r_ebp;
    /* 005cae9a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cae9b: ret 4 */ FN_RET(0x005cad50); r_esp += 8; return;
}

void f_005caea0(void) /* sub_5CAEA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005caea0);
    /* 005caea0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005caea1: mov ebp, esp */ r_ebp = r_esp;
    /* 005caea3: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005caea6: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 005caea9: mov eax, dword ptr [0x7947e4] */ r_eax = R32((u32)(0x7947e4u));
    /* 005caeae: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005caeb0: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005caeb6: mov eax, dword ptr [edx + 0x25c] */ r_eax = R32((u32)(r_edx+0x25cu));
    /* 005caebc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5caebeu); call_ind(t); }
    /* 005caebe: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005caec1: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 005caec4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005caec5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005caec8: call 0x5d5de0 */ r_esp -= 4; W32(r_esp, 0x5caecdu); f_005d5de0();
    /* 005caecd: lea edx, [ebp - 0x20] */ r_edx = (u32)(r_ebp+0xffffffe0u);
    /* 005caed0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005caed1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005caed4: call 0x5d5ac0 */ r_esp -= 4; W32(r_esp, 0x5caed9u); f_005d5ac0();
    /* 005caed9: mov eax, dword ptr [0x7947e4] */ r_eax = R32((u32)(0x7947e4u));
    /* 005caede: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005caee0: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005caee6: mov eax, dword ptr [edx + 0x2b4] */ r_eax = R32((u32)(r_edx+0x2b4u));
    /* 005caeec: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5caeeeu); call_ind(t); }
    /* 005caeee: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005caef1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005caef4: cmp ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005caef7: jne 0x5caf0f */ if (!fZ) goto L_005caf0f;
L_005caef9:; BB(0x005caef9);
    /* 005caef9: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005caefc: cmp dword ptr [edx], 0 */ {  u32 a = R32((u32)(r_edx)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005caeff: jl 0x5caf0f */ if ((fS!=fO)) goto L_005caf0f;
L_005caf01:; BB(0x005caf01);
    /* 005caf01: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005caf04: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005caf08: jl 0x5caf0f */ if ((fS!=fO)) goto L_005caf0f;
L_005caf0a:; BB(0x005caf0a);
    /* 005caf0a: jmp 0x5cb031 */ goto L_005cb031;
L_005caf0f:; BB(0x005caf0f);
    /* 005caf0f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005caf12: cmp ecx, dword ptr [ebp - 0x20] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005caf15: jne 0x5caf35 */ if (!fZ) goto L_005caf35;
L_005caf17:; BB(0x005caf17);
    /* 005caf17: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005caf1a: cmp edx, dword ptr [ebp - 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005caf1d: jne 0x5caf35 */ if (!fZ) goto L_005caf35;
L_005caf1f:; BB(0x005caf1f);
    /* 005caf1f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005caf22: cmp dword ptr [eax], 0 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005caf25: jl 0x5caf35 */ if ((fS!=fO)) goto L_005caf35;
L_005caf27:; BB(0x005caf27);
    /* 005caf27: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005caf2a: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005caf2e: jl 0x5caf35 */ if ((fS!=fO)) goto L_005caf35;
L_005caf30:; BB(0x005caf30);
    /* 005caf30: jmp 0x5cb031 */ goto L_005cb031;
L_005caf35:; BB(0x005caf35);
    /* 005caf35: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005caf38: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005caf3b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005caf3c: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 005caf3e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005caf3f: lea edx, [ebp - 0x28] */ r_edx = (u32)(r_ebp+0xffffffd8u);
    /* 005caf42: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005caf43: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 005caf46: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x5caf4bu); f_0064c5c0();
    /* 005caf4b: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005caf4d: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005caf50: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005caf53: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005caf56: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005caf59: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005caf5c: jle 0x5caf64 */ if ((fZ||fS!=fO)) goto L_005caf64;
L_005caf5e:; BB(0x005caf5e);
    /* 005caf5e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005caf61: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
L_005caf64:; BB(0x005caf64);
    /* 005caf64: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005caf67: cmp edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005caf6a: jne 0x5caf79 */ if (!fZ) goto L_005caf79;
L_005caf6c:; BB(0x005caf6c);
    /* 005caf6c: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005caf70: jle 0x5caf79 */ if ((fZ||fS!=fO)) goto L_005caf79;
L_005caf72:; BB(0x005caf72);
    /* 005caf72: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_005caf79:; BB(0x005caf79);
    /* 005caf79: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005caf7c: cmp eax, dword ptr [ebp - 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005caf7f: jg 0x5caf91 */ if ((!fZ&&fS==fO)) goto L_005caf91;
L_005caf81:; BB(0x005caf81);
    /* 005caf81: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005caf84: cmp ecx, dword ptr [ebp - 0x20] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005caf87: jne 0x5caf9f */ if (!fZ) goto L_005caf9f;
L_005caf89:; BB(0x005caf89);
    /* 005caf89: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005caf8c: cmp edx, dword ptr [ebp - 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005caf8f: jle 0x5caf9f */ if ((fZ||fS!=fO)) goto L_005caf9f;
L_005caf91:; BB(0x005caf91);
    /* 005caf91: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005caf94: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005caf97: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005caf9a: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005caf9d: jmp 0x5cafc9 */ goto L_005cafc9;
L_005caf9f:; BB(0x005caf9f);
    /* 005caf9f: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cafa3: jl 0x5cafab */ if ((fS!=fO)) goto L_005cafab;
L_005cafa5:; BB(0x005cafa5);
    /* 005cafa5: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cafa9: jge 0x5cafc9 */ if ((fS==fO)) goto L_005cafc9;
L_005cafab:; BB(0x005cafab);
    /* 005cafab: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cafad: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cafaf: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5cafb4u); f_0064c8a0();
    /* 005cafb4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cafb7: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005cafba: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 005cafbd: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005cafc0: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005cafc3: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005cafc6: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_005cafc9:; BB(0x005cafc9);
    /* 005cafc9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cafcc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cafcd: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cafd0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cafd1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cafd4: call 0x5d5e10 */ r_esp -= 4; W32(r_esp, 0x5cafd9u); f_005d5e10();
    /* 005cafd9: mov eax, dword ptr [0x7947e4] */ r_eax = R32((u32)(0x7947e4u));
    /* 005cafde: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 005cafe1: call 0x5ca8b0 */ r_esp -= 4; W32(r_esp, 0x5cafe6u); f_005ca8b0();
    /* 005cafe6: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005cafec: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005cafee: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005caff4: mov eax, dword ptr [edx + 0xe8] */ r_eax = R32((u32)(r_edx+0xe8u));
    /* 005caffa: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5caffcu); call_ind(t); }
    /* 005caffc: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005cafff: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005cb002: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005cb004: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005cb007: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 005cb00a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5cb00cu); call_ind(t); }
    /* 005cb00c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cb00f: jne 0x5cb031 */ if (!fZ) goto L_005cb031;
L_005cb011:; BB(0x005cb011);
    /* 005cb011: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cb013: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cb016: mov edx, dword ptr [ecx + 0x4c0] */ r_edx = R32((u32)(r_ecx+0x4c0u));
    /* 005cb01c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cb01d: mov eax, dword ptr [ecx + 0x4bc] */ r_eax = R32((u32)(r_ecx+0x4bcu));
    /* 005cb023: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cb024: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cb027: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005cb029: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cb02c: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005cb02f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5cb031u); call_ind(t); }
L_005cb031:; BB(0x005cb031);
    /* 005cb031: mov esp, ebp */ r_esp = r_ebp;
    /* 005cb033: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cb034: ret 4 */ FN_RET(0x005caea0); r_esp += 8; return;
}

