#include "protos.h"

void f_0059b4d0(void) /* BigRaiseDisplay::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0059b4d0);
    /* 0059b4d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059b4d1: mov ebp, esp */ r_ebp = r_esp;
    /* 0059b4d3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0059b4d6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0059b4d9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059b4dc: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x59b4e1u); f_005e9e20();
    /* 0059b4e1: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059b4e4: mov dword ptr [eax], 0x6ced80 */ W32((u32)(r_eax), 0x6ced80u);
    /* 0059b4ea: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0059b4f1: jmp 0x59b4fc */ goto L_0059b4fc;
L_0059b4f3:; BB(0x0059b4f3);
    /* 0059b4f3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059b4f6: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0059b4f9: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0059b4fc:; BB(0x0059b4fc);
    /* 0059b4fc: cmp dword ptr [ebp - 4], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059b500: jge 0x59b523 */ if ((fS==fO)) goto L_0059b523;
L_0059b502:; BB(0x0059b502);
    /* 0059b502: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059b505: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059b508: mov dword ptr [eax + edx*4 + 4], 0 */ W32((u32)(r_eax+r_edx*4+0x4u), 0x0u);
    /* 0059b510: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059b513: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059b516: mov dword ptr [edx + ecx*4 + 0x84], 0 */ W32((u32)(r_edx+r_ecx*4+0x84u), 0x0u);
    /* 0059b521: jmp 0x59b4f3 */ goto L_0059b4f3;
L_0059b523:; BB(0x0059b523);
    /* 0059b523: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0059b52a: jmp 0x59b535 */ goto L_0059b535;
L_0059b52c:; BB(0x0059b52c);
    /* 0059b52c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0059b52f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0059b532: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0059b535:; BB(0x0059b535);
    /* 0059b535: cmp dword ptr [ebp - 8], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059b539: jge 0x59b559 */ if ((fS==fO)) goto L_0059b559;
L_0059b53b:; BB(0x0059b53b);
    /* 0059b53b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0059b53e: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059b541: mov dword ptr [edx + ecx*4 + 0x1c], 0 */ W32((u32)(r_edx+r_ecx*4+0x1cu), 0x0u);
    /* 0059b549: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0059b54c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059b54f: mov dword ptr [ecx + eax*4 + 0x54], 0 */ W32((u32)(r_ecx+r_eax*4+0x54u), 0x0u);
    /* 0059b557: jmp 0x59b52c */ goto L_0059b52c;
L_0059b559:; BB(0x0059b559);
    /* 0059b559: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059b55c: mov dword ptr [edx + 0x4c], 0 */ W32((u32)(r_edx+0x4cu), 0x0u);
    /* 0059b563: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059b566: mov dword ptr [eax + 0x9c], 0 */ W32((u32)(r_eax+0x9cu), 0x0u);
    /* 0059b570: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059b573: mov dword ptr [ecx + 0xa0], 0 */ W32((u32)(r_ecx+0xa0u), 0x0u);
    /* 0059b57d: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059b580: mov dword ptr [edx + 0xa4], 0 */ W32((u32)(r_edx+0xa4u), 0x0u);
    /* 0059b58a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059b58d: mov dword ptr [eax + 0x50], 0 */ W32((u32)(r_eax+0x50u), 0x0u);
    /* 0059b594: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059b597: mov esp, ebp */ r_esp = r_ebp;
    /* 0059b599: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059b59a: ret  */ FN_RET(0x0059b4d0); r_esp += 4; return;
}

void f_0059b5a0(void) /* BigRaiseDisplay::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0059b5a0);
    /* 0059b5a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059b5a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0059b5a3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0059b5a5: push 0x6a7488 */ { u32 v = 0x6a7488u; r_esp -= 4; W32(r_esp, v); }
    /* 0059b5aa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0059b5b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059b5b1: sub esp, 0x78 */ {  u32 a = r_esp; u32 b = 0x78u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0059b5b4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0059b5b9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0059b5bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059b5bc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0059b5bf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0059b5c5: mov dword ptr [ebp - 0x60], ecx */ W32((u32)(r_ebp+0xffffffa0u), r_ecx);
    /* 0059b5c8: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 0059b5cb: mov dword ptr [eax], 0x6ced80 */ W32((u32)(r_eax), 0x6ced80u);
    /* 0059b5d1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0059b5d8: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0059b5df: jmp 0x59b5ea */ goto L_0059b5ea;
L_0059b5e1:; BB(0x0059b5e1);
    /* 0059b5e1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0059b5e4: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0059b5e7: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0059b5ea:; BB(0x0059b5ea);
    /* 0059b5ea: cmp dword ptr [ebp - 0x10], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059b5ee: jge 0x59b65b */ if ((fS==fO)) goto L_0059b65b;
L_0059b5f0:; BB(0x0059b5f0);
    /* 0059b5f0: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0059b5f3: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 0059b5f6: mov ecx, dword ptr [eax + edx*4 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 0059b5fa: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0059b5fd: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0059b600: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0059b603: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059b607: je 0x59b61c */ if (fZ) goto L_0059b61c;
L_0059b609:; BB(0x0059b609);
    /* 0059b609: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0059b60b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0059b60e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0059b610: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0059b613: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0059b615: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59b617u); call_ind(t); }
    /* 0059b617: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 0059b61a: jmp 0x59b623 */ goto L_0059b623;
L_0059b61c:; BB(0x0059b61c);
    /* 0059b61c: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
L_0059b623:; BB(0x0059b623);
    /* 0059b623: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0059b626: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0059b629: mov eax, dword ptr [edx + ecx*4 + 0x84] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x84u));
    /* 0059b630: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0059b633: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0059b636: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0059b639: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059b63d: je 0x59b652 */ if (fZ) goto L_0059b652;
L_0059b63f:; BB(0x0059b63f);
    /* 0059b63f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0059b641: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0059b644: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0059b646: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0059b649: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0059b64b: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x59b64du); call_ind(t); }
    /* 0059b64d: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 0059b650: jmp 0x59b659 */ goto L_0059b659;
L_0059b652:; BB(0x0059b652);
    /* 0059b652: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
L_0059b659:; BB(0x0059b659);
    /* 0059b659: jmp 0x59b5e1 */ goto L_0059b5e1;
L_0059b65b:; BB(0x0059b65b);
    /* 0059b65b: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0059b662: jmp 0x59b66d */ goto L_0059b66d;
L_0059b664:; BB(0x0059b664);
    /* 0059b664: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0059b667: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0059b66a: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_0059b66d:; BB(0x0059b66d);
    /* 0059b66d: cmp dword ptr [ebp - 0x14], 0xc */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059b671: jge 0x59b6db */ if ((fS==fO)) goto L_0059b6db;
L_0059b673:; BB(0x0059b673);
    /* 0059b673: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0059b676: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0059b679: mov eax, dword ptr [edx + ecx*4 + 0x1c] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x1cu));
    /* 0059b67d: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0059b680: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0059b683: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0059b686: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059b68a: je 0x59b69f */ if (fZ) goto L_0059b69f;
L_0059b68c:; BB(0x0059b68c);
    /* 0059b68c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0059b68e: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0059b691: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0059b693: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0059b696: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0059b698: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x59b69au); call_ind(t); }
    /* 0059b69a: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 0059b69d: jmp 0x59b6a6 */ goto L_0059b6a6;
L_0059b69f:; BB(0x0059b69f);
    /* 0059b69f: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
L_0059b6a6:; BB(0x0059b6a6);
    /* 0059b6a6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0059b6a9: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0059b6ac: mov edx, dword ptr [ecx + eax*4 + 0x54] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x54u));
    /* 0059b6b0: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 0059b6b3: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0059b6b6: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0059b6b9: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059b6bd: je 0x59b6d2 */ if (fZ) goto L_0059b6d2;
L_0059b6bf:; BB(0x0059b6bf);
    /* 0059b6bf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0059b6c1: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0059b6c4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0059b6c6: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0059b6c9: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0059b6cb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59b6cdu); call_ind(t); }
    /* 0059b6cd: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 0059b6d0: jmp 0x59b6d9 */ goto L_0059b6d9;
L_0059b6d2:; BB(0x0059b6d2);
    /* 0059b6d2: mov dword ptr [ebp - 0x70], 0 */ W32((u32)(r_ebp+0xffffff90u), 0x0u);
L_0059b6d9:; BB(0x0059b6d9);
    /* 0059b6d9: jmp 0x59b664 */ goto L_0059b664;
L_0059b6db:; BB(0x0059b6db);
    /* 0059b6db: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0059b6de: mov edx, dword ptr [ecx + 0x4c] */ r_edx = R32((u32)(r_ecx+0x4cu));
    /* 0059b6e1: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 0059b6e4: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0059b6e7: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0059b6ea: cmp dword ptr [ebp - 0x38], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059b6ee: je 0x59b703 */ if (fZ) goto L_0059b703;
L_0059b6f0:; BB(0x0059b6f0);
    /* 0059b6f0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0059b6f2: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0059b6f5: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0059b6f7: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0059b6fa: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0059b6fc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59b6feu); call_ind(t); }
    /* 0059b6fe: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 0059b701: jmp 0x59b70a */ goto L_0059b70a;
L_0059b703:; BB(0x0059b703);
    /* 0059b703: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
L_0059b70a:; BB(0x0059b70a);
    /* 0059b70a: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0059b70d: mov edx, dword ptr [ecx + 0x9c] */ r_edx = R32((u32)(r_ecx+0x9cu));
    /* 0059b713: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 0059b716: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0059b719: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0059b71c: cmp dword ptr [ebp - 0x40], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059b720: je 0x59b735 */ if (fZ) goto L_0059b735;
L_0059b722:; BB(0x0059b722);
    /* 0059b722: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0059b724: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0059b727: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0059b729: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0059b72c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0059b72e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59b730u); call_ind(t); }
    /* 0059b730: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 0059b733: jmp 0x59b73c */ goto L_0059b73c;
L_0059b735:; BB(0x0059b735);
    /* 0059b735: mov dword ptr [ebp - 0x78], 0 */ W32((u32)(r_ebp+0xffffff88u), 0x0u);
L_0059b73c:; BB(0x0059b73c);
    /* 0059b73c: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0059b73f: mov edx, dword ptr [ecx + 0xa0] */ r_edx = R32((u32)(r_ecx+0xa0u));
    /* 0059b745: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 0059b748: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0059b74b: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0059b74e: cmp dword ptr [ebp - 0x48], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059b752: je 0x59b767 */ if (fZ) goto L_0059b767;
L_0059b754:; BB(0x0059b754);
    /* 0059b754: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0059b756: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0059b759: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0059b75b: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0059b75e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0059b760: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59b762u); call_ind(t); }
    /* 0059b762: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 0059b765: jmp 0x59b76e */ goto L_0059b76e;
L_0059b767:; BB(0x0059b767);
    /* 0059b767: mov dword ptr [ebp - 0x7c], 0 */ W32((u32)(r_ebp+0xffffff84u), 0x0u);
L_0059b76e:; BB(0x0059b76e);
    /* 0059b76e: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0059b771: mov edx, dword ptr [ecx + 0xa4] */ r_edx = R32((u32)(r_ecx+0xa4u));
    /* 0059b777: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 0059b77a: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 0059b77d: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 0059b780: cmp dword ptr [ebp - 0x50], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059b784: je 0x59b799 */ if (fZ) goto L_0059b799;
L_0059b786:; BB(0x0059b786);
    /* 0059b786: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0059b788: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0059b78b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0059b78d: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0059b790: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0059b792: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59b794u); call_ind(t); }
    /* 0059b794: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 0059b797: jmp 0x59b7a0 */ goto L_0059b7a0;
L_0059b799:; BB(0x0059b799);
    /* 0059b799: mov dword ptr [ebp - 0x80], 0 */ W32((u32)(r_ebp+0xffffff80u), 0x0u);
L_0059b7a0:; BB(0x0059b7a0);
    /* 0059b7a0: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0059b7a3: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 0059b7a6: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 0059b7a9: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 0059b7ac: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 0059b7af: cmp dword ptr [ebp - 0x58], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059b7b3: je 0x59b7cb */ if (fZ) goto L_0059b7cb;
L_0059b7b5:; BB(0x0059b7b5);
    /* 0059b7b5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0059b7b7: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0059b7ba: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0059b7bc: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0059b7bf: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0059b7c1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59b7c3u); call_ind(t); }
    /* 0059b7c3: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 0059b7c9: jmp 0x59b7d5 */ goto L_0059b7d5;
L_0059b7cb:; BB(0x0059b7cb);
    /* 0059b7cb: mov dword ptr [ebp - 0x84], 0 */ W32((u32)(r_ebp+0xffffff7cu), 0x0u);
L_0059b7d5:; BB(0x0059b7d5);
    /* 0059b7d5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0059b7dc: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0059b7df: call 0x5e9e40 */ r_esp -= 4; W32(r_esp, 0x59b7e4u); f_005e9e40();
    /* 0059b7e4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059b7e7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0059b7ee: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059b7ef: mov esp, ebp */ r_esp = r_ebp;
    /* 0059b7f1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059b7f2: ret  */ FN_RET(0x0059b5a0); r_esp += 4; return;
}

