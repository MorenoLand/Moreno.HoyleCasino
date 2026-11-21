#include "protos.h"

void f_00656340(void) /* FaceMakerDialog::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00656340);
    /* 00656340: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00656341: mov ebp, esp */ r_ebp = r_esp;
    /* 00656343: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00656345: push 0x6ac5f4 */ { u32 v = 0x6ac5f4u; r_esp -= 4; W32(r_esp, v); }
    /* 0065634a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00656350: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00656351: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00656354: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00656359: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065635b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065635c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0065635f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00656365: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00656368: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065636a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065636c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065636f: call 0x5f71f0 */ r_esp -= 4; W32(r_esp, 0x656374u); f_005f71f0();
    /* 00656374: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0065637b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0065637e: mov dword ptr [eax], 0x6de32c */ W32((u32)(r_eax), 0x6de32cu);
    /* 00656384: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00656387: add ecx, 0x29c */ {  u32 a = r_ecx; u32 b = 0x29cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0065638d: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x656392u); f_005eaaf0();
    /* 00656392: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00656396: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00656399: add ecx, 0x42c */ {  u32 a = r_ecx; u32 b = 0x42cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0065639f: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x6563a4u); f_005ec5a0();
    /* 006563a4: mov byte ptr [ebp - 4], 2 */ W8((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 006563a8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006563aa: push 0x1e8491 */ { u32 v = 0x1e8491u; r_esp -= 4; W32(r_esp, v); }
    /* 006563af: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006563b2: call 0x5f83d0 */ r_esp -= 4; W32(r_esp, 0x6563b7u); f_005f83d0();
    /* 006563b7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006563ba: mov byte ptr [ecx + 0x1b8], 1 */ W8((u32)(r_ecx+0x1b8u), 0x1u);
    /* 006563c1: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006563c4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006563c7: mov dword ptr [edx + 0x63c], eax */ W32((u32)(r_edx+0x63cu), r_eax);
    /* 006563cd: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006563d1: je 0x6563eb */ if (fZ) goto L_006563eb;
L_006563d3:; BB(0x006563d3);
    /* 006563d3: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 006563d6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006563d7: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006563da: add edx, 0x1bc */ {  u32 a = r_edx; u32 b = 0x1bcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006563e0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006563e1: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x6563e6u); f_00686d8e();
    /* 006563e6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006563e9: jmp 0x656401 */ goto L_00656401;
L_006563eb:; BB(0x006563eb);
    /* 006563eb: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 006563f0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006563f3: add eax, 0x1bc */ {  u32 a = r_eax; u32 b = 0x1bcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006563f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006563f9: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x6563feu); f_00686d8e();
    /* 006563fe: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00656401:; BB(0x00656401);
    /* 00656401: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00656404: mov dword ptr [ecx + 0x278], 0 */ W32((u32)(r_ecx+0x278u), 0x0u);
    /* 0065640e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00656411: mov dword ptr [edx + 0x27c], 0 */ W32((u32)(r_edx+0x27cu), 0x0u);
    /* 0065641b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0065641e: mov byte ptr [eax + 0x280], 0 */ W8((u32)(r_eax+0x280u), 0x0u);
    /* 00656425: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00656428: mov dword ptr [ecx + 0x1d8], 0 */ W32((u32)(r_ecx+0x1d8u), 0x0u);
    /* 00656432: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00656435: mov dword ptr [edx + 0x1dc], 0 */ W32((u32)(r_edx+0x1dcu), 0x0u);
    /* 0065643f: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00656446: jmp 0x656451 */ goto L_00656451;
L_00656448:; BB(0x00656448);
    /* 00656448: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065644b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065644e: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_00656451:; BB(0x00656451);
    /* 00656451: cmp dword ptr [ebp - 0x10], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00656455: jge 0x65646a */ if ((fS==fO)) goto L_0065646a;
L_00656457:; BB(0x00656457);
    /* 00656457: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065645a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065645d: mov dword ptr [edx + ecx*4 + 0x284], 0 */ W32((u32)(r_edx+r_ecx*4+0x284u), 0x0u);
    /* 00656468: jmp 0x656448 */ goto L_00656448;
L_0065646a:; BB(0x0065646a);
    /* 0065646a: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00656471: jmp 0x65647c */ goto L_0065647c;
L_00656473:; BB(0x00656473);
    /* 00656473: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00656476: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00656479: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_0065647c:; BB(0x0065647c);
    /* 0065647c: cmp dword ptr [ebp - 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00656480: jge 0x656495 */ if ((fS==fO)) goto L_00656495;
L_00656482:; BB(0x00656482);
    /* 00656482: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00656485: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00656488: mov dword ptr [edx + ecx*4 + 0x28c], 0 */ W32((u32)(r_edx+r_ecx*4+0x28cu), 0x0u);
    /* 00656493: jmp 0x656473 */ goto L_00656473;
L_00656495:; BB(0x00656495);
    /* 00656495: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0065649c: jmp 0x6564a7 */ goto L_006564a7;
L_0065649e:; BB(0x0065649e);
    /* 0065649e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 006564a1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006564a4: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_006564a7:; BB(0x006564a7);
    /* 006564a7: cmp dword ptr [ebp - 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006564ab: jge 0x6564c0 */ if ((fS==fO)) goto L_006564c0;
L_006564ad:; BB(0x006564ad);
    /* 006564ad: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006564b0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006564b3: mov dword ptr [edx + ecx*4 + 0x414], 0 */ W32((u32)(r_edx+r_ecx*4+0x414u), 0x0u);
    /* 006564be: jmp 0x65649e */ goto L_0065649e;
L_006564c0:; BB(0x006564c0);
    /* 006564c0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006564c3: mov dword ptr [eax + 0x424], 0 */ W32((u32)(r_eax+0x424u), 0x0u);
    /* 006564cd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006564d0: mov dword ptr [ecx + 0x428], 0 */ W32((u32)(r_ecx+0x428u), 0x0u);
    /* 006564da: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006564dd: mov dword ptr [edx + 0x5fc], 0 */ W32((u32)(r_edx+0x5fcu), 0x0u);
    /* 006564e7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006564ea: mov dword ptr [eax + 0x608], 0 */ W32((u32)(r_eax+0x608u), 0x0u);
    /* 006564f4: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 006564fb: jmp 0x656506 */ goto L_00656506;
L_006564fd:; BB(0x006564fd);
    /* 006564fd: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00656500: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00656503: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_00656506:; BB(0x00656506);
    /* 00656506: cmp dword ptr [ebp - 0x10], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0065650a: jge 0x65651f */ if ((fS==fO)) goto L_0065651f;
L_0065650c:; BB(0x0065650c);
    /* 0065650c: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065650f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00656512: mov dword ptr [eax + edx*4 + 0x60c], 0 */ W32((u32)(r_eax+r_edx*4+0x60cu), 0x0u);
    /* 0065651d: jmp 0x6564fd */ goto L_006564fd;
L_0065651f:; BB(0x0065651f);
    /* 0065651f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00656526: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00656529: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065652c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00656533: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00656534: mov esp, ebp */ r_esp = r_ebp;
    /* 00656536: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00656537: ret 8 */ FN_RET(0x00656340); r_esp += 12; return;
}

void f_00656540(void) /* FaceMakerDialog::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00656540);
    /* 00656540: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00656541: mov ebp, esp */ r_ebp = r_esp;
    /* 00656543: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00656545: push 0x6ac633 */ { u32 v = 0x6ac633u; r_esp -= 4; W32(r_esp, v); }
    /* 0065654a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00656550: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00656551: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00656554: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00656559: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065655b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065655c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0065655f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00656565: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 00656568: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0065656b: mov dword ptr [eax], 0x6de32c */ W32((u32)(r_eax), 0x6de32cu);
    /* 00656571: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00656578: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0065657b: cmp dword ptr [ecx + 0x608], 0 */ {  u32 a = R32((u32)(r_ecx+0x608u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00656582: je 0x6565d1 */ if (fZ) goto L_006565d1;
L_00656584:; BB(0x00656584);
    /* 00656584: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00656587: mov ecx, dword ptr [edx + 0x608] */ r_ecx = R32((u32)(r_edx+0x608u));
    /* 0065658d: call 0x606830 */ r_esp -= 4; W32(r_esp, 0x656592u); f_00606830();
    /* 00656592: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00656595: mov ecx, dword ptr [eax + 0x608] */ r_ecx = R32((u32)(r_eax+0x608u));
    /* 0065659b: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0065659e: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006565a1: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 006565a4: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006565a8: je 0x6565bd */ if (fZ) goto L_006565bd;
L_006565aa:; BB(0x006565aa);
    /* 006565aa: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006565ac: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006565af: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006565b1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006565b4: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006565b6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6565b8u); call_ind(t); }
    /* 006565b8: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 006565bb: jmp 0x6565c4 */ goto L_006565c4;
L_006565bd:; BB(0x006565bd);
    /* 006565bd: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_006565c4:; BB(0x006565c4);
    /* 006565c4: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 006565c7: mov dword ptr [ecx + 0x608], 0 */ W32((u32)(r_ecx+0x608u), 0x0u);
L_006565d1:; BB(0x006565d1);
    /* 006565d1: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 006565d8: jmp 0x6565e3 */ goto L_006565e3;
L_006565da:; BB(0x006565da);
    /* 006565da: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006565dd: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006565e0: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_006565e3:; BB(0x006565e3);
    /* 006565e3: cmp dword ptr [ebp - 0x10], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006565e7: jge 0x656642 */ if ((fS==fO)) goto L_00656642;
L_006565e9:; BB(0x006565e9);
    /* 006565e9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 006565ec: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 006565ef: cmp dword ptr [ecx + eax*4 + 0x60c], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x60cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006565f7: je 0x656640 */ if (fZ) goto L_00656640;
L_006565f9:; BB(0x006565f9);
    /* 006565f9: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006565fc: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 006565ff: mov ecx, dword ptr [eax + edx*4 + 0x60c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x60cu));
    /* 00656606: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00656609: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065660c: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0065660f: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00656613: je 0x656628 */ if (fZ) goto L_00656628;
L_00656615:; BB(0x00656615);
    /* 00656615: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00656617: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065661a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0065661c: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065661f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00656621: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x656623u); call_ind(t); }
    /* 00656623: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00656626: jmp 0x65662f */ goto L_0065662f;
L_00656628:; BB(0x00656628);
    /* 00656628: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_0065662f:; BB(0x0065662f);
    /* 0065662f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00656632: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00656635: mov dword ptr [edx + ecx*4 + 0x60c], 0 */ W32((u32)(r_edx+r_ecx*4+0x60cu), 0x0u);
L_00656640:; BB(0x00656640);
    /* 00656640: jmp 0x6565da */ goto L_006565da;
L_00656642:; BB(0x00656642);
    /* 00656642: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00656645: cmp dword ptr [eax + 0x63c], 0 */ {  u32 a = R32((u32)(r_eax+0x63cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065664c: je 0x656680 */ if (fZ) goto L_00656680;
L_0065664e:; BB(0x0065664e);
    /* 0065664e: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00656651: mov edx, dword ptr [ecx + 0x63c] */ r_edx = R32((u32)(r_ecx+0x63cu));
    /* 00656657: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 0065665a: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0065665d: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00656660: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00656664: je 0x656679 */ if (fZ) goto L_00656679;
L_00656666:; BB(0x00656666);
    /* 00656666: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00656668: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065666b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0065666d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00656670: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00656672: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x656674u); call_ind(t); }
    /* 00656674: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00656677: jmp 0x656680 */ goto L_00656680;
L_00656679:; BB(0x00656679);
    /* 00656679: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_00656680:; BB(0x00656680);
    /* 00656680: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00656683: cmp dword ptr [ecx + 0x1d8], 0 */ {  u32 a = R32((u32)(r_ecx+0x1d8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065668a: je 0x6566cb */ if (fZ) goto L_006566cb;
L_0065668c:; BB(0x0065668c);
    /* 0065668c: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0065668f: mov eax, dword ptr [edx + 0x1d8] */ r_eax = R32((u32)(r_edx+0x1d8u));
    /* 00656695: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00656698: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0065669b: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0065669e: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006566a2: je 0x6566b7 */ if (fZ) goto L_006566b7;
L_006566a4:; BB(0x006566a4);
    /* 006566a4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006566a6: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 006566a9: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006566ab: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 006566ae: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006566b0: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6566b2u); call_ind(t); }
    /* 006566b2: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 006566b5: jmp 0x6566be */ goto L_006566be;
L_006566b7:; BB(0x006566b7);
    /* 006566b7: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_006566be:; BB(0x006566be);
    /* 006566be: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 006566c1: mov dword ptr [eax + 0x1d8], 0 */ W32((u32)(r_eax+0x1d8u), 0x0u);
L_006566cb:; BB(0x006566cb);
    /* 006566cb: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006566cf: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 006566d2: add ecx, 0x42c */ {  u32 a = r_ecx; u32 b = 0x42cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006566d8: call 0x5ec760 */ r_esp -= 4; W32(r_esp, 0x6566ddu); f_005ec760();
    /* 006566dd: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006566e1: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 006566e4: add ecx, 0x29c */ {  u32 a = r_ecx; u32 b = 0x29cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006566ea: call 0x5eac00 */ r_esp -= 4; W32(r_esp, 0x6566efu); f_005eac00();
    /* 006566ef: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006566f6: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 006566f9: call 0x5f7260 */ r_esp -= 4; W32(r_esp, 0x6566feu); f_005f7260();
    /* 006566fe: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00656701: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00656708: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00656709: mov esp, ebp */ r_esp = r_ebp;
    /* 0065670b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065670c: ret  */ FN_RET(0x00656540); r_esp += 4; return;
}

void f_00656710(void) /* FaceMakerDialog::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00656710);
    /* 00656710: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00656711: mov ebp, esp */ r_ebp = r_esp;
    /* 00656713: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00656716: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00656717: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00656718: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0065671b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065671d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00656720: call 0x5f89d0 */ r_esp -= 4; W32(r_esp, 0x656725u); f_005f89d0();
    /* 00656725: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00656728: call 0x656980 */ r_esp -= 4; W32(r_esp, 0x65672du); f_00656980();
    /* 0065672d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00656734: jmp 0x65673f */ goto L_0065673f;
L_00656736:; BB(0x00656736);
    /* 00656736: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00656739: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065673c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0065673f:; BB(0x0065673f);
    /* 0065673f: cmp dword ptr [ebp - 4], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00656743: jge 0x6567c3 */ if ((fS==fO)) goto L_006567c3;
L_00656745:; BB(0x00656745);
    /* 00656745: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00656747: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00656749: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065674b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065674d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065674f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00656751: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00656756: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00656758: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0065675a: cmp dword ptr [ebp - 4], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0065675e: setge cl */ r_ecx = (r_ecx & 0xffffff00u) | ((((fS==fO)) ? 1 : 0) & 0xffu);
    /* 00656761: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00656764: and ecx, 0xffffffa9 */ {  u32 a = r_ecx; u32 b = 0xffffffa9u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00656767: add ecx, 0x5b */ {  u32 a = r_ecx; u32 b = 0x5bu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0065676a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065676b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065676e: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0065676f: mov ecx, 6 */ r_ecx = 0x6u;
    /* 00656774: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00656774, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00656774, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00656776: imul edx, edx, 0x67 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x67u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00656779: add edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0065677c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065677d: push 0x1e84d0 */ { u32 v = 0x1e84d0u; r_esp -= 4; W32(r_esp, v); }
    /* 00656782: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00656784: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00656787: add edx, 0x4d7 */ {  u32 a = r_edx; u32 b = 0x4d7u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0065678d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065678e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00656790: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00656792: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00656795: call 0x5f9ff0 */ r_esp -= 4; W32(r_esp, 0x65679au); f_005f9ff0();
    /* 0065679a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065679d: mov dword ptr [ecx + 0x5fc], eax */ W32((u32)(r_ecx+0x5fcu), r_eax);
    /* 006567a3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006567a5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006567a8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006567a9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 006567ac: mov ecx, dword ptr [eax + 0x5fc] */ r_ecx = R32((u32)(r_eax+0x5fcu));
    /* 006567b2: call 0x606350 */ r_esp -= 4; W32(r_esp, 0x6567b7u); f_00606350();
    /* 006567b7: mov ecx, eax */ r_ecx = r_eax;
    /* 006567b9: call 0x5eb700 */ r_esp -= 4; W32(r_esp, 0x6567beu); f_005eb700();
    /* 006567be: jmp 0x656736 */ goto L_00656736;
L_006567c3:; BB(0x006567c3);
    /* 006567c3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006567c6: cmp dword ptr [ecx + 0x1d8], 0 */ {  u32 a = R32((u32)(r_ecx+0x1d8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006567cd: jne 0x656866 */ if (!fZ) goto L_00656866;
L_006567d3:; BB(0x006567d3);
    /* 006567d3: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 006567d9: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006567db: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006567e1: mov edx, dword ptr [eax + 0x31c] */ r_edx = R32((u32)(r_eax+0x31cu));
    /* 006567e7: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6567e9u); call_ind(t); }
    /* 006567e9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006567ec: mov dword ptr [ecx + 0x1d8], eax */ W32((u32)(r_ecx+0x1d8u), r_eax);
    /* 006567f2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006567f4: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006567f6: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006567f9: mov ecx, dword ptr [edx + 0x1d8] */ r_ecx = R32((u32)(r_edx+0x1d8u));
    /* 006567ff: call 0x63a3e0 */ r_esp -= 4; W32(r_esp, 0x656804u); f_0063a3e0();
    /* 00656804: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00656806: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00656808: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065680a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065680d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065680e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00656810: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00656813: mov ecx, dword ptr [ecx + 0x1d8] */ r_ecx = R32((u32)(r_ecx+0x1d8u));
    /* 00656819: call 0x63a8d0 */ r_esp -= 4; W32(r_esp, 0x65681eu); f_0063a8d0();
    /* 0065681e: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00656821: mov eax, dword ptr [edx + 0x1d8] */ r_eax = R32((u32)(r_edx+0x1d8u));
    /* 00656827: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0065682a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065682d: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x656832u); f_0063aac0();
    /* 00656832: mov dword ptr [eax], 3 */ W32((u32)(r_eax), 0x3u);
    /* 00656838: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065683a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065683d: mov edx, dword ptr [ecx + 0x1d8] */ r_edx = R32((u32)(r_ecx+0x1d8u));
    /* 00656843: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 00656846: call 0x646380 */ r_esp -= 4; W32(r_esp, 0x65684bu); f_00646380();
    /* 0065684b: push 0x12a */ { u32 v = 0x12au; r_esp -= 4; W32(r_esp, v); }
    /* 00656850: push 0x10e */ { u32 v = 0x10eu; r_esp -= 4; W32(r_esp, v); }
    /* 00656855: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00656858: mov ecx, dword ptr [eax + 0x1d8] */ r_ecx = R32((u32)(r_eax+0x1d8u));
    /* 0065685e: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 00656861: call 0x646150 */ r_esp -= 4; W32(r_esp, 0x656866u); f_00646150();
L_00656866:; BB(0x00656866);
    /* 00656866: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00656869: mov eax, dword ptr [edx + 0x1d8] */ r_eax = R32((u32)(r_edx+0x1d8u));
    /* 0065686f: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00656872: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00656875: mov eax, dword ptr [ecx + 0x14] */ r_eax = R32((u32)(r_ecx+0x14u));
    /* 00656878: mov dword ptr [edx + 0x1dc], eax */ W32((u32)(r_edx+0x1dcu), r_eax);
    /* 0065687e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00656881: call 0x657430 */ r_esp -= 4; W32(r_esp, 0x656886u); f_00657430();
    /* 00656886: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00656889: movsx edx, byte ptr [ecx + 0x1bc] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x1bcu));
    /* 00656890: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00656892: je 0x6568a5 */ if (fZ) goto L_006568a5;
L_00656894:; BB(0x00656894);
    /* 00656894: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00656897: add eax, 0x1bc */ {  u32 a = r_eax; u32 b = 0x1bcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065689c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065689d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006568a0: call 0x65a0b0 */ r_esp -= 4; W32(r_esp, 0x6568a5u); f_0065a0b0();
L_006568a5:; BB(0x006568a5);
    /* 006568a5: push 0x400 */ { u32 v = 0x400u; r_esp -= 4; W32(r_esp, v); }
    /* 006568aa: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006568ad: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x6568b2u); f_005fb5e0();
    /* 006568b2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006568b4: je 0x656913 */ if (fZ) goto L_00656913;
L_006568b6:; BB(0x006568b6);
    /* 006568b6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006568b9: movsx edx, byte ptr [ecx + 0x1bc] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x1bcu));
    /* 006568c0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006568c2: je 0x6568da */ if (fZ) goto L_006568da;
L_006568c4:; BB(0x006568c4);
    /* 006568c4: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 006568c7: add eax, 0x1bc */ {  u32 a = r_eax; u32 b = 0x1bcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006568cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006568cd: call 0x665800 */ r_esp -= 4; W32(r_esp, 0x6568d2u); f_00665800();
    /* 006568d2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006568d5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006568d8: jmp 0x6568e1 */ goto L_006568e1;
L_006568da:; BB(0x006568da);
    /* 006568da: mov dword ptr [ebp - 0x14], 0x21 */ W32((u32)(r_ebp+0xffffffecu), 0x21u);
L_006568e1:; BB(0x006568e1);
    /* 006568e1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006568e4: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 006568e7: push 0x400 */ { u32 v = 0x400u; r_esp -= 4; W32(r_esp, v); }
    /* 006568ec: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006568ef: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x6568f4u); f_005fb5e0();
    /* 006568f4: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006568f7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006568f9: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006568fc: add edx, 0x186bf */ {  u32 a = r_edx; u32 b = 0x186bfu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00656902: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00656903: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00656906: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00656908: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065690b: mov eax, dword ptr [edx + 0xf0] */ r_eax = R32((u32)(r_edx+0xf0u));
    /* 00656911: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x656913u); call_ind(t); }
L_00656913:; BB(0x00656913);
    /* 00656913: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00656916: mov esi, dword ptr [ecx + 0x1dc] */ r_esi = R32((u32)(r_ecx+0x1dcu));
    /* 0065691c: add esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0065691f: mov edi, dword ptr [ebp - 0x10] */ r_edi = R32((u32)(r_ebp+0xfffffff0u));
    /* 00656922: add edi, 0x1e0 */ {  u32 a = r_edi; u32 b = 0x1e0u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00656928: mov ecx, 0x13 */ r_ecx = 0x13u;
    /* 0065692d: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0065692f: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 00656931: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00656933: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00656936: add edx, 0x22c */ {  u32 a = r_edx; u32 b = 0x22cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0065693c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065693d: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x656942u); f_00686fa2();
    /* 00656942: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00656945: movzx eax, byte ptr [0x795f95] */ r_eax = (u32)R8((u32)(0x795f95u));
    /* 0065694c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065694e: je 0x656976 */ if (fZ) goto L_00656976;
L_00656950:; BB(0x00656950);
    /* 00656950: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00656952: push 0x6de38c */ { u32 v = 0x6de38cu; r_esp -= 4; W32(r_esp, v); }
    /* 00656957: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x65695cu); f_00630f40();
    /* 0065695c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065695f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00656960: push 0x6de36c */ { u32 v = 0x6de36cu; r_esp -= 4; W32(r_esp, v); }
    /* 00656965: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x65696au); f_00630f40();
    /* 0065696a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065696d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065696e: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x656973u); f_0062ff10();
    /* 00656973: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00656976:; BB(0x00656976);
    /* 00656976: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00656977: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00656978: mov esp, ebp */ r_esp = r_ebp;
    /* 0065697a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065697b: ret  */ FN_RET(0x00656710); r_esp += 4; return;
}

void f_006571e0(void) /* FaceMakerDialog::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006571e0);
    /* 006571e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006571e1: mov ebp, esp */ r_ebp = r_esp;
    /* 006571e3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006571e6: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 006571e9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006571ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006571ed: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006571f0: call 0x5f72f0 */ r_esp -= 4; W32(r_esp, 0x6571f5u); f_005f72f0();
    /* 006571f5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006571f8: cmp dword ptr [ecx + 0x18], 3 */ {  u32 a = R32((u32)(r_ecx+0x18u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006571fc: jne 0x6572c6 */ if (!fZ) goto L_006572c6;
L_00657202:; BB(0x00657202);
    /* 00657202: mov dword ptr [ebp - 4], 0x4d7 */ W32((u32)(r_ebp+0xfffffffcu), 0x4d7u);
    /* 00657209: jmp 0x657214 */ goto L_00657214;
L_0065720b:; BB(0x0065720b);
    /* 0065720b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065720e: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00657211: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00657214:; BB(0x00657214);
    /* 00657214: cmp dword ptr [ebp - 4], 0x4e3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4e3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0065721b: jge 0x6572c6 */ if ((fS==fO)) goto L_006572c6;
L_00657221:; BB(0x00657221);
    /* 00657221: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00657223: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00657226: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00657227: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065722a: call 0x5fb3f0 */ r_esp -= 4; W32(r_esp, 0x65722fu); f_005fb3f0();
    /* 0065722f: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00657232: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00657236: je 0x6572c1 */ if (fZ) goto L_006572c1;
L_0065723c:; BB(0x0065723c);
    /* 0065723c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065723f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00657242: mov eax, dword ptr [edx + ecx*4 - 0xd50] */ r_eax = R32((u32)(r_edx+r_ecx*4+0xfffff2b0u));
    /* 00657249: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0065724c: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00657250: jne 0x657254 */ if (!fZ) goto L_00657254;
L_00657252:; BB(0x00657252);
    /* 00657252: jmp 0x65720b */ goto L_0065720b;
L_00657254:; BB(0x00657254);
    /* 00657254: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00657257: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x65725cu); f_00600230();
    /* 0065725c: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0065725f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00657261: je 0x657265 */ if (fZ) goto L_00657265;
L_00657263:; BB(0x00657263);
    /* 00657263: jmp 0x65720b */ goto L_0065720b;
L_00657265:; BB(0x00657265);
    /* 00657265: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00657268: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00657269: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065726c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0065726e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00657271: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 00657277: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x657279u); call_ind(t); }
    /* 00657279: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0065727c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065727e: jne 0x65729b */ if (!fZ) goto L_0065729b;
L_00657280:; BB(0x00657280);
    /* 00657280: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00657283: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00657284: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00657287: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00657289: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065728c: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 00657292: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x657294u); call_ind(t); }
    /* 00657294: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00657297: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00657299: je 0x6572af */ if (fZ) goto L_006572af;
L_0065729b:; BB(0x0065729b);
    /* 0065729b: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0065729d: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006572a0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006572a2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006572a5: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 006572ab: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6572adu); call_ind(t); }
    /* 006572ad: jmp 0x6572c1 */ goto L_006572c1;
L_006572af:; BB(0x006572af);
    /* 006572af: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006572b1: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 006572b4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006572b6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006572b9: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 006572bf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6572c1u); call_ind(t); }
L_006572c1:; BB(0x006572c1);
    /* 006572c1: jmp 0x65720b */ goto L_0065720b;
L_006572c6:; BB(0x006572c6);
    /* 006572c6: mov esp, ebp */ r_esp = r_ebp;
    /* 006572c8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006572c9: ret 4 */ FN_RET(0x006571e0); r_esp += 8; return;
}

void f_006572d0(void) /* FaceMakerDialog::vfunc8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006572d0);
    /* 006572d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006572d1: mov ebp, esp */ r_ebp = r_esp;
    /* 006572d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006572d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006572d7: cmp dword ptr [ebp + 8], 0x403 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x403u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006572de: jl 0x657318 */ if ((fS!=fO)) goto L_00657318;
L_006572e0:; BB(0x006572e0);
    /* 006572e0: cmp dword ptr [ebp + 8], 0x40f */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x40fu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006572e7: jge 0x657318 */ if ((fS==fO)) goto L_00657318;
L_006572e9:; BB(0x006572e9);
    /* 006572e9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006572ec: mov ecx, dword ptr [eax + 0x424] */ r_ecx = R32((u32)(r_eax+0x424u));
    /* 006572f2: call 0x606570 */ r_esp -= 4; W32(r_esp, 0x6572f7u); f_00606570();
    /* 006572f7: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006572fa: je 0x657301 */ if (fZ) goto L_00657301;
L_006572fc:; BB(0x006572fc);
    /* 006572fc: jmp 0x657425 */ goto L_00657425;
L_00657301:; BB(0x00657301);
    /* 00657301: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00657304: sub ecx, 0x403 */ {  u32 a = r_ecx; u32 b = 0x403u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0065730a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065730b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065730e: call 0x657500 */ r_esp -= 4; W32(r_esp, 0x657313u); f_00657500();
    /* 00657313: jmp 0x657425 */ goto L_00657425;
L_00657318:; BB(0x00657318);
    /* 00657318: cmp dword ptr [ebp + 8], 0x467 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x467u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0065731f: jl 0x65735c */ if ((fS!=fO)) goto L_0065735c;
L_00657321:; BB(0x00657321);
    /* 00657321: cmp dword ptr [ebp + 8], 0x473 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x473u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00657328: jge 0x65735c */ if ((fS==fO)) goto L_0065735c;
L_0065732a:; BB(0x0065732a);
    /* 0065732a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065732d: mov ecx, dword ptr [edx + 0x424] */ r_ecx = R32((u32)(r_edx+0x424u));
    /* 00657333: call 0x606570 */ r_esp -= 4; W32(r_esp, 0x657338u); f_00606570();
    /* 00657338: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0065733b: sub ecx, 0x64 */ {  u32 a = r_ecx; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0065733e: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00657340: je 0x657357 */ if (fZ) goto L_00657357;
L_00657342:; BB(0x00657342);
    /* 00657342: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00657345: sub edx, 0x64 */ {  u32 a = r_edx; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00657348: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00657349: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065734c: mov ecx, dword ptr [eax + 0x424] */ r_ecx = R32((u32)(r_eax+0x424u));
    /* 00657352: call 0x6065d0 */ r_esp -= 4; W32(r_esp, 0x657357u); f_006065d0();
L_00657357:; BB(0x00657357);
    /* 00657357: jmp 0x657425 */ goto L_00657425;
L_0065735c:; BB(0x0065735c);
    /* 0065735c: cmp dword ptr [ebp + 8], 0x3fd */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3fdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00657363: jl 0x657425 */ if ((fS!=fO)) goto L_00657425;
L_00657369:; BB(0x00657369);
    /* 00657369: cmp dword ptr [ebp + 8], 0x3ff */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3ffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00657370: jg 0x657425 */ if ((!fZ&&fS==fO)) goto L_00657425;
L_00657376:; BB(0x00657376);
    /* 00657376: cmp dword ptr [ebp + 8], 0x3fd */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3fdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065737d: je 0x657388 */ if (fZ) goto L_00657388;
L_0065737f:; BB(0x0065737f);
    /* 0065737f: cmp dword ptr [ebp + 8], 0x3ff */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3ffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00657386: jne 0x6573ce */ if (!fZ) goto L_006573ce;
L_00657388:; BB(0x00657388);
    /* 00657388: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065738b: cmp dword ptr [ecx + 0x278], 3 */ {  u32 a = R32((u32)(r_ecx+0x278u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00657392: je 0x6573a0 */ if (fZ) goto L_006573a0;
L_00657394:; BB(0x00657394);
    /* 00657394: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00657397: cmp dword ptr [edx + 0x278], 4 */ {  u32 a = R32((u32)(r_edx+0x278u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065739e: jne 0x6573ac */ if (!fZ) goto L_006573ac;
L_006573a0:; BB(0x006573a0);
    /* 006573a0: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006573a2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006573a5: call 0x657500 */ r_esp -= 4; W32(r_esp, 0x6573aau); f_00657500();
    /* 006573aa: jmp 0x6573ce */ goto L_006573ce;
L_006573ac:; BB(0x006573ac);
    /* 006573ac: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006573af: cmp dword ptr [eax + 0x278], 8 */ {  u32 a = R32((u32)(r_eax+0x278u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006573b6: je 0x6573c4 */ if (fZ) goto L_006573c4;
L_006573b8:; BB(0x006573b8);
    /* 006573b8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006573bb: cmp dword ptr [ecx + 0x278], 9 */ {  u32 a = R32((u32)(r_ecx+0x278u)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006573c2: jne 0x6573ce */ if (!fZ) goto L_006573ce;
L_006573c4:; BB(0x006573c4);
    /* 006573c4: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 006573c6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006573c9: call 0x657500 */ r_esp -= 4; W32(r_esp, 0x6573ceu); f_00657500();
L_006573ce:; BB(0x006573ce);
    /* 006573ce: cmp dword ptr [ebp + 8], 0x3fe */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3feu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006573d5: jne 0x65741d */ if (!fZ) goto L_0065741d;
L_006573d7:; BB(0x006573d7);
    /* 006573d7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006573da: cmp dword ptr [edx + 0x278], 3 */ {  u32 a = R32((u32)(r_edx+0x278u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006573e1: je 0x6573ef */ if (fZ) goto L_006573ef;
L_006573e3:; BB(0x006573e3);
    /* 006573e3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006573e6: cmp dword ptr [eax + 0x278], 4 */ {  u32 a = R32((u32)(r_eax+0x278u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006573ed: jne 0x6573fb */ if (!fZ) goto L_006573fb;
L_006573ef:; BB(0x006573ef);
    /* 006573ef: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006573f1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006573f4: call 0x657500 */ r_esp -= 4; W32(r_esp, 0x6573f9u); f_00657500();
    /* 006573f9: jmp 0x65741d */ goto L_0065741d;
L_006573fb:; BB(0x006573fb);
    /* 006573fb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006573fe: cmp dword ptr [ecx + 0x278], 8 */ {  u32 a = R32((u32)(r_ecx+0x278u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00657405: je 0x657413 */ if (fZ) goto L_00657413;
L_00657407:; BB(0x00657407);
    /* 00657407: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065740a: cmp dword ptr [edx + 0x278], 9 */ {  u32 a = R32((u32)(r_edx+0x278u)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00657411: jne 0x65741d */ if (!fZ) goto L_0065741d;
L_00657413:; BB(0x00657413);
    /* 00657413: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00657415: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00657418: call 0x657500 */ r_esp -= 4; W32(r_esp, 0x65741du); f_00657500();
L_0065741d:; BB(0x0065741d);
    /* 0065741d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00657420: call 0x657b10 */ r_esp -= 4; W32(r_esp, 0x657425u); f_00657b10();
L_00657425:; BB(0x00657425);
    /* 00657425: mov esp, ebp */ r_esp = r_ebp;
    /* 00657427: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00657428: ret 4 */ FN_RET(0x006572d0); r_esp += 8; return;
}

void f_00658b20(void) /* facemakerdialog::func_00658b20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00658b20);
    /* 00658b20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00658b21: mov ebp, esp */ r_ebp = r_esp;
    /* 00658b23: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00658b26: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00658b29: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00658b2c: call 0x657820 */ r_esp -= 4; W32(r_esp, 0x658b31u); f_00657820();
    /* 00658b31: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00658b34: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00658b36: je 0x658ce2 */ if (fZ) goto L_00658ce2;
L_00658b3c:; BB(0x00658b3c);
    /* 00658b3c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00658b3f: mov ecx, dword ptr [ecx + 0x600] */ r_ecx = R32((u32)(r_ecx+0x600u));
    /* 00658b45: call 0x606570 */ r_esp -= 4; W32(r_esp, 0x658b4au); f_00606570();
    /* 00658b4a: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00658b4d: cmp dword ptr [ebp - 8], 0x3fd */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3fdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00658b54: je 0x658b75 */ if (fZ) goto L_00658b75;
L_00658b56:; BB(0x00658b56);
    /* 00658b56: cmp dword ptr [ebp - 8], 0x3fe */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3feu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00658b5d: je 0x658be5 */ if (fZ) goto L_00658be5;
L_00658b63:; BB(0x00658b63);
    /* 00658b63: cmp dword ptr [ebp - 8], 0x3ff */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3ffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00658b6a: je 0x658c55 */ if (fZ) goto L_00658c55;
L_00658b70:; BB(0x00658b70);
    /* 00658b70: jmp 0x658ce0 */ goto L_00658ce0;
L_00658b75:; BB(0x00658b75);
    /* 00658b75: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00658b78: mov eax, dword ptr [edx + 0x278] */ r_eax = R32((u32)(r_edx+0x278u));
    /* 00658b7e: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00658b81: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00658b84: sub ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00658b87: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00658b8a: cmp dword ptr [ebp - 0xc], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00658b8e: ja 0x658bc5 */ if ((!fC&&!fZ)) goto L_00658bc5;
L_00658b90:; BB(0x00658b90);
    /* 00658b90: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00658b93: movzx eax, byte ptr [edx + 0x658d0c] */ r_eax = (u32)R8((u32)(r_edx+0x658d0cu));
    /* 00658b9a: jmp dword ptr [eax*4 + 0x658d00] */ { u32 t = R32((u32)(r_eax*4+0x658d00u)); switch (t) { case 0x658ba1u: goto L_00658ba1; case 0x658bb3u: goto L_00658bb3; case 0x658bc5u: goto L_00658bc5; default: UNSUP(0x00658b9a, "jump table entry is not a known target"); } }
L_00658ba1:; BB(0x00658ba1);
    /* 00658ba1: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00658ba3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00658ba6: mov ecx, dword ptr [ecx + 0x1dc] */ r_ecx = R32((u32)(r_ecx+0x1dcu));
    /* 00658bac: call 0x665190 */ r_esp -= 4; W32(r_esp, 0x658bb1u); f_00665190();
    /* 00658bb1: jmp 0x658be0 */ goto L_00658be0;
L_00658bb3:; BB(0x00658bb3);
    /* 00658bb3: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00658bb5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00658bb8: mov ecx, dword ptr [edx + 0x1dc] */ r_ecx = R32((u32)(r_edx+0x1dcu));
    /* 00658bbe: call 0x665190 */ r_esp -= 4; W32(r_esp, 0x658bc3u); f_00665190();
    /* 00658bc3: jmp 0x658be0 */ goto L_00658be0;
L_00658bc5:; BB(0x00658bc5);
    /* 00658bc5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00658bc7: jne 0x658be0 */ if (!fZ) goto L_00658be0;
L_00658bc9:; BB(0x00658bc9);
    /* 00658bc9: push 0x396 */ { u32 v = 0x396u; r_esp -= 4; W32(r_esp, v); }
    /* 00658bce: push 0x6de4bc */ { u32 v = 0x6de4bcu; r_esp -= 4; W32(r_esp, v); }
    /* 00658bd3: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00658bd8: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x658bddu); f_005e9f20();
    /* 00658bdd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00658be0:; BB(0x00658be0);
    /* 00658be0: jmp 0x658ce0 */ goto L_00658ce0;
L_00658be5:; BB(0x00658be5);
    /* 00658be5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00658be8: mov eax, dword ptr [edx + 0x278] */ r_eax = R32((u32)(r_edx+0x278u));
    /* 00658bee: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00658bf1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00658bf4: sub ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00658bf7: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00658bfa: cmp dword ptr [ebp - 0x10], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00658bfe: ja 0x658c35 */ if ((!fC&&!fZ)) goto L_00658c35;
L_00658c00:; BB(0x00658c00);
    /* 00658c00: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00658c03: movzx eax, byte ptr [edx + 0x658d20] */ r_eax = (u32)R8((u32)(r_edx+0x658d20u));
    /* 00658c0a: jmp dword ptr [eax*4 + 0x658d14] */ { u32 t = R32((u32)(r_eax*4+0x658d14u)); switch (t) { case 0x658c11u: goto L_00658c11; case 0x658c23u: goto L_00658c23; case 0x658c35u: goto L_00658c35; default: UNSUP(0x00658c0a, "jump table entry is not a known target"); } }
L_00658c11:; BB(0x00658c11);
    /* 00658c11: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00658c13: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00658c16: mov ecx, dword ptr [ecx + 0x1dc] */ r_ecx = R32((u32)(r_ecx+0x1dcu));
    /* 00658c1c: call 0x665190 */ r_esp -= 4; W32(r_esp, 0x658c21u); f_00665190();
    /* 00658c21: jmp 0x658c50 */ goto L_00658c50;
L_00658c23:; BB(0x00658c23);
    /* 00658c23: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00658c25: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00658c28: mov ecx, dword ptr [edx + 0x1dc] */ r_ecx = R32((u32)(r_edx+0x1dcu));
    /* 00658c2e: call 0x665190 */ r_esp -= 4; W32(r_esp, 0x658c33u); f_00665190();
    /* 00658c33: jmp 0x658c50 */ goto L_00658c50;
L_00658c35:; BB(0x00658c35);
    /* 00658c35: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00658c37: jne 0x658c50 */ if (!fZ) goto L_00658c50;
L_00658c39:; BB(0x00658c39);
    /* 00658c39: push 0x3a4 */ { u32 v = 0x3a4u; r_esp -= 4; W32(r_esp, v); }
    /* 00658c3e: push 0x6de4bc */ { u32 v = 0x6de4bcu; r_esp -= 4; W32(r_esp, v); }
    /* 00658c43: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00658c48: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x658c4du); f_005e9f20();
    /* 00658c4d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00658c50:; BB(0x00658c50);
    /* 00658c50: jmp 0x658ce0 */ goto L_00658ce0;
L_00658c55:; BB(0x00658c55);
    /* 00658c55: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00658c58: mov eax, dword ptr [edx + 0x278] */ r_eax = R32((u32)(r_edx+0x278u));
    /* 00658c5e: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00658c61: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00658c64: sub ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00658c67: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00658c6a: cmp dword ptr [ebp - 0x14], 6 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00658c6e: ja 0x658cc5 */ if ((!fC&&!fZ)) goto L_00658cc5;
L_00658c70:; BB(0x00658c70);
    /* 00658c70: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00658c73: movzx eax, byte ptr [edx + 0x658d34] */ r_eax = (u32)R8((u32)(r_edx+0x658d34u));
    /* 00658c7a: jmp dword ptr [eax*4 + 0x658d28] */ { u32 t = R32((u32)(r_eax*4+0x658d28u)); switch (t) { case 0x658c81u: goto L_00658c81; case 0x658ca3u: goto L_00658ca3; case 0x658cc5u: goto L_00658cc5; default: UNSUP(0x00658c7a, "jump table entry is not a known target"); } }
L_00658c81:; BB(0x00658c81);
    /* 00658c81: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00658c83: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00658c86: mov ecx, dword ptr [ecx + 0x1dc] */ r_ecx = R32((u32)(r_ecx+0x1dcu));
    /* 00658c8c: call 0x665190 */ r_esp -= 4; W32(r_esp, 0x658c91u); f_00665190();
    /* 00658c91: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00658c93: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00658c96: mov ecx, dword ptr [edx + 0x1dc] */ r_ecx = R32((u32)(r_edx+0x1dcu));
    /* 00658c9c: call 0x665190 */ r_esp -= 4; W32(r_esp, 0x658ca1u); f_00665190();
    /* 00658ca1: jmp 0x658ce0 */ goto L_00658ce0;
L_00658ca3:; BB(0x00658ca3);
    /* 00658ca3: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00658ca5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00658ca8: mov ecx, dword ptr [eax + 0x1dc] */ r_ecx = R32((u32)(r_eax+0x1dcu));
    /* 00658cae: call 0x665190 */ r_esp -= 4; W32(r_esp, 0x658cb3u); f_00665190();
    /* 00658cb3: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00658cb5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00658cb8: mov ecx, dword ptr [ecx + 0x1dc] */ r_ecx = R32((u32)(r_ecx+0x1dcu));
    /* 00658cbe: call 0x665190 */ r_esp -= 4; W32(r_esp, 0x658cc3u); f_00665190();
    /* 00658cc3: jmp 0x658ce0 */ goto L_00658ce0;
L_00658cc5:; BB(0x00658cc5);
    /* 00658cc5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00658cc7: jne 0x658ce0 */ if (!fZ) goto L_00658ce0;
L_00658cc9:; BB(0x00658cc9);
    /* 00658cc9: push 0x3b4 */ { u32 v = 0x3b4u; r_esp -= 4; W32(r_esp, v); }
    /* 00658cce: push 0x6de4bc */ { u32 v = 0x6de4bcu; r_esp -= 4; W32(r_esp, v); }
    /* 00658cd3: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00658cd8: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x658cddu); f_005e9f20();
    /* 00658cdd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00658ce0:; BB(0x00658ce0);
    /* 00658ce0: jmp 0x658cfa */ goto L_00658cfa;
L_00658ce2:; BB(0x00658ce2);
    /* 00658ce2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00658ce5: mov edx, dword ptr [ecx + 0x278] */ r_edx = R32((u32)(r_ecx+0x278u));
    /* 00658ceb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00658cec: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00658cef: mov ecx, dword ptr [eax + 0x1dc] */ r_ecx = R32((u32)(r_eax+0x1dcu));
    /* 00658cf5: call 0x665190 */ r_esp -= 4; W32(r_esp, 0x658cfau); f_00665190();
L_00658cfa:; BB(0x00658cfa);
    /* 00658cfa: mov esp, ebp */ r_esp = r_ebp;
    /* 00658cfc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00658cfd: ret  */ FN_RET(0x00658b20); r_esp += 4; return;
}

void f_006592c0(void) /* facemakerdialog::func_006592c0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006592c0);
    /* 006592c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006592c1: mov ebp, esp */ r_ebp = r_esp;
    /* 006592c3: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006592c6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006592c9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006592cc: cmp dword ptr [eax + 0x278], 2 */ {  u32 a = R32((u32)(r_eax+0x278u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006592d3: jle 0x6594ea */ if ((fZ||fS!=fO)) goto L_006594ea;
L_006592d9:; BB(0x006592d9);
    /* 006592d9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006592dc: call 0x657820 */ r_esp -= 4; W32(r_esp, 0x6592e1u); f_00657820();
    /* 006592e1: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 006592e4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006592e6: je 0x6594a2 */ if (fZ) goto L_006594a2;
L_006592ec:; BB(0x006592ec);
    /* 006592ec: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006592ef: mov ecx, dword ptr [edx + 0x600] */ r_ecx = R32((u32)(r_edx+0x600u));
    /* 006592f5: call 0x606570 */ r_esp -= 4; W32(r_esp, 0x6592fau); f_00606570();
    /* 006592fa: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 006592fd: cmp dword ptr [ebp - 8], 0x3fd */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3fdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00659304: je 0x659325 */ if (fZ) goto L_00659325;
L_00659306:; BB(0x00659306);
    /* 00659306: cmp dword ptr [ebp - 8], 0x3fe */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3feu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065930d: je 0x659399 */ if (fZ) goto L_00659399;
L_00659313:; BB(0x00659313);
    /* 00659313: cmp dword ptr [ebp - 8], 0x3ff */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3ffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065931a: je 0x65940d */ if (fZ) goto L_0065940d;
L_00659320:; BB(0x00659320);
    /* 00659320: jmp 0x6594a0 */ goto L_006594a0;
L_00659325:; BB(0x00659325);
    /* 00659325: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00659328: mov ecx, dword ptr [eax + 0x278] */ r_ecx = R32((u32)(r_eax+0x278u));
    /* 0065932e: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00659331: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00659334: sub edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00659337: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0065933a: cmp dword ptr [ebp - 0xc], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0065933e: ja 0x659379 */ if ((!fC&&!fZ)) goto L_00659379;
L_00659340:; BB(0x00659340);
    /* 00659340: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00659343: movzx ecx, byte ptr [eax + 0x6595ac] */ r_ecx = (u32)R8((u32)(r_eax+0x6595acu));
    /* 0065934a: jmp dword ptr [ecx*4 + 0x6595a0] */ { u32 t = R32((u32)(r_ecx*4+0x6595a0u)); switch (t) { case 0x659351u: goto L_00659351; case 0x659365u: goto L_00659365; case 0x659379u: goto L_00659379; default: UNSUP(0x0065934a, "jump table entry is not a known target"); } }
L_00659351:; BB(0x00659351);
    /* 00659351: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00659353: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00659355: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00659358: mov ecx, dword ptr [edx + 0x1dc] */ r_ecx = R32((u32)(r_edx+0x1dcu));
    /* 0065935e: call 0x664730 */ r_esp -= 4; W32(r_esp, 0x659363u); f_00664730();
    /* 00659363: jmp 0x659394 */ goto L_00659394;
L_00659365:; BB(0x00659365);
    /* 00659365: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00659367: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00659369: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065936c: mov ecx, dword ptr [eax + 0x1dc] */ r_ecx = R32((u32)(r_eax+0x1dcu));
    /* 00659372: call 0x664730 */ r_esp -= 4; W32(r_esp, 0x659377u); f_00664730();
    /* 00659377: jmp 0x659394 */ goto L_00659394;
L_00659379:; BB(0x00659379);
    /* 00659379: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0065937b: jne 0x659394 */ if (!fZ) goto L_00659394;
L_0065937d:; BB(0x0065937d);
    /* 0065937d: push 0x43a */ { u32 v = 0x43au; r_esp -= 4; W32(r_esp, v); }
    /* 00659382: push 0x6de4bc */ { u32 v = 0x6de4bcu; r_esp -= 4; W32(r_esp, v); }
    /* 00659387: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0065938c: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x659391u); f_005e9f20();
    /* 00659391: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00659394:; BB(0x00659394);
    /* 00659394: jmp 0x6594a0 */ goto L_006594a0;
L_00659399:; BB(0x00659399);
    /* 00659399: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065939c: mov ecx, dword ptr [eax + 0x278] */ r_ecx = R32((u32)(r_eax+0x278u));
    /* 006593a2: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 006593a5: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006593a8: sub edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006593ab: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 006593ae: cmp dword ptr [ebp - 0x10], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006593b2: ja 0x6593ed */ if ((!fC&&!fZ)) goto L_006593ed;
L_006593b4:; BB(0x006593b4);
    /* 006593b4: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 006593b7: movzx ecx, byte ptr [eax + 0x6595c0] */ r_ecx = (u32)R8((u32)(r_eax+0x6595c0u));
    /* 006593be: jmp dword ptr [ecx*4 + 0x6595b4] */ { u32 t = R32((u32)(r_ecx*4+0x6595b4u)); switch (t) { case 0x6593c5u: goto L_006593c5; case 0x6593d9u: goto L_006593d9; case 0x6593edu: goto L_006593ed; default: UNSUP(0x006593be, "jump table entry is not a known target"); } }
L_006593c5:; BB(0x006593c5);
    /* 006593c5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006593c7: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006593c9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006593cc: mov ecx, dword ptr [edx + 0x1dc] */ r_ecx = R32((u32)(r_edx+0x1dcu));
    /* 006593d2: call 0x664730 */ r_esp -= 4; W32(r_esp, 0x6593d7u); f_00664730();
    /* 006593d7: jmp 0x659408 */ goto L_00659408;
L_006593d9:; BB(0x006593d9);
    /* 006593d9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006593db: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 006593dd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006593e0: mov ecx, dword ptr [eax + 0x1dc] */ r_ecx = R32((u32)(r_eax+0x1dcu));
    /* 006593e6: call 0x664730 */ r_esp -= 4; W32(r_esp, 0x6593ebu); f_00664730();
    /* 006593eb: jmp 0x659408 */ goto L_00659408;
L_006593ed:; BB(0x006593ed);
    /* 006593ed: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 006593ef: jne 0x659408 */ if (!fZ) goto L_00659408;
L_006593f1:; BB(0x006593f1);
    /* 006593f1: push 0x448 */ { u32 v = 0x448u; r_esp -= 4; W32(r_esp, v); }
    /* 006593f6: push 0x6de4bc */ { u32 v = 0x6de4bcu; r_esp -= 4; W32(r_esp, v); }
    /* 006593fb: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00659400: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x659405u); f_005e9f20();
    /* 00659405: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00659408:; BB(0x00659408);
    /* 00659408: jmp 0x6594a0 */ goto L_006594a0;
L_0065940d:; BB(0x0065940d);
    /* 0065940d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00659410: mov ecx, dword ptr [eax + 0x278] */ r_ecx = R32((u32)(r_eax+0x278u));
    /* 00659416: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00659419: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065941c: sub edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0065941f: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00659422: cmp dword ptr [ebp - 0x14], 6 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00659426: ja 0x659485 */ if ((!fC&&!fZ)) goto L_00659485;
L_00659428:; BB(0x00659428);
    /* 00659428: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0065942b: movzx ecx, byte ptr [eax + 0x6595d4] */ r_ecx = (u32)R8((u32)(r_eax+0x6595d4u));
    /* 00659432: jmp dword ptr [ecx*4 + 0x6595c8] */ { u32 t = R32((u32)(r_ecx*4+0x6595c8u)); switch (t) { case 0x659439u: goto L_00659439; case 0x65945fu: goto L_0065945f; case 0x659485u: goto L_00659485; default: UNSUP(0x00659432, "jump table entry is not a known target"); } }
L_00659439:; BB(0x00659439);
    /* 00659439: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065943b: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0065943d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00659440: mov ecx, dword ptr [edx + 0x1dc] */ r_ecx = R32((u32)(r_edx+0x1dcu));
    /* 00659446: call 0x664730 */ r_esp -= 4; W32(r_esp, 0x65944bu); f_00664730();
    /* 0065944b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065944d: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0065944f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00659452: mov ecx, dword ptr [eax + 0x1dc] */ r_ecx = R32((u32)(r_eax+0x1dcu));
    /* 00659458: call 0x664730 */ r_esp -= 4; W32(r_esp, 0x65945du); f_00664730();
    /* 0065945d: jmp 0x6594a0 */ goto L_006594a0;
L_0065945f:; BB(0x0065945f);
    /* 0065945f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00659461: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00659463: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00659466: mov ecx, dword ptr [ecx + 0x1dc] */ r_ecx = R32((u32)(r_ecx+0x1dcu));
    /* 0065946c: call 0x664730 */ r_esp -= 4; W32(r_esp, 0x659471u); f_00664730();
    /* 00659471: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00659473: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00659475: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00659478: mov ecx, dword ptr [edx + 0x1dc] */ r_ecx = R32((u32)(r_edx+0x1dcu));
    /* 0065947e: call 0x664730 */ r_esp -= 4; W32(r_esp, 0x659483u); f_00664730();
    /* 00659483: jmp 0x6594a0 */ goto L_006594a0;
L_00659485:; BB(0x00659485);
    /* 00659485: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00659487: jne 0x6594a0 */ if (!fZ) goto L_006594a0;
L_00659489:; BB(0x00659489);
    /* 00659489: push 0x458 */ { u32 v = 0x458u; r_esp -= 4; W32(r_esp, v); }
    /* 0065948e: push 0x6de4bc */ { u32 v = 0x6de4bcu; r_esp -= 4; W32(r_esp, v); }
    /* 00659493: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00659498: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x65949du); f_005e9f20();
    /* 0065949d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006594a0:; BB(0x006594a0);
    /* 006594a0: jmp 0x6594bc */ goto L_006594bc;
L_006594a2:; BB(0x006594a2);
    /* 006594a2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006594a4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006594a7: mov eax, dword ptr [edx + 0x278] */ r_eax = R32((u32)(r_edx+0x278u));
    /* 006594ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006594ae: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006594b1: mov ecx, dword ptr [ecx + 0x1dc] */ r_ecx = R32((u32)(r_ecx+0x1dcu));
    /* 006594b7: call 0x664730 */ r_esp -= 4; W32(r_esp, 0x6594bcu); f_00664730();
L_006594bc:; BB(0x006594bc);
    /* 006594bc: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006594bf: mov ecx, dword ptr [edx + 0x5fc] */ r_ecx = R32((u32)(r_edx+0x5fcu));
    /* 006594c5: call 0x6067e0 */ r_esp -= 4; W32(r_esp, 0x6594cau); f_006067e0();
    /* 006594ca: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006594cd: mov ecx, dword ptr [eax + 0x608] */ r_ecx = R32((u32)(r_eax+0x608u));
    /* 006594d3: call 0x6067e0 */ r_esp -= 4; W32(r_esp, 0x6594d8u); f_006067e0();
    /* 006594d8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006594db: mov dword ptr [ecx + 0x27c], 0xffffffff */ W32((u32)(r_ecx+0x27cu), 0xffffffffu);
    /* 006594e5: jmp 0x65957b */ goto L_0065957b;
L_006594ea:; BB(0x006594ea);
    /* 006594ea: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006594ec: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006594ef: mov ecx, dword ptr [edx + 0x1dc] */ r_ecx = R32((u32)(r_edx+0x1dcu));
    /* 006594f5: call 0x6651e0 */ r_esp -= 4; W32(r_esp, 0x6594fau); f_006651e0();
    /* 006594fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006594fb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006594fd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00659500: mov ecx, dword ptr [eax + 0x278] */ r_ecx = R32((u32)(r_eax+0x278u));
    /* 00659506: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00659507: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065950a: mov ecx, dword ptr [edx + 0x63c] */ r_ecx = R32((u32)(r_edx+0x63cu));
    /* 00659510: call 0x675b40 */ r_esp -= 4; W32(r_esp, 0x659515u); f_00675b40();
    /* 00659515: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00659516: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00659519: mov ecx, dword ptr [eax + 0x278] */ r_ecx = R32((u32)(r_eax+0x278u));
    /* 0065951f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00659520: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00659523: mov ecx, dword ptr [edx + 0x1dc] */ r_ecx = R32((u32)(r_edx+0x1dcu));
    /* 00659529: call 0x664730 */ r_esp -= 4; W32(r_esp, 0x65952eu); f_00664730();
    /* 0065952e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00659531: cmp dword ptr [eax + 0x278], 0 */ {  u32 a = R32((u32)(r_eax+0x278u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00659538: jne 0x65956e */ if (!fZ) goto L_0065956e;
L_0065953a:; BB(0x0065953a);
    /* 0065953a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065953c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065953f: mov ecx, dword ptr [ecx + 0x1dc] */ r_ecx = R32((u32)(r_ecx+0x1dcu));
    /* 00659545: call 0x6651e0 */ r_esp -= 4; W32(r_esp, 0x65954au); f_006651e0();
    /* 0065954a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065954b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065954d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065954f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00659552: mov ecx, dword ptr [edx + 0x63c] */ r_ecx = R32((u32)(r_edx+0x63cu));
    /* 00659558: call 0x675b40 */ r_esp -= 4; W32(r_esp, 0x65955du); f_00675b40();
    /* 0065955d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065955e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00659560: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00659563: mov ecx, dword ptr [eax + 0x1dc] */ r_ecx = R32((u32)(r_eax+0x1dcu));
    /* 00659569: call 0x664730 */ r_esp -= 4; W32(r_esp, 0x65956eu); f_00664730();
L_0065956e:; BB(0x0065956e);
    /* 0065956e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00659571: mov dword ptr [ecx + 0x27c], 0 */ W32((u32)(r_ecx+0x27cu), 0x0u);
L_0065957b:; BB(0x0065957b);
    /* 0065957b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065957d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00659580: call 0x657bb0 */ r_esp -= 4; W32(r_esp, 0x659585u); f_00657bb0();
    /* 00659585: imul eax, eax, 0xc */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xcu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00659588: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00659589: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065958c: call 0x657e60 */ r_esp -= 4; W32(r_esp, 0x659591u); f_00657e60();
    /* 00659591: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00659594: call 0x657b10 */ r_esp -= 4; W32(r_esp, 0x659599u); f_00657b10();
    /* 00659599: mov esp, ebp */ r_esp = r_ebp;
    /* 0065959b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065959c: ret 4 */ FN_RET(0x006592c0); r_esp += 8; return;
}

void f_006597c0(void) /* FaceMakerDialog::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006597c0);
    /* 006597c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006597c1: mov ebp, esp */ r_ebp = r_esp;
    /* 006597c3: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006597c6: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006597c9: cmp dword ptr [ebp + 8], 0x473 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x473u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006597d0: jl 0x659809 */ if ((fS!=fO)) goto L_00659809;
L_006597d2:; BB(0x006597d2);
    /* 006597d2: cmp dword ptr [ebp + 8], 0x4d7 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4d7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006597d9: jge 0x659809 */ if ((fS==fO)) goto L_00659809;
L_006597db:; BB(0x006597db);
    /* 006597db: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006597de: sub eax, 0x473 */ {  u32 a = r_eax; u32 b = 0x473u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006597e3: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006597e6: mov byte ptr [ecx + 0x280], al */ W8((u32)(r_ecx+0x280u), (u8)r_eax);
    /* 006597ec: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006597ee: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006597f1: movsx eax, byte ptr [edx + 0x280] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x280u));
    /* 006597f8: imul eax, eax, 0xc */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xcu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006597fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006597fc: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006597ff: call 0x657e60 */ r_esp -= 4; W32(r_esp, 0x659804u); f_00657e60();
    /* 00659804: jmp 0x6599fc */ goto L_006599fc;
L_00659809:; BB(0x00659809);
    /* 00659809: cmp dword ptr [ebp + 8], 0x4d7 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4d7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00659810: jl 0x659866 */ if ((fS!=fO)) goto L_00659866;
L_00659812:; BB(0x00659812);
    /* 00659812: cmp dword ptr [ebp + 8], 0x4e3 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4e3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00659819: jge 0x659866 */ if ((fS==fO)) goto L_00659866;
L_0065981b:; BB(0x0065981b);
    /* 0065981b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065981e: mov ecx, dword ptr [ecx + 0x608] */ r_ecx = R32((u32)(r_ecx+0x608u));
    /* 00659824: call 0x6067e0 */ r_esp -= 4; W32(r_esp, 0x659829u); f_006067e0();
    /* 00659829: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0065982c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065982f: mov ecx, dword ptr [eax + edx*4 - 0xd50] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xfffff2b0u));
    /* 00659836: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00659839: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065983c: mov edx, dword ptr [eax + edx*4 - 0xd50] */ r_edx = R32((u32)(r_eax+r_edx*4+0xfffff2b0u));
    /* 00659843: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00659845: mov ecx, edx */ r_ecx = r_edx;
    /* 00659847: mov edx, dword ptr [eax + 0xf4] */ r_edx = R32((u32)(r_eax+0xf4u));
    /* 0065984d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x65984fu); call_ind(t); }
    /* 0065984f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00659852: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00659855: mov ecx, dword ptr [ecx + eax*4 - 0xd50] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0xfffff2b0u));
    /* 0065985c: call 0x65a9a0 */ r_esp -= 4; W32(r_esp, 0x659861u); f_0065a9a0();
    /* 00659861: jmp 0x6599fc */ goto L_006599fc;
L_00659866:; BB(0x00659866);
    /* 00659866: movzx edx, byte ptr [0x795f95] */ r_edx = (u32)R8((u32)(0x795f95u));
    /* 0065986d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065986f: jne 0x6598b4 */ if (!fZ) goto L_006598b4;
L_00659871:; BB(0x00659871);
    /* 00659871: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00659874: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00659877: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0065987a: sub ecx, 0x3e8 */ {  u32 a = r_ecx; u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00659880: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00659883: cmp dword ptr [ebp - 0x28], 7 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00659887: ja 0x6598b4 */ if ((!fC&&!fZ)) goto L_006598b4;
L_00659889:; BB(0x00659889);
    /* 00659889: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0065988c: movzx eax, byte ptr [edx + 0x659a0c] */ r_eax = (u32)R8((u32)(r_edx+0x659a0cu));
    /* 00659893: jmp dword ptr [eax*4 + 0x659a04] */ { u32 t = R32((u32)(r_eax*4+0x659a04u)); switch (t) { case 0x65989au: goto L_0065989a; case 0x6598b4u: goto L_006598b4; default: UNSUP(0x00659893, "jump table entry is not a known target"); } }
L_0065989a:; BB(0x0065989a);
    /* 0065989a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0065989d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065989e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006598a0: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006598a3: call 0x659ad0 */ r_esp -= 4; W32(r_esp, 0x6598a8u); f_00659ad0();
    /* 006598a8: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 006598ab: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006598ad: jne 0x6598b4 */ if (!fZ) goto L_006598b4;
L_006598af:; BB(0x006598af);
    /* 006598af: jmp 0x6599fc */ goto L_006599fc;
L_006598b4:; BB(0x006598b4);
    /* 006598b4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006598b7: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 006598ba: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 006598bd: sub ecx, 0x3e8 */ {  u32 a = r_ecx; u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006598c3: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 006598c6: cmp dword ptr [ebp - 0x2c], 0x19 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006598ca: ja 0x6599fc */ if ((!fC&&!fZ)) goto L_006599fc;
L_006598d0:; BB(0x006598d0);
    /* 006598d0: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 006598d3: jmp dword ptr [edx*4 + 0x659a14] */ { u32 t = R32((u32)(r_edx*4+0x659a14u)); switch (t) { case 0x6598e7u: goto L_006598e7; case 0x65992cu: goto L_0065992c; case 0x65993bu: goto L_0065993b; case 0x6598dau: goto L_006598da; case 0x659912u: goto L_00659912; case 0x6598f4u: goto L_006598f4; case 0x659901u: goto L_00659901; case 0x65991fu: goto L_0065991f; case 0x6599b6u: goto L_006599b6; case 0x6599c2u: goto L_006599c2; case 0x6599ceu: goto L_006599ce; case 0x6599e6u: goto L_006599e6; case 0x6599f2u: goto L_006599f2; case 0x6599dau: goto L_006599da; case 0x659986u: goto L_00659986; case 0x659992u: goto L_00659992; case 0x65999eu: goto L_0065999e; case 0x6599aau: goto L_006599aa; case 0x6599fcu: goto L_006599fc; case 0x659948u: goto L_00659948; default: UNSUP(0x006598d3, "jump table entry is not a known target"); } }
L_006598da:; BB(0x006598da);
    /* 006598da: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006598dd: call 0x65a290 */ r_esp -= 4; W32(r_esp, 0x6598e2u); f_0065a290();
    /* 006598e2: jmp 0x6599fc */ goto L_006599fc;
L_006598e7:; BB(0x006598e7);
    /* 006598e7: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006598ea: call 0x65a2f0 */ r_esp -= 4; W32(r_esp, 0x6598efu); f_0065a2f0();
    /* 006598ef: jmp 0x6599fc */ goto L_006599fc;
L_006598f4:; BB(0x006598f4);
    /* 006598f4: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006598f7: call 0x65a540 */ r_esp -= 4; W32(r_esp, 0x6598fcu); f_0065a540();
    /* 006598fc: jmp 0x6599fc */ goto L_006599fc;
L_00659901:; BB(0x00659901);
    /* 00659901: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00659903: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00659905: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00659908: call 0x659ad0 */ r_esp -= 4; W32(r_esp, 0x65990du); f_00659ad0();
    /* 0065990d: jmp 0x6599fc */ goto L_006599fc;
L_00659912:; BB(0x00659912);
    /* 00659912: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00659915: call 0x65a730 */ r_esp -= 4; W32(r_esp, 0x65991au); f_0065a730();
    /* 0065991a: jmp 0x6599fc */ goto L_006599fc;
L_0065991f:; BB(0x0065991f);
    /* 0065991f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00659922: call 0x65a710 */ r_esp -= 4; W32(r_esp, 0x659927u); f_0065a710();
    /* 00659927: jmp 0x6599fc */ goto L_006599fc;
L_0065992c:; BB(0x0065992c);
    /* 0065992c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065992e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00659931: call 0x6592c0 */ r_esp -= 4; W32(r_esp, 0x659936u); f_006592c0();
    /* 00659936: jmp 0x6599fc */ goto L_006599fc;
L_0065993b:; BB(0x0065993b);
    /* 0065993b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065993e: call 0x658b20 */ r_esp -= 4; W32(r_esp, 0x659943u); f_00658b20();
    /* 00659943: jmp 0x6599fc */ goto L_006599fc;
L_00659948:; BB(0x00659948);
    /* 00659948: mov dword ptr [ebp - 0x1c], 0x1770 */ W32((u32)(r_ebp+0xffffffe4u), 0x1770u);
    /* 0065994f: mov dword ptr [ebp - 0x18], 0xffffffff */ W32((u32)(r_ebp+0xffffffe8u), 0xffffffffu);
    /* 00659956: fldz  */ FPUSH(0.0);
    /* 00659958: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0065995b: fld1  */ FPUSH(1.0);
    /* 0065995d: fstp qword ptr [ebp - 8] */ W_F64((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 00659960: mov dword ptr [ebp - 0x20], 0xffffffff */ W32((u32)(r_ebp+0xffffffe0u), 0xffffffffu);
    /* 00659967: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00659969: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065996b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065996d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065996f: lea eax, [ebp - 0x20] */ r_eax = (u32)(r_ebp+0xffffffe0u);
    /* 00659972: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00659973: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00659976: mov edx, dword ptr [ecx + 0x1d8] */ r_edx = R32((u32)(r_ecx+0x1d8u));
    /* 0065997c: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 0065997f: call 0x6476f0 */ r_esp -= 4; W32(r_esp, 0x659984u); f_006476f0();
    /* 00659984: jmp 0x6599fc */ goto L_006599fc;
L_00659986:; BB(0x00659986);
    /* 00659986: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00659988: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065998b: call 0x6595e0 */ r_esp -= 4; W32(r_esp, 0x659990u); f_006595e0();
    /* 00659990: jmp 0x6599fc */ goto L_006599fc;
L_00659992:; BB(0x00659992);
    /* 00659992: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00659994: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00659997: call 0x6595e0 */ r_esp -= 4; W32(r_esp, 0x65999cu); f_006595e0();
    /* 0065999c: jmp 0x6599fc */ goto L_006599fc;
L_0065999e:; BB(0x0065999e);
    /* 0065999e: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006599a0: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006599a3: call 0x6595e0 */ r_esp -= 4; W32(r_esp, 0x6599a8u); f_006595e0();
    /* 006599a8: jmp 0x6599fc */ goto L_006599fc;
L_006599aa:; BB(0x006599aa);
    /* 006599aa: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006599ac: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006599af: call 0x6595e0 */ r_esp -= 4; W32(r_esp, 0x6599b4u); f_006595e0();
    /* 006599b4: jmp 0x6599fc */ goto L_006599fc;
L_006599b6:; BB(0x006599b6);
    /* 006599b6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006599b8: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006599bb: call 0x6591b0 */ r_esp -= 4; W32(r_esp, 0x6599c0u); f_006591b0();
    /* 006599c0: jmp 0x6599fc */ goto L_006599fc;
L_006599c2:; BB(0x006599c2);
    /* 006599c2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006599c4: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006599c7: call 0x6591b0 */ r_esp -= 4; W32(r_esp, 0x6599ccu); f_006591b0();
    /* 006599cc: jmp 0x6599fc */ goto L_006599fc;
L_006599ce:; BB(0x006599ce);
    /* 006599ce: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006599d0: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006599d3: call 0x658880 */ r_esp -= 4; W32(r_esp, 0x6599d8u); f_00658880();
    /* 006599d8: jmp 0x6599fc */ goto L_006599fc;
L_006599da:; BB(0x006599da);
    /* 006599da: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006599dc: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006599df: call 0x658880 */ r_esp -= 4; W32(r_esp, 0x6599e4u); f_00658880();
    /* 006599e4: jmp 0x6599fc */ goto L_006599fc;
L_006599e6:; BB(0x006599e6);
    /* 006599e6: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006599e8: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006599eb: call 0x658880 */ r_esp -= 4; W32(r_esp, 0x6599f0u); f_00658880();
    /* 006599f0: jmp 0x6599fc */ goto L_006599fc;
L_006599f2:; BB(0x006599f2);
    /* 006599f2: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006599f4: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006599f7: call 0x658880 */ r_esp -= 4; W32(r_esp, 0x6599fcu); f_00658880();
L_006599fc:; BB(0x006599fc);
    /* 006599fc: mov esp, ebp */ r_esp = r_ebp;
    /* 006599fe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006599ff: ret 4 */ FN_RET(0x006597c0); r_esp += 8; return;
}

void f_00659a80(void) /* FaceMakerDialog::vfunc14 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00659a80);
    /* 00659a80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00659a81: mov ebp, esp */ r_ebp = r_esp;
    /* 00659a83: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00659a86: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00659a89: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00659a8c: sub eax, 0x186bf */ {  u32 a = r_eax; u32 b = 0x186bfu; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00659a91: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00659a94: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00659a97: movsx edx, byte ptr [ecx + 0x1bc] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x1bcu));
    /* 00659a9e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00659aa0: je 0x659ab8 */ if (fZ) goto L_00659ab8;
L_00659aa2:; BB(0x00659aa2);
    /* 00659aa2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00659aa5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00659aa6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00659aa9: add ecx, 0x1bc */ {  u32 a = r_ecx; u32 b = 0x1bcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00659aaf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00659ab0: call 0x6659e0 */ r_esp -= 4; W32(r_esp, 0x659ab5u); f_006659e0();
    /* 00659ab5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00659ab8:; BB(0x00659ab8);
    /* 00659ab8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00659abb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00659abc: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00659abf: mov ecx, dword ptr [eax + 0x1d8] */ r_ecx = R32((u32)(r_eax+0x1d8u));
    /* 00659ac5: call 0x63b490 */ r_esp -= 4; W32(r_esp, 0x659acau); f_0063b490();
    /* 00659aca: mov esp, ebp */ r_esp = r_ebp;
    /* 00659acc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00659acd: ret 8 */ FN_RET(0x00659a80); r_esp += 12; return;
}

void f_0065a9a0(void) /* facemakerdialog::func_0065a9a0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065a9a0);
    /* 0065a9a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065a9a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0065a9a3: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065a9a6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0065a9a9: mov eax, dword ptr [0x16306a4] */ r_eax = R32((u32)(0x16306a4u));
    /* 0065a9ae: mov ecx, dword ptr [eax + 0x1dc] */ r_ecx = R32((u32)(r_eax+0x1dcu));
    /* 0065a9b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0065a9b7: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065a9ba: cmp dword ptr [edx + 0x218], 0 */ {  u32 a = R32((u32)(r_edx+0x218u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065a9c1: je 0x65ad69 */ if (fZ) goto L_0065ad69;
L_0065a9c7:; BB(0x0065a9c7);
    /* 0065a9c7: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065a9ca: mov ecx, dword ptr [eax + 0x218] */ r_ecx = R32((u32)(r_eax+0x218u));
    /* 0065a9d0: call 0x5f54a0 */ r_esp -= 4; W32(r_esp, 0x65a9d5u); f_005f54a0();
    /* 0065a9d5: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0065a9d8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065a9da: je 0x65ad69 */ if (fZ) goto L_0065ad69;
L_0065a9e0:; BB(0x0065a9e0);
    /* 0065a9e0: mov ecx, dword ptr [0x16306a4] */ r_ecx = R32((u32)(0x16306a4u));
    /* 0065a9e6: call 0x657820 */ r_esp -= 4; W32(r_esp, 0x65a9ebu); f_00657820();
    /* 0065a9eb: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0065a9ee: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065a9f0: je 0x65acbb */ if (fZ) goto L_0065acbb;
L_0065a9f6:; BB(0x0065a9f6);
    /* 0065a9f6: mov eax, dword ptr [0x16306a4] */ r_eax = R32((u32)(0x16306a4u));
    /* 0065a9fb: mov ecx, dword ptr [eax + 0x600] */ r_ecx = R32((u32)(r_eax+0x600u));
    /* 0065aa01: call 0x606570 */ r_esp -= 4; W32(r_esp, 0x65aa06u); f_00606570();
    /* 0065aa06: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0065aa09: cmp dword ptr [ebp - 0xc], 0x3fd */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x3fdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065aa10: je 0x65aa31 */ if (fZ) goto L_0065aa31;
L_0065aa12:; BB(0x0065aa12);
    /* 0065aa12: cmp dword ptr [ebp - 0xc], 0x3fe */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x3feu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065aa19: je 0x65aae7 */ if (fZ) goto L_0065aae7;
L_0065aa1f:; BB(0x0065aa1f);
    /* 0065aa1f: cmp dword ptr [ebp - 0xc], 0x3ff */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x3ffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065aa26: je 0x65ab9b */ if (fZ) goto L_0065ab9b;
L_0065aa2c:; BB(0x0065aa2c);
    /* 0065aa2c: jmp 0x65acb9 */ goto L_0065acb9;
L_0065aa31:; BB(0x0065aa31);
    /* 0065aa31: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065aa34: mov edx, dword ptr [ecx + 0x214] */ r_edx = R32((u32)(r_ecx+0x214u));
    /* 0065aa3a: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0065aa3d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065aa40: sub eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0065aa43: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0065aa46: cmp dword ptr [ebp - 0x10], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0065aa4a: ja 0x65aac7 */ if ((!fC&&!fZ)) goto L_0065aac7;
L_0065aa4c:; BB(0x0065aa4c);
    /* 0065aa4c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065aa4f: movzx edx, byte ptr [ecx + 0x65ad7c] */ r_edx = (u32)R8((u32)(r_ecx+0x65ad7cu));
    /* 0065aa56: jmp dword ptr [edx*4 + 0x65ad70] */ { u32 t = R32((u32)(r_edx*4+0x65ad70u)); switch (t) { case 0x65aa5du: goto L_0065aa5d; case 0x65aa92u: goto L_0065aa92; case 0x65aac7u: goto L_0065aac7; default: UNSUP(0x0065aa56, "jump table entry is not a known target"); } }
L_0065aa5d:; BB(0x0065aa5d);
    /* 0065aa5d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065aa5f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065aa62: call 0x6651e0 */ r_esp -= 4; W32(r_esp, 0x65aa67u); f_006651e0();
    /* 0065aa67: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065aa68: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065aa6b: mov ecx, dword ptr [eax + 0x210] */ r_ecx = R32((u32)(r_eax+0x210u));
    /* 0065aa71: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065aa72: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0065aa74: mov edx, dword ptr [0x16306a4] */ r_edx = R32((u32)(0x16306a4u));
    /* 0065aa7a: mov ecx, dword ptr [edx + 0x63c] */ r_ecx = R32((u32)(r_edx+0x63cu));
    /* 0065aa80: call 0x675b40 */ r_esp -= 4; W32(r_esp, 0x65aa85u); f_00675b40();
    /* 0065aa85: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065aa86: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0065aa88: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065aa8b: call 0x664730 */ r_esp -= 4; W32(r_esp, 0x65aa90u); f_00664730();
    /* 0065aa90: jmp 0x65aae2 */ goto L_0065aae2;
L_0065aa92:; BB(0x0065aa92);
    /* 0065aa92: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065aa94: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065aa97: call 0x6651e0 */ r_esp -= 4; W32(r_esp, 0x65aa9cu); f_006651e0();
    /* 0065aa9c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065aa9d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065aaa0: mov ecx, dword ptr [eax + 0x210] */ r_ecx = R32((u32)(r_eax+0x210u));
    /* 0065aaa6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065aaa7: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0065aaa9: mov edx, dword ptr [0x16306a4] */ r_edx = R32((u32)(0x16306a4u));
    /* 0065aaaf: mov ecx, dword ptr [edx + 0x63c] */ r_ecx = R32((u32)(r_edx+0x63cu));
    /* 0065aab5: call 0x675b40 */ r_esp -= 4; W32(r_esp, 0x65aabau); f_00675b40();
    /* 0065aaba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065aabb: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0065aabd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065aac0: call 0x664730 */ r_esp -= 4; W32(r_esp, 0x65aac5u); f_00664730();
    /* 0065aac5: jmp 0x65aae2 */ goto L_0065aae2;
L_0065aac7:; BB(0x0065aac7);
    /* 0065aac7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0065aac9: jne 0x65aae2 */ if (!fZ) goto L_0065aae2;
L_0065aacb:; BB(0x0065aacb);
    /* 0065aacb: push 0x642 */ { u32 v = 0x642u; r_esp -= 4; W32(r_esp, v); }
    /* 0065aad0: push 0x6de4bc */ { u32 v = 0x6de4bcu; r_esp -= 4; W32(r_esp, v); }
    /* 0065aad5: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0065aada: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x65aadfu); f_005e9f20();
    /* 0065aadf: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0065aae2:; BB(0x0065aae2);
    /* 0065aae2: jmp 0x65acb9 */ goto L_0065acb9;
L_0065aae7:; BB(0x0065aae7);
    /* 0065aae7: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065aaea: mov eax, dword ptr [edx + 0x214] */ r_eax = R32((u32)(r_edx+0x214u));
    /* 0065aaf0: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0065aaf3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065aaf6: sub ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0065aaf9: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0065aafc: cmp dword ptr [ebp - 0x14], 6 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0065ab00: ja 0x65ab7b */ if ((!fC&&!fZ)) goto L_0065ab7b;
L_0065ab02:; BB(0x0065ab02);
    /* 0065ab02: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065ab05: movzx eax, byte ptr [edx + 0x65ad90] */ r_eax = (u32)R8((u32)(r_edx+0x65ad90u));
    /* 0065ab0c: jmp dword ptr [eax*4 + 0x65ad84] */ { u32 t = R32((u32)(r_eax*4+0x65ad84u)); switch (t) { case 0x65ab13u: goto L_0065ab13; case 0x65ab47u: goto L_0065ab47; case 0x65ab7bu: goto L_0065ab7b; default: UNSUP(0x0065ab0c, "jump table entry is not a known target"); } }
L_0065ab13:; BB(0x0065ab13);
    /* 0065ab13: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065ab15: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065ab18: call 0x6651e0 */ r_esp -= 4; W32(r_esp, 0x65ab1du); f_006651e0();
    /* 0065ab1d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065ab1e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065ab21: mov edx, dword ptr [ecx + 0x210] */ r_edx = R32((u32)(r_ecx+0x210u));
    /* 0065ab27: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065ab28: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0065ab2a: mov eax, dword ptr [0x16306a4] */ r_eax = R32((u32)(0x16306a4u));
    /* 0065ab2f: mov ecx, dword ptr [eax + 0x63c] */ r_ecx = R32((u32)(r_eax+0x63cu));
    /* 0065ab35: call 0x675b40 */ r_esp -= 4; W32(r_esp, 0x65ab3au); f_00675b40();
    /* 0065ab3a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065ab3b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0065ab3d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065ab40: call 0x664730 */ r_esp -= 4; W32(r_esp, 0x65ab45u); f_00664730();
    /* 0065ab45: jmp 0x65ab96 */ goto L_0065ab96;
L_0065ab47:; BB(0x0065ab47);
    /* 0065ab47: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065ab49: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065ab4c: call 0x6651e0 */ r_esp -= 4; W32(r_esp, 0x65ab51u); f_006651e0();
    /* 0065ab51: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065ab52: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065ab55: mov edx, dword ptr [ecx + 0x210] */ r_edx = R32((u32)(r_ecx+0x210u));
    /* 0065ab5b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065ab5c: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0065ab5e: mov eax, dword ptr [0x16306a4] */ r_eax = R32((u32)(0x16306a4u));
    /* 0065ab63: mov ecx, dword ptr [eax + 0x63c] */ r_ecx = R32((u32)(r_eax+0x63cu));
    /* 0065ab69: call 0x675b40 */ r_esp -= 4; W32(r_esp, 0x65ab6eu); f_00675b40();
    /* 0065ab6e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065ab6f: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0065ab71: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065ab74: call 0x664730 */ r_esp -= 4; W32(r_esp, 0x65ab79u); f_00664730();
    /* 0065ab79: jmp 0x65ab96 */ goto L_0065ab96;
L_0065ab7b:; BB(0x0065ab7b);
    /* 0065ab7b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0065ab7d: jne 0x65ab96 */ if (!fZ) goto L_0065ab96;
L_0065ab7f:; BB(0x0065ab7f);
    /* 0065ab7f: push 0x652 */ { u32 v = 0x652u; r_esp -= 4; W32(r_esp, v); }
    /* 0065ab84: push 0x6de4bc */ { u32 v = 0x6de4bcu; r_esp -= 4; W32(r_esp, v); }
    /* 0065ab89: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0065ab8e: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x65ab93u); f_005e9f20();
    /* 0065ab93: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0065ab96:; BB(0x0065ab96);
    /* 0065ab96: jmp 0x65acb9 */ goto L_0065acb9;
L_0065ab9b:; BB(0x0065ab9b);
    /* 0065ab9b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065ab9e: mov ecx, dword ptr [eax + 0x214] */ r_ecx = R32((u32)(r_eax+0x214u));
    /* 0065aba4: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0065aba7: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065abaa: sub edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0065abad: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0065abb0: cmp dword ptr [ebp - 0x18], 6 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0065abb4: ja 0x65ac9e */ if ((!fC&&!fZ)) goto L_0065ac9e;
L_0065abba:; BB(0x0065abba);
    /* 0065abba: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065abbd: movzx ecx, byte ptr [eax + 0x65ada4] */ r_ecx = (u32)R8((u32)(r_eax+0x65ada4u));
    /* 0065abc4: jmp dword ptr [ecx*4 + 0x65ad98] */ { u32 t = R32((u32)(r_ecx*4+0x65ad98u)); switch (t) { case 0x65abcbu: goto L_0065abcb; case 0x65ac36u: goto L_0065ac36; case 0x65ac9eu: goto L_0065ac9e; default: UNSUP(0x0065abc4, "jump table entry is not a known target"); } }
L_0065abcb:; BB(0x0065abcb);
    /* 0065abcb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065abcd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065abd0: call 0x6651e0 */ r_esp -= 4; W32(r_esp, 0x65abd5u); f_006651e0();
    /* 0065abd5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065abd6: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065abd9: mov eax, dword ptr [edx + 0x210] */ r_eax = R32((u32)(r_edx+0x210u));
    /* 0065abdf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065abe0: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0065abe2: mov ecx, dword ptr [0x16306a4] */ r_ecx = R32((u32)(0x16306a4u));
    /* 0065abe8: mov ecx, dword ptr [ecx + 0x63c] */ r_ecx = R32((u32)(r_ecx+0x63cu));
    /* 0065abee: call 0x675b40 */ r_esp -= 4; W32(r_esp, 0x65abf3u); f_00675b40();
    /* 0065abf3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065abf4: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0065abf6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065abf9: call 0x664730 */ r_esp -= 4; W32(r_esp, 0x65abfeu); f_00664730();
    /* 0065abfe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065ac00: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065ac03: call 0x6651e0 */ r_esp -= 4; W32(r_esp, 0x65ac08u); f_006651e0();
    /* 0065ac08: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065ac09: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065ac0c: mov eax, dword ptr [edx + 0x210] */ r_eax = R32((u32)(r_edx+0x210u));
    /* 0065ac12: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065ac13: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0065ac15: mov ecx, dword ptr [0x16306a4] */ r_ecx = R32((u32)(0x16306a4u));
    /* 0065ac1b: mov ecx, dword ptr [ecx + 0x63c] */ r_ecx = R32((u32)(r_ecx+0x63cu));
    /* 0065ac21: call 0x675b40 */ r_esp -= 4; W32(r_esp, 0x65ac26u); f_00675b40();
    /* 0065ac26: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065ac27: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0065ac29: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065ac2c: call 0x664730 */ r_esp -= 4; W32(r_esp, 0x65ac31u); f_00664730();
    /* 0065ac31: jmp 0x65acb9 */ goto L_0065acb9;
L_0065ac36:; BB(0x0065ac36);
    /* 0065ac36: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065ac38: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065ac3b: call 0x6651e0 */ r_esp -= 4; W32(r_esp, 0x65ac40u); f_006651e0();
    /* 0065ac40: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065ac41: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065ac44: mov eax, dword ptr [edx + 0x210] */ r_eax = R32((u32)(r_edx+0x210u));
    /* 0065ac4a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065ac4b: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0065ac4d: mov ecx, dword ptr [0x16306a4] */ r_ecx = R32((u32)(0x16306a4u));
    /* 0065ac53: mov ecx, dword ptr [ecx + 0x63c] */ r_ecx = R32((u32)(r_ecx+0x63cu));
    /* 0065ac59: call 0x675b40 */ r_esp -= 4; W32(r_esp, 0x65ac5eu); f_00675b40();
    /* 0065ac5e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065ac5f: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0065ac61: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065ac64: call 0x664730 */ r_esp -= 4; W32(r_esp, 0x65ac69u); f_00664730();
    /* 0065ac69: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065ac6b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065ac6e: call 0x6651e0 */ r_esp -= 4; W32(r_esp, 0x65ac73u); f_006651e0();
    /* 0065ac73: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065ac74: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065ac77: mov eax, dword ptr [edx + 0x210] */ r_eax = R32((u32)(r_edx+0x210u));
    /* 0065ac7d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065ac7e: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0065ac80: mov ecx, dword ptr [0x16306a4] */ r_ecx = R32((u32)(0x16306a4u));
    /* 0065ac86: mov ecx, dword ptr [ecx + 0x63c] */ r_ecx = R32((u32)(r_ecx+0x63cu));
    /* 0065ac8c: call 0x675b40 */ r_esp -= 4; W32(r_esp, 0x65ac91u); f_00675b40();
    /* 0065ac91: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065ac92: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0065ac94: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065ac97: call 0x664730 */ r_esp -= 4; W32(r_esp, 0x65ac9cu); f_00664730();
    /* 0065ac9c: jmp 0x65acb9 */ goto L_0065acb9;
L_0065ac9e:; BB(0x0065ac9e);
    /* 0065ac9e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0065aca0: jne 0x65acb9 */ if (!fZ) goto L_0065acb9;
L_0065aca2:; BB(0x0065aca2);
    /* 0065aca2: push 0x666 */ { u32 v = 0x666u; r_esp -= 4; W32(r_esp, v); }
    /* 0065aca7: push 0x6de4bc */ { u32 v = 0x6de4bcu; r_esp -= 4; W32(r_esp, v); }
    /* 0065acac: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0065acb1: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x65acb6u); f_005e9f20();
    /* 0065acb6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0065acb9:; BB(0x0065acb9);
    /* 0065acb9: jmp 0x65ad34 */ goto L_0065ad34;
L_0065acbb:; BB(0x0065acbb);
    /* 0065acbb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065acbd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065acc0: call 0x6651e0 */ r_esp -= 4; W32(r_esp, 0x65acc5u); f_006651e0();
    /* 0065acc5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065acc6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065acc9: mov edx, dword ptr [ecx + 0x210] */ r_edx = R32((u32)(r_ecx+0x210u));
    /* 0065accf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065acd0: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065acd3: mov ecx, dword ptr [eax + 0x214] */ r_ecx = R32((u32)(r_eax+0x214u));
    /* 0065acd9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065acda: mov edx, dword ptr [0x16306a4] */ r_edx = R32((u32)(0x16306a4u));
    /* 0065ace0: mov ecx, dword ptr [edx + 0x63c] */ r_ecx = R32((u32)(r_edx+0x63cu));
    /* 0065ace6: call 0x675b40 */ r_esp -= 4; W32(r_esp, 0x65acebu); f_00675b40();
    /* 0065aceb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065acec: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065acef: mov ecx, dword ptr [eax + 0x214] */ r_ecx = R32((u32)(r_eax+0x214u));
    /* 0065acf5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065acf6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065acf9: call 0x664730 */ r_esp -= 4; W32(r_esp, 0x65acfeu); f_00664730();
    /* 0065acfe: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065ad01: cmp dword ptr [edx + 0x214], 0 */ {  u32 a = R32((u32)(r_edx+0x214u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065ad08: jne 0x65ad34 */ if (!fZ) goto L_0065ad34;
L_0065ad0a:; BB(0x0065ad0a);
    /* 0065ad0a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065ad0c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065ad0f: call 0x6651e0 */ r_esp -= 4; W32(r_esp, 0x65ad14u); f_006651e0();
    /* 0065ad14: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065ad15: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065ad17: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065ad19: mov eax, dword ptr [0x16306a4] */ r_eax = R32((u32)(0x16306a4u));
    /* 0065ad1e: mov ecx, dword ptr [eax + 0x63c] */ r_ecx = R32((u32)(r_eax+0x63cu));
    /* 0065ad24: call 0x675b40 */ r_esp -= 4; W32(r_esp, 0x65ad29u); f_00675b40();
    /* 0065ad29: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065ad2a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065ad2c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065ad2f: call 0x664730 */ r_esp -= 4; W32(r_esp, 0x65ad34u); f_00664730();
L_0065ad34:; BB(0x0065ad34);
    /* 0065ad34: mov ecx, dword ptr [0x16306a4] */ r_ecx = R32((u32)(0x16306a4u));
    /* 0065ad3a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065ad3d: mov eax, dword ptr [edx + 0x214] */ r_eax = R32((u32)(r_edx+0x214u));
    /* 0065ad43: mov dword ptr [ecx + 0x278], eax */ W32((u32)(r_ecx+0x278u), r_eax);
    /* 0065ad49: mov ecx, dword ptr [0x16306a4] */ r_ecx = R32((u32)(0x16306a4u));
    /* 0065ad4f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065ad52: mov eax, dword ptr [edx + 0x210] */ r_eax = R32((u32)(r_edx+0x210u));
    /* 0065ad58: mov dword ptr [ecx + 0x27c], eax */ W32((u32)(r_ecx+0x27cu), r_eax);
    /* 0065ad5e: mov ecx, dword ptr [0x16306a4] */ r_ecx = R32((u32)(0x16306a4u));
    /* 0065ad64: call 0x657b10 */ r_esp -= 4; W32(r_esp, 0x65ad69u); f_00657b10();
L_0065ad69:; BB(0x0065ad69);
    /* 0065ad69: mov esp, ebp */ r_esp = r_ebp;
    /* 0065ad6b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065ad6c: ret  */ FN_RET(0x0065a9a0); r_esp += 4; return;
}

