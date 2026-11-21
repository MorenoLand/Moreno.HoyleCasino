#include "protos.h"

void f_00630030(void) /* sub_630030 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00630030);
    /* 00630030: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00630031: mov ebp, esp */ r_ebp = r_esp;
    /* 00630033: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00630039: call 0x5f3fe0 */ r_esp -= 4; W32(r_esp, 0x63003eu); f_005f3fe0();
    /* 0063003e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00630040: je 0x630047 */ if (fZ) goto L_00630047;
L_00630042:; BB(0x00630042);
    /* 00630042: jmp 0x6300c7 */ goto L_006300c7;
L_00630047:; BB(0x00630047);
    /* 00630047: mov al, byte ptr [0x7960d4] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0x7960d4u))) & 0xffu);
    /* 0063004c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063004d: push 0x6d9d50 */ { u32 v = 0x6d9d50u; r_esp -= 4; W32(r_esp, v); }
    /* 00630052: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 00630058: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 0063005b: call 0x607900 */ r_esp -= 4; W32(r_esp, 0x630060u); f_00607900();
    /* 00630060: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00630063: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00630065: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 00630068: mov byte ptr [0x7960d4], al */ W8((u32)(0x7960d4u), (u8)r_eax);
    /* 0063006d: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00630073: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x630078u); f_005f3bf0();
    /* 00630078: cmp eax, 0x44c */ {  u32 a = r_eax; u32 b = 0x44cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063007d: je 0x630091 */ if (fZ) goto L_00630091;
L_0063007f:; BB(0x0063007f);
    /* 0063007f: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00630085: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x63008au); f_005f3bf0();
    /* 0063008a: cmp eax, 0x3e9 */ {  u32 a = r_eax; u32 b = 0x3e9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063008f: jne 0x6300a8 */ if (!fZ) goto L_006300a8;
L_00630091:; BB(0x00630091);
    /* 00630091: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00630093: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00630099: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0063009b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006300a1: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 006300a4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6300a6u); call_ind(t); }
    /* 006300a6: jmp 0x6300c7 */ goto L_006300c7;
L_006300a8:; BB(0x006300a8);
    /* 006300a8: movzx ecx, byte ptr [0x7960d4] */ r_ecx = (u32)R8((u32)(0x7960d4u));
    /* 006300af: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006300b1: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 006300b4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006300b5: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 006300ba: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006300bc: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006300c2: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 006300c5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6300c7u); call_ind(t); }
L_006300c7:; BB(0x006300c7);
    /* 006300c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006300c8: ret  */ FN_RET(0x00630030); r_esp += 4; return;
}

void f_006300d0(void) /* sub_6300D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006300d0);
    /* 006300d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006300d1: mov ebp, esp */ r_ebp = r_esp;
    /* 006300d3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006300d6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006300d7: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006300dd: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006300df: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006300e5: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 006300e8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6300eau); call_ind(t); }
    /* 006300ea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006300eb: ret  */ FN_RET(0x006300d0); r_esp += 4; return;
}

void f_006300f0(void) /* sub_6300F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006300f0);
    /* 006300f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006300f1: mov ebp, esp */ r_ebp = r_esp;
    /* 006300f3: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 006300f8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006300fa: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00630100: mov eax, dword ptr [edx + 0x384] */ r_eax = R32((u32)(r_edx+0x384u));
    /* 00630106: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x630108u); call_ind(t); }
    /* 00630108: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00630109: ret  */ FN_RET(0x006300f0); r_esp += 4; return;
}

void f_00630130(void) /* sub_630130 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00630130);
    /* 00630130: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00630131: mov ebp, esp */ r_ebp = r_esp;
    /* 00630133: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00630136: cmp dword ptr [0x162ee84], 0 */ {  u32 a = R32((u32)(0x162ee84u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063013d: jne 0x630144 */ if (!fZ) goto L_00630144;
L_0063013f:; BB(0x0063013f);
    /* 0063013f: jmp 0x630271 */ goto L_00630271;
L_00630144:; BB(0x00630144);
    /* 00630144: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063014a: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0063014d: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x630152u); f_0060c9a0();
    /* 00630152: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00630155: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00630158: cmp dword ptr [ebp + 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063015c: je 0x6301ad */ if (fZ) goto L_006301ad;
L_0063015e:; BB(0x0063015e);
    /* 0063015e: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00630164: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00630167: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x63016cu); f_0060c9a0();
    /* 0063016c: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0063016f: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00630172: jmp 0x63017d */ goto L_0063017d;
L_00630174:; BB(0x00630174);
    /* 00630174: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00630177: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0063017a: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0063017d:; BB(0x0063017d);
    /* 0063017d: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00630181: jl 0x6301ad */ if ((fS!=fO)) goto L_006301ad;
L_00630183:; BB(0x00630183);
    /* 00630183: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00630186: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00630187: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063018d: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00630190: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x630195u); f_0060ca40();
    /* 00630195: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00630198: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063019b: cmp edx, dword ptr [ebp + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063019e: jne 0x6301ab */ if (!fZ) goto L_006301ab;
L_006301a0:; BB(0x006301a0);
    /* 006301a0: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 006301a3: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006301a6: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 006301a9: jmp 0x6301ad */ goto L_006301ad;
L_006301ab:; BB(0x006301ab);
    /* 006301ab: jmp 0x630174 */ goto L_00630174;
L_006301ad:; BB(0x006301ad);
    /* 006301ad: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006301b0: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 006301b3: jmp 0x6301be */ goto L_006301be;
L_006301b5:; BB(0x006301b5);
    /* 006301b5: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006301b8: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006301bb: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_006301be:; BB(0x006301be);
    /* 006301be: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006301c2: jl 0x630271 */ if ((fS!=fO)) goto L_00630271;
L_006301c8:; BB(0x006301c8);
    /* 006301c8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 006301cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006301cc: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006301d2: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006301d5: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x6301dau); f_0060ca40();
    /* 006301da: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 006301dd: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006301e1: je 0x63026c */ if (fZ) goto L_0063026c;
L_006301e7:; BB(0x006301e7);
    /* 006301e7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006301ea: mov edx, dword ptr [ecx + 0x1a8] */ r_edx = R32((u32)(r_ecx+0x1a8u));
    /* 006301f0: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 006301f3: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006301f6: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006301f9: jne 0x63026c */ if (!fZ) goto L_0063026c;
L_006301fb:; BB(0x006301fb);
    /* 006301fb: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 006301fe: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00630200: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00630203: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 00630206: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00630209: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0063020c: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0063020f: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 00630212: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00630215: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00630218: call 0x5f84f0 */ r_esp -= 4; W32(r_esp, 0x63021du); f_005f84f0();
    /* 0063021d: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0063021f: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00630222: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00630225: call 0x5f84d0 */ r_esp -= 4; W32(r_esp, 0x63022au); f_005f84d0();
    /* 0063022a: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0063022c: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0063022f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00630232: add ecx, dword ptr [ebp - 0x24] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00630235: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00630238: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0063023b: add edx, dword ptr [ebp - 0x28] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffd8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0063023e: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00630241: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00630244: add eax, dword ptr [ebp - 0x24] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00630247: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0063024a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063024d: add ecx, dword ptr [ebp - 0x28] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffd8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00630250: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00630253: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00630256: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00630257: lea eax, [ebp - 0x1c] */ r_eax = (u32)(r_ebp+0xffffffe4u);
    /* 0063025a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063025b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063025e: call 0x5f8ea0 */ r_esp -= 4; W32(r_esp, 0x630263u); f_005f8ea0();
    /* 00630263: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00630266: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00630268: je 0x63026c */ if (fZ) goto L_0063026c;
L_0063026a:; BB(0x0063026a);
    /* 0063026a: jmp 0x630271 */ goto L_00630271;
L_0063026c:; BB(0x0063026c);
    /* 0063026c: jmp 0x6301b5 */ goto L_006301b5;
L_00630271:; BB(0x00630271);
    /* 00630271: mov esp, ebp */ r_esp = r_ebp;
    /* 00630273: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00630274: ret  */ FN_RET(0x00630130); r_esp += 4; return;
}

void f_00630280(void) /* sub_630280 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00630280);
    /* 00630280: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00630281: mov ebp, esp */ r_ebp = r_esp;
    /* 00630283: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00630286: cmp dword ptr [0x162ee84], 0 */ {  u32 a = R32((u32)(0x162ee84u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063028d: jne 0x630294 */ if (!fZ) goto L_00630294;
L_0063028f:; BB(0x0063028f);
    /* 0063028f: jmp 0x6303c1 */ goto L_006303c1;
L_00630294:; BB(0x00630294);
    /* 00630294: cmp dword ptr [ebp + 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00630298: je 0x6302f1 */ if (fZ) goto L_006302f1;
L_0063029a:; BB(0x0063029a);
    /* 0063029a: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006302a0: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006302a3: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x6302a8u); f_0060c9a0();
    /* 006302a8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 006302ab: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 006302b2: jmp 0x6302bd */ goto L_006302bd;
L_006302b4:; BB(0x006302b4);
    /* 006302b4: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 006302b7: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006302ba: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_006302bd:; BB(0x006302bd);
    /* 006302bd: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006302c0: cmp ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006302c3: jge 0x6302ef */ if ((fS==fO)) goto L_006302ef;
L_006302c5:; BB(0x006302c5);
    /* 006302c5: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006302c8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006302c9: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006302cf: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006302d2: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x6302d7u); f_0060ca40();
    /* 006302d7: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 006302da: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 006302dd: cmp eax, dword ptr [ebp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006302e0: jne 0x6302ed */ if (!fZ) goto L_006302ed;
L_006302e2:; BB(0x006302e2);
    /* 006302e2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006302e5: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006302e8: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006302eb: jmp 0x6302ef */ goto L_006302ef;
L_006302ed:; BB(0x006302ed);
    /* 006302ed: jmp 0x6302b4 */ goto L_006302b4;
L_006302ef:; BB(0x006302ef);
    /* 006302ef: jmp 0x6302f8 */ goto L_006302f8;
L_006302f1:; BB(0x006302f1);
    /* 006302f1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_006302f8:; BB(0x006302f8);
    /* 006302f8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006302fb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006302fc: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00630302: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00630305: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x63030au); f_0060ca40();
    /* 0063030a: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_0063030d:; BB(0x0063030d);
    /* 0063030d: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00630311: je 0x6303c1 */ if (fZ) goto L_006303c1;
L_00630317:; BB(0x00630317);
    /* 00630317: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063031a: cmp eax, dword ptr [ebp + 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x14u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063031d: jne 0x630324 */ if (!fZ) goto L_00630324;
L_0063031f:; BB(0x0063031f);
    /* 0063031f: jmp 0x6303c1 */ goto L_006303c1;
L_00630324:; BB(0x00630324);
    /* 00630324: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00630327: mov edx, dword ptr [ecx + 0x1a8] */ r_edx = R32((u32)(r_ecx+0x1a8u));
    /* 0063032d: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00630330: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00630333: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00630336: jne 0x63039e */ if (!fZ) goto L_0063039e;
L_00630338:; BB(0x00630338);
    /* 00630338: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0063033b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0063033d: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00630340: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 00630343: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00630346: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00630349: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0063034c: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 0063034f: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00630352: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00630355: call 0x5f84f0 */ r_esp -= 4; W32(r_esp, 0x63035au); f_005f84f0();
    /* 0063035a: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0063035c: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0063035f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00630362: call 0x5f84d0 */ r_esp -= 4; W32(r_esp, 0x630367u); f_005f84d0();
    /* 00630367: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00630369: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0063036c: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0063036f: add ecx, dword ptr [ebp - 0x24] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00630372: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00630375: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00630378: add edx, dword ptr [ebp - 0x28] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffd8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0063037b: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0063037e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00630381: add eax, dword ptr [ebp - 0x24] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00630384: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00630387: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063038a: add ecx, dword ptr [ebp - 0x28] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffd8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0063038d: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00630390: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00630392: lea edx, [ebp - 0x1c] */ r_edx = (u32)(r_ebp+0xffffffe4u);
    /* 00630395: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00630396: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00630399: call 0x5f91b0 */ r_esp -= 4; W32(r_esp, 0x63039eu); f_005f91b0();
L_0063039e:; BB(0x0063039e);
    /* 0063039e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006303a1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006303a4: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 006303a7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006303aa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006303ab: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006303b1: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006303b4: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x6303b9u); f_0060ca40();
    /* 006303b9: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 006303bc: jmp 0x63030d */ goto L_0063030d;
L_006303c1:; BB(0x006303c1);
    /* 006303c1: mov esp, ebp */ r_esp = r_ebp;
    /* 006303c3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006303c4: ret  */ FN_RET(0x00630280); r_esp += 4; return;
}

void f_006303d0(void) /* sub_6303D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006303d0);
    /* 006303d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006303d1: mov ebp, esp */ r_ebp = r_esp;
    /* 006303d3: cmp dword ptr [0x162ee84], 0 */ {  u32 a = R32((u32)(0x162ee84u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006303da: jne 0x6303de */ if (!fZ) goto L_006303de;
L_006303dc:; BB(0x006303dc);
    /* 006303dc: jmp 0x6303f0 */ goto L_006303f0;
L_006303de:; BB(0x006303de);
    /* 006303de: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006303e0: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006303e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006303e4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006303e7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006303e8: call 0x630130 */ r_esp -= 4; W32(r_esp, 0x6303edu); f_00630130();
    /* 006303ed: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006303f0:; BB(0x006303f0);
    /* 006303f0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006303f1: ret  */ FN_RET(0x006303d0); r_esp += 4; return;
}

void f_00630400(void) /* sub_630400 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00630400);
    /* 00630400: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00630401: mov ebp, esp */ r_ebp = r_esp;
    /* 00630403: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00630405: push 0x6ab818 */ { u32 v = 0x6ab818u; r_esp -= 4; W32(r_esp, v); }
    /* 0063040a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00630410: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00630411: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00630414: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00630419: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063041b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063041c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0063041f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00630425: lea ecx, [ebp - 0x30] */ r_ecx = (u32)(r_ebp+0xffffffd0u);
    /* 00630428: call 0x6101f0 */ r_esp -= 4; W32(r_esp, 0x63042du); f_006101f0();
    /* 0063042d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00630434: cmp dword ptr [0x162ee84], 0 */ {  u32 a = R32((u32)(0x162ee84u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063043b: je 0x630446 */ if (fZ) goto L_00630446;
L_0063043d:; BB(0x0063043d);
    /* 0063043d: cmp dword ptr [0x162ee80], 0 */ {  u32 a = R32((u32)(0x162ee80u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00630444: jne 0x63045a */ if (!fZ) goto L_0063045a;
L_00630446:; BB(0x00630446);
    /* 00630446: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0063044d: lea ecx, [ebp - 0x30] */ r_ecx = (u32)(r_ebp+0xffffffd0u);
    /* 00630450: call 0x610250 */ r_esp -= 4; W32(r_esp, 0x630455u); f_00610250();
    /* 00630455: jmp 0x630537 */ goto L_00630537;
L_0063045a:; BB(0x0063045a);
    /* 0063045a: mov dword ptr [ebp - 0x18], 3 */ W32((u32)(r_ebp+0xffffffe8u), 0x3u);
    /* 00630461: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 00630468: call 0x5e9e60 */ r_esp -= 4; W32(r_esp, 0x63046du); f_005e9e60();
    /* 0063046d: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00630470: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00630472: je 0x63047d */ if (fZ) goto L_0063047d;
L_00630474:; BB(0x00630474);
    /* 00630474: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00630477: or ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0063047a: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
L_0063047d:; BB(0x0063047d);
    /* 0063047d: call 0x5e9e80 */ r_esp -= 4; W32(r_esp, 0x630482u); f_005e9e80();
    /* 00630482: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00630485: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00630487: je 0x630492 */ if (fZ) goto L_00630492;
L_00630489:; BB(0x00630489);
    /* 00630489: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0063048c: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0063048f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_00630492:; BB(0x00630492);
    /* 00630492: call 0x5e9ec0 */ r_esp -= 4; W32(r_esp, 0x630497u); f_005e9ec0();
    /* 00630497: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0063049a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063049c: je 0x6304a7 */ if (fZ) goto L_006304a7;
L_0063049e:; BB(0x0063049e);
    /* 0063049e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006304a1: or edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 006304a4: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
L_006304a7:; BB(0x006304a7);
    /* 006304a7: mov byte ptr [ebp - 0x2c], 0 */ W8((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 006304ab: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006304ad: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006304b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006304b1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006304b4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006304b5: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006304bb: call 0x5f4070 */ r_esp -= 4; W32(r_esp, 0x6304c0u); f_005f4070();
    /* 006304c0: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 006304c3: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006304c7: je 0x630528 */ if (fZ) goto L_00630528;
L_006304c9:; BB(0x006304c9);
    /* 006304c9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006304cc: call 0x5f84d0 */ r_esp -= 4; W32(r_esp, 0x6304d1u); f_005f84d0();
    /* 006304d1: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006304d4: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006304d6: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 006304d9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006304dc: call 0x5f84f0 */ r_esp -= 4; W32(r_esp, 0x6304e1u); f_005f84f0();
    /* 006304e1: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 006304e4: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006304e6: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006304e9: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006304ec: cmp edx, dword ptr [0x762104] */ {  u32 a = r_edx; u32 b = R32((u32)(0x762104u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006304f2: jne 0x6304ff */ if (!fZ) goto L_006304ff;
L_006304f4:; BB(0x006304f4);
    /* 006304f4: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006304f7: cmp eax, dword ptr [0x762100] */ {  u32 a = r_eax; u32 b = R32((u32)(0x762100u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006304fd: je 0x630528 */ if (fZ) goto L_00630528;
L_006304ff:; BB(0x006304ff);
    /* 006304ff: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00630502: mov dword ptr [0x762104], ecx */ W32((u32)(0x762104u), r_ecx);
    /* 00630508: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0063050b: mov dword ptr [0x762100], edx */ W32((u32)(0x762100u), r_edx);
    /* 00630511: lea eax, [ebp - 0x30] */ r_eax = (u32)(r_ebp+0xffffffd0u);
    /* 00630514: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00630515: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063051b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0063051d: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00630523: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 00630526: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x630528u); call_ind(t); }
L_00630528:; BB(0x00630528);
    /* 00630528: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0063052f: lea ecx, [ebp - 0x30] */ r_ecx = (u32)(r_ebp+0xffffffd0u);
    /* 00630532: call 0x610250 */ r_esp -= 4; W32(r_esp, 0x630537u); f_00610250();
L_00630537:; BB(0x00630537);
    /* 00630537: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063053a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00630541: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00630542: mov esp, ebp */ r_esp = r_ebp;
    /* 00630544: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00630545: ret  */ FN_RET(0x00630400); r_esp += 4; return;
}

void f_00630550(void) /* sub_630550 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00630550);
    /* 00630550: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00630551: mov ebp, esp */ r_ebp = r_esp;
    /* 00630553: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00630555: push 0x6ab83b */ { u32 v = 0x6ab83bu; r_esp -= 4; W32(r_esp, v); }
    /* 0063055a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00630560: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00630561: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00630564: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00630565: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0063056a: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063056c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063056d: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00630570: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00630576: lea ecx, [ebp - 0x34] */ r_ecx = (u32)(r_ebp+0xffffffccu);
    /* 00630579: call 0x6101f0 */ r_esp -= 4; W32(r_esp, 0x63057eu); f_006101f0();
    /* 0063057e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00630585: mov byte ptr [ebp - 0xd], 0 */ W8((u32)(r_ebp+0xfffffff3u), 0x0u);
    /* 00630589: movzx eax, byte ptr [ebp + 0x18] */ r_eax = (u32)R8((u32)(r_ebp+0x18u));
    /* 0063058d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063058f: je 0x63065b */ if (fZ) goto L_0063065b;
L_00630595:; BB(0x00630595);
    /* 00630595: cmp dword ptr [ebp + 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00630599: jne 0x63065b */ if (!fZ) goto L_0063065b;
L_0063059f:; BB(0x0063059f);
    /* 0063059f: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006305a5: mov dl, byte ptr [ecx + 0x4c] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x4cu))) & 0xffu);
    /* 006305a8: mov byte ptr [ebp - 0x39], dl */ W8((u32)(r_ebp+0xffffffc7u), (u8)r_edx);
    /* 006305ab: movzx eax, byte ptr [ebp - 0x39] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffc7u));
    /* 006305af: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006305b1: je 0x63065b */ if (fZ) goto L_0063065b;
L_006305b7:; BB(0x006305b7);
    /* 006305b7: call dword ptr [0x6b20bc] */ { u32 t = R32((u32)(0x6b20bcu)); r_esp -= 4; W32(r_esp, 0x6305bdu); call_ind(t); }
    /* 006305bd: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 006305c0: cmp dword ptr [0x162ee7c], 0 */ {  u32 a = R32((u32)(0x162ee7cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006305c7: jbe 0x6305de */ if ((fC||fZ)) goto L_006305de;
L_006305c9:; BB(0x006305c9);
    /* 006305c9: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 006305cc: cmp ecx, dword ptr [0x162ee7c] */ {  u32 a = r_ecx; u32 b = R32((u32)(0x162ee7cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006305d2: jbe 0x6305de */ if ((fC||fZ)) goto L_006305de;
L_006305d4:; BB(0x006305d4);
    /* 006305d4: mov dword ptr [0x162ee7c], 0 */ W32((u32)(0x162ee7cu), 0x0u);
L_006305de:; BB(0x006305de);
    /* 006305de: cmp dword ptr [0x162ee7c], 0 */ {  u32 a = R32((u32)(0x162ee7cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006305e5: jne 0x630641 */ if (!fZ) goto L_00630641;
L_006305e7:; BB(0x006305e7);
    /* 006305e7: mov esi, dword ptr [ebp - 0x38] */ r_esi = R32((u32)(r_ebp+0xffffffc8u));
    /* 006305ea: sub esi, dword ptr [0x162ee78] */ {  u32 a = r_esi; u32 b = R32((u32)(0x162ee78u)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 006305f0: call 0x5e9fc0 */ r_esp -= 4; W32(r_esp, 0x6305f5u); f_005e9fc0();
    /* 006305f5: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006305f7: ja 0x630641 */ if ((!fC&&!fZ)) goto L_00630641;
L_006305f9:; BB(0x006305f9);
    /* 006305f9: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 006305fc: sub edx, dword ptr [0x162ee74] */ {  u32 a = r_edx; u32 b = R32((u32)(0x162ee74u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00630602: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00630603: call 0x686eba */ r_esp -= 4; W32(r_esp, 0x630608u); f_00686eba();
    /* 00630608: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063060b: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063060e: jg 0x630641 */ if ((!fZ&&fS==fO)) goto L_00630641;
L_00630610:; BB(0x00630610);
    /* 00630610: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00630613: sub eax, dword ptr [0x162ee70] */ {  u32 a = r_eax; u32 b = R32((u32)(0x162ee70u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00630619: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063061a: call 0x686eba */ r_esp -= 4; W32(r_esp, 0x63061fu); f_00686eba();
    /* 0063061f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00630622: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00630625: jg 0x630641 */ if ((!fZ&&fS==fO)) goto L_00630641;
L_00630627:; BB(0x00630627);
    /* 00630627: mov byte ptr [ebp - 0xd], 1 */ W8((u32)(r_ebp+0xfffffff3u), 0x1u);
    /* 0063062b: call dword ptr [0x6b20bc] */ { u32 t = R32((u32)(0x6b20bcu)); r_esp -= 4; W32(r_esp, 0x630631u); call_ind(t); }
    /* 00630631: mov esi, eax */ r_esi = r_eax;
    /* 00630633: call 0x5e9fc0 */ r_esp -= 4; W32(r_esp, 0x630638u); f_005e9fc0();
    /* 00630638: lea ecx, [esi + eax*2] */ r_ecx = (u32)(r_esi+r_eax*2);
    /* 0063063b: mov dword ptr [0x162ee7c], ecx */ W32((u32)(0x162ee7cu), r_ecx);
L_00630641:; BB(0x00630641);
    /* 00630641: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00630644: mov dword ptr [0x162ee78], edx */ W32((u32)(0x162ee78u), r_edx);
    /* 0063064a: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0063064d: mov dword ptr [0x162ee74], eax */ W32((u32)(0x162ee74u), r_eax);
    /* 00630652: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00630655: mov dword ptr [0x162ee70], ecx */ W32((u32)(0x162ee70u), r_ecx);
L_0063065b:; BB(0x0063065b);
    /* 0063065b: movzx edx, byte ptr [ebp + 0x18] */ r_edx = (u32)R8((u32)(r_ebp+0x18u));
    /* 0063065f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00630661: je 0x630688 */ if (fZ) goto L_00630688;
L_00630663:; BB(0x00630663);
    /* 00630663: call 0x5e9e60 */ r_esp -= 4; W32(r_esp, 0x630668u); f_005e9e60();
    /* 00630668: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0063066b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063066d: je 0x63067f */ if (fZ) goto L_0063067f;
L_0063066f:; BB(0x0063066f);
    /* 0063066f: mov dword ptr [ebp + 0x14], 1 */ W32((u32)(r_ebp+0x14u), 0x1u);
    /* 00630676: mov byte ptr [0x162ee6e], 1 */ W8((u32)(0x162ee6eu), 0x1u);
    /* 0063067d: jmp 0x630686 */ goto L_00630686;
L_0063067f:; BB(0x0063067f);
    /* 0063067f: mov byte ptr [0x162ee6e], 0 */ W8((u32)(0x162ee6eu), 0x0u);
L_00630686:; BB(0x00630686);
    /* 00630686: jmp 0x6306a1 */ goto L_006306a1;
L_00630688:; BB(0x00630688);
    /* 00630688: movzx ecx, byte ptr [0x162ee6e] */ r_ecx = (u32)R8((u32)(0x162ee6eu));
    /* 0063068f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00630691: je 0x63069a */ if (fZ) goto L_0063069a;
L_00630693:; BB(0x00630693);
    /* 00630693: mov dword ptr [ebp + 0x14], 1 */ W32((u32)(r_ebp+0x14u), 0x1u);
L_0063069a:; BB(0x0063069a);
    /* 0063069a: mov byte ptr [0x162ee6e], 0 */ W8((u32)(0x162ee6eu), 0x0u);
L_006306a1:; BB(0x006306a1);
    /* 006306a1: movzx edx, byte ptr [ebp + 0x18] */ r_edx = (u32)R8((u32)(r_ebp+0x18u));
    /* 006306a5: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); fC = (b != 0); }
    /* 006306a7: sbb edx, edx */ { u32 c = fC; u32 a = r_edx; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
    /* 006306a9: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006306ac: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 006306af: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006306b1: cmp dword ptr [ebp + 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006306b5: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 006306b8: lea eax, [eax*8 + 8] */ r_eax = (u32)(r_eax*8+0x8u);
    /* 006306bf: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006306c2: call 0x5e9e60 */ r_esp -= 4; W32(r_esp, 0x6306c7u); f_005e9e60();
    /* 006306c7: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 006306ca: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006306cc: je 0x6306d7 */ if (fZ) goto L_006306d7;
L_006306ce:; BB(0x006306ce);
    /* 006306ce: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006306d1: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 006306d4: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
L_006306d7:; BB(0x006306d7);
    /* 006306d7: call 0x5e9e80 */ r_esp -= 4; W32(r_esp, 0x6306dcu); f_005e9e80();
    /* 006306dc: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006306df: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006306e1: je 0x6306ec */ if (fZ) goto L_006306ec;
L_006306e3:; BB(0x006306e3);
    /* 006306e3: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006306e6: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 006306e9: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
L_006306ec:; BB(0x006306ec);
    /* 006306ec: call 0x5e9ec0 */ r_esp -= 4; W32(r_esp, 0x6306f1u); f_005e9ec0();
    /* 006306f1: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 006306f4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006306f6: je 0x630701 */ if (fZ) goto L_00630701;
L_006306f8:; BB(0x006306f8);
    /* 006306f8: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006306fb: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006306fe: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_00630701:; BB(0x00630701);
    /* 00630701: mov byte ptr [ebp - 0x30], 0 */ W8((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00630705: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00630708: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00630709: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0063070c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063070d: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00630710: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00630711: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00630717: call 0x5f4070 */ r_esp -= 4; W32(r_esp, 0x63071cu); f_005f4070();
    /* 0063071c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0063071f: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00630723: je 0x630811 */ if (fZ) goto L_00630811;
L_00630729:; BB(0x00630729);
    /* 00630729: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063072c: call 0x5f84d0 */ r_esp -= 4; W32(r_esp, 0x630731u); f_005f84d0();
    /* 00630731: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00630734: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00630736: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00630739: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063073c: call 0x5f84f0 */ r_esp -= 4; W32(r_esp, 0x630741u); f_005f84f0();
    /* 00630741: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00630744: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00630746: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 00630749: movzx eax, byte ptr [ebp - 0xd] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffff3u));
    /* 0063074d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063074f: je 0x63075a */ if (fZ) goto L_0063075a;
L_00630751:; BB(0x00630751);
    /* 00630751: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00630754: or ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00630757: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
L_0063075a:; BB(0x0063075a);
    /* 0063075a: lea edx, [ebp - 0x34] */ r_edx = (u32)(r_ebp+0xffffffccu);
    /* 0063075d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063075e: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00630763: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00630765: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063076b: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 0063076e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x630770u); call_ind(t); }
    /* 00630770: movzx ecx, byte ptr [ebp - 0xd] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffff3u));
    /* 00630774: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00630776: je 0x630811 */ if (fZ) goto L_00630811;
L_0063077c:; BB(0x0063077c);
    /* 0063077c: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 00630782: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 00630785: call 0x613f80 */ r_esp -= 4; W32(r_esp, 0x63078au); f_00613f80();
    /* 0063078a: mov dword ptr [ebp - 0x1c], 2 */ W32((u32)(r_ebp+0xffffffe4u), 0x2u);
    /* 00630791: mov byte ptr [ebp - 0x30], 0 */ W8((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00630795: lea eax, [ebp - 0x34] */ r_eax = (u32)(r_ebp+0xffffffccu);
    /* 00630798: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00630799: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063079f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006307a1: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006307a7: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 006307aa: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6307acu); call_ind(t); }
    /* 006307ac: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 006307b2: mov ecx, dword ptr [ecx + 0x10] */ r_ecx = R32((u32)(r_ecx+0x10u));
    /* 006307b5: call 0x613f80 */ r_esp -= 4; W32(r_esp, 0x6307bau); f_00613f80();
    /* 006307ba: mov dword ptr [ebp - 0x1c], 1 */ W32((u32)(r_ebp+0xffffffe4u), 0x1u);
    /* 006307c1: mov dword ptr [ebp - 0x18], 0x30 */ W32((u32)(r_ebp+0xffffffe8u), 0x30u);
    /* 006307c8: mov byte ptr [ebp - 0x30], 0 */ W8((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 006307cc: lea edx, [ebp - 0x34] */ r_edx = (u32)(r_ebp+0xffffffccu);
    /* 006307cf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006307d0: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 006307d5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006307d7: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006307dd: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 006307e0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6307e2u); call_ind(t); }
    /* 006307e2: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 006307e8: mov ecx, dword ptr [ecx + 0x10] */ r_ecx = R32((u32)(r_ecx+0x10u));
    /* 006307eb: call 0x613f80 */ r_esp -= 4; W32(r_esp, 0x6307f0u); f_00613f80();
    /* 006307f0: mov dword ptr [ebp - 0x1c], 2 */ W32((u32)(r_ebp+0xffffffe4u), 0x2u);
    /* 006307f7: mov byte ptr [ebp - 0x30], 0 */ W8((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 006307fb: lea edx, [ebp - 0x34] */ r_edx = (u32)(r_ebp+0xffffffccu);
    /* 006307fe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006307ff: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00630804: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00630806: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063080c: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 0063080f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x630811u); call_ind(t); }
L_00630811:; BB(0x00630811);
    /* 00630811: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00630818: lea ecx, [ebp - 0x34] */ r_ecx = (u32)(r_ebp+0xffffffccu);
    /* 0063081b: call 0x610250 */ r_esp -= 4; W32(r_esp, 0x630820u); f_00610250();
    /* 00630820: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00630823: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063082a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063082b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063082c: mov esp, ebp */ r_esp = r_ebp;
    /* 0063082e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063082f: ret  */ FN_RET(0x00630550); r_esp += 4; return;
}

void f_00630830(void) /* sub_630830 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00630830);
    /* 00630830: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00630831: mov ebp, esp */ r_ebp = r_esp;
    /* 00630833: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00630835: push 0x6ab85e */ { u32 v = 0x6ab85eu; r_esp -= 4; W32(r_esp, v); }
    /* 0063083a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00630840: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00630841: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00630844: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00630849: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063084b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063084c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0063084f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00630855: lea ecx, [ebp - 0x30] */ r_ecx = (u32)(r_ebp+0xffffffd0u);
    /* 00630858: call 0x6101f0 */ r_esp -= 4; W32(r_esp, 0x63085du); f_006101f0();
    /* 0063085d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00630864: mov dword ptr [ebp - 0x18], 0x18 */ W32((u32)(r_ebp+0xffffffe8u), 0x18u);
    /* 0063086b: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0063086e: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00630871: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 00630878: call 0x5e9e60 */ r_esp -= 4; W32(r_esp, 0x63087du); f_005e9e60();
    /* 0063087d: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00630880: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00630882: je 0x63088d */ if (fZ) goto L_0063088d;
L_00630884:; BB(0x00630884);
    /* 00630884: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00630887: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0063088a: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
L_0063088d:; BB(0x0063088d);
    /* 0063088d: call 0x5e9e80 */ r_esp -= 4; W32(r_esp, 0x630892u); f_005e9e80();
    /* 00630892: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00630895: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00630897: je 0x6308a2 */ if (fZ) goto L_006308a2;
L_00630899:; BB(0x00630899);
    /* 00630899: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063089c: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0063089f: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
L_006308a2:; BB(0x006308a2);
    /* 006308a2: call 0x5e9ec0 */ r_esp -= 4; W32(r_esp, 0x6308a7u); f_005e9ec0();
    /* 006308a7: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 006308aa: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006308ac: je 0x6308b7 */ if (fZ) goto L_006308b7;
L_006308ae:; BB(0x006308ae);
    /* 006308ae: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006308b1: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006308b4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_006308b7:; BB(0x006308b7);
    /* 006308b7: mov byte ptr [ebp - 0x2c], 0 */ W8((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 006308bb: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006308be: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006308bf: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 006308c2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006308c3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006308c6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006308c7: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006308cd: call 0x5f4070 */ r_esp -= 4; W32(r_esp, 0x6308d2u); f_005f4070();
    /* 006308d2: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 006308d5: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006308d9: je 0x630926 */ if (fZ) goto L_00630926;
L_006308db:; BB(0x006308db);
    /* 006308db: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006308de: mov edx, dword ptr [ecx + 0x1a8] */ r_edx = R32((u32)(r_ecx+0x1a8u));
    /* 006308e4: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 006308e7: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 006308ea: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006308ed: jne 0x630926 */ if (!fZ) goto L_00630926;
L_006308ef:; BB(0x006308ef);
    /* 006308ef: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006308f2: call 0x5f84d0 */ r_esp -= 4; W32(r_esp, 0x6308f7u); f_005f84d0();
    /* 006308f7: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 006308fa: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006308fc: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 006308ff: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00630902: call 0x5f84f0 */ r_esp -= 4; W32(r_esp, 0x630907u); f_005f84f0();
    /* 00630907: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0063090a: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0063090c: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0063090f: lea eax, [ebp - 0x30] */ r_eax = (u32)(r_ebp+0xffffffd0u);
    /* 00630912: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00630913: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00630919: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0063091b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00630921: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 00630924: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x630926u); call_ind(t); }
L_00630926:; BB(0x00630926);
    /* 00630926: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0063092d: lea ecx, [ebp - 0x30] */ r_ecx = (u32)(r_ebp+0xffffffd0u);
    /* 00630930: call 0x610250 */ r_esp -= 4; W32(r_esp, 0x630935u); f_00610250();
    /* 00630935: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00630938: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063093f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00630940: mov esp, ebp */ r_esp = r_ebp;
    /* 00630942: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00630943: ret  */ FN_RET(0x00630830); r_esp += 4; return;
}

void f_00630950(void) /* sub_630950 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00630950);
    /* 00630950: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00630951: mov ebp, esp */ r_ebp = r_esp;
    /* 00630953: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00630955: push 0x6ab881 */ { u32 v = 0x6ab881u; r_esp -= 4; W32(r_esp, v); }
    /* 0063095a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00630960: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00630961: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00630964: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00630969: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063096b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063096c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0063096f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00630975: lea ecx, [ebp - 0x30] */ r_ecx = (u32)(r_ebp+0xffffffd0u);
    /* 00630978: call 0x6101f0 */ r_esp -= 4; W32(r_esp, 0x63097du); f_006101f0();
    /* 0063097d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00630984: movsx eax, byte ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xcu));
    /* 00630988: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0063098a: jl 0x63099e */ if ((fS!=fO)) goto L_0063099e;
L_0063098c:; BB(0x0063098c);
    /* 0063098c: movsx ecx, byte ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+0xcu));
    /* 00630990: cmp ecx, 0x1a */ {  u32 a = r_ecx; u32 b = 0x1au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00630993: jg 0x63099e */ if ((!fZ&&fS==fO)) goto L_0063099e;
L_00630995:; BB(0x00630995);
    /* 00630995: mov dword ptr [ebp - 0x14], 2 */ W32((u32)(r_ebp+0xffffffecu), 0x2u);
    /* 0063099c: jmp 0x6309a5 */ goto L_006309a5;
L_0063099e:; BB(0x0063099e);
    /* 0063099e: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_006309a5:; BB(0x006309a5);
    /* 006309a5: call 0x5e9e60 */ r_esp -= 4; W32(r_esp, 0x6309aau); f_005e9e60();
    /* 006309aa: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 006309ad: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006309af: je 0x6309ba */ if (fZ) goto L_006309ba;
L_006309b1:; BB(0x006309b1);
    /* 006309b1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006309b4: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006309b7: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_006309ba:; BB(0x006309ba);
    /* 006309ba: call 0x5e9e80 */ r_esp -= 4; W32(r_esp, 0x6309bfu); f_005e9e80();
    /* 006309bf: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 006309c2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006309c4: je 0x6309cf */ if (fZ) goto L_006309cf;
L_006309c6:; BB(0x006309c6);
    /* 006309c6: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006309c9: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 006309cc: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
L_006309cf:; BB(0x006309cf);
    /* 006309cf: call 0x5e9ec0 */ r_esp -= 4; W32(r_esp, 0x6309d4u); f_005e9ec0();
    /* 006309d4: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006309d7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006309d9: je 0x6309e4 */ if (fZ) goto L_006309e4;
L_006309db:; BB(0x006309db);
    /* 006309db: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006309de: or ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 006309e1: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
L_006309e4:; BB(0x006309e4);
    /* 006309e4: mov byte ptr [ebp - 0x2c], 0 */ W8((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 006309e8: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 006309ef: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006309f6: mov dl, byte ptr [ebp + 0xc] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 006309f9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006309fa: call 0x624e70 */ r_esp -= 4; W32(r_esp, 0x6309ffu); f_00624e70();
    /* 006309ff: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00630a02: mov byte ptr [ebp - 0x1c], al */ W8((u32)(r_ebp+0xffffffe4u), (u8)r_eax);
    /* 00630a05: movzx eax, byte ptr [ebp + 0x10] */ r_eax = (u32)R8((u32)(r_ebp+0x10u));
    /* 00630a09: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00630a0b: je 0x630a16 */ if (fZ) goto L_00630a16;
L_00630a0d:; BB(0x00630a0d);
    /* 00630a0d: mov dword ptr [ebp - 0x18], 0x15 */ W32((u32)(r_ebp+0xffffffe8u), 0x15u);
    /* 00630a14: jmp 0x630a2e */ goto L_00630a2e;
L_00630a16:; BB(0x00630a16);
    /* 00630a16: movzx ecx, byte ptr [ebp + 0x14] */ r_ecx = (u32)R8((u32)(r_ebp+0x14u));
    /* 00630a1a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00630a1c: je 0x630a27 */ if (fZ) goto L_00630a27;
L_00630a1e:; BB(0x00630a1e);
    /* 00630a1e: mov dword ptr [ebp - 0x18], 0x16 */ W32((u32)(r_ebp+0xffffffe8u), 0x16u);
    /* 00630a25: jmp 0x630a2e */ goto L_00630a2e;
L_00630a27:; BB(0x00630a27);
    /* 00630a27: mov dword ptr [ebp - 0x18], 4 */ W32((u32)(r_ebp+0xffffffe8u), 0x4u);
L_00630a2e:; BB(0x00630a2e);
    /* 00630a2e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00630a31: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00630a32: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00630a35: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00630a36: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00630a39: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00630a3a: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00630a40: call 0x5f4070 */ r_esp -= 4; W32(r_esp, 0x630a45u); f_005f4070();
    /* 00630a45: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00630a48: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00630a4c: je 0x630a64 */ if (fZ) goto L_00630a64;
L_00630a4e:; BB(0x00630a4e);
    /* 00630a4e: lea edx, [ebp - 0x30] */ r_edx = (u32)(r_ebp+0xffffffd0u);
    /* 00630a51: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00630a52: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00630a57: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00630a59: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00630a5f: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 00630a62: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x630a64u); call_ind(t); }
L_00630a64:; BB(0x00630a64);
    /* 00630a64: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00630a6b: lea ecx, [ebp - 0x30] */ r_ecx = (u32)(r_ebp+0xffffffd0u);
    /* 00630a6e: call 0x610250 */ r_esp -= 4; W32(r_esp, 0x630a73u); f_00610250();
    /* 00630a73: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00630a76: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00630a7d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00630a7e: mov esp, ebp */ r_esp = r_ebp;
    /* 00630a80: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00630a81: ret  */ FN_RET(0x00630950); r_esp += 4; return;
}

void f_00630a90(void) /* sub_630A90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00630a90);
    /* 00630a90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00630a91: mov ebp, esp */ r_ebp = r_esp;
    /* 00630a93: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00630a95: push 0x6ab8a4 */ { u32 v = 0x6ab8a4u; r_esp -= 4; W32(r_esp, v); }
    /* 00630a9a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00630aa0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00630aa1: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00630aa4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00630aa9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00630aab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00630aac: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00630aaf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00630ab5: lea ecx, [ebp - 0x30] */ r_ecx = (u32)(r_ebp+0xffffffd0u);
    /* 00630ab8: call 0x6101f0 */ r_esp -= 4; W32(r_esp, 0x630abdu); f_006101f0();
    /* 00630abd: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00630ac4: movsx eax, byte ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xcu));
    /* 00630ac8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00630aca: jl 0x630ade */ if ((fS!=fO)) goto L_00630ade;
L_00630acc:; BB(0x00630acc);
    /* 00630acc: movsx ecx, byte ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+0xcu));
    /* 00630ad0: cmp ecx, 0x1a */ {  u32 a = r_ecx; u32 b = 0x1au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00630ad3: jg 0x630ade */ if ((!fZ&&fS==fO)) goto L_00630ade;
L_00630ad5:; BB(0x00630ad5);
    /* 00630ad5: mov dword ptr [ebp - 0x14], 2 */ W32((u32)(r_ebp+0xffffffecu), 0x2u);
    /* 00630adc: jmp 0x630ae5 */ goto L_00630ae5;
L_00630ade:; BB(0x00630ade);
    /* 00630ade: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_00630ae5:; BB(0x00630ae5);
    /* 00630ae5: call 0x5e9e60 */ r_esp -= 4; W32(r_esp, 0x630aeau); f_005e9e60();
    /* 00630aea: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00630aed: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00630aef: je 0x630afa */ if (fZ) goto L_00630afa;
L_00630af1:; BB(0x00630af1);
    /* 00630af1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00630af4: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00630af7: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_00630afa:; BB(0x00630afa);
    /* 00630afa: call 0x5e9e80 */ r_esp -= 4; W32(r_esp, 0x630affu); f_005e9e80();
    /* 00630aff: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00630b02: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00630b04: je 0x630b0f */ if (fZ) goto L_00630b0f;
L_00630b06:; BB(0x00630b06);
    /* 00630b06: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00630b09: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00630b0c: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
L_00630b0f:; BB(0x00630b0f);
    /* 00630b0f: call 0x5e9ec0 */ r_esp -= 4; W32(r_esp, 0x630b14u); f_005e9ec0();
    /* 00630b14: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00630b17: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00630b19: je 0x630b24 */ if (fZ) goto L_00630b24;
L_00630b1b:; BB(0x00630b1b);
    /* 00630b1b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00630b1e: or ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00630b21: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
L_00630b24:; BB(0x00630b24);
    /* 00630b24: mov byte ptr [ebp - 0x2c], 0 */ W8((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00630b28: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00630b2f: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00630b36: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00630b39: or edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00630b3c: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00630b3f: movsx eax, byte ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xcu));
    /* 00630b43: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00630b46: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00630b49: sub ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00630b4c: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 00630b4f: cmp dword ptr [ebp - 0x34], 0x26 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x26u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00630b53: ja 0x630ba2 */ if ((!fC&&!fZ)) goto L_00630ba2;
L_00630b55:; BB(0x00630b55);
    /* 00630b55: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00630b58: movzx eax, byte ptr [edx + 0x630c68] */ r_eax = (u32)R8((u32)(r_edx+0x630c68u));
    /* 00630b5f: jmp dword ptr [eax*4 + 0x630c3c] */ { u32 t = R32((u32)(r_eax*4+0x630c3cu)); switch (t) { case 0x630b96u: goto L_00630b96; case 0x630b8au: goto L_00630b8a; case 0x630b90u: goto L_00630b90; case 0x630b84u: goto L_00630b84; case 0x630b7eu: goto L_00630b7e; case 0x630b72u: goto L_00630b72; case 0x630b66u: goto L_00630b66; case 0x630b78u: goto L_00630b78; case 0x630b6cu: goto L_00630b6c; case 0x630b9cu: goto L_00630b9c; case 0x630ba2u: goto L_00630ba2; default: UNSUP(0x00630b5f, "jump table entry is not a known target"); } }
L_00630b66:; BB(0x00630b66);
    /* 00630b66: mov byte ptr [ebp + 0xc], 1 */ W8((u32)(r_ebp+0xcu), 0x1u);
    /* 00630b6a: jmp 0x630baf */ goto L_00630baf;
L_00630b6c:; BB(0x00630b6c);
    /* 00630b6c: mov byte ptr [ebp + 0xc], 2 */ W8((u32)(r_ebp+0xcu), 0x2u);
    /* 00630b70: jmp 0x630baf */ goto L_00630baf;
L_00630b72:; BB(0x00630b72);
    /* 00630b72: mov byte ptr [ebp + 0xc], 3 */ W8((u32)(r_ebp+0xcu), 0x3u);
    /* 00630b76: jmp 0x630baf */ goto L_00630baf;
L_00630b78:; BB(0x00630b78);
    /* 00630b78: mov byte ptr [ebp + 0xc], 4 */ W8((u32)(r_ebp+0xcu), 0x4u);
    /* 00630b7c: jmp 0x630baf */ goto L_00630baf;
L_00630b7e:; BB(0x00630b7e);
    /* 00630b7e: mov byte ptr [ebp + 0xc], 5 */ W8((u32)(r_ebp+0xcu), 0x5u);
    /* 00630b82: jmp 0x630baf */ goto L_00630baf;
L_00630b84:; BB(0x00630b84);
    /* 00630b84: mov byte ptr [ebp + 0xc], 6 */ W8((u32)(r_ebp+0xcu), 0x6u);
    /* 00630b88: jmp 0x630baf */ goto L_00630baf;
L_00630b8a:; BB(0x00630b8a);
    /* 00630b8a: mov byte ptr [ebp + 0xc], 7 */ W8((u32)(r_ebp+0xcu), 0x7u);
    /* 00630b8e: jmp 0x630baf */ goto L_00630baf;
L_00630b90:; BB(0x00630b90);
    /* 00630b90: mov byte ptr [ebp + 0xc], 8 */ W8((u32)(r_ebp+0xcu), 0x8u);
    /* 00630b94: jmp 0x630baf */ goto L_00630baf;
L_00630b96:; BB(0x00630b96);
    /* 00630b96: mov byte ptr [ebp + 0xc], 0x16 */ W8((u32)(r_ebp+0xcu), 0x16u);
    /* 00630b9a: jmp 0x630baf */ goto L_00630baf;
L_00630b9c:; BB(0x00630b9c);
    /* 00630b9c: mov byte ptr [ebp + 0xc], 0x17 */ W8((u32)(r_ebp+0xcu), 0x17u);
    /* 00630ba0: jmp 0x630baf */ goto L_00630baf;
L_00630ba2:; BB(0x00630ba2);
    /* 00630ba2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00630ba5: and ecx, 0xffffffbf */ {  u32 a = r_ecx; u32 b = 0xffffffbfu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00630ba8: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00630bab: mov byte ptr [ebp + 0xc], 0 */ W8((u32)(r_ebp+0xcu), 0x0u);
L_00630baf:; BB(0x00630baf);
    /* 00630baf: movsx edx, byte ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xcu));
    /* 00630bb3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00630bb5: je 0x630c1d */ if (fZ) goto L_00630c1d;
L_00630bb7:; BB(0x00630bb7);
    /* 00630bb7: mov al, byte ptr [ebp + 0xc] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 00630bba: mov byte ptr [ebp - 0x1c], al */ W8((u32)(r_ebp+0xffffffe4u), (u8)r_eax);
    /* 00630bbd: movzx ecx, byte ptr [ebp + 0x10] */ r_ecx = (u32)R8((u32)(r_ebp+0x10u));
    /* 00630bc1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00630bc3: je 0x630bce */ if (fZ) goto L_00630bce;
L_00630bc5:; BB(0x00630bc5);
    /* 00630bc5: mov dword ptr [ebp - 0x18], 0x15 */ W32((u32)(r_ebp+0xffffffe8u), 0x15u);
    /* 00630bcc: jmp 0x630be6 */ goto L_00630be6;
L_00630bce:; BB(0x00630bce);
    /* 00630bce: movzx edx, byte ptr [ebp + 0x14] */ r_edx = (u32)R8((u32)(r_ebp+0x14u));
    /* 00630bd2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00630bd4: je 0x630bdf */ if (fZ) goto L_00630bdf;
L_00630bd6:; BB(0x00630bd6);
    /* 00630bd6: mov dword ptr [ebp - 0x18], 0x16 */ W32((u32)(r_ebp+0xffffffe8u), 0x16u);
    /* 00630bdd: jmp 0x630be6 */ goto L_00630be6;
L_00630bdf:; BB(0x00630bdf);
    /* 00630bdf: mov dword ptr [ebp - 0x18], 4 */ W32((u32)(r_ebp+0xffffffe8u), 0x4u);
L_00630be6:; BB(0x00630be6);
    /* 00630be6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00630be9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00630bea: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00630bed: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00630bee: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00630bf1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00630bf2: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00630bf8: call 0x5f4070 */ r_esp -= 4; W32(r_esp, 0x630bfdu); f_005f4070();
    /* 00630bfd: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00630c00: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00630c04: je 0x630c1d */ if (fZ) goto L_00630c1d;
L_00630c06:; BB(0x00630c06);
    /* 00630c06: lea eax, [ebp - 0x30] */ r_eax = (u32)(r_ebp+0xffffffd0u);
    /* 00630c09: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00630c0a: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00630c10: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00630c12: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00630c18: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 00630c1b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x630c1du); call_ind(t); }
L_00630c1d:; BB(0x00630c1d);
    /* 00630c1d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00630c24: lea ecx, [ebp - 0x30] */ r_ecx = (u32)(r_ebp+0xffffffd0u);
    /* 00630c27: call 0x610250 */ r_esp -= 4; W32(r_esp, 0x630c2cu); f_00610250();
    /* 00630c2c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00630c2f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00630c36: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00630c37: mov esp, ebp */ r_esp = r_ebp;
    /* 00630c39: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00630c3a: ret  */ FN_RET(0x00630a90); r_esp += 4; return;
}

void f_00630c90(void) /* sub_630C90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00630c90);
    /* 00630c90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00630c91: mov ebp, esp */ r_ebp = r_esp;
    /* 00630c93: cmp dword ptr [0x162ee84], 0 */ {  u32 a = R32((u32)(0x162ee84u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00630c9a: je 0x630ca5 */ if (fZ) goto L_00630ca5;
L_00630c9c:; BB(0x00630c9c);
    /* 00630c9c: cmp dword ptr [0x162ee80], 0 */ {  u32 a = R32((u32)(0x162ee80u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00630ca3: jne 0x630ca9 */ if (!fZ) goto L_00630ca9;
L_00630ca5:; BB(0x00630ca5);
    /* 00630ca5: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00630ca7: jmp 0x630cd3 */ goto L_00630cd3;
L_00630ca9:; BB(0x00630ca9);
    /* 00630ca9: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00630caf: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x630cb4u); f_005f3bf0();
    /* 00630cb4: cmp eax, 0x3e9 */ {  u32 a = r_eax; u32 b = 0x3e9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00630cb9: je 0x630ccd */ if (fZ) goto L_00630ccd;
L_00630cbb:; BB(0x00630cbb);
    /* 00630cbb: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00630cc1: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x630cc6u); f_005f3bf0();
    /* 00630cc6: cmp eax, 0x44c */ {  u32 a = r_eax; u32 b = 0x44cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00630ccb: jne 0x630cd1 */ if (!fZ) goto L_00630cd1;
L_00630ccd:; BB(0x00630ccd);
    /* 00630ccd: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00630ccf: jmp 0x630cd3 */ goto L_00630cd3;
L_00630cd1:; BB(0x00630cd1);
    /* 00630cd1: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_00630cd3:; BB(0x00630cd3);
    /* 00630cd3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00630cd4: ret  */ FN_RET(0x00630c90); r_esp += 4; return;
}

void f_00630ce0(void) /* sub_630CE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00630ce0);
    /* 00630ce0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00630ce1: mov ebp, esp */ r_ebp = r_esp;
    /* 00630ce3: push 0x6d9d5c */ { u32 v = 0x6d9d5cu; r_esp -= 4; W32(r_esp, v); }
    /* 00630ce8: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x630cedu); f_00630f40();
    /* 00630ced: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00630cf0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00630cf1: ret  */ FN_RET(0x00630ce0); r_esp += 4; return;
}

void f_00630d00(void) /* sub_630D00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00630d00);
    /* 00630d00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00630d01: mov ebp, esp */ r_ebp = r_esp;
    /* 00630d03: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00630d05: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00630d0b: call 0x5f45d0 */ r_esp -= 4; W32(r_esp, 0x630d10u); f_005f45d0();
    /* 00630d10: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00630d11: ret  */ FN_RET(0x00630d00); r_esp += 4; return;
}

void f_00630d20(void) /* sub_630D20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00630d20);
    /* 00630d20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00630d21: mov ebp, esp */ r_ebp = r_esp;
    /* 00630d23: push 0x6d9d78 */ { u32 v = 0x6d9d78u; r_esp -= 4; W32(r_esp, v); }
    /* 00630d28: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x630d2du); f_00630f40();
    /* 00630d2d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00630d30: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00630d31: ret  */ FN_RET(0x00630d20); r_esp += 4; return;
}

