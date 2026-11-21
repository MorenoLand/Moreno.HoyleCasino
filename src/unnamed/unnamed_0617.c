#include "protos.h"

void f_006171a0(void) /* sub_6171A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006171a0);
    /* 006171a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006171a1: mov ebp, esp */ r_ebp = r_esp;
    /* 006171a3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006171a5: push 0x6ab26a */ { u32 v = 0x6ab26au; r_esp -= 4; W32(r_esp, v); }
    /* 006171aa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006171b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006171b1: sub esp, 0x2f0 */ {  u32 a = r_esp; u32 b = 0x2f0u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006171b7: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 006171bc: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006171be: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 006171c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006171c2: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 006171c5: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 006171cb: mov dword ptr [ebp - 0x2e0], ecx */ W32((u32)(r_ebp+0xfffffd20u), r_ecx);
    /* 006171d1: push 0x320 */ { u32 v = 0x320u; r_esp -= 4; W32(r_esp, v); }
    /* 006171d6: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x6171dbu); f_00686d82();
    /* 006171db: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006171de: mov dword ptr [ebp - 0x29c], eax */ W32((u32)(r_ebp+0xfffffd64u), r_eax);
    /* 006171e4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006171eb: cmp dword ptr [ebp - 0x29c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffd64u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006171f2: je 0x617207 */ if (fZ) goto L_00617207;
L_006171f4:; BB(0x006171f4);
    /* 006171f4: mov ecx, dword ptr [ebp - 0x29c] */ r_ecx = R32((u32)(r_ebp+0xfffffd64u));
    /* 006171fa: call 0x61f3d0 */ r_esp -= 4; W32(r_esp, 0x6171ffu); f_0061f3d0();
    /* 006171ff: mov dword ptr [ebp - 0x2e4], eax */ W32((u32)(r_ebp+0xfffffd1cu), r_eax);
    /* 00617205: jmp 0x617211 */ goto L_00617211;
L_00617207:; BB(0x00617207);
    /* 00617207: mov dword ptr [ebp - 0x2e4], 0 */ W32((u32)(r_ebp+0xfffffd1cu), 0x0u);
L_00617211:; BB(0x00617211);
    /* 00617211: mov eax, dword ptr [ebp - 0x2e4] */ r_eax = R32((u32)(r_ebp+0xfffffd1cu));
    /* 00617217: mov dword ptr [ebp - 0x298], eax */ W32((u32)(r_ebp+0xfffffd68u), r_eax);
    /* 0061721d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00617224: mov ecx, dword ptr [ebp - 0x298] */ r_ecx = R32((u32)(r_ebp+0xfffffd68u));
    /* 0061722a: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 0061722d: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 00617234: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0061723b: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 00617242: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00617249: mov byte ptr [ebp - 0xd], 0 */ W8((u32)(r_ebp+0xfffffff3u), 0x0u);
    /* 0061724d: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 00617254: jmp 0x61725f */ goto L_0061725f;
L_00617256:; BB(0x00617256);
    /* 00617256: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00617259: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061725c: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
L_0061725f:; BB(0x0061725f);
    /* 0061725f: cmp dword ptr [ebp - 0x18], 0x64 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00617263: jge 0x61730d */ if ((fS==fO)) goto L_0061730d;
L_00617269:; BB(0x00617269);
    /* 00617269: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 00617270: jmp 0x61727b */ goto L_0061727b;
L_00617272:; BB(0x00617272);
    /* 00617272: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00617275: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00617278: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
L_0061727b:; BB(0x0061727b);
    /* 0061727b: cmp dword ptr [ebp - 0x1c], 0x64 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061727f: jge 0x617308 */ if ((fS==fO)) goto L_00617308;
L_00617285:; BB(0x00617285);
    /* 00617285: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00617288: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00617289: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061728c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061728d: lea eax, [ebp - 0x14c] */ r_eax = (u32)(r_ebp+0xfffffeb4u);
    /* 00617293: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00617294: mov ecx, dword ptr [ebp - 0x2e0] */ r_ecx = R32((u32)(r_ebp+0xfffffd20u));
    /* 0061729a: call 0x616c20 */ r_esp -= 4; W32(r_esp, 0x61729fu); f_00616c20();
    /* 0061729f: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006172a2: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006172a6: jne 0x6172aa */ if (!fZ) goto L_006172aa;
L_006172a8:; BB(0x006172a8);
    /* 006172a8: jmp 0x617308 */ goto L_00617308;
L_006172aa:; BB(0x006172aa);
    /* 006172aa: lea ecx, [ebp - 0x30] */ r_ecx = (u32)(r_ebp+0xffffffd0u);
    /* 006172ad: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006172ae: lea edx, [ebp - 0x34] */ r_edx = (u32)(r_ebp+0xffffffccu);
    /* 006172b1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006172b2: lea eax, [ebp - 0x14] */ r_eax = (u32)(r_ebp+0xffffffecu);
    /* 006172b5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006172b6: lea ecx, [ebp - 0x3c] */ r_ecx = (u32)(r_ebp+0xffffffc4u);
    /* 006172b9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006172ba: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006172bd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006172be: call 0x617100 */ r_esp -= 4; W32(r_esp, 0x6172c3u); f_00617100();
    /* 006172c3: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006172c6: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006172c9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006172ca: call dword ptr [0x6b2258] */ { u32 t = R32((u32)(0x6b2258u)); r_esp -= 4; W32(r_esp, 0x6172d0u); call_ind(t); }
    /* 006172d0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006172d3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006172d6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006172d7: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 006172da: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006172db: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 006172de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006172df: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 006172e2: call 0x61f650 */ r_esp -= 4; W32(r_esp, 0x6172e7u); f_0061f650();
    /* 006172e7: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 006172ea: mov dword ptr [ebp - 0x2a0], ecx */ W32((u32)(r_ebp+0xfffffd60u), r_ecx);
    /* 006172f0: mov edx, dword ptr [ebp - 0x2a0] */ r_edx = R32((u32)(r_ebp+0xfffffd60u));
    /* 006172f6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006172f7: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x6172fcu); f_00686cae();
    /* 006172fc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006172ff: mov byte ptr [ebp - 0xd], 1 */ W8((u32)(r_ebp+0xfffffff3u), 0x1u);
    /* 00617303: jmp 0x617272 */ goto L_00617272;
L_00617308:; BB(0x00617308);
    /* 00617308: jmp 0x617256 */ goto L_00617256;
L_0061730d:; BB(0x0061730d);
    /* 0061730d: movzx eax, byte ptr [ebp - 0xd] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffff3u));
    /* 00617311: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617313: jne 0x61731a */ if (!fZ) goto L_0061731a;
L_00617315:; BB(0x00617315);
    /* 00617315: jmp 0x6179e0 */ goto L_006179e0;
L_0061731a:; BB(0x0061731a);
    /* 0061731a: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0061731d: call 0x61f850 */ r_esp -= 4; W32(r_esp, 0x617322u); f_0061f850();
    /* 00617322: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00617329: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061732d: jne 0x61745e */ if (!fZ) goto L_0061745e;
L_00617333:; BB(0x00617333);
    /* 00617333: mov ecx, dword ptr [ebp - 0x2e0] */ r_ecx = R32((u32)(r_ebp+0xfffffd20u));
    /* 00617339: movsx edx, byte ptr [ecx + 0x38] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x38u));
    /* 0061733d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061733f: je 0x61745e */ if (fZ) goto L_0061745e;
L_00617345:; BB(0x00617345);
    /* 00617345: mov eax, dword ptr [ebp - 0x2e0] */ r_eax = R32((u32)(r_ebp+0xfffffd20u));
    /* 0061734b: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061734e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061734f: lea ecx, [ebp - 0x254] */ r_ecx = (u32)(r_ebp+0xfffffdacu);
    /* 00617355: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00617356: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x61735bu); f_00686d8e();
    /* 0061735b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061735e: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 00617360: lea edx, [ebp - 0x254] */ r_edx = (u32)(r_ebp+0xfffffdacu);
    /* 00617366: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00617367: call dword ptr [0x6b2264] */ { u32 t = R32((u32)(0x6b2264u)); r_esp -= 4; W32(r_esp, 0x61736du); call_ind(t); }
    /* 0061736d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00617370: mov dword ptr [ebp - 0x25c], eax */ W32((u32)(r_ebp+0xfffffda4u), r_eax);
    /* 00617376: push 0x5c */ { u32 v = 0x5cu; r_esp -= 4; W32(r_esp, v); }
    /* 00617378: lea eax, [ebp - 0x254] */ r_eax = (u32)(r_ebp+0xfffffdacu);
    /* 0061737e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061737f: call dword ptr [0x6b2264] */ { u32 t = R32((u32)(0x6b2264u)); r_esp -= 4; W32(r_esp, 0x617385u); call_ind(t); }
    /* 00617385: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00617388: mov dword ptr [ebp - 0x258], eax */ W32((u32)(r_ebp+0xfffffda8u), r_eax);
    /* 0061738e: cmp dword ptr [ebp - 0x258], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffda8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617395: je 0x6173b8 */ if (fZ) goto L_006173b8;
L_00617397:; BB(0x00617397);
    /* 00617397: cmp dword ptr [ebp - 0x25c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffda4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061739e: je 0x6173b8 */ if (fZ) goto L_006173b8;
L_006173a0:; BB(0x006173a0);
    /* 006173a0: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 006173a6: cmp ecx, dword ptr [ebp - 0x258] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffda8u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006173ac: jae 0x6173b8 */ if (!fC) goto L_006173b8;
L_006173ae:; BB(0x006173ae);
    /* 006173ae: mov dword ptr [ebp - 0x25c], 0 */ W32((u32)(r_ebp+0xfffffda4u), 0x0u);
L_006173b8:; BB(0x006173b8);
    /* 006173b8: cmp dword ptr [ebp - 0x25c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffda4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006173bf: je 0x6173ca */ if (fZ) goto L_006173ca;
L_006173c1:; BB(0x006173c1);
    /* 006173c1: mov edx, dword ptr [ebp - 0x25c] */ r_edx = R32((u32)(r_ebp+0xfffffda4u));
    /* 006173c7: mov byte ptr [edx], 0 */ W8((u32)(r_edx), 0x0u);
L_006173ca:; BB(0x006173ca);
    /* 006173ca: push 0x6d8b6c */ { u32 v = 0x6d8b6cu; r_esp -= 4; W32(r_esp, v); }
    /* 006173cf: lea eax, [ebp - 0x254] */ r_eax = (u32)(r_ebp+0xfffffdacu);
    /* 006173d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006173d6: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x6173dbu); f_00686ec6();
    /* 006173db: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006173de: push 0x6d8b64 */ { u32 v = 0x6d8b64u; r_esp -= 4; W32(r_esp, v); }
    /* 006173e3: lea ecx, [ebp - 0x254] */ r_ecx = (u32)(r_ebp+0xfffffdacu);
    /* 006173e9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006173ea: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 006173f0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006173f2: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 006173f8: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 006173fb: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6173fdu); call_ind(t); }
    /* 006173fd: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00617400: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00617402: push 0x6d8b64 */ { u32 v = 0x6d8b64u; r_esp -= 4; W32(r_esp, v); }
    /* 00617407: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0061740a: call 0x607960 */ r_esp -= 4; W32(r_esp, 0x61740fu); f_00607960();
    /* 0061740f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617411: jne 0x61745e */ if (!fZ) goto L_0061745e;
L_00617413:; BB(0x00617413);
    /* 00617413: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00617416: mov dword ptr [ebp - 0x2a8], eax */ W32((u32)(r_ebp+0xfffffd58u), r_eax);
    /* 0061741c: mov ecx, dword ptr [ebp - 0x2a8] */ r_ecx = R32((u32)(r_ebp+0xfffffd58u));
    /* 00617422: mov dword ptr [ebp - 0x2a4], ecx */ W32((u32)(r_ebp+0xfffffd5cu), r_ecx);
    /* 00617428: cmp dword ptr [ebp - 0x2a4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffd5cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061742f: je 0x61744d */ if (fZ) goto L_0061744d;
L_00617431:; BB(0x00617431);
    /* 00617431: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00617433: mov edx, dword ptr [ebp - 0x2a4] */ r_edx = R32((u32)(r_ebp+0xfffffd5cu));
    /* 00617439: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0061743b: mov ecx, dword ptr [ebp - 0x2a4] */ r_ecx = R32((u32)(r_ebp+0xfffffd5cu));
    /* 00617441: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00617443: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x617445u); call_ind(t); }
    /* 00617445: mov dword ptr [ebp - 0x2e8], eax */ W32((u32)(r_ebp+0xfffffd18u), r_eax);
    /* 0061744b: jmp 0x617457 */ goto L_00617457;
L_0061744d:; BB(0x0061744d);
    /* 0061744d: mov dword ptr [ebp - 0x2e8], 0 */ W32((u32)(r_ebp+0xfffffd18u), 0x0u);
L_00617457:; BB(0x00617457);
    /* 00617457: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0061745e:; BB(0x0061745e);
    /* 0061745e: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617462: jne 0x61755b */ if (!fZ) goto L_0061755b;
L_00617468:; BB(0x00617468);
    /* 00617468: mov eax, dword ptr [ebp - 0x2e0] */ r_eax = R32((u32)(r_ebp+0xfffffd20u));
    /* 0061746e: movsx ecx, byte ptr [eax + 0x38] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x38u));
    /* 00617472: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617474: je 0x61755b */ if (fZ) goto L_0061755b;
L_0061747a:; BB(0x0061747a);
    /* 0061747a: mov edx, dword ptr [ebp - 0x2e0] */ r_edx = R32((u32)(r_ebp+0xfffffd20u));
    /* 00617480: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00617483: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00617484: lea eax, [ebp - 0x254] */ r_eax = (u32)(r_ebp+0xfffffdacu);
    /* 0061748a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061748b: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x617490u); f_00686d8e();
    /* 00617490: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00617493: push 0x5c */ { u32 v = 0x5cu; r_esp -= 4; W32(r_esp, v); }
    /* 00617495: lea ecx, [ebp - 0x254] */ r_ecx = (u32)(r_ebp+0xfffffdacu);
    /* 0061749b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061749c: call dword ptr [0x6b2264] */ { u32 t = R32((u32)(0x6b2264u)); r_esp -= 4; W32(r_esp, 0x6174a2u); call_ind(t); }
    /* 006174a2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006174a5: mov dword ptr [ebp - 0x260], eax */ W32((u32)(r_ebp+0xfffffda0u), r_eax);
    /* 006174ab: cmp dword ptr [ebp - 0x260], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffda0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006174b2: je 0x6174c0 */ if (fZ) goto L_006174c0;
L_006174b4:; BB(0x006174b4);
    /* 006174b4: mov edx, dword ptr [ebp - 0x260] */ r_edx = R32((u32)(r_ebp+0xfffffda0u));
    /* 006174ba: mov byte ptr [edx + 1], 0 */ W8((u32)(r_edx+0x1u), 0x0u);
    /* 006174be: jmp 0x6174c7 */ goto L_006174c7;
L_006174c0:; BB(0x006174c0);
    /* 006174c0: mov byte ptr [ebp - 0x254], 0 */ W8((u32)(r_ebp+0xfffffdacu), 0x0u);
L_006174c7:; BB(0x006174c7);
    /* 006174c7: push 0x6d8b5c */ { u32 v = 0x6d8b5cu; r_esp -= 4; W32(r_esp, v); }
    /* 006174cc: lea eax, [ebp - 0x254] */ r_eax = (u32)(r_ebp+0xfffffdacu);
    /* 006174d2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006174d3: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x6174d8u); f_00686ec6();
    /* 006174d8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006174db: push 0x6d8b64 */ { u32 v = 0x6d8b64u; r_esp -= 4; W32(r_esp, v); }
    /* 006174e0: lea ecx, [ebp - 0x254] */ r_ecx = (u32)(r_ebp+0xfffffdacu);
    /* 006174e6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006174e7: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 006174ed: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006174ef: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 006174f5: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 006174f8: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6174fau); call_ind(t); }
    /* 006174fa: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 006174fd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006174ff: push 0x6d8b64 */ { u32 v = 0x6d8b64u; r_esp -= 4; W32(r_esp, v); }
    /* 00617504: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00617507: call 0x607960 */ r_esp -= 4; W32(r_esp, 0x61750cu); f_00607960();
    /* 0061750c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061750e: jne 0x61755b */ if (!fZ) goto L_0061755b;
L_00617510:; BB(0x00617510);
    /* 00617510: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00617513: mov dword ptr [ebp - 0x2b0], eax */ W32((u32)(r_ebp+0xfffffd50u), r_eax);
    /* 00617519: mov ecx, dword ptr [ebp - 0x2b0] */ r_ecx = R32((u32)(r_ebp+0xfffffd50u));
    /* 0061751f: mov dword ptr [ebp - 0x2ac], ecx */ W32((u32)(r_ebp+0xfffffd54u), r_ecx);
    /* 00617525: cmp dword ptr [ebp - 0x2ac], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffd54u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061752c: je 0x61754a */ if (fZ) goto L_0061754a;
L_0061752e:; BB(0x0061752e);
    /* 0061752e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00617530: mov edx, dword ptr [ebp - 0x2ac] */ r_edx = R32((u32)(r_ebp+0xfffffd54u));
    /* 00617536: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00617538: mov ecx, dword ptr [ebp - 0x2ac] */ r_ecx = R32((u32)(r_ebp+0xfffffd54u));
    /* 0061753e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00617540: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x617542u); call_ind(t); }
    /* 00617542: mov dword ptr [ebp - 0x2ec], eax */ W32((u32)(r_ebp+0xfffffd14u), r_eax);
    /* 00617548: jmp 0x617554 */ goto L_00617554;
L_0061754a:; BB(0x0061754a);
    /* 0061754a: mov dword ptr [ebp - 0x2ec], 0 */ W32((u32)(r_ebp+0xfffffd14u), 0x0u);
L_00617554:; BB(0x00617554);
    /* 00617554: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0061755b:; BB(0x0061755b);
    /* 0061755b: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061755f: jne 0x617622 */ if (!fZ) goto L_00617622;
L_00617565:; BB(0x00617565);
    /* 00617565: mov eax, dword ptr [ebp - 0x2e0] */ r_eax = R32((u32)(r_ebp+0xfffffd20u));
    /* 0061756b: cmp dword ptr [eax + 0x34], 0 */ {  u32 a = R32((u32)(r_eax+0x34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061756f: je 0x617622 */ if (fZ) goto L_00617622;
L_00617575:; BB(0x00617575);
    /* 00617575: mov ecx, dword ptr [ebp - 0x2e0] */ r_ecx = R32((u32)(r_ebp+0xfffffd20u));
    /* 0061757b: mov edx, dword ptr [ecx + 0x34] */ r_edx = R32((u32)(r_ecx+0x34u));
    /* 0061757e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061757f: push 0x6d8b4c */ { u32 v = 0x6d8b4cu; r_esp -= 4; W32(r_esp, v); }
    /* 00617584: lea eax, [ebp - 0x254] */ r_eax = (u32)(r_ebp+0xfffffdacu);
    /* 0061758a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061758b: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x617591u); call_ind(t); }
    /* 00617591: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00617594: lea ecx, [ebp - 0x254] */ r_ecx = (u32)(r_ebp+0xfffffdacu);
    /* 0061759a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061759b: call 0x5ea5b0 */ r_esp -= 4; W32(r_esp, 0x6175a0u); f_005ea5b0();
    /* 006175a0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006175a3: push 0x6d8b64 */ { u32 v = 0x6d8b64u; r_esp -= 4; W32(r_esp, v); }
    /* 006175a8: lea edx, [ebp - 0x254] */ r_edx = (u32)(r_ebp+0xfffffdacu);
    /* 006175ae: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006175af: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 006175b4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006175b6: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 006175bc: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 006175bf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6175c1u); call_ind(t); }
    /* 006175c1: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 006175c4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006175c6: push 0x6d8b64 */ { u32 v = 0x6d8b64u; r_esp -= 4; W32(r_esp, v); }
    /* 006175cb: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006175ce: call 0x607960 */ r_esp -= 4; W32(r_esp, 0x6175d3u); f_00607960();
    /* 006175d3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006175d5: jne 0x617622 */ if (!fZ) goto L_00617622;
L_006175d7:; BB(0x006175d7);
    /* 006175d7: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006175da: mov dword ptr [ebp - 0x2b8], ecx */ W32((u32)(r_ebp+0xfffffd48u), r_ecx);
    /* 006175e0: mov edx, dword ptr [ebp - 0x2b8] */ r_edx = R32((u32)(r_ebp+0xfffffd48u));
    /* 006175e6: mov dword ptr [ebp - 0x2b4], edx */ W32((u32)(r_ebp+0xfffffd4cu), r_edx);
    /* 006175ec: cmp dword ptr [ebp - 0x2b4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffd4cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006175f3: je 0x617611 */ if (fZ) goto L_00617611;
L_006175f5:; BB(0x006175f5);
    /* 006175f5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006175f7: mov eax, dword ptr [ebp - 0x2b4] */ r_eax = R32((u32)(r_ebp+0xfffffd4cu));
    /* 006175fd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006175ff: mov ecx, dword ptr [ebp - 0x2b4] */ r_ecx = R32((u32)(r_ebp+0xfffffd4cu));
    /* 00617605: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00617607: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x617609u); call_ind(t); }
    /* 00617609: mov dword ptr [ebp - 0x2f0], eax */ W32((u32)(r_ebp+0xfffffd10u), r_eax);
    /* 0061760f: jmp 0x61761b */ goto L_0061761b;
L_00617611:; BB(0x00617611);
    /* 00617611: mov dword ptr [ebp - 0x2f0], 0 */ W32((u32)(r_ebp+0xfffffd10u), 0x0u);
L_0061761b:; BB(0x0061761b);
    /* 0061761b: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00617622:; BB(0x00617622);
    /* 00617622: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617626: jne 0x6176e0 */ if (!fZ) goto L_006176e0;
L_0061762c:; BB(0x0061762c);
    /* 0061762c: mov ecx, dword ptr [ebp - 0x2e0] */ r_ecx = R32((u32)(r_ebp+0xfffffd20u));
    /* 00617632: cmp dword ptr [ecx + 0x34], 0 */ {  u32 a = R32((u32)(r_ecx+0x34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617636: je 0x6176e0 */ if (fZ) goto L_006176e0;
L_0061763c:; BB(0x0061763c);
    /* 0061763c: push 0x6d8b3c */ { u32 v = 0x6d8b3cu; r_esp -= 4; W32(r_esp, v); }
    /* 00617641: lea edx, [ebp - 0x254] */ r_edx = (u32)(r_ebp+0xfffffdacu);
    /* 00617647: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00617648: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x61764eu); call_ind(t); }
    /* 0061764e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00617651: lea eax, [ebp - 0x254] */ r_eax = (u32)(r_ebp+0xfffffdacu);
    /* 00617657: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00617658: call 0x5ea5b0 */ r_esp -= 4; W32(r_esp, 0x61765du); f_005ea5b0();
    /* 0061765d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00617660: push 0x6d8b64 */ { u32 v = 0x6d8b64u; r_esp -= 4; W32(r_esp, v); }
    /* 00617665: lea ecx, [ebp - 0x254] */ r_ecx = (u32)(r_ebp+0xfffffdacu);
    /* 0061766b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061766c: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 00617672: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00617674: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 0061767a: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 0061767d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x61767fu); call_ind(t); }
    /* 0061767f: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00617682: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00617684: push 0x6d8b64 */ { u32 v = 0x6d8b64u; r_esp -= 4; W32(r_esp, v); }
    /* 00617689: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0061768c: call 0x607960 */ r_esp -= 4; W32(r_esp, 0x617691u); f_00607960();
    /* 00617691: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617693: jne 0x6176e0 */ if (!fZ) goto L_006176e0;
L_00617695:; BB(0x00617695);
    /* 00617695: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00617698: mov dword ptr [ebp - 0x2c0], eax */ W32((u32)(r_ebp+0xfffffd40u), r_eax);
    /* 0061769e: mov ecx, dword ptr [ebp - 0x2c0] */ r_ecx = R32((u32)(r_ebp+0xfffffd40u));
    /* 006176a4: mov dword ptr [ebp - 0x2bc], ecx */ W32((u32)(r_ebp+0xfffffd44u), r_ecx);
    /* 006176aa: cmp dword ptr [ebp - 0x2bc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffd44u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006176b1: je 0x6176cf */ if (fZ) goto L_006176cf;
L_006176b3:; BB(0x006176b3);
    /* 006176b3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006176b5: mov edx, dword ptr [ebp - 0x2bc] */ r_edx = R32((u32)(r_ebp+0xfffffd44u));
    /* 006176bb: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006176bd: mov ecx, dword ptr [ebp - 0x2bc] */ r_ecx = R32((u32)(r_ebp+0xfffffd44u));
    /* 006176c3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006176c5: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6176c7u); call_ind(t); }
    /* 006176c7: mov dword ptr [ebp - 0x2f4], eax */ W32((u32)(r_ebp+0xfffffd0cu), r_eax);
    /* 006176cd: jmp 0x6176d9 */ goto L_006176d9;
L_006176cf:; BB(0x006176cf);
    /* 006176cf: mov dword ptr [ebp - 0x2f4], 0 */ W32((u32)(r_ebp+0xfffffd0cu), 0x0u);
L_006176d9:; BB(0x006176d9);
    /* 006176d9: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_006176e0:; BB(0x006176e0);
    /* 006176e0: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006176e4: je 0x617714 */ if (fZ) goto L_00617714;
L_006176e6:; BB(0x006176e6);
    /* 006176e6: mov eax, dword ptr [ebp - 0x2e0] */ r_eax = R32((u32)(r_ebp+0xfffffd20u));
    /* 006176ec: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 006176ef: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006176f0: push 0x6b2828 */ { u32 v = 0x6b2828u; r_esp -= 4; W32(r_esp, v); }
    /* 006176f5: lea edx, [ebp - 0x254] */ r_edx = (u32)(r_ebp+0xfffffdacu);
    /* 006176fb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006176fc: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x617702u); call_ind(t); }
    /* 00617702: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00617705: lea eax, [ebp - 0x254] */ r_eax = (u32)(r_ebp+0xfffffdacu);
    /* 0061770b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061770c: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0061770f: call 0x6078d0 */ r_esp -= 4; W32(r_esp, 0x617714u); f_006078d0();
L_00617714:; BB(0x00617714);
    /* 00617714: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 0061771b: jmp 0x617726 */ goto L_00617726;
L_0061771d:; BB(0x0061771d);
    /* 0061771d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00617720: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00617723: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
L_00617726:; BB(0x00617726);
    /* 00617726: cmp dword ptr [ebp - 0x18], 0x64 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061772a: jge 0x6178c5 */ if ((fS==fO)) goto L_006178c5;
L_00617730:; BB(0x00617730);
    /* 00617730: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 00617737: jmp 0x617742 */ goto L_00617742;
L_00617739:; BB(0x00617739);
    /* 00617739: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0061773c: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061773f: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
L_00617742:; BB(0x00617742);
    /* 00617742: cmp dword ptr [ebp - 0x1c], 0x64 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00617746: jge 0x6178b8 */ if ((fS==fO)) goto L_006178b8;
L_0061774c:; BB(0x0061774c);
    /* 0061774c: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0061774f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00617750: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00617753: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00617754: lea edx, [ebp - 0x14c] */ r_edx = (u32)(r_ebp+0xfffffeb4u);
    /* 0061775a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061775b: mov ecx, dword ptr [ebp - 0x2e0] */ r_ecx = R32((u32)(r_ebp+0xfffffd20u));
    /* 00617761: call 0x616c20 */ r_esp -= 4; W32(r_esp, 0x617766u); f_00616c20();
    /* 00617766: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00617769: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061776d: jne 0x617774 */ if (!fZ) goto L_00617774;
L_0061776f:; BB(0x0061776f);
    /* 0061776f: jmp 0x6178b8 */ goto L_006178b8;
L_00617774:; BB(0x00617774);
    /* 00617774: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617778: jne 0x617788 */ if (!fZ) goto L_00617788;
L_0061777a:; BB(0x0061777a);
    /* 0061777a: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061777e: je 0x617788 */ if (fZ) goto L_00617788;
L_00617780:; BB(0x00617780);
    /* 00617780: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00617783: call 0x6200e0 */ r_esp -= 4; W32(r_esp, 0x617788u); f_006200e0();
L_00617788:; BB(0x00617788);
    /* 00617788: lea eax, [ebp - 0x30] */ r_eax = (u32)(r_ebp+0xffffffd0u);
    /* 0061778b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061778c: lea ecx, [ebp - 0x34] */ r_ecx = (u32)(r_ebp+0xffffffccu);
    /* 0061778f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00617790: lea edx, [ebp - 0x14] */ r_edx = (u32)(r_ebp+0xffffffecu);
    /* 00617793: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00617794: lea eax, [ebp - 0x3c] */ r_eax = (u32)(r_ebp+0xffffffc4u);
    /* 00617797: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00617798: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061779b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061779c: call 0x617100 */ r_esp -= 4; W32(r_esp, 0x6177a1u); f_00617100();
    /* 006177a1: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006177a4: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006177a7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006177a8: call dword ptr [0x6b2258] */ { u32 t = R32((u32)(0x6b2258u)); r_esp -= 4; W32(r_esp, 0x6177aeu); call_ind(t); }
    /* 006177ae: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006177b1: mov dword ptr [ebp - 0x264], 4 */ W32((u32)(r_ebp+0xfffffd9cu), 0x4u);
    /* 006177bb: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006177bf: je 0x6177fa */ if (fZ) goto L_006177fa;
L_006177c1:; BB(0x006177c1);
    /* 006177c1: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006177c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006177c5: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006177c8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006177c9: push 0x6d8b30 */ { u32 v = 0x6d8b30u; r_esp -= 4; W32(r_esp, v); }
    /* 006177ce: lea edx, [ebp - 0x278] */ r_edx = (u32)(r_ebp+0xfffffd88u);
    /* 006177d4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006177d5: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x6177dbu); call_ind(t); }
    /* 006177db: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006177de: mov eax, dword ptr [ebp - 0x264] */ r_eax = R32((u32)(r_ebp+0xfffffd9cu));
    /* 006177e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006177e5: lea ecx, [ebp - 0x278] */ r_ecx = (u32)(r_ebp+0xfffffd88u);
    /* 006177eb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006177ec: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006177ef: call 0x607960 */ r_esp -= 4; W32(r_esp, 0x6177f4u); f_00607960();
    /* 006177f4: mov dword ptr [ebp - 0x264], eax */ W32((u32)(r_ebp+0xfffffd9cu), r_eax);
L_006177fa:; BB(0x006177fa);
    /* 006177fa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006177fc: mov edx, dword ptr [ebp - 0x264] */ r_edx = R32((u32)(r_ebp+0xfffffd9cu));
    /* 00617802: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00617803: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00617806: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00617807: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0061780a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061780b: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0061780e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061780f: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00617812: call 0x61f8a0 */ r_esp -= 4; W32(r_esp, 0x617817u); f_0061f8a0();
    /* 00617817: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0061781a: mov dword ptr [ebp - 0x2c4], eax */ W32((u32)(r_ebp+0xfffffd3cu), r_eax);
    /* 00617820: mov ecx, dword ptr [ebp - 0x2c4] */ r_ecx = R32((u32)(r_ebp+0xfffffd3cu));
    /* 00617826: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00617827: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x61782cu); f_00686cae();
    /* 0061782c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061782f: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617833: je 0x6178b3 */ if (fZ) goto L_006178b3;
L_00617835:; BB(0x00617835);
    /* 00617835: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00617838: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00617839: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061783c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061783d: push 0x6d8b24 */ { u32 v = 0x6d8b24u; r_esp -= 4; W32(r_esp, v); }
    /* 00617842: lea ecx, [ebp - 0x294] */ r_ecx = (u32)(r_ebp+0xfffffd6cu);
    /* 00617848: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00617849: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x61784fu); call_ind(t); }
    /* 0061784f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00617852: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00617854: lea edx, [ebp - 0x294] */ r_edx = (u32)(r_ebp+0xfffffd6cu);
    /* 0061785a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061785b: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0061785e: call 0x607960 */ r_esp -= 4; W32(r_esp, 0x617863u); f_00607960();
    /* 00617863: mov dword ptr [ebp - 0x280], eax */ W32((u32)(r_ebp+0xfffffd80u), r_eax);
    /* 00617869: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0061786c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061786d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00617870: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00617871: push 0x6d8b18 */ { u32 v = 0x6d8b18u; r_esp -= 4; W32(r_esp, v); }
    /* 00617876: lea edx, [ebp - 0x294] */ r_edx = (u32)(r_ebp+0xfffffd6cu);
    /* 0061787c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061787d: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x617883u); call_ind(t); }
    /* 00617883: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00617886: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00617888: lea eax, [ebp - 0x294] */ r_eax = (u32)(r_ebp+0xfffffd6cu);
    /* 0061788e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061788f: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00617892: call 0x607960 */ r_esp -= 4; W32(r_esp, 0x617897u); f_00607960();
    /* 00617897: mov dword ptr [ebp - 0x27c], eax */ W32((u32)(r_ebp+0xfffffd84u), r_eax);
    /* 0061789d: mov ecx, dword ptr [ebp - 0x27c] */ r_ecx = R32((u32)(r_ebp+0xfffffd84u));
    /* 006178a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006178a4: mov edx, dword ptr [ebp - 0x280] */ r_edx = R32((u32)(r_ebp+0xfffffd80u));
    /* 006178aa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006178ab: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 006178ae: call 0x620050 */ r_esp -= 4; W32(r_esp, 0x6178b3u); f_00620050();
L_006178b3:; BB(0x006178b3);
    /* 006178b3: jmp 0x617739 */ goto L_00617739;
L_006178b8:; BB(0x006178b8);
    /* 006178b8: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006178bc: jne 0x6178c0 */ if (!fZ) goto L_006178c0;
L_006178be:; BB(0x006178be);
    /* 006178be: jmp 0x6178c5 */ goto L_006178c5;
L_006178c0:; BB(0x006178c0);
    /* 006178c0: jmp 0x61771d */ goto L_0061771d;
L_006178c5:; BB(0x006178c5);
    /* 006178c5: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006178c9: je 0x617916 */ if (fZ) goto L_00617916;
L_006178cb:; BB(0x006178cb);
    /* 006178cb: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 006178ce: mov dword ptr [ebp - 0x2cc], eax */ W32((u32)(r_ebp+0xfffffd34u), r_eax);
    /* 006178d4: mov ecx, dword ptr [ebp - 0x2cc] */ r_ecx = R32((u32)(r_ebp+0xfffffd34u));
    /* 006178da: mov dword ptr [ebp - 0x2c8], ecx */ W32((u32)(r_ebp+0xfffffd38u), r_ecx);
    /* 006178e0: cmp dword ptr [ebp - 0x2c8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffd38u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006178e7: je 0x617905 */ if (fZ) goto L_00617905;
L_006178e9:; BB(0x006178e9);
    /* 006178e9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006178eb: mov edx, dword ptr [ebp - 0x2c8] */ r_edx = R32((u32)(r_ebp+0xfffffd38u));
    /* 006178f1: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006178f3: mov ecx, dword ptr [ebp - 0x2c8] */ r_ecx = R32((u32)(r_ebp+0xfffffd38u));
    /* 006178f9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006178fb: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6178fdu); call_ind(t); }
    /* 006178fd: mov dword ptr [ebp - 0x2f8], eax */ W32((u32)(r_ebp+0xfffffd08u), r_eax);
    /* 00617903: jmp 0x61790f */ goto L_0061790f;
L_00617905:; BB(0x00617905);
    /* 00617905: mov dword ptr [ebp - 0x2f8], 0 */ W32((u32)(r_ebp+0xfffffd08u), 0x0u);
L_0061790f:; BB(0x0061790f);
    /* 0061790f: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00617916:; BB(0x00617916);
    /* 00617916: mov eax, dword ptr [ebp - 0x2e0] */ r_eax = R32((u32)(r_ebp+0xfffffd20u));
    /* 0061791c: cmp dword ptr [eax + 0x158], 0 */ {  u32 a = R32((u32)(r_eax+0x158u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617923: je 0x617946 */ if (fZ) goto L_00617946;
L_00617925:; BB(0x00617925);
    /* 00617925: mov ecx, dword ptr [ebp - 0x2e0] */ r_ecx = R32((u32)(r_ebp+0xfffffd20u));
    /* 0061792b: mov edx, dword ptr [ecx + 0x158] */ r_edx = R32((u32)(r_ecx+0x158u));
    /* 00617931: mov dword ptr [ebp - 0x2d0], edx */ W32((u32)(r_ebp+0xfffffd30u), r_edx);
    /* 00617937: mov eax, dword ptr [ebp - 0x2d0] */ r_eax = R32((u32)(r_ebp+0xfffffd30u));
    /* 0061793d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061793e: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x617943u); f_00686cae();
    /* 00617943: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00617946:; BB(0x00617946);
    /* 00617946: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00617949: call 0x620540 */ r_esp -= 4; W32(r_esp, 0x61794eu); f_00620540();
    /* 0061794e: mov ecx, dword ptr [ebp - 0x2e0] */ r_ecx = R32((u32)(r_ebp+0xfffffd20u));
    /* 00617954: mov dword ptr [ecx + 0x14c], eax */ W32((u32)(r_ecx+0x14cu), r_eax);
    /* 0061795a: mov edx, dword ptr [ebp - 0x2e0] */ r_edx = R32((u32)(r_ebp+0xfffffd20u));
    /* 00617960: mov eax, dword ptr [edx + 0x14c] */ r_eax = R32((u32)(r_edx+0x14cu));
    /* 00617966: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00617967: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x61796cu); f_00686d82();
    /* 0061796c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061796f: mov dword ptr [ebp - 0x2d4], eax */ W32((u32)(r_ebp+0xfffffd2cu), r_eax);
    /* 00617975: mov ecx, dword ptr [ebp - 0x2e0] */ r_ecx = R32((u32)(r_ebp+0xfffffd20u));
    /* 0061797b: mov edx, dword ptr [ebp - 0x2d4] */ r_edx = R32((u32)(r_ebp+0xfffffd2cu));
    /* 00617981: mov dword ptr [ecx + 0x158], edx */ W32((u32)(r_ecx+0x158u), r_edx);
    /* 00617987: mov eax, dword ptr [ebp - 0x2e0] */ r_eax = R32((u32)(r_ebp+0xfffffd20u));
    /* 0061798d: mov ecx, dword ptr [eax + 0x158] */ r_ecx = R32((u32)(r_eax+0x158u));
    /* 00617993: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00617994: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00617997: call 0x6201c0 */ r_esp -= 4; W32(r_esp, 0x61799cu); f_006201c0();
    /* 0061799c: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0061799f: mov dword ptr [ebp - 0x2dc], edx */ W32((u32)(r_ebp+0xfffffd24u), r_edx);
    /* 006179a5: mov eax, dword ptr [ebp - 0x2dc] */ r_eax = R32((u32)(r_ebp+0xfffffd24u));
    /* 006179ab: mov dword ptr [ebp - 0x2d8], eax */ W32((u32)(r_ebp+0xfffffd28u), r_eax);
    /* 006179b1: cmp dword ptr [ebp - 0x2d8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffd28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006179b8: je 0x6179d6 */ if (fZ) goto L_006179d6;
L_006179ba:; BB(0x006179ba);
    /* 006179ba: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006179bc: mov ecx, dword ptr [ebp - 0x2d8] */ r_ecx = R32((u32)(r_ebp+0xfffffd28u));
    /* 006179c2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006179c4: mov ecx, dword ptr [ebp - 0x2d8] */ r_ecx = R32((u32)(r_ebp+0xfffffd28u));
    /* 006179ca: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006179cc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6179ceu); call_ind(t); }
    /* 006179ce: mov dword ptr [ebp - 0x2fc], eax */ W32((u32)(r_ebp+0xfffffd04u), r_eax);
    /* 006179d4: jmp 0x6179e0 */ goto L_006179e0;
L_006179d6:; BB(0x006179d6);
    /* 006179d6: mov dword ptr [ebp - 0x2fc], 0 */ W32((u32)(r_ebp+0xfffffd04u), 0x0u);
L_006179e0:; BB(0x006179e0);
    /* 006179e0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006179e3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006179ea: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006179eb: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 006179ee: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006179f0: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x6179f5u); f_00686d72();
    /* 006179f5: mov esp, ebp */ r_esp = r_ebp;
    /* 006179f7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006179f8: ret 4 */ FN_RET(0x006171a0); r_esp += 8; return;
}

void f_00617a30(void) /* sub_617A30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00617a30);
    /* 00617a30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00617a31: mov ebp, esp */ r_ebp = r_esp;
    /* 00617a33: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00617a36: lea eax, [ebp + 0xc] */ r_eax = (u32)(r_ebp+0xcu);
    /* 00617a39: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00617a3c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00617a3f: mov dl, byte ptr [ecx + 2] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x2u))) & 0xffu);
    /* 00617a42: mov byte ptr [ebp - 8], dl */ W8((u32)(r_ebp+0xfffffff8u), (u8)r_edx);
    /* 00617a45: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00617a48: mov cl, byte ptr [eax + 1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x1u))) & 0xffu);
    /* 00617a4b: mov byte ptr [ebp - 7], cl */ W8((u32)(r_ebp+0xfffffff9u), (u8)r_ecx);
    /* 00617a4e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00617a51: mov al, byte ptr [edx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 00617a53: mov byte ptr [ebp - 6], al */ W8((u32)(r_ebp+0xfffffffau), (u8)r_eax);
    /* 00617a56: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00617a59: mov dx, word ptr [ebp - 8] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 00617a5d: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
    /* 00617a60: mov al, byte ptr [ebp - 6] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffffau))) & 0xffu);
    /* 00617a63: mov byte ptr [ecx + 2], al */ W8((u32)(r_ecx+0x2u), (u8)r_eax);
    /* 00617a66: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00617a69: mov esp, ebp */ r_esp = r_ebp;
    /* 00617a6b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00617a6c: ret  */ FN_RET(0x00617a30); r_esp += 4; return;
}

void f_00617a70(void) /* sub_617A70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00617a70);
    /* 00617a70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00617a71: mov ebp, esp */ r_ebp = r_esp;
    /* 00617a73: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00617a76: lea eax, [ebp + 8] */ r_eax = (u32)(r_ebp+0x8u);
    /* 00617a79: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00617a7c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00617a7f: mov dl, byte ptr [ecx + 2] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x2u))) & 0xffu);
    /* 00617a82: mov byte ptr [ebp - 8], dl */ W8((u32)(r_ebp+0xfffffff8u), (u8)r_edx);
    /* 00617a85: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00617a88: mov cl, byte ptr [eax + 1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x1u))) & 0xffu);
    /* 00617a8b: mov byte ptr [ebp - 7], cl */ W8((u32)(r_ebp+0xfffffff9u), (u8)r_ecx);
    /* 00617a8e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00617a91: mov al, byte ptr [edx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 00617a93: mov byte ptr [ebp - 6], al */ W8((u32)(r_ebp+0xfffffffau), (u8)r_eax);
    /* 00617a96: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00617a99: mov dl, byte ptr [ecx + 3] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x3u))) & 0xffu);
    /* 00617a9c: mov byte ptr [ebp - 5], dl */ W8((u32)(r_ebp+0xfffffffbu), (u8)r_edx);
    /* 00617a9f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00617aa2: mov esp, ebp */ r_esp = r_ebp;
    /* 00617aa4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00617aa5: ret  */ FN_RET(0x00617a70); r_esp += 4; return;
}

void f_00617ab0(void) /* sub_617AB0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00617ab0);
    /* 00617ab0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00617ab1: mov ebp, esp */ r_ebp = r_esp;
    /* 00617ab3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00617ab6: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 00617ab9: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00617abc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00617abf: mov dl, byte ptr [ebp + 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 00617ac2: mov byte ptr [ecx + 2], dl */ W8((u32)(r_ecx+0x2u), (u8)r_edx);
    /* 00617ac5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00617ac8: mov cl, byte ptr [ebp + 0xc] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 00617acb: mov byte ptr [eax + 1], cl */ W8((u32)(r_eax+0x1u), (u8)r_ecx);
    /* 00617ace: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00617ad1: mov al, byte ptr [ebp + 0x10] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x10u))) & 0xffu);
    /* 00617ad4: mov byte ptr [edx], al */ W8((u32)(r_edx), (u8)r_eax);
    /* 00617ad6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00617ad9: mov byte ptr [ecx + 3], 0xff */ W8((u32)(r_ecx+0x3u), 0xffu);
    /* 00617add: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00617ae0: mov esp, ebp */ r_esp = r_ebp;
    /* 00617ae2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00617ae3: ret  */ FN_RET(0x00617ab0); r_esp += 4; return;
}

void f_00617af0(void) /* sub_617AF0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00617af0);
    /* 00617af0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00617af1: mov ebp, esp */ r_ebp = r_esp;
    /* 00617af3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00617af6: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 00617af9: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00617afc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00617aff: mov dl, byte ptr [ebp + 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 00617b02: mov byte ptr [ecx + 2], dl */ W8((u32)(r_ecx+0x2u), (u8)r_edx);
    /* 00617b05: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00617b08: mov cl, byte ptr [ebp + 9] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x9u))) & 0xffu);
    /* 00617b0b: mov byte ptr [eax + 1], cl */ W8((u32)(r_eax+0x1u), (u8)r_ecx);
    /* 00617b0e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00617b11: mov al, byte ptr [ebp + 0xa] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xau))) & 0xffu);
    /* 00617b14: mov byte ptr [edx], al */ W8((u32)(r_edx), (u8)r_eax);
    /* 00617b16: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00617b19: mov byte ptr [ecx + 3], 0xff */ W8((u32)(r_ecx+0x3u), 0xffu);
    /* 00617b1d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00617b20: mov esp, ebp */ r_esp = r_ebp;
    /* 00617b22: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00617b23: ret  */ FN_RET(0x00617af0); r_esp += 4; return;
}

void f_00617b30(void) /* sub_617B30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00617b30);
    /* 00617b30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00617b31: mov ebp, esp */ r_ebp = r_esp;
    /* 00617b33: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00617b36: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 00617b39: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00617b3c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00617b3f: mov dl, byte ptr [ebp + 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 00617b42: mov byte ptr [ecx + 2], dl */ W8((u32)(r_ecx+0x2u), (u8)r_edx);
    /* 00617b45: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00617b48: mov cl, byte ptr [ebp + 9] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x9u))) & 0xffu);
    /* 00617b4b: mov byte ptr [eax + 1], cl */ W8((u32)(r_eax+0x1u), (u8)r_ecx);
    /* 00617b4e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00617b51: mov al, byte ptr [ebp + 0xa] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xau))) & 0xffu);
    /* 00617b54: mov byte ptr [edx], al */ W8((u32)(r_edx), (u8)r_eax);
    /* 00617b56: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00617b59: mov dl, byte ptr [ebp + 0xb] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xbu))) & 0xffu);
    /* 00617b5c: mov byte ptr [ecx + 3], dl */ W8((u32)(r_ecx+0x3u), (u8)r_edx);
    /* 00617b5f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00617b62: mov esp, ebp */ r_esp = r_ebp;
    /* 00617b64: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00617b65: ret  */ FN_RET(0x00617b30); r_esp += 4; return;
}

void f_00617b70(void) /* sub_617B70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00617b70);
    /* 00617b70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00617b71: mov ebp, esp */ r_ebp = r_esp;
    /* 00617b73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00617b74: cmp dword ptr [ebp + 0x10], 0x80 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617b7b: je 0x617ba1 */ if (fZ) goto L_00617ba1;
L_00617b7d:; BB(0x00617b7d);
    /* 00617b7d: cmp dword ptr [ebp + 0x10], 0x82 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x82u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617b84: je 0x617ba1 */ if (fZ) goto L_00617ba1;
L_00617b86:; BB(0x00617b86);
    /* 00617b86: cmp dword ptr [ebp + 0x10], 0x84 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x84u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617b8d: je 0x617ba1 */ if (fZ) goto L_00617ba1;
L_00617b8f:; BB(0x00617b8f);
    /* 00617b8f: cmp dword ptr [ebp + 0x10], 0x88 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x88u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617b96: je 0x617ba1 */ if (fZ) goto L_00617ba1;
L_00617b98:; BB(0x00617b98);
    /* 00617b98: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00617b9f: jmp 0x617ba8 */ goto L_00617ba8;
L_00617ba1:; BB(0x00617ba1);
    /* 00617ba1: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
L_00617ba8:; BB(0x00617ba8);
    /* 00617ba8: movzx eax, byte ptr [ebp - 4] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffffcu));
    /* 00617bac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617bae: jne 0x617bdf */ if (!fZ) goto L_00617bdf;
L_00617bb0:; BB(0x00617bb0);
    /* 00617bb0: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617bb4: jne 0x617bc0 */ if (!fZ) goto L_00617bc0;
L_00617bb6:; BB(0x00617bb6);
    /* 00617bb6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00617bb9: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 00617bbc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617bbe: je 0x617bd0 */ if (fZ) goto L_00617bd0;
L_00617bc0:; BB(0x00617bc0);
    /* 00617bc0: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617bc4: je 0x617bd9 */ if (fZ) goto L_00617bd9;
L_00617bc6:; BB(0x00617bc6);
    /* 00617bc6: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00617bc9: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 00617bcc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617bce: jne 0x617bd9 */ if (!fZ) goto L_00617bd9;
L_00617bd0:; BB(0x00617bd0);
    /* 00617bd0: mov eax, 1 */ r_eax = 0x1u;
    /* 00617bd5: jmp 0x617c20 */ goto L_00617c20;
L_00617bd9:; BB(0x00617bd9);
    /* 00617bd9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00617bdb: jmp 0x617c20 */ goto L_00617c20;
L_00617bdf:; BB(0x00617bdf);
    /* 00617bdf: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617be3: jne 0x617c05 */ if (!fZ) goto L_00617c05;
L_00617be5:; BB(0x00617be5);
    /* 00617be5: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00617be8: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 00617beb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617bed: jne 0x617c05 */ if (!fZ) goto L_00617c05;
L_00617bef:; BB(0x00617bef);
    /* 00617bef: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00617bf2: movzx edx, byte ptr [ecx + 1] */ r_edx = (u32)R8((u32)(r_ecx+0x1u));
    /* 00617bf6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617bf8: jne 0x617c05 */ if (!fZ) goto L_00617c05;
L_00617bfa:; BB(0x00617bfa);
    /* 00617bfa: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00617bfd: movzx ecx, byte ptr [eax + 2] */ r_ecx = (u32)R8((u32)(r_eax+0x2u));
    /* 00617c01: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617c03: je 0x617c15 */ if (fZ) goto L_00617c15;
L_00617c05:; BB(0x00617c05);
    /* 00617c05: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617c09: je 0x617c1e */ if (fZ) goto L_00617c1e;
L_00617c0b:; BB(0x00617c0b);
    /* 00617c0b: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00617c0e: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 00617c11: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617c13: jne 0x617c1e */ if (!fZ) goto L_00617c1e;
L_00617c15:; BB(0x00617c15);
    /* 00617c15: mov eax, 1 */ r_eax = 0x1u;
    /* 00617c1a: jmp 0x617c20 */ goto L_00617c20;
L_00617c1e:; BB(0x00617c1e);
    /* 00617c1e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00617c20:; BB(0x00617c20);
    /* 00617c20: mov esp, ebp */ r_esp = r_ebp;
    /* 00617c22: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00617c23: ret  */ FN_RET(0x00617b70); r_esp += 4; return;
}

void f_00617c30(void) /* sub_617C30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00617c30);
    /* 00617c30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00617c31: mov ebp, esp */ r_ebp = r_esp;
    /* 00617c33: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00617c34: cmp dword ptr [ebp + 0x10], 0x80 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617c3b: je 0x617c61 */ if (fZ) goto L_00617c61;
L_00617c3d:; BB(0x00617c3d);
    /* 00617c3d: cmp dword ptr [ebp + 0x10], 0x82 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x82u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617c44: je 0x617c61 */ if (fZ) goto L_00617c61;
L_00617c46:; BB(0x00617c46);
    /* 00617c46: cmp dword ptr [ebp + 0x10], 0x84 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x84u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617c4d: je 0x617c61 */ if (fZ) goto L_00617c61;
L_00617c4f:; BB(0x00617c4f);
    /* 00617c4f: cmp dword ptr [ebp + 0x10], 0x88 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x88u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617c56: je 0x617c61 */ if (fZ) goto L_00617c61;
L_00617c58:; BB(0x00617c58);
    /* 00617c58: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00617c5f: jmp 0x617c68 */ goto L_00617c68;
L_00617c61:; BB(0x00617c61);
    /* 00617c61: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
L_00617c68:; BB(0x00617c68);
    /* 00617c68: movzx eax, byte ptr [ebp - 4] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffffcu));
    /* 00617c6c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617c6e: jne 0x617ca3 */ if (!fZ) goto L_00617ca3;
L_00617c70:; BB(0x00617c70);
    /* 00617c70: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617c74: jne 0x617c80 */ if (!fZ) goto L_00617c80;
L_00617c76:; BB(0x00617c76);
    /* 00617c76: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00617c79: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 00617c7c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617c7e: jne 0x617c94 */ if (!fZ) goto L_00617c94;
L_00617c80:; BB(0x00617c80);
    /* 00617c80: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617c84: je 0x617c9d */ if (fZ) goto L_00617c9d;
L_00617c86:; BB(0x00617c86);
    /* 00617c86: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00617c89: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 00617c8c: cmp ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617c92: jne 0x617c9d */ if (!fZ) goto L_00617c9d;
L_00617c94:; BB(0x00617c94);
    /* 00617c94: mov eax, 1 */ r_eax = 0x1u;
    /* 00617c99: jmp 0x617ce7 */ goto L_00617ce7;
L_00617c9d:; BB(0x00617c9d);
    /* 00617c9d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00617c9f: jmp 0x617ce7 */ goto L_00617ce7;
L_00617ca3:; BB(0x00617ca3);
    /* 00617ca3: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617ca7: jne 0x617cc9 */ if (!fZ) goto L_00617cc9;
L_00617ca9:; BB(0x00617ca9);
    /* 00617ca9: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00617cac: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 00617caf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617cb1: je 0x617cc9 */ if (fZ) goto L_00617cc9;
L_00617cb3:; BB(0x00617cb3);
    /* 00617cb3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00617cb6: movzx edx, byte ptr [ecx + 1] */ r_edx = (u32)R8((u32)(r_ecx+0x1u));
    /* 00617cba: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617cbc: je 0x617cc9 */ if (fZ) goto L_00617cc9;
L_00617cbe:; BB(0x00617cbe);
    /* 00617cbe: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00617cc1: movzx ecx, byte ptr [eax + 2] */ r_ecx = (u32)R8((u32)(r_eax+0x2u));
    /* 00617cc5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617cc7: jne 0x617cdc */ if (!fZ) goto L_00617cdc;
L_00617cc9:; BB(0x00617cc9);
    /* 00617cc9: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617ccd: je 0x617ce5 */ if (fZ) goto L_00617ce5;
L_00617ccf:; BB(0x00617ccf);
    /* 00617ccf: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00617cd2: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 00617cd5: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617cda: jne 0x617ce5 */ if (!fZ) goto L_00617ce5;
L_00617cdc:; BB(0x00617cdc);
    /* 00617cdc: mov eax, 1 */ r_eax = 0x1u;
    /* 00617ce1: jmp 0x617ce7 */ goto L_00617ce7;
L_00617ce5:; BB(0x00617ce5);
    /* 00617ce5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00617ce7:; BB(0x00617ce7);
    /* 00617ce7: mov esp, ebp */ r_esp = r_ebp;
    /* 00617ce9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00617cea: ret  */ FN_RET(0x00617c30); r_esp += 4; return;
}

void f_00617cf0(void) /* sub_617CF0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00617cf0);
    /* 00617cf0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00617cf1: mov ebp, esp */ r_ebp = r_esp;
    /* 00617cf3: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617cf7: je 0x617d19 */ if (fZ) goto L_00617d19;
L_00617cf9:; BB(0x00617cf9);
    /* 00617cf9: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00617cfc: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 00617cff: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617d01: je 0x617d19 */ if (fZ) goto L_00617d19;
L_00617d03:; BB(0x00617d03);
    /* 00617d03: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00617d06: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 00617d09: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617d0e: je 0x617d19 */ if (fZ) goto L_00617d19;
L_00617d10:; BB(0x00617d10);
    /* 00617d10: mov eax, 1 */ r_eax = 0x1u;
    /* 00617d15: jmp 0x617d1b */ goto L_00617d1b;
L_00617d19:; BB(0x00617d19);
    /* 00617d19: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00617d1b:; BB(0x00617d1b);
    /* 00617d1b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00617d1c: ret  */ FN_RET(0x00617cf0); r_esp += 4; return;
}

void f_00617d20(void) /* sub_617D20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00617d20);
    /* 00617d20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00617d21: mov ebp, esp */ r_ebp = r_esp;
    /* 00617d23: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00617d26: cmp dword ptr [ebp + 0x14], 0x80 */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617d2d: je 0x617d53 */ if (fZ) goto L_00617d53;
L_00617d2f:; BB(0x00617d2f);
    /* 00617d2f: cmp dword ptr [ebp + 0x14], 0x82 */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = 0x82u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617d36: je 0x617d53 */ if (fZ) goto L_00617d53;
L_00617d38:; BB(0x00617d38);
    /* 00617d38: cmp dword ptr [ebp + 0x14], 0x84 */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = 0x84u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617d3f: je 0x617d53 */ if (fZ) goto L_00617d53;
L_00617d41:; BB(0x00617d41);
    /* 00617d41: cmp dword ptr [ebp + 0x14], 0x88 */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = 0x88u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617d48: je 0x617d53 */ if (fZ) goto L_00617d53;
L_00617d4a:; BB(0x00617d4a);
    /* 00617d4a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00617d51: jmp 0x617d5a */ goto L_00617d5a;
L_00617d53:; BB(0x00617d53);
    /* 00617d53: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
L_00617d5a:; BB(0x00617d5a);
    /* 00617d5a: movzx eax, byte ptr [ebp - 4] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffffcu));
    /* 00617d5e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617d60: jne 0x617e16 */ if (!fZ) goto L_00617e16;
L_00617d66:; BB(0x00617d66);
    /* 00617d66: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00617d69: add ecx, 9 */ {  u32 a = r_ecx; u32 b = 0x9u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00617d6c: cmp ecx, dword ptr [ebp + 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00617d6f: ja 0x617e16 */ if ((!fC&&!fZ)) goto L_00617e16;
L_00617d75:; BB(0x00617d75);
    /* 00617d75: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00617d78: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 00617d7b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00617d7e: movzx edx, byte ptr [ecx + 1] */ r_edx = (u32)R8((u32)(r_ecx+0x1u));
    /* 00617d82: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617d84: jne 0x617e16 */ if (!fZ) goto L_00617e16;
L_00617d8a:; BB(0x00617d8a);
    /* 00617d8a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00617d8d: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 00617d90: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00617d93: movzx eax, byte ptr [edx + 2] */ r_eax = (u32)R8((u32)(r_edx+0x2u));
    /* 00617d97: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617d99: jne 0x617e16 */ if (!fZ) goto L_00617e16;
L_00617d9b:; BB(0x00617d9b);
    /* 00617d9b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00617d9e: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 00617da1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00617da4: movzx ecx, byte ptr [eax + 3] */ r_ecx = (u32)R8((u32)(r_eax+0x3u));
    /* 00617da8: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617daa: jne 0x617e16 */ if (!fZ) goto L_00617e16;
L_00617dac:; BB(0x00617dac);
    /* 00617dac: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00617daf: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 00617db2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00617db5: movzx edx, byte ptr [ecx + 4] */ r_edx = (u32)R8((u32)(r_ecx+0x4u));
    /* 00617db9: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617dbb: jne 0x617e16 */ if (!fZ) goto L_00617e16;
L_00617dbd:; BB(0x00617dbd);
    /* 00617dbd: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00617dc0: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 00617dc3: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00617dc6: movzx eax, byte ptr [edx + 5] */ r_eax = (u32)R8((u32)(r_edx+0x5u));
    /* 00617dca: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617dcc: jne 0x617e16 */ if (!fZ) goto L_00617e16;
L_00617dce:; BB(0x00617dce);
    /* 00617dce: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00617dd1: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 00617dd4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00617dd7: movzx ecx, byte ptr [eax + 6] */ r_ecx = (u32)R8((u32)(r_eax+0x6u));
    /* 00617ddb: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617ddd: jne 0x617e16 */ if (!fZ) goto L_00617e16;
L_00617ddf:; BB(0x00617ddf);
    /* 00617ddf: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00617de2: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 00617de5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00617de8: movzx edx, byte ptr [ecx + 7] */ r_edx = (u32)R8((u32)(r_ecx+0x7u));
    /* 00617dec: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617dee: jne 0x617e16 */ if (!fZ) goto L_00617e16;
L_00617df0:; BB(0x00617df0);
    /* 00617df0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00617df3: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 00617df6: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00617df9: movzx eax, byte ptr [edx + 8] */ r_eax = (u32)R8((u32)(r_edx+0x8u));
    /* 00617dfd: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617dff: jne 0x617e16 */ if (!fZ) goto L_00617e16;
L_00617e01:; BB(0x00617e01);
    /* 00617e01: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00617e04: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 00617e07: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00617e0a: movzx ecx, byte ptr [eax + 9] */ r_ecx = (u32)R8((u32)(r_eax+0x9u));
    /* 00617e0e: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617e10: je 0x6180ae */ if (fZ) goto L_006180ae;
L_00617e16:; BB(0x00617e16);
    /* 00617e16: cmp dword ptr [ebp + 0x14], 0x80 */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617e1d: je 0x617e43 */ if (fZ) goto L_00617e43;
L_00617e1f:; BB(0x00617e1f);
    /* 00617e1f: cmp dword ptr [ebp + 0x14], 0x82 */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = 0x82u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617e26: je 0x617e43 */ if (fZ) goto L_00617e43;
L_00617e28:; BB(0x00617e28);
    /* 00617e28: cmp dword ptr [ebp + 0x14], 0x84 */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = 0x84u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617e2f: je 0x617e43 */ if (fZ) goto L_00617e43;
L_00617e31:; BB(0x00617e31);
    /* 00617e31: cmp dword ptr [ebp + 0x14], 0x88 */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = 0x88u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617e38: je 0x617e43 */ if (fZ) goto L_00617e43;
L_00617e3a:; BB(0x00617e3a);
    /* 00617e3a: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00617e41: jmp 0x617e4a */ goto L_00617e4a;
L_00617e43:; BB(0x00617e43);
    /* 00617e43: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
L_00617e4a:; BB(0x00617e4a);
    /* 00617e4a: movzx edx, byte ptr [ebp - 8] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffff8u));
    /* 00617e4e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617e50: je 0x618329 */ if (fZ) goto L_00618329;
L_00617e56:; BB(0x00617e56);
    /* 00617e56: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00617e59: add eax, 0x1b */ {  u32 a = r_eax; u32 b = 0x1bu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00617e5c: cmp eax, dword ptr [ebp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00617e5f: ja 0x618329 */ if ((!fC&&!fZ)) goto L_00618329;
L_00617e65:; BB(0x00617e65);
    /* 00617e65: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00617e68: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 00617e6b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00617e6e: movzx ecx, byte ptr [eax + 3] */ r_ecx = (u32)R8((u32)(r_eax+0x3u));
    /* 00617e72: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617e74: jne 0x618329 */ if (!fZ) goto L_00618329;
L_00617e7a:; BB(0x00617e7a);
    /* 00617e7a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00617e7d: movzx eax, byte ptr [edx + 1] */ r_eax = (u32)R8((u32)(r_edx+0x1u));
    /* 00617e81: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00617e84: movzx edx, byte ptr [ecx + 4] */ r_edx = (u32)R8((u32)(r_ecx+0x4u));
    /* 00617e88: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617e8a: jne 0x618329 */ if (!fZ) goto L_00618329;
L_00617e90:; BB(0x00617e90);
    /* 00617e90: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00617e93: movzx ecx, byte ptr [eax + 2] */ r_ecx = (u32)R8((u32)(r_eax+0x2u));
    /* 00617e97: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00617e9a: movzx eax, byte ptr [edx + 5] */ r_eax = (u32)R8((u32)(r_edx+0x5u));
    /* 00617e9e: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617ea0: jne 0x618329 */ if (!fZ) goto L_00618329;
L_00617ea6:; BB(0x00617ea6);
    /* 00617ea6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00617ea9: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 00617eac: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00617eaf: movzx ecx, byte ptr [eax + 6] */ r_ecx = (u32)R8((u32)(r_eax+0x6u));
    /* 00617eb3: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617eb5: jne 0x618329 */ if (!fZ) goto L_00618329;
L_00617ebb:; BB(0x00617ebb);
    /* 00617ebb: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00617ebe: movzx eax, byte ptr [edx + 1] */ r_eax = (u32)R8((u32)(r_edx+0x1u));
    /* 00617ec2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00617ec5: movzx edx, byte ptr [ecx + 7] */ r_edx = (u32)R8((u32)(r_ecx+0x7u));
    /* 00617ec9: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617ecb: jne 0x618329 */ if (!fZ) goto L_00618329;
L_00617ed1:; BB(0x00617ed1);
    /* 00617ed1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00617ed4: movzx ecx, byte ptr [eax + 2] */ r_ecx = (u32)R8((u32)(r_eax+0x2u));
    /* 00617ed8: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00617edb: movzx eax, byte ptr [edx + 8] */ r_eax = (u32)R8((u32)(r_edx+0x8u));
    /* 00617edf: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617ee1: jne 0x618329 */ if (!fZ) goto L_00618329;
L_00617ee7:; BB(0x00617ee7);
    /* 00617ee7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00617eea: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 00617eed: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00617ef0: movzx ecx, byte ptr [eax + 9] */ r_ecx = (u32)R8((u32)(r_eax+0x9u));
    /* 00617ef4: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617ef6: jne 0x618329 */ if (!fZ) goto L_00618329;
L_00617efc:; BB(0x00617efc);
    /* 00617efc: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00617eff: movzx eax, byte ptr [edx + 1] */ r_eax = (u32)R8((u32)(r_edx+0x1u));
    /* 00617f03: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00617f06: movzx edx, byte ptr [ecx + 0xa] */ r_edx = (u32)R8((u32)(r_ecx+0xau));
    /* 00617f0a: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617f0c: jne 0x618329 */ if (!fZ) goto L_00618329;
L_00617f12:; BB(0x00617f12);
    /* 00617f12: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00617f15: movzx ecx, byte ptr [eax + 2] */ r_ecx = (u32)R8((u32)(r_eax+0x2u));
    /* 00617f19: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00617f1c: movzx eax, byte ptr [edx + 0xb] */ r_eax = (u32)R8((u32)(r_edx+0xbu));
    /* 00617f20: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617f22: jne 0x618329 */ if (!fZ) goto L_00618329;
L_00617f28:; BB(0x00617f28);
    /* 00617f28: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00617f2b: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 00617f2e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00617f31: movzx ecx, byte ptr [eax + 0xc] */ r_ecx = (u32)R8((u32)(r_eax+0xcu));
    /* 00617f35: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617f37: jne 0x618329 */ if (!fZ) goto L_00618329;
L_00617f3d:; BB(0x00617f3d);
    /* 00617f3d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00617f40: movzx eax, byte ptr [edx + 1] */ r_eax = (u32)R8((u32)(r_edx+0x1u));
    /* 00617f44: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00617f47: movzx edx, byte ptr [ecx + 0xd] */ r_edx = (u32)R8((u32)(r_ecx+0xdu));
    /* 00617f4b: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617f4d: jne 0x618329 */ if (!fZ) goto L_00618329;
L_00617f53:; BB(0x00617f53);
    /* 00617f53: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00617f56: movzx ecx, byte ptr [eax + 2] */ r_ecx = (u32)R8((u32)(r_eax+0x2u));
    /* 00617f5a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00617f5d: movzx eax, byte ptr [edx + 0xe] */ r_eax = (u32)R8((u32)(r_edx+0xeu));
    /* 00617f61: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617f63: jne 0x618329 */ if (!fZ) goto L_00618329;
L_00617f69:; BB(0x00617f69);
    /* 00617f69: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00617f6c: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 00617f6f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00617f72: movzx ecx, byte ptr [eax + 0xf] */ r_ecx = (u32)R8((u32)(r_eax+0xfu));
    /* 00617f76: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617f78: jne 0x618329 */ if (!fZ) goto L_00618329;
L_00617f7e:; BB(0x00617f7e);
    /* 00617f7e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00617f81: movzx eax, byte ptr [edx + 1] */ r_eax = (u32)R8((u32)(r_edx+0x1u));
    /* 00617f85: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00617f88: movzx edx, byte ptr [ecx + 0x10] */ r_edx = (u32)R8((u32)(r_ecx+0x10u));
    /* 00617f8c: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617f8e: jne 0x618329 */ if (!fZ) goto L_00618329;
L_00617f94:; BB(0x00617f94);
    /* 00617f94: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00617f97: movzx ecx, byte ptr [eax + 2] */ r_ecx = (u32)R8((u32)(r_eax+0x2u));
    /* 00617f9b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00617f9e: movzx eax, byte ptr [edx + 0x11] */ r_eax = (u32)R8((u32)(r_edx+0x11u));
    /* 00617fa2: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617fa4: jne 0x618329 */ if (!fZ) goto L_00618329;
L_00617faa:; BB(0x00617faa);
    /* 00617faa: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00617fad: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 00617fb0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00617fb3: movzx ecx, byte ptr [eax + 0x12] */ r_ecx = (u32)R8((u32)(r_eax+0x12u));
    /* 00617fb7: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617fb9: jne 0x618329 */ if (!fZ) goto L_00618329;
L_00617fbf:; BB(0x00617fbf);
    /* 00617fbf: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00617fc2: movzx eax, byte ptr [edx + 1] */ r_eax = (u32)R8((u32)(r_edx+0x1u));
    /* 00617fc6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00617fc9: movzx edx, byte ptr [ecx + 0x13] */ r_edx = (u32)R8((u32)(r_ecx+0x13u));
    /* 00617fcd: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617fcf: jne 0x618329 */ if (!fZ) goto L_00618329;
L_00617fd5:; BB(0x00617fd5);
    /* 00617fd5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00617fd8: movzx ecx, byte ptr [eax + 2] */ r_ecx = (u32)R8((u32)(r_eax+0x2u));
    /* 00617fdc: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00617fdf: movzx eax, byte ptr [edx + 0x14] */ r_eax = (u32)R8((u32)(r_edx+0x14u));
    /* 00617fe3: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617fe5: jne 0x618329 */ if (!fZ) goto L_00618329;
L_00617feb:; BB(0x00617feb);
    /* 00617feb: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00617fee: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 00617ff1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00617ff4: movzx ecx, byte ptr [eax + 0x15] */ r_ecx = (u32)R8((u32)(r_eax+0x15u));
    /* 00617ff8: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00617ffa: jne 0x618329 */ if (!fZ) goto L_00618329;
L_00618000:; BB(0x00618000);
    /* 00618000: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00618003: movzx eax, byte ptr [edx + 1] */ r_eax = (u32)R8((u32)(r_edx+0x1u));
    /* 00618007: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061800a: movzx edx, byte ptr [ecx + 0x16] */ r_edx = (u32)R8((u32)(r_ecx+0x16u));
    /* 0061800e: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618010: jne 0x618329 */ if (!fZ) goto L_00618329;
L_00618016:; BB(0x00618016);
    /* 00618016: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00618019: movzx ecx, byte ptr [eax + 2] */ r_ecx = (u32)R8((u32)(r_eax+0x2u));
    /* 0061801d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00618020: movzx eax, byte ptr [edx + 0x17] */ r_eax = (u32)R8((u32)(r_edx+0x17u));
    /* 00618024: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618026: jne 0x618329 */ if (!fZ) goto L_00618329;
L_0061802c:; BB(0x0061802c);
    /* 0061802c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061802f: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 00618032: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00618035: movzx ecx, byte ptr [eax + 0x18] */ r_ecx = (u32)R8((u32)(r_eax+0x18u));
    /* 00618039: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061803b: jne 0x618329 */ if (!fZ) goto L_00618329;
L_00618041:; BB(0x00618041);
    /* 00618041: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00618044: movzx eax, byte ptr [edx + 1] */ r_eax = (u32)R8((u32)(r_edx+0x1u));
    /* 00618048: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061804b: movzx edx, byte ptr [ecx + 0x19] */ r_edx = (u32)R8((u32)(r_ecx+0x19u));
    /* 0061804f: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618051: jne 0x618329 */ if (!fZ) goto L_00618329;
L_00618057:; BB(0x00618057);
    /* 00618057: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061805a: movzx ecx, byte ptr [eax + 2] */ r_ecx = (u32)R8((u32)(r_eax+0x2u));
    /* 0061805e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00618061: movzx eax, byte ptr [edx + 0x1a] */ r_eax = (u32)R8((u32)(r_edx+0x1au));
    /* 00618065: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618067: jne 0x618329 */ if (!fZ) goto L_00618329;
L_0061806d:; BB(0x0061806d);
    /* 0061806d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00618070: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 00618073: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00618076: movzx ecx, byte ptr [eax + 0x1b] */ r_ecx = (u32)R8((u32)(r_eax+0x1bu));
    /* 0061807a: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061807c: jne 0x618329 */ if (!fZ) goto L_00618329;
L_00618082:; BB(0x00618082);
    /* 00618082: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00618085: movzx eax, byte ptr [edx + 1] */ r_eax = (u32)R8((u32)(r_edx+0x1u));
    /* 00618089: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061808c: movzx edx, byte ptr [ecx + 0x1c] */ r_edx = (u32)R8((u32)(r_ecx+0x1cu));
    /* 00618090: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618092: jne 0x618329 */ if (!fZ) goto L_00618329;
L_00618098:; BB(0x00618098);
    /* 00618098: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061809b: movzx ecx, byte ptr [eax + 2] */ r_ecx = (u32)R8((u32)(r_eax+0x2u));
    /* 0061809f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006180a2: movzx eax, byte ptr [edx + 0x1d] */ r_eax = (u32)R8((u32)(r_edx+0x1du));
    /* 006180a6: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006180a8: jne 0x618329 */ if (!fZ) goto L_00618329;
L_006180ae:; BB(0x006180ae);
    /* 006180ae: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006180b2: je 0x618205 */ if (fZ) goto L_00618205;
L_006180b8:; BB(0x006180b8);
    /* 006180b8: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 006180bb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006180bc: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 006180bf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006180c0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006180c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006180c4: call 0x617c30 */ r_esp -= 4; W32(r_esp, 0x6180c9u); f_00617c30();
    /* 006180c9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006180cc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006180ce: je 0x618205 */ if (fZ) goto L_00618205;
L_006180d4:; BB(0x006180d4);
    /* 006180d4: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 006180d7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006180d8: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 006180db: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006180de: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006180df: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006180e2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006180e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006180e6: call 0x617c30 */ r_esp -= 4; W32(r_esp, 0x6180ebu); f_00617c30();
    /* 006180eb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006180ee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006180f0: je 0x618205 */ if (fZ) goto L_00618205;
L_006180f6:; BB(0x006180f6);
    /* 006180f6: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 006180f9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006180fa: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 006180fd: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00618100: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00618101: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00618104: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00618107: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00618108: call 0x617c30 */ r_esp -= 4; W32(r_esp, 0x61810du); f_00617c30();
    /* 0061810d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00618110: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618112: je 0x618205 */ if (fZ) goto L_00618205;
L_00618118:; BB(0x00618118);
    /* 00618118: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0061811b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061811c: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0061811f: add edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00618122: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00618123: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00618126: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00618129: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061812a: call 0x617c30 */ r_esp -= 4; W32(r_esp, 0x61812fu); f_00617c30();
    /* 0061812f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00618132: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618134: je 0x618205 */ if (fZ) goto L_00618205;
L_0061813a:; BB(0x0061813a);
    /* 0061813a: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0061813d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061813e: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00618141: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00618144: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00618145: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00618148: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061814b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061814c: call 0x617c30 */ r_esp -= 4; W32(r_esp, 0x618151u); f_00617c30();
    /* 00618151: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00618154: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618156: je 0x618205 */ if (fZ) goto L_00618205;
L_0061815c:; BB(0x0061815c);
    /* 0061815c: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0061815f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00618160: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00618163: add edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00618166: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00618167: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061816a: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061816d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061816e: call 0x617c30 */ r_esp -= 4; W32(r_esp, 0x618173u); f_00617c30();
    /* 00618173: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00618176: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618178: je 0x618205 */ if (fZ) goto L_00618205;
L_0061817e:; BB(0x0061817e);
    /* 0061817e: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00618181: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00618182: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00618185: add edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00618188: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00618189: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061818c: add eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061818f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00618190: call 0x617c30 */ r_esp -= 4; W32(r_esp, 0x618195u); f_00617c30();
    /* 00618195: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00618198: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061819a: je 0x618205 */ if (fZ) goto L_00618205;
L_0061819c:; BB(0x0061819c);
    /* 0061819c: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0061819f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006181a0: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 006181a3: add edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006181a6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006181a7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006181aa: add eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006181ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006181ae: call 0x617c30 */ r_esp -= 4; W32(r_esp, 0x6181b3u); f_00617c30();
    /* 006181b3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006181b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006181b8: je 0x618205 */ if (fZ) goto L_00618205;
L_006181ba:; BB(0x006181ba);
    /* 006181ba: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 006181bd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006181be: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 006181c1: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006181c4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006181c5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006181c8: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006181cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006181cc: call 0x617c30 */ r_esp -= 4; W32(r_esp, 0x6181d1u); f_00617c30();
    /* 006181d1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006181d4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006181d6: je 0x618205 */ if (fZ) goto L_00618205;
L_006181d8:; BB(0x006181d8);
    /* 006181d8: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 006181db: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006181dc: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 006181df: add edx, 9 */ {  u32 a = r_edx; u32 b = 0x9u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006181e2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006181e3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006181e6: add eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006181e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006181ea: call 0x617c30 */ r_esp -= 4; W32(r_esp, 0x6181efu); f_00617c30();
    /* 006181ef: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006181f2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006181f4: je 0x618205 */ if (fZ) goto L_00618205;
L_006181f6:; BB(0x006181f6);
    /* 006181f6: mov eax, 1 */ r_eax = 0x1u;
    /* 006181fb: jmp 0x61832b */ goto L_0061832b;
L_00618205:; BB(0x00618205);
    /* 00618205: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618209: jne 0x618323 */ if (!fZ) goto L_00618323;
L_0061820f:; BB(0x0061820f);
    /* 0061820f: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00618212: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00618213: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00618215: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00618218: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00618219: call 0x617c30 */ r_esp -= 4; W32(r_esp, 0x61821eu); f_00617c30();
    /* 0061821e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00618221: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618223: je 0x618323 */ if (fZ) goto L_00618323;
L_00618229:; BB(0x00618229);
    /* 00618229: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0061822c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061822d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061822f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00618232: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00618235: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00618236: call 0x617c30 */ r_esp -= 4; W32(r_esp, 0x61823bu); f_00617c30();
    /* 0061823b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061823e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618240: je 0x618323 */ if (fZ) goto L_00618323;
L_00618246:; BB(0x00618246);
    /* 00618246: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 00618249: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061824a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061824c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061824f: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00618252: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00618253: call 0x617c30 */ r_esp -= 4; W32(r_esp, 0x618258u); f_00617c30();
    /* 00618258: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061825b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061825d: je 0x618323 */ if (fZ) goto L_00618323;
L_00618263:; BB(0x00618263);
    /* 00618263: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00618266: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00618267: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00618269: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061826c: add edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061826f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00618270: call 0x617c30 */ r_esp -= 4; W32(r_esp, 0x618275u); f_00617c30();
    /* 00618275: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00618278: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061827a: je 0x618323 */ if (fZ) goto L_00618323;
L_00618280:; BB(0x00618280);
    /* 00618280: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00618283: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00618284: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00618286: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00618289: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061828c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061828d: call 0x617c30 */ r_esp -= 4; W32(r_esp, 0x618292u); f_00617c30();
    /* 00618292: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00618295: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618297: je 0x618323 */ if (fZ) goto L_00618323;
L_0061829d:; BB(0x0061829d);
    /* 0061829d: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 006182a0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006182a1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006182a3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006182a6: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006182a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006182aa: call 0x617c30 */ r_esp -= 4; W32(r_esp, 0x6182afu); f_00617c30();
    /* 006182af: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006182b2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006182b4: je 0x618323 */ if (fZ) goto L_00618323;
L_006182b6:; BB(0x006182b6);
    /* 006182b6: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 006182b9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006182ba: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006182bc: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006182bf: add edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006182c2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006182c3: call 0x617c30 */ r_esp -= 4; W32(r_esp, 0x6182c8u); f_00617c30();
    /* 006182c8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006182cb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006182cd: je 0x618323 */ if (fZ) goto L_00618323;
L_006182cf:; BB(0x006182cf);
    /* 006182cf: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 006182d2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006182d3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006182d5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006182d8: add ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006182db: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006182dc: call 0x617c30 */ r_esp -= 4; W32(r_esp, 0x6182e1u); f_00617c30();
    /* 006182e1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006182e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006182e6: je 0x618323 */ if (fZ) goto L_00618323;
L_006182e8:; BB(0x006182e8);
    /* 006182e8: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 006182eb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006182ec: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006182ee: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006182f1: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006182f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006182f5: call 0x617c30 */ r_esp -= 4; W32(r_esp, 0x6182fau); f_00617c30();
    /* 006182fa: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006182fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006182ff: je 0x618323 */ if (fZ) goto L_00618323;
L_00618301:; BB(0x00618301);
    /* 00618301: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00618304: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00618305: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00618307: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061830a: add edx, 9 */ {  u32 a = r_edx; u32 b = 0x9u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061830d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061830e: call 0x617c30 */ r_esp -= 4; W32(r_esp, 0x618313u); f_00617c30();
    /* 00618313: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00618316: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618318: je 0x618323 */ if (fZ) goto L_00618323;
L_0061831a:; BB(0x0061831a);
    /* 0061831a: mov eax, 1 */ r_eax = 0x1u;
    /* 0061831f: jmp 0x61832b */ goto L_0061832b;
L_00618323:; BB(0x00618323);
    /* 00618323: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00618325: jmp 0x61832b */ goto L_0061832b;
L_00618329:; BB(0x00618329);
    /* 00618329: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0061832b:; BB(0x0061832b);
    /* 0061832b: mov esp, ebp */ r_esp = r_ebp;
    /* 0061832d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061832e: ret  */ FN_RET(0x00617d20); r_esp += 4; return;
}

