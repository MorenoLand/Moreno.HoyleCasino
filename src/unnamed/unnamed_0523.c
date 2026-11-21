#include "protos.h"

void f_00523070(void) /* sub_523070 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00523070);
    /* 00523070: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00523071: mov ebp, esp */ r_ebp = r_esp;
    /* 00523073: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00523074: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00523077: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0052307a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052307b: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0052307e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00523081: mov ecx, dword ptr [edx + ecx*4 + 0x80] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x80u));
    /* 00523088: call 0x523d50 */ r_esp -= 4; W32(r_esp, 0x52308du); f_00523d50();
    /* 0052308d: mov esp, ebp */ r_esp = r_ebp;
    /* 0052308f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00523090: ret 8 */ FN_RET(0x00523070); r_esp += 12; return;
}

void f_005230a0(void) /* sub_5230A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005230a0);
    /* 005230a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005230a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005230a3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005230a5: push 0x6a3ff6 */ { u32 v = 0x6a3ff6u; r_esp -= 4; W32(r_esp, v); }
    /* 005230aa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005230b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005230b1: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005230b4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005230b9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005230bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005230bc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005230bf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005230c5: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 005230c8: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 005230cb: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005230ce: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005230d1: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005230d4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005230d6: mov ecx, eax */ r_ecx = r_eax;
    /* 005230d8: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005230db: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5230ddu); call_ind(t); }
    /* 005230dd: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 005230e4: jmp 0x5230ef */ goto L_005230ef;
L_005230e6:; BB(0x005230e6);
    /* 005230e6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005230e9: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005230ec: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
L_005230ef:; BB(0x005230ef);
    /* 005230ef: cmp dword ptr [ebp - 0x14], 0xa1 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0xa1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005230f6: jge 0x52328f */ if ((fS==fO)) goto L_0052328f;
L_005230fc:; BB(0x005230fc);
    /* 005230fc: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005230ff: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00523102: mov ecx, dword ptr [eax + edx*4 + 0x80] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x80u));
    /* 00523109: cmp dword ptr [ecx + 0xae0], 0 */ {  u32 a = R32((u32)(r_ecx+0xae0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00523110: je 0x52328a */ if (fZ) goto L_0052328a;
L_00523116:; BB(0x00523116);
    /* 00523116: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00523119: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0052311c: mov ecx, dword ptr [eax + edx*4 + 0x80] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x80u));
    /* 00523123: call 0x523e40 */ r_esp -= 4; W32(r_esp, 0x523128u); f_00523e40();
    /* 00523128: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 0052312f: jmp 0x52313a */ goto L_0052313a;
L_00523131:; BB(0x00523131);
    /* 00523131: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00523134: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00523137: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
L_0052313a:; BB(0x0052313a);
    /* 0052313a: cmp dword ptr [ebp - 0x20], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052313e: jge 0x52328a */ if ((fS==fO)) goto L_0052328a;
L_00523144:; BB(0x00523144);
    /* 00523144: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00523147: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0052314a: mov ecx, dword ptr [eax + edx*4 + 0x80] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x80u));
    /* 00523151: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00523154: imul edx, edx, 0x1e0 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x1e0u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0052315a: mov eax, dword ptr [ecx + edx + 0x17c] */ r_eax = R32((u32)(r_ecx+r_edx+0x17cu));
    /* 00523161: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00523164: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00523168: je 0x523285 */ if (fZ) goto L_00523285;
L_0052316e:; BB(0x0052316e);
    /* 0052316e: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00523171: call 0x5f54a0 */ r_esp -= 4; W32(r_esp, 0x523176u); f_005f54a0();
    /* 00523176: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00523179: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052317b: je 0x523285 */ if (fZ) goto L_00523285;
L_00523181:; BB(0x00523181);
    /* 00523181: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00523184: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00523185: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x52318au); f_005dcb00();
    /* 0052318a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052318d: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00523190: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00523193: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00523196: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 00523199: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0052319c: call 0x646f80 */ r_esp -= 4; W32(r_esp, 0x5231a1u); f_00646f80();
    /* 005231a1: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 005231a4: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005231a7: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005231a9: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005231ac: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 005231af: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5231b1u); call_ind(t); }
    /* 005231b1: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005231b4: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005231b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005231b8: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5231bdu); f_005dcb00();
    /* 005231bd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005231c0: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 005231c3: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005231c6: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 005231c9: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 005231cc: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005231cf: call 0x646f80 */ r_esp -= 4; W32(r_esp, 0x5231d4u); f_00646f80();
    /* 005231d4: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 005231d7: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 005231da: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005231dc: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005231df: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 005231e2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5231e4u); call_ind(t); }
    /* 005231e4: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005231e7: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005231e9: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005231ef: call 0x637810 */ r_esp -= 4; W32(r_esp, 0x5231f4u); f_00637810();
    /* 005231f4: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005231f7: mov dword ptr [ecx + 0x184], eax */ W32((u32)(r_ecx+0x184u), r_eax);
    /* 005231fd: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00523200: cmp dword ptr [edx + 0x184], 0 */ {  u32 a = R32((u32)(r_edx+0x184u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00523207: je 0x523270 */ if (fZ) goto L_00523270;
L_00523209:; BB(0x00523209);
    /* 00523209: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0052320f: call 0x637630 */ r_esp -= 4; W32(r_esp, 0x523214u); f_00637630();
    /* 00523214: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00523217: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00523219: je 0x523270 */ if (fZ) goto L_00523270;
L_0052321b:; BB(0x0052321b);
    /* 0052321b: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0052321d: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x523222u); f_00686d82();
    /* 00523222: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00523225: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00523228: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0052322f: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00523233: je 0x52324e */ if (fZ) goto L_0052324e;
L_00523235:; BB(0x00523235);
    /* 00523235: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00523237: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0052323a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052323b: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052323e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052323f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00523241: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00523244: call 0x606e60 */ r_esp -= 4; W32(r_esp, 0x523249u); f_00606e60();
    /* 00523249: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0052324c: jmp 0x523255 */ goto L_00523255;
L_0052324e:; BB(0x0052324e);
    /* 0052324e: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_00523255:; BB(0x00523255);
    /* 00523255: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00523258: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0052325b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00523262: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00523265: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00523266: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00523269: call 0x5f6050 */ r_esp -= 4; W32(r_esp, 0x52326eu); f_005f6050();
    /* 0052326e: jmp 0x523285 */ goto L_00523285;
L_00523270:; BB(0x00523270);
    /* 00523270: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00523273: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00523274: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00523277: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00523278: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052327b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0052327d: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00523280: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00523283: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x523285u); call_ind(t); }
L_00523285:; BB(0x00523285);
    /* 00523285: jmp 0x523131 */ goto L_00523131;
L_0052328a:; BB(0x0052328a);
    /* 0052328a: jmp 0x5230e6 */ goto L_005230e6;
L_0052328f:; BB(0x0052328f);
    /* 0052328f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00523292: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00523299: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0052329a: mov esp, ebp */ r_esp = r_ebp;
    /* 0052329c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052329d: ret  */ FN_RET(0x005230a0); r_esp += 4; return;
}

void f_005232a0(void) /* sub_5232A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005232a0);
    /* 005232a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005232a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005232a3: sub esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005232a6: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005232ab: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005232ad: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005232b0: mov dword ptr [ebp - 0x58], ecx */ W32((u32)(r_ebp+0xffffffa8u), r_ecx);
    /* 005232b3: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 005232b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005232b7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005232ba: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005232bb: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5232c0u); f_005dcb00();
    /* 005232c0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005232c3: mov ecx, eax */ r_ecx = r_eax;
    /* 005232c5: call 0x5d6020 */ r_esp -= 4; W32(r_esp, 0x5232cau); f_005d6020();
    /* 005232ca: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005232ce: jne 0x5232e8 */ if (!fZ) goto L_005232e8;
L_005232d0:; BB(0x005232d0);
    /* 005232d0: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005232d4: jne 0x5232e8 */ if (!fZ) goto L_005232e8;
L_005232d6:; BB(0x005232d6);
    /* 005232d6: lea edx, [ebp - 0x4c] */ r_edx = (u32)(r_ebp+0xffffffb4u);
    /* 005232d9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005232da: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005232dd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005232de: call 0x6311e0 */ r_esp -= 4; W32(r_esp, 0x5232e3u); f_006311e0();
    /* 005232e3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005232e6: jmp 0x52333c */ goto L_0052333c;
L_005232e8:; BB(0x005232e8);
    /* 005232e8: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005232ec: jge 0x5232f9 */ if ((fS==fO)) goto L_005232f9;
L_005232ee:; BB(0x005232ee);
    /* 005232ee: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005232f1: imul ecx, ecx, -1 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xffffffffu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005232f4: mov dword ptr [ebp - 0x5c], ecx */ W32((u32)(r_ebp+0xffffffa4u), r_ecx);
    /* 005232f7: jmp 0x5232ff */ goto L_005232ff;
L_005232f9:; BB(0x005232f9);
    /* 005232f9: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005232fc: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
L_005232ff:; BB(0x005232ff);
    /* 005232ff: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 00523302: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 00523305: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00523309: jge 0x523316 */ if ((fS==fO)) goto L_00523316;
L_0052330b:; BB(0x0052330b);
    /* 0052330b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052330e: imul ecx, ecx, -1 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xffffffffu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00523311: mov dword ptr [ebp - 0x60], ecx */ W32((u32)(r_ebp+0xffffffa0u), r_ecx);
    /* 00523314: jmp 0x52331c */ goto L_0052331c;
L_00523316:; BB(0x00523316);
    /* 00523316: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00523319: mov dword ptr [ebp - 0x60], edx */ W32((u32)(r_ebp+0xffffffa0u), r_edx);
L_0052331c:; BB(0x0052331c);
    /* 0052331c: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 0052331f: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 00523322: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00523324: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00523326: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00523328: lea ecx, [ebp - 0x4c] */ r_ecx = (u32)(r_ebp+0xffffffb4u);
    /* 0052332b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052332c: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0052332f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00523330: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 00523333: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00523334: call 0x64c8d0 */ r_esp -= 4; W32(r_esp, 0x523339u); f_0064c8d0();
    /* 00523339: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0052333c:; BB(0x0052333c);
    /* 0052333c: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00523340: jne 0x52335e */ if (!fZ) goto L_0052335e;
L_00523342:; BB(0x00523342);
    /* 00523342: push 0x6c304c */ { u32 v = 0x6c304cu; r_esp -= 4; W32(r_esp, v); }
    /* 00523347: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x52334cu); f_00630f40();
    /* 0052334c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052334f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00523350: lea ecx, [ebp - 0x2c] */ r_ecx = (u32)(r_ebp+0xffffffd4u);
    /* 00523353: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00523354: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x523359u); f_00686d8e();
    /* 00523359: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052335c: jmp 0x5233a5 */ goto L_005233a5;
L_0052335e:; BB(0x0052335e);
    /* 0052335e: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00523362: jle 0x523376 */ if ((fZ||fS!=fO)) goto L_00523376;
L_00523364:; BB(0x00523364);
    /* 00523364: push 0x6c3038 */ { u32 v = 0x6c3038u; r_esp -= 4; W32(r_esp, v); }
    /* 00523369: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x52336eu); f_00630f40();
    /* 0052336e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00523371: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 00523374: jmp 0x523386 */ goto L_00523386;
L_00523376:; BB(0x00523376);
    /* 00523376: push 0x6c3024 */ { u32 v = 0x6c3024u; r_esp -= 4; W32(r_esp, v); }
    /* 0052337b: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x523380u); f_00630f40();
    /* 00523380: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00523383: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
L_00523386:; BB(0x00523386);
    /* 00523386: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 00523389: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052338a: push 0x6c3008 */ { u32 v = 0x6c3008u; r_esp -= 4; W32(r_esp, v); }
    /* 0052338f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x523394u); f_00630f40();
    /* 00523394: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00523397: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00523398: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 0052339b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052339c: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x5233a2u); call_ind(t); }
    /* 005233a2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005233a5:; BB(0x005233a5);
    /* 005233a5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005233a8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005233a9: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5233aeu); f_005dcb00();
    /* 005233ae: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005233b1: cmp dword ptr [eax + 0x4cc], 0 */ {  u32 a = R32((u32)(r_eax+0x4ccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005233b8: jle 0x5233cf */ if ((fZ||fS!=fO)) goto L_005233cf;
L_005233ba:; BB(0x005233ba);
    /* 005233ba: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005233bd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005233be: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5233c3u); f_005dcb00();
    /* 005233c3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005233c6: mov ecx, eax */ r_ecx = r_eax;
    /* 005233c8: call 0x5d7540 */ r_esp -= 4; W32(r_esp, 0x5233cdu); f_005d7540();
    /* 005233cd: jmp 0x5233e5 */ goto L_005233e5;
L_005233cf:; BB(0x005233cf);
    /* 005233cf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005233d2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005233d3: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5233d8u); f_005dcb00();
    /* 005233d8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005233db: mov dword ptr [eax + 0x4a8], 0 */ W32((u32)(r_eax+0x4a8u), 0x0u);
L_005233e5:; BB(0x005233e5);
    /* 005233e5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005233e7: mov ecx, dword ptr [0x793370] */ r_ecx = R32((u32)(0x793370u));
    /* 005233ed: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005233f0: mov eax, dword ptr [0x793370] */ r_eax = R32((u32)(0x793370u));
    /* 005233f5: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005233f8: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005233fa: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005233fd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5233ffu); call_ind(t); }
    /* 005233ff: lea ecx, [ebp - 0x4c] */ r_ecx = (u32)(r_ebp+0xffffffb4u);
    /* 00523402: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00523403: lea edx, [ebp - 0x2c] */ r_edx = (u32)(r_ebp+0xffffffd4u);
    /* 00523406: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00523407: mov eax, dword ptr [0x793370] */ r_eax = R32((u32)(0x793370u));
    /* 0052340c: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0052340f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00523410: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00523413: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00523414: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x523419u); f_005dcb00();
    /* 00523419: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052341c: mov ecx, eax */ r_ecx = r_eax;
    /* 0052341e: call 0x5d67d0 */ r_esp -= 4; W32(r_esp, 0x523423u); f_005d67d0();
    /* 00523423: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00523426: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00523428: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x52342du); f_00686d72();
    /* 0052342d: mov esp, ebp */ r_esp = r_ebp;
    /* 0052342f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00523430: ret 4 */ FN_RET(0x005232a0); r_esp += 8; return;
}

void f_00523440(void) /* sub_523440 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00523440);
    /* 00523440: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00523441: mov ebp, esp */ r_ebp = r_esp;
    /* 00523443: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00523446: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00523449: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00523450: jmp 0x52345b */ goto L_0052345b;
L_00523452:; BB(0x00523452);
    /* 00523452: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00523455: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00523458: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0052345b:; BB(0x0052345b);
    /* 0052345b: cmp dword ptr [ebp - 4], 0xa1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xa1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00523462: jge 0x5234ca */ if ((fS==fO)) goto L_005234ca;
L_00523464:; BB(0x00523464);
    /* 00523464: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0052346b: jmp 0x523476 */ goto L_00523476;
L_0052346d:; BB(0x0052346d);
    /* 0052346d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00523470: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00523473: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_00523476:; BB(0x00523476);
    /* 00523476: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052347a: jge 0x5234c8 */ if ((fS==fO)) goto L_005234c8;
L_0052347c:; BB(0x0052347c);
    /* 0052347c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052347f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00523482: mov ecx, dword ptr [eax + edx*4 + 0x80] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x80u));
    /* 00523489: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0052348c: imul edx, edx, 0x1e0 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x1e0u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00523492: cmp dword ptr [ecx + edx + 0x17c], 0 */ {  u32 a = R32((u32)(r_ecx+r_edx+0x17cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052349a: je 0x5234c6 */ if (fZ) goto L_005234c6;
L_0052349c:; BB(0x0052349c);
    /* 0052349c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052349f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005234a2: mov edx, dword ptr [ecx + eax*4 + 0x80] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x80u));
    /* 005234a9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005234ac: imul eax, eax, 0x1e0 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x1e0u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005234b2: mov ecx, dword ptr [edx + eax + 0x17c] */ r_ecx = R32((u32)(r_edx+r_eax+0x17cu));
    /* 005234b9: call 0x5f60e0 */ r_esp -= 4; W32(r_esp, 0x5234beu); f_005f60e0();
    /* 005234be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005234c0: je 0x5234c6 */ if (fZ) goto L_005234c6;
L_005234c2:; BB(0x005234c2);
    /* 005234c2: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005234c4: jmp 0x5234cc */ goto L_005234cc;
L_005234c6:; BB(0x005234c6);
    /* 005234c6: jmp 0x52346d */ goto L_0052346d;
L_005234c8:; BB(0x005234c8);
    /* 005234c8: jmp 0x523452 */ goto L_00523452;
L_005234ca:; BB(0x005234ca);
    /* 005234ca: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_005234cc:; BB(0x005234cc);
    /* 005234cc: mov esp, ebp */ r_esp = r_ebp;
    /* 005234ce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005234cf: ret  */ FN_RET(0x00523440); r_esp += 4; return;
}

void f_00523560(void) /* sub_523560 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00523560);
    /* 00523560: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00523561: mov ebp, esp */ r_ebp = r_esp;
    /* 00523563: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00523564: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00523567: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052356a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0052356d: mov dword ptr [eax + 0x198], ecx */ W32((u32)(r_eax+0x198u), r_ecx);
    /* 00523573: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00523576: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00523579: mov dword ptr [edx + 0x19c], eax */ W32((u32)(r_edx+0x19cu), r_eax);
    /* 0052357f: mov esp, ebp */ r_esp = r_ebp;
    /* 00523581: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00523582: ret 8 */ FN_RET(0x00523560); r_esp += 12; return;
}

void f_00523590(void) /* sub_523590 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00523590);
    /* 00523590: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00523591: mov ebp, esp */ r_ebp = r_esp;
    /* 00523593: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00523595: push 0x6a401c */ { u32 v = 0x6a401cu; r_esp -= 4; W32(r_esp, v); }
    /* 0052359a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005235a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005235a1: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005235a4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005235a9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005235ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005235ac: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005235af: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005235b5: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005235b8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005235ba: mov eax, dword ptr [0x793370] */ r_eax = R32((u32)(0x793370u));
    /* 005235bf: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005235c2: mov edx, dword ptr [0x793370] */ r_edx = R32((u32)(0x793370u));
    /* 005235c8: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005235cb: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005235cd: mov ecx, eax */ r_ecx = r_eax;
    /* 005235cf: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005235d2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5235d4u); call_ind(t); }
    /* 005235d4: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005235da: call 0x637630 */ r_esp -= 4; W32(r_esp, 0x5235dfu); f_00637630();
    /* 005235df: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005235e2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005235e4: je 0x52368a */ if (fZ) goto L_0052368a;
L_005235ea:; BB(0x005235ea);
    /* 005235ea: movzx edx, byte ptr [0x795f94] */ r_edx = (u32)R8((u32)(0x795f94u));
    /* 005235f1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005235f3: jne 0x52368a */ if (!fZ) goto L_0052368a;
L_005235f9:; BB(0x005235f9);
    /* 005235f9: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005235fc: mov dword ptr [eax + 0x178], 5 */ W32((u32)(r_eax+0x178u), 0x5u);
    /* 00523606: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00523609: mov edx, dword ptr [ecx + 0x19c] */ r_edx = R32((u32)(r_ecx+0x19cu));
    /* 0052360f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00523610: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00523613: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x523618u); f_005eaf00();
    /* 00523618: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052361a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0052361d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0052361f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00523622: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00523628: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52362au); call_ind(t); }
    /* 0052362a: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0052362c: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x523631u); f_00686d82();
    /* 00523631: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00523634: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00523637: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0052363e: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00523642: je 0x52365b */ if (fZ) goto L_0052365b;
L_00523644:; BB(0x00523644);
    /* 00523644: mov ecx, dword ptr [0x793370] */ r_ecx = R32((u32)(0x793370u));
    /* 0052364a: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0052364d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052364e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00523651: call 0x6010a0 */ r_esp -= 4; W32(r_esp, 0x523656u); f_006010a0();
    /* 00523656: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00523659: jmp 0x523662 */ goto L_00523662;
L_0052365b:; BB(0x0052365b);
    /* 0052365b: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_00523662:; BB(0x00523662);
    /* 00523662: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00523665: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00523668: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0052366f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00523672: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00523673: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00523676: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x52367bu); f_005f5d50();
    /* 0052367b: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0052367e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00523680: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00523683: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 00523686: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x523688u); call_ind(t); }
    /* 00523688: jmp 0x5236a6 */ goto L_005236a6;
L_0052368a:; BB(0x0052368a);
    /* 0052368a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052368c: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 00523691: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00523694: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 0052369a: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0052369d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0052369f: mov ecx, eax */ r_ecx = r_eax;
    /* 005236a1: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 005236a4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5236a6u); call_ind(t); }
L_005236a6:; BB(0x005236a6);
    /* 005236a6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005236a9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005236b0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005236b1: mov esp, ebp */ r_esp = r_ebp;
    /* 005236b3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005236b4: ret  */ FN_RET(0x00523590); r_esp += 4; return;
}

void f_005236c0(void) /* sub_5236C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005236c0);
    /* 005236c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005236c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005236c3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005236c5: push 0x6a4042 */ { u32 v = 0x6a4042u; r_esp -= 4; W32(r_esp, v); }
    /* 005236ca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005236d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005236d1: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005236d4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005236d9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005236db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005236dc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005236df: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005236e5: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005236e8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005236ea: mov eax, dword ptr [0x793370] */ r_eax = R32((u32)(0x793370u));
    /* 005236ef: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005236f2: mov edx, dword ptr [0x793370] */ r_edx = R32((u32)(0x793370u));
    /* 005236f8: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005236fb: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005236fd: mov ecx, eax */ r_ecx = r_eax;
    /* 005236ff: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00523702: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x523704u); call_ind(t); }
    /* 00523704: mov ecx, dword ptr [0x793374] */ r_ecx = R32((u32)(0x793374u));
    /* 0052370a: call 0x528390 */ r_esp -= 4; W32(r_esp, 0x52370fu); f_00528390();
    /* 0052370f: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00523712: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00523714: je 0x5237d0 */ if (fZ) goto L_005237d0;
L_0052371a:; BB(0x0052371a);
    /* 0052371a: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00523720: call 0x637630 */ r_esp -= 4; W32(r_esp, 0x523725u); f_00637630();
    /* 00523725: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00523728: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052372a: je 0x5237d0 */ if (fZ) goto L_005237d0;
L_00523730:; BB(0x00523730);
    /* 00523730: movzx eax, byte ptr [0x795f94] */ r_eax = (u32)R8((u32)(0x795f94u));
    /* 00523737: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00523739: jne 0x5237d0 */ if (!fZ) goto L_005237d0;
L_0052373f:; BB(0x0052373f);
    /* 0052373f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00523742: mov dword ptr [ecx + 0x178], 5 */ W32((u32)(r_ecx+0x178u), 0x5u);
    /* 0052374c: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0052374f: mov eax, dword ptr [edx + 0x198] */ r_eax = R32((u32)(r_edx+0x198u));
    /* 00523755: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00523756: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00523759: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x52375eu); f_005eaf00();
    /* 0052375e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00523760: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00523763: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00523765: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00523768: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0052376e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x523770u); call_ind(t); }
    /* 00523770: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00523772: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x523777u); f_00686d82();
    /* 00523777: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052377a: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0052377d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00523784: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00523788: je 0x5237a1 */ if (fZ) goto L_005237a1;
L_0052378a:; BB(0x0052378a);
    /* 0052378a: mov ecx, dword ptr [0x793370] */ r_ecx = R32((u32)(0x793370u));
    /* 00523790: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00523793: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00523794: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00523797: call 0x6010a0 */ r_esp -= 4; W32(r_esp, 0x52379cu); f_006010a0();
    /* 0052379c: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0052379f: jmp 0x5237a8 */ goto L_005237a8;
L_005237a1:; BB(0x005237a1);
    /* 005237a1: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_005237a8:; BB(0x005237a8);
    /* 005237a8: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005237ab: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005237ae: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005237b5: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005237b8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005237b9: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005237bc: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x5237c1u); f_005f5d50();
    /* 005237c1: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005237c4: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005237c6: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005237c9: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 005237cc: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5237ceu); call_ind(t); }
    /* 005237ce: jmp 0x5237ec */ goto L_005237ec;
L_005237d0:; BB(0x005237d0);
    /* 005237d0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005237d2: mov eax, dword ptr [0x793370] */ r_eax = R32((u32)(0x793370u));
    /* 005237d7: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005237da: mov edx, dword ptr [0x793370] */ r_edx = R32((u32)(0x793370u));
    /* 005237e0: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005237e3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005237e5: mov ecx, eax */ r_ecx = r_eax;
    /* 005237e7: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 005237ea: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5237ecu); call_ind(t); }
L_005237ec:; BB(0x005237ec);
    /* 005237ec: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005237ef: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005237f6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005237f7: mov esp, ebp */ r_esp = r_ebp;
    /* 005237f9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005237fa: ret  */ FN_RET(0x005236c0); r_esp += 4; return;
}

void f_00523d50(void) /* sub_523D50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00523d50);
    /* 00523d50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00523d51: mov ebp, esp */ r_ebp = r_esp;
    /* 00523d53: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00523d55: push 0x6a40b1 */ { u32 v = 0x6a40b1u; r_esp -= 4; W32(r_esp, v); }
    /* 00523d5a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00523d60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00523d61: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00523d64: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00523d69: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00523d6b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00523d6c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00523d6f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00523d75: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00523d78: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00523d7b: cmp dword ptr [eax + 0xae0], 0 */ {  u32 a = R32((u32)(r_eax+0xae0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00523d82: jne 0x523dce */ if (!fZ) goto L_00523dce;
L_00523d84:; BB(0x00523d84);
    /* 00523d84: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 00523d89: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x523d8eu); f_00686d82();
    /* 00523d8e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00523d91: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00523d94: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00523d9b: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00523d9f: je 0x523dae */ if (fZ) goto L_00523dae;
L_00523da1:; BB(0x00523da1);
    /* 00523da1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00523da4: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x523da9u); f_005eaaf0();
    /* 00523da9: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00523dac: jmp 0x523db5 */ goto L_00523db5;
L_00523dae:; BB(0x00523dae);
    /* 00523dae: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_00523db5:; BB(0x00523db5);
    /* 00523db5: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00523db8: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00523dbb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00523dc2: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00523dc5: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00523dc8: mov dword ptr [edx + 0xae0], eax */ W32((u32)(r_edx+0xae0u), r_eax);
L_00523dce:; BB(0x00523dce);
    /* 00523dce: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00523dd0: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00523dd2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00523dd4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00523dd7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00523dd8: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00523ddb: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00523ddd: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00523de0: mov edx, dword ptr [eax + 0xd8] */ r_edx = R32((u32)(r_eax+0xd8u));
    /* 00523de6: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x523de8u); call_ind(t); }
    /* 00523de8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00523de9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00523deb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00523dee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00523def: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00523df2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00523df4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00523df7: mov eax, dword ptr [edx + 0xd4] */ r_eax = R32((u32)(r_edx+0xd4u));
    /* 00523dfd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x523dffu); call_ind(t); }
    /* 00523dff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00523e00: push 0x186aa */ { u32 v = 0x186aau; r_esp -= 4; W32(r_esp, v); }
    /* 00523e05: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00523e08: mov ecx, dword ptr [ecx + 0xae0] */ r_ecx = R32((u32)(r_ecx+0xae0u));
    /* 00523e0e: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x523e13u); f_005eae80();
    /* 00523e13: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00523e16: mov eax, dword ptr [edx + 0xae0] */ r_eax = R32((u32)(r_edx+0xae0u));
    /* 00523e1c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00523e1f: mov ecx, dword ptr [ecx + 0xae0] */ r_ecx = R32((u32)(r_ecx+0xae0u));
    /* 00523e25: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00523e27: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00523e2a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x523e2cu); call_ind(t); }
    /* 00523e2c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00523e2f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00523e36: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00523e37: mov esp, ebp */ r_esp = r_ebp;
    /* 00523e39: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00523e3a: ret 4 */ FN_RET(0x00523d50); r_esp += 8; return;
}

void f_00523e40(void) /* sub_523E40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00523e40);
    /* 00523e40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00523e41: mov ebp, esp */ r_ebp = r_esp;
    /* 00523e43: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00523e46: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00523e49: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00523e4c: mov ecx, dword ptr [eax + 0xae0] */ r_ecx = R32((u32)(r_eax+0xae0u));
    /* 00523e52: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00523e55: mov eax, dword ptr [edx + 0xae0] */ r_eax = R32((u32)(r_edx+0xae0u));
    /* 00523e5b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00523e5d: mov ecx, eax */ r_ecx = r_eax;
    /* 00523e5f: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00523e62: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x523e64u); call_ind(t); }
    /* 00523e64: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00523e67: mov edx, dword ptr [ecx + 0xae0] */ r_edx = R32((u32)(r_ecx+0xae0u));
    /* 00523e6d: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00523e70: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00523e73: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00523e76: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00523e7a: je 0x523e8f */ if (fZ) goto L_00523e8f;
L_00523e7c:; BB(0x00523e7c);
    /* 00523e7c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00523e7e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00523e81: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00523e83: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00523e86: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00523e88: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x523e8au); call_ind(t); }
    /* 00523e8a: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00523e8d: jmp 0x523e96 */ goto L_00523e96;
L_00523e8f:; BB(0x00523e8f);
    /* 00523e8f: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_00523e96:; BB(0x00523e96);
    /* 00523e96: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00523e99: mov dword ptr [ecx + 0xae0], 0 */ W32((u32)(r_ecx+0xae0u), 0x0u);
    /* 00523ea3: mov esp, ebp */ r_esp = r_ebp;
    /* 00523ea5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00523ea6: ret  */ FN_RET(0x00523e40); r_esp += 4; return;
}

