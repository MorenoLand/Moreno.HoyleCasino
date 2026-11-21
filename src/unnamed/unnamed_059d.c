#include "protos.h"

void f_0059d0a0(void) /* sub_59D0A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0059d0a0);
    /* 0059d0a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059d0a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0059d0a3: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0059d0a6: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 0059d0a9: mov dword ptr [ebp - 0x30], 0x156 */ W32((u32)(r_ebp+0xffffffd0u), 0x156u);
    /* 0059d0b0: mov dword ptr [ebp - 0x2c], 0x140 */ W32((u32)(r_ebp+0xffffffd4u), 0x140u);
    /* 0059d0b7: mov dword ptr [ebp - 0x28], 0x173 */ W32((u32)(r_ebp+0xffffffd8u), 0x173u);
    /* 0059d0be: mov dword ptr [ebp - 0x24], 0xdd */ W32((u32)(r_ebp+0xffffffdcu), 0xddu);
    /* 0059d0c5: mov dword ptr [ebp - 0x20], 0xbd */ W32((u32)(r_ebp+0xffffffe0u), 0xbdu);
    /* 0059d0cc: mov dword ptr [ebp - 0x1c], 0xf2 */ W32((u32)(r_ebp+0xffffffe4u), 0xf2u);
    /* 0059d0d3: mov dword ptr [ebp - 0x18], 0x202 */ W32((u32)(r_ebp+0xffffffe8u), 0x202u);
    /* 0059d0da: mov dword ptr [ebp - 0x14], 0x202 */ W32((u32)(r_ebp+0xffffffecu), 0x202u);
    /* 0059d0e1: mov dword ptr [ebp - 0x10], 0x22b */ W32((u32)(r_ebp+0xfffffff0u), 0x22bu);
    /* 0059d0e8: mov dword ptr [ebp - 0xc], 0x38 */ W32((u32)(r_ebp+0xfffffff4u), 0x38u);
    /* 0059d0ef: mov dword ptr [ebp - 8], 0xf */ W32((u32)(r_ebp+0xfffffff8u), 0xfu);
    /* 0059d0f6: mov dword ptr [ebp - 4], 0x39 */ W32((u32)(r_ebp+0xfffffffcu), 0x39u);
    /* 0059d0fd: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0059d100: mov ecx, dword ptr [eax + 0xae0] */ r_ecx = R32((u32)(r_eax+0xae0u));
    /* 0059d106: mov eax, dword ptr [ebp + ecx*4 - 0x30] */ r_eax = R32((u32)(r_ebp+r_ecx*4+0xffffffd0u));
    /* 0059d10a: mov esp, ebp */ r_esp = r_ebp;
    /* 0059d10c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059d10d: ret 8 */ FN_RET(0x0059d0a0); r_esp += 12; return;
}

void f_0059d110(void) /* sub_59D110 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0059d110);
    /* 0059d110: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059d111: mov ebp, esp */ r_ebp = r_esp;
    /* 0059d113: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0059d116: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 0059d119: mov dword ptr [ebp - 0x30], 0x136 */ W32((u32)(r_ebp+0xffffffd0u), 0x136u);
    /* 0059d120: mov dword ptr [ebp - 0x2c], 0x15b */ W32((u32)(r_ebp+0xffffffd4u), 0x15bu);
    /* 0059d127: mov dword ptr [ebp - 0x28], 0x155 */ W32((u32)(r_ebp+0xffffffd8u), 0x155u);
    /* 0059d12e: mov dword ptr [ebp - 0x24], 0x136 */ W32((u32)(r_ebp+0xffffffdcu), 0x136u);
    /* 0059d135: mov dword ptr [ebp - 0x20], 0x155 */ W32((u32)(r_ebp+0xffffffe0u), 0x155u);
    /* 0059d13c: mov dword ptr [ebp - 0x1c], 0x15a */ W32((u32)(r_ebp+0xffffffe4u), 0x15au);
    /* 0059d143: mov dword ptr [ebp - 0x18], 0xea */ W32((u32)(r_ebp+0xffffffe8u), 0xeau);
    /* 0059d14a: mov dword ptr [ebp - 0x14], 0x10e */ W32((u32)(r_ebp+0xffffffecu), 0x10eu);
    /* 0059d151: mov dword ptr [ebp - 0x10], 0xf3 */ W32((u32)(r_ebp+0xfffffff0u), 0xf3u);
    /* 0059d158: mov dword ptr [ebp - 0xc], 0xea */ W32((u32)(r_ebp+0xfffffff4u), 0xeau);
    /* 0059d15f: mov dword ptr [ebp - 8], 0xf2 */ W32((u32)(r_ebp+0xfffffff8u), 0xf2u);
    /* 0059d166: mov dword ptr [ebp - 4], 0x110 */ W32((u32)(r_ebp+0xfffffffcu), 0x110u);
    /* 0059d16d: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0059d170: mov ecx, dword ptr [eax + 0xae0] */ r_ecx = R32((u32)(r_eax+0xae0u));
    /* 0059d176: mov eax, dword ptr [ebp + ecx*4 - 0x30] */ r_eax = R32((u32)(r_ebp+r_ecx*4+0xffffffd0u));
    /* 0059d17a: mov esp, ebp */ r_esp = r_ebp;
    /* 0059d17c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059d17d: ret 8 */ FN_RET(0x0059d110); r_esp += 12; return;
}

void f_0059d190(void) /* sub_59D190 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0059d190);
    /* 0059d190: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059d191: mov ebp, esp */ r_ebp = r_esp;
    /* 0059d193: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0059d195: push 0x6a7593 */ { u32 v = 0x6a7593u; r_esp -= 4; W32(r_esp, v); }
    /* 0059d19a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0059d1a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059d1a1: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0059d1a4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0059d1a9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0059d1ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059d1ac: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0059d1af: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0059d1b5: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0059d1b8: mov eax, dword ptr [0x7935c4] */ r_eax = R32((u32)(0x7935c4u));
    /* 0059d1bd: cmp dword ptr [eax + 0xa0], 0 */ {  u32 a = R32((u32)(r_eax+0xa0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059d1c4: je 0x59d258 */ if (fZ) goto L_0059d258;
L_0059d1ca:; BB(0x0059d1ca);
    /* 0059d1ca: push 0x7e9 */ { u32 v = 0x7e9u; r_esp -= 4; W32(r_esp, v); }
    /* 0059d1cf: mov ecx, dword ptr [0x7935c4] */ r_ecx = R32((u32)(0x7935c4u));
    /* 0059d1d5: mov ecx, dword ptr [ecx + 0xa0] */ r_ecx = R32((u32)(r_ecx+0xa0u));
    /* 0059d1db: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x59d1e0u); f_005eaf00();
    /* 0059d1e0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059d1e2: mov edx, dword ptr [0x7935c4] */ r_edx = R32((u32)(0x7935c4u));
    /* 0059d1e8: mov eax, dword ptr [edx + 0xa0] */ r_eax = R32((u32)(r_edx+0xa0u));
    /* 0059d1ee: mov ecx, dword ptr [0x7935c4] */ r_ecx = R32((u32)(0x7935c4u));
    /* 0059d1f4: mov ecx, dword ptr [ecx + 0xa0] */ r_ecx = R32((u32)(r_ecx+0xa0u));
    /* 0059d1fa: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0059d1fc: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0059d202: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59d204u); call_ind(t); }
    /* 0059d204: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0059d206: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x59d20bu); f_00686d82();
    /* 0059d20b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059d20e: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0059d211: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0059d218: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059d21c: je 0x59d22f */ if (fZ) goto L_0059d22f;
L_0059d21e:; BB(0x0059d21e);
    /* 0059d21e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0059d221: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059d222: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0059d225: call 0x6010a0 */ r_esp -= 4; W32(r_esp, 0x59d22au); f_006010a0();
    /* 0059d22a: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0059d22d: jmp 0x59d236 */ goto L_0059d236;
L_0059d22f:; BB(0x0059d22f);
    /* 0059d22f: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0059d236:; BB(0x0059d236);
    /* 0059d236: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0059d239: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0059d23c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0059d243: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0059d246: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059d247: mov ecx, dword ptr [0x7935c4] */ r_ecx = R32((u32)(0x7935c4u));
    /* 0059d24d: mov ecx, dword ptr [ecx + 0xa0] */ r_ecx = R32((u32)(r_ecx+0xa0u));
    /* 0059d253: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x59d258u); f_005f5d50();
L_0059d258:; BB(0x0059d258);
    /* 0059d258: mov edx, dword ptr [0x7935c4] */ r_edx = R32((u32)(0x7935c4u));
    /* 0059d25e: cmp dword ptr [edx + 0x9c], 0 */ {  u32 a = R32((u32)(r_edx+0x9cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059d265: je 0x59d2f4 */ if (fZ) goto L_0059d2f4;
L_0059d26b:; BB(0x0059d26b);
    /* 0059d26b: push 0x7e8 */ { u32 v = 0x7e8u; r_esp -= 4; W32(r_esp, v); }
    /* 0059d270: mov eax, dword ptr [0x7935c4] */ r_eax = R32((u32)(0x7935c4u));
    /* 0059d275: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 0059d27b: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x59d280u); f_005eaf00();
    /* 0059d280: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059d282: mov ecx, dword ptr [0x7935c4] */ r_ecx = R32((u32)(0x7935c4u));
    /* 0059d288: mov edx, dword ptr [ecx + 0x9c] */ r_edx = R32((u32)(r_ecx+0x9cu));
    /* 0059d28e: mov eax, dword ptr [0x7935c4] */ r_eax = R32((u32)(0x7935c4u));
    /* 0059d293: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 0059d299: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0059d29b: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0059d2a1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59d2a3u); call_ind(t); }
    /* 0059d2a3: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0059d2a5: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x59d2aau); f_00686d82();
    /* 0059d2aa: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059d2ad: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0059d2b0: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0059d2b7: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059d2bb: je 0x59d2cc */ if (fZ) goto L_0059d2cc;
L_0059d2bd:; BB(0x0059d2bd);
    /* 0059d2bd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059d2bf: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0059d2c2: call 0x6010a0 */ r_esp -= 4; W32(r_esp, 0x59d2c7u); f_006010a0();
    /* 0059d2c7: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0059d2ca: jmp 0x59d2d3 */ goto L_0059d2d3;
L_0059d2cc:; BB(0x0059d2cc);
    /* 0059d2cc: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0059d2d3:; BB(0x0059d2d3);
    /* 0059d2d3: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0059d2d6: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0059d2d9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0059d2e0: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0059d2e3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059d2e4: mov eax, dword ptr [0x7935c4] */ r_eax = R32((u32)(0x7935c4u));
    /* 0059d2e9: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 0059d2ef: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x59d2f4u); f_005f5d50();
L_0059d2f4:; BB(0x0059d2f4);
    /* 0059d2f4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059d2f7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0059d2fe: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059d2ff: mov esp, ebp */ r_esp = r_ebp;
    /* 0059d301: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059d302: ret 4 */ FN_RET(0x0059d190); r_esp += 8; return;
}

void f_0059d310(void) /* sub_59D310 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0059d310);
    /* 0059d310: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059d311: mov ebp, esp */ r_ebp = r_esp;
    /* 0059d313: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0059d315: push 0x6a75c4 */ { u32 v = 0x6a75c4u; r_esp -= 4; W32(r_esp, v); }
    /* 0059d31a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0059d320: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059d321: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0059d324: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0059d329: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0059d32b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059d32c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0059d32f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0059d335: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0059d338: mov eax, dword ptr [0x7935c4] */ r_eax = R32((u32)(0x7935c4u));
    /* 0059d33d: cmp dword ptr [eax + 0xa0], 0 */ {  u32 a = R32((u32)(r_eax+0xa0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059d344: je 0x59d3f6 */ if (fZ) goto L_0059d3f6;
L_0059d34a:; BB(0x0059d34a);
    /* 0059d34a: push 0x7e7 */ { u32 v = 0x7e7u; r_esp -= 4; W32(r_esp, v); }
    /* 0059d34f: mov ecx, dword ptr [0x7935c4] */ r_ecx = R32((u32)(0x7935c4u));
    /* 0059d355: mov ecx, dword ptr [ecx + 0xa0] */ r_ecx = R32((u32)(r_ecx+0xa0u));
    /* 0059d35b: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x59d360u); f_005eaf00();
    /* 0059d360: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059d362: mov edx, dword ptr [0x7935c4] */ r_edx = R32((u32)(0x7935c4u));
    /* 0059d368: mov eax, dword ptr [edx + 0xa0] */ r_eax = R32((u32)(r_edx+0xa0u));
    /* 0059d36e: mov ecx, dword ptr [0x7935c4] */ r_ecx = R32((u32)(0x7935c4u));
    /* 0059d374: mov ecx, dword ptr [ecx + 0xa0] */ r_ecx = R32((u32)(r_ecx+0xa0u));
    /* 0059d37a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0059d37c: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0059d382: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59d384u); call_ind(t); }
    /* 0059d384: mov ecx, dword ptr [0x7935c4] */ r_ecx = R32((u32)(0x7935c4u));
    /* 0059d38a: mov edx, dword ptr [ecx + 0xa0] */ r_edx = R32((u32)(r_ecx+0xa0u));
    /* 0059d390: mov eax, dword ptr [0x7935c4] */ r_eax = R32((u32)(0x7935c4u));
    /* 0059d395: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 0059d39b: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0059d39d: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0059d3a0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59d3a2u); call_ind(t); }
    /* 0059d3a2: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0059d3a4: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x59d3a9u); f_00686d82();
    /* 0059d3a9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059d3ac: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0059d3af: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0059d3b6: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059d3ba: je 0x59d3cd */ if (fZ) goto L_0059d3cd;
L_0059d3bc:; BB(0x0059d3bc);
    /* 0059d3bc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0059d3bf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059d3c0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0059d3c3: call 0x6010a0 */ r_esp -= 4; W32(r_esp, 0x59d3c8u); f_006010a0();
    /* 0059d3c8: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0059d3cb: jmp 0x59d3d4 */ goto L_0059d3d4;
L_0059d3cd:; BB(0x0059d3cd);
    /* 0059d3cd: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0059d3d4:; BB(0x0059d3d4);
    /* 0059d3d4: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0059d3d7: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0059d3da: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0059d3e1: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0059d3e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059d3e5: mov ecx, dword ptr [0x7935c4] */ r_ecx = R32((u32)(0x7935c4u));
    /* 0059d3eb: mov ecx, dword ptr [ecx + 0xa0] */ r_ecx = R32((u32)(r_ecx+0xa0u));
    /* 0059d3f1: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x59d3f6u); f_005f5d50();
L_0059d3f6:; BB(0x0059d3f6);
    /* 0059d3f6: mov edx, dword ptr [0x7935c4] */ r_edx = R32((u32)(0x7935c4u));
    /* 0059d3fc: cmp dword ptr [edx + 0x9c], 0 */ {  u32 a = R32((u32)(r_edx+0x9cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059d403: je 0x59d4b0 */ if (fZ) goto L_0059d4b0;
L_0059d409:; BB(0x0059d409);
    /* 0059d409: push 0x7e6 */ { u32 v = 0x7e6u; r_esp -= 4; W32(r_esp, v); }
    /* 0059d40e: mov eax, dword ptr [0x7935c4] */ r_eax = R32((u32)(0x7935c4u));
    /* 0059d413: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 0059d419: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x59d41eu); f_005eaf00();
    /* 0059d41e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059d420: mov ecx, dword ptr [0x7935c4] */ r_ecx = R32((u32)(0x7935c4u));
    /* 0059d426: mov edx, dword ptr [ecx + 0x9c] */ r_edx = R32((u32)(r_ecx+0x9cu));
    /* 0059d42c: mov eax, dword ptr [0x7935c4] */ r_eax = R32((u32)(0x7935c4u));
    /* 0059d431: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 0059d437: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0059d439: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0059d43f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59d441u); call_ind(t); }
    /* 0059d441: mov ecx, dword ptr [0x7935c4] */ r_ecx = R32((u32)(0x7935c4u));
    /* 0059d447: mov edx, dword ptr [ecx + 0x9c] */ r_edx = R32((u32)(r_ecx+0x9cu));
    /* 0059d44d: mov eax, dword ptr [0x7935c4] */ r_eax = R32((u32)(0x7935c4u));
    /* 0059d452: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 0059d458: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0059d45a: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0059d45d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59d45fu); call_ind(t); }
    /* 0059d45f: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0059d461: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x59d466u); f_00686d82();
    /* 0059d466: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059d469: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0059d46c: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0059d473: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059d477: je 0x59d488 */ if (fZ) goto L_0059d488;
L_0059d479:; BB(0x0059d479);
    /* 0059d479: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059d47b: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0059d47e: call 0x6010a0 */ r_esp -= 4; W32(r_esp, 0x59d483u); f_006010a0();
    /* 0059d483: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0059d486: jmp 0x59d48f */ goto L_0059d48f;
L_0059d488:; BB(0x0059d488);
    /* 0059d488: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0059d48f:; BB(0x0059d48f);
    /* 0059d48f: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0059d492: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0059d495: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0059d49c: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0059d49f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059d4a0: mov eax, dword ptr [0x7935c4] */ r_eax = R32((u32)(0x7935c4u));
    /* 0059d4a5: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 0059d4ab: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x59d4b0u); f_005f5d50();
L_0059d4b0:; BB(0x0059d4b0);
    /* 0059d4b0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059d4b3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0059d4ba: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059d4bb: mov esp, ebp */ r_esp = r_ebp;
    /* 0059d4bd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059d4be: ret 4 */ FN_RET(0x0059d310); r_esp += 8; return;
}

void f_0059d870(void) /* sub_59D870 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0059d870);
    /* 0059d870: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059d871: mov ebp, esp */ r_ebp = r_esp;
    /* 0059d873: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0059d876: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0059d879: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0059d87f: call 0x637630 */ r_esp -= 4; W32(r_esp, 0x59d884u); f_00637630();
    /* 0059d884: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0059d887: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059d889: je 0x59d8bb */ if (fZ) goto L_0059d8bb;
L_0059d88b:; BB(0x0059d88b);
    /* 0059d88b: movzx ecx, byte ptr [0x795f94] */ r_ecx = (u32)R8((u32)(0x795f94u));
    /* 0059d892: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059d894: jne 0x59d8bb */ if (!fZ) goto L_0059d8bb;
L_0059d896:; BB(0x0059d896);
    /* 0059d896: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059d899: movzx eax, byte ptr [edx + 0x20] */ r_eax = (u32)R8((u32)(r_edx+0x20u));
    /* 0059d89d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059d89f: jne 0x59d8bb */ if (!fZ) goto L_0059d8bb;
L_0059d8a1:; BB(0x0059d8a1);
    /* 0059d8a1: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 0059d8a7: movzx edx, byte ptr [ecx + 0x103] */ r_edx = (u32)R8((u32)(r_ecx+0x103u));
    /* 0059d8ae: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059d8b0: jne 0x59d8bb */ if (!fZ) goto L_0059d8bb;
L_0059d8b2:; BB(0x0059d8b2);
    /* 0059d8b2: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 0059d8b9: jmp 0x59d8c2 */ goto L_0059d8c2;
L_0059d8bb:; BB(0x0059d8bb);
    /* 0059d8bb: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_0059d8c2:; BB(0x0059d8c2);
    /* 0059d8c2: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0059d8c5: mov esp, ebp */ r_esp = r_ebp;
    /* 0059d8c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059d8c8: ret  */ FN_RET(0x0059d870); r_esp += 4; return;
}

void f_0059dd90(void) /* sub_59DD90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0059dd90);
    /* 0059dd90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059dd91: mov ebp, esp */ r_ebp = r_esp;
    /* 0059dd93: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0059dd96: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0059dd99: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0059dd9f: call 0x637630 */ r_esp -= 4; W32(r_esp, 0x59dda4u); f_00637630();
    /* 0059dda4: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0059dda7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059dda9: je 0x59dddb */ if (fZ) goto L_0059dddb;
L_0059ddab:; BB(0x0059ddab);
    /* 0059ddab: movzx ecx, byte ptr [0x795f94] */ r_ecx = (u32)R8((u32)(0x795f94u));
    /* 0059ddb2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059ddb4: jne 0x59dddb */ if (!fZ) goto L_0059dddb;
L_0059ddb6:; BB(0x0059ddb6);
    /* 0059ddb6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059ddb9: movzx eax, byte ptr [edx + 0x24] */ r_eax = (u32)R8((u32)(r_edx+0x24u));
    /* 0059ddbd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059ddbf: jne 0x59dddb */ if (!fZ) goto L_0059dddb;
L_0059ddc1:; BB(0x0059ddc1);
    /* 0059ddc1: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 0059ddc7: movzx edx, byte ptr [ecx + 0x103] */ r_edx = (u32)R8((u32)(r_ecx+0x103u));
    /* 0059ddce: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059ddd0: jne 0x59dddb */ if (!fZ) goto L_0059dddb;
L_0059ddd2:; BB(0x0059ddd2);
    /* 0059ddd2: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 0059ddd9: jmp 0x59dde2 */ goto L_0059dde2;
L_0059dddb:; BB(0x0059dddb);
    /* 0059dddb: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_0059dde2:; BB(0x0059dde2);
    /* 0059dde2: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0059dde5: mov esp, ebp */ r_esp = r_ebp;
    /* 0059dde7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059dde8: ret  */ FN_RET(0x0059dd90); r_esp += 4; return;
}

