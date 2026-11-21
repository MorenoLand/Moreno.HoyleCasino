#include "protos.h"

void f_0059e370(void) /* sub_59E370 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0059e370);
    /* 0059e370: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059e371: mov ebp, esp */ r_ebp = r_esp;
    /* 0059e373: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0059e375: push 0x6a76cd */ { u32 v = 0x6a76cdu; r_esp -= 4; W32(r_esp, v); }
    /* 0059e37a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0059e380: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059e381: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0059e384: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0059e389: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0059e38b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059e38c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0059e38f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0059e395: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0059e398: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0059e39b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0059e39e: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 0059e3a1: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0059e3a8: jmp 0x59e3b3 */ goto L_0059e3b3;
L_0059e3aa:; BB(0x0059e3aa);
    /* 0059e3aa: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0059e3ad: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0059e3b0: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_0059e3b3:; BB(0x0059e3b3);
    /* 0059e3b3: cmp dword ptr [ebp - 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059e3b7: jge 0x59e421 */ if ((fS==fO)) goto L_0059e421;
L_0059e3b9:; BB(0x0059e3b9);
    /* 0059e3b9: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 0059e3be: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x59e3c3u); f_00686d82();
    /* 0059e3c3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059e3c6: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0059e3c9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0059e3d0: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059e3d4: je 0x59e3e3 */ if (fZ) goto L_0059e3e3;
L_0059e3d6:; BB(0x0059e3d6);
    /* 0059e3d6: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0059e3d9: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x59e3deu); f_005eaaf0();
    /* 0059e3de: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0059e3e1: jmp 0x59e3ea */ goto L_0059e3ea;
L_0059e3e3:; BB(0x0059e3e3);
    /* 0059e3e3: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_0059e3ea:; BB(0x0059e3ea);
    /* 0059e3ea: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0059e3ed: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0059e3f0: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0059e3f7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0059e3fa: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0059e3fd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0059e400: mov dword ptr [edx + ecx*4 + 8], eax */ W32((u32)(r_edx+r_ecx*4+0x8u), r_eax);
    /* 0059e404: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0059e407: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0059e40a: mov eax, dword ptr [edx + ecx*4 + 8] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 0059e40e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0059e411: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0059e414: mov ecx, dword ptr [edx + ecx*4 + 8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 0059e418: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0059e41a: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0059e41d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x59e41fu); call_ind(t); }
    /* 0059e41f: jmp 0x59e3aa */ goto L_0059e3aa;
L_0059e421:; BB(0x0059e421);
    /* 0059e421: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059e424: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0059e42b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059e42c: mov esp, ebp */ r_esp = r_ebp;
    /* 0059e42e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059e42f: ret 4 */ FN_RET(0x0059e370); r_esp += 8; return;
}

void f_0059e440(void) /* sub_59E440 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0059e440);
    /* 0059e440: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059e441: mov ebp, esp */ r_ebp = r_esp;
    /* 0059e443: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0059e446: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0059e449: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0059e44c: cmp dword ptr [eax + 4], 4 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059e450: je 0x59e4a7 */ if (fZ) goto L_0059e4a7;
L_0059e452:; BB(0x0059e452);
    /* 0059e452: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0059e455: cmp dword ptr [ecx + 4], 5 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059e459: je 0x59e4a7 */ if (fZ) goto L_0059e4a7;
L_0059e45b:; BB(0x0059e45b);
    /* 0059e45b: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0059e45d: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0059e460: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0059e463: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059e464: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0059e46a: call 0x639110 */ r_esp -= 4; W32(r_esp, 0x59e46fu); f_00639110();
    /* 0059e46f: mov ecx, eax */ r_ecx = r_eax;
    /* 0059e471: call 0x646380 */ r_esp -= 4; W32(r_esp, 0x59e476u); f_00646380();
    /* 0059e476: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059e478: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059e47a: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0059e47d: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0059e480: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059e481: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0059e487: call 0x639110 */ r_esp -= 4; W32(r_esp, 0x59e48cu); f_00639110();
    /* 0059e48c: mov ecx, eax */ r_ecx = r_eax;
    /* 0059e48e: call 0x6464d0 */ r_esp -= 4; W32(r_esp, 0x59e493u); f_006464d0();
    /* 0059e493: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059e495: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0059e498: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0059e49b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059e49c: mov ecx, dword ptr [0x7935cc] */ r_ecx = R32((u32)(0x7935ccu));
    /* 0059e4a2: call 0x5d9180 */ r_esp -= 4; W32(r_esp, 0x59e4a7u); f_005d9180();
L_0059e4a7:; BB(0x0059e4a7);
    /* 0059e4a7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0059e4ae: jmp 0x59e4b9 */ goto L_0059e4b9;
L_0059e4b0:; BB(0x0059e4b0);
    /* 0059e4b0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059e4b3: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0059e4b6: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0059e4b9:; BB(0x0059e4b9);
    /* 0059e4b9: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059e4bd: jge 0x59e4dc */ if ((fS==fO)) goto L_0059e4dc;
L_0059e4bf:; BB(0x0059e4bf);
    /* 0059e4bf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059e4c2: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0059e4c5: mov edx, dword ptr [ecx + eax*4 + 8] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 0059e4c9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059e4cc: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0059e4cf: mov ecx, dword ptr [ecx + eax*4 + 8] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 0059e4d3: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0059e4d5: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0059e4d8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59e4dau); call_ind(t); }
    /* 0059e4da: jmp 0x59e4b0 */ goto L_0059e4b0;
L_0059e4dc:; BB(0x0059e4dc);
    /* 0059e4dc: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0059e4df: cmp dword ptr [ecx + 4], 4 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059e4e3: je 0x59e553 */ if (fZ) goto L_0059e553;
L_0059e4e5:; BB(0x0059e4e5);
    /* 0059e4e5: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0059e4e8: cmp dword ptr [edx + 4], 5 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059e4ec: je 0x59e553 */ if (fZ) goto L_0059e553;
L_0059e4ee:; BB(0x0059e4ee);
    /* 0059e4ee: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 0059e4f3: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0059e4f6: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059e4fa: jne 0x59e553 */ if (!fZ) goto L_0059e553;
L_0059e4fc:; BB(0x0059e4fc);
    /* 0059e4fc: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0059e4ff: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0059e502: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059e503: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x59e508u); f_005dcb00();
    /* 0059e508: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059e50b: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0059e50e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0059e511: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x59e516u); f_0063aac0();
    /* 0059e516: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0059e518: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0059e51b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0059e51d: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059e521: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0059e524: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 0059e527: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059e529: jne 0x59e551 */ if (!fZ) goto L_0059e551;
L_0059e52b:; BB(0x0059e52b);
    /* 0059e52b: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0059e52e: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0059e531: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059e532: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x59e537u); f_005dcb00();
    /* 0059e537: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059e53a: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0059e53d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0059e540: mov cl, byte ptr [eax + 0x4a1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x4a1u))) & 0xffu);
    /* 0059e546: mov byte ptr [ebp - 0x15], cl */ W8((u32)(r_ebp+0xffffffebu), (u8)r_ecx);
    /* 0059e549: movzx edx, byte ptr [ebp - 0x15] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffebu));
    /* 0059e54d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059e54f: je 0x59e553 */ if (fZ) goto L_0059e553;
L_0059e551:; BB(0x0059e551);
    /* 0059e551: jmp 0x59e5a2 */ goto L_0059e5a2;
L_0059e553:; BB(0x0059e553);
    /* 0059e553: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0059e55a: jmp 0x59e565 */ goto L_0059e565;
L_0059e55c:; BB(0x0059e55c);
    /* 0059e55c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0059e55f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0059e562: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0059e565:; BB(0x0059e565);
    /* 0059e565: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059e569: jge 0x59e5a2 */ if ((fS==fO)) goto L_0059e5a2;
L_0059e56b:; BB(0x0059e56b);
    /* 0059e56b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0059e56e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059e56f: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0059e572: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0059e575: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059e576: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 0059e57c: call 0x5a26f0 */ r_esp -= 4; W32(r_esp, 0x59e581u); f_005a26f0();
    /* 0059e581: movzx ecx, ax */ r_ecx = (u32)(u16)r_eax;
    /* 0059e584: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059e586: jne 0x59e58a */ if (!fZ) goto L_0059e58a;
L_0059e588:; BB(0x0059e588);
    /* 0059e588: jmp 0x59e55c */ goto L_0059e55c;
L_0059e58a:; BB(0x0059e58a);
    /* 0059e58a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0059e58d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059e58e: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0059e591: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0059e594: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059e595: mov ecx, dword ptr [0x7935c4] */ r_ecx = R32((u32)(0x7935c4u));
    /* 0059e59b: call 0x59c930 */ r_esp -= 4; W32(r_esp, 0x59e5a0u); f_0059c930();
    /* 0059e5a0: jmp 0x59e55c */ goto L_0059e55c;
L_0059e5a2:; BB(0x0059e5a2);
    /* 0059e5a2: mov esp, ebp */ r_esp = r_ebp;
    /* 0059e5a4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059e5a5: ret  */ FN_RET(0x0059e440); r_esp += 4; return;
}

void f_0059e920(void) /* sub_59E920 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0059e920);
    /* 0059e920: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059e921: mov ebp, esp */ r_ebp = r_esp;
    /* 0059e923: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0059e925: push 0x6a76fb */ { u32 v = 0x6a76fbu; r_esp -= 4; W32(r_esp, v); }
    /* 0059e92a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0059e930: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059e931: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0059e934: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0059e939: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0059e93b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059e93c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0059e93f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0059e945: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0059e948: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 0059e94a: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x59e94fu); f_00686d82();
    /* 0059e94f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059e952: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0059e955: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0059e95c: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059e960: je 0x59e96f */ if (fZ) goto L_0059e96f;
L_0059e962:; BB(0x0059e962);
    /* 0059e962: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0059e965: call 0x59d8d0 */ r_esp -= 4; W32(r_esp, 0x59e96au); f_0059d8d0();
    /* 0059e96a: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0059e96d: jmp 0x59e976 */ goto L_0059e976;
L_0059e96f:; BB(0x0059e96f);
    /* 0059e96f: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_0059e976:; BB(0x0059e976);
    /* 0059e976: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0059e979: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0059e97c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0059e983: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0059e986: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059e987: mov edx, dword ptr [0x7935cc] */ r_edx = R32((u32)(0x7935ccu));
    /* 0059e98d: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 0059e990: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x59e995u); f_005fc420();
    /* 0059e995: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059e998: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0059e99f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059e9a0: mov esp, ebp */ r_esp = r_ebp;
    /* 0059e9a2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059e9a3: ret  */ FN_RET(0x0059e920); r_esp += 4; return;
}

void f_0059e9b0(void) /* sub_59E9B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0059e9b0);
    /* 0059e9b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059e9b1: mov ebp, esp */ r_ebp = r_esp;
    /* 0059e9b3: sub esp, 0x138 */ {  u32 a = r_esp; u32 b = 0x138u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0059e9b9: mov dword ptr [ebp - 0xf4], ecx */ W32((u32)(r_ebp+0xffffff0cu), r_ecx);
    /* 0059e9bf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059e9c1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059e9c3: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x59e9c8u); f_0064c8a0();
    /* 0059e9c8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059e9cb: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 0059e9ce: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 0059e9d1: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 0059e9d4: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 0059e9d7: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0059e9da: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
    /* 0059e9dd: mov dword ptr [ebp - 0x48], 0xffffffff */ W32((u32)(r_ebp+0xffffffb8u), 0xffffffffu);
    /* 0059e9e4: mov dword ptr [ebp - 0x20], 0xffffffff */ W32((u32)(r_ebp+0xffffffe0u), 0xffffffffu);
    /* 0059e9eb: mov dword ptr [ebp - 0x4c], 0xffffffff */ W32((u32)(r_ebp+0xffffffb4u), 0xffffffffu);
    /* 0059e9f2: fldz  */ FPUSH(0.0);
    /* 0059e9f4: fstp qword ptr [ebp - 0x18] */ W_F64((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 0059e9f7: fld1  */ FPUSH(1.0);
    /* 0059e9f9: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0059e9fc: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 0059ea02: call 0x5a2020 */ r_esp -= 4; W32(r_esp, 0x59ea07u); f_005a2020();
    /* 0059ea07: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0059ea0a: mov dword ptr [ebp - 0x1c], 0xffffffff */ W32((u32)(r_ebp+0xffffffe4u), 0xffffffffu);
    /* 0059ea11: mov dword ptr [ebp - 8], 0xffffffff */ W32((u32)(r_ebp+0xfffffff8u), 0xffffffffu);
    /* 0059ea18: mov dword ptr [ebp - 0x50], 0xffffffff */ W32((u32)(r_ebp+0xffffffb0u), 0xffffffffu);
    /* 0059ea1f: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 0059ea26: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 0059ea2c: call 0x5a2720 */ r_esp -= 4; W32(r_esp, 0x59ea31u); f_005a2720();
    /* 0059ea31: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0059ea34: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 0059ea3a: call 0x5a2260 */ r_esp -= 4; W32(r_esp, 0x59ea3fu); f_005a2260();
    /* 0059ea3f: mov dword ptr [ebp - 0xf8], eax */ W32((u32)(r_ebp+0xffffff08u), r_eax);
    /* 0059ea45: cmp dword ptr [ebp - 0xf8], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffff08u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0059ea4c: ja 0x59f129 */ if ((!fC&&!fZ)) goto L_0059f129;
L_0059ea52:; BB(0x0059ea52);
    /* 0059ea52: mov edx, dword ptr [ebp - 0xf8] */ r_edx = R32((u32)(r_ebp+0xffffff08u));
    /* 0059ea58: jmp dword ptr [edx*4 + 0x59f2c8] */ { u32 t = R32((u32)(r_edx*4+0x59f2c8u)); switch (t) { case 0x59ea74u: goto L_0059ea74; case 0x59ea5fu: goto L_0059ea5f; case 0x59ea89u: goto L_0059ea89; case 0x59ed6fu: goto L_0059ed6f; case 0x59f119u: goto L_0059f119; case 0x59f122u: goto L_0059f122; default: UNSUP(0x0059ea58, "jump table entry is not a known target"); } }
L_0059ea5f:; BB(0x0059ea5f);
    /* 0059ea5f: mov dword ptr [ebp - 0x20], 0x7fd */ W32((u32)(r_ebp+0xffffffe0u), 0x7fdu);
    /* 0059ea66: fld qword ptr [0x6b2c40] */ FPUSH(R_F64((u32)(0x6b2c40u)));
    /* 0059ea6c: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0059ea6f: jmp 0x59f129 */ goto L_0059f129;
L_0059ea74:; BB(0x0059ea74);
    /* 0059ea74: mov dword ptr [ebp - 0x20], 0x82e */ W32((u32)(r_ebp+0xffffffe0u), 0x82eu);
    /* 0059ea7b: fld qword ptr [0x6b2c40] */ FPUSH(R_F64((u32)(0x6b2c40u)));
    /* 0059ea81: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0059ea84: jmp 0x59f129 */ goto L_0059f129;
L_0059ea89:; BB(0x0059ea89);
    /* 0059ea89: lea eax, [ebp - 0x58] */ r_eax = (u32)(r_ebp+0xffffffa8u);
    /* 0059ea8c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059ea8d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059ea90: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059ea91: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x59ea96u); f_005dcb00();
    /* 0059ea96: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059ea99: mov ecx, eax */ r_ecx = r_eax;
    /* 0059ea9b: call 0x5d6020 */ r_esp -= 4; W32(r_esp, 0x59eaa0u); f_005d6020();
    /* 0059eaa0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059eaa3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059eaa4: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x59eaa9u); f_005dcb00();
    /* 0059eaa9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059eaac: cmp dword ptr [eax + 0x4a8], 3 */ {  u32 a = R32((u32)(r_eax+0x4a8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059eab3: jle 0x59eb32 */ if ((fZ||fS!=fO)) goto L_0059eb32;
L_0059eab5:; BB(0x0059eab5);
    /* 0059eab5: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0059eab7: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x59eabcu); f_0062fbf0();
    /* 0059eabc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059eabf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059eac1: jne 0x59eb32 */ if (!fZ) goto L_0059eb32;
L_0059eac3:; BB(0x0059eac3);
    /* 0059eac3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059eac6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059eac7: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x59eaccu); f_005dcb00();
    /* 0059eacc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059eacf: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 0059ead2: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0059ead5: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x59eadau); f_0063aac0();
    /* 0059eada: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0059eadc: mov dword ptr [ebp - 0x64], ecx */ W32((u32)(r_ebp+0xffffff9cu), r_ecx);
    /* 0059eadf: cmp dword ptr [ebp - 0x64], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff9cu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059eae3: je 0x59eb04 */ if (fZ) goto L_0059eb04;
L_0059eae5:; BB(0x0059eae5);
    /* 0059eae5: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0059eae8: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x59eaedu); f_0063aac0();
    /* 0059eaed: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0059eaef: mov dword ptr [ebp - 0x68], edx */ W32((u32)(r_ebp+0xffffff98u), r_edx);
    /* 0059eaf2: cmp dword ptr [ebp - 0x68], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff98u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059eaf6: je 0x59eb04 */ if (fZ) goto L_0059eb04;
L_0059eaf8:; BB(0x0059eaf8);
    /* 0059eaf8: mov dword ptr [ebp - 0xfc], 0 */ W32((u32)(r_ebp+0xffffff04u), 0x0u);
    /* 0059eb02: jmp 0x59eb0e */ goto L_0059eb0e;
L_0059eb04:; BB(0x0059eb04);
    /* 0059eb04: mov dword ptr [ebp - 0xfc], 1 */ W32((u32)(r_ebp+0xffffff04u), 0x1u);
L_0059eb0e:; BB(0x0059eb0e);
    /* 0059eb0e: movzx eax, byte ptr [ebp - 0xfc] */ r_eax = (u32)R8((u32)(r_ebp+0xffffff04u));
    /* 0059eb15: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 0059eb17: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 0059eb19: and eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0059eb1c: add eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0059eb21: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0059eb24: fld qword ptr [0x6b2c40] */ FPUSH(R_F64((u32)(0x6b2c40u)));
    /* 0059eb2a: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0059eb2d: jmp 0x59f129 */ goto L_0059f129;
L_0059eb32:; BB(0x0059eb32);
    /* 0059eb32: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059eb35: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059eb36: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x59eb3bu); f_005dcb00();
    /* 0059eb3b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059eb3e: cmp dword ptr [eax + 0x4a8], -3 */ {  u32 a = R32((u32)(r_eax+0x4a8u)); u32 b = 0xfffffffdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059eb45: jge 0x59ebc5 */ if ((fS==fO)) goto L_0059ebc5;
L_0059eb47:; BB(0x0059eb47);
    /* 0059eb47: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0059eb49: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x59eb4eu); f_0062fbf0();
    /* 0059eb4e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059eb51: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059eb53: jne 0x59ebc5 */ if (!fZ) goto L_0059ebc5;
L_0059eb55:; BB(0x0059eb55);
    /* 0059eb55: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059eb58: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059eb59: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x59eb5eu); f_005dcb00();
    /* 0059eb5e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059eb61: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 0059eb64: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 0059eb67: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x59eb6cu); f_0063aac0();
    /* 0059eb6c: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0059eb6e: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 0059eb71: cmp dword ptr [ebp - 0x70], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff90u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059eb75: je 0x59eb96 */ if (fZ) goto L_0059eb96;
L_0059eb77:; BB(0x0059eb77);
    /* 0059eb77: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 0059eb7a: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x59eb7fu); f_0063aac0();
    /* 0059eb7f: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0059eb81: mov dword ptr [ebp - 0x74], ecx */ W32((u32)(r_ebp+0xffffff8cu), r_ecx);
    /* 0059eb84: cmp dword ptr [ebp - 0x74], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff8cu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059eb88: je 0x59eb96 */ if (fZ) goto L_0059eb96;
L_0059eb8a:; BB(0x0059eb8a);
    /* 0059eb8a: mov dword ptr [ebp - 0x100], 0 */ W32((u32)(r_ebp+0xffffff00u), 0x0u);
    /* 0059eb94: jmp 0x59eba0 */ goto L_0059eba0;
L_0059eb96:; BB(0x0059eb96);
    /* 0059eb96: mov dword ptr [ebp - 0x100], 1 */ W32((u32)(r_ebp+0xffffff00u), 0x1u);
L_0059eba0:; BB(0x0059eba0);
    /* 0059eba0: movzx edx, byte ptr [ebp - 0x100] */ r_edx = (u32)R8((u32)(r_ebp+0xffffff00u));
    /* 0059eba7: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); fC = (b != 0); }
    /* 0059eba9: sbb edx, edx */ { u32 c = fC; u32 a = r_edx; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
    /* 0059ebab: and edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0059ebae: add edx, 0x3ff */ {  u32 a = r_edx; u32 b = 0x3ffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0059ebb4: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0059ebb7: fld qword ptr [0x6b2c40] */ FPUSH(R_F64((u32)(0x6b2c40u)));
    /* 0059ebbd: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0059ebc0: jmp 0x59f129 */ goto L_0059f129;
L_0059ebc5:; BB(0x0059ebc5);
    /* 0059ebc5: mov eax, dword ptr [0x7935d0] */ r_eax = R32((u32)(0x7935d0u));
    /* 0059ebca: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0059ebcd: movzx ecx, byte ptr [eax + 0x104] */ r_ecx = (u32)R8((u32)(r_eax+0x104u));
    /* 0059ebd4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059ebd6: je 0x59ec4d */ if (fZ) goto L_0059ec4d;
L_0059ebd8:; BB(0x0059ebd8);
    /* 0059ebd8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059ebdb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059ebdc: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x59ebe1u); f_005dcb00();
    /* 0059ebe1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059ebe4: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 0059ebea: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0059ebf0: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x59ebf5u); f_0063aac0();
    /* 0059ebf5: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0059ebf7: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 0059ebfa: cmp dword ptr [ebp - 0x7c], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff84u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059ebfe: je 0x59ec22 */ if (fZ) goto L_0059ec22;
L_0059ec00:; BB(0x0059ec00);
    /* 0059ec00: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0059ec06: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x59ec0bu); f_0063aac0();
    /* 0059ec0b: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0059ec0d: mov dword ptr [ebp - 0x80], ecx */ W32((u32)(r_ebp+0xffffff80u), r_ecx);
    /* 0059ec10: cmp dword ptr [ebp - 0x80], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff80u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059ec14: je 0x59ec22 */ if (fZ) goto L_0059ec22;
L_0059ec16:; BB(0x0059ec16);
    /* 0059ec16: mov dword ptr [ebp - 0x104], 0 */ W32((u32)(r_ebp+0xfffffefcu), 0x0u);
    /* 0059ec20: jmp 0x59ec2c */ goto L_0059ec2c;
L_0059ec22:; BB(0x0059ec22);
    /* 0059ec22: mov dword ptr [ebp - 0x104], 1 */ W32((u32)(r_ebp+0xfffffefcu), 0x1u);
L_0059ec2c:; BB(0x0059ec2c);
    /* 0059ec2c: movzx edx, byte ptr [ebp - 0x104] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffefcu));
    /* 0059ec33: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); fC = (b != 0); }
    /* 0059ec35: sbb edx, edx */ { u32 c = fC; u32 a = r_edx; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
    /* 0059ec37: and edx, 0x15 */ {  u32 a = r_edx; u32 b = 0x15u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0059ec3a: add edx, 0x3fe */ {  u32 a = r_edx; u32 b = 0x3feu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0059ec40: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0059ec43: fld1  */ FPUSH(1.0);
    /* 0059ec45: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0059ec48: jmp 0x59f129 */ goto L_0059f129;
L_0059ec4d:; BB(0x0059ec4d);
    /* 0059ec4d: cmp dword ptr [ebp - 0x58], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059ec51: jge 0x59ecdb */ if ((fS==fO)) goto L_0059ecdb;
L_0059ec57:; BB(0x0059ec57);
    /* 0059ec57: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059ec5a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059ec5b: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x59ec60u); f_005dcb00();
    /* 0059ec60: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059ec63: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 0059ec69: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 0059ec6f: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x59ec74u); f_0063aac0();
    /* 0059ec74: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0059ec76: mov dword ptr [ebp - 0x88], ecx */ W32((u32)(r_ebp+0xffffff78u), r_ecx);
    /* 0059ec7c: cmp dword ptr [ebp - 0x88], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff78u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059ec83: je 0x59ecad */ if (fZ) goto L_0059ecad;
L_0059ec85:; BB(0x0059ec85);
    /* 0059ec85: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 0059ec8b: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x59ec90u); f_0063aac0();
    /* 0059ec90: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0059ec92: mov dword ptr [ebp - 0x8c], edx */ W32((u32)(r_ebp+0xffffff74u), r_edx);
    /* 0059ec98: cmp dword ptr [ebp - 0x8c], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff74u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059ec9f: je 0x59ecad */ if (fZ) goto L_0059ecad;
L_0059eca1:; BB(0x0059eca1);
    /* 0059eca1: mov dword ptr [ebp - 0x108], 0 */ W32((u32)(r_ebp+0xfffffef8u), 0x0u);
    /* 0059ecab: jmp 0x59ecb7 */ goto L_0059ecb7;
L_0059ecad:; BB(0x0059ecad);
    /* 0059ecad: mov dword ptr [ebp - 0x108], 1 */ W32((u32)(r_ebp+0xfffffef8u), 0x1u);
L_0059ecb7:; BB(0x0059ecb7);
    /* 0059ecb7: movzx eax, byte ptr [ebp - 0x108] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffef8u));
    /* 0059ecbe: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 0059ecc0: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 0059ecc2: and eax, 0xffffffe6 */ {  u32 a = r_eax; u32 b = 0xffffffe6u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0059ecc5: add eax, 0x402 */ {  u32 a = r_eax; u32 b = 0x402u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0059ecca: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0059eccd: fld qword ptr [0x6b2c38] */ FPUSH(R_F64((u32)(0x6b2c38u)));
    /* 0059ecd3: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0059ecd6: jmp 0x59f129 */ goto L_0059f129;
L_0059ecdb:; BB(0x0059ecdb);
    /* 0059ecdb: cmp dword ptr [ebp - 0x58], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059ecdf: jle 0x59ed6a */ if ((fZ||fS!=fO)) goto L_0059ed6a;
L_0059ece5:; BB(0x0059ece5);
    /* 0059ece5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059ece8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059ece9: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x59eceeu); f_005dcb00();
    /* 0059ecee: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059ecf1: mov dword ptr [ebp - 0x9c], eax */ W32((u32)(r_ebp+0xffffff64u), r_eax);
    /* 0059ecf7: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 0059ecfd: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x59ed02u); f_0063aac0();
    /* 0059ed02: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0059ed04: mov dword ptr [ebp - 0x94], edx */ W32((u32)(r_ebp+0xffffff6cu), r_edx);
    /* 0059ed0a: cmp dword ptr [ebp - 0x94], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff6cu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059ed11: je 0x59ed3b */ if (fZ) goto L_0059ed3b;
L_0059ed13:; BB(0x0059ed13);
    /* 0059ed13: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 0059ed19: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x59ed1eu); f_0063aac0();
    /* 0059ed1e: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0059ed20: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 0059ed26: cmp dword ptr [ebp - 0x98], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff68u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059ed2d: je 0x59ed3b */ if (fZ) goto L_0059ed3b;
L_0059ed2f:; BB(0x0059ed2f);
    /* 0059ed2f: mov dword ptr [ebp - 0x10c], 0 */ W32((u32)(r_ebp+0xfffffef4u), 0x0u);
    /* 0059ed39: jmp 0x59ed45 */ goto L_0059ed45;
L_0059ed3b:; BB(0x0059ed3b);
    /* 0059ed3b: mov dword ptr [ebp - 0x10c], 1 */ W32((u32)(r_ebp+0xfffffef4u), 0x1u);
L_0059ed45:; BB(0x0059ed45);
    /* 0059ed45: movzx ecx, byte ptr [ebp - 0x10c] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffef4u));
    /* 0059ed4c: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 0059ed4e: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 0059ed50: and ecx, 0xffffffec */ {  u32 a = r_ecx; u32 b = 0xffffffecu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0059ed53: add ecx, 0x404 */ {  u32 a = r_ecx; u32 b = 0x404u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0059ed59: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0059ed5c: fld qword ptr [0x6b2c38] */ FPUSH(R_F64((u32)(0x6b2c38u)));
    /* 0059ed62: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0059ed65: jmp 0x59f129 */ goto L_0059f129;
L_0059ed6a:; BB(0x0059ed6a);
    /* 0059ed6a: jmp 0x59f129 */ goto L_0059f129;
L_0059ed6f:; BB(0x0059ed6f);
    /* 0059ed6f: mov ecx, dword ptr [0x7935cc] */ r_ecx = R32((u32)(0x7935ccu));
    /* 0059ed75: call 0x5dac90 */ r_esp -= 4; W32(r_esp, 0x59ed7au); f_005dac90();
    /* 0059ed7a: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0059ed7d: mov ecx, dword ptr [0x7935cc] */ r_ecx = R32((u32)(0x7935ccu));
    /* 0059ed83: call 0x5dada0 */ r_esp -= 4; W32(r_esp, 0x59ed88u); f_005dada0();
    /* 0059ed88: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 0059ed8b: mov ecx, dword ptr [0x7935cc] */ r_ecx = R32((u32)(0x7935ccu));
    /* 0059ed91: call 0x5db190 */ r_esp -= 4; W32(r_esp, 0x59ed96u); f_005db190();
    /* 0059ed96: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0059ed99: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059ed9b: je 0x59eeb4 */ if (fZ) goto L_0059eeb4;
L_0059eda1:; BB(0x0059eda1);
    /* 0059eda1: cmp dword ptr [ebp - 8], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059eda5: je 0x59eeb4 */ if (fZ) goto L_0059eeb4;
L_0059edab:; BB(0x0059edab);
    /* 0059edab: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0059edae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059edaf: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x59edb4u); f_005dcb00();
    /* 0059edb4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059edb7: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 0059edbd: mov ecx, dword ptr [ebp - 0xa8] */ r_ecx = R32((u32)(r_ebp+0xffffff58u));
    /* 0059edc3: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x59edc8u); f_0063aac0();
    /* 0059edc8: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0059edca: mov dword ptr [ebp - 0xa0], ecx */ W32((u32)(r_ebp+0xffffff60u), r_ecx);
    /* 0059edd0: cmp dword ptr [ebp - 0xa0], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff60u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059edd7: je 0x59ee01 */ if (fZ) goto L_0059ee01;
L_0059edd9:; BB(0x0059edd9);
    /* 0059edd9: mov ecx, dword ptr [ebp - 0xa8] */ r_ecx = R32((u32)(r_ebp+0xffffff58u));
    /* 0059eddf: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x59ede4u); f_0063aac0();
    /* 0059ede4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0059ede6: mov dword ptr [ebp - 0xa4], edx */ W32((u32)(r_ebp+0xffffff5cu), r_edx);
    /* 0059edec: cmp dword ptr [ebp - 0xa4], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff5cu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059edf3: je 0x59ee01 */ if (fZ) goto L_0059ee01;
L_0059edf5:; BB(0x0059edf5);
    /* 0059edf5: mov dword ptr [ebp - 0x110], 0 */ W32((u32)(r_ebp+0xfffffef0u), 0x0u);
    /* 0059edff: jmp 0x59ee0b */ goto L_0059ee0b;
L_0059ee01:; BB(0x0059ee01);
    /* 0059ee01: mov dword ptr [ebp - 0x110], 1 */ W32((u32)(r_ebp+0xfffffef0u), 0x1u);
L_0059ee0b:; BB(0x0059ee0b);
    /* 0059ee0b: movzx eax, byte ptr [ebp - 0x110] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffef0u));
    /* 0059ee12: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059ee14: je 0x59ee22 */ if (fZ) goto L_0059ee22;
L_0059ee16:; BB(0x0059ee16);
    /* 0059ee16: mov dword ptr [ebp - 0x114], 0xffffffff */ W32((u32)(r_ebp+0xfffffeecu), 0xffffffffu);
    /* 0059ee20: jmp 0x59ee2b */ goto L_0059ee2b;
L_0059ee22:; BB(0x0059ee22);
    /* 0059ee22: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0059ee25: mov dword ptr [ebp - 0x114], ecx */ W32((u32)(r_ebp+0xfffffeecu), r_ecx);
L_0059ee2b:; BB(0x0059ee2b);
    /* 0059ee2b: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0059ee31: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 0059ee34: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0059ee37: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059ee38: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x59ee3du); f_005dcb00();
    /* 0059ee3d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059ee40: mov dword ptr [ebp - 0xb4], eax */ W32((u32)(r_ebp+0xffffff4cu), r_eax);
    /* 0059ee46: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0059ee4c: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x59ee51u); f_0063aac0();
    /* 0059ee51: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0059ee53: mov dword ptr [ebp - 0xac], ecx */ W32((u32)(r_ebp+0xffffff54u), r_ecx);
    /* 0059ee59: cmp dword ptr [ebp - 0xac], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff54u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059ee60: je 0x59ee8a */ if (fZ) goto L_0059ee8a;
L_0059ee62:; BB(0x0059ee62);
    /* 0059ee62: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0059ee68: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x59ee6du); f_0063aac0();
    /* 0059ee6d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0059ee6f: mov dword ptr [ebp - 0xb0], edx */ W32((u32)(r_ebp+0xffffff50u), r_edx);
    /* 0059ee75: cmp dword ptr [ebp - 0xb0], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff50u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059ee7c: je 0x59ee8a */ if (fZ) goto L_0059ee8a;
L_0059ee7e:; BB(0x0059ee7e);
    /* 0059ee7e: mov dword ptr [ebp - 0x118], 0 */ W32((u32)(r_ebp+0xfffffee8u), 0x0u);
    /* 0059ee88: jmp 0x59ee94 */ goto L_0059ee94;
L_0059ee8a:; BB(0x0059ee8a);
    /* 0059ee8a: mov dword ptr [ebp - 0x118], 1 */ W32((u32)(r_ebp+0xfffffee8u), 0x1u);
L_0059ee94:; BB(0x0059ee94);
    /* 0059ee94: movzx eax, byte ptr [ebp - 0x118] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffee8u));
    /* 0059ee9b: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 0059ee9d: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 0059ee9f: and eax, 0x15 */ {  u32 a = r_eax; u32 b = 0x15u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0059eea2: add eax, 0x3fd */ {  u32 a = r_eax; u32 b = 0x3fdu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0059eea7: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0059eeaa: fld1  */ FPUSH(1.0);
    /* 0059eeac: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0059eeaf: jmp 0x59f117 */ goto L_0059f117;
L_0059eeb4:; BB(0x0059eeb4);
    /* 0059eeb4: cmp dword ptr [ebp - 8], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059eeb8: je 0x59eed1 */ if (fZ) goto L_0059eed1;
L_0059eeba:; BB(0x0059eeba);
    /* 0059eeba: lea ecx, [ebp - 0x58] */ r_ecx = (u32)(r_ebp+0xffffffa8u);
    /* 0059eebd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059eebe: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0059eec1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059eec2: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x59eec7u); f_005dcb00();
    /* 0059eec7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059eeca: mov ecx, eax */ r_ecx = r_eax;
    /* 0059eecc: call 0x5d6020 */ r_esp -= 4; W32(r_esp, 0x59eed1u); f_005d6020();
L_0059eed1:; BB(0x0059eed1);
    /* 0059eed1: cmp dword ptr [ebp - 8], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059eed5: je 0x59f004 */ if (fZ) goto L_0059f004;
L_0059eedb:; BB(0x0059eedb);
    /* 0059eedb: cmp dword ptr [ebp - 0x58], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059eedf: jle 0x59f004 */ if ((fZ||fS!=fO)) goto L_0059f004;
L_0059eee5:; BB(0x0059eee5);
    /* 0059eee5: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0059eee7: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x59eeecu); f_0062fbf0();
    /* 0059eeec: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059eeef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059eef1: jne 0x59f004 */ if (!fZ) goto L_0059f004;
L_0059eef7:; BB(0x0059eef7);
    /* 0059eef7: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0059eefa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059eefb: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x59ef00u); f_005dcb00();
    /* 0059ef00: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059ef03: mov dword ptr [ebp - 0xc0], eax */ W32((u32)(r_ebp+0xffffff40u), r_eax);
    /* 0059ef09: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 0059ef0f: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x59ef14u); f_0063aac0();
    /* 0059ef14: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0059ef16: mov dword ptr [ebp - 0xb8], ecx */ W32((u32)(r_ebp+0xffffff48u), r_ecx);
    /* 0059ef1c: cmp dword ptr [ebp - 0xb8], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff48u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059ef23: je 0x59ef4d */ if (fZ) goto L_0059ef4d;
L_0059ef25:; BB(0x0059ef25);
    /* 0059ef25: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 0059ef2b: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x59ef30u); f_0063aac0();
    /* 0059ef30: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0059ef32: mov dword ptr [ebp - 0xbc], edx */ W32((u32)(r_ebp+0xffffff44u), r_edx);
    /* 0059ef38: cmp dword ptr [ebp - 0xbc], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff44u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059ef3f: je 0x59ef4d */ if (fZ) goto L_0059ef4d;
L_0059ef41:; BB(0x0059ef41);
    /* 0059ef41: mov dword ptr [ebp - 0x11c], 0 */ W32((u32)(r_ebp+0xfffffee4u), 0x0u);
    /* 0059ef4b: jmp 0x59ef57 */ goto L_0059ef57;
L_0059ef4d:; BB(0x0059ef4d);
    /* 0059ef4d: mov dword ptr [ebp - 0x11c], 1 */ W32((u32)(r_ebp+0xfffffee4u), 0x1u);
L_0059ef57:; BB(0x0059ef57);
    /* 0059ef57: movzx eax, byte ptr [ebp - 0x11c] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffee4u));
    /* 0059ef5e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059ef60: je 0x59ef6e */ if (fZ) goto L_0059ef6e;
L_0059ef62:; BB(0x0059ef62);
    /* 0059ef62: mov dword ptr [ebp - 0x120], 0xffffffff */ W32((u32)(r_ebp+0xfffffee0u), 0xffffffffu);
    /* 0059ef6c: jmp 0x59ef77 */ goto L_0059ef77;
L_0059ef6e:; BB(0x0059ef6e);
    /* 0059ef6e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0059ef71: mov dword ptr [ebp - 0x120], ecx */ W32((u32)(r_ebp+0xfffffee0u), r_ecx);
L_0059ef77:; BB(0x0059ef77);
    /* 0059ef77: mov edx, dword ptr [ebp - 0x120] */ r_edx = R32((u32)(r_ebp+0xfffffee0u));
    /* 0059ef7d: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 0059ef80: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0059ef83: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059ef84: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x59ef89u); f_005dcb00();
    /* 0059ef89: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059ef8c: mov dword ptr [ebp - 0xcc], eax */ W32((u32)(r_ebp+0xffffff34u), r_eax);
    /* 0059ef92: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 0059ef98: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x59ef9du); f_0063aac0();
    /* 0059ef9d: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0059ef9f: mov dword ptr [ebp - 0xc4], ecx */ W32((u32)(r_ebp+0xffffff3cu), r_ecx);
    /* 0059efa5: cmp dword ptr [ebp - 0xc4], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff3cu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059efac: je 0x59efd6 */ if (fZ) goto L_0059efd6;
L_0059efae:; BB(0x0059efae);
    /* 0059efae: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 0059efb4: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x59efb9u); f_0063aac0();
    /* 0059efb9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0059efbb: mov dword ptr [ebp - 0xc8], edx */ W32((u32)(r_ebp+0xffffff38u), r_edx);
    /* 0059efc1: cmp dword ptr [ebp - 0xc8], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff38u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059efc8: je 0x59efd6 */ if (fZ) goto L_0059efd6;
L_0059efca:; BB(0x0059efca);
    /* 0059efca: mov dword ptr [ebp - 0x124], 0 */ W32((u32)(r_ebp+0xfffffedcu), 0x0u);
    /* 0059efd4: jmp 0x59efe0 */ goto L_0059efe0;
L_0059efd6:; BB(0x0059efd6);
    /* 0059efd6: mov dword ptr [ebp - 0x124], 1 */ W32((u32)(r_ebp+0xfffffedcu), 0x1u);
L_0059efe0:; BB(0x0059efe0);
    /* 0059efe0: movzx eax, byte ptr [ebp - 0x124] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffedcu));
    /* 0059efe7: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 0059efe9: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 0059efeb: and eax, 0x19 */ {  u32 a = r_eax; u32 b = 0x19u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0059efee: add eax, 0x3f2 */ {  u32 a = r_eax; u32 b = 0x3f2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0059eff3: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0059eff6: fld qword ptr [0x6b2c38] */ FPUSH(R_F64((u32)(0x6b2c38u)));
    /* 0059effc: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0059efff: jmp 0x59f117 */ goto L_0059f117;
L_0059f004:; BB(0x0059f004);
    /* 0059f004: cmp dword ptr [ebp - 0x50], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffb0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059f008: je 0x59f117 */ if (fZ) goto L_0059f117;
L_0059f00e:; BB(0x0059f00e);
    /* 0059f00e: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0059f011: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059f012: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x59f017u); f_005dcb00();
    /* 0059f017: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059f01a: mov dword ptr [ebp - 0xd8], eax */ W32((u32)(r_ebp+0xffffff28u), r_eax);
    /* 0059f020: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 0059f026: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x59f02bu); f_0063aac0();
    /* 0059f02b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0059f02d: mov dword ptr [ebp - 0xd0], edx */ W32((u32)(r_ebp+0xffffff30u), r_edx);
    /* 0059f033: cmp dword ptr [ebp - 0xd0], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff30u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059f03a: je 0x59f064 */ if (fZ) goto L_0059f064;
L_0059f03c:; BB(0x0059f03c);
    /* 0059f03c: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 0059f042: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x59f047u); f_0063aac0();
    /* 0059f047: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0059f049: mov dword ptr [ebp - 0xd4], eax */ W32((u32)(r_ebp+0xffffff2cu), r_eax);
    /* 0059f04f: cmp dword ptr [ebp - 0xd4], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff2cu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059f056: je 0x59f064 */ if (fZ) goto L_0059f064;
L_0059f058:; BB(0x0059f058);
    /* 0059f058: mov dword ptr [ebp - 0x128], 0 */ W32((u32)(r_ebp+0xfffffed8u), 0x0u);
    /* 0059f062: jmp 0x59f06e */ goto L_0059f06e;
L_0059f064:; BB(0x0059f064);
    /* 0059f064: mov dword ptr [ebp - 0x128], 1 */ W32((u32)(r_ebp+0xfffffed8u), 0x1u);
L_0059f06e:; BB(0x0059f06e);
    /* 0059f06e: movzx ecx, byte ptr [ebp - 0x128] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffed8u));
    /* 0059f075: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059f077: je 0x59f085 */ if (fZ) goto L_0059f085;
L_0059f079:; BB(0x0059f079);
    /* 0059f079: mov dword ptr [ebp - 0x12c], 0xffffffff */ W32((u32)(r_ebp+0xfffffed4u), 0xffffffffu);
    /* 0059f083: jmp 0x59f08e */ goto L_0059f08e;
L_0059f085:; BB(0x0059f085);
    /* 0059f085: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0059f088: mov dword ptr [ebp - 0x12c], edx */ W32((u32)(r_ebp+0xfffffed4u), r_edx);
L_0059f08e:; BB(0x0059f08e);
    /* 0059f08e: mov eax, dword ptr [ebp - 0x12c] */ r_eax = R32((u32)(r_ebp+0xfffffed4u));
    /* 0059f094: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0059f097: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0059f09a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059f09b: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x59f0a0u); f_005dcb00();
    /* 0059f0a0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059f0a3: mov dword ptr [ebp - 0xe4], eax */ W32((u32)(r_ebp+0xffffff1cu), r_eax);
    /* 0059f0a9: mov ecx, dword ptr [ebp - 0xe4] */ r_ecx = R32((u32)(r_ebp+0xffffff1cu));
    /* 0059f0af: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x59f0b4u); f_0063aac0();
    /* 0059f0b4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0059f0b6: mov dword ptr [ebp - 0xdc], edx */ W32((u32)(r_ebp+0xffffff24u), r_edx);
    /* 0059f0bc: cmp dword ptr [ebp - 0xdc], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff24u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059f0c3: je 0x59f0ed */ if (fZ) goto L_0059f0ed;
L_0059f0c5:; BB(0x0059f0c5);
    /* 0059f0c5: mov ecx, dword ptr [ebp - 0xe4] */ r_ecx = R32((u32)(r_ebp+0xffffff1cu));
    /* 0059f0cb: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x59f0d0u); f_0063aac0();
    /* 0059f0d0: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0059f0d2: mov dword ptr [ebp - 0xe0], eax */ W32((u32)(r_ebp+0xffffff20u), r_eax);
    /* 0059f0d8: cmp dword ptr [ebp - 0xe0], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff20u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059f0df: je 0x59f0ed */ if (fZ) goto L_0059f0ed;
L_0059f0e1:; BB(0x0059f0e1);
    /* 0059f0e1: mov dword ptr [ebp - 0x130], 0 */ W32((u32)(r_ebp+0xfffffed0u), 0x0u);
    /* 0059f0eb: jmp 0x59f0f7 */ goto L_0059f0f7;
L_0059f0ed:; BB(0x0059f0ed);
    /* 0059f0ed: mov dword ptr [ebp - 0x130], 1 */ W32((u32)(r_ebp+0xfffffed0u), 0x1u);
L_0059f0f7:; BB(0x0059f0f7);
    /* 0059f0f7: movzx ecx, byte ptr [ebp - 0x130] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffed0u));
    /* 0059f0fe: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 0059f100: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 0059f102: and ecx, 0x19 */ {  u32 a = r_ecx; u32 b = 0x19u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0059f105: add ecx, 0x3f3 */ {  u32 a = r_ecx; u32 b = 0x3f3u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0059f10b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0059f10e: fld qword ptr [0x6b2c38] */ FPUSH(R_F64((u32)(0x6b2c38u)));
    /* 0059f114: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
L_0059f117:; BB(0x0059f117);
    /* 0059f117: jmp 0x59f129 */ goto L_0059f129;
L_0059f119:; BB(0x0059f119);
    /* 0059f119: mov dword ptr [ebp - 0x1c], 0x29810 */ W32((u32)(r_ebp+0xffffffe4u), 0x29810u);
    /* 0059f120: jmp 0x59f129 */ goto L_0059f129;
L_0059f122:; BB(0x0059f122);
    /* 0059f122: mov dword ptr [ebp - 0x1c], 0x29816 */ W32((u32)(r_ebp+0xffffffe4u), 0x29816u);
L_0059f129:; BB(0x0059f129);
    /* 0059f129: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0059f12b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0059f12d: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 0059f133: call 0x5a3b40 */ r_esp -= 4; W32(r_esp, 0x59f138u); f_005a3b40();
    /* 0059f138: cmp dword ptr [ebp - 0x48], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059f13c: jne 0x59f189 */ if (!fZ) goto L_0059f189;
L_0059f13e:; BB(0x0059f13e);
    /* 0059f13e: cmp dword ptr [ebp - 0x1c], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059f142: jne 0x59f166 */ if (!fZ) goto L_0059f166;
L_0059f144:; BB(0x0059f144);
    /* 0059f144: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059f146: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0059f148: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 0059f14e: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0059f151: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0059f157: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0059f15a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0059f15c: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0059f15f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59f161u); call_ind(t); }
    /* 0059f161: jmp 0x59f2c1 */ goto L_0059f2c1;
L_0059f166:; BB(0x0059f166);
    /* 0059f166: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059f168: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0059f16e: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0059f171: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059f172: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0059f175: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059f176: mov ecx, dword ptr [0x7935c4] */ r_ecx = R32((u32)(0x7935c4u));
    /* 0059f17c: mov ecx, dword ptr [ecx + 0x4c] */ r_ecx = R32((u32)(r_ecx+0x4cu));
    /* 0059f17f: call 0x5cd7c0 */ r_esp -= 4; W32(r_esp, 0x59f184u); f_005cd7c0();
    /* 0059f184: jmp 0x59f2c1 */ goto L_0059f2c1;
L_0059f189:; BB(0x0059f189);
    /* 0059f189: cmp dword ptr [ebp - 0x20], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059f18d: je 0x59f217 */ if (fZ) goto L_0059f217;
L_0059f193:; BB(0x0059f193);
    /* 0059f193: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0059f199: call 0x636730 */ r_esp -= 4; W32(r_esp, 0x59f19eu); f_00636730();
    /* 0059f19e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059f1a0: je 0x59f217 */ if (fZ) goto L_0059f217;
L_0059f1a2:; BB(0x0059f1a2);
    /* 0059f1a2: cmp dword ptr [ebp - 0x48], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059f1a6: jle 0x59f23a */ if ((fZ||fS!=fO)) goto L_0059f23a;
L_0059f1ac:; BB(0x0059f1ac);
    /* 0059f1ac: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0059f1af: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059f1b0: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x59f1b5u); f_005dcb00();
    /* 0059f1b5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059f1b8: mov dword ptr [ebp - 0xf0], eax */ W32((u32)(r_ebp+0xffffff10u), r_eax);
    /* 0059f1be: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 0059f1c4: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x59f1c9u); f_0063aac0();
    /* 0059f1c9: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0059f1cb: mov dword ptr [ebp - 0xe8], eax */ W32((u32)(r_ebp+0xffffff18u), r_eax);
    /* 0059f1d1: cmp dword ptr [ebp - 0xe8], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff18u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059f1d8: je 0x59f202 */ if (fZ) goto L_0059f202;
L_0059f1da:; BB(0x0059f1da);
    /* 0059f1da: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 0059f1e0: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x59f1e5u); f_0063aac0();
    /* 0059f1e5: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0059f1e7: mov dword ptr [ebp - 0xec], ecx */ W32((u32)(r_ebp+0xffffff14u), r_ecx);
    /* 0059f1ed: cmp dword ptr [ebp - 0xec], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff14u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059f1f4: je 0x59f202 */ if (fZ) goto L_0059f202;
L_0059f1f6:; BB(0x0059f1f6);
    /* 0059f1f6: mov dword ptr [ebp - 0x134], 0 */ W32((u32)(r_ebp+0xfffffeccu), 0x0u);
    /* 0059f200: jmp 0x59f20c */ goto L_0059f20c;
L_0059f202:; BB(0x0059f202);
    /* 0059f202: mov dword ptr [ebp - 0x134], 1 */ W32((u32)(r_ebp+0xfffffeccu), 0x1u);
L_0059f20c:; BB(0x0059f20c);
    /* 0059f20c: movzx edx, byte ptr [ebp - 0x134] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffeccu));
    /* 0059f213: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059f215: je 0x59f23a */ if (fZ) goto L_0059f23a;
L_0059f217:; BB(0x0059f217);
    /* 0059f217: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059f219: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0059f21b: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 0059f220: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0059f223: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 0059f229: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0059f22c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0059f22e: mov ecx, eax */ r_ecx = r_eax;
    /* 0059f230: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0059f233: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59f235u); call_ind(t); }
    /* 0059f235: jmp 0x59f2c1 */ goto L_0059f2c1;
L_0059f23a:; BB(0x0059f23a);
    /* 0059f23a: cmp dword ptr [ebp - 0x48], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059f23e: je 0x59f24b */ if (fZ) goto L_0059f24b;
L_0059f240:; BB(0x0059f240);
    /* 0059f240: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0059f243: mov dword ptr [ebp - 0x138], ecx */ W32((u32)(r_ebp+0xfffffec8u), r_ecx);
    /* 0059f249: jmp 0x59f25c */ goto L_0059f25c;
L_0059f24b:; BB(0x0059f24b);
    /* 0059f24b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0059f251: call 0x636c50 */ r_esp -= 4; W32(r_esp, 0x59f256u); f_00636c50();
    /* 0059f256: mov dword ptr [ebp - 0x138], eax */ W32((u32)(r_ebp+0xfffffec8u), r_eax);
L_0059f25c:; BB(0x0059f25c);
    /* 0059f25c: mov edx, dword ptr [ebp - 0x138] */ r_edx = R32((u32)(r_ebp+0xfffffec8u));
    /* 0059f262: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 0059f265: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0059f268: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0059f26b: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0059f26e: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 0059f271: fld qword ptr [ebp - 0x18] */ FPUSH(R_F64((u32)(r_ebp+0xffffffe8u)));
    /* 0059f274: fstp qword ptr [ebp - 0x30] */ W_F64((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 0059f277: fld qword ptr [ebp - 0x10] */ FPUSH(R_F64((u32)(r_ebp+0xfffffff0u)));
    /* 0059f27a: fstp qword ptr [ebp - 0x28] */ W_F64((u32)(r_ebp+0xffffffd8u), ST(0)); FPOP();
    /* 0059f27d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0059f27f: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 0059f285: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0059f288: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0059f28e: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0059f291: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0059f293: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0059f296: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59f298u); call_ind(t); }
    /* 0059f298: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0059f29a: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0059f29c: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0059f2a2: call 0x637810 */ r_esp -= 4; W32(r_esp, 0x59f2a7u); f_00637810();
    /* 0059f2a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059f2a8: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0059f2ae: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0059f2b1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059f2b2: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 0059f2b5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059f2b6: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0059f2bc: call 0x639390 */ r_esp -= 4; W32(r_esp, 0x59f2c1u); f_00639390();
L_0059f2c1:; BB(0x0059f2c1);
    /* 0059f2c1: mov esp, ebp */ r_esp = r_ebp;
    /* 0059f2c3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059f2c4: ret  */ FN_RET(0x0059e9b0); r_esp += 4; return;
}

