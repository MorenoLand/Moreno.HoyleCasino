#include "protos.h"

void f_005e3310(void) /* CasinoSettingsDialog::vfunc16 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e3310);
    /* 005e3310: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e3311: mov ebp, esp */ r_ebp = r_esp;
    /* 005e3313: sub esp, 0x94 */ {  u32 a = r_esp; u32 b = 0x94u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e3319: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005e331e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e3320: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005e3323: mov dword ptr [ebp - 0x8c], ecx */ W32((u32)(r_ebp+0xffffff74u), r_ecx);
    /* 005e3329: mov eax, dword ptr [ebp - 0x8c] */ r_eax = R32((u32)(r_ebp+0xffffff74u));
    /* 005e332f: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 005e3335: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e3338: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 005e333b: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 005e333e: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 005e3344: mov edx, dword ptr [ecx + 0x1bc] */ r_edx = R32((u32)(r_ecx+0x1bcu));
    /* 005e334a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e334d: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 005e3350: mov dword ptr [ebp - 0x84], ecx */ W32((u32)(r_ebp+0xffffff7cu), r_ecx);
    /* 005e3356: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 005e335c: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5e3361u); f_0063aac0();
    /* 005e3361: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e3363: mov dword ptr [ebp - 0x7c], edx */ W32((u32)(r_ebp+0xffffff84u), r_edx);
    /* 005e3366: cmp dword ptr [ebp - 0x7c], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff84u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e336a: je 0x5e338e */ if (fZ) goto L_005e338e;
L_005e336c:; BB(0x005e336c);
    /* 005e336c: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 005e3372: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5e3377u); f_0063aac0();
    /* 005e3377: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005e3379: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 005e337c: cmp dword ptr [ebp - 0x80], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff80u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e3380: je 0x5e338e */ if (fZ) goto L_005e338e;
L_005e3382:; BB(0x005e3382);
    /* 005e3382: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
    /* 005e338c: jmp 0x5e3398 */ goto L_005e3398;
L_005e338e:; BB(0x005e338e);
    /* 005e338e: mov dword ptr [ebp - 0x90], 1 */ W32((u32)(r_ebp+0xffffff70u), 0x1u);
L_005e3398:; BB(0x005e3398);
    /* 005e3398: movzx ecx, byte ptr [ebp - 0x90] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffff70u));
    /* 005e339f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e33a1: je 0x5e3565 */ if (fZ) goto L_005e3565;
L_005e33a7:; BB(0x005e33a7);
    /* 005e33a7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e33aa: add edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e33ad: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e33ae: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 005e33b4: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x5e33b9u); f_005fb2b0();
    /* 005e33b9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e33bb: jne 0x5e3470 */ if (!fZ) goto L_005e3470;
L_005e33c1:; BB(0x005e33c1);
    /* 005e33c1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e33c3: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e33c8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e33ca: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e33cc: mov eax, dword ptr [ebp - 0x8c] */ r_eax = R32((u32)(r_ebp+0xffffff74u));
    /* 005e33d2: mov ecx, dword ptr [eax + 0x1c0] */ r_ecx = R32((u32)(r_eax+0x1c0u));
    /* 005e33d8: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e33db: mov eax, dword ptr [ecx + edx*8 + 4] */ r_eax = R32((u32)(r_ecx+r_edx*8+0x4u));
    /* 005e33df: add eax, 0x48 */ {  u32 a = r_eax; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e33e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e33e3: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 005e33e9: mov edx, dword ptr [ecx + 0x1c0] */ r_edx = R32((u32)(r_ecx+0x1c0u));
    /* 005e33ef: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e33f2: mov ecx, dword ptr [edx + eax*8] */ r_ecx = R32((u32)(r_edx+r_eax*8));
    /* 005e33f5: add ecx, 0x6b */ {  u32 a = r_ecx; u32 b = 0x6bu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e33f8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e33f9: push 0x41d */ { u32 v = 0x41du; r_esp -= 4; W32(r_esp, v); }
    /* 005e33fe: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e3401: add edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e3404: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e3405: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3407: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 005e340d: call 0x5f9ce0 */ r_esp -= 4; W32(r_esp, 0x5e3412u); f_005f9ce0();
    /* 005e3412: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e3413: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3415: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3417: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 005e341d: call 0x5fb480 */ r_esp -= 4; W32(r_esp, 0x5e3422u); f_005fb480();
    /* 005e3422: mov ecx, eax */ r_ecx = r_eax;
    /* 005e3424: call 0x5ff5a0 */ r_esp -= 4; W32(r_esp, 0x5e3429u); f_005ff5a0();
    /* 005e3429: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e342c: add eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e342f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e3430: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 005e3436: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x5e343bu); f_005fb2b0();
    /* 005e343b: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 005e3441: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 005e3444: call 0x5d52e0 */ r_esp -= 4; W32(r_esp, 0x5e3449u); f_005d52e0();
    /* 005e3449: mov cl, byte ptr [eax + 0x2a] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x2au))) & 0xffu);
    /* 005e344c: mov byte ptr [ebp - 0x85], cl */ W8((u32)(r_ebp+0xffffff7bu), (u8)r_ecx);
    /* 005e3452: movsx edx, byte ptr [ebp - 0x85] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffff7bu));
    /* 005e3459: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e345a: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 005e3460: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e3462: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005e3468: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005e346e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e3470u); call_ind(t); }
L_005e3470:; BB(0x005e3470);
    /* 005e3470: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e3473: add ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e3476: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e3477: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 005e347d: call 0x5fb550 */ r_esp -= 4; W32(r_esp, 0x5e3482u); f_005fb550();
    /* 005e3482: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e3484: jne 0x5e34ef */ if (!fZ) goto L_005e34ef;
L_005e3486:; BB(0x005e3486);
    /* 005e3486: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e3488: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005e348a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e348c: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 005e3492: mov eax, dword ptr [edx + 0x1c0] */ r_eax = R32((u32)(r_edx+0x1c0u));
    /* 005e3498: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e349b: mov edx, dword ptr [eax + ecx*8 + 4] */ r_edx = R32((u32)(r_eax+r_ecx*8+0x4u));
    /* 005e349f: add edx, 0x6e */ {  u32 a = r_edx; u32 b = 0x6eu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e34a2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e34a3: mov eax, dword ptr [ebp - 0x8c] */ r_eax = R32((u32)(r_ebp+0xffffff74u));
    /* 005e34a9: mov ecx, dword ptr [eax + 0x1c0] */ r_ecx = R32((u32)(r_eax+0x1c0u));
    /* 005e34af: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e34b2: mov eax, dword ptr [ecx + edx*8] */ r_eax = R32((u32)(r_ecx+r_edx*8));
    /* 005e34b5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e34b6: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005e34b8: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 005e34bd: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 005e34bf: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 005e34c4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e34c7: add ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e34ca: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e34cb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e34cd: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 005e34d3: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x5e34d8u); f_005fa5b0();
    /* 005e34d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e34d9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e34db: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005e34dd: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 005e34e3: call 0x5fb480 */ r_esp -= 4; W32(r_esp, 0x5e34e8u); f_005fb480();
    /* 005e34e8: mov ecx, eax */ r_ecx = r_eax;
    /* 005e34ea: call 0x5ff5a0 */ r_esp -= 4; W32(r_esp, 0x5e34efu); f_005ff5a0();
L_005e34ef:; BB(0x005e34ef);
    /* 005e34ef: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e34f1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e34f3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e34f5: lea edx, [ebp - 0x6c] */ r_edx = (u32)(r_ebp+0xffffff94u);
    /* 005e34f8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e34f9: lea eax, [ebp - 0x78] */ r_eax = (u32)(r_ebp+0xffffff88u);
    /* 005e34fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e34fd: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 005e3503: mov edx, dword ptr [ecx + 0x1bc] */ r_edx = R32((u32)(r_ecx+0x1bcu));
    /* 005e3509: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e350c: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 005e350f: call 0x5d5a90 */ r_esp -= 4; W32(r_esp, 0x5e3514u); f_005d5a90();
    /* 005e3514: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005e3517: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e3518: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e351a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e351b: call 0x64c8d0 */ r_esp -= 4; W32(r_esp, 0x5e3520u); f_0064c8d0();
    /* 005e3520: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e3523: push 0x6d50d8 */ { u32 v = 0x6d50d8u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3528: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5e352du); f_00630f40();
    /* 005e352d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e3530: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e3531: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 005e3534: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e3535: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5e353au); f_00686d8e();
    /* 005e353a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e353d: lea ecx, [ebp - 0x6c] */ r_ecx = (u32)(r_ebp+0xffffff94u);
    /* 005e3540: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e3541: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 005e3544: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e3545: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x5e354au); f_00686ec6();
    /* 005e354a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e354d: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 005e3550: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e3551: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e3554: add ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e3557: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e3558: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 005e355e: call 0x5fb5a0 */ r_esp -= 4; W32(r_esp, 0x5e3563u); f_005fb5a0();
    /* 005e3563: jmp 0x5e358d */ goto L_005e358d;
L_005e3565:; BB(0x005e3565);
    /* 005e3565: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e3568: add edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e356b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e356c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e356e: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 005e3574: call 0x5fbc80 */ r_esp -= 4; W32(r_esp, 0x5e3579u); f_005fbc80();
    /* 005e3579: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e357c: add eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e357f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e3580: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3582: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 005e3588: call 0x5fbd40 */ r_esp -= 4; W32(r_esp, 0x5e358du); f_005fbd40();
L_005e358d:; BB(0x005e358d);
    /* 005e358d: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005e358f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3592: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005e3594: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x5e3599u); f_00686d72();
    /* 005e3599: mov esp, ebp */ r_esp = r_ebp;
    /* 005e359b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e359c: ret 4 */ FN_RET(0x005e3310); r_esp += 8; return;
}

void f_005e35a0(void) /* CasinoSettingsDialog::vfunc17 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e35a0);
    /* 005e35a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e35a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005e35a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e35a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e35a7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e35aa: add eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e35ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e35ae: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e35b0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e35b3: call 0x5fbc80 */ r_esp -= 4; W32(r_esp, 0x5e35b8u); f_005fbc80();
    /* 005e35b8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e35bb: add ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e35be: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e35bf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e35c1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e35c4: call 0x5fbd40 */ r_esp -= 4; W32(r_esp, 0x5e35c9u); f_005fbd40();
    /* 005e35c9: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005e35cb: mov esp, ebp */ r_esp = r_ebp;
    /* 005e35cd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e35ce: ret 4 */ FN_RET(0x005e35a0); r_esp += 8; return;
}

void f_005e35e0(void) /* CasinoSettingsDialog::vfunc18 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e35e0);
    /* 005e35e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e35e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005e35e3: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e35e6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e35e7: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005e35ea: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 005e35f0: call 0x5da830 */ r_esp -= 4; W32(r_esp, 0x5e35f5u); f_005da830();
    /* 005e35f5: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005e35f8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e35fa: je 0x5e36a2 */ if (fZ) goto L_005e36a2;
L_005e3600:; BB(0x005e3600);
    /* 005e3600: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3602: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 005e3608: call 0x5da880 */ r_esp -= 4; W32(r_esp, 0x5e360du); f_005da880();
    /* 005e360d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e360e: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5e3613u); f_0064c8a0();
    /* 005e3613: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e3616: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005e3619: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005e361c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e361f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e3620: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e3623: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e3624: lea eax, [ebp - 0x18] */ r_eax = (u32)(r_ebp+0xffffffe8u);
    /* 005e3627: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e3628: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 005e362b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e362c: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005e362f: mov eax, dword ptr [edx + 0x1bc] */ r_eax = R32((u32)(r_edx+0x1bcu));
    /* 005e3635: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e3638: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 005e363b: call 0x5d5a90 */ r_esp -= 4; W32(r_esp, 0x5e3640u); f_005d5a90();
    /* 005e3640: mov ecx, eax */ r_ecx = r_eax;
    /* 005e3642: call 0x64c630 */ r_esp -= 4; W32(r_esp, 0x5e3647u); f_0064c630();
    /* 005e3647: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e3649: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005e364c: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005e364f: mov ecx, dword ptr [ecx + 0x1bc] */ r_ecx = R32((u32)(r_ecx+0x1bcu));
    /* 005e3655: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 005e3658: mov ecx, dword ptr [ecx + esi*4] */ r_ecx = R32((u32)(r_ecx+r_esi*4));
    /* 005e365b: mov dword ptr [ecx + 0x4b4], edx */ W32((u32)(r_ecx+0x4b4u), r_edx);
    /* 005e3661: mov dword ptr [ecx + 0x4b8], eax */ W32((u32)(r_ecx+0x4b8u), r_eax);
    /* 005e3667: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3669: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 005e366f: call 0x5da880 */ r_esp -= 4; W32(r_esp, 0x5e3674u); f_005da880();
    /* 005e3674: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e3675: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5e367au); f_0064c8a0();
    /* 005e367a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e367d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005e3680: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005e3683: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005e3686: mov eax, dword ptr [edx + 0x1bc] */ r_eax = R32((u32)(r_edx+0x1bcu));
    /* 005e368c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e368f: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 005e3692: call 0x5d52e0 */ r_esp -= 4; W32(r_esp, 0x5e3697u); f_005d52e0();
    /* 005e3697: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e369a: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 005e369c: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e369f: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
L_005e36a2:; BB(0x005e36a2);
    /* 005e36a2: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005e36a4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e36a5: mov esp, ebp */ r_esp = r_ebp;
    /* 005e36a7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e36a8: ret 4 */ FN_RET(0x005e35e0); r_esp += 8; return;
}

void f_0063b930(void) /* CasinoSettingsDialog::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0063b930);
    /* 0063b930: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063b931: mov ebp, esp */ r_ebp = r_esp;
    /* 0063b933: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063b935: push 0x6abc00 */ { u32 v = 0x6abc00u; r_esp -= 4; W32(r_esp, v); }
    /* 0063b93a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0063b940: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063b941: sub esp, 0x164 */ {  u32 a = r_esp; u32 b = 0x164u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063b947: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0063b94c: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063b94e: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0063b951: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063b952: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0063b955: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0063b95b: mov dword ptr [ebp - 0x154], ecx */ W32((u32)(r_ebp+0xfffffeacu), r_ecx);
    /* 0063b961: mov eax, dword ptr [ebp - 0x154] */ r_eax = R32((u32)(r_ebp+0xfffffeacu));
    /* 0063b967: cmp dword ptr [eax + 0x1c0], 0 */ {  u32 a = R32((u32)(r_eax+0x1c0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063b96e: jne 0x63b9b7 */ if (!fZ) goto L_0063b9b7;
L_0063b970:; BB(0x0063b970);
    /* 0063b970: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063b976: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0063b978: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063b97e: mov eax, dword ptr [edx + 0x10c] */ r_eax = R32((u32)(r_edx+0x10cu));
    /* 0063b984: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63b986u); call_ind(t); }
    /* 0063b986: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0063b988: mov edx, 8 */ r_edx = 0x8u;
    /* 0063b98d: mul edx */ { u64 t = (u64)r_eax * r_edx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 0063b98f: seto cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fO) ? 1 : 0) & 0xffu);
    /* 0063b992: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0063b994: or ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0063b996: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063b997: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x63b99cu); f_00686d82();
    /* 0063b99c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063b99f: mov dword ptr [ebp - 0x138], eax */ W32((u32)(r_ebp+0xfffffec8u), r_eax);
    /* 0063b9a5: mov eax, dword ptr [ebp - 0x154] */ r_eax = R32((u32)(r_ebp+0xfffffeacu));
    /* 0063b9ab: mov ecx, dword ptr [ebp - 0x138] */ r_ecx = R32((u32)(r_ebp+0xfffffec8u));
    /* 0063b9b1: mov dword ptr [eax + 0x1c0], ecx */ W32((u32)(r_eax+0x1c0u), r_ecx);
L_0063b9b7:; BB(0x0063b9b7);
    /* 0063b9b7: mov edx, dword ptr [ebp - 0x154] */ r_edx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0063b9bd: mov eax, dword ptr [edx + 0x1c0] */ r_eax = R32((u32)(r_edx+0x1c0u));
    /* 0063b9c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063b9c4: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0063b9ca: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0063b9cc: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0063b9d2: mov eax, dword ptr [edx + 0xf4] */ r_eax = R32((u32)(r_edx+0xf4u));
    /* 0063b9d8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63b9dau); call_ind(t); }
    /* 0063b9da: lea ecx, [ebp - 0x134] */ r_ecx = (u32)(r_ebp+0xfffffeccu);
    /* 0063b9e0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063b9e1: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063b9e7: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x63b9ecu); f_005f3bf0();
    /* 0063b9ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063b9ed: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0063b9f3: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0063b9f5: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063b9fb: mov edx, dword ptr [eax + 0x338] */ r_edx = R32((u32)(r_eax+0x338u));
    /* 0063ba01: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x63ba03u); call_ind(t); }
    /* 0063ba03: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 0063ba08: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0063ba0a: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0063ba10: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0063ba16: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63ba18u); call_ind(t); }
    /* 0063ba18: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0063ba1b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063ba1d: je 0x63ba46 */ if (fZ) goto L_0063ba46;
L_0063ba1f:; BB(0x0063ba1f);
    /* 0063ba1f: lea edx, [ebp - 0x134] */ r_edx = (u32)(r_ebp+0xfffffeccu);
    /* 0063ba25: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063ba26: push 0x6dba14 */ { u32 v = 0x6dba14u; r_esp -= 4; W32(r_esp, v); }
    /* 0063ba2b: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x63ba30u); f_00630f40();
    /* 0063ba30: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063ba33: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063ba34: lea eax, [ebp - 0x114] */ r_eax = (u32)(r_ebp+0xfffffeecu);
    /* 0063ba3a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063ba3b: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x63ba41u); call_ind(t); }
    /* 0063ba41: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063ba44: jmp 0x63ba6b */ goto L_0063ba6b;
L_0063ba46:; BB(0x0063ba46);
    /* 0063ba46: lea ecx, [ebp - 0x134] */ r_ecx = (u32)(r_ebp+0xfffffeccu);
    /* 0063ba4c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063ba4d: push 0x6db9f4 */ { u32 v = 0x6db9f4u; r_esp -= 4; W32(r_esp, v); }
    /* 0063ba52: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x63ba57u); f_00630f40();
    /* 0063ba57: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063ba5a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063ba5b: lea edx, [ebp - 0x114] */ r_edx = (u32)(r_ebp+0xfffffeecu);
    /* 0063ba61: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063ba62: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x63ba68u); call_ind(t); }
    /* 0063ba68: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0063ba6b:; BB(0x0063ba6b);
    /* 0063ba6b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063ba6d: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 0063ba6f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063ba71: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0063ba73: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0063ba75: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 0063ba77: push 0x1f9 */ { u32 v = 0x1f9u; r_esp -= 4; W32(r_esp, v); }
    /* 0063ba7c: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 0063ba7e: lea eax, [ebp - 0x114] */ r_eax = (u32)(r_ebp+0xfffffeecu);
    /* 0063ba84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063ba85: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063ba87: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063ba89: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0063ba8f: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x63ba94u); f_005fa5b0();
    /* 0063ba94: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0063ba9a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0063ba9c: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0063baa2: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 0063baa8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63baaau); call_ind(t); }
    /* 0063baaa: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0063baad: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063bab1: je 0x63babe */ if (fZ) goto L_0063babe;
L_0063bab3:; BB(0x0063bab3);
    /* 0063bab3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063bab6: mov dword ptr [ebp - 0x158], ecx */ W32((u32)(r_ebp+0xfffffea8u), r_ecx);
    /* 0063babc: jmp 0x63bad1 */ goto L_0063bad1;
L_0063babe:; BB(0x0063babe);
    /* 0063babe: push 0x6c1428 */ { u32 v = 0x6c1428u; r_esp -= 4; W32(r_esp, v); }
    /* 0063bac3: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x63bac8u); f_00630f40();
    /* 0063bac8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063bacb: mov dword ptr [ebp - 0x158], eax */ W32((u32)(r_ebp+0xfffffea8u), r_eax);
L_0063bad1:; BB(0x0063bad1);
    /* 0063bad1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063bad3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063bad5: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 0063bad7: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 0063bad9: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 0063badb: mov edx, dword ptr [ebp - 0x158] */ r_edx = R32((u32)(r_ebp+0xfffffea8u));
    /* 0063bae1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063bae2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063bae4: push 0x188 */ { u32 v = 0x188u; r_esp -= 4; W32(r_esp, v); }
    /* 0063bae9: push 0x14e */ { u32 v = 0x14eu; r_esp -= 4; W32(r_esp, v); }
    /* 0063baee: push 0x30d4e5 */ { u32 v = 0x30d4e5u; r_esp -= 4; W32(r_esp, v); }
    /* 0063baf3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063baf5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063baf7: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0063bafd: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x63bb02u); f_005f9de0();
    /* 0063bb02: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 0063bb07: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0063bb09: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0063bb0f: mov eax, dword ptr [edx + 0xbc] */ r_eax = R32((u32)(r_edx+0xbcu));
    /* 0063bb15: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63bb17u); call_ind(t); }
    /* 0063bb17: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0063bb1a: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063bb1e: je 0x63bb2b */ if (fZ) goto L_0063bb2b;
L_0063bb20:; BB(0x0063bb20);
    /* 0063bb20: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063bb23: mov dword ptr [ebp - 0x15c], ecx */ W32((u32)(r_ebp+0xfffffea4u), r_ecx);
    /* 0063bb29: jmp 0x63bb3e */ goto L_0063bb3e;
L_0063bb2b:; BB(0x0063bb2b);
    /* 0063bb2b: push 0x6c2318 */ { u32 v = 0x6c2318u; r_esp -= 4; W32(r_esp, v); }
    /* 0063bb30: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x63bb35u); f_00630f40();
    /* 0063bb35: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063bb38: mov dword ptr [ebp - 0x15c], eax */ W32((u32)(r_ebp+0xfffffea4u), r_eax);
L_0063bb3e:; BB(0x0063bb3e);
    /* 0063bb3e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063bb40: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063bb42: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 0063bb44: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 0063bb46: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 0063bb48: mov edx, dword ptr [ebp - 0x15c] */ r_edx = R32((u32)(r_ebp+0xfffffea4u));
    /* 0063bb4e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063bb4f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063bb51: push 0x188 */ { u32 v = 0x188u; r_esp -= 4; W32(r_esp, v); }
    /* 0063bb56: push 0x1a8 */ { u32 v = 0x1a8u; r_esp -= 4; W32(r_esp, v); }
    /* 0063bb5b: push 0x30d4de */ { u32 v = 0x30d4deu; r_esp -= 4; W32(r_esp, v); }
    /* 0063bb60: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063bb62: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063bb64: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0063bb6a: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x63bb6fu); f_005f9de0();
    /* 0063bb6f: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0063bb71: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063bb73: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0063bb79: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x63bb7eu); f_005fb300();
    /* 0063bb7e: mov ecx, eax */ r_ecx = r_eax;
    /* 0063bb80: call 0x6026f0 */ r_esp -= 4; W32(r_esp, 0x63bb85u); f_006026f0();
    /* 0063bb85: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 0063bb87: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063bb89: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0063bb8f: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x63bb94u); f_005fb300();
    /* 0063bb94: mov ecx, eax */ r_ecx = r_eax;
    /* 0063bb96: call 0x6026f0 */ r_esp -= 4; W32(r_esp, 0x63bb9bu); f_006026f0();
    /* 0063bb9b: push 0x21c */ { u32 v = 0x21cu; r_esp -= 4; W32(r_esp, v); }
    /* 0063bba0: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x63bba5u); f_00686d82();
    /* 0063bba5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063bba8: mov dword ptr [ebp - 0x140], eax */ W32((u32)(r_ebp+0xfffffec0u), r_eax);
    /* 0063bbae: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0063bbb5: cmp dword ptr [ebp - 0x140], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffec0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063bbbc: je 0x63bbe3 */ if (fZ) goto L_0063bbe3;
L_0063bbbe:; BB(0x0063bbbe);
    /* 0063bbbe: mov ecx, dword ptr [ebp - 0x140] */ r_ecx = R32((u32)(r_ebp+0xfffffec0u));
    /* 0063bbc4: call 0x5ff310 */ r_esp -= 4; W32(r_esp, 0x63bbc9u); f_005ff310();
    /* 0063bbc9: mov eax, dword ptr [ebp - 0x140] */ r_eax = R32((u32)(r_ebp+0xfffffec0u));
    /* 0063bbcf: mov dword ptr [eax], 0x6db8f4 */ W32((u32)(r_eax), 0x6db8f4u);
    /* 0063bbd5: mov ecx, dword ptr [ebp - 0x140] */ r_ecx = R32((u32)(r_ebp+0xfffffec0u));
    /* 0063bbdb: mov dword ptr [ebp - 0x160], ecx */ W32((u32)(r_ebp+0xfffffea0u), r_ecx);
    /* 0063bbe1: jmp 0x63bbed */ goto L_0063bbed;
L_0063bbe3:; BB(0x0063bbe3);
    /* 0063bbe3: mov dword ptr [ebp - 0x160], 0 */ W32((u32)(r_ebp+0xfffffea0u), 0x0u);
L_0063bbed:; BB(0x0063bbed);
    /* 0063bbed: mov edx, dword ptr [ebp - 0x160] */ r_edx = R32((u32)(r_ebp+0xfffffea0u));
    /* 0063bbf3: mov dword ptr [ebp - 0x13c], edx */ W32((u32)(r_ebp+0xfffffec4u), r_edx);
    /* 0063bbf9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0063bc00: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063bc02: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 0063bc04: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 0063bc06: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 0063bc08: push 0x6db8d4 */ { u32 v = 0x6db8d4u; r_esp -= 4; W32(r_esp, v); }
    /* 0063bc0d: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x63bc12u); f_00630f40();
    /* 0063bc12: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063bc15: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063bc16: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063bc18: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063bc1a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063bc1c: push 0x30d4db */ { u32 v = 0x30d4dbu; r_esp -= 4; W32(r_esp, v); }
    /* 0063bc21: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063bc23: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0063bc25: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063bc27: mov eax, dword ptr [ebp - 0x13c] */ r_eax = R32((u32)(r_ebp+0xfffffec4u));
    /* 0063bc2d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063bc2e: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0063bc34: call 0x5fa1e0 */ r_esp -= 4; W32(r_esp, 0x63bc39u); f_005fa1e0();
    /* 0063bc39: push 0x21c */ { u32 v = 0x21cu; r_esp -= 4; W32(r_esp, v); }
    /* 0063bc3e: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x63bc43u); f_00686d82();
    /* 0063bc43: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063bc46: mov dword ptr [ebp - 0x148], eax */ W32((u32)(r_ebp+0xfffffeb8u), r_eax);
    /* 0063bc4c: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0063bc53: cmp dword ptr [ebp - 0x148], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffeb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063bc5a: je 0x63bc81 */ if (fZ) goto L_0063bc81;
L_0063bc5c:; BB(0x0063bc5c);
    /* 0063bc5c: mov ecx, dword ptr [ebp - 0x148] */ r_ecx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 0063bc62: call 0x5ff310 */ r_esp -= 4; W32(r_esp, 0x63bc67u); f_005ff310();
    /* 0063bc67: mov ecx, dword ptr [ebp - 0x148] */ r_ecx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 0063bc6d: mov dword ptr [ecx], 0x6db8f4 */ W32((u32)(r_ecx), 0x6db8f4u);
    /* 0063bc73: mov edx, dword ptr [ebp - 0x148] */ r_edx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 0063bc79: mov dword ptr [ebp - 0x164], edx */ W32((u32)(r_ebp+0xfffffe9cu), r_edx);
    /* 0063bc7f: jmp 0x63bc8b */ goto L_0063bc8b;
L_0063bc81:; BB(0x0063bc81);
    /* 0063bc81: mov dword ptr [ebp - 0x164], 0 */ W32((u32)(r_ebp+0xfffffe9cu), 0x0u);
L_0063bc8b:; BB(0x0063bc8b);
    /* 0063bc8b: mov eax, dword ptr [ebp - 0x164] */ r_eax = R32((u32)(r_ebp+0xfffffe9cu));
    /* 0063bc91: mov dword ptr [ebp - 0x144], eax */ W32((u32)(r_ebp+0xfffffebcu), r_eax);
    /* 0063bc97: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0063bc9e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063bca0: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 0063bca2: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 0063bca4: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 0063bca6: push 0x6db8c0 */ { u32 v = 0x6db8c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063bcab: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x63bcb0u); f_00630f40();
    /* 0063bcb0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063bcb3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063bcb4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063bcb6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063bcb8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063bcba: push 0x30d4dc */ { u32 v = 0x30d4dcu; r_esp -= 4; W32(r_esp, v); }
    /* 0063bcbf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063bcc1: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0063bcc3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063bcc5: mov ecx, dword ptr [ebp - 0x144] */ r_ecx = R32((u32)(r_ebp+0xfffffebcu));
    /* 0063bccb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063bccc: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0063bcd2: call 0x5fa1e0 */ r_esp -= 4; W32(r_esp, 0x63bcd7u); f_005fa1e0();
    /* 0063bcd7: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063bcdc: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x63bce1u); f_00686d82();
    /* 0063bce1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063bce4: mov dword ptr [ebp - 0x150], eax */ W32((u32)(r_ebp+0xfffffeb0u), r_eax);
    /* 0063bcea: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0063bcf1: cmp dword ptr [ebp - 0x150], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffeb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063bcf8: je 0x63bd1f */ if (fZ) goto L_0063bd1f;
L_0063bcfa:; BB(0x0063bcfa);
    /* 0063bcfa: mov ecx, dword ptr [ebp - 0x150] */ r_ecx = R32((u32)(r_ebp+0xfffffeb0u));
    /* 0063bd00: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x63bd05u); f_005ec5a0();
    /* 0063bd05: mov edx, dword ptr [ebp - 0x150] */ r_edx = R32((u32)(r_ebp+0xfffffeb0u));
    /* 0063bd0b: mov dword ptr [edx], 0x6db7fc */ W32((u32)(r_edx), 0x6db7fcu);
    /* 0063bd11: mov eax, dword ptr [ebp - 0x150] */ r_eax = R32((u32)(r_ebp+0xfffffeb0u));
    /* 0063bd17: mov dword ptr [ebp - 0x168], eax */ W32((u32)(r_ebp+0xfffffe98u), r_eax);
    /* 0063bd1d: jmp 0x63bd29 */ goto L_0063bd29;
L_0063bd1f:; BB(0x0063bd1f);
    /* 0063bd1f: mov dword ptr [ebp - 0x168], 0 */ W32((u32)(r_ebp+0xfffffe98u), 0x0u);
L_0063bd29:; BB(0x0063bd29);
    /* 0063bd29: mov ecx, dword ptr [ebp - 0x168] */ r_ecx = R32((u32)(r_ebp+0xfffffe98u));
    /* 0063bd2f: mov dword ptr [ebp - 0x14c], ecx */ W32((u32)(r_ebp+0xfffffeb4u), r_ecx);
    /* 0063bd35: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0063bd3c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063bd3e: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 0063bd40: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063bd42: push 0x180 */ { u32 v = 0x180u; r_esp -= 4; W32(r_esp, v); }
    /* 0063bd47: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0063bd49: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 0063bd4b: push 0x140 */ { u32 v = 0x140u; r_esp -= 4; W32(r_esp, v); }
    /* 0063bd50: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 0063bd52: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0063bd57: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063bd59: mov edx, dword ptr [ebp - 0x14c] */ r_edx = R32((u32)(r_ebp+0xfffffeb4u));
    /* 0063bd5f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063bd60: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0063bd66: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x63bd6bu); f_005fa5b0();
    /* 0063bd6b: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 0063bd6d: mov eax, dword ptr [ebp - 0x154] */ r_eax = R32((u32)(r_ebp+0xfffffeacu));
    /* 0063bd73: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063bd74: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063bd76: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0063bd78: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0063bd7e: call 0x5fb480 */ r_esp -= 4; W32(r_esp, 0x63bd83u); f_005fb480();
    /* 0063bd83: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063bd84: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063bd86: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0063bd88: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0063bd8e: call 0x5fb480 */ r_esp -= 4; W32(r_esp, 0x63bd93u); f_005fb480();
    /* 0063bd93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063bd94: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0063bd9a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0063bd9c: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0063bda2: mov eax, dword ptr [edx + 0xc8] */ r_eax = R32((u32)(r_edx+0xc8u));
    /* 0063bda8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63bdaau); call_ind(t); }
    /* 0063bdaa: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0063bdb0: call 0x63c260 */ r_esp -= 4; W32(r_esp, 0x63bdb5u); f_0063c260();
    /* 0063bdb5: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0063bdbb: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0063bdbd: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0063bdc3: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0063bdc9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63bdcbu); call_ind(t); }
    /* 0063bdcb: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0063bdce: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063bdd0: je 0x63bdfd */ if (fZ) goto L_0063bdfd;
L_0063bdd2:; BB(0x0063bdd2);
    /* 0063bdd2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063bdd4: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0063bdd6: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0063bddc: call 0x5fb480 */ r_esp -= 4; W32(r_esp, 0x63bde1u); f_005fb480();
    /* 0063bde1: mov dword ptr [ebp - 0x16c], eax */ W32((u32)(r_ebp+0xfffffe94u), r_eax);
    /* 0063bde7: mov edx, dword ptr [ebp - 0x16c] */ r_edx = R32((u32)(r_ebp+0xfffffe94u));
    /* 0063bded: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0063bdef: mov ecx, dword ptr [ebp - 0x16c] */ r_ecx = R32((u32)(r_ebp+0xfffffe94u));
    /* 0063bdf5: mov edx, dword ptr [eax + 0xd0] */ r_edx = R32((u32)(r_eax+0xd0u));
    /* 0063bdfb: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x63bdfdu); call_ind(t); }
L_0063bdfd:; BB(0x0063bdfd);
    /* 0063bdfd: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 0063be02: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0063be04: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0063be0a: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0063be10: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63be12u); call_ind(t); }
    /* 0063be12: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0063be15: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063be17: je 0x63be44 */ if (fZ) goto L_0063be44;
L_0063be19:; BB(0x0063be19);
    /* 0063be19: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063be1b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0063be1d: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0063be23: call 0x5fb480 */ r_esp -= 4; W32(r_esp, 0x63be28u); f_005fb480();
    /* 0063be28: mov dword ptr [ebp - 0x170], eax */ W32((u32)(r_ebp+0xfffffe90u), r_eax);
    /* 0063be2e: mov edx, dword ptr [ebp - 0x170] */ r_edx = R32((u32)(r_ebp+0xfffffe90u));
    /* 0063be34: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0063be36: mov ecx, dword ptr [ebp - 0x170] */ r_ecx = R32((u32)(r_ebp+0xfffffe90u));
    /* 0063be3c: mov edx, dword ptr [eax + 0xd0] */ r_edx = R32((u32)(r_eax+0xd0u));
    /* 0063be42: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x63be44u); call_ind(t); }
L_0063be44:; BB(0x0063be44);
    /* 0063be44: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063be47: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063be4e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063be4f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063be52: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0063be54: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x63be59u); f_00686d72();
    /* 0063be59: mov esp, ebp */ r_esp = r_ebp;
    /* 0063be5b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063be5c: ret  */ FN_RET(0x0063b930); r_esp += 4; return;
}

void f_0063be60(void) /* CasinoSettingsDialog::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0063be60);
    /* 0063be60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063be61: mov ebp, esp */ r_ebp = r_esp;
    /* 0063be63: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063be66: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0063be67: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0063be6a: mov byte ptr [ebp - 1], 0 */ W8((u32)(r_ebp+0xffffffffu), 0x0u);
    /* 0063be6e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0063be71: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0063be74: cmp dword ptr [ebp - 0x10], 0x2e */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x2eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0063be78: ja 0x63c13f */ if ((!fC&&!fZ)) goto L_0063c13f;
L_0063be7e:; BB(0x0063be7e);
    /* 0063be7e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063be81: movzx edx, byte ptr [ecx + 0x63c194] */ r_edx = (u32)R8((u32)(r_ecx+0x63c194u));
    /* 0063be88: jmp dword ptr [edx*4 + 0x63c168] */ { u32 t = R32((u32)(r_edx*4+0x63c168u)); switch (t) { case 0x63be8fu: goto L_0063be8f; case 0x63bf62u: goto L_0063bf62; case 0x63bfa9u: goto L_0063bfa9; case 0x63bfaeu: goto L_0063bfae; case 0x63bffbu: goto L_0063bffb; case 0x63c017u: goto L_0063c017; case 0x63c02bu: goto L_0063c02b; case 0x63c03fu: goto L_0063c03f; case 0x63c085u: goto L_0063c085; case 0x63c0e2u: goto L_0063c0e2; case 0x63c13fu: goto L_0063c13f; default: UNSUP(0x0063be88, "jump table entry is not a known target"); } }
L_0063be8f:; BB(0x0063be8f);
    /* 0063be8f: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 0063be94: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0063be96: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0063be9c: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 0063bea2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63bea4u); call_ind(t); }
    /* 0063bea4: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0063bea7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063bea9: je 0x63becd */ if (fZ) goto L_0063becd;
L_0063beab:; BB(0x0063beab);
    /* 0063beab: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063beae: call 0x63d860 */ r_esp -= 4; W32(r_esp, 0x63beb3u); f_0063d860();
    /* 0063beb3: mov esi, eax */ r_esi = r_eax;
    /* 0063beb5: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063bebb: call 0x636610 */ r_esp -= 4; W32(r_esp, 0x63bec0u); f_00636610();
    /* 0063bec0: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063bec2: je 0x63becd */ if (fZ) goto L_0063becd;
L_0063bec4:; BB(0x0063bec4);
    /* 0063bec4: mov byte ptr [ebp - 1], 1 */ W8((u32)(r_ebp+0xffffffffu), 0x1u);
    /* 0063bec8: jmp 0x63bf5a */ goto L_0063bf5a;
L_0063becd:; BB(0x0063becd);
    /* 0063becd: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 0063bed3: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0063bed5: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0063bedb: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 0063bee1: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x63bee3u); call_ind(t); }
    /* 0063bee3: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0063bee6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063bee8: jne 0x63bf03 */ if (!fZ) goto L_0063bf03;
L_0063beea:; BB(0x0063beea);
    /* 0063beea: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063beed: call 0x63d860 */ r_esp -= 4; W32(r_esp, 0x63bef2u); f_0063d860();
    /* 0063bef2: mov esi, eax */ r_esi = r_eax;
    /* 0063bef4: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063befa: call 0x636610 */ r_esp -= 4; W32(r_esp, 0x63beffu); f_00636610();
    /* 0063beff: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063bf01: jne 0x63bf26 */ if (!fZ) goto L_0063bf26;
L_0063bf03:; BB(0x0063bf03);
    /* 0063bf03: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 0063bf05: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063bf08: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063bf09: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 0063bf0f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0063bf11: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0063bf17: mov edx, dword ptr [eax + 0xe4] */ r_edx = R32((u32)(r_eax+0xe4u));
    /* 0063bf1d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x63bf1fu); call_ind(t); }
    /* 0063bf1f: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0063bf22: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063bf24: je 0x63bf5a */ if (fZ) goto L_0063bf5a;
L_0063bf26:; BB(0x0063bf26);
    /* 0063bf26: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0063bf28: push 0x6dba54 */ { u32 v = 0x6dba54u; r_esp -= 4; W32(r_esp, v); }
    /* 0063bf2d: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x63bf32u); f_00630f40();
    /* 0063bf32: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063bf35: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063bf36: push 0x6dba34 */ { u32 v = 0x6dba34u; r_esp -= 4; W32(r_esp, v); }
    /* 0063bf3b: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x63bf40u); f_00630f40();
    /* 0063bf40: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063bf43: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063bf44: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x63bf49u); f_0062ff10();
    /* 0063bf49: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063bf4c: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063bf4f: jne 0x63bf56 */ if (!fZ) goto L_0063bf56;
L_0063bf51:; BB(0x0063bf51);
    /* 0063bf51: jmp 0x63c15e */ goto L_0063c15e;
L_0063bf56:; BB(0x0063bf56);
    /* 0063bf56: mov byte ptr [ebp - 1], 1 */ W8((u32)(r_ebp+0xffffffffu), 0x1u);
L_0063bf5a:; BB(0x0063bf5a);
    /* 0063bf5a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063bf5d: call 0x63e110 */ r_esp -= 4; W32(r_esp, 0x63bf62u); f_0063e110();
L_0063bf62:; BB(0x0063bf62);
    /* 0063bf62: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063bf65: call 0x63e340 */ r_esp -= 4; W32(r_esp, 0x63bf6au); f_0063e340();
    /* 0063bf6a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0063bf6d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063bf6e: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 0063bf74: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0063bf76: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0063bf7c: mov edx, dword ptr [eax + 0x178] */ r_edx = R32((u32)(r_eax+0x178u));
    /* 0063bf82: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x63bf84u); call_ind(t); }
    /* 0063bf84: movzx eax, byte ptr [ebp - 1] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 0063bf88: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063bf8a: je 0x63bfa4 */ if (fZ) goto L_0063bfa4;
L_0063bf8c:; BB(0x0063bf8c);
    /* 0063bf8c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063bf8e: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0063bf94: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0063bf96: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0063bf9c: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 0063bfa2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63bfa4u); call_ind(t); }
L_0063bfa4:; BB(0x0063bfa4);
    /* 0063bfa4: jmp 0x63c15e */ goto L_0063c15e;
L_0063bfa9:; BB(0x0063bfa9);
    /* 0063bfa9: jmp 0x63c15e */ goto L_0063c15e;
L_0063bfae:; BB(0x0063bfae);
    /* 0063bfae: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0063bfb1: sub ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0063bfb4: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063bfb7: mov dword ptr [edx + 0x1c4], ecx */ W32((u32)(r_edx+0x1c4u), r_ecx);
    /* 0063bfbd: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0063bfc2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0063bfc4: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063bfca: mov eax, dword ptr [edx + 0x168] */ r_eax = R32((u32)(r_edx+0x168u));
    /* 0063bfd0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63bfd2u); call_ind(t); }
    /* 0063bfd2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063bfd4: jne 0x63bff6 */ if (!fZ) goto L_0063bff6;
L_0063bfd6:; BB(0x0063bfd6);
    /* 0063bfd6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063bfd8: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063bfda: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063bfdc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063bfde: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063bfe0: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0063bfe6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0063bfe8: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0063bfee: mov eax, dword ptr [edx + 0x16c] */ r_eax = R32((u32)(r_edx+0x16cu));
    /* 0063bff4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63bff6u); call_ind(t); }
L_0063bff6:; BB(0x0063bff6);
    /* 0063bff6: jmp 0x63c15e */ goto L_0063c15e;
L_0063bffb:; BB(0x0063bffb);
    /* 0063bffb: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0063bffe: sub ecx, 0xd */ {  u32 a = r_ecx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0063c001: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063c002: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063c005: call 0x63d7c0 */ r_esp -= 4; W32(r_esp, 0x63c00au); f_0063d7c0();
    /* 0063c00a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063c00d: call 0x63c620 */ r_esp -= 4; W32(r_esp, 0x63c012u); f_0063c620();
    /* 0063c012: jmp 0x63c15e */ goto L_0063c15e;
L_0063c017:; BB(0x0063c017);
    /* 0063c017: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0063c01a: sub edx, 0x15 */ {  u32 a = r_edx; u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0063c01d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063c01e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063c021: call 0x63d920 */ r_esp -= 4; W32(r_esp, 0x63c026u); f_0063d920();
    /* 0063c026: jmp 0x63c15e */ goto L_0063c15e;
L_0063c02b:; BB(0x0063c02b);
    /* 0063c02b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0063c02e: sub eax, 0x1d */ {  u32 a = r_eax; u32 b = 0x1du; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0063c031: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063c032: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063c035: call 0x63da40 */ r_esp -= 4; W32(r_esp, 0x63c03au); f_0063da40();
    /* 0063c03a: jmp 0x63c15e */ goto L_0063c15e;
L_0063c03f:; BB(0x0063c03f);
    /* 0063c03f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063c042: mov edx, dword ptr [ecx + 0x1bc] */ r_edx = R32((u32)(r_ecx+0x1bcu));
    /* 0063c048: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0063c04b: mov ecx, dword ptr [edx + eax*4 - 0x94] */ r_ecx = R32((u32)(r_edx+r_eax*4+0xffffff6cu));
    /* 0063c052: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0063c055: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0063c058: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0063c05b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063c05c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063c05f: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x63c064u); f_005fb350();
    /* 0063c064: mov ecx, eax */ r_ecx = r_eax;
    /* 0063c066: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x63c06bu); f_00600230();
    /* 0063c06b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063c06c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063c06f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063c070: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063c073: mov eax, dword ptr [edx + 0x1bc] */ r_eax = R32((u32)(r_edx+0x1bcu));
    /* 0063c079: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0063c07b: call 0x63b520 */ r_esp -= 4; W32(r_esp, 0x63c080u); f_0063b520();
    /* 0063c080: jmp 0x63c15e */ goto L_0063c15e;
L_0063c085:; BB(0x0063c085);
    /* 0063c085: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063c088: cmp dword ptr [ecx + 0x1c8], 0 */ {  u32 a = R32((u32)(r_ecx+0x1c8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063c08f: jle 0x63c0e0 */ if ((fZ||fS!=fO)) goto L_0063c0e0;
L_0063c091:; BB(0x0063c091);
    /* 0063c091: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063c094: mov dword ptr [edx + 0x1c8], 0 */ W32((u32)(r_edx+0x1c8u), 0x0u);
    /* 0063c09e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063c0a1: call 0x63c620 */ r_esp -= 4; W32(r_esp, 0x63c0a6u); f_0063c620();
    /* 0063c0a6: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 0063c0a8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063c0ab: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x63c0b0u); f_005fb300();
    /* 0063c0b0: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0063c0b3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0063c0b6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0063c0b8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063c0bb: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 0063c0c1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63c0c3u); call_ind(t); }
    /* 0063c0c3: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 0063c0c5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063c0c8: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x63c0cdu); f_005fb300();
    /* 0063c0cd: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0063c0d0: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0063c0d3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0063c0d5: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0063c0d8: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 0063c0de: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63c0e0u); call_ind(t); }
L_0063c0e0:; BB(0x0063c0e0);
    /* 0063c0e0: jmp 0x63c15e */ goto L_0063c15e;
L_0063c0e2:; BB(0x0063c0e2);
    /* 0063c0e2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063c0e5: cmp dword ptr [ecx + 0x1c8], 1 */ {  u32 a = R32((u32)(r_ecx+0x1c8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063c0ec: jge 0x63c13d */ if ((fS==fO)) goto L_0063c13d;
L_0063c0ee:; BB(0x0063c0ee);
    /* 0063c0ee: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063c0f1: mov dword ptr [edx + 0x1c8], 1 */ W32((u32)(r_edx+0x1c8u), 0x1u);
    /* 0063c0fb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063c0fe: call 0x63c620 */ r_esp -= 4; W32(r_esp, 0x63c103u); f_0063c620();
    /* 0063c103: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 0063c105: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063c108: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x63c10du); f_005fb300();
    /* 0063c10d: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0063c110: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0063c113: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0063c115: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0063c118: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 0063c11e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63c120u); call_ind(t); }
    /* 0063c120: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 0063c122: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063c125: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x63c12au); f_005fb300();
    /* 0063c12a: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0063c12d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063c130: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0063c132: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063c135: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 0063c13b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63c13du); call_ind(t); }
L_0063c13d:; BB(0x0063c13d);
    /* 0063c13d: jmp 0x63c15e */ goto L_0063c15e;
L_0063c13f:; BB(0x0063c13f);
    /* 0063c13f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0063c142: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063c143: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c145: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063c148: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063c149: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 0063c14e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0063c150: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0063c156: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 0063c15c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63c15eu); call_ind(t); }
L_0063c15e:; BB(0x0063c15e);
    /* 0063c15e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063c15f: mov esp, ebp */ r_esp = r_ebp;
    /* 0063c161: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063c162: ret 4 */ FN_RET(0x0063be60); r_esp += 8; return;
}

void f_0063c1d0(void) /* CasinoSettingsDialog::vfunc8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0063c1d0);
    /* 0063c1d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063c1d1: mov ebp, esp */ r_ebp = r_esp;
    /* 0063c1d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063c1d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0063c1d7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0063c1da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063c1db: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c1dd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063c1e0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063c1e1: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 0063c1e7: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0063c1e9: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0063c1ef: mov edx, dword ptr [eax + 0xd0] */ r_edx = R32((u32)(r_eax+0xd0u));
    /* 0063c1f5: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x63c1f7u); call_ind(t); }
    /* 0063c1f7: mov esp, ebp */ r_esp = r_ebp;
    /* 0063c1f9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063c1fa: ret 4 */ FN_RET(0x0063c1d0); r_esp += 8; return;
}

void f_0063c200(void) /* CasinoSettingsDialog::vfunc11 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0063c200);
    /* 0063c200: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063c201: mov ebp, esp */ r_ebp = r_esp;
    /* 0063c203: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063c204: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0063c207: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0063c20a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063c20b: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c20d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063c210: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063c211: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 0063c217: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0063c219: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0063c21f: mov edx, dword ptr [eax + 0xd4] */ r_edx = R32((u32)(r_eax+0xd4u));
    /* 0063c225: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x63c227u); call_ind(t); }
    /* 0063c227: mov esp, ebp */ r_esp = r_ebp;
    /* 0063c229: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063c22a: ret 4 */ FN_RET(0x0063c200); r_esp += 8; return;
}

void f_0063c230(void) /* CasinoSettingsDialog::vfunc12 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0063c230);
    /* 0063c230: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063c231: mov ebp, esp */ r_ebp = r_esp;
    /* 0063c233: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063c234: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0063c237: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0063c23a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063c23b: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c23d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063c240: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063c241: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 0063c247: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0063c249: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0063c24f: mov edx, dword ptr [eax + 0xd8] */ r_edx = R32((u32)(r_eax+0xd8u));
    /* 0063c255: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x63c257u); call_ind(t); }
    /* 0063c257: mov esp, ebp */ r_esp = r_ebp;
    /* 0063c259: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063c25a: ret 4 */ FN_RET(0x0063c230); r_esp += 8; return;
}

void f_0063d670(void) /* CasinoSettingsDialog::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0063d670);
    /* 0063d670: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063d671: mov ebp, esp */ r_ebp = r_esp;
    /* 0063d673: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063d674: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0063d677: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0063d67a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063d67b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063d67e: call 0x5f72f0 */ r_esp -= 4; W32(r_esp, 0x63d683u); f_005f72f0();
    /* 0063d683: mov esp, ebp */ r_esp = r_ebp;
    /* 0063d685: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063d686: ret 4 */ FN_RET(0x0063d670); r_esp += 8; return;
}

void f_0063d690(void) /* CasinoSettingsDialog::vfunc14 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0063d690);
    /* 0063d690: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063d691: mov ebp, esp */ r_ebp = r_esp;
    /* 0063d693: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063d696: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0063d699: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0063d6a0: cmp dword ptr [ebp + 8], 0x186ec */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x186ecu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063d6a7: jl 0x63d769 */ if ((fS!=fO)) goto L_0063d769;
L_0063d6ad:; BB(0x0063d6ad);
    /* 0063d6ad: cmp dword ptr [ebp + 8], 0x1870c */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1870cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063d6b4: jg 0x63d769 */ if ((!fZ&&fS==fO)) goto L_0063d769;
L_0063d6ba:; BB(0x0063d6ba);
    /* 0063d6ba: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0063d6bd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063d6be: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063d6c4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0063d6c6: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063d6cc: mov eax, dword ptr [edx + 0x3b0] */ r_eax = R32((u32)(r_edx+0x3b0u));
    /* 0063d6d2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63d6d4u); call_ind(t); }
    /* 0063d6d4: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0063d6d7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063d6da: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063d6db: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063d6de: call 0x63e000 */ r_esp -= 4; W32(r_esp, 0x63d6e3u); f_0063e000();
    /* 0063d6e3: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0063d6e6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063d6e8: jne 0x63d6ef */ if (!fZ) goto L_0063d6ef;
L_0063d6ea:; BB(0x0063d6ea);
    /* 0063d6ea: jmp 0x63d7b8 */ goto L_0063d7b8;
L_0063d6ef:; BB(0x0063d6ef);
    /* 0063d6ef: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063d6f2: mov ecx, dword ptr [eax + 0x1c4] */ r_ecx = R32((u32)(r_eax+0x1c4u));
    /* 0063d6f8: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063d6fb: mov eax, dword ptr [edx + 0x1bc] */ r_eax = R32((u32)(r_edx+0x1bcu));
    /* 0063d701: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 0063d704: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0063d707: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063d70a: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x63d70fu); f_0063aac0();
    /* 0063d70f: mov dword ptr [eax], 1 */ W32((u32)(r_eax), 0x1u);
    /* 0063d715: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063d718: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063d719: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063d71c: mov ecx, dword ptr [eax + 0x1c4] */ r_ecx = R32((u32)(r_eax+0x1c4u));
    /* 0063d722: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063d725: mov eax, dword ptr [edx + 0x1bc] */ r_eax = R32((u32)(r_edx+0x1bcu));
    /* 0063d72b: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 0063d72e: call 0x63b490 */ r_esp -= 4; W32(r_esp, 0x63d733u); f_0063b490();
    /* 0063d733: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063d736: mov edx, dword ptr [ecx + 0x1c4] */ r_edx = R32((u32)(r_ecx+0x1c4u));
    /* 0063d73c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063d73f: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 0063d745: mov edx, dword ptr [ecx + edx*4] */ r_edx = R32((u32)(r_ecx+r_edx*4));
    /* 0063d748: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0063d74b: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0063d750: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063d753: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063d756: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063d757: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x63d75cu); f_00686d8e();
    /* 0063d75c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063d75f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063d762: call 0x63c620 */ r_esp -= 4; W32(r_esp, 0x63d767u); f_0063c620();
    /* 0063d767: jmp 0x63d7b8 */ goto L_0063d7b8;
L_0063d769:; BB(0x0063d769);
    /* 0063d769: cmp dword ptr [ebp + 8], 0x186eb */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x186ebu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063d770: jne 0x63d794 */ if (!fZ) goto L_0063d794;
L_0063d772:; BB(0x0063d772);
    /* 0063d772: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063d774: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063d776: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063d778: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063d77a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063d77c: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0063d782: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0063d784: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0063d78a: mov eax, dword ptr [edx + 0x16c] */ r_eax = R32((u32)(r_edx+0x16cu));
    /* 0063d790: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63d792u); call_ind(t); }
    /* 0063d792: jmp 0x63d7b8 */ goto L_0063d7b8;
L_0063d794:; BB(0x0063d794);
    /* 0063d794: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0063d797: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063d798: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0063d79b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063d79c: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 0063d79e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063d7a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063d7a2: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0063d7a8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0063d7aa: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0063d7b0: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 0063d7b6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63d7b8u); call_ind(t); }
L_0063d7b8:; BB(0x0063d7b8);
    /* 0063d7b8: mov esp, ebp */ r_esp = r_ebp;
    /* 0063d7ba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063d7bb: ret 8 */ FN_RET(0x0063d690); r_esp += 12; return;
}

