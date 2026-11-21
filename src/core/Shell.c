#include "protos.h"

void f_005f3130(void) /* Shell::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f3130);
    /* 005f3130: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f3131: mov ebp, esp */ r_ebp = r_esp;
    /* 005f3133: sub esp, 0xc8 */ {  u32 a = r_esp; u32 b = 0xc8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f3139: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005f313e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005f3140: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005f3143: mov dword ptr [ebp - 0xb4], ecx */ W32((u32)(r_ebp+0xffffff4cu), r_ecx);
    /* 005f3149: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 005f314f: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 005f3155: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 005f3158: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 005f315b: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 005f3161: call 0x5f3e70 */ r_esp -= 4; W32(r_esp, 0x5f3166u); f_005f3e70();
    /* 005f3166: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 005f316c: mov dword ptr [ecx + 0x1c], eax */ W32((u32)(r_ecx+0x1cu), r_eax);
    /* 005f316f: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 005f3175: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 005f317b: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 005f317e: cmp ecx, dword ptr [eax + 0x18] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x18u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f3181: jge 0x5f31c0 */ if ((fS==fO)) goto L_005f31c0;
L_005f3183:; BB(0x005f3183);
    /* 005f3183: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 005f3189: cmp dword ptr [edx + 0x1c], 0 */ {  u32 a = R32((u32)(r_edx+0x1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f318d: jle 0x5f31a6 */ if ((fZ||fS!=fO)) goto L_005f31a6;
L_005f318f:; BB(0x005f318f);
    /* 005f318f: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 005f3195: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 005f3198: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005f319b: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 005f31a1: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 005f31a4: jmp 0x5f31c0 */ goto L_005f31c0;
L_005f31a6:; BB(0x005f31a6);
    /* 005f31a6: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 005f31ac: mov dword ptr [eax + 0x1c], 0 */ W32((u32)(r_eax+0x1cu), 0x0u);
    /* 005f31b3: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 005f31b9: mov dword ptr [ecx + 0x18], 0 */ W32((u32)(r_ecx+0x18u), 0x0u);
L_005f31c0:; BB(0x005f31c0);
    /* 005f31c0: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 005f31c6: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 005f31cc: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 005f31cf: cmp ecx, dword ptr [eax + 0x18] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x18u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f31d2: jne 0x5f31df */ if (!fZ) goto L_005f31df;
L_005f31d4:; BB(0x005f31d4);
    /* 005f31d4: movzx edx, byte ptr [0x795fa1] */ r_edx = (u32)R8((u32)(0x795fa1u));
    /* 005f31db: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f31dd: je 0x5f31f5 */ if (fZ) goto L_005f31f5;
L_005f31df:; BB(0x005f31df);
    /* 005f31df: movzx eax, byte ptr [0x15e55d3] */ r_eax = (u32)R8((u32)(0x15e55d3u));
    /* 005f31e6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f31e8: jne 0x5f320d */ if (!fZ) goto L_005f320d;
L_005f31ea:; BB(0x005f31ea);
    /* 005f31ea: movzx ecx, byte ptr [0x15e55d4] */ r_ecx = (u32)R8((u32)(0x15e55d4u));
    /* 005f31f1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f31f3: jne 0x5f320d */ if (!fZ) goto L_005f320d;
L_005f31f5:; BB(0x005f31f5);
    /* 005f31f5: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 005f31fb: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005f31fd: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 005f3203: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 005f3206: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5f3208u); call_ind(t); }
    /* 005f3208: jmp 0x5f37d6 */ goto L_005f37d6;
L_005f320d:; BB(0x005f320d);
    /* 005f320d: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 005f3213: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 005f3219: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 005f321c: sub edx, dword ptr [ecx + 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x18u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005f321f: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005f3222: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f3226: jg 0x5f322f */ if ((!fZ&&fS==fO)) goto L_005f322f;
L_005f3228:; BB(0x005f3228);
    /* 005f3228: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
L_005f322f:; BB(0x005f322f);
    /* 005f322f: cmp dword ptr [ebp - 8], 0x3c */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f3233: jle 0x5f323c */ if ((fZ||fS!=fO)) goto L_005f323c;
L_005f3235:; BB(0x005f3235);
    /* 005f3235: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
L_005f323c:; BB(0x005f323c);
    /* 005f323c: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f3240: jle 0x5f3249 */ if ((fZ||fS!=fO)) goto L_005f3249;
L_005f3242:; BB(0x005f3242);
    /* 005f3242: mov dword ptr [ebp - 8], 2 */ W32((u32)(r_ebp+0xfffffff8u), 0x2u);
L_005f3249:; BB(0x005f3249);
    /* 005f3249: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 005f324f: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 005f3252: sub ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005f3255: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 005f325b: mov dword ptr [edx + 0x20], ecx */ W32((u32)(r_edx+0x20u), r_ecx);
L_005f325e:; BB(0x005f325e);
    /* 005f325e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f3261: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f3264: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005f3267: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005f326a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f326c: je 0x5f34be */ if (fZ) goto L_005f34be;
L_005f3272:; BB(0x005f3272);
    /* 005f3272: mov edx, dword ptr [0x795094] */ r_edx = R32((u32)(0x795094u));
    /* 005f3278: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005f327b: mov dword ptr [0x795094], edx */ W32((u32)(0x795094u), r_edx);
    /* 005f3281: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 005f3287: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 005f328a: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f328d: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 005f3293: mov dword ptr [edx + 0x20], ecx */ W32((u32)(r_edx+0x20u), r_ecx);
    /* 005f3296: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 005f329c: cmp dword ptr [eax + 0x2c], -1 */ {  u32 a = R32((u32)(r_eax+0x2cu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f32a0: je 0x5f32b7 */ if (fZ) goto L_005f32b7;
L_005f32a2:; BB(0x005f32a2);
    /* 005f32a2: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 005f32a8: mov edx, dword ptr [ecx + 0x2c] */ r_edx = R32((u32)(r_ecx+0x2cu));
    /* 005f32ab: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f32ac: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 005f32b2: call 0x5f3c30 */ r_esp -= 4; W32(r_esp, 0x5f32b7u); f_005f3c30();
L_005f32b7:; BB(0x005f32b7);
    /* 005f32b7: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 005f32bd: cmp dword ptr [eax + 0x28], 0 */ {  u32 a = R32((u32)(r_eax+0x28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f32c1: je 0x5f32d1 */ if (fZ) goto L_005f32d1;
L_005f32c3:; BB(0x005f32c3);
    /* 005f32c3: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 005f32c9: mov ecx, dword ptr [ecx + 0x28] */ r_ecx = R32((u32)(r_ecx+0x28u));
    /* 005f32cc: call 0x5fc250 */ r_esp -= 4; W32(r_esp, 0x5f32d1u); f_005fc250();
L_005f32d1:; BB(0x005f32d1);
    /* 005f32d1: cmp dword ptr [0x15e55e4], 0 */ {  u32 a = R32((u32)(0x15e55e4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f32d8: je 0x5f3356 */ if (fZ) goto L_005f3356;
L_005f32da:; BB(0x005f32da);
    /* 005f32da: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 005f32e0: call 0x5f3fe0 */ r_esp -= 4; W32(r_esp, 0x5f32e5u); f_005f3fe0();
    /* 005f32e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f32e7: je 0x5f3338 */ if (fZ) goto L_005f3338;
L_005f32e9:; BB(0x005f32e9);
    /* 005f32e9: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 005f32ef: call 0x5f3fe0 */ r_esp -= 4; W32(r_esp, 0x5f32f4u); f_005f3fe0();
    /* 005f32f4: movzx edx, byte ptr [eax + 0x1b1] */ r_edx = (u32)R8((u32)(r_eax+0x1b1u));
    /* 005f32fb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f32fd: jne 0x5f3338 */ if (!fZ) goto L_005f3338;
L_005f32ff:; BB(0x005f32ff);
    /* 005f32ff: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 005f3305: call 0x5f3fe0 */ r_esp -= 4; W32(r_esp, 0x5f330au); f_005f3fe0();
    /* 005f330a: mov dword ptr [ebp - 0xb8], eax */ W32((u32)(r_ebp+0xffffff48u), r_eax);
    /* 005f3310: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 005f3316: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005f3318: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 005f331e: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005f3321: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f3323u); call_ind(t); }
    /* 005f3323: mov ecx, dword ptr [0x15e55e4] */ r_ecx = R32((u32)(0x15e55e4u));
    /* 005f3329: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005f332b: mov ecx, dword ptr [0x15e55e4] */ r_ecx = R32((u32)(0x15e55e4u));
    /* 005f3331: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005f3334: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f3336u); call_ind(t); }
    /* 005f3336: jmp 0x5f3356 */ goto L_005f3356;
L_005f3338:; BB(0x005f3338);
    /* 005f3338: movzx ecx, byte ptr [0x15e55ec] */ r_ecx = (u32)R8((u32)(0x15e55ecu));
    /* 005f333f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f3341: jne 0x5f3356 */ if (!fZ) goto L_005f3356;
L_005f3343:; BB(0x005f3343);
    /* 005f3343: mov edx, dword ptr [0x15e55e4] */ r_edx = R32((u32)(0x15e55e4u));
    /* 005f3349: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005f334b: mov ecx, dword ptr [0x15e55e4] */ r_ecx = R32((u32)(0x15e55e4u));
    /* 005f3351: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 005f3354: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5f3356u); call_ind(t); }
L_005f3356:; BB(0x005f3356);
    /* 005f3356: cmp dword ptr [0x7960d8], 0 */ {  u32 a = R32((u32)(0x7960d8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f335d: je 0x5f3378 */ if (fZ) goto L_005f3378;
L_005f335f:; BB(0x005f335f);
    /* 005f335f: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 005f3364: cmp dword ptr [eax + 8], 0 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f3368: je 0x5f3378 */ if (fZ) goto L_005f3378;
L_005f336a:; BB(0x005f336a);
    /* 005f336a: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 005f3370: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005f3373: call 0x60acc0 */ r_esp -= 4; W32(r_esp, 0x5f3378u); f_0060acc0();
L_005f3378:; BB(0x005f3378);
    /* 005f3378: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f337f: jmp 0x5f338a */ goto L_005f338a;
L_005f3381:; BB(0x005f3381);
    /* 005f3381: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f3384: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005f3387: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_005f338a:; BB(0x005f338a);
    /* 005f338a: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 005f3390: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f3393: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x5f3398u); f_0060c9a0();
    /* 005f3398: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f339b: jge 0x5f340b */ if ((fS==fO)) goto L_005f340b;
L_005f339d:; BB(0x005f339d);
    /* 005f339d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f33a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f33a1: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 005f33a7: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f33aa: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x5f33afu); f_0060ca40();
    /* 005f33af: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 005f33b2: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 005f33b5: mov edx, dword ptr [ecx + 0x1a4] */ r_edx = R32((u32)(r_ecx+0x1a4u));
    /* 005f33bb: mov dword ptr [ebp - 0xa4], edx */ W32((u32)(r_ebp+0xffffff5cu), r_edx);
    /* 005f33c1: cmp dword ptr [ebp - 0xa4], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff5cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f33c8: jne 0x5f33ec */ if (!fZ) goto L_005f33ec;
L_005f33ca:; BB(0x005f33ca);
    /* 005f33ca: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 005f33cd: call 0x5f8910 */ r_esp -= 4; W32(r_esp, 0x5f33d2u); f_005f8910();
    /* 005f33d2: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005f33d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f33d7: je 0x5f33ec */ if (fZ) goto L_005f33ec;
L_005f33d9:; BB(0x005f33d9);
    /* 005f33d9: movzx ecx, byte ptr [0x795fa5] */ r_ecx = (u32)R8((u32)(0x795fa5u));
    /* 005f33e0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f33e2: je 0x5f33ec */ if (fZ) goto L_005f33ec;
L_005f33e4:; BB(0x005f33e4);
    /* 005f33e4: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 005f33e7: call 0x5f9a80 */ r_esp -= 4; W32(r_esp, 0x5f33ecu); f_005f9a80();
L_005f33ec:; BB(0x005f33ec);
    /* 005f33ec: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 005f33ef: mov eax, dword ptr [edx + 0x1a8] */ r_eax = R32((u32)(r_edx+0x1a8u));
    /* 005f33f5: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 005f33fb: mov ecx, dword ptr [ebp - 0xa8] */ r_ecx = R32((u32)(r_ebp+0xffffff58u));
    /* 005f3401: call 0x613e70 */ r_esp -= 4; W32(r_esp, 0x5f3406u); f_00613e70();
    /* 005f3406: jmp 0x5f3381 */ goto L_005f3381;
L_005f340b:; BB(0x005f340b);
    /* 005f340b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f3412: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f3415: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f3416: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 005f341c: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f341f: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x5f3424u); f_0060ca40();
    /* 005f3424: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
L_005f3427:; BB(0x005f3427);
    /* 005f3427: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 005f342d: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f3430: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x5f3435u); f_0060c9a0();
    /* 005f3435: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f3438: jge 0x5f34b9 */ if ((fS==fO)) goto L_005f34b9;
L_005f343a:; BB(0x005f343a);
    /* 005f343a: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 005f343d: call 0x5f89b0 */ r_esp -= 4; W32(r_esp, 0x5f3442u); f_005f89b0();
    /* 005f3442: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005f3445: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f3447: je 0x5f3496 */ if (fZ) goto L_005f3496;
L_005f3449:; BB(0x005f3449);
    /* 005f3449: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 005f344c: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 005f3452: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 005f3458: mov dword ptr [ebp - 0x94], ecx */ W32((u32)(r_ebp+0xffffff6cu), r_ecx);
    /* 005f345e: cmp dword ptr [ebp - 0x94], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff6cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f3465: je 0x5f3483 */ if (fZ) goto L_005f3483;
L_005f3467:; BB(0x005f3467);
    /* 005f3467: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f3469: mov edx, dword ptr [ebp - 0x94] */ r_edx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005f346f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005f3471: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005f3477: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005f3479: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5f347bu); call_ind(t); }
    /* 005f347b: mov dword ptr [ebp - 0xbc], eax */ W32((u32)(r_ebp+0xffffff44u), r_eax);
    /* 005f3481: jmp 0x5f348d */ goto L_005f348d;
L_005f3483:; BB(0x005f3483);
    /* 005f3483: mov dword ptr [ebp - 0xbc], 0 */ W32((u32)(r_ebp+0xffffff44u), 0x0u);
L_005f348d:; BB(0x005f348d);
    /* 005f348d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f3494: jmp 0x5f349f */ goto L_005f349f;
L_005f3496:; BB(0x005f3496);
    /* 005f3496: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f3499: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f349c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005f349f:; BB(0x005f349f);
    /* 005f349f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f34a2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f34a3: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 005f34a9: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f34ac: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x5f34b1u); f_0060ca40();
    /* 005f34b1: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 005f34b4: jmp 0x5f3427 */ goto L_005f3427;
L_005f34b9:; BB(0x005f34b9);
    /* 005f34b9: jmp 0x5f325e */ goto L_005f325e;
L_005f34be:; BB(0x005f34be);
    /* 005f34be: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 005f34c4: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 005f34c7: mov dword ptr [0x795090], eax */ W32((u32)(0x795090u), r_eax);
    /* 005f34cc: mov ecx, dword ptr [0x79508c] */ r_ecx = R32((u32)(0x79508cu));
    /* 005f34d2: add ecx, 0x3c */ {  u32 a = r_ecx; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f34d5: cmp dword ptr [0x795090], ecx */ {  u32 a = R32((u32)(0x795090u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f34db: jl 0x5f3602 */ if ((fS!=fO)) goto L_005f3602;
L_005f34e1:; BB(0x005f34e1);
    /* 005f34e1: cmp dword ptr [0x795078], 0 */ {  u32 a = R32((u32)(0x795078u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f34e8: je 0x5f35ec */ if (fZ) goto L_005f35ec;
L_005f34ee:; BB(0x005f34ee);
    /* 005f34ee: mov edx, dword ptr [0x795fac] */ r_edx = R32((u32)(0x795facu));
    /* 005f34f4: imul edx, edx, 0x64 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x64u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005f34f7: mov dword ptr [0x795fac], edx */ W32((u32)(0x795facu), r_edx);
    /* 005f34fd: movzx eax, byte ptr [0x795fa5] */ r_eax = (u32)R8((u32)(0x795fa5u));
    /* 005f3504: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f3506: je 0x5f3514 */ if (fZ) goto L_005f3514;
L_005f3508:; BB(0x005f3508);
    /* 005f3508: mov dword ptr [ebp - 0xc0], 0x6d67ec */ W32((u32)(r_ebp+0xffffff40u), 0x6d67ecu);
    /* 005f3512: jmp 0x5f351e */ goto L_005f351e;
L_005f3514:; BB(0x005f3514);
    /* 005f3514: mov dword ptr [ebp - 0xc0], 0x6d67e8 */ W32((u32)(r_ebp+0xffffff40u), 0x6d67e8u);
L_005f351e:; BB(0x005f351e);
    /* 005f351e: mov eax, dword ptr [0x795fac] */ r_eax = R32((u32)(0x795facu));
    /* 005f3523: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005f3525: div dword ptr [0x795fa8] */ { u32 d = R32((u32)(0x795fa8u)); if (!d) UNSUP(0x005f3525, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x005f3525, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005f352b: mov dword ptr [ebp - 0xc4], eax */ W32((u32)(r_ebp+0xffffff3cu), r_eax);
    /* 005f3531: mov ecx, dword ptr [0x795fa8] */ r_ecx = R32((u32)(0x795fa8u));
    /* 005f3537: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f353a: mov dword ptr [0x795fa8], ecx */ W32((u32)(0x795fa8u), r_ecx);
    /* 005f3540: mov edx, dword ptr [ebp - 0xc4] */ r_edx = R32((u32)(r_ebp+0xffffff3cu));
    /* 005f3546: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f3547: mov eax, dword ptr [ebp - 0xc0] */ r_eax = R32((u32)(r_ebp+0xffffff40u));
    /* 005f354d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f354e: mov ecx, dword ptr [0x795090] */ r_ecx = R32((u32)(0x795090u));
    /* 005f3554: sub ecx, dword ptr [0x79508c] */ {  u32 a = r_ecx; u32 b = R32((u32)(0x79508cu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005f355a: mov dword ptr [ebp - 0xc8], ecx */ W32((u32)(r_ebp+0xffffff38u), r_ecx);
    /* 005f3560: fild dword ptr [ebp - 0xc8] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff38u)));
    /* 005f3566: fdiv qword ptr [0x6d67e0] */ ST(0) = ST(0) / R_F64((u32)(0x6d67e0u));
    /* 005f356c: fidivr dword ptr [0x795094] */ ST(0) = (long double)(i32)R32((u32)(0x795094u)) / ST(0);
    /* 005f3572: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x5f3577u); f_00686cc0();
    /* 005f3577: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f3578: push 0x6d67c4 */ { u32 v = 0x6d67c4u; r_esp -= 4; W32(r_esp, v); }
    /* 005f357d: lea edx, [ebp - 0x78] */ r_edx = (u32)(r_ebp+0xffffff88u);
    /* 005f3580: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f3581: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x5f3587u); call_ind(t); }
    /* 005f3587: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f358a: lea eax, [ebp - 0x78] */ r_eax = (u32)(r_ebp+0xffffff88u);
    /* 005f358d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f358e: mov ecx, dword ptr [0x795078] */ r_ecx = R32((u32)(0x795078u));
    /* 005f3594: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005f3596: mov ecx, dword ptr [0x795078] */ r_ecx = R32((u32)(0x795078u));
    /* 005f359c: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 005f35a2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f35a4u); call_ind(t); }
    /* 005f35a4: mov ecx, dword ptr [0x795078] */ r_ecx = R32((u32)(0x795078u));
    /* 005f35aa: call 0x5ef050 */ r_esp -= 4; W32(r_esp, 0x5f35afu); f_005ef050();
    /* 005f35af: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f35b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f35b3: mov ecx, dword ptr [0x795078] */ r_ecx = R32((u32)(0x795078u));
    /* 005f35b9: call 0x5ecc60 */ r_esp -= 4; W32(r_esp, 0x5f35beu); f_005ecc60();
    /* 005f35be: mov ecx, dword ptr [0x795078] */ r_ecx = R32((u32)(0x795078u));
    /* 005f35c4: call 0x5ef130 */ r_esp -= 4; W32(r_esp, 0x5f35c9u); f_005ef130();
    /* 005f35c9: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f35cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f35cd: mov ecx, dword ptr [0x795078] */ r_ecx = R32((u32)(0x795078u));
    /* 005f35d3: call 0x5eccb0 */ r_esp -= 4; W32(r_esp, 0x5f35d8u); f_005eccb0();
    /* 005f35d8: mov dword ptr [0x795fa8], 0 */ W32((u32)(0x795fa8u), 0x0u);
    /* 005f35e2: mov dword ptr [0x795fac], 0 */ W32((u32)(0x795facu), 0x0u);
L_005f35ec:; BB(0x005f35ec);
    /* 005f35ec: mov ecx, dword ptr [0x795090] */ r_ecx = R32((u32)(0x795090u));
    /* 005f35f2: mov dword ptr [0x79508c], ecx */ W32((u32)(0x79508cu), r_ecx);
    /* 005f35f8: mov dword ptr [0x795094], 0 */ W32((u32)(0x795094u), 0x0u);
L_005f3602:; BB(0x005f3602);
    /* 005f3602: cmp dword ptr [0x79507c], 0 */ {  u32 a = R32((u32)(0x79507cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f3609: je 0x5f37c4 */ if (fZ) goto L_005f37c4;
L_005f360f:; BB(0x005f360f);
    /* 005f360f: cmp dword ptr [0x795080], 0 */ {  u32 a = R32((u32)(0x795080u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f3616: je 0x5f37c4 */ if (fZ) goto L_005f37c4;
L_005f361c:; BB(0x005f361c);
    /* 005f361c: cmp dword ptr [0x795084], 0 */ {  u32 a = R32((u32)(0x795084u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f3623: je 0x5f37c4 */ if (fZ) goto L_005f37c4;
L_005f3629:; BB(0x005f3629);
    /* 005f3629: call 0x5ea470 */ r_esp -= 4; W32(r_esp, 0x5f362eu); f_005ea470();
    /* 005f362e: mov dword ptr [ebp - 0xa0], eax */ W32((u32)(r_ebp+0xffffff60u), r_eax);
    /* 005f3634: mov dword ptr [ebp - 0x9c], edx */ W32((u32)(r_ebp+0xffffff64u), r_edx);
    /* 005f363a: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 005f3640: mov dword ptr [ebp - 0x8c], edx */ W32((u32)(r_ebp+0xffffff74u), r_edx);
    /* 005f3646: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 005f364c: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 005f3652: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 005f3658: mov dword ptr [ebp - 0x84], ecx */ W32((u32)(r_ebp+0xffffff7cu), r_ecx);
    /* 005f365e: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 005f3664: mov dword ptr [ebp - 0x80], edx */ W32((u32)(r_ebp+0xffffff80u), r_edx);
    /* 005f3667: lea eax, [ebp - 0x84] */ r_eax = (u32)(r_ebp+0xffffff7cu);
    /* 005f366d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f366e: call 0x5ea400 */ r_esp -= 4; W32(r_esp, 0x5f3673u); f_005ea400();
    /* 005f3673: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f3676: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 005f367c: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 005f367f: mov eax, dword ptr [edx + 0x1a8] */ r_eax = R32((u32)(r_edx+0x1a8u));
    /* 005f3685: mov dword ptr [ebp - 0xac], eax */ W32((u32)(r_ebp+0xffffff54u), r_eax);
    /* 005f368b: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 005f3691: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 005f3697: hover scaled client->canvas x */ { u32 cx = R32((u32)(r_ecx+0x20u)) - R32((u32)(r_ecx+0x18u)); u32 cw = R32((u32)(r_ecx+0x30u)) - R32((u32)(r_ecx+0x28u)); r_edx = cx ? (u32)(((u64)r_edx * cw) / cx) + R32((u32)(r_ecx+0x28u)) : r_edx - R32((u32)(r_ecx+0x28u)); }
    /* 005f369a: mov dword ptr [ebp - 0x84], edx */ W32((u32)(r_ebp+0xffffff7cu), r_edx);
    /* 005f36a0: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 005f36a6: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005f36a9: mov edx, dword ptr [ecx + 0x1a8] */ r_edx = R32((u32)(r_ecx+0x1a8u));
    /* 005f36af: mov dword ptr [ebp - 0xb0], edx */ W32((u32)(r_ebp+0xffffff50u), r_edx);
    /* 005f36b5: mov eax, dword ptr [ebp - 0xb0] */ r_eax = R32((u32)(r_ebp+0xffffff50u));
    /* 005f36bb: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 005f36be: hover scaled client->canvas y */ { u32 cy = R32((u32)(r_eax+0x24u)) - R32((u32)(r_eax+0x1cu)); u32 ch = R32((u32)(r_eax+0x34u)) - R32((u32)(r_eax+0x2cu)); r_ecx = cy ? (u32)(((u64)r_ecx * ch) / cy) + R32((u32)(r_eax+0x2cu)) : r_ecx - R32((u32)(r_eax+0x2cu)); }
    /* 005f36c1: mov dword ptr [ebp - 0x80], ecx */ W32((u32)(r_ebp+0xffffff80u), r_ecx);
    /* 005f36c4: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 005f36ca: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f36cb: mov eax, dword ptr [ebp - 0x8c] */ r_eax = R32((u32)(r_ebp+0xffffff74u));
    /* 005f36d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f36d2: push 0x6d67b4 */ { u32 v = 0x6d67b4u; r_esp -= 4; W32(r_esp, v); }
    /* 005f36d7: lea ecx, [ebp - 0x78] */ r_ecx = (u32)(r_ebp+0xffffff88u);
    /* 005f36da: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f36db: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x5f36e1u); call_ind(t); }
    /* 005f36e1: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f36e4: lea edx, [ebp - 0x78] */ r_edx = (u32)(r_ebp+0xffffff88u);
    /* 005f36e7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f36e8: mov eax, dword ptr [0x79507c] */ r_eax = R32((u32)(0x79507cu));
    /* 005f36ed: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005f36ef: mov ecx, dword ptr [0x79507c] */ r_ecx = R32((u32)(0x79507cu));
    /* 005f36f5: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 005f36fb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f36fdu); call_ind(t); }
    /* 005f36fd: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 005f3700: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f3701: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 005f3707: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f3708: push 0x6d67a4 */ { u32 v = 0x6d67a4u; r_esp -= 4; W32(r_esp, v); }
    /* 005f370d: lea eax, [ebp - 0x78] */ r_eax = (u32)(r_ebp+0xffffff88u);
    /* 005f3710: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f3711: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x5f3717u); call_ind(t); }
    /* 005f3717: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f371a: lea ecx, [ebp - 0x78] */ r_ecx = (u32)(r_ebp+0xffffff88u);
    /* 005f371d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f371e: mov edx, dword ptr [0x795080] */ r_edx = R32((u32)(0x795080u));
    /* 005f3724: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005f3726: mov ecx, dword ptr [0x795080] */ r_ecx = R32((u32)(0x795080u));
    /* 005f372c: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 005f3732: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5f3734u); call_ind(t); }
    /* 005f3734: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 005f373a: call 0x5f3fe0 */ r_esp -= 4; W32(r_esp, 0x5f373fu); f_005f3fe0();
    /* 005f373f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f3741: je 0x5f378d */ if (fZ) goto L_005f378d;
L_005f3743:; BB(0x005f3743);
    /* 005f3743: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 005f3749: call 0x5f3fe0 */ r_esp -= 4; W32(r_esp, 0x5f374eu); f_005f3fe0();
    /* 005f374e: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 005f3754: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 005f375a: call 0x5f84f0 */ r_esp -= 4; W32(r_esp, 0x5f375fu); f_005f84f0();
    /* 005f375f: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 005f3762: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005f3764: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f3765: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 005f376b: call 0x5f84d0 */ r_esp -= 4; W32(r_esp, 0x5f3770u); f_005f84d0();
    /* 005f3770: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 005f3776: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005f3778: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f3779: push 0x6d6794 */ { u32 v = 0x6d6794u; r_esp -= 4; W32(r_esp, v); }
    /* 005f377e: lea eax, [ebp - 0x78] */ r_eax = (u32)(r_ebp+0xffffff88u);
    /* 005f3781: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f3782: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x5f3788u); call_ind(t); }
    /* 005f3788: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f378b: jmp 0x5f37aa */ goto L_005f37aa;
L_005f378d:; BB(0x005f378d);
    /* 005f378d: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 005f3790: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f3791: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 005f3797: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f3798: push 0x6d6794 */ { u32 v = 0x6d6794u; r_esp -= 4; W32(r_esp, v); }
    /* 005f379d: lea eax, [ebp - 0x78] */ r_eax = (u32)(r_ebp+0xffffff88u);
    /* 005f37a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f37a1: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x5f37a7u); call_ind(t); }
    /* 005f37a7: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005f37aa:; BB(0x005f37aa);
    /* 005f37aa: lea ecx, [ebp - 0x78] */ r_ecx = (u32)(r_ebp+0xffffff88u);
    /* 005f37ad: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f37ae: mov edx, dword ptr [0x795084] */ r_edx = R32((u32)(0x795084u));
    /* 005f37b4: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005f37b6: mov ecx, dword ptr [0x795084] */ r_ecx = R32((u32)(0x795084u));
    /* 005f37bc: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 005f37c2: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5f37c4u); call_ind(t); }
L_005f37c4:; BB(0x005f37c4);
    /* 005f37c4: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 005f37c9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005f37cb: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 005f37d1: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005f37d4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f37d6u); call_ind(t); }
L_005f37d6:; BB(0x005f37d6);
    /* 005f37d6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f37d9: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005f37db: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x5f37e0u); f_00686d72();
    /* 005f37e0: mov esp, ebp */ r_esp = r_ebp;
    /* 005f37e2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f37e3: ret  */ FN_RET(0x005f3130); r_esp += 4; return;
}

void f_005f39c0(void) /* Shell::vfunc11 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f39c0);
    /* 005f39c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f39c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f39c3: sub esp, 0x94 */ {  u32 a = r_esp; u32 b = 0x94u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f39c9: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005f39ce: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005f39d0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005f39d3: mov dword ptr [ebp - 0x90], ecx */ W32((u32)(r_ebp+0xffffff70u), r_ecx);
    /* 005f39d9: mov eax, dword ptr [ebp - 0x90] */ r_eax = R32((u32)(r_ebp+0xffffff70u));
    /* 005f39df: mov cl, byte ptr [eax + 0x25] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x25u))) & 0xffu);
    /* 005f39e2: mov byte ptr [ebp - 0x89], cl */ W8((u32)(r_ebp+0xffffff77u), (u8)r_ecx);
    /* 005f39e8: movzx edx, byte ptr [ebp - 0x89] */ r_edx = (u32)R8((u32)(r_ebp+0xffffff77u));
    /* 005f39ef: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f39f1: je 0x5f3a04 */ if (fZ) goto L_005f3a04;
L_005f39f3:; BB(0x005f39f3);
    /* 005f39f3: mov eax, dword ptr [ebp - 0x90] */ r_eax = R32((u32)(r_ebp+0xffffff70u));
    /* 005f39f9: mov byte ptr [eax + 0x26], 1 */ W8((u32)(r_eax+0x26u), 0x1u);
    /* 005f39fd: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005f39ff: jmp 0x5f3b12 */ goto L_005f3b12;
L_005f3a04:; BB(0x005f3a04);
    /* 005f3a04: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 005f3a0a: movzx edx, byte ptr [ecx + 0x24] */ r_edx = (u32)R8((u32)(r_ecx+0x24u));
    /* 005f3a0e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f3a10: jne 0x5f3a1a */ if (!fZ) goto L_005f3a1a;
L_005f3a12:; BB(0x005f3a12);
    /* 005f3a12: movzx eax, byte ptr [ebp + 8] */ r_eax = (u32)R8((u32)(r_ebp+0x8u));
    /* 005f3a16: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f3a18: je 0x5f3a29 */ if (fZ) goto L_005f3a29;
L_005f3a1a:; BB(0x005f3a1a);
    /* 005f3a1a: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 005f3a20: mov byte ptr [ecx + 0x24], 1 */ W8((u32)(r_ecx+0x24u), 0x1u);
    /* 005f3a24: jmp 0x5f3ac4 */ goto L_005f3ac4;
L_005f3a29:; BB(0x005f3a29);
    /* 005f3a29: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f3a2b: mov edx, dword ptr [ebp - 0x90] */ r_edx = R32((u32)(r_ebp+0xffffff70u));
    /* 005f3a31: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005f3a33: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 005f3a39: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 005f3a3c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5f3a3eu); call_ind(t); }
    /* 005f3a3e: push 0x795634 */ { u32 v = 0x795634u; r_esp -= 4; W32(r_esp, v); }
    /* 005f3a43: mov eax, dword ptr [ebp - 0x90] */ r_eax = R32((u32)(r_ebp+0xffffff70u));
    /* 005f3a49: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005f3a4b: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 005f3a51: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 005f3a54: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f3a56u); call_ind(t); }
    /* 005f3a56: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f3a57: lea ecx, [ebp - 0x88] */ r_ecx = (u32)(r_ebp+0xffffff78u);
    /* 005f3a5d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f3a5e: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x5f3a64u); call_ind(t); }
    /* 005f3a64: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f3a67: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005f3a69: mov edx, dword ptr [ebp - 0x90] */ r_edx = R32((u32)(r_ebp+0xffffff70u));
    /* 005f3a6f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005f3a71: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 005f3a77: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 005f3a7a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5f3a7cu); call_ind(t); }
    /* 005f3a7c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f3a7d: lea eax, [ebp - 0x88] */ r_eax = (u32)(r_ebp+0xffffff78u);
    /* 005f3a83: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f3a84: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x5f3a89u); f_0062ff10();
    /* 005f3a89: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f3a8c: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f3a8f: jne 0x5f3ac4 */ if (!fZ) goto L_005f3ac4;
L_005f3a91:; BB(0x005f3a91);
    /* 005f3a91: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 005f3a97: cmp dword ptr [ecx + 0x34], 0x44c */ {  u32 a = R32((u32)(r_ecx+0x34u)); u32 b = 0x44cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f3a9e: je 0x5f3aba */ if (fZ) goto L_005f3aba;
L_005f3aa0:; BB(0x005f3aa0);
    /* 005f3aa0: push 0x44c */ { u32 v = 0x44cu; r_esp -= 4; W32(r_esp, v); }
    /* 005f3aa5: mov edx, dword ptr [ebp - 0x90] */ r_edx = R32((u32)(r_ebp+0xffffff70u));
    /* 005f3aab: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005f3aad: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 005f3ab3: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 005f3ab6: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5f3ab8u); call_ind(t); }
    /* 005f3ab8: jmp 0x5f3ac4 */ goto L_005f3ac4;
L_005f3aba:; BB(0x005f3aba);
    /* 005f3aba: mov eax, dword ptr [ebp - 0x90] */ r_eax = R32((u32)(r_ebp+0xffffff70u));
    /* 005f3ac0: mov byte ptr [eax + 0x24], 1 */ W8((u32)(r_eax+0x24u), 0x1u);
L_005f3ac4:; BB(0x005f3ac4);
    /* 005f3ac4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f3ac6: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 005f3acc: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005f3ace: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 005f3ad4: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 005f3ad7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f3ad9u); call_ind(t); }
    /* 005f3ad9: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 005f3adf: movzx edx, byte ptr [ecx + 0x24] */ r_edx = (u32)R8((u32)(r_ecx+0x24u));
    /* 005f3ae3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f3ae5: jne 0x5f3b02 */ if (!fZ) goto L_005f3b02;
L_005f3ae7:; BB(0x005f3ae7);
    /* 005f3ae7: mov eax, dword ptr [ebp - 0x90] */ r_eax = R32((u32)(r_ebp+0xffffff70u));
    /* 005f3aed: cmp dword ptr [eax + 0x2c], 0x44c */ {  u32 a = R32((u32)(r_eax+0x2cu)); u32 b = 0x44cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f3af4: je 0x5f3b02 */ if (fZ) goto L_005f3b02;
L_005f3af6:; BB(0x005f3af6);
    /* 005f3af6: mov dword ptr [ebp - 0x94], 0 */ W32((u32)(r_ebp+0xffffff6cu), 0x0u);
    /* 005f3b00: jmp 0x5f3b0c */ goto L_005f3b0c;
L_005f3b02:; BB(0x005f3b02);
    /* 005f3b02: mov dword ptr [ebp - 0x94], 1 */ W32((u32)(r_ebp+0xffffff6cu), 0x1u);
L_005f3b0c:; BB(0x005f3b0c);
    /* 005f3b0c: mov al, byte ptr [ebp - 0x94] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff6cu))) & 0xffu);
L_005f3b12:; BB(0x005f3b12);
    /* 005f3b12: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f3b15: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005f3b17: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x5f3b1cu); f_00686d72();
    /* 005f3b1c: mov esp, ebp */ r_esp = r_ebp;
    /* 005f3b1e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f3b1f: ret 4 */ FN_RET(0x005f39c0); r_esp += 8; return;
}

void f_005f4810(void) /* Shell::vfunc34 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f4810);
    /* 005f4810: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f4811: mov ebp, esp */ r_ebp = r_esp;
    /* 005f4813: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f4814: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f4817: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 005f481c: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005f481f: call 0x60a4d0 */ r_esp -= 4; W32(r_esp, 0x5f4824u); f_0060a4d0();
    /* 005f4824: mov esp, ebp */ r_esp = r_ebp;
    /* 005f4826: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f4827: ret  */ FN_RET(0x005f4810); r_esp += 4; return;
}

void f_006316e0(void) /* Shell::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006316e0);
    /* 006316e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006316e1: mov ebp, esp */ r_ebp = r_esp;
    /* 006316e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006316e5: push 0x6ab8de */ { u32 v = 0x6ab8deu; r_esp -= 4; W32(r_esp, v); }
    /* 006316ea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006316f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006316f1: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006316f4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 006316f9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006316fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006316fc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 006316ff: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00631705: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00631708: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0063170b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063170c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0063170f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00631710: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00631713: call 0x5f2da0 */ r_esp -= 4; W32(r_esp, 0x631718u); f_005f2da0();
    /* 00631718: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0063171f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00631722: mov dword ptr [edx], 0x6d9eb4 */ W32((u32)(r_edx), 0x6d9eb4u);
    /* 00631728: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063172b: add ecx, 0x50 */ {  u32 a = r_ecx; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0063172e: call 0x667b90 */ r_esp -= 4; W32(r_esp, 0x631733u); f_00667b90();
    /* 00631733: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00631737: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063173a: add ecx, 0x5c */ {  u32 a = r_ecx; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0063173d: call 0x6665b0 */ r_esp -= 4; W32(r_esp, 0x631742u); f_006665b0();
    /* 00631742: mov byte ptr [ebp - 4], 2 */ W8((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00631746: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00631749: mov dword ptr [eax + 0x58], 0 */ W32((u32)(r_eax+0x58u), 0x0u);
    /* 00631750: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00631752: cmp ecx, 0x100 */ {  u32 a = r_ecx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00631758: jl 0x631771 */ if ((fS!=fO)) goto L_00631771;
L_0063175a:; BB(0x0063175a);
    /* 0063175a: push 0xe4 */ { u32 v = 0xe4u; r_esp -= 4; W32(r_esp, v); }
    /* 0063175f: push 0x6d9e90 */ { u32 v = 0x6d9e90u; r_esp -= 4; W32(r_esp, v); }
    /* 00631764: push 0x6d9e68 */ { u32 v = 0x6d9e68u; r_esp -= 4; W32(r_esp, v); }
    /* 00631769: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x63176eu); f_005e9f20();
    /* 0063176e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00631771:; BB(0x00631771);
    /* 00631771: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00631773: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00631778: jl 0x631791 */ if ((fS!=fO)) goto L_00631791;
L_0063177a:; BB(0x0063177a);
    /* 0063177a: push 0xe5 */ { u32 v = 0xe5u; r_esp -= 4; W32(r_esp, v); }
    /* 0063177f: push 0x6d9e90 */ { u32 v = 0x6d9e90u; r_esp -= 4; W32(r_esp, v); }
    /* 00631784: push 0x6d9e38 */ { u32 v = 0x6d9e38u; r_esp -= 4; W32(r_esp, v); }
    /* 00631789: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x63178eu); f_005e9f20();
    /* 0063178e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00631791:; BB(0x00631791);
    /* 00631791: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00631794: mov byte ptr [edx + 0x25], 0 */ W8((u32)(r_edx+0x25u), 0x0u);
    /* 00631798: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0063179b: mov byte ptr [eax + 0x26], 1 */ W8((u32)(r_eax+0x26u), 0x1u);
    /* 0063179f: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 006317a6: jmp 0x6317b1 */ goto L_006317b1;
L_006317a8:; BB(0x006317a8);
    /* 006317a8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006317ab: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006317ae: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_006317b1:; BB(0x006317b1);
    /* 006317b1: cmp dword ptr [ebp - 0x10], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006317b5: jge 0x6317c7 */ if ((fS==fO)) goto L_006317c7;
L_006317b7:; BB(0x006317b7);
    /* 006317b7: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006317ba: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006317bd: mov dword ptr [eax + edx*4 + 0x64], 0xffffffff */ W32((u32)(r_eax+r_edx*4+0x64u), 0xffffffffu);
    /* 006317c5: jmp 0x6317a8 */ goto L_006317a8;
L_006317c7:; BB(0x006317c7);
    /* 006317c7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006317ca: mov dword ptr [ecx + 0x8c], 0 */ W32((u32)(r_ecx+0x8cu), 0x0u);
    /* 006317d4: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006317d7: mov dword ptr [edx + 0x90], 0 */ W32((u32)(r_edx+0x90u), 0x0u);
    /* 006317e1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006317e8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006317eb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006317ee: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006317f5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006317f6: mov esp, ebp */ r_esp = r_ebp;
    /* 006317f8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006317f9: ret 8 */ FN_RET(0x006316e0); r_esp += 12; return;
}

void f_00631800(void) /* Shell::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00631800);
    /* 00631800: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00631801: mov ebp, esp */ r_ebp = r_esp;
    /* 00631803: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00631805: push 0x6ab917 */ { u32 v = 0x6ab917u; r_esp -= 4; W32(r_esp, v); }
    /* 0063180a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00631810: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00631811: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00631814: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00631819: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063181b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063181c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0063181f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00631825: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00631828: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0063182b: mov dword ptr [eax], 0x6d9eb4 */ W32((u32)(r_eax), 0x6d9eb4u);
    /* 00631831: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00631838: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063183a: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0063183d: call 0x635b10 */ r_esp -= 4; W32(r_esp, 0x631842u); f_00635b10();
    /* 00631842: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00631845: cmp dword ptr [ecx + 0x58], 0 */ {  u32 a = R32((u32)(r_ecx+0x58u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00631849: je 0x631860 */ if (fZ) goto L_00631860;
L_0063184b:; BB(0x0063184b);
    /* 0063184b: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0063184e: mov eax, dword ptr [edx + 0x58] */ r_eax = R32((u32)(r_edx+0x58u));
    /* 00631851: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00631854: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00631857: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00631858: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x63185du); f_00686cae();
    /* 0063185d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00631860:; BB(0x00631860);
    /* 00631860: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00631867: jmp 0x631872 */ goto L_00631872;
L_00631869:; BB(0x00631869);
    /* 00631869: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063186c: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0063186f: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_00631872:; BB(0x00631872);
    /* 00631872: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00631876: jge 0x6318a7 */ if ((fS==fO)) goto L_006318a7;
L_00631878:; BB(0x00631878);
    /* 00631878: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 0063187f: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00631882: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00631885: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00631889: je 0x63189e */ if (fZ) goto L_0063189e;
L_0063188b:; BB(0x0063188b);
    /* 0063188b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063188d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00631890: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00631892: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00631895: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00631897: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x631899u); call_ind(t); }
    /* 00631899: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0063189c: jmp 0x6318a5 */ goto L_006318a5;
L_0063189e:; BB(0x0063189e);
    /* 0063189e: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_006318a5:; BB(0x006318a5);
    /* 006318a5: jmp 0x631869 */ goto L_00631869;
L_006318a7:; BB(0x006318a7);
    /* 006318a7: call 0x6048c0 */ r_esp -= 4; W32(r_esp, 0x6318acu); f_006048c0();
    /* 006318ac: call 0x6049c0 */ r_esp -= 4; W32(r_esp, 0x6318b1u); f_006049c0();
    /* 006318b1: call 0x604af0 */ r_esp -= 4; W32(r_esp, 0x6318b6u); f_00604af0();
    /* 006318b6: mov dword ptr [0x162ee84], 0 */ W32((u32)(0x162ee84u), 0x0u);
    /* 006318c0: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006318c3: cmp dword ptr [ecx + 0x8c], 0 */ {  u32 a = R32((u32)(r_ecx+0x8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006318ca: je 0x6318f1 */ if (fZ) goto L_006318f1;
L_006318cc:; BB(0x006318cc);
    /* 006318cc: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006318cf: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 006318d5: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006318d8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006318db: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006318dc: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x6318e1u); f_00686cae();
    /* 006318e1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006318e4: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006318e7: mov dword ptr [edx + 0x8c], 0 */ W32((u32)(r_edx+0x8cu), 0x0u);
L_006318f1:; BB(0x006318f1);
    /* 006318f1: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 006318f4: cmp dword ptr [eax + 0x90], 0 */ {  u32 a = R32((u32)(r_eax+0x90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006318fb: je 0x631922 */ if (fZ) goto L_00631922;
L_006318fd:; BB(0x006318fd);
    /* 006318fd: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00631900: mov edx, dword ptr [ecx + 0x90] */ r_edx = R32((u32)(r_ecx+0x90u));
    /* 00631906: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 00631909: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0063190c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063190d: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x631912u); f_00686cae();
    /* 00631912: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00631915: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00631918: mov dword ptr [ecx + 0x90], 0 */ W32((u32)(r_ecx+0x90u), 0x0u);
L_00631922:; BB(0x00631922);
    /* 00631922: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00631926: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00631929: add ecx, 0x5c */ {  u32 a = r_ecx; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0063192c: call 0x6665e0 */ r_esp -= 4; W32(r_esp, 0x631931u); f_006665e0();
    /* 00631931: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00631935: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00631938: add ecx, 0x50 */ {  u32 a = r_ecx; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0063193b: call 0x667bc0 */ r_esp -= 4; W32(r_esp, 0x631940u); f_00667bc0();
    /* 00631940: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00631947: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0063194a: call 0x5f2eb0 */ r_esp -= 4; W32(r_esp, 0x63194fu); f_005f2eb0();
    /* 0063194f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00631952: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00631959: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063195a: mov esp, ebp */ r_esp = r_ebp;
    /* 0063195c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063195d: ret  */ FN_RET(0x00631800); r_esp += 4; return;
}

void f_00631960(void) /* Shell::vfunc37 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00631960);
    /* 00631960: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00631961: mov ebp, esp */ r_ebp = r_esp;
    /* 00631963: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00631966: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00631969: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063196b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0063196e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00631970: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00631973: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 00631979: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63197bu); call_ind(t); }
    /* 0063197b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0063197e: cmp dword ptr [ecx + 0x58], 0 */ {  u32 a = R32((u32)(r_ecx+0x58u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00631982: je 0x6319f7 */ if (fZ) goto L_006319f7;
L_00631984:; BB(0x00631984);
    /* 00631984: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0063198b: jmp 0x631996 */ goto L_00631996;
L_0063198d:; BB(0x0063198d);
    /* 0063198d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00631990: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00631993: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00631996:; BB(0x00631996);
    /* 00631996: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0063199b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0063199d: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006319a3: mov eax, dword ptr [edx + 0x10c] */ r_eax = R32((u32)(r_edx+0x10cu));
    /* 006319a9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6319abu); call_ind(t); }
    /* 006319ab: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006319ae: jge 0x6319f7 */ if ((fS==fO)) goto L_006319f7;
L_006319b0:; BB(0x006319b0);
    /* 006319b0: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006319b3: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 006319b6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006319b9: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 006319bc: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 006319bf: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006319c2: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 006319c5: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006319c9: je 0x6319de */ if (fZ) goto L_006319de;
L_006319cb:; BB(0x006319cb);
    /* 006319cb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006319cd: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 006319d0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006319d2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006319d5: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006319d7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6319d9u); call_ind(t); }
    /* 006319d9: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 006319dc: jmp 0x6319e5 */ goto L_006319e5;
L_006319de:; BB(0x006319de);
    /* 006319de: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_006319e5:; BB(0x006319e5);
    /* 006319e5: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006319e8: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 006319eb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006319ee: mov dword ptr [edx + eax*4], 0 */ W32((u32)(r_edx+r_eax*4), 0x0u);
    /* 006319f5: jmp 0x63198d */ goto L_0063198d;
L_006319f7:; BB(0x006319f7);
    /* 006319f7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006319fe: jmp 0x631a09 */ goto L_00631a09;
L_00631a00:; BB(0x00631a00);
    /* 00631a00: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00631a03: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00631a06: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00631a09:; BB(0x00631a09);
    /* 00631a09: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00631a0f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00631a11: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00631a17: mov edx, dword ptr [eax + 0xe4] */ r_edx = R32((u32)(r_eax+0xe4u));
    /* 00631a1d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x631a1fu); call_ind(t); }
    /* 00631a1f: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00631a22: jge 0x631a69 */ if ((fS==fO)) goto L_00631a69;
L_00631a24:; BB(0x00631a24);
    /* 00631a24: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00631a27: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00631a28: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00631a2e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00631a30: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00631a36: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 00631a3c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x631a3eu); call_ind(t); }
    /* 00631a3e: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00631a41: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00631a44: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00631a47: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00631a4b: je 0x631a60 */ if (fZ) goto L_00631a60;
L_00631a4d:; BB(0x00631a4d);
    /* 00631a4d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00631a4f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00631a52: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00631a54: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00631a57: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00631a59: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x631a5bu); call_ind(t); }
    /* 00631a5b: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00631a5e: jmp 0x631a67 */ goto L_00631a67;
L_00631a60:; BB(0x00631a60);
    /* 00631a60: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_00631a67:; BB(0x00631a67);
    /* 00631a67: jmp 0x631a00 */ goto L_00631a00;
L_00631a69:; BB(0x00631a69);
    /* 00631a69: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00631a6b: mov esp, ebp */ r_esp = r_ebp;
    /* 00631a6d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00631a6e: ret  */ FN_RET(0x00631960); r_esp += 4; return;
}

void f_00631c30(void) /* Shell::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00631c30);
    /* 00631c30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00631c31: mov ebp, esp */ r_ebp = r_esp;
    /* 00631c33: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00631c35: push 0x6ab93d */ { u32 v = 0x6ab93du; r_esp -= 4; W32(r_esp, v); }
    /* 00631c3a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00631c40: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00631c41: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00631c44: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00631c49: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00631c4b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00631c4c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00631c4f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00631c55: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00631c58: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00631c5b: call 0x5f2f70 */ r_esp -= 4; W32(r_esp, 0x631c60u); f_005f2f70();
    /* 00631c60: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00631c63: cmp dword ptr [eax + 0x58], 0 */ {  u32 a = R32((u32)(r_eax+0x58u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00631c67: jne 0x631c9e */ if (!fZ) goto L_00631c9e;
L_00631c69:; BB(0x00631c69);
    /* 00631c69: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00631c6c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00631c6e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00631c71: mov eax, dword ptr [edx + 0x10c] */ r_eax = R32((u32)(r_edx+0x10cu));
    /* 00631c77: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x631c79u); call_ind(t); }
    /* 00631c79: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00631c7b: mov edx, 4 */ r_edx = 0x4u;
    /* 00631c80: mul edx */ { u64 t = (u64)r_eax * r_edx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 00631c82: seto cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fO) ? 1 : 0) & 0xffu);
    /* 00631c85: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00631c87: or ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00631c89: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00631c8a: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x631c8fu); f_00686d82();
    /* 00631c8f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00631c92: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00631c95: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00631c98: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00631c9b: mov dword ptr [eax + 0x58], ecx */ W32((u32)(r_eax+0x58u), r_ecx);
L_00631c9e:; BB(0x00631c9e);
    /* 00631c9e: mov byte ptr [0x795fbb], 0 */ W8((u32)(0x795fbbu), 0x0u);
    /* 00631ca5: mov byte ptr [0x795fbc], 0 */ W8((u32)(0x795fbcu), 0x0u);
    /* 00631cac: mov dl, byte ptr [0x795f94] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(0x795f94u))) & 0xffu);
    /* 00631cb2: mov byte ptr [0x795fbd], dl */ W8((u32)(0x795fbdu), (u8)r_edx);
    /* 00631cb8: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 00631cba: push 0x7953c8 */ { u32 v = 0x7953c8u; r_esp -= 4; W32(r_esp, v); }
    /* 00631cbf: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00631cc4: push 0x6da2e8 */ { u32 v = 0x6da2e8u; r_esp -= 4; W32(r_esp, v); }
    /* 00631cc9: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 00631cce: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00631cd1: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 00631cd7: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 00631cda: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00631cdc: mov ecx, eax */ r_ecx = r_eax;
    /* 00631cde: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 00631ce1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x631ce3u); call_ind(t); }
    /* 00631ce3: push 0x7953c8 */ { u32 v = 0x7953c8u; r_esp -= 4; W32(r_esp, v); }
    /* 00631ce8: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x631cedu); f_00686ecc();
    /* 00631ced: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00631cf0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00631cf2: jne 0x631d12 */ if (!fZ) goto L_00631d12;
L_00631cf4:; BB(0x00631cf4);
    /* 00631cf4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00631cf7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00631cf9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00631cfc: mov eax, dword ptr [edx + 0x15c] */ r_eax = R32((u32)(r_edx+0x15cu));
    /* 00631d02: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x631d04u); call_ind(t); }
    /* 00631d04: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00631d05: push 0x7953c8 */ { u32 v = 0x7953c8u; r_esp -= 4; W32(r_esp, v); }
    /* 00631d0a: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x631d0fu); f_00686d8e();
    /* 00631d0f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00631d12:; BB(0x00631d12);
    /* 00631d12: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00631d14: push 0x6da2dc */ { u32 v = 0x6da2dcu; r_esp -= 4; W32(r_esp, v); }
    /* 00631d19: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 00631d1f: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 00631d22: call 0x607960 */ r_esp -= 4; W32(r_esp, 0x631d27u); f_00607960();
    /* 00631d27: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00631d29: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00631d2c: mov byte ptr [0x7960c5], dl */ W8((u32)(0x7960c5u), (u8)r_edx);
    /* 00631d32: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00631d34: push 0x6da2c8 */ { u32 v = 0x6da2c8u; r_esp -= 4; W32(r_esp, v); }
    /* 00631d39: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 00631d3e: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00631d41: call 0x607960 */ r_esp -= 4; W32(r_esp, 0x631d46u); f_00607960();
    /* 00631d46: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00631d48: setne cl */ r_ecx = (r_ecx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 00631d4b: mov byte ptr [0x7960c4], cl */ W8((u32)(0x7960c4u), (u8)r_ecx);
    /* 00631d51: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00631d53: push 0x6bcecc */ { u32 v = 0x6bceccu; r_esp -= 4; W32(r_esp, v); }
    /* 00631d58: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 00631d5e: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 00631d61: call 0x607960 */ r_esp -= 4; W32(r_esp, 0x631d66u); f_00607960();
    /* 00631d66: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00631d68: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 00631d6b: mov byte ptr [0x7960c6], al */ W8((u32)(0x7960c6u), (u8)r_eax);
    /* 00631d70: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00631d72: push 0x6da2b8 */ { u32 v = 0x6da2b8u; r_esp -= 4; W32(r_esp, v); }
    /* 00631d77: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 00631d7d: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 00631d80: call 0x607960 */ r_esp -= 4; W32(r_esp, 0x631d85u); f_00607960();
    /* 00631d85: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00631d87: setne dl */ r_edx = (r_edx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 00631d8a: mov byte ptr [0x7960c7], dl */ W8((u32)(0x7960c7u), (u8)r_edx);
    /* 00631d90: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00631d92: push 0x6da2a8 */ { u32 v = 0x6da2a8u; r_esp -= 4; W32(r_esp, v); }
    /* 00631d97: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 00631d9c: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00631d9f: call 0x607960 */ r_esp -= 4; W32(r_esp, 0x631da4u); f_00607960();
    /* 00631da4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00631da6: setne cl */ r_ecx = (r_ecx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 00631da9: mov byte ptr [0x7960c8], cl */ W8((u32)(0x7960c8u), (u8)r_ecx);
    /* 00631daf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00631db1: push 0x6da29c */ { u32 v = 0x6da29cu; r_esp -= 4; W32(r_esp, v); }
    /* 00631db6: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 00631dbc: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 00631dbf: call 0x607960 */ r_esp -= 4; W32(r_esp, 0x631dc4u); f_00607960();
    /* 00631dc4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00631dc6: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 00631dc9: mov byte ptr [0x7960c9], al */ W8((u32)(0x7960c9u), (u8)r_eax);
    /* 00631dce: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00631dd0: push 0x6da290 */ { u32 v = 0x6da290u; r_esp -= 4; W32(r_esp, v); }
    /* 00631dd5: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 00631ddb: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 00631dde: call 0x607960 */ r_esp -= 4; W32(r_esp, 0x631de3u); f_00607960();
    /* 00631de3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00631de5: setne dl */ r_edx = (r_edx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 00631de8: mov byte ptr [0x7960ca], dl */ W8((u32)(0x7960cau), (u8)r_edx);
    /* 00631dee: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00631df5: jmp 0x631e00 */ goto L_00631e00;
L_00631df7:; BB(0x00631df7);
    /* 00631df7: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00631dfa: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00631dfd: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_00631e00:; BB(0x00631e00);
    /* 00631e00: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00631e06: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00631e08: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00631e0e: mov eax, dword ptr [edx + 0x10c] */ r_eax = R32((u32)(r_edx+0x10cu));
    /* 00631e14: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x631e16u); call_ind(t); }
    /* 00631e16: cmp dword ptr [ebp - 0x10], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00631e19: jge 0x631e50 */ if ((fS==fO)) goto L_00631e50;
L_00631e1b:; BB(0x00631e1b);
    /* 00631e1b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00631e1e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00631e20: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00631e23: mov eax, dword ptr [edx + 0x31c] */ r_eax = R32((u32)(r_edx+0x31cu));
    /* 00631e29: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x631e2bu); call_ind(t); }
    /* 00631e2b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00631e2e: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 00631e31: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00631e34: mov dword ptr [edx + ecx*4], eax */ W32((u32)(r_edx+r_ecx*4), r_eax);
    /* 00631e37: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00631e39: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00631e3c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00631e3d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00631e40: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 00631e43: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00631e46: mov ecx, dword ptr [ecx + edx*4] */ r_ecx = R32((u32)(r_ecx+r_edx*4));
    /* 00631e49: call 0x63a3e0 */ r_esp -= 4; W32(r_esp, 0x631e4eu); f_0063a3e0();
    /* 00631e4e: jmp 0x631df7 */ goto L_00631df7;
L_00631e50:; BB(0x00631e50);
    /* 00631e50: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00631e53: add ecx, 0x5c */ {  u32 a = r_ecx; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00631e56: call 0x666650 */ r_esp -= 4; W32(r_esp, 0x631e5bu); f_00666650();
    /* 00631e5b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00631e5e: call 0x636fe0 */ r_esp -= 4; W32(r_esp, 0x631e63u); f_00636fe0();
    /* 00631e63: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00631e66: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00631e68: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00631e6b: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 00631e71: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x631e73u); call_ind(t); }
    /* 00631e73: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00631e76: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00631e78: je 0x631e8a */ if (fZ) goto L_00631e8a;
L_00631e7a:; BB(0x00631e7a);
    /* 00631e7a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00631e7d: call 0x634220 */ r_esp -= 4; W32(r_esp, 0x631e82u); f_00634220();
    /* 00631e82: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00631e85: call 0x634ac0 */ r_esp -= 4; W32(r_esp, 0x631e8au); f_00634ac0();
L_00631e8a:; BB(0x00631e8a);
    /* 00631e8a: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00631e8c: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x631e91u); f_00686d82();
    /* 00631e91: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00631e94: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00631e97: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00631e9e: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00631ea2: je 0x631eb1 */ if (fZ) goto L_00631eb1;
L_00631ea4:; BB(0x00631ea4);
    /* 00631ea4: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00631ea7: call 0x607da0 */ r_esp -= 4; W32(r_esp, 0x631eacu); f_00607da0();
    /* 00631eac: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00631eaf: jmp 0x631eb8 */ goto L_00631eb8;
L_00631eb1:; BB(0x00631eb1);
    /* 00631eb1: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00631eb8:; BB(0x00631eb8);
    /* 00631eb8: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00631ebb: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00631ebe: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00631ec5: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 00631eca: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00631ecd: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 00631ed0: movzx edx, byte ptr [0x7960c5] */ r_edx = (u32)R8((u32)(0x7960c5u));
    /* 00631ed7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00631ed9: je 0x631f0b */ if (fZ) goto L_00631f0b;
L_00631edb:; BB(0x00631edb);
    /* 00631edb: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00631ee0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00631ee2: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00631ee8: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00631eee: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x631ef0u); call_ind(t); }
    /* 00631ef0: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00631ef3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00631ef5: je 0x631f0b */ if (fZ) goto L_00631f0b;
L_00631ef7:; BB(0x00631ef7);
    /* 00631ef7: push 0x3e9 */ { u32 v = 0x3e9u; r_esp -= 4; W32(r_esp, v); }
    /* 00631efc: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00631eff: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00631f01: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00631f04: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 00631f07: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x631f09u); call_ind(t); }
    /* 00631f09: jmp 0x631f2e */ goto L_00631f2e;
L_00631f0b:; BB(0x00631f0b);
    /* 00631f0b: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00631f10: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00631f12: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00631f18: mov eax, dword ptr [edx + 0x258] */ r_eax = R32((u32)(r_edx+0x258u));
    /* 00631f1e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x631f20u); call_ind(t); }
    /* 00631f20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00631f21: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00631f24: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00631f26: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00631f29: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 00631f2c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x631f2eu); call_ind(t); }
L_00631f2e:; BB(0x00631f2e);
    /* 00631f2e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00631f31: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00631f38: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00631f39: mov esp, ebp */ r_esp = r_ebp;
    /* 00631f3b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00631f3c: ret  */ FN_RET(0x00631c30); r_esp += 4; return;
}

void f_00631fb0(void) /* Shell::vfunc5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00631fb0);
    /* 00631fb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00631fb1: mov ebp, esp */ r_ebp = r_esp;
    /* 00631fb3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00631fb4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00631fb7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00631fba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00631fbb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00631fbe: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00631fc0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00631fc3: mov eax, dword ptr [edx + 0xa8] */ r_eax = R32((u32)(r_edx+0xa8u));
    /* 00631fc9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x631fcbu); call_ind(t); }
    /* 00631fcb: mov esp, ebp */ r_esp = r_ebp;
    /* 00631fcd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00631fce: ret 4 */ FN_RET(0x00631fb0); r_esp += 8; return;
}

void f_00631fe0(void) /* shell::func_00631fe0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00631fe0);
    /* 00631fe0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00631fe1: mov ebp, esp */ r_ebp = r_esp;
    /* 00631fe3: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00631fe6: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00631fe9: push 0x357780 */ { u32 v = 0x357780u; r_esp -= 4; W32(r_esp, v); }
    /* 00631fee: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 00631ff3: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 00631ff6: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 00631ffc: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00631fff: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00632001: mov ecx, eax */ r_ecx = r_eax;
    /* 00632003: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 00632006: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x632008u); call_ind(t); }
    /* 00632008: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0063200b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063200d: jne 0x632026 */ if (!fZ) goto L_00632026;
L_0063200f:; BB(0x0063200f);
    /* 0063200f: push 0x1de */ { u32 v = 0x1deu; r_esp -= 4; W32(r_esp, v); }
    /* 00632014: push 0x6d9e90 */ { u32 v = 0x6d9e90u; r_esp -= 4; W32(r_esp, v); }
    /* 00632019: push 0x6da398 */ { u32 v = 0x6da398u; r_esp -= 4; W32(r_esp, v); }
    /* 0063201e: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x632023u); f_005e9f20();
    /* 00632023: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00632026:; BB(0x00632026);
    /* 00632026: push 0x357781 */ { u32 v = 0x357781u; r_esp -= 4; W32(r_esp, v); }
    /* 0063202b: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 00632030: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 00632033: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 00632039: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0063203c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0063203e: mov ecx, eax */ r_ecx = r_eax;
    /* 00632040: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 00632043: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x632045u); call_ind(t); }
    /* 00632045: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00632048: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063204a: jne 0x632063 */ if (!fZ) goto L_00632063;
L_0063204c:; BB(0x0063204c);
    /* 0063204c: push 0x1df */ { u32 v = 0x1dfu; r_esp -= 4; W32(r_esp, v); }
    /* 00632051: push 0x6d9e90 */ { u32 v = 0x6d9e90u; r_esp -= 4; W32(r_esp, v); }
    /* 00632056: push 0x6da35c */ { u32 v = 0x6da35cu; r_esp -= 4; W32(r_esp, v); }
    /* 0063205b: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x632060u); f_005e9f20();
    /* 00632060: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00632063:; BB(0x00632063);
    /* 00632063: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00632066: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00632068: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063206b: mov eax, dword ptr [edx + 0xa4] */ r_eax = R32((u32)(r_edx+0xa4u));
    /* 00632071: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x632073u); call_ind(t); }
    /* 00632073: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_00632076:; BB(0x00632076);
    /* 00632076: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063207a: je 0x6320cb */ if (fZ) goto L_006320cb;
L_0063207c:; BB(0x0063207c);
    /* 0063207c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063207f: cmp dword ptr [ecx], 0 */ {  u32 a = R32((u32)(r_ecx)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00632082: je 0x6320cb */ if (fZ) goto L_006320cb;
L_00632084:; BB(0x00632084);
    /* 00632084: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00632087: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00632089: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063208a: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 00632090: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 00632093: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 00632098: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 0063209b: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0063209d: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 006320a0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6320a2u); call_ind(t); }
    /* 006320a2: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 006320a5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006320a7: jne 0x6320c0 */ if (!fZ) goto L_006320c0;
L_006320a9:; BB(0x006320a9);
    /* 006320a9: push 0x1e4 */ { u32 v = 0x1e4u; r_esp -= 4; W32(r_esp, v); }
    /* 006320ae: push 0x6d9e90 */ { u32 v = 0x6d9e90u; r_esp -= 4; W32(r_esp, v); }
    /* 006320b3: push 0x6da324 */ { u32 v = 0x6da324u; r_esp -= 4; W32(r_esp, v); }
    /* 006320b8: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x6320bdu); f_005e9f20();
    /* 006320bd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006320c0:; BB(0x006320c0);
    /* 006320c0: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 006320c3: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006320c6: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 006320c9: jmp 0x632076 */ goto L_00632076;
L_006320cb:; BB(0x006320cb);
    /* 006320cb: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006320d2: jmp 0x6320dd */ goto L_006320dd;
L_006320d4:; BB(0x006320d4);
    /* 006320d4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006320d7: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006320da: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_006320dd:; BB(0x006320dd);
    /* 006320dd: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006320e0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006320e2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006320e5: mov edx, dword ptr [eax + 0xe4] */ r_edx = R32((u32)(r_eax+0xe4u));
    /* 006320eb: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6320edu); call_ind(t); }
    /* 006320ed: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006320f0: jge 0x632161 */ if ((fS==fO)) goto L_00632161;
L_006320f2:; BB(0x006320f2);
    /* 006320f2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006320f5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006320f6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006320f9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006320fb: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006320fe: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 00632104: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x632106u); call_ind(t); }
    /* 00632106: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00632109: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063210c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0063210e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00632111: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 00632114: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x632116u); call_ind(t); }
    /* 00632116: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00632119: cmp dword ptr [ebp - 8], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063211d: jne 0x632121 */ if (!fZ) goto L_00632121;
L_0063211f:; BB(0x0063211f);
    /* 0063211f: jmp 0x6320d4 */ goto L_006320d4;
L_00632121:; BB(0x00632121);
    /* 00632121: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00632124: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00632125: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 0063212b: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0063212e: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 00632134: mov ecx, dword ptr [ecx + 0x1c] */ r_ecx = R32((u32)(r_ecx+0x1cu));
    /* 00632137: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00632139: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 0063213c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63213eu); call_ind(t); }
    /* 0063213e: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00632141: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00632143: jne 0x63215c */ if (!fZ) goto L_0063215c;
L_00632145:; BB(0x00632145);
    /* 00632145: push 0x1f0 */ { u32 v = 0x1f0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063214a: push 0x6d9e90 */ { u32 v = 0x6d9e90u; r_esp -= 4; W32(r_esp, v); }
    /* 0063214f: push 0x6da2f0 */ { u32 v = 0x6da2f0u; r_esp -= 4; W32(r_esp, v); }
    /* 00632154: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x632159u); f_005e9f20();
    /* 00632159: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0063215c:; BB(0x0063215c);
    /* 0063215c: jmp 0x6320d4 */ goto L_006320d4;
L_00632161:; BB(0x00632161);
    /* 00632161: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00632163: mov esp, ebp */ r_esp = r_ebp;
    /* 00632165: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00632166: ret  */ FN_RET(0x00631fe0); r_esp += 4; return;
}

void f_00632660(void) /* Shell::vfunc8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00632660);
    /* 00632660: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00632661: mov ebp, esp */ r_ebp = r_esp;
    /* 00632663: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00632666: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00632669: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063266c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0063266e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00632671: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00632677: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x632679u); call_ind(t); }
    /* 00632679: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0063267c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063267e: je 0x632692 */ if (fZ) goto L_00632692;
L_00632680:; BB(0x00632680);
    /* 00632680: push 0x6d4b2c */ { u32 v = 0x6d4b2cu; r_esp -= 4; W32(r_esp, v); }
    /* 00632685: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x63268au); f_00630f40();
    /* 0063268a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063268d: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00632690: jmp 0x632699 */ goto L_00632699;
L_00632692:; BB(0x00632692);
    /* 00632692: mov dword ptr [ebp - 8], 0x6c2d30 */ W32((u32)(r_ebp+0xfffffff8u), 0x6c2d30u);
L_00632699:; BB(0x00632699);
    /* 00632699: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063269c: mov esp, ebp */ r_esp = r_ebp;
    /* 0063269e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063269f: ret  */ FN_RET(0x00632660); r_esp += 4; return;
}

void f_006327b0(void) /* Shell::vfunc61 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006327b0);
    /* 006327b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006327b1: mov ebp, esp */ r_ebp = r_esp;
    /* 006327b3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006327b6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006327b9: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006327bd: jne 0x6327ca */ if (!fZ) goto L_006327ca;
L_006327bf:; BB(0x006327bf);
    /* 006327bf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006327c2: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x6327c7u); f_005f3bf0();
    /* 006327c7: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
L_006327ca:; BB(0x006327ca);
    /* 006327ca: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006327cd: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 006327d0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006327d3: sub ecx, 0x3e8 */ {  u32 a = r_ecx; u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006327d9: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 006327dc: cmp dword ptr [ebp - 8], 0x64 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006327e0: ja 0x632807 */ if ((!fC&&!fZ)) goto L_00632807;
L_006327e2:; BB(0x006327e2);
    /* 006327e2: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006327e5: movzx eax, byte ptr [edx + 0x632828] */ r_eax = (u32)R8((u32)(r_edx+0x632828u));
    /* 006327ec: jmp dword ptr [eax*4 + 0x632810] */ { u32 t = R32((u32)(r_eax*4+0x632810u)); switch (t) { case 0x6327f3u: goto L_006327f3; case 0x6327f7u: goto L_006327f7; case 0x6327ffu: goto L_006327ff; case 0x632803u: goto L_00632803; case 0x6327fbu: goto L_006327fb; case 0x632807u: goto L_00632807; default: UNSUP(0x006327ec, "jump table entry is not a known target"); } }
L_006327f3:; BB(0x006327f3);
    /* 006327f3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006327f5: jmp 0x632809 */ goto L_00632809;
L_006327f7:; BB(0x006327f7);
    /* 006327f7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006327f9: jmp 0x632809 */ goto L_00632809;
L_006327fb:; BB(0x006327fb);
    /* 006327fb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006327fd: jmp 0x632809 */ goto L_00632809;
L_006327ff:; BB(0x006327ff);
    /* 006327ff: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00632801: jmp 0x632809 */ goto L_00632809;
L_00632803:; BB(0x00632803);
    /* 00632803: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00632805: jmp 0x632809 */ goto L_00632809;
L_00632807:; BB(0x00632807);
    /* 00632807: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00632809:; BB(0x00632809);
    /* 00632809: mov esp, ebp */ r_esp = r_ebp;
    /* 0063280b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063280c: ret 4 */ FN_RET(0x006327b0); r_esp += 8; return;
}

void f_00632890(void) /* Shell::vfunc62 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00632890);
    /* 00632890: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00632891: mov ebp, esp */ r_ebp = r_esp;
    /* 00632893: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00632895: push 0x6ab984 */ { u32 v = 0x6ab984u; r_esp -= 4; W32(r_esp, v); }
    /* 0063289a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006328a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006328a1: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006328a4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 006328a9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006328ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006328ac: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 006328af: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 006328b5: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 006328b8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006328bb: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 006328be: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 006328c1: sub ecx, 0x3e8 */ {  u32 a = r_ecx; u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006328c7: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 006328ca: cmp dword ptr [ebp - 0x34], 0x64 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006328ce: ja 0x6329ff */ if ((!fC&&!fZ)) goto L_006329ff;
L_006328d4:; BB(0x006328d4);
    /* 006328d4: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 006328d7: movzx eax, byte ptr [edx + 0x632a2c] */ r_eax = (u32)R8((u32)(r_edx+0x632a2cu));
    /* 006328de: jmp dword ptr [eax*4 + 0x632a14] */ { u32 t = R32((u32)(r_eax*4+0x632a14u)); switch (t) { case 0x6328e5u: goto L_006328e5; case 0x63292bu: goto L_0063292b; case 0x63297cu: goto L_0063297c; case 0x6329bcu: goto L_006329bc; case 0x63296eu: goto L_0063296e; case 0x6329ffu: goto L_006329ff; default: UNSUP(0x006328de, "jump table entry is not a known target"); } }
L_006328e5:; BB(0x006328e5);
    /* 006328e5: push 0x84 */ { u32 v = 0x84u; r_esp -= 4; W32(r_esp, v); }
    /* 006328ea: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x6328efu); f_00686d82();
    /* 006328ef: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006328f2: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006328f5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006328fc: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00632900: je 0x63290f */ if (fZ) goto L_0063290f;
L_00632902:; BB(0x00632902);
    /* 00632902: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00632905: call 0x66b820 */ r_esp -= 4; W32(r_esp, 0x63290au); f_0066b820();
    /* 0063290a: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0063290d: jmp 0x632916 */ goto L_00632916;
L_0063290f:; BB(0x0063290f);
    /* 0063290f: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_00632916:; BB(0x00632916);
    /* 00632916: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00632919: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0063291c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00632923: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00632926: jmp 0x632a01 */ goto L_00632a01;
L_0063292b:; BB(0x0063292b);
    /* 0063292b: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0063292d: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x632932u); f_00686d82();
    /* 00632932: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00632935: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00632938: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0063293f: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00632943: je 0x632952 */ if (fZ) goto L_00632952;
L_00632945:; BB(0x00632945);
    /* 00632945: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00632948: call 0x66b230 */ r_esp -= 4; W32(r_esp, 0x63294du); f_0066b230();
    /* 0063294d: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00632950: jmp 0x632959 */ goto L_00632959;
L_00632952:; BB(0x00632952);
    /* 00632952: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_00632959:; BB(0x00632959);
    /* 00632959: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0063295c: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0063295f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00632966: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00632969: jmp 0x632a01 */ goto L_00632a01;
L_0063296e:; BB(0x0063296e);
    /* 0063296e: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00632971: mov byte ptr [eax + 0x24], 1 */ W8((u32)(r_eax+0x24u), 0x1u);
    /* 00632975: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00632977: jmp 0x632a01 */ goto L_00632a01;
L_0063297c:; BB(0x0063297c);
    /* 0063297c: push 0x5c */ { u32 v = 0x5cu; r_esp -= 4; W32(r_esp, v); }
    /* 0063297e: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x632983u); f_00686d82();
    /* 00632983: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00632986: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00632989: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00632990: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00632994: je 0x6329a3 */ if (fZ) goto L_006329a3;
L_00632996:; BB(0x00632996);
    /* 00632996: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00632999: call 0x66ace0 */ r_esp -= 4; W32(r_esp, 0x63299eu); f_0066ace0();
    /* 0063299e: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 006329a1: jmp 0x6329aa */ goto L_006329aa;
L_006329a3:; BB(0x006329a3);
    /* 006329a3: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_006329aa:; BB(0x006329aa);
    /* 006329aa: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 006329ad: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006329b0: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006329b7: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006329ba: jmp 0x632a01 */ goto L_00632a01;
L_006329bc:; BB(0x006329bc);
    /* 006329bc: push 0x88 */ { u32 v = 0x88u; r_esp -= 4; W32(r_esp, v); }
    /* 006329c1: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x6329c6u); f_00686d82();
    /* 006329c6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006329c9: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 006329cc: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 006329d3: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006329d7: je 0x6329e6 */ if (fZ) goto L_006329e6;
L_006329d9:; BB(0x006329d9);
    /* 006329d9: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 006329dc: call 0x6695e0 */ r_esp -= 4; W32(r_esp, 0x6329e1u); f_006695e0();
    /* 006329e1: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 006329e4: jmp 0x6329ed */ goto L_006329ed;
L_006329e6:; BB(0x006329e6);
    /* 006329e6: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_006329ed:; BB(0x006329ed);
    /* 006329ed: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 006329f0: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 006329f3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006329fa: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 006329fd: jmp 0x632a01 */ goto L_00632a01;
L_006329ff:; BB(0x006329ff);
    /* 006329ff: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00632a01:; BB(0x00632a01);
    /* 00632a01: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00632a04: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00632a0b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00632a0c: mov esp, ebp */ r_esp = r_ebp;
    /* 00632a0e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00632a0f: ret 4 */ FN_RET(0x00632890); r_esp += 8; return;
}

void f_00632d40(void) /* Shell::vfunc123 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00632d40);
    /* 00632d40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00632d41: mov ebp, esp */ r_ebp = r_esp;
    /* 00632d43: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00632d46: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00632d49: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00632d50: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00632d57: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00632d5e: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00632d62: jl 0x632e0c */ if ((fS!=fO)) goto L_00632e0c;
L_00632d68:; BB(0x00632d68);
    /* 00632d68: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00632d6b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00632d6d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00632d70: mov eax, dword ptr [edx + 0x1fc] */ r_eax = R32((u32)(r_edx+0x1fcu));
    /* 00632d76: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x632d78u); call_ind(t); }
    /* 00632d78: cmp dword ptr [ebp + 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00632d7b: jge 0x632e0c */ if ((fS==fO)) goto L_00632e0c;
L_00632d81:; BB(0x00632d81);
    /* 00632d81: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00632d84: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00632d86: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00632d89: mov eax, dword ptr [edx + 0x1f4] */ r_eax = R32((u32)(r_edx+0x1f4u));
    /* 00632d8f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x632d91u); call_ind(t); }
    /* 00632d91: cmp dword ptr [ebp + 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00632d94: jge 0x632dbc */ if ((fS==fO)) goto L_00632dbc;
L_00632d96:; BB(0x00632d96);
    /* 00632d96: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00632d99: imul ecx, ecx, 0xc */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xcu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00632d9c: add ecx, 0x762298 */ {  u32 a = r_ecx; u32 b = 0x762298u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00632da2: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00632da5: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00632da7: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00632da9: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 00632dac: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00632daf: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 00632db2: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 00632db5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00632db8: jmp 0x632e23 */ goto L_00632e23;
L_00632dbc:; BB(0x00632dbc);
    /* 00632dbc: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00632dbf: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00632dc1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00632dc4: mov edx, dword ptr [eax + 0x1f4] */ r_edx = R32((u32)(r_eax+0x1f4u));
    /* 00632dca: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x632dccu); call_ind(t); }
    /* 00632dcc: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00632dcf: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00632dd1: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 00632dd4: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00632dd7: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00632dd9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00632ddc: mov edx, dword ptr [eax + 0x1f8] */ r_edx = R32((u32)(r_eax+0x1f8u));
    /* 00632de2: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x632de4u); call_ind(t); }
    /* 00632de4: cmp dword ptr [ebp + 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00632de7: jge 0x632e0c */ if ((fS==fO)) goto L_00632e0c;
L_00632de9:; BB(0x00632de9);
    /* 00632de9: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00632dec: imul eax, eax, 0xc */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xcu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00632def: add eax, 0x762518 */ {  u32 a = r_eax; u32 b = 0x762518u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00632df4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00632df7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00632df9: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 00632dfb: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00632dfe: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 00632e01: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 00632e04: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 00632e07: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00632e0a: jmp 0x632e23 */ goto L_00632e23;
L_00632e0c:; BB(0x00632e0c);
    /* 00632e0c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00632e0f: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00632e12: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 00632e14: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00632e17: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00632e1a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00632e1d: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00632e20: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
L_00632e23:; BB(0x00632e23);
    /* 00632e23: mov esp, ebp */ r_esp = r_ebp;
    /* 00632e25: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00632e26: ret 8 */ FN_RET(0x00632d40); r_esp += 12; return;
}

void f_00632f20(void) /* Shell::vfunc125 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00632f20);
    /* 00632f20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00632f21: mov ebp, esp */ r_ebp = r_esp;
    /* 00632f23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00632f24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00632f27: mov eax, dword ptr [0x762514] */ r_eax = R32((u32)(0x762514u));
    /* 00632f2c: mov esp, ebp */ r_esp = r_ebp;
    /* 00632f2e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00632f2f: ret  */ FN_RET(0x00632f20); r_esp += 4; return;
}

void f_00633ea0(void) /* shell::func_00633ea0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00633ea0);
    /* 00633ea0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00633ea1: mov ebp, esp */ r_ebp = r_esp;
    /* 00633ea3: sub esp, 0x520 */ {  u32 a = r_esp; u32 b = 0x520u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00633ea9: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00633eae: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00633eb0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00633eb3: mov dword ptr [ebp - 0x518], ecx */ W32((u32)(r_ebp+0xfffffae8u), r_ecx);
    /* 00633eb9: mov ecx, dword ptr [ebp - 0x518] */ r_ecx = R32((u32)(r_ebp+0xfffffae8u));
    /* 00633ebf: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x633ec4u); f_005f3bf0();
    /* 00633ec4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00633ec5: mov eax, dword ptr [ebp - 0x518] */ r_eax = R32((u32)(r_ebp+0xfffffae8u));
    /* 00633ecb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00633ecd: mov ecx, dword ptr [ebp - 0x518] */ r_ecx = R32((u32)(r_ebp+0xfffffae8u));
    /* 00633ed3: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 00633ed9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x633edbu); call_ind(t); }
    /* 00633edb: mov dword ptr [ebp - 0x51c], eax */ W32((u32)(r_ebp+0xfffffae4u), r_eax);
    /* 00633ee1: mov ecx, dword ptr [ebp - 0x51c] */ r_ecx = R32((u32)(r_ebp+0xfffffae4u));
    /* 00633ee7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00633ee9: mov ecx, dword ptr [ebp - 0x51c] */ r_ecx = R32((u32)(r_ebp+0xfffffae4u));
    /* 00633eef: mov eax, dword ptr [edx + 0xc8] */ r_eax = R32((u32)(r_edx+0xc8u));
    /* 00633ef5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x633ef7u); call_ind(t); }
    /* 00633ef7: mov dword ptr [ebp - 0x410], eax */ W32((u32)(r_ebp+0xfffffbf0u), r_eax);
    /* 00633efd: mov ecx, dword ptr [ebp - 0x518] */ r_ecx = R32((u32)(r_ebp+0xfffffae8u));
    /* 00633f03: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x633f08u); f_005f3bf0();
    /* 00633f08: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00633f09: mov ecx, dword ptr [ebp - 0x518] */ r_ecx = R32((u32)(r_ebp+0xfffffae8u));
    /* 00633f0f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00633f11: mov ecx, dword ptr [ebp - 0x518] */ r_ecx = R32((u32)(r_ebp+0xfffffae8u));
    /* 00633f17: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 00633f1d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x633f1fu); call_ind(t); }
    /* 00633f1f: mov dword ptr [ebp - 0x520], eax */ W32((u32)(r_ebp+0xfffffae0u), r_eax);
    /* 00633f25: mov ecx, dword ptr [ebp - 0x520] */ r_ecx = R32((u32)(r_ebp+0xfffffae0u));
    /* 00633f2b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00633f2d: mov ecx, dword ptr [ebp - 0x520] */ r_ecx = R32((u32)(r_ebp+0xfffffae0u));
    /* 00633f33: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 00633f39: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x633f3bu); call_ind(t); }
    /* 00633f3b: mov dword ptr [ebp - 0x514], eax */ W32((u32)(r_ebp+0xfffffaecu), r_eax);
    /* 00633f41: mov ecx, dword ptr [ebp - 0x514] */ r_ecx = R32((u32)(r_ebp+0xfffffaecu));
    /* 00633f47: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00633f48: push 0x6da4e4 */ { u32 v = 0x6da4e4u; r_esp -= 4; W32(r_esp, v); }
    /* 00633f4d: lea edx, [ebp - 0x510] */ r_edx = (u32)(r_ebp+0xfffffaf0u);
    /* 00633f53: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00633f54: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x633f5au); call_ind(t); }
    /* 00633f5a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00633f5d: mov byte ptr [ebp - 0x408], 0 */ W8((u32)(r_ebp+0xfffffbf8u), 0x0u);
    /* 00633f64: push 0x3ff */ { u32 v = 0x3ffu; r_esp -= 4; W32(r_esp, v); }
    /* 00633f69: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00633f6b: lea eax, [ebp - 0x407] */ r_eax = (u32)(r_ebp+0xfffffbf9u);
    /* 00633f71: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00633f72: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x633f77u); f_00686fa2();
    /* 00633f77: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00633f7a: lea ecx, [ebp - 0x510] */ r_ecx = (u32)(r_ebp+0xfffffaf0u);
    /* 00633f80: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00633f81: lea edx, [ebp - 0x408] */ r_edx = (u32)(r_ebp+0xfffffbf8u);
    /* 00633f87: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00633f88: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x633f8du); f_00686d8e();
    /* 00633f8d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00633f90: push 0x6c2d28 */ { u32 v = 0x6c2d28u; r_esp -= 4; W32(r_esp, v); }
    /* 00633f95: lea eax, [ebp - 0x408] */ r_eax = (u32)(r_ebp+0xfffffbf8u);
    /* 00633f9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00633f9c: call 0x5ea9c0 */ r_esp -= 4; W32(r_esp, 0x633fa1u); f_005ea9c0();
    /* 00633fa1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00633fa4: mov dword ptr [ebp - 0x40c], eax */ W32((u32)(r_ebp+0xfffffbf4u), r_eax);
    /* 00633faa: cmp dword ptr [ebp - 0x40c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffbf4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00633fb1: jne 0x634017 */ if (!fZ) goto L_00634017;
L_00633fb3:; BB(0x00633fb3);
    /* 00633fb3: mov ecx, dword ptr [ebp - 0x518] */ r_ecx = R32((u32)(r_ebp+0xfffffae8u));
    /* 00633fb9: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x633fbeu); f_005f3bf0();
    /* 00633fbe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00633fbf: mov ecx, dword ptr [ebp - 0x518] */ r_ecx = R32((u32)(r_ebp+0xfffffae8u));
    /* 00633fc5: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00633fc7: mov ecx, dword ptr [ebp - 0x518] */ r_ecx = R32((u32)(r_ebp+0xfffffae8u));
    /* 00633fcd: mov eax, dword ptr [edx + 0x228] */ r_eax = R32((u32)(r_edx+0x228u));
    /* 00633fd3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x633fd5u); call_ind(t); }
    /* 00633fd5: push 0x6c2d28 */ { u32 v = 0x6c2d28u; r_esp -= 4; W32(r_esp, v); }
    /* 00633fda: lea ecx, [ebp - 0x408] */ r_ecx = (u32)(r_ebp+0xfffffbf8u);
    /* 00633fe0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00633fe1: call 0x5ea9c0 */ r_esp -= 4; W32(r_esp, 0x633fe6u); f_005ea9c0();
    /* 00633fe6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00633fe9: mov dword ptr [ebp - 0x40c], eax */ W32((u32)(r_ebp+0xfffffbf4u), r_eax);
    /* 00633fef: cmp dword ptr [ebp - 0x40c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffbf4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00633ff6: jne 0x634017 */ if (!fZ) goto L_00634017;
L_00633ff8:; BB(0x00633ff8);
    /* 00633ff8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00633ffa: jne 0x634013 */ if (!fZ) goto L_00634013;
L_00633ffc:; BB(0x00633ffc);
    /* 00633ffc: push 0x4b4 */ { u32 v = 0x4b4u; r_esp -= 4; W32(r_esp, v); }
    /* 00634001: push 0x6d9e90 */ { u32 v = 0x6d9e90u; r_esp -= 4; W32(r_esp, v); }
    /* 00634006: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0063400b: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x634010u); f_005e9f20();
    /* 00634010: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00634013:; BB(0x00634013);
    /* 00634013: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00634015: jmp 0x634071 */ goto L_00634071;
L_00634017:; BB(0x00634017);
    /* 00634017: cmp dword ptr [ebp - 0x410], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffbf0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063401e: jle 0x634042 */ if ((fZ||fS!=fO)) goto L_00634042;
L_00634020:; BB(0x00634020);
    /* 00634020: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00634022: mov ecx, dword ptr [ebp - 0x410] */ r_ecx = R32((u32)(r_ebp+0xfffffbf0u));
    /* 00634028: imul ecx, ecx, 0x98 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x98u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0063402e: imul ecx, ecx, 0xa */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xau; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00634031: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00634032: mov edx, dword ptr [ebp - 0x40c] */ r_edx = R32((u32)(r_ebp+0xfffffbf4u));
    /* 00634038: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00634039: call dword ptr [0x6b230c] */ { u32 t = R32((u32)(0x6b230cu)); r_esp -= 4; W32(r_esp, 0x63403fu); call_ind(t); }
    /* 0063403f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00634042:; BB(0x00634042);
    /* 00634042: mov eax, dword ptr [ebp - 0x40c] */ r_eax = R32((u32)(r_ebp+0xfffffbf4u));
    /* 00634048: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00634049: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0063404c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063404d: push 0x98 */ { u32 v = 0x98u; r_esp -= 4; W32(r_esp, v); }
    /* 00634052: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00634055: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00634056: call dword ptr [0x6b225c] */ { u32 t = R32((u32)(0x6b225cu)); r_esp -= 4; W32(r_esp, 0x63405cu); call_ind(t); }
    /* 0063405c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063405f: mov eax, dword ptr [ebp - 0x40c] */ r_eax = R32((u32)(r_ebp+0xfffffbf4u));
    /* 00634065: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00634066: call dword ptr [0x6b2258] */ { u32 t = R32((u32)(0x6b2258u)); r_esp -= 4; W32(r_esp, 0x63406cu); call_ind(t); }
    /* 0063406c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063406f: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_00634071:; BB(0x00634071);
    /* 00634071: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00634074: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00634076: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x63407bu); f_00686d72();
    /* 0063407b: mov esp, ebp */ r_esp = r_ebp;
    /* 0063407d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063407e: ret 8 */ FN_RET(0x00633ea0); r_esp += 12; return;
}

void f_00634090(void) /* Shell::vfunc141 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00634090);
    /* 00634090: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00634091: mov ebp, esp */ r_ebp = r_esp;
    /* 00634093: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00634094: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00634097: movzx eax, byte ptr [ebp + 8] */ r_eax = (u32)R8((u32)(r_ebp+0x8u));
    /* 0063409b: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 0063409d: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 0063409f: add eax, 0x231ad9 */ {  u32 a = r_eax; u32 b = 0x231ad9u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006340a4: mov esp, ebp */ r_esp = r_ebp;
    /* 006340a6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006340a7: ret 4 */ FN_RET(0x00634090); r_esp += 8; return;
}

void f_00634220(void) /* shell::func_00634220 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00634220);
    /* 00634220: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00634221: mov ebp, esp */ r_ebp = r_esp;
    /* 00634223: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00634226: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0063422b: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063422d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00634230: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00634233: push 0x1bd50 */ { u32 v = 0x1bd50u; r_esp -= 4; W32(r_esp, v); }
    /* 00634238: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x63423du); f_00686d82();
    /* 0063423d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00634240: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00634243: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00634246: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00634249: mov dword ptr [eax + 0x8c], ecx */ W32((u32)(r_eax+0x8cu), r_ecx);
    /* 0063424f: push 0x6d8524 */ { u32 v = 0x6d8524u; r_esp -= 4; W32(r_esp, v); }
    /* 00634254: push 0x6da4fc */ { u32 v = 0x6da4fcu; r_esp -= 4; W32(r_esp, v); }
    /* 00634259: call 0x5ea9c0 */ r_esp -= 4; W32(r_esp, 0x63425eu); f_005ea9c0();
    /* 0063425e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00634261: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00634264: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00634268: jne 0x63426f */ if (!fZ) goto L_0063426f;
L_0063426a:; BB(0x0063426a);
    /* 0063426a: jmp 0x6342f3 */ goto L_006342f3;
L_0063426f:; BB(0x0063426f);
    /* 0063426f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00634272: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00634273: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00634275: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00634277: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0063427a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063427b: call dword ptr [0x6b225c] */ { u32 t = R32((u32)(0x6b225cu)); r_esp -= 4; W32(r_esp, 0x634281u); call_ind(t); }
    /* 00634281: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00634284: lea ecx, [ebp - 0xc] */ r_ecx = (u32)(r_ebp+0xfffffff4u);
    /* 00634287: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00634288: push 0x6da4f4 */ { u32 v = 0x6da4f4u; r_esp -= 4; W32(r_esp, v); }
    /* 0063428d: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x634292u); f_00686ec0();
    /* 00634292: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00634295: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00634297: je 0x6342c3 */ if (fZ) goto L_006342c3;
L_00634299:; BB(0x00634299);
    /* 00634299: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0063429b: jne 0x6342b4 */ if (!fZ) goto L_006342b4;
L_0063429d:; BB(0x0063429d);
    /* 0063429d: push 0x50b */ { u32 v = 0x50bu; r_esp -= 4; W32(r_esp, v); }
    /* 006342a2: push 0x6d9e90 */ { u32 v = 0x6d9e90u; r_esp -= 4; W32(r_esp, v); }
    /* 006342a7: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 006342ac: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x6342b1u); f_005e9f20();
    /* 006342b1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006342b4:; BB(0x006342b4);
    /* 006342b4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006342b7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006342b8: call dword ptr [0x6b2258] */ { u32 t = R32((u32)(0x6b2258u)); r_esp -= 4; W32(r_esp, 0x6342beu); call_ind(t); }
    /* 006342be: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006342c1: jmp 0x6342f3 */ goto L_006342f3;
L_006342c3:; BB(0x006342c3);
    /* 006342c3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006342c6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006342c7: push 0x12c */ { u32 v = 0x12cu; r_esp -= 4; W32(r_esp, v); }
    /* 006342cc: push 0x17c */ { u32 v = 0x17cu; r_esp -= 4; W32(r_esp, v); }
    /* 006342d1: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006342d4: add eax, 0x8c */ {  u32 a = r_eax; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006342d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006342da: call dword ptr [0x6b225c] */ { u32 t = R32((u32)(0x6b225cu)); r_esp -= 4; W32(r_esp, 0x6342e0u); call_ind(t); }
    /* 006342e0: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006342e3: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 006342e6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006342e9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006342ea: call dword ptr [0x6b2258] */ { u32 t = R32((u32)(0x6b2258u)); r_esp -= 4; W32(r_esp, 0x6342f0u); call_ind(t); }
    /* 006342f0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006342f3:; BB(0x006342f3);
    /* 006342f3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006342f6: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006342f8: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x6342fdu); f_00686d72();
    /* 006342fd: mov esp, ebp */ r_esp = r_ebp;
    /* 006342ff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00634300: ret  */ FN_RET(0x00634220); r_esp += 4; return;
}

void f_00634310(void) /* shell::func_00634310 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00634310);
    /* 00634310: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00634311: mov ebp, esp */ r_ebp = r_esp;
    /* 00634313: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00634316: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00634319: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0063431c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063431d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00634320: call 0x634560 */ r_esp -= 4; W32(r_esp, 0x634325u); f_00634560();
    /* 00634325: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00634328: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063432a: je 0x6343d2 */ if (fZ) goto L_006343d2;
L_00634330:; BB(0x00634330);
    /* 00634330: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00634337: jmp 0x634342 */ goto L_00634342;
L_00634339:; BB(0x00634339);
    /* 00634339: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063433c: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0063433f: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_00634342:; BB(0x00634342);
    /* 00634342: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00634345: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00634347: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063434a: mov eax, dword ptr [edx + 0xec] */ r_eax = R32((u32)(r_edx+0xecu));
    /* 00634350: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x634352u); call_ind(t); }
    /* 00634352: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00634355: jge 0x6343b3 */ if ((fS==fO)) goto L_006343b3;
L_00634357:; BB(0x00634357);
    /* 00634357: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063435a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063435b: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063435e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00634360: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00634363: mov edx, dword ptr [eax + 0xe0] */ r_edx = R32((u32)(r_eax+0xe0u));
    /* 00634369: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x63436bu); call_ind(t); }
    /* 0063436b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063436d: je 0x6343b1 */ if (fZ) goto L_006343b1;
L_0063436f:; BB(0x0063436f);
    /* 0063436f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00634372: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00634373: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00634376: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00634378: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063437b: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 00634381: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x634383u); call_ind(t); }
    /* 00634383: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00634386: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00634389: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063438a: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063438d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0063438f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00634392: mov edx, dword ptr [eax + 0xf0] */ r_edx = R32((u32)(r_eax+0xf0u));
    /* 00634398: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x63439au); call_ind(t); }
    /* 0063439a: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0063439d: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006343a1: jle 0x6343b1 */ if ((fZ||fS!=fO)) goto L_006343b1;
L_006343a3:; BB(0x006343a3);
    /* 006343a3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006343a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006343a7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006343aa: call 0x634420 */ r_esp -= 4; W32(r_esp, 0x6343afu); f_00634420();
    /* 006343af: jmp 0x63440f */ goto L_0063440f;
L_006343b1:; BB(0x006343b1);
    /* 006343b1: jmp 0x634339 */ goto L_00634339;
L_006343b3:; BB(0x006343b3);
    /* 006343b3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 006343b5: jne 0x6343ce */ if (!fZ) goto L_006343ce;
L_006343b7:; BB(0x006343b7);
    /* 006343b7: push 0x529 */ { u32 v = 0x529u; r_esp -= 4; W32(r_esp, v); }
    /* 006343bc: push 0x6d9e90 */ { u32 v = 0x6d9e90u; r_esp -= 4; W32(r_esp, v); }
    /* 006343c1: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 006343c6: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x6343cbu); f_005e9f20();
    /* 006343cb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006343ce:; BB(0x006343ce);
    /* 006343ce: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006343d0: jmp 0x63440f */ goto L_0063440f;
L_006343d2:; BB(0x006343d2);
    /* 006343d2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006343d5: sub eax, 0x2710 */ {  u32 a = r_eax; u32 b = 0x2710u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006343da: imul eax, eax, 0x17c */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x17cu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006343e0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006343e3: mov edx, dword ptr [ecx + 0x8c] */ r_edx = R32((u32)(r_ecx+0x8cu));
    /* 006343e9: mov eax, dword ptr [edx + eax + 0x164] */ r_eax = R32((u32)(r_edx+r_eax+0x164u));
    /* 006343f0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 006343f3: movzx ecx, byte ptr [ebp + 0xc] */ r_ecx = (u32)R8((u32)(r_ebp+0xcu));
    /* 006343f7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006343f9: je 0x634406 */ if (fZ) goto L_00634406;
L_006343fb:; BB(0x006343fb);
    /* 006343fb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006343fe: imul edx, edx, -1 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xffffffffu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00634401: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00634404: jmp 0x63440c */ goto L_0063440c;
L_00634406:; BB(0x00634406);
    /* 00634406: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00634409: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_0063440c:; BB(0x0063440c);
    /* 0063440c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
L_0063440f:; BB(0x0063440f);
    /* 0063440f: mov esp, ebp */ r_esp = r_ebp;
    /* 00634411: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00634412: ret 8 */ FN_RET(0x00634310); r_esp += 12; return;
}

void f_00634870(void) /* shell::func_00634870 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00634870);
    /* 00634870: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00634871: mov ebp, esp */ r_ebp = r_esp;
    /* 00634873: sub esp, 0x438 */ {  u32 a = r_esp; u32 b = 0x438u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00634879: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0063487e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00634880: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00634883: mov dword ptr [ebp - 0x438], ecx */ W32((u32)(r_ebp+0xfffffbc8u), r_ecx);
    /* 00634889: mov byte ptr [ebp - 0x408], 0 */ W8((u32)(r_ebp+0xfffffbf8u), 0x0u);
    /* 00634890: push 0x3ff */ { u32 v = 0x3ffu; r_esp -= 4; W32(r_esp, v); }
    /* 00634895: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00634897: lea eax, [ebp - 0x407] */ r_eax = (u32)(r_ebp+0xfffffbf9u);
    /* 0063489d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063489e: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x6348a3u); f_00686fa2();
    /* 006348a3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006348a6: push 0x6da590 */ { u32 v = 0x6da590u; r_esp -= 4; W32(r_esp, v); }
    /* 006348ab: lea ecx, [ebp - 0x408] */ r_ecx = (u32)(r_ebp+0xfffffbf8u);
    /* 006348b1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006348b2: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x6348b7u); f_00686d8e();
    /* 006348b7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006348ba: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006348bd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006348be: lea eax, [ebp - 0x408] */ r_eax = (u32)(r_ebp+0xfffffbf8u);
    /* 006348c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006348c5: call 0x5ea9c0 */ r_esp -= 4; W32(r_esp, 0x6348cau); f_005ea9c0();
    /* 006348ca: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006348cd: mov dword ptr [ebp - 0x434], eax */ W32((u32)(r_ebp+0xfffffbccu), r_eax);
    /* 006348d3: cmp dword ptr [ebp - 0x434], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffbccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006348da: jne 0x634914 */ if (!fZ) goto L_00634914;
L_006348dc:; BB(0x006348dc);
    /* 006348dc: mov ecx, dword ptr [ebp - 0x438] */ r_ecx = R32((u32)(r_ebp+0xfffffbc8u));
    /* 006348e2: call 0x6349c0 */ r_esp -= 4; W32(r_esp, 0x6348e7u); f_006349c0();
    /* 006348e7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006348ea: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006348eb: lea edx, [ebp - 0x408] */ r_edx = (u32)(r_ebp+0xfffffbf8u);
    /* 006348f1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006348f2: call 0x5ea9c0 */ r_esp -= 4; W32(r_esp, 0x6348f7u); f_005ea9c0();
    /* 006348f7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006348fa: mov dword ptr [ebp - 0x434], eax */ W32((u32)(r_ebp+0xfffffbccu), r_eax);
    /* 00634900: cmp dword ptr [ebp - 0x434], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffbccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00634907: jne 0x634914 */ if (!fZ) goto L_00634914;
L_00634909:; BB(0x00634909);
    /* 00634909: mov eax, dword ptr [ebp - 0x434] */ r_eax = R32((u32)(r_ebp+0xfffffbccu));
    /* 0063490f: jmp 0x6349aa */ goto L_006349aa;
L_00634914:; BB(0x00634914);
    /* 00634914: push 0x6da58c */ { u32 v = 0x6da58cu; r_esp -= 4; W32(r_esp, v); }
    /* 00634919: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0063491c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063491d: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x634922u); f_00686ec0();
    /* 00634922: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00634925: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00634927: je 0x634990 */ if (fZ) goto L_00634990;
L_00634929:; BB(0x00634929);
    /* 00634929: mov ecx, dword ptr [ebp - 0x434] */ r_ecx = R32((u32)(r_ebp+0xfffffbccu));
    /* 0063492f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00634930: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00634932: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00634934: lea edx, [ebp - 0x410] */ r_edx = (u32)(r_ebp+0xfffffbf0u);
    /* 0063493a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063493b: call dword ptr [0x6b225c] */ { u32 t = R32((u32)(0x6b225cu)); r_esp -= 4; W32(r_esp, 0x634941u); call_ind(t); }
    /* 00634941: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00634944: push 0x6da584 */ { u32 v = 0x6da584u; r_esp -= 4; W32(r_esp, v); }
    /* 00634949: lea eax, [ebp - 0x410] */ r_eax = (u32)(r_ebp+0xfffffbf0u);
    /* 0063494f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00634950: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x634955u); f_00686ec0();
    /* 00634955: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00634958: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 0063495a: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 0063495c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0063495f: jne 0x634990 */ if (!fZ) goto L_00634990;
L_00634961:; BB(0x00634961);
    /* 00634961: mov ecx, dword ptr [ebp - 0x434] */ r_ecx = R32((u32)(r_ebp+0xfffffbccu));
    /* 00634967: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00634968: call dword ptr [0x6b2258] */ { u32 t = R32((u32)(0x6b2258u)); r_esp -= 4; W32(r_esp, 0x63496eu); call_ind(t); }
    /* 0063496e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00634971: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00634973: jne 0x63498c */ if (!fZ) goto L_0063498c;
L_00634975:; BB(0x00634975);
    /* 00634975: push 0x5ad */ { u32 v = 0x5adu; r_esp -= 4; W32(r_esp, v); }
    /* 0063497a: push 0x6d9e90 */ { u32 v = 0x6d9e90u; r_esp -= 4; W32(r_esp, v); }
    /* 0063497f: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00634984: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x634989u); f_005e9f20();
    /* 00634989: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0063498c:; BB(0x0063498c);
    /* 0063498c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063498e: jmp 0x6349aa */ goto L_006349aa;
L_00634990:; BB(0x00634990);
    /* 00634990: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00634992: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00634994: mov ecx, dword ptr [ebp - 0x434] */ r_ecx = R32((u32)(r_ebp+0xfffffbccu));
    /* 0063499a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063499b: call dword ptr [0x6b230c] */ { u32 t = R32((u32)(0x6b230cu)); r_esp -= 4; W32(r_esp, 0x6349a1u); call_ind(t); }
    /* 006349a1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006349a4: mov eax, dword ptr [ebp - 0x434] */ r_eax = R32((u32)(r_ebp+0xfffffbccu));
L_006349aa:; BB(0x006349aa);
    /* 006349aa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006349ad: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006349af: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x6349b4u); f_00686d72();
    /* 006349b4: mov esp, ebp */ r_esp = r_ebp;
    /* 006349b6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006349b7: ret 4 */ FN_RET(0x00634870); r_esp += 8; return;
}

void f_006349c0(void) /* shell::func_006349c0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006349c0);
    /* 006349c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006349c1: mov ebp, esp */ r_ebp = r_esp;
    /* 006349c3: sub esp, 0xb0 */ {  u32 a = r_esp; u32 b = 0xb0u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006349c9: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 006349ce: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006349d0: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 006349d3: mov dword ptr [ebp - 0xb0], ecx */ W32((u32)(r_ebp+0xffffff50u), r_ecx);
    /* 006349d9: push 0x6da58c */ { u32 v = 0x6da58cu; r_esp -= 4; W32(r_esp, v); }
    /* 006349de: mov ecx, dword ptr [ebp - 0xb0] */ r_ecx = R32((u32)(r_ebp+0xffffff50u));
    /* 006349e4: call 0x634870 */ r_esp -= 4; W32(r_esp, 0x6349e9u); f_00634870();
    /* 006349e9: mov dword ptr [ebp - 0xa4], eax */ W32((u32)(r_ebp+0xffffff5cu), r_eax);
    /* 006349ef: cmp dword ptr [ebp - 0xa4], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff5cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006349f6: jne 0x634a18 */ if (!fZ) goto L_00634a18;
L_006349f8:; BB(0x006349f8);
    /* 006349f8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 006349fa: jne 0x634a13 */ if (!fZ) goto L_00634a13;
L_006349fc:; BB(0x006349fc);
    /* 006349fc: push 0x5c0 */ { u32 v = 0x5c0u; r_esp -= 4; W32(r_esp, v); }
    /* 00634a01: push 0x6d9e90 */ { u32 v = 0x6d9e90u; r_esp -= 4; W32(r_esp, v); }
    /* 00634a06: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00634a0b: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x634a10u); f_005e9f20();
    /* 00634a10: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00634a13:; BB(0x00634a13);
    /* 00634a13: jmp 0x634aa5 */ goto L_00634aa5;
L_00634a18:; BB(0x00634a18);
    /* 00634a18: push 0x6da584 */ { u32 v = 0x6da584u; r_esp -= 4; W32(r_esp, v); }
    /* 00634a1d: lea edx, [ebp - 0xac] */ r_edx = (u32)(r_ebp+0xffffff54u);
    /* 00634a23: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00634a24: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x634a29u); f_00686d8e();
    /* 00634a29: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00634a2c: mov eax, dword ptr [ebp - 0xa4] */ r_eax = R32((u32)(r_ebp+0xffffff5cu));
    /* 00634a32: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00634a33: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00634a35: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00634a37: lea ecx, [ebp - 0xac] */ r_ecx = (u32)(r_ebp+0xffffff54u);
    /* 00634a3d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00634a3e: call dword ptr [0x6b2260] */ { u32 t = R32((u32)(0x6b2260u)); r_esp -= 4; W32(r_esp, 0x634a44u); call_ind(t); }
    /* 00634a44: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00634a47: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00634a4e: jmp 0x634a59 */ goto L_00634a59;
L_00634a50:; BB(0x00634a50);
    /* 00634a50: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00634a53: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00634a56: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00634a59:; BB(0x00634a59);
    /* 00634a59: cmp dword ptr [ebp - 4], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00634a5d: jge 0x634a95 */ if ((fS==fO)) goto L_00634a95;
L_00634a5f:; BB(0x00634a5f);
    /* 00634a5f: push 0x98 */ { u32 v = 0x98u; r_esp -= 4; W32(r_esp, v); }
    /* 00634a64: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00634a66: lea eax, [ebp - 0xa0] */ r_eax = (u32)(r_ebp+0xffffff60u);
    /* 00634a6c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00634a6d: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x634a72u); f_00686fa2();
    /* 00634a72: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00634a75: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 00634a7b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00634a7c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00634a7e: push 0x98 */ { u32 v = 0x98u; r_esp -= 4; W32(r_esp, v); }
    /* 00634a83: lea edx, [ebp - 0xa0] */ r_edx = (u32)(r_ebp+0xffffff60u);
    /* 00634a89: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00634a8a: call dword ptr [0x6b2260] */ { u32 t = R32((u32)(0x6b2260u)); r_esp -= 4; W32(r_esp, 0x634a90u); call_ind(t); }
    /* 00634a90: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00634a93: jmp 0x634a50 */ goto L_00634a50;
L_00634a95:; BB(0x00634a95);
    /* 00634a95: mov eax, dword ptr [ebp - 0xa4] */ r_eax = R32((u32)(r_ebp+0xffffff5cu));
    /* 00634a9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00634a9c: call dword ptr [0x6b2258] */ { u32 t = R32((u32)(0x6b2258u)); r_esp -= 4; W32(r_esp, 0x634aa2u); call_ind(t); }
    /* 00634aa2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00634aa5:; BB(0x00634aa5);
    /* 00634aa5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00634aa8: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00634aaa: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x634aafu); f_00686d72();
    /* 00634aaf: mov esp, ebp */ r_esp = r_ebp;
    /* 00634ab1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00634ab2: ret  */ FN_RET(0x006349c0); r_esp += 4; return;
}

void f_00634ac0(void) /* shell::func_00634ac0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00634ac0);
    /* 00634ac0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00634ac1: mov ebp, esp */ r_ebp = r_esp;
    /* 00634ac3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00634ac6: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00634ac9: push 0x6c2d28 */ { u32 v = 0x6c2d28u; r_esp -= 4; W32(r_esp, v); }
    /* 00634ace: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00634ad1: call 0x634870 */ r_esp -= 4; W32(r_esp, 0x634ad6u); f_00634870();
    /* 00634ad6: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00634ad9: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00634add: jne 0x634b01 */ if (!fZ) goto L_00634b01;
L_00634adf:; BB(0x00634adf);
    /* 00634adf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00634ae1: jne 0x634afa */ if (!fZ) goto L_00634afa;
L_00634ae3:; BB(0x00634ae3);
    /* 00634ae3: push 0x5d6 */ { u32 v = 0x5d6u; r_esp -= 4; W32(r_esp, v); }
    /* 00634ae8: push 0x6d9e90 */ { u32 v = 0x6d9e90u; r_esp -= 4; W32(r_esp, v); }
    /* 00634aed: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00634af2: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x634af7u); f_005e9f20();
    /* 00634af7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00634afa:; BB(0x00634afa);
    /* 00634afa: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00634afc: jmp 0x634b8a */ goto L_00634b8a;
L_00634b01:; BB(0x00634b01);
    /* 00634b01: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00634b04: cmp dword ptr [edx + 0x90], 0 */ {  u32 a = R32((u32)(r_edx+0x90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00634b0b: jne 0x634b29 */ if (!fZ) goto L_00634b29;
L_00634b0d:; BB(0x00634b0d);
    /* 00634b0d: push 0x5f0 */ { u32 v = 0x5f0u; r_esp -= 4; W32(r_esp, v); }
    /* 00634b12: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x634b17u); f_00686d82();
    /* 00634b17: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00634b1a: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00634b1d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00634b20: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00634b23: mov dword ptr [eax + 0x90], ecx */ W32((u32)(r_eax+0x90u), r_ecx);
L_00634b29:; BB(0x00634b29);
    /* 00634b29: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00634b2b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00634b2d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00634b30: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00634b31: call dword ptr [0x6b230c] */ { u32 t = R32((u32)(0x6b230cu)); r_esp -= 4; W32(r_esp, 0x634b37u); call_ind(t); }
    /* 00634b37: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00634b3a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00634b41: jmp 0x634b4c */ goto L_00634b4c;
L_00634b43:; BB(0x00634b43);
    /* 00634b43: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00634b46: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00634b49: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00634b4c:; BB(0x00634b4c);
    /* 00634b4c: cmp dword ptr [ebp - 4], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00634b50: jge 0x634b7b */ if ((fS==fO)) goto L_00634b7b;
L_00634b52:; BB(0x00634b52);
    /* 00634b52: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00634b55: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00634b56: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00634b58: push 0x98 */ { u32 v = 0x98u; r_esp -= 4; W32(r_esp, v); }
    /* 00634b5d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00634b60: imul edx, edx, 0x98 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x98u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00634b66: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00634b69: add edx, dword ptr [eax + 0x90] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x90u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00634b6f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00634b70: call dword ptr [0x6b225c] */ { u32 t = R32((u32)(0x6b225cu)); r_esp -= 4; W32(r_esp, 0x634b76u); call_ind(t); }
    /* 00634b76: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00634b79: jmp 0x634b43 */ goto L_00634b43;
L_00634b7b:; BB(0x00634b7b);
    /* 00634b7b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00634b7e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00634b7f: call dword ptr [0x6b2258] */ { u32 t = R32((u32)(0x6b2258u)); r_esp -= 4; W32(r_esp, 0x634b85u); call_ind(t); }
    /* 00634b85: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00634b88: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_00634b8a:; BB(0x00634b8a);
    /* 00634b8a: mov esp, ebp */ r_esp = r_ebp;
    /* 00634b8c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00634b8d: ret  */ FN_RET(0x00634ac0); r_esp += 4; return;
}

void f_00634b90(void) /* shell::func_00634b90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00634b90);
    /* 00634b90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00634b91: mov ebp, esp */ r_ebp = r_esp;
    /* 00634b93: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00634b96: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00634b9b: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00634b9d: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00634ba0: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00634ba3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00634ba6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00634ba8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00634bab: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 00634bb1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x634bb3u); call_ind(t); }
    /* 00634bb3: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00634bb6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00634bb8: jne 0x634bbf */ if (!fZ) goto L_00634bbf;
L_00634bba:; BB(0x00634bba);
    /* 00634bba: jmp 0x634c54 */ goto L_00634c54;
L_00634bbf:; BB(0x00634bbf);
    /* 00634bbf: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00634bc2: cmp dword ptr [edx + 0x90], 0 */ {  u32 a = R32((u32)(r_edx+0x90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00634bc9: jne 0x634bd0 */ if (!fZ) goto L_00634bd0;
L_00634bcb:; BB(0x00634bcb);
    /* 00634bcb: jmp 0x634c54 */ goto L_00634c54;
L_00634bd0:; BB(0x00634bd0);
    /* 00634bd0: push 0x6da58c */ { u32 v = 0x6da58cu; r_esp -= 4; W32(r_esp, v); }
    /* 00634bd5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00634bd8: call 0x634870 */ r_esp -= 4; W32(r_esp, 0x634bddu); f_00634870();
    /* 00634bdd: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00634be0: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00634be4: jne 0x634c03 */ if (!fZ) goto L_00634c03;
L_00634be6:; BB(0x00634be6);
    /* 00634be6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00634be8: jne 0x634c01 */ if (!fZ) goto L_00634c01;
L_00634bea:; BB(0x00634bea);
    /* 00634bea: push 0x5f3 */ { u32 v = 0x5f3u; r_esp -= 4; W32(r_esp, v); }
    /* 00634bef: push 0x6d9e90 */ { u32 v = 0x6d9e90u; r_esp -= 4; W32(r_esp, v); }
    /* 00634bf4: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00634bf9: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x634bfeu); f_005e9f20();
    /* 00634bfe: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00634c01:; BB(0x00634c01);
    /* 00634c01: jmp 0x634c54 */ goto L_00634c54;
L_00634c03:; BB(0x00634c03);
    /* 00634c03: push 0x6da584 */ { u32 v = 0x6da584u; r_esp -= 4; W32(r_esp, v); }
    /* 00634c08: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 00634c0b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00634c0c: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x634c11u); f_00686d8e();
    /* 00634c11: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00634c14: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00634c17: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00634c18: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00634c1a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00634c1c: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 00634c1f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00634c20: call dword ptr [0x6b2260] */ { u32 t = R32((u32)(0x6b2260u)); r_esp -= 4; W32(r_esp, 0x634c26u); call_ind(t); }
    /* 00634c26: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00634c29: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00634c2c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00634c2d: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00634c2f: push 0x98 */ { u32 v = 0x98u; r_esp -= 4; W32(r_esp, v); }
    /* 00634c34: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00634c37: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 00634c3d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00634c3e: call dword ptr [0x6b2260] */ { u32 t = R32((u32)(0x6b2260u)); r_esp -= 4; W32(r_esp, 0x634c44u); call_ind(t); }
    /* 00634c44: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00634c47: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00634c4a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00634c4b: call dword ptr [0x6b2258] */ { u32 t = R32((u32)(0x6b2258u)); r_esp -= 4; W32(r_esp, 0x634c51u); call_ind(t); }
    /* 00634c51: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00634c54:; BB(0x00634c54);
    /* 00634c54: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00634c57: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00634c59: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x634c5eu); f_00686d72();
    /* 00634c5e: mov esp, ebp */ r_esp = r_ebp;
    /* 00634c60: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00634c61: ret  */ FN_RET(0x00634b90); r_esp += 4; return;
}

void f_00634c70(void) /* shell::func_00634c70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00634c70);
    /* 00634c70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00634c71: mov ebp, esp */ r_ebp = r_esp;
    /* 00634c73: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00634c75: push 0x6ab9e0 */ { u32 v = 0x6ab9e0u; r_esp -= 4; W32(r_esp, v); }
    /* 00634c7a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00634c80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00634c81: sub esp, 0xa4 */ {  u32 a = r_esp; u32 b = 0xa4u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00634c87: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00634c8c: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00634c8e: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00634c91: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00634c92: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00634c95: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00634c9b: mov dword ptr [ebp - 0xa0], ecx */ W32((u32)(r_ebp+0xffffff60u), r_ecx);
    /* 00634ca1: mov byte ptr [ebp - 0x5d], 0 */ W8((u32)(r_ebp+0xffffffa3u), 0x0u);
    /* 00634ca5: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 00634cac: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 00634cb2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00634cb4: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 00634cba: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 00634cc0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x634cc2u); call_ind(t); }
    /* 00634cc2: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00634cc5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00634cc7: jne 0x634cce */ if (!fZ) goto L_00634cce;
L_00634cc9:; BB(0x00634cc9);
    /* 00634cc9: jmp 0x635110 */ goto L_00635110;
L_00634cce:; BB(0x00634cce);
    /* 00634cce: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00634cd5: jmp 0x634ce0 */ goto L_00634ce0;
L_00634cd7:; BB(0x00634cd7);
    /* 00634cd7: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00634cda: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00634cdd: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_00634ce0:; BB(0x00634ce0);
    /* 00634ce0: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 00634ce6: call 0x636610 */ r_esp -= 4; W32(r_esp, 0x634cebu); f_00636610();
    /* 00634ceb: cmp dword ptr [ebp - 0x10], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00634cee: jge 0x6350fd */ if ((fS==fO)) goto L_006350fd;
L_00634cf4:; BB(0x00634cf4);
    /* 00634cf4: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 00634cfa: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 00634cfd: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00634d00: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 00634d03: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 00634d09: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 00634d0f: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x634d14u); f_0063aac0();
    /* 00634d14: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00634d16: mov dword ptr [ebp - 0x80], ecx */ W32((u32)(r_ebp+0xffffff80u), r_ecx);
    /* 00634d19: cmp dword ptr [ebp - 0x80], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff80u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00634d1d: je 0x634d47 */ if (fZ) goto L_00634d47;
L_00634d1f:; BB(0x00634d1f);
    /* 00634d1f: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 00634d25: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x634d2au); f_0063aac0();
    /* 00634d2a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00634d2c: mov dword ptr [ebp - 0x84], edx */ W32((u32)(r_ebp+0xffffff7cu), r_edx);
    /* 00634d32: cmp dword ptr [ebp - 0x84], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff7cu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00634d39: je 0x634d47 */ if (fZ) goto L_00634d47;
L_00634d3b:; BB(0x00634d3b);
    /* 00634d3b: mov dword ptr [ebp - 0xa4], 0 */ W32((u32)(r_ebp+0xffffff5cu), 0x0u);
    /* 00634d45: jmp 0x634d51 */ goto L_00634d51;
L_00634d47:; BB(0x00634d47);
    /* 00634d47: mov dword ptr [ebp - 0xa4], 1 */ W32((u32)(r_ebp+0xffffff5cu), 0x1u);
L_00634d51:; BB(0x00634d51);
    /* 00634d51: movzx eax, byte ptr [ebp - 0xa4] */ r_eax = (u32)R8((u32)(r_ebp+0xffffff5cu));
    /* 00634d58: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00634d5a: je 0x6350f8 */ if (fZ) goto L_006350f8;
L_00634d60:; BB(0x00634d60);
    /* 00634d60: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 00634d66: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 00634d69: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00634d6c: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 00634d6f: cmp dword ptr [ecx + 0x24], 0 */ {  u32 a = R32((u32)(r_ecx+0x24u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00634d73: je 0x6350f8 */ if (fZ) goto L_006350f8;
L_00634d79:; BB(0x00634d79);
    /* 00634d79: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 00634d7f: mov eax, dword ptr [edx + 0x58] */ r_eax = R32((u32)(r_edx+0x58u));
    /* 00634d82: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00634d85: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 00634d88: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 00634d8b: call 0x6703e0 */ r_esp -= 4; W32(r_esp, 0x634d90u); f_006703e0();
    /* 00634d90: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00634d93: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 00634d99: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 00634d9c: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00634d9f: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 00634da2: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 00634da8: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 00634dae: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x634db3u); f_0063aac0();
    /* 00634db3: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00634db6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00634db7: lea ecx, [ebp - 0x54] */ r_ecx = (u32)(r_ebp+0xffffffacu);
    /* 00634dba: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00634dbb: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x634dc0u); f_00686d8e();
    /* 00634dc0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00634dc3: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 00634dca: jmp 0x634dd5 */ goto L_00634dd5;
L_00634dcc:; BB(0x00634dcc);
    /* 00634dcc: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00634dcf: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00634dd2: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
L_00634dd5:; BB(0x00634dd5);
    /* 00634dd5: cmp dword ptr [ebp - 0x14], 0xa */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00634dd9: jge 0x634e05 */ if ((fS==fO)) goto L_00634e05;
L_00634ddb:; BB(0x00634ddb);
    /* 00634ddb: lea eax, [ebp - 0x54] */ r_eax = (u32)(r_ebp+0xffffffacu);
    /* 00634dde: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00634ddf: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00634de2: imul ecx, ecx, 0x98 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x98u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00634de8: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 00634dee: add ecx, dword ptr [edx + 0x90] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x90u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00634df4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00634df5: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x634dfau); f_00686ec0();
    /* 00634dfa: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00634dfd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00634dff: jne 0x634e03 */ if (!fZ) goto L_00634e03;
L_00634e01:; BB(0x00634e01);
    /* 00634e01: jmp 0x634e05 */ goto L_00634e05;
L_00634e03:; BB(0x00634e03);
    /* 00634e03: jmp 0x634dcc */ goto L_00634dcc;
L_00634e05:; BB(0x00634e05);
    /* 00634e05: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 00634e0c: jmp 0x634e17 */ goto L_00634e17;
L_00634e0e:; BB(0x00634e0e);
    /* 00634e0e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00634e11: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00634e14: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_00634e17:; BB(0x00634e17);
    /* 00634e17: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00634e1a: cmp ecx, dword ptr [ebp - 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00634e1d: jg 0x6350f8 */ if ((!fZ&&fS==fO)) goto L_006350f8;
L_00634e23:; BB(0x00634e23);
    /* 00634e23: cmp dword ptr [ebp - 0x18], 0xa */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00634e27: jge 0x6350f8 */ if ((fS==fO)) goto L_006350f8;
L_00634e2d:; BB(0x00634e2d);
    /* 00634e2d: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00634e30: imul edx, edx, 0x98 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x98u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00634e36: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 00634e3c: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 00634e42: mov edx, dword ptr [ecx + edx + 0x34] */ r_edx = R32((u32)(r_ecx+r_edx+0x34u));
    /* 00634e46: cmp edx, dword ptr [ebp - 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00634e49: jge 0x6350f3 */ if ((fS==fO)) goto L_006350f3;
L_00634e4f:; BB(0x00634e4f);
    /* 00634e4f: cmp dword ptr [ebp - 0x14], 0xa */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00634e53: jne 0x634e63 */ if (!fZ) goto L_00634e63;
L_00634e55:; BB(0x00634e55);
    /* 00634e55: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00634e58: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00634e5b: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 00634e61: jmp 0x634e6c */ goto L_00634e6c;
L_00634e63:; BB(0x00634e63);
    /* 00634e63: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00634e66: mov dword ptr [ebp - 0xa8], ecx */ W32((u32)(r_ebp+0xffffff58u), r_ecx);
L_00634e6c:; BB(0x00634e6c);
    /* 00634e6c: mov edx, dword ptr [ebp - 0xa8] */ r_edx = R32((u32)(r_ebp+0xffffff58u));
    /* 00634e72: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 00634e75: jmp 0x634e80 */ goto L_00634e80;
L_00634e77:; BB(0x00634e77);
    /* 00634e77: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 00634e7a: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00634e7d: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
L_00634e80:; BB(0x00634e80);
    /* 00634e80: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00634e83: cmp ecx, dword ptr [ebp - 0x18] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00634e86: jle 0x634ec6 */ if ((fZ||fS!=fO)) goto L_00634ec6;
L_00634e88:; BB(0x00634e88);
    /* 00634e88: push 0x98 */ { u32 v = 0x98u; r_esp -= 4; W32(r_esp, v); }
    /* 00634e8d: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00634e90: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00634e93: imul edx, edx, 0x98 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x98u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00634e99: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 00634e9f: add edx, dword ptr [eax + 0x90] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x90u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00634ea5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00634ea6: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00634ea9: imul ecx, ecx, 0x98 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x98u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00634eaf: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 00634eb5: add ecx, dword ptr [edx + 0x90] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x90u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00634ebb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00634ebc: call 0x686fde */ r_esp -= 4; W32(r_esp, 0x634ec1u); f_00686fde();
    /* 00634ec1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00634ec4: jmp 0x634e77 */ goto L_00634e77;
L_00634ec6:; BB(0x00634ec6);
    /* 00634ec6: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00634ec9: imul eax, eax, 0x98 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x98u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00634ecf: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 00634ed5: mov edx, dword ptr [ecx + 0x90] */ r_edx = R32((u32)(r_ecx+0x90u));
    /* 00634edb: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00634ede: mov dword ptr [edx + eax + 0x34], ecx */ W32((u32)(r_edx+r_eax+0x34u), r_ecx);
    /* 00634ee2: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00634ee5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00634ee6: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 00634eec: call 0x639070 */ r_esp -= 4; W32(r_esp, 0x634ef1u); f_00639070();
    /* 00634ef1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00634ef2: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00634ef5: imul eax, eax, 0x98 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x98u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00634efb: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 00634f01: add eax, dword ptr [ecx + 0x90] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x90u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00634f07: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00634f08: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x634f0du); f_00686d8e();
    /* 00634f0d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00634f10: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00634f13: imul edx, edx, 0x98 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x98u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00634f19: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 00634f1f: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 00634f25: mov dword ptr [ecx + edx + 0x3c], 0xffffffff */ W32((u32)(r_ecx+r_edx+0x3cu), 0xffffffffu);
    /* 00634f2d: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 00634f33: mov eax, dword ptr [edx + 0x58] */ r_eax = R32((u32)(r_edx+0x58u));
    /* 00634f36: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00634f39: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 00634f3c: mov dword ptr [ebp - 0x90], edx */ W32((u32)(r_ebp+0xffffff70u), r_edx);
    /* 00634f42: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 00634f48: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x634f4du); f_0063aac0();
    /* 00634f4d: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00634f4f: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 00634f55: cmp dword ptr [ebp - 0x94], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff6cu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00634f5c: jne 0x634fd8 */ if (!fZ) goto L_00634fd8;
L_00634f5e:; BB(0x00634f5e);
    /* 00634f5e: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00634f64: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 00634f67: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00634f6a: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 00634f6d: call 0x4842b0 */ r_esp -= 4; W32(r_esp, 0x634f72u); f_004842b0();
    /* 00634f72: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00634f73: lea ecx, [ebp - 0x6c] */ r_ecx = (u32)(r_ebp+0xffffff94u);
    /* 00634f76: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00634f77: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00634f7d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00634f7f: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00634f85: mov edx, dword ptr [eax + 0x1ec] */ r_edx = R32((u32)(r_eax+0x1ecu));
    /* 00634f8b: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x634f8du); call_ind(t); }
    /* 00634f8d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00634f90: imul ecx, ecx, 0x98 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x98u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00634f96: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 00634f9c: mov edx, dword ptr [edx + 0x90] */ r_edx = R32((u32)(r_edx+0x90u));
    /* 00634fa2: lea ecx, [edx + ecx + 0x40] */ r_ecx = (u32)(r_edx+r_ecx+0x40u);
    /* 00634fa6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00634fa8: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 00634faa: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00634fad: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 00634fb0: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 00634fb3: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 00634fb6: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00634fb9: imul ecx, ecx, 0x98 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x98u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00634fbf: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 00634fc5: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 00634fcb: mov dword ptr [eax + ecx + 0x38], 2 */ W32((u32)(r_eax+r_ecx+0x38u), 0x2u);
    /* 00634fd3: jmp 0x6350ed */ goto L_006350ed;
L_00634fd8:; BB(0x00634fd8);
    /* 00634fd8: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00634fdb: imul ecx, ecx, 0x98 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x98u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00634fe1: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 00634fe7: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 00634fed: mov dword ptr [eax + ecx + 0x38], 3 */ W32((u32)(r_eax+r_ecx+0x38u), 0x3u);
    /* 00634ff5: cmp dword ptr [ebp - 0x58], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00634ff9: jne 0x635048 */ if (!fZ) goto L_00635048;
L_00634ffb:; BB(0x00634ffb);
    /* 00634ffb: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 00635000: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x635005u); f_00686d82();
    /* 00635005: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00635008: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 0063500b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00635012: cmp dword ptr [ebp - 0x74], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00635016: je 0x635028 */ if (fZ) goto L_00635028;
L_00635018:; BB(0x00635018);
    /* 00635018: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0063501b: call 0x6640c0 */ r_esp -= 4; W32(r_esp, 0x635020u); f_006640c0();
    /* 00635020: mov dword ptr [ebp - 0xac], eax */ W32((u32)(r_ebp+0xffffff54u), r_eax);
    /* 00635026: jmp 0x635032 */ goto L_00635032;
L_00635028:; BB(0x00635028);
    /* 00635028: mov dword ptr [ebp - 0xac], 0 */ W32((u32)(r_ebp+0xffffff54u), 0x0u);
L_00635032:; BB(0x00635032);
    /* 00635032: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 00635038: mov dword ptr [ebp - 0x70], ecx */ W32((u32)(r_ebp+0xffffff90u), r_ecx);
    /* 0063503b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00635042: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 00635045: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
L_00635048:; BB(0x00635048);
    /* 00635048: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 0063504e: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 00635051: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00635054: mov ecx, dword ptr [ecx + edx*4] */ r_ecx = R32((u32)(r_ecx+r_edx*4));
    /* 00635057: call 0x57a470 */ r_esp -= 4; W32(r_esp, 0x63505cu); f_0057a470();
    /* 0063505c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063505d: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00635060: call 0x664300 */ r_esp -= 4; W32(r_esp, 0x635065u); f_00664300();
    /* 00635065: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00635068: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063506a: jne 0x635089 */ if (!fZ) goto L_00635089;
L_0063506c:; BB(0x0063506c);
    /* 0063506c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0063506e: jne 0x635087 */ if (!fZ) goto L_00635087;
L_00635070:; BB(0x00635070);
    /* 00635070: push 0x62d */ { u32 v = 0x62du; r_esp -= 4; W32(r_esp, v); }
    /* 00635075: push 0x6d9e90 */ { u32 v = 0x6d9e90u; r_esp -= 4; W32(r_esp, v); }
    /* 0063507a: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0063507f: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x635084u); f_005e9f20();
    /* 00635084: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00635087:; BB(0x00635087);
    /* 00635087: jmp 0x6350b4 */ goto L_006350b4;
L_00635089:; BB(0x00635089);
    /* 00635089: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 0063508b: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0063508e: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00635091: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00635092: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00635095: imul ecx, ecx, 0x98 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x98u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0063509b: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 006350a1: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 006350a7: lea ecx, [eax + ecx + 0x4c] */ r_ecx = (u32)(r_eax+r_ecx+0x4cu);
    /* 006350ab: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006350ac: call 0x686fde */ r_esp -= 4; W32(r_esp, 0x6350b1u); f_00686fde();
    /* 006350b1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006350b4:; BB(0x006350b4);
    /* 006350b4: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 006350b7: mov dword ptr [ebp - 0x7c], edx */ W32((u32)(r_ebp+0xffffff84u), r_edx);
    /* 006350ba: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 006350bd: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 006350c0: cmp dword ptr [ebp - 0x78], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff88u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006350c4: je 0x6350dc */ if (fZ) goto L_006350dc;
L_006350c6:; BB(0x006350c6);
    /* 006350c6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006350c8: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 006350cb: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006350cd: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 006350d0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006350d2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6350d4u); call_ind(t); }
    /* 006350d4: mov dword ptr [ebp - 0xb0], eax */ W32((u32)(r_ebp+0xffffff50u), r_eax);
    /* 006350da: jmp 0x6350e6 */ goto L_006350e6;
L_006350dc:; BB(0x006350dc);
    /* 006350dc: mov dword ptr [ebp - 0xb0], 0 */ W32((u32)(r_ebp+0xffffff50u), 0x0u);
L_006350e6:; BB(0x006350e6);
    /* 006350e6: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
L_006350ed:; BB(0x006350ed);
    /* 006350ed: mov byte ptr [ebp - 0x5d], 1 */ W8((u32)(r_ebp+0xffffffa3u), 0x1u);
    /* 006350f1: jmp 0x6350f8 */ goto L_006350f8;
L_006350f3:; BB(0x006350f3);
    /* 006350f3: jmp 0x634e0e */ goto L_00634e0e;
L_006350f8:; BB(0x006350f8);
    /* 006350f8: jmp 0x634cd7 */ goto L_00634cd7;
L_006350fd:; BB(0x006350fd);
    /* 006350fd: movzx ecx, byte ptr [ebp - 0x5d] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffa3u));
    /* 00635101: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00635103: je 0x635110 */ if (fZ) goto L_00635110;
L_00635105:; BB(0x00635105);
    /* 00635105: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 0063510b: call 0x634b90 */ r_esp -= 4; W32(r_esp, 0x635110u); f_00634b90();
L_00635110:; BB(0x00635110);
    /* 00635110: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00635113: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063511a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063511b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063511e: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00635120: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x635125u); f_00686d72();
    /* 00635125: mov esp, ebp */ r_esp = r_ebp;
    /* 00635127: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00635128: ret  */ FN_RET(0x00634c70); r_esp += 4; return;
}

void f_00635190(void) /* Shell::vfunc19 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00635190);
    /* 00635190: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00635191: mov ebp, esp */ r_ebp = r_esp;
    /* 00635193: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00635196: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00635199: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0063519c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0063519f: cmp dword ptr [ebp - 8], 0x186d7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x186d7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006351a6: je 0x6351ad */ if (fZ) goto L_006351ad;
L_006351a8:; BB(0x006351a8);
    /* 006351a8: jmp 0x635239 */ goto L_00635239;
L_006351ad:; BB(0x006351ad);
    /* 006351ad: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006351b0: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x6351b5u); f_005f3bf0();
    /* 006351b5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006351b6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006351b9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006351bb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006351be: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 006351c4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6351c6u); call_ind(t); }
    /* 006351c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006351c8: je 0x63520d */ if (fZ) goto L_0063520d;
L_006351ca:; BB(0x006351ca);
    /* 006351ca: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006351cd: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x6351d2u); f_005f3bf0();
    /* 006351d2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006351d3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006351d6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006351d8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006351db: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 006351e1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6351e3u); call_ind(t); }
    /* 006351e3: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 006351e6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006351e9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006351eb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006351ee: mov eax, dword ptr [edx + 0x68] */ r_eax = R32((u32)(r_edx+0x68u));
    /* 006351f1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6351f3u); call_ind(t); }
    /* 006351f3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006351f5: je 0x63520d */ if (fZ) goto L_0063520d;
L_006351f7:; BB(0x006351f7);
    /* 006351f7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006351f9: push 0x186da */ { u32 v = 0x186dau; r_esp -= 4; W32(r_esp, v); }
    /* 006351fe: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00635200: push 0x186dc */ { u32 v = 0x186dcu; r_esp -= 4; W32(r_esp, v); }
    /* 00635205: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00635208: call 0x5fe240 */ r_esp -= 4; W32(r_esp, 0x63520du); f_005fe240();
L_0063520d:; BB(0x0063520d);
    /* 0063520d: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00635213: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00635215: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0063521b: mov eax, dword ptr [edx + 0x208] */ r_eax = R32((u32)(r_edx+0x208u));
    /* 00635221: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x635223u); call_ind(t); }
    /* 00635223: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00635226: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00635228: jne 0x635239 */ if (!fZ) goto L_00635239;
L_0063522a:; BB(0x0063522a);
    /* 0063522a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063522c: push 0x186db */ { u32 v = 0x186dbu; r_esp -= 4; W32(r_esp, v); }
    /* 00635231: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00635234: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x635239u); f_005fe640();
L_00635239:; BB(0x00635239);
    /* 00635239: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0063523b: mov esp, ebp */ r_esp = r_ebp;
    /* 0063523d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063523e: ret 8 */ FN_RET(0x00635190); r_esp += 12; return;
}

void f_00635270(void) /* Shell::vfunc199 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00635270);
    /* 00635270: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00635271: mov ebp, esp */ r_ebp = r_esp;
    /* 00635273: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00635275: push 0x6aba13 */ { u32 v = 0x6aba13u; r_esp -= 4; W32(r_esp, v); }
    /* 0063527a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00635280: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00635281: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00635284: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00635289: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063528b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063528c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0063528f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00635295: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00635298: push 0x3ac */ { u32 v = 0x3acu; r_esp -= 4; W32(r_esp, v); }
    /* 0063529d: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x6352a2u); f_00686d82();
    /* 006352a2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006352a5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006352a8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006352af: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006352b3: je 0x6352c2 */ if (fZ) goto L_006352c2;
L_006352b5:; BB(0x006352b5);
    /* 006352b5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006352b8: call 0x63a0c0 */ r_esp -= 4; W32(r_esp, 0x6352bdu); f_0063a0c0();
    /* 006352bd: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 006352c0: jmp 0x6352c9 */ goto L_006352c9;
L_006352c2:; BB(0x006352c2);
    /* 006352c2: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_006352c9:; BB(0x006352c9);
    /* 006352c9: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006352cc: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 006352cf: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006352d6: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 006352d9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006352dc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006352e3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006352e4: mov esp, ebp */ r_esp = r_ebp;
    /* 006352e6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006352e7: ret  */ FN_RET(0x00635270); r_esp += 4; return;
}

void f_00635330(void) /* Shell::vfunc205 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00635330);
    /* 00635330: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00635331: mov ebp, esp */ r_ebp = r_esp;
    /* 00635333: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00635336: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 00635339: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 0063533e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00635340: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00635346: mov eax, dword ptr [edx + 0x168] */ r_eax = R32((u32)(r_edx+0x168u));
    /* 0063534c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63534eu); call_ind(t); }
    /* 0063534e: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00635351: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00635353: jne 0x63535c */ if (!fZ) goto L_0063535c;
L_00635355:; BB(0x00635355);
    /* 00635355: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00635357: jmp 0x6355aa */ goto L_006355aa;
L_0063535c:; BB(0x0063535c);
    /* 0063535c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0063535f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00635360: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00635363: call 0x6352f0 */ r_esp -= 4; W32(r_esp, 0x635368u); f_006352f0();
    /* 00635368: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063536a: je 0x6353db */ if (fZ) goto L_006353db;
L_0063536c:; BB(0x0063536c);
    /* 0063536c: movzx eax, byte ptr [0x795f95] */ r_eax = (u32)R8((u32)(0x795f95u));
    /* 00635373: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00635375: je 0x6353db */ if (fZ) goto L_006353db;
L_00635377:; BB(0x00635377);
    /* 00635377: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0063537a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063537b: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0063537e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00635380: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00635383: mov edx, dword ptr [eax + 0xe0] */ r_edx = R32((u32)(r_eax+0xe0u));
    /* 00635389: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x63538bu); call_ind(t); }
    /* 0063538b: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0063538e: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00635391: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00635393: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00635396: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00635399: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63539bu); call_ind(t); }
    /* 0063539b: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0063539e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006353a0: jne 0x6353db */ if (!fZ) goto L_006353db;
L_006353a2:; BB(0x006353a2);
    /* 006353a2: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006353a5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006353a6: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 006353a9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006353ab: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 006353ae: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 006353b4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6353b6u); call_ind(t); }
    /* 006353b6: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 006353b9: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 006353bc: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006353be: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 006353c1: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 006353c4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6353c6u); call_ind(t); }
    /* 006353c6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006353c7: push 0x6da5dc */ { u32 v = 0x6da5dcu; r_esp -= 4; W32(r_esp, v); }
    /* 006353cc: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 006353cf: call 0x635cd0 */ r_esp -= 4; W32(r_esp, 0x6353d4u); f_00635cd0();
    /* 006353d4: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006353d6: jmp 0x6355aa */ goto L_006355aa;
L_006353db:; BB(0x006353db);
    /* 006353db: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006353de: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006353df: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 006353e2: call 0x6352f0 */ r_esp -= 4; W32(r_esp, 0x6353e7u); f_006352f0();
    /* 006353e7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006353e9: je 0x635550 */ if (fZ) goto L_00635550;
L_006353ef:; BB(0x006353ef);
    /* 006353ef: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006353f2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006353f3: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 006353f6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006353f8: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 006353fb: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 00635401: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x635403u); call_ind(t); }
    /* 00635403: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00635406: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00635409: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063540a: lea edx, [ebp - 0x1c] */ r_edx = (u32)(r_ebp+0xffffffe4u);
    /* 0063540d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063540e: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00635411: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00635413: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00635416: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 00635419: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63541bu); call_ind(t); }
    /* 0063541b: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0063541e: call 0x636690 */ r_esp -= 4; W32(r_esp, 0x635423u); f_00636690();
    /* 00635423: cmp eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00635426: jge 0x635478 */ if ((fS==fO)) goto L_00635478;
L_00635428:; BB(0x00635428);
    /* 00635428: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063542a: push 0x6da5bc */ { u32 v = 0x6da5bcu; r_esp -= 4; W32(r_esp, v); }
    /* 0063542f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x635434u); f_00630f40();
    /* 00635434: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00635437: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00635438: push 0x6da59c */ { u32 v = 0x6da59cu; r_esp -= 4; W32(r_esp, v); }
    /* 0063543d: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x635442u); f_00630f40();
    /* 00635442: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00635445: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00635446: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x63544bu); f_0062ff10();
    /* 0063544b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063544e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00635450: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00635453: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00635454: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00635457: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00635458: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063545a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063545c: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 00635461: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00635463: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00635469: mov eax, dword ptr [edx + 0x16c] */ r_eax = R32((u32)(r_edx+0x16cu));
    /* 0063546f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x635471u); call_ind(t); }
    /* 00635471: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00635473: jmp 0x6355aa */ goto L_006355aa;
L_00635478:; BB(0x00635478);
    /* 00635478: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0063547b: call 0x636690 */ r_esp -= 4; W32(r_esp, 0x635480u); f_00636690();
    /* 00635480: cmp eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00635483: jle 0x635550 */ if ((fZ||fS!=fO)) goto L_00635550;
L_00635489:; BB(0x00635489);
    /* 00635489: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00635490: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 00635497: jmp 0x6354a2 */ goto L_006354a2;
L_00635499:; BB(0x00635499);
    /* 00635499: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063549c: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0063549f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
L_006354a2:; BB(0x006354a2);
    /* 006354a2: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 006354a5: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006354a7: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 006354aa: mov edx, dword ptr [eax + 0x10c] */ r_edx = R32((u32)(r_eax+0x10cu));
    /* 006354b0: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6354b2u); call_ind(t); }
    /* 006354b2: cmp dword ptr [ebp - 0x20], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006354b5: jge 0x635517 */ if ((fS==fO)) goto L_00635517;
L_006354b7:; BB(0x006354b7);
    /* 006354b7: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006354ba: cmp eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006354bd: jge 0x635517 */ if ((fS==fO)) goto L_00635517;
L_006354bf:; BB(0x006354bf);
    /* 006354bf: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 006354c2: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 006354c5: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006354c8: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 006354cb: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 006354ce: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006354d1: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x6354d6u); f_0063aac0();
    /* 006354d6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006354d8: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 006354db: cmp dword ptr [ebp - 0x28], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006354df: je 0x6354fd */ if (fZ) goto L_006354fd;
L_006354e1:; BB(0x006354e1);
    /* 006354e1: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006354e4: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x6354e9u); f_0063aac0();
    /* 006354e9: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 006354eb: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 006354ee: cmp dword ptr [ebp - 0x2c], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006354f2: je 0x6354fd */ if (fZ) goto L_006354fd;
L_006354f4:; BB(0x006354f4);
    /* 006354f4: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 006354fb: jmp 0x635504 */ goto L_00635504;
L_006354fd:; BB(0x006354fd);
    /* 006354fd: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
L_00635504:; BB(0x00635504);
    /* 00635504: movzx ecx, byte ptr [ebp - 0x44] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffbcu));
    /* 00635508: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063550a: je 0x635515 */ if (fZ) goto L_00635515;
L_0063550c:; BB(0x0063550c);
    /* 0063550c: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0063550f: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00635512: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
L_00635515:; BB(0x00635515);
    /* 00635515: jmp 0x635499 */ goto L_00635499;
L_00635517:; BB(0x00635517);
    /* 00635517: jmp 0x635522 */ goto L_00635522;
L_00635519:; BB(0x00635519);
    /* 00635519: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063551c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063551f: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_00635522:; BB(0x00635522);
    /* 00635522: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00635525: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00635527: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0063552a: mov eax, dword ptr [edx + 0x10c] */ r_eax = R32((u32)(r_edx+0x10cu));
    /* 00635530: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x635532u); call_ind(t); }
    /* 00635532: cmp dword ptr [ebp - 0x20], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00635535: jge 0x635550 */ if ((fS==fO)) goto L_00635550;
L_00635537:; BB(0x00635537);
    /* 00635537: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00635539: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063553c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063553d: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00635540: mov eax, dword ptr [edx + 0x58] */ r_eax = R32((u32)(r_edx+0x58u));
    /* 00635543: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00635546: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 00635549: call 0x63a3e0 */ r_esp -= 4; W32(r_esp, 0x63554eu); f_0063a3e0();
    /* 0063554e: jmp 0x635519 */ goto L_00635519;
L_00635550:; BB(0x00635550);
    /* 00635550: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00635553: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00635554: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00635557: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00635559: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0063555c: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 00635562: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x635564u); call_ind(t); }
    /* 00635564: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00635566: je 0x635597 */ if (fZ) goto L_00635597;
L_00635568:; BB(0x00635568);
    /* 00635568: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0063556b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063556c: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0063556f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00635571: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00635574: mov edx, dword ptr [eax + 0xe0] */ r_edx = R32((u32)(r_eax+0xe0u));
    /* 0063557a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x63557cu); call_ind(t); }
    /* 0063557c: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0063557f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00635582: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00635583: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00635586: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00635587: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0063558a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0063558c: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0063558f: mov edx, dword ptr [eax + 0x84] */ r_edx = R32((u32)(r_eax+0x84u));
    /* 00635595: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x635597u); call_ind(t); }
L_00635597:; BB(0x00635597);
    /* 00635597: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0063559a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063559b: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0063559e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006355a0: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 006355a3: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 006355a6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6355a8u); call_ind(t); }
    /* 006355a8: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_006355aa:; BB(0x006355aa);
    /* 006355aa: mov esp, ebp */ r_esp = r_ebp;
    /* 006355ac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006355ad: ret 8 */ FN_RET(0x00635330); r_esp += 12; return;
}

void f_00635a40(void) /* shell::func_00635a40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00635a40);
    /* 00635a40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00635a41: mov ebp, esp */ r_ebp = r_esp;
    /* 00635a43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00635a44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00635a47: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00635a4a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00635a4b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00635a4e: call 0x6352f0 */ r_esp -= 4; W32(r_esp, 0x635a53u); f_006352f0();
    /* 00635a53: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00635a55: jne 0x635a59 */ if (!fZ) goto L_00635a59;
L_00635a57:; BB(0x00635a57);
    /* 00635a57: jmp 0x635ac7 */ goto L_00635ac7;
L_00635a59:; BB(0x00635a59);
    /* 00635a59: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00635a5d: je 0x635a7a */ if (fZ) goto L_00635a7a;
L_00635a5f:; BB(0x00635a5f);
    /* 00635a5f: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00635a63: jl 0x635a7a */ if ((fS!=fO)) goto L_00635a7a;
L_00635a65:; BB(0x00635a65);
    /* 00635a65: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00635a68: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00635a6a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00635a6d: mov eax, dword ptr [edx + 0xec] */ r_eax = R32((u32)(r_edx+0xecu));
    /* 00635a73: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x635a75u); call_ind(t); }
    /* 00635a75: cmp dword ptr [ebp + 8], eax */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00635a78: jl 0x635a97 */ if ((fS!=fO)) goto L_00635a97;
L_00635a7a:; BB(0x00635a7a);
    /* 00635a7a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00635a7c: jne 0x635a95 */ if (!fZ) goto L_00635a95;
L_00635a7e:; BB(0x00635a7e);
    /* 00635a7e: push 0x6fe */ { u32 v = 0x6feu; r_esp -= 4; W32(r_esp, v); }
    /* 00635a83: push 0x6d9e90 */ { u32 v = 0x6d9e90u; r_esp -= 4; W32(r_esp, v); }
    /* 00635a88: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00635a8d: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x635a92u); f_005e9f20();
    /* 00635a92: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00635a95:; BB(0x00635a95);
    /* 00635a95: jmp 0x635ac7 */ goto L_00635ac7;
L_00635a97:; BB(0x00635a97);
    /* 00635a97: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00635a9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00635a9b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00635a9e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00635a9f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00635aa2: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00635aa4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00635aa7: mov edx, dword ptr [eax + 0x328] */ r_edx = R32((u32)(r_eax+0x328u));
    /* 00635aad: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x635aafu); call_ind(t); }
    /* 00635aaf: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00635ab2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00635ab3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00635ab6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00635ab7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00635aba: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00635abc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00635abf: mov edx, dword ptr [eax + 0x32c] */ r_edx = R32((u32)(r_eax+0x32cu));
    /* 00635ac5: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x635ac7u); call_ind(t); }
L_00635ac7:; BB(0x00635ac7);
    /* 00635ac7: mov esp, ebp */ r_esp = r_ebp;
    /* 00635ac9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00635aca: ret 8 */ FN_RET(0x00635a40); r_esp += 12; return;
}

void f_00635c40(void) /* Shell::vfunc207 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00635c40);
    /* 00635c40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00635c41: mov ebp, esp */ r_ebp = r_esp;
    /* 00635c43: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00635c46: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00635c49: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00635c4d: jne 0x635c5a */ if (!fZ) goto L_00635c5a;
L_00635c4f:; BB(0x00635c4f);
    /* 00635c4f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00635c52: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x635c57u); f_005f3bf0();
    /* 00635c57: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
L_00635c5a:; BB(0x00635c5a);
    /* 00635c5a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00635c5d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00635c5f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00635c62: mov eax, dword ptr [edx + 0x258] */ r_eax = R32((u32)(r_edx+0x258u));
    /* 00635c68: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x635c6au); call_ind(t); }
    /* 00635c6a: cmp dword ptr [ebp + 8], eax */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00635c6d: jne 0x635c73 */ if (!fZ) goto L_00635c73;
L_00635c6f:; BB(0x00635c6f);
    /* 00635c6f: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00635c71: jmp 0x635ca7 */ goto L_00635ca7;
L_00635c73:; BB(0x00635c73);
    /* 00635c73: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00635c77: jl 0x635c9d */ if ((fS!=fO)) goto L_00635c9d;
L_00635c79:; BB(0x00635c79);
    /* 00635c79: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00635c7f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00635c81: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00635c87: mov eax, dword ptr [edx + 0xec] */ r_eax = R32((u32)(r_edx+0xecu));
    /* 00635c8d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x635c8fu); call_ind(t); }
    /* 00635c8f: cmp dword ptr [ebp + 8], eax */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00635c92: jge 0x635c9d */ if ((fS==fO)) goto L_00635c9d;
L_00635c94:; BB(0x00635c94);
    /* 00635c94: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 00635c9b: jmp 0x635ca4 */ goto L_00635ca4;
L_00635c9d:; BB(0x00635c9d);
    /* 00635c9d: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_00635ca4:; BB(0x00635ca4);
    /* 00635ca4: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
L_00635ca7:; BB(0x00635ca7);
    /* 00635ca7: mov esp, ebp */ r_esp = r_ebp;
    /* 00635ca9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00635caa: ret 4 */ FN_RET(0x00635c40); r_esp += 8; return;
}

void f_00635cd0(void) /* shell::func_00635cd0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00635cd0);
    /* 00635cd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00635cd1: mov ebp, esp */ r_ebp = r_esp;
    /* 00635cd3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00635cd4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00635cd7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00635cd9: jne 0x635cf2 */ if (!fZ) goto L_00635cf2;
L_00635cdb:; BB(0x00635cdb);
    /* 00635cdb: push 0x743 */ { u32 v = 0x743u; r_esp -= 4; W32(r_esp, v); }
    /* 00635ce0: push 0x6d9e90 */ { u32 v = 0x6d9e90u; r_esp -= 4; W32(r_esp, v); }
    /* 00635ce5: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00635cea: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x635cefu); f_005e9f20();
    /* 00635cef: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00635cf2:; BB(0x00635cf2);
    /* 00635cf2: mov esp, ebp */ r_esp = r_ebp;
    /* 00635cf4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00635cf5: ret 8 */ FN_RET(0x00635cd0); r_esp += 12; return;
}

void f_00635f30(void) /* shell::func_00635f30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00635f30);
    /* 00635f30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00635f31: mov ebp, esp */ r_ebp = r_esp;
    /* 00635f33: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00635f35: push 0x6aba39 */ { u32 v = 0x6aba39u; r_esp -= 4; W32(r_esp, v); }
    /* 00635f3a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00635f40: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00635f41: sub esp, 0x3c8 */ {  u32 a = r_esp; u32 b = 0x3c8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00635f47: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00635f4c: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00635f4e: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00635f51: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00635f52: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00635f55: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00635f5b: mov dword ptr [ebp - 0x3d4], ecx */ W32((u32)(r_ebp+0xfffffc2cu), r_ecx);
    /* 00635f61: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00635f65: je 0x635f6d */ if (fZ) goto L_00635f6d;
L_00635f67:; BB(0x00635f67);
    /* 00635f67: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00635f6b: jne 0x635f8f */ if (!fZ) goto L_00635f8f;
L_00635f6d:; BB(0x00635f6d);
    /* 00635f6d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00635f6f: jne 0x635f88 */ if (!fZ) goto L_00635f88;
L_00635f71:; BB(0x00635f71);
    /* 00635f71: push 0x77b */ { u32 v = 0x77bu; r_esp -= 4; W32(r_esp, v); }
    /* 00635f76: push 0x6d9e90 */ { u32 v = 0x6d9e90u; r_esp -= 4; W32(r_esp, v); }
    /* 00635f7b: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00635f80: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x635f85u); f_005e9f20();
    /* 00635f85: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00635f88:; BB(0x00635f88);
    /* 00635f88: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00635f8a: jmp 0x63606e */ goto L_0063606e;
L_00635f8f:; BB(0x00635f8f);
    /* 00635f8f: lea ecx, [ebp - 0x3c4] */ r_ecx = (u32)(r_ebp+0xfffffc3cu);
    /* 00635f95: call 0x63a0c0 */ r_esp -= 4; W32(r_esp, 0x635f9au); f_0063a0c0();
    /* 00635f9a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00635fa1: mov dword ptr [ebp - 0x3c8], 0 */ W32((u32)(r_ebp+0xfffffc38u), 0x0u);
    /* 00635fab: jmp 0x635fbc */ goto L_00635fbc;
L_00635fad:; BB(0x00635fad);
    /* 00635fad: mov edx, dword ptr [ebp - 0x3c8] */ r_edx = R32((u32)(r_ebp+0xfffffc38u));
    /* 00635fb3: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00635fb6: mov dword ptr [ebp - 0x3c8], edx */ W32((u32)(r_ebp+0xfffffc38u), r_edx);
L_00635fbc:; BB(0x00635fbc);
    /* 00635fbc: cmp dword ptr [ebp - 0x3c8], 0x64 */ {  u32 a = R32((u32)(r_ebp+0xfffffc38u)); u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00635fc3: jge 0x636049 */ if ((fS==fO)) goto L_00636049;
L_00635fc9:; BB(0x00635fc9);
    /* 00635fc9: mov eax, dword ptr [ebp - 0x3c8] */ r_eax = R32((u32)(r_ebp+0xfffffc38u));
    /* 00635fcf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00635fd0: push 0x6d44ec */ { u32 v = 0x6d44ecu; r_esp -= 4; W32(r_esp, v); }
    /* 00635fd5: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00635fd8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00635fd9: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x635fdfu); call_ind(t); }
    /* 00635fdf: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00635fe2: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00635fe5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00635fe6: lea ecx, [ebp - 0x3c4] */ r_ecx = (u32)(r_ebp+0xfffffc3cu);
    /* 00635fec: call 0x63ab10 */ r_esp -= 4; W32(r_esp, 0x635ff1u); f_0063ab10();
    /* 00635ff1: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00635ff4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00635ff6: je 0x636044 */ if (fZ) goto L_00636044;
L_00635ff8:; BB(0x00635ff8);
    /* 00635ff8: lea ecx, [ebp - 0x3c4] */ r_ecx = (u32)(r_ebp+0xfffffc3cu);
    /* 00635ffe: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x636003u); f_0063aac0();
    /* 00636003: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00636006: mov dword ptr [ebp - 0x3d0], eax */ W32((u32)(r_ebp+0xfffffc30u), r_eax);
    /* 0063600c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0063600f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00636010: mov edx, dword ptr [ebp - 0x3d0] */ r_edx = R32((u32)(r_ebp+0xfffffc30u));
    /* 00636016: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00636017: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x63601cu); f_00686ec0();
    /* 0063601c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063601f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00636021: jne 0x636044 */ if (!fZ) goto L_00636044;
L_00636023:; BB(0x00636023);
    /* 00636023: mov byte ptr [ebp - 0x3c9], 1 */ W8((u32)(r_ebp+0xfffffc37u), 0x1u);
    /* 0063602a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00636031: lea ecx, [ebp - 0x3c4] */ r_ecx = (u32)(r_ebp+0xfffffc3cu);
    /* 00636037: call 0x63a120 */ r_esp -= 4; W32(r_esp, 0x63603cu); f_0063a120();
    /* 0063603c: mov al, byte ptr [ebp - 0x3c9] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffc37u))) & 0xffu);
    /* 00636042: jmp 0x63606e */ goto L_0063606e;
L_00636044:; BB(0x00636044);
    /* 00636044: jmp 0x635fad */ goto L_00635fad;
L_00636049:; BB(0x00636049);
    /* 00636049: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0063604c: mov byte ptr [eax], 0 */ W8((u32)(r_eax), 0x0u);
    /* 0063604f: mov byte ptr [ebp - 0x3ca], 0 */ W8((u32)(r_ebp+0xfffffc36u), 0x0u);
    /* 00636056: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0063605d: lea ecx, [ebp - 0x3c4] */ r_ecx = (u32)(r_ebp+0xfffffc3cu);
    /* 00636063: call 0x63a120 */ r_esp -= 4; W32(r_esp, 0x636068u); f_0063a120();
    /* 00636068: mov al, byte ptr [ebp - 0x3ca] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffc36u))) & 0xffu);
L_0063606e:; BB(0x0063606e);
    /* 0063606e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00636071: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00636078: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00636079: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063607c: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0063607e: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x636083u); f_00686d72();
    /* 00636083: mov esp, ebp */ r_esp = r_ebp;
    /* 00636085: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00636086: ret 8 */ FN_RET(0x00635f30); r_esp += 12; return;
}

void f_00636090(void) /* shell::func_00636090 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00636090);
    /* 00636090: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00636091: mov ebp, esp */ r_ebp = r_esp;
    /* 00636093: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00636095: push 0x6aba6c */ { u32 v = 0x6aba6cu; r_esp -= 4; W32(r_esp, v); }
    /* 0063609a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006360a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006360a1: sub esp, 0x3e8 */ {  u32 a = r_esp; u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006360a7: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 006360ac: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006360ae: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 006360b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006360b2: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 006360b5: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 006360bb: mov dword ptr [ebp - 0x3f4], ecx */ W32((u32)(r_ebp+0xfffffc0cu), r_ecx);
    /* 006360c1: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006360c5: jne 0x6360ea */ if (!fZ) goto L_006360ea;
L_006360c7:; BB(0x006360c7);
    /* 006360c7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 006360c9: jne 0x6360e2 */ if (!fZ) goto L_006360e2;
L_006360cb:; BB(0x006360cb);
    /* 006360cb: push 0x792 */ { u32 v = 0x792u; r_esp -= 4; W32(r_esp, v); }
    /* 006360d0: push 0x6d9e90 */ { u32 v = 0x6d9e90u; r_esp -= 4; W32(r_esp, v); }
    /* 006360d5: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 006360da: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x6360dfu); f_005e9f20();
    /* 006360df: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006360e2:; BB(0x006360e2);
    /* 006360e2: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006360e5: jmp 0x6361d1 */ goto L_006361d1;
L_006360ea:; BB(0x006360ea);
    /* 006360ea: lea ecx, [ebp - 0x3c4] */ r_ecx = (u32)(r_ebp+0xfffffc3cu);
    /* 006360f0: call 0x63a0c0 */ r_esp -= 4; W32(r_esp, 0x6360f5u); f_0063a0c0();
    /* 006360f5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006360fc: mov dword ptr [ebp - 0x3c8], 0 */ W32((u32)(r_ebp+0xfffffc38u), 0x0u);
    /* 00636106: jmp 0x636117 */ goto L_00636117;
L_00636108:; BB(0x00636108);
    /* 00636108: mov edx, dword ptr [ebp - 0x3c8] */ r_edx = R32((u32)(r_ebp+0xfffffc38u));
    /* 0063610e: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00636111: mov dword ptr [ebp - 0x3c8], edx */ W32((u32)(r_ebp+0xfffffc38u), r_edx);
L_00636117:; BB(0x00636117);
    /* 00636117: cmp dword ptr [ebp - 0x3c8], 0x64 */ {  u32 a = R32((u32)(r_ebp+0xfffffc38u)); u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063611e: jge 0x6361af */ if ((fS==fO)) goto L_006361af;
L_00636124:; BB(0x00636124);
    /* 00636124: mov eax, dword ptr [ebp - 0x3c8] */ r_eax = R32((u32)(r_ebp+0xfffffc38u));
    /* 0063612a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063612b: push 0x6d44ec */ { u32 v = 0x6d44ecu; r_esp -= 4; W32(r_esp, v); }
    /* 00636130: lea ecx, [ebp - 0x3e4] */ r_ecx = (u32)(r_ebp+0xfffffc1cu);
    /* 00636136: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00636137: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x63613du); call_ind(t); }
    /* 0063613d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00636140: lea edx, [ebp - 0x3e4] */ r_edx = (u32)(r_ebp+0xfffffc1cu);
    /* 00636146: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00636147: lea ecx, [ebp - 0x3c4] */ r_ecx = (u32)(r_ebp+0xfffffc3cu);
    /* 0063614d: call 0x63ab10 */ r_esp -= 4; W32(r_esp, 0x636152u); f_0063ab10();
    /* 00636152: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00636155: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00636157: je 0x6361aa */ if (fZ) goto L_006361aa;
L_00636159:; BB(0x00636159);
    /* 00636159: lea ecx, [ebp - 0x3c4] */ r_ecx = (u32)(r_ebp+0xfffffc3cu);
    /* 0063615f: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x636164u); f_0063aac0();
    /* 00636164: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00636167: mov dword ptr [ebp - 0x3f0], eax */ W32((u32)(r_ebp+0xfffffc10u), r_eax);
    /* 0063616d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00636170: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00636171: mov edx, dword ptr [ebp - 0x3f0] */ r_edx = R32((u32)(r_ebp+0xfffffc10u));
    /* 00636177: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00636178: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x63617du); f_00686ec0();
    /* 0063617d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00636180: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00636182: jne 0x6361aa */ if (!fZ) goto L_006361aa;
L_00636184:; BB(0x00636184);
    /* 00636184: mov eax, dword ptr [ebp - 0x3c8] */ r_eax = R32((u32)(r_ebp+0xfffffc38u));
    /* 0063618a: mov dword ptr [ebp - 0x3e8], eax */ W32((u32)(r_ebp+0xfffffc18u), r_eax);
    /* 00636190: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00636197: lea ecx, [ebp - 0x3c4] */ r_ecx = (u32)(r_ebp+0xfffffc3cu);
    /* 0063619d: call 0x63a120 */ r_esp -= 4; W32(r_esp, 0x6361a2u); f_0063a120();
    /* 006361a2: mov eax, dword ptr [ebp - 0x3e8] */ r_eax = R32((u32)(r_ebp+0xfffffc18u));
    /* 006361a8: jmp 0x6361d1 */ goto L_006361d1;
L_006361aa:; BB(0x006361aa);
    /* 006361aa: jmp 0x636108 */ goto L_00636108;
L_006361af:; BB(0x006361af);
    /* 006361af: mov dword ptr [ebp - 0x3ec], 0xffffffff */ W32((u32)(r_ebp+0xfffffc14u), 0xffffffffu);
    /* 006361b9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006361c0: lea ecx, [ebp - 0x3c4] */ r_ecx = (u32)(r_ebp+0xfffffc3cu);
    /* 006361c6: call 0x63a120 */ r_esp -= 4; W32(r_esp, 0x6361cbu); f_0063a120();
    /* 006361cb: mov eax, dword ptr [ebp - 0x3ec] */ r_eax = R32((u32)(r_ebp+0xfffffc14u));
L_006361d1:; BB(0x006361d1);
    /* 006361d1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006361d4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006361db: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006361dc: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006361df: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006361e1: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x6361e6u); f_00686d72();
    /* 006361e6: mov esp, ebp */ r_esp = r_ebp;
    /* 006361e8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006361e9: ret 4 */ FN_RET(0x00636090); r_esp += 8; return;
}

void f_00636250(void) /* Shell::vfunc214 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00636250);
    /* 00636250: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00636251: mov ebp, esp */ r_ebp = r_esp;
    /* 00636253: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00636256: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00636259: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00636260: jmp 0x63626b */ goto L_0063626b;
L_00636262:; BB(0x00636262);
    /* 00636262: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00636265: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00636268: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0063626b:; BB(0x0063626b);
    /* 0063626b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00636271: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00636273: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00636279: mov eax, dword ptr [edx + 0x10c] */ r_eax = R32((u32)(r_edx+0x10cu));
    /* 0063627f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x636281u); call_ind(t); }
    /* 00636281: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00636284: jge 0x6362b1 */ if ((fS==fO)) goto L_006362b1;
L_00636286:; BB(0x00636286);
    /* 00636286: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00636289: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 0063628c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063628f: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 00636292: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00636295: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00636298: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063629c: je 0x6362af */ if (fZ) goto L_006362af;
L_0063629e:; BB(0x0063629e);
    /* 0063629e: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006362a1: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 006362a4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006362a7: mov ecx, dword ptr [ecx + edx*4] */ r_ecx = R32((u32)(r_ecx+r_edx*4));
    /* 006362aa: call 0x63b2d0 */ r_esp -= 4; W32(r_esp, 0x6362afu); f_0063b2d0();
L_006362af:; BB(0x006362af);
    /* 006362af: jmp 0x636262 */ goto L_00636262;
L_006362b1:; BB(0x006362b1);
    /* 006362b1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006362b8: jmp 0x6362c3 */ goto L_006362c3;
L_006362ba:; BB(0x006362ba);
    /* 006362ba: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006362bd: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006362c0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_006362c3:; BB(0x006362c3);
    /* 006362c3: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006362c9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006362cb: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006362d1: mov eax, dword ptr [edx + 0x10c] */ r_eax = R32((u32)(r_edx+0x10cu));
    /* 006362d7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6362d9u); call_ind(t); }
    /* 006362d9: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006362dc: jge 0x636329 */ if ((fS==fO)) goto L_00636329;
L_006362de:; BB(0x006362de);
    /* 006362de: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006362e1: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 006362e4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006362e7: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 006362ea: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 006362ed: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006362f0: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x6362f5u); f_0063aac0();
    /* 006362f5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006362f7: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 006362fa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006362fc: cmp dword ptr [ebp - 0xc], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00636300: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00636303: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00636306: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00636308: je 0x636327 */ if (fZ) goto L_00636327;
L_0063630a:; BB(0x0063630a);
    /* 0063630a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0063630d: mov eax, dword ptr [edx + 0x58] */ r_eax = R32((u32)(r_edx+0x58u));
    /* 00636310: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00636313: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 00636316: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00636319: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063631c: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x636321u); f_0063aac0();
    /* 00636321: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
L_00636327:; BB(0x00636327);
    /* 00636327: jmp 0x6362ba */ goto L_006362ba;
L_00636329:; BB(0x00636329);
    /* 00636329: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0063632c: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 0063632f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00636330: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00636336: call 0x64d5e0 */ r_esp -= 4; W32(r_esp, 0x63633bu); f_0064d5e0();
    /* 0063633b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00636342: jmp 0x63634d */ goto L_0063634d;
L_00636344:; BB(0x00636344);
    /* 00636344: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00636347: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0063634a: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0063634d:; BB(0x0063634d);
    /* 0063634d: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00636352: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00636354: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063635a: mov eax, dword ptr [edx + 0x10c] */ r_eax = R32((u32)(r_edx+0x10cu));
    /* 00636360: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x636362u); call_ind(t); }
    /* 00636362: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00636365: jge 0x6363d0 */ if ((fS==fO)) goto L_006363d0;
L_00636367:; BB(0x00636367);
    /* 00636367: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0063636a: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 0063636d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00636370: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 00636373: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00636376: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00636379: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x63637eu); f_0063aac0();
    /* 0063637e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00636380: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00636383: cmp dword ptr [ebp - 0x18], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00636387: je 0x6363a5 */ if (fZ) goto L_006363a5;
L_00636389:; BB(0x00636389);
    /* 00636389: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063638c: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x636391u); f_0063aac0();
    /* 00636391: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00636393: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00636396: cmp dword ptr [ebp - 0x1c], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063639a: je 0x6363a5 */ if (fZ) goto L_006363a5;
L_0063639c:; BB(0x0063639c);
    /* 0063639c: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 006363a3: jmp 0x6363ac */ goto L_006363ac;
L_006363a5:; BB(0x006363a5);
    /* 006363a5: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
L_006363ac:; BB(0x006363ac);
    /* 006363ac: movzx ecx, byte ptr [ebp - 0x28] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffd8u));
    /* 006363b0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006363b2: jne 0x6363cb */ if (!fZ) goto L_006363cb;
L_006363b4:; BB(0x006363b4);
    /* 006363b4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006363b6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006363b9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006363ba: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006363bd: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 006363c0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006363c3: mov ecx, dword ptr [ecx + edx*4] */ r_ecx = R32((u32)(r_ecx+r_edx*4));
    /* 006363c6: call 0x63a3e0 */ r_esp -= 4; W32(r_esp, 0x6363cbu); f_0063a3e0();
L_006363cb:; BB(0x006363cb);
    /* 006363cb: jmp 0x636344 */ goto L_00636344;
L_006363d0:; BB(0x006363d0);
    /* 006363d0: mov esp, ebp */ r_esp = r_ebp;
    /* 006363d2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006363d3: ret  */ FN_RET(0x00636250); r_esp += 4; return;
}

void f_006363e0(void) /* Shell::vfunc215 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006363e0);
    /* 006363e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006363e1: mov ebp, esp */ r_ebp = r_esp;
    /* 006363e3: sub esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006363e6: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 006363e9: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006363f0: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006363f2: lea eax, [ebp - 0x20] */ r_eax = (u32)(r_ebp+0xffffffe0u);
    /* 006363f5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006363f6: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 006363f9: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x6363feu); f_005f3bf0();
    /* 006363fe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006363ff: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00636402: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00636404: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00636407: mov eax, dword ptr [edx + 0x364] */ r_eax = R32((u32)(r_edx+0x364u));
    /* 0063640d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63640fu); call_ind(t); }
    /* 0063640f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00636416: jmp 0x636421 */ goto L_00636421;
L_00636418:; BB(0x00636418);
    /* 00636418: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063641b: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0063641e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00636421:; BB(0x00636421);
    /* 00636421: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00636427: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00636429: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063642f: mov edx, dword ptr [eax + 0x10c] */ r_edx = R32((u32)(r_eax+0x10cu));
    /* 00636435: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x636437u); call_ind(t); }
    /* 00636437: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063643a: jge 0x6364f7 */ if ((fS==fO)) goto L_006364f7;
L_00636440:; BB(0x00636440);
    /* 00636440: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00636443: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 00636446: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00636449: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 0063644c: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0063644f: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00636452: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x636457u); f_0063aac0();
    /* 00636457: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00636459: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0063645c: cmp dword ptr [ebp - 0x28], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00636460: je 0x63647e */ if (fZ) goto L_0063647e;
L_00636462:; BB(0x00636462);
    /* 00636462: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00636465: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x63646au); f_0063aac0();
    /* 0063646a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0063646c: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 0063646f: cmp dword ptr [ebp - 0x2c], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00636473: je 0x63647e */ if (fZ) goto L_0063647e;
L_00636475:; BB(0x00636475);
    /* 00636475: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 0063647c: jmp 0x636485 */ goto L_00636485;
L_0063647e:; BB(0x0063647e);
    /* 0063647e: mov dword ptr [ebp - 0x4c], 1 */ W32((u32)(r_ebp+0xffffffb4u), 0x1u);
L_00636485:; BB(0x00636485);
    /* 00636485: movzx eax, byte ptr [ebp - 0x4c] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffb4u));
    /* 00636489: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063648b: je 0x6364f2 */ if (fZ) goto L_006364f2;
L_0063648d:; BB(0x0063648d);
    /* 0063648d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00636490: cmp ecx, dword ptr [ebp - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00636493: jne 0x6364ce */ if (!fZ) goto L_006364ce;
L_00636495:; BB(0x00636495);
    /* 00636495: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00636497: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063649a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063649b: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0063649e: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 006364a1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006364a4: mov ecx, dword ptr [ecx + edx*4] */ r_ecx = R32((u32)(r_ecx+r_edx*4));
    /* 006364a7: call 0x63a3e0 */ r_esp -= 4; W32(r_esp, 0x6364acu); f_0063a3e0();
    /* 006364ac: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 006364af: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 006364b2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006364b5: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 006364b8: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 006364bb: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 006364be: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x6364c3u); f_0063aac0();
    /* 006364c3: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 006364c9: jmp 0x636418 */ goto L_00636418;
L_006364ce:; BB(0x006364ce);
    /* 006364ce: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006364d0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006364d2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006364d4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006364d6: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006364d8: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 006364db: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 006364de: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006364e1: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 006364e4: call 0x63a8d0 */ r_esp -= 4; W32(r_esp, 0x6364e9u); f_0063a8d0();
    /* 006364e9: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006364ec: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006364ef: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
L_006364f2:; BB(0x006364f2);
    /* 006364f2: jmp 0x636418 */ goto L_00636418;
L_006364f7:; BB(0x006364f7);
    /* 006364f7: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006364fa: cmp edx, dword ptr [ebp - 0x20] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006364fd: jge 0x636505 */ if ((fS==fO)) goto L_00636505;
L_006364ff:; BB(0x006364ff);
    /* 006364ff: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00636503: jne 0x63650d */ if (!fZ) goto L_0063650d;
L_00636505:; BB(0x00636505);
    /* 00636505: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00636508: jmp 0x6365ff */ goto L_006365ff;
L_0063650d:; BB(0x0063650d);
    /* 0063650d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00636514: jmp 0x63651f */ goto L_0063651f;
L_00636516:; BB(0x00636516);
    /* 00636516: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00636519: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063651c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0063651f:; BB(0x0063651f);
    /* 0063651f: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00636525: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00636527: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063652d: mov eax, dword ptr [edx + 0x10c] */ r_eax = R32((u32)(r_edx+0x10cu));
    /* 00636533: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x636535u); call_ind(t); }
    /* 00636535: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00636538: jge 0x6365fc */ if ((fS==fO)) goto L_006365fc;
L_0063653e:; BB(0x0063653e);
    /* 0063653e: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00636541: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 00636544: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00636547: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 0063654a: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 0063654d: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00636550: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x636555u); f_0063aac0();
    /* 00636555: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00636557: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 0063655a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063655c: cmp dword ptr [ebp - 0x38], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00636560: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00636563: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00636566: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00636568: je 0x636587 */ if (fZ) goto L_00636587;
L_0063656a:; BB(0x0063656a);
    /* 0063656a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0063656c: jne 0x636585 */ if (!fZ) goto L_00636585;
L_0063656e:; BB(0x0063656e);
    /* 0063656e: push 0x7e5 */ { u32 v = 0x7e5u; r_esp -= 4; W32(r_esp, v); }
    /* 00636573: push 0x6d9e90 */ { u32 v = 0x6d9e90u; r_esp -= 4; W32(r_esp, v); }
    /* 00636578: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0063657d: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x636582u); f_005e9f20();
    /* 00636582: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00636585:; BB(0x00636585);
    /* 00636585: jmp 0x6365fc */ goto L_006365fc;
L_00636587:; BB(0x00636587);
    /* 00636587: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0063658a: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 0063658d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00636590: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 00636593: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 00636596: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00636599: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x63659eu); f_0063aac0();
    /* 0063659e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006365a0: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 006365a3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006365a5: cmp dword ptr [ebp - 0x40], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006365a9: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 006365ac: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 006365af: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006365b1: je 0x6365ed */ if (fZ) goto L_006365ed;
L_006365b3:; BB(0x006365b3);
    /* 006365b3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006365b5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006365b7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006365b9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006365bb: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006365be: sub edx, dword ptr [ebp - 0x24] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006365c1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006365c2: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 006365c5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006365c7: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 006365ca: mov eax, dword ptr [edx + 0x370] */ r_eax = R32((u32)(r_edx+0x370u));
    /* 006365d0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6365d2u); call_ind(t); }
    /* 006365d2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006365d3: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 006365d6: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 006365d9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006365dc: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 006365df: call 0x63a8d0 */ r_esp -= 4; W32(r_esp, 0x6365e4u); f_0063a8d0();
    /* 006365e4: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006365e7: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006365ea: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
L_006365ed:; BB(0x006365ed);
    /* 006365ed: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006365f0: cmp edx, dword ptr [ebp - 0x20] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006365f3: jne 0x6365f7 */ if (!fZ) goto L_006365f7;
L_006365f5:; BB(0x006365f5);
    /* 006365f5: jmp 0x6365fc */ goto L_006365fc;
L_006365f7:; BB(0x006365f7);
    /* 006365f7: jmp 0x636516 */ goto L_00636516;
L_006365fc:; BB(0x006365fc);
    /* 006365fc: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
L_006365ff:; BB(0x006365ff);
    /* 006365ff: mov esp, ebp */ r_esp = r_ebp;
    /* 00636601: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00636602: ret  */ FN_RET(0x006363e0); r_esp += 4; return;
}

void f_00636950(void) /* Shell::vfunc218 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00636950);
    /* 00636950: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00636951: mov ebp, esp */ r_ebp = r_esp;
    /* 00636953: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00636956: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00636959: cmp dword ptr [0x163068c], 0 */ {  u32 a = R32((u32)(0x163068cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00636960: je 0x636981 */ if (fZ) goto L_00636981;
L_00636962:; BB(0x00636962);
    /* 00636962: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00636965: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x63696au); f_0063aac0();
    /* 0063696a: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063696d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00636970: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00636973: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00636974: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 0063697a: call 0x63dea0 */ r_esp -= 4; W32(r_esp, 0x63697fu); f_0063dea0();
    /* 0063697f: jmp 0x63699b */ goto L_0063699b;
L_00636981:; BB(0x00636981);
    /* 00636981: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00636984: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x636989u); f_0063aac0();
    /* 00636989: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063698c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0063698f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00636992: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00636993: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00636996: call 0x6368b0 */ r_esp -= 4; W32(r_esp, 0x63699bu); f_006368b0();
L_0063699b:; BB(0x0063699b);
    /* 0063699b: mov esp, ebp */ r_esp = r_ebp;
    /* 0063699d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063699e: ret 4 */ FN_RET(0x00636950); r_esp += 8; return;
}

void f_00637000(void) /* shell::func_00637000 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00637000);
    /* 00637000: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00637001: mov ebp, esp */ r_ebp = r_esp;
    /* 00637003: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00637006: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00637009: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0063700c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063700d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00637010: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00637011: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00637014: add ecx, 0x5c */ {  u32 a = r_ecx; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00637017: call 0x6668a0 */ r_esp -= 4; W32(r_esp, 0x63701cu); f_006668a0();
    /* 0063701c: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0063701f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00637021: jne 0x637036 */ if (!fZ) goto L_00637036;
L_00637023:; BB(0x00637023);
    /* 00637023: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00637026: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00637027: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0063702a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063702b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063702e: add ecx, 0x5c */ {  u32 a = r_ecx; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00637031: call 0x666970 */ r_esp -= 4; W32(r_esp, 0x637036u); f_00666970();
L_00637036:; BB(0x00637036);
    /* 00637036: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00637039: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063703a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0063703d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063703e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00637041: add ecx, 0x5c */ {  u32 a = r_ecx; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00637044: call 0x6668a0 */ r_esp -= 4; W32(r_esp, 0x637049u); f_006668a0();
    /* 00637049: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0063704c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063704e: jne 0x637073 */ if (!fZ) goto L_00637073;
L_00637050:; BB(0x00637050);
    /* 00637050: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00637052: jne 0x63706b */ if (!fZ) goto L_0063706b;
L_00637054:; BB(0x00637054);
    /* 00637054: push 0x8e5 */ { u32 v = 0x8e5u; r_esp -= 4; W32(r_esp, v); }
    /* 00637059: push 0x6d9e90 */ { u32 v = 0x6d9e90u; r_esp -= 4; W32(r_esp, v); }
    /* 0063705e: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00637063: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x637068u); f_005e9f20();
    /* 00637068: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0063706b:; BB(0x0063706b);
    /* 0063706b: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0063706e: jmp 0x63711f */ goto L_0063711f;
L_00637073:; BB(0x00637073);
    /* 00637073: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00637076: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00637077: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0063707a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063707b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063707e: add ecx, 0x5c */ {  u32 a = r_ecx; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00637081: call 0x666c70 */ r_esp -= 4; W32(r_esp, 0x637086u); f_00666c70();
    /* 00637086: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00637089: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063708d: jne 0x6370a6 */ if (!fZ) goto L_006370a6;
L_0063708f:; BB(0x0063708f);
    /* 0063708f: push 0x8ed */ { u32 v = 0x8edu; r_esp -= 4; W32(r_esp, v); }
    /* 00637094: push 0x6d9e90 */ { u32 v = 0x6d9e90u; r_esp -= 4; W32(r_esp, v); }
    /* 00637099: push 0x6da628 */ { u32 v = 0x6da628u; r_esp -= 4; W32(r_esp, v); }
    /* 0063709e: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x6370a3u); f_005e9f20();
    /* 006370a3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006370a6:; BB(0x006370a6);
    /* 006370a6: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 006370a9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006370aa: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006370ad: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006370ae: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006370b1: add ecx, 0x5c */ {  u32 a = r_ecx; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006370b4: call 0x6667c0 */ r_esp -= 4; W32(r_esp, 0x6370b9u); f_006667c0();
    /* 006370b9: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_006370bc:; BB(0x006370bc);
    /* 006370bc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006370bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006370c0: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x6370c5u); f_0062fbf0();
    /* 006370c5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006370c8: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 006370cb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006370ce: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006370cf: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 006370d2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006370d3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006370d6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006370d7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006370da: add ecx, 0x5c */ {  u32 a = r_ecx; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006370dd: call 0x666a80 */ r_esp -= 4; W32(r_esp, 0x6370e2u); f_00666a80();
    /* 006370e2: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 006370e5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006370e7: jne 0x6370bc */ if (!fZ) goto L_006370bc;
L_006370e9:; BB(0x006370e9);
    /* 006370e9: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006370ec: add edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006370ef: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006370f0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006370f3: add ecx, 0x5c */ {  u32 a = r_ecx; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006370f6: call 0x666840 */ r_esp -= 4; W32(r_esp, 0x6370fbu); f_00666840();
    /* 006370fb: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006370fe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00637100: je 0x6370bc */ if (fZ) goto L_006370bc;
L_00637102:; BB(0x00637102);
    /* 00637102: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00637105: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00637106: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00637109: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063710a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0063710d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063710e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00637111: add ecx, 0x5c */ {  u32 a = r_ecx; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00637114: call 0x666b60 */ r_esp -= 4; W32(r_esp, 0x637119u); f_00666b60();
    /* 00637119: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063711c: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_0063711f:; BB(0x0063711f);
    /* 0063711f: mov esp, ebp */ r_esp = r_ebp;
    /* 00637121: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00637122: ret 0xc */ FN_RET(0x00637000); r_esp += 16; return;
}

void f_00637410(void) /* Shell::vfunc225 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00637410);
    /* 00637410: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00637411: mov ebp, esp */ r_ebp = r_esp;
    /* 00637413: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00637416: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00637417: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0063741a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00637421: cmp dword ptr [0x162ee80], 0 */ {  u32 a = R32((u32)(0x162ee80u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00637428: je 0x63744b */ if (fZ) goto L_0063744b;
L_0063742a:; BB(0x0063742a);
    /* 0063742a: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 0063742f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00637431: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00637437: mov eax, dword ptr [edx + 0xac] */ r_eax = R32((u32)(r_edx+0xacu));
    /* 0063743d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63743fu); call_ind(t); }
    /* 0063743f: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00637442: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00637444: je 0x63744b */ if (fZ) goto L_0063744b;
L_00637446:; BB(0x00637446);
    /* 00637446: jmp 0x637540 */ goto L_00637540;
L_0063744b:; BB(0x0063744b);
    /* 0063744b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063744e: call 0x637670 */ r_esp -= 4; W32(r_esp, 0x637453u); f_00637670();
    /* 00637453: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00637456: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00637458: je 0x6374fd */ if (fZ) goto L_006374fd;
L_0063745e:; BB(0x0063745e);
    /* 0063745e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00637461: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x637466u); f_005f3bf0();
    /* 00637466: cmp eax, 0x3ea */ {  u32 a = r_eax; u32 b = 0x3eau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063746b: jne 0x637485 */ if (!fZ) goto L_00637485;
L_0063746d:; BB(0x0063746d);
    /* 0063746d: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00637472: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00637474: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063747a: mov eax, dword ptr [edx + 0x188] */ r_eax = R32((u32)(r_edx+0x188u));
    /* 00637480: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x637482u); call_ind(t); }
    /* 00637482: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00637485:; BB(0x00637485);
    /* 00637485: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00637488: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x63748du); f_005f3bf0();
    /* 0063748d: mov esi, eax */ r_esi = r_eax;
    /* 0063748f: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00637495: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00637497: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063749d: mov eax, dword ptr [edx + 0x258] */ r_eax = R32((u32)(r_edx+0x258u));
    /* 006374a3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6374a5u); call_ind(t); }
    /* 006374a5: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006374a7: jne 0x6374d1 */ if (!fZ) goto L_006374d1;
L_006374a9:; BB(0x006374a9);
    /* 006374a9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006374ac: call 0x636760 */ r_esp -= 4; W32(r_esp, 0x6374b1u); f_00636760();
    /* 006374b1: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 006374b4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006374b6: jne 0x6374d1 */ if (!fZ) goto L_006374d1;
L_006374b8:; BB(0x006374b8);
    /* 006374b8: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 006374be: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006374c0: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006374c6: mov edx, dword ptr [eax + 0x18c] */ r_edx = R32((u32)(r_eax+0x18cu));
    /* 006374cc: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6374ceu); call_ind(t); }
    /* 006374ce: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_006374d1:; BB(0x006374d1);
    /* 006374d1: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006374d3: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 006374d6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006374d8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006374db: mov eax, dword ptr [edx + 0x33c] */ r_eax = R32((u32)(r_edx+0x33cu));
    /* 006374e1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6374e3u); call_ind(t); }
    /* 006374e3: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 006374e6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006374e8: je 0x6374fd */ if (fZ) goto L_006374fd;
L_006374ea:; BB(0x006374ea);
    /* 006374ea: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006374ed: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006374ef: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006374f2: mov edx, dword ptr [eax + 0x388] */ r_edx = R32((u32)(r_eax+0x388u));
    /* 006374f8: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6374fau); call_ind(t); }
    /* 006374fa: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_006374fd:; BB(0x006374fd);
    /* 006374fd: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00637501: je 0x637518 */ if (fZ) goto L_00637518;
L_00637503:; BB(0x00637503);
    /* 00637503: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00637506: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00637507: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063750a: call 0x5f4720 */ r_esp -= 4; W32(r_esp, 0x63750fu); f_005f4720();
    /* 0063750f: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00637512: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00637514: je 0x637518 */ if (fZ) goto L_00637518;
L_00637516:; BB(0x00637516);
    /* 00637516: jmp 0x637540 */ goto L_00637540;
L_00637518:; BB(0x00637518);
    /* 00637518: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063751b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0063751d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00637520: mov edx, dword ptr [eax + 0x88] */ r_edx = R32((u32)(r_eax+0x88u));
    /* 00637526: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x637528u); call_ind(t); }
    /* 00637528: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063752c: je 0x637540 */ if (fZ) goto L_00637540;
L_0063752e:; BB(0x0063752e);
    /* 0063752e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063752f: fld1  */ FPUSH(1.0);
    /* 00637531: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00637534: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00637537: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00637538: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063753b: call 0x5f4620 */ r_esp -= 4; W32(r_esp, 0x637540u); f_005f4620();
L_00637540:; BB(0x00637540);
    /* 00637540: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00637541: mov esp, ebp */ r_esp = r_ebp;
    /* 00637543: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00637544: ret  */ FN_RET(0x00637410); r_esp += 4; return;
}

void f_00638ed0(void) /* shell::func_00638ed0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00638ed0);
    /* 00638ed0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00638ed1: mov ebp, esp */ r_ebp = r_esp;
    /* 00638ed3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00638ed6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00638ed9: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00638edd: jl 0x638ef9 */ if ((fS!=fO)) goto L_00638ef9;
L_00638edf:; BB(0x00638edf);
    /* 00638edf: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00638ee4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00638ee6: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00638eec: mov eax, dword ptr [edx + 0x10c] */ r_eax = R32((u32)(r_edx+0x10cu));
    /* 00638ef2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x638ef4u); call_ind(t); }
    /* 00638ef4: cmp dword ptr [ebp + 8], eax */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00638ef7: jl 0x638f18 */ if ((fS!=fO)) goto L_00638f18;
L_00638ef9:; BB(0x00638ef9);
    /* 00638ef9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00638efb: jne 0x638f14 */ if (!fZ) goto L_00638f14;
L_00638efd:; BB(0x00638efd);
    /* 00638efd: push 0xc2b */ { u32 v = 0xc2bu; r_esp -= 4; W32(r_esp, v); }
    /* 00638f02: push 0x6d9e90 */ { u32 v = 0x6d9e90u; r_esp -= 4; W32(r_esp, v); }
    /* 00638f07: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00638f0c: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x638f11u); f_005e9f20();
    /* 00638f11: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00638f14:; BB(0x00638f14);
    /* 00638f14: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00638f16: jmp 0x638f3d */ goto L_00638f3d;
L_00638f18:; BB(0x00638f18);
    /* 00638f18: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00638f1b: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 00638f1e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00638f21: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 00638f24: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00638f27: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00638f2a: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x638f2fu); f_0063aac0();
    /* 00638f2f: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00638f31: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00638f34: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00638f36: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00638f3a: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
L_00638f3d:; BB(0x00638f3d);
    /* 00638f3d: mov esp, ebp */ r_esp = r_ebp;
    /* 00638f3f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00638f40: ret 4 */ FN_RET(0x00638ed0); r_esp += 8; return;
}

void f_00638f50(void) /* shell::func_00638f50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00638f50);
    /* 00638f50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00638f51: mov ebp, esp */ r_ebp = r_esp;
    /* 00638f53: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00638f56: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00638f59: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00638f5d: jl 0x638f79 */ if ((fS!=fO)) goto L_00638f79;
L_00638f5f:; BB(0x00638f5f);
    /* 00638f5f: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00638f64: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00638f66: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00638f6c: mov eax, dword ptr [edx + 0x10c] */ r_eax = R32((u32)(r_edx+0x10cu));
    /* 00638f72: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x638f74u); call_ind(t); }
    /* 00638f74: cmp dword ptr [ebp + 8], eax */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00638f77: jl 0x638f98 */ if ((fS!=fO)) goto L_00638f98;
L_00638f79:; BB(0x00638f79);
    /* 00638f79: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00638f7b: jne 0x638f94 */ if (!fZ) goto L_00638f94;
L_00638f7d:; BB(0x00638f7d);
    /* 00638f7d: push 0xc35 */ { u32 v = 0xc35u; r_esp -= 4; W32(r_esp, v); }
    /* 00638f82: push 0x6d9e90 */ { u32 v = 0x6d9e90u; r_esp -= 4; W32(r_esp, v); }
    /* 00638f87: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00638f8c: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x638f91u); f_005e9f20();
    /* 00638f91: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00638f94:; BB(0x00638f94);
    /* 00638f94: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00638f96: jmp 0x638fe0 */ goto L_00638fe0;
L_00638f98:; BB(0x00638f98);
    /* 00638f98: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00638f9b: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 00638f9e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00638fa1: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 00638fa4: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00638fa7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00638faa: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x638fafu); f_0063aac0();
    /* 00638faf: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00638fb1: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00638fb4: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00638fb8: je 0x638fd6 */ if (fZ) goto L_00638fd6;
L_00638fba:; BB(0x00638fba);
    /* 00638fba: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00638fbd: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x638fc2u); f_0063aac0();
    /* 00638fc2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00638fc4: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00638fc7: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00638fcb: je 0x638fd6 */ if (fZ) goto L_00638fd6;
L_00638fcd:; BB(0x00638fcd);
    /* 00638fcd: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 00638fd4: jmp 0x638fdd */ goto L_00638fdd;
L_00638fd6:; BB(0x00638fd6);
    /* 00638fd6: mov dword ptr [ebp - 0x14], 1 */ W32((u32)(r_ebp+0xffffffecu), 0x1u);
L_00638fdd:; BB(0x00638fdd);
    /* 00638fdd: mov al, byte ptr [ebp - 0x14] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffecu))) & 0xffu);
L_00638fe0:; BB(0x00638fe0);
    /* 00638fe0: mov esp, ebp */ r_esp = r_ebp;
    /* 00638fe2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00638fe3: ret 4 */ FN_RET(0x00638f50); r_esp += 8; return;
}

void f_00638ff0(void) /* shell::func_00638ff0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00638ff0);
    /* 00638ff0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00638ff1: mov ebp, esp */ r_ebp = r_esp;
    /* 00638ff3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00638ff6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00638ff9: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00638ffd: jl 0x639019 */ if ((fS!=fO)) goto L_00639019;
L_00638fff:; BB(0x00638fff);
    /* 00638fff: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00639004: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00639006: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063900c: mov eax, dword ptr [edx + 0x10c] */ r_eax = R32((u32)(r_edx+0x10cu));
    /* 00639012: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x639014u); call_ind(t); }
    /* 00639014: cmp dword ptr [ebp + 8], eax */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00639017: jl 0x639038 */ if ((fS!=fO)) goto L_00639038;
L_00639019:; BB(0x00639019);
    /* 00639019: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0063901b: jne 0x639034 */ if (!fZ) goto L_00639034;
L_0063901d:; BB(0x0063901d);
    /* 0063901d: push 0xc44 */ { u32 v = 0xc44u; r_esp -= 4; W32(r_esp, v); }
    /* 00639022: push 0x6d9e90 */ { u32 v = 0x6d9e90u; r_esp -= 4; W32(r_esp, v); }
    /* 00639027: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0063902c: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x639031u); f_005e9f20();
    /* 00639031: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00639034:; BB(0x00639034);
    /* 00639034: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00639036: jmp 0x63905d */ goto L_0063905d;
L_00639038:; BB(0x00639038);
    /* 00639038: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063903b: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 0063903e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00639041: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 00639044: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00639047: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063904a: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x63904fu); f_0063aac0();
    /* 0063904f: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00639051: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00639054: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00639056: cmp dword ptr [ebp - 4], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063905a: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
L_0063905d:; BB(0x0063905d);
    /* 0063905d: mov esp, ebp */ r_esp = r_ebp;
    /* 0063905f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00639060: ret 4 */ FN_RET(0x00638ff0); r_esp += 8; return;
}

void f_00639070(void) /* shell::func_00639070 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00639070);
    /* 00639070: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00639071: mov ebp, esp */ r_ebp = r_esp;
    /* 00639073: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00639076: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00639079: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063907d: jl 0x639099 */ if ((fS!=fO)) goto L_00639099;
L_0063907f:; BB(0x0063907f);
    /* 0063907f: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00639084: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00639086: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063908c: mov eax, dword ptr [edx + 0x10c] */ r_eax = R32((u32)(r_edx+0x10cu));
    /* 00639092: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x639094u); call_ind(t); }
    /* 00639094: cmp dword ptr [ebp + 8], eax */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00639097: jl 0x6390bb */ if ((fS!=fO)) goto L_006390bb;
L_00639099:; BB(0x00639099);
    /* 00639099: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0063909b: jne 0x6390b4 */ if (!fZ) goto L_006390b4;
L_0063909d:; BB(0x0063909d);
    /* 0063909d: push 0xc58 */ { u32 v = 0xc58u; r_esp -= 4; W32(r_esp, v); }
    /* 006390a2: push 0x6d9e90 */ { u32 v = 0x6d9e90u; r_esp -= 4; W32(r_esp, v); }
    /* 006390a7: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 006390ac: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x6390b1u); f_005e9f20();
    /* 006390b1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006390b4:; BB(0x006390b4);
    /* 006390b4: mov eax, 0x6b27f8 */ r_eax = 0x6b27f8u;
    /* 006390b9: jmp 0x6390ff */ goto L_006390ff;
L_006390bb:; BB(0x006390bb);
    /* 006390bb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006390be: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006390bf: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006390c2: call 0x638ed0 */ r_esp -= 4; W32(r_esp, 0x6390c7u); f_00638ed0();
    /* 006390c7: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 006390ca: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006390cc: je 0x6390e5 */ if (fZ) goto L_006390e5;
L_006390ce:; BB(0x006390ce);
    /* 006390ce: push 0xc5c */ { u32 v = 0xc5cu; r_esp -= 4; W32(r_esp, v); }
    /* 006390d3: push 0x6d9e90 */ { u32 v = 0x6d9e90u; r_esp -= 4; W32(r_esp, v); }
    /* 006390d8: push 0x6db69c */ { u32 v = 0x6db69cu; r_esp -= 4; W32(r_esp, v); }
    /* 006390dd: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x6390e2u); f_005e9f20();
    /* 006390e2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006390e5:; BB(0x006390e5);
    /* 006390e5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 006390e8: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 006390eb: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006390ee: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 006390f1: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 006390f4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006390f7: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x6390fcu); f_0063aac0();
    /* 006390fc: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_006390ff:; BB(0x006390ff);
    /* 006390ff: mov esp, ebp */ r_esp = r_ebp;
    /* 00639101: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00639102: ret 4 */ FN_RET(0x00639070); r_esp += 8; return;
}

void f_00639110(void) /* shell::func_00639110 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00639110);
    /* 00639110: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00639111: mov ebp, esp */ r_ebp = r_esp;
    /* 00639113: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00639116: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00639119: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063911d: jl 0x639139 */ if ((fS!=fO)) goto L_00639139;
L_0063911f:; BB(0x0063911f);
    /* 0063911f: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00639124: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00639126: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063912c: mov eax, dword ptr [edx + 0x10c] */ r_eax = R32((u32)(r_edx+0x10cu));
    /* 00639132: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x639134u); call_ind(t); }
    /* 00639134: cmp dword ptr [ebp + 8], eax */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00639137: jl 0x639167 */ if ((fS!=fO)) goto L_00639167;
L_00639139:; BB(0x00639139);
    /* 00639139: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0063913b: jne 0x639154 */ if (!fZ) goto L_00639154;
L_0063913d:; BB(0x0063913d);
    /* 0063913d: push 0xc63 */ { u32 v = 0xc63u; r_esp -= 4; W32(r_esp, v); }
    /* 00639142: push 0x6d9e90 */ { u32 v = 0x6d9e90u; r_esp -= 4; W32(r_esp, v); }
    /* 00639147: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0063914c: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x639151u); f_005e9f20();
    /* 00639151: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00639154:; BB(0x00639154);
    /* 00639154: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00639157: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 0063915a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0063915c: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 0063915f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00639162: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00639165: jmp 0x63917c */ goto L_0063917c;
L_00639167:; BB(0x00639167);
    /* 00639167: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063916a: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 0063916d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00639170: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 00639173: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00639176: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00639179: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
L_0063917c:; BB(0x0063917c);
    /* 0063917c: mov esp, ebp */ r_esp = r_ebp;
    /* 0063917e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063917f: ret 4 */ FN_RET(0x00639110); r_esp += 8; return;
}

void f_00639390(void) /* shell::func_00639390 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00639390);
    /* 00639390: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00639391: mov ebp, esp */ r_ebp = r_esp;
    /* 00639393: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00639394: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00639397: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0063939a: cmp dword ptr [eax], 0 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063939d: jl 0x6393bc */ if ((fS!=fO)) goto L_006393bc;
L_0063939f:; BB(0x0063939f);
    /* 0063939f: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006393a5: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006393a7: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006393ad: mov eax, dword ptr [edx + 0x10c] */ r_eax = R32((u32)(r_edx+0x10cu));
    /* 006393b3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6393b5u); call_ind(t); }
    /* 006393b5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006393b8: cmp dword ptr [ecx], eax */ {  u32 a = R32((u32)(r_ecx)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006393ba: jl 0x6393d9 */ if ((fS!=fO)) goto L_006393d9;
L_006393bc:; BB(0x006393bc);
    /* 006393bc: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 006393be: jne 0x6393d7 */ if (!fZ) goto L_006393d7;
L_006393c0:; BB(0x006393c0);
    /* 006393c0: push 0xc91 */ { u32 v = 0xc91u; r_esp -= 4; W32(r_esp, v); }
    /* 006393c5: push 0x6d9e90 */ { u32 v = 0x6d9e90u; r_esp -= 4; W32(r_esp, v); }
    /* 006393ca: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 006393cf: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x6393d4u); f_005e9f20();
    /* 006393d4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006393d7:; BB(0x006393d7);
    /* 006393d7: jmp 0x639400 */ goto L_00639400;
L_006393d9:; BB(0x006393d9);
    /* 006393d9: mov cl, byte ptr [ebp + 0x14] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x14u))) & 0xffu);
    /* 006393dc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006393dd: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006393df: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 006393e2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006393e3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006393e6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006393e7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006393ea: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006393eb: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006393ee: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006393f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006393f1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006393f4: call 0x639110 */ r_esp -= 4; W32(r_esp, 0x6393f9u); f_00639110();
    /* 006393f9: mov ecx, eax */ r_ecx = r_eax;
    /* 006393fb: call 0x6476f0 */ r_esp -= 4; W32(r_esp, 0x639400u); f_006476f0();
L_00639400:; BB(0x00639400);
    /* 00639400: mov esp, ebp */ r_esp = r_ebp;
    /* 00639402: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00639403: ret 0x10 */ FN_RET(0x00639390); r_esp += 20; return;
}

void f_00639520(void) /* shell::func_00639520 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00639520);
    /* 00639520: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00639521: mov ebp, esp */ r_ebp = r_esp;
    /* 00639523: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00639526: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00639529: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00639530: jmp 0x63953b */ goto L_0063953b;
L_00639532:; BB(0x00639532);
    /* 00639532: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00639535: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00639538: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0063953b:; BB(0x0063953b);
    /* 0063953b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063953e: imul ecx, ecx, 0x380 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x380u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00639544: cmp dword ptr [ecx + 0x763570], -1 */ {  u32 a = R32((u32)(r_ecx+0x763570u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063954b: je 0x639568 */ if (fZ) goto L_00639568;
L_0063954d:; BB(0x0063954d);
    /* 0063954d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00639550: imul edx, edx, 0x380 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x380u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00639556: mov eax, dword ptr [edx + 0x763570] */ r_eax = R32((u32)(r_edx+0x763570u));
    /* 0063955c: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063955f: jne 0x639566 */ if (!fZ) goto L_00639566;
L_00639561:; BB(0x00639561);
    /* 00639561: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00639564: jmp 0x639585 */ goto L_00639585;
L_00639566:; BB(0x00639566);
    /* 00639566: jmp 0x639532 */ goto L_00639532;
L_00639568:; BB(0x00639568);
    /* 00639568: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0063956a: jne 0x639583 */ if (!fZ) goto L_00639583;
L_0063956c:; BB(0x0063956c);
    /* 0063956c: push 0xcbe */ { u32 v = 0xcbeu; r_esp -= 4; W32(r_esp, v); }
    /* 00639571: push 0x6d9e90 */ { u32 v = 0x6d9e90u; r_esp -= 4; W32(r_esp, v); }
    /* 00639576: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0063957b: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x639580u); f_005e9f20();
    /* 00639580: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00639583:; BB(0x00639583);
    /* 00639583: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00639585:; BB(0x00639585);
    /* 00639585: mov esp, ebp */ r_esp = r_ebp;
    /* 00639587: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00639588: ret 4 */ FN_RET(0x00639520); r_esp += 8; return;
}

void f_00639590(void) /* shell::func_00639590 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00639590);
    /* 00639590: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00639591: mov ebp, esp */ r_ebp = r_esp;
    /* 00639593: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00639596: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00639599: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006395a0: jmp 0x6395ab */ goto L_006395ab;
L_006395a2:; BB(0x006395a2);
    /* 006395a2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006395a5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006395a8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_006395ab:; BB(0x006395ab);
    /* 006395ab: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006395b1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006395b3: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006395b9: mov eax, dword ptr [edx + 0x168] */ r_eax = R32((u32)(r_edx+0x168u));
    /* 006395bf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6395c1u); call_ind(t); }
    /* 006395c1: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006395c4: jge 0x6395ec */ if ((fS==fO)) goto L_006395ec;
L_006395c6:; BB(0x006395c6);
    /* 006395c6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006395c9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006395ca: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 006395d0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006395d2: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006395d8: mov edx, dword ptr [eax + 0x164] */ r_edx = R32((u32)(r_eax+0x164u));
    /* 006395de: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6395e0u); call_ind(t); }
    /* 006395e0: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006395e3: jne 0x6395ea */ if (!fZ) goto L_006395ea;
L_006395e5:; BB(0x006395e5);
    /* 006395e5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006395e8: jmp 0x639609 */ goto L_00639609;
L_006395ea:; BB(0x006395ea);
    /* 006395ea: jmp 0x6395a2 */ goto L_006395a2;
L_006395ec:; BB(0x006395ec);
    /* 006395ec: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 006395ee: jne 0x639607 */ if (!fZ) goto L_00639607;
L_006395f0:; BB(0x006395f0);
    /* 006395f0: push 0xcca */ { u32 v = 0xccau; r_esp -= 4; W32(r_esp, v); }
    /* 006395f5: push 0x6d9e90 */ { u32 v = 0x6d9e90u; r_esp -= 4; W32(r_esp, v); }
    /* 006395fa: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 006395ff: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x639604u); f_005e9f20();
    /* 00639604: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00639607:; BB(0x00639607);
    /* 00639607: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00639609:; BB(0x00639609);
    /* 00639609: mov esp, ebp */ r_esp = r_ebp;
    /* 0063960b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063960c: ret 4 */ FN_RET(0x00639590); r_esp += 8; return;
}

void f_00639df0(void) /* Shell::vfunc52 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00639df0);
    /* 00639df0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00639df1: mov ebp, esp */ r_ebp = r_esp;
    /* 00639df3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00639df4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00639df7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00639dfa: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00639dfc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00639dff: mov eax, dword ptr [edx + 0xc8] */ r_eax = R32((u32)(r_edx+0xc8u));
    /* 00639e05: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x639e07u); call_ind(t); }
    /* 00639e07: mov esp, ebp */ r_esp = r_ebp;
    /* 00639e09: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00639e0a: ret  */ FN_RET(0x00639df0); r_esp += 4; return;
}

void f_00639e10(void) /* Shell::vfunc91 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00639e10);
    /* 00639e10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00639e11: mov ebp, esp */ r_ebp = r_esp;
    /* 00639e13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00639e14: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00639e17: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00639e1a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00639e1c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00639e1f: mov eax, dword ptr [edx + 0x168] */ r_eax = R32((u32)(r_edx+0x168u));
    /* 00639e25: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x639e27u); call_ind(t); }
    /* 00639e27: mov esp, ebp */ r_esp = r_ebp;
    /* 00639e29: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00639e2a: ret  */ FN_RET(0x00639e10); r_esp += 4; return;
}

void f_00639e40(void) /* Shell::vfunc150 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00639e40);
    /* 00639e40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00639e41: mov ebp, esp */ r_ebp = r_esp;
    /* 00639e43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00639e44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00639e47: mov eax, 0x3e8 */ r_eax = 0x3e8u;
    /* 00639e4c: mov esp, ebp */ r_esp = r_ebp;
    /* 00639e4e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00639e4f: ret  */ FN_RET(0x00639e40); r_esp += 4; return;
}

void f_00639e50(void) /* Shell::vfunc196 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00639e50);
    /* 00639e50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00639e51: mov ebp, esp */ r_ebp = r_esp;
    /* 00639e53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00639e54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00639e57: mov eax, 0x2625a0 */ r_eax = 0x2625a0u;
    /* 00639e5c: mov esp, ebp */ r_esp = r_ebp;
    /* 00639e5e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00639e5f: ret  */ FN_RET(0x00639e50); r_esp += 4; return;
}

void f_00639e60(void) /* Shell::vfunc219 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00639e60);
    /* 00639e60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00639e61: mov ebp, esp */ r_ebp = r_esp;
    /* 00639e63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00639e64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00639e67: mov eax, 0x64 */ r_eax = 0x64u;
    /* 00639e6c: mov esp, ebp */ r_esp = r_ebp;
    /* 00639e6e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00639e6f: ret  */ FN_RET(0x00639e60); r_esp += 4; return;
}

