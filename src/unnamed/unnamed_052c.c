#include "protos.h"

void f_0052c7e0(void) /* sub_52C7E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0052c7e0);
    /* 0052c7e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052c7e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0052c7e3: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0052c7e6: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0052c7e9: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052c7ec: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0052c7ef: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052c7f2: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0052c7f5: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0052c7f7: mov ecx, eax */ r_ecx = r_eax;
    /* 0052c7f9: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0052c7fc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52c7feu); call_ind(t); }
    /* 0052c7fe: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052c801: call 0x52ddf0 */ r_esp -= 4; W32(r_esp, 0x52c806u); f_0052ddf0();
    /* 0052c806: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052c809: call 0x52cd40 */ r_esp -= 4; W32(r_esp, 0x52c80eu); f_0052cd40();
    /* 0052c80e: mov ecx, dword ptr [0x79338c] */ r_ecx = R32((u32)(0x79338cu));
    /* 0052c814: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0052c817: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0052c81a: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052c81e: jne 0x52c835 */ if (!fZ) goto L_0052c835;
L_0052c820:; BB(0x0052c820);
    /* 0052c820: mov eax, dword ptr [0x79338c] */ r_eax = R32((u32)(0x79338cu));
    /* 0052c825: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0052c828: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0052c82b: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052c82f: je 0x52ca69 */ if (fZ) goto L_0052ca69;
L_0052c835:; BB(0x0052c835);
    /* 0052c835: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0052c83c: jmp 0x52c847 */ goto L_0052c847;
L_0052c83e:; BB(0x0052c83e);
    /* 0052c83e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052c841: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0052c844: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0052c847:; BB(0x0052c847);
    /* 0052c847: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052c84b: jge 0x52c8f7 */ if ((fS==fO)) goto L_0052c8f7;
L_0052c851:; BB(0x0052c851);
    /* 0052c851: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052c854: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052c857: mov edx, dword ptr [ecx + eax*4 + 0xcc] */ r_edx = R32((u32)(r_ecx+r_eax*4+0xccu));
    /* 0052c85e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052c861: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052c864: mov ecx, dword ptr [ecx + eax*4 + 0xcc] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0xccu));
    /* 0052c86b: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0052c86d: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0052c870: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52c872u); call_ind(t); }
    /* 0052c872: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052c874: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052c877: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052c87a: mov ecx, dword ptr [edx + ecx*4 + 0xcc] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0xccu));
    /* 0052c881: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x52c886u); f_005f5d50();
    /* 0052c886: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052c889: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052c88c: mov edx, dword ptr [ecx + eax*4 + 0xe0] */ r_edx = R32((u32)(r_ecx+r_eax*4+0xe0u));
    /* 0052c893: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052c896: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052c899: mov ecx, dword ptr [ecx + eax*4 + 0xe0] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0xe0u));
    /* 0052c8a0: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0052c8a2: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0052c8a5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52c8a7u); call_ind(t); }
    /* 0052c8a7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052c8a9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052c8ac: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052c8af: mov ecx, dword ptr [edx + ecx*4 + 0xe0] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0xe0u));
    /* 0052c8b6: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x52c8bbu); f_005f5d50();
    /* 0052c8bb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052c8bd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052c8c0: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052c8c3: mov ecx, dword ptr [ecx + eax*4 + 0xb4] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0xb4u));
    /* 0052c8ca: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x52c8cfu); f_005f5d50();
    /* 0052c8cf: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052c8d2: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052c8d5: mov ecx, dword ptr [eax + edx*4 + 0xb4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xb4u));
    /* 0052c8dc: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052c8df: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052c8e2: mov edx, dword ptr [eax + edx*4 + 0xb4] */ r_edx = R32((u32)(r_eax+r_edx*4+0xb4u));
    /* 0052c8e9: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0052c8eb: mov ecx, edx */ r_ecx = r_edx;
    /* 0052c8ed: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 0052c8f0: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x52c8f2u); call_ind(t); }
    /* 0052c8f2: jmp 0x52c83e */ goto L_0052c83e;
L_0052c8f7:; BB(0x0052c8f7);
    /* 0052c8f7: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052c8fa: call 0x52abe0 */ r_esp -= 4; W32(r_esp, 0x52c8ffu); f_0052abe0();
    /* 0052c8ff: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052c901: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052c904: mov ecx, dword ptr [eax + 0xc0] */ r_ecx = R32((u32)(r_eax+0xc0u));
    /* 0052c90a: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x52c90fu); f_005f5d50();
    /* 0052c90f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052c912: mov edx, dword ptr [ecx + 0xc0] */ r_edx = R32((u32)(r_ecx+0xc0u));
    /* 0052c918: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052c91b: mov ecx, dword ptr [eax + 0xc0] */ r_ecx = R32((u32)(r_eax+0xc0u));
    /* 0052c921: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0052c923: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0052c926: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52c928u); call_ind(t); }
    /* 0052c928: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052c92a: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052c92d: mov edx, dword ptr [ecx + 0x60] */ r_edx = R32((u32)(r_ecx+0x60u));
    /* 0052c930: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052c931: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 0052c936: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0052c939: call 0x609870 */ r_esp -= 4; W32(r_esp, 0x52c93eu); f_00609870();
    /* 0052c93e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052c940: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052c943: mov edx, dword ptr [ecx + 0x64] */ r_edx = R32((u32)(r_ecx+0x64u));
    /* 0052c946: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052c947: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 0052c94c: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0052c94f: call 0x609870 */ r_esp -= 4; W32(r_esp, 0x52c954u); f_00609870();
    /* 0052c954: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052c956: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052c959: mov ecx, dword ptr [ecx + 0xc8] */ r_ecx = R32((u32)(r_ecx+0xc8u));
    /* 0052c95f: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x52c964u); f_005f5d50();
    /* 0052c964: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052c967: mov eax, dword ptr [edx + 0xc8] */ r_eax = R32((u32)(r_edx+0xc8u));
    /* 0052c96d: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052c970: mov ecx, dword ptr [ecx + 0xc8] */ r_ecx = R32((u32)(r_ecx+0xc8u));
    /* 0052c976: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0052c978: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0052c97b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52c97du); call_ind(t); }
    /* 0052c97d: mov ecx, dword ptr [0x793394] */ r_ecx = R32((u32)(0x793394u));
    /* 0052c983: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0052c985: mov ecx, dword ptr [0x793394] */ r_ecx = R32((u32)(0x793394u));
    /* 0052c98b: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0052c98e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52c990u); call_ind(t); }
    /* 0052c990: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052c993: jne 0x52ca04 */ if (!fZ) goto L_0052ca04;
L_0052c995:; BB(0x0052c995);
    /* 0052c995: mov ecx, dword ptr [0x79338c] */ r_ecx = R32((u32)(0x79338cu));
    /* 0052c99b: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0052c99e: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0052c9a1: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052c9a5: je 0x52c9f2 */ if (fZ) goto L_0052c9f2;
L_0052c9a7:; BB(0x0052c9a7);
    /* 0052c9a7: mov eax, dword ptr [0x79338c] */ r_eax = R32((u32)(0x79338cu));
    /* 0052c9ac: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0052c9af: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0052c9b2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0052c9b5: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0052c9b8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052c9b9: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052c9bc: mov ecx, dword ptr [eax + 0xc4] */ r_ecx = R32((u32)(r_eax+0xc4u));
    /* 0052c9c2: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052c9c5: mov eax, dword ptr [edx + 0xc4] */ r_eax = R32((u32)(r_edx+0xc4u));
    /* 0052c9cb: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0052c9cd: mov ecx, eax */ r_ecx = r_eax;
    /* 0052c9cf: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0052c9d5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52c9d7u); call_ind(t); }
    /* 0052c9d7: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052c9da: mov edx, dword ptr [ecx + 0xc4] */ r_edx = R32((u32)(r_ecx+0xc4u));
    /* 0052c9e0: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052c9e3: mov ecx, dword ptr [eax + 0xc4] */ r_ecx = R32((u32)(r_eax+0xc4u));
    /* 0052c9e9: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0052c9eb: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0052c9ee: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52c9f0u); call_ind(t); }
    /* 0052c9f0: jmp 0x52ca02 */ goto L_0052ca02;
L_0052c9f2:; BB(0x0052c9f2);
    /* 0052c9f2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052c9f4: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052c9f7: mov ecx, dword ptr [ecx + 0xc4] */ r_ecx = R32((u32)(r_ecx+0xc4u));
    /* 0052c9fd: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x52ca02u); f_005f5d50();
L_0052ca02:; BB(0x0052ca02);
    /* 0052ca02: jmp 0x52ca14 */ goto L_0052ca14;
L_0052ca04:; BB(0x0052ca04);
    /* 0052ca04: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052ca06: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052ca09: mov ecx, dword ptr [edx + 0xc4] */ r_ecx = R32((u32)(r_edx+0xc4u));
    /* 0052ca0f: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x52ca14u); f_005f5d50();
L_0052ca14:; BB(0x0052ca14);
    /* 0052ca14: mov eax, dword ptr [0x79338c] */ r_eax = R32((u32)(0x79338cu));
    /* 0052ca19: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0052ca1c: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0052ca1f: mov edx, dword ptr [0x79338c] */ r_edx = R32((u32)(0x79338cu));
    /* 0052ca25: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0052ca27: mov ecx, dword ptr [0x79338c] */ r_ecx = R32((u32)(0x79338cu));
    /* 0052ca2d: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0052ca30: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x52ca32u); call_ind(t); }
    /* 0052ca32: cmp dword ptr [ebp - 0x18], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052ca35: je 0x52ca69 */ if (fZ) goto L_0052ca69;
L_0052ca37:; BB(0x0052ca37);
    /* 0052ca37: mov eax, dword ptr [0x793394] */ r_eax = R32((u32)(0x793394u));
    /* 0052ca3c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0052ca3e: mov ecx, dword ptr [0x793394] */ r_ecx = R32((u32)(0x793394u));
    /* 0052ca44: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 0052ca47: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52ca49u); call_ind(t); }
    /* 0052ca49: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0052ca4c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052ca4e: je 0x52ca69 */ if (fZ) goto L_0052ca69;
L_0052ca50:; BB(0x0052ca50);
    /* 0052ca50: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052ca53: mov eax, dword ptr [edx + 0xc4] */ r_eax = R32((u32)(r_edx+0xc4u));
    /* 0052ca59: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052ca5c: mov ecx, dword ptr [ecx + 0xc4] */ r_ecx = R32((u32)(r_ecx+0xc4u));
    /* 0052ca62: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0052ca64: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0052ca67: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52ca69u); call_ind(t); }
L_0052ca69:; BB(0x0052ca69);
    /* 0052ca69: mov esp, ebp */ r_esp = r_ebp;
    /* 0052ca6b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052ca6c: ret  */ FN_RET(0x0052c7e0); r_esp += 4; return;
}

void f_0052ca70(void) /* sub_52CA70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0052ca70);
    /* 0052ca70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052ca71: mov ebp, esp */ r_ebp = r_esp;
    /* 0052ca73: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052ca75: push 0x6a4447 */ { u32 v = 0x6a4447u; r_esp -= 4; W32(r_esp, v); }
    /* 0052ca7a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0052ca80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052ca81: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0052ca84: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0052ca89: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0052ca8b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052ca8c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0052ca8f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0052ca95: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0052ca98: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0052ca9a: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x52ca9fu); f_00686d82();
    /* 0052ca9f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052caa2: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0052caa5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0052caac: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052cab0: je 0x52cac1 */ if (fZ) goto L_0052cac1;
L_0052cab2:; BB(0x0052cab2);
    /* 0052cab2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052cab4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0052cab7: call 0x52f7f0 */ r_esp -= 4; W32(r_esp, 0x52cabcu); f_0052f7f0();
    /* 0052cabc: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0052cabf: jmp 0x52cac8 */ goto L_0052cac8;
L_0052cac1:; BB(0x0052cac1);
    /* 0052cac1: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_0052cac8:; BB(0x0052cac8);
    /* 0052cac8: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052cacb: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0052cace: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0052cad5: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052cad8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052cad9: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0052cadc: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 0052cadf: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x52cae4u); f_005f5d50();
    /* 0052cae4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052cae7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0052caee: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0052caef: mov esp, ebp */ r_esp = r_ebp;
    /* 0052caf1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052caf2: ret  */ FN_RET(0x0052ca70); r_esp += 4; return;
}

void f_0052cb00(void) /* sub_52CB00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0052cb00);
    /* 0052cb00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052cb01: mov ebp, esp */ r_ebp = r_esp;
    /* 0052cb03: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052cb05: push 0x6a446d */ { u32 v = 0x6a446du; r_esp -= 4; W32(r_esp, v); }
    /* 0052cb0a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0052cb10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052cb11: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0052cb14: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0052cb19: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0052cb1b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052cb1c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0052cb1f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0052cb25: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0052cb28: push 0x30ef5a */ { u32 v = 0x30ef5au; r_esp -= 4; W32(r_esp, v); }
    /* 0052cb2d: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0052cb33: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x52cb38u); f_005f2ba0();
    /* 0052cb38: push 0x30ef5b */ { u32 v = 0x30ef5bu; r_esp -= 4; W32(r_esp, v); }
    /* 0052cb3d: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0052cb43: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x52cb48u); f_005f2ba0();
    /* 0052cb48: push 0x30ef5c */ { u32 v = 0x30ef5cu; r_esp -= 4; W32(r_esp, v); }
    /* 0052cb4d: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0052cb53: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x52cb58u); f_005f2ba0();
    /* 0052cb58: push 0x30ef5d */ { u32 v = 0x30ef5du; r_esp -= 4; W32(r_esp, v); }
    /* 0052cb5d: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0052cb63: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x52cb68u); f_005f2ba0();
    /* 0052cb68: push 0x30ef5e */ { u32 v = 0x30ef5eu; r_esp -= 4; W32(r_esp, v); }
    /* 0052cb6d: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0052cb73: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x52cb78u); f_005f2ba0();
    /* 0052cb78: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052cb7a: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052cb7d: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 0052cb80: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052cb81: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 0052cb87: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 0052cb8a: call 0x609870 */ r_esp -= 4; W32(r_esp, 0x52cb8fu); f_00609870();
    /* 0052cb8f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052cb91: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052cb94: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 0052cb97: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052cb98: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 0052cb9e: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 0052cba1: call 0x609870 */ r_esp -= 4; W32(r_esp, 0x52cba6u); f_00609870();
    /* 0052cba6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052cba8: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052cbab: mov ecx, dword ptr [eax + 0xc0] */ r_ecx = R32((u32)(r_eax+0xc0u));
    /* 0052cbb1: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x52cbb6u); f_005f5d50();
    /* 0052cbb6: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052cbb9: mov edx, dword ptr [ecx + 0xc0] */ r_edx = R32((u32)(r_ecx+0xc0u));
    /* 0052cbbf: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052cbc2: mov ecx, dword ptr [eax + 0xc0] */ r_ecx = R32((u32)(r_eax+0xc0u));
    /* 0052cbc8: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0052cbca: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0052cbcd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52cbcfu); call_ind(t); }
    /* 0052cbcf: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0052cbd6: jmp 0x52cbe1 */ goto L_0052cbe1;
L_0052cbd8:; BB(0x0052cbd8);
    /* 0052cbd8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052cbdb: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0052cbde: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0052cbe1:; BB(0x0052cbe1);
    /* 0052cbe1: cmp dword ptr [ebp - 0x10], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052cbe5: jge 0x52cc0d */ if ((fS==fO)) goto L_0052cc0d;
L_0052cbe7:; BB(0x0052cbe7);
    /* 0052cbe7: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052cbea: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052cbeb: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0052cbf0: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0052cbf3: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x52cbf8u); f_005fb300();
    /* 0052cbf8: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0052cbfb: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0052cbfe: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0052cc00: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0052cc03: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 0052cc09: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52cc0bu); call_ind(t); }
    /* 0052cc0b: jmp 0x52cbd8 */ goto L_0052cbd8;
L_0052cc0d:; BB(0x0052cc0d);
    /* 0052cc0d: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 0052cc0f: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x52cc14u); f_00686d82();
    /* 0052cc14: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052cc17: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0052cc1a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0052cc21: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052cc25: je 0x52cc34 */ if (fZ) goto L_0052cc34;
L_0052cc27:; BB(0x0052cc27);
    /* 0052cc27: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0052cc2a: call 0x52f930 */ r_esp -= 4; W32(r_esp, 0x52cc2fu); f_0052f930();
    /* 0052cc2f: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0052cc32: jmp 0x52cc3b */ goto L_0052cc3b;
L_0052cc34:; BB(0x0052cc34);
    /* 0052cc34: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0052cc3b:; BB(0x0052cc3b);
    /* 0052cc3b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0052cc3e: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0052cc41: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0052cc48: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0052cc4b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052cc4c: mov eax, dword ptr [0x793388] */ r_eax = R32((u32)(0x793388u));
    /* 0052cc51: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0052cc54: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x52cc59u); f_005fc420();
    /* 0052cc59: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052cc5c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0052cc63: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0052cc64: mov esp, ebp */ r_esp = r_ebp;
    /* 0052cc66: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052cc67: ret  */ FN_RET(0x0052cb00); r_esp += 4; return;
}

void f_0052cc70(void) /* sub_52CC70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0052cc70);
    /* 0052cc70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052cc71: mov ebp, esp */ r_ebp = r_esp;
    /* 0052cc73: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0052cc76: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0052cc7b: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0052cc7d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0052cc80: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0052cc83: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0052cc86: mov ecx, dword ptr [eax + 0xc4] */ r_ecx = R32((u32)(r_eax+0xc4u));
    /* 0052cc8c: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0052cc8f: mov eax, dword ptr [edx + 0xc4] */ r_eax = R32((u32)(r_edx+0xc4u));
    /* 0052cc95: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0052cc97: mov ecx, eax */ r_ecx = r_eax;
    /* 0052cc99: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0052cc9c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52cc9eu); call_ind(t); }
    /* 0052cc9e: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0052cca1: call 0x52d270 */ r_esp -= 4; W32(r_esp, 0x52cca6u); f_0052d270();
    /* 0052cca6: mov ecx, dword ptr [0x793394] */ r_ecx = R32((u32)(0x793394u));
    /* 0052ccac: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0052ccae: mov ecx, dword ptr [0x793394] */ r_ecx = R32((u32)(0x793394u));
    /* 0052ccb4: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 0052ccb7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52ccb9u); call_ind(t); }
    /* 0052ccb9: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0052ccbc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052ccbe: je 0x52cd1f */ if (fZ) goto L_0052cd1f;
L_0052ccc0:; BB(0x0052ccc0);
    /* 0052ccc0: mov edx, dword ptr [0x79338c] */ r_edx = R32((u32)(0x79338cu));
    /* 0052ccc6: movzx eax, byte ptr [edx + 0x7c] */ r_eax = (u32)R8((u32)(r_edx+0x7cu));
    /* 0052ccca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052cccc: je 0x52cd1f */ if (fZ) goto L_0052cd1f;
L_0052ccce:; BB(0x0052ccce);
    /* 0052ccce: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0052ccd4: mov edx, dword ptr [ecx + 0x4f14] */ r_edx = R32((u32)(r_ecx+0x4f14u));
    /* 0052ccda: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 0052ccdd: cmp dword ptr [ebp - 0x28], 9 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052cce1: jne 0x52cd1f */ if (!fZ) goto L_0052cd1f;
L_0052cce3:; BB(0x0052cce3);
    /* 0052cce3: lea eax, [ebp - 0x24] */ r_eax = (u32)(r_ebp+0xffffffdcu);
    /* 0052cce6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052cce7: mov ecx, dword ptr [0x79338c] */ r_ecx = R32((u32)(0x79338cu));
    /* 0052cced: mov edx, dword ptr [ecx + 0x78] */ r_edx = R32((u32)(r_ecx+0x78u));
    /* 0052ccf0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052ccf1: call 0x6311e0 */ r_esp -= 4; W32(r_esp, 0x52ccf6u); f_006311e0();
    /* 0052ccf6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052ccf9: mov ecx, dword ptr [0x79338c] */ r_ecx = R32((u32)(0x79338cu));
    /* 0052ccff: call 0x538440 */ r_esp -= 4; W32(r_esp, 0x52cd04u); f_00538440();
    /* 0052cd04: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0052cd07: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052cd09: je 0x52cd1f */ if (fZ) goto L_0052cd1f;
L_0052cd0b:; BB(0x0052cd0b);
    /* 0052cd0b: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0052cd0d: lea ecx, [ebp - 0x24] */ r_ecx = (u32)(r_ebp+0xffffffdcu);
    /* 0052cd10: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052cd11: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0052cd14: mov ecx, dword ptr [edx + 0xb0] */ r_ecx = R32((u32)(r_edx+0xb0u));
    /* 0052cd1a: call 0x531c50 */ r_esp -= 4; W32(r_esp, 0x52cd1fu); f_00531c50();
L_0052cd1f:; BB(0x0052cd1f);
    /* 0052cd1f: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0052cd22: call 0x52dca0 */ r_esp -= 4; W32(r_esp, 0x52cd27u); f_0052dca0();
    /* 0052cd27: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052cd2a: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0052cd2c: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x52cd31u); f_00686d72();
    /* 0052cd31: mov esp, ebp */ r_esp = r_ebp;
    /* 0052cd33: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052cd34: ret  */ FN_RET(0x0052cc70); r_esp += 4; return;
}

void f_0052cd40(void) /* sub_52CD40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0052cd40);
    /* 0052cd40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052cd41: mov ebp, esp */ r_ebp = r_esp;
    /* 0052cd43: sub esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0052cd46: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0052cd49: mov eax, dword ptr [0x79338c] */ r_eax = R32((u32)(0x79338cu));
    /* 0052cd4e: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0052cd51: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0052cd54: mov edx, dword ptr [0x79338c] */ r_edx = R32((u32)(0x79338cu));
    /* 0052cd5a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0052cd5c: mov ecx, dword ptr [0x79338c] */ r_ecx = R32((u32)(0x79338cu));
    /* 0052cd62: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0052cd65: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x52cd67u); call_ind(t); }
    /* 0052cd67: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052cd6a: jne 0x52ce0c */ if (!fZ) goto L_0052ce0c;
L_0052cd70:; BB(0x0052cd70);
    /* 0052cd70: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052cd72: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0052cd77: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0052cd7a: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x52cd7fu); f_005fb300();
    /* 0052cd7f: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0052cd82: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0052cd85: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0052cd87: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0052cd8a: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 0052cd90: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52cd92u); call_ind(t); }
    /* 0052cd92: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052cd94: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0052cd9a: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 0052cd9d: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x52cda2u); f_005fb300();
    /* 0052cda2: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0052cda5: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0052cda8: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0052cdaa: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0052cdad: mov edx, dword ptr [eax + 0xd0] */ r_edx = R32((u32)(r_eax+0xd0u));
    /* 0052cdb3: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x52cdb5u); call_ind(t); }
    /* 0052cdb5: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0052cdb7: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0052cdbc: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0052cdbf: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x52cdc4u); f_005fb300();
    /* 0052cdc4: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0052cdc7: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0052cdca: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0052cdcc: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0052cdcf: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 0052cdd5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52cdd7u); call_ind(t); }
    /* 0052cdd7: push 0x30ef5d */ { u32 v = 0x30ef5du; r_esp -= 4; W32(r_esp, v); }
    /* 0052cddc: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0052cde2: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x52cde7u); f_005f2ba0();
    /* 0052cde7: push 0x30ef5c */ { u32 v = 0x30ef5cu; r_esp -= 4; W32(r_esp, v); }
    /* 0052cdec: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0052cdf2: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x52cdf7u); f_005f2ba0();
    /* 0052cdf7: push 0x30ef5e */ { u32 v = 0x30ef5eu; r_esp -= 4; W32(r_esp, v); }
    /* 0052cdfc: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0052ce02: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x52ce07u); f_005f2ba0();
    /* 0052ce07: jmp 0x52ceaa */ goto L_0052ceaa;
L_0052ce0c:; BB(0x0052ce0c);
    /* 0052ce0c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052ce0e: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0052ce14: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 0052ce17: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x52ce1cu); f_005fb300();
    /* 0052ce1c: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0052ce1f: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0052ce22: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0052ce24: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0052ce27: mov edx, dword ptr [eax + 0xcc] */ r_edx = R32((u32)(r_eax+0xccu));
    /* 0052ce2d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x52ce2fu); call_ind(t); }
    /* 0052ce2f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052ce31: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0052ce36: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0052ce39: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x52ce3eu); f_005fb300();
    /* 0052ce3e: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0052ce41: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0052ce44: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0052ce46: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0052ce49: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 0052ce4f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52ce51u); call_ind(t); }
    /* 0052ce51: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0052ce53: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0052ce59: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 0052ce5c: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x52ce61u); f_005fb300();
    /* 0052ce61: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0052ce64: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0052ce67: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0052ce69: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0052ce6c: mov edx, dword ptr [eax + 0xcc] */ r_edx = R32((u32)(r_eax+0xccu));
    /* 0052ce72: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x52ce74u); call_ind(t); }
    /* 0052ce74: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052ce76: push 0x30ef5d */ { u32 v = 0x30ef5du; r_esp -= 4; W32(r_esp, v); }
    /* 0052ce7b: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0052ce81: call 0x5f2b20 */ r_esp -= 4; W32(r_esp, 0x52ce86u); f_005f2b20();
    /* 0052ce86: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052ce88: push 0x30ef5c */ { u32 v = 0x30ef5cu; r_esp -= 4; W32(r_esp, v); }
    /* 0052ce8d: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0052ce93: call 0x5f2b20 */ r_esp -= 4; W32(r_esp, 0x52ce98u); f_005f2b20();
    /* 0052ce98: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052ce9a: push 0x30ef5e */ { u32 v = 0x30ef5eu; r_esp -= 4; W32(r_esp, v); }
    /* 0052ce9f: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0052cea5: call 0x5f2b20 */ r_esp -= 4; W32(r_esp, 0x52ceaau); f_005f2b20();
L_0052ceaa:; BB(0x0052ceaa);
    /* 0052ceaa: mov eax, dword ptr [0x79338c] */ r_eax = R32((u32)(0x79338cu));
    /* 0052ceaf: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0052ceb2: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0052ceb5: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052ceb9: je 0x52cef2 */ if (fZ) goto L_0052cef2;
L_0052cebb:; BB(0x0052cebb);
    /* 0052cebb: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0052cebd: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0052cec3: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 0052cec6: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x52cecbu); f_005fb300();
    /* 0052cecb: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0052cece: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0052ced1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0052ced3: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0052ced6: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 0052cedc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52cedeu); call_ind(t); }
    /* 0052cede: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052cee0: push 0x30ef5b */ { u32 v = 0x30ef5bu; r_esp -= 4; W32(r_esp, v); }
    /* 0052cee5: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0052ceeb: call 0x5f2b20 */ r_esp -= 4; W32(r_esp, 0x52cef0u); f_005f2b20();
    /* 0052cef0: jmp 0x52cf25 */ goto L_0052cf25;
L_0052cef2:; BB(0x0052cef2);
    /* 0052cef2: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0052cef4: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0052cefa: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 0052cefd: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x52cf02u); f_005fb300();
    /* 0052cf02: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0052cf05: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0052cf08: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0052cf0a: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0052cf0d: mov edx, dword ptr [eax + 0xd0] */ r_edx = R32((u32)(r_eax+0xd0u));
    /* 0052cf13: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x52cf15u); call_ind(t); }
    /* 0052cf15: push 0x30ef5b */ { u32 v = 0x30ef5bu; r_esp -= 4; W32(r_esp, v); }
    /* 0052cf1a: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0052cf20: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x52cf25u); f_005f2ba0();
L_0052cf25:; BB(0x0052cf25);
    /* 0052cf25: mov eax, dword ptr [0x79338c] */ r_eax = R32((u32)(0x79338cu));
    /* 0052cf2a: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0052cf2d: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0052cf30: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052cf34: je 0x52cf6d */ if (fZ) goto L_0052cf6d;
L_0052cf36:; BB(0x0052cf36);
    /* 0052cf36: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0052cf38: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0052cf3e: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 0052cf41: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x52cf46u); f_005fb300();
    /* 0052cf46: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0052cf49: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0052cf4c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0052cf4e: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0052cf51: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 0052cf57: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52cf59u); call_ind(t); }
    /* 0052cf59: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052cf5b: push 0x30ef5a */ { u32 v = 0x30ef5au; r_esp -= 4; W32(r_esp, v); }
    /* 0052cf60: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0052cf66: call 0x5f2b20 */ r_esp -= 4; W32(r_esp, 0x52cf6bu); f_005f2b20();
    /* 0052cf6b: jmp 0x52cfa0 */ goto L_0052cfa0;
L_0052cf6d:; BB(0x0052cf6d);
    /* 0052cf6d: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0052cf6f: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0052cf75: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 0052cf78: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x52cf7du); f_005fb300();
    /* 0052cf7d: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0052cf80: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0052cf83: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0052cf85: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0052cf88: mov edx, dword ptr [eax + 0xd0] */ r_edx = R32((u32)(r_eax+0xd0u));
    /* 0052cf8e: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x52cf90u); call_ind(t); }
    /* 0052cf90: push 0x30ef5a */ { u32 v = 0x30ef5au; r_esp -= 4; W32(r_esp, v); }
    /* 0052cf95: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0052cf9b: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x52cfa0u); f_005f2ba0();
L_0052cfa0:; BB(0x0052cfa0);
    /* 0052cfa0: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0052cfa2: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0052cfa7: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0052cfaa: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x52cfafu); f_005fb300();
    /* 0052cfaf: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0052cfb2: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0052cfb5: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0052cfb7: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0052cfba: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 0052cfc0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52cfc2u); call_ind(t); }
    /* 0052cfc2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052cfc4: mov ecx, dword ptr [0x79338c] */ r_ecx = R32((u32)(0x79338cu));
    /* 0052cfca: call 0x5d0d60 */ r_esp -= 4; W32(r_esp, 0x52cfcfu); f_005d0d60();
    /* 0052cfcf: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0052cfd2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052cfd4: jne 0x52d0d6 */ if (!fZ) goto L_0052d0d6;
L_0052cfda:; BB(0x0052cfda);
    /* 0052cfda: mov edx, dword ptr [0x79338c] */ r_edx = R32((u32)(0x79338cu));
    /* 0052cfe0: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0052cfe3: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0052cfe6: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052cfea: jne 0x52d0d6 */ if (!fZ) goto L_0052d0d6;
L_0052cff0:; BB(0x0052cff0);
    /* 0052cff0: mov ecx, dword ptr [0x79338c] */ r_ecx = R32((u32)(0x79338cu));
    /* 0052cff6: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0052cff9: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0052cffc: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052d000: jne 0x52d0d6 */ if (!fZ) goto L_0052d0d6;
L_0052d006:; BB(0x0052d006);
    /* 0052d006: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052d008: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0052d00d: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0052d010: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x52d015u); f_005fb300();
    /* 0052d015: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 0052d018: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0052d01b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0052d01d: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0052d020: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 0052d026: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52d028u); call_ind(t); }
    /* 0052d028: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052d02a: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0052d030: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 0052d033: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x52d038u); f_005fb300();
    /* 0052d038: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 0052d03b: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 0052d03e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0052d040: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0052d043: mov edx, dword ptr [eax + 0xd0] */ r_edx = R32((u32)(r_eax+0xd0u));
    /* 0052d049: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x52d04bu); call_ind(t); }
    /* 0052d04b: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0052d04d: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0052d052: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0052d055: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x52d05au); f_005fb300();
    /* 0052d05a: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 0052d05d: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0052d060: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0052d062: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0052d065: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 0052d06b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52d06du); call_ind(t); }
    /* 0052d06d: push 0x30ef5d */ { u32 v = 0x30ef5du; r_esp -= 4; W32(r_esp, v); }
    /* 0052d072: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0052d078: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x52d07du); f_005f2ba0();
    /* 0052d07d: push 0x30ef5c */ { u32 v = 0x30ef5cu; r_esp -= 4; W32(r_esp, v); }
    /* 0052d082: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0052d088: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x52d08du); f_005f2ba0();
    /* 0052d08d: push 0x30ef5e */ { u32 v = 0x30ef5eu; r_esp -= 4; W32(r_esp, v); }
    /* 0052d092: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0052d098: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x52d09du); f_005f2ba0();
    /* 0052d09d: mov ecx, dword ptr [0x79338c] */ r_ecx = R32((u32)(0x79338cu));
    /* 0052d0a3: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0052d0a6: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0052d0a9: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052d0ad: jne 0x52d0d6 */ if (!fZ) goto L_0052d0d6;
L_0052d0af:; BB(0x0052d0af);
    /* 0052d0af: mov eax, dword ptr [0x79338c] */ r_eax = R32((u32)(0x79338cu));
    /* 0052d0b4: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0052d0b7: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0052d0ba: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052d0be: jne 0x52d0d6 */ if (!fZ) goto L_0052d0d6;
L_0052d0c0:; BB(0x0052d0c0);
    /* 0052d0c0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052d0c2: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x52d0c7u); f_005dcb00();
    /* 0052d0c7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052d0ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052d0cb: mov ecx, dword ptr [0x793388] */ r_ecx = R32((u32)(0x793388u));
    /* 0052d0d1: call 0x5dbb70 */ r_esp -= 4; W32(r_esp, 0x52d0d6u); f_005dbb70();
L_0052d0d6:; BB(0x0052d0d6);
    /* 0052d0d6: mov esp, ebp */ r_esp = r_ebp;
    /* 0052d0d8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052d0d9: ret  */ FN_RET(0x0052cd40); r_esp += 4; return;
}

