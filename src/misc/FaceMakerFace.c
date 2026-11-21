#include "protos.h"

void f_006640c0(void) /* FaceMakerFace::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006640c0);
    /* 006640c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006640c1: mov ebp, esp */ r_ebp = r_esp;
    /* 006640c3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006640c6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 006640c9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006640cc: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x6640d1u); f_005e9e20();
    /* 006640d1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 006640d4: mov dword ptr [eax], 0x6df9a0 */ W32((u32)(r_eax), 0x6df9a0u);
    /* 006640da: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006640e1: jmp 0x6640ec */ goto L_006640ec;
L_006640e3:; BB(0x006640e3);
    /* 006640e3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006640e6: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006640e9: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_006640ec:; BB(0x006640ec);
    /* 006640ec: cmp dword ptr [ebp - 4], 0x1b */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1bu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006640f0: jge 0x664102 */ if ((fS==fO)) goto L_00664102;
L_006640f2:; BB(0x006640f2);
    /* 006640f2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006640f5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 006640f8: mov dword ptr [eax + edx*4 + 0x5c], 0 */ W32((u32)(r_eax+r_edx*4+0x5cu), 0x0u);
    /* 00664100: jmp 0x6640e3 */ goto L_006640e3;
L_00664102:; BB(0x00664102);
    /* 00664102: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 00664104: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00664106: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00664109: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0066410c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066410d: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x664112u); f_00686fa2();
    /* 00664112: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00664115: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00664118: mov dword ptr [edx + 4], 0 */ W32((u32)(r_edx+0x4u), 0x0u);
    /* 0066411f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00664122: mov dword ptr [eax + 8], 0 */ W32((u32)(r_eax+0x8u), 0x0u);
    /* 00664129: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0066412c: mov dword ptr [ecx + 0xc], 0xa */ W32((u32)(r_ecx+0xcu), 0xau);
    /* 00664133: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00664136: mov esp, ebp */ r_esp = r_ebp;
    /* 00664138: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00664139: ret  */ FN_RET(0x006640c0); r_esp += 4; return;
}

void f_00664140(void) /* FaceMakerFace::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00664140);
    /* 00664140: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00664141: mov ebp, esp */ r_ebp = r_esp;
    /* 00664143: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00664145: push 0x6acbad */ { u32 v = 0x6acbadu; r_esp -= 4; W32(r_esp, v); }
    /* 0066414a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00664150: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00664151: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00664154: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00664159: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066415b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066415c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0066415f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00664165: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00664168: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0066416b: mov dword ptr [eax], 0x6df9a0 */ W32((u32)(r_eax), 0x6df9a0u);
    /* 00664171: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00664178: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0066417f: jmp 0x66418a */ goto L_0066418a;
L_00664181:; BB(0x00664181);
    /* 00664181: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00664184: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00664187: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0066418a:; BB(0x0066418a);
    /* 0066418a: cmp dword ptr [ebp - 0x10], 0x1b */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x1bu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066418e: jge 0x6641e0 */ if ((fS==fO)) goto L_006641e0;
L_00664190:; BB(0x00664190);
    /* 00664190: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00664193: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00664196: cmp dword ptr [eax + edx*4 + 0x5c], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x5cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066419b: je 0x6641de */ if (fZ) goto L_006641de;
L_0066419d:; BB(0x0066419d);
    /* 0066419d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006641a0: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006641a3: mov eax, dword ptr [edx + ecx*4 + 0x5c] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x5cu));
    /* 006641a7: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006641aa: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006641ad: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 006641b0: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006641b4: je 0x6641c9 */ if (fZ) goto L_006641c9;
L_006641b6:; BB(0x006641b6);
    /* 006641b6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006641b8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006641bb: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006641bd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006641c0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006641c2: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6641c4u); call_ind(t); }
    /* 006641c4: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006641c7: jmp 0x6641d0 */ goto L_006641d0;
L_006641c9:; BB(0x006641c9);
    /* 006641c9: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_006641d0:; BB(0x006641d0);
    /* 006641d0: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 006641d3: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006641d6: mov dword ptr [ecx + eax*4 + 0x5c], 0 */ W32((u32)(r_ecx+r_eax*4+0x5cu), 0x0u);
L_006641de:; BB(0x006641de);
    /* 006641de: jmp 0x664181 */ goto L_00664181;
L_006641e0:; BB(0x006641e0);
    /* 006641e0: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006641e7: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006641ea: call 0x5e9e40 */ r_esp -= 4; W32(r_esp, 0x6641efu); f_005e9e40();
    /* 006641ef: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006641f2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006641f9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006641fa: mov esp, ebp */ r_esp = r_ebp;
    /* 006641fc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006641fd: ret  */ FN_RET(0x00664140); r_esp += 4; return;
}

void f_00664760(void) /* FaceMakerFace::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00664760);
    /* 00664760: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00664761: mov ebp, esp */ r_ebp = r_esp;
    /* 00664763: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00664766: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00664769: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00664770: jmp 0x66477b */ goto L_0066477b;
L_00664772:; BB(0x00664772);
    /* 00664772: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00664775: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00664778: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0066477b:; BB(0x0066477b);
    /* 0066477b: cmp dword ptr [ebp - 4], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066477f: jge 0x6647af */ if ((fS==fO)) goto L_006647af;
L_00664781:; BB(0x00664781);
    /* 00664781: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00664783: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00664786: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00664787: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0066478a: call 0x664730 */ r_esp -= 4; W32(r_esp, 0x66478fu); f_00664730();
    /* 0066478f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00664791: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00664794: call 0x664c90 */ r_esp -= 4; W32(r_esp, 0x664799u); f_00664c90();
    /* 00664799: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0066479c: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0066479f: mov byte ptr [edx + 0x41], 0 */ W8((u32)(r_edx+0x41u), 0x0u);
    /* 006647a3: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 006647a6: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006647a9: mov byte ptr [eax + 0x4d], 0 */ W8((u32)(r_eax+0x4du), 0x0u);
    /* 006647ad: jmp 0x664772 */ goto L_00664772;
L_006647af:; BB(0x006647af);
    /* 006647af: mov esp, ebp */ r_esp = r_ebp;
    /* 006647b1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006647b2: ret  */ FN_RET(0x00664760); r_esp += 4; return;
}

