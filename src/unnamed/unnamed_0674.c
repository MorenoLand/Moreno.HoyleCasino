#include "protos.h"

void f_00674060(void) /* sub_674060 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00674060);
    /* 00674060: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00674061: mov ebp, esp */ r_ebp = r_esp;
    /* 00674063: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00674066: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00674067: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0067406a: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0067406f: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00674072: call 0x5f8550 */ r_esp -= 4; W32(r_esp, 0x674077u); f_005f8550();
    /* 00674077: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0067407a: fild dword ptr [ebp - 0x28] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd8u)));
    /* 0067407d: fdiv qword ptr [0x6e17a8] */ ST(0) = ST(0) / R_F64((u32)(0x6e17a8u));
    /* 00674083: fld1  */ FPUSH(1.0);
    /* 00674085: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 00674087: fstp qword ptr [ebp - 0x20] */ W_F64((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
    /* 0067408a: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00674090: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 00674093: call 0x5f8570 */ r_esp -= 4; W32(r_esp, 0x674098u); f_005f8570();
    /* 00674098: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0067409b: fild dword ptr [ebp - 0x2c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd4u)));
    /* 0067409e: fdiv qword ptr [0x6e17a0] */ ST(0) = ST(0) / R_F64((u32)(0x6e17a0u));
    /* 006740a4: fld1  */ FPUSH(1.0);
    /* 006740a6: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 006740a8: fstp qword ptr [ebp - 8] */ W_F64((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 006740ab: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006740ae: fld qword ptr [ebp - 8] */ FPUSH(R_F64((u32)(r_ebp+0xfffffff8u)));
    /* 006740b1: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 006740b4: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006740b7: fld qword ptr [ebp - 0x20] */ FPUSH(R_F64((u32)(r_ebp+0xffffffe0u)));
    /* 006740ba: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 006740bd: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006740c0: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 006740c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006740c4: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 006740ca: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 006740cd: mov ecx, dword ptr [edx + 0x50] */ r_ecx = R32((u32)(r_edx+0x50u));
    /* 006740d0: call 0x6247c0 */ r_esp -= 4; W32(r_esp, 0x6740d5u); f_006247c0();
    /* 006740d5: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006740d8: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 006740db: call 0x62e710 */ r_esp -= 4; W32(r_esp, 0x6740e0u); f_0062e710();
    /* 006740e0: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006740e3: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 006740ea: jmp 0x6740f5 */ goto L_006740f5;
L_006740ec:; BB(0x006740ec);
    /* 006740ec: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006740ef: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006740f2: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_006740f5:; BB(0x006740f5);
    /* 006740f5: cmp dword ptr [ebp - 0xc], 0xa0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xa0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006740fc: jge 0x67414e */ if ((fS==fO)) goto L_0067414e;
L_006740fe:; BB(0x006740fe);
    /* 006740fe: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00674101: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00674104: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0067410b: jmp 0x674116 */ goto L_00674116;
L_0067410d:; BB(0x0067410d);
    /* 0067410d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00674110: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00674113: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_00674116:; BB(0x00674116);
    /* 00674116: cmp dword ptr [ebp - 0x10], 0x354 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x354u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0067411d: jae 0x67414c */ if (!fC) goto L_0067414c;
L_0067411f:; BB(0x0067411f);
    /* 0067411f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00674122: mov ecx, dword ptr [ecx + 0x48] */ r_ecx = R32((u32)(r_ecx+0x48u));
    /* 00674125: call 0x62e6f0 */ r_esp -= 4; W32(r_esp, 0x67412au); f_0062e6f0();
    /* 0067412a: imul eax, dword ptr [ebp - 0x14] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xffffffecu)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0067412e: add eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00674131: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00674134: imul edx, edx, 0x354 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x354u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0067413a: add edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0067413d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00674140: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00674143: mov al, byte ptr [esi + eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi+r_eax))) & 0xffu);
    /* 00674146: mov byte ptr [ecx + edx + 0x4c], al */ W8((u32)(r_ecx+r_edx+0x4cu), (u8)r_eax);
    /* 0067414a: jmp 0x67410d */ goto L_0067410d;
L_0067414c:; BB(0x0067414c);
    /* 0067414c: jmp 0x6740ec */ goto L_006740ec;
L_0067414e:; BB(0x0067414e);
    /* 0067414e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0067414f: mov esp, ebp */ r_esp = r_ebp;
    /* 00674151: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00674152: ret  */ FN_RET(0x00674060); r_esp += 4; return;
}

void f_00674160(void) /* sub_674160 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00674160);
    /* 00674160: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00674161: mov ebp, esp */ r_ebp = r_esp;
    /* 00674163: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00674166: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00674167: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0067416a: push 0x21496 */ { u32 v = 0x21496u; r_esp -= 4; W32(r_esp, v); }
    /* 0067416f: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x674174u); f_00686d82();
    /* 00674174: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00674177: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0067417a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0067417d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00674180: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00674183: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00674185: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00674188: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0067418b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67418du); call_ind(t); }
    /* 0067418d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00674190: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00674192: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00674195: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00674198: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67419au); call_ind(t); }
    /* 0067419a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0067419d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067419e: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006741a4: add ecx, 0x50 */ {  u32 a = r_ecx; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006741a7: call 0x668d30 */ r_esp -= 4; W32(r_esp, 0x6741acu); f_00668d30();
    /* 006741ac: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006741af: mov ecx, dword ptr [edx + 0x48] */ r_ecx = R32((u32)(r_edx+0x48u));
    /* 006741b2: call 0x62e710 */ r_esp -= 4; W32(r_esp, 0x6741b7u); f_0062e710();
    /* 006741b7: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 006741ba: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006741c1: jmp 0x6741cc */ goto L_006741cc;
L_006741c3:; BB(0x006741c3);
    /* 006741c3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006741c6: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006741c9: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_006741cc:; BB(0x006741cc);
    /* 006741cc: cmp dword ptr [ebp - 4], 0xa0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xa0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006741d3: jge 0x674225 */ if ((fS==fO)) goto L_00674225;
L_006741d5:; BB(0x006741d5);
    /* 006741d5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006741d8: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 006741db: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 006741e2: jmp 0x6741ed */ goto L_006741ed;
L_006741e4:; BB(0x006741e4);
    /* 006741e4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006741e7: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006741ea: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_006741ed:; BB(0x006741ed);
    /* 006741ed: cmp dword ptr [ebp - 8], 0x354 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x354u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006741f4: jae 0x674223 */ if (!fC) goto L_00674223;
L_006741f6:; BB(0x006741f6);
    /* 006741f6: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 006741f9: imul esi, esi, 0x354 */ { i64 t = (i64)(i32)r_esi * (i64)(i32)0x354u; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006741ff: add esi, dword ptr [ebp - 8] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00674202: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00674205: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 00674208: call 0x62e6f0 */ r_esp -= 4; W32(r_esp, 0x67420du); f_0062e6f0();
    /* 0067420d: imul eax, dword ptr [ebp - 0xc] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xfffffff4u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00674211: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00674214: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00674217: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0067421a: mov dl, byte ptr [edx + esi + 0x16] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edx+r_esi+0x16u))) & 0xffu);
    /* 0067421e: mov byte ptr [ecx + eax], dl */ W8((u32)(r_ecx+r_eax), (u8)r_edx);
    /* 00674221: jmp 0x6741e4 */ goto L_006741e4;
L_00674223:; BB(0x00674223);
    /* 00674223: jmp 0x6741c3 */ goto L_006741c3;
L_00674225:; BB(0x00674225);
    /* 00674225: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00674228: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0067422b: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0067422e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067422f: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x674234u); f_00686cae();
    /* 00674234: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00674237: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00674238: mov esp, ebp */ r_esp = r_ebp;
    /* 0067423a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067423b: ret  */ FN_RET(0x00674160); r_esp += 4; return;
}

void f_00674270(void) /* sub_674270 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00674270);
    /* 00674270: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00674271: mov ebp, esp */ r_ebp = r_esp;
    /* 00674273: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00674276: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00674279: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067427b: mov ecx, dword ptr [0x16306d0] */ r_ecx = R32((u32)(0x16306d0u));
    /* 00674281: call 0x5fb720 */ r_esp -= 4; W32(r_esp, 0x674286u); f_005fb720();
    /* 00674286: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00674289: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0067428c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0067428e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00674291: mov eax, dword ptr [edx + 0xc4] */ r_eax = R32((u32)(r_edx+0xc4u));
    /* 00674297: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x674299u); call_ind(t); }
    /* 00674299: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067429b: mov ecx, dword ptr [0x16306d0] */ r_ecx = R32((u32)(0x16306d0u));
    /* 006742a1: call 0x5fb720 */ r_esp -= 4; W32(r_esp, 0x6742a6u); f_005fb720();
    /* 006742a6: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 006742a9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006742ab: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006742ae: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006742b0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006742b3: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 006742b9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6742bbu); call_ind(t); }
    /* 006742bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006742bc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006742bf: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006742c1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006742c4: mov eax, dword ptr [edx + 0xf0] */ r_eax = R32((u32)(r_edx+0xf0u));
    /* 006742ca: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6742ccu); call_ind(t); }
    /* 006742cc: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 006742cf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006742d1: je 0x6742fc */ if (fZ) goto L_006742fc;
L_006742d3:; BB(0x006742d3);
    /* 006742d3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006742d5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006742d8: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006742da: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006742dd: mov edx, dword ptr [eax + 0xb8] */ r_edx = R32((u32)(r_eax+0xb8u));
    /* 006742e3: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6742e5u); call_ind(t); }
    /* 006742e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006742e6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006742e8: mov ecx, dword ptr [0x16306d0] */ r_ecx = R32((u32)(0x16306d0u));
    /* 006742ee: call 0x5fb720 */ r_esp -= 4; W32(r_esp, 0x6742f3u); f_005fb720();
    /* 006742f3: mov ecx, eax */ r_ecx = r_eax;
    /* 006742f5: call 0x628f40 */ r_esp -= 4; W32(r_esp, 0x6742fau); f_00628f40();
    /* 006742fa: jmp 0x674332 */ goto L_00674332;
L_006742fc:; BB(0x006742fc);
    /* 006742fc: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00674301: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00674303: mov ecx, dword ptr [0x16306d0] */ r_ecx = R32((u32)(0x16306d0u));
    /* 00674309: call 0x5fb5a0 */ r_esp -= 4; W32(r_esp, 0x67430eu); f_005fb5a0();
    /* 0067430e: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00674313: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00674315: mov ecx, dword ptr [0x16306d0] */ r_ecx = R32((u32)(0x16306d0u));
    /* 0067431b: call 0x5fb5a0 */ r_esp -= 4; W32(r_esp, 0x674320u); f_005fb5a0();
    /* 00674320: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00674325: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00674327: mov ecx, dword ptr [0x16306d0] */ r_ecx = R32((u32)(0x16306d0u));
    /* 0067432d: call 0x5fb5a0 */ r_esp -= 4; W32(r_esp, 0x674332u); f_005fb5a0();
L_00674332:; BB(0x00674332);
    /* 00674332: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00674335: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00674337: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0067433a: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 00674340: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x674342u); call_ind(t); }
    /* 00674342: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00674343: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00674346: call 0x5ee710 */ r_esp -= 4; W32(r_esp, 0x67434bu); f_005ee710();
    /* 0067434b: mov esp, ebp */ r_esp = r_ebp;
    /* 0067434d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067434e: ret  */ FN_RET(0x00674270); r_esp += 4; return;
}

void f_00674960(void) /* sub_674960 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00674960);
    /* 00674960: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00674961: mov ebp, esp */ r_ebp = r_esp;
    /* 00674963: sub esp, 0x754 */ {  u32 a = r_esp; u32 b = 0x754u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00674969: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0067496e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00674970: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00674973: mov dword ptr [ebp - 0x214], 0x6e1920 */ W32((u32)(r_ebp+0xfffffdecu), 0x6e1920u);
    /* 0067497d: push 0x795fc0 */ { u32 v = 0x795fc0u; r_esp -= 4; W32(r_esp, v); }
    /* 00674982: call dword ptr [0x6b22f0] */ { u32 t = R32((u32)(0x6b22f0u)); r_esp -= 4; W32(r_esp, 0x674988u); call_ind(t); }
    /* 00674988: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067498b: push 0x795fc0 */ { u32 v = 0x795fc0u; r_esp -= 4; W32(r_esp, v); }
    /* 00674990: lea eax, [ebp - 0x750] */ r_eax = (u32)(r_ebp+0xfffff8b0u);
    /* 00674996: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00674997: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x67499cu); f_00686d8e();
    /* 0067499c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067499f: push 0x6d61f8 */ { u32 v = 0x6d61f8u; r_esp -= 4; W32(r_esp, v); }
    /* 006749a4: lea ecx, [ebp - 0x750] */ r_ecx = (u32)(r_ebp+0xfffff8b0u);
    /* 006749aa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006749ab: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x6749b0u); f_00686ec6();
    /* 006749b0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006749b3: push 0x6dedb8 */ { u32 v = 0x6dedb8u; r_esp -= 4; W32(r_esp, v); }
    /* 006749b8: lea edx, [ebp - 0x750] */ r_edx = (u32)(r_ebp+0xfffff8b0u);
    /* 006749be: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006749bf: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x6749c4u); f_00686ec6();
    /* 006749c4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006749c7: lea eax, [ebp - 0x340] */ r_eax = (u32)(r_ebp+0xfffffcc0u);
    /* 006749cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006749ce: lea ecx, [ebp - 0x750] */ r_ecx = (u32)(r_ebp+0xfffff8b0u);
    /* 006749d4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006749d5: call dword ptr [0x6b2308] */ { u32 t = R32((u32)(0x6b2308u)); r_esp -= 4; W32(r_esp, 0x6749dbu); call_ind(t); }
    /* 006749db: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006749de: mov dword ptr [ebp - 0x218], eax */ W32((u32)(r_ebp+0xfffffde8u), r_eax);
    /* 006749e4: cmp dword ptr [ebp - 0x218], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffde8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006749eb: jge 0x6749f2 */ if ((fS==fO)) goto L_006749f2;
L_006749ed:; BB(0x006749ed);
    /* 006749ed: jmp 0x674b74 */ goto L_00674b74;
L_006749f2:; BB(0x006749f2);
    /* 006749f2: mov edx, dword ptr [ebp - 0x218] */ r_edx = R32((u32)(r_ebp+0xfffffde8u));
    /* 006749f8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006749f9: call dword ptr [0x6b2300] */ { u32 t = R32((u32)(0x6b2300u)); r_esp -= 4; W32(r_esp, 0x6749ffu); call_ind(t); }
    /* 006749ff: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00674a02: mov eax, dword ptr [ebp - 0x214] */ r_eax = R32((u32)(r_ebp+0xfffffdecu));
    /* 00674a08: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00674a09: lea ecx, [ebp - 0x750] */ r_ecx = (u32)(r_ebp+0xfffff8b0u);
    /* 00674a0f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00674a10: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x674a15u); f_00686d8e();
    /* 00674a15: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00674a18: lea edx, [ebp - 0x750] */ r_edx = (u32)(r_ebp+0xfffff8b0u);
    /* 00674a1e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00674a1f: call 0x5ea770 */ r_esp -= 4; W32(r_esp, 0x674a24u); f_005ea770();
    /* 00674a24: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00674a27: push 0x6d61f8 */ { u32 v = 0x6d61f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00674a2c: lea eax, [ebp - 0x750] */ r_eax = (u32)(r_ebp+0xfffff8b0u);
    /* 00674a32: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00674a33: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x674a38u); f_00686ec6();
    /* 00674a38: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00674a3b: push 0x6dedb8 */ { u32 v = 0x6dedb8u; r_esp -= 4; W32(r_esp, v); }
    /* 00674a40: lea ecx, [ebp - 0x750] */ r_ecx = (u32)(r_ebp+0xfffff8b0u);
    /* 00674a46: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00674a47: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x674a4cu); f_00686ec6();
    /* 00674a4c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00674a4f: lea edx, [ebp - 0x340] */ r_edx = (u32)(r_ebp+0xfffffcc0u);
    /* 00674a55: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00674a56: lea eax, [ebp - 0x750] */ r_eax = (u32)(r_ebp+0xfffff8b0u);
    /* 00674a5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00674a5d: call dword ptr [0x6b2308] */ { u32 t = R32((u32)(0x6b2308u)); r_esp -= 4; W32(r_esp, 0x674a63u); call_ind(t); }
    /* 00674a63: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00674a66: mov dword ptr [ebp - 0x754], eax */ W32((u32)(r_ebp+0xfffff8acu), r_eax);
    /* 00674a6c: cmp dword ptr [ebp - 0x754], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffff8acu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00674a73: jge 0x674a7a */ if ((fS==fO)) goto L_00674a7a;
L_00674a75:; BB(0x00674a75);
    /* 00674a75: jmp 0x674b74 */ goto L_00674b74;
L_00674a7a:; BB(0x00674a7a);
    /* 00674a7a: mov ecx, dword ptr [ebp - 0x214] */ r_ecx = R32((u32)(r_ebp+0xfffffdecu));
    /* 00674a80: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00674a81: lea edx, [ebp - 0x750] */ r_edx = (u32)(r_ebp+0xfffff8b0u);
    /* 00674a87: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00674a88: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x674a8du); f_00686d8e();
    /* 00674a8d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00674a90: lea eax, [ebp - 0x750] */ r_eax = (u32)(r_ebp+0xfffff8b0u);
    /* 00674a96: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00674a97: call 0x5ea770 */ r_esp -= 4; W32(r_esp, 0x674a9cu); f_005ea770();
    /* 00674a9c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00674a9f: push 0x6d61f8 */ { u32 v = 0x6d61f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00674aa4: lea ecx, [ebp - 0x750] */ r_ecx = (u32)(r_ebp+0xfffff8b0u);
    /* 00674aaa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00674aab: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x674ab0u); f_00686ec6();
    /* 00674ab0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00674ab3:; BB(0x00674ab3);
    /* 00674ab3: mov edx, 1 */ r_edx = 0x1u;
    /* 00674ab8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00674aba: je 0x674b64 */ if (fZ) goto L_00674b64;
L_00674ac0:; BB(0x00674ac0);
    /* 00674ac0: lea eax, [ebp - 0x750] */ r_eax = (u32)(r_ebp+0xfffff8b0u);
    /* 00674ac6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00674ac7: lea ecx, [ebp - 0x548] */ r_ecx = (u32)(r_ebp+0xfffffab8u);
    /* 00674acd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00674ace: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x674ad3u); f_00686d8e();
    /* 00674ad3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00674ad6: lea edx, [ebp - 0x31c] */ r_edx = (u32)(r_ebp+0xfffffce4u);
    /* 00674adc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00674add: lea eax, [ebp - 0x548] */ r_eax = (u32)(r_ebp+0xfffffab8u);
    /* 00674ae3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00674ae4: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x674ae9u); f_00686ec6();
    /* 00674ae9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00674aec: push 0x795fc0 */ { u32 v = 0x795fc0u; r_esp -= 4; W32(r_esp, v); }
    /* 00674af1: lea ecx, [ebp - 0x210] */ r_ecx = (u32)(r_ebp+0xfffffdf0u);
    /* 00674af7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00674af8: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x674afdu); f_00686d8e();
    /* 00674afd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00674b00: push 0x6d61f8 */ { u32 v = 0x6d61f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00674b05: lea edx, [ebp - 0x210] */ r_edx = (u32)(r_ebp+0xfffffdf0u);
    /* 00674b0b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00674b0c: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x674b11u); f_00686ec6();
    /* 00674b11: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00674b14: lea eax, [ebp - 0x31c] */ r_eax = (u32)(r_ebp+0xfffffce4u);
    /* 00674b1a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00674b1b: lea ecx, [ebp - 0x210] */ r_ecx = (u32)(r_ebp+0xfffffdf0u);
    /* 00674b21: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00674b22: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x674b27u); f_00686ec6();
    /* 00674b27: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00674b2a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00674b2c: lea edx, [ebp - 0x210] */ r_edx = (u32)(r_ebp+0xfffffdf0u);
    /* 00674b32: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00674b33: lea eax, [ebp - 0x548] */ r_eax = (u32)(r_ebp+0xfffffab8u);
    /* 00674b39: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00674b3a: call 0x5ea040 */ r_esp -= 4; W32(r_esp, 0x674b3fu); f_005ea040();
    /* 00674b3f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00674b42: lea ecx, [ebp - 0x340] */ r_ecx = (u32)(r_ebp+0xfffffcc0u);
    /* 00674b48: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00674b49: mov edx, dword ptr [ebp - 0x754] */ r_edx = R32((u32)(r_ebp+0xfffff8acu));
    /* 00674b4f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00674b50: call dword ptr [0x6b2304] */ { u32 t = R32((u32)(0x6b2304u)); r_esp -= 4; W32(r_esp, 0x674b56u); call_ind(t); }
    /* 00674b56: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00674b59: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00674b5b: je 0x674b5f */ if (fZ) goto L_00674b5f;
L_00674b5d:; BB(0x00674b5d);
    /* 00674b5d: jmp 0x674b64 */ goto L_00674b64;
L_00674b5f:; BB(0x00674b5f);
    /* 00674b5f: jmp 0x674ab3 */ goto L_00674ab3;
L_00674b64:; BB(0x00674b64);
    /* 00674b64: mov eax, dword ptr [ebp - 0x754] */ r_eax = R32((u32)(r_ebp+0xfffff8acu));
    /* 00674b6a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00674b6b: call dword ptr [0x6b2300] */ { u32 t = R32((u32)(0x6b2300u)); r_esp -= 4; W32(r_esp, 0x674b71u); call_ind(t); }
    /* 00674b71: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00674b74:; BB(0x00674b74);
    /* 00674b74: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00674b77: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00674b79: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x674b7eu); f_00686d72();
    /* 00674b7e: mov esp, ebp */ r_esp = r_ebp;
    /* 00674b80: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00674b81: ret  */ FN_RET(0x00674960); r_esp += 4; return;
}

void f_00674b90(void) /* sub_674B90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00674b90);
    /* 00674b90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00674b91: mov ebp, esp */ r_ebp = r_esp;
    /* 00674b93: sub esp, 0x218 */ {  u32 a = r_esp; u32 b = 0x218u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00674b99: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00674b9e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00674ba0: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00674ba3: mov al, byte ptr [0x6b27f8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0x6b27f8u))) & 0xffu);
    /* 00674ba8: mov byte ptr [ebp - 0x110], al */ W8((u32)(r_ebp+0xfffffef0u), (u8)r_eax);
    /* 00674bae: push 0x103 */ { u32 v = 0x103u; r_esp -= 4; W32(r_esp, v); }
    /* 00674bb3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00674bb5: lea ecx, [ebp - 0x10f] */ r_ecx = (u32)(r_ebp+0xfffffef1u);
    /* 00674bbb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00674bbc: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x674bc1u); f_00686fa2();
    /* 00674bc1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00674bc4: push 0x6e192c */ { u32 v = 0x6e192cu; r_esp -= 4; W32(r_esp, v); }
    /* 00674bc9: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x674bceu); f_00630f40();
    /* 00674bce: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00674bd1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00674bd2: push 0x795fc0 */ { u32 v = 0x795fc0u; r_esp -= 4; W32(r_esp, v); }
    /* 00674bd7: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x674bdcu); f_00686d8e();
    /* 00674bdc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00674bdf: call 0x674960 */ r_esp -= 4; W32(r_esp, 0x674be4u); f_00674960();
    /* 00674be4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00674be7: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00674be9: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x674beeu); f_00686d72();
    /* 00674bee: mov esp, ebp */ r_esp = r_ebp;
    /* 00674bf0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00674bf1: ret  */ FN_RET(0x00674b90); r_esp += 4; return;
}

void f_00674c00(void) /* sub_674C00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00674c00);
    /* 00674c00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00674c01: mov ebp, esp */ r_ebp = r_esp;
    /* 00674c03: sub esp, 0x108 */ {  u32 a = r_esp; u32 b = 0x108u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00674c09: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00674c0e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00674c10: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00674c13: mov dword ptr [ebp - 4], 0xa */ W32((u32)(r_ebp+0xfffffffcu), 0xau);
    /* 00674c1a: jmp 0x674c25 */ goto L_00674c25;
L_00674c1c:; BB(0x00674c1c);
    /* 00674c1c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00674c1f: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00674c22: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00674c25:; BB(0x00674c25);
    /* 00674c25: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00674c29: jl 0x674c58 */ if ((fS!=fO)) goto L_00674c58;
L_00674c2b:; BB(0x00674c2b);
    /* 00674c2b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00674c2e: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00674c31: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00674c32: push 0x6e1948 */ { u32 v = 0x6e1948u; r_esp -= 4; W32(r_esp, v); }
    /* 00674c37: lea edx, [ebp - 0x108] */ r_edx = (u32)(r_ebp+0xfffffef8u);
    /* 00674c3d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00674c3e: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x674c44u); call_ind(t); }
    /* 00674c44: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00674c47: lea eax, [ebp - 0x108] */ r_eax = (u32)(r_ebp+0xfffffef8u);
    /* 00674c4d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00674c4e: call 0x604a20 */ r_esp -= 4; W32(r_esp, 0x674c53u); f_00604a20();
    /* 00674c53: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00674c56: jmp 0x674c1c */ goto L_00674c1c;
L_00674c58:; BB(0x00674c58);
    /* 00674c58: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00674c5b: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00674c5d: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x674c62u); f_00686d72();
    /* 00674c62: mov esp, ebp */ r_esp = r_ebp;
    /* 00674c64: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00674c65: ret  */ FN_RET(0x00674c00); r_esp += 4; return;
}

void f_00674c70(void) /* sub_674C70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00674c70);
    /* 00674c70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00674c71: mov ebp, esp */ r_ebp = r_esp;
    /* 00674c73: sub esp, 0x40c */ {  u32 a = r_esp; u32 b = 0x40cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00674c79: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00674c7e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00674c80: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00674c83: mov byte ptr [ebp - 0x408], 0 */ W8((u32)(r_ebp+0xfffffbf8u), 0x0u);
    /* 00674c8a: push 0x3ff */ { u32 v = 0x3ffu; r_esp -= 4; W32(r_esp, v); }
    /* 00674c8f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00674c91: lea eax, [ebp - 0x407] */ r_eax = (u32)(r_ebp+0xfffffbf9u);
    /* 00674c97: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00674c98: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x674c9du); f_00686fa2();
    /* 00674c9d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00674ca0: call 0x674b90 */ r_esp -= 4; W32(r_esp, 0x674ca5u); f_00674b90();
    /* 00674ca5: push 0x6d61f8 */ { u32 v = 0x6d61f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00674caa: push 0x795fc0 */ { u32 v = 0x795fc0u; r_esp -= 4; W32(r_esp, v); }
    /* 00674caf: push 0x6e1950 */ { u32 v = 0x6e1950u; r_esp -= 4; W32(r_esp, v); }
    /* 00674cb4: lea ecx, [ebp - 0x408] */ r_ecx = (u32)(r_ebp+0xfffffbf8u);
    /* 00674cba: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00674cbb: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x674cc1u); call_ind(t); }
    /* 00674cc1: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00674cc4: push 0x6d8524 */ { u32 v = 0x6d8524u; r_esp -= 4; W32(r_esp, v); }
    /* 00674cc9: lea edx, [ebp - 0x408] */ r_edx = (u32)(r_ebp+0xfffffbf8u);
    /* 00674ccf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00674cd0: call 0x5ea9c0 */ r_esp -= 4; W32(r_esp, 0x674cd5u); f_005ea9c0();
    /* 00674cd5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00674cd8: mov dword ptr [ebp - 0x40c], eax */ W32((u32)(r_ebp+0xfffffbf4u), r_eax);
    /* 00674cde: cmp dword ptr [ebp - 0x40c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffbf4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00674ce5: je 0x674cf7 */ if (fZ) goto L_00674cf7;
L_00674ce7:; BB(0x00674ce7);
    /* 00674ce7: mov eax, dword ptr [ebp - 0x40c] */ r_eax = R32((u32)(r_ebp+0xfffffbf4u));
    /* 00674ced: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00674cee: call dword ptr [0x6b2258] */ { u32 t = R32((u32)(0x6b2258u)); r_esp -= 4; W32(r_esp, 0x674cf4u); call_ind(t); }
    /* 00674cf4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00674cf7:; BB(0x00674cf7);
    /* 00674cf7: push 0x795fc0 */ { u32 v = 0x795fc0u; r_esp -= 4; W32(r_esp, v); }
    /* 00674cfc: call 0x604810 */ r_esp -= 4; W32(r_esp, 0x674d01u); f_00604810();
    /* 00674d01: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00674d04: push 0xf9060 */ { u32 v = 0xf9060u; r_esp -= 4; W32(r_esp, v); }
    /* 00674d09: call 0x674c00 */ r_esp -= 4; W32(r_esp, 0x674d0eu); f_00674c00();
    /* 00674d0e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00674d11: push 0xf4240 */ { u32 v = 0xf4240u; r_esp -= 4; W32(r_esp, v); }
    /* 00674d16: call 0x674c00 */ r_esp -= 4; W32(r_esp, 0x674d1bu); f_00674c00();
    /* 00674d1b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00674d1e: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 00674d24: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00674d26: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 00674d2c: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 00674d2f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x674d31u); call_ind(t); }
    /* 00674d31: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00674d34: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00674d36: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x674d3bu); f_00686d72();
    /* 00674d3b: mov esp, ebp */ r_esp = r_ebp;
    /* 00674d3d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00674d3e: ret  */ FN_RET(0x00674c70); r_esp += 4; return;
}

