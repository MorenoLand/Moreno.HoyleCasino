#include "protos.h"

void f_00571800(void) /* sub_571800 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00571800);
    /* 00571800: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00571801: mov ebp, esp */ r_ebp = r_esp;
    /* 00571803: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00571806: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00571809: mov word ptr [ebp - 0x10], 0xffff */ W16((u32)(r_ebp+0xfffffff0u), 0xffffu);
    /* 0057180f: fldz  */ FPUSH(0.0);
    /* 00571811: fstp qword ptr [ebp - 8] */ W_F64((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 00571814: push 0xf4240 */ { u32 v = 0xf4240u; r_esp -= 4; W32(r_esp, v); }
    /* 00571819: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x57181eu); f_0062fbf0();
    /* 0057181e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00571821: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00571824: mov word ptr [ebp - 0xc], 0 */ W16((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0057182a: jmp 0x571838 */ goto L_00571838;
L_0057182c:; BB(0x0057182c);
    /* 0057182c: mov ax, word ptr [ebp - 0xc] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff4u))) & 0xffffu);
    /* 00571830: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00571834: mov word ptr [ebp - 0xc], ax */ W16((u32)(r_ebp+0xfffffff4u), (u16)r_eax);
L_00571838:; BB(0x00571838);
    /* 00571838: movsx ecx, word ptr [ebp - 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 0057183c: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057183f: jge 0x571871 */ if ((fS==fO)) goto L_00571871;
L_00571841:; BB(0x00571841);
    /* 00571841: movsx edx, word ptr [ebp - 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 00571845: fld qword ptr [0x6ca358] */ FPUSH(R_F64((u32)(0x6ca358u)));
    /* 0057184b: fmul qword ptr [edx*8 + 0x748928] */ ST(0) = ST(0) * R_F64((u32)(r_edx*8+0x748928u));
    /* 00571852: fadd qword ptr [ebp - 8] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xfffffff8u));
    /* 00571855: fstp qword ptr [ebp - 8] */ W_F64((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 00571858: fild dword ptr [ebp - 0x14] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffecu)));
    /* 0057185b: fcomp qword ptr [ebp - 8] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xfffffff8u))); FPOP();
    /* 0057185e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00571860: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 00571863: jp 0x57186f */ if (fP) goto L_0057186f;
L_00571865:; BB(0x00571865);
    /* 00571865: mov ax, word ptr [ebp - 0xc] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff4u))) & 0xffffu);
    /* 00571869: mov word ptr [ebp - 0x10], ax */ W16((u32)(r_ebp+0xfffffff0u), (u16)r_eax);
    /* 0057186d: jmp 0x571871 */ goto L_00571871;
L_0057186f:; BB(0x0057186f);
    /* 0057186f: jmp 0x57182c */ goto L_0057182c;
L_00571871:; BB(0x00571871);
    /* 00571871: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00571875: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00571878: jne 0x571884 */ if (!fZ) goto L_00571884;
L_0057187a:; BB(0x0057187a);
    /* 0057187a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057187d: call 0x571a50 */ r_esp -= 4; W32(r_esp, 0x571882u); f_00571a50();
    /* 00571882: jmp 0x571891 */ goto L_00571891;
L_00571884:; BB(0x00571884);
    /* 00571884: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00571888: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00571889: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057188c: call 0x571ba0 */ r_esp -= 4; W32(r_esp, 0x571891u); f_00571ba0();
L_00571891:; BB(0x00571891);
    /* 00571891: mov esp, ebp */ r_esp = r_ebp;
    /* 00571893: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00571894: ret  */ FN_RET(0x00571800); r_esp += 4; return;
}

void f_005718a0(void) /* sub_5718A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005718a0);
    /* 005718a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005718a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005718a3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005718a6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005718a9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005718b0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005718b3: call 0x571cb0 */ r_esp -= 4; W32(r_esp, 0x5718b8u); f_00571cb0();
    /* 005718b8: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005718bb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005718bd: je 0x57196a */ if (fZ) goto L_0057196a;
L_005718c3:; BB(0x005718c3);
    /* 005718c3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005718c6: call 0x571c30 */ r_esp -= 4; W32(r_esp, 0x5718cbu); f_00571c30();
    /* 005718cb: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005718ce: cmp dword ptr [ebp - 8], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005718d2: jge 0x57193a */ if ((fS==fO)) goto L_0057193a;
L_005718d4:; BB(0x005718d4);
    /* 005718d4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005718d7: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005718da: mov eax, dword ptr [ecx*4 + 0x7488f0] */ r_eax = R32((u32)(r_ecx*4+0x7488f0u));
    /* 005718e1: imul eax, dword ptr [edx + 0x38] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_edx+0x38u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005718e5: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005718e8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005718eb: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 005718ee: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005718f1: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005718f4: mov dword ptr [eax + 0x3c], edx */ W32((u32)(r_eax+0x3cu), r_edx);
    /* 005718f7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005718fa: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005718fd: mov eax, dword ptr [edx + ecx*4 + 0x40] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x40u));
    /* 00571901: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00571904: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00571907: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0057190a: mov dword ptr [edx + ecx*4 + 0x40], eax */ W32((u32)(r_edx+r_ecx*4+0x40u), r_eax);
    /* 0057190e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00571911: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 00571914: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00571917: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0057191a: mov dword ptr [edx + 0x60], ecx */ W32((u32)(r_edx+0x60u), r_ecx);
    /* 0057191d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00571920: movzx ecx, byte ptr [eax + 4] */ r_ecx = (u32)R8((u32)(r_eax+0x4u));
    /* 00571924: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00571926: je 0x57193a */ if (fZ) goto L_0057193a;
L_00571928:; BB(0x00571928);
    /* 00571928: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057192c: je 0x57193a */ if (fZ) goto L_0057193a;
L_0057192e:; BB(0x0057192e);
    /* 0057192e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00571931: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00571932: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00571935: call 0x571d30 */ r_esp -= 4; W32(r_esp, 0x57193au); f_00571d30();
L_0057193a:; BB(0x0057193a);
    /* 0057193a: cmp dword ptr [ebp - 8], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057193e: jne 0x57195c */ if (!fZ) goto L_0057195c;
L_00571940:; BB(0x00571940);
    /* 00571940: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00571943: movzx ecx, byte ptr [eax + 4] */ r_ecx = (u32)R8((u32)(r_eax+0x4u));
    /* 00571947: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00571949: jne 0x57195c */ if (!fZ) goto L_0057195c;
L_0057194b:; BB(0x0057194b);
    /* 0057194b: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0057194e: mov byte ptr [edx + 4], 1 */ W8((u32)(r_edx+0x4u), 0x1u);
    /* 00571952: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00571955: mov dword ptr [eax + 0x34], 0 */ W32((u32)(r_eax+0x34u), 0x0u);
L_0057195c:; BB(0x0057195c);
    /* 0057195c: cmp dword ptr [ebp - 8], 9 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00571960: jne 0x57196a */ if (!fZ) goto L_0057196a;
L_00571962:; BB(0x00571962);
    /* 00571962: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00571965: call 0x571d90 */ r_esp -= 4; W32(r_esp, 0x57196au); f_00571d90();
L_0057196a:; BB(0x0057196a);
    /* 0057196a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0057196d: movzx edx, byte ptr [ecx + 4] */ r_edx = (u32)R8((u32)(r_ecx+0x4u));
    /* 00571971: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00571973: je 0x571985 */ if (fZ) goto L_00571985;
L_00571975:; BB(0x00571975);
    /* 00571975: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00571978: cmp dword ptr [eax + 0x34], 0x14 */ {  u32 a = R32((u32)(r_eax+0x34u)); u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057197c: jl 0x571985 */ if ((fS!=fO)) goto L_00571985;
L_0057197e:; BB(0x0057197e);
    /* 0057197e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00571981: mov byte ptr [ecx + 4], 0 */ W8((u32)(r_ecx+0x4u), 0x0u);
L_00571985:; BB(0x00571985);
    /* 00571985: mov esp, ebp */ r_esp = r_ebp;
    /* 00571987: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00571988: ret  */ FN_RET(0x005718a0); r_esp += 4; return;
}

void f_00571990(void) /* sub_571990 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00571990);
    /* 00571990: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00571991: mov ebp, esp */ r_ebp = r_esp;
    /* 00571993: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00571996: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00571999: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005719a0: jmp 0x5719ab */ goto L_005719ab;
L_005719a2:; BB(0x005719a2);
    /* 005719a2: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005719a5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005719a8: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_005719ab:; BB(0x005719ab);
    /* 005719ab: cmp dword ptr [ebp - 8], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005719af: jge 0x5719c2 */ if ((fS==fO)) goto L_005719c2;
L_005719b1:; BB(0x005719b1);
    /* 005719b1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005719b4: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005719b7: cmp dword ptr [edx + ecx*4 + 0x18], -1 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x18u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005719bc: jne 0x5719c0 */ if (!fZ) goto L_005719c0;
L_005719be:; BB(0x005719be);
    /* 005719be: jmp 0x5719c2 */ goto L_005719c2;
L_005719c0:; BB(0x005719c0);
    /* 005719c0: jmp 0x5719a2 */ goto L_005719a2;
L_005719c2:; BB(0x005719c2);
    /* 005719c2: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005719c6: jne 0x5719cc */ if (!fZ) goto L_005719cc;
L_005719c8:; BB(0x005719c8);
    /* 005719c8: jmp 0x571a41 */ goto L_00571a41;
L_005719cc:; BB(0x005719cc);
    /* 005719cc: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005719d0: jne 0x5719dc */ if (!fZ) goto L_005719dc;
L_005719d2:; BB(0x005719d2);
    /* 005719d2: mov eax, dword ptr [0x748918] */ r_eax = R32((u32)(0x748918u));
    /* 005719d7: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005719da: jmp 0x571a06 */ goto L_00571a06;
L_005719dc:; BB(0x005719dc);
    /* 005719dc: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005719e0: jge 0x5719ed */ if ((fS==fO)) goto L_005719ed;
L_005719e2:; BB(0x005719e2);
    /* 005719e2: mov ecx, dword ptr [0x74891c] */ r_ecx = R32((u32)(0x74891cu));
    /* 005719e8: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005719eb: jmp 0x571a06 */ goto L_00571a06;
L_005719ed:; BB(0x005719ed);
    /* 005719ed: cmp dword ptr [ebp - 8], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005719f1: jge 0x5719fe */ if ((fS==fO)) goto L_005719fe;
L_005719f3:; BB(0x005719f3);
    /* 005719f3: mov edx, dword ptr [0x748920] */ r_edx = R32((u32)(0x748920u));
    /* 005719f9: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005719fc: jmp 0x571a06 */ goto L_00571a06;
L_005719fe:; BB(0x005719fe);
    /* 005719fe: mov eax, dword ptr [0x748924] */ r_eax = R32((u32)(0x748924u));
    /* 00571a03: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00571a06:; BB(0x00571a06);
    /* 00571a06: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00571a09: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 00571a0c: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00571a0f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00571a12: mov dword ptr [eax + 0x3c], edx */ W32((u32)(r_eax+0x3cu), r_edx);
    /* 00571a15: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00571a18: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00571a1b: mov eax, dword ptr [edx + ecx*4 + 0x60] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x60u));
    /* 00571a1f: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00571a22: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00571a25: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00571a28: mov dword ptr [edx + ecx*4 + 0x60], eax */ W32((u32)(r_edx+r_ecx*4+0x60u), r_eax);
    /* 00571a2c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00571a2f: mov ecx, dword ptr [eax + 0x80] */ r_ecx = R32((u32)(r_eax+0x80u));
    /* 00571a35: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00571a38: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00571a3b: mov dword ptr [edx + 0x80], ecx */ W32((u32)(r_edx+0x80u), r_ecx);
L_00571a41:; BB(0x00571a41);
    /* 00571a41: mov esp, ebp */ r_esp = r_ebp;
    /* 00571a43: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00571a44: ret  */ FN_RET(0x00571990); r_esp += 4; return;
}

void f_00571a50(void) /* sub_571A50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00571a50);
    /* 00571a50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00571a51: mov ebp, esp */ r_ebp = r_esp;
    /* 00571a53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00571a54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00571a57: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00571a59: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x571a5eu); f_0062fbf0();
    /* 00571a5e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00571a61: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00571a64: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 00571a67: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00571a69: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x571a6eu); f_0062fbf0();
    /* 00571a6e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00571a71: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00571a74: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 00571a77: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00571a7a: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 00571a7d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00571a7e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00571a81: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00571a84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00571a85: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00571a88: call 0x571c80 */ r_esp -= 4; W32(r_esp, 0x571a8du); f_00571c80();
    /* 00571a8d: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00571a90: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00571a92: je 0x571abe */ if (fZ) goto L_00571abe;
L_00571a94:; BB(0x00571a94);
    /* 00571a94: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00571a96: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x571a9bu); f_0062fbf0();
    /* 00571a9b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00571a9e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00571aa1: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 00571aa4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00571aa7: cmp dword ptr [eax + 0x10], 1 */ {  u32 a = R32((u32)(r_eax+0x10u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00571aab: jl 0x571abc */ if ((fS!=fO)) goto L_00571abc;
L_00571aad:; BB(0x00571aad);
    /* 00571aad: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00571ab0: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 00571ab3: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00571ab6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00571ab9: mov dword ptr [eax + 0x10], edx */ W32((u32)(r_eax+0x10u), r_edx);
L_00571abc:; BB(0x00571abc);
    /* 00571abc: jmp 0x571ace */ goto L_00571ace;
L_00571abe:; BB(0x00571abe);
    /* 00571abe: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00571ac0: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x571ac5u); f_0062fbf0();
    /* 00571ac5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00571ac8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00571acb: mov dword ptr [ecx + 0x10], eax */ W32((u32)(r_ecx+0x10u), r_eax);
L_00571ace:; BB(0x00571ace);
    /* 00571ace: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00571ad1: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 00571ad4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00571ad5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00571ad8: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00571adb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00571adc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00571adf: call 0x571c80 */ r_esp -= 4; W32(r_esp, 0x571ae4u); f_00571c80();
    /* 00571ae4: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00571ae7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00571ae9: je 0x571b8a */ if (fZ) goto L_00571b8a;
L_00571aef:; BB(0x00571aef);
    /* 00571aef: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00571af2: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 00571af5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00571af6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00571af9: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00571afc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00571afd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00571b00: call 0x571c80 */ r_esp -= 4; W32(r_esp, 0x571b05u); f_00571c80();
    /* 00571b05: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00571b08: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00571b0a: je 0x571b8a */ if (fZ) goto L_00571b8a;
L_00571b0c:; BB(0x00571b0c);
    /* 00571b0c: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00571b0e: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x571b13u); f_0062fbf0();
    /* 00571b13: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00571b16: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00571b19: mov dword ptr [ecx + 0x14], eax */ W32((u32)(r_ecx+0x14u), r_eax);
    /* 00571b1c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00571b1f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00571b22: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 00571b25: cmp ecx, dword ptr [eax + 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x10u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00571b28: jl 0x571b53 */ if ((fS!=fO)) goto L_00571b53;
L_00571b2a:; BB(0x00571b2a);
    /* 00571b2a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00571b2d: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 00571b30: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00571b33: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00571b36: mov dword ptr [ecx + 0x14], eax */ W32((u32)(r_ecx+0x14u), r_eax);
    /* 00571b39: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00571b3c: cmp dword ptr [edx + 0x14], 1 */ {  u32 a = R32((u32)(r_edx+0x14u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00571b40: jl 0x571b51 */ if ((fS!=fO)) goto L_00571b51;
L_00571b42:; BB(0x00571b42);
    /* 00571b42: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00571b45: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00571b48: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00571b4b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00571b4e: mov dword ptr [edx + 0x14], ecx */ W32((u32)(r_edx+0x14u), r_ecx);
L_00571b51:; BB(0x00571b51);
    /* 00571b51: jmp 0x571b88 */ goto L_00571b88;
L_00571b53:; BB(0x00571b53);
    /* 00571b53: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00571b56: cmp dword ptr [eax + 0x14], 1 */ {  u32 a = R32((u32)(r_eax+0x14u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00571b5a: jl 0x571b88 */ if ((fS!=fO)) goto L_00571b88;
L_00571b5c:; BB(0x00571b5c);
    /* 00571b5c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00571b5f: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 00571b62: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00571b65: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00571b68: mov dword ptr [eax + 0x14], edx */ W32((u32)(r_eax+0x14u), r_edx);
    /* 00571b6b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00571b6e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00571b71: mov eax, dword ptr [ecx + 0x14] */ r_eax = R32((u32)(r_ecx+0x14u));
    /* 00571b74: cmp eax, dword ptr [edx + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x10u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00571b77: jl 0x571b88 */ if ((fS!=fO)) goto L_00571b88;
L_00571b79:; BB(0x00571b79);
    /* 00571b79: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00571b7c: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 00571b7f: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00571b82: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00571b85: mov dword ptr [eax + 0x14], edx */ W32((u32)(r_eax+0x14u), r_edx);
L_00571b88:; BB(0x00571b88);
    /* 00571b88: jmp 0x571b9a */ goto L_00571b9a;
L_00571b8a:; BB(0x00571b8a);
    /* 00571b8a: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00571b8c: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x571b91u); f_0062fbf0();
    /* 00571b91: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00571b94: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00571b97: mov dword ptr [ecx + 0x14], eax */ W32((u32)(r_ecx+0x14u), r_eax);
L_00571b9a:; BB(0x00571b9a);
    /* 00571b9a: mov esp, ebp */ r_esp = r_ebp;
    /* 00571b9c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00571b9d: ret  */ FN_RET(0x00571a50); r_esp += 4; return;
}

void f_00571ba0(void) /* sub_571BA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00571ba0);
    /* 00571ba0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00571ba1: mov ebp, esp */ r_ebp = r_esp;
    /* 00571ba3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00571ba6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00571ba9: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00571bab: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x571bb0u); f_0062fbf0();
    /* 00571bb0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00571bb3: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 00571bb7: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00571bbb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00571bbe: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00571bc1: mov dword ptr [ecx + eax*4 + 8], edx */ W32((u32)(r_ecx+r_eax*4+0x8u), r_edx);
    /* 00571bc5: mov word ptr [ebp - 8], 0 */ W16((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00571bcb: jmp 0x571bd9 */ goto L_00571bd9;
L_00571bcd:; BB(0x00571bcd);
    /* 00571bcd: mov ax, word ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 00571bd1: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00571bd5: mov word ptr [ebp - 8], ax */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_eax);
L_00571bd9:; BB(0x00571bd9);
    /* 00571bd9: movsx ecx, word ptr [ebp - 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 00571bdd: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00571be0: jge 0x571c1d */ if ((fS==fO)) goto L_00571c1d;
L_00571be2:; BB(0x00571be2);
    /* 00571be2: movsx edx, word ptr [ebp - 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 00571be6: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00571bea: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00571bec: je 0x571c1b */ if (fZ) goto L_00571c1b;
L_00571bee:; BB(0x00571bee);
    /* 00571bee: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00571bf0: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x571bf5u); f_0062fbf0();
    /* 00571bf5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00571bf8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00571bfa: jne 0x571c0d */ if (!fZ) goto L_00571c0d;
L_00571bfc:; BB(0x00571bfc);
    /* 00571bfc: movsx ecx, word ptr [ebp - 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 00571c00: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00571c03: mov dword ptr [edx + ecx*4 + 8], 1 */ W32((u32)(r_edx+r_ecx*4+0x8u), 0x1u);
    /* 00571c0b: jmp 0x571c1b */ goto L_00571c1b;
L_00571c0d:; BB(0x00571c0d);
    /* 00571c0d: movsx eax, word ptr [ebp - 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 00571c11: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00571c14: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00571c17: mov dword ptr [ecx + eax*4 + 8], edx */ W32((u32)(r_ecx+r_eax*4+0x8u), r_edx);
L_00571c1b:; BB(0x00571c1b);
    /* 00571c1b: jmp 0x571bcd */ goto L_00571bcd;
L_00571c1d:; BB(0x00571c1d);
    /* 00571c1d: mov esp, ebp */ r_esp = r_ebp;
    /* 00571c1f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00571c20: ret 4 */ FN_RET(0x00571ba0); r_esp += 8; return;
}

void f_00571c30(void) /* sub_571C30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00571c30);
    /* 00571c30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00571c31: mov ebp, esp */ r_ebp = r_esp;
    /* 00571c33: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00571c36: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00571c39: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 00571c40: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00571c47: jmp 0x571c52 */ goto L_00571c52;
L_00571c49:; BB(0x00571c49);
    /* 00571c49: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00571c4c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00571c4f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00571c52:; BB(0x00571c52);
    /* 00571c52: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00571c56: jge 0x571c76 */ if ((fS==fO)) goto L_00571c76;
L_00571c58:; BB(0x00571c58);
    /* 00571c58: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00571c5b: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00571c5e: cmp dword ptr [edx + ecx*4 + 8], 1 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00571c63: je 0x571c74 */ if (fZ) goto L_00571c74;
L_00571c65:; BB(0x00571c65);
    /* 00571c65: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00571c68: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00571c6b: mov edx, dword ptr [ecx + eax*4 + 8] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 00571c6f: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00571c72: jmp 0x571c76 */ goto L_00571c76;
L_00571c74:; BB(0x00571c74);
    /* 00571c74: jmp 0x571c49 */ goto L_00571c49;
L_00571c76:; BB(0x00571c76);
    /* 00571c76: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00571c79: mov esp, ebp */ r_esp = r_ebp;
    /* 00571c7b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00571c7c: ret  */ FN_RET(0x00571c30); r_esp += 4; return;
}

void f_00571c80(void) /* sub_571C80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00571c80);
    /* 00571c80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00571c81: mov ebp, esp */ r_ebp = r_esp;
    /* 00571c83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00571c84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00571c87: cmp dword ptr [ebp + 8], 1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00571c8b: je 0x571c9b */ if (fZ) goto L_00571c9b;
L_00571c8d:; BB(0x00571c8d);
    /* 00571c8d: cmp dword ptr [ebp + 0xc], 1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00571c91: je 0x571c9b */ if (fZ) goto L_00571c9b;
L_00571c93:; BB(0x00571c93);
    /* 00571c93: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00571c96: cmp eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00571c99: jne 0x571c9f */ if (!fZ) goto L_00571c9f;
L_00571c9b:; BB(0x00571c9b);
    /* 00571c9b: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00571c9d: jmp 0x571ca1 */ goto L_00571ca1;
L_00571c9f:; BB(0x00571c9f);
    /* 00571c9f: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_00571ca1:; BB(0x00571ca1);
    /* 00571ca1: mov esp, ebp */ r_esp = r_ebp;
    /* 00571ca3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00571ca4: ret 8 */ FN_RET(0x00571c80); r_esp += 12; return;
}

void f_00571cb0(void) /* sub_571CB0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00571cb0);
    /* 00571cb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00571cb1: mov ebp, esp */ r_ebp = r_esp;
    /* 00571cb3: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00571cb6: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00571cb9: mov dword ptr [ebp - 8], 0xffffffff */ W32((u32)(r_ebp+0xfffffff8u), 0xffffffffu);
    /* 00571cc0: mov byte ptr [ebp - 9], 1 */ W8((u32)(r_ebp+0xfffffff7u), 0x1u);
    /* 00571cc4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00571ccb: jmp 0x571cd6 */ goto L_00571cd6;
L_00571ccd:; BB(0x00571ccd);
    /* 00571ccd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00571cd0: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00571cd3: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00571cd6:; BB(0x00571cd6);
    /* 00571cd6: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00571cda: jge 0x571d20 */ if ((fS==fO)) goto L_00571d20;
L_00571cdc:; BB(0x00571cdc);
    /* 00571cdc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00571cdf: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00571ce2: jmp 0x571ced */ goto L_00571ced;
L_00571ce4:; BB(0x00571ce4);
    /* 00571ce4: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00571ce7: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00571cea: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_00571ced:; BB(0x00571ced);
    /* 00571ced: cmp dword ptr [ebp - 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00571cf1: jge 0x571d1e */ if ((fS==fO)) goto L_00571d1e;
L_00571cf3:; BB(0x00571cf3);
    /* 00571cf3: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00571cf6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00571cf9: mov edx, dword ptr [ecx + eax*4 + 8] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 00571cfd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00571cfe: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00571d01: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00571d04: mov edx, dword ptr [ecx + eax*4 + 8] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 00571d08: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00571d09: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00571d0c: call 0x571c80 */ r_esp -= 4; W32(r_esp, 0x571d11u); f_00571c80();
    /* 00571d11: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00571d14: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00571d16: jne 0x571d1c */ if (!fZ) goto L_00571d1c;
L_00571d18:; BB(0x00571d18);
    /* 00571d18: mov byte ptr [ebp - 9], 0 */ W8((u32)(r_ebp+0xfffffff7u), 0x0u);
L_00571d1c:; BB(0x00571d1c);
    /* 00571d1c: jmp 0x571ce4 */ goto L_00571ce4;
L_00571d1e:; BB(0x00571d1e);
    /* 00571d1e: jmp 0x571ccd */ goto L_00571ccd;
L_00571d20:; BB(0x00571d20);
    /* 00571d20: mov al, byte ptr [ebp - 9] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff7u))) & 0xffu);
    /* 00571d23: mov esp, ebp */ r_esp = r_ebp;
    /* 00571d25: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00571d26: ret  */ FN_RET(0x00571cb0); r_esp += 4; return;
}

void f_00571d30(void) /* sub_571D30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00571d30);
    /* 00571d30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00571d31: mov ebp, esp */ r_ebp = r_esp;
    /* 00571d33: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00571d36: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00571d39: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00571d3f: jmp 0x571d4d */ goto L_00571d4d;
L_00571d41:; BB(0x00571d41);
    /* 00571d41: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 00571d45: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00571d49: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_00571d4d:; BB(0x00571d4d);
    /* 00571d4d: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00571d51: cmp ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00571d54: jge 0x571d7c */ if ((fS==fO)) goto L_00571d7c;
L_00571d56:; BB(0x00571d56);
    /* 00571d56: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00571d5a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00571d5d: mov ecx, dword ptr [eax + edx*4 + 0x18] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x18u));
    /* 00571d61: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00571d64: jne 0x571d6a */ if (!fZ) goto L_00571d6a;
L_00571d66:; BB(0x00571d66);
    /* 00571d66: jmp 0x571d8a */ goto L_00571d8a;
L_00571d6a:; BB(0x00571d6a);
    /* 00571d6a: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00571d6e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00571d71: cmp dword ptr [eax + edx*4 + 0x18], -1 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x18u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00571d76: jne 0x571d7a */ if (!fZ) goto L_00571d7a;
L_00571d78:; BB(0x00571d78);
    /* 00571d78: jmp 0x571d7c */ goto L_00571d7c;
L_00571d7a:; BB(0x00571d7a);
    /* 00571d7a: jmp 0x571d41 */ goto L_00571d41;
L_00571d7c:; BB(0x00571d7c);
    /* 00571d7c: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00571d80: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00571d83: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00571d86: mov dword ptr [edx + ecx*4 + 0x18], eax */ W32((u32)(r_edx+r_ecx*4+0x18u), r_eax);
L_00571d8a:; BB(0x00571d8a);
    /* 00571d8a: mov esp, ebp */ r_esp = r_ebp;
    /* 00571d8c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00571d8d: ret 4 */ FN_RET(0x00571d30); r_esp += 8; return;
}

void f_00571d90(void) /* sub_571D90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00571d90);
    /* 00571d90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00571d91: mov ebp, esp */ r_ebp = r_esp;
    /* 00571d93: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00571d96: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00571d99: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00571d9f: jmp 0x571dad */ goto L_00571dad;
L_00571da1:; BB(0x00571da1);
    /* 00571da1: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 00571da5: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00571da9: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_00571dad:; BB(0x00571dad);
    /* 00571dad: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00571db1: cmp ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00571db4: jge 0x571dc7 */ if ((fS==fO)) goto L_00571dc7;
L_00571db6:; BB(0x00571db6);
    /* 00571db6: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00571dba: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00571dbd: mov dword ptr [eax + edx*4 + 0x18], 0xffffffff */ W32((u32)(r_eax+r_edx*4+0x18u), 0xffffffffu);
    /* 00571dc5: jmp 0x571da1 */ goto L_00571da1;
L_00571dc7:; BB(0x00571dc7);
    /* 00571dc7: mov esp, ebp */ r_esp = r_ebp;
    /* 00571dc9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00571dca: ret  */ FN_RET(0x00571d90); r_esp += 4; return;
}

