#include "protos.h"

void f_004a7250(void) /* sub_4A7250 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004a7250);
    /* 004a7250: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a7251: mov ebp, esp */ r_ebp = r_esp;
    /* 004a7253: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a7254: mov ax, word ptr [ebp + 0xc] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 004a7258: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a7259: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a725f: call 0x4d5380 */ r_esp -= 4; W32(r_esp, 0x4a7264u); f_004d5380();
    /* 004a7264: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 004a7268: cmp dword ptr [ebp + 8], 5 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a726c: jne 0x4a729d */ if (!fZ) goto L_004a729d;
L_004a726e:; BB(0x004a726e);
    /* 004a726e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a7274: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a7277: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x4a727cu); f_004f6640();
    /* 004a727c: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004a727f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a7281: je 0x4a729d */ if (fZ) goto L_004a729d;
L_004a7283:; BB(0x004a7283);
    /* 004a7283: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004a7287: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004a728b: mov eax, 0x64 */ r_eax = 0x64u;
    /* 004a7290: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004a7292: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004a7293: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004a7295: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004a7297: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a7299: mov word ptr [ebp - 4], cx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_ecx);
L_004a729d:; BB(0x004a729d);
    /* 004a729d: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004a72a1: mov esp, ebp */ r_esp = r_ebp;
    /* 004a72a3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a72a4: ret  */ FN_RET(0x004a7250); r_esp += 4; return;
}

void f_004a72b0(void) /* sub_4A72B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004a72b0);
    /* 004a72b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a72b1: mov ebp, esp */ r_ebp = r_esp;
    /* 004a72b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004a72b5: push 0x6a123f */ { u32 v = 0x6a123fu; r_esp -= 4; W32(r_esp, v); }
    /* 004a72ba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004a72c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a72c1: sub esp, 0xac */ {  u32 a = r_esp; u32 b = 0xacu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a72c7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004a72c8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004a72c9: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 004a72ce: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a72d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a72d1: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 004a72d4: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 004a72da: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a72e0: call 0x47e420 */ r_esp -= 4; W32(r_esp, 0x4a72e5u); f_0047e420();
    /* 004a72e5: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 004a72e8: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a72eb: movsx ecx, word ptr [eax*2 + 0x791d80] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax*2+0x791d80u));
    /* 004a72f3: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a72f6: je 0x4a772a */ if (fZ) goto L_004a772a;
L_004a72fc:; BB(0x004a72fc);
    /* 004a72fc: lea edx, [ebp - 0x18] */ r_edx = (u32)(r_ebp+0xffffffe8u);
    /* 004a72ff: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a7300: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a7306: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x4a730bu); f_004c7c40();
    /* 004a730b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004a7312: cmp dword ptr [ebp + 8], 5 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a7316: jge 0x4a7402 */ if ((fS==fO)) goto L_004a7402;
L_004a731c:; BB(0x004a731c);
    /* 004a731c: mov word ptr [ebp - 0x1c], 0 */ W16((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 004a7322: mov word ptr [ebp - 0x24], 0 */ W16((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004a7328: jmp 0x4a7336 */ goto L_004a7336;
L_004a732a:; BB(0x004a732a);
    /* 004a732a: mov ax, word ptr [ebp - 0x24] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffdcu))) & 0xffffu);
    /* 004a732e: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004a7332: mov word ptr [ebp - 0x24], ax */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_eax);
L_004a7336:; BB(0x004a7336);
    /* 004a7336: movsx esi, word ptr [ebp - 0x24] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004a733a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a7340: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4a7345u); f_0047f950();
    /* 004a7345: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a7347: jge 0x4a73a5 */ if ((fS==fO)) goto L_004a73a5;
L_004a7349:; BB(0x004a7349);
    /* 004a7349: movsx ecx, word ptr [ebp - 0x24] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004a734d: cmp ecx, dword ptr [ebp - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a7350: jne 0x4a7354 */ if (!fZ) goto L_004a7354;
L_004a7352:; BB(0x004a7352);
    /* 004a7352: jmp 0x4a732a */ goto L_004a732a;
L_004a7354:; BB(0x004a7354);
    /* 004a7354: movsx edx, word ptr [ebp - 0x24] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004a7358: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a7359: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a735f: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4a7364u); f_0047e390();
    /* 004a7364: mov ecx, eax */ r_ecx = r_eax;
    /* 004a7366: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x4a736bu); f_004c7010();
    /* 004a736b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a736e: jne 0x4a73a3 */ if (!fZ) goto L_004a73a3;
L_004a7370:; BB(0x004a7370);
    /* 004a7370: movsx eax, word ptr [ebp - 0x24] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004a7374: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a7375: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a737b: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4a7380u); f_0047e390();
    /* 004a7380: mov ecx, eax */ r_ecx = r_eax;
    /* 004a7382: call 0x4c7050 */ r_esp -= 4; W32(r_esp, 0x4a7387u); f_004c7050();
    /* 004a7387: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a7388: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a738e: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a7391: call 0x4f6a90 */ r_esp -= 4; W32(r_esp, 0x4a7396u); f_004f6a90();
    /* 004a7396: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 004a7399: movsx edx, word ptr [ebp - 0x1c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 004a739d: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004a739f: mov word ptr [ebp - 0x1c], dx */ W16((u32)(r_ebp+0xffffffe4u), (u16)r_edx);
L_004a73a3:; BB(0x004a73a3);
    /* 004a73a3: jmp 0x4a732a */ goto L_004a732a;
L_004a73a5:; BB(0x004a73a5);
    /* 004a73a5: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a73ab: call 0x4d56d0 */ r_esp -= 4; W32(r_esp, 0x4a73b0u); f_004d56d0();
    /* 004a73b0: mov word ptr [ebp - 0x20], ax */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_eax);
    /* 004a73b4: movsx eax, word ptr [ebp - 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe0u));
    /* 004a73b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a73b9: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a73beu); f_0062fbf0();
    /* 004a73be: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a73c1: mov esi, eax */ r_esi = r_eax;
    /* 004a73c3: movsx ecx, word ptr [ebp - 0x20] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe0u));
    /* 004a73c7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a73c8: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a73cdu); f_0062fbf0();
    /* 004a73cd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a73d0: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004a73d2: movsx edi, word ptr [ebp - 0x1c] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 004a73d6: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a73dc: call 0x4d5690 */ r_esp -= 4; W32(r_esp, 0x4a73e1u); f_004d5690();
    /* 004a73e1: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 004a73e4: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004a73e7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a73e8: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a73edu); f_0062fbf0();
    /* 004a73ed: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a73f0: imul edi, eax */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_eax; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004a73f3: sub esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004a73f5: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a73f8: mov word ptr [eax*2 + 0x791798], si */ W16((u32)(r_eax*2+0x791798u), (u16)r_esi);
    /* 004a7400: jmp 0x4a740f */ goto L_004a740f;
L_004a7402:; BB(0x004a7402);
    /* 004a7402: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a7405: mov word ptr [ecx*2 + 0x791798], 0xa */ W16((u32)(r_ecx*2+0x791798u), 0xau);
L_004a740f:; BB(0x004a740f);
    /* 004a740f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004a7411: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a7414: imul edx, edx, 0x18 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x18u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004a7417: add edx, 0x791460 */ {  u32 a = r_edx; u32 b = 0x791460u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004a741d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a741e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a7421: imul eax, eax, 0x18 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x18u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004a7424: add eax, 0x7919d8 */ {  u32 a = r_eax; u32 b = 0x7919d8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004a7429: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a742a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a742d: imul ecx, ecx, 0x18 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x18u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004a7430: add ecx, 0x7915c8 */ {  u32 a = r_ecx; u32 b = 0x7915c8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a7436: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a7437: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a743a: mov edx, esp */ r_edx = r_esp;
    /* 004a743c: mov dword ptr [ebp - 0x58], esp */ W32((u32)(r_ebp+0xffffffa8u), r_esp);
    /* 004a743f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a7440: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004a7445: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 004a7448: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x4a744du); f_004c7c40();
    /* 004a744d: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 004a7450: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 004a7453: call 0x491df0 */ r_esp -= 4; W32(r_esp, 0x4a7458u); f_00491df0();
    /* 004a7458: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004a745a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a745d: imul ecx, ecx, 0x18 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x18u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004a7460: add ecx, 0x791464 */ {  u32 a = r_ecx; u32 b = 0x791464u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a7466: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a7467: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a746a: imul edx, edx, 0x18 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x18u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004a746d: add edx, 0x7919dc */ {  u32 a = r_edx; u32 b = 0x7919dcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004a7473: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a7474: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a7477: imul eax, eax, 0x18 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x18u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004a747a: add eax, 0x7915cc */ {  u32 a = r_eax; u32 b = 0x7915ccu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004a747f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a7480: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a7483: mov ecx, esp */ r_ecx = r_esp;
    /* 004a7485: mov dword ptr [ebp - 0x5c], esp */ W32((u32)(r_ebp+0xffffffa4u), r_esp);
    /* 004a7488: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a7489: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004a748f: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 004a7492: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x4a7497u); f_004c7c40();
    /* 004a7497: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 004a749a: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 004a749d: call 0x491df0 */ r_esp -= 4; W32(r_esp, 0x4a74a2u); f_00491df0();
    /* 004a74a2: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a74a5: lea ecx, [eax*4 + 0x791688] */ r_ecx = (u32)(r_eax*4+0x791688u);
    /* 004a74ac: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a74ad: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a74b0: lea eax, [edx*4 + 0x7915a8] */ r_eax = (u32)(r_edx*4+0x7915a8u);
    /* 004a74b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a74b8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a74bb: lea edx, [ecx*4 + 0x791560] */ r_edx = (u32)(r_ecx*4+0x791560u);
    /* 004a74c2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a74c3: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a74c6: lea ecx, [eax*4 + 0x791420] */ r_ecx = (u32)(r_eax*4+0x791420u);
    /* 004a74cd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a74ce: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a74d1: lea eax, [edx*4 + 0x791d20] */ r_eax = (u32)(r_edx*4+0x791d20u);
    /* 004a74d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a74d9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a74dc: lea edx, [ecx*4 + 0x791e10] */ r_edx = (u32)(r_ecx*4+0x791e10u);
    /* 004a74e3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a74e4: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a74e7: lea ecx, [eax*4 + 0x791588] */ r_ecx = (u32)(r_eax*4+0x791588u);
    /* 004a74ee: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a74ef: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a74f2: lea eax, [edx*4 + 0x791870] */ r_eax = (u32)(r_edx*4+0x791870u);
    /* 004a74f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a74fa: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a74fd: lea edx, [ecx*4 + 0x791ac0] */ r_edx = (u32)(r_ecx*4+0x791ac0u);
    /* 004a7504: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a7505: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a7508: lea ecx, [eax*4 + 0x791848] */ r_ecx = (u32)(r_eax*4+0x791848u);
    /* 004a750f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a7510: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a7513: lea eax, [edx*4 + 0x791894] */ r_eax = (u32)(r_edx*4+0x791894u);
    /* 004a751a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a751b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a751e: lea edx, [ecx*4 + 0x7918b4] */ r_edx = (u32)(r_ecx*4+0x7918b4u);
    /* 004a7525: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a7526: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a7529: lea ecx, [eax*4 + 0x7916a8] */ r_ecx = (u32)(r_eax*4+0x7916a8u);
    /* 004a7530: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a7531: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a7534: lea eax, [edx*4 + 0x7918d4] */ r_eax = (u32)(r_edx*4+0x7918d4u);
    /* 004a753b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a753c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a753f: lea edx, [ecx*4 + 0x791938] */ r_edx = (u32)(r_ecx*4+0x791938u);
    /* 004a7546: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a7547: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a754a: lea ecx, [eax*4 + 0x791778] */ r_ecx = (u32)(r_eax*4+0x791778u);
    /* 004a7551: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a7552: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a7555: lea eax, [edx*4 + 0x791ce0] */ r_eax = (u32)(r_edx*4+0x791ce0u);
    /* 004a755c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a755d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a7560: lea edx, [ecx*4 + 0x7916c8] */ r_edx = (u32)(r_ecx*4+0x7916c8u);
    /* 004a7567: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a7568: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a756b: lea ecx, [eax*4 + 0x791998] */ r_ecx = (u32)(r_eax*4+0x791998u);
    /* 004a7572: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a7573: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a7576: mov edx, esp */ r_edx = r_esp;
    /* 004a7578: mov dword ptr [ebp - 0x60], esp */ W32((u32)(r_ebp+0xffffffa0u), r_esp);
    /* 004a757b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a757c: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004a7581: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 004a7584: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x4a7589u); f_004c7c40();
    /* 004a7589: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 004a758c: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 004a758f: call 0x494d50 */ r_esp -= 4; W32(r_esp, 0x4a7594u); f_00494d50();
    /* 004a7594: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a7597: mov dx, word ptr [ebp + 8] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 004a759b: mov word ptr [ecx*2 + 0x791d80], dx */ W16((u32)(r_ecx*2+0x791d80u), (u16)r_edx);
    /* 004a75a3: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a75a6: mov cx, word ptr [ebp + 0x10] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0x10u))) & 0xffffu);
    /* 004a75aa: mov word ptr [eax*2 + 0x7919b8], cx */ W16((u32)(r_eax*2+0x7919b8u), (u16)r_ecx);
    /* 004a75b2: cmp dword ptr [ebp + 8], 3 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a75b6: jne 0x4a7670 */ if (!fZ) goto L_004a7670;
L_004a75bc:; BB(0x004a75bc);
    /* 004a75bc: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 004a75be: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a75c3u); f_0062fbf0();
    /* 004a75c3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a75c6: mov esi, eax */ r_esi = r_eax;
    /* 004a75c8: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 004a75ca: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a75cfu); f_0062fbf0();
    /* 004a75cf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a75d2: lea esi, [esi + eax + 0x3c] */ r_esi = (u32)(r_esi+r_eax+0x3cu);
    /* 004a75d6: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 004a75d8: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a75ddu); f_0062fbf0();
    /* 004a75dd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a75e0: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004a75e2: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 004a75e4: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a75e9u); f_0062fbf0();
    /* 004a75e9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a75ec: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004a75ee: mov dword ptr [ebp - 0x70], esi */ W32((u32)(r_ebp+0xffffff90u), r_esi);
    /* 004a75f1: fild dword ptr [ebp - 0x70] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff90u)));
    /* 004a75f4: fmul qword ptr [0x6bc270] */ ST(0) = ST(0) * R_F64((u32)(0x6bc270u));
    /* 004a75fa: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a75fd: fstp qword ptr [edx*8 + 0x791dd0] */ W_F64((u32)(r_edx*8+0x791dd0u), ST(0)); FPOP();
    /* 004a7604: mov word ptr [ebp - 0x28], 0 */ W16((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 004a760a: jmp 0x4a7618 */ goto L_004a7618;
L_004a760c:; BB(0x004a760c);
    /* 004a760c: mov ax, word ptr [ebp - 0x28] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffd8u))) & 0xffffu);
    /* 004a7610: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004a7614: mov word ptr [ebp - 0x28], ax */ W16((u32)(r_ebp+0xffffffd8u), (u16)r_eax);
L_004a7618:; BB(0x004a7618);
    /* 004a7618: movsx esi, word ptr [ebp - 0x28] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd8u));
    /* 004a761c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a7622: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4a7627u); f_0047f950();
    /* 004a7627: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a7629: jge 0x4a7670 */ if ((fS==fO)) goto L_004a7670;
L_004a762b:; BB(0x004a762b);
    /* 004a762b: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 004a762d: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a7632u); f_0062fbf0();
    /* 004a7632: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a7635: mov esi, eax */ r_esi = r_eax;
    /* 004a7637: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 004a7639: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a763eu); f_0062fbf0();
    /* 004a763e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a7641: lea esi, [esi + eax + 0x19] */ r_esi = (u32)(r_esi+r_eax+0x19u);
    /* 004a7645: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 004a7647: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a764cu); f_0062fbf0();
    /* 004a764c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a764f: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004a7651: mov dword ptr [ebp - 0x74], esi */ W32((u32)(r_ebp+0xffffff8cu), r_esi);
    /* 004a7654: fild dword ptr [ebp - 0x74] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff8cu)));
    /* 004a7657: fmul qword ptr [0x6bc270] */ ST(0) = ST(0) * R_F64((u32)(0x6bc270u));
    /* 004a765d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a7660: shl ecx, 6 */ { u32 c = (6u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 004a7663: movsx edx, word ptr [ebp - 0x28] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd8u));
    /* 004a7667: fstp qword ptr [ecx + edx*8 + 0x791ae0] */ W_F64((u32)(r_ecx+r_edx*8+0x791ae0u), ST(0)); FPOP();
    /* 004a766e: jmp 0x4a760c */ goto L_004a760c;
L_004a7670:; BB(0x004a7670);
    /* 004a7670: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 004a7673: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a7674: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 004a7677: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a7678: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004a767b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a767c: call 0x4a7fd0 */ r_esp -= 4; W32(r_esp, 0x4a7681u); f_004a7fd0();
    /* 004a7681: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a7684: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a7687: fstp qword ptr [eax*8 + 0x791d90] */ W_F64((u32)(r_eax*8+0x791d90u), ST(0)); FPOP();
    /* 004a768e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a7691: mov word ptr [ecx*2 + 0x791768], 1 */ W16((u32)(r_ecx*2+0x791768u), 0x1u);
    /* 004a769b: cmp dword ptr [ebp + 8], 5 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a769f: jne 0x4a7716 */ if (!fZ) goto L_004a7716;
L_004a76a1:; BB(0x004a76a1);
    /* 004a76a1: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a76a4: imul edx, edx, 0x18 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x18u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004a76a7: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a76aa: imul eax, eax, 0x18 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x18u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004a76ad: mov ecx, dword ptr [edx + 0x7915c8] */ r_ecx = R32((u32)(r_edx+0x7915c8u));
    /* 004a76b3: add ecx, dword ptr [eax + 0x7915cc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x7915ccu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 004a76b9: jne 0x4a76c8 */ if (!fZ) goto L_004a76c8;
L_004a76bb:; BB(0x004a76bb);
    /* 004a76bb: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a76be: mov word ptr [edx*2 + 0x791768], 6 */ W16((u32)(r_edx*2+0x791768u), 0x6u);
L_004a76c8:; BB(0x004a76c8);
    /* 004a76c8: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a76cb: imul eax, eax, 0x18 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x18u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004a76ce: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a76d1: imul ecx, ecx, 0x18 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x18u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004a76d4: mov edx, dword ptr [eax + 0x7915c8] */ r_edx = R32((u32)(r_eax+0x7915c8u));
    /* 004a76da: add edx, dword ptr [ecx + 0x7919d8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x7919d8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 004a76e0: jne 0x4a76ef */ if (!fZ) goto L_004a76ef;
L_004a76e2:; BB(0x004a76e2);
    /* 004a76e2: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a76e5: mov word ptr [eax*2 + 0x791768], 6 */ W16((u32)(r_eax*2+0x791768u), 0x6u);
L_004a76ef:; BB(0x004a76ef);
    /* 004a76ef: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a76f2: imul ecx, ecx, 0x18 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x18u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004a76f5: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a76f8: imul edx, edx, 0x18 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x18u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004a76fb: mov eax, dword ptr [ecx + 0x7915cc] */ r_eax = R32((u32)(r_ecx+0x7915ccu));
    /* 004a7701: add eax, dword ptr [edx + 0x7919dc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x7919dcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 004a7707: jne 0x4a7716 */ if (!fZ) goto L_004a7716;
L_004a7709:; BB(0x004a7709);
    /* 004a7709: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a770c: mov word ptr [ecx*2 + 0x791768], 6 */ W16((u32)(r_ecx*2+0x791768u), 0x6u);
L_004a7716:; BB(0x004a7716);
    /* 004a7716: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004a771d: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 004a7720: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x4a7725u); f_00484470();
    /* 004a7725: jmp 0x4a77b4 */ goto L_004a77b4;
L_004a772a:; BB(0x004a772a);
    /* 004a772a: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a772d: movsx eax, word ptr [edx*2 + 0x7919b8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx*2+0x7919b8u));
    /* 004a7735: cmp eax, dword ptr [ebp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a7738: je 0x4a7796 */ if (fZ) goto L_004a7796;
L_004a773a:; BB(0x004a773a);
    /* 004a773a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a773d: movsx edx, word ptr [ecx*2 + 0x791768] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*2+0x791768u));
    /* 004a7745: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a7748: je 0x4a7796 */ if (fZ) goto L_004a7796;
L_004a774a:; BB(0x004a774a);
    /* 004a774a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a774d: movsx ecx, word ptr [eax*2 + 0x791768] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax*2+0x791768u));
    /* 004a7755: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a7758: je 0x4a7796 */ if (fZ) goto L_004a7796;
L_004a775a:; BB(0x004a775a);
    /* 004a775a: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a775d: mov ax, word ptr [ebp + 0x10] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0x10u))) & 0xffffu);
    /* 004a7761: mov word ptr [edx*2 + 0x7919b8], ax */ W16((u32)(r_edx*2+0x7919b8u), (u16)r_eax);
    /* 004a7769: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 004a776c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a776d: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 004a7770: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a7771: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004a7774: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a7775: call 0x4a7fd0 */ r_esp -= 4; W32(r_esp, 0x4a777au); f_004a7fd0();
    /* 004a777a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a777d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a7780: fstp qword ptr [ecx*8 + 0x791d90] */ W_F64((u32)(r_ecx*8+0x791d90u), ST(0)); FPOP();
    /* 004a7787: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a778a: mov word ptr [edx*2 + 0x791768], 1 */ W16((u32)(r_edx*2+0x791768u), 0x1u);
    /* 004a7794: jmp 0x4a77b4 */ goto L_004a77b4;
L_004a7796:; BB(0x004a7796);
    /* 004a7796: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 004a7799: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a779a: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 004a779d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a779e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004a77a1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a77a2: call 0x4a7fd0 */ r_esp -= 4; W32(r_esp, 0x4a77a7u); f_004a7fd0();
    /* 004a77a7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a77aa: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a77ad: fstp qword ptr [eax*8 + 0x791d90] */ W_F64((u32)(r_eax*8+0x791d90u), ST(0)); FPOP();
L_004a77b4:; BB(0x004a77b4);
    /* 004a77b4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a77b7: movsx edx, word ptr [ecx*2 + 0x791768] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*2+0x791768u));
    /* 004a77bf: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a77c2: jne 0x4a7843 */ if (!fZ) goto L_004a7843;
L_004a77c4:; BB(0x004a77c4);
    /* 004a77c4: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004a77c6: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a77cc: call 0x4c79d0 */ r_esp -= 4; W32(r_esp, 0x4a77d1u); f_004c79d0();
    /* 004a77d1: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a77d7: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a77da: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x4a77dfu); f_004f6640();
    /* 004a77df: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004a77e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a77e4: je 0x4a7818 */ if (fZ) goto L_004a7818;
L_004a77e6:; BB(0x004a77e6);
    /* 004a77e6: call 0x4a39c0 */ r_esp -= 4; W32(r_esp, 0x4a77ebu); f_004a39c0();
    /* 004a77eb: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004a77ee: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a77f0: jne 0x4a780c */ if (!fZ) goto L_004a780c;
L_004a77f2:; BB(0x004a77f2);
    /* 004a77f2: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 004a77f4: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a77f9u); f_0062fbf0();
    /* 004a77f9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a77fc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a77fe: jne 0x4a780c */ if (!fZ) goto L_004a780c;
L_004a7800:; BB(0x004a7800);
    /* 004a7800: mov eax, 1 */ r_eax = 0x1u;
    /* 004a7805: jmp 0x4a7fb7 */ goto L_004a7fb7;
L_004a780c:; BB(0x004a780c);
    /* 004a780c: mov eax, 2 */ r_eax = 0x2u;
    /* 004a7811: jmp 0x4a7fb7 */ goto L_004a7fb7;
L_004a7818:; BB(0x004a7818);
    /* 004a7818: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a781e: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a7821: call 0x4f66e0 */ r_esp -= 4; W32(r_esp, 0x4a7826u); f_004f66e0();
    /* 004a7826: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004a7829: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a782b: je 0x4a7839 */ if (fZ) goto L_004a7839;
L_004a782d:; BB(0x004a782d);
    /* 004a782d: mov eax, 4 */ r_eax = 0x4u;
    /* 004a7832: jmp 0x4a7fb7 */ goto L_004a7fb7;
L_004a7839:; BB(0x004a7839);
    /* 004a7839: mov eax, 3 */ r_eax = 0x3u;
    /* 004a783e: jmp 0x4a7fb7 */ goto L_004a7fb7;
L_004a7843:; BB(0x004a7843);
    /* 004a7843: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a7846: movsx ecx, word ptr [eax*2 + 0x791768] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax*2+0x791768u));
    /* 004a784e: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a7851: jne 0x4a79d4 */ if (!fZ) goto L_004a79d4;
L_004a7857:; BB(0x004a7857);
    /* 004a7857: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a785d: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a7860: call 0x4f6690 */ r_esp -= 4; W32(r_esp, 0x4a7865u); f_004f6690();
    /* 004a7865: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004a7868: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a786a: je 0x4a79b1 */ if (fZ) goto L_004a79b1;
L_004a7870:; BB(0x004a7870);
    /* 004a7870: fld qword ptr [0x6be528] */ FPUSH(R_F64((u32)(0x6be528u)));
    /* 004a7876: fstp qword ptr [ebp - 0x3c] */ W_F64((u32)(r_ebp+0xffffffc4u), ST(0)); FPOP();
    /* 004a7879: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a787f: call 0x4c6df0 */ r_esp -= 4; W32(r_esp, 0x4a7884u); f_004c6df0();
    /* 004a7884: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 004a7887: fild dword ptr [ebp - 0x78] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff88u)));
    /* 004a788a: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 004a7890: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a7893: fadd qword ptr [eax*8 + 0x791d90] */ ST(0) = ST(0) + R_F64((u32)(r_eax*8+0x791d90u));
    /* 004a789a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a789d: fmul qword ptr [ecx*8 + 0x791d90] */ ST(0) = ST(0) * R_F64((u32)(r_ecx*8+0x791d90u));
    /* 004a78a4: fmul qword ptr [ebp - 0x3c] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xffffffc4u));
    /* 004a78a7: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a78ad: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a78b0: fstp qword ptr [ebp - 0x80] */ W_F64((u32)(r_ebp+0xffffff80u), ST(0)); FPOP();
    /* 004a78b3: call 0x4f67d0 */ r_esp -= 4; W32(r_esp, 0x4a78b8u); f_004f67d0();
    /* 004a78b8: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 004a78be: fild dword ptr [ebp - 0x84] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff7cu)));
    /* 004a78c4: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a78ca: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a78cd: fstp qword ptr [ebp - 0x8c] */ W_F64((u32)(r_ebp+0xffffff74u), ST(0)); FPOP();
    /* 004a78d3: call 0x4f6840 */ r_esp -= 4; W32(r_esp, 0x4a78d8u); f_004f6840();
    /* 004a78d8: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 004a78de: fild dword ptr [ebp - 0x90] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff70u)));
    /* 004a78e4: fdivr qword ptr [ebp - 0x8c] */ ST(0) = R_F64((u32)(r_ebp+0xffffff74u)) / ST(0);
    /* 004a78ea: fdivr qword ptr [ebp - 0x80] */ ST(0) = R_F64((u32)(r_ebp+0xffffff80u)) / ST(0);
    /* 004a78ed: fstp qword ptr [ebp - 0x34] */ W_F64((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 004a78f0: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a78f6: call 0x4d5a20 */ r_esp -= 4; W32(r_esp, 0x4a78fbu); f_004d5a20();
    /* 004a78fb: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 004a78fe: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 004a7901: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004a7904: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004a7907: mov word ptr [ebp - 0x2c], dx */ W16((u32)(r_ebp+0xffffffd4u), (u16)r_edx);
    /* 004a790b: movsx ecx, word ptr [ebp - 0x2c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd4u));
    /* 004a790f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a7910: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a7915u); f_0062fbf0();
    /* 004a7915: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a7918: mov esi, eax */ r_esi = r_eax;
    /* 004a791a: movsx edx, word ptr [ebp - 0x2c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd4u));
    /* 004a791e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a791f: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a7924u); f_0062fbf0();
    /* 004a7924: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a7927: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004a7929: movsx eax, word ptr [ebp - 0x2c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd4u));
    /* 004a792d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a792e: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a7933u); f_0062fbf0();
    /* 004a7933: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a7936: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004a7938: mov dword ptr [ebp - 0x94], esi */ W32((u32)(r_ebp+0xffffff6cu), r_esi);
    /* 004a793e: fild dword ptr [ebp - 0x94] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff6cu)));
    /* 004a7944: fdiv qword ptr [0x6be518] */ ST(0) = ST(0) / R_F64((u32)(0x6be518u));
    /* 004a794a: fld1  */ FPUSH(1.0);
    /* 004a794c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004a794e: fcomp qword ptr [ebp - 0x34] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xffffffccu))); FPOP();
    /* 004a7951: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004a7953: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 004a7956: jp 0x4a79a8 */ if (fP) goto L_004a79a8;
L_004a7958:; BB(0x004a7958);
    /* 004a7958: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 004a795b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a795c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004a795f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a7960: call 0x4a63a0 */ r_esp -= 4; W32(r_esp, 0x4a7965u); f_004a63a0();
    /* 004a7965: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a7968: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004a796b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a796d: je 0x4a7971 */ if (fZ) goto L_004a7971;
L_004a796f:; BB(0x004a796f);
    /* 004a796f: jmp 0x4a79a6 */ goto L_004a79a6;
L_004a7971:; BB(0x004a7971);
    /* 004a7971: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 004a7973: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a7978u); f_0062fbf0();
    /* 004a7978: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a797b: mov esi, eax */ r_esi = r_eax;
    /* 004a797d: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a7983: call 0x4d4f00 */ r_esp -= 4; W32(r_esp, 0x4a7988u); f_004d4f00();
    /* 004a7988: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 004a798b: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a798d: jge 0x4a799c */ if ((fS==fO)) goto L_004a799c;
L_004a798f:; BB(0x004a798f);
    /* 004a798f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a7992: mov word ptr [edx*2 + 0x791768], 2 */ W16((u32)(r_edx*2+0x791768u), 0x2u);
L_004a799c:; BB(0x004a799c);
    /* 004a799c: mov eax, 3 */ r_eax = 0x3u;
    /* 004a79a1: jmp 0x4a7fb7 */ goto L_004a7fb7;
L_004a79a6:; BB(0x004a79a6);
    /* 004a79a6: jmp 0x4a79af */ goto L_004a79af;
L_004a79a8:; BB(0x004a79a8);
    /* 004a79a8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a79aa: jmp 0x4a7fb7 */ goto L_004a7fb7;
L_004a79af:; BB(0x004a79af);
    /* 004a79af: jmp 0x4a79d4 */ goto L_004a79d4;
L_004a79b1:; BB(0x004a79b1);
    /* 004a79b1: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 004a79b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a79b5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004a79b8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a79b9: call 0x4a63a0 */ r_esp -= 4; W32(r_esp, 0x4a79beu); f_004a63a0();
    /* 004a79be: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a79c1: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004a79c4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a79c6: je 0x4a79ca */ if (fZ) goto L_004a79ca;
L_004a79c8:; BB(0x004a79c8);
    /* 004a79c8: jmp 0x4a79d4 */ goto L_004a79d4;
L_004a79ca:; BB(0x004a79ca);
    /* 004a79ca: mov eax, 1 */ r_eax = 0x1u;
    /* 004a79cf: jmp 0x4a7fb7 */ goto L_004a7fb7;
L_004a79d4:; BB(0x004a79d4);
    /* 004a79d4: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a79d7: movsx ecx, word ptr [eax*2 + 0x791768] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax*2+0x791768u));
    /* 004a79df: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a79e2: je 0x4a79f8 */ if (fZ) goto L_004a79f8;
L_004a79e4:; BB(0x004a79e4);
    /* 004a79e4: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a79e7: movsx eax, word ptr [edx*2 + 0x791768] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx*2+0x791768u));
    /* 004a79ef: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a79f2: jne 0x4a7b85 */ if (!fZ) goto L_004a7b85;
L_004a79f8:; BB(0x004a79f8);
    /* 004a79f8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a79fb: movsx edx, word ptr [ecx*2 + 0x791768] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*2+0x791768u));
    /* 004a7a03: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a7a06: jne 0x4a7a2f */ if (!fZ) goto L_004a7a2f;
L_004a7a08:; BB(0x004a7a08);
    /* 004a7a08: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a7a0e: call 0x47ce60 */ r_esp -= 4; W32(r_esp, 0x4a7a13u); f_0047ce60();
    /* 004a7a13: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a7a14: cmp dword ptr [ebp + 8], 5 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a7a18: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 004a7a1b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a7a1c: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a7a22: call 0x4c6ef0 */ r_esp -= 4; W32(r_esp, 0x4a7a27u); f_004c6ef0();
    /* 004a7a27: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 004a7a2d: jmp 0x4a7a40 */ goto L_004a7a40;
L_004a7a2f:; BB(0x004a7a2f);
    /* 004a7a2f: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a7a35: call 0x4c6f50 */ r_esp -= 4; W32(r_esp, 0x4a7a3au); f_004c6f50();
    /* 004a7a3a: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
L_004a7a40:; BB(0x004a7a40);
    /* 004a7a40: mov ecx, 0x64 */ r_ecx = 0x64u;
    /* 004a7a45: sub ecx, dword ptr [ebp - 0x98] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffff68u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004a7a4b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a7a4c: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a7a51u); f_0062fbf0();
    /* 004a7a51: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a7a54: mov dword ptr [ebp - 0x9c], eax */ W32((u32)(r_ebp+0xffffff64u), r_eax);
    /* 004a7a5a: fild dword ptr [ebp - 0x9c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff64u)));
    /* 004a7a60: fstp qword ptr [ebp - 0x44] */ W_F64((u32)(r_ebp+0xffffffbcu), ST(0)); FPOP();
    /* 004a7a63: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004a7a65: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004a7a68: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a7a69: call 0x4a7250 */ r_esp -= 4; W32(r_esp, 0x4a7a6eu); f_004a7250();
    /* 004a7a6e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a7a71: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 004a7a74: mov dword ptr [ebp - 0xa0], eax */ W32((u32)(r_ebp+0xffffff60u), r_eax);
    /* 004a7a7a: fild dword ptr [ebp - 0xa0] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff60u)));
    /* 004a7a80: fcomp qword ptr [ebp - 0x44] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xffffffbcu))); FPOP();
    /* 004a7a83: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004a7a85: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004a7a88: jne 0x4a7b80 */ if (!fZ) goto L_004a7b80;
L_004a7a8e:; BB(0x004a7a8e);
    /* 004a7a8e: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004a7a90: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a7a96: call 0x4c79d0 */ r_esp -= 4; W32(r_esp, 0x4a7a9bu); f_004c79d0();
    /* 004a7a9b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a7aa1: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a7aa4: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x4a7aa9u); f_004f6640();
    /* 004a7aa9: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004a7aac: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a7aae: jne 0x4a7adc */ if (!fZ) goto L_004a7adc;
L_004a7ab0:; BB(0x004a7ab0);
    /* 004a7ab0: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a7ab6: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a7ab9: call 0x4f66e0 */ r_esp -= 4; W32(r_esp, 0x4a7abeu); f_004f66e0();
    /* 004a7abe: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004a7ac1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a7ac3: jne 0x4a7adc */ if (!fZ) goto L_004a7adc;
L_004a7ac5:; BB(0x004a7ac5);
    /* 004a7ac5: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a7ac8: movsx ecx, word ptr [eax*2 + 0x791768] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax*2+0x791768u));
    /* 004a7ad0: cmp ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a7ad3: jne 0x4a7adc */ if (!fZ) goto L_004a7adc;
L_004a7ad5:; BB(0x004a7ad5);
    /* 004a7ad5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a7ad7: jmp 0x4a7fb7 */ goto L_004a7fb7;
L_004a7adc:; BB(0x004a7adc);
    /* 004a7adc: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 004a7ade: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a7ae3u); f_0062fbf0();
    /* 004a7ae3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a7ae6: mov esi, eax */ r_esi = r_eax;
    /* 004a7ae8: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a7aee: call 0x4d5590 */ r_esp -= 4; W32(r_esp, 0x4a7af3u); f_004d5590();
    /* 004a7af3: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 004a7af6: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a7af8: jge 0x4a7b09 */ if ((fS==fO)) goto L_004a7b09;
L_004a7afa:; BB(0x004a7afa);
    /* 004a7afa: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a7afd: mov word ptr [eax*2 + 0x791768], 4 */ W16((u32)(r_eax*2+0x791768u), 0x4u);
    /* 004a7b07: jmp 0x4a7b34 */ goto L_004a7b34;
L_004a7b09:; BB(0x004a7b09);
    /* 004a7b09: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 004a7b0b: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a7b10u); f_0062fbf0();
    /* 004a7b10: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a7b13: mov esi, eax */ r_esi = r_eax;
    /* 004a7b15: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a7b1b: call 0x4d55b0 */ r_esp -= 4; W32(r_esp, 0x4a7b20u); f_004d55b0();
    /* 004a7b20: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 004a7b23: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a7b25: jge 0x4a7b34 */ if ((fS==fO)) goto L_004a7b34;
L_004a7b27:; BB(0x004a7b27);
    /* 004a7b27: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a7b2a: mov word ptr [edx*2 + 0x791768], 1 */ W16((u32)(r_edx*2+0x791768u), 0x1u);
L_004a7b34:; BB(0x004a7b34);
    /* 004a7b34: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a7b3a: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a7b3d: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x4a7b42u); f_004f6640();
    /* 004a7b42: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004a7b45: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a7b47: je 0x4a7b55 */ if (fZ) goto L_004a7b55;
L_004a7b49:; BB(0x004a7b49);
    /* 004a7b49: mov eax, 2 */ r_eax = 0x2u;
    /* 004a7b4e: jmp 0x4a7fb7 */ goto L_004a7fb7;
L_004a7b55:; BB(0x004a7b55);
    /* 004a7b55: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a7b5b: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a7b5e: call 0x4f66e0 */ r_esp -= 4; W32(r_esp, 0x4a7b63u); f_004f66e0();
    /* 004a7b63: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004a7b66: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a7b68: je 0x4a7b76 */ if (fZ) goto L_004a7b76;
L_004a7b6a:; BB(0x004a7b6a);
    /* 004a7b6a: mov eax, 4 */ r_eax = 0x4u;
    /* 004a7b6f: jmp 0x4a7fb7 */ goto L_004a7fb7;
L_004a7b76:; BB(0x004a7b76);
    /* 004a7b76: mov eax, 3 */ r_eax = 0x3u;
    /* 004a7b7b: jmp 0x4a7fb7 */ goto L_004a7fb7;
L_004a7b80:; BB(0x004a7b80);
    /* 004a7b80: jmp 0x4a7f14 */ goto L_004a7f14;
L_004a7b85:; BB(0x004a7b85);
    /* 004a7b85: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a7b88: movsx eax, word ptr [edx*2 + 0x791768] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx*2+0x791768u));
    /* 004a7b90: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a7b93: je 0x4a7ba9 */ if (fZ) goto L_004a7ba9;
L_004a7b95:; BB(0x004a7b95);
    /* 004a7b95: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a7b98: movsx edx, word ptr [ecx*2 + 0x791768] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*2+0x791768u));
    /* 004a7ba0: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a7ba3: jne 0x4a7d4f */ if (!fZ) goto L_004a7d4f;
L_004a7ba9:; BB(0x004a7ba9);
    /* 004a7ba9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a7bac: movsx ecx, word ptr [eax*2 + 0x791768] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax*2+0x791768u));
    /* 004a7bb4: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a7bb7: jne 0x4a7be0 */ if (!fZ) goto L_004a7be0;
L_004a7bb9:; BB(0x004a7bb9);
    /* 004a7bb9: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a7bbf: call 0x47ce60 */ r_esp -= 4; W32(r_esp, 0x4a7bc4u); f_0047ce60();
    /* 004a7bc4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a7bc5: cmp dword ptr [ebp + 8], 5 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a7bc9: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 004a7bcc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a7bcd: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a7bd3: call 0x4c6ef0 */ r_esp -= 4; W32(r_esp, 0x4a7bd8u); f_004c6ef0();
    /* 004a7bd8: mov dword ptr [ebp - 0xa4], eax */ W32((u32)(r_ebp+0xffffff5cu), r_eax);
    /* 004a7bde: jmp 0x4a7bf1 */ goto L_004a7bf1;
L_004a7be0:; BB(0x004a7be0);
    /* 004a7be0: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a7be6: call 0x4c6f50 */ r_esp -= 4; W32(r_esp, 0x4a7bebu); f_004c6f50();
    /* 004a7beb: mov dword ptr [ebp - 0xa4], eax */ W32((u32)(r_ebp+0xffffff5cu), r_eax);
L_004a7bf1:; BB(0x004a7bf1);
    /* 004a7bf1: mov eax, 0x64 */ r_eax = 0x64u;
    /* 004a7bf6: sub eax, dword ptr [ebp - 0xa4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffff5cu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004a7bfc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a7bfd: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a7c02u); f_0062fbf0();
    /* 004a7c02: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a7c05: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 004a7c0b: fild dword ptr [ebp - 0xa8] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff58u)));
    /* 004a7c11: fstp qword ptr [ebp - 0x4c] */ W_F64((u32)(r_ebp+0xffffffb4u), ST(0)); FPOP();
    /* 004a7c14: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004a7c16: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004a7c19: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a7c1a: call 0x4a7250 */ r_esp -= 4; W32(r_esp, 0x4a7c1fu); f_004a7250();
    /* 004a7c1f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a7c22: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 004a7c25: mov dword ptr [ebp - 0xac], edx */ W32((u32)(r_ebp+0xffffff54u), r_edx);
    /* 004a7c2b: fild dword ptr [ebp - 0xac] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff54u)));
    /* 004a7c31: fcomp qword ptr [ebp - 0x4c] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xffffffb4u))); FPOP();
    /* 004a7c34: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004a7c36: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004a7c39: jne 0x4a7d4a */ if (!fZ) goto L_004a7d4a;
L_004a7c3f:; BB(0x004a7c3f);
    /* 004a7c3f: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004a7c41: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a7c47: call 0x4c79d0 */ r_esp -= 4; W32(r_esp, 0x4a7c4cu); f_004c79d0();
    /* 004a7c4c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a7c52: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a7c55: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x4a7c5au); f_004f6640();
    /* 004a7c5a: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004a7c5d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a7c5f: jne 0x4a7c8d */ if (!fZ) goto L_004a7c8d;
L_004a7c61:; BB(0x004a7c61);
    /* 004a7c61: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a7c67: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a7c6a: call 0x4f66e0 */ r_esp -= 4; W32(r_esp, 0x4a7c6fu); f_004f66e0();
    /* 004a7c6f: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004a7c72: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a7c74: jne 0x4a7c8d */ if (!fZ) goto L_004a7c8d;
L_004a7c76:; BB(0x004a7c76);
    /* 004a7c76: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a7c79: movsx eax, word ptr [edx*2 + 0x791768] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx*2+0x791768u));
    /* 004a7c81: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a7c84: jne 0x4a7c8d */ if (!fZ) goto L_004a7c8d;
L_004a7c86:; BB(0x004a7c86);
    /* 004a7c86: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a7c88: jmp 0x4a7fb7 */ goto L_004a7fb7;
L_004a7c8d:; BB(0x004a7c8d);
    /* 004a7c8d: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 004a7c8f: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a7c94u); f_0062fbf0();
    /* 004a7c94: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a7c97: mov esi, eax */ r_esi = r_eax;
    /* 004a7c99: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a7c9f: call 0x4d5590 */ r_esp -= 4; W32(r_esp, 0x4a7ca4u); f_004d5590();
    /* 004a7ca4: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 004a7ca7: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a7ca9: jge 0x4a7cba */ if ((fS==fO)) goto L_004a7cba;
L_004a7cab:; BB(0x004a7cab);
    /* 004a7cab: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a7cae: mov word ptr [edx*2 + 0x791768], 3 */ W16((u32)(r_edx*2+0x791768u), 0x3u);
    /* 004a7cb8: jmp 0x4a7ce5 */ goto L_004a7ce5;
L_004a7cba:; BB(0x004a7cba);
    /* 004a7cba: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 004a7cbc: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a7cc1u); f_0062fbf0();
    /* 004a7cc1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a7cc4: mov esi, eax */ r_esi = r_eax;
    /* 004a7cc6: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a7ccc: call 0x4d55b0 */ r_esp -= 4; W32(r_esp, 0x4a7cd1u); f_004d55b0();
    /* 004a7cd1: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 004a7cd4: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a7cd6: jge 0x4a7ce5 */ if ((fS==fO)) goto L_004a7ce5;
L_004a7cd8:; BB(0x004a7cd8);
    /* 004a7cd8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a7cdb: mov word ptr [ecx*2 + 0x791768], 1 */ W16((u32)(r_ecx*2+0x791768u), 0x1u);
L_004a7ce5:; BB(0x004a7ce5);
    /* 004a7ce5: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a7ceb: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a7cee: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x4a7cf3u); f_004f6640();
    /* 004a7cf3: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004a7cf6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a7cf8: je 0x4a7d06 */ if (fZ) goto L_004a7d06;
L_004a7cfa:; BB(0x004a7cfa);
    /* 004a7cfa: mov eax, 2 */ r_eax = 0x2u;
    /* 004a7cff: jmp 0x4a7fb7 */ goto L_004a7fb7;
L_004a7d06:; BB(0x004a7d06);
    /* 004a7d06: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a7d0c: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a7d0f: call 0x4f66e0 */ r_esp -= 4; W32(r_esp, 0x4a7d14u); f_004f66e0();
    /* 004a7d14: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004a7d17: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a7d19: je 0x4a7d27 */ if (fZ) goto L_004a7d27;
L_004a7d1b:; BB(0x004a7d1b);
    /* 004a7d1b: mov eax, 4 */ r_eax = 0x4u;
    /* 004a7d20: jmp 0x4a7fb7 */ goto L_004a7fb7;
L_004a7d27:; BB(0x004a7d27);
    /* 004a7d27: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a7d2a: movsx edx, word ptr [ecx*2 + 0x791768] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*2+0x791768u));
    /* 004a7d32: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a7d35: jne 0x4a7d40 */ if (!fZ) goto L_004a7d40;
L_004a7d37:; BB(0x004a7d37);
    /* 004a7d37: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a7d39: jmp 0x4a7fb7 */ goto L_004a7fb7;
L_004a7d40:; BB(0x004a7d40);
    /* 004a7d40: mov eax, 3 */ r_eax = 0x3u;
    /* 004a7d45: jmp 0x4a7fb7 */ goto L_004a7fb7;
L_004a7d4a:; BB(0x004a7d4a);
    /* 004a7d4a: jmp 0x4a7f14 */ goto L_004a7f14;
L_004a7d4f:; BB(0x004a7d4f);
    /* 004a7d4f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a7d52: movsx ecx, word ptr [eax*2 + 0x791768] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax*2+0x791768u));
    /* 004a7d5a: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a7d5d: je 0x4a7d73 */ if (fZ) goto L_004a7d73;
L_004a7d5f:; BB(0x004a7d5f);
    /* 004a7d5f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a7d62: movsx eax, word ptr [edx*2 + 0x791768] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx*2+0x791768u));
    /* 004a7d6a: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a7d6d: jne 0x4a7f14 */ if (!fZ) goto L_004a7f14;
L_004a7d73:; BB(0x004a7d73);
    /* 004a7d73: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a7d76: movsx edx, word ptr [ecx*2 + 0x791768] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*2+0x791768u));
    /* 004a7d7e: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a7d81: jne 0x4a7daa */ if (!fZ) goto L_004a7daa;
L_004a7d83:; BB(0x004a7d83);
    /* 004a7d83: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a7d89: call 0x47ce60 */ r_esp -= 4; W32(r_esp, 0x4a7d8eu); f_0047ce60();
    /* 004a7d8e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a7d8f: cmp dword ptr [ebp + 8], 5 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a7d93: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 004a7d96: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a7d97: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a7d9d: call 0x4c6ef0 */ r_esp -= 4; W32(r_esp, 0x4a7da2u); f_004c6ef0();
    /* 004a7da2: mov dword ptr [ebp - 0xb0], eax */ W32((u32)(r_ebp+0xffffff50u), r_eax);
    /* 004a7da8: jmp 0x4a7dbb */ goto L_004a7dbb;
L_004a7daa:; BB(0x004a7daa);
    /* 004a7daa: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a7db0: call 0x4c6f50 */ r_esp -= 4; W32(r_esp, 0x4a7db5u); f_004c6f50();
    /* 004a7db5: mov dword ptr [ebp - 0xb0], eax */ W32((u32)(r_ebp+0xffffff50u), r_eax);
L_004a7dbb:; BB(0x004a7dbb);
    /* 004a7dbb: mov ecx, 0x64 */ r_ecx = 0x64u;
    /* 004a7dc0: sub ecx, dword ptr [ebp - 0xb0] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffff50u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004a7dc6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a7dc7: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a7dccu); f_0062fbf0();
    /* 004a7dcc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a7dcf: mov dword ptr [ebp - 0xb4], eax */ W32((u32)(r_ebp+0xffffff4cu), r_eax);
    /* 004a7dd5: fild dword ptr [ebp - 0xb4] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff4cu)));
    /* 004a7ddb: fstp qword ptr [ebp - 0x54] */ W_F64((u32)(r_ebp+0xffffffacu), ST(0)); FPOP();
    /* 004a7dde: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004a7de0: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004a7de3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a7de4: call 0x4a7250 */ r_esp -= 4; W32(r_esp, 0x4a7de9u); f_004a7250();
    /* 004a7de9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a7dec: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 004a7def: mov dword ptr [ebp - 0xb8], eax */ W32((u32)(r_ebp+0xffffff48u), r_eax);
    /* 004a7df5: fild dword ptr [ebp - 0xb8] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff48u)));
    /* 004a7dfb: fcomp qword ptr [ebp - 0x54] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xffffffacu))); FPOP();
    /* 004a7dfe: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004a7e00: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004a7e03: jne 0x4a7f14 */ if (!fZ) goto L_004a7f14;
L_004a7e09:; BB(0x004a7e09);
    /* 004a7e09: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004a7e0b: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a7e11: call 0x4c79d0 */ r_esp -= 4; W32(r_esp, 0x4a7e16u); f_004c79d0();
    /* 004a7e16: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a7e1c: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a7e1f: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x4a7e24u); f_004f6640();
    /* 004a7e24: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004a7e27: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a7e29: jne 0x4a7e57 */ if (!fZ) goto L_004a7e57;
L_004a7e2b:; BB(0x004a7e2b);
    /* 004a7e2b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a7e31: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a7e34: call 0x4f66e0 */ r_esp -= 4; W32(r_esp, 0x4a7e39u); f_004f66e0();
    /* 004a7e39: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004a7e3c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a7e3e: jne 0x4a7e57 */ if (!fZ) goto L_004a7e57;
L_004a7e40:; BB(0x004a7e40);
    /* 004a7e40: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a7e43: movsx ecx, word ptr [eax*2 + 0x791768] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax*2+0x791768u));
    /* 004a7e4b: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a7e4e: jne 0x4a7e57 */ if (!fZ) goto L_004a7e57;
L_004a7e50:; BB(0x004a7e50);
    /* 004a7e50: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a7e52: jmp 0x4a7fb7 */ goto L_004a7fb7;
L_004a7e57:; BB(0x004a7e57);
    /* 004a7e57: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 004a7e59: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a7e5eu); f_0062fbf0();
    /* 004a7e5e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a7e61: mov esi, eax */ r_esi = r_eax;
    /* 004a7e63: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a7e69: call 0x4d5590 */ r_esp -= 4; W32(r_esp, 0x4a7e6eu); f_004d5590();
    /* 004a7e6e: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 004a7e71: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a7e73: jge 0x4a7e84 */ if ((fS==fO)) goto L_004a7e84;
L_004a7e75:; BB(0x004a7e75);
    /* 004a7e75: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a7e78: mov word ptr [eax*2 + 0x791768], 2 */ W16((u32)(r_eax*2+0x791768u), 0x2u);
    /* 004a7e82: jmp 0x4a7eaf */ goto L_004a7eaf;
L_004a7e84:; BB(0x004a7e84);
    /* 004a7e84: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 004a7e86: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a7e8bu); f_0062fbf0();
    /* 004a7e8b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a7e8e: mov esi, eax */ r_esi = r_eax;
    /* 004a7e90: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a7e96: call 0x4d55b0 */ r_esp -= 4; W32(r_esp, 0x4a7e9bu); f_004d55b0();
    /* 004a7e9b: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 004a7e9e: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a7ea0: jge 0x4a7eaf */ if ((fS==fO)) goto L_004a7eaf;
L_004a7ea2:; BB(0x004a7ea2);
    /* 004a7ea2: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a7ea5: mov word ptr [edx*2 + 0x791768], 1 */ W16((u32)(r_edx*2+0x791768u), 0x1u);
L_004a7eaf:; BB(0x004a7eaf);
    /* 004a7eaf: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a7eb5: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a7eb8: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x4a7ebdu); f_004f6640();
    /* 004a7ebd: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004a7ec0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a7ec2: je 0x4a7ed0 */ if (fZ) goto L_004a7ed0;
L_004a7ec4:; BB(0x004a7ec4);
    /* 004a7ec4: mov eax, 2 */ r_eax = 0x2u;
    /* 004a7ec9: jmp 0x4a7fb7 */ goto L_004a7fb7;
L_004a7ed0:; BB(0x004a7ed0);
    /* 004a7ed0: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a7ed6: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a7ed9: call 0x4f66e0 */ r_esp -= 4; W32(r_esp, 0x4a7edeu); f_004f66e0();
    /* 004a7ede: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004a7ee1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a7ee3: je 0x4a7ef1 */ if (fZ) goto L_004a7ef1;
L_004a7ee5:; BB(0x004a7ee5);
    /* 004a7ee5: mov eax, 4 */ r_eax = 0x4u;
    /* 004a7eea: jmp 0x4a7fb7 */ goto L_004a7fb7;
L_004a7ef1:; BB(0x004a7ef1);
    /* 004a7ef1: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a7ef4: movsx eax, word ptr [edx*2 + 0x791768] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx*2+0x791768u));
    /* 004a7efc: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a7eff: jne 0x4a7f0a */ if (!fZ) goto L_004a7f0a;
L_004a7f01:; BB(0x004a7f01);
    /* 004a7f01: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a7f03: jmp 0x4a7fb7 */ goto L_004a7fb7;
L_004a7f0a:; BB(0x004a7f0a);
    /* 004a7f0a: mov eax, 3 */ r_eax = 0x3u;
    /* 004a7f0f: jmp 0x4a7fb7 */ goto L_004a7fb7;
L_004a7f14:; BB(0x004a7f14);
    /* 004a7f14: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a7f1a: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a7f1d: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x4a7f22u); f_004f6640();
    /* 004a7f22: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004a7f25: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a7f27: jne 0x4a7f69 */ if (!fZ) goto L_004a7f69;
L_004a7f29:; BB(0x004a7f29);
    /* 004a7f29: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a7f2c: movsx eax, word ptr [edx*2 + 0x791768] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx*2+0x791768u));
    /* 004a7f34: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a7f37: jne 0x4a7f3f */ if (!fZ) goto L_004a7f3f;
L_004a7f39:; BB(0x004a7f39);
    /* 004a7f39: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a7f3b: jmp 0x4a7fb7 */ goto L_004a7fb7;
L_004a7f3f:; BB(0x004a7f3f);
    /* 004a7f3f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a7f42: movsx edx, word ptr [ecx*2 + 0x791768] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*2+0x791768u));
    /* 004a7f4a: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a7f4d: jne 0x4a7f55 */ if (!fZ) goto L_004a7f55;
L_004a7f4f:; BB(0x004a7f4f);
    /* 004a7f4f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a7f51: jmp 0x4a7fb7 */ goto L_004a7fb7;
L_004a7f55:; BB(0x004a7f55);
    /* 004a7f55: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a7f58: movsx ecx, word ptr [eax*2 + 0x791768] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax*2+0x791768u));
    /* 004a7f60: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a7f63: jne 0x4a7f69 */ if (!fZ) goto L_004a7f69;
L_004a7f65:; BB(0x004a7f65);
    /* 004a7f65: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a7f67: jmp 0x4a7fb7 */ goto L_004a7fb7;
L_004a7f69:; BB(0x004a7f69);
    /* 004a7f69: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 004a7f6b: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a7f70u); f_0062fbf0();
    /* 004a7f70: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a7f73: mov esi, eax */ r_esi = r_eax;
    /* 004a7f75: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a7f7b: call 0x4d55b0 */ r_esp -= 4; W32(r_esp, 0x4a7f80u); f_004d55b0();
    /* 004a7f80: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 004a7f83: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a7f85: jge 0x4a7f94 */ if ((fS==fO)) goto L_004a7f94;
L_004a7f87:; BB(0x004a7f87);
    /* 004a7f87: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a7f8a: mov word ptr [eax*2 + 0x791768], 1 */ W16((u32)(r_eax*2+0x791768u), 0x1u);
L_004a7f94:; BB(0x004a7f94);
    /* 004a7f94: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a7f9a: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a7f9d: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x4a7fa2u); f_004f6640();
    /* 004a7fa2: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004a7fa5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a7fa7: je 0x4a7fb2 */ if (fZ) goto L_004a7fb2;
L_004a7fa9:; BB(0x004a7fa9);
    /* 004a7fa9: mov eax, 1 */ r_eax = 0x1u;
    /* 004a7fae: jmp 0x4a7fb7 */ goto L_004a7fb7;
L_004a7fb2:; BB(0x004a7fb2);
    /* 004a7fb2: mov eax, 3 */ r_eax = 0x3u;
L_004a7fb7:; BB(0x004a7fb7);
    /* 004a7fb7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004a7fba: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004a7fc1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004a7fc2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004a7fc3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a7fc4: mov esp, ebp */ r_esp = r_ebp;
    /* 004a7fc6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a7fc7: ret  */ FN_RET(0x004a72b0); r_esp += 4; return;
}

