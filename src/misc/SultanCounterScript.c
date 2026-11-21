#include "protos.h"

void f_005778f0(void) /* SultanCounterScript::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005778f0);
    /* 005778f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005778f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005778f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005778f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005778f7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005778f9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005778fc: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x577901u); f_005fc0d0();
    /* 00577901: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00577904: mov dword ptr [eax], 0x6cb110 */ W32((u32)(r_eax), 0x6cb110u);
    /* 0057790a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057790d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00577910: mov dword ptr [ecx + 0x20], edx */ W32((u32)(r_ecx+0x20u), r_edx);
    /* 00577913: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00577916: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00577919: mov dword ptr [eax + 0x30], ecx */ W32((u32)(r_eax+0x30u), r_ecx);
    /* 0057791c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057791f: mov dword ptr [edx + 0x24], 1 */ W32((u32)(r_edx+0x24u), 0x1u);
    /* 00577926: call dword ptr [0x6b20bc] */ { u32 t = R32((u32)(0x6b20bcu)); r_esp -= 4; W32(r_esp, 0x57792cu); call_ind(t); }
    /* 0057792c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057792f: mov dword ptr [ecx + 0x28], eax */ W32((u32)(r_ecx+0x28u), r_eax);
    /* 00577932: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00577935: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 00577938: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057793b: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0057793e: cmp edx, dword ptr [eax + 0x188] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x188u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00577944: jge 0x57794f */ if ((fS==fO)) goto L_0057794f;
L_00577946:; BB(0x00577946);
    /* 00577946: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00577949: mov byte ptr [eax + 0x2c], 0 */ W8((u32)(r_eax+0x2cu), 0x0u);
    /* 0057794d: jmp 0x577956 */ goto L_00577956;
L_0057794f:; BB(0x0057794f);
    /* 0057794f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00577952: mov byte ptr [ecx + 0x2c], 1 */ W8((u32)(r_ecx+0x2cu), 0x1u);
L_00577956:; BB(0x00577956);
    /* 00577956: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00577959: mov esp, ebp */ r_esp = r_ebp;
    /* 0057795b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057795c: ret 8 */ FN_RET(0x005778f0); r_esp += 12; return;
}

void f_00577960(void) /* SultanCounterScript::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00577960);
    /* 00577960: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00577961: mov ebp, esp */ r_ebp = r_esp;
    /* 00577963: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00577964: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00577967: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057796a: mov dword ptr [eax], 0x6cb110 */ W32((u32)(r_eax), 0x6cb110u);
    /* 00577970: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00577973: mov dword ptr [ecx + 0x30], 0 */ W32((u32)(r_ecx+0x30u), 0x0u);
    /* 0057797a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057797d: call 0x5fc150 */ r_esp -= 4; W32(r_esp, 0x577982u); f_005fc150();
    /* 00577982: mov esp, ebp */ r_esp = r_ebp;
    /* 00577984: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00577985: ret  */ FN_RET(0x00577960); r_esp += 4; return;
}

void f_00577990(void) /* SultanCounterScript::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00577990);
    /* 00577990: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00577991: mov ebp, esp */ r_ebp = r_esp;
    /* 00577993: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00577996: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00577999: call dword ptr [0x6b20bc] */ { u32 t = R32((u32)(0x6b20bcu)); r_esp -= 4; W32(r_esp, 0x57799fu); call_ind(t); }
    /* 0057799f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005779a2: mov byte ptr [ebp - 0xd], 0 */ W8((u32)(r_ebp+0xfffffff3u), 0x0u);
    /* 005779a6: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005779a9: call 0x5fc360 */ r_esp -= 4; W32(r_esp, 0x5779aeu); f_005fc360();
    /* 005779ae: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005779b1: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005779b5: je 0x5779bc */ if (fZ) goto L_005779bc;
L_005779b7:; BB(0x005779b7);
    /* 005779b7: jmp 0x577b52 */ goto L_00577b52;
L_005779bc:; BB(0x005779bc);
    /* 005779bc: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005779bf: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 005779c2: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005779c5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005779cc: jmp 0x5779d7 */ goto L_005779d7;
L_005779ce:; BB(0x005779ce);
    /* 005779ce: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005779d1: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005779d4: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_005779d7:; BB(0x005779d7);
    /* 005779d7: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005779da: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005779dd: cmp ecx, dword ptr [eax + 0x24] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x24u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005779e0: jge 0x577ad8 */ if ((fS==fO)) goto L_00577ad8;
L_005779e6:; BB(0x005779e6);
    /* 005779e6: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005779e9: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 005779ec: mov ecx, dword ptr [eax + 0x18c] */ r_ecx = R32((u32)(r_eax+0x18cu));
    /* 005779f2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005779f5: mov ecx, dword ptr [ecx + edx*4] */ r_ecx = R32((u32)(r_ecx+r_edx*4));
    /* 005779f8: call 0x5eb220 */ r_esp -= 4; W32(r_esp, 0x5779fdu); f_005eb220();
    /* 005779fd: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00577a00: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00577a03: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00577a04: mov ecx, 0xa */ r_ecx = 0xau;
    /* 00577a09: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00577a09, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00577a09, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00577a0b: imul edx, edx, 3 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x3u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00577a0e: cmp dword ptr [ebp - 0xc], edx */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00577a11: je 0x577a8a */ if (fZ) goto L_00577a8a;
L_00577a13:; BB(0x00577a13);
    /* 00577a13: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00577a16: movzx eax, byte ptr [edx + 0x2c] */ r_eax = (u32)R8((u32)(r_edx+0x2cu));
    /* 00577a1a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00577a1c: je 0x577a29 */ if (fZ) goto L_00577a29;
L_00577a1e:; BB(0x00577a1e);
    /* 00577a1e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00577a21: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00577a24: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00577a27: jmp 0x577a32 */ goto L_00577a32;
L_00577a29:; BB(0x00577a29);
    /* 00577a29: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00577a2c: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00577a2f: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
L_00577a32:; BB(0x00577a32);
    /* 00577a32: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00577a35: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00577a38: cmp dword ptr [ebp - 0xc], 0x1e */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00577a3c: jne 0x577a45 */ if (!fZ) goto L_00577a45;
L_00577a3e:; BB(0x00577a3e);
    /* 00577a3e: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
L_00577a45:; BB(0x00577a45);
    /* 00577a45: cmp dword ptr [ebp - 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00577a49: jne 0x577a52 */ if (!fZ) goto L_00577a52;
L_00577a4b:; BB(0x00577a4b);
    /* 00577a4b: mov dword ptr [ebp - 0xc], 0x1d */ W32((u32)(r_ebp+0xfffffff4u), 0x1du);
L_00577a52:; BB(0x00577a52);
    /* 00577a52: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00577a55: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00577a56: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00577a59: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 00577a5c: mov ecx, dword ptr [eax + 0x18c] */ r_ecx = R32((u32)(r_eax+0x18cu));
    /* 00577a62: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00577a65: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 00577a68: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00577a6b: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 00577a6e: mov ecx, dword ptr [edx + 0x18c] */ r_ecx = R32((u32)(r_edx+0x18cu));
    /* 00577a74: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00577a77: mov ecx, dword ptr [ecx + edx*4] */ r_ecx = R32((u32)(r_ecx+r_edx*4));
    /* 00577a7a: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00577a7c: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 00577a82: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x577a84u); call_ind(t); }
    /* 00577a84: mov byte ptr [ebp - 0xd], 1 */ W8((u32)(r_ebp+0xfffffff3u), 0x1u);
    /* 00577a88: jmp 0x577ac5 */ goto L_00577ac5;
L_00577a8a:; BB(0x00577a8a);
    /* 00577a8a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00577a8d: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 00577a90: movsx edx, word ptr [ecx + 0x184] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x184u));
    /* 00577a97: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00577a9a: cmp dword ptr [eax + 0x24], edx */ {  u32 a = R32((u32)(r_eax+0x24u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00577a9d: jge 0x577ac5 */ if ((fS==fO)) goto L_00577ac5;
L_00577a9f:; BB(0x00577a9f);
    /* 00577a9f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00577aa2: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00577aa5: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00577aa8: cmp dword ptr [edx + 0x24], ecx */ {  u32 a = R32((u32)(r_edx+0x24u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00577aab: jne 0x577ac5 */ if (!fZ) goto L_00577ac5;
L_00577aad:; BB(0x00577aad);
    /* 00577aad: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00577ab0: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 00577ab3: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00577ab6: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00577ab9: mov dword ptr [edx + 0x24], ecx */ W32((u32)(r_edx+0x24u), r_ecx);
    /* 00577abc: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00577abf: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00577ac2: mov dword ptr [eax + 0x28], ecx */ W32((u32)(r_eax+0x28u), r_ecx);
L_00577ac5:; BB(0x00577ac5);
    /* 00577ac5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00577ac8: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00577ac9: mov ecx, 0xa */ r_ecx = 0xau;
    /* 00577ace: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00577ace, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00577ace, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00577ad0: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00577ad3: jmp 0x5779ce */ goto L_005779ce;
L_00577ad8:; BB(0x00577ad8);
    /* 00577ad8: movzx edx, byte ptr [ebp - 0xd] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffff3u));
    /* 00577adc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00577ade: je 0x577b3e */ if (fZ) goto L_00577b3e;
L_00577ae0:; BB(0x00577ae0);
    /* 00577ae0: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00577ae3: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 00577ae6: add ecx, 0x12c */ {  u32 a = r_ecx; u32 b = 0x12cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00577aec: cmp dword ptr [ebp - 0x14], ecx */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00577aef: jbe 0x577b1e */ if ((fC||fZ)) goto L_00577b1e;
L_00577af1:; BB(0x00577af1);
    /* 00577af1: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00577af4: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 00577af7: movsx ecx, word ptr [eax + 0x184] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x184u));
    /* 00577afe: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00577b01: cmp dword ptr [edx + 0x24], ecx */ {  u32 a = R32((u32)(r_edx+0x24u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00577b04: jge 0x577b15 */ if ((fS==fO)) goto L_00577b15;
L_00577b06:; BB(0x00577b06);
    /* 00577b06: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00577b09: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 00577b0c: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00577b0f: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00577b12: mov dword ptr [edx + 0x24], ecx */ W32((u32)(r_edx+0x24u), r_ecx);
L_00577b15:; BB(0x00577b15);
    /* 00577b15: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00577b18: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00577b1b: mov dword ptr [eax + 0x28], ecx */ W32((u32)(r_eax+0x28u), r_ecx);
L_00577b1e:; BB(0x00577b1e);
    /* 00577b1e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00577b20: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00577b23: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00577b25: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00577b28: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00577b2b: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x577b2du); call_ind(t); }
    /* 00577b2d: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00577b2f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00577b32: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00577b34: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00577b37: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00577b3a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x577b3cu); call_ind(t); }
    /* 00577b3c: jmp 0x577b50 */ goto L_00577b50;
L_00577b3e:; BB(0x00577b3e);
    /* 00577b3e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00577b41: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 00577b44: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00577b47: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00577b4a: mov dword ptr [edx + 0x188], ecx */ W32((u32)(r_edx+0x188u), r_ecx);
L_00577b50:; BB(0x00577b50);
    /* 00577b50: jmp 0x577b6d */ goto L_00577b6d;
L_00577b52:; BB(0x00577b52);
    /* 00577b52: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00577b54: jne 0x577b6d */ if (!fZ) goto L_00577b6d;
L_00577b56:; BB(0x00577b56);
    /* 00577b56: push 0x554 */ { u32 v = 0x554u; r_esp -= 4; W32(r_esp, v); }
    /* 00577b5b: push 0x6cad74 */ { u32 v = 0x6cad74u; r_esp -= 4; W32(r_esp, v); }
    /* 00577b60: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00577b65: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x577b6au); f_005e9f20();
    /* 00577b6a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00577b6d:; BB(0x00577b6d);
    /* 00577b6d: mov esp, ebp */ r_esp = r_ebp;
    /* 00577b6f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00577b70: ret  */ FN_RET(0x00577990); r_esp += 4; return;
}

