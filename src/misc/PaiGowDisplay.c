#include "protos.h"

void f_004576c0(void) /* PaiGowDisplay::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004576c0);
    /* 004576c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004576c1: mov ebp, esp */ r_ebp = r_esp;
    /* 004576c3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004576c5: push 0x69ef68 */ { u32 v = 0x69ef68u; r_esp -= 4; W32(r_esp, v); }
    /* 004576ca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004576d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004576d1: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004576d4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 004576d9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004576db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004576dc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 004576df: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 004576e5: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004576e8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004576eb: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x4576f0u); f_005e9e20();
    /* 004576f0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004576f7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004576fa: mov dword ptr [eax], 0x6b969c */ W32((u32)(r_eax), 0x6b969cu);
    /* 00457700: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00457707: jmp 0x457712 */ goto L_00457712;
L_00457709:; BB(0x00457709);
    /* 00457709: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045770c: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045770f: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_00457712:; BB(0x00457712);
    /* 00457712: cmp dword ptr [ebp - 0x10], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00457716: jge 0x457755 */ if ((fS==fO)) goto L_00457755;
L_00457718:; BB(0x00457718);
    /* 00457718: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045771b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0045771e: mov dword ptr [eax + edx*4 + 4], 0 */ W32((u32)(r_eax+r_edx*4+0x4u), 0x0u);
    /* 00457726: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00457729: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045772c: mov dword ptr [edx + ecx*4 + 0x54], 0 */ W32((u32)(r_edx+r_ecx*4+0x54u), 0x0u);
    /* 00457734: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00457737: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045773a: mov dword ptr [ecx + eax*4 + 0x68], 0 */ W32((u32)(r_ecx+r_eax*4+0x68u), 0x0u);
    /* 00457742: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00457745: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00457748: mov dword ptr [eax + edx*4 + 0x84], 0 */ W32((u32)(r_eax+r_edx*4+0x84u), 0x0u);
    /* 00457753: jmp 0x457709 */ goto L_00457709;
L_00457755:; BB(0x00457755);
    /* 00457755: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0045775c: jmp 0x457767 */ goto L_00457767;
L_0045775e:; BB(0x0045775e);
    /* 0045775e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00457761: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00457764: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_00457767:; BB(0x00457767);
    /* 00457767: cmp dword ptr [ebp - 0x10], 9 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045776b: jge 0x45777d */ if ((fS==fO)) goto L_0045777d;
L_0045776d:; BB(0x0045776d);
    /* 0045776d: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00457770: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00457773: mov dword ptr [eax + edx*4 + 0x18], 0 */ W32((u32)(r_eax+r_edx*4+0x18u), 0x0u);
    /* 0045777b: jmp 0x45775e */ goto L_0045775e;
L_0045777d:; BB(0x0045777d);
    /* 0045777d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00457780: mov dword ptr [ecx + 0x3c], 0 */ W32((u32)(r_ecx+0x3cu), 0x0u);
    /* 00457787: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045778a: mov dword ptr [edx + 0x40], 0 */ W32((u32)(r_edx+0x40u), 0x0u);
    /* 00457791: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00457794: mov dword ptr [eax + 0x44], 0 */ W32((u32)(r_eax+0x44u), 0x0u);
    /* 0045779b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045779e: mov dword ptr [ecx + 0x98], 0 */ W32((u32)(r_ecx+0x98u), 0x0u);
    /* 004577a8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004577ab: mov dword ptr [edx + 0x48], 0 */ W32((u32)(r_edx+0x48u), 0x0u);
    /* 004577b2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004577b5: mov dword ptr [eax + 0x4c], 0 */ W32((u32)(r_eax+0x4cu), 0x0u);
    /* 004577bc: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004577bf: mov dword ptr [ecx + 0x50], 0 */ W32((u32)(r_ecx+0x50u), 0x0u);
    /* 004577c6: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 004577cd: jmp 0x4577d8 */ goto L_004577d8;
L_004577cf:; BB(0x004577cf);
    /* 004577cf: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004577d2: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004577d5: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_004577d8:; BB(0x004577d8);
    /* 004577d8: cmp dword ptr [ebp - 0x10], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004577dc: jge 0x4577fe */ if ((fS==fO)) goto L_004577fe;
L_004577de:; BB(0x004577de);
    /* 004577de: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004577e0: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004577e3: add eax, 0x7d2 */ {  u32 a = r_eax; u32 b = 0x7d2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004577e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004577e9: push 0x20584554 */ { u32 v = 0x20584554u; r_esp -= 4; W32(r_esp, v); }
    /* 004577ee: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 004577f4: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 004577f7: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x4577fcu); f_006044b0();
    /* 004577fc: jmp 0x4577cf */ goto L_004577cf;
L_004577fe:; BB(0x004577fe);
    /* 004577fe: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00457804: call 0x637630 */ r_esp -= 4; W32(r_esp, 0x457809u); f_00637630();
    /* 00457809: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0045780c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045780e: je 0x457849 */ if (fZ) goto L_00457849;
L_00457810:; BB(0x00457810);
    /* 00457810: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00457817: jmp 0x457822 */ goto L_00457822;
L_00457819:; BB(0x00457819);
    /* 00457819: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045781c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045781f: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_00457822:; BB(0x00457822);
    /* 00457822: cmp dword ptr [ebp - 0x10], 0xe */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00457826: jge 0x457849 */ if ((fS==fO)) goto L_00457849;
L_00457828:; BB(0x00457828);
    /* 00457828: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045782a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045782d: add ecx, 0x7e6 */ {  u32 a = r_ecx; u32 b = 0x7e6u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00457833: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00457834: push 0x20584554 */ { u32 v = 0x20584554u; r_esp -= 4; W32(r_esp, v); }
    /* 00457839: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 0045783f: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 00457842: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x457847u); f_006044b0();
    /* 00457847: jmp 0x457819 */ goto L_00457819;
L_00457849:; BB(0x00457849);
    /* 00457849: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00457850: jmp 0x45785b */ goto L_0045785b;
L_00457852:; BB(0x00457852);
    /* 00457852: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00457855: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00457858: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_0045785b:; BB(0x0045785b);
    /* 0045785b: cmp dword ptr [ebp - 0x10], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045785f: jge 0x457871 */ if ((fS==fO)) goto L_00457871;
L_00457861:; BB(0x00457861);
    /* 00457861: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00457864: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00457867: mov dword ptr [edx + ecx*4 + 0x7c], 0 */ W32((u32)(r_edx+r_ecx*4+0x7cu), 0x0u);
    /* 0045786f: jmp 0x457852 */ goto L_00457852;
L_00457871:; BB(0x00457871);
    /* 00457871: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00457878: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0045787b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045787e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00457885: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00457886: mov esp, ebp */ r_esp = r_ebp;
    /* 00457888: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00457889: ret  */ FN_RET(0x004576c0); r_esp += 4; return;
}

void f_00457890(void) /* PaiGowDisplay::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00457890);
    /* 00457890: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00457891: mov ebp, esp */ r_ebp = r_esp;
    /* 00457893: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00457895: push 0x69ef8b */ { u32 v = 0x69ef8bu; r_esp -= 4; W32(r_esp, v); }
    /* 0045789a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004578a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004578a1: sub esp, 0xa4 */ {  u32 a = r_esp; u32 b = 0xa4u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004578a7: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 004578ac: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004578ae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004578af: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 004578b2: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 004578b8: mov dword ptr [ebp - 0x7c], ecx */ W32((u32)(r_ebp+0xffffff84u), r_ecx);
    /* 004578bb: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 004578be: mov dword ptr [eax], 0x6b969c */ W32((u32)(r_eax), 0x6b969cu);
    /* 004578c4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004578cb: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 004578d2: jmp 0x4578dd */ goto L_004578dd;
L_004578d4:; BB(0x004578d4);
    /* 004578d4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004578d7: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004578da: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_004578dd:; BB(0x004578dd);
    /* 004578dd: cmp dword ptr [ebp - 0x10], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004578e1: jge 0x4579cd */ if ((fS==fO)) goto L_004579cd;
L_004578e7:; BB(0x004578e7);
    /* 004578e7: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004578ea: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 004578ed: mov ecx, dword ptr [eax + edx*4 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 004578f1: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 004578f4: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004578f7: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 004578fa: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004578fe: je 0x457913 */ if (fZ) goto L_00457913;
L_00457900:; BB(0x00457900);
    /* 00457900: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00457902: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00457905: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00457907: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045790a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0045790c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45790eu); call_ind(t); }
    /* 0045790e: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 00457911: jmp 0x45791a */ goto L_0045791a;
L_00457913:; BB(0x00457913);
    /* 00457913: mov dword ptr [ebp - 0x80], 0 */ W32((u32)(r_ebp+0xffffff80u), 0x0u);
L_0045791a:; BB(0x0045791a);
    /* 0045791a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045791d: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 00457920: mov eax, dword ptr [edx + ecx*4 + 0x54] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x54u));
    /* 00457924: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00457927: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045792a: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0045792d: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00457931: je 0x457949 */ if (fZ) goto L_00457949;
L_00457933:; BB(0x00457933);
    /* 00457933: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00457935: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00457938: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0045793a: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0045793d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045793f: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x457941u); call_ind(t); }
    /* 00457941: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 00457947: jmp 0x457953 */ goto L_00457953;
L_00457949:; BB(0x00457949);
    /* 00457949: mov dword ptr [ebp - 0x84], 0 */ W32((u32)(r_ebp+0xffffff7cu), 0x0u);
L_00457953:; BB(0x00457953);
    /* 00457953: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00457956: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 00457959: mov edx, dword ptr [ecx + eax*4 + 0x68] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x68u));
    /* 0045795d: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 00457960: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00457963: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00457966: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045796a: je 0x457982 */ if (fZ) goto L_00457982;
L_0045796c:; BB(0x0045796c);
    /* 0045796c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045796e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00457971: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00457973: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00457976: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00457978: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45797au); call_ind(t); }
    /* 0045797a: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 00457980: jmp 0x45798c */ goto L_0045798c;
L_00457982:; BB(0x00457982);
    /* 00457982: mov dword ptr [ebp - 0x88], 0 */ W32((u32)(r_ebp+0xffffff78u), 0x0u);
L_0045798c:; BB(0x0045798c);
    /* 0045798c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045798f: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 00457992: mov eax, dword ptr [edx + ecx*4 + 0x84] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x84u));
    /* 00457999: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0045799c: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0045799f: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 004579a2: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004579a6: je 0x4579be */ if (fZ) goto L_004579be;
L_004579a8:; BB(0x004579a8);
    /* 004579a8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004579aa: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004579ad: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004579af: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004579b2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004579b4: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4579b6u); call_ind(t); }
    /* 004579b6: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 004579bc: jmp 0x4579c8 */ goto L_004579c8;
L_004579be:; BB(0x004579be);
    /* 004579be: mov dword ptr [ebp - 0x8c], 0 */ W32((u32)(r_ebp+0xffffff74u), 0x0u);
L_004579c8:; BB(0x004579c8);
    /* 004579c8: jmp 0x4578d4 */ goto L_004578d4;
L_004579cd:; BB(0x004579cd);
    /* 004579cd: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 004579d4: jmp 0x4579df */ goto L_004579df;
L_004579d6:; BB(0x004579d6);
    /* 004579d6: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004579d9: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004579dc: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_004579df:; BB(0x004579df);
    /* 004579df: cmp dword ptr [ebp - 0x10], 9 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004579e3: jge 0x457a3b */ if ((fS==fO)) goto L_00457a3b;
L_004579e5:; BB(0x004579e5);
    /* 004579e5: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004579e8: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 004579eb: cmp dword ptr [edx + ecx*4 + 0x18], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004579f0: je 0x457a39 */ if (fZ) goto L_00457a39;
L_004579f2:; BB(0x004579f2);
    /* 004579f2: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004579f5: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 004579f8: mov edx, dword ptr [ecx + eax*4 + 0x18] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x18u));
    /* 004579fc: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 004579ff: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00457a02: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00457a05: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00457a09: je 0x457a21 */ if (fZ) goto L_00457a21;
L_00457a0b:; BB(0x00457a0b);
    /* 00457a0b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00457a0d: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00457a10: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00457a12: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00457a15: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00457a17: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x457a19u); call_ind(t); }
    /* 00457a19: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 00457a1f: jmp 0x457a2b */ goto L_00457a2b;
L_00457a21:; BB(0x00457a21);
    /* 00457a21: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
L_00457a2b:; BB(0x00457a2b);
    /* 00457a2b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00457a2e: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 00457a31: mov dword ptr [edx + ecx*4 + 0x18], 0 */ W32((u32)(r_edx+r_ecx*4+0x18u), 0x0u);
L_00457a39:; BB(0x00457a39);
    /* 00457a39: jmp 0x4579d6 */ goto L_004579d6;
L_00457a3b:; BB(0x00457a3b);
    /* 00457a3b: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00457a42: jmp 0x457a4d */ goto L_00457a4d;
L_00457a44:; BB(0x00457a44);
    /* 00457a44: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00457a47: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00457a4a: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_00457a4d:; BB(0x00457a4d);
    /* 00457a4d: cmp dword ptr [ebp - 0x10], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00457a51: jge 0x457a8e */ if ((fS==fO)) goto L_00457a8e;
L_00457a53:; BB(0x00457a53);
    /* 00457a53: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00457a56: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 00457a59: mov eax, dword ptr [edx + ecx*4 + 0x7c] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x7cu));
    /* 00457a5d: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00457a60: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00457a63: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 00457a66: cmp dword ptr [ebp - 0x3c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00457a6a: je 0x457a82 */ if (fZ) goto L_00457a82;
L_00457a6c:; BB(0x00457a6c);
    /* 00457a6c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00457a6e: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00457a71: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00457a73: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00457a76: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00457a78: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x457a7au); call_ind(t); }
    /* 00457a7a: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 00457a80: jmp 0x457a8c */ goto L_00457a8c;
L_00457a82:; BB(0x00457a82);
    /* 00457a82: mov dword ptr [ebp - 0x94], 0 */ W32((u32)(r_ebp+0xffffff6cu), 0x0u);
L_00457a8c:; BB(0x00457a8c);
    /* 00457a8c: jmp 0x457a44 */ goto L_00457a44;
L_00457a8e:; BB(0x00457a8e);
    /* 00457a8e: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 00457a91: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 00457a94: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 00457a97: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00457a9a: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 00457a9d: cmp dword ptr [ebp - 0x44], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00457aa1: je 0x457ab9 */ if (fZ) goto L_00457ab9;
L_00457aa3:; BB(0x00457aa3);
    /* 00457aa3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00457aa5: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00457aa8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00457aaa: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00457aad: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00457aaf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x457ab1u); call_ind(t); }
    /* 00457ab1: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 00457ab7: jmp 0x457ac3 */ goto L_00457ac3;
L_00457ab9:; BB(0x00457ab9);
    /* 00457ab9: mov dword ptr [ebp - 0x98], 0 */ W32((u32)(r_ebp+0xffffff68u), 0x0u);
L_00457ac3:; BB(0x00457ac3);
    /* 00457ac3: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 00457ac6: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 00457ac9: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 00457acc: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 00457acf: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00457ad2: cmp dword ptr [ebp - 0x4c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00457ad6: je 0x457aee */ if (fZ) goto L_00457aee;
L_00457ad8:; BB(0x00457ad8);
    /* 00457ad8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00457ada: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00457add: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00457adf: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00457ae2: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00457ae4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x457ae6u); call_ind(t); }
    /* 00457ae6: mov dword ptr [ebp - 0x9c], eax */ W32((u32)(r_ebp+0xffffff64u), r_eax);
    /* 00457aec: jmp 0x457af8 */ goto L_00457af8;
L_00457aee:; BB(0x00457aee);
    /* 00457aee: mov dword ptr [ebp - 0x9c], 0 */ W32((u32)(r_ebp+0xffffff64u), 0x0u);
L_00457af8:; BB(0x00457af8);
    /* 00457af8: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 00457afb: mov edx, dword ptr [ecx + 0x44] */ r_edx = R32((u32)(r_ecx+0x44u));
    /* 00457afe: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 00457b01: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00457b04: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 00457b07: cmp dword ptr [ebp - 0x54], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffacu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00457b0b: je 0x457b23 */ if (fZ) goto L_00457b23;
L_00457b0d:; BB(0x00457b0d);
    /* 00457b0d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00457b0f: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00457b12: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00457b14: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00457b17: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00457b19: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x457b1bu); call_ind(t); }
    /* 00457b1b: mov dword ptr [ebp - 0xa0], eax */ W32((u32)(r_ebp+0xffffff60u), r_eax);
    /* 00457b21: jmp 0x457b2d */ goto L_00457b2d;
L_00457b23:; BB(0x00457b23);
    /* 00457b23: mov dword ptr [ebp - 0xa0], 0 */ W32((u32)(r_ebp+0xffffff60u), 0x0u);
L_00457b2d:; BB(0x00457b2d);
    /* 00457b2d: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 00457b30: mov edx, dword ptr [ecx + 0x98] */ r_edx = R32((u32)(r_ecx+0x98u));
    /* 00457b36: mov dword ptr [ebp - 0x60], edx */ W32((u32)(r_ebp+0xffffffa0u), r_edx);
    /* 00457b39: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 00457b3c: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 00457b3f: cmp dword ptr [ebp - 0x5c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00457b43: je 0x457b5b */ if (fZ) goto L_00457b5b;
L_00457b45:; BB(0x00457b45);
    /* 00457b45: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00457b47: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00457b4a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00457b4c: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00457b4f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00457b51: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x457b53u); call_ind(t); }
    /* 00457b53: mov dword ptr [ebp - 0xa4], eax */ W32((u32)(r_ebp+0xffffff5cu), r_eax);
    /* 00457b59: jmp 0x457b65 */ goto L_00457b65;
L_00457b5b:; BB(0x00457b5b);
    /* 00457b5b: mov dword ptr [ebp - 0xa4], 0 */ W32((u32)(r_ebp+0xffffff5cu), 0x0u);
L_00457b65:; BB(0x00457b65);
    /* 00457b65: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 00457b68: mov edx, dword ptr [ecx + 0x48] */ r_edx = R32((u32)(r_ecx+0x48u));
    /* 00457b6b: mov dword ptr [ebp - 0x68], edx */ W32((u32)(r_ebp+0xffffff98u), r_edx);
    /* 00457b6e: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 00457b71: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 00457b74: cmp dword ptr [ebp - 0x64], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff9cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00457b78: je 0x457b90 */ if (fZ) goto L_00457b90;
L_00457b7a:; BB(0x00457b7a);
    /* 00457b7a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00457b7c: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 00457b7f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00457b81: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 00457b84: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00457b86: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x457b88u); call_ind(t); }
    /* 00457b88: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 00457b8e: jmp 0x457b9a */ goto L_00457b9a;
L_00457b90:; BB(0x00457b90);
    /* 00457b90: mov dword ptr [ebp - 0xa8], 0 */ W32((u32)(r_ebp+0xffffff58u), 0x0u);
L_00457b9a:; BB(0x00457b9a);
    /* 00457b9a: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 00457b9d: mov edx, dword ptr [ecx + 0x4c] */ r_edx = R32((u32)(r_ecx+0x4cu));
    /* 00457ba0: mov dword ptr [ebp - 0x70], edx */ W32((u32)(r_ebp+0xffffff90u), r_edx);
    /* 00457ba3: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 00457ba6: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 00457ba9: cmp dword ptr [ebp - 0x6c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff94u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00457bad: je 0x457bc5 */ if (fZ) goto L_00457bc5;
L_00457baf:; BB(0x00457baf);
    /* 00457baf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00457bb1: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 00457bb4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00457bb6: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 00457bb9: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00457bbb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x457bbdu); call_ind(t); }
    /* 00457bbd: mov dword ptr [ebp - 0xac], eax */ W32((u32)(r_ebp+0xffffff54u), r_eax);
    /* 00457bc3: jmp 0x457bcf */ goto L_00457bcf;
L_00457bc5:; BB(0x00457bc5);
    /* 00457bc5: mov dword ptr [ebp - 0xac], 0 */ W32((u32)(r_ebp+0xffffff54u), 0x0u);
L_00457bcf:; BB(0x00457bcf);
    /* 00457bcf: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 00457bd2: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 00457bd5: mov dword ptr [ebp - 0x78], edx */ W32((u32)(r_ebp+0xffffff88u), r_edx);
    /* 00457bd8: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 00457bdb: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 00457bde: cmp dword ptr [ebp - 0x74], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00457be2: je 0x457bfa */ if (fZ) goto L_00457bfa;
L_00457be4:; BB(0x00457be4);
    /* 00457be4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00457be6: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 00457be9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00457beb: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 00457bee: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00457bf0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x457bf2u); call_ind(t); }
    /* 00457bf2: mov dword ptr [ebp - 0xb0], eax */ W32((u32)(r_ebp+0xffffff50u), r_eax);
    /* 00457bf8: jmp 0x457c04 */ goto L_00457c04;
L_00457bfa:; BB(0x00457bfa);
    /* 00457bfa: mov dword ptr [ebp - 0xb0], 0 */ W32((u32)(r_ebp+0xffffff50u), 0x0u);
L_00457c04:; BB(0x00457c04);
    /* 00457c04: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00457c0b: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 00457c0e: call 0x5e9e40 */ r_esp -= 4; W32(r_esp, 0x457c13u); f_005e9e40();
    /* 00457c13: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00457c16: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00457c1d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00457c1e: mov esp, ebp */ r_esp = r_ebp;
    /* 00457c20: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00457c21: ret  */ FN_RET(0x00457890); r_esp += 4; return;
}

