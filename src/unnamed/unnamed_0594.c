#include "protos.h"

void f_00594190(void) /* sub_594190 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00594190);
    /* 00594190: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00594191: mov ebp, esp */ r_ebp = r_esp;
    /* 00594193: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00594195: push 0x6a7293 */ { u32 v = 0x6a7293u; r_esp -= 4; W32(r_esp, v); }
    /* 0059419a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005941a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005941a1: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005941a4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005941a9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005941ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005941ac: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005941af: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005941b5: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005941b8: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005941bb: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005941be: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 005941c1: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005941c8: jmp 0x5941d3 */ goto L_005941d3;
L_005941ca:; BB(0x005941ca);
    /* 005941ca: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005941cd: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005941d0: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_005941d3:; BB(0x005941d3);
    /* 005941d3: cmp dword ptr [ebp - 0x10], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005941d7: jge 0x594241 */ if ((fS==fO)) goto L_00594241;
L_005941d9:; BB(0x005941d9);
    /* 005941d9: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 005941de: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5941e3u); f_00686d82();
    /* 005941e3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005941e6: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005941e9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005941f0: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005941f4: je 0x594203 */ if (fZ) goto L_00594203;
L_005941f6:; BB(0x005941f6);
    /* 005941f6: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005941f9: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x5941feu); f_005eaaf0();
    /* 005941fe: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00594201: jmp 0x59420a */ goto L_0059420a;
L_00594203:; BB(0x00594203);
    /* 00594203: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_0059420a:; BB(0x0059420a);
    /* 0059420a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0059420d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00594210: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00594217: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0059421a: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0059421d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00594220: mov dword ptr [edx + ecx*4 + 8], eax */ W32((u32)(r_edx+r_ecx*4+0x8u), r_eax);
    /* 00594224: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00594227: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0059422a: mov eax, dword ptr [edx + ecx*4 + 8] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 0059422e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00594231: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00594234: mov ecx, dword ptr [edx + ecx*4 + 8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 00594238: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0059423a: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0059423d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x59423fu); call_ind(t); }
    /* 0059423f: jmp 0x5941ca */ goto L_005941ca;
L_00594241:; BB(0x00594241);
    /* 00594241: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00594244: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0059424b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059424c: mov esp, ebp */ r_esp = r_ebp;
    /* 0059424e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059424f: ret 4 */ FN_RET(0x00594190); r_esp += 8; return;
}

void f_00594260(void) /* sub_594260 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00594260);
    /* 00594260: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00594261: mov ebp, esp */ r_ebp = r_esp;
    /* 00594263: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00594266: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00594269: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0059426c: cmp dword ptr [eax + 4], 4 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00594270: je 0x5942be */ if (fZ) goto L_005942be;
L_00594272:; BB(0x00594272);
    /* 00594272: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 00594274: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00594277: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0059427a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059427b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00594281: call 0x639110 */ r_esp -= 4; W32(r_esp, 0x594286u); f_00639110();
    /* 00594286: mov ecx, eax */ r_ecx = r_eax;
    /* 00594288: call 0x646380 */ r_esp -= 4; W32(r_esp, 0x59428du); f_00646380();
    /* 0059428d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059428f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00594291: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00594294: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00594297: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00594298: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0059429e: call 0x639110 */ r_esp -= 4; W32(r_esp, 0x5942a3u); f_00639110();
    /* 005942a3: mov ecx, eax */ r_ecx = r_eax;
    /* 005942a5: call 0x6464d0 */ r_esp -= 4; W32(r_esp, 0x5942aau); f_006464d0();
    /* 005942aa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005942ac: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005942af: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005942b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005942b3: mov ecx, dword ptr [0x7935a4] */ r_ecx = R32((u32)(0x7935a4u));
    /* 005942b9: call 0x5d9180 */ r_esp -= 4; W32(r_esp, 0x5942beu); f_005d9180();
L_005942be:; BB(0x005942be);
    /* 005942be: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005942c5: jmp 0x5942d0 */ goto L_005942d0;
L_005942c7:; BB(0x005942c7);
    /* 005942c7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005942ca: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005942cd: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005942d0:; BB(0x005942d0);
    /* 005942d0: cmp dword ptr [ebp - 4], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005942d4: jge 0x5942f5 */ if ((fS==fO)) goto L_005942f5;
L_005942d6:; BB(0x005942d6);
    /* 005942d6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005942d9: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005942dc: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 005942e0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005942e3: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005942e6: mov edx, dword ptr [eax + edx*4 + 8] */ r_edx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 005942ea: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005942ec: mov ecx, edx */ r_ecx = r_edx;
    /* 005942ee: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 005942f1: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5942f3u); call_ind(t); }
    /* 005942f3: jmp 0x5942c7 */ goto L_005942c7;
L_005942f5:; BB(0x005942f5);
    /* 005942f5: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005942f8: cmp dword ptr [eax + 4], 4 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005942fc: je 0x59437b */ if (fZ) goto L_0059437b;
L_005942fe:; BB(0x005942fe);
    /* 005942fe: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00594304: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00594307: cmp dword ptr [edx + 4], 0 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059430b: jne 0x59437b */ if (!fZ) goto L_0059437b;
L_0059430d:; BB(0x0059430d);
    /* 0059430d: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00594310: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00594313: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00594314: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x594319u); f_005dcb00();
    /* 00594319: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059431c: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0059431f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00594322: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x594327u); f_0063aac0();
    /* 00594327: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00594329: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0059432c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0059432e: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00594332: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00594335: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00594338: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059433a: jne 0x594379 */ if (!fZ) goto L_00594379;
L_0059433c:; BB(0x0059433c);
    /* 0059433c: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0059433f: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00594342: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00594343: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x594348u); f_005dcb00();
    /* 00594348: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059434b: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0059434e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00594351: mov dl, byte ptr [ecx + 0x4a1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x4a1u))) & 0xffu);
    /* 00594357: mov byte ptr [ebp - 0x15], dl */ W8((u32)(r_ebp+0xffffffebu), (u8)r_edx);
    /* 0059435a: movzx eax, byte ptr [ebp - 0x15] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffebu));
    /* 0059435e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00594360: jne 0x594379 */ if (!fZ) goto L_00594379;
L_00594362:; BB(0x00594362);
    /* 00594362: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00594365: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00594368: mov eax, dword ptr [0x7935a8] */ r_eax = R32((u32)(0x7935a8u));
    /* 0059436d: movzx ecx, byte ptr [eax + edx + 0x112] */ r_ecx = (u32)R8((u32)(r_eax+r_edx+0x112u));
    /* 00594375: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00594377: je 0x59437b */ if (fZ) goto L_0059437b;
L_00594379:; BB(0x00594379);
    /* 00594379: jmp 0x5943ca */ goto L_005943ca;
L_0059437b:; BB(0x0059437b);
    /* 0059437b: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00594382: jmp 0x59438d */ goto L_0059438d;
L_00594384:; BB(0x00594384);
    /* 00594384: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00594387: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0059438a: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0059438d:; BB(0x0059438d);
    /* 0059438d: cmp dword ptr [ebp - 8], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00594391: jge 0x5943ca */ if ((fS==fO)) goto L_005943ca;
L_00594393:; BB(0x00594393);
    /* 00594393: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00594396: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00594397: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0059439a: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0059439d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059439e: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 005943a4: call 0x598420 */ r_esp -= 4; W32(r_esp, 0x5943a9u); f_00598420();
    /* 005943a9: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 005943ac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005943ae: jne 0x5943b2 */ if (!fZ) goto L_005943b2;
L_005943b0:; BB(0x005943b0);
    /* 005943b0: jmp 0x594384 */ goto L_00594384;
L_005943b2:; BB(0x005943b2);
    /* 005943b2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005943b5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005943b6: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005943b9: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005943bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005943bd: mov ecx, dword ptr [0x79359c] */ r_ecx = R32((u32)(0x79359cu));
    /* 005943c3: call 0x5920e0 */ r_esp -= 4; W32(r_esp, 0x5943c8u); f_005920e0();
    /* 005943c8: jmp 0x594384 */ goto L_00594384;
L_005943ca:; BB(0x005943ca);
    /* 005943ca: mov esp, ebp */ r_esp = r_ebp;
    /* 005943cc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005943cd: ret  */ FN_RET(0x00594260); r_esp += 4; return;
}

void f_00594830(void) /* sub_594830 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00594830);
    /* 00594830: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00594831: mov ebp, esp */ r_ebp = r_esp;
    /* 00594833: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00594835: push 0x6a72bb */ { u32 v = 0x6a72bbu; r_esp -= 4; W32(r_esp, v); }
    /* 0059483a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00594840: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00594841: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00594844: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00594849: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0059484b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059484c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0059484f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00594855: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00594858: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 0059485a: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x59485fu); f_00686d82();
    /* 0059485f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00594862: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00594865: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0059486c: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00594870: je 0x59487f */ if (fZ) goto L_0059487f;
L_00594872:; BB(0x00594872);
    /* 00594872: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00594875: call 0x592c60 */ r_esp -= 4; W32(r_esp, 0x59487au); f_00592c60();
    /* 0059487a: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0059487d: jmp 0x594886 */ goto L_00594886;
L_0059487f:; BB(0x0059487f);
    /* 0059487f: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_00594886:; BB(0x00594886);
    /* 00594886: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00594889: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0059488c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00594893: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00594896: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00594897: mov edx, dword ptr [0x7935a4] */ r_edx = R32((u32)(0x7935a4u));
    /* 0059489d: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 005948a0: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x5948a5u); f_005fc420();
    /* 005948a5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005948a8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005948af: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005948b0: mov esp, ebp */ r_esp = r_ebp;
    /* 005948b2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005948b3: ret  */ FN_RET(0x00594830); r_esp += 4; return;
}

void f_005948c0(void) /* sub_5948C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005948c0);
    /* 005948c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005948c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005948c3: sub esp, 0x138 */ {  u32 a = r_esp; u32 b = 0x138u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005948c9: mov dword ptr [ebp - 0xf4], ecx */ W32((u32)(r_ebp+0xffffff0cu), r_ecx);
    /* 005948cf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005948d1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005948d3: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5948d8u); f_0064c8a0();
    /* 005948d8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005948db: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 005948de: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 005948e1: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 005948e4: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 005948e7: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005948ea: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
    /* 005948ed: mov dword ptr [ebp - 0x48], 0xffffffff */ W32((u32)(r_ebp+0xffffffb8u), 0xffffffffu);
    /* 005948f4: mov dword ptr [ebp - 0x20], 0xffffffff */ W32((u32)(r_ebp+0xffffffe0u), 0xffffffffu);
    /* 005948fb: mov dword ptr [ebp - 0x4c], 0xffffffff */ W32((u32)(r_ebp+0xffffffb4u), 0xffffffffu);
    /* 00594902: fldz  */ FPUSH(0.0);
    /* 00594904: fstp qword ptr [ebp - 0x18] */ W_F64((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 00594907: fld1  */ FPUSH(1.0);
    /* 00594909: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0059490c: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 00594912: call 0x597d30 */ r_esp -= 4; W32(r_esp, 0x594917u); f_00597d30();
    /* 00594917: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0059491a: mov dword ptr [ebp - 0x1c], 0xffffffff */ W32((u32)(r_ebp+0xffffffe4u), 0xffffffffu);
    /* 00594921: mov dword ptr [ebp - 8], 0xffffffff */ W32((u32)(r_ebp+0xfffffff8u), 0xffffffffu);
    /* 00594928: mov dword ptr [ebp - 0x50], 0xffffffff */ W32((u32)(r_ebp+0xffffffb0u), 0xffffffffu);
    /* 0059492f: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 00594936: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 0059493c: call 0x598450 */ r_esp -= 4; W32(r_esp, 0x594941u); f_00598450();
    /* 00594941: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 00594944: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 0059494a: call 0x597fb0 */ r_esp -= 4; W32(r_esp, 0x59494fu); f_00597fb0();
    /* 0059494f: mov dword ptr [ebp - 0xf8], eax */ W32((u32)(r_ebp+0xffffff08u), r_eax);
    /* 00594955: cmp dword ptr [ebp - 0xf8], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffff08u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0059495c: ja 0x595039 */ if ((!fC&&!fZ)) goto L_00595039;
L_00594962:; BB(0x00594962);
    /* 00594962: mov edx, dword ptr [ebp - 0xf8] */ r_edx = R32((u32)(r_ebp+0xffffff08u));
    /* 00594968: jmp dword ptr [edx*4 + 0x5951d8] */ { u32 t = R32((u32)(r_edx*4+0x5951d8u)); switch (t) { case 0x594984u: goto L_00594984; case 0x59496fu: goto L_0059496f; case 0x594999u: goto L_00594999; case 0x594c7fu: goto L_00594c7f; case 0x595029u: goto L_00595029; case 0x595032u: goto L_00595032; default: UNSUP(0x00594968, "jump table entry is not a known target"); } }
L_0059496f:; BB(0x0059496f);
    /* 0059496f: mov dword ptr [ebp - 0x20], 0x803 */ W32((u32)(r_ebp+0xffffffe0u), 0x803u);
    /* 00594976: fld qword ptr [0x6b2c40] */ FPUSH(R_F64((u32)(0x6b2c40u)));
    /* 0059497c: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0059497f: jmp 0x595039 */ goto L_00595039;
L_00594984:; BB(0x00594984);
    /* 00594984: mov dword ptr [ebp - 0x20], 0x82e */ W32((u32)(r_ebp+0xffffffe0u), 0x82eu);
    /* 0059498b: fld qword ptr [0x6b2c40] */ FPUSH(R_F64((u32)(0x6b2c40u)));
    /* 00594991: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 00594994: jmp 0x595039 */ goto L_00595039;
L_00594999:; BB(0x00594999);
    /* 00594999: lea eax, [ebp - 0x58] */ r_eax = (u32)(r_ebp+0xffffffa8u);
    /* 0059499c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059499d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005949a0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005949a1: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5949a6u); f_005dcb00();
    /* 005949a6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005949a9: mov ecx, eax */ r_ecx = r_eax;
    /* 005949ab: call 0x5d6020 */ r_esp -= 4; W32(r_esp, 0x5949b0u); f_005d6020();
    /* 005949b0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005949b3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005949b4: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5949b9u); f_005dcb00();
    /* 005949b9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005949bc: cmp dword ptr [eax + 0x4a8], 3 */ {  u32 a = R32((u32)(r_eax+0x4a8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005949c3: jle 0x594a42 */ if ((fZ||fS!=fO)) goto L_00594a42;
L_005949c5:; BB(0x005949c5);
    /* 005949c5: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005949c7: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5949ccu); f_0062fbf0();
    /* 005949cc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005949cf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005949d1: jne 0x594a42 */ if (!fZ) goto L_00594a42;
L_005949d3:; BB(0x005949d3);
    /* 005949d3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005949d6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005949d7: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5949dcu); f_005dcb00();
    /* 005949dc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005949df: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 005949e2: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 005949e5: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5949eau); f_0063aac0();
    /* 005949ea: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005949ec: mov dword ptr [ebp - 0x64], ecx */ W32((u32)(r_ebp+0xffffff9cu), r_ecx);
    /* 005949ef: cmp dword ptr [ebp - 0x64], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff9cu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005949f3: je 0x594a14 */ if (fZ) goto L_00594a14;
L_005949f5:; BB(0x005949f5);
    /* 005949f5: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 005949f8: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5949fdu); f_0063aac0();
    /* 005949fd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005949ff: mov dword ptr [ebp - 0x68], edx */ W32((u32)(r_ebp+0xffffff98u), r_edx);
    /* 00594a02: cmp dword ptr [ebp - 0x68], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff98u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00594a06: je 0x594a14 */ if (fZ) goto L_00594a14;
L_00594a08:; BB(0x00594a08);
    /* 00594a08: mov dword ptr [ebp - 0xfc], 0 */ W32((u32)(r_ebp+0xffffff04u), 0x0u);
    /* 00594a12: jmp 0x594a1e */ goto L_00594a1e;
L_00594a14:; BB(0x00594a14);
    /* 00594a14: mov dword ptr [ebp - 0xfc], 1 */ W32((u32)(r_ebp+0xffffff04u), 0x1u);
L_00594a1e:; BB(0x00594a1e);
    /* 00594a1e: movzx eax, byte ptr [ebp - 0xfc] */ r_eax = (u32)R8((u32)(r_ebp+0xffffff04u));
    /* 00594a25: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 00594a27: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 00594a29: and eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00594a2c: add eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00594a31: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00594a34: fld qword ptr [0x6b2c40] */ FPUSH(R_F64((u32)(0x6b2c40u)));
    /* 00594a3a: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 00594a3d: jmp 0x595039 */ goto L_00595039;
L_00594a42:; BB(0x00594a42);
    /* 00594a42: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00594a45: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00594a46: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x594a4bu); f_005dcb00();
    /* 00594a4b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00594a4e: cmp dword ptr [eax + 0x4a8], -3 */ {  u32 a = R32((u32)(r_eax+0x4a8u)); u32 b = 0xfffffffdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00594a55: jge 0x594ad5 */ if ((fS==fO)) goto L_00594ad5;
L_00594a57:; BB(0x00594a57);
    /* 00594a57: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00594a59: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x594a5eu); f_0062fbf0();
    /* 00594a5e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00594a61: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00594a63: jne 0x594ad5 */ if (!fZ) goto L_00594ad5;
L_00594a65:; BB(0x00594a65);
    /* 00594a65: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00594a68: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00594a69: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x594a6eu); f_005dcb00();
    /* 00594a6e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00594a71: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 00594a74: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 00594a77: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x594a7cu); f_0063aac0();
    /* 00594a7c: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00594a7e: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 00594a81: cmp dword ptr [ebp - 0x70], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff90u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00594a85: je 0x594aa6 */ if (fZ) goto L_00594aa6;
L_00594a87:; BB(0x00594a87);
    /* 00594a87: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 00594a8a: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x594a8fu); f_0063aac0();
    /* 00594a8f: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00594a91: mov dword ptr [ebp - 0x74], ecx */ W32((u32)(r_ebp+0xffffff8cu), r_ecx);
    /* 00594a94: cmp dword ptr [ebp - 0x74], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff8cu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00594a98: je 0x594aa6 */ if (fZ) goto L_00594aa6;
L_00594a9a:; BB(0x00594a9a);
    /* 00594a9a: mov dword ptr [ebp - 0x100], 0 */ W32((u32)(r_ebp+0xffffff00u), 0x0u);
    /* 00594aa4: jmp 0x594ab0 */ goto L_00594ab0;
L_00594aa6:; BB(0x00594aa6);
    /* 00594aa6: mov dword ptr [ebp - 0x100], 1 */ W32((u32)(r_ebp+0xffffff00u), 0x1u);
L_00594ab0:; BB(0x00594ab0);
    /* 00594ab0: movzx edx, byte ptr [ebp - 0x100] */ r_edx = (u32)R8((u32)(r_ebp+0xffffff00u));
    /* 00594ab7: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); fC = (b != 0); }
    /* 00594ab9: sbb edx, edx */ { u32 c = fC; u32 a = r_edx; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
    /* 00594abb: and edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00594abe: add edx, 0x3ff */ {  u32 a = r_edx; u32 b = 0x3ffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00594ac4: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00594ac7: fld qword ptr [0x6b2c40] */ FPUSH(R_F64((u32)(0x6b2c40u)));
    /* 00594acd: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 00594ad0: jmp 0x595039 */ goto L_00595039;
L_00594ad5:; BB(0x00594ad5);
    /* 00594ad5: mov eax, dword ptr [0x7935a8] */ r_eax = R32((u32)(0x7935a8u));
    /* 00594ada: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00594add: movzx ecx, byte ptr [eax + 0x117] */ r_ecx = (u32)R8((u32)(r_eax+0x117u));
    /* 00594ae4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00594ae6: je 0x594b5d */ if (fZ) goto L_00594b5d;
L_00594ae8:; BB(0x00594ae8);
    /* 00594ae8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00594aeb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00594aec: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x594af1u); f_005dcb00();
    /* 00594af1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00594af4: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 00594afa: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 00594b00: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x594b05u); f_0063aac0();
    /* 00594b05: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00594b07: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 00594b0a: cmp dword ptr [ebp - 0x7c], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff84u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00594b0e: je 0x594b32 */ if (fZ) goto L_00594b32;
L_00594b10:; BB(0x00594b10);
    /* 00594b10: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 00594b16: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x594b1bu); f_0063aac0();
    /* 00594b1b: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00594b1d: mov dword ptr [ebp - 0x80], ecx */ W32((u32)(r_ebp+0xffffff80u), r_ecx);
    /* 00594b20: cmp dword ptr [ebp - 0x80], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff80u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00594b24: je 0x594b32 */ if (fZ) goto L_00594b32;
L_00594b26:; BB(0x00594b26);
    /* 00594b26: mov dword ptr [ebp - 0x104], 0 */ W32((u32)(r_ebp+0xfffffefcu), 0x0u);
    /* 00594b30: jmp 0x594b3c */ goto L_00594b3c;
L_00594b32:; BB(0x00594b32);
    /* 00594b32: mov dword ptr [ebp - 0x104], 1 */ W32((u32)(r_ebp+0xfffffefcu), 0x1u);
L_00594b3c:; BB(0x00594b3c);
    /* 00594b3c: movzx edx, byte ptr [ebp - 0x104] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffefcu));
    /* 00594b43: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); fC = (b != 0); }
    /* 00594b45: sbb edx, edx */ { u32 c = fC; u32 a = r_edx; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
    /* 00594b47: and edx, 0x15 */ {  u32 a = r_edx; u32 b = 0x15u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00594b4a: add edx, 0x3fe */ {  u32 a = r_edx; u32 b = 0x3feu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00594b50: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00594b53: fld1  */ FPUSH(1.0);
    /* 00594b55: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 00594b58: jmp 0x595039 */ goto L_00595039;
L_00594b5d:; BB(0x00594b5d);
    /* 00594b5d: cmp dword ptr [ebp - 0x58], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00594b61: jge 0x594beb */ if ((fS==fO)) goto L_00594beb;
L_00594b67:; BB(0x00594b67);
    /* 00594b67: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00594b6a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00594b6b: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x594b70u); f_005dcb00();
    /* 00594b70: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00594b73: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 00594b79: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 00594b7f: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x594b84u); f_0063aac0();
    /* 00594b84: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00594b86: mov dword ptr [ebp - 0x88], ecx */ W32((u32)(r_ebp+0xffffff78u), r_ecx);
    /* 00594b8c: cmp dword ptr [ebp - 0x88], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff78u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00594b93: je 0x594bbd */ if (fZ) goto L_00594bbd;
L_00594b95:; BB(0x00594b95);
    /* 00594b95: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 00594b9b: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x594ba0u); f_0063aac0();
    /* 00594ba0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00594ba2: mov dword ptr [ebp - 0x8c], edx */ W32((u32)(r_ebp+0xffffff74u), r_edx);
    /* 00594ba8: cmp dword ptr [ebp - 0x8c], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff74u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00594baf: je 0x594bbd */ if (fZ) goto L_00594bbd;
L_00594bb1:; BB(0x00594bb1);
    /* 00594bb1: mov dword ptr [ebp - 0x108], 0 */ W32((u32)(r_ebp+0xfffffef8u), 0x0u);
    /* 00594bbb: jmp 0x594bc7 */ goto L_00594bc7;
L_00594bbd:; BB(0x00594bbd);
    /* 00594bbd: mov dword ptr [ebp - 0x108], 1 */ W32((u32)(r_ebp+0xfffffef8u), 0x1u);
L_00594bc7:; BB(0x00594bc7);
    /* 00594bc7: movzx eax, byte ptr [ebp - 0x108] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffef8u));
    /* 00594bce: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 00594bd0: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 00594bd2: and eax, 0xffffffe6 */ {  u32 a = r_eax; u32 b = 0xffffffe6u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00594bd5: add eax, 0x402 */ {  u32 a = r_eax; u32 b = 0x402u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00594bda: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00594bdd: fld qword ptr [0x6b2c38] */ FPUSH(R_F64((u32)(0x6b2c38u)));
    /* 00594be3: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 00594be6: jmp 0x595039 */ goto L_00595039;
L_00594beb:; BB(0x00594beb);
    /* 00594beb: cmp dword ptr [ebp - 0x58], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00594bef: jle 0x594c7a */ if ((fZ||fS!=fO)) goto L_00594c7a;
L_00594bf5:; BB(0x00594bf5);
    /* 00594bf5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00594bf8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00594bf9: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x594bfeu); f_005dcb00();
    /* 00594bfe: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00594c01: mov dword ptr [ebp - 0x9c], eax */ W32((u32)(r_ebp+0xffffff64u), r_eax);
    /* 00594c07: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00594c0d: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x594c12u); f_0063aac0();
    /* 00594c12: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00594c14: mov dword ptr [ebp - 0x94], edx */ W32((u32)(r_ebp+0xffffff6cu), r_edx);
    /* 00594c1a: cmp dword ptr [ebp - 0x94], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff6cu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00594c21: je 0x594c4b */ if (fZ) goto L_00594c4b;
L_00594c23:; BB(0x00594c23);
    /* 00594c23: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00594c29: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x594c2eu); f_0063aac0();
    /* 00594c2e: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00594c30: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 00594c36: cmp dword ptr [ebp - 0x98], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff68u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00594c3d: je 0x594c4b */ if (fZ) goto L_00594c4b;
L_00594c3f:; BB(0x00594c3f);
    /* 00594c3f: mov dword ptr [ebp - 0x10c], 0 */ W32((u32)(r_ebp+0xfffffef4u), 0x0u);
    /* 00594c49: jmp 0x594c55 */ goto L_00594c55;
L_00594c4b:; BB(0x00594c4b);
    /* 00594c4b: mov dword ptr [ebp - 0x10c], 1 */ W32((u32)(r_ebp+0xfffffef4u), 0x1u);
L_00594c55:; BB(0x00594c55);
    /* 00594c55: movzx ecx, byte ptr [ebp - 0x10c] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffef4u));
    /* 00594c5c: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 00594c5e: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 00594c60: and ecx, 0xffffffec */ {  u32 a = r_ecx; u32 b = 0xffffffecu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00594c63: add ecx, 0x404 */ {  u32 a = r_ecx; u32 b = 0x404u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00594c69: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00594c6c: fld qword ptr [0x6b2c38] */ FPUSH(R_F64((u32)(0x6b2c38u)));
    /* 00594c72: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 00594c75: jmp 0x595039 */ goto L_00595039;
L_00594c7a:; BB(0x00594c7a);
    /* 00594c7a: jmp 0x595039 */ goto L_00595039;
L_00594c7f:; BB(0x00594c7f);
    /* 00594c7f: mov ecx, dword ptr [0x7935a4] */ r_ecx = R32((u32)(0x7935a4u));
    /* 00594c85: call 0x5dac90 */ r_esp -= 4; W32(r_esp, 0x594c8au); f_005dac90();
    /* 00594c8a: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00594c8d: mov ecx, dword ptr [0x7935a4] */ r_ecx = R32((u32)(0x7935a4u));
    /* 00594c93: call 0x5dada0 */ r_esp -= 4; W32(r_esp, 0x594c98u); f_005dada0();
    /* 00594c98: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 00594c9b: mov ecx, dword ptr [0x7935a4] */ r_ecx = R32((u32)(0x7935a4u));
    /* 00594ca1: call 0x5db190 */ r_esp -= 4; W32(r_esp, 0x594ca6u); f_005db190();
    /* 00594ca6: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00594ca9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00594cab: je 0x594dc4 */ if (fZ) goto L_00594dc4;
L_00594cb1:; BB(0x00594cb1);
    /* 00594cb1: cmp dword ptr [ebp - 8], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00594cb5: je 0x594dc4 */ if (fZ) goto L_00594dc4;
L_00594cbb:; BB(0x00594cbb);
    /* 00594cbb: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00594cbe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00594cbf: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x594cc4u); f_005dcb00();
    /* 00594cc4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00594cc7: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 00594ccd: mov ecx, dword ptr [ebp - 0xa8] */ r_ecx = R32((u32)(r_ebp+0xffffff58u));
    /* 00594cd3: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x594cd8u); f_0063aac0();
    /* 00594cd8: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00594cda: mov dword ptr [ebp - 0xa0], ecx */ W32((u32)(r_ebp+0xffffff60u), r_ecx);
    /* 00594ce0: cmp dword ptr [ebp - 0xa0], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff60u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00594ce7: je 0x594d11 */ if (fZ) goto L_00594d11;
L_00594ce9:; BB(0x00594ce9);
    /* 00594ce9: mov ecx, dword ptr [ebp - 0xa8] */ r_ecx = R32((u32)(r_ebp+0xffffff58u));
    /* 00594cef: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x594cf4u); f_0063aac0();
    /* 00594cf4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00594cf6: mov dword ptr [ebp - 0xa4], edx */ W32((u32)(r_ebp+0xffffff5cu), r_edx);
    /* 00594cfc: cmp dword ptr [ebp - 0xa4], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff5cu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00594d03: je 0x594d11 */ if (fZ) goto L_00594d11;
L_00594d05:; BB(0x00594d05);
    /* 00594d05: mov dword ptr [ebp - 0x110], 0 */ W32((u32)(r_ebp+0xfffffef0u), 0x0u);
    /* 00594d0f: jmp 0x594d1b */ goto L_00594d1b;
L_00594d11:; BB(0x00594d11);
    /* 00594d11: mov dword ptr [ebp - 0x110], 1 */ W32((u32)(r_ebp+0xfffffef0u), 0x1u);
L_00594d1b:; BB(0x00594d1b);
    /* 00594d1b: movzx eax, byte ptr [ebp - 0x110] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffef0u));
    /* 00594d22: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00594d24: je 0x594d32 */ if (fZ) goto L_00594d32;
L_00594d26:; BB(0x00594d26);
    /* 00594d26: mov dword ptr [ebp - 0x114], 0xffffffff */ W32((u32)(r_ebp+0xfffffeecu), 0xffffffffu);
    /* 00594d30: jmp 0x594d3b */ goto L_00594d3b;
L_00594d32:; BB(0x00594d32);
    /* 00594d32: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00594d35: mov dword ptr [ebp - 0x114], ecx */ W32((u32)(r_ebp+0xfffffeecu), r_ecx);
L_00594d3b:; BB(0x00594d3b);
    /* 00594d3b: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 00594d41: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 00594d44: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00594d47: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00594d48: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x594d4du); f_005dcb00();
    /* 00594d4d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00594d50: mov dword ptr [ebp - 0xb4], eax */ W32((u32)(r_ebp+0xffffff4cu), r_eax);
    /* 00594d56: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00594d5c: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x594d61u); f_0063aac0();
    /* 00594d61: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00594d63: mov dword ptr [ebp - 0xac], ecx */ W32((u32)(r_ebp+0xffffff54u), r_ecx);
    /* 00594d69: cmp dword ptr [ebp - 0xac], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff54u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00594d70: je 0x594d9a */ if (fZ) goto L_00594d9a;
L_00594d72:; BB(0x00594d72);
    /* 00594d72: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00594d78: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x594d7du); f_0063aac0();
    /* 00594d7d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00594d7f: mov dword ptr [ebp - 0xb0], edx */ W32((u32)(r_ebp+0xffffff50u), r_edx);
    /* 00594d85: cmp dword ptr [ebp - 0xb0], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff50u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00594d8c: je 0x594d9a */ if (fZ) goto L_00594d9a;
L_00594d8e:; BB(0x00594d8e);
    /* 00594d8e: mov dword ptr [ebp - 0x118], 0 */ W32((u32)(r_ebp+0xfffffee8u), 0x0u);
    /* 00594d98: jmp 0x594da4 */ goto L_00594da4;
L_00594d9a:; BB(0x00594d9a);
    /* 00594d9a: mov dword ptr [ebp - 0x118], 1 */ W32((u32)(r_ebp+0xfffffee8u), 0x1u);
L_00594da4:; BB(0x00594da4);
    /* 00594da4: movzx eax, byte ptr [ebp - 0x118] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffee8u));
    /* 00594dab: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 00594dad: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 00594daf: and eax, 0x15 */ {  u32 a = r_eax; u32 b = 0x15u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00594db2: add eax, 0x3fd */ {  u32 a = r_eax; u32 b = 0x3fdu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00594db7: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00594dba: fld1  */ FPUSH(1.0);
    /* 00594dbc: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 00594dbf: jmp 0x595027 */ goto L_00595027;
L_00594dc4:; BB(0x00594dc4);
    /* 00594dc4: cmp dword ptr [ebp - 8], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00594dc8: je 0x594de1 */ if (fZ) goto L_00594de1;
L_00594dca:; BB(0x00594dca);
    /* 00594dca: lea ecx, [ebp - 0x58] */ r_ecx = (u32)(r_ebp+0xffffffa8u);
    /* 00594dcd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00594dce: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00594dd1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00594dd2: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x594dd7u); f_005dcb00();
    /* 00594dd7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00594dda: mov ecx, eax */ r_ecx = r_eax;
    /* 00594ddc: call 0x5d6020 */ r_esp -= 4; W32(r_esp, 0x594de1u); f_005d6020();
L_00594de1:; BB(0x00594de1);
    /* 00594de1: cmp dword ptr [ebp - 8], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00594de5: je 0x594f14 */ if (fZ) goto L_00594f14;
L_00594deb:; BB(0x00594deb);
    /* 00594deb: cmp dword ptr [ebp - 0x58], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00594def: jle 0x594f14 */ if ((fZ||fS!=fO)) goto L_00594f14;
L_00594df5:; BB(0x00594df5);
    /* 00594df5: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00594df7: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x594dfcu); f_0062fbf0();
    /* 00594dfc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00594dff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00594e01: jne 0x594f14 */ if (!fZ) goto L_00594f14;
L_00594e07:; BB(0x00594e07);
    /* 00594e07: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00594e0a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00594e0b: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x594e10u); f_005dcb00();
    /* 00594e10: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00594e13: mov dword ptr [ebp - 0xc0], eax */ W32((u32)(r_ebp+0xffffff40u), r_eax);
    /* 00594e19: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 00594e1f: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x594e24u); f_0063aac0();
    /* 00594e24: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00594e26: mov dword ptr [ebp - 0xb8], ecx */ W32((u32)(r_ebp+0xffffff48u), r_ecx);
    /* 00594e2c: cmp dword ptr [ebp - 0xb8], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff48u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00594e33: je 0x594e5d */ if (fZ) goto L_00594e5d;
L_00594e35:; BB(0x00594e35);
    /* 00594e35: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 00594e3b: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x594e40u); f_0063aac0();
    /* 00594e40: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00594e42: mov dword ptr [ebp - 0xbc], edx */ W32((u32)(r_ebp+0xffffff44u), r_edx);
    /* 00594e48: cmp dword ptr [ebp - 0xbc], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff44u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00594e4f: je 0x594e5d */ if (fZ) goto L_00594e5d;
L_00594e51:; BB(0x00594e51);
    /* 00594e51: mov dword ptr [ebp - 0x11c], 0 */ W32((u32)(r_ebp+0xfffffee4u), 0x0u);
    /* 00594e5b: jmp 0x594e67 */ goto L_00594e67;
L_00594e5d:; BB(0x00594e5d);
    /* 00594e5d: mov dword ptr [ebp - 0x11c], 1 */ W32((u32)(r_ebp+0xfffffee4u), 0x1u);
L_00594e67:; BB(0x00594e67);
    /* 00594e67: movzx eax, byte ptr [ebp - 0x11c] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffee4u));
    /* 00594e6e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00594e70: je 0x594e7e */ if (fZ) goto L_00594e7e;
L_00594e72:; BB(0x00594e72);
    /* 00594e72: mov dword ptr [ebp - 0x120], 0xffffffff */ W32((u32)(r_ebp+0xfffffee0u), 0xffffffffu);
    /* 00594e7c: jmp 0x594e87 */ goto L_00594e87;
L_00594e7e:; BB(0x00594e7e);
    /* 00594e7e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00594e81: mov dword ptr [ebp - 0x120], ecx */ W32((u32)(r_ebp+0xfffffee0u), r_ecx);
L_00594e87:; BB(0x00594e87);
    /* 00594e87: mov edx, dword ptr [ebp - 0x120] */ r_edx = R32((u32)(r_ebp+0xfffffee0u));
    /* 00594e8d: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 00594e90: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00594e93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00594e94: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x594e99u); f_005dcb00();
    /* 00594e99: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00594e9c: mov dword ptr [ebp - 0xcc], eax */ W32((u32)(r_ebp+0xffffff34u), r_eax);
    /* 00594ea2: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 00594ea8: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x594eadu); f_0063aac0();
    /* 00594ead: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00594eaf: mov dword ptr [ebp - 0xc4], ecx */ W32((u32)(r_ebp+0xffffff3cu), r_ecx);
    /* 00594eb5: cmp dword ptr [ebp - 0xc4], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff3cu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00594ebc: je 0x594ee6 */ if (fZ) goto L_00594ee6;
L_00594ebe:; BB(0x00594ebe);
    /* 00594ebe: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 00594ec4: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x594ec9u); f_0063aac0();
    /* 00594ec9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00594ecb: mov dword ptr [ebp - 0xc8], edx */ W32((u32)(r_ebp+0xffffff38u), r_edx);
    /* 00594ed1: cmp dword ptr [ebp - 0xc8], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff38u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00594ed8: je 0x594ee6 */ if (fZ) goto L_00594ee6;
L_00594eda:; BB(0x00594eda);
    /* 00594eda: mov dword ptr [ebp - 0x124], 0 */ W32((u32)(r_ebp+0xfffffedcu), 0x0u);
    /* 00594ee4: jmp 0x594ef0 */ goto L_00594ef0;
L_00594ee6:; BB(0x00594ee6);
    /* 00594ee6: mov dword ptr [ebp - 0x124], 1 */ W32((u32)(r_ebp+0xfffffedcu), 0x1u);
L_00594ef0:; BB(0x00594ef0);
    /* 00594ef0: movzx eax, byte ptr [ebp - 0x124] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffedcu));
    /* 00594ef7: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 00594ef9: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 00594efb: and eax, 0x19 */ {  u32 a = r_eax; u32 b = 0x19u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00594efe: add eax, 0x3f2 */ {  u32 a = r_eax; u32 b = 0x3f2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00594f03: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00594f06: fld qword ptr [0x6b2c38] */ FPUSH(R_F64((u32)(0x6b2c38u)));
    /* 00594f0c: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 00594f0f: jmp 0x595027 */ goto L_00595027;
L_00594f14:; BB(0x00594f14);
    /* 00594f14: cmp dword ptr [ebp - 0x50], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffb0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00594f18: je 0x595027 */ if (fZ) goto L_00595027;
L_00594f1e:; BB(0x00594f1e);
    /* 00594f1e: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00594f21: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00594f22: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x594f27u); f_005dcb00();
    /* 00594f27: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00594f2a: mov dword ptr [ebp - 0xd8], eax */ W32((u32)(r_ebp+0xffffff28u), r_eax);
    /* 00594f30: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 00594f36: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x594f3bu); f_0063aac0();
    /* 00594f3b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00594f3d: mov dword ptr [ebp - 0xd0], edx */ W32((u32)(r_ebp+0xffffff30u), r_edx);
    /* 00594f43: cmp dword ptr [ebp - 0xd0], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff30u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00594f4a: je 0x594f74 */ if (fZ) goto L_00594f74;
L_00594f4c:; BB(0x00594f4c);
    /* 00594f4c: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 00594f52: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x594f57u); f_0063aac0();
    /* 00594f57: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00594f59: mov dword ptr [ebp - 0xd4], eax */ W32((u32)(r_ebp+0xffffff2cu), r_eax);
    /* 00594f5f: cmp dword ptr [ebp - 0xd4], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff2cu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00594f66: je 0x594f74 */ if (fZ) goto L_00594f74;
L_00594f68:; BB(0x00594f68);
    /* 00594f68: mov dword ptr [ebp - 0x128], 0 */ W32((u32)(r_ebp+0xfffffed8u), 0x0u);
    /* 00594f72: jmp 0x594f7e */ goto L_00594f7e;
L_00594f74:; BB(0x00594f74);
    /* 00594f74: mov dword ptr [ebp - 0x128], 1 */ W32((u32)(r_ebp+0xfffffed8u), 0x1u);
L_00594f7e:; BB(0x00594f7e);
    /* 00594f7e: movzx ecx, byte ptr [ebp - 0x128] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffed8u));
    /* 00594f85: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00594f87: je 0x594f95 */ if (fZ) goto L_00594f95;
L_00594f89:; BB(0x00594f89);
    /* 00594f89: mov dword ptr [ebp - 0x12c], 0xffffffff */ W32((u32)(r_ebp+0xfffffed4u), 0xffffffffu);
    /* 00594f93: jmp 0x594f9e */ goto L_00594f9e;
L_00594f95:; BB(0x00594f95);
    /* 00594f95: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00594f98: mov dword ptr [ebp - 0x12c], edx */ W32((u32)(r_ebp+0xfffffed4u), r_edx);
L_00594f9e:; BB(0x00594f9e);
    /* 00594f9e: mov eax, dword ptr [ebp - 0x12c] */ r_eax = R32((u32)(r_ebp+0xfffffed4u));
    /* 00594fa4: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 00594fa7: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00594faa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00594fab: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x594fb0u); f_005dcb00();
    /* 00594fb0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00594fb3: mov dword ptr [ebp - 0xe4], eax */ W32((u32)(r_ebp+0xffffff1cu), r_eax);
    /* 00594fb9: mov ecx, dword ptr [ebp - 0xe4] */ r_ecx = R32((u32)(r_ebp+0xffffff1cu));
    /* 00594fbf: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x594fc4u); f_0063aac0();
    /* 00594fc4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00594fc6: mov dword ptr [ebp - 0xdc], edx */ W32((u32)(r_ebp+0xffffff24u), r_edx);
    /* 00594fcc: cmp dword ptr [ebp - 0xdc], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff24u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00594fd3: je 0x594ffd */ if (fZ) goto L_00594ffd;
L_00594fd5:; BB(0x00594fd5);
    /* 00594fd5: mov ecx, dword ptr [ebp - 0xe4] */ r_ecx = R32((u32)(r_ebp+0xffffff1cu));
    /* 00594fdb: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x594fe0u); f_0063aac0();
    /* 00594fe0: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00594fe2: mov dword ptr [ebp - 0xe0], eax */ W32((u32)(r_ebp+0xffffff20u), r_eax);
    /* 00594fe8: cmp dword ptr [ebp - 0xe0], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff20u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00594fef: je 0x594ffd */ if (fZ) goto L_00594ffd;
L_00594ff1:; BB(0x00594ff1);
    /* 00594ff1: mov dword ptr [ebp - 0x130], 0 */ W32((u32)(r_ebp+0xfffffed0u), 0x0u);
    /* 00594ffb: jmp 0x595007 */ goto L_00595007;
L_00594ffd:; BB(0x00594ffd);
    /* 00594ffd: mov dword ptr [ebp - 0x130], 1 */ W32((u32)(r_ebp+0xfffffed0u), 0x1u);
L_00595007:; BB(0x00595007);
    /* 00595007: movzx ecx, byte ptr [ebp - 0x130] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffed0u));
    /* 0059500e: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 00595010: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 00595012: and ecx, 0x19 */ {  u32 a = r_ecx; u32 b = 0x19u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00595015: add ecx, 0x3f3 */ {  u32 a = r_ecx; u32 b = 0x3f3u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0059501b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0059501e: fld qword ptr [0x6b2c38] */ FPUSH(R_F64((u32)(0x6b2c38u)));
    /* 00595024: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
L_00595027:; BB(0x00595027);
    /* 00595027: jmp 0x595039 */ goto L_00595039;
L_00595029:; BB(0x00595029);
    /* 00595029: mov dword ptr [ebp - 0x1c], 0x29810 */ W32((u32)(r_ebp+0xffffffe4u), 0x29810u);
    /* 00595030: jmp 0x595039 */ goto L_00595039;
L_00595032:; BB(0x00595032);
    /* 00595032: mov dword ptr [ebp - 0x1c], 0x29816 */ W32((u32)(r_ebp+0xffffffe4u), 0x29816u);
L_00595039:; BB(0x00595039);
    /* 00595039: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0059503b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0059503d: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 00595043: call 0x5994c0 */ r_esp -= 4; W32(r_esp, 0x595048u); f_005994c0();
    /* 00595048: cmp dword ptr [ebp - 0x48], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059504c: jne 0x595099 */ if (!fZ) goto L_00595099;
L_0059504e:; BB(0x0059504e);
    /* 0059504e: cmp dword ptr [ebp - 0x1c], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00595052: jne 0x595076 */ if (!fZ) goto L_00595076;
L_00595054:; BB(0x00595054);
    /* 00595054: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00595056: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00595058: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 0059505e: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00595061: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00595067: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0059506a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0059506c: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0059506f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x595071u); call_ind(t); }
    /* 00595071: jmp 0x5951d1 */ goto L_005951d1;
L_00595076:; BB(0x00595076);
    /* 00595076: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00595078: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0059507e: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00595081: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00595082: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00595085: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00595086: mov ecx, dword ptr [0x79359c] */ r_ecx = R32((u32)(0x79359cu));
    /* 0059508c: mov ecx, dword ptr [ecx + 0x48] */ r_ecx = R32((u32)(r_ecx+0x48u));
    /* 0059508f: call 0x5cd7c0 */ r_esp -= 4; W32(r_esp, 0x595094u); f_005cd7c0();
    /* 00595094: jmp 0x5951d1 */ goto L_005951d1;
L_00595099:; BB(0x00595099);
    /* 00595099: cmp dword ptr [ebp - 0x20], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059509d: je 0x595127 */ if (fZ) goto L_00595127;
L_005950a3:; BB(0x005950a3);
    /* 005950a3: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005950a9: call 0x636730 */ r_esp -= 4; W32(r_esp, 0x5950aeu); f_00636730();
    /* 005950ae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005950b0: je 0x595127 */ if (fZ) goto L_00595127;
L_005950b2:; BB(0x005950b2);
    /* 005950b2: cmp dword ptr [ebp - 0x48], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005950b6: jle 0x59514a */ if ((fZ||fS!=fO)) goto L_0059514a;
L_005950bc:; BB(0x005950bc);
    /* 005950bc: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005950bf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005950c0: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5950c5u); f_005dcb00();
    /* 005950c5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005950c8: mov dword ptr [ebp - 0xf0], eax */ W32((u32)(r_ebp+0xffffff10u), r_eax);
    /* 005950ce: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 005950d4: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5950d9u); f_0063aac0();
    /* 005950d9: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005950db: mov dword ptr [ebp - 0xe8], eax */ W32((u32)(r_ebp+0xffffff18u), r_eax);
    /* 005950e1: cmp dword ptr [ebp - 0xe8], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff18u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005950e8: je 0x595112 */ if (fZ) goto L_00595112;
L_005950ea:; BB(0x005950ea);
    /* 005950ea: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 005950f0: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5950f5u); f_0063aac0();
    /* 005950f5: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005950f7: mov dword ptr [ebp - 0xec], ecx */ W32((u32)(r_ebp+0xffffff14u), r_ecx);
    /* 005950fd: cmp dword ptr [ebp - 0xec], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff14u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00595104: je 0x595112 */ if (fZ) goto L_00595112;
L_00595106:; BB(0x00595106);
    /* 00595106: mov dword ptr [ebp - 0x134], 0 */ W32((u32)(r_ebp+0xfffffeccu), 0x0u);
    /* 00595110: jmp 0x59511c */ goto L_0059511c;
L_00595112:; BB(0x00595112);
    /* 00595112: mov dword ptr [ebp - 0x134], 1 */ W32((u32)(r_ebp+0xfffffeccu), 0x1u);
L_0059511c:; BB(0x0059511c);
    /* 0059511c: movzx edx, byte ptr [ebp - 0x134] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffeccu));
    /* 00595123: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00595125: je 0x59514a */ if (fZ) goto L_0059514a;
L_00595127:; BB(0x00595127);
    /* 00595127: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00595129: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0059512b: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 00595130: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00595133: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 00595139: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0059513c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0059513e: mov ecx, eax */ r_ecx = r_eax;
    /* 00595140: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00595143: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x595145u); call_ind(t); }
    /* 00595145: jmp 0x5951d1 */ goto L_005951d1;
L_0059514a:; BB(0x0059514a);
    /* 0059514a: cmp dword ptr [ebp - 0x48], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059514e: je 0x59515b */ if (fZ) goto L_0059515b;
L_00595150:; BB(0x00595150);
    /* 00595150: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00595153: mov dword ptr [ebp - 0x138], ecx */ W32((u32)(r_ebp+0xfffffec8u), r_ecx);
    /* 00595159: jmp 0x59516c */ goto L_0059516c;
L_0059515b:; BB(0x0059515b);
    /* 0059515b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00595161: call 0x636c50 */ r_esp -= 4; W32(r_esp, 0x595166u); f_00636c50();
    /* 00595166: mov dword ptr [ebp - 0x138], eax */ W32((u32)(r_ebp+0xfffffec8u), r_eax);
L_0059516c:; BB(0x0059516c);
    /* 0059516c: mov edx, dword ptr [ebp - 0x138] */ r_edx = R32((u32)(r_ebp+0xfffffec8u));
    /* 00595172: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 00595175: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00595178: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0059517b: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0059517e: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 00595181: fld qword ptr [ebp - 0x18] */ FPUSH(R_F64((u32)(r_ebp+0xffffffe8u)));
    /* 00595184: fstp qword ptr [ebp - 0x30] */ W_F64((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 00595187: fld qword ptr [ebp - 0x10] */ FPUSH(R_F64((u32)(r_ebp+0xfffffff0u)));
    /* 0059518a: fstp qword ptr [ebp - 0x28] */ W_F64((u32)(r_ebp+0xffffffd8u), ST(0)); FPOP();
    /* 0059518d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0059518f: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 00595195: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00595198: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0059519e: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 005951a1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005951a3: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005951a6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5951a8u); call_ind(t); }
    /* 005951a8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005951aa: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005951ac: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005951b2: call 0x637810 */ r_esp -= 4; W32(r_esp, 0x5951b7u); f_00637810();
    /* 005951b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005951b8: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 005951be: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005951c1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005951c2: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 005951c5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005951c6: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005951cc: call 0x639390 */ r_esp -= 4; W32(r_esp, 0x5951d1u); f_00639390();
L_005951d1:; BB(0x005951d1);
    /* 005951d1: mov esp, ebp */ r_esp = r_ebp;
    /* 005951d3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005951d4: ret  */ FN_RET(0x005948c0); r_esp += 4; return;
}

