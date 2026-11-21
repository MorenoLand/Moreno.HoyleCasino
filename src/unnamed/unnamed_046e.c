#include "protos.h"

void f_0046e1f0(void) /* sub_46E1F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046e1f0);
    /* 0046e1f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046e1f1: mov ebp, esp */ r_ebp = r_esp;
    /* 0046e1f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0046e1f5: push 0x69f7f8 */ { u32 v = 0x69f7f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0046e1fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0046e200: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046e201: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0046e204: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0046e209: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0046e20b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046e20c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0046e20f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0046e215: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046e21b: call 0x47e420 */ r_esp -= 4; W32(r_esp, 0x46e220u); f_0047e420();
    /* 0046e220: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0046e223: lea eax, [ebp - 0x14] */ r_eax = (u32)(r_ebp+0xffffffecu);
    /* 0046e226: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046e227: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046e22d: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x46e232u); f_004c7c40();
    /* 0046e232: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0046e239: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 0046e23c: call 0x498100 */ r_esp -= 4; W32(r_esp, 0x46e241u); f_00498100();
    /* 0046e241: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0046e244: mov word ptr [ecx*2 + 0x791030], ax */ W16((u32)(r_ecx*2+0x791030u), (u16)r_eax);
    /* 0046e24c: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0046e24f: mov byte ptr [edx + 0x7912e0], 0 */ W8((u32)(r_edx+0x7912e0u), 0x0u);
    /* 0046e256: movzx eax, byte ptr [ebp + 8] */ r_eax = (u32)R8((u32)(r_ebp+0x8u));
    /* 0046e25a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046e25c: je 0x46e2c5 */ if (fZ) goto L_0046e2c5;
L_0046e25e:; BB(0x0046e25e);
    /* 0046e25e: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 0046e261: call 0x498920 */ r_esp -= 4; W32(r_esp, 0x46e266u); f_00498920();
    /* 0046e266: mov word ptr [ebp - 0x1c], ax */ W16((u32)(r_ebp+0xffffffe4u), (u16)r_eax);
    /* 0046e26a: movsx ecx, word ptr [ebp - 0x1c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 0046e26e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0046e270: jl 0x46e2c5 */ if ((fS!=fO)) goto L_0046e2c5;
L_0046e272:; BB(0x0046e272);
    /* 0046e272: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0046e275: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046e276: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046e278: call 0x46dc80 */ r_esp -= 4; W32(r_esp, 0x46e27du); f_0046dc80();
    /* 0046e27d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046e280: fstp qword ptr [ebp - 0x24] */ W_F64((u32)(r_ebp+0xffffffdcu), ST(0)); FPOP();
    /* 0046e283: mov ax, word ptr [ebp - 0x1c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe4u))) & 0xffffu);
    /* 0046e287: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046e288: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046e28e: call 0x4e15d0 */ r_esp -= 4; W32(r_esp, 0x46e293u); f_004e15d0();
    /* 0046e293: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 0046e296: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0046e299: fild dword ptr [ebp - 0x28] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd8u)));
    /* 0046e29c: fdiv qword ptr [0x6bc208] */ ST(0) = ST(0) / R_F64((u32)(0x6bc208u));
    /* 0046e2a2: fcomp qword ptr [ebp - 0x24] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xffffffdcu))); FPOP();
    /* 0046e2a5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0046e2a7: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0046e2aa: jne 0x46e2c5 */ if (!fZ) goto L_0046e2c5;
L_0046e2ac:; BB(0x0046e2ac);
    /* 0046e2ac: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0046e2af: mov ax, word ptr [ebp - 0x1c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe4u))) & 0xffffu);
    /* 0046e2b3: mov word ptr [edx*2 + 0x791030], ax */ W16((u32)(r_edx*2+0x791030u), (u16)r_eax);
    /* 0046e2bb: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0046e2be: mov byte ptr [ecx + 0x7912e0], 1 */ W8((u32)(r_ecx+0x7912e0u), 0x1u);
L_0046e2c5:; BB(0x0046e2c5);
    /* 0046e2c5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0046e2cc: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 0046e2cf: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x46e2d4u); f_00484470();
    /* 0046e2d4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046e2d7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0046e2de: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0046e2df: mov esp, ebp */ r_esp = r_ebp;
    /* 0046e2e1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046e2e2: ret  */ FN_RET(0x0046e1f0); r_esp += 4; return;
}

void f_0046e2f0(void) /* sub_46E2F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046e2f0);
    /* 0046e2f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046e2f1: mov ebp, esp */ r_ebp = r_esp;
    /* 0046e2f3: sub esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0046e2f6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0046e2f7: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046e2fd: call 0x47e420 */ r_esp -= 4; W32(r_esp, 0x46e302u); f_0047e420();
    /* 0046e302: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0046e305: mov word ptr [ebp - 0x2c], 0 */ W16((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0046e30b: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0046e312: mov word ptr [ebp - 0x38], 0 */ W16((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 0046e318: jmp 0x46e326 */ goto L_0046e326;
L_0046e31a:; BB(0x0046e31a);
    /* 0046e31a: mov ax, word ptr [ebp - 0x38] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffc8u))) & 0xffffu);
    /* 0046e31e: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0046e322: mov word ptr [ebp - 0x38], ax */ W16((u32)(r_ebp+0xffffffc8u), (u16)r_eax);
L_0046e326:; BB(0x0046e326);
    /* 0046e326: movsx esi, word ptr [ebp - 0x38] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc8u));
    /* 0046e32a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046e330: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x46e335u); f_0047f950();
    /* 0046e335: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046e337: jge 0x46e3c5 */ if ((fS==fO)) goto L_0046e3c5;
L_0046e33d:; BB(0x0046e33d);
    /* 0046e33d: movsx ecx, word ptr [ebp - 0x38] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc8u));
    /* 0046e341: cmp ecx, dword ptr [ebp - 0x30] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffd0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046e344: jne 0x46e348 */ if (!fZ) goto L_0046e348;
L_0046e346:; BB(0x0046e346);
    /* 0046e346: jmp 0x46e31a */ goto L_0046e31a;
L_0046e348:; BB(0x0046e348);
    /* 0046e348: movsx edx, word ptr [ebp - 0x38] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc8u));
    /* 0046e34c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046e34d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046e353: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x46e358u); f_0047e390();
    /* 0046e358: mov ecx, eax */ r_ecx = r_eax;
    /* 0046e35a: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x46e35fu); f_004c7010();
    /* 0046e35f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046e362: jne 0x46e3c0 */ if (!fZ) goto L_0046e3c0;
L_0046e364:; BB(0x0046e364);
    /* 0046e364: movsx eax, word ptr [ebp - 0x38] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc8u));
    /* 0046e368: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046e369: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046e36f: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x46e374u); f_0047e390();
    /* 0046e374: mov ecx, eax */ r_ecx = r_eax;
    /* 0046e376: call 0x4c7050 */ r_esp -= 4; W32(r_esp, 0x46e37bu); f_004c7050();
    /* 0046e37b: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0046e37e: mov cx, word ptr [ebp - 8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 0046e382: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046e383: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046e389: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046e38c: call 0x4f69e0 */ r_esp -= 4; W32(r_esp, 0x46e391u); f_004f69e0();
    /* 0046e391: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 0046e394: movsx eax, word ptr [ebp - 0x2c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd4u));
    /* 0046e398: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0046e39a: mov word ptr [ebp - 0x2c], ax */ W16((u32)(r_ebp+0xffffffd4u), (u16)r_eax);
    /* 0046e39e: mov cx, word ptr [ebp - 8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 0046e3a2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046e3a3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046e3a9: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046e3ac: call 0x4f6880 */ r_esp -= 4; W32(r_esp, 0x46e3b1u); f_004f6880();
    /* 0046e3b1: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 0046e3b4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0046e3b6: jle 0x46e3c0 */ if ((fZ||fS!=fO)) goto L_0046e3c0;
L_0046e3b8:; BB(0x0046e3b8);
    /* 0046e3b8: mov word ptr [ebp - 0x2c], 0 */ W16((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0046e3be: jmp 0x46e3c5 */ goto L_0046e3c5;
L_0046e3c0:; BB(0x0046e3c0);
    /* 0046e3c0: jmp 0x46e31a */ goto L_0046e31a;
L_0046e3c5:; BB(0x0046e3c5);
    /* 0046e3c5: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046e3cb: call 0x4e03d0 */ r_esp -= 4; W32(r_esp, 0x46e3d0u); f_004e03d0();
    /* 0046e3d0: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0046e3d3: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0046e3d6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046e3d7: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x46e3dcu); f_0062fbf0();
    /* 0046e3dc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046e3df: mov word ptr [ebp - 0x24], ax */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_eax);
    /* 0046e3e3: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0046e3e6: movsx edx, word ptr [ecx*2 + 0x791010] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*2+0x791010u));
    /* 0046e3ee: movsx eax, word ptr [ebp - 0x2c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd4u));
    /* 0046e3f2: movsx ecx, word ptr [ebp - 0x24] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 0046e3f6: imul eax, ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0046e3f9: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0046e3fb: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046e3fe: jle 0x46e435 */ if ((fZ||fS!=fO)) goto L_0046e435;
L_0046e400:; BB(0x0046e400);
    /* 0046e400: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0046e403: movsx eax, word ptr [edx*2 + 0x791010] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx*2+0x791010u));
    /* 0046e40b: movsx ecx, word ptr [ebp - 0x2c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd4u));
    /* 0046e40f: movsx edx, word ptr [ebp - 0x24] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 0046e413: imul ecx, edx */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_edx; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0046e416: lea eax, [eax + ecx - 0xa] */ r_eax = (u32)(r_eax+r_ecx+0xfffffff6u);
    /* 0046e41a: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0046e41d: fild dword ptr [ebp - 0x3c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc4u)));
    /* 0046e420: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 0046e426: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0046e429: fadd qword ptr [ecx*8 + 0x791260] */ ST(0) = ST(0) + R_F64((u32)(r_ecx*8+0x791260u));
    /* 0046e430: fstp qword ptr [ebp - 0x20] */ W_F64((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
    /* 0046e433: jmp 0x46e442 */ goto L_0046e442;
L_0046e435:; BB(0x0046e435);
    /* 0046e435: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0046e438: fld qword ptr [edx*8 + 0x791260] */ FPUSH(R_F64((u32)(r_edx*8+0x791260u)));
    /* 0046e43f: fstp qword ptr [ebp - 0x20] */ W_F64((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
L_0046e442:; BB(0x0046e442);
    /* 0046e442: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0046e444: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046e44a: call 0x4e1210 */ r_esp -= 4; W32(r_esp, 0x46e44fu); f_004e1210();
    /* 0046e44f: mov word ptr [ebp - 0x34], ax */ W16((u32)(r_ebp+0xffffffccu), (u16)r_eax);
    /* 0046e453: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0046e455: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046e45b: call 0x4e1210 */ r_esp -= 4; W32(r_esp, 0x46e460u); f_004e1210();
    /* 0046e460: mov word ptr [ebp - 0x14], ax */ W16((u32)(r_ebp+0xffffffecu), (u16)r_eax);
    /* 0046e464: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046e466: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046e46c: call 0x4e1210 */ r_esp -= 4; W32(r_esp, 0x46e471u); f_004e1210();
    /* 0046e471: mov word ptr [ebp - 0x28], ax */ W16((u32)(r_ebp+0xffffffd8u), (u16)r_eax);
    /* 0046e475: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046e47b: call 0x4e1500 */ r_esp -= 4; W32(r_esp, 0x46e480u); f_004e1500();
    /* 0046e480: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 0046e484: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0046e488: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046e489: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x46e48eu); f_0062fbf0();
    /* 0046e48e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046e491: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0046e494: fild dword ptr [ebp - 0x40] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc0u)));
    /* 0046e497: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 0046e49d: fld1  */ FPUSH(1.0);
    /* 0046e49f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0046e4a1: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0046e4a5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046e4a6: fstp qword ptr [ebp - 0x48] */ W_F64((u32)(r_ebp+0xffffffb8u), ST(0)); FPOP();
    /* 0046e4a9: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x46e4aeu); f_0062fbf0();
    /* 0046e4ae: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046e4b1: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0046e4b4: fild dword ptr [ebp - 0x4c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb4u)));
    /* 0046e4b7: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 0046e4bd: fsubr qword ptr [ebp - 0x48] */ ST(0) = R_F64((u32)(r_ebp+0xffffffb8u)) - ST(0);
    /* 0046e4c0: fidiv dword ptr [ebp + 0xc] */ ST(0) = ST(0) / (long double)(i32)R32((u32)(r_ebp+0xcu));
    /* 0046e4c3: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0046e4c6: movsx esi, word ptr [ebp - 0x34] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffccu));
    /* 0046e4ca: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046e4d0: call 0x47ce60 */ r_esp -= 4; W32(r_esp, 0x46e4d5u); f_0047ce60();
    /* 0046e4d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046e4d6: movzx edx, byte ptr [ebp + 8] */ r_edx = (u32)R8((u32)(r_ebp+0x8u));
    /* 0046e4da: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046e4dc: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0046e4df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046e4e0: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046e4e6: call 0x4c6f90 */ r_esp -= 4; W32(r_esp, 0x46e4ebu); f_004c6f90();
    /* 0046e4eb: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0046e4ed: mov dword ptr [ebp - 0x50], esi */ W32((u32)(r_ebp+0xffffffb0u), r_esi);
    /* 0046e4f0: fild dword ptr [ebp - 0x50] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb0u)));
    /* 0046e4f3: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 0046e4f9: fadd qword ptr [ebp - 0x10] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xfffffff0u));
    /* 0046e4fc: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0046e4ff: fcomp qword ptr [ecx*8 + 0x791260] */ fx_compare(ST(0), R_F64((u32)(r_ecx*8+0x791260u))); FPOP();
    /* 0046e506: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0046e508: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 0046e50b: jp 0x46e526 */ if (fP) goto L_0046e526;
L_0046e50d:; BB(0x0046e50d);
    /* 0046e50d: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0046e510: mov word ptr [edx*2 + 0x791020], 5 */ W16((u32)(r_edx*2+0x791020u), 0x5u);
    /* 0046e51a: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0046e51c: jmp 0x46e6eb */ goto L_0046e6eb;
L_0046e526:; BB(0x0046e526);
    /* 0046e526: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0046e529: movzx ecx, byte ptr [eax + 0x791040] */ r_ecx = (u32)R8((u32)(r_eax+0x791040u));
    /* 0046e530: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046e532: je 0x46e54d */ if (fZ) goto L_0046e54d;
L_0046e534:; BB(0x0046e534);
    /* 0046e534: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0046e537: mov word ptr [edx*2 + 0x791020], 0xa */ W16((u32)(r_edx*2+0x791020u), 0xau);
    /* 0046e541: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0046e543: jmp 0x46e6eb */ goto L_0046e6eb;
L_0046e54d:; BB(0x0046e54d);
    /* 0046e54d: movsx esi, word ptr [ebp - 0x14] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffecu));
    /* 0046e551: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046e557: call 0x47ce60 */ r_esp -= 4; W32(r_esp, 0x46e55cu); f_0047ce60();
    /* 0046e55c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046e55d: movzx eax, byte ptr [ebp + 8] */ r_eax = (u32)R8((u32)(r_ebp+0x8u));
    /* 0046e561: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046e563: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0046e566: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046e567: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046e56d: call 0x4c6f90 */ r_esp -= 4; W32(r_esp, 0x46e572u); f_004c6f90();
    /* 0046e572: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0046e574: mov dword ptr [ebp - 0x54], esi */ W32((u32)(r_ebp+0xffffffacu), r_esi);
    /* 0046e577: fild dword ptr [ebp - 0x54] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffacu)));
    /* 0046e57a: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 0046e580: fadd qword ptr [ebp - 0x10] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xfffffff0u));
    /* 0046e583: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0046e586: fcomp qword ptr [edx*8 + 0x791260] */ fx_compare(ST(0), R_F64((u32)(r_edx*8+0x791260u))); FPOP();
    /* 0046e58d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0046e58f: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 0046e592: jp 0x46e5ad */ if (fP) goto L_0046e5ad;
L_0046e594:; BB(0x0046e594);
    /* 0046e594: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0046e597: mov word ptr [eax*2 + 0x791020], 4 */ W16((u32)(r_eax*2+0x791020u), 0x4u);
    /* 0046e5a1: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0046e5a3: jmp 0x46e6eb */ goto L_0046e6eb;
L_0046e5ad:; BB(0x0046e5ad);
    /* 0046e5ad: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0046e5b0: movzx edx, byte ptr [ecx + 0x791008] */ r_edx = (u32)R8((u32)(r_ecx+0x791008u));
    /* 0046e5b7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046e5b9: je 0x46e5d4 */ if (fZ) goto L_0046e5d4;
L_0046e5bb:; BB(0x0046e5bb);
    /* 0046e5bb: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0046e5be: mov word ptr [eax*2 + 0x791020], 9 */ W16((u32)(r_eax*2+0x791020u), 0x9u);
    /* 0046e5c8: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0046e5ca: jmp 0x46e6eb */ goto L_0046e6eb;
L_0046e5d4:; BB(0x0046e5d4);
    /* 0046e5d4: movsx esi, word ptr [ebp - 0x28] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd8u));
    /* 0046e5d8: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046e5de: call 0x47ce60 */ r_esp -= 4; W32(r_esp, 0x46e5e3u); f_0047ce60();
    /* 0046e5e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046e5e4: movzx ecx, byte ptr [ebp + 8] */ r_ecx = (u32)R8((u32)(r_ebp+0x8u));
    /* 0046e5e8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046e5ea: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0046e5ed: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046e5ee: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046e5f4: call 0x4c6f90 */ r_esp -= 4; W32(r_esp, 0x46e5f9u); f_004c6f90();
    /* 0046e5f9: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0046e5fb: mov dword ptr [ebp - 0x58], esi */ W32((u32)(r_ebp+0xffffffa8u), r_esi);
    /* 0046e5fe: fild dword ptr [ebp - 0x58] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffa8u)));
    /* 0046e601: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 0046e607: fadd qword ptr [ebp - 0x10] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xfffffff0u));
    /* 0046e60a: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0046e60d: fcomp qword ptr [eax*8 + 0x791260] */ fx_compare(ST(0), R_F64((u32)(r_eax*8+0x791260u))); FPOP();
    /* 0046e614: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0046e616: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 0046e619: jp 0x46e634 */ if (fP) goto L_0046e634;
L_0046e61b:; BB(0x0046e61b);
    /* 0046e61b: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0046e61e: mov word ptr [ecx*2 + 0x791020], 3 */ W16((u32)(r_ecx*2+0x791020u), 0x3u);
    /* 0046e628: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0046e62a: jmp 0x46e6eb */ goto L_0046e6eb;
L_0046e634:; BB(0x0046e634);
    /* 0046e634: movsx esi, word ptr [ebp - 0x34] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffccu));
    /* 0046e638: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046e63e: call 0x4c6fd0 */ r_esp -= 4; W32(r_esp, 0x46e643u); f_004c6fd0();
    /* 0046e643: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0046e645: mov dword ptr [ebp - 0x5c], esi */ W32((u32)(r_ebp+0xffffffa4u), r_esi);
    /* 0046e648: fild dword ptr [ebp - 0x5c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffa4u)));
    /* 0046e64b: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 0046e651: fadd qword ptr [ebp - 0x10] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xfffffff0u));
    /* 0046e654: fcomp qword ptr [ebp - 0x20] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xffffffe0u))); FPOP();
    /* 0046e657: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0046e659: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 0046e65c: jp 0x46e671 */ if (fP) goto L_0046e671;
L_0046e65e:; BB(0x0046e65e);
    /* 0046e65e: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0046e661: mov word ptr [edx*2 + 0x791020], 0xa */ W16((u32)(r_edx*2+0x791020u), 0xau);
    /* 0046e66b: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0046e66d: jmp 0x46e6eb */ goto L_0046e6eb;
L_0046e671:; BB(0x0046e671);
    /* 0046e671: movsx esi, word ptr [ebp - 0x14] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffecu));
    /* 0046e675: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046e67b: call 0x4c6fd0 */ r_esp -= 4; W32(r_esp, 0x46e680u); f_004c6fd0();
    /* 0046e680: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0046e682: mov dword ptr [ebp - 0x60], esi */ W32((u32)(r_ebp+0xffffffa0u), r_esi);
    /* 0046e685: fild dword ptr [ebp - 0x60] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffa0u)));
    /* 0046e688: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 0046e68e: fadd qword ptr [ebp - 0x10] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xfffffff0u));
    /* 0046e691: fcomp qword ptr [ebp - 0x20] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xffffffe0u))); FPOP();
    /* 0046e694: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0046e696: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 0046e699: jp 0x46e6ae */ if (fP) goto L_0046e6ae;
L_0046e69b:; BB(0x0046e69b);
    /* 0046e69b: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0046e69e: mov word ptr [eax*2 + 0x791020], 9 */ W16((u32)(r_eax*2+0x791020u), 0x9u);
    /* 0046e6a8: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0046e6aa: jmp 0x46e6eb */ goto L_0046e6eb;
L_0046e6ae:; BB(0x0046e6ae);
    /* 0046e6ae: movsx esi, word ptr [ebp - 0x28] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd8u));
    /* 0046e6b2: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046e6b8: call 0x4c6fd0 */ r_esp -= 4; W32(r_esp, 0x46e6bdu); f_004c6fd0();
    /* 0046e6bd: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0046e6bf: mov dword ptr [ebp - 0x64], esi */ W32((u32)(r_ebp+0xffffff9cu), r_esi);
    /* 0046e6c2: fild dword ptr [ebp - 0x64] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff9cu)));
    /* 0046e6c5: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 0046e6cb: fadd qword ptr [ebp - 0x10] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xfffffff0u));
    /* 0046e6ce: fcomp qword ptr [ebp - 0x20] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xffffffe0u))); FPOP();
    /* 0046e6d1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0046e6d3: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 0046e6d6: jp 0x46e6e9 */ if (fP) goto L_0046e6e9;
L_0046e6d8:; BB(0x0046e6d8);
    /* 0046e6d8: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0046e6db: mov word ptr [ecx*2 + 0x791020], 8 */ W16((u32)(r_ecx*2+0x791020u), 0x8u);
    /* 0046e6e5: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0046e6e7: jmp 0x46e6eb */ goto L_0046e6eb;
L_0046e6e9:; BB(0x0046e6e9);
    /* 0046e6e9: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0046e6eb:; BB(0x0046e6eb);
    /* 0046e6eb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0046e6ec: mov esp, ebp */ r_esp = r_ebp;
    /* 0046e6ee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046e6ef: ret  */ FN_RET(0x0046e2f0); r_esp += 4; return;
}

void f_0046e6f0(void) /* sub_46E6F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046e6f0);
    /* 0046e6f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046e6f1: mov ebp, esp */ r_ebp = r_esp;
    /* 0046e6f3: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0046e6f6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0046e6f7: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046e6fd: call 0x47e420 */ r_esp -= 4; W32(r_esp, 0x46e702u); f_0047e420();
    /* 0046e702: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0046e705: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 0046e707: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x46e70cu); f_0062fbf0();
    /* 0046e70c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046e70f: mov esi, eax */ r_esi = r_eax;
    /* 0046e711: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 0046e713: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x46e718u); f_0062fbf0();
    /* 0046e718: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046e71b: lea esi, [esi + eax + 0x3c] */ r_esi = (u32)(r_esi+r_eax+0x3cu);
    /* 0046e71f: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 0046e721: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x46e726u); f_0062fbf0();
    /* 0046e726: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046e729: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0046e72b: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 0046e72d: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x46e732u); f_0062fbf0();
    /* 0046e732: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046e735: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0046e737: mov dword ptr [ebp - 0xc], esi */ W32((u32)(r_ebp+0xfffffff4u), r_esi);
    /* 0046e73a: fild dword ptr [ebp - 0xc] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff4u)));
    /* 0046e73d: fmul qword ptr [0x6bc270] */ ST(0) = ST(0) * R_F64((u32)(0x6bc270u));
    /* 0046e743: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046e746: fstp qword ptr [eax*8 + 0x7912a0] */ W_F64((u32)(r_eax*8+0x7912a0u), ST(0)); FPOP();
    /* 0046e74d: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 0046e74f: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x46e754u); f_0062fbf0();
    /* 0046e754: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046e757: mov esi, eax */ r_esi = r_eax;
    /* 0046e759: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 0046e75b: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x46e760u); f_0062fbf0();
    /* 0046e760: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046e763: lea esi, [esi + eax + 0x3c] */ r_esi = (u32)(r_esi+r_eax+0x3cu);
    /* 0046e767: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 0046e769: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x46e76eu); f_0062fbf0();
    /* 0046e76e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046e771: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0046e773: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 0046e775: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x46e77au); f_0062fbf0();
    /* 0046e77a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046e77d: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0046e77f: mov dword ptr [ebp - 0x10], esi */ W32((u32)(r_ebp+0xfffffff0u), r_esi);
    /* 0046e782: fild dword ptr [ebp - 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff0u)));
    /* 0046e785: fmul qword ptr [0x6bc270] */ ST(0) = ST(0) * R_F64((u32)(0x6bc270u));
    /* 0046e78b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046e78e: fstp qword ptr [ecx*8 + 0x790fc8] */ W_F64((u32)(r_ecx*8+0x790fc8u), ST(0)); FPOP();
    /* 0046e795: mov word ptr [ebp - 8], 0 */ W16((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0046e79b: jmp 0x46e7a9 */ goto L_0046e7a9;
L_0046e79d:; BB(0x0046e79d);
    /* 0046e79d: mov dx, word ptr [ebp - 8] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 0046e7a1: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0046e7a5: mov word ptr [ebp - 8], dx */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_edx);
L_0046e7a9:; BB(0x0046e7a9);
    /* 0046e7a9: movsx esi, word ptr [ebp - 8] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 0046e7ad: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046e7b3: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x46e7b8u); f_0047f950();
    /* 0046e7b8: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046e7ba: jge 0x46e801 */ if ((fS==fO)) goto L_0046e801;
L_0046e7bc:; BB(0x0046e7bc);
    /* 0046e7bc: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 0046e7be: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x46e7c3u); f_0062fbf0();
    /* 0046e7c3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046e7c6: mov esi, eax */ r_esi = r_eax;
    /* 0046e7c8: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 0046e7ca: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x46e7cfu); f_0062fbf0();
    /* 0046e7cf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046e7d2: lea esi, [esi + eax + 0x19] */ r_esi = (u32)(r_esi+r_eax+0x19u);
    /* 0046e7d6: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 0046e7d8: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x46e7ddu); f_0062fbf0();
    /* 0046e7dd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046e7e0: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0046e7e2: mov dword ptr [ebp - 0x14], esi */ W32((u32)(r_ebp+0xffffffecu), r_esi);
    /* 0046e7e5: fild dword ptr [ebp - 0x14] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffecu)));
    /* 0046e7e8: fmul qword ptr [0x6bc270] */ ST(0) = ST(0) * R_F64((u32)(0x6bc270u));
    /* 0046e7ee: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046e7f1: shl eax, 6 */ { u32 c = (6u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0046e7f4: movsx ecx, word ptr [ebp - 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 0046e7f8: fstp qword ptr [eax + ecx*8 + 0x791060] */ W_F64((u32)(r_eax+r_ecx*8+0x791060u), ST(0)); FPOP();
    /* 0046e7ff: jmp 0x46e79d */ goto L_0046e79d;
L_0046e801:; BB(0x0046e801);
    /* 0046e801: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0046e802: mov esp, ebp */ r_esp = r_ebp;
    /* 0046e804: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046e805: ret  */ FN_RET(0x0046e6f0); r_esp += 4; return;
}

void f_0046e810(void) /* sub_46E810 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046e810);
    /* 0046e810: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046e811: mov ebp, esp */ r_ebp = r_esp;
    /* 0046e813: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0046e816: mov ax, word ptr [ebp + 0xc] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 0046e81a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046e81b: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046e821: call 0x4e0180 */ r_esp -= 4; W32(r_esp, 0x46e826u); f_004e0180();
    /* 0046e826: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 0046e82a: movzx ecx, byte ptr [ebp + 8] */ r_ecx = (u32)R8((u32)(r_ebp+0x8u));
    /* 0046e82e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046e830: jne 0x46e866 */ if (!fZ) goto L_0046e866;
L_0046e832:; BB(0x0046e832);
    /* 0046e832: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046e838: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046e83b: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x46e840u); f_004f6640();
    /* 0046e840: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0046e843: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046e845: je 0x46e866 */ if (fZ) goto L_0046e866;
L_0046e847:; BB(0x0046e847);
    /* 0046e847: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0046e84b: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0046e84f: mov eax, 0x64 */ r_eax = 0x64u;
    /* 0046e854: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0046e856: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0046e857: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0046e859: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0046e85b: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046e85d: mov word ptr [ebp - 4], cx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_ecx);
    /* 0046e861: jmp 0x46e986 */ goto L_0046e986;
L_0046e866:; BB(0x0046e866);
    /* 0046e866: movzx eax, byte ptr [ebp + 8] */ r_eax = (u32)R8((u32)(r_ebp+0x8u));
    /* 0046e86a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046e86c: jne 0x46e90b */ if (!fZ) goto L_0046e90b;
L_0046e872:; BB(0x0046e872);
    /* 0046e872: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046e878: call 0x4c7050 */ r_esp -= 4; W32(r_esp, 0x46e87du); f_004c7050();
    /* 0046e87d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046e87e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046e884: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046e887: call 0x4f6880 */ r_esp -= 4; W32(r_esp, 0x46e88cu); f_004f6880();
    /* 0046e88c: mov word ptr [ebp - 8], ax */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_eax);
    /* 0046e890: movsx ecx, word ptr [ebp - 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 0046e894: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0046e897: lea eax, [ecx + edx - 2] */ r_eax = (u32)(r_ecx+r_edx+0xfffffffeu);
    /* 0046e89b: mov word ptr [ebp - 8], ax */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_eax);
    /* 0046e89f: movsx ecx, word ptr [ebp - 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 0046e8a3: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046e8a6: jne 0x46e8bc */ if (!fZ) goto L_0046e8bc;
L_0046e8a8:; BB(0x0046e8a8);
    /* 0046e8a8: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0046e8ac: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0046e8ae: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0046e8af: mov ecx, 3 */ r_ecx = 0x3u;
    /* 0046e8b4: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0046e8b4, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0046e8b4, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0046e8b6: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 0046e8ba: jmp 0x46e909 */ goto L_0046e909;
L_0046e8bc:; BB(0x0046e8bc);
    /* 0046e8bc: movsx edx, word ptr [ebp - 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 0046e8c0: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046e8c3: jne 0x46e8d4 */ if (!fZ) goto L_0046e8d4;
L_0046e8c5:; BB(0x0046e8c5);
    /* 0046e8c5: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0046e8c9: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0046e8ca: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0046e8cc: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0046e8ce: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 0046e8d2: jmp 0x46e909 */ goto L_0046e909;
L_0046e8d4:; BB(0x0046e8d4);
    /* 0046e8d4: movsx eax, word ptr [ebp - 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 0046e8d8: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046e8db: jne 0x46e8ef */ if (!fZ) goto L_0046e8ef;
L_0046e8dd:; BB(0x0046e8dd);
    /* 0046e8dd: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0046e8e1: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0046e8e2: mov ecx, 3 */ r_ecx = 0x3u;
    /* 0046e8e7: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0046e8e7, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0046e8e7, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0046e8e9: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 0046e8ed: jmp 0x46e909 */ goto L_0046e909;
L_0046e8ef:; BB(0x0046e8ef);
    /* 0046e8ef: movsx edx, word ptr [ebp - 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 0046e8f3: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046e8f6: jle 0x46e909 */ if ((fZ||fS!=fO)) goto L_0046e909;
L_0046e8f8:; BB(0x0046e8f8);
    /* 0046e8f8: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0046e8fc: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0046e8fd: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0046e900: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0046e902: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0046e905: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_0046e909:; BB(0x0046e909);
    /* 0046e909: jmp 0x46e986 */ goto L_0046e986;
L_0046e90b:; BB(0x0046e90b);
    /* 0046e90b: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046e911: call 0x4c7050 */ r_esp -= 4; W32(r_esp, 0x46e916u); f_004c7050();
    /* 0046e916: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046e917: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046e91d: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046e920: call 0x4f6880 */ r_esp -= 4; W32(r_esp, 0x46e925u); f_004f6880();
    /* 0046e925: mov word ptr [ebp - 0xc], ax */ W16((u32)(r_ebp+0xfffffff4u), (u16)r_eax);
    /* 0046e929: movsx eax, word ptr [ebp - 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 0046e92d: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0046e930: lea edx, [eax + ecx - 2] */ r_edx = (u32)(r_eax+r_ecx+0xfffffffeu);
    /* 0046e934: mov word ptr [ebp - 0xc], dx */ W16((u32)(r_ebp+0xfffffff4u), (u16)r_edx);
    /* 0046e938: movsx eax, word ptr [ebp - 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 0046e93c: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046e93f: jne 0x46e955 */ if (!fZ) goto L_0046e955;
L_0046e941:; BB(0x0046e941);
    /* 0046e941: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0046e945: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0046e947: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0046e948: mov ecx, 3 */ r_ecx = 0x3u;
    /* 0046e94d: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0046e94d, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0046e94d, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0046e94f: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 0046e953: jmp 0x46e986 */ goto L_0046e986;
L_0046e955:; BB(0x0046e955);
    /* 0046e955: movsx edx, word ptr [ebp - 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 0046e959: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046e95c: jne 0x46e96d */ if (!fZ) goto L_0046e96d;
L_0046e95e:; BB(0x0046e95e);
    /* 0046e95e: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0046e962: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0046e963: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0046e965: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0046e967: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 0046e96b: jmp 0x46e986 */ goto L_0046e986;
L_0046e96d:; BB(0x0046e96d);
    /* 0046e96d: movsx eax, word ptr [ebp - 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 0046e971: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046e974: jle 0x46e986 */ if ((fZ||fS!=fO)) goto L_0046e986;
L_0046e976:; BB(0x0046e976);
    /* 0046e976: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0046e97a: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0046e97b: mov ecx, 3 */ r_ecx = 0x3u;
    /* 0046e980: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0046e980, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0046e980, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0046e982: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_0046e986:; BB(0x0046e986);
    /* 0046e986: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 0046e98a: mov esp, ebp */ r_esp = r_ebp;
    /* 0046e98c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046e98d: ret  */ FN_RET(0x0046e810); r_esp += 4; return;
}

void f_0046e990(void) /* sub_46E990 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046e990);
    /* 0046e990: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046e991: mov ebp, esp */ r_ebp = r_esp;
    /* 0046e993: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0046e995: push 0x69f81b */ { u32 v = 0x69f81bu; r_esp -= 4; W32(r_esp, v); }
    /* 0046e99a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0046e9a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046e9a1: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0046e9a4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0046e9a9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0046e9ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046e9ac: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0046e9af: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0046e9b5: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046e9bb: call 0x47e420 */ r_esp -= 4; W32(r_esp, 0x46e9c0u); f_0047e420();
    /* 0046e9c0: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0046e9c3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046e9c9: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x46e9ceu); f_0047e3b0();
    /* 0046e9ce: mov dword ptr [0x791048], eax */ W32((u32)(0x791048u), r_eax);
    /* 0046e9d3: lea eax, [ebp - 0x18] */ r_eax = (u32)(r_ebp+0xffffffe8u);
    /* 0046e9d6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046e9d7: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046e9dd: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x46e9e2u); f_004c7c40();
    /* 0046e9e2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0046e9e9: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0046e9ec: movsx edx, word ptr [ecx*2 + 0x790fb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*2+0x790fb8u));
    /* 0046e9f4: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046e9f7: je 0x46e9fe */ if (fZ) goto L_0046e9fe;
L_0046e9f9:; BB(0x0046e9f9);
    /* 0046e9f9: call 0x46e6f0 */ r_esp -= 4; W32(r_esp, 0x46e9feu); f_0046e6f0();
L_0046e9fe:; BB(0x0046e9fe);
    /* 0046e9fe: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0046ea01: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046ea02: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046ea04: call 0x46e1f0 */ r_esp -= 4; W32(r_esp, 0x46ea09u); f_0046e1f0();
    /* 0046ea09: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046ea0c: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 0046ea0f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046ea10: call 0x46ea60 */ r_esp -= 4; W32(r_esp, 0x46ea15u); f_0046ea60();
    /* 0046ea15: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046ea18: mov word ptr [ebp - 0x10], ax */ W16((u32)(r_ebp+0xfffffff0u), (u16)r_eax);
    /* 0046ea1c: mov dx, word ptr [ebp - 0x10] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff0u))) & 0xffffu);
    /* 0046ea20: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046ea21: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0046ea24: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046ea25: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0046ea28: mov dx, word ptr [ecx*2 + 0x791030] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx*2+0x791030u))) & 0xffffu);
    /* 0046ea30: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046ea31: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 0046ea34: call 0x498c70 */ r_esp -= 4; W32(r_esp, 0x46ea39u); f_00498c70();
    /* 0046ea39: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0046ea40: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 0046ea43: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x46ea48u); f_00484470();
    /* 0046ea48: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046ea4b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0046ea52: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0046ea53: mov esp, ebp */ r_esp = r_ebp;
    /* 0046ea55: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046ea56: ret  */ FN_RET(0x0046e990); r_esp += 4; return;
}

void f_0046ea60(void) /* sub_46EA60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046ea60);
    /* 0046ea60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046ea61: mov ebp, esp */ r_ebp = r_esp;
    /* 0046ea63: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0046ea65: push 0x69f83e */ { u32 v = 0x69f83eu; r_esp -= 4; W32(r_esp, v); }
    /* 0046ea6a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0046ea70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046ea71: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0046ea74: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0046ea75: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0046ea7a: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0046ea7c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046ea7d: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0046ea80: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0046ea86: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046ea8c: call 0x47e420 */ r_esp -= 4; W32(r_esp, 0x46ea91u); f_0047e420();
    /* 0046ea91: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0046ea94: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0046ea97: mov byte ptr [eax + 0x791040], 0 */ W8((u32)(r_eax+0x791040u), 0x0u);
    /* 0046ea9e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0046eaa1: mov byte ptr [ecx + 0x791008], 0 */ W8((u32)(r_ecx+0x791008u), 0x0u);
    /* 0046eaa8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0046eaab: movzx eax, byte ptr [edx + 0x7912e0] */ r_eax = (u32)R8((u32)(r_edx+0x7912e0u));
    /* 0046eab2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046eab4: je 0x46eabf */ if (fZ) goto L_0046eabf;
L_0046eab6:; BB(0x0046eab6);
    /* 0046eab6: or ax, 0xffff */ {  u32 a = (u16)r_eax; u32 b = 0xffffu; u32 r = (a | b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0046eaba: jmp 0x46ef17 */ goto L_0046ef17;
L_0046eabf:; BB(0x0046eabf);
    /* 0046eabf: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046eac5: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x46eacau); f_0047e3b0();
    /* 0046eaca: mov ecx, eax */ r_ecx = r_eax;
    /* 0046eacc: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x46ead1u); f_004c7010();
    /* 0046ead1: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046ead4: jne 0x46eadf */ if (!fZ) goto L_0046eadf;
L_0046ead6:; BB(0x0046ead6);
    /* 0046ead6: or ax, 0xffff */ {  u32 a = (u16)r_eax; u32 b = 0xffffu; u32 r = (a | b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0046eada: jmp 0x46ef17 */ goto L_0046ef17;
L_0046eadf:; BB(0x0046eadf);
    /* 0046eadf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046eae1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046eae3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046eae5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046eae7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046eae9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046eaeb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046eaed: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0046eaf0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046eaf1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0046eaf4: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x46eaf9u); f_00485940();
    /* 0046eaf9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0046eb00: mov edx, dword ptr [0x791394] */ r_edx = R32((u32)(0x791394u));
    /* 0046eb06: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046eb07: lea eax, [ebp - 0x15] */ r_eax = (u32)(r_ebp+0xffffffebu);
    /* 0046eb0a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046eb0b: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0046eb0e: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x46eb13u); f_004a2160();
    /* 0046eb13: mov ecx, eax */ r_ecx = r_eax;
    /* 0046eb15: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x46eb1au); f_004a1e10();
    /* 0046eb1a: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0046eb1d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046eb1f: je 0x46eb52 */ if (fZ) goto L_0046eb52;
L_0046eb21:; BB(0x0046eb21);
    /* 0046eb21: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0046eb23: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x46eb28u); f_0062fbf0();
    /* 0046eb28: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046eb2b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046eb2d: jne 0x46eb4d */ if (!fZ) goto L_0046eb4d;
L_0046eb2f:; BB(0x0046eb2f);
    /* 0046eb2f: mov word ptr [ebp - 0x18], 0 */ W16((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 0046eb35: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0046eb3c: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0046eb3f: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x46eb44u); f_004a20f0();
    /* 0046eb44: mov ax, word ptr [ebp - 0x18] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe8u))) & 0xffffu);
    /* 0046eb48: jmp 0x46ef17 */ goto L_0046ef17;
L_0046eb4d:; BB(0x0046eb4d);
    /* 0046eb4d: jmp 0x46eefe */ goto L_0046eefe;
L_0046eb52:; BB(0x0046eb52);
    /* 0046eb52: mov edx, dword ptr [0x791418] */ r_edx = R32((u32)(0x791418u));
    /* 0046eb58: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046eb59: lea eax, [ebp - 0x19] */ r_eax = (u32)(r_ebp+0xffffffe7u);
    /* 0046eb5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046eb5d: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0046eb60: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x46eb65u); f_004a2160();
    /* 0046eb65: mov ecx, eax */ r_ecx = r_eax;
    /* 0046eb67: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x46eb6cu); f_004a1e10();
    /* 0046eb6c: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0046eb6f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046eb71: je 0x46ebb9 */ if (fZ) goto L_0046ebb9;
L_0046eb73:; BB(0x0046eb73);
    /* 0046eb73: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046eb79: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x46eb7eu); f_0047e3b0();
    /* 0046eb7e: mov ecx, eax */ r_ecx = r_eax;
    /* 0046eb80: call 0x4e1630 */ r_esp -= 4; W32(r_esp, 0x46eb85u); f_004e1630();
    /* 0046eb85: movsx esi, ax */ r_esi = (u32)(i32)(i16)(u16)r_eax;
    /* 0046eb88: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0046eb8a: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x46eb8fu); f_0062fbf0();
    /* 0046eb8f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046eb92: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046eb94: jle 0x46ebb4 */ if ((fZ||fS!=fO)) goto L_0046ebb4;
L_0046eb96:; BB(0x0046eb96);
    /* 0046eb96: mov word ptr [ebp - 0x1c], 2 */ W16((u32)(r_ebp+0xffffffe4u), 0x2u);
    /* 0046eb9c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0046eba3: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0046eba6: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x46ebabu); f_004a20f0();
    /* 0046ebab: mov ax, word ptr [ebp - 0x1c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe4u))) & 0xffffu);
    /* 0046ebaf: jmp 0x46ef17 */ goto L_0046ef17;
L_0046ebb4:; BB(0x0046ebb4);
    /* 0046ebb4: jmp 0x46eefe */ goto L_0046eefe;
L_0046ebb9:; BB(0x0046ebb9);
    /* 0046ebb9: mov edx, dword ptr [0x791380] */ r_edx = R32((u32)(0x791380u));
    /* 0046ebbf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046ebc0: lea eax, [ebp - 0x1d] */ r_eax = (u32)(r_ebp+0xffffffe3u);
    /* 0046ebc3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046ebc4: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0046ebc7: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x46ebccu); f_004a2160();
    /* 0046ebcc: mov ecx, eax */ r_ecx = r_eax;
    /* 0046ebce: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x46ebd3u); f_004a1e10();
    /* 0046ebd3: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0046ebd6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046ebd8: je 0x46ec53 */ if (fZ) goto L_0046ec53;
L_0046ebda:; BB(0x0046ebda);
    /* 0046ebda: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046ebe0: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x46ebe5u); f_0047e3b0();
    /* 0046ebe5: mov ecx, eax */ r_ecx = r_eax;
    /* 0046ebe7: call 0x4e04d0 */ r_esp -= 4; W32(r_esp, 0x46ebecu); f_004e04d0();
    /* 0046ebec: movsx esi, ax */ r_esi = (u32)(i32)(i16)(u16)r_eax;
    /* 0046ebef: push 0x258 */ { u32 v = 0x258u; r_esp -= 4; W32(r_esp, v); }
    /* 0046ebf4: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x46ebf9u); f_0062fbf0();
    /* 0046ebf9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046ebfc: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046ebfe: jle 0x46ec4e */ if ((fZ||fS!=fO)) goto L_0046ec4e;
L_0046ec00:; BB(0x0046ec00);
    /* 0046ec00: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046ec06: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x46ec0bu); f_0047e3b0();
    /* 0046ec0b: mov ecx, eax */ r_ecx = r_eax;
    /* 0046ec0d: call 0x4e04d0 */ r_esp -= 4; W32(r_esp, 0x46ec12u); f_004e04d0();
    /* 0046ec12: movsx esi, ax */ r_esi = (u32)(i32)(i16)(u16)r_eax;
    /* 0046ec15: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 0046ec1a: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x46ec1fu); f_0062fbf0();
    /* 0046ec1f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046ec22: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046ec24: jle 0x46ec4e */ if ((fZ||fS!=fO)) goto L_0046ec4e;
L_0046ec26:; BB(0x0046ec26);
    /* 0046ec26: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0046ec29: mov byte ptr [edx + 0x791040], 1 */ W8((u32)(r_edx+0x791040u), 0x1u);
    /* 0046ec30: mov word ptr [ebp - 0x20], 0 */ W16((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 0046ec36: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0046ec3d: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0046ec40: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x46ec45u); f_004a20f0();
    /* 0046ec45: mov ax, word ptr [ebp - 0x20] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe0u))) & 0xffffu);
    /* 0046ec49: jmp 0x46ef17 */ goto L_0046ef17;
L_0046ec4e:; BB(0x0046ec4e);
    /* 0046ec4e: jmp 0x46eefe */ goto L_0046eefe;
L_0046ec53:; BB(0x0046ec53);
    /* 0046ec53: mov eax, dword ptr [0x7913b0] */ r_eax = R32((u32)(0x7913b0u));
    /* 0046ec58: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046ec59: lea ecx, [ebp - 0x21] */ r_ecx = (u32)(r_ebp+0xffffffdfu);
    /* 0046ec5c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046ec5d: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0046ec60: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x46ec65u); f_004a2160();
    /* 0046ec65: mov ecx, eax */ r_ecx = r_eax;
    /* 0046ec67: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x46ec6cu); f_004a1e10();
    /* 0046ec6c: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0046ec6f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046ec71: je 0x46edac */ if (fZ) goto L_0046edac;
L_0046ec77:; BB(0x0046ec77);
    /* 0046ec77: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046ec7d: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x46ec82u); f_0047e3b0();
    /* 0046ec82: mov ecx, eax */ r_ecx = r_eax;
    /* 0046ec84: call 0x4e1630 */ r_esp -= 4; W32(r_esp, 0x46ec89u); f_004e1630();
    /* 0046ec89: movsx esi, ax */ r_esi = (u32)(i32)(i16)(u16)r_eax;
    /* 0046ec8c: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 0046ec8e: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x46ec93u); f_0062fbf0();
    /* 0046ec93: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046ec96: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046ec98: jle 0x46ecbd */ if ((fZ||fS!=fO)) goto L_0046ecbd;
L_0046ec9a:; BB(0x0046ec9a);
    /* 0046ec9a: mov word ptr [ebp - 0x24], 2 */ W16((u32)(r_ebp+0xffffffdcu), 0x2u);
    /* 0046eca0: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0046eca7: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0046ecaa: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x46ecafu); f_004a20f0();
    /* 0046ecaf: mov ax, word ptr [ebp - 0x24] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffdcu))) & 0xffffu);
    /* 0046ecb3: jmp 0x46ef17 */ goto L_0046ef17;
L_0046ecbd:; BB(0x0046ecbd);
    /* 0046ecbd: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046ecc3: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x46ecc8u); f_0047e3b0();
    /* 0046ecc8: mov ecx, eax */ r_ecx = r_eax;
    /* 0046ecca: call 0x4e04d0 */ r_esp -= 4; W32(r_esp, 0x46eccfu); f_004e04d0();
    /* 0046eccf: movsx esi, ax */ r_esi = (u32)(i32)(i16)(u16)r_eax;
    /* 0046ecd2: push 0x4b0 */ { u32 v = 0x4b0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046ecd7: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x46ecdcu); f_0062fbf0();
    /* 0046ecdc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046ecdf: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046ece1: jle 0x46ed33 */ if ((fZ||fS!=fO)) goto L_0046ed33;
L_0046ece3:; BB(0x0046ece3);
    /* 0046ece3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046ece9: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x46eceeu); f_0047e3b0();
    /* 0046ecee: mov ecx, eax */ r_ecx = r_eax;
    /* 0046ecf0: call 0x4e04d0 */ r_esp -= 4; W32(r_esp, 0x46ecf5u); f_004e04d0();
    /* 0046ecf5: movsx esi, ax */ r_esi = (u32)(i32)(i16)(u16)r_eax;
    /* 0046ecf8: push 0x190 */ { u32 v = 0x190u; r_esp -= 4; W32(r_esp, v); }
    /* 0046ecfd: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x46ed02u); f_0062fbf0();
    /* 0046ed02: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046ed05: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046ed07: jle 0x46ed33 */ if ((fZ||fS!=fO)) goto L_0046ed33;
L_0046ed09:; BB(0x0046ed09);
    /* 0046ed09: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0046ed0c: mov byte ptr [eax + 0x791008], 1 */ W8((u32)(r_eax+0x791008u), 0x1u);
    /* 0046ed13: mov word ptr [ebp - 0x26], 1 */ W16((u32)(r_ebp+0xffffffdau), 0x1u);
    /* 0046ed19: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0046ed20: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0046ed23: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x46ed28u); f_004a20f0();
    /* 0046ed28: mov ax, word ptr [ebp - 0x26] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffdau))) & 0xffffu);
    /* 0046ed2c: jmp 0x46ef17 */ goto L_0046ef17;
L_0046ed33:; BB(0x0046ed33);
    /* 0046ed33: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046ed39: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x46ed3eu); f_0047e3b0();
    /* 0046ed3e: mov ecx, eax */ r_ecx = r_eax;
    /* 0046ed40: call 0x4e04d0 */ r_esp -= 4; W32(r_esp, 0x46ed45u); f_004e04d0();
    /* 0046ed45: movsx esi, ax */ r_esi = (u32)(i32)(i16)(u16)r_eax;
    /* 0046ed48: push 0x4b0 */ { u32 v = 0x4b0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046ed4d: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x46ed52u); f_0062fbf0();
    /* 0046ed52: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046ed55: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046ed57: jle 0x46eda7 */ if ((fZ||fS!=fO)) goto L_0046eda7;
L_0046ed59:; BB(0x0046ed59);
    /* 0046ed59: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046ed5f: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x46ed64u); f_0047e3b0();
    /* 0046ed64: mov ecx, eax */ r_ecx = r_eax;
    /* 0046ed66: call 0x4e04d0 */ r_esp -= 4; W32(r_esp, 0x46ed6bu); f_004e04d0();
    /* 0046ed6b: movsx esi, ax */ r_esi = (u32)(i32)(i16)(u16)r_eax;
    /* 0046ed6e: push 0x190 */ { u32 v = 0x190u; r_esp -= 4; W32(r_esp, v); }
    /* 0046ed73: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x46ed78u); f_0062fbf0();
    /* 0046ed78: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046ed7b: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046ed7d: jle 0x46eda7 */ if ((fZ||fS!=fO)) goto L_0046eda7;
L_0046ed7f:; BB(0x0046ed7f);
    /* 0046ed7f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0046ed82: mov byte ptr [ecx + 0x791040], 1 */ W8((u32)(r_ecx+0x791040u), 0x1u);
    /* 0046ed89: mov word ptr [ebp - 0x28], 0 */ W16((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0046ed8f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0046ed96: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0046ed99: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x46ed9eu); f_004a20f0();
    /* 0046ed9e: mov ax, word ptr [ebp - 0x28] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffd8u))) & 0xffffu);
    /* 0046eda2: jmp 0x46ef17 */ goto L_0046ef17;
L_0046eda7:; BB(0x0046eda7);
    /* 0046eda7: jmp 0x46eefe */ goto L_0046eefe;
L_0046edac:; BB(0x0046edac);
    /* 0046edac: mov edx, dword ptr [0x791390] */ r_edx = R32((u32)(0x791390u));
    /* 0046edb2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046edb3: lea eax, [ebp - 0x29] */ r_eax = (u32)(r_ebp+0xffffffd7u);
    /* 0046edb6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046edb7: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0046edba: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x46edbfu); f_004a2160();
    /* 0046edbf: mov ecx, eax */ r_ecx = r_eax;
    /* 0046edc1: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x46edc6u); f_004a1e10();
    /* 0046edc6: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0046edc9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046edcb: je 0x46eefe */ if (fZ) goto L_0046eefe;
L_0046edd1:; BB(0x0046edd1);
    /* 0046edd1: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046edd7: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x46eddcu); f_0047e3b0();
    /* 0046eddc: mov ecx, eax */ r_ecx = r_eax;
    /* 0046edde: call 0x4e1630 */ r_esp -= 4; W32(r_esp, 0x46ede3u); f_004e1630();
    /* 0046ede3: movsx esi, ax */ r_esi = (u32)(i32)(i16)(u16)r_eax;
    /* 0046ede6: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 0046ede8: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x46ededu); f_0062fbf0();
    /* 0046eded: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046edf0: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046edf2: jle 0x46ee17 */ if ((fZ||fS!=fO)) goto L_0046ee17;
L_0046edf4:; BB(0x0046edf4);
    /* 0046edf4: mov word ptr [ebp - 0x2c], 2 */ W16((u32)(r_ebp+0xffffffd4u), 0x2u);
    /* 0046edfa: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0046ee01: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0046ee04: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x46ee09u); f_004a20f0();
    /* 0046ee09: mov ax, word ptr [ebp - 0x2c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffd4u))) & 0xffffu);
    /* 0046ee0d: jmp 0x46ef17 */ goto L_0046ef17;
L_0046ee17:; BB(0x0046ee17);
    /* 0046ee17: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046ee1d: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x46ee22u); f_0047e3b0();
    /* 0046ee22: mov ecx, eax */ r_ecx = r_eax;
    /* 0046ee24: call 0x4e04d0 */ r_esp -= 4; W32(r_esp, 0x46ee29u); f_004e04d0();
    /* 0046ee29: movsx esi, ax */ r_esi = (u32)(i32)(i16)(u16)r_eax;
    /* 0046ee2c: push 0x4b0 */ { u32 v = 0x4b0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046ee31: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x46ee36u); f_0062fbf0();
    /* 0046ee36: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046ee39: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046ee3b: jle 0x46ee8d */ if ((fZ||fS!=fO)) goto L_0046ee8d;
L_0046ee3d:; BB(0x0046ee3d);
    /* 0046ee3d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046ee43: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x46ee48u); f_0047e3b0();
    /* 0046ee48: mov ecx, eax */ r_ecx = r_eax;
    /* 0046ee4a: call 0x4e04d0 */ r_esp -= 4; W32(r_esp, 0x46ee4fu); f_004e04d0();
    /* 0046ee4f: movsx esi, ax */ r_esi = (u32)(i32)(i16)(u16)r_eax;
    /* 0046ee52: push 0x190 */ { u32 v = 0x190u; r_esp -= 4; W32(r_esp, v); }
    /* 0046ee57: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x46ee5cu); f_0062fbf0();
    /* 0046ee5c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046ee5f: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046ee61: jle 0x46ee8d */ if ((fZ||fS!=fO)) goto L_0046ee8d;
L_0046ee63:; BB(0x0046ee63);
    /* 0046ee63: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0046ee66: mov byte ptr [edx + 0x791008], 1 */ W8((u32)(r_edx+0x791008u), 0x1u);
    /* 0046ee6d: mov word ptr [ebp - 0x2e], 1 */ W16((u32)(r_ebp+0xffffffd2u), 0x1u);
    /* 0046ee73: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0046ee7a: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0046ee7d: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x46ee82u); f_004a20f0();
    /* 0046ee82: mov ax, word ptr [ebp - 0x2e] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffd2u))) & 0xffffu);
    /* 0046ee86: jmp 0x46ef17 */ goto L_0046ef17;
L_0046ee8d:; BB(0x0046ee8d);
    /* 0046ee8d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046ee93: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x46ee98u); f_0047e3b0();
    /* 0046ee98: mov ecx, eax */ r_ecx = r_eax;
    /* 0046ee9a: call 0x4e04d0 */ r_esp -= 4; W32(r_esp, 0x46ee9fu); f_004e04d0();
    /* 0046ee9f: movsx esi, ax */ r_esi = (u32)(i32)(i16)(u16)r_eax;
    /* 0046eea2: push 0x4b0 */ { u32 v = 0x4b0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046eea7: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x46eeacu); f_0062fbf0();
    /* 0046eeac: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046eeaf: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046eeb1: jle 0x46eefe */ if ((fZ||fS!=fO)) goto L_0046eefe;
L_0046eeb3:; BB(0x0046eeb3);
    /* 0046eeb3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046eeb9: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x46eebeu); f_0047e3b0();
    /* 0046eebe: mov ecx, eax */ r_ecx = r_eax;
    /* 0046eec0: call 0x4e04d0 */ r_esp -= 4; W32(r_esp, 0x46eec5u); f_004e04d0();
    /* 0046eec5: movsx esi, ax */ r_esi = (u32)(i32)(i16)(u16)r_eax;
    /* 0046eec8: push 0x190 */ { u32 v = 0x190u; r_esp -= 4; W32(r_esp, v); }
    /* 0046eecd: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x46eed2u); f_0062fbf0();
    /* 0046eed2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046eed5: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046eed7: jle 0x46eefe */ if ((fZ||fS!=fO)) goto L_0046eefe;
L_0046eed9:; BB(0x0046eed9);
    /* 0046eed9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0046eedc: mov byte ptr [eax + 0x791040], 1 */ W8((u32)(r_eax+0x791040u), 0x1u);
    /* 0046eee3: mov word ptr [ebp - 0x30], 0 */ W16((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0046eee9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0046eef0: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0046eef3: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x46eef8u); f_004a20f0();
    /* 0046eef8: mov ax, word ptr [ebp - 0x30] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffd0u))) & 0xffffu);
    /* 0046eefc: jmp 0x46ef17 */ goto L_0046ef17;
L_0046eefe:; BB(0x0046eefe);
    /* 0046eefe: mov word ptr [ebp - 0x32], 0xffff */ W16((u32)(r_ebp+0xffffffceu), 0xffffu);
    /* 0046ef04: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0046ef0b: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0046ef0e: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x46ef13u); f_004a20f0();
    /* 0046ef13: mov ax, word ptr [ebp - 0x32] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffceu))) & 0xffffu);
L_0046ef17:; BB(0x0046ef17);
    /* 0046ef17: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046ef1a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0046ef21: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0046ef22: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0046ef23: mov esp, ebp */ r_esp = r_ebp;
    /* 0046ef25: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046ef26: ret  */ FN_RET(0x0046ea60); r_esp += 4; return;
}

