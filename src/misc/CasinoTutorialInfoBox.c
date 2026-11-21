#include "protos.h"

void f_0057c590(void) /* CasinoTutorialInfoBox::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0057c590);
    /* 0057c590: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057c591: mov ebp, esp */ r_ebp = r_esp;
    /* 0057c593: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0057c596: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0057c599: push 0x1e0 */ { u32 v = 0x1e0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057c59e: push 0x280 */ { u32 v = 0x280u; r_esp -= 4; W32(r_esp, v); }
    /* 0057c5a3: mov eax, dword ptr [0x15e55e8] */ r_eax = R32((u32)(0x15e55e8u));
    /* 0057c5a8: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0057c5ab: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057c5ac: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057c5ae: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057c5b1: call 0x5f7670 */ r_esp -= 4; W32(r_esp, 0x57c5b6u); f_005f7670();
    /* 0057c5b6: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057c5b9: mov dword ptr [edx], 0x6cbd84 */ W32((u32)(r_edx), 0x6cbd84u);
    /* 0057c5bf: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057c5c2: mov dword ptr [eax + 0x1b4], 0xffffffff */ W32((u32)(r_eax+0x1b4u), 0xffffffffu);
    /* 0057c5cc: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0057c5d3: jmp 0x57c5de */ goto L_0057c5de;
L_0057c5d5:; BB(0x0057c5d5);
    /* 0057c5d5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057c5d8: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0057c5db: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0057c5de:; BB(0x0057c5de);
    /* 0057c5de: cmp dword ptr [ebp - 4], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057c5e2: jge 0x57c5f7 */ if ((fS==fO)) goto L_0057c5f7;
L_0057c5e4:; BB(0x0057c5e4);
    /* 0057c5e4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057c5e7: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057c5ea: mov dword ptr [eax + edx*4 + 0x1b8], 0 */ W32((u32)(r_eax+r_edx*4+0x1b8u), 0x0u);
    /* 0057c5f5: jmp 0x57c5d5 */ goto L_0057c5d5;
L_0057c5f7:; BB(0x0057c5f7);
    /* 0057c5f7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057c5fa: mov dword ptr [ecx + 0x1d0], 0 */ W32((u32)(r_ecx+0x1d0u), 0x0u);
    /* 0057c604: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057c607: mov dword ptr [edx + 0x1d4], 0 */ W32((u32)(r_edx+0x1d4u), 0x0u);
    /* 0057c611: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057c614: mov dword ptr [eax + 0x1d8], 0 */ W32((u32)(r_eax+0x1d8u), 0x0u);
    /* 0057c61e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057c621: mov dword ptr [ecx + 0x1dc], 0 */ W32((u32)(r_ecx+0x1dcu), 0x0u);
    /* 0057c62b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057c62e: mov esp, ebp */ r_esp = r_ebp;
    /* 0057c630: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057c631: ret  */ FN_RET(0x0057c590); r_esp += 4; return;
}

void f_0057c640(void) /* CasinoTutorialInfoBox::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0057c640);
    /* 0057c640: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057c641: mov ebp, esp */ r_ebp = r_esp;
    /* 0057c643: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0057c645: push 0x6a67b3 */ { u32 v = 0x6a67b3u; r_esp -= 4; W32(r_esp, v); }
    /* 0057c64a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0057c650: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057c651: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0057c654: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0057c659: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0057c65b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057c65c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0057c65f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0057c665: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 0057c668: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0057c66b: mov dword ptr [eax], 0x6cbd84 */ W32((u32)(r_eax), 0x6cbd84u);
    /* 0057c671: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0057c678: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0057c67f: jmp 0x57c68a */ goto L_0057c68a;
L_0057c681:; BB(0x0057c681);
    /* 0057c681: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057c684: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0057c687: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0057c68a:; BB(0x0057c68a);
    /* 0057c68a: cmp dword ptr [ebp - 0x10], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057c68e: jge 0x57c6e9 */ if ((fS==fO)) goto L_0057c6e9;
L_0057c690:; BB(0x0057c690);
    /* 0057c690: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057c693: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0057c696: cmp dword ptr [eax + edx*4 + 0x1b8], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x1b8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057c69e: je 0x57c6e7 */ if (fZ) goto L_0057c6e7;
L_0057c6a0:; BB(0x0057c6a0);
    /* 0057c6a0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057c6a3: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0057c6a6: mov eax, dword ptr [edx + ecx*4 + 0x1b8] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x1b8u));
    /* 0057c6ad: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0057c6b0: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057c6b3: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0057c6b6: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057c6ba: je 0x57c6cf */ if (fZ) goto L_0057c6cf;
L_0057c6bc:; BB(0x0057c6bc);
    /* 0057c6bc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0057c6be: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057c6c1: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0057c6c3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057c6c6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0057c6c8: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x57c6cau); call_ind(t); }
    /* 0057c6ca: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0057c6cd: jmp 0x57c6d6 */ goto L_0057c6d6;
L_0057c6cf:; BB(0x0057c6cf);
    /* 0057c6cf: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_0057c6d6:; BB(0x0057c6d6);
    /* 0057c6d6: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057c6d9: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0057c6dc: mov dword ptr [ecx + eax*4 + 0x1b8], 0 */ W32((u32)(r_ecx+r_eax*4+0x1b8u), 0x0u);
L_0057c6e7:; BB(0x0057c6e7);
    /* 0057c6e7: jmp 0x57c681 */ goto L_0057c681;
L_0057c6e9:; BB(0x0057c6e9);
    /* 0057c6e9: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0057c6ec: cmp dword ptr [edx + 0x1d0], 0 */ {  u32 a = R32((u32)(r_edx+0x1d0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057c6f3: je 0x57c734 */ if (fZ) goto L_0057c734;
L_0057c6f5:; BB(0x0057c6f5);
    /* 0057c6f5: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0057c6f8: mov ecx, dword ptr [eax + 0x1d0] */ r_ecx = R32((u32)(r_eax+0x1d0u));
    /* 0057c6fe: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0057c701: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0057c704: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0057c707: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057c70b: je 0x57c720 */ if (fZ) goto L_0057c720;
L_0057c70d:; BB(0x0057c70d);
    /* 0057c70d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0057c70f: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0057c712: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0057c714: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0057c717: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0057c719: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57c71bu); call_ind(t); }
    /* 0057c71b: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0057c71e: jmp 0x57c727 */ goto L_0057c727;
L_0057c720:; BB(0x0057c720);
    /* 0057c720: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_0057c727:; BB(0x0057c727);
    /* 0057c727: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0057c72a: mov dword ptr [ecx + 0x1d0], 0 */ W32((u32)(r_ecx+0x1d0u), 0x0u);
L_0057c734:; BB(0x0057c734);
    /* 0057c734: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0057c737: cmp dword ptr [edx + 0x1d4], 0 */ {  u32 a = R32((u32)(r_edx+0x1d4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057c73e: je 0x57c77f */ if (fZ) goto L_0057c77f;
L_0057c740:; BB(0x0057c740);
    /* 0057c740: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0057c743: mov ecx, dword ptr [eax + 0x1d4] */ r_ecx = R32((u32)(r_eax+0x1d4u));
    /* 0057c749: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0057c74c: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057c74f: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0057c752: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057c756: je 0x57c76b */ if (fZ) goto L_0057c76b;
L_0057c758:; BB(0x0057c758);
    /* 0057c758: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0057c75a: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0057c75d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0057c75f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0057c762: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0057c764: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57c766u); call_ind(t); }
    /* 0057c766: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0057c769: jmp 0x57c772 */ goto L_0057c772;
L_0057c76b:; BB(0x0057c76b);
    /* 0057c76b: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_0057c772:; BB(0x0057c772);
    /* 0057c772: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0057c775: mov dword ptr [ecx + 0x1d4], 0 */ W32((u32)(r_ecx+0x1d4u), 0x0u);
L_0057c77f:; BB(0x0057c77f);
    /* 0057c77f: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0057c782: cmp dword ptr [edx + 0x1d8], 0 */ {  u32 a = R32((u32)(r_edx+0x1d8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057c789: je 0x57c7ca */ if (fZ) goto L_0057c7ca;
L_0057c78b:; BB(0x0057c78b);
    /* 0057c78b: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0057c78e: mov ecx, dword ptr [eax + 0x1d8] */ r_ecx = R32((u32)(r_eax+0x1d8u));
    /* 0057c794: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 0057c797: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0057c79a: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 0057c79d: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057c7a1: je 0x57c7b6 */ if (fZ) goto L_0057c7b6;
L_0057c7a3:; BB(0x0057c7a3);
    /* 0057c7a3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0057c7a5: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0057c7a8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0057c7aa: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0057c7ad: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0057c7af: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57c7b1u); call_ind(t); }
    /* 0057c7b1: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0057c7b4: jmp 0x57c7bd */ goto L_0057c7bd;
L_0057c7b6:; BB(0x0057c7b6);
    /* 0057c7b6: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_0057c7bd:; BB(0x0057c7bd);
    /* 0057c7bd: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0057c7c0: mov dword ptr [ecx + 0x1d8], 0 */ W32((u32)(r_ecx+0x1d8u), 0x0u);
L_0057c7ca:; BB(0x0057c7ca);
    /* 0057c7ca: mov edx, dword ptr [0x793578] */ r_edx = R32((u32)(0x793578u));
    /* 0057c7d0: mov dword ptr [edx + 0x19e0], 0 */ W32((u32)(r_edx+0x19e0u), 0x0u);
    /* 0057c7da: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0057c7e1: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0057c7e4: call 0x5f79f0 */ r_esp -= 4; W32(r_esp, 0x57c7e9u); f_005f79f0();
    /* 0057c7e9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0057c7ec: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0057c7f3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0057c7f4: mov esp, ebp */ r_esp = r_ebp;
    /* 0057c7f6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057c7f7: ret  */ FN_RET(0x0057c640); r_esp += 4; return;
}

void f_0057d520(void) /* CasinoTutorialInfoBox::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0057d520);
    /* 0057d520: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057d521: mov ebp, esp */ r_ebp = r_esp;
    /* 0057d523: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0057d526: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0057d529: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0057d52c: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0057d52f: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0057d532: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057d536: je 0x57d53a */ if (fZ) goto L_0057d53a;
L_0057d538:; BB(0x0057d538);
    /* 0057d538: jmp 0x57d55a */ goto L_0057d55a;
L_0057d53a:; BB(0x0057d53a);
    /* 0057d53a: mov edx, dword ptr [0x793578] */ r_edx = R32((u32)(0x793578u));
    /* 0057d540: mov byte ptr [edx + 0x1bd], 0 */ W8((u32)(r_edx+0x1bdu), 0x0u);
    /* 0057d547: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057d54a: call 0x57d3a0 */ r_esp -= 4; W32(r_esp, 0x57d54fu); f_0057d3a0();
    /* 0057d54f: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 0057d555: call 0x57b1b0 */ r_esp -= 4; W32(r_esp, 0x57d55au); f_0057b1b0();
L_0057d55a:; BB(0x0057d55a);
    /* 0057d55a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0057d55d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057d55e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057d561: call 0x5f7e80 */ r_esp -= 4; W32(r_esp, 0x57d566u); f_005f7e80();
    /* 0057d566: mov esp, ebp */ r_esp = r_ebp;
    /* 0057d568: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057d569: ret 4 */ FN_RET(0x0057d520); r_esp += 8; return;
}

