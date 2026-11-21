#include "protos.h"

void f_00448ca0(void) /* LetItRideDealToScript::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00448ca0);
    /* 00448ca0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00448ca1: mov ebp, esp */ r_ebp = r_esp;
    /* 00448ca3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00448ca5: push 0x69ed71 */ { u32 v = 0x69ed71u; r_esp -= 4; W32(r_esp, v); }
    /* 00448caa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00448cb0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00448cb1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00448cb2: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00448cb7: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00448cb9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00448cba: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00448cbd: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00448cc3: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00448cc6: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00448cc9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00448cca: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00448ccd: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x448cd2u); f_005fc0d0();
    /* 00448cd2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00448cd9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00448cdc: mov dword ptr [ecx], 0x6b8c70 */ W32((u32)(r_ecx), 0x6b8c70u);
    /* 00448ce2: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00448ce5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00448ce8: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 00448ceb: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00448cee: mov edx, dword ptr [ecx*4 + 0x713c3c] */ r_edx = R32((u32)(r_ecx*4+0x713c3cu));
    /* 00448cf5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00448cf6: mov eax, dword ptr [0x790718] */ r_eax = R32((u32)(0x790718u));
    /* 00448cfb: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 00448cfe: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x448d03u); f_005eaf00();
    /* 00448d03: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00448d06: mov edx, dword ptr [ecx*4 + 0x713c28] */ r_edx = R32((u32)(r_ecx*4+0x713c28u));
    /* 00448d0d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00448d0e: mov eax, dword ptr [0x790718] */ r_eax = R32((u32)(0x790718u));
    /* 00448d13: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 00448d16: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x448d1bu); f_005eaf00();
    /* 00448d1b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00448d1d: mov ecx, dword ptr [0x790718] */ r_ecx = R32((u32)(0x790718u));
    /* 00448d23: mov edx, dword ptr [ecx + 0x68] */ r_edx = R32((u32)(r_ecx+0x68u));
    /* 00448d26: mov eax, dword ptr [0x790718] */ r_eax = R32((u32)(0x790718u));
    /* 00448d2b: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 00448d2e: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00448d30: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00448d36: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x448d38u); call_ind(t); }
    /* 00448d38: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00448d3a: mov ecx, dword ptr [0x790718] */ r_ecx = R32((u32)(0x790718u));
    /* 00448d40: mov edx, dword ptr [ecx + 0x64] */ r_edx = R32((u32)(r_ecx+0x64u));
    /* 00448d43: mov eax, dword ptr [0x790718] */ r_eax = R32((u32)(0x790718u));
    /* 00448d48: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 00448d4b: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00448d4d: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00448d53: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x448d55u); call_ind(t); }
    /* 00448d55: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00448d5c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00448d5f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00448d62: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00448d69: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00448d6a: mov esp, ebp */ r_esp = r_ebp;
    /* 00448d6c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00448d6d: ret 8 */ FN_RET(0x00448ca0); r_esp += 12; return;
}

void f_00448d70(void) /* LetItRideDealToScript::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00448d70);
    /* 00448d70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00448d71: mov ebp, esp */ r_ebp = r_esp;
    /* 00448d73: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00448d76: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00448d7b: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00448d7d: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00448d80: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00448d83: mov word ptr [ebp - 0x1c], 0x24 */ W16((u32)(r_ebp+0xffffffe4u), 0x24u);
    /* 00448d89: mov word ptr [ebp - 0x1a], 0x15 */ W16((u32)(r_ebp+0xffffffe6u), 0x15u);
    /* 00448d8f: mov word ptr [ebp - 0x18], 0x1c */ W16((u32)(r_ebp+0xffffffe8u), 0x1cu);
    /* 00448d95: mov word ptr [ebp - 0x16], 0x15 */ W16((u32)(r_ebp+0xffffffeau), 0x15u);
    /* 00448d9b: mov word ptr [ebp - 0x14], 0x13 */ W16((u32)(r_ebp+0xffffffecu), 0x13u);
    /* 00448da1: mov word ptr [ebp - 4], 3 */ W16((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00448da7: mov eax, dword ptr [0x790718] */ r_eax = R32((u32)(0x790718u));
    /* 00448dac: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 00448daf: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00448db2: mov edx, dword ptr [0x790718] */ r_edx = R32((u32)(0x790718u));
    /* 00448db8: mov eax, dword ptr [edx + 0x64] */ r_eax = R32((u32)(r_edx+0x64u));
    /* 00448dbb: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00448dbe: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00448dc1: call 0x5fc360 */ r_esp -= 4; W32(r_esp, 0x448dc6u); f_005fc360();
    /* 00448dc6: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00448dc9: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00448dcd: je 0x448de8 */ if (fZ) goto L_00448de8;
L_00448dcf:; BB(0x00448dcf);
    /* 00448dcf: cmp dword ptr [ebp - 0x24], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00448dd3: je 0x448e71 */ if (fZ) goto L_00448e71;
L_00448dd9:; BB(0x00448dd9);
    /* 00448dd9: cmp dword ptr [ebp - 0x24], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00448ddd: je 0x44907a */ if (fZ) goto L_0044907a;
L_00448de3:; BB(0x00448de3);
    /* 00448de3: jmp 0x4490a5 */ goto L_004490a5;
L_00448de8:; BB(0x00448de8);
    /* 00448de8: mov word ptr [0x790708], 0 */ W16((u32)(0x790708u), 0x0u);
    /* 00448df1: mov word ptr [0x790704], 0 */ W16((u32)(0x790704u), 0x0u);
    /* 00448dfa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00448dfd: call 0x5eb240 */ r_esp -= 4; W32(r_esp, 0x448e02u); f_005eb240();
    /* 00448e02: mov word ptr [0x790700], ax */ W16((u32)(0x790700u), (u16)r_eax);
    /* 00448e08: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00448e0b: call 0x5eb240 */ r_esp -= 4; W32(r_esp, 0x448e10u); f_005eb240();
    /* 00448e10: mov word ptr [0x7906fc], ax */ W16((u32)(0x7906fcu), (u16)r_eax);
    /* 00448e16: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 00448e18: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00448e1b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00448e1d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00448e20: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00448e23: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x448e25u); call_ind(t); }
    /* 00448e25: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 00448e27: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00448e2a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00448e2c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00448e2f: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00448e32: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x448e34u); call_ind(t); }
    /* 00448e34: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00448e36: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00448e39: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00448e3b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00448e3e: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00448e44: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x448e46u); call_ind(t); }
    /* 00448e46: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00448e48: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00448e4b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00448e4d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00448e50: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00448e56: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x448e58u); call_ind(t); }
    /* 00448e58: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00448e5c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00448e5d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00448e5f: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00448e62: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00448e64: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00448e67: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00448e6a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x448e6cu); call_ind(t); }
    /* 00448e6c: jmp 0x4490a5 */ goto L_004490a5;
L_00448e71:; BB(0x00448e71);
    /* 00448e71: mov ax, word ptr [0x790708] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x790708u))) & 0xffffu);
    /* 00448e77: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00448e7b: mov word ptr [0x790708], ax */ W16((u32)(0x790708u), (u16)r_eax);
    /* 00448e81: movsx ecx, word ptr [0x790708] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x790708u));
    /* 00448e88: movsx edx, word ptr [0x790700] */ r_edx = (u32)(i32)(i16)R16((u32)(0x790700u));
    /* 00448e8f: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00448e91: jg 0x448eab */ if ((!fZ&&fS==fO)) goto L_00448eab;
L_00448e93:; BB(0x00448e93);
    /* 00448e93: movsx eax, word ptr [0x790708] */ r_eax = (u32)(i32)(i16)R16((u32)(0x790708u));
    /* 00448e9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00448e9b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00448e9e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00448ea0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00448ea3: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00448ea9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x448eabu); call_ind(t); }
L_00448eab:; BB(0x00448eab);
    /* 00448eab: movsx ecx, word ptr [0x790708] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x790708u));
    /* 00448eb2: movsx edx, word ptr [0x7906fc] */ r_edx = (u32)(i32)(i16)R16((u32)(0x7906fcu));
    /* 00448eb9: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00448ebb: jg 0x448ed5 */ if ((!fZ&&fS==fO)) goto L_00448ed5;
L_00448ebd:; BB(0x00448ebd);
    /* 00448ebd: movsx eax, word ptr [0x790708] */ r_eax = (u32)(i32)(i16)R16((u32)(0x790708u));
    /* 00448ec4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00448ec5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00448ec8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00448eca: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00448ecd: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00448ed3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x448ed5u); call_ind(t); }
L_00448ed5:; BB(0x00448ed5);
    /* 00448ed5: movsx ecx, word ptr [0x790708] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x790708u));
    /* 00448edc: cmp ecx, 9 */ {  u32 a = r_ecx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00448edf: jne 0x448f1c */ if (!fZ) goto L_00448f1c;
L_00448ee1:; BB(0x00448ee1);
    /* 00448ee1: mov edx, dword ptr [0x790718] */ r_edx = R32((u32)(0x790718u));
    /* 00448ee7: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00448eea: mov ecx, dword ptr [0x790718] */ r_ecx = R32((u32)(0x790718u));
    /* 00448ef0: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 00448ef3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00448ef5: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00448ef8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x448efau); call_ind(t); }
    /* 00448efa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00448efc: mov ecx, dword ptr [0x790718] */ r_ecx = R32((u32)(0x790718u));
    /* 00448f02: mov edx, dword ptr [ecx + 0x6c] */ r_edx = R32((u32)(r_ecx+0x6cu));
    /* 00448f05: mov eax, dword ptr [0x790718] */ r_eax = R32((u32)(0x790718u));
    /* 00448f0a: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 00448f0d: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00448f0f: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00448f15: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x448f17u); call_ind(t); }
    /* 00448f17: jmp 0x449022 */ goto L_00449022;
L_00448f1c:; BB(0x00448f1c);
    /* 00448f1c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00448f1f: cmp dword ptr [ecx + 0x20], 0 */ {  u32 a = R32((u32)(r_ecx+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00448f23: je 0x448f2e */ if (fZ) goto L_00448f2e;
L_00448f25:; BB(0x00448f25);
    /* 00448f25: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00448f28: cmp dword ptr [edx + 0x20], 2 */ {  u32 a = R32((u32)(r_edx+0x20u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00448f2c: jne 0x448f5d */ if (!fZ) goto L_00448f5d;
L_00448f2e:; BB(0x00448f2e);
    /* 00448f2e: movsx eax, word ptr [0x790708] */ r_eax = (u32)(i32)(i16)R16((u32)(0x790708u));
    /* 00448f35: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00448f38: jne 0x448f5d */ if (!fZ) goto L_00448f5d;
L_00448f3a:; BB(0x00448f3a);
    /* 00448f3a: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 00448f3c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00448f3f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00448f41: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00448f44: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00448f47: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x448f49u); call_ind(t); }
    /* 00448f49: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 00448f4b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00448f4e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00448f50: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00448f53: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00448f56: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x448f58u); call_ind(t); }
    /* 00448f58: jmp 0x449022 */ goto L_00449022;
L_00448f5d:; BB(0x00448f5d);
    /* 00448f5d: movsx ecx, word ptr [0x790708] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x790708u));
    /* 00448f64: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00448f67: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 00448f6a: movsx edx, word ptr [ebp + eax*2 - 0x1c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+r_eax*2+0xffffffe4u));
    /* 00448f6f: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00448f71: jle 0x449022 */ if ((fZ||fS!=fO)) goto L_00449022;
L_00448f77:; BB(0x00448f77);
    /* 00448f77: movsx eax, word ptr [0x790704] */ r_eax = (u32)(i32)(i16)R16((u32)(0x790704u));
    /* 00448f7e: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00448f81: jge 0x449022 */ if ((fS==fO)) goto L_00449022;
L_00448f87:; BB(0x00448f87);
    /* 00448f87: movsx ecx, word ptr [0x790704] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x790704u));
    /* 00448f8e: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00448f91: jge 0x449001 */ if ((fS==fO)) goto L_00449001;
L_00448f93:; BB(0x00448f93);
    /* 00448f93: movsx edx, word ptr [0x790704] */ r_edx = (u32)(i32)(i16)R16((u32)(0x790704u));
    /* 00448f9a: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00448f9d: jne 0x448fc1 */ if (!fZ) goto L_00448fc1;
L_00448f9f:; BB(0x00448f9f);
    /* 00448f9f: mov eax, dword ptr [0x790710] */ r_eax = R32((u32)(0x790710u));
    /* 00448fa4: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00448fa7: call 0x6436c0 */ r_esp -= 4; W32(r_esp, 0x448facu); f_006436c0();
    /* 00448fac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00448fad: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00448fb0: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00448fb3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00448fb4: mov ecx, dword ptr [0x790710] */ r_ecx = R32((u32)(0x790710u));
    /* 00448fba: call 0x44cda0 */ r_esp -= 4; W32(r_esp, 0x448fbfu); f_0044cda0();
    /* 00448fbf: jmp 0x449001 */ goto L_00449001;
L_00448fc1:; BB(0x00448fc1);
    /* 00448fc1: mov eax, dword ptr [0x790710] */ r_eax = R32((u32)(0x790710u));
    /* 00448fc6: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00448fc9: call 0x6436c0 */ r_esp -= 4; W32(r_esp, 0x448fceu); f_006436c0();
    /* 00448fce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00448fcf: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00448fd2: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00448fd5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00448fd6: mov ecx, dword ptr [0x790710] */ r_ecx = R32((u32)(0x790710u));
    /* 00448fdc: call 0x44cda0 */ r_esp -= 4; W32(r_esp, 0x448fe1u); f_0044cda0();
    /* 00448fe1: mov eax, dword ptr [0x790710] */ r_eax = R32((u32)(0x790710u));
    /* 00448fe6: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00448fe9: call 0x6436c0 */ r_esp -= 4; W32(r_esp, 0x448feeu); f_006436c0();
    /* 00448fee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00448fef: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00448ff2: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00448ff5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00448ff6: mov ecx, dword ptr [0x790710] */ r_ecx = R32((u32)(0x790710u));
    /* 00448ffc: call 0x44cda0 */ r_esp -= 4; W32(r_esp, 0x449001u); f_0044cda0();
L_00449001:; BB(0x00449001);
    /* 00449001: mov ecx, dword ptr [0x790718] */ r_ecx = R32((u32)(0x790718u));
    /* 00449007: call 0x4474b0 */ r_esp -= 4; W32(r_esp, 0x44900cu); f_004474b0();
    /* 0044900c: movsx eax, word ptr [0x790704] */ r_eax = (u32)(i32)(i16)R16((u32)(0x790704u));
    /* 00449013: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00449016: mov word ptr [0x790704], ax */ W16((u32)(0x790704u), (u16)r_eax);
    /* 0044901c: mov word ptr [ebp - 4], 2 */ W16((u32)(r_ebp+0xfffffffcu), 0x2u);
L_00449022:; BB(0x00449022);
    /* 00449022: movsx ecx, word ptr [0x790708] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x790708u));
    /* 00449029: movsx edx, word ptr [0x790700] */ r_edx = (u32)(i32)(i16)R16((u32)(0x790700u));
    /* 00449030: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00449032: jl 0x449046 */ if ((fS!=fO)) goto L_00449046;
L_00449034:; BB(0x00449034);
    /* 00449034: movsx eax, word ptr [0x790708] */ r_eax = (u32)(i32)(i16)R16((u32)(0x790708u));
    /* 0044903b: movsx ecx, word ptr [0x7906fc] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x7906fcu));
    /* 00449042: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00449044: jge 0x449057 */ if ((fS==fO)) goto L_00449057;
L_00449046:; BB(0x00449046);
    /* 00449046: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00449048: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044904b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0044904d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00449050: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00449053: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x449055u); call_ind(t); }
    /* 00449055: jmp 0x449066 */ goto L_00449066;
L_00449057:; BB(0x00449057);
    /* 00449057: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00449059: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044905c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0044905e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00449061: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00449064: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x449066u); call_ind(t); }
L_00449066:; BB(0x00449066);
    /* 00449066: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0044906a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044906b: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044906e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00449070: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00449073: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 00449076: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x449078u); call_ind(t); }
    /* 00449078: jmp 0x4490a5 */ goto L_004490a5;
L_0044907a:; BB(0x0044907a);
    /* 0044907a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044907d: cmp dword ptr [eax + 0x10], 0 */ {  u32 a = R32((u32)(r_eax+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00449081: je 0x449098 */ if (fZ) goto L_00449098;
L_00449083:; BB(0x00449083);
    /* 00449083: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00449085: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00449088: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 0044908b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044908e: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 00449091: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00449093: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00449096: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x449098u); call_ind(t); }
L_00449098:; BB(0x00449098);
    /* 00449098: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044909a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044909d: mov ecx, dword ptr [ecx + 0x10] */ r_ecx = R32((u32)(r_ecx+0x10u));
    /* 004490a0: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x4490a5u); f_005fc420();
L_004490a5:; BB(0x004490a5);
    /* 004490a5: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004490a8: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004490aa: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x4490afu); f_00686d72();
    /* 004490af: mov esp, ebp */ r_esp = r_ebp;
    /* 004490b1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004490b2: ret  */ FN_RET(0x00448d70); r_esp += 4; return;
}

