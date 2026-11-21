#include "protos.h"

void f_0053c860(void) /* ThreeCardPokerDealToScript::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053c860);
    /* 0053c860: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053c861: mov ebp, esp */ r_ebp = r_esp;
    /* 0053c863: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0053c865: push 0x6a4c89 */ { u32 v = 0x6a4c89u; r_esp -= 4; W32(r_esp, v); }
    /* 0053c86a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0053c870: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053c871: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053c872: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0053c877: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0053c879: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053c87a: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0053c87d: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0053c883: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0053c886: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0053c889: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053c88a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0053c88d: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x53c892u); f_005fc0d0();
    /* 0053c892: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0053c899: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0053c89c: mov dword ptr [ecx], 0x6c5d00 */ W32((u32)(r_ecx), 0x6c5d00u);
    /* 0053c8a2: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0053c8a5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053c8a8: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 0053c8ab: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0053c8ae: mov edx, dword ptr [ecx*4 + 0x737220] */ r_edx = R32((u32)(r_ecx*4+0x737220u));
    /* 0053c8b5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053c8b6: mov eax, dword ptr [0x7933f4] */ r_eax = R32((u32)(0x7933f4u));
    /* 0053c8bb: mov ecx, dword ptr [eax + 0x98] */ r_ecx = R32((u32)(r_eax+0x98u));
    /* 0053c8c1: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x53c8c6u); f_005eaf00();
    /* 0053c8c6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0053c8c9: mov edx, dword ptr [ecx*4 + 0x73720c] */ r_edx = R32((u32)(r_ecx*4+0x73720cu));
    /* 0053c8d0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053c8d1: mov eax, dword ptr [0x7933f4] */ r_eax = R32((u32)(0x7933f4u));
    /* 0053c8d6: mov ecx, dword ptr [eax + 0x94] */ r_ecx = R32((u32)(r_eax+0x94u));
    /* 0053c8dc: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x53c8e1u); f_005eaf00();
    /* 0053c8e1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053c8e3: mov ecx, dword ptr [0x7933f4] */ r_ecx = R32((u32)(0x7933f4u));
    /* 0053c8e9: mov edx, dword ptr [ecx + 0x98] */ r_edx = R32((u32)(r_ecx+0x98u));
    /* 0053c8ef: mov eax, dword ptr [0x7933f4] */ r_eax = R32((u32)(0x7933f4u));
    /* 0053c8f4: mov ecx, dword ptr [eax + 0x98] */ r_ecx = R32((u32)(r_eax+0x98u));
    /* 0053c8fa: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0053c8fc: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0053c902: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53c904u); call_ind(t); }
    /* 0053c904: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053c906: mov ecx, dword ptr [0x7933f4] */ r_ecx = R32((u32)(0x7933f4u));
    /* 0053c90c: mov edx, dword ptr [ecx + 0x94] */ r_edx = R32((u32)(r_ecx+0x94u));
    /* 0053c912: mov eax, dword ptr [0x7933f4] */ r_eax = R32((u32)(0x7933f4u));
    /* 0053c917: mov ecx, dword ptr [eax + 0x94] */ r_ecx = R32((u32)(r_eax+0x94u));
    /* 0053c91d: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0053c91f: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0053c925: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53c927u); call_ind(t); }
    /* 0053c927: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0053c92e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0053c931: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053c934: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0053c93b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0053c93c: mov esp, ebp */ r_esp = r_ebp;
    /* 0053c93e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053c93f: ret 8 */ FN_RET(0x0053c860); r_esp += 12; return;
}

void f_0053c950(void) /* ThreeCardPokerDealToScript::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053c950);
    /* 0053c950: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053c951: mov ebp, esp */ r_ebp = r_esp;
    /* 0053c953: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053c956: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0053c95b: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0053c95d: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0053c960: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0053c963: mov word ptr [ebp - 0x1c], 0x24 */ W16((u32)(r_ebp+0xffffffe4u), 0x24u);
    /* 0053c969: mov word ptr [ebp - 0x1a], 0x15 */ W16((u32)(r_ebp+0xffffffe6u), 0x15u);
    /* 0053c96f: mov word ptr [ebp - 0x18], 0x1c */ W16((u32)(r_ebp+0xffffffe8u), 0x1cu);
    /* 0053c975: mov word ptr [ebp - 0x16], 0x15 */ W16((u32)(r_ebp+0xffffffeau), 0x15u);
    /* 0053c97b: mov word ptr [ebp - 0x14], 0x13 */ W16((u32)(r_ebp+0xffffffecu), 0x13u);
    /* 0053c981: mov word ptr [ebp - 4], 3 */ W16((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0053c987: mov eax, dword ptr [0x7933f4] */ r_eax = R32((u32)(0x7933f4u));
    /* 0053c98c: mov ecx, dword ptr [eax + 0x98] */ r_ecx = R32((u32)(r_eax+0x98u));
    /* 0053c992: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0053c995: mov edx, dword ptr [0x7933f4] */ r_edx = R32((u32)(0x7933f4u));
    /* 0053c99b: mov eax, dword ptr [edx + 0x94] */ r_eax = R32((u32)(r_edx+0x94u));
    /* 0053c9a1: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0053c9a4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053c9a7: call 0x5fc360 */ r_esp -= 4; W32(r_esp, 0x53c9acu); f_005fc360();
    /* 0053c9ac: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0053c9af: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053c9b3: je 0x53c9ce */ if (fZ) goto L_0053c9ce;
L_0053c9b5:; BB(0x0053c9b5);
    /* 0053c9b5: cmp dword ptr [ebp - 0x24], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053c9b9: je 0x53ca57 */ if (fZ) goto L_0053ca57;
L_0053c9bf:; BB(0x0053c9bf);
    /* 0053c9bf: cmp dword ptr [ebp - 0x24], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053c9c3: je 0x53cc6c */ if (fZ) goto L_0053cc6c;
L_0053c9c9:; BB(0x0053c9c9);
    /* 0053c9c9: jmp 0x53cc97 */ goto L_0053cc97;
L_0053c9ce:; BB(0x0053c9ce);
    /* 0053c9ce: mov word ptr [0x7933e4], 0 */ W16((u32)(0x7933e4u), 0x0u);
    /* 0053c9d7: mov word ptr [0x7933e0], 0 */ W16((u32)(0x7933e0u), 0x0u);
    /* 0053c9e0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053c9e3: call 0x5eb240 */ r_esp -= 4; W32(r_esp, 0x53c9e8u); f_005eb240();
    /* 0053c9e8: mov word ptr [0x7933dc], ax */ W16((u32)(0x7933dcu), (u16)r_eax);
    /* 0053c9ee: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0053c9f1: call 0x5eb240 */ r_esp -= 4; W32(r_esp, 0x53c9f6u); f_005eb240();
    /* 0053c9f6: mov word ptr [0x7933d8], ax */ W16((u32)(0x7933d8u), (u16)r_eax);
    /* 0053c9fc: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 0053c9fe: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053ca01: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0053ca03: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053ca06: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0053ca09: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53ca0bu); call_ind(t); }
    /* 0053ca0b: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 0053ca0d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0053ca10: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0053ca12: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0053ca15: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0053ca18: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53ca1au); call_ind(t); }
    /* 0053ca1a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053ca1c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053ca1f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0053ca21: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053ca24: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0053ca2a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53ca2cu); call_ind(t); }
    /* 0053ca2c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053ca2e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0053ca31: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0053ca33: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0053ca36: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0053ca3c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53ca3eu); call_ind(t); }
    /* 0053ca3e: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0053ca42: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053ca43: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0053ca45: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053ca48: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0053ca4a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053ca4d: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0053ca50: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x53ca52u); call_ind(t); }
    /* 0053ca52: jmp 0x53cc97 */ goto L_0053cc97;
L_0053ca57:; BB(0x0053ca57);
    /* 0053ca57: mov ax, word ptr [0x7933e4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x7933e4u))) & 0xffffu);
    /* 0053ca5d: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0053ca61: mov word ptr [0x7933e4], ax */ W16((u32)(0x7933e4u), (u16)r_eax);
    /* 0053ca67: movsx ecx, word ptr [0x7933e4] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x7933e4u));
    /* 0053ca6e: movsx edx, word ptr [0x7933dc] */ r_edx = (u32)(i32)(i16)R16((u32)(0x7933dcu));
    /* 0053ca75: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053ca77: jg 0x53ca91 */ if ((!fZ&&fS==fO)) goto L_0053ca91;
L_0053ca79:; BB(0x0053ca79);
    /* 0053ca79: movsx eax, word ptr [0x7933e4] */ r_eax = (u32)(i32)(i16)R16((u32)(0x7933e4u));
    /* 0053ca80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053ca81: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053ca84: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0053ca86: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053ca89: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0053ca8f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53ca91u); call_ind(t); }
L_0053ca91:; BB(0x0053ca91);
    /* 0053ca91: movsx ecx, word ptr [0x7933e4] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x7933e4u));
    /* 0053ca98: movsx edx, word ptr [0x7933d8] */ r_edx = (u32)(i32)(i16)R16((u32)(0x7933d8u));
    /* 0053ca9f: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053caa1: jg 0x53cabb */ if ((!fZ&&fS==fO)) goto L_0053cabb;
L_0053caa3:; BB(0x0053caa3);
    /* 0053caa3: movsx eax, word ptr [0x7933e4] */ r_eax = (u32)(i32)(i16)R16((u32)(0x7933e4u));
    /* 0053caaa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053caab: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0053caae: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0053cab0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0053cab3: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0053cab9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53cabbu); call_ind(t); }
L_0053cabb:; BB(0x0053cabb);
    /* 0053cabb: movsx ecx, word ptr [0x7933e4] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x7933e4u));
    /* 0053cac2: cmp ecx, 9 */ {  u32 a = r_ecx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053cac5: jne 0x53cb0e */ if (!fZ) goto L_0053cb0e;
L_0053cac7:; BB(0x0053cac7);
    /* 0053cac7: mov edx, dword ptr [0x7933f4] */ r_edx = R32((u32)(0x7933f4u));
    /* 0053cacd: mov eax, dword ptr [edx + 0x9c] */ r_eax = R32((u32)(r_edx+0x9cu));
    /* 0053cad3: mov ecx, dword ptr [0x7933f4] */ r_ecx = R32((u32)(0x7933f4u));
    /* 0053cad9: mov ecx, dword ptr [ecx + 0x9c] */ r_ecx = R32((u32)(r_ecx+0x9cu));
    /* 0053cadf: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0053cae1: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0053cae4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53cae6u); call_ind(t); }
    /* 0053cae6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053cae8: mov ecx, dword ptr [0x7933f4] */ r_ecx = R32((u32)(0x7933f4u));
    /* 0053caee: mov edx, dword ptr [ecx + 0x9c] */ r_edx = R32((u32)(r_ecx+0x9cu));
    /* 0053caf4: mov eax, dword ptr [0x7933f4] */ r_eax = R32((u32)(0x7933f4u));
    /* 0053caf9: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 0053caff: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0053cb01: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0053cb07: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53cb09u); call_ind(t); }
    /* 0053cb09: jmp 0x53cc14 */ goto L_0053cc14;
L_0053cb0e:; BB(0x0053cb0e);
    /* 0053cb0e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053cb11: cmp dword ptr [ecx + 0x20], 0 */ {  u32 a = R32((u32)(r_ecx+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053cb15: je 0x53cb20 */ if (fZ) goto L_0053cb20;
L_0053cb17:; BB(0x0053cb17);
    /* 0053cb17: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053cb1a: cmp dword ptr [edx + 0x20], 2 */ {  u32 a = R32((u32)(r_edx+0x20u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053cb1e: jne 0x53cb4f */ if (!fZ) goto L_0053cb4f;
L_0053cb20:; BB(0x0053cb20);
    /* 0053cb20: movsx eax, word ptr [0x7933e4] */ r_eax = (u32)(i32)(i16)R16((u32)(0x7933e4u));
    /* 0053cb27: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053cb2a: jne 0x53cb4f */ if (!fZ) goto L_0053cb4f;
L_0053cb2c:; BB(0x0053cb2c);
    /* 0053cb2c: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 0053cb2e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053cb31: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0053cb33: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053cb36: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0053cb39: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53cb3bu); call_ind(t); }
    /* 0053cb3b: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 0053cb3d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0053cb40: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0053cb42: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0053cb45: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0053cb48: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53cb4au); call_ind(t); }
    /* 0053cb4a: jmp 0x53cc14 */ goto L_0053cc14;
L_0053cb4f:; BB(0x0053cb4f);
    /* 0053cb4f: movsx ecx, word ptr [0x7933e4] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x7933e4u));
    /* 0053cb56: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053cb59: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 0053cb5c: movsx edx, word ptr [ebp + eax*2 - 0x1c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+r_eax*2+0xffffffe4u));
    /* 0053cb61: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053cb63: jle 0x53cc14 */ if ((fZ||fS!=fO)) goto L_0053cc14;
L_0053cb69:; BB(0x0053cb69);
    /* 0053cb69: movsx eax, word ptr [0x7933e0] */ r_eax = (u32)(i32)(i16)R16((u32)(0x7933e0u));
    /* 0053cb70: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053cb73: jge 0x53cc14 */ if ((fS==fO)) goto L_0053cc14;
L_0053cb79:; BB(0x0053cb79);
    /* 0053cb79: movsx ecx, word ptr [0x7933e0] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x7933e0u));
    /* 0053cb80: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053cb83: jge 0x53cbf3 */ if ((fS==fO)) goto L_0053cbf3;
L_0053cb85:; BB(0x0053cb85);
    /* 0053cb85: movsx edx, word ptr [0x7933e0] */ r_edx = (u32)(i32)(i16)R16((u32)(0x7933e0u));
    /* 0053cb8c: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053cb8f: jne 0x53cbb3 */ if (!fZ) goto L_0053cbb3;
L_0053cb91:; BB(0x0053cb91);
    /* 0053cb91: mov eax, dword ptr [0x7933ec] */ r_eax = R32((u32)(0x7933ecu));
    /* 0053cb96: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0053cb99: call 0x6436c0 */ r_esp -= 4; W32(r_esp, 0x53cb9eu); f_006436c0();
    /* 0053cb9e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053cb9f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053cba2: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0053cba5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053cba6: mov ecx, dword ptr [0x7933ec] */ r_ecx = R32((u32)(0x7933ecu));
    /* 0053cbac: call 0x540bd0 */ r_esp -= 4; W32(r_esp, 0x53cbb1u); f_00540bd0();
    /* 0053cbb1: jmp 0x53cbf3 */ goto L_0053cbf3;
L_0053cbb3:; BB(0x0053cbb3);
    /* 0053cbb3: mov eax, dword ptr [0x7933ec] */ r_eax = R32((u32)(0x7933ecu));
    /* 0053cbb8: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0053cbbb: call 0x6436c0 */ r_esp -= 4; W32(r_esp, 0x53cbc0u); f_006436c0();
    /* 0053cbc0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053cbc1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053cbc4: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0053cbc7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053cbc8: mov ecx, dword ptr [0x7933ec] */ r_ecx = R32((u32)(0x7933ecu));
    /* 0053cbce: call 0x540bd0 */ r_esp -= 4; W32(r_esp, 0x53cbd3u); f_00540bd0();
    /* 0053cbd3: mov eax, dword ptr [0x7933ec] */ r_eax = R32((u32)(0x7933ecu));
    /* 0053cbd8: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0053cbdb: call 0x6436c0 */ r_esp -= 4; W32(r_esp, 0x53cbe0u); f_006436c0();
    /* 0053cbe0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053cbe1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053cbe4: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0053cbe7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053cbe8: mov ecx, dword ptr [0x7933ec] */ r_ecx = R32((u32)(0x7933ecu));
    /* 0053cbee: call 0x540bd0 */ r_esp -= 4; W32(r_esp, 0x53cbf3u); f_00540bd0();
L_0053cbf3:; BB(0x0053cbf3);
    /* 0053cbf3: mov ecx, dword ptr [0x7933f4] */ r_ecx = R32((u32)(0x7933f4u));
    /* 0053cbf9: call 0x53b1a0 */ r_esp -= 4; W32(r_esp, 0x53cbfeu); f_0053b1a0();
    /* 0053cbfe: movsx eax, word ptr [0x7933e0] */ r_eax = (u32)(i32)(i16)R16((u32)(0x7933e0u));
    /* 0053cc05: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0053cc08: mov word ptr [0x7933e0], ax */ W16((u32)(0x7933e0u), (u16)r_eax);
    /* 0053cc0e: mov word ptr [ebp - 4], 2 */ W16((u32)(r_ebp+0xfffffffcu), 0x2u);
L_0053cc14:; BB(0x0053cc14);
    /* 0053cc14: movsx ecx, word ptr [0x7933e4] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x7933e4u));
    /* 0053cc1b: movsx edx, word ptr [0x7933dc] */ r_edx = (u32)(i32)(i16)R16((u32)(0x7933dcu));
    /* 0053cc22: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053cc24: jl 0x53cc38 */ if ((fS!=fO)) goto L_0053cc38;
L_0053cc26:; BB(0x0053cc26);
    /* 0053cc26: movsx eax, word ptr [0x7933e4] */ r_eax = (u32)(i32)(i16)R16((u32)(0x7933e4u));
    /* 0053cc2d: movsx ecx, word ptr [0x7933d8] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x7933d8u));
    /* 0053cc34: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053cc36: jge 0x53cc49 */ if ((fS==fO)) goto L_0053cc49;
L_0053cc38:; BB(0x0053cc38);
    /* 0053cc38: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0053cc3a: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053cc3d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0053cc3f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053cc42: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0053cc45: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x53cc47u); call_ind(t); }
    /* 0053cc47: jmp 0x53cc58 */ goto L_0053cc58;
L_0053cc49:; BB(0x0053cc49);
    /* 0053cc49: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0053cc4b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053cc4e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0053cc50: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053cc53: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0053cc56: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53cc58u); call_ind(t); }
L_0053cc58:; BB(0x0053cc58);
    /* 0053cc58: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0053cc5c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053cc5d: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053cc60: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0053cc62: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053cc65: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 0053cc68: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x53cc6au); call_ind(t); }
    /* 0053cc6a: jmp 0x53cc97 */ goto L_0053cc97;
L_0053cc6c:; BB(0x0053cc6c);
    /* 0053cc6c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053cc6f: cmp dword ptr [eax + 0x10], 0 */ {  u32 a = R32((u32)(r_eax+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053cc73: je 0x53cc8a */ if (fZ) goto L_0053cc8a;
L_0053cc75:; BB(0x0053cc75);
    /* 0053cc75: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053cc77: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053cc7a: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 0053cc7d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053cc80: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 0053cc83: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0053cc85: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0053cc88: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53cc8au); call_ind(t); }
L_0053cc8a:; BB(0x0053cc8a);
    /* 0053cc8a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053cc8c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053cc8f: mov ecx, dword ptr [ecx + 0x10] */ r_ecx = R32((u32)(r_ecx+0x10u));
    /* 0053cc92: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x53cc97u); f_005fc420();
L_0053cc97:; BB(0x0053cc97);
    /* 0053cc97: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0053cc9a: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0053cc9c: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x53cca1u); f_00686d72();
    /* 0053cca1: mov esp, ebp */ r_esp = r_ebp;
    /* 0053cca3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053cca4: ret  */ FN_RET(0x0053c950); r_esp += 4; return;
}

