#include "protos.h"

void f_0043f270(void) /* HorseRacingDisplay::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043f270);
    /* 0043f270: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043f271: mov ebp, esp */ r_ebp = r_esp;
    /* 0043f273: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043f276: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0043f279: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043f27c: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x43f281u); f_005e9e20();
    /* 0043f281: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043f284: mov dword ptr [eax], 0x6b8300 */ W32((u32)(r_eax), 0x6b8300u);
    /* 0043f28a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043f28d: mov dword ptr [ecx + 0x18], 0 */ W32((u32)(r_ecx+0x18u), 0x0u);
    /* 0043f294: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0043f29b: jmp 0x43f2a6 */ goto L_0043f2a6;
L_0043f29d:; BB(0x0043f29d);
    /* 0043f29d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043f2a0: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043f2a3: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0043f2a6:; BB(0x0043f2a6);
    /* 0043f2a6: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043f2aa: jge 0x43f2fa */ if ((fS==fO)) goto L_0043f2fa;
L_0043f2ac:; BB(0x0043f2ac);
    /* 0043f2ac: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043f2af: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043f2b2: mov dword ptr [ecx + eax*4 + 4], 0 */ W32((u32)(r_ecx+r_eax*4+0x4u), 0x0u);
    /* 0043f2ba: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043f2bd: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043f2c0: mov dword ptr [eax + edx*4 + 0x20], 0 */ W32((u32)(r_eax+r_edx*4+0x20u), 0x0u);
    /* 0043f2c8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043f2cb: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043f2ce: mov dword ptr [edx + ecx*4 + 0x70], 0 */ W32((u32)(r_edx+r_ecx*4+0x70u), 0x0u);
    /* 0043f2d6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043f2d9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043f2dc: mov dword ptr [ecx + eax*4 + 0x84], 0 */ W32((u32)(r_ecx+r_eax*4+0x84u), 0x0u);
    /* 0043f2e7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043f2ea: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043f2ed: mov dword ptr [eax + edx*4 + 0xc8], 0 */ W32((u32)(r_eax+r_edx*4+0xc8u), 0x0u);
    /* 0043f2f8: jmp 0x43f29d */ goto L_0043f29d;
L_0043f2fa:; BB(0x0043f2fa);
    /* 0043f2fa: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0043f301: jmp 0x43f30c */ goto L_0043f30c;
L_0043f303:; BB(0x0043f303);
    /* 0043f303: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043f306: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043f309: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0043f30c:; BB(0x0043f30c);
    /* 0043f30c: cmp dword ptr [ebp - 4], 0xf */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043f310: jge 0x43f322 */ if ((fS==fO)) goto L_0043f322;
L_0043f312:; BB(0x0043f312);
    /* 0043f312: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043f315: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043f318: mov dword ptr [eax + edx*4 + 0x34], 0 */ W32((u32)(r_eax+r_edx*4+0x34u), 0x0u);
    /* 0043f320: jmp 0x43f303 */ goto L_0043f303;
L_0043f322:; BB(0x0043f322);
    /* 0043f322: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043f325: mov dword ptr [ecx + 0x98], 0 */ W32((u32)(r_ecx+0x98u), 0x0u);
    /* 0043f32f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043f332: mov dword ptr [edx + 0x9c], 0 */ W32((u32)(r_edx+0x9cu), 0x0u);
    /* 0043f33c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043f33f: mov dword ptr [eax + 0xa0], 0 */ W32((u32)(r_eax+0xa0u), 0x0u);
    /* 0043f349: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043f34c: mov dword ptr [ecx + 0xa4], 0 */ W32((u32)(r_ecx+0xa4u), 0x0u);
    /* 0043f356: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043f359: mov dword ptr [edx + 0xa8], 0 */ W32((u32)(r_edx+0xa8u), 0x0u);
    /* 0043f363: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043f366: mov dword ptr [eax + 0xac], 0 */ W32((u32)(r_eax+0xacu), 0x0u);
    /* 0043f370: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0043f377: jmp 0x43f382 */ goto L_0043f382;
L_0043f379:; BB(0x0043f379);
    /* 0043f379: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043f37c: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043f37f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0043f382:; BB(0x0043f382);
    /* 0043f382: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043f386: jge 0x43f3bd */ if ((fS==fO)) goto L_0043f3bd;
L_0043f388:; BB(0x0043f388);
    /* 0043f388: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043f38b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043f38e: mov dword ptr [eax + edx*4 + 0xb4], 0 */ W32((u32)(r_eax+r_edx*4+0xb4u), 0x0u);
    /* 0043f399: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043f39c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043f39f: mov dword ptr [edx + ecx*4 + 0xdc], 0 */ W32((u32)(r_edx+r_ecx*4+0xdcu), 0x0u);
    /* 0043f3aa: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043f3ad: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043f3b0: mov dword ptr [ecx + eax*4 + 0xf0], 0 */ W32((u32)(r_ecx+r_eax*4+0xf0u), 0x0u);
    /* 0043f3bb: jmp 0x43f379 */ goto L_0043f379;
L_0043f3bd:; BB(0x0043f3bd);
    /* 0043f3bd: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0043f3c4: jmp 0x43f3cf */ goto L_0043f3cf;
L_0043f3c6:; BB(0x0043f3c6);
    /* 0043f3c6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043f3c9: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043f3cc: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0043f3cf:; BB(0x0043f3cf);
    /* 0043f3cf: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043f3d3: jge 0x43f3e8 */ if ((fS==fO)) goto L_0043f3e8;
L_0043f3d5:; BB(0x0043f3d5);
    /* 0043f3d5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043f3d8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043f3db: mov dword ptr [ecx + eax*4 + 0x104], 0 */ W32((u32)(r_ecx+r_eax*4+0x104u), 0x0u);
    /* 0043f3e6: jmp 0x43f3c6 */ goto L_0043f3c6;
L_0043f3e8:; BB(0x0043f3e8);
    /* 0043f3e8: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043f3eb: mov dword ptr [edx + 0x110], 0 */ W32((u32)(r_edx+0x110u), 0x0u);
    /* 0043f3f5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0043f3fc: jmp 0x43f407 */ goto L_0043f407;
L_0043f3fe:; BB(0x0043f3fe);
    /* 0043f3fe: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043f401: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043f404: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0043f407:; BB(0x0043f407);
    /* 0043f407: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043f40b: jge 0x43f420 */ if ((fS==fO)) goto L_0043f420;
L_0043f40d:; BB(0x0043f40d);
    /* 0043f40d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043f410: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043f413: mov dword ptr [edx + ecx*4 + 0x114], 0 */ W32((u32)(r_edx+r_ecx*4+0x114u), 0x0u);
    /* 0043f41e: jmp 0x43f3fe */ goto L_0043f3fe;
L_0043f420:; BB(0x0043f420);
    /* 0043f420: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043f423: mov esp, ebp */ r_esp = r_ebp;
    /* 0043f425: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043f426: ret  */ FN_RET(0x0043f270); r_esp += 4; return;
}

void f_0043f430(void) /* HorseRacingDisplay::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043f430);
    /* 0043f430: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043f431: mov ebp, esp */ r_ebp = r_esp;
    /* 0043f433: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0043f435: push 0x69e8ab */ { u32 v = 0x69e8abu; r_esp -= 4; W32(r_esp, v); }
    /* 0043f43a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0043f440: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043f441: sub esp, 0xec */ {  u32 a = r_esp; u32 b = 0xecu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043f447: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0043f44c: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043f44e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043f44f: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0043f452: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0043f458: mov dword ptr [ebp - 0xac], ecx */ W32((u32)(r_ebp+0xffffff54u), r_ecx);
    /* 0043f45e: mov eax, dword ptr [ebp - 0xac] */ r_eax = R32((u32)(r_ebp+0xffffff54u));
    /* 0043f464: mov dword ptr [eax], 0x6b8300 */ W32((u32)(r_eax), 0x6b8300u);
    /* 0043f46a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0043f471: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 0043f477: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 0043f47a: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0043f47d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043f480: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0043f483: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f487: je 0x43f49f */ if (fZ) goto L_0043f49f;
L_0043f489:; BB(0x0043f489);
    /* 0043f489: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043f48b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043f48e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043f490: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043f493: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043f495: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x43f497u); call_ind(t); }
    /* 0043f497: mov dword ptr [ebp - 0xb0], eax */ W32((u32)(r_ebp+0xffffff50u), r_eax);
    /* 0043f49d: jmp 0x43f4a9 */ goto L_0043f4a9;
L_0043f49f:; BB(0x0043f49f);
    /* 0043f49f: mov dword ptr [ebp - 0xb0], 0 */ W32((u32)(r_ebp+0xffffff50u), 0x0u);
L_0043f4a9:; BB(0x0043f4a9);
    /* 0043f4a9: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0043f4b0: jmp 0x43f4bb */ goto L_0043f4bb;
L_0043f4b2:; BB(0x0043f4b2);
    /* 0043f4b2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043f4b5: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043f4b8: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0043f4bb:; BB(0x0043f4bb);
    /* 0043f4bb: cmp dword ptr [ebp - 0x10], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043f4bf: jge 0x43f5fc */ if ((fS==fO)) goto L_0043f5fc;
L_0043f4c5:; BB(0x0043f4c5);
    /* 0043f4c5: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043f4c8: mov eax, dword ptr [ebp - 0xac] */ r_eax = R32((u32)(r_ebp+0xffffff54u));
    /* 0043f4ce: mov ecx, dword ptr [eax + edx*4 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 0043f4d2: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0043f4d5: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043f4d8: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0043f4db: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f4df: je 0x43f4f7 */ if (fZ) goto L_0043f4f7;
L_0043f4e1:; BB(0x0043f4e1);
    /* 0043f4e1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043f4e3: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0043f4e6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043f4e8: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0043f4eb: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043f4ed: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x43f4efu); call_ind(t); }
    /* 0043f4ef: mov dword ptr [ebp - 0xb4], eax */ W32((u32)(r_ebp+0xffffff4cu), r_eax);
    /* 0043f4f5: jmp 0x43f501 */ goto L_0043f501;
L_0043f4f7:; BB(0x0043f4f7);
    /* 0043f4f7: mov dword ptr [ebp - 0xb4], 0 */ W32((u32)(r_ebp+0xffffff4cu), 0x0u);
L_0043f501:; BB(0x0043f501);
    /* 0043f501: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043f504: mov edx, dword ptr [ebp - 0xac] */ r_edx = R32((u32)(r_ebp+0xffffff54u));
    /* 0043f50a: mov eax, dword ptr [edx + ecx*4 + 0x20] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x20u));
    /* 0043f50e: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0043f511: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0043f514: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0043f517: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f51b: je 0x43f533 */ if (fZ) goto L_0043f533;
L_0043f51d:; BB(0x0043f51d);
    /* 0043f51d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043f51f: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0043f522: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043f524: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0043f527: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043f529: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x43f52bu); call_ind(t); }
    /* 0043f52b: mov dword ptr [ebp - 0xb8], eax */ W32((u32)(r_ebp+0xffffff48u), r_eax);
    /* 0043f531: jmp 0x43f53d */ goto L_0043f53d;
L_0043f533:; BB(0x0043f533);
    /* 0043f533: mov dword ptr [ebp - 0xb8], 0 */ W32((u32)(r_ebp+0xffffff48u), 0x0u);
L_0043f53d:; BB(0x0043f53d);
    /* 0043f53d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043f540: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 0043f546: mov edx, dword ptr [ecx + eax*4 + 0x70] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x70u));
    /* 0043f54a: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 0043f54d: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043f550: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0043f553: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f557: je 0x43f56f */ if (fZ) goto L_0043f56f;
L_0043f559:; BB(0x0043f559);
    /* 0043f559: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043f55b: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0043f55e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043f560: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0043f563: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043f565: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x43f567u); call_ind(t); }
    /* 0043f567: mov dword ptr [ebp - 0xbc], eax */ W32((u32)(r_ebp+0xffffff44u), r_eax);
    /* 0043f56d: jmp 0x43f579 */ goto L_0043f579;
L_0043f56f:; BB(0x0043f56f);
    /* 0043f56f: mov dword ptr [ebp - 0xbc], 0 */ W32((u32)(r_ebp+0xffffff44u), 0x0u);
L_0043f579:; BB(0x0043f579);
    /* 0043f579: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043f57c: mov edx, dword ptr [ebp - 0xac] */ r_edx = R32((u32)(r_ebp+0xffffff54u));
    /* 0043f582: mov eax, dword ptr [edx + ecx*4 + 0x84] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x84u));
    /* 0043f589: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0043f58c: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0043f58f: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 0043f592: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f596: je 0x43f5ae */ if (fZ) goto L_0043f5ae;
L_0043f598:; BB(0x0043f598);
    /* 0043f598: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043f59a: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0043f59d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043f59f: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0043f5a2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043f5a4: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x43f5a6u); call_ind(t); }
    /* 0043f5a6: mov dword ptr [ebp - 0xc0], eax */ W32((u32)(r_ebp+0xffffff40u), r_eax);
    /* 0043f5ac: jmp 0x43f5b8 */ goto L_0043f5b8;
L_0043f5ae:; BB(0x0043f5ae);
    /* 0043f5ae: mov dword ptr [ebp - 0xc0], 0 */ W32((u32)(r_ebp+0xffffff40u), 0x0u);
L_0043f5b8:; BB(0x0043f5b8);
    /* 0043f5b8: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043f5bb: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 0043f5c1: mov edx, dword ptr [ecx + eax*4 + 0xc8] */ r_edx = R32((u32)(r_ecx+r_eax*4+0xc8u));
    /* 0043f5c8: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 0043f5cb: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0043f5ce: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0043f5d1: cmp dword ptr [ebp - 0x3c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f5d5: je 0x43f5ed */ if (fZ) goto L_0043f5ed;
L_0043f5d7:; BB(0x0043f5d7);
    /* 0043f5d7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043f5d9: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0043f5dc: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043f5de: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0043f5e1: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043f5e3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x43f5e5u); call_ind(t); }
    /* 0043f5e5: mov dword ptr [ebp - 0xc4], eax */ W32((u32)(r_ebp+0xffffff3cu), r_eax);
    /* 0043f5eb: jmp 0x43f5f7 */ goto L_0043f5f7;
L_0043f5ed:; BB(0x0043f5ed);
    /* 0043f5ed: mov dword ptr [ebp - 0xc4], 0 */ W32((u32)(r_ebp+0xffffff3cu), 0x0u);
L_0043f5f7:; BB(0x0043f5f7);
    /* 0043f5f7: jmp 0x43f4b2 */ goto L_0043f4b2;
L_0043f5fc:; BB(0x0043f5fc);
    /* 0043f5fc: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0043f603: jmp 0x43f60e */ goto L_0043f60e;
L_0043f605:; BB(0x0043f605);
    /* 0043f605: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043f608: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043f60b: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0043f60e:; BB(0x0043f60e);
    /* 0043f60e: cmp dword ptr [ebp - 0x10], 0xf */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043f612: jge 0x43f652 */ if ((fS==fO)) goto L_0043f652;
L_0043f614:; BB(0x0043f614);
    /* 0043f614: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043f617: mov eax, dword ptr [ebp - 0xac] */ r_eax = R32((u32)(r_ebp+0xffffff54u));
    /* 0043f61d: mov ecx, dword ptr [eax + edx*4 + 0x34] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x34u));
    /* 0043f621: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 0043f624: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0043f627: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 0043f62a: cmp dword ptr [ebp - 0x44], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f62e: je 0x43f646 */ if (fZ) goto L_0043f646;
L_0043f630:; BB(0x0043f630);
    /* 0043f630: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043f632: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0043f635: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043f637: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0043f63a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043f63c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x43f63eu); call_ind(t); }
    /* 0043f63e: mov dword ptr [ebp - 0xc8], eax */ W32((u32)(r_ebp+0xffffff38u), r_eax);
    /* 0043f644: jmp 0x43f650 */ goto L_0043f650;
L_0043f646:; BB(0x0043f646);
    /* 0043f646: mov dword ptr [ebp - 0xc8], 0 */ W32((u32)(r_ebp+0xffffff38u), 0x0u);
L_0043f650:; BB(0x0043f650);
    /* 0043f650: jmp 0x43f605 */ goto L_0043f605;
L_0043f652:; BB(0x0043f652);
    /* 0043f652: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 0043f658: mov edx, dword ptr [ecx + 0x98] */ r_edx = R32((u32)(r_ecx+0x98u));
    /* 0043f65e: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 0043f661: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 0043f664: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0043f667: cmp dword ptr [ebp - 0x4c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f66b: je 0x43f683 */ if (fZ) goto L_0043f683;
L_0043f66d:; BB(0x0043f66d);
    /* 0043f66d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043f66f: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0043f672: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043f674: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0043f677: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043f679: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x43f67bu); call_ind(t); }
    /* 0043f67b: mov dword ptr [ebp - 0xcc], eax */ W32((u32)(r_ebp+0xffffff34u), r_eax);
    /* 0043f681: jmp 0x43f68d */ goto L_0043f68d;
L_0043f683:; BB(0x0043f683);
    /* 0043f683: mov dword ptr [ebp - 0xcc], 0 */ W32((u32)(r_ebp+0xffffff34u), 0x0u);
L_0043f68d:; BB(0x0043f68d);
    /* 0043f68d: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 0043f693: mov edx, dword ptr [ecx + 0x9c] */ r_edx = R32((u32)(r_ecx+0x9cu));
    /* 0043f699: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 0043f69c: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0043f69f: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 0043f6a2: cmp dword ptr [ebp - 0x54], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffacu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f6a6: je 0x43f6be */ if (fZ) goto L_0043f6be;
L_0043f6a8:; BB(0x0043f6a8);
    /* 0043f6a8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043f6aa: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0043f6ad: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043f6af: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0043f6b2: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043f6b4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x43f6b6u); call_ind(t); }
    /* 0043f6b6: mov dword ptr [ebp - 0xd0], eax */ W32((u32)(r_ebp+0xffffff30u), r_eax);
    /* 0043f6bc: jmp 0x43f6c8 */ goto L_0043f6c8;
L_0043f6be:; BB(0x0043f6be);
    /* 0043f6be: mov dword ptr [ebp - 0xd0], 0 */ W32((u32)(r_ebp+0xffffff30u), 0x0u);
L_0043f6c8:; BB(0x0043f6c8);
    /* 0043f6c8: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 0043f6ce: mov edx, dword ptr [ecx + 0xa0] */ r_edx = R32((u32)(r_ecx+0xa0u));
    /* 0043f6d4: mov dword ptr [ebp - 0x60], edx */ W32((u32)(r_ebp+0xffffffa0u), r_edx);
    /* 0043f6d7: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 0043f6da: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 0043f6dd: cmp dword ptr [ebp - 0x5c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f6e1: je 0x43f6f9 */ if (fZ) goto L_0043f6f9;
L_0043f6e3:; BB(0x0043f6e3);
    /* 0043f6e3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043f6e5: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0043f6e8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043f6ea: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0043f6ed: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043f6ef: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x43f6f1u); call_ind(t); }
    /* 0043f6f1: mov dword ptr [ebp - 0xd4], eax */ W32((u32)(r_ebp+0xffffff2cu), r_eax);
    /* 0043f6f7: jmp 0x43f703 */ goto L_0043f703;
L_0043f6f9:; BB(0x0043f6f9);
    /* 0043f6f9: mov dword ptr [ebp - 0xd4], 0 */ W32((u32)(r_ebp+0xffffff2cu), 0x0u);
L_0043f703:; BB(0x0043f703);
    /* 0043f703: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 0043f709: mov edx, dword ptr [ecx + 0xa4] */ r_edx = R32((u32)(r_ecx+0xa4u));
    /* 0043f70f: mov dword ptr [ebp - 0x68], edx */ W32((u32)(r_ebp+0xffffff98u), r_edx);
    /* 0043f712: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0043f715: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 0043f718: cmp dword ptr [ebp - 0x64], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff9cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f71c: je 0x43f734 */ if (fZ) goto L_0043f734;
L_0043f71e:; BB(0x0043f71e);
    /* 0043f71e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043f720: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0043f723: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043f725: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0043f728: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043f72a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x43f72cu); call_ind(t); }
    /* 0043f72c: mov dword ptr [ebp - 0xd8], eax */ W32((u32)(r_ebp+0xffffff28u), r_eax);
    /* 0043f732: jmp 0x43f73e */ goto L_0043f73e;
L_0043f734:; BB(0x0043f734);
    /* 0043f734: mov dword ptr [ebp - 0xd8], 0 */ W32((u32)(r_ebp+0xffffff28u), 0x0u);
L_0043f73e:; BB(0x0043f73e);
    /* 0043f73e: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 0043f744: mov edx, dword ptr [ecx + 0xa8] */ r_edx = R32((u32)(r_ecx+0xa8u));
    /* 0043f74a: mov dword ptr [ebp - 0x70], edx */ W32((u32)(r_ebp+0xffffff90u), r_edx);
    /* 0043f74d: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 0043f750: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 0043f753: cmp dword ptr [ebp - 0x6c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff94u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f757: je 0x43f76f */ if (fZ) goto L_0043f76f;
L_0043f759:; BB(0x0043f759);
    /* 0043f759: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043f75b: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0043f75e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043f760: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0043f763: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043f765: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x43f767u); call_ind(t); }
    /* 0043f767: mov dword ptr [ebp - 0xdc], eax */ W32((u32)(r_ebp+0xffffff24u), r_eax);
    /* 0043f76d: jmp 0x43f779 */ goto L_0043f779;
L_0043f76f:; BB(0x0043f76f);
    /* 0043f76f: mov dword ptr [ebp - 0xdc], 0 */ W32((u32)(r_ebp+0xffffff24u), 0x0u);
L_0043f779:; BB(0x0043f779);
    /* 0043f779: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 0043f77f: mov edx, dword ptr [ecx + 0xac] */ r_edx = R32((u32)(r_ecx+0xacu));
    /* 0043f785: mov dword ptr [ebp - 0x78], edx */ W32((u32)(r_ebp+0xffffff88u), r_edx);
    /* 0043f788: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 0043f78b: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 0043f78e: cmp dword ptr [ebp - 0x74], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f792: je 0x43f7aa */ if (fZ) goto L_0043f7aa;
L_0043f794:; BB(0x0043f794);
    /* 0043f794: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043f796: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0043f799: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043f79b: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0043f79e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043f7a0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x43f7a2u); call_ind(t); }
    /* 0043f7a2: mov dword ptr [ebp - 0xe0], eax */ W32((u32)(r_ebp+0xffffff20u), r_eax);
    /* 0043f7a8: jmp 0x43f7b4 */ goto L_0043f7b4;
L_0043f7aa:; BB(0x0043f7aa);
    /* 0043f7aa: mov dword ptr [ebp - 0xe0], 0 */ W32((u32)(r_ebp+0xffffff20u), 0x0u);
L_0043f7b4:; BB(0x0043f7b4);
    /* 0043f7b4: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0043f7bb: jmp 0x43f7c6 */ goto L_0043f7c6;
L_0043f7bd:; BB(0x0043f7bd);
    /* 0043f7bd: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043f7c0: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043f7c3: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0043f7c6:; BB(0x0043f7c6);
    /* 0043f7c6: cmp dword ptr [ebp - 0x10], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043f7ca: jge 0x43f8b6 */ if ((fS==fO)) goto L_0043f8b6;
L_0043f7d0:; BB(0x0043f7d0);
    /* 0043f7d0: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043f7d3: mov eax, dword ptr [ebp - 0xac] */ r_eax = R32((u32)(r_ebp+0xffffff54u));
    /* 0043f7d9: mov ecx, dword ptr [eax + edx*4 + 0xb4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xb4u));
    /* 0043f7e0: mov dword ptr [ebp - 0x80], ecx */ W32((u32)(r_ebp+0xffffff80u), r_ecx);
    /* 0043f7e3: mov edx, dword ptr [ebp - 0x80] */ r_edx = R32((u32)(r_ebp+0xffffff80u));
    /* 0043f7e6: mov dword ptr [ebp - 0x7c], edx */ W32((u32)(r_ebp+0xffffff84u), r_edx);
    /* 0043f7e9: cmp dword ptr [ebp - 0x7c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff84u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f7ed: je 0x43f805 */ if (fZ) goto L_0043f805;
L_0043f7ef:; BB(0x0043f7ef);
    /* 0043f7ef: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043f7f1: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 0043f7f4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043f7f6: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 0043f7f9: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043f7fb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x43f7fdu); call_ind(t); }
    /* 0043f7fd: mov dword ptr [ebp - 0xe4], eax */ W32((u32)(r_ebp+0xffffff1cu), r_eax);
    /* 0043f803: jmp 0x43f80f */ goto L_0043f80f;
L_0043f805:; BB(0x0043f805);
    /* 0043f805: mov dword ptr [ebp - 0xe4], 0 */ W32((u32)(r_ebp+0xffffff1cu), 0x0u);
L_0043f80f:; BB(0x0043f80f);
    /* 0043f80f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043f812: mov edx, dword ptr [ebp - 0xac] */ r_edx = R32((u32)(r_ebp+0xffffff54u));
    /* 0043f818: mov eax, dword ptr [edx + ecx*4 + 0xdc] */ r_eax = R32((u32)(r_edx+r_ecx*4+0xdcu));
    /* 0043f81f: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 0043f825: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0043f82b: mov dword ptr [ebp - 0x84], ecx */ W32((u32)(r_ebp+0xffffff7cu), r_ecx);
    /* 0043f831: cmp dword ptr [ebp - 0x84], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff7cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f838: je 0x43f856 */ if (fZ) goto L_0043f856;
L_0043f83a:; BB(0x0043f83a);
    /* 0043f83a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043f83c: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0043f842: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043f844: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0043f84a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043f84c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x43f84eu); call_ind(t); }
    /* 0043f84e: mov dword ptr [ebp - 0xe8], eax */ W32((u32)(r_ebp+0xffffff18u), r_eax);
    /* 0043f854: jmp 0x43f860 */ goto L_0043f860;
L_0043f856:; BB(0x0043f856);
    /* 0043f856: mov dword ptr [ebp - 0xe8], 0 */ W32((u32)(r_ebp+0xffffff18u), 0x0u);
L_0043f860:; BB(0x0043f860);
    /* 0043f860: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043f863: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 0043f869: mov edx, dword ptr [ecx + eax*4 + 0xf0] */ r_edx = R32((u32)(r_ecx+r_eax*4+0xf0u));
    /* 0043f870: mov dword ptr [ebp - 0x90], edx */ W32((u32)(r_ebp+0xffffff70u), r_edx);
    /* 0043f876: mov eax, dword ptr [ebp - 0x90] */ r_eax = R32((u32)(r_ebp+0xffffff70u));
    /* 0043f87c: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 0043f882: cmp dword ptr [ebp - 0x8c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff74u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f889: je 0x43f8a7 */ if (fZ) goto L_0043f8a7;
L_0043f88b:; BB(0x0043f88b);
    /* 0043f88b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043f88d: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 0043f893: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043f895: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 0043f89b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043f89d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x43f89fu); call_ind(t); }
    /* 0043f89f: mov dword ptr [ebp - 0xec], eax */ W32((u32)(r_ebp+0xffffff14u), r_eax);
    /* 0043f8a5: jmp 0x43f8b1 */ goto L_0043f8b1;
L_0043f8a7:; BB(0x0043f8a7);
    /* 0043f8a7: mov dword ptr [ebp - 0xec], 0 */ W32((u32)(r_ebp+0xffffff14u), 0x0u);
L_0043f8b1:; BB(0x0043f8b1);
    /* 0043f8b1: jmp 0x43f7bd */ goto L_0043f7bd;
L_0043f8b6:; BB(0x0043f8b6);
    /* 0043f8b6: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0043f8bd: jmp 0x43f8c8 */ goto L_0043f8c8;
L_0043f8bf:; BB(0x0043f8bf);
    /* 0043f8bf: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043f8c2: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043f8c5: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0043f8c8:; BB(0x0043f8c8);
    /* 0043f8c8: cmp dword ptr [ebp - 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043f8cc: jge 0x43f921 */ if ((fS==fO)) goto L_0043f921;
L_0043f8ce:; BB(0x0043f8ce);
    /* 0043f8ce: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043f8d1: mov eax, dword ptr [ebp - 0xac] */ r_eax = R32((u32)(r_ebp+0xffffff54u));
    /* 0043f8d7: mov ecx, dword ptr [eax + edx*4 + 0x104] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x104u));
    /* 0043f8de: mov dword ptr [ebp - 0x98], ecx */ W32((u32)(r_ebp+0xffffff68u), r_ecx);
    /* 0043f8e4: mov edx, dword ptr [ebp - 0x98] */ r_edx = R32((u32)(r_ebp+0xffffff68u));
    /* 0043f8ea: mov dword ptr [ebp - 0x94], edx */ W32((u32)(r_ebp+0xffffff6cu), r_edx);
    /* 0043f8f0: cmp dword ptr [ebp - 0x94], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff6cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f8f7: je 0x43f915 */ if (fZ) goto L_0043f915;
L_0043f8f9:; BB(0x0043f8f9);
    /* 0043f8f9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043f8fb: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 0043f901: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043f903: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 0043f909: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043f90b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x43f90du); call_ind(t); }
    /* 0043f90d: mov dword ptr [ebp - 0xf0], eax */ W32((u32)(r_ebp+0xffffff10u), r_eax);
    /* 0043f913: jmp 0x43f91f */ goto L_0043f91f;
L_0043f915:; BB(0x0043f915);
    /* 0043f915: mov dword ptr [ebp - 0xf0], 0 */ W32((u32)(r_ebp+0xffffff10u), 0x0u);
L_0043f91f:; BB(0x0043f91f);
    /* 0043f91f: jmp 0x43f8bf */ goto L_0043f8bf;
L_0043f921:; BB(0x0043f921);
    /* 0043f921: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 0043f927: mov edx, dword ptr [ecx + 0x110] */ r_edx = R32((u32)(r_ecx+0x110u));
    /* 0043f92d: mov dword ptr [ebp - 0xa0], edx */ W32((u32)(r_ebp+0xffffff60u), r_edx);
    /* 0043f933: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 0043f939: mov dword ptr [ebp - 0x9c], eax */ W32((u32)(r_ebp+0xffffff64u), r_eax);
    /* 0043f93f: cmp dword ptr [ebp - 0x9c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff64u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f946: je 0x43f964 */ if (fZ) goto L_0043f964;
L_0043f948:; BB(0x0043f948);
    /* 0043f948: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043f94a: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 0043f950: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043f952: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 0043f958: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043f95a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x43f95cu); call_ind(t); }
    /* 0043f95c: mov dword ptr [ebp - 0xf4], eax */ W32((u32)(r_ebp+0xffffff0cu), r_eax);
    /* 0043f962: jmp 0x43f96e */ goto L_0043f96e;
L_0043f964:; BB(0x0043f964);
    /* 0043f964: mov dword ptr [ebp - 0xf4], 0 */ W32((u32)(r_ebp+0xffffff0cu), 0x0u);
L_0043f96e:; BB(0x0043f96e);
    /* 0043f96e: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0043f975: jmp 0x43f980 */ goto L_0043f980;
L_0043f977:; BB(0x0043f977);
    /* 0043f977: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043f97a: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043f97d: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0043f980:; BB(0x0043f980);
    /* 0043f980: cmp dword ptr [ebp - 0x10], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043f984: jge 0x43f9d9 */ if ((fS==fO)) goto L_0043f9d9;
L_0043f986:; BB(0x0043f986);
    /* 0043f986: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043f989: mov eax, dword ptr [ebp - 0xac] */ r_eax = R32((u32)(r_ebp+0xffffff54u));
    /* 0043f98f: mov ecx, dword ptr [eax + edx*4 + 0x114] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x114u));
    /* 0043f996: mov dword ptr [ebp - 0xa8], ecx */ W32((u32)(r_ebp+0xffffff58u), r_ecx);
    /* 0043f99c: mov edx, dword ptr [ebp - 0xa8] */ r_edx = R32((u32)(r_ebp+0xffffff58u));
    /* 0043f9a2: mov dword ptr [ebp - 0xa4], edx */ W32((u32)(r_ebp+0xffffff5cu), r_edx);
    /* 0043f9a8: cmp dword ptr [ebp - 0xa4], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff5cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f9af: je 0x43f9cd */ if (fZ) goto L_0043f9cd;
L_0043f9b1:; BB(0x0043f9b1);
    /* 0043f9b1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043f9b3: mov eax, dword ptr [ebp - 0xa4] */ r_eax = R32((u32)(r_ebp+0xffffff5cu));
    /* 0043f9b9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043f9bb: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0043f9c1: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043f9c3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x43f9c5u); call_ind(t); }
    /* 0043f9c5: mov dword ptr [ebp - 0xf8], eax */ W32((u32)(r_ebp+0xffffff08u), r_eax);
    /* 0043f9cb: jmp 0x43f9d7 */ goto L_0043f9d7;
L_0043f9cd:; BB(0x0043f9cd);
    /* 0043f9cd: mov dword ptr [ebp - 0xf8], 0 */ W32((u32)(r_ebp+0xffffff08u), 0x0u);
L_0043f9d7:; BB(0x0043f9d7);
    /* 0043f9d7: jmp 0x43f977 */ goto L_0043f977;
L_0043f9d9:; BB(0x0043f9d9);
    /* 0043f9d9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0043f9e0: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 0043f9e6: call 0x5e9e40 */ r_esp -= 4; W32(r_esp, 0x43f9ebu); f_005e9e40();
    /* 0043f9eb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043f9ee: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0043f9f5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043f9f6: mov esp, ebp */ r_esp = r_ebp;
    /* 0043f9f8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043f9f9: ret  */ FN_RET(0x0043f430); r_esp += 4; return;
}

