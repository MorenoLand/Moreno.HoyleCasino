#include "protos.h"

void f_00607570(void) /* sciFadeMotion::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00607570);
    /* 00607570: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00607571: mov ebp, esp */ r_ebp = r_esp;
    /* 00607573: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00607574: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00607577: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060757a: cmp dword ptr [eax + 0x10], -1 */ {  u32 a = R32((u32)(r_eax+0x10u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060757e: jne 0x6075af */ if (!fZ) goto L_006075af;
L_00607580:; BB(0x00607580);
    /* 00607580: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00607583: cmp dword ptr [ecx + 0x14], -1 */ {  u32 a = R32((u32)(r_ecx+0x14u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00607587: jne 0x6075af */ if (!fZ) goto L_006075af;
L_00607589:; BB(0x00607589);
    /* 00607589: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0060758c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0060758e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00607591: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 00607594: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x607596u); call_ind(t); }
    /* 00607596: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00607599: mov dword ptr [ecx + 0x10], eax */ W32((u32)(r_ecx+0x10u), r_eax);
    /* 0060759c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0060759f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006075a1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006075a4: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 006075a7: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6075a9u); call_ind(t); }
    /* 006075a9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006075ac: mov dword ptr [ecx + 0x14], eax */ W32((u32)(r_ecx+0x14u), r_eax);
L_006075af:; BB(0x006075af);
    /* 006075af: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006075b2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006075b3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006075b6: call 0x606a60 */ r_esp -= 4; W32(r_esp, 0x6075bbu); f_00606a60();
    /* 006075bb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006075be: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 006075c1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006075c4: add ecx, dword ptr [edx + 0x30] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x30u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006075c7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006075ca: mov dword ptr [eax + 0x28], ecx */ W32((u32)(r_eax+0x28u), r_ecx);
    /* 006075cd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006075d0: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 006075d3: call 0x5eb610 */ r_esp -= 4; W32(r_esp, 0x6075d8u); f_005eb610();
    /* 006075d8: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 006075db: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006075de: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006075e0: cmp dword ptr [eax + 0x2c], 0 */ {  u32 a = R32((u32)(r_eax+0x2cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006075e4: setge cl */ r_ecx = (r_ecx & 0xffffff00u) | ((((fS==fO)) ? 1 : 0) & 0xffu);
    /* 006075e7: lea ecx, [ecx + ecx - 1] */ r_ecx = (u32)(r_ecx+r_ecx+0xffffffffu);
    /* 006075eb: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006075ed: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006075ee: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006075f1: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 006075f4: call 0x5eb5d0 */ r_esp -= 4; W32(r_esp, 0x6075f9u); f_005eb5d0();
    /* 006075f9: mov esp, ebp */ r_esp = r_ebp;
    /* 006075fb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006075fc: ret 4 */ FN_RET(0x00607570); r_esp += 8; return;
}

void f_00607600(void) /* sciFadeMotion::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00607600);
    /* 00607600: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00607601: mov ebp, esp */ r_ebp = r_esp;
    /* 00607603: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00607606: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00607609: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0060760c: movzx ecx, byte ptr [eax + 0xc] */ r_ecx = (u32)R8((u32)(r_eax+0xcu));
    /* 00607610: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00607612: jne 0x607619 */ if (!fZ) goto L_00607619;
L_00607614:; BB(0x00607614);
    /* 00607614: jmp 0x607783 */ goto L_00607783;
L_00607619:; BB(0x00607619);
    /* 00607619: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 0060761f: call 0x5f3e50 */ r_esp -= 4; W32(r_esp, 0x607624u); f_005f3e50();
    /* 00607624: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00607627: sub eax, dword ptr [edx + 0x28] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x28u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0060762a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060762d: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00607630: cmp eax, dword ptr [edx + 0x184] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x184u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00607636: jl 0x607783 */ if ((fS!=fO)) goto L_00607783;
L_0060763c:; BB(0x0060763c);
    /* 0060763c: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 00607642: call 0x5f3e50 */ r_esp -= 4; W32(r_esp, 0x607647u); f_005f3e50();
    /* 00607647: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060764a: mov dword ptr [ecx + 0x28], eax */ W32((u32)(r_ecx+0x28u), r_eax);
    /* 0060764d: mov byte ptr [ebp - 0xd], 0 */ W8((u32)(r_ebp+0xfffffff3u), 0x0u);
    /* 00607651: mov byte ptr [ebp - 0xe], 0 */ W8((u32)(r_ebp+0xfffffff2u), 0x0u);
    /* 00607655: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00607658: fld dword ptr [edx + 0x18] */ FPUSH(R_F32((u32)(r_edx+0x18u)));
    /* 0060765b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0060765e: fadd dword ptr [eax + 0x20] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x20u));
    /* 00607661: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00607664: fstp dword ptr [ecx + 0x18] */ W_F32((u32)(r_ecx+0x18u), ST(0)); FPOP();
    /* 00607667: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060766a: fld dword ptr [edx + 0x1c] */ FPUSH(R_F32((u32)(r_edx+0x1cu)));
    /* 0060766d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00607670: fadd dword ptr [eax + 0x24] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x24u));
    /* 00607673: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00607676: fstp dword ptr [ecx + 0x1c] */ W_F32((u32)(r_ecx+0x1cu), ST(0)); FPOP();
    /* 00607679: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060767c: fld dword ptr [edx + 0x18] */ FPUSH(R_F32((u32)(r_edx+0x18u)));
    /* 0060767f: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x607684u); f_00686cc0();
    /* 00607684: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00607687: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0060768a: fld dword ptr [eax + 0x1c] */ FPUSH(R_F32((u32)(r_eax+0x1cu)));
    /* 0060768d: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x607692u); f_00686cc0();
    /* 00607692: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00607695: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00607698: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00607699: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060769c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060769d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006076a0: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 006076a3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006076a6: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 006076a9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006076ab: mov ecx, eax */ r_ecx = r_eax;
    /* 006076ad: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 006076b0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6076b2u); call_ind(t); }
    /* 006076b2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006076b5: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006076b8: sub edx, dword ptr [ecx + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x10u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006076bb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006076bc: call 0x686eba */ r_esp -= 4; W32(r_esp, 0x6076c1u); f_00686eba();
    /* 006076c1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006076c4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006076c7: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 006076ca: cmp eax, dword ptr [edx + 0x188] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x188u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006076d0: jge 0x6076f6 */ if ((fS==fO)) goto L_006076f6;
L_006076d2:; BB(0x006076d2);
    /* 006076d2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006076d5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006076d8: sub ecx, dword ptr [eax + 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x14u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006076db: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006076dc: call 0x686eba */ r_esp -= 4; W32(r_esp, 0x6076e1u); f_00686eba();
    /* 006076e1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006076e4: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006076e7: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 006076ea: cmp eax, dword ptr [ecx + 0x188] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x188u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006076f0: jge 0x6076f6 */ if ((fS==fO)) goto L_006076f6;
L_006076f2:; BB(0x006076f2);
    /* 006076f2: mov byte ptr [ebp - 0xd], 1 */ W8((u32)(r_ebp+0xfffffff3u), 0x1u);
L_006076f6:; BB(0x006076f6);
    /* 006076f6: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006076f9: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 006076fc: call 0x5eb610 */ r_esp -= 4; W32(r_esp, 0x607701u); f_005eb610();
    /* 00607701: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00607704: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00607707: add eax, dword ptr [ecx + 0x2c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x2cu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0060770a: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0060770d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00607710: cmp dword ptr [edx + 0x2c], 0 */ {  u32 a = R32((u32)(r_edx+0x2cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00607714: jge 0x60772f */ if ((fS==fO)) goto L_0060772f;
L_00607716:; BB(0x00607716);
    /* 00607716: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060771a: jg 0x60772f */ if ((!fZ&&fS==fO)) goto L_0060772f;
L_0060771c:; BB(0x0060771c);
    /* 0060771c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060771e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00607721: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00607724: call 0x5eb5d0 */ r_esp -= 4; W32(r_esp, 0x607729u); f_005eb5d0();
    /* 00607729: mov byte ptr [ebp - 0xe], 1 */ W8((u32)(r_ebp+0xfffffff2u), 0x1u);
    /* 0060772d: jmp 0x607766 */ goto L_00607766;
L_0060772f:; BB(0x0060772f);
    /* 0060772f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00607732: cmp dword ptr [ecx + 0x2c], 0 */ {  u32 a = R32((u32)(r_ecx+0x2cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00607736: jle 0x607757 */ if ((fZ||fS!=fO)) goto L_00607757;
L_00607738:; BB(0x00607738);
    /* 00607738: cmp dword ptr [ebp - 4], 0xff */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060773f: jl 0x607757 */ if ((fS!=fO)) goto L_00607757;
L_00607741:; BB(0x00607741);
    /* 00607741: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00607746: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00607749: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 0060774c: call 0x5eb5d0 */ r_esp -= 4; W32(r_esp, 0x607751u); f_005eb5d0();
    /* 00607751: mov byte ptr [ebp - 0xe], 1 */ W8((u32)(r_ebp+0xfffffff2u), 0x1u);
    /* 00607755: jmp 0x607766 */ goto L_00607766;
L_00607757:; BB(0x00607757);
    /* 00607757: mov al, byte ptr [ebp - 4] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffffcu))) & 0xffu);
    /* 0060775a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060775b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060775e: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00607761: call 0x5eb5d0 */ r_esp -= 4; W32(r_esp, 0x607766u); f_005eb5d0();
L_00607766:; BB(0x00607766);
    /* 00607766: movzx edx, byte ptr [ebp - 0xd] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffff3u));
    /* 0060776a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060776c: je 0x607783 */ if (fZ) goto L_00607783;
L_0060776e:; BB(0x0060776e);
    /* 0060776e: movzx eax, byte ptr [ebp - 0xe] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffff2u));
    /* 00607772: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00607774: je 0x607783 */ if (fZ) goto L_00607783;
L_00607776:; BB(0x00607776);
    /* 00607776: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00607779: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0060777b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060777e: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 00607781: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x607783u); call_ind(t); }
L_00607783:; BB(0x00607783);
    /* 00607783: mov esp, ebp */ r_esp = r_ebp;
    /* 00607785: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00607786: ret  */ FN_RET(0x00607600); r_esp += 4; return;
}

