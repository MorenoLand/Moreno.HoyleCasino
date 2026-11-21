#include "protos.h"

void f_005c55a0(void) /* sub_5C55A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c55a0);
    /* 005c55a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c55a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005c55a3: sub esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c55a6: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 005c55a9: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c55ad: je 0x5c55b7 */ if (fZ) goto L_005c55b7;
L_005c55af:; BB(0x005c55af);
    /* 005c55af: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005c55b2: cmp eax, dword ptr [ebp + 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x14u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c55b5: je 0x5c55bd */ if (fZ) goto L_005c55bd;
L_005c55b7:; BB(0x005c55b7);
    /* 005c55b7: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5c55bdu); call_ind(t); }
L_005c55bd:; BB(0x005c55bd);
    /* 005c55bd: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005c55c0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c55c2: cmp ecx, dword ptr [ebp + 0x18] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x18u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c55c5: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 005c55c8: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 005c55cb: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 005c55cd: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 005c55cf: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c55d2: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005c55d5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c55d7: je 0x5c5653 */ if (fZ) goto L_005c5653;
L_005c55d9:; BB(0x005c55d9);
    /* 005c55d9: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005c55dc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c55dd: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005c55e0: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005c55e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c55e4: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 005c55e7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c55e8: call 0x5c6270 */ r_esp -= 4; W32(r_esp, 0x5c55edu); f_005c6270();
    /* 005c55ed: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c55f0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005c55f3: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005c55f6: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005c55f9: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 005c55fc: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005c55ff: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 005c5602: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c5605: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 005c5608: mov cl, byte ptr [ebp - 0x34] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffccu))) & 0xffu);
    /* 005c560b: mov byte ptr [ebp - 0x33], cl */ W8((u32)(r_ebp+0xffffffcdu), (u8)r_ecx);
    /* 005c560e: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005c5611: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 005c5614: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 005c5617: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005c561a: jmp 0x5c5625 */ goto L_005c5625;
L_005c561c:; BB(0x005c561c);
    /* 005c561c: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005c561f: add ecx, 0x34 */ {  u32 a = r_ecx; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c5622: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
L_005c5625:; BB(0x005c5625);
    /* 005c5625: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005c5628: cmp edx, dword ptr [ebp - 0x3c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffc4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c562b: je 0x5c564a */ if (fZ) goto L_005c564a;
L_005c562d:; BB(0x005c562d);
    /* 005c562d: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005c5630: call 0x5c3980 */ r_esp -= 4; W32(r_esp, 0x5c5635u); f_005c3980();
    /* 005c5635: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c5637: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005c563a: je 0x5c5648 */ if (fZ) goto L_005c5648;
L_005c563c:; BB(0x005c563c);
    /* 005c563c: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005c563f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c5640: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5c5645u); f_00686cae();
    /* 005c5645: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005c5648:; BB(0x005c5648);
    /* 005c5648: jmp 0x5c561c */ goto L_005c561c;
L_005c564a:; BB(0x005c564a);
    /* 005c564a: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005c564d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c5650: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
L_005c5653:; BB(0x005c5653);
    /* 005c5653: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005c5656: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005c5659: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 005c565b: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005c565e: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 005c5661: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c5664: mov esp, ebp */ r_esp = r_ebp;
    /* 005c5666: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c5667: ret 0x14 */ FN_RET(0x005c55a0); r_esp += 24; return;
}

void f_005c5670(void) /* sub_5C5670 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c5670);
    /* 005c5670: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c5671: mov ebp, esp */ r_ebp = r_esp;
    /* 005c5673: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c5675: push 0x6a8718 */ { u32 v = 0x6a8718u; r_esp -= 4; W32(r_esp, v); }
    /* 005c567a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005c5680: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c5681: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c5682: sub esp, 0x258 */ {  u32 a = r_esp; u32 b = 0x258u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c5688: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c5689: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005c568a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005c568b: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005c5690: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c5692: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c5693: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005c5696: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005c569c: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005c569f: mov dword ptr [ebp - 0x240], ecx */ W32((u32)(r_ebp+0xfffffdc0u), r_ecx);
    /* 005c56a5: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 005c56a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c56a9: lea ecx, [ebp - 0x44] */ r_ecx = (u32)(r_ebp+0xffffffbcu);
    /* 005c56ac: call 0x5c38f0 */ r_esp -= 4; W32(r_esp, 0x5c56b1u); f_005c38f0();
    /* 005c56b1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c56b8: mov ecx, dword ptr [ebp - 0x240] */ r_ecx = R32((u32)(r_ebp+0xfffffdc0u));
    /* 005c56be: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c56c2: jne 0x5c56d0 */ if (!fZ) goto L_005c56d0;
L_005c56c4:; BB(0x005c56c4);
    /* 005c56c4: mov dword ptr [ebp - 0x244], 0 */ W32((u32)(r_ebp+0xfffffdbcu), 0x0u);
    /* 005c56ce: jmp 0x5c56f2 */ goto L_005c56f2;
L_005c56d0:; BB(0x005c56d0);
    /* 005c56d0: mov edx, dword ptr [ebp - 0x240] */ r_edx = R32((u32)(r_ebp+0xfffffdc0u));
    /* 005c56d6: mov eax, dword ptr [ebp - 0x240] */ r_eax = R32((u32)(r_ebp+0xfffffdc0u));
    /* 005c56dc: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 005c56df: sub ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005c56e2: mov eax, ecx */ r_eax = r_ecx;
    /* 005c56e4: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005c56e5: mov ecx, 0x34 */ r_ecx = 0x34u;
    /* 005c56ea: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005c56ea, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005c56ea, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005c56ec: mov dword ptr [ebp - 0x244], eax */ W32((u32)(r_ebp+0xfffffdbcu), r_eax);
L_005c56f2:; BB(0x005c56f2);
    /* 005c56f2: mov edx, dword ptr [ebp - 0x244] */ r_edx = R32((u32)(r_ebp+0xfffffdbcu));
    /* 005c56f8: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 005c56fb: cmp dword ptr [ebp + 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c56ff: jne 0x5c5706 */ if (!fZ) goto L_005c5706;
L_005c5701:; BB(0x005c5701);
    /* 005c5701: jmp 0x5c5f9e */ goto L_005c5f9e;
L_005c5706:; BB(0x005c5706);
    /* 005c5706: mov dword ptr [ebp - 0x58], 0x4ec4ec4 */ W32((u32)(r_ebp+0xffffffa8u), 0x4ec4ec4u);
    /* 005c570d: cmp dword ptr [ebp - 0x58], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005c5711: jbe 0x5c571e */ if ((fC||fZ)) goto L_005c571e;
L_005c5713:; BB(0x005c5713);
    /* 005c5713: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 005c5716: mov dword ptr [ebp - 0x248], eax */ W32((u32)(r_ebp+0xfffffdb8u), r_eax);
    /* 005c571c: jmp 0x5c5728 */ goto L_005c5728;
L_005c571e:; BB(0x005c571e);
    /* 005c571e: mov dword ptr [ebp - 0x248], 1 */ W32((u32)(r_ebp+0xfffffdb8u), 0x1u);
L_005c5728:; BB(0x005c5728);
    /* 005c5728: mov ecx, dword ptr [ebp - 0x240] */ r_ecx = R32((u32)(r_ebp+0xfffffdc0u));
    /* 005c572e: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c5732: jne 0x5c5740 */ if (!fZ) goto L_005c5740;
L_005c5734:; BB(0x005c5734);
    /* 005c5734: mov dword ptr [ebp - 0x24c], 0 */ W32((u32)(r_ebp+0xfffffdb4u), 0x0u);
    /* 005c573e: jmp 0x5c5762 */ goto L_005c5762;
L_005c5740:; BB(0x005c5740);
    /* 005c5740: mov edx, dword ptr [ebp - 0x240] */ r_edx = R32((u32)(r_ebp+0xfffffdc0u));
    /* 005c5746: mov eax, dword ptr [ebp - 0x240] */ r_eax = R32((u32)(r_ebp+0xfffffdc0u));
    /* 005c574c: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005c574f: sub ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005c5752: mov eax, ecx */ r_eax = r_ecx;
    /* 005c5754: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005c5755: mov ecx, 0x34 */ r_ecx = 0x34u;
    /* 005c575a: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005c575a, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005c575a, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005c575c: mov dword ptr [ebp - 0x24c], eax */ W32((u32)(r_ebp+0xfffffdb4u), r_eax);
L_005c5762:; BB(0x005c5762);
    /* 005c5762: mov edx, dword ptr [ebp - 0x248] */ r_edx = R32((u32)(r_ebp+0xfffffdb8u));
    /* 005c5768: sub edx, dword ptr [ebp - 0x24c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffdb4u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005c576e: cmp edx, dword ptr [ebp + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005c5771: jae 0x5c577d */ if (!fC) goto L_005c577d;
L_005c5773:; BB(0x005c5773);
    /* 005c5773: call 0x5c60c0 */ r_esp -= 4; W32(r_esp, 0x5c5778u); f_005c60c0();
    /* 005c5778: jmp 0x5c5f9e */ goto L_005c5f9e;
L_005c577d:; BB(0x005c577d);
    /* 005c577d: mov eax, dword ptr [ebp - 0x240] */ r_eax = R32((u32)(r_ebp+0xfffffdc0u));
    /* 005c5783: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c5787: jne 0x5c5795 */ if (!fZ) goto L_005c5795;
L_005c5789:; BB(0x005c5789);
    /* 005c5789: mov dword ptr [ebp - 0x250], 0 */ W32((u32)(r_ebp+0xfffffdb0u), 0x0u);
    /* 005c5793: jmp 0x5c57b5 */ goto L_005c57b5;
L_005c5795:; BB(0x005c5795);
    /* 005c5795: mov ecx, dword ptr [ebp - 0x240] */ r_ecx = R32((u32)(r_ebp+0xfffffdc0u));
    /* 005c579b: mov edx, dword ptr [ebp - 0x240] */ r_edx = R32((u32)(r_ebp+0xfffffdc0u));
    /* 005c57a1: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 005c57a4: sub eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005c57a7: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005c57a8: mov ecx, 0x34 */ r_ecx = 0x34u;
    /* 005c57ad: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005c57ad, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005c57ad, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005c57af: mov dword ptr [ebp - 0x250], eax */ W32((u32)(r_ebp+0xfffffdb0u), r_eax);
L_005c57b5:; BB(0x005c57b5);
    /* 005c57b5: mov edx, dword ptr [ebp - 0x250] */ r_edx = R32((u32)(r_ebp+0xfffffdb0u));
    /* 005c57bb: add edx, dword ptr [ebp + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c57be: cmp dword ptr [ebp - 0x48], edx */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005c57c1: jae 0x5c5c65 */ if (!fC) goto L_005c5c65;
L_005c57c7:; BB(0x005c57c7);
    /* 005c57c7: mov dword ptr [ebp - 0xa0], 0x4ec4ec4 */ W32((u32)(r_ebp+0xffffff60u), 0x4ec4ec4u);
    /* 005c57d1: cmp dword ptr [ebp - 0xa0], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff60u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005c57d8: jbe 0x5c57e8 */ if ((fC||fZ)) goto L_005c57e8;
L_005c57da:; BB(0x005c57da);
    /* 005c57da: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 005c57e0: mov dword ptr [ebp - 0x254], eax */ W32((u32)(r_ebp+0xfffffdacu), r_eax);
    /* 005c57e6: jmp 0x5c57f2 */ goto L_005c57f2;
L_005c57e8:; BB(0x005c57e8);
    /* 005c57e8: mov dword ptr [ebp - 0x254], 1 */ W32((u32)(r_ebp+0xfffffdacu), 0x1u);
L_005c57f2:; BB(0x005c57f2);
    /* 005c57f2: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005c57f5: shr ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 005c57f7: mov edx, dword ptr [ebp - 0x254] */ r_edx = R32((u32)(r_ebp+0xfffffdacu));
    /* 005c57fd: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005c57ff: cmp edx, dword ptr [ebp - 0x48] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffb8u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005c5802: jae 0x5c5810 */ if (!fC) goto L_005c5810;
L_005c5804:; BB(0x005c5804);
    /* 005c5804: mov dword ptr [ebp - 0x258], 0 */ W32((u32)(r_ebp+0xfffffda8u), 0x0u);
    /* 005c580e: jmp 0x5c581e */ goto L_005c581e;
L_005c5810:; BB(0x005c5810);
    /* 005c5810: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 005c5813: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 005c5815: add eax, dword ptr [ebp - 0x48] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffb8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c5818: mov dword ptr [ebp - 0x258], eax */ W32((u32)(r_ebp+0xfffffda8u), r_eax);
L_005c581e:; BB(0x005c581e);
    /* 005c581e: mov ecx, dword ptr [ebp - 0x258] */ r_ecx = R32((u32)(r_ebp+0xfffffda8u));
    /* 005c5824: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 005c5827: mov edx, dword ptr [ebp - 0x240] */ r_edx = R32((u32)(r_ebp+0xfffffdc0u));
    /* 005c582d: cmp dword ptr [edx + 4], 0 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c5831: jne 0x5c583f */ if (!fZ) goto L_005c583f;
L_005c5833:; BB(0x005c5833);
    /* 005c5833: mov dword ptr [ebp - 0x25c], 0 */ W32((u32)(r_ebp+0xfffffda4u), 0x0u);
    /* 005c583d: jmp 0x5c585f */ goto L_005c585f;
L_005c583f:; BB(0x005c583f);
    /* 005c583f: mov eax, dword ptr [ebp - 0x240] */ r_eax = R32((u32)(r_ebp+0xfffffdc0u));
    /* 005c5845: mov ecx, dword ptr [ebp - 0x240] */ r_ecx = R32((u32)(r_ebp+0xfffffdc0u));
    /* 005c584b: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 005c584e: sub eax, dword ptr [ecx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005c5851: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005c5852: mov ecx, 0x34 */ r_ecx = 0x34u;
    /* 005c5857: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005c5857, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005c5857, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005c5859: mov dword ptr [ebp - 0x25c], eax */ W32((u32)(r_ebp+0xfffffda4u), r_eax);
L_005c585f:; BB(0x005c585f);
    /* 005c585f: mov edx, dword ptr [ebp - 0x25c] */ r_edx = R32((u32)(r_ebp+0xfffffda4u));
    /* 005c5865: add edx, dword ptr [ebp + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c5868: cmp dword ptr [ebp - 0x48], edx */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005c586b: jae 0x5c58b1 */ if (!fC) goto L_005c58b1;
L_005c586d:; BB(0x005c586d);
    /* 005c586d: mov eax, dword ptr [ebp - 0x240] */ r_eax = R32((u32)(r_ebp+0xfffffdc0u));
    /* 005c5873: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c5877: jne 0x5c5885 */ if (!fZ) goto L_005c5885;
L_005c5879:; BB(0x005c5879);
    /* 005c5879: mov dword ptr [ebp - 0x260], 0 */ W32((u32)(r_ebp+0xfffffda0u), 0x0u);
    /* 005c5883: jmp 0x5c58a5 */ goto L_005c58a5;
L_005c5885:; BB(0x005c5885);
    /* 005c5885: mov ecx, dword ptr [ebp - 0x240] */ r_ecx = R32((u32)(r_ebp+0xfffffdc0u));
    /* 005c588b: mov edx, dword ptr [ebp - 0x240] */ r_edx = R32((u32)(r_ebp+0xfffffdc0u));
    /* 005c5891: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 005c5894: sub eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005c5897: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005c5898: mov ecx, 0x34 */ r_ecx = 0x34u;
    /* 005c589d: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005c589d, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005c589d, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005c589f: mov dword ptr [ebp - 0x260], eax */ W32((u32)(r_ebp+0xfffffda0u), r_eax);
L_005c58a5:; BB(0x005c58a5);
    /* 005c58a5: mov edx, dword ptr [ebp - 0x260] */ r_edx = R32((u32)(r_ebp+0xfffffda0u));
    /* 005c58ab: add edx, dword ptr [ebp + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c58ae: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
L_005c58b1:; BB(0x005c58b1);
    /* 005c58b1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c58b3: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 005c58b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c58b7: call 0x5c6370 */ r_esp -= 4; W32(r_esp, 0x5c58bcu); f_005c6370();
    /* 005c58bc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c58bf: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 005c58c2: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c58c5: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 005c58c8: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005c58cc: mov edx, dword ptr [ebp - 0x240] */ r_edx = R32((u32)(r_ebp+0xfffffdc0u));
    /* 005c58d2: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005c58d5: mov dword ptr [ebp - 0xc8], eax */ W32((u32)(r_ebp+0xffffff38u), r_eax);
    /* 005c58db: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c58de: mov dword ptr [ebp - 0xc4], ecx */ W32((u32)(r_ebp+0xffffff3cu), r_ecx);
    /* 005c58e4: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005c58e7: mov dword ptr [ebp - 0xc0], edx */ W32((u32)(r_ebp+0xffffff40u), r_edx);
    /* 005c58ed: mov eax, dword ptr [ebp - 0xc8] */ r_eax = R32((u32)(r_ebp+0xffffff38u));
    /* 005c58f3: mov dword ptr [ebp - 0xbc], eax */ W32((u32)(r_ebp+0xffffff44u), r_eax);
    /* 005c58f9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005c58fb: mov byte ptr [ebp - 0xa1], cl */ W8((u32)(r_ebp+0xffffff5fu), (u8)r_ecx);
    /* 005c5901: mov dl, byte ptr [ebp - 0xa3] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff5du))) & 0xffu);
    /* 005c5907: mov byte ptr [ebp - 0xa2], dl */ W8((u32)(r_ebp+0xffffff5eu), (u8)r_edx);
    /* 005c590d: mov eax, dword ptr [ebp - 0xc0] */ r_eax = R32((u32)(r_ebp+0xffffff40u));
    /* 005c5913: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 005c5919: mov ecx, dword ptr [ebp - 0xbc] */ r_ecx = R32((u32)(r_ebp+0xffffff44u));
    /* 005c591f: mov dword ptr [ebp - 0xb0], ecx */ W32((u32)(r_ebp+0xffffff50u), r_ecx);
    /* 005c5925: mov dl, byte ptr [ebp - 0xa1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff5fu))) & 0xffu);
    /* 005c592b: mov byte ptr [ebp - 0xb5], dl */ W8((u32)(r_ebp+0xffffff4bu), (u8)r_edx);
    /* 005c5931: mov eax, dword ptr [ebp - 0xc4] */ r_eax = R32((u32)(r_ebp+0xffffff3cu));
    /* 005c5937: mov dword ptr [ebp - 0xb4], eax */ W32((u32)(r_ebp+0xffffff4cu), r_eax);
    /* 005c593d: mov ecx, dword ptr [ebp - 0x240] */ r_ecx = R32((u32)(r_ebp+0xfffffdc0u));
    /* 005c5943: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c5944: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 005c594a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c594b: mov eax, dword ptr [ebp - 0xa8] */ r_eax = R32((u32)(r_ebp+0xffffff58u));
    /* 005c5951: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c5952: mov ecx, dword ptr [ebp - 0xb0] */ r_ecx = R32((u32)(r_ebp+0xffffff50u));
    /* 005c5958: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c5959: call 0x5c6c00 */ r_esp -= 4; W32(r_esp, 0x5c595eu); f_005c6c00();
    /* 005c595e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c5961: mov dword ptr [ebp - 0x264], eax */ W32((u32)(r_ebp+0xfffffd9cu), r_eax);
    /* 005c5967: mov edx, dword ptr [ebp - 0x264] */ r_edx = R32((u32)(r_ebp+0xfffffd9cu));
    /* 005c596d: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 005c5970: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005c5973: mov dword ptr [ebp - 0xd0], eax */ W32((u32)(r_ebp+0xffffff30u), r_eax);
    /* 005c5979: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005c597b: mov byte ptr [ebp - 0xc9], cl */ W8((u32)(r_ebp+0xffffff37u), (u8)r_ecx);
    /* 005c5981: mov dl, byte ptr [ebp - 0xcb] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff35u))) & 0xffu);
    /* 005c5987: mov byte ptr [ebp - 0xca], dl */ W8((u32)(r_ebp+0xffffff36u), (u8)r_edx);
    /* 005c598d: mov al, byte ptr [ebp - 0xc9] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff37u))) & 0xffu);
    /* 005c5993: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c5994: mov cl, byte ptr [ebp - 0xca] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff36u))) & 0xffu);
    /* 005c599a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c599b: mov edx, dword ptr [ebp - 0x240] */ r_edx = R32((u32)(r_ebp+0xfffffdc0u));
    /* 005c59a1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c59a2: lea eax, [ebp - 0x44] */ r_eax = (u32)(r_ebp+0xffffffbcu);
    /* 005c59a5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c59a6: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005c59a9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c59aa: mov edx, dword ptr [ebp - 0xd0] */ r_edx = R32((u32)(r_ebp+0xffffff30u));
    /* 005c59b0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c59b1: call 0x5c6b00 */ r_esp -= 4; W32(r_esp, 0x5c59b6u); f_005c6b00();
    /* 005c59b6: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c59b9: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005c59bc: imul eax, eax, 0x34 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x34u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c59bf: add eax, dword ptr [ebp - 0x4c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffb4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c59c2: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 005c59c5: mov ecx, dword ptr [ebp - 0x240] */ r_ecx = R32((u32)(r_ebp+0xfffffdc0u));
    /* 005c59cb: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005c59ce: mov dword ptr [ebp - 0xf8], edx */ W32((u32)(r_ebp+0xffffff08u), r_edx);
    /* 005c59d4: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005c59d7: mov dword ptr [ebp - 0xf4], eax */ W32((u32)(r_ebp+0xffffff0cu), r_eax);
    /* 005c59dd: mov ecx, dword ptr [ebp - 0xf8] */ r_ecx = R32((u32)(r_ebp+0xffffff08u));
    /* 005c59e3: mov dword ptr [ebp - 0xf0], ecx */ W32((u32)(r_ebp+0xffffff10u), r_ecx);
    /* 005c59e9: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005c59ec: mov dword ptr [ebp - 0xec], edx */ W32((u32)(r_ebp+0xffffff14u), r_edx);
    /* 005c59f2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c59f4: mov byte ptr [ebp - 0xd1], al */ W8((u32)(r_ebp+0xffffff2fu), (u8)r_eax);
    /* 005c59fa: mov cl, byte ptr [ebp - 0xd3] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff2du))) & 0xffu);
    /* 005c5a00: mov byte ptr [ebp - 0xd2], cl */ W8((u32)(r_ebp+0xffffff2eu), (u8)r_ecx);
    /* 005c5a06: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 005c5a0c: mov dword ptr [ebp - 0xd8], edx */ W32((u32)(r_ebp+0xffffff28u), r_edx);
    /* 005c5a12: mov eax, dword ptr [ebp - 0xec] */ r_eax = R32((u32)(r_ebp+0xffffff14u));
    /* 005c5a18: mov dword ptr [ebp - 0xe0], eax */ W32((u32)(r_ebp+0xffffff20u), r_eax);
    /* 005c5a1e: mov cl, byte ptr [ebp - 0xd1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff2fu))) & 0xffu);
    /* 005c5a24: mov byte ptr [ebp - 0xe5], cl */ W8((u32)(r_ebp+0xffffff1bu), (u8)r_ecx);
    /* 005c5a2a: mov edx, dword ptr [ebp - 0xf4] */ r_edx = R32((u32)(r_ebp+0xffffff0cu));
    /* 005c5a30: mov dword ptr [ebp - 0xe4], edx */ W32((u32)(r_ebp+0xffffff1cu), r_edx);
    /* 005c5a36: mov eax, dword ptr [ebp - 0x240] */ r_eax = R32((u32)(r_ebp+0xfffffdc0u));
    /* 005c5a3c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c5a3d: mov ecx, dword ptr [ebp - 0xe4] */ r_ecx = R32((u32)(r_ebp+0xffffff1cu));
    /* 005c5a43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c5a44: mov edx, dword ptr [ebp - 0xd8] */ r_edx = R32((u32)(r_ebp+0xffffff28u));
    /* 005c5a4a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c5a4b: mov eax, dword ptr [ebp - 0xe0] */ r_eax = R32((u32)(r_ebp+0xffffff20u));
    /* 005c5a51: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c5a52: call 0x5c6c00 */ r_esp -= 4; W32(r_esp, 0x5c5a57u); f_005c6c00();
    /* 005c5a57: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c5a5a: jmp 0x5c5af9 */ goto L_005c5af9;
L_005c5af9:; BB(0x005c5af9);
    /* 005c5af9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c5b00: mov edx, dword ptr [ebp - 0x240] */ r_edx = R32((u32)(r_ebp+0xfffffdc0u));
    /* 005c5b06: cmp dword ptr [edx + 4], 0 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c5b0a: jne 0x5c5b18 */ if (!fZ) goto L_005c5b18;
L_005c5b0c:; BB(0x005c5b0c);
    /* 005c5b0c: mov dword ptr [ebp - 0x268], 0 */ W32((u32)(r_ebp+0xfffffd98u), 0x0u);
    /* 005c5b16: jmp 0x5c5b38 */ goto L_005c5b38;
L_005c5b18:; BB(0x005c5b18);
    /* 005c5b18: mov eax, dword ptr [ebp - 0x240] */ r_eax = R32((u32)(r_ebp+0xfffffdc0u));
    /* 005c5b1e: mov ecx, dword ptr [ebp - 0x240] */ r_ecx = R32((u32)(r_ebp+0xfffffdc0u));
    /* 005c5b24: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 005c5b27: sub eax, dword ptr [ecx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005c5b2a: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005c5b2b: mov ecx, 0x34 */ r_ecx = 0x34u;
    /* 005c5b30: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005c5b30, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005c5b30, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005c5b32: mov dword ptr [ebp - 0x268], eax */ W32((u32)(r_ebp+0xfffffd98u), r_eax);
L_005c5b38:; BB(0x005c5b38);
    /* 005c5b38: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005c5b3b: add edx, dword ptr [ebp - 0x268] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffd98u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c5b41: mov dword ptr [ebp + 0x10], edx */ W32((u32)(r_ebp+0x10u), r_edx);
    /* 005c5b44: mov eax, dword ptr [ebp - 0x240] */ r_eax = R32((u32)(r_ebp+0xfffffdc0u));
    /* 005c5b4a: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c5b4e: je 0x5c5c30 */ if (fZ) goto L_005c5c30;
L_005c5b54:; BB(0x005c5b54);
    /* 005c5b54: mov ecx, dword ptr [ebp - 0x240] */ r_ecx = R32((u32)(r_ebp+0xfffffdc0u));
    /* 005c5b5a: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005c5b5d: mov dword ptr [ebp - 0x128], edx */ W32((u32)(r_ebp+0xfffffed8u), r_edx);
    /* 005c5b63: mov eax, dword ptr [ebp - 0x240] */ r_eax = R32((u32)(r_ebp+0xfffffdc0u));
    /* 005c5b69: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005c5b6c: mov dword ptr [ebp - 0x124], ecx */ W32((u32)(r_ebp+0xfffffedcu), r_ecx);
    /* 005c5b72: mov edx, dword ptr [ebp - 0x128] */ r_edx = R32((u32)(r_ebp+0xfffffed8u));
    /* 005c5b78: mov dword ptr [ebp - 0x120], edx */ W32((u32)(r_ebp+0xfffffee0u), r_edx);
    /* 005c5b7e: mov eax, dword ptr [ebp - 0x124] */ r_eax = R32((u32)(r_ebp+0xfffffedcu));
    /* 005c5b84: mov dword ptr [ebp - 0x11c], eax */ W32((u32)(r_ebp+0xfffffee4u), r_eax);
    /* 005c5b8a: mov cl, byte ptr [ebp - 0x10e] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffef2u))) & 0xffu);
    /* 005c5b90: mov byte ptr [ebp - 0x10d], cl */ W8((u32)(r_ebp+0xfffffef3u), (u8)r_ecx);
    /* 005c5b96: mov edx, dword ptr [ebp - 0x120] */ r_edx = R32((u32)(r_ebp+0xfffffee0u));
    /* 005c5b9c: mov dword ptr [ebp - 0x118], edx */ W32((u32)(r_ebp+0xfffffee8u), r_edx);
    /* 005c5ba2: mov eax, dword ptr [ebp - 0x11c] */ r_eax = R32((u32)(r_ebp+0xfffffee4u));
    /* 005c5ba8: mov dword ptr [ebp - 0x114], eax */ W32((u32)(r_ebp+0xfffffeecu), r_eax);
    /* 005c5bae: jmp 0x5c5bbf */ goto L_005c5bbf;
L_005c5bb0:; BB(0x005c5bb0);
    /* 005c5bb0: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 005c5bb6: add ecx, 0x34 */ {  u32 a = r_ecx; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c5bb9: mov dword ptr [ebp - 0x114], ecx */ W32((u32)(r_ebp+0xfffffeecu), r_ecx);
L_005c5bbf:; BB(0x005c5bbf);
    /* 005c5bbf: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 005c5bc5: cmp edx, dword ptr [ebp - 0x118] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffee8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c5bcb: je 0x5c5bf0 */ if (fZ) goto L_005c5bf0;
L_005c5bcd:; BB(0x005c5bcd);
    /* 005c5bcd: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 005c5bd3: call 0x5c3980 */ r_esp -= 4; W32(r_esp, 0x5c5bd8u); f_005c3980();
    /* 005c5bd8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c5bda: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005c5bdd: je 0x5c5bee */ if (fZ) goto L_005c5bee;
L_005c5bdf:; BB(0x005c5bdf);
    /* 005c5bdf: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 005c5be5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c5be6: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5c5bebu); f_00686cae();
    /* 005c5beb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005c5bee:; BB(0x005c5bee);
    /* 005c5bee: jmp 0x5c5bb0 */ goto L_005c5bb0;
L_005c5bf0:; BB(0x005c5bf0);
    /* 005c5bf0: mov edx, dword ptr [ebp - 0x240] */ r_edx = R32((u32)(r_ebp+0xfffffdc0u));
    /* 005c5bf6: mov eax, dword ptr [ebp - 0x240] */ r_eax = R32((u32)(r_ebp+0xfffffdc0u));
    /* 005c5bfc: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 005c5bff: sub ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005c5c02: mov eax, ecx */ r_eax = r_ecx;
    /* 005c5c04: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005c5c05: mov ecx, 0x34 */ r_ecx = 0x34u;
    /* 005c5c0a: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005c5c0a, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005c5c0a, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005c5c0c: mov dword ptr [ebp - 0x130], eax */ W32((u32)(r_ebp+0xfffffed0u), r_eax);
    /* 005c5c12: mov edx, dword ptr [ebp - 0x240] */ r_edx = R32((u32)(r_ebp+0xfffffdc0u));
    /* 005c5c18: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005c5c1b: mov dword ptr [ebp - 0x12c], eax */ W32((u32)(r_ebp+0xfffffed4u), r_eax);
    /* 005c5c21: mov ecx, dword ptr [ebp - 0x12c] */ r_ecx = R32((u32)(r_ebp+0xfffffed4u));
    /* 005c5c27: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c5c28: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5c5c2du); f_00686cae();
    /* 005c5c2d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005c5c30:; BB(0x005c5c30);
    /* 005c5c30: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005c5c33: imul edx, edx, 0x34 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x34u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c5c36: add edx, dword ptr [ebp - 0x50] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffb0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c5c39: mov eax, dword ptr [ebp - 0x240] */ r_eax = R32((u32)(r_ebp+0xfffffdc0u));
    /* 005c5c3f: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 005c5c42: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005c5c45: imul ecx, ecx, 0x34 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x34u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c5c48: add ecx, dword ptr [ebp - 0x50] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffb0u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c5c4b: mov edx, dword ptr [ebp - 0x240] */ r_edx = R32((u32)(r_ebp+0xfffffdc0u));
    /* 005c5c51: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 005c5c54: mov eax, dword ptr [ebp - 0x240] */ r_eax = R32((u32)(r_ebp+0xfffffdc0u));
    /* 005c5c5a: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c5c5d: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 005c5c60: jmp 0x5c5f9e */ goto L_005c5f9e;
L_005c5c65:; BB(0x005c5c65);
    /* 005c5c65: mov edx, dword ptr [ebp - 0x240] */ r_edx = R32((u32)(r_ebp+0xfffffdc0u));
    /* 005c5c6b: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005c5c6e: sub eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005c5c71: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005c5c72: mov ecx, 0x34 */ r_ecx = 0x34u;
    /* 005c5c77: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005c5c77, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005c5c77, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005c5c79: cmp eax, dword ptr [ebp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005c5c7c: jae 0x5c5e73 */ if (!fC) goto L_005c5e73;
L_005c5c82:; BB(0x005c5c82);
    /* 005c5c82: mov edx, dword ptr [ebp - 0x240] */ r_edx = R32((u32)(r_ebp+0xfffffdc0u));
    /* 005c5c88: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005c5c8b: mov dword ptr [ebp - 0x168], eax */ W32((u32)(r_ebp+0xfffffe98u), r_eax);
    /* 005c5c91: mov ecx, dword ptr [ebp - 0x240] */ r_ecx = R32((u32)(r_ebp+0xfffffdc0u));
    /* 005c5c97: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c5c98: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005c5c9b: imul edx, edx, 0x34 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x34u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c5c9e: add edx, dword ptr [ebp + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c5ca1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c5ca2: mov eax, dword ptr [ebp - 0x168] */ r_eax = R32((u32)(r_ebp+0xfffffe98u));
    /* 005c5ca8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c5ca9: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005c5cac: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c5cad: call 0x5c69f0 */ r_esp -= 4; W32(r_esp, 0x5c5cb2u); f_005c69f0();
    /* 005c5cb2: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c5cb5: mov byte ptr [ebp - 4], 3 */ W8((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 005c5cb9: mov edx, dword ptr [ebp - 0x240] */ r_edx = R32((u32)(r_ebp+0xfffffdc0u));
    /* 005c5cbf: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005c5cc2: sub eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005c5cc5: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005c5cc6: mov ecx, 0x34 */ r_ecx = 0x34u;
    /* 005c5ccb: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005c5ccb, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005c5ccb, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005c5ccd: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005c5cd0: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005c5cd2: mov dword ptr [ebp - 0x178], edx */ W32((u32)(r_ebp+0xfffffe88u), r_edx);
    /* 005c5cd8: mov eax, dword ptr [ebp - 0x240] */ r_eax = R32((u32)(r_ebp+0xfffffdc0u));
    /* 005c5cde: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005c5ce1: mov dword ptr [ebp - 0x174], ecx */ W32((u32)(r_ebp+0xfffffe8cu), r_ecx);
    /* 005c5ce7: mov edx, dword ptr [ebp - 0x174] */ r_edx = R32((u32)(r_ebp+0xfffffe8cu));
    /* 005c5ced: mov dword ptr [ebp - 0x170], edx */ W32((u32)(r_ebp+0xfffffe90u), r_edx);
    /* 005c5cf3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c5cf5: mov byte ptr [ebp - 0x169], al */ W8((u32)(r_ebp+0xfffffe97u), (u8)r_eax);
    /* 005c5cfb: mov cl, byte ptr [ebp - 0x16b] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffe95u))) & 0xffu);
    /* 005c5d01: mov byte ptr [ebp - 0x16a], cl */ W8((u32)(r_ebp+0xfffffe96u), (u8)r_ecx);
    /* 005c5d07: mov dl, byte ptr [ebp - 0x169] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffe97u))) & 0xffu);
    /* 005c5d0d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c5d0e: mov al, byte ptr [ebp - 0x16a] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffe96u))) & 0xffu);
    /* 005c5d14: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c5d15: mov ecx, dword ptr [ebp - 0x240] */ r_ecx = R32((u32)(r_ebp+0xfffffdc0u));
    /* 005c5d1b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c5d1c: lea edx, [ebp - 0x44] */ r_edx = (u32)(r_ebp+0xffffffbcu);
    /* 005c5d1f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c5d20: mov eax, dword ptr [ebp - 0x178] */ r_eax = R32((u32)(r_ebp+0xfffffe88u));
    /* 005c5d26: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c5d27: mov ecx, dword ptr [ebp - 0x170] */ r_ecx = R32((u32)(r_ebp+0xfffffe90u));
    /* 005c5d2d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c5d2e: call 0x5c6b00 */ r_esp -= 4; W32(r_esp, 0x5c5d33u); f_005c6b00();
    /* 005c5d33: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c5d36: jmp 0x5c5de7 */ goto L_005c5de7;
L_005c5de7:; BB(0x005c5de7);
    /* 005c5de7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c5dee: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005c5df1: imul ecx, ecx, 0x34 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x34u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c5df4: mov edx, dword ptr [ebp - 0x240] */ r_edx = R32((u32)(r_ebp+0xfffffdc0u));
    /* 005c5dfa: add ecx, dword ptr [edx + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c5dfd: mov eax, dword ptr [ebp - 0x240] */ r_eax = R32((u32)(r_ebp+0xfffffdc0u));
    /* 005c5e03: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 005c5e06: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005c5e09: imul ecx, ecx, 0x34 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x34u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c5e0c: mov edx, dword ptr [ebp - 0x240] */ r_edx = R32((u32)(r_ebp+0xfffffdc0u));
    /* 005c5e12: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005c5e15: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005c5e17: mov dword ptr [ebp - 0x1a8], eax */ W32((u32)(r_ebp+0xfffffe58u), r_eax);
    /* 005c5e1d: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005c5e20: mov dword ptr [ebp - 0x1a4], ecx */ W32((u32)(r_ebp+0xfffffe5cu), r_ecx);
    /* 005c5e26: mov edx, dword ptr [ebp - 0x1a8] */ r_edx = R32((u32)(r_ebp+0xfffffe58u));
    /* 005c5e2c: mov dword ptr [ebp - 0x198], edx */ W32((u32)(r_ebp+0xfffffe68u), r_edx);
    /* 005c5e32: mov eax, dword ptr [ebp - 0x1a4] */ r_eax = R32((u32)(r_ebp+0xfffffe5cu));
    /* 005c5e38: mov dword ptr [ebp - 0x1a0], eax */ W32((u32)(r_ebp+0xfffffe60u), r_eax);
    /* 005c5e3e: jmp 0x5c5e4f */ goto L_005c5e4f;
L_005c5e40:; BB(0x005c5e40);
    /* 005c5e40: mov ecx, dword ptr [ebp - 0x1a0] */ r_ecx = R32((u32)(r_ebp+0xfffffe60u));
    /* 005c5e46: add ecx, 0x34 */ {  u32 a = r_ecx; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c5e49: mov dword ptr [ebp - 0x1a0], ecx */ W32((u32)(r_ebp+0xfffffe60u), r_ecx);
L_005c5e4f:; BB(0x005c5e4f);
    /* 005c5e4f: mov edx, dword ptr [ebp - 0x1a0] */ r_edx = R32((u32)(r_ebp+0xfffffe60u));
    /* 005c5e55: cmp edx, dword ptr [ebp - 0x198] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffe68u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c5e5b: je 0x5c5e6e */ if (fZ) goto L_005c5e6e;
L_005c5e5d:; BB(0x005c5e5d);
    /* 005c5e5d: lea eax, [ebp - 0x44] */ r_eax = (u32)(r_ebp+0xffffffbcu);
    /* 005c5e60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c5e61: mov ecx, dword ptr [ebp - 0x1a0] */ r_ecx = R32((u32)(r_ebp+0xfffffe60u));
    /* 005c5e67: call 0x5c3a20 */ r_esp -= 4; W32(r_esp, 0x5c5e6cu); f_005c3a20();
    /* 005c5e6c: jmp 0x5c5e40 */ goto L_005c5e40;
L_005c5e6e:; BB(0x005c5e6e);
    /* 005c5e6e: jmp 0x5c5f9e */ goto L_005c5f9e;
L_005c5e73:; BB(0x005c5e73);
    /* 005c5e73: mov ecx, dword ptr [ebp - 0x240] */ r_ecx = R32((u32)(r_ebp+0xfffffdc0u));
    /* 005c5e79: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005c5e7c: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 005c5e7f: mov eax, dword ptr [ebp - 0x240] */ r_eax = R32((u32)(r_ebp+0xfffffdc0u));
    /* 005c5e85: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005c5e88: mov dword ptr [ebp - 0x1e0], ecx */ W32((u32)(r_ebp+0xfffffe20u), r_ecx);
    /* 005c5e8e: mov edx, dword ptr [ebp - 0x240] */ r_edx = R32((u32)(r_ebp+0xfffffdc0u));
    /* 005c5e94: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c5e95: mov eax, dword ptr [ebp - 0x1e0] */ r_eax = R32((u32)(r_ebp+0xfffffe20u));
    /* 005c5e9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c5e9c: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005c5e9f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c5ea0: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005c5ea3: imul edx, edx, 0x34 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x34u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c5ea6: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005c5ea9: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005c5eab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c5eac: call 0x5c69f0 */ r_esp -= 4; W32(r_esp, 0x5c5eb1u); f_005c69f0();
    /* 005c5eb1: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c5eb4: mov ecx, dword ptr [ebp - 0x240] */ r_ecx = R32((u32)(r_ebp+0xfffffdc0u));
    /* 005c5eba: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 005c5ebd: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005c5ec0: mov dword ptr [ebp - 0x224], edx */ W32((u32)(r_ebp+0xfffffddcu), r_edx);
    /* 005c5ec6: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005c5ec9: imul eax, eax, 0x34 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x34u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c5ecc: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005c5ecf: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005c5ed1: mov dword ptr [ebp - 0x220], ecx */ W32((u32)(r_ebp+0xfffffde0u), r_ecx);
    /* 005c5ed7: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005c5eda: mov dword ptr [ebp - 0x21c], edx */ W32((u32)(r_ebp+0xfffffde4u), r_edx);
    /* 005c5ee0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c5ee2: mov byte ptr [ebp - 0x1e1], al */ W8((u32)(r_ebp+0xfffffe1fu), (u8)r_eax);
    /* 005c5ee8: mov cl, byte ptr [ebp - 0x1e4] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffe1cu))) & 0xffu);
    /* 005c5eee: mov byte ptr [ebp - 0x1e2], cl */ W8((u32)(r_ebp+0xfffffe1eu), (u8)r_ecx);
    /* 005c5ef4: mov edx, dword ptr [ebp - 0x220] */ r_edx = R32((u32)(r_ebp+0xfffffde0u));
    /* 005c5efa: mov dword ptr [ebp - 0x1ec], edx */ W32((u32)(r_ebp+0xfffffe14u), r_edx);
    /* 005c5f00: mov eax, dword ptr [ebp - 0x21c] */ r_eax = R32((u32)(r_ebp+0xfffffde4u));
    /* 005c5f06: mov dword ptr [ebp - 0x1f4], eax */ W32((u32)(r_ebp+0xfffffe0cu), r_eax);
    /* 005c5f0c: mov cl, byte ptr [ebp - 0x1e1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffe1fu))) & 0xffu);
    /* 005c5f12: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c5f13: mov dl, byte ptr [ebp - 0x1e2] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffe1eu))) & 0xffu);
    /* 005c5f19: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c5f1a: mov al, byte ptr [ebp - 0x1e3] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffe1du))) & 0xffu);
    /* 005c5f20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c5f21: mov ecx, dword ptr [ebp - 0x224] */ r_ecx = R32((u32)(r_ebp+0xfffffddcu));
    /* 005c5f27: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c5f28: mov edx, dword ptr [ebp - 0x1ec] */ r_edx = R32((u32)(r_ebp+0xfffffe14u));
    /* 005c5f2e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c5f2f: mov eax, dword ptr [ebp - 0x1f4] */ r_eax = R32((u32)(r_ebp+0xfffffe0cu));
    /* 005c5f35: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c5f36: call 0x5c6a70 */ r_esp -= 4; W32(r_esp, 0x5c5f3bu); f_005c6a70();
    /* 005c5f3b: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c5f3e: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005c5f41: imul ecx, ecx, 0x34 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x34u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c5f44: add ecx, dword ptr [ebp + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c5f47: mov dword ptr [ebp - 0x23c], ecx */ W32((u32)(r_ebp+0xfffffdc4u), r_ecx);
    /* 005c5f4d: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005c5f50: mov dword ptr [ebp - 0x238], edx */ W32((u32)(r_ebp+0xfffffdc8u), r_edx);
    /* 005c5f56: mov eax, dword ptr [ebp - 0x23c] */ r_eax = R32((u32)(r_ebp+0xfffffdc4u));
    /* 005c5f5c: mov dword ptr [ebp - 0x22c], eax */ W32((u32)(r_ebp+0xfffffdd4u), r_eax);
    /* 005c5f62: mov ecx, dword ptr [ebp - 0x238] */ r_ecx = R32((u32)(r_ebp+0xfffffdc8u));
    /* 005c5f68: mov dword ptr [ebp - 0x234], ecx */ W32((u32)(r_ebp+0xfffffdccu), r_ecx);
    /* 005c5f6e: jmp 0x5c5f7f */ goto L_005c5f7f;
L_005c5f70:; BB(0x005c5f70);
    /* 005c5f70: mov edx, dword ptr [ebp - 0x234] */ r_edx = R32((u32)(r_ebp+0xfffffdccu));
    /* 005c5f76: add edx, 0x34 */ {  u32 a = r_edx; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c5f79: mov dword ptr [ebp - 0x234], edx */ W32((u32)(r_ebp+0xfffffdccu), r_edx);
L_005c5f7f:; BB(0x005c5f7f);
    /* 005c5f7f: mov eax, dword ptr [ebp - 0x234] */ r_eax = R32((u32)(r_ebp+0xfffffdccu));
    /* 005c5f85: cmp eax, dword ptr [ebp - 0x22c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffdd4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c5f8b: je 0x5c5f9e */ if (fZ) goto L_005c5f9e;
L_005c5f8d:; BB(0x005c5f8d);
    /* 005c5f8d: lea ecx, [ebp - 0x44] */ r_ecx = (u32)(r_ebp+0xffffffbcu);
    /* 005c5f90: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c5f91: mov ecx, dword ptr [ebp - 0x234] */ r_ecx = R32((u32)(r_ebp+0xfffffdccu));
    /* 005c5f97: call 0x5c3a20 */ r_esp -= 4; W32(r_esp, 0x5c5f9cu); f_005c3a20();
    /* 005c5f9c: jmp 0x5c5f70 */ goto L_005c5f70;
L_005c5f9e:; BB(0x005c5f9e);
    /* 005c5f9e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005c5fa5: lea ecx, [ebp - 0x44] */ r_ecx = (u32)(r_ebp+0xffffffbcu);
    /* 005c5fa8: call 0x5c3980 */ r_esp -= 4; W32(r_esp, 0x5c5fadu); f_005c3980();
    /* 005c5fad: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c5fb0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005c5fb7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c5fb8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005c5fb9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005c5fba: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c5fbb: mov esp, ebp */ r_esp = r_ebp;
    /* 005c5fbd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c5fbe: ret 0x10 */ FN_RET(0x005c5670); r_esp += 20; return;
}

void f_005c5fd0(void) /* sub_5C5FD0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c5fd0);
    /* 005c5fd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c5fd1: mov ebp, esp */ r_ebp = r_esp;
    /* 005c5fd3: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c5fd6: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 005c5fd9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c5fdc: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005c5fdf: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005c5fe1: mov byte ptr [ebp - 1], cl */ W8((u32)(r_ebp+0xffffffffu), (u8)r_ecx);
    /* 005c5fe4: mov dl, byte ptr [ebp - 3] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffffdu))) & 0xffu);
    /* 005c5fe7: mov byte ptr [ebp - 2], dl */ W8((u32)(r_ebp+0xfffffffeu), (u8)r_edx);
    /* 005c5fea: mov al, byte ptr [ebp - 1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffffu))) & 0xffu);
    /* 005c5fed: mov byte ptr [ebp - 0x29], al */ W8((u32)(r_ebp+0xffffffd7u), (u8)r_eax);
    /* 005c5ff0: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005c5ff3: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 005c5ff6: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005c5ff9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c5ffa: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005c5ffd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c5ffe: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005c6001: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c6002: call 0x5c0910 */ r_esp -= 4; W32(r_esp, 0x5c6007u); f_005c0910();
    /* 005c6007: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c600a: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005c600d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c6010: lea eax, [eax + edx*4] */ r_eax = (u32)(r_eax+r_edx*4);
    /* 005c6013: mov esp, ebp */ r_esp = r_ebp;
    /* 005c6015: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c6016: ret 0xc */ FN_RET(0x005c5fd0); r_esp += 16; return;
}

