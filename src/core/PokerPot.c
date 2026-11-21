#include "protos.h"

void f_004f4320(void) /* PokerPot::func_004f4320 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f4320);
    /* 004f4320: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f4321: mov ebp, esp */ r_ebp = r_esp;
    /* 004f4323: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004f4325: push 0x6a2626 */ { u32 v = 0x6a2626u; r_esp -= 4; W32(r_esp, v); }
    /* 004f432a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004f4330: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f4331: sub esp, 0x78 */ {  u32 a = r_esp; u32 b = 0x78u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f4334: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 004f4339: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f433b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f433c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 004f433f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 004f4345: mov dword ptr [ebp - 0x7c], ecx */ W32((u32)(r_ebp+0xffffff84u), r_ecx);
    /* 004f4348: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f434c: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f434f: jge 0x4f4365 */ if ((fS==fO)) goto L_004f4365;
L_004f4351:; BB(0x004f4351);
    /* 004f4351: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f4353: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f4358: push 0x6bfdf0 */ { u32 v = 0x6bfdf0u; r_esp -= 4; W32(r_esp, v); }
    /* 004f435d: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f4362u); f_005e9f20();
    /* 004f4362: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f4365:; BB(0x004f4365);
    /* 004f4365: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 004f4368: movsx eax, word ptr [edx + 6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x6u));
    /* 004f436c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f436e: jle 0x4f4378 */ if ((fZ||fS!=fO)) goto L_004f4378;
L_004f4370:; BB(0x004f4370);
    /* 004f4370: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 004f4373: call 0x4f9760 */ r_esp -= 4; W32(r_esp, 0x4f4378u); f_004f9760();
L_004f4378:; BB(0x004f4378);
    /* 004f4378: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 004f437b: mov byte ptr [ecx + 1], 1 */ W8((u32)(r_ecx+0x1u), 0x1u);
    /* 004f437f: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 004f4382: mov ax, word ptr [ebp + 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 004f4386: mov word ptr [edx + 6], ax */ W16((u32)(r_edx+0x6u), (u16)r_eax);
    /* 004f438a: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 004f438d: mov byte ptr [ecx], 0 */ W8((u32)(r_ecx), 0x0u);
    /* 004f4390: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 004f4393: mov byte ptr [edx + 2], 0 */ W8((u32)(r_edx+0x2u), 0x0u);
    /* 004f4397: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 004f439a: mov byte ptr [eax + 3], 0 */ W8((u32)(r_eax+0x3u), 0x0u);
    /* 004f439e: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 004f43a1: mov dword ptr [ecx + 0xc], 0 */ W32((u32)(r_ecx+0xcu), 0x0u);
    /* 004f43a8: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 004f43ab: mov dword ptr [edx + 0x10], 0 */ W32((u32)(r_edx+0x10u), 0x0u);
    /* 004f43b2: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 004f43b5: mov dword ptr [eax + 0x24], 0 */ W32((u32)(r_eax+0x24u), 0x0u);
    /* 004f43bc: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 004f43bf: movsx edx, word ptr [ecx + 6] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x6u));
    /* 004f43c3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f43c4: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x4f43c9u); f_00686d82();
    /* 004f43c9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f43cc: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004f43cf: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 004f43d2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f43d5: mov dword ptr [eax + 0x30], ecx */ W32((u32)(r_eax+0x30u), r_ecx);
    /* 004f43d8: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 004f43db: cmp dword ptr [edx + 0x30], 0 */ {  u32 a = R32((u32)(r_edx+0x30u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f43df: jne 0x4f43f5 */ if (!fZ) goto L_004f43f5;
L_004f43e1:; BB(0x004f43e1);
    /* 004f43e1: push 0x3d */ { u32 v = 0x3du; r_esp -= 4; W32(r_esp, v); }
    /* 004f43e3: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f43e8: push 0x6bfde4 */ { u32 v = 0x6bfde4u; r_esp -= 4; W32(r_esp, v); }
    /* 004f43ed: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f43f2u); f_005e9f20();
    /* 004f43f2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f43f5:; BB(0x004f43f5);
    /* 004f43f5: mov word ptr [ebp - 0x10], 0 */ W16((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 004f43fb: jmp 0x4f4409 */ goto L_004f4409;
L_004f43fd:; BB(0x004f43fd);
    /* 004f43fd: mov cx, word ptr [ebp - 0x10] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff0u))) & 0xffffu);
    /* 004f4401: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f4405: mov word ptr [ebp - 0x10], cx */ W16((u32)(r_ebp+0xfffffff0u), (u16)r_ecx);
L_004f4409:; BB(0x004f4409);
    /* 004f4409: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004f440d: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 004f4410: movsx ecx, word ptr [eax + 6] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x6u));
    /* 004f4414: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f4416: jge 0x4f4428 */ if ((fS==fO)) goto L_004f4428;
L_004f4418:; BB(0x004f4418);
    /* 004f4418: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004f441c: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 004f441f: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 004f4422: mov byte ptr [edx + ecx], 0 */ W8((u32)(r_edx+r_ecx), 0x0u);
    /* 004f4426: jmp 0x4f43fd */ goto L_004f43fd;
L_004f4428:; BB(0x004f4428);
    /* 004f4428: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 004f442b: movsx eax, word ptr [edx + 6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x6u));
    /* 004f442f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f4430: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x4f4435u); f_00686d82();
    /* 004f4435: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f4438: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004f443b: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 004f443e: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004f4441: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 004f4444: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 004f4447: cmp dword ptr [eax + 0x34], 0 */ {  u32 a = R32((u32)(r_eax+0x34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f444b: jne 0x4f4461 */ if (!fZ) goto L_004f4461;
L_004f444d:; BB(0x004f444d);
    /* 004f444d: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 004f444f: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f4454: push 0x6bfddc */ { u32 v = 0x6bfddcu; r_esp -= 4; W32(r_esp, v); }
    /* 004f4459: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f445eu); f_005e9f20();
    /* 004f445e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f4461:; BB(0x004f4461);
    /* 004f4461: mov word ptr [ebp - 0x10], 0 */ W16((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 004f4467: jmp 0x4f4475 */ goto L_004f4475;
L_004f4469:; BB(0x004f4469);
    /* 004f4469: mov dx, word ptr [ebp - 0x10] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff0u))) & 0xffffu);
    /* 004f446d: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f4471: mov word ptr [ebp - 0x10], dx */ W16((u32)(r_ebp+0xfffffff0u), (u16)r_edx);
L_004f4475:; BB(0x004f4475);
    /* 004f4475: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004f4479: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 004f447c: movsx edx, word ptr [ecx + 6] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x6u));
    /* 004f4480: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f4482: jge 0x4f4494 */ if ((fS==fO)) goto L_004f4494;
L_004f4484:; BB(0x004f4484);
    /* 004f4484: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004f4488: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 004f448b: mov edx, dword ptr [ecx + 0x34] */ r_edx = R32((u32)(r_ecx+0x34u));
    /* 004f448e: mov byte ptr [eax + edx], 0 */ W8((u32)(r_eax+r_edx), 0x0u);
    /* 004f4492: jmp 0x4f4469 */ goto L_004f4469;
L_004f4494:; BB(0x004f4494);
    /* 004f4494: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 004f4497: movsx ecx, word ptr [eax + 6] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x6u));
    /* 004f449b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f449c: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x4f44a1u); f_00686d82();
    /* 004f44a1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f44a4: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004f44a7: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 004f44aa: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004f44ad: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 004f44b0: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 004f44b3: cmp dword ptr [ecx + 0x38], 0 */ {  u32 a = R32((u32)(r_ecx+0x38u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f44b7: jne 0x4f44cd */ if (!fZ) goto L_004f44cd;
L_004f44b9:; BB(0x004f44b9);
    /* 004f44b9: push 0x47 */ { u32 v = 0x47u; r_esp -= 4; W32(r_esp, v); }
    /* 004f44bb: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f44c0: push 0x6bfdc8 */ { u32 v = 0x6bfdc8u; r_esp -= 4; W32(r_esp, v); }
    /* 004f44c5: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f44cau); f_005e9f20();
    /* 004f44ca: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f44cd:; BB(0x004f44cd);
    /* 004f44cd: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 004f44d0: movsx ecx, word ptr [eax + 6] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x6u));
    /* 004f44d4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f44d5: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x4f44dau); f_00686d82();
    /* 004f44da: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f44dd: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004f44e0: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 004f44e3: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f44e6: mov dword ptr [edx + 0x3c], eax */ W32((u32)(r_edx+0x3cu), r_eax);
    /* 004f44e9: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 004f44ec: cmp dword ptr [ecx + 0x3c], 0 */ {  u32 a = R32((u32)(r_ecx+0x3cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f44f0: jne 0x4f4506 */ if (!fZ) goto L_004f4506;
L_004f44f2:; BB(0x004f44f2);
    /* 004f44f2: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 004f44f4: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f44f9: push 0x6bfdb8 */ { u32 v = 0x6bfdb8u; r_esp -= 4; W32(r_esp, v); }
    /* 004f44fe: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f4503u); f_005e9f20();
    /* 004f4503: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f4506:; BB(0x004f4506);
    /* 004f4506: mov word ptr [ebp - 0x10], 0 */ W16((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 004f450c: jmp 0x4f451a */ goto L_004f451a;
L_004f450e:; BB(0x004f450e);
    /* 004f450e: mov ax, word ptr [ebp - 0x10] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff0u))) & 0xffffu);
    /* 004f4512: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f4516: mov word ptr [ebp - 0x10], ax */ W16((u32)(r_ebp+0xfffffff0u), (u16)r_eax);
L_004f451a:; BB(0x004f451a);
    /* 004f451a: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004f451e: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 004f4521: movsx eax, word ptr [edx + 6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x6u));
    /* 004f4525: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f4527: jge 0x4f4539 */ if ((fS==fO)) goto L_004f4539;
L_004f4529:; BB(0x004f4529);
    /* 004f4529: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004f452d: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 004f4530: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 004f4533: mov byte ptr [ecx + eax], 0 */ W8((u32)(r_ecx+r_eax), 0x0u);
    /* 004f4537: jmp 0x4f450e */ goto L_004f450e;
L_004f4539:; BB(0x004f4539);
    /* 004f4539: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 004f453c: movsx edx, word ptr [ecx + 6] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x6u));
    /* 004f4540: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f4541: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x4f4546u); f_00686d82();
    /* 004f4546: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f4549: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004f454c: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 004f454f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004f4552: mov dword ptr [eax + 0x40], ecx */ W32((u32)(r_eax+0x40u), r_ecx);
    /* 004f4555: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 004f4558: cmp dword ptr [edx + 0x40], 0 */ {  u32 a = R32((u32)(r_edx+0x40u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f455c: jne 0x4f4572 */ if (!fZ) goto L_004f4572;
L_004f455e:; BB(0x004f455e);
    /* 004f455e: push 0x4f */ { u32 v = 0x4fu; r_esp -= 4; W32(r_esp, v); }
    /* 004f4560: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f4565: push 0x6bfda0 */ { u32 v = 0x6bfda0u; r_esp -= 4; W32(r_esp, v); }
    /* 004f456a: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f456fu); f_005e9f20();
    /* 004f456f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f4572:; BB(0x004f4572);
    /* 004f4572: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 004f4575: movsx edx, word ptr [ecx + 6] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x6u));
    /* 004f4579: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f457a: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x4f457fu); f_00686d82();
    /* 004f457f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f4582: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 004f4585: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 004f4588: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004f458b: mov dword ptr [eax + 0x44], ecx */ W32((u32)(r_eax+0x44u), r_ecx);
    /* 004f458e: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 004f4591: cmp dword ptr [edx + 0x44], 0 */ {  u32 a = R32((u32)(r_edx+0x44u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f4595: jne 0x4f45ab */ if (!fZ) goto L_004f45ab;
L_004f4597:; BB(0x004f4597);
    /* 004f4597: push 0x52 */ { u32 v = 0x52u; r_esp -= 4; W32(r_esp, v); }
    /* 004f4599: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f459e: push 0x6bfd90 */ { u32 v = 0x6bfd90u; r_esp -= 4; W32(r_esp, v); }
    /* 004f45a3: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f45a8u); f_005e9f20();
    /* 004f45a8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f45ab:; BB(0x004f45ab);
    /* 004f45ab: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 004f45ae: movsx edx, word ptr [ecx + 6] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x6u));
    /* 004f45b2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f45b3: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x4f45b8u); f_00686d82();
    /* 004f45b8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f45bb: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 004f45be: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 004f45c1: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004f45c4: mov dword ptr [eax + 0x48], ecx */ W32((u32)(r_eax+0x48u), r_ecx);
    /* 004f45c7: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 004f45ca: cmp dword ptr [edx + 0x48], 0 */ {  u32 a = R32((u32)(r_edx+0x48u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f45ce: jne 0x4f45e4 */ if (!fZ) goto L_004f45e4;
L_004f45d0:; BB(0x004f45d0);
    /* 004f45d0: push 0x55 */ { u32 v = 0x55u; r_esp -= 4; W32(r_esp, v); }
    /* 004f45d2: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f45d7: push 0x6bfd84 */ { u32 v = 0x6bfd84u; r_esp -= 4; W32(r_esp, v); }
    /* 004f45dc: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f45e1u); f_005e9f20();
    /* 004f45e1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f45e4:; BB(0x004f45e4);
    /* 004f45e4: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 004f45e7: movsx eax, word ptr [ecx + 6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x6u));
    /* 004f45eb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004f45ed: mov edx, 4 */ r_edx = 0x4u;
    /* 004f45f2: mul edx */ { u64 t = (u64)r_eax * r_edx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 004f45f4: seto cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fO) ? 1 : 0) & 0xffu);
    /* 004f45f7: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004f45f9: or ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 004f45fb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f45fc: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x4f4601u); f_00686d82();
    /* 004f4601: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f4604: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 004f4607: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 004f460a: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004f460d: mov dword ptr [eax + 0x68], ecx */ W32((u32)(r_eax+0x68u), r_ecx);
    /* 004f4610: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 004f4613: cmp dword ptr [edx + 0x68], 0 */ {  u32 a = R32((u32)(r_edx+0x68u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f4617: jne 0x4f462d */ if (!fZ) goto L_004f462d;
L_004f4619:; BB(0x004f4619);
    /* 004f4619: push 0x58 */ { u32 v = 0x58u; r_esp -= 4; W32(r_esp, v); }
    /* 004f461b: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f4620: push 0x6bfd74 */ { u32 v = 0x6bfd74u; r_esp -= 4; W32(r_esp, v); }
    /* 004f4625: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f462au); f_005e9f20();
    /* 004f462a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f462d:; BB(0x004f462d);
    /* 004f462d: mov word ptr [ebp - 0x10], 0 */ W16((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 004f4633: jmp 0x4f4641 */ goto L_004f4641;
L_004f4635:; BB(0x004f4635);
    /* 004f4635: mov cx, word ptr [ebp - 0x10] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff0u))) & 0xffffu);
    /* 004f4639: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f463d: mov word ptr [ebp - 0x10], cx */ W16((u32)(r_ebp+0xfffffff0u), (u16)r_ecx);
L_004f4641:; BB(0x004f4641);
    /* 004f4641: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004f4645: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 004f4648: movsx ecx, word ptr [eax + 6] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x6u));
    /* 004f464c: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f464e: jge 0x4f4663 */ if ((fS==fO)) goto L_004f4663;
L_004f4650:; BB(0x004f4650);
    /* 004f4650: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004f4654: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 004f4657: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 004f465a: mov dword ptr [ecx + edx*4], 0 */ W32((u32)(r_ecx+r_edx*4), 0x0u);
    /* 004f4661: jmp 0x4f4635 */ goto L_004f4635;
L_004f4663:; BB(0x004f4663);
    /* 004f4663: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 004f4666: movsx eax, word ptr [edx + 6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x6u));
    /* 004f466a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004f466c: mov edx, 4 */ r_edx = 0x4u;
    /* 004f4671: mul edx */ { u64 t = (u64)r_eax * r_edx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 004f4673: seto cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fO) ? 1 : 0) & 0xffu);
    /* 004f4676: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004f4678: or ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 004f467a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f467b: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x4f4680u); f_00686d82();
    /* 004f4680: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f4683: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 004f4686: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 004f4689: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004f468c: mov dword ptr [eax + 0x6c], ecx */ W32((u32)(r_eax+0x6cu), r_ecx);
    /* 004f468f: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 004f4692: cmp dword ptr [edx + 0x6c], 0 */ {  u32 a = R32((u32)(r_edx+0x6cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f4696: jne 0x4f46ac */ if (!fZ) goto L_004f46ac;
L_004f4698:; BB(0x004f4698);
    /* 004f4698: push 0x5d */ { u32 v = 0x5du; r_esp -= 4; W32(r_esp, v); }
    /* 004f469a: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f469f: push 0x6bfd60 */ { u32 v = 0x6bfd60u; r_esp -= 4; W32(r_esp, v); }
    /* 004f46a4: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f46a9u); f_005e9f20();
    /* 004f46a9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f46ac:; BB(0x004f46ac);
    /* 004f46ac: mov word ptr [ebp - 0x10], 0 */ W16((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 004f46b2: jmp 0x4f46c0 */ goto L_004f46c0;
L_004f46b4:; BB(0x004f46b4);
    /* 004f46b4: mov cx, word ptr [ebp - 0x10] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff0u))) & 0xffffu);
    /* 004f46b8: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f46bc: mov word ptr [ebp - 0x10], cx */ W16((u32)(r_ebp+0xfffffff0u), (u16)r_ecx);
L_004f46c0:; BB(0x004f46c0);
    /* 004f46c0: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004f46c4: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 004f46c7: movsx ecx, word ptr [eax + 6] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x6u));
    /* 004f46cb: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f46cd: jge 0x4f46e2 */ if ((fS==fO)) goto L_004f46e2;
L_004f46cf:; BB(0x004f46cf);
    /* 004f46cf: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004f46d3: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 004f46d6: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 004f46d9: mov dword ptr [ecx + edx*4], 0 */ W32((u32)(r_ecx+r_edx*4), 0x0u);
    /* 004f46e0: jmp 0x4f46b4 */ goto L_004f46b4;
L_004f46e2:; BB(0x004f46e2);
    /* 004f46e2: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 004f46e5: movsx eax, word ptr [edx + 6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x6u));
    /* 004f46e9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004f46eb: mov edx, 4 */ r_edx = 0x4u;
    /* 004f46f0: mul edx */ { u64 t = (u64)r_eax * r_edx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 004f46f2: seto cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fO) ? 1 : 0) & 0xffu);
    /* 004f46f5: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004f46f7: or ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 004f46f9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f46fa: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x4f46ffu); f_00686d82();
    /* 004f46ff: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f4702: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 004f4705: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 004f4708: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004f470b: mov dword ptr [eax + 0x70], ecx */ W32((u32)(r_eax+0x70u), r_ecx);
    /* 004f470e: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 004f4711: cmp dword ptr [edx + 0x70], 0 */ {  u32 a = R32((u32)(r_edx+0x70u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f4715: jne 0x4f472b */ if (!fZ) goto L_004f472b;
L_004f4717:; BB(0x004f4717);
    /* 004f4717: push 0x62 */ { u32 v = 0x62u; r_esp -= 4; W32(r_esp, v); }
    /* 004f4719: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f471e: push 0x6bfd50 */ { u32 v = 0x6bfd50u; r_esp -= 4; W32(r_esp, v); }
    /* 004f4723: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f4728u); f_005e9f20();
    /* 004f4728: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f472b:; BB(0x004f472b);
    /* 004f472b: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 004f472e: movsx eax, word ptr [ecx + 6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x6u));
    /* 004f4732: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004f4734: mov edx, 4 */ r_edx = 0x4u;
    /* 004f4739: mul edx */ { u64 t = (u64)r_eax * r_edx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 004f473b: seto cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fO) ? 1 : 0) & 0xffu);
    /* 004f473e: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004f4740: or ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 004f4742: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f4743: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x4f4748u); f_00686d82();
    /* 004f4748: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f474b: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 004f474e: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 004f4751: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 004f4754: mov dword ptr [eax + 0x74], ecx */ W32((u32)(r_eax+0x74u), r_ecx);
    /* 004f4757: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 004f475a: cmp dword ptr [edx + 0x74], 0 */ {  u32 a = R32((u32)(r_edx+0x74u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f475e: jne 0x4f4774 */ if (!fZ) goto L_004f4774;
L_004f4760:; BB(0x004f4760);
    /* 004f4760: push 0x65 */ { u32 v = 0x65u; r_esp -= 4; W32(r_esp, v); }
    /* 004f4762: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f4767: push 0x6bfd3c */ { u32 v = 0x6bfd3cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f476c: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f4771u); f_005e9f20();
    /* 004f4771: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f4774:; BB(0x004f4774);
    /* 004f4774: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 004f4777: movsx eax, word ptr [ecx + 6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x6u));
    /* 004f477b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004f477d: mov edx, 4 */ r_edx = 0x4u;
    /* 004f4782: mul edx */ { u64 t = (u64)r_eax * r_edx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 004f4784: seto cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fO) ? 1 : 0) & 0xffu);
    /* 004f4787: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004f4789: or ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 004f478b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f478c: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x4f4791u); f_00686d82();
    /* 004f4791: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f4794: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 004f4797: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 004f479a: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004f479d: mov dword ptr [eax + 0x78], ecx */ W32((u32)(r_eax+0x78u), r_ecx);
    /* 004f47a0: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 004f47a3: cmp dword ptr [edx + 0x78], 0 */ {  u32 a = R32((u32)(r_edx+0x78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f47a7: jne 0x4f47bd */ if (!fZ) goto L_004f47bd;
L_004f47a9:; BB(0x004f47a9);
    /* 004f47a9: push 0x68 */ { u32 v = 0x68u; r_esp -= 4; W32(r_esp, v); }
    /* 004f47ab: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f47b0: push 0x6bfd28 */ { u32 v = 0x6bfd28u; r_esp -= 4; W32(r_esp, v); }
    /* 004f47b5: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f47bau); f_005e9f20();
    /* 004f47ba: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f47bd:; BB(0x004f47bd);
    /* 004f47bd: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 004f47c0: movsx eax, word ptr [ecx + 6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x6u));
    /* 004f47c4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004f47c6: mov edx, 2 */ r_edx = 0x2u;
    /* 004f47cb: mul edx */ { u64 t = (u64)r_eax * r_edx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 004f47cd: seto cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fO) ? 1 : 0) & 0xffu);
    /* 004f47d0: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004f47d2: or ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 004f47d4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f47d5: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x4f47dau); f_00686d82();
    /* 004f47da: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f47dd: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 004f47e0: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 004f47e3: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 004f47e6: mov dword ptr [eax + 0x4c], ecx */ W32((u32)(r_eax+0x4cu), r_ecx);
    /* 004f47e9: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 004f47ec: cmp dword ptr [edx + 0x4c], 0 */ {  u32 a = R32((u32)(r_edx+0x4cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f47f0: jne 0x4f4806 */ if (!fZ) goto L_004f4806;
L_004f47f2:; BB(0x004f47f2);
    /* 004f47f2: push 0x6b */ { u32 v = 0x6bu; r_esp -= 4; W32(r_esp, v); }
    /* 004f47f4: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f47f9: push 0x6bfd10 */ { u32 v = 0x6bfd10u; r_esp -= 4; W32(r_esp, v); }
    /* 004f47fe: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f4803u); f_005e9f20();
    /* 004f4803: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f4806:; BB(0x004f4806);
    /* 004f4806: mov word ptr [ebp - 0x10], 0 */ W16((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 004f480c: jmp 0x4f481a */ goto L_004f481a;
L_004f480e:; BB(0x004f480e);
    /* 004f480e: mov cx, word ptr [ebp - 0x10] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff0u))) & 0xffffu);
    /* 004f4812: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f4816: mov word ptr [ebp - 0x10], cx */ W16((u32)(r_ebp+0xfffffff0u), (u16)r_ecx);
L_004f481a:; BB(0x004f481a);
    /* 004f481a: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004f481e: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 004f4821: movsx ecx, word ptr [eax + 6] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x6u));
    /* 004f4825: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f4827: jge 0x4f483d */ if ((fS==fO)) goto L_004f483d;
L_004f4829:; BB(0x004f4829);
    /* 004f4829: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004f482d: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 004f4830: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 004f4833: mov ax, word ptr [ebp - 0x10] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff0u))) & 0xffffu);
    /* 004f4837: mov word ptr [ecx + edx*2], ax */ W16((u32)(r_ecx+r_edx*2), (u16)r_eax);
    /* 004f483b: jmp 0x4f480e */ goto L_004f480e;
L_004f483d:; BB(0x004f483d);
    /* 004f483d: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 004f4840: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 004f4843: mov ax, word ptr [edx + 6] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x6u))) & 0xffffu);
    /* 004f4847: mov word ptr [ecx + 0x2c], ax */ W16((u32)(r_ecx+0x2cu), (u16)r_eax);
    /* 004f484b: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 004f484e: movsx eax, word ptr [ecx + 6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x6u));
    /* 004f4852: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004f4854: mov edx, 2 */ r_edx = 0x2u;
    /* 004f4859: mul edx */ { u64 t = (u64)r_eax * r_edx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 004f485b: seto cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fO) ? 1 : 0) & 0xffu);
    /* 004f485e: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004f4860: or ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 004f4862: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f4863: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x4f4868u); f_00686d82();
    /* 004f4868: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f486b: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 004f486e: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 004f4871: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004f4874: mov dword ptr [eax + 0x5c], ecx */ W32((u32)(r_eax+0x5cu), r_ecx);
    /* 004f4877: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 004f487a: cmp dword ptr [edx + 0x5c], 0 */ {  u32 a = R32((u32)(r_edx+0x5cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f487e: jne 0x4f4894 */ if (!fZ) goto L_004f4894;
L_004f4880:; BB(0x004f4880);
    /* 004f4880: push 0x71 */ { u32 v = 0x71u; r_esp -= 4; W32(r_esp, v); }
    /* 004f4882: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f4887: push 0x6bfcf8 */ { u32 v = 0x6bfcf8u; r_esp -= 4; W32(r_esp, v); }
    /* 004f488c: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f4891u); f_005e9f20();
    /* 004f4891: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f4894:; BB(0x004f4894);
    /* 004f4894: mov word ptr [ebp - 0x10], 0 */ W16((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 004f489a: jmp 0x4f48a8 */ goto L_004f48a8;
L_004f489c:; BB(0x004f489c);
    /* 004f489c: mov cx, word ptr [ebp - 0x10] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff0u))) & 0xffffu);
    /* 004f48a0: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f48a4: mov word ptr [ebp - 0x10], cx */ W16((u32)(r_ebp+0xfffffff0u), (u16)r_ecx);
L_004f48a8:; BB(0x004f48a8);
    /* 004f48a8: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004f48ac: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 004f48af: movsx ecx, word ptr [eax + 6] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x6u));
    /* 004f48b3: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f48b5: jge 0x4f48c9 */ if ((fS==fO)) goto L_004f48c9;
L_004f48b7:; BB(0x004f48b7);
    /* 004f48b7: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004f48bb: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 004f48be: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 004f48c1: mov word ptr [ecx + edx*2], 0 */ W16((u32)(r_ecx+r_edx*2), 0x0u);
    /* 004f48c7: jmp 0x4f489c */ goto L_004f489c;
L_004f48c9:; BB(0x004f48c9);
    /* 004f48c9: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 004f48cc: movsx eax, word ptr [edx + 6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x6u));
    /* 004f48d0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004f48d2: mov edx, 2 */ r_edx = 0x2u;
    /* 004f48d7: mul edx */ { u64 t = (u64)r_eax * r_edx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 004f48d9: seto cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fO) ? 1 : 0) & 0xffu);
    /* 004f48dc: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004f48de: or ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 004f48e0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f48e1: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x4f48e6u); f_00686d82();
    /* 004f48e6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f48e9: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 004f48ec: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 004f48ef: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 004f48f2: mov dword ptr [eax + 0x60], ecx */ W32((u32)(r_eax+0x60u), r_ecx);
    /* 004f48f5: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 004f48f8: cmp dword ptr [edx + 0x60], 0 */ {  u32 a = R32((u32)(r_edx+0x60u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f48fc: jne 0x4f4912 */ if (!fZ) goto L_004f4912;
L_004f48fe:; BB(0x004f48fe);
    /* 004f48fe: push 0x76 */ { u32 v = 0x76u; r_esp -= 4; W32(r_esp, v); }
    /* 004f4900: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f4905: push 0x6bfce8 */ { u32 v = 0x6bfce8u; r_esp -= 4; W32(r_esp, v); }
    /* 004f490a: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f490fu); f_005e9f20();
    /* 004f490f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f4912:; BB(0x004f4912);
    /* 004f4912: mov word ptr [ebp - 0x10], 0 */ W16((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 004f4918: jmp 0x4f4926 */ goto L_004f4926;
L_004f491a:; BB(0x004f491a);
    /* 004f491a: mov cx, word ptr [ebp - 0x10] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff0u))) & 0xffffu);
    /* 004f491e: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f4922: mov word ptr [ebp - 0x10], cx */ W16((u32)(r_ebp+0xfffffff0u), (u16)r_ecx);
L_004f4926:; BB(0x004f4926);
    /* 004f4926: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004f492a: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 004f492d: movsx ecx, word ptr [eax + 6] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x6u));
    /* 004f4931: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f4933: jge 0x4f4947 */ if ((fS==fO)) goto L_004f4947;
L_004f4935:; BB(0x004f4935);
    /* 004f4935: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004f4939: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 004f493c: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 004f493f: mov word ptr [ecx + edx*2], 0 */ W16((u32)(r_ecx+r_edx*2), 0x0u);
    /* 004f4945: jmp 0x4f491a */ goto L_004f491a;
L_004f4947:; BB(0x004f4947);
    /* 004f4947: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 004f494a: movsx eax, word ptr [edx + 6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x6u));
    /* 004f494e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004f4950: mov edx, 2 */ r_edx = 0x2u;
    /* 004f4955: mul edx */ { u64 t = (u64)r_eax * r_edx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 004f4957: seto cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fO) ? 1 : 0) & 0xffu);
    /* 004f495a: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004f495c: or ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 004f495e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f495f: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x4f4964u); f_00686d82();
    /* 004f4964: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f4967: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 004f496a: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 004f496d: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 004f4970: mov dword ptr [eax + 0x64], ecx */ W32((u32)(r_eax+0x64u), r_ecx);
    /* 004f4973: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 004f4976: cmp dword ptr [edx + 0x64], 0 */ {  u32 a = R32((u32)(r_edx+0x64u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f497a: jne 0x4f4990 */ if (!fZ) goto L_004f4990;
L_004f497c:; BB(0x004f497c);
    /* 004f497c: push 0x7b */ { u32 v = 0x7bu; r_esp -= 4; W32(r_esp, v); }
    /* 004f497e: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f4983: push 0x6bfcd8 */ { u32 v = 0x6bfcd8u; r_esp -= 4; W32(r_esp, v); }
    /* 004f4988: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f498du); f_005e9f20();
    /* 004f498d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f4990:; BB(0x004f4990);
    /* 004f4990: mov word ptr [ebp - 0x10], 0 */ W16((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 004f4996: jmp 0x4f49a4 */ goto L_004f49a4;
L_004f4998:; BB(0x004f4998);
    /* 004f4998: mov cx, word ptr [ebp - 0x10] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff0u))) & 0xffffu);
    /* 004f499c: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f49a0: mov word ptr [ebp - 0x10], cx */ W16((u32)(r_ebp+0xfffffff0u), (u16)r_ecx);
L_004f49a4:; BB(0x004f49a4);
    /* 004f49a4: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004f49a8: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 004f49ab: movsx ecx, word ptr [eax + 6] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x6u));
    /* 004f49af: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f49b1: jge 0x4f49c5 */ if ((fS==fO)) goto L_004f49c5;
L_004f49b3:; BB(0x004f49b3);
    /* 004f49b3: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004f49b7: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 004f49ba: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 004f49bd: mov word ptr [ecx + edx*2], 0 */ W16((u32)(r_ecx+r_edx*2), 0x0u);
    /* 004f49c3: jmp 0x4f4998 */ goto L_004f4998;
L_004f49c5:; BB(0x004f49c5);
    /* 004f49c5: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 004f49c8: movsx eax, word ptr [edx + 6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x6u));
    /* 004f49cc: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004f49ce: mov edx, 2 */ r_edx = 0x2u;
    /* 004f49d3: mul edx */ { u64 t = (u64)r_eax * r_edx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 004f49d5: seto cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fO) ? 1 : 0) & 0xffu);
    /* 004f49d8: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004f49da: or ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 004f49dc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f49dd: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x4f49e2u); f_00686d82();
    /* 004f49e2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f49e5: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 004f49e8: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 004f49eb: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 004f49ee: mov dword ptr [eax + 0x50], ecx */ W32((u32)(r_eax+0x50u), r_ecx);
    /* 004f49f1: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 004f49f4: cmp dword ptr [edx + 0x50], 0 */ {  u32 a = R32((u32)(r_edx+0x50u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f49f8: jne 0x4f4a11 */ if (!fZ) goto L_004f4a11;
L_004f49fa:; BB(0x004f49fa);
    /* 004f49fa: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 004f49ff: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f4a04: push 0x6bfcbc */ { u32 v = 0x6bfcbcu; r_esp -= 4; W32(r_esp, v); }
    /* 004f4a09: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f4a0eu); f_005e9f20();
    /* 004f4a0e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f4a11:; BB(0x004f4a11);
    /* 004f4a11: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 004f4a14: movsx eax, word ptr [ecx + 6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x6u));
    /* 004f4a18: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004f4a1a: mov edx, 2 */ r_edx = 0x2u;
    /* 004f4a1f: mul edx */ { u64 t = (u64)r_eax * r_edx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 004f4a21: seto cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fO) ? 1 : 0) & 0xffu);
    /* 004f4a24: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004f4a26: or ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 004f4a28: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f4a29: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x4f4a2eu); f_00686d82();
    /* 004f4a2e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f4a31: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 004f4a34: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 004f4a37: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 004f4a3a: mov dword ptr [eax + 0x54], ecx */ W32((u32)(r_eax+0x54u), r_ecx);
    /* 004f4a3d: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 004f4a40: cmp dword ptr [edx + 0x54], 0 */ {  u32 a = R32((u32)(r_edx+0x54u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f4a44: jne 0x4f4a5d */ if (!fZ) goto L_004f4a5d;
L_004f4a46:; BB(0x004f4a46);
    /* 004f4a46: push 0x83 */ { u32 v = 0x83u; r_esp -= 4; W32(r_esp, v); }
    /* 004f4a4b: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f4a50: push 0x6bfca8 */ { u32 v = 0x6bfca8u; r_esp -= 4; W32(r_esp, v); }
    /* 004f4a55: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f4a5au); f_005e9f20();
    /* 004f4a5a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f4a5d:; BB(0x004f4a5d);
    /* 004f4a5d: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 004f4a60: movsx eax, word ptr [ecx + 6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x6u));
    /* 004f4a64: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004f4a66: mov edx, 2 */ r_edx = 0x2u;
    /* 004f4a6b: mul edx */ { u64 t = (u64)r_eax * r_edx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 004f4a6d: seto cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fO) ? 1 : 0) & 0xffu);
    /* 004f4a70: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004f4a72: or ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 004f4a74: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f4a75: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x4f4a7au); f_00686d82();
    /* 004f4a7a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f4a7d: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 004f4a80: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 004f4a83: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 004f4a86: mov dword ptr [eax + 0x58], ecx */ W32((u32)(r_eax+0x58u), r_ecx);
    /* 004f4a89: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 004f4a8c: cmp dword ptr [edx + 0x58], 0 */ {  u32 a = R32((u32)(r_edx+0x58u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f4a90: jne 0x4f4aa9 */ if (!fZ) goto L_004f4aa9;
L_004f4a92:; BB(0x004f4a92);
    /* 004f4a92: push 0x86 */ { u32 v = 0x86u; r_esp -= 4; W32(r_esp, v); }
    /* 004f4a97: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f4a9c: push 0x6bfc94 */ { u32 v = 0x6bfc94u; r_esp -= 4; W32(r_esp, v); }
    /* 004f4aa1: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f4aa6u); f_005e9f20();
    /* 004f4aa6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f4aa9:; BB(0x004f4aa9);
    /* 004f4aa9: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 004f4aac: movsx edx, word ptr [ecx + 6] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x6u));
    /* 004f4ab0: mov dword ptr [ebp - 0x60], edx */ W32((u32)(r_ebp+0xffffffa0u), r_edx);
    /* 004f4ab3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004f4ab5: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 004f4ab8: mov edx, 4 */ r_edx = 0x4u;
    /* 004f4abd: mul edx */ { u64 t = (u64)r_eax * r_edx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 004f4abf: seto cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fO) ? 1 : 0) & 0xffu);
    /* 004f4ac2: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004f4ac4: or ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 004f4ac6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f4ac8: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fC = (r < a); }
    /* 004f4acb: setb al */ r_eax = (r_eax & 0xffffff00u) | (((fC) ? 1 : 0) & 0xffu);
    /* 004f4ace: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004f4ad0: or eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f4ad2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f4ad3: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x4f4ad8u); f_00686d82();
    /* 004f4ad8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f4adb: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 004f4ade: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004f4ae5: cmp dword ptr [ebp - 0x68], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff98u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f4ae9: je 0x4f4b1a */ if (fZ) goto L_004f4b1a;
L_004f4aeb:; BB(0x004f4aeb);
    /* 004f4aeb: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 004f4aee: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 004f4af1: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 004f4af3: push 0x4a20f0 */ { u32 v = 0x4a20f0u; r_esp -= 4; W32(r_esp, v); }
    /* 004f4af8: push 0x4a20d0 */ { u32 v = 0x4a20d0u; r_esp -= 4; W32(r_esp, v); }
    /* 004f4afd: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 004f4b00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f4b01: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004f4b03: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 004f4b06: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f4b09: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f4b0a: call 0x686d94 */ r_esp -= 4; W32(r_esp, 0x4f4b0fu); f_00686d94();
    /* 004f4b0f: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 004f4b12: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f4b15: mov dword ptr [ebp - 0x80], edx */ W32((u32)(r_ebp+0xffffff80u), r_edx);
    /* 004f4b18: jmp 0x4f4b21 */ goto L_004f4b21;
L_004f4b1a:; BB(0x004f4b1a);
    /* 004f4b1a: mov dword ptr [ebp - 0x80], 0 */ W32((u32)(r_ebp+0xffffff80u), 0x0u);
L_004f4b21:; BB(0x004f4b21);
    /* 004f4b21: mov eax, dword ptr [ebp - 0x80] */ r_eax = R32((u32)(r_ebp+0xffffff80u));
    /* 004f4b24: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 004f4b27: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004f4b2e: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 004f4b31: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f4b34: mov dword ptr [ecx + 0x7c], edx */ W32((u32)(r_ecx+0x7cu), r_edx);
    /* 004f4b37: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 004f4b3a: cmp dword ptr [eax + 0x7c], 0 */ {  u32 a = R32((u32)(r_eax+0x7cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f4b3e: jne 0x4f4b57 */ if (!fZ) goto L_004f4b57;
L_004f4b40:; BB(0x004f4b40);
    /* 004f4b40: push 0x89 */ { u32 v = 0x89u; r_esp -= 4; W32(r_esp, v); }
    /* 004f4b45: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f4b4a: push 0x6bfc88 */ { u32 v = 0x6bfc88u; r_esp -= 4; W32(r_esp, v); }
    /* 004f4b4f: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f4b54u); f_005e9f20();
    /* 004f4b54: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f4b57:; BB(0x004f4b57);
    /* 004f4b57: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 004f4b5a: movsx eax, word ptr [edx + 6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x6u));
    /* 004f4b5e: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 004f4b61: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004f4b63: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 004f4b66: mov edx, 4 */ r_edx = 0x4u;
    /* 004f4b6b: mul edx */ { u64 t = (u64)r_eax * r_edx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 004f4b6d: seto cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fO) ? 1 : 0) & 0xffu);
    /* 004f4b70: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004f4b72: or ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 004f4b74: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f4b76: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fC = (r < a); }
    /* 004f4b79: setb al */ r_eax = (r_eax & 0xffffff00u) | (((fC) ? 1 : 0) & 0xffu);
    /* 004f4b7c: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004f4b7e: or eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f4b80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f4b81: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x4f4b86u); f_00686d82();
    /* 004f4b86: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f4b89: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 004f4b8c: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004f4b93: cmp dword ptr [ebp - 0x74], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f4b97: je 0x4f4bcb */ if (fZ) goto L_004f4bcb;
L_004f4b99:; BB(0x004f4b99);
    /* 004f4b99: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 004f4b9c: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 004f4b9f: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 004f4ba1: push 0x4a20f0 */ { u32 v = 0x4a20f0u; r_esp -= 4; W32(r_esp, v); }
    /* 004f4ba6: push 0x4a20d0 */ { u32 v = 0x4a20d0u; r_esp -= 4; W32(r_esp, v); }
    /* 004f4bab: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 004f4bae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f4baf: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004f4bb1: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 004f4bb4: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f4bb7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f4bb8: call 0x686d94 */ r_esp -= 4; W32(r_esp, 0x4f4bbdu); f_00686d94();
    /* 004f4bbd: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 004f4bc0: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f4bc3: mov dword ptr [ebp - 0x84], edx */ W32((u32)(r_ebp+0xffffff7cu), r_edx);
    /* 004f4bc9: jmp 0x4f4bd5 */ goto L_004f4bd5;
L_004f4bcb:; BB(0x004f4bcb);
    /* 004f4bcb: mov dword ptr [ebp - 0x84], 0 */ W32((u32)(r_ebp+0xffffff7cu), 0x0u);
L_004f4bd5:; BB(0x004f4bd5);
    /* 004f4bd5: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 004f4bdb: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 004f4bde: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004f4be5: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 004f4be8: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 004f4beb: mov dword ptr [ecx + 0x80], edx */ W32((u32)(r_ecx+0x80u), r_edx);
    /* 004f4bf1: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 004f4bf4: cmp dword ptr [eax + 0x80], 0 */ {  u32 a = R32((u32)(r_eax+0x80u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f4bfb: jne 0x4f4c14 */ if (!fZ) goto L_004f4c14;
L_004f4bfd:; BB(0x004f4bfd);
    /* 004f4bfd: push 0x8c */ { u32 v = 0x8cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f4c02: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f4c07: push 0x6bfc80 */ { u32 v = 0x6bfc80u; r_esp -= 4; W32(r_esp, v); }
    /* 004f4c0c: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f4c11u); f_005e9f20();
    /* 004f4c11: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f4c14:; BB(0x004f4c14);
    /* 004f4c14: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 004f4c17: movsx eax, word ptr [edx + 6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x6u));
    /* 004f4c1b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004f4c1d: mov edx, 4 */ r_edx = 0x4u;
    /* 004f4c22: mul edx */ { u64 t = (u64)r_eax * r_edx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 004f4c24: seto cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fO) ? 1 : 0) & 0xffu);
    /* 004f4c27: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004f4c29: or ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 004f4c2b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f4c2c: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x4f4c31u); f_00686d82();
    /* 004f4c31: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f4c34: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 004f4c37: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 004f4c3a: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 004f4c3d: mov dword ptr [eax + 0x84], ecx */ W32((u32)(r_eax+0x84u), r_ecx);
    /* 004f4c43: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 004f4c46: cmp dword ptr [edx + 0x84], 0 */ {  u32 a = R32((u32)(r_edx+0x84u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f4c4d: jne 0x4f4c66 */ if (!fZ) goto L_004f4c66;
L_004f4c4f:; BB(0x004f4c4f);
    /* 004f4c4f: push 0x8f */ { u32 v = 0x8fu; r_esp -= 4; W32(r_esp, v); }
    /* 004f4c54: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f4c59: push 0x6bfc70 */ { u32 v = 0x6bfc70u; r_esp -= 4; W32(r_esp, v); }
    /* 004f4c5e: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f4c63u); f_005e9f20();
    /* 004f4c63: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f4c66:; BB(0x004f4c66);
    /* 004f4c66: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f4c69: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004f4c70: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f4c71: mov esp, ebp */ r_esp = r_ebp;
    /* 004f4c73: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f4c74: ret 4 */ FN_RET(0x004f4320); r_esp += 8; return;
}

void f_004f4c80(void) /* PokerPot::func_004f4c80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f4c80);
    /* 004f4c80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f4c81: mov ebp, esp */ r_ebp = r_esp;
    /* 004f4c83: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f4c86: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004f4c89: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f4c8c: movzx ecx, byte ptr [eax + 1] */ r_ecx = (u32)R8((u32)(r_eax+0x1u));
    /* 004f4c90: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f4c92: jne 0x4f4cab */ if (!fZ) goto L_004f4cab;
L_004f4c94:; BB(0x004f4c94);
    /* 004f4c94: push 0x94 */ { u32 v = 0x94u; r_esp -= 4; W32(r_esp, v); }
    /* 004f4c99: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f4c9e: push 0x6bfe6c */ { u32 v = 0x6bfe6cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f4ca3: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f4ca8u); f_005e9f20();
    /* 004f4ca8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f4cab:; BB(0x004f4cab);
    /* 004f4cab: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f4cae: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 004f4cb1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f4cb3: je 0x4f4ccc */ if (fZ) goto L_004f4ccc;
L_004f4cb5:; BB(0x004f4cb5);
    /* 004f4cb5: push 0x95 */ { u32 v = 0x95u; r_esp -= 4; W32(r_esp, v); }
    /* 004f4cba: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f4cbf: push 0x6bfe50 */ { u32 v = 0x6bfe50u; r_esp -= 4; W32(r_esp, v); }
    /* 004f4cc4: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f4cc9u); f_005e9f20();
    /* 004f4cc9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f4ccc:; BB(0x004f4ccc);
    /* 004f4ccc: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f4ccf: movzx ecx, byte ptr [eax + 2] */ r_ecx = (u32)R8((u32)(r_eax+0x2u));
    /* 004f4cd3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f4cd5: je 0x4f4cee */ if (fZ) goto L_004f4cee;
L_004f4cd7:; BB(0x004f4cd7);
    /* 004f4cd7: push 0x96 */ { u32 v = 0x96u; r_esp -= 4; W32(r_esp, v); }
    /* 004f4cdc: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f4ce1: push 0x6bfe38 */ { u32 v = 0x6bfe38u; r_esp -= 4; W32(r_esp, v); }
    /* 004f4ce6: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f4cebu); f_005e9f20();
    /* 004f4ceb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f4cee:; BB(0x004f4cee);
    /* 004f4cee: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f4cf1: movzx ecx, byte ptr [eax + 3] */ r_ecx = (u32)R8((u32)(r_eax+0x3u));
    /* 004f4cf5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f4cf7: je 0x4f4d10 */ if (fZ) goto L_004f4d10;
L_004f4cf9:; BB(0x004f4cf9);
    /* 004f4cf9: push 0x97 */ { u32 v = 0x97u; r_esp -= 4; W32(r_esp, v); }
    /* 004f4cfe: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f4d03: push 0x6bfe20 */ { u32 v = 0x6bfe20u; r_esp -= 4; W32(r_esp, v); }
    /* 004f4d08: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f4d0du); f_005e9f20();
    /* 004f4d0d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f4d10:; BB(0x004f4d10);
    /* 004f4d10: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f4d13: cmp dword ptr [eax + 0x5c], 0 */ {  u32 a = R32((u32)(r_eax+0x5cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f4d17: jne 0x4f4d30 */ if (!fZ) goto L_004f4d30;
L_004f4d19:; BB(0x004f4d19);
    /* 004f4d19: push 0x9b */ { u32 v = 0x9bu; r_esp -= 4; W32(r_esp, v); }
    /* 004f4d1e: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f4d23: push 0x6bfcf8 */ { u32 v = 0x6bfcf8u; r_esp -= 4; W32(r_esp, v); }
    /* 004f4d28: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f4d2du); f_005e9f20();
    /* 004f4d2d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f4d30:; BB(0x004f4d30);
    /* 004f4d30: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004f4d36: jmp 0x4f4d44 */ goto L_004f4d44;
L_004f4d38:; BB(0x004f4d38);
    /* 004f4d38: mov dx, word ptr [ebp - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004f4d3c: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f4d40: mov word ptr [ebp - 4], dx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_edx);
L_004f4d44:; BB(0x004f4d44);
    /* 004f4d44: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f4d48: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f4d4b: movsx edx, word ptr [ecx + 6] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x6u));
    /* 004f4d4f: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f4d51: jge 0x4f4d65 */ if ((fS==fO)) goto L_004f4d65;
L_004f4d53:; BB(0x004f4d53);
    /* 004f4d53: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f4d57: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f4d5a: mov edx, dword ptr [ecx + 0x5c] */ r_edx = R32((u32)(r_ecx+0x5cu));
    /* 004f4d5d: mov word ptr [edx + eax*2], 0 */ W16((u32)(r_edx+r_eax*2), 0x0u);
    /* 004f4d63: jmp 0x4f4d38 */ goto L_004f4d38;
L_004f4d65:; BB(0x004f4d65);
    /* 004f4d65: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f4d68: cmp dword ptr [eax + 0x60], 0 */ {  u32 a = R32((u32)(r_eax+0x60u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f4d6c: jne 0x4f4d85 */ if (!fZ) goto L_004f4d85;
L_004f4d6e:; BB(0x004f4d6e);
    /* 004f4d6e: push 0x9f */ { u32 v = 0x9fu; r_esp -= 4; W32(r_esp, v); }
    /* 004f4d73: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f4d78: push 0x6bfce8 */ { u32 v = 0x6bfce8u; r_esp -= 4; W32(r_esp, v); }
    /* 004f4d7d: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f4d82u); f_005e9f20();
    /* 004f4d82: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f4d85:; BB(0x004f4d85);
    /* 004f4d85: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004f4d8b: jmp 0x4f4d99 */ goto L_004f4d99;
L_004f4d8d:; BB(0x004f4d8d);
    /* 004f4d8d: mov dx, word ptr [ebp - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004f4d91: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f4d95: mov word ptr [ebp - 4], dx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_edx);
L_004f4d99:; BB(0x004f4d99);
    /* 004f4d99: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f4d9d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f4da0: movsx edx, word ptr [ecx + 6] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x6u));
    /* 004f4da4: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f4da6: jge 0x4f4dba */ if ((fS==fO)) goto L_004f4dba;
L_004f4da8:; BB(0x004f4da8);
    /* 004f4da8: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f4dac: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f4daf: mov edx, dword ptr [ecx + 0x60] */ r_edx = R32((u32)(r_ecx+0x60u));
    /* 004f4db2: mov word ptr [edx + eax*2], 0 */ W16((u32)(r_edx+r_eax*2), 0x0u);
    /* 004f4db8: jmp 0x4f4d8d */ goto L_004f4d8d;
L_004f4dba:; BB(0x004f4dba);
    /* 004f4dba: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f4dbd: cmp dword ptr [eax + 0x64], 0 */ {  u32 a = R32((u32)(r_eax+0x64u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f4dc1: jne 0x4f4dda */ if (!fZ) goto L_004f4dda;
L_004f4dc3:; BB(0x004f4dc3);
    /* 004f4dc3: push 0xa3 */ { u32 v = 0xa3u; r_esp -= 4; W32(r_esp, v); }
    /* 004f4dc8: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f4dcd: push 0x6bfcd8 */ { u32 v = 0x6bfcd8u; r_esp -= 4; W32(r_esp, v); }
    /* 004f4dd2: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f4dd7u); f_005e9f20();
    /* 004f4dd7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f4dda:; BB(0x004f4dda);
    /* 004f4dda: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004f4de0: jmp 0x4f4dee */ goto L_004f4dee;
L_004f4de2:; BB(0x004f4de2);
    /* 004f4de2: mov dx, word ptr [ebp - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004f4de6: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f4dea: mov word ptr [ebp - 4], dx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_edx);
L_004f4dee:; BB(0x004f4dee);
    /* 004f4dee: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f4df2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f4df5: movsx edx, word ptr [ecx + 6] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x6u));
    /* 004f4df9: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f4dfb: jge 0x4f4e0f */ if ((fS==fO)) goto L_004f4e0f;
L_004f4dfd:; BB(0x004f4dfd);
    /* 004f4dfd: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f4e01: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f4e04: mov edx, dword ptr [ecx + 0x64] */ r_edx = R32((u32)(r_ecx+0x64u));
    /* 004f4e07: mov word ptr [edx + eax*2], 0 */ W16((u32)(r_edx+r_eax*2), 0x0u);
    /* 004f4e0d: jmp 0x4f4de2 */ goto L_004f4de2;
L_004f4e0f:; BB(0x004f4e0f);
    /* 004f4e0f: mov esp, ebp */ r_esp = r_ebp;
    /* 004f4e11: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f4e12: ret  */ FN_RET(0x004f4c80); r_esp += 4; return;
}

void f_004f4e20(void) /* PokerPot::func_004f4e20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f4e20);
    /* 004f4e20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f4e21: mov ebp, esp */ r_ebp = r_esp;
    /* 004f4e23: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f4e26: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004f4e29: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f4e2c: movzx ecx, byte ptr [eax + 1] */ r_ecx = (u32)R8((u32)(r_eax+0x1u));
    /* 004f4e30: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f4e32: jne 0x4f4e4b */ if (!fZ) goto L_004f4e4b;
L_004f4e34:; BB(0x004f4e34);
    /* 004f4e34: push 0xac */ { u32 v = 0xacu; r_esp -= 4; W32(r_esp, v); }
    /* 004f4e39: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f4e3e: push 0x6bfe6c */ { u32 v = 0x6bfe6cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f4e43: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f4e48u); f_005e9f20();
    /* 004f4e48: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f4e4b:; BB(0x004f4e4b);
    /* 004f4e4b: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f4e4f: jg 0x4f4e68 */ if ((!fZ&&fS==fO)) goto L_004f4e68;
L_004f4e51:; BB(0x004f4e51);
    /* 004f4e51: push 0xad */ { u32 v = 0xadu; r_esp -= 4; W32(r_esp, v); }
    /* 004f4e56: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f4e5b: push 0x6bfe98 */ { u32 v = 0x6bfe98u; r_esp -= 4; W32(r_esp, v); }
    /* 004f4e60: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f4e65u); f_005e9f20();
    /* 004f4e65: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f4e68:; BB(0x004f4e68);
    /* 004f4e68: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f4e6b: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 004f4e6e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f4e70: je 0x4f4e89 */ if (fZ) goto L_004f4e89;
L_004f4e72:; BB(0x004f4e72);
    /* 004f4e72: push 0xae */ { u32 v = 0xaeu; r_esp -= 4; W32(r_esp, v); }
    /* 004f4e77: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f4e7c: push 0x6bfe50 */ { u32 v = 0x6bfe50u; r_esp -= 4; W32(r_esp, v); }
    /* 004f4e81: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f4e86u); f_005e9f20();
    /* 004f4e86: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f4e89:; BB(0x004f4e89);
    /* 004f4e89: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f4e8c: movzx edx, byte ptr [ecx + 2] */ r_edx = (u32)R8((u32)(r_ecx+0x2u));
    /* 004f4e90: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f4e92: je 0x4f4eab */ if (fZ) goto L_004f4eab;
L_004f4e94:; BB(0x004f4e94);
    /* 004f4e94: push 0xaf */ { u32 v = 0xafu; r_esp -= 4; W32(r_esp, v); }
    /* 004f4e99: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f4e9e: push 0x6bfe38 */ { u32 v = 0x6bfe38u; r_esp -= 4; W32(r_esp, v); }
    /* 004f4ea3: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f4ea8u); f_005e9f20();
    /* 004f4ea8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f4eab:; BB(0x004f4eab);
    /* 004f4eab: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f4eae: movzx edx, byte ptr [ecx + 3] */ r_edx = (u32)R8((u32)(r_ecx+0x3u));
    /* 004f4eb2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f4eb4: je 0x4f4ecd */ if (fZ) goto L_004f4ecd;
L_004f4eb6:; BB(0x004f4eb6);
    /* 004f4eb6: push 0xb0 */ { u32 v = 0xb0u; r_esp -= 4; W32(r_esp, v); }
    /* 004f4ebb: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f4ec0: push 0x6bfe20 */ { u32 v = 0x6bfe20u; r_esp -= 4; W32(r_esp, v); }
    /* 004f4ec5: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f4ecau); f_005e9f20();
    /* 004f4eca: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f4ecd:; BB(0x004f4ecd);
    /* 004f4ecd: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f4ed0: call 0x4f9110 */ r_esp -= 4; W32(r_esp, 0x4f4ed5u); f_004f9110();
    /* 004f4ed5: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 004f4ed8: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f4edb: jge 0x4f4ef4 */ if ((fS==fO)) goto L_004f4ef4;
L_004f4edd:; BB(0x004f4edd);
    /* 004f4edd: push 0xb1 */ { u32 v = 0xb1u; r_esp -= 4; W32(r_esp, v); }
    /* 004f4ee2: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f4ee7: push 0x6bfe7c */ { u32 v = 0x6bfe7cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f4eec: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f4ef1u); f_005e9f20();
    /* 004f4ef1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f4ef4:; BB(0x004f4ef4);
    /* 004f4ef4: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f4ef7: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 004f4efa: add ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f4efd: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f4f00: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 004f4f03: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f4f06: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 004f4f09: add ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f4f0c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f4f0f: mov dword ptr [edx + 0x10], ecx */ W32((u32)(r_edx+0x10u), r_ecx);
    /* 004f4f12: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004f4f18: jmp 0x4f4f26 */ goto L_004f4f26;
L_004f4f1a:; BB(0x004f4f1a);
    /* 004f4f1a: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004f4f1e: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f4f22: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_004f4f26:; BB(0x004f4f26);
    /* 004f4f26: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f4f2a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f4f2d: movsx eax, word ptr [edx + 6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x6u));
    /* 004f4f31: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f4f33: jge 0x4f4f78 */ if ((fS==fO)) goto L_004f4f78;
L_004f4f35:; BB(0x004f4f35);
    /* 004f4f35: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f4f39: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f4f3c: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 004f4f3f: movzx ecx, byte ptr [eax + ecx] */ r_ecx = (u32)R8((u32)(r_eax+r_ecx));
    /* 004f4f43: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f4f45: jne 0x4f4f76 */ if (!fZ) goto L_004f4f76;
L_004f4f47:; BB(0x004f4f47);
    /* 004f4f47: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f4f4b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f4f4e: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 004f4f51: movzx edx, byte ptr [ecx + edx] */ r_edx = (u32)R8((u32)(r_ecx+r_edx));
    /* 004f4f55: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f4f57: jne 0x4f4f76 */ if (!fZ) goto L_004f4f76;
L_004f4f59:; BB(0x004f4f59);
    /* 004f4f59: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f4f5d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f4f60: mov edx, dword ptr [ecx + 0x6c] */ r_edx = R32((u32)(r_ecx+0x6cu));
    /* 004f4f63: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 004f4f66: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f4f69: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f4f6d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f4f70: mov edx, dword ptr [edx + 0x6c] */ r_edx = R32((u32)(r_edx+0x6cu));
    /* 004f4f73: mov dword ptr [edx + ecx*4], eax */ W32((u32)(r_edx+r_ecx*4), r_eax);
L_004f4f76:; BB(0x004f4f76);
    /* 004f4f76: jmp 0x4f4f1a */ goto L_004f4f1a;
L_004f4f78:; BB(0x004f4f78);
    /* 004f4f78: mov esp, ebp */ r_esp = r_ebp;
    /* 004f4f7a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f4f7b: ret 4 */ FN_RET(0x004f4e20); r_esp += 8; return;
}

void f_004f4f80(void) /* PokerPot::func_004f4f80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f4f80);
    /* 004f4f80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f4f81: mov ebp, esp */ r_ebp = r_esp;
    /* 004f4f83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f4f84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004f4f87: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f4f8a: movzx ecx, byte ptr [eax + 1] */ r_ecx = (u32)R8((u32)(r_eax+0x1u));
    /* 004f4f8e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f4f90: jne 0x4f4fa9 */ if (!fZ) goto L_004f4fa9;
L_004f4f92:; BB(0x004f4f92);
    /* 004f4f92: push 0xc2 */ { u32 v = 0xc2u; r_esp -= 4; W32(r_esp, v); }
    /* 004f4f97: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f4f9c: push 0x6bfe6c */ { u32 v = 0x6bfe6cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f4fa1: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f4fa6u); f_005e9f20();
    /* 004f4fa6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f4fa9:; BB(0x004f4fa9);
    /* 004f4fa9: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f4fad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004f4faf: jge 0x4f4fc8 */ if ((fS==fO)) goto L_004f4fc8;
L_004f4fb1:; BB(0x004f4fb1);
    /* 004f4fb1: push 0xc3 */ { u32 v = 0xc3u; r_esp -= 4; W32(r_esp, v); }
    /* 004f4fb6: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f4fbb: push 0x6bfefc */ { u32 v = 0x6bfefcu; r_esp -= 4; W32(r_esp, v); }
    /* 004f4fc0: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f4fc5u); f_005e9f20();
    /* 004f4fc5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f4fc8:; BB(0x004f4fc8);
    /* 004f4fc8: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f4fcc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f4fcf: movsx ecx, word ptr [eax + 6] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x6u));
    /* 004f4fd3: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f4fd5: jl 0x4f4fee */ if ((fS!=fO)) goto L_004f4fee;
L_004f4fd7:; BB(0x004f4fd7);
    /* 004f4fd7: push 0xc4 */ { u32 v = 0xc4u; r_esp -= 4; W32(r_esp, v); }
    /* 004f4fdc: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f4fe1: push 0x6bfedc */ { u32 v = 0x6bfedcu; r_esp -= 4; W32(r_esp, v); }
    /* 004f4fe6: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f4febu); f_005e9f20();
    /* 004f4feb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f4fee:; BB(0x004f4fee);
    /* 004f4fee: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f4ff1: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 004f4ff4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f4ff6: je 0x4f500f */ if (fZ) goto L_004f500f;
L_004f4ff8:; BB(0x004f4ff8);
    /* 004f4ff8: push 0xc5 */ { u32 v = 0xc5u; r_esp -= 4; W32(r_esp, v); }
    /* 004f4ffd: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f5002: push 0x6bfe50 */ { u32 v = 0x6bfe50u; r_esp -= 4; W32(r_esp, v); }
    /* 004f5007: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f500cu); f_005e9f20();
    /* 004f500c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f500f:; BB(0x004f500f);
    /* 004f500f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f5012: movzx ecx, byte ptr [eax + 2] */ r_ecx = (u32)R8((u32)(r_eax+0x2u));
    /* 004f5016: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f5018: je 0x4f5031 */ if (fZ) goto L_004f5031;
L_004f501a:; BB(0x004f501a);
    /* 004f501a: push 0xc6 */ { u32 v = 0xc6u; r_esp -= 4; W32(r_esp, v); }
    /* 004f501f: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f5024: push 0x6bfe38 */ { u32 v = 0x6bfe38u; r_esp -= 4; W32(r_esp, v); }
    /* 004f5029: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f502eu); f_005e9f20();
    /* 004f502e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f5031:; BB(0x004f5031);
    /* 004f5031: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f5034: movzx ecx, byte ptr [eax + 3] */ r_ecx = (u32)R8((u32)(r_eax+0x3u));
    /* 004f5038: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f503a: je 0x4f5053 */ if (fZ) goto L_004f5053;
L_004f503c:; BB(0x004f503c);
    /* 004f503c: push 0xc7 */ { u32 v = 0xc7u; r_esp -= 4; W32(r_esp, v); }
    /* 004f5041: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f5046: push 0x6bfe20 */ { u32 v = 0x6bfe20u; r_esp -= 4; W32(r_esp, v); }
    /* 004f504b: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f5050u); f_005e9f20();
    /* 004f5050: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f5053:; BB(0x004f5053);
    /* 004f5053: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f5056: call 0x4f9110 */ r_esp -= 4; W32(r_esp, 0x4f505bu); f_004f9110();
    /* 004f505b: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 004f505e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f5061: jge 0x4f507a */ if ((fS==fO)) goto L_004f507a;
L_004f5063:; BB(0x004f5063);
    /* 004f5063: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 004f5068: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f506d: push 0x6bfe7c */ { u32 v = 0x6bfe7cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f5072: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f5077u); f_005e9f20();
    /* 004f5077: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f507a:; BB(0x004f507a);
    /* 004f507a: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f507e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f5081: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 004f5084: movzx edx, byte ptr [ecx + edx] */ r_edx = (u32)R8((u32)(r_ecx+r_edx));
    /* 004f5088: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f508a: je 0x4f50a3 */ if (fZ) goto L_004f50a3;
L_004f508c:; BB(0x004f508c);
    /* 004f508c: push 0xc9 */ { u32 v = 0xc9u; r_esp -= 4; W32(r_esp, v); }
    /* 004f5091: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f5096: push 0x6bfec4 */ { u32 v = 0x6bfec4u; r_esp -= 4; W32(r_esp, v); }
    /* 004f509b: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f50a0u); f_005e9f20();
    /* 004f50a0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f50a3:; BB(0x004f50a3);
    /* 004f50a3: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f50a7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f50aa: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 004f50ad: movzx ecx, byte ptr [eax + ecx] */ r_ecx = (u32)R8((u32)(r_eax+r_ecx));
    /* 004f50b1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f50b3: je 0x4f50cc */ if (fZ) goto L_004f50cc;
L_004f50b5:; BB(0x004f50b5);
    /* 004f50b5: push 0xca */ { u32 v = 0xcau; r_esp -= 4; W32(r_esp, v); }
    /* 004f50ba: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f50bf: push 0x6bfea8 */ { u32 v = 0x6bfea8u; r_esp -= 4; W32(r_esp, v); }
    /* 004f50c4: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f50c9u); f_005e9f20();
    /* 004f50c9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f50cc:; BB(0x004f50cc);
    /* 004f50cc: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f50d0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f50d3: mov edx, dword ptr [ecx + 0x34] */ r_edx = R32((u32)(r_ecx+0x34u));
    /* 004f50d6: mov byte ptr [eax + edx], 1 */ W8((u32)(r_eax+r_edx), 0x1u);
    /* 004f50da: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f50dd: call 0x4f9110 */ r_esp -= 4; W32(r_esp, 0x4f50e2u); f_004f9110();
    /* 004f50e2: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 004f50e5: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f50e8: jne 0x4f50fa */ if (!fZ) goto L_004f50fa;
L_004f50ea:; BB(0x004f50ea);
    /* 004f50ea: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f50ed: call 0x4f9220 */ r_esp -= 4; W32(r_esp, 0x4f50f2u); f_004f9220();
    /* 004f50f2: mov ax, 0xfffd */ r_eax = (r_eax & 0xffff0000u) | ((0xfffdu) & 0xffffu);
    /* 004f50f6: jmp 0x4f50fe */ goto L_004f50fe;
L_004f50fa:; BB(0x004f50fa);
    /* 004f50fa: or ax, 0xffff */ {  u32 a = (u16)r_eax; u32 b = 0xffffu; u32 r = (a | b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
L_004f50fe:; BB(0x004f50fe);
    /* 004f50fe: mov esp, ebp */ r_esp = r_ebp;
    /* 004f5100: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f5101: ret 4 */ FN_RET(0x004f4f80); r_esp += 8; return;
}

void f_004f5110(void) /* PokerPot::func_004f5110 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f5110);
    /* 004f5110: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f5111: mov ebp, esp */ r_ebp = r_esp;
    /* 004f5113: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f5116: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004f5119: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f511c: movzx ecx, byte ptr [eax + 1] */ r_ecx = (u32)R8((u32)(r_eax+0x1u));
    /* 004f5120: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f5122: jne 0x4f513b */ if (!fZ) goto L_004f513b;
L_004f5124:; BB(0x004f5124);
    /* 004f5124: push 0xdc */ { u32 v = 0xdcu; r_esp -= 4; W32(r_esp, v); }
    /* 004f5129: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f512e: push 0x6bfe6c */ { u32 v = 0x6bfe6cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f5133: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f5138u); f_005e9f20();
    /* 004f5138: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f513b:; BB(0x004f513b);
    /* 004f513b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f513e: call 0x4f9110 */ r_esp -= 4; W32(r_esp, 0x4f5143u); f_004f9110();
    /* 004f5143: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 004f5146: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f5149: jge 0x4f5162 */ if ((fS==fO)) goto L_004f5162;
L_004f514b:; BB(0x004f514b);
    /* 004f514b: push 0xdd */ { u32 v = 0xddu; r_esp -= 4; W32(r_esp, v); }
    /* 004f5150: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f5155: push 0x6bfe7c */ { u32 v = 0x6bfe7cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f515a: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f515fu); f_005e9f20();
    /* 004f515f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f5162:; BB(0x004f5162);
    /* 004f5162: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5165: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 004f5168: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f516a: je 0x4f5183 */ if (fZ) goto L_004f5183;
L_004f516c:; BB(0x004f516c);
    /* 004f516c: push 0xde */ { u32 v = 0xdeu; r_esp -= 4; W32(r_esp, v); }
    /* 004f5171: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f5176: push 0x6bfe50 */ { u32 v = 0x6bfe50u; r_esp -= 4; W32(r_esp, v); }
    /* 004f517b: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f5180u); f_005e9f20();
    /* 004f5180: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f5183:; BB(0x004f5183);
    /* 004f5183: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5186: movzx eax, byte ptr [edx + 2] */ r_eax = (u32)R8((u32)(r_edx+0x2u));
    /* 004f518a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f518c: je 0x4f51a5 */ if (fZ) goto L_004f51a5;
L_004f518e:; BB(0x004f518e);
    /* 004f518e: push 0xdf */ { u32 v = 0xdfu; r_esp -= 4; W32(r_esp, v); }
    /* 004f5193: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f5198: push 0x6bfe38 */ { u32 v = 0x6bfe38u; r_esp -= 4; W32(r_esp, v); }
    /* 004f519d: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f51a2u); f_005e9f20();
    /* 004f51a2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f51a5:; BB(0x004f51a5);
    /* 004f51a5: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f51a8: movzx eax, byte ptr [edx + 3] */ r_eax = (u32)R8((u32)(r_edx+0x3u));
    /* 004f51ac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f51ae: je 0x4f51c7 */ if (fZ) goto L_004f51c7;
L_004f51b0:; BB(0x004f51b0);
    /* 004f51b0: push 0xe0 */ { u32 v = 0xe0u; r_esp -= 4; W32(r_esp, v); }
    /* 004f51b5: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f51ba: push 0x6bfe20 */ { u32 v = 0x6bfe20u; r_esp -= 4; W32(r_esp, v); }
    /* 004f51bf: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f51c4u); f_005e9f20();
    /* 004f51c4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f51c7:; BB(0x004f51c7);
    /* 004f51c7: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f51cb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004f51cd: jge 0x4f51e6 */ if ((fS==fO)) goto L_004f51e6;
L_004f51cf:; BB(0x004f51cf);
    /* 004f51cf: push 0xe1 */ { u32 v = 0xe1u; r_esp -= 4; W32(r_esp, v); }
    /* 004f51d4: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f51d9: push 0x6bff6c */ { u32 v = 0x6bff6cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f51de: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f51e3u); f_005e9f20();
    /* 004f51e3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f51e6:; BB(0x004f51e6);
    /* 004f51e6: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f51ea: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f51ed: movsx eax, word ptr [edx + 6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x6u));
    /* 004f51f1: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f51f3: jl 0x4f520c */ if ((fS!=fO)) goto L_004f520c;
L_004f51f5:; BB(0x004f51f5);
    /* 004f51f5: push 0xe2 */ { u32 v = 0xe2u; r_esp -= 4; W32(r_esp, v); }
    /* 004f51fa: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f51ff: push 0x6bff48 */ { u32 v = 0x6bff48u; r_esp -= 4; W32(r_esp, v); }
    /* 004f5204: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f5209u); f_005e9f20();
    /* 004f5209: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f520c:; BB(0x004f520c);
    /* 004f520c: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f5210: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5213: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 004f5216: movzx edx, byte ptr [ecx + edx] */ r_edx = (u32)R8((u32)(r_ecx+r_edx));
    /* 004f521a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f521c: jne 0x4f5230 */ if (!fZ) goto L_004f5230;
L_004f521e:; BB(0x004f521e);
    /* 004f521e: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004f5222: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5225: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 004f5228: movzx eax, byte ptr [edx + eax] */ r_eax = (u32)R8((u32)(r_edx+r_eax));
    /* 004f522c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f522e: je 0x4f5247 */ if (fZ) goto L_004f5247;
L_004f5230:; BB(0x004f5230);
    /* 004f5230: push 0xe3 */ { u32 v = 0xe3u; r_esp -= 4; W32(r_esp, v); }
    /* 004f5235: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f523a: push 0x6bff10 */ { u32 v = 0x6bff10u; r_esp -= 4; W32(r_esp, v); }
    /* 004f523f: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f5244u); f_005e9f20();
    /* 004f5244: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f5247:; BB(0x004f5247);
    /* 004f5247: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f524a: mov byte ptr [edx + 2], 1 */ W8((u32)(r_edx+0x2u), 0x1u);
    /* 004f524e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5251: mov cx, word ptr [ebp + 0xc] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 004f5255: mov word ptr [eax + 8], cx */ W16((u32)(r_eax+0x8u), (u16)r_ecx);
    /* 004f5259: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004f525f: jmp 0x4f526d */ goto L_004f526d;
L_004f5261:; BB(0x004f5261);
    /* 004f5261: mov dx, word ptr [ebp - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004f5265: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f5269: mov word ptr [ebp - 4], dx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_edx);
L_004f526d:; BB(0x004f526d);
    /* 004f526d: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f5271: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5274: movsx edx, word ptr [ecx + 6] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x6u));
    /* 004f5278: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f527a: jge 0x4f528c */ if ((fS==fO)) goto L_004f528c;
L_004f527c:; BB(0x004f527c);
    /* 004f527c: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f5280: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5283: mov edx, dword ptr [ecx + 0x38] */ r_edx = R32((u32)(r_ecx+0x38u));
    /* 004f5286: mov byte ptr [eax + edx], 0 */ W8((u32)(r_eax+r_edx), 0x0u);
    /* 004f528a: jmp 0x4f5261 */ goto L_004f5261;
L_004f528c:; BB(0x004f528c);
    /* 004f528c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f528f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004f5292: mov dword ptr [eax + 0x18], ecx */ W32((u32)(r_eax+0x18u), r_ecx);
    /* 004f5295: mov esp, ebp */ r_esp = r_ebp;
    /* 004f5297: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f5298: ret 8 */ FN_RET(0x004f5110); r_esp += 12; return;
}

void f_004f52a0(void) /* PokerPot::func_004f52a0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f52a0);
    /* 004f52a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f52a1: mov ebp, esp */ r_ebp = r_esp;
    /* 004f52a3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f52a6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004f52a9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f52ac: movzx ecx, byte ptr [eax + 2] */ r_ecx = (u32)R8((u32)(r_eax+0x2u));
    /* 004f52b0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f52b2: jne 0x4f52cb */ if (!fZ) goto L_004f52cb;
L_004f52b4:; BB(0x004f52b4);
    /* 004f52b4: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 004f52b9: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f52be: push 0x6bffb8 */ { u32 v = 0x6bffb8u; r_esp -= 4; W32(r_esp, v); }
    /* 004f52c3: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f52c8u); f_005e9f20();
    /* 004f52c8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f52cb:; BB(0x004f52cb);
    /* 004f52cb: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f52ce: movsx ecx, word ptr [eax + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x8u));
    /* 004f52d2: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f52d5: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 004f52d8: movzx ecx, byte ptr [eax + ecx] */ r_ecx = (u32)R8((u32)(r_eax+r_ecx));
    /* 004f52dc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f52de: je 0x4f52f7 */ if (fZ) goto L_004f52f7;
L_004f52e0:; BB(0x004f52e0);
    /* 004f52e0: push 0xf1 */ { u32 v = 0xf1u; r_esp -= 4; W32(r_esp, v); }
    /* 004f52e5: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f52ea: push 0x6bff94 */ { u32 v = 0x6bff94u; r_esp -= 4; W32(r_esp, v); }
    /* 004f52ef: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f52f4u); f_005e9f20();
    /* 004f52f4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f52f7:; BB(0x004f52f7);
    /* 004f52f7: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f52fa: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 004f52fd: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5300: add ecx, dword ptr [edx + 0x18] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x18u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f5303: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5306: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 004f5309: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f530c: movsx edx, word ptr [ecx + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x8u));
    /* 004f5310: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5313: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 004f5316: mov edx, dword ptr [ecx + edx*4] */ r_edx = R32((u32)(r_ecx+r_edx*4));
    /* 004f5319: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f531c: add edx, dword ptr [eax + 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x18u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f531f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5322: movsx eax, word ptr [ecx + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x8u));
    /* 004f5326: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5329: mov ecx, dword ptr [ecx + 0x68] */ r_ecx = R32((u32)(r_ecx+0x68u));
    /* 004f532c: mov dword ptr [ecx + eax*4], edx */ W32((u32)(r_ecx+r_eax*4), r_edx);
    /* 004f532f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5332: movsx eax, word ptr [edx + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x8u));
    /* 004f5336: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5339: mov edx, dword ptr [ecx + 0x38] */ r_edx = R32((u32)(r_ecx+0x38u));
    /* 004f533c: mov byte ptr [eax + edx], 1 */ W8((u32)(r_eax+r_edx), 0x1u);
    /* 004f5340: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5343: call 0x4f9050 */ r_esp -= 4; W32(r_esp, 0x4f5348u); f_004f9050();
    /* 004f5348: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 004f534c: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f5350: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004f5352: jge 0x4f536b */ if ((fS==fO)) goto L_004f536b;
L_004f5354:; BB(0x004f5354);
    /* 004f5354: push 0xf8 */ { u32 v = 0xf8u; r_esp -= 4; W32(r_esp, v); }
    /* 004f5359: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f535e: push 0x6bff84 */ { u32 v = 0x6bff84u; r_esp -= 4; W32(r_esp, v); }
    /* 004f5363: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f5368u); f_005e9f20();
    /* 004f5368: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f536b:; BB(0x004f536b);
    /* 004f536b: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f536f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5372: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 004f5375: movzx edx, byte ptr [ecx + edx] */ r_edx = (u32)R8((u32)(r_ecx+r_edx));
    /* 004f5379: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f537b: je 0x4f53aa */ if (fZ) goto L_004f53aa;
L_004f537d:; BB(0x004f537d);
    /* 004f537d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5380: mov byte ptr [eax + 2], 0 */ W8((u32)(r_eax+0x2u), 0x0u);
    /* 004f5384: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5387: call 0x4f9110 */ r_esp -= 4; W32(r_esp, 0x4f538cu); f_004f9110();
    /* 004f538c: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 004f538f: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f5392: jg 0x4f53a2 */ if ((!fZ&&fS==fO)) goto L_004f53a2;
L_004f5394:; BB(0x004f5394);
    /* 004f5394: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5397: call 0x4f9220 */ r_esp -= 4; W32(r_esp, 0x4f539cu); f_004f9220();
    /* 004f539c: mov ax, 0xfffd */ r_eax = (r_eax & 0xffff0000u) | ((0xfffdu) & 0xffffu);
    /* 004f53a0: jmp 0x4f53ae */ goto L_004f53ae;
L_004f53a2:; BB(0x004f53a2);
    /* 004f53a2: or ax, 0xffff */ {  u32 a = (u16)r_eax; u32 b = 0xffffu; u32 r = (a | b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f53a6: jmp 0x4f53ae */ goto L_004f53ae;
L_004f53aa:; BB(0x004f53aa);
    /* 004f53aa: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
L_004f53ae:; BB(0x004f53ae);
    /* 004f53ae: mov esp, ebp */ r_esp = r_ebp;
    /* 004f53b0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f53b1: ret  */ FN_RET(0x004f52a0); r_esp += 4; return;
}

void f_004f53c0(void) /* PokerPot::func_004f53c0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f53c0);
    /* 004f53c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f53c1: mov ebp, esp */ r_ebp = r_esp;
    /* 004f53c3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f53c6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004f53c9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f53cc: movzx ecx, byte ptr [eax + 2] */ r_ecx = (u32)R8((u32)(r_eax+0x2u));
    /* 004f53d0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f53d2: jne 0x4f53eb */ if (!fZ) goto L_004f53eb;
L_004f53d4:; BB(0x004f53d4);
    /* 004f53d4: push 0x10c */ { u32 v = 0x10cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f53d9: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f53de: push 0x6bffb8 */ { u32 v = 0x6bffb8u; r_esp -= 4; W32(r_esp, v); }
    /* 004f53e3: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f53e8u); f_005e9f20();
    /* 004f53e8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f53eb:; BB(0x004f53eb);
    /* 004f53eb: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f53ee: movsx ecx, word ptr [eax + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x8u));
    /* 004f53f2: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f53f5: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 004f53f8: movzx ecx, byte ptr [eax + ecx] */ r_ecx = (u32)R8((u32)(r_eax+r_ecx));
    /* 004f53fc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f53fe: je 0x4f5417 */ if (fZ) goto L_004f5417;
L_004f5400:; BB(0x004f5400);
    /* 004f5400: push 0x10d */ { u32 v = 0x10du; r_esp -= 4; W32(r_esp, v); }
    /* 004f5405: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f540a: push 0x6bff94 */ { u32 v = 0x6bff94u; r_esp -= 4; W32(r_esp, v); }
    /* 004f540f: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f5414u); f_005e9f20();
    /* 004f5414: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f5417:; BB(0x004f5417);
    /* 004f5417: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f541b: jge 0x4f5434 */ if ((fS==fO)) goto L_004f5434;
L_004f541d:; BB(0x004f541d);
    /* 004f541d: push 0x10e */ { u32 v = 0x10eu; r_esp -= 4; W32(r_esp, v); }
    /* 004f5422: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f5427: push 0x6bfff0 */ { u32 v = 0x6bfff0u; r_esp -= 4; W32(r_esp, v); }
    /* 004f542c: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f5431u); f_005e9f20();
    /* 004f5431: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f5434:; BB(0x004f5434);
    /* 004f5434: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5437: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004f543a: cmp edx, dword ptr [ecx + 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x18u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f543d: jle 0x4f5456 */ if ((fZ||fS!=fO)) goto L_004f5456;
L_004f543f:; BB(0x004f543f);
    /* 004f543f: push 0x10f */ { u32 v = 0x10fu; r_esp -= 4; W32(r_esp, v); }
    /* 004f5444: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f5449: push 0x6bffd0 */ { u32 v = 0x6bffd0u; r_esp -= 4; W32(r_esp, v); }
    /* 004f544e: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f5453u); f_005e9f20();
    /* 004f5453: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f5456:; BB(0x004f5456);
    /* 004f5456: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f545a: jne 0x4f5465 */ if (!fZ) goto L_004f5465;
L_004f545c:; BB(0x004f545c);
    /* 004f545c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f545f: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 004f5462: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
L_004f5465:; BB(0x004f5465);
    /* 004f5465: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5468: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 004f546b: add ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f546e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5471: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 004f5474: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5477: movsx ecx, word ptr [eax + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x8u));
    /* 004f547b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f547e: mov eax, dword ptr [edx + 0x68] */ r_eax = R32((u32)(r_edx+0x68u));
    /* 004f5481: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 004f5484: add ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f5487: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f548a: movsx eax, word ptr [edx + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x8u));
    /* 004f548e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5491: mov edx, dword ptr [edx + 0x68] */ r_edx = R32((u32)(r_edx+0x68u));
    /* 004f5494: mov dword ptr [edx + eax*4], ecx */ W32((u32)(r_edx+r_eax*4), r_ecx);
    /* 004f5497: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f549a: movsx ecx, word ptr [eax + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x8u));
    /* 004f549e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f54a1: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 004f54a4: mov byte ptr [ecx + eax], 1 */ W8((u32)(r_ecx+r_eax), 0x1u);
    /* 004f54a8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f54ab: movsx edx, word ptr [ecx + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x8u));
    /* 004f54af: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f54b2: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 004f54b5: mov byte ptr [edx + ecx], 1 */ W8((u32)(r_edx+r_ecx), 0x1u);
    /* 004f54b9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f54bc: call 0x4f9050 */ r_esp -= 4; W32(r_esp, 0x4f54c1u); f_004f9050();
    /* 004f54c1: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 004f54c5: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f54c9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004f54cb: jge 0x4f54e4 */ if ((fS==fO)) goto L_004f54e4;
L_004f54cd:; BB(0x004f54cd);
    /* 004f54cd: push 0x11a */ { u32 v = 0x11au; r_esp -= 4; W32(r_esp, v); }
    /* 004f54d2: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f54d7: push 0x6bff84 */ { u32 v = 0x6bff84u; r_esp -= 4; W32(r_esp, v); }
    /* 004f54dc: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f54e1u); f_005e9f20();
    /* 004f54e1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f54e4:; BB(0x004f54e4);
    /* 004f54e4: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f54e8: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f54eb: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 004f54ee: movzx ecx, byte ptr [eax + ecx] */ r_ecx = (u32)R8((u32)(r_eax+r_ecx));
    /* 004f54f2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f54f4: je 0x4f5523 */ if (fZ) goto L_004f5523;
L_004f54f6:; BB(0x004f54f6);
    /* 004f54f6: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f54f9: mov byte ptr [edx + 2], 0 */ W8((u32)(r_edx+0x2u), 0x0u);
    /* 004f54fd: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5500: call 0x4f9110 */ r_esp -= 4; W32(r_esp, 0x4f5505u); f_004f9110();
    /* 004f5505: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 004f5508: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f550b: jg 0x4f551b */ if ((!fZ&&fS==fO)) goto L_004f551b;
L_004f550d:; BB(0x004f550d);
    /* 004f550d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5510: call 0x4f9220 */ r_esp -= 4; W32(r_esp, 0x4f5515u); f_004f9220();
    /* 004f5515: mov ax, 0xfffd */ r_eax = (r_eax & 0xffff0000u) | ((0xfffdu) & 0xffffu);
    /* 004f5519: jmp 0x4f5527 */ goto L_004f5527;
L_004f551b:; BB(0x004f551b);
    /* 004f551b: or ax, 0xffff */ {  u32 a = (u16)r_eax; u32 b = 0xffffu; u32 r = (a | b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f551f: jmp 0x4f5527 */ goto L_004f5527;
L_004f5523:; BB(0x004f5523);
    /* 004f5523: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
L_004f5527:; BB(0x004f5527);
    /* 004f5527: mov esp, ebp */ r_esp = r_ebp;
    /* 004f5529: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f552a: ret 4 */ FN_RET(0x004f53c0); r_esp += 8; return;
}

void f_004f5530(void) /* PokerPot::func_004f5530 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f5530);
    /* 004f5530: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f5531: mov ebp, esp */ r_ebp = r_esp;
    /* 004f5533: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f5536: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004f5539: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f553c: movzx ecx, byte ptr [eax + 1] */ r_ecx = (u32)R8((u32)(r_eax+0x1u));
    /* 004f5540: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f5542: jne 0x4f555b */ if (!fZ) goto L_004f555b;
L_004f5544:; BB(0x004f5544);
    /* 004f5544: push 0x12f */ { u32 v = 0x12fu; r_esp -= 4; W32(r_esp, v); }
    /* 004f5549: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f554e: push 0x6bfe6c */ { u32 v = 0x6bfe6cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f5553: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f5558u); f_005e9f20();
    /* 004f5558: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f555b:; BB(0x004f555b);
    /* 004f555b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f555e: call 0x4f9110 */ r_esp -= 4; W32(r_esp, 0x4f5563u); f_004f9110();
    /* 004f5563: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 004f5566: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f5569: jge 0x4f5582 */ if ((fS==fO)) goto L_004f5582;
L_004f556b:; BB(0x004f556b);
    /* 004f556b: push 0x130 */ { u32 v = 0x130u; r_esp -= 4; W32(r_esp, v); }
    /* 004f5570: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f5575: push 0x6bfe7c */ { u32 v = 0x6bfe7cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f557a: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f557fu); f_005e9f20();
    /* 004f557f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f5582:; BB(0x004f5582);
    /* 004f5582: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5585: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 004f5588: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f558a: je 0x4f55a3 */ if (fZ) goto L_004f55a3;
L_004f558c:; BB(0x004f558c);
    /* 004f558c: push 0x131 */ { u32 v = 0x131u; r_esp -= 4; W32(r_esp, v); }
    /* 004f5591: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f5596: push 0x6bfe50 */ { u32 v = 0x6bfe50u; r_esp -= 4; W32(r_esp, v); }
    /* 004f559b: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f55a0u); f_005e9f20();
    /* 004f55a0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f55a3:; BB(0x004f55a3);
    /* 004f55a3: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f55a6: movzx eax, byte ptr [edx + 2] */ r_eax = (u32)R8((u32)(r_edx+0x2u));
    /* 004f55aa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f55ac: je 0x4f55c5 */ if (fZ) goto L_004f55c5;
L_004f55ae:; BB(0x004f55ae);
    /* 004f55ae: push 0x132 */ { u32 v = 0x132u; r_esp -= 4; W32(r_esp, v); }
    /* 004f55b3: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f55b8: push 0x6bfe38 */ { u32 v = 0x6bfe38u; r_esp -= 4; W32(r_esp, v); }
    /* 004f55bd: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f55c2u); f_005e9f20();
    /* 004f55c2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f55c5:; BB(0x004f55c5);
    /* 004f55c5: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f55c8: movzx eax, byte ptr [edx + 3] */ r_eax = (u32)R8((u32)(r_edx+0x3u));
    /* 004f55cc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f55ce: je 0x4f55e7 */ if (fZ) goto L_004f55e7;
L_004f55d0:; BB(0x004f55d0);
    /* 004f55d0: push 0x133 */ { u32 v = 0x133u; r_esp -= 4; W32(r_esp, v); }
    /* 004f55d5: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f55da: push 0x6bfe20 */ { u32 v = 0x6bfe20u; r_esp -= 4; W32(r_esp, v); }
    /* 004f55df: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f55e4u); f_005e9f20();
    /* 004f55e4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f55e7:; BB(0x004f55e7);
    /* 004f55e7: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f55eb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004f55ed: jge 0x4f5606 */ if ((fS==fO)) goto L_004f5606;
L_004f55ef:; BB(0x004f55ef);
    /* 004f55ef: push 0x134 */ { u32 v = 0x134u; r_esp -= 4; W32(r_esp, v); }
    /* 004f55f4: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f55f9: push 0x6bff6c */ { u32 v = 0x6bff6cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f55fe: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f5603u); f_005e9f20();
    /* 004f5603: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f5606:; BB(0x004f5606);
    /* 004f5606: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f560a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f560d: movsx eax, word ptr [edx + 6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x6u));
    /* 004f5611: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f5613: jl 0x4f562c */ if ((fS!=fO)) goto L_004f562c;
L_004f5615:; BB(0x004f5615);
    /* 004f5615: push 0x135 */ { u32 v = 0x135u; r_esp -= 4; W32(r_esp, v); }
    /* 004f561a: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f561f: push 0x6bff48 */ { u32 v = 0x6bff48u; r_esp -= 4; W32(r_esp, v); }
    /* 004f5624: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f5629u); f_005e9f20();
    /* 004f5629: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f562c:; BB(0x004f562c);
    /* 004f562c: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f5630: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5633: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 004f5636: movzx edx, byte ptr [ecx + edx] */ r_edx = (u32)R8((u32)(r_ecx+r_edx));
    /* 004f563a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f563c: jne 0x4f5650 */ if (!fZ) goto L_004f5650;
L_004f563e:; BB(0x004f563e);
    /* 004f563e: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f5642: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5645: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 004f5648: movzx eax, byte ptr [edx + eax] */ r_eax = (u32)R8((u32)(r_edx+r_eax));
    /* 004f564c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f564e: je 0x4f5667 */ if (fZ) goto L_004f5667;
L_004f5650:; BB(0x004f5650);
    /* 004f5650: push 0x136 */ { u32 v = 0x136u; r_esp -= 4; W32(r_esp, v); }
    /* 004f5655: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f565a: push 0x6bff10 */ { u32 v = 0x6bff10u; r_esp -= 4; W32(r_esp, v); }
    /* 004f565f: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f5664u); f_005e9f20();
    /* 004f5664: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f5667:; BB(0x004f5667);
    /* 004f5667: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f566a: mov ax, word ptr [ebp + 0xc] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 004f566e: mov word ptr [edx + 0x88], ax */ W16((u32)(r_edx+0x88u), (u16)r_eax);
    /* 004f5675: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5678: mov byte ptr [ecx], 1 */ W8((u32)(r_ecx), 0x1u);
    /* 004f567b: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004f5681: mov byte ptr [edx + 0x409], 0 */ W8((u32)(r_edx+0x409u), 0x0u);
    /* 004f5688: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004f568d: mov byte ptr [eax + 0x40b], 0 */ W8((u32)(r_eax+0x40bu), 0x0u);
    /* 004f5694: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004f569a: mov byte ptr [ecx + 0x40a], 0 */ W8((u32)(r_ecx+0x40au), 0x0u);
    /* 004f56a1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004f56a3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004f56a9: call 0x479800 */ r_esp -= 4; W32(r_esp, 0x4f56aeu); f_00479800();
    /* 004f56ae: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f56b1: mov ax, word ptr [ebp + 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 004f56b5: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004f56b9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f56bc: movsx edx, word ptr [ecx + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x8u));
    /* 004f56c0: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f56c3: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 004f56c6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f56c9: mov ecx, dword ptr [ecx + edx*4] */ r_ecx = R32((u32)(r_ecx+r_edx*4));
    /* 004f56cc: mov dword ptr [eax + 0x14], ecx */ W32((u32)(r_eax+0x14u), r_ecx);
    /* 004f56cf: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004f56d5: jmp 0x4f56e3 */ goto L_004f56e3;
L_004f56d7:; BB(0x004f56d7);
    /* 004f56d7: mov dx, word ptr [ebp - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004f56db: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f56df: mov word ptr [ebp - 4], dx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_edx);
L_004f56e3:; BB(0x004f56e3);
    /* 004f56e3: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f56e7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f56ea: movsx edx, word ptr [ecx + 6] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x6u));
    /* 004f56ee: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f56f0: jge 0x4f5702 */ if ((fS==fO)) goto L_004f5702;
L_004f56f2:; BB(0x004f56f2);
    /* 004f56f2: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f56f6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f56f9: mov edx, dword ptr [ecx + 0x38] */ r_edx = R32((u32)(r_ecx+0x38u));
    /* 004f56fc: mov byte ptr [eax + edx], 0 */ W8((u32)(r_eax+r_edx), 0x0u);
    /* 004f5700: jmp 0x4f56d7 */ goto L_004f56d7;
L_004f5702:; BB(0x004f5702);
    /* 004f5702: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004f5708: jmp 0x4f5716 */ goto L_004f5716;
L_004f570a:; BB(0x004f570a);
    /* 004f570a: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004f570e: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f5712: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_004f5716:; BB(0x004f5716);
    /* 004f5716: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f571a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f571d: movsx eax, word ptr [edx + 6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x6u));
    /* 004f5721: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f5723: jge 0x4f5757 */ if ((fS==fO)) goto L_004f5757;
L_004f5725:; BB(0x004f5725);
    /* 004f5725: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f5729: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f572c: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 004f572f: mov word ptr [eax + ecx*2], 0 */ W16((u32)(r_eax+r_ecx*2), 0x0u);
    /* 004f5735: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f5739: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f573c: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 004f573f: mov word ptr [eax + ecx*2], 0 */ W16((u32)(r_eax+r_ecx*2), 0x0u);
    /* 004f5745: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f5749: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f574c: mov eax, dword ptr [edx + 0x58] */ r_eax = R32((u32)(r_edx+0x58u));
    /* 004f574f: mov word ptr [eax + ecx*2], 0 */ W16((u32)(r_eax+r_ecx*2), 0x0u);
    /* 004f5755: jmp 0x4f570a */ goto L_004f570a;
L_004f5757:; BB(0x004f5757);
    /* 004f5757: mov esp, ebp */ r_esp = r_ebp;
    /* 004f5759: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f575a: ret 8 */ FN_RET(0x004f5530); r_esp += 12; return;
}

void f_004f5760(void) /* PokerPot::func_004f5760 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f5760);
    /* 004f5760: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f5761: mov ebp, esp */ r_ebp = r_esp;
    /* 004f5763: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f5766: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004f5769: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f576c: movzx ecx, byte ptr [eax + 1] */ r_ecx = (u32)R8((u32)(r_eax+0x1u));
    /* 004f5770: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f5772: jne 0x4f578b */ if (!fZ) goto L_004f578b;
L_004f5774:; BB(0x004f5774);
    /* 004f5774: push 0x14f */ { u32 v = 0x14fu; r_esp -= 4; W32(r_esp, v); }
    /* 004f5779: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f577e: push 0x6bfe6c */ { u32 v = 0x6bfe6cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f5783: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f5788u); f_005e9f20();
    /* 004f5788: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f578b:; BB(0x004f578b);
    /* 004f578b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f578e: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 004f5791: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f5793: jne 0x4f57ac */ if (!fZ) goto L_004f57ac;
L_004f5795:; BB(0x004f5795);
    /* 004f5795: push 0x150 */ { u32 v = 0x150u; r_esp -= 4; W32(r_esp, v); }
    /* 004f579a: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f579f: push 0x6c0020 */ { u32 v = 0x6c0020u; r_esp -= 4; W32(r_esp, v); }
    /* 004f57a4: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f57a9u); f_005e9f20();
    /* 004f57a9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f57ac:; BB(0x004f57ac);
    /* 004f57ac: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f57af: call 0x4f9110 */ r_esp -= 4; W32(r_esp, 0x4f57b4u); f_004f9110();
    /* 004f57b4: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 004f57b7: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f57ba: jge 0x4f57d3 */ if ((fS==fO)) goto L_004f57d3;
L_004f57bc:; BB(0x004f57bc);
    /* 004f57bc: push 0x151 */ { u32 v = 0x151u; r_esp -= 4; W32(r_esp, v); }
    /* 004f57c1: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f57c6: push 0x6bfe7c */ { u32 v = 0x6bfe7cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f57cb: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f57d0u); f_005e9f20();
    /* 004f57d0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f57d3:; BB(0x004f57d3);
    /* 004f57d3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f57d6: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x4f57dbu); f_004f6640();
    /* 004f57db: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004f57de: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f57e0: jne 0x4f57f9 */ if (!fZ) goto L_004f57f9;
L_004f57e2:; BB(0x004f57e2);
    /* 004f57e2: push 0x152 */ { u32 v = 0x152u; r_esp -= 4; W32(r_esp, v); }
    /* 004f57e7: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f57ec: push 0x6c0008 */ { u32 v = 0x6c0008u; r_esp -= 4; W32(r_esp, v); }
    /* 004f57f1: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f57f6u); f_005e9f20();
    /* 004f57f6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f57f9:; BB(0x004f57f9);
    /* 004f57f9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f57fc: movsx edx, word ptr [ecx + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x8u));
    /* 004f5800: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5803: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 004f5806: mov byte ptr [edx + ecx], 1 */ W8((u32)(r_edx+r_ecx), 0x1u);
    /* 004f580a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f580d: movsx eax, word ptr [edx + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x8u));
    /* 004f5811: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5814: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 004f5817: mov ax, word ptr [edx + eax*2] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2))) & 0xffffu);
    /* 004f581b: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f581f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5822: movsx edx, word ptr [ecx + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x8u));
    /* 004f5826: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5829: mov ecx, dword ptr [ecx + 0x58] */ r_ecx = R32((u32)(r_ecx+0x58u));
    /* 004f582c: mov word ptr [ecx + edx*2], ax */ W16((u32)(r_ecx+r_edx*2), (u16)r_eax);
    /* 004f5830: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5833: movsx eax, word ptr [edx + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x8u));
    /* 004f5837: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f583a: mov edx, dword ptr [ecx + 0x64] */ r_edx = R32((u32)(r_ecx+0x64u));
    /* 004f583d: mov ax, word ptr [edx + eax*2] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2))) & 0xffffu);
    /* 004f5841: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f5845: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5848: movsx edx, word ptr [ecx + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x8u));
    /* 004f584c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f584f: mov ecx, dword ptr [ecx + 0x64] */ r_ecx = R32((u32)(r_ecx+0x64u));
    /* 004f5852: mov word ptr [ecx + edx*2], ax */ W16((u32)(r_ecx+r_edx*2), (u16)r_eax);
    /* 004f5856: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5859: call 0x4f8f20 */ r_esp -= 4; W32(r_esp, 0x4f585eu); f_004f8f20();
    /* 004f585e: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 004f5862: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f5866: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004f5868: jge 0x4f5881 */ if ((fS==fO)) goto L_004f5881;
L_004f586a:; BB(0x004f586a);
    /* 004f586a: push 0x158 */ { u32 v = 0x158u; r_esp -= 4; W32(r_esp, v); }
    /* 004f586f: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f5874: push 0x6bff84 */ { u32 v = 0x6bff84u; r_esp -= 4; W32(r_esp, v); }
    /* 004f5879: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f587eu); f_005e9f20();
    /* 004f587e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f5881:; BB(0x004f5881);
    /* 004f5881: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f5885: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5888: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 004f588b: movzx ecx, byte ptr [eax + ecx] */ r_ecx = (u32)R8((u32)(r_eax+r_ecx));
    /* 004f588f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f5891: je 0x4f58b6 */ if (fZ) goto L_004f58b6;
L_004f5893:; BB(0x004f5893);
    /* 004f5893: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f5897: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f589a: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 004f589d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f58a0: mov ecx, dword ptr [ecx + edx*4] */ r_ecx = R32((u32)(r_ecx+r_edx*4));
    /* 004f58a3: cmp ecx, dword ptr [eax + 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x14u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f58a6: jne 0x4f58b6 */ if (!fZ) goto L_004f58b6;
L_004f58a8:; BB(0x004f58a8);
    /* 004f58a8: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f58ab: mov byte ptr [edx], 0 */ W8((u32)(r_edx), 0x0u);
    /* 004f58ae: or ax, 0xffff */ {  u32 a = (u16)r_eax; u32 b = 0xffffu; u32 r = (a | b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f58b2: jmp 0x4f58ba */ goto L_004f58ba;
L_004f58b6:; BB(0x004f58b6);
    /* 004f58b6: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
L_004f58ba:; BB(0x004f58ba);
    /* 004f58ba: mov esp, ebp */ r_esp = r_ebp;
    /* 004f58bc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f58bd: ret  */ FN_RET(0x004f5760); r_esp += 4; return;
}

void f_004f58c0(void) /* PokerPot::func_004f58c0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f58c0);
    /* 004f58c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f58c1: mov ebp, esp */ r_ebp = r_esp;
    /* 004f58c3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f58c6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004f58c9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f58cc: movzx ecx, byte ptr [eax + 1] */ r_ecx = (u32)R8((u32)(r_eax+0x1u));
    /* 004f58d0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f58d2: jne 0x4f58eb */ if (!fZ) goto L_004f58eb;
L_004f58d4:; BB(0x004f58d4);
    /* 004f58d4: push 0x167 */ { u32 v = 0x167u; r_esp -= 4; W32(r_esp, v); }
    /* 004f58d9: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f58de: push 0x6bfe6c */ { u32 v = 0x6bfe6cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f58e3: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f58e8u); f_005e9f20();
    /* 004f58e8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f58eb:; BB(0x004f58eb);
    /* 004f58eb: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f58ee: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 004f58f1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f58f3: jne 0x4f590c */ if (!fZ) goto L_004f590c;
L_004f58f5:; BB(0x004f58f5);
    /* 004f58f5: push 0x168 */ { u32 v = 0x168u; r_esp -= 4; W32(r_esp, v); }
    /* 004f58fa: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f58ff: push 0x6c0020 */ { u32 v = 0x6c0020u; r_esp -= 4; W32(r_esp, v); }
    /* 004f5904: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f5909u); f_005e9f20();
    /* 004f5909: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f590c:; BB(0x004f590c);
    /* 004f590c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f590f: call 0x4f9110 */ r_esp -= 4; W32(r_esp, 0x4f5914u); f_004f9110();
    /* 004f5914: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 004f5917: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f591a: jge 0x4f5933 */ if ((fS==fO)) goto L_004f5933;
L_004f591c:; BB(0x004f591c);
    /* 004f591c: push 0x169 */ { u32 v = 0x169u; r_esp -= 4; W32(r_esp, v); }
    /* 004f5921: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f5926: push 0x6bfe7c */ { u32 v = 0x6bfe7cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f592b: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f5930u); f_005e9f20();
    /* 004f5930: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f5933:; BB(0x004f5933);
    /* 004f5933: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f5937: jg 0x4f5950 */ if ((!fZ&&fS==fO)) goto L_004f5950;
L_004f5939:; BB(0x004f5939);
    /* 004f5939: push 0x16a */ { u32 v = 0x16au; r_esp -= 4; W32(r_esp, v); }
    /* 004f593e: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f5943: push 0x6c0038 */ { u32 v = 0x6c0038u; r_esp -= 4; W32(r_esp, v); }
    /* 004f5948: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f594du); f_005e9f20();
    /* 004f594d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f5950:; BB(0x004f5950);
    /* 004f5950: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5953: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x4f5958u); f_004f6640();
    /* 004f5958: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004f595b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f595d: jne 0x4f5976 */ if (!fZ) goto L_004f5976;
L_004f595f:; BB(0x004f595f);
    /* 004f595f: push 0x16b */ { u32 v = 0x16bu; r_esp -= 4; W32(r_esp, v); }
    /* 004f5964: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f5969: push 0x6c0008 */ { u32 v = 0x6c0008u; r_esp -= 4; W32(r_esp, v); }
    /* 004f596e: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f5973u); f_005e9f20();
    /* 004f5973: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f5976:; BB(0x004f5976);
    /* 004f5976: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5979: movsx eax, word ptr [edx + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x8u));
    /* 004f597d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5980: mov edx, dword ptr [ecx + 0x4c] */ r_edx = R32((u32)(r_ecx+0x4cu));
    /* 004f5983: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5986: mov cx, word ptr [ecx + 0x2c] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ecx+0x2cu))) & 0xffffu);
    /* 004f598a: mov word ptr [edx + eax*2], cx */ W16((u32)(r_edx+r_eax*2), (u16)r_ecx);
    /* 004f598e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5991: mov ax, word ptr [edx + 0x2c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x2cu))) & 0xffffu);
    /* 004f5995: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f5999: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f599c: mov word ptr [ecx + 0x2c], ax */ W16((u32)(r_ecx+0x2cu), (u16)r_eax);
    /* 004f59a0: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f59a3: movsx eax, word ptr [edx + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x8u));
    /* 004f59a7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f59aa: mov edx, dword ptr [ecx + 0x5c] */ r_edx = R32((u32)(r_ecx+0x5cu));
    /* 004f59ad: mov ax, word ptr [edx + eax*2] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2))) & 0xffffu);
    /* 004f59b1: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f59b5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f59b8: movsx edx, word ptr [ecx + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x8u));
    /* 004f59bc: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f59bf: mov ecx, dword ptr [ecx + 0x5c] */ r_ecx = R32((u32)(r_ecx+0x5cu));
    /* 004f59c2: mov word ptr [ecx + edx*2], ax */ W16((u32)(r_ecx+r_edx*2), (u16)r_eax);
    /* 004f59c6: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f59c9: movsx eax, word ptr [edx + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x8u));
    /* 004f59cd: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f59d0: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 004f59d3: mov ax, word ptr [edx + eax*2] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2))) & 0xffffu);
    /* 004f59d7: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f59db: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f59de: movsx edx, word ptr [ecx + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x8u));
    /* 004f59e2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f59e5: mov ecx, dword ptr [ecx + 0x50] */ r_ecx = R32((u32)(r_ecx+0x50u));
    /* 004f59e8: mov word ptr [ecx + edx*2], ax */ W16((u32)(r_ecx+r_edx*2), (u16)r_eax);
    /* 004f59ec: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f59ef: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 004f59f2: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f59f5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f59f8: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 004f59fb: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f59fe: movsx eax, word ptr [edx + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x8u));
    /* 004f5a02: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5a05: mov edx, dword ptr [ecx + 0x68] */ r_edx = R32((u32)(r_ecx+0x68u));
    /* 004f5a08: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 004f5a0b: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f5a0e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5a11: movsx edx, word ptr [ecx + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x8u));
    /* 004f5a15: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5a18: mov ecx, dword ptr [ecx + 0x68] */ r_ecx = R32((u32)(r_ecx+0x68u));
    /* 004f5a1b: mov dword ptr [ecx + edx*4], eax */ W32((u32)(r_ecx+r_edx*4), r_eax);
    /* 004f5a1e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5a21: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 004f5a24: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f5a27: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5a2a: mov dword ptr [ecx + 0x14], eax */ W32((u32)(r_ecx+0x14u), r_eax);
    /* 004f5a2d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5a30: movsx eax, word ptr [edx + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x8u));
    /* 004f5a34: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5a37: mov edx, dword ptr [ecx + 0x38] */ r_edx = R32((u32)(r_ecx+0x38u));
    /* 004f5a3a: mov byte ptr [eax + edx], 1 */ W8((u32)(r_eax+r_edx), 0x1u);
    /* 004f5a3e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5a41: call 0x4f8f20 */ r_esp -= 4; W32(r_esp, 0x4f5a46u); f_004f8f20();
    /* 004f5a46: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 004f5a4a: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f5a4e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004f5a50: jge 0x4f5a69 */ if ((fS==fO)) goto L_004f5a69;
L_004f5a52:; BB(0x004f5a52);
    /* 004f5a52: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 004f5a57: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f5a5c: push 0x6bff84 */ { u32 v = 0x6bff84u; r_esp -= 4; W32(r_esp, v); }
    /* 004f5a61: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f5a66u); f_005e9f20();
    /* 004f5a66: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f5a69:; BB(0x004f5a69);
    /* 004f5a69: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004f5a6d: mov esp, ebp */ r_esp = r_ebp;
    /* 004f5a6f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f5a70: ret 4 */ FN_RET(0x004f58c0); r_esp += 8; return;
}

void f_004f5a80(void) /* PokerPot::func_004f5a80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f5a80);
    /* 004f5a80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f5a81: mov ebp, esp */ r_ebp = r_esp;
    /* 004f5a83: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f5a86: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004f5a89: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5a8c: movzx ecx, byte ptr [eax + 1] */ r_ecx = (u32)R8((u32)(r_eax+0x1u));
    /* 004f5a90: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f5a92: jne 0x4f5aab */ if (!fZ) goto L_004f5aab;
L_004f5a94:; BB(0x004f5a94);
    /* 004f5a94: push 0x180 */ { u32 v = 0x180u; r_esp -= 4; W32(r_esp, v); }
    /* 004f5a99: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f5a9e: push 0x6bfe6c */ { u32 v = 0x6bfe6cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f5aa3: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f5aa8u); f_005e9f20();
    /* 004f5aa8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f5aab:; BB(0x004f5aab);
    /* 004f5aab: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5aae: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 004f5ab1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f5ab3: jne 0x4f5acc */ if (!fZ) goto L_004f5acc;
L_004f5ab5:; BB(0x004f5ab5);
    /* 004f5ab5: push 0x181 */ { u32 v = 0x181u; r_esp -= 4; W32(r_esp, v); }
    /* 004f5aba: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f5abf: push 0x6c0020 */ { u32 v = 0x6c0020u; r_esp -= 4; W32(r_esp, v); }
    /* 004f5ac4: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f5ac9u); f_005e9f20();
    /* 004f5ac9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f5acc:; BB(0x004f5acc);
    /* 004f5acc: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5acf: call 0x4f9110 */ r_esp -= 4; W32(r_esp, 0x4f5ad4u); f_004f9110();
    /* 004f5ad4: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 004f5ad7: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f5ada: jge 0x4f5af3 */ if ((fS==fO)) goto L_004f5af3;
L_004f5adc:; BB(0x004f5adc);
    /* 004f5adc: push 0x182 */ { u32 v = 0x182u; r_esp -= 4; W32(r_esp, v); }
    /* 004f5ae1: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f5ae6: push 0x6bfe7c */ { u32 v = 0x6bfe7cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f5aeb: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f5af0u); f_005e9f20();
    /* 004f5af0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f5af3:; BB(0x004f5af3);
    /* 004f5af3: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f5af7: jg 0x4f5b10 */ if ((!fZ&&fS==fO)) goto L_004f5b10;
L_004f5af9:; BB(0x004f5af9);
    /* 004f5af9: push 0x183 */ { u32 v = 0x183u; r_esp -= 4; W32(r_esp, v); }
    /* 004f5afe: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f5b03: push 0x6c0038 */ { u32 v = 0x6c0038u; r_esp -= 4; W32(r_esp, v); }
    /* 004f5b08: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f5b0du); f_005e9f20();
    /* 004f5b0d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f5b10:; BB(0x004f5b10);
    /* 004f5b10: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5b13: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x4f5b18u); f_004f6640();
    /* 004f5b18: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004f5b1b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f5b1d: jne 0x4f5b36 */ if (!fZ) goto L_004f5b36;
L_004f5b1f:; BB(0x004f5b1f);
    /* 004f5b1f: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 004f5b24: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f5b29: push 0x6c0008 */ { u32 v = 0x6c0008u; r_esp -= 4; W32(r_esp, v); }
    /* 004f5b2e: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f5b33u); f_005e9f20();
    /* 004f5b33: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f5b36:; BB(0x004f5b36);
    /* 004f5b36: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5b39: movsx eax, word ptr [edx + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x8u));
    /* 004f5b3d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5b40: mov edx, dword ptr [ecx + 0x4c] */ r_edx = R32((u32)(r_ecx+0x4cu));
    /* 004f5b43: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5b46: mov cx, word ptr [ecx + 0x2c] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ecx+0x2cu))) & 0xffffu);
    /* 004f5b4a: mov word ptr [edx + eax*2], cx */ W16((u32)(r_edx+r_eax*2), (u16)r_ecx);
    /* 004f5b4e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5b51: mov ax, word ptr [edx + 0x2c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x2cu))) & 0xffffu);
    /* 004f5b55: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f5b59: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5b5c: mov word ptr [ecx + 0x2c], ax */ W16((u32)(r_ecx+0x2cu), (u16)r_eax);
    /* 004f5b60: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5b63: movsx eax, word ptr [edx + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x8u));
    /* 004f5b67: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5b6a: mov edx, dword ptr [ecx + 0x5c] */ r_edx = R32((u32)(r_ecx+0x5cu));
    /* 004f5b6d: mov ax, word ptr [edx + eax*2] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2))) & 0xffffu);
    /* 004f5b71: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f5b75: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5b78: movsx edx, word ptr [ecx + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x8u));
    /* 004f5b7c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5b7f: mov ecx, dword ptr [ecx + 0x5c] */ r_ecx = R32((u32)(r_ecx+0x5cu));
    /* 004f5b82: mov word ptr [ecx + edx*2], ax */ W16((u32)(r_ecx+r_edx*2), (u16)r_eax);
    /* 004f5b86: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5b89: movsx eax, word ptr [edx + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x8u));
    /* 004f5b8d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5b90: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 004f5b93: mov ax, word ptr [edx + eax*2] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2))) & 0xffffu);
    /* 004f5b97: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f5b9b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5b9e: movsx edx, word ptr [ecx + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x8u));
    /* 004f5ba2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5ba5: mov ecx, dword ptr [ecx + 0x50] */ r_ecx = R32((u32)(r_ecx+0x50u));
    /* 004f5ba8: mov word ptr [ecx + edx*2], ax */ W16((u32)(r_ecx+r_edx*2), (u16)r_eax);
    /* 004f5bac: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5baf: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 004f5bb2: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f5bb5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5bb8: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 004f5bbb: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5bbe: movsx eax, word ptr [edx + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x8u));
    /* 004f5bc2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5bc5: mov edx, dword ptr [ecx + 0x68] */ r_edx = R32((u32)(r_ecx+0x68u));
    /* 004f5bc8: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 004f5bcb: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f5bce: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5bd1: movsx edx, word ptr [ecx + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x8u));
    /* 004f5bd5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5bd8: mov ecx, dword ptr [ecx + 0x68] */ r_ecx = R32((u32)(r_ecx+0x68u));
    /* 004f5bdb: mov dword ptr [ecx + edx*4], eax */ W32((u32)(r_ecx+r_edx*4), r_eax);
    /* 004f5bde: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5be1: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 004f5be4: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f5be7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5bea: mov dword ptr [ecx + 0x14], eax */ W32((u32)(r_ecx+0x14u), r_eax);
    /* 004f5bed: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5bf0: movsx eax, word ptr [edx + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x8u));
    /* 004f5bf4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5bf7: mov edx, dword ptr [ecx + 0x34] */ r_edx = R32((u32)(r_ecx+0x34u));
    /* 004f5bfa: mov byte ptr [eax + edx], 1 */ W8((u32)(r_eax+r_edx), 0x1u);
    /* 004f5bfe: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5c01: call 0x4f8f20 */ r_esp -= 4; W32(r_esp, 0x4f5c06u); f_004f8f20();
    /* 004f5c06: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 004f5c0a: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f5c0e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004f5c10: jge 0x4f5c29 */ if ((fS==fO)) goto L_004f5c29;
L_004f5c12:; BB(0x004f5c12);
    /* 004f5c12: push 0x191 */ { u32 v = 0x191u; r_esp -= 4; W32(r_esp, v); }
    /* 004f5c17: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f5c1c: push 0x6bff84 */ { u32 v = 0x6bff84u; r_esp -= 4; W32(r_esp, v); }
    /* 004f5c21: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f5c26u); f_005e9f20();
    /* 004f5c26: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f5c29:; BB(0x004f5c29);
    /* 004f5c29: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004f5c2d: mov esp, ebp */ r_esp = r_ebp;
    /* 004f5c2f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f5c30: ret 4 */ FN_RET(0x004f5a80); r_esp += 8; return;
}

void f_004f5cd0(void) /* PokerPot::func_004f5cd0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f5cd0);
    /* 004f5cd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f5cd1: mov ebp, esp */ r_ebp = r_esp;
    /* 004f5cd3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f5cd6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004f5cd7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004f5cd8: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004f5cdb: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5cde: movzx ecx, byte ptr [eax + 1] */ r_ecx = (u32)R8((u32)(r_eax+0x1u));
    /* 004f5ce2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f5ce4: jne 0x4f5cfd */ if (!fZ) goto L_004f5cfd;
L_004f5ce6:; BB(0x004f5ce6);
    /* 004f5ce6: push 0x1a5 */ { u32 v = 0x1a5u; r_esp -= 4; W32(r_esp, v); }
    /* 004f5ceb: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f5cf0: push 0x6bfe6c */ { u32 v = 0x6bfe6cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f5cf5: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f5cfau); f_005e9f20();
    /* 004f5cfa: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f5cfd:; BB(0x004f5cfd);
    /* 004f5cfd: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5d00: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 004f5d03: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f5d05: jne 0x4f5d1e */ if (!fZ) goto L_004f5d1e;
L_004f5d07:; BB(0x004f5d07);
    /* 004f5d07: push 0x1a6 */ { u32 v = 0x1a6u; r_esp -= 4; W32(r_esp, v); }
    /* 004f5d0c: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f5d11: push 0x6c0020 */ { u32 v = 0x6c0020u; r_esp -= 4; W32(r_esp, v); }
    /* 004f5d16: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f5d1bu); f_005e9f20();
    /* 004f5d1b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f5d1e:; BB(0x004f5d1e);
    /* 004f5d1e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5d21: call 0x4f6690 */ r_esp -= 4; W32(r_esp, 0x4f5d26u); f_004f6690();
    /* 004f5d26: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004f5d29: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f5d2b: jne 0x4f5d44 */ if (!fZ) goto L_004f5d44;
L_004f5d2d:; BB(0x004f5d2d);
    /* 004f5d2d: push 0x1a7 */ { u32 v = 0x1a7u; r_esp -= 4; W32(r_esp, v); }
    /* 004f5d32: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f5d37: push 0x6c0060 */ { u32 v = 0x6c0060u; r_esp -= 4; W32(r_esp, v); }
    /* 004f5d3c: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f5d41u); f_005e9f20();
    /* 004f5d41: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f5d44:; BB(0x004f5d44);
    /* 004f5d44: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5d47: call 0x4f67d0 */ r_esp -= 4; W32(r_esp, 0x4f5d4cu); f_004f67d0();
    /* 004f5d4c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5d4f: add eax, dword ptr [edx + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0xcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f5d52: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5d55: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 004f5d58: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5d5b: movsx esi, word ptr [edx + 8] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+0x8u));
    /* 004f5d5f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5d62: mov edi, dword ptr [eax + 0x68] */ r_edi = R32((u32)(r_eax+0x68u));
    /* 004f5d65: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5d68: call 0x4f67d0 */ r_esp -= 4; W32(r_esp, 0x4f5d6du); f_004f67d0();
    /* 004f5d6d: add eax, dword ptr [edi + esi*4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+r_esi*4)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f5d70: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5d73: movsx edx, word ptr [ecx + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x8u));
    /* 004f5d77: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5d7a: mov ecx, dword ptr [ecx + 0x68] */ r_ecx = R32((u32)(r_ecx+0x68u));
    /* 004f5d7d: mov dword ptr [ecx + edx*4], eax */ W32((u32)(r_ecx+r_edx*4), r_eax);
    /* 004f5d80: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5d83: movsx eax, word ptr [edx + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x8u));
    /* 004f5d87: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5d8a: mov edx, dword ptr [ecx + 0x38] */ r_edx = R32((u32)(r_ecx+0x38u));
    /* 004f5d8d: mov byte ptr [eax + edx], 1 */ W8((u32)(r_eax+r_edx), 0x1u);
    /* 004f5d91: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5d94: movsx ecx, word ptr [eax + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x8u));
    /* 004f5d98: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5d9b: mov eax, dword ptr [edx + 0x60] */ r_eax = R32((u32)(r_edx+0x60u));
    /* 004f5d9e: mov cx, word ptr [eax + ecx*2] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_ecx*2))) & 0xffffu);
    /* 004f5da2: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f5da6: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5da9: movsx eax, word ptr [edx + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x8u));
    /* 004f5dad: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5db0: mov edx, dword ptr [edx + 0x60] */ r_edx = R32((u32)(r_edx+0x60u));
    /* 004f5db3: mov word ptr [edx + eax*2], cx */ W16((u32)(r_edx+r_eax*2), (u16)r_ecx);
    /* 004f5db7: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5dba: movsx ecx, word ptr [eax + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x8u));
    /* 004f5dbe: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5dc1: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 004f5dc4: mov cx, word ptr [eax + ecx*2] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_ecx*2))) & 0xffffu);
    /* 004f5dc8: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f5dcc: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5dcf: movsx eax, word ptr [edx + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x8u));
    /* 004f5dd3: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5dd6: mov edx, dword ptr [edx + 0x54] */ r_edx = R32((u32)(r_edx+0x54u));
    /* 004f5dd9: mov word ptr [edx + eax*2], cx */ W16((u32)(r_edx+r_eax*2), (u16)r_ecx);
    /* 004f5ddd: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5de0: call 0x4f8f20 */ r_esp -= 4; W32(r_esp, 0x4f5de5u); f_004f8f20();
    /* 004f5de5: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 004f5de9: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f5ded: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004f5def: jl 0x4f5e67 */ if ((fS!=fO)) goto L_004f5e67;
L_004f5df1:; BB(0x004f5df1);
    /* 004f5df1: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f5df5: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5df8: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 004f5dfb: movzx ecx, byte ptr [eax + ecx] */ r_ecx = (u32)R8((u32)(r_eax+r_ecx));
    /* 004f5dff: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f5e01: je 0x4f5e67 */ if (fZ) goto L_004f5e67;
L_004f5e03:; BB(0x004f5e03);
    /* 004f5e03: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f5e07: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5e0a: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 004f5e0d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5e10: mov ecx, dword ptr [ecx + edx*4] */ r_ecx = R32((u32)(r_ecx+r_edx*4));
    /* 004f5e13: cmp ecx, dword ptr [eax + 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x14u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f5e16: jne 0x4f5e67 */ if (!fZ) goto L_004f5e67;
L_004f5e18:; BB(0x004f5e18);
    /* 004f5e18: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5e1b: mov byte ptr [edx], 0 */ W8((u32)(r_edx), 0x0u);
    /* 004f5e1e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5e21: call 0x4f9110 */ r_esp -= 4; W32(r_esp, 0x4f5e26u); f_004f9110();
    /* 004f5e26: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 004f5e29: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f5e2c: jne 0x4f5e61 */ if (!fZ) goto L_004f5e61;
L_004f5e2e:; BB(0x004f5e2e);
    /* 004f5e2e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5e31: call 0x4f9220 */ r_esp -= 4; W32(r_esp, 0x4f5e36u); f_004f9220();
    /* 004f5e36: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5e39: call 0x4f6420 */ r_esp -= 4; W32(r_esp, 0x4f5e3eu); f_004f6420();
    /* 004f5e3e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f5e40: je 0x4f5e59 */ if (fZ) goto L_004f5e59;
L_004f5e42:; BB(0x004f5e42);
    /* 004f5e42: push 0x1b6 */ { u32 v = 0x1b6u; r_esp -= 4; W32(r_esp, v); }
    /* 004f5e47: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f5e4c: push 0x6c0048 */ { u32 v = 0x6c0048u; r_esp -= 4; W32(r_esp, v); }
    /* 004f5e51: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f5e56u); f_005e9f20();
    /* 004f5e56: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f5e59:; BB(0x004f5e59);
    /* 004f5e59: mov ax, 0xfffd */ r_eax = (r_eax & 0xffff0000u) | ((0xfffdu) & 0xffffu);
    /* 004f5e5d: jmp 0x4f5e6b */ goto L_004f5e6b;
L_004f5e61:; BB(0x004f5e61);
    /* 004f5e61: or ax, 0xffff */ {  u32 a = (u16)r_eax; u32 b = 0xffffu; u32 r = (a | b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f5e65: jmp 0x4f5e6b */ goto L_004f5e6b;
L_004f5e67:; BB(0x004f5e67);
    /* 004f5e67: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
L_004f5e6b:; BB(0x004f5e6b);
    /* 004f5e6b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f5e6c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f5e6d: mov esp, ebp */ r_esp = r_ebp;
    /* 004f5e6f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f5e70: ret  */ FN_RET(0x004f5cd0); r_esp += 4; return;
}

void f_004f5e80(void) /* PokerPot::func_004f5e80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f5e80);
    /* 004f5e80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f5e81: mov ebp, esp */ r_ebp = r_esp;
    /* 004f5e83: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f5e86: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004f5e89: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5e8c: movzx ecx, byte ptr [eax + 1] */ r_ecx = (u32)R8((u32)(r_eax+0x1u));
    /* 004f5e90: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f5e92: jne 0x4f5eab */ if (!fZ) goto L_004f5eab;
L_004f5e94:; BB(0x004f5e94);
    /* 004f5e94: push 0x1c3 */ { u32 v = 0x1c3u; r_esp -= 4; W32(r_esp, v); }
    /* 004f5e99: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f5e9e: push 0x6bfe6c */ { u32 v = 0x6bfe6cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f5ea3: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f5ea8u); f_005e9f20();
    /* 004f5ea8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f5eab:; BB(0x004f5eab);
    /* 004f5eab: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5eae: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 004f5eb1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f5eb3: jne 0x4f5ecc */ if (!fZ) goto L_004f5ecc;
L_004f5eb5:; BB(0x004f5eb5);
    /* 004f5eb5: push 0x1c4 */ { u32 v = 0x1c4u; r_esp -= 4; W32(r_esp, v); }
    /* 004f5eba: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f5ebf: push 0x6c0020 */ { u32 v = 0x6c0020u; r_esp -= 4; W32(r_esp, v); }
    /* 004f5ec4: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f5ec9u); f_005e9f20();
    /* 004f5ec9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f5ecc:; BB(0x004f5ecc);
    /* 004f5ecc: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5ecf: call 0x4f6690 */ r_esp -= 4; W32(r_esp, 0x4f5ed4u); f_004f6690();
    /* 004f5ed4: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004f5ed7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f5ed9: jne 0x4f5ef2 */ if (!fZ) goto L_004f5ef2;
L_004f5edb:; BB(0x004f5edb);
    /* 004f5edb: push 0x1c5 */ { u32 v = 0x1c5u; r_esp -= 4; W32(r_esp, v); }
    /* 004f5ee0: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f5ee5: push 0x6c0060 */ { u32 v = 0x6c0060u; r_esp -= 4; W32(r_esp, v); }
    /* 004f5eea: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f5eefu); f_005e9f20();
    /* 004f5eef: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f5ef2:; BB(0x004f5ef2);
    /* 004f5ef2: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f5ef6: jne 0x4f5f03 */ if (!fZ) goto L_004f5f03;
L_004f5ef8:; BB(0x004f5ef8);
    /* 004f5ef8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5efb: call 0x4f67d0 */ r_esp -= 4; W32(r_esp, 0x4f5f00u); f_004f67d0();
    /* 004f5f00: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
L_004f5f03:; BB(0x004f5f03);
    /* 004f5f03: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5f06: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 004f5f09: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f5f0c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5f0f: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 004f5f12: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5f15: movsx eax, word ptr [edx + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x8u));
    /* 004f5f19: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5f1c: mov edx, dword ptr [ecx + 0x68] */ r_edx = R32((u32)(r_ecx+0x68u));
    /* 004f5f1f: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 004f5f22: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f5f25: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5f28: movsx edx, word ptr [ecx + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x8u));
    /* 004f5f2c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5f2f: mov ecx, dword ptr [ecx + 0x68] */ r_ecx = R32((u32)(r_ecx+0x68u));
    /* 004f5f32: mov dword ptr [ecx + edx*4], eax */ W32((u32)(r_ecx+r_edx*4), r_eax);
    /* 004f5f35: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5f38: movsx eax, word ptr [edx + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x8u));
    /* 004f5f3c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5f3f: mov edx, dword ptr [ecx + 0x34] */ r_edx = R32((u32)(r_ecx+0x34u));
    /* 004f5f42: mov byte ptr [eax + edx], 1 */ W8((u32)(r_eax+r_edx), 0x1u);
    /* 004f5f46: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5f49: movsx ecx, word ptr [eax + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x8u));
    /* 004f5f4d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5f50: mov eax, dword ptr [edx + 0x60] */ r_eax = R32((u32)(r_edx+0x60u));
    /* 004f5f53: mov cx, word ptr [eax + ecx*2] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_ecx*2))) & 0xffffu);
    /* 004f5f57: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f5f5b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5f5e: movsx eax, word ptr [edx + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x8u));
    /* 004f5f62: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5f65: mov edx, dword ptr [edx + 0x60] */ r_edx = R32((u32)(r_edx+0x60u));
    /* 004f5f68: mov word ptr [edx + eax*2], cx */ W16((u32)(r_edx+r_eax*2), (u16)r_ecx);
    /* 004f5f6c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5f6f: movsx ecx, word ptr [eax + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x8u));
    /* 004f5f73: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5f76: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 004f5f79: mov cx, word ptr [eax + ecx*2] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_ecx*2))) & 0xffffu);
    /* 004f5f7d: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f5f81: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5f84: movsx eax, word ptr [edx + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x8u));
    /* 004f5f88: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5f8b: mov edx, dword ptr [edx + 0x54] */ r_edx = R32((u32)(r_edx+0x54u));
    /* 004f5f8e: mov word ptr [edx + eax*2], cx */ W16((u32)(r_edx+r_eax*2), (u16)r_ecx);
    /* 004f5f92: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5f95: call 0x4f8f20 */ r_esp -= 4; W32(r_esp, 0x4f5f9au); f_004f8f20();
    /* 004f5f9a: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 004f5f9e: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f5fa2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004f5fa4: jl 0x4f6007 */ if ((fS!=fO)) goto L_004f6007;
L_004f5fa6:; BB(0x004f5fa6);
    /* 004f5fa6: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f5faa: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5fad: mov eax, dword ptr [edx + 0x68] */ r_eax = R32((u32)(r_edx+0x68u));
    /* 004f5fb0: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5fb3: mov eax, dword ptr [eax + ecx*4] */ r_eax = R32((u32)(r_eax+r_ecx*4));
    /* 004f5fb6: cmp eax, dword ptr [edx + 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x14u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f5fb9: jne 0x4f6007 */ if (!fZ) goto L_004f6007;
L_004f5fbb:; BB(0x004f5fbb);
    /* 004f5fbb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5fbe: call 0x4f9110 */ r_esp -= 4; W32(r_esp, 0x4f5fc3u); f_004f9110();
    /* 004f5fc3: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 004f5fc6: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f5fc9: jg 0x4f5fe1 */ if ((!fZ&&fS==fO)) goto L_004f5fe1;
L_004f5fcb:; BB(0x004f5fcb);
    /* 004f5fcb: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5fce: mov byte ptr [edx], 0 */ W8((u32)(r_edx), 0x0u);
    /* 004f5fd1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5fd4: call 0x4f9220 */ r_esp -= 4; W32(r_esp, 0x4f5fd9u); f_004f9220();
    /* 004f5fd9: mov ax, 0xfffd */ r_eax = (r_eax & 0xffff0000u) | ((0xfffdu) & 0xffffu);
    /* 004f5fdd: jmp 0x4f600b */ goto L_004f600b;
L_004f5fe1:; BB(0x004f5fe1);
    /* 004f5fe1: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f5fe5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5fe8: mov edx, dword ptr [ecx + 0x38] */ r_edx = R32((u32)(r_ecx+0x38u));
    /* 004f5feb: movzx eax, byte ptr [edx + eax] */ r_eax = (u32)R8((u32)(r_edx+r_eax));
    /* 004f5fef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f5ff1: je 0x4f6001 */ if (fZ) goto L_004f6001;
L_004f5ff3:; BB(0x004f5ff3);
    /* 004f5ff3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f5ff6: mov byte ptr [ecx], 0 */ W8((u32)(r_ecx), 0x0u);
    /* 004f5ff9: or ax, 0xffff */ {  u32 a = (u16)r_eax; u32 b = 0xffffu; u32 r = (a | b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f5ffd: jmp 0x4f600b */ goto L_004f600b;
L_004f6001:; BB(0x004f6001);
    /* 004f6001: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004f6005: jmp 0x4f600b */ goto L_004f600b;
L_004f6007:; BB(0x004f6007);
    /* 004f6007: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
L_004f600b:; BB(0x004f600b);
    /* 004f600b: mov esp, ebp */ r_esp = r_ebp;
    /* 004f600d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f600e: ret 4 */ FN_RET(0x004f5e80); r_esp += 8; return;
}

void f_004f6020(void) /* PokerPot::func_004f6020 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f6020);
    /* 004f6020: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f6021: mov ebp, esp */ r_ebp = r_esp;
    /* 004f6023: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f6026: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004f6027: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004f6028: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004f602b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f602e: movzx ecx, byte ptr [eax + 1] */ r_ecx = (u32)R8((u32)(r_eax+0x1u));
    /* 004f6032: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f6034: jne 0x4f604d */ if (!fZ) goto L_004f604d;
L_004f6036:; BB(0x004f6036);
    /* 004f6036: push 0x1e8 */ { u32 v = 0x1e8u; r_esp -= 4; W32(r_esp, v); }
    /* 004f603b: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f6040: push 0x6bfe6c */ { u32 v = 0x6bfe6cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f6045: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f604au); f_005e9f20();
    /* 004f604a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f604d:; BB(0x004f604d);
    /* 004f604d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f6050: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 004f6053: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f6055: jne 0x4f606e */ if (!fZ) goto L_004f606e;
L_004f6057:; BB(0x004f6057);
    /* 004f6057: push 0x1e9 */ { u32 v = 0x1e9u; r_esp -= 4; W32(r_esp, v); }
    /* 004f605c: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f6061: push 0x6c0020 */ { u32 v = 0x6c0020u; r_esp -= 4; W32(r_esp, v); }
    /* 004f6066: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f606bu); f_005e9f20();
    /* 004f606b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f606e:; BB(0x004f606e);
    /* 004f606e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f6071: call 0x4f9110 */ r_esp -= 4; W32(r_esp, 0x4f6076u); f_004f9110();
    /* 004f6076: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 004f6079: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f607c: jge 0x4f6095 */ if ((fS==fO)) goto L_004f6095;
L_004f607e:; BB(0x004f607e);
    /* 004f607e: push 0x1ea */ { u32 v = 0x1eau; r_esp -= 4; W32(r_esp, v); }
    /* 004f6083: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f6088: push 0x6bfe7c */ { u32 v = 0x6bfe7cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f608d: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f6092u); f_005e9f20();
    /* 004f6092: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f6095:; BB(0x004f6095);
    /* 004f6095: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f6099: jg 0x4f60b2 */ if ((!fZ&&fS==fO)) goto L_004f60b2;
L_004f609b:; BB(0x004f609b);
    /* 004f609b: push 0x1eb */ { u32 v = 0x1ebu; r_esp -= 4; W32(r_esp, v); }
    /* 004f60a0: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f60a5: push 0x6c0088 */ { u32 v = 0x6c0088u; r_esp -= 4; W32(r_esp, v); }
    /* 004f60aa: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f60afu); f_005e9f20();
    /* 004f60af: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f60b2:; BB(0x004f60b2);
    /* 004f60b2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f60b5: call 0x4f66e0 */ r_esp -= 4; W32(r_esp, 0x4f60bau); f_004f66e0();
    /* 004f60ba: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004f60bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f60bf: jne 0x4f60d8 */ if (!fZ) goto L_004f60d8;
L_004f60c1:; BB(0x004f60c1);
    /* 004f60c1: push 0x1ec */ { u32 v = 0x1ecu; r_esp -= 4; W32(r_esp, v); }
    /* 004f60c6: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f60cb: push 0x6c0074 */ { u32 v = 0x6c0074u; r_esp -= 4; W32(r_esp, v); }
    /* 004f60d0: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f60d5u); f_005e9f20();
    /* 004f60d5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f60d8:; BB(0x004f60d8);
    /* 004f60d8: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f60db: movsx eax, word ptr [edx + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x8u));
    /* 004f60df: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f60e2: mov edx, dword ptr [ecx + 0x4c] */ r_edx = R32((u32)(r_ecx+0x4cu));
    /* 004f60e5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f60e8: mov cx, word ptr [ecx + 0x2c] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ecx+0x2cu))) & 0xffffu);
    /* 004f60ec: mov word ptr [edx + eax*2], cx */ W16((u32)(r_edx+r_eax*2), (u16)r_ecx);
    /* 004f60f0: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f60f3: mov ax, word ptr [edx + 0x2c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x2cu))) & 0xffffu);
    /* 004f60f7: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f60fb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f60fe: mov word ptr [ecx + 0x2c], ax */ W16((u32)(r_ecx+0x2cu), (u16)r_eax);
    /* 004f6102: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f6105: movsx eax, word ptr [edx + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x8u));
    /* 004f6109: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f610c: mov edx, dword ptr [ecx + 0x5c] */ r_edx = R32((u32)(r_ecx+0x5cu));
    /* 004f610f: mov ax, word ptr [edx + eax*2] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2))) & 0xffffu);
    /* 004f6113: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f6117: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f611a: movsx edx, word ptr [ecx + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x8u));
    /* 004f611e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f6121: mov ecx, dword ptr [ecx + 0x5c] */ r_ecx = R32((u32)(r_ecx+0x5cu));
    /* 004f6124: mov word ptr [ecx + edx*2], ax */ W16((u32)(r_ecx+r_edx*2), (u16)r_eax);
    /* 004f6128: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f612b: movsx eax, word ptr [edx + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x8u));
    /* 004f612f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f6132: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 004f6135: mov ax, word ptr [edx + eax*2] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2))) & 0xffffu);
    /* 004f6139: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f613d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f6140: movsx edx, word ptr [ecx + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x8u));
    /* 004f6144: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f6147: mov ecx, dword ptr [ecx + 0x50] */ r_ecx = R32((u32)(r_ecx+0x50u));
    /* 004f614a: mov word ptr [ecx + edx*2], ax */ W16((u32)(r_ecx+r_edx*2), (u16)r_eax);
    /* 004f614e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f6151: mov ax, word ptr [edx + 0x88] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x88u))) & 0xffffu);
    /* 004f6158: sub ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f615c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f615f: mov word ptr [ecx + 0x88], ax */ W16((u32)(r_ecx+0x88u), (u16)r_eax);
    /* 004f6166: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f6169: call 0x4f67d0 */ r_esp -= 4; W32(r_esp, 0x4f616eu); f_004f67d0();
    /* 004f616e: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f6171: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f6174: add eax, dword ptr [edx + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0xcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f6177: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f617a: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 004f617d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f6180: movsx esi, word ptr [edx + 8] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+0x8u));
    /* 004f6184: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f6187: mov edi, dword ptr [eax + 0x68] */ r_edi = R32((u32)(r_eax+0x68u));
    /* 004f618a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f618d: call 0x4f67d0 */ r_esp -= 4; W32(r_esp, 0x4f6192u); f_004f67d0();
    /* 004f6192: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f6195: add eax, dword ptr [edi + esi*4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+r_esi*4)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f6198: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f619b: movsx edx, word ptr [ecx + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x8u));
    /* 004f619f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f61a2: mov ecx, dword ptr [ecx + 0x68] */ r_ecx = R32((u32)(r_ecx+0x68u));
    /* 004f61a5: mov dword ptr [ecx + edx*4], eax */ W32((u32)(r_ecx+r_edx*4), r_eax);
    /* 004f61a8: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f61ab: movsx eax, word ptr [edx + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x8u));
    /* 004f61af: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f61b2: mov edx, dword ptr [ecx + 0x68] */ r_edx = R32((u32)(r_ecx+0x68u));
    /* 004f61b5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f61b8: mov edx, dword ptr [edx + eax*4] */ r_edx = R32((u32)(r_edx+r_eax*4));
    /* 004f61bb: mov dword ptr [ecx + 0x14], edx */ W32((u32)(r_ecx+0x14u), r_edx);
    /* 004f61be: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f61c1: movsx ecx, word ptr [eax + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x8u));
    /* 004f61c5: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f61c8: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 004f61cb: mov byte ptr [ecx + eax], 1 */ W8((u32)(r_ecx+r_eax), 0x1u);
    /* 004f61cf: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f61d2: call 0x4f8f20 */ r_esp -= 4; W32(r_esp, 0x4f61d7u); f_004f8f20();
    /* 004f61d7: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 004f61db: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f61df: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004f61e1: jge 0x4f61fa */ if ((fS==fO)) goto L_004f61fa;
L_004f61e3:; BB(0x004f61e3);
    /* 004f61e3: push 0x1fa */ { u32 v = 0x1fau; r_esp -= 4; W32(r_esp, v); }
    /* 004f61e8: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f61ed: push 0x6bff84 */ { u32 v = 0x6bff84u; r_esp -= 4; W32(r_esp, v); }
    /* 004f61f2: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f61f7u); f_005e9f20();
    /* 004f61f7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f61fa:; BB(0x004f61fa);
    /* 004f61fa: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004f61fe: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f61ff: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f6200: mov esp, ebp */ r_esp = r_ebp;
    /* 004f6202: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f6203: ret 4 */ FN_RET(0x004f6020); r_esp += 8; return;
}

void f_004f62e0(void) /* PokerPot::func_004f62e0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f62e0);
    /* 004f62e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f62e1: mov ebp, esp */ r_ebp = r_esp;
    /* 004f62e3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f62e6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004f62e9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f62ec: movzx ecx, byte ptr [eax + 1] */ r_ecx = (u32)R8((u32)(r_eax+0x1u));
    /* 004f62f0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f62f2: jne 0x4f630b */ if (!fZ) goto L_004f630b;
L_004f62f4:; BB(0x004f62f4);
    /* 004f62f4: push 0x218 */ { u32 v = 0x218u; r_esp -= 4; W32(r_esp, v); }
    /* 004f62f9: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f62fe: push 0x6bfe6c */ { u32 v = 0x6bfe6cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f6303: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f6308u); f_005e9f20();
    /* 004f6308: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f630b:; BB(0x004f630b);
    /* 004f630b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f630e: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 004f6311: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f6313: jne 0x4f632c */ if (!fZ) goto L_004f632c;
L_004f6315:; BB(0x004f6315);
    /* 004f6315: push 0x219 */ { u32 v = 0x219u; r_esp -= 4; W32(r_esp, v); }
    /* 004f631a: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f631f: push 0x6c0020 */ { u32 v = 0x6c0020u; r_esp -= 4; W32(r_esp, v); }
    /* 004f6324: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f6329u); f_005e9f20();
    /* 004f6329: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f632c:; BB(0x004f632c);
    /* 004f632c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f632f: movsx ecx, word ptr [eax + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x8u));
    /* 004f6333: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f6336: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 004f6339: mov byte ptr [ecx + eax], 1 */ W8((u32)(r_ecx+r_eax), 0x1u);
    /* 004f633d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f6340: call 0x4f8f20 */ r_esp -= 4; W32(r_esp, 0x4f6345u); f_004f8f20();
    /* 004f6345: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 004f6349: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f634d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004f634f: jge 0x4f635f */ if ((fS==fO)) goto L_004f635f;
L_004f6351:; BB(0x004f6351);
    /* 004f6351: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004f6355: jmp 0x4f6411 */ goto L_004f6411;
L_004f635f:; BB(0x004f635f);
    /* 004f635f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f6362: call 0x4f91a0 */ r_esp -= 4; W32(r_esp, 0x4f6367u); f_004f91a0();
    /* 004f6367: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 004f636a: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f636d: jne 0x4f6383 */ if (!fZ) goto L_004f6383;
L_004f636f:; BB(0x004f636f);
    /* 004f636f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f6372: mov byte ptr [eax], 0 */ W8((u32)(r_eax), 0x0u);
    /* 004f6375: mov ax, 0xfffe */ r_eax = (r_eax & 0xffff0000u) | ((0xfffeu) & 0xffffu);
    /* 004f6379: jmp 0x4f6411 */ goto L_004f6411;
L_004f6383:; BB(0x004f6383);
    /* 004f6383: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f6386: call 0x4f9110 */ r_esp -= 4; W32(r_esp, 0x4f638bu); f_004f9110();
    /* 004f638b: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 004f638e: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f6391: jg 0x4f63d8 */ if ((!fZ&&fS==fO)) goto L_004f63d8;
L_004f6393:; BB(0x004f6393);
    /* 004f6393: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f6397: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f639a: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 004f639d: movzx edx, byte ptr [ecx + edx] */ r_edx = (u32)R8((u32)(r_ecx+r_edx));
    /* 004f63a1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f63a3: jne 0x4f63c2 */ if (!fZ) goto L_004f63c2;
L_004f63a5:; BB(0x004f63a5);
    /* 004f63a5: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f63a9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f63ac: mov edx, dword ptr [ecx + 0x68] */ r_edx = R32((u32)(r_ecx+0x68u));
    /* 004f63af: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f63b2: mov edx, dword ptr [edx + eax*4] */ r_edx = R32((u32)(r_edx+r_eax*4));
    /* 004f63b5: cmp edx, dword ptr [ecx + 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x14u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f63b8: je 0x4f63c2 */ if (fZ) goto L_004f63c2;
L_004f63ba:; BB(0x004f63ba);
    /* 004f63ba: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004f63be: jmp 0x4f6411 */ goto L_004f6411;
L_004f63c2:; BB(0x004f63c2);
    /* 004f63c2: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f63c5: mov byte ptr [eax], 0 */ W8((u32)(r_eax), 0x0u);
    /* 004f63c8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f63cb: call 0x4f9220 */ r_esp -= 4; W32(r_esp, 0x4f63d0u); f_004f9220();
    /* 004f63d0: mov ax, 0xfffd */ r_eax = (r_eax & 0xffff0000u) | ((0xfffdu) & 0xffffu);
    /* 004f63d4: jmp 0x4f6411 */ goto L_004f6411;
L_004f63d8:; BB(0x004f63d8);
    /* 004f63d8: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f63dc: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f63df: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 004f63e2: movzx ecx, byte ptr [eax + ecx] */ r_ecx = (u32)R8((u32)(r_eax+r_ecx));
    /* 004f63e6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f63e8: je 0x4f640d */ if (fZ) goto L_004f640d;
L_004f63ea:; BB(0x004f63ea);
    /* 004f63ea: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f63ee: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f63f1: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 004f63f4: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f63f7: mov ecx, dword ptr [ecx + edx*4] */ r_ecx = R32((u32)(r_ecx+r_edx*4));
    /* 004f63fa: cmp ecx, dword ptr [eax + 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x14u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f63fd: jne 0x4f640d */ if (!fZ) goto L_004f640d;
L_004f63ff:; BB(0x004f63ff);
    /* 004f63ff: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f6402: mov byte ptr [edx], 0 */ W8((u32)(r_edx), 0x0u);
    /* 004f6405: or ax, 0xffff */ {  u32 a = (u16)r_eax; u32 b = 0xffffu; u32 r = (a | b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f6409: jmp 0x4f6411 */ goto L_004f6411;
L_004f640d:; BB(0x004f640d);
    /* 004f640d: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
L_004f6411:; BB(0x004f6411);
    /* 004f6411: mov esp, ebp */ r_esp = r_ebp;
    /* 004f6413: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f6414: ret  */ FN_RET(0x004f62e0); r_esp += 4; return;
}

void f_004f6420(void) /* PokerPot::func_004f6420 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f6420);
    /* 004f6420: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f6421: mov ebp, esp */ r_ebp = r_esp;
    /* 004f6423: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f6424: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004f6427: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f642a: movzx ecx, byte ptr [eax + 1] */ r_ecx = (u32)R8((u32)(r_eax+0x1u));
    /* 004f642e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f6430: jne 0x4f6449 */ if (!fZ) goto L_004f6449;
L_004f6432:; BB(0x004f6432);
    /* 004f6432: push 0x23d */ { u32 v = 0x23du; r_esp -= 4; W32(r_esp, v); }
    /* 004f6437: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f643c: push 0x6bfe6c */ { u32 v = 0x6bfe6cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f6441: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f6446u); f_005e9f20();
    /* 004f6446: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f6449:; BB(0x004f6449);
    /* 004f6449: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f644c: call 0x4f9110 */ r_esp -= 4; W32(r_esp, 0x4f6451u); f_004f9110();
    /* 004f6451: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 004f6454: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f6457: jle 0x4f6470 */ if ((fZ||fS!=fO)) goto L_004f6470;
L_004f6459:; BB(0x004f6459);
    /* 004f6459: push 0x23e */ { u32 v = 0x23eu; r_esp -= 4; W32(r_esp, v); }
    /* 004f645e: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f6463: push 0x6c00b0 */ { u32 v = 0x6c00b0u; r_esp -= 4; W32(r_esp, v); }
    /* 004f6468: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f646du); f_005e9f20();
    /* 004f646d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f6470:; BB(0x004f6470);
    /* 004f6470: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6473: call 0x4f91a0 */ r_esp -= 4; W32(r_esp, 0x4f6478u); f_004f91a0();
    /* 004f6478: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 004f647b: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f647e: jg 0x4f6497 */ if ((!fZ&&fS==fO)) goto L_004f6497;
L_004f6480:; BB(0x004f6480);
    /* 004f6480: push 0x23f */ { u32 v = 0x23fu; r_esp -= 4; W32(r_esp, v); }
    /* 004f6485: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f648a: push 0x6c0098 */ { u32 v = 0x6c0098u; r_esp -= 4; W32(r_esp, v); }
    /* 004f648f: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f6494u); f_005e9f20();
    /* 004f6494: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f6497:; BB(0x004f6497);
    /* 004f6497: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f649a: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 004f649d: mov esp, ebp */ r_esp = r_ebp;
    /* 004f649f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f64a0: ret  */ FN_RET(0x004f6420); r_esp += 4; return;
}

void f_004f64b0(void) /* PokerPot::func_004f64b0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f64b0);
    /* 004f64b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f64b1: mov ebp, esp */ r_ebp = r_esp;
    /* 004f64b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f64b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004f64b7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f64ba: movzx ecx, byte ptr [eax + 1] */ r_ecx = (u32)R8((u32)(r_eax+0x1u));
    /* 004f64be: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f64c0: jne 0x4f64d9 */ if (!fZ) goto L_004f64d9;
L_004f64c2:; BB(0x004f64c2);
    /* 004f64c2: push 0x246 */ { u32 v = 0x246u; r_esp -= 4; W32(r_esp, v); }
    /* 004f64c7: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f64cc: push 0x6bfe6c */ { u32 v = 0x6bfe6cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f64d1: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f64d6u); f_005e9f20();
    /* 004f64d6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f64d9:; BB(0x004f64d9);
    /* 004f64d9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f64dc: call 0x4f9110 */ r_esp -= 4; W32(r_esp, 0x4f64e1u); f_004f9110();
    /* 004f64e1: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 004f64e4: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f64e7: jle 0x4f6500 */ if ((fZ||fS!=fO)) goto L_004f6500;
L_004f64e9:; BB(0x004f64e9);
    /* 004f64e9: push 0x247 */ { u32 v = 0x247u; r_esp -= 4; W32(r_esp, v); }
    /* 004f64ee: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f64f3: push 0x6c00b0 */ { u32 v = 0x6c00b0u; r_esp -= 4; W32(r_esp, v); }
    /* 004f64f8: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f64fdu); f_005e9f20();
    /* 004f64fd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f6500:; BB(0x004f6500);
    /* 004f6500: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6503: call 0x4f91a0 */ r_esp -= 4; W32(r_esp, 0x4f6508u); f_004f91a0();
    /* 004f6508: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 004f650b: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f650e: jg 0x4f6527 */ if ((!fZ&&fS==fO)) goto L_004f6527;
L_004f6510:; BB(0x004f6510);
    /* 004f6510: push 0x248 */ { u32 v = 0x248u; r_esp -= 4; W32(r_esp, v); }
    /* 004f6515: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f651a: push 0x6c0098 */ { u32 v = 0x6c0098u; r_esp -= 4; W32(r_esp, v); }
    /* 004f651f: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f6524u); f_005e9f20();
    /* 004f6524: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f6527:; BB(0x004f6527);
    /* 004f6527: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f652a: mov ax, word ptr [ecx + 0x20] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ecx+0x20u))) & 0xffffu);
    /* 004f652e: mov esp, ebp */ r_esp = r_ebp;
    /* 004f6530: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f6531: ret  */ FN_RET(0x004f64b0); r_esp += 4; return;
}

void f_004f6540(void) /* PokerPot::func_004f6540 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f6540);
    /* 004f6540: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f6541: mov ebp, esp */ r_ebp = r_esp;
    /* 004f6543: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f6546: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004f6549: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f654c: movzx ecx, byte ptr [eax + 1] */ r_ecx = (u32)R8((u32)(r_eax+0x1u));
    /* 004f6550: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f6552: jne 0x4f656b */ if (!fZ) goto L_004f656b;
L_004f6554:; BB(0x004f6554);
    /* 004f6554: push 0x24f */ { u32 v = 0x24fu; r_esp -= 4; W32(r_esp, v); }
    /* 004f6559: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f655e: push 0x6bfe6c */ { u32 v = 0x6bfe6cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f6563: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f6568u); f_005e9f20();
    /* 004f6568: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f656b:; BB(0x004f656b);
    /* 004f656b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f656e: call 0x4f91a0 */ r_esp -= 4; W32(r_esp, 0x4f6573u); f_004f91a0();
    /* 004f6573: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 004f6576: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f6579: je 0x4f6592 */ if (fZ) goto L_004f6592;
L_004f657b:; BB(0x004f657b);
    /* 004f657b: push 0x250 */ { u32 v = 0x250u; r_esp -= 4; W32(r_esp, v); }
    /* 004f6580: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f6585: push 0x6c00cc */ { u32 v = 0x6c00ccu; r_esp -= 4; W32(r_esp, v); }
    /* 004f658a: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f658fu); f_005e9f20();
    /* 004f658f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f6592:; BB(0x004f6592);
    /* 004f6592: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f6595: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 004f6598: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f659a: je 0x4f65b3 */ if (fZ) goto L_004f65b3;
L_004f659c:; BB(0x004f659c);
    /* 004f659c: push 0x251 */ { u32 v = 0x251u; r_esp -= 4; W32(r_esp, v); }
    /* 004f65a1: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f65a6: push 0x6bfe50 */ { u32 v = 0x6bfe50u; r_esp -= 4; W32(r_esp, v); }
    /* 004f65ab: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f65b0u); f_005e9f20();
    /* 004f65b0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f65b3:; BB(0x004f65b3);
    /* 004f65b3: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f65b6: movzx eax, byte ptr [edx + 2] */ r_eax = (u32)R8((u32)(r_edx+0x2u));
    /* 004f65ba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f65bc: je 0x4f65d5 */ if (fZ) goto L_004f65d5;
L_004f65be:; BB(0x004f65be);
    /* 004f65be: push 0x252 */ { u32 v = 0x252u; r_esp -= 4; W32(r_esp, v); }
    /* 004f65c3: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f65c8: push 0x6bfe38 */ { u32 v = 0x6bfe38u; r_esp -= 4; W32(r_esp, v); }
    /* 004f65cd: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f65d2u); f_005e9f20();
    /* 004f65d2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f65d5:; BB(0x004f65d5);
    /* 004f65d5: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004f65db: jmp 0x4f65e9 */ goto L_004f65e9;
L_004f65dd:; BB(0x004f65dd);
    /* 004f65dd: mov dx, word ptr [ebp - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004f65e1: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f65e5: mov word ptr [ebp - 4], dx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_edx);
L_004f65e9:; BB(0x004f65e9);
    /* 004f65e9: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f65ed: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f65f0: movsx edx, word ptr [ecx + 6] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x6u));
    /* 004f65f4: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f65f6: jge 0x4f6612 */ if ((fS==fO)) goto L_004f6612;
L_004f65f8:; BB(0x004f65f8);
    /* 004f65f8: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f65fc: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f65ff: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 004f6602: movzx eax, byte ptr [edx + eax] */ r_eax = (u32)R8((u32)(r_edx+r_eax));
    /* 004f6606: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f6608: jne 0x4f6610 */ if (!fZ) goto L_004f6610;
L_004f660a:; BB(0x004f660a);
    /* 004f660a: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004f660e: jmp 0x4f6631 */ goto L_004f6631;
L_004f6610:; BB(0x004f6610);
    /* 004f6610: jmp 0x4f65dd */ goto L_004f65dd;
L_004f6612:; BB(0x004f6612);
    /* 004f6612: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 004f6614: jne 0x4f662d */ if (!fZ) goto L_004f662d;
L_004f6616:; BB(0x004f6616);
    /* 004f6616: push 0x25a */ { u32 v = 0x25au; r_esp -= 4; W32(r_esp, v); }
    /* 004f661b: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f6620: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 004f6625: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f662au); f_005e9f20();
    /* 004f662a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f662d:; BB(0x004f662d);
    /* 004f662d: or ax, 0xffff */ {  u32 a = (u16)r_eax; u32 b = 0xffffu; u32 r = (a | b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
L_004f6631:; BB(0x004f6631);
    /* 004f6631: mov esp, ebp */ r_esp = r_ebp;
    /* 004f6633: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f6634: ret  */ FN_RET(0x004f6540); r_esp += 4; return;
}

void f_004f6640(void) /* PokerPot::func_004f6640 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f6640);
    /* 004f6640: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f6641: mov ebp, esp */ r_ebp = r_esp;
    /* 004f6643: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f6644: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004f6647: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f664a: movzx ecx, byte ptr [eax + 1] */ r_ecx = (u32)R8((u32)(r_eax+0x1u));
    /* 004f664e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f6650: jne 0x4f6669 */ if (!fZ) goto L_004f6669;
L_004f6652:; BB(0x004f6652);
    /* 004f6652: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 004f6657: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f665c: push 0x6bfe6c */ { u32 v = 0x6bfe6cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f6661: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f6666u); f_005e9f20();
    /* 004f6666: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f6669:; BB(0x004f6669);
    /* 004f6669: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f666c: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 004f666f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f6671: jne 0x4f6677 */ if (!fZ) goto L_004f6677;
L_004f6673:; BB(0x004f6673);
    /* 004f6673: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004f6675: jmp 0x4f668b */ goto L_004f668b;
L_004f6677:; BB(0x004f6677);
    /* 004f6677: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f667a: call 0x4f67d0 */ r_esp -= 4; W32(r_esp, 0x4f667fu); f_004f67d0();
    /* 004f667f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f6681: jne 0x4f6689 */ if (!fZ) goto L_004f6689;
L_004f6683:; BB(0x004f6683);
    /* 004f6683: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 004f6685: jmp 0x4f668b */ goto L_004f668b;
L_004f6689:; BB(0x004f6689);
    /* 004f6689: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_004f668b:; BB(0x004f668b);
    /* 004f668b: mov esp, ebp */ r_esp = r_ebp;
    /* 004f668d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f668e: ret  */ FN_RET(0x004f6640); r_esp += 4; return;
}

void f_004f6690(void) /* PokerPot::func_004f6690 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f6690);
    /* 004f6690: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f6691: mov ebp, esp */ r_ebp = r_esp;
    /* 004f6693: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f6694: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004f6697: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f669a: movzx ecx, byte ptr [eax + 1] */ r_ecx = (u32)R8((u32)(r_eax+0x1u));
    /* 004f669e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f66a0: jne 0x4f66b9 */ if (!fZ) goto L_004f66b9;
L_004f66a2:; BB(0x004f66a2);
    /* 004f66a2: push 0x26d */ { u32 v = 0x26du; r_esp -= 4; W32(r_esp, v); }
    /* 004f66a7: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f66ac: push 0x6bfe6c */ { u32 v = 0x6bfe6cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f66b1: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f66b6u); f_005e9f20();
    /* 004f66b6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f66b9:; BB(0x004f66b9);
    /* 004f66b9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f66bc: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 004f66bf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f66c1: jne 0x4f66c7 */ if (!fZ) goto L_004f66c7;
L_004f66c3:; BB(0x004f66c3);
    /* 004f66c3: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004f66c5: jmp 0x4f66db */ goto L_004f66db;
L_004f66c7:; BB(0x004f66c7);
    /* 004f66c7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f66ca: call 0x4f67d0 */ r_esp -= 4; W32(r_esp, 0x4f66cfu); f_004f67d0();
    /* 004f66cf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f66d1: jle 0x4f66d9 */ if ((fZ||fS!=fO)) goto L_004f66d9;
L_004f66d3:; BB(0x004f66d3);
    /* 004f66d3: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 004f66d5: jmp 0x4f66db */ goto L_004f66db;
L_004f66d9:; BB(0x004f66d9);
    /* 004f66d9: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_004f66db:; BB(0x004f66db);
    /* 004f66db: mov esp, ebp */ r_esp = r_ebp;
    /* 004f66dd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f66de: ret  */ FN_RET(0x004f6690); r_esp += 4; return;
}

void f_004f66e0(void) /* PokerPot::func_004f66e0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f66e0);
    /* 004f66e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f66e1: mov ebp, esp */ r_ebp = r_esp;
    /* 004f66e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f66e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004f66e7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f66ea: movzx ecx, byte ptr [eax + 1] */ r_ecx = (u32)R8((u32)(r_eax+0x1u));
    /* 004f66ee: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f66f0: jne 0x4f6709 */ if (!fZ) goto L_004f6709;
L_004f66f2:; BB(0x004f66f2);
    /* 004f66f2: push 0x27a */ { u32 v = 0x27au; r_esp -= 4; W32(r_esp, v); }
    /* 004f66f7: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f66fc: push 0x6bfe6c */ { u32 v = 0x6bfe6cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f6701: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f6706u); f_005e9f20();
    /* 004f6706: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f6709:; BB(0x004f6709);
    /* 004f6709: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f670c: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 004f670f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f6711: jne 0x4f671a */ if (!fZ) goto L_004f671a;
L_004f6713:; BB(0x004f6713);
    /* 004f6713: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004f6715: jmp 0x4f67c3 */ goto L_004f67c3;
L_004f671a:; BB(0x004f671a);
    /* 004f671a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f671d: call 0x4f6690 */ r_esp -= 4; W32(r_esp, 0x4f6722u); f_004f6690();
    /* 004f6722: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004f6725: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f6727: jne 0x4f6735 */ if (!fZ) goto L_004f6735;
L_004f6729:; BB(0x004f6729);
    /* 004f6729: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004f672b: jmp 0x4f67c3 */ goto L_004f67c3;
L_004f6735:; BB(0x004f6735);
    /* 004f6735: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 004f673b: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x4f6740u); f_005da7b0();
    /* 004f6740: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004f6743: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f6745: jne 0x4f6787 */ if (!fZ) goto L_004f6787;
L_004f6747:; BB(0x004f6747);
    /* 004f6747: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f674a: movsx edx, word ptr [ecx + 0x88] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x88u));
    /* 004f6751: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f6753: jne 0x4f676b */ if (!fZ) goto L_004f676b;
L_004f6755:; BB(0x004f6755);
    /* 004f6755: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6758: call 0x4f9110 */ r_esp -= 4; W32(r_esp, 0x4f675du); f_004f9110();
    /* 004f675d: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 004f6760: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f6763: jle 0x4f676b */ if ((fZ||fS!=fO)) goto L_004f676b;
L_004f6765:; BB(0x004f6765);
    /* 004f6765: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004f6767: jmp 0x4f67c3 */ goto L_004f67c3;
L_004f676b:; BB(0x004f676b);
    /* 004f676b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f676e: call 0x4f9110 */ r_esp -= 4; W32(r_esp, 0x4f6773u); f_004f9110();
    /* 004f6773: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 004f6776: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f6779: jne 0x4f6781 */ if (!fZ) goto L_004f6781;
L_004f677b:; BB(0x004f677b);
    /* 004f677b: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004f677d: jmp 0x4f67c3 */ goto L_004f67c3;
L_004f6781:; BB(0x004f6781);
    /* 004f6781: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 004f6783: jmp 0x4f67c3 */ goto L_004f67c3;
L_004f6787:; BB(0x004f6787);
    /* 004f6787: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f678a: movsx eax, word ptr [edx + 0x88] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x88u));
    /* 004f6791: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f6793: jne 0x4f67ab */ if (!fZ) goto L_004f67ab;
L_004f6795:; BB(0x004f6795);
    /* 004f6795: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6798: call 0x4f9110 */ r_esp -= 4; W32(r_esp, 0x4f679du); f_004f9110();
    /* 004f679d: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 004f67a0: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f67a3: jl 0x4f67ab */ if ((fS!=fO)) goto L_004f67ab;
L_004f67a5:; BB(0x004f67a5);
    /* 004f67a5: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004f67a7: jmp 0x4f67c3 */ goto L_004f67c3;
L_004f67ab:; BB(0x004f67ab);
    /* 004f67ab: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f67ae: call 0x4f9110 */ r_esp -= 4; W32(r_esp, 0x4f67b3u); f_004f9110();
    /* 004f67b3: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 004f67b6: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f67b9: jne 0x4f67c1 */ if (!fZ) goto L_004f67c1;
L_004f67bb:; BB(0x004f67bb);
    /* 004f67bb: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004f67bd: jmp 0x4f67c3 */ goto L_004f67c3;
L_004f67c1:; BB(0x004f67c1);
    /* 004f67c1: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_004f67c3:; BB(0x004f67c3);
    /* 004f67c3: mov esp, ebp */ r_esp = r_ebp;
    /* 004f67c5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f67c6: ret  */ FN_RET(0x004f66e0); r_esp += 4; return;
}

void f_004f67d0(void) /* PokerPot::func_004f67d0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f67d0);
    /* 004f67d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f67d1: mov ebp, esp */ r_ebp = r_esp;
    /* 004f67d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f67d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004f67d7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f67da: movzx ecx, byte ptr [eax + 1] */ r_ecx = (u32)R8((u32)(r_eax+0x1u));
    /* 004f67de: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f67e0: jne 0x4f67f9 */ if (!fZ) goto L_004f67f9;
L_004f67e2:; BB(0x004f67e2);
    /* 004f67e2: push 0x2a1 */ { u32 v = 0x2a1u; r_esp -= 4; W32(r_esp, v); }
    /* 004f67e7: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f67ec: push 0x6bfe6c */ { u32 v = 0x6bfe6cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f67f1: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f67f6u); f_005e9f20();
    /* 004f67f6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f67f9:; BB(0x004f67f9);
    /* 004f67f9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f67fc: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 004f67ff: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f6801: jne 0x4f681a */ if (!fZ) goto L_004f681a;
L_004f6803:; BB(0x004f6803);
    /* 004f6803: push 0x2a2 */ { u32 v = 0x2a2u; r_esp -= 4; W32(r_esp, v); }
    /* 004f6808: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f680d: push 0x6c0020 */ { u32 v = 0x6c0020u; r_esp -= 4; W32(r_esp, v); }
    /* 004f6812: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f6817u); f_005e9f20();
    /* 004f6817: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f681a:; BB(0x004f681a);
    /* 004f681a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f681d: movsx ecx, word ptr [eax + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x8u));
    /* 004f6821: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6824: mov eax, dword ptr [edx + 0x68] */ r_eax = R32((u32)(r_edx+0x68u));
    /* 004f6827: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f682a: mov edx, dword ptr [edx + 0x14] */ r_edx = R32((u32)(r_edx+0x14u));
    /* 004f682d: sub edx, dword ptr [eax + ecx*4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+r_ecx*4)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004f6830: mov eax, edx */ r_eax = r_edx;
    /* 004f6832: mov esp, ebp */ r_esp = r_ebp;
    /* 004f6834: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f6835: ret  */ FN_RET(0x004f67d0); r_esp += 4; return;
}

void f_004f6840(void) /* PokerPot::func_004f6840 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f6840);
    /* 004f6840: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f6841: mov ebp, esp */ r_ebp = r_esp;
    /* 004f6843: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f6844: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004f6847: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f684a: movzx ecx, byte ptr [eax + 1] */ r_ecx = (u32)R8((u32)(r_eax+0x1u));
    /* 004f684e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f6850: jne 0x4f6869 */ if (!fZ) goto L_004f6869;
L_004f6852:; BB(0x004f6852);
    /* 004f6852: push 0x2a9 */ { u32 v = 0x2a9u; r_esp -= 4; W32(r_esp, v); }
    /* 004f6857: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f685c: push 0x6bfe6c */ { u32 v = 0x6bfe6cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f6861: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f6866u); f_005e9f20();
    /* 004f6866: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f6869:; BB(0x004f6869);
    /* 004f6869: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f686c: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 004f686f: mov esp, ebp */ r_esp = r_ebp;
    /* 004f6871: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f6872: ret  */ FN_RET(0x004f6840); r_esp += 4; return;
}

void f_004f6880(void) /* PokerPot::func_004f6880 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f6880);
    /* 004f6880: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f6881: mov ebp, esp */ r_ebp = r_esp;
    /* 004f6883: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f6884: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004f6887: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f688a: movzx ecx, byte ptr [eax + 1] */ r_ecx = (u32)R8((u32)(r_eax+0x1u));
    /* 004f688e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f6890: jne 0x4f68a9 */ if (!fZ) goto L_004f68a9;
L_004f6892:; BB(0x004f6892);
    /* 004f6892: push 0x2b2 */ { u32 v = 0x2b2u; r_esp -= 4; W32(r_esp, v); }
    /* 004f6897: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f689c: push 0x6bfe6c */ { u32 v = 0x6bfe6cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f68a1: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f68a6u); f_005e9f20();
    /* 004f68a6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f68a9:; BB(0x004f68a9);
    /* 004f68a9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f68ac: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 004f68af: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f68b1: jne 0x4f68ca */ if (!fZ) goto L_004f68ca;
L_004f68b3:; BB(0x004f68b3);
    /* 004f68b3: push 0x2b3 */ { u32 v = 0x2b3u; r_esp -= 4; W32(r_esp, v); }
    /* 004f68b8: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f68bd: push 0x6c0020 */ { u32 v = 0x6c0020u; r_esp -= 4; W32(r_esp, v); }
    /* 004f68c2: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f68c7u); f_005e9f20();
    /* 004f68c7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f68ca:; BB(0x004f68ca);
    /* 004f68ca: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f68ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004f68d0: jge 0x4f68e9 */ if ((fS==fO)) goto L_004f68e9;
L_004f68d2:; BB(0x004f68d2);
    /* 004f68d2: push 0x2b4 */ { u32 v = 0x2b4u; r_esp -= 4; W32(r_esp, v); }
    /* 004f68d7: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f68dc: push 0x6c0100 */ { u32 v = 0x6c0100u; r_esp -= 4; W32(r_esp, v); }
    /* 004f68e1: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f68e6u); f_005e9f20();
    /* 004f68e6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f68e9:; BB(0x004f68e9);
    /* 004f68e9: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f68ed: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f68f0: movsx ecx, word ptr [eax + 6] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x6u));
    /* 004f68f4: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f68f6: jl 0x4f690f */ if ((fS!=fO)) goto L_004f690f;
L_004f68f8:; BB(0x004f68f8);
    /* 004f68f8: push 0x2b5 */ { u32 v = 0x2b5u; r_esp -= 4; W32(r_esp, v); }
    /* 004f68fd: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f6902: push 0x6c00e4 */ { u32 v = 0x6c00e4u; r_esp -= 4; W32(r_esp, v); }
    /* 004f6907: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f690cu); f_005e9f20();
    /* 004f690c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f690f:; BB(0x004f690f);
    /* 004f690f: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f6913: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6916: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 004f6919: mov ax, word ptr [edx + eax*2] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2))) & 0xffffu);
    /* 004f691d: mov esp, ebp */ r_esp = r_ebp;
    /* 004f691f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f6920: ret 4 */ FN_RET(0x004f6880); r_esp += 8; return;
}

void f_004f6930(void) /* PokerPot::func_004f6930 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f6930);
    /* 004f6930: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f6931: mov ebp, esp */ r_ebp = r_esp;
    /* 004f6933: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f6934: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004f6937: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f693a: movzx ecx, byte ptr [eax + 1] */ r_ecx = (u32)R8((u32)(r_eax+0x1u));
    /* 004f693e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f6940: jne 0x4f6959 */ if (!fZ) goto L_004f6959;
L_004f6942:; BB(0x004f6942);
    /* 004f6942: push 0x2be */ { u32 v = 0x2beu; r_esp -= 4; W32(r_esp, v); }
    /* 004f6947: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f694c: push 0x6bfe6c */ { u32 v = 0x6bfe6cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f6951: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f6956u); f_005e9f20();
    /* 004f6956: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f6959:; BB(0x004f6959);
    /* 004f6959: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f695c: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 004f695f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f6961: jne 0x4f697a */ if (!fZ) goto L_004f697a;
L_004f6963:; BB(0x004f6963);
    /* 004f6963: push 0x2bf */ { u32 v = 0x2bfu; r_esp -= 4; W32(r_esp, v); }
    /* 004f6968: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f696d: push 0x6c0020 */ { u32 v = 0x6c0020u; r_esp -= 4; W32(r_esp, v); }
    /* 004f6972: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f6977u); f_005e9f20();
    /* 004f6977: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f697a:; BB(0x004f697a);
    /* 004f697a: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f697e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004f6980: jge 0x4f6999 */ if ((fS==fO)) goto L_004f6999;
L_004f6982:; BB(0x004f6982);
    /* 004f6982: push 0x2c0 */ { u32 v = 0x2c0u; r_esp -= 4; W32(r_esp, v); }
    /* 004f6987: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f698c: push 0x6c0100 */ { u32 v = 0x6c0100u; r_esp -= 4; W32(r_esp, v); }
    /* 004f6991: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f6996u); f_005e9f20();
    /* 004f6996: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f6999:; BB(0x004f6999);
    /* 004f6999: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f699d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f69a0: movsx ecx, word ptr [eax + 6] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x6u));
    /* 004f69a4: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f69a6: jl 0x4f69bf */ if ((fS!=fO)) goto L_004f69bf;
L_004f69a8:; BB(0x004f69a8);
    /* 004f69a8: push 0x2c1 */ { u32 v = 0x2c1u; r_esp -= 4; W32(r_esp, v); }
    /* 004f69ad: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f69b2: push 0x6c00e4 */ { u32 v = 0x6c00e4u; r_esp -= 4; W32(r_esp, v); }
    /* 004f69b7: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f69bcu); f_005e9f20();
    /* 004f69bc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f69bf:; BB(0x004f69bf);
    /* 004f69bf: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f69c3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f69c6: mov edx, dword ptr [ecx + 0x54] */ r_edx = R32((u32)(r_ecx+0x54u));
    /* 004f69c9: mov ax, word ptr [edx + eax*2] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2))) & 0xffffu);
    /* 004f69cd: mov esp, ebp */ r_esp = r_ebp;
    /* 004f69cf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f69d0: ret 4 */ FN_RET(0x004f6930); r_esp += 8; return;
}

void f_004f69e0(void) /* PokerPot::func_004f69e0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f69e0);
    /* 004f69e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f69e1: mov ebp, esp */ r_ebp = r_esp;
    /* 004f69e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f69e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004f69e7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f69ea: movzx ecx, byte ptr [eax + 1] */ r_ecx = (u32)R8((u32)(r_eax+0x1u));
    /* 004f69ee: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f69f0: jne 0x4f6a09 */ if (!fZ) goto L_004f6a09;
L_004f69f2:; BB(0x004f69f2);
    /* 004f69f2: push 0x2ca */ { u32 v = 0x2cau; r_esp -= 4; W32(r_esp, v); }
    /* 004f69f7: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f69fc: push 0x6bfe6c */ { u32 v = 0x6bfe6cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f6a01: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f6a06u); f_005e9f20();
    /* 004f6a06: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f6a09:; BB(0x004f6a09);
    /* 004f6a09: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6a0c: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 004f6a0f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f6a11: jne 0x4f6a2a */ if (!fZ) goto L_004f6a2a;
L_004f6a13:; BB(0x004f6a13);
    /* 004f6a13: push 0x2cb */ { u32 v = 0x2cbu; r_esp -= 4; W32(r_esp, v); }
    /* 004f6a18: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f6a1d: push 0x6c0020 */ { u32 v = 0x6c0020u; r_esp -= 4; W32(r_esp, v); }
    /* 004f6a22: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f6a27u); f_005e9f20();
    /* 004f6a27: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f6a2a:; BB(0x004f6a2a);
    /* 004f6a2a: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f6a2e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004f6a30: jge 0x4f6a49 */ if ((fS==fO)) goto L_004f6a49;
L_004f6a32:; BB(0x004f6a32);
    /* 004f6a32: push 0x2cc */ { u32 v = 0x2ccu; r_esp -= 4; W32(r_esp, v); }
    /* 004f6a37: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f6a3c: push 0x6c0100 */ { u32 v = 0x6c0100u; r_esp -= 4; W32(r_esp, v); }
    /* 004f6a41: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f6a46u); f_005e9f20();
    /* 004f6a46: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f6a49:; BB(0x004f6a49);
    /* 004f6a49: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f6a4d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6a50: movsx ecx, word ptr [eax + 6] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x6u));
    /* 004f6a54: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f6a56: jl 0x4f6a6f */ if ((fS!=fO)) goto L_004f6a6f;
L_004f6a58:; BB(0x004f6a58);
    /* 004f6a58: push 0x2cd */ { u32 v = 0x2cdu; r_esp -= 4; W32(r_esp, v); }
    /* 004f6a5d: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f6a62: push 0x6c00e4 */ { u32 v = 0x6c00e4u; r_esp -= 4; W32(r_esp, v); }
    /* 004f6a67: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f6a6cu); f_005e9f20();
    /* 004f6a6c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f6a6f:; BB(0x004f6a6f);
    /* 004f6a6f: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f6a73: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6a76: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 004f6a79: mov ax, word ptr [edx + eax*2] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2))) & 0xffffu);
    /* 004f6a7d: mov esp, ebp */ r_esp = r_ebp;
    /* 004f6a7f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f6a80: ret 4 */ FN_RET(0x004f69e0); r_esp += 8; return;
}

void f_004f6a90(void) /* PokerPot::func_004f6a90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f6a90);
    /* 004f6a90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f6a91: mov ebp, esp */ r_ebp = r_esp;
    /* 004f6a93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f6a94: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004f6a97: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6a9a: movzx ecx, byte ptr [eax + 1] */ r_ecx = (u32)R8((u32)(r_eax+0x1u));
    /* 004f6a9e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f6aa0: jne 0x4f6ab9 */ if (!fZ) goto L_004f6ab9;
L_004f6aa2:; BB(0x004f6aa2);
    /* 004f6aa2: push 0x2d6 */ { u32 v = 0x2d6u; r_esp -= 4; W32(r_esp, v); }
    /* 004f6aa7: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f6aac: push 0x6bfe6c */ { u32 v = 0x6bfe6cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f6ab1: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f6ab6u); f_005e9f20();
    /* 004f6ab6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f6ab9:; BB(0x004f6ab9);
    /* 004f6ab9: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f6abd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004f6abf: jge 0x4f6ad8 */ if ((fS==fO)) goto L_004f6ad8;
L_004f6ac1:; BB(0x004f6ac1);
    /* 004f6ac1: push 0x2d7 */ { u32 v = 0x2d7u; r_esp -= 4; W32(r_esp, v); }
    /* 004f6ac6: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f6acb: push 0x6c0100 */ { u32 v = 0x6c0100u; r_esp -= 4; W32(r_esp, v); }
    /* 004f6ad0: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f6ad5u); f_005e9f20();
    /* 004f6ad5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f6ad8:; BB(0x004f6ad8);
    /* 004f6ad8: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f6adc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6adf: movsx ecx, word ptr [eax + 6] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x6u));
    /* 004f6ae3: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f6ae5: jl 0x4f6afe */ if ((fS!=fO)) goto L_004f6afe;
L_004f6ae7:; BB(0x004f6ae7);
    /* 004f6ae7: push 0x2d8 */ { u32 v = 0x2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004f6aec: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f6af1: push 0x6c00e4 */ { u32 v = 0x6c00e4u; r_esp -= 4; W32(r_esp, v); }
    /* 004f6af6: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f6afbu); f_005e9f20();
    /* 004f6afb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f6afe:; BB(0x004f6afe);
    /* 004f6afe: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f6b02: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6b05: mov edx, dword ptr [ecx + 0x5c] */ r_edx = R32((u32)(r_ecx+0x5cu));
    /* 004f6b08: mov ax, word ptr [edx + eax*2] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2))) & 0xffffu);
    /* 004f6b0c: mov esp, ebp */ r_esp = r_ebp;
    /* 004f6b0e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f6b0f: ret 4 */ FN_RET(0x004f6a90); r_esp += 8; return;
}

void f_004f6b20(void) /* PokerPot::func_004f6b20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f6b20);
    /* 004f6b20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f6b21: mov ebp, esp */ r_ebp = r_esp;
    /* 004f6b23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f6b24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004f6b27: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6b2a: movzx ecx, byte ptr [eax + 1] */ r_ecx = (u32)R8((u32)(r_eax+0x1u));
    /* 004f6b2e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f6b30: jne 0x4f6b49 */ if (!fZ) goto L_004f6b49;
L_004f6b32:; BB(0x004f6b32);
    /* 004f6b32: push 0x2e1 */ { u32 v = 0x2e1u; r_esp -= 4; W32(r_esp, v); }
    /* 004f6b37: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f6b3c: push 0x6bfe6c */ { u32 v = 0x6bfe6cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f6b41: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f6b46u); f_005e9f20();
    /* 004f6b46: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f6b49:; BB(0x004f6b49);
    /* 004f6b49: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f6b4d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004f6b4f: jge 0x4f6b68 */ if ((fS==fO)) goto L_004f6b68;
L_004f6b51:; BB(0x004f6b51);
    /* 004f6b51: push 0x2e2 */ { u32 v = 0x2e2u; r_esp -= 4; W32(r_esp, v); }
    /* 004f6b56: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f6b5b: push 0x6c0100 */ { u32 v = 0x6c0100u; r_esp -= 4; W32(r_esp, v); }
    /* 004f6b60: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f6b65u); f_005e9f20();
    /* 004f6b65: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f6b68:; BB(0x004f6b68);
    /* 004f6b68: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f6b6c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6b6f: movsx ecx, word ptr [eax + 6] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x6u));
    /* 004f6b73: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f6b75: jl 0x4f6b8e */ if ((fS!=fO)) goto L_004f6b8e;
L_004f6b77:; BB(0x004f6b77);
    /* 004f6b77: push 0x2e3 */ { u32 v = 0x2e3u; r_esp -= 4; W32(r_esp, v); }
    /* 004f6b7c: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f6b81: push 0x6c00e4 */ { u32 v = 0x6c00e4u; r_esp -= 4; W32(r_esp, v); }
    /* 004f6b86: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f6b8bu); f_005e9f20();
    /* 004f6b8b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f6b8e:; BB(0x004f6b8e);
    /* 004f6b8e: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f6b92: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6b95: mov edx, dword ptr [ecx + 0x60] */ r_edx = R32((u32)(r_ecx+0x60u));
    /* 004f6b98: mov ax, word ptr [edx + eax*2] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2))) & 0xffffu);
    /* 004f6b9c: mov esp, ebp */ r_esp = r_ebp;
    /* 004f6b9e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f6b9f: ret 4 */ FN_RET(0x004f6b20); r_esp += 8; return;
}

void f_004f6bb0(void) /* PokerPot::func_004f6bb0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f6bb0);
    /* 004f6bb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f6bb1: mov ebp, esp */ r_ebp = r_esp;
    /* 004f6bb3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f6bb4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004f6bb7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6bba: movzx ecx, byte ptr [eax + 1] */ r_ecx = (u32)R8((u32)(r_eax+0x1u));
    /* 004f6bbe: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f6bc0: jne 0x4f6bd9 */ if (!fZ) goto L_004f6bd9;
L_004f6bc2:; BB(0x004f6bc2);
    /* 004f6bc2: push 0x2ec */ { u32 v = 0x2ecu; r_esp -= 4; W32(r_esp, v); }
    /* 004f6bc7: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f6bcc: push 0x6bfe6c */ { u32 v = 0x6bfe6cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f6bd1: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f6bd6u); f_005e9f20();
    /* 004f6bd6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f6bd9:; BB(0x004f6bd9);
    /* 004f6bd9: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f6bdd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004f6bdf: jge 0x4f6bf8 */ if ((fS==fO)) goto L_004f6bf8;
L_004f6be1:; BB(0x004f6be1);
    /* 004f6be1: push 0x2ed */ { u32 v = 0x2edu; r_esp -= 4; W32(r_esp, v); }
    /* 004f6be6: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f6beb: push 0x6c0100 */ { u32 v = 0x6c0100u; r_esp -= 4; W32(r_esp, v); }
    /* 004f6bf0: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f6bf5u); f_005e9f20();
    /* 004f6bf5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f6bf8:; BB(0x004f6bf8);
    /* 004f6bf8: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f6bfc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6bff: movsx ecx, word ptr [eax + 6] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x6u));
    /* 004f6c03: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f6c05: jl 0x4f6c1e */ if ((fS!=fO)) goto L_004f6c1e;
L_004f6c07:; BB(0x004f6c07);
    /* 004f6c07: push 0x2ee */ { u32 v = 0x2eeu; r_esp -= 4; W32(r_esp, v); }
    /* 004f6c0c: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f6c11: push 0x6c00e4 */ { u32 v = 0x6c00e4u; r_esp -= 4; W32(r_esp, v); }
    /* 004f6c16: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f6c1bu); f_005e9f20();
    /* 004f6c1b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f6c1e:; BB(0x004f6c1e);
    /* 004f6c1e: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f6c22: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f6c25: mov edx, dword ptr [ecx + 0x64] */ r_edx = R32((u32)(r_ecx+0x64u));
    /* 004f6c28: mov ax, word ptr [edx + eax*2] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2))) & 0xffffu);
    /* 004f6c2c: mov esp, ebp */ r_esp = r_ebp;
    /* 004f6c2e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f6c2f: ret 4 */ FN_RET(0x004f6bb0); r_esp += 8; return;
}

void f_004f6c80(void) /* PokerPot::func_004f6c80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f6c80);
    /* 004f6c80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f6c81: mov ebp, esp */ r_ebp = r_esp;
    /* 004f6c83: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f6c86: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004f6c89: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f6c8c: movzx ecx, byte ptr [eax + 1] */ r_ecx = (u32)R8((u32)(r_eax+0x1u));
    /* 004f6c90: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f6c92: jne 0x4f6cab */ if (!fZ) goto L_004f6cab;
L_004f6c94:; BB(0x004f6c94);
    /* 004f6c94: push 0x2fd */ { u32 v = 0x2fdu; r_esp -= 4; W32(r_esp, v); }
    /* 004f6c99: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f6c9e: push 0x6bfe6c */ { u32 v = 0x6bfe6cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f6ca3: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f6ca8u); f_005e9f20();
    /* 004f6ca8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f6cab:; BB(0x004f6cab);
    /* 004f6cab: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f6cae: movzx ecx, byte ptr [eax + 2] */ r_ecx = (u32)R8((u32)(r_eax+0x2u));
    /* 004f6cb2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f6cb4: je 0x4f6ccd */ if (fZ) goto L_004f6ccd;
L_004f6cb6:; BB(0x004f6cb6);
    /* 004f6cb6: push 0x2fe */ { u32 v = 0x2feu; r_esp -= 4; W32(r_esp, v); }
    /* 004f6cbb: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f6cc0: push 0x6bfe38 */ { u32 v = 0x6bfe38u; r_esp -= 4; W32(r_esp, v); }
    /* 004f6cc5: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f6ccau); f_005e9f20();
    /* 004f6cca: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f6ccd:; BB(0x004f6ccd);
    /* 004f6ccd: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f6cd0: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 004f6cd3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f6cd5: je 0x4f6cee */ if (fZ) goto L_004f6cee;
L_004f6cd7:; BB(0x004f6cd7);
    /* 004f6cd7: push 0x2ff */ { u32 v = 0x2ffu; r_esp -= 4; W32(r_esp, v); }
    /* 004f6cdc: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f6ce1: push 0x6bfe50 */ { u32 v = 0x6bfe50u; r_esp -= 4; W32(r_esp, v); }
    /* 004f6ce6: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f6cebu); f_005e9f20();
    /* 004f6ceb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f6cee:; BB(0x004f6cee);
    /* 004f6cee: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f6cf1: mov dword ptr [eax + 0x24], 0 */ W32((u32)(r_eax+0x24u), 0x0u);
    /* 004f6cf8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f6cfb: mov dword ptr [ecx + 0x28], 0 */ W32((u32)(r_ecx+0x28u), 0x0u);
    /* 004f6d02: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004f6d08: jmp 0x4f6d16 */ goto L_004f6d16;
L_004f6d0a:; BB(0x004f6d0a);
    /* 004f6d0a: mov dx, word ptr [ebp - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004f6d0e: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f6d12: mov word ptr [ebp - 4], dx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_edx);
L_004f6d16:; BB(0x004f6d16);
    /* 004f6d16: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f6d1a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f6d1d: movsx edx, word ptr [ecx + 6] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x6u));
    /* 004f6d21: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f6d23: jge 0x4f6ddf */ if ((fS==fO)) goto L_004f6ddf;
L_004f6d29:; BB(0x004f6d29);
    /* 004f6d29: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f6d2d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f6d30: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 004f6d33: movzx eax, byte ptr [edx + eax] */ r_eax = (u32)R8((u32)(r_edx+r_eax));
    /* 004f6d37: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f6d39: jne 0x4f6d78 */ if (!fZ) goto L_004f6d78;
L_004f6d3b:; BB(0x004f6d3b);
    /* 004f6d3b: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f6d3f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f6d42: mov eax, dword ptr [edx + 0x68] */ r_eax = R32((u32)(r_edx+0x68u));
    /* 004f6d45: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f6d48: mov eax, dword ptr [eax + ecx*4] */ r_eax = R32((u32)(r_eax+r_ecx*4));
    /* 004f6d4b: cmp eax, dword ptr [edx + 0x24] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x24u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f6d4e: jle 0x4f6d78 */ if ((fZ||fS!=fO)) goto L_004f6d78;
L_004f6d50:; BB(0x004f6d50);
    /* 004f6d50: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f6d54: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f6d57: mov eax, dword ptr [edx + 0x68] */ r_eax = R32((u32)(r_edx+0x68u));
    /* 004f6d5a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f6d5d: mov eax, dword ptr [eax + ecx*4] */ r_eax = R32((u32)(r_eax+r_ecx*4));
    /* 004f6d60: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 004f6d63: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f6d67: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f6d6a: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 004f6d6d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f6d70: mov eax, dword ptr [eax + ecx*4] */ r_eax = R32((u32)(r_eax+r_ecx*4));
    /* 004f6d73: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 004f6d76: jmp 0x4f6dda */ goto L_004f6dda;
L_004f6d78:; BB(0x004f6d78);
    /* 004f6d78: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f6d7c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f6d7f: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 004f6d82: movzx ecx, byte ptr [eax + ecx] */ r_ecx = (u32)R8((u32)(r_eax+r_ecx));
    /* 004f6d86: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f6d88: jne 0x4f6dda */ if (!fZ) goto L_004f6dda;
L_004f6d8a:; BB(0x004f6d8a);
    /* 004f6d8a: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f6d8e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f6d91: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 004f6d94: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f6d97: mov ecx, dword ptr [ecx + edx*4] */ r_ecx = R32((u32)(r_ecx+r_edx*4));
    /* 004f6d9a: cmp ecx, dword ptr [eax + 0x24] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x24u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f6d9d: jne 0x4f6dda */ if (!fZ) goto L_004f6dda;
L_004f6d9f:; BB(0x004f6d9f);
    /* 004f6d9f: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f6da3: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f6da6: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 004f6da9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f6dac: mov ecx, dword ptr [ecx + edx*4] */ r_ecx = R32((u32)(r_ecx+r_edx*4));
    /* 004f6daf: cmp ecx, dword ptr [eax + 0x28] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x28u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f6db2: jle 0x4f6dda */ if ((fZ||fS!=fO)) goto L_004f6dda;
L_004f6db4:; BB(0x004f6db4);
    /* 004f6db4: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f6db8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f6dbb: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 004f6dbe: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f6dc1: mov ecx, dword ptr [ecx + edx*4] */ r_ecx = R32((u32)(r_ecx+r_edx*4));
    /* 004f6dc4: mov dword ptr [eax + 0x24], ecx */ W32((u32)(r_eax+0x24u), r_ecx);
    /* 004f6dc7: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f6dcb: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f6dce: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 004f6dd1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f6dd4: mov ecx, dword ptr [ecx + edx*4] */ r_ecx = R32((u32)(r_ecx+r_edx*4));
    /* 004f6dd7: mov dword ptr [eax + 0x28], ecx */ W32((u32)(r_eax+0x28u), r_ecx);
L_004f6dda:; BB(0x004f6dda);
    /* 004f6dda: jmp 0x4f6d0a */ goto L_004f6d0a;
L_004f6ddf:; BB(0x004f6ddf);
    /* 004f6ddf: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f6de2: cmp dword ptr [edx + 0x24], 0 */ {  u32 a = R32((u32)(r_edx+0x24u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f6de6: jg 0x4f6df1 */ if ((!fZ&&fS==fO)) goto L_004f6df1;
L_004f6de8:; BB(0x004f6de8);
    /* 004f6de8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f6deb: cmp dword ptr [eax + 0x28], 0 */ {  u32 a = R32((u32)(r_eax+0x28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f6def: jle 0x4f6e0e */ if ((fZ||fS!=fO)) goto L_004f6e0e;
L_004f6df1:; BB(0x004f6df1);
    /* 004f6df1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f6df4: mov byte ptr [ecx + 3], 1 */ W8((u32)(r_ecx+0x3u), 0x1u);
    /* 004f6df8: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f6dfb: mov byte ptr [edx + 5], 0 */ W8((u32)(r_edx+0x5u), 0x0u);
    /* 004f6dff: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f6e02: mov word ptr [eax + 0x2e], 0xffff */ W16((u32)(r_eax+0x2eu), 0xffffu);
    /* 004f6e08: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 004f6e0a: jmp 0x4f6e65 */ goto L_004f6e65;
L_004f6e0e:; BB(0x004f6e0e);
    /* 004f6e0e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f6e11: mov byte ptr [ecx + 1], 0 */ W8((u32)(r_ecx+0x1u), 0x0u);
    /* 004f6e15: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f6e18: mov byte ptr [edx + 3], 0 */ W8((u32)(r_edx+0x3u), 0x0u);
    /* 004f6e1c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f6e1f: mov byte ptr [eax + 5], 0 */ W8((u32)(r_eax+0x5u), 0x0u);
    /* 004f6e23: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f6e26: cmp dword ptr [ecx + 0xc], 0 */ {  u32 a = R32((u32)(r_ecx+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f6e2a: je 0x4f6e43 */ if (fZ) goto L_004f6e43;
L_004f6e2c:; BB(0x004f6e2c);
    /* 004f6e2c: push 0x329 */ { u32 v = 0x329u; r_esp -= 4; W32(r_esp, v); }
    /* 004f6e31: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f6e36: push 0x6c0128 */ { u32 v = 0x6c0128u; r_esp -= 4; W32(r_esp, v); }
    /* 004f6e3b: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f6e40u); f_005e9f20();
    /* 004f6e40: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f6e43:; BB(0x004f6e43);
    /* 004f6e43: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f6e46: cmp dword ptr [eax + 0x10], 0 */ {  u32 a = R32((u32)(r_eax+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f6e4a: je 0x4f6e63 */ if (fZ) goto L_004f6e63;
L_004f6e4c:; BB(0x004f6e4c);
    /* 004f6e4c: push 0x32a */ { u32 v = 0x32au; r_esp -= 4; W32(r_esp, v); }
    /* 004f6e51: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f6e56: push 0x6c0110 */ { u32 v = 0x6c0110u; r_esp -= 4; W32(r_esp, v); }
    /* 004f6e5b: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f6e60u); f_005e9f20();
    /* 004f6e60: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f6e63:; BB(0x004f6e63);
    /* 004f6e63: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_004f6e65:; BB(0x004f6e65);
    /* 004f6e65: mov esp, ebp */ r_esp = r_ebp;
    /* 004f6e67: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f6e68: ret  */ FN_RET(0x004f6c80); r_esp += 4; return;
}

void f_004f6e70(void) /* PokerPot::func_004f6e70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f6e70);
    /* 004f6e70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f6e71: mov ebp, esp */ r_ebp = r_esp;
    /* 004f6e73: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f6e76: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004f6e79: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f6e7c: movzx ecx, byte ptr [eax + 1] */ r_ecx = (u32)R8((u32)(r_eax+0x1u));
    /* 004f6e80: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f6e82: jne 0x4f6e9b */ if (!fZ) goto L_004f6e9b;
L_004f6e84:; BB(0x004f6e84);
    /* 004f6e84: push 0x331 */ { u32 v = 0x331u; r_esp -= 4; W32(r_esp, v); }
    /* 004f6e89: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f6e8e: push 0x6bfe6c */ { u32 v = 0x6bfe6cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f6e93: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f6e98u); f_005e9f20();
    /* 004f6e98: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f6e9b:; BB(0x004f6e9b);
    /* 004f6e9b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f6e9e: movzx ecx, byte ptr [eax + 3] */ r_ecx = (u32)R8((u32)(r_eax+0x3u));
    /* 004f6ea2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f6ea4: jne 0x4f6ebd */ if (!fZ) goto L_004f6ebd;
L_004f6ea6:; BB(0x004f6ea6);
    /* 004f6ea6: push 0x332 */ { u32 v = 0x332u; r_esp -= 4; W32(r_esp, v); }
    /* 004f6eab: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f6eb0: push 0x6c0138 */ { u32 v = 0x6c0138u; r_esp -= 4; W32(r_esp, v); }
    /* 004f6eb5: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f6ebau); f_005e9f20();
    /* 004f6eba: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f6ebd:; BB(0x004f6ebd);
    /* 004f6ebd: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f6ec0: movsx ecx, word ptr [eax + 0x2e] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x2eu));
    /* 004f6ec4: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f6ec7: jne 0x4f6f7c */ if (!fZ) goto L_004f6f7c;
L_004f6ecd:; BB(0x004f6ecd);
    /* 004f6ecd: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004f6ed3: jmp 0x4f6ee1 */ goto L_004f6ee1;
L_004f6ed5:; BB(0x004f6ed5);
    /* 004f6ed5: mov dx, word ptr [ebp - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004f6ed9: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f6edd: mov word ptr [ebp - 4], dx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_edx);
L_004f6ee1:; BB(0x004f6ee1);
    /* 004f6ee1: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f6ee5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f6ee8: movsx edx, word ptr [ecx + 6] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x6u));
    /* 004f6eec: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f6eee: jge 0x4f6f7c */ if ((fS==fO)) goto L_004f6f7c;
L_004f6ef4:; BB(0x004f6ef4);
    /* 004f6ef4: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f6ef8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f6efb: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 004f6efe: movzx eax, byte ptr [edx + eax] */ r_eax = (u32)R8((u32)(r_edx+r_eax));
    /* 004f6f02: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f6f04: jne 0x4f6f77 */ if (!fZ) goto L_004f6f77;
L_004f6f06:; BB(0x004f6f06);
    /* 004f6f06: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f6f0a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f6f0d: mov eax, dword ptr [edx + 0x68] */ r_eax = R32((u32)(r_edx+0x68u));
    /* 004f6f10: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f6f13: mov eax, dword ptr [eax + ecx*4] */ r_eax = R32((u32)(r_eax+r_ecx*4));
    /* 004f6f16: cmp eax, dword ptr [edx + 0x24] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x24u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f6f19: jne 0x4f6f77 */ if (!fZ) goto L_004f6f77;
L_004f6f1b:; BB(0x004f6f1b);
    /* 004f6f1b: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f6f1f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f6f22: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 004f6f25: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f6f28: mov eax, dword ptr [eax + ecx*4] */ r_eax = R32((u32)(r_eax+r_ecx*4));
    /* 004f6f2b: cmp eax, dword ptr [edx + 0x28] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x28u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f6f2e: jne 0x4f6f77 */ if (!fZ) goto L_004f6f77;
L_004f6f30:; BB(0x004f6f30);
    /* 004f6f30: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f6f33: movsx edx, word ptr [ecx + 0x2e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x2eu));
    /* 004f6f37: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f6f3a: jne 0x4f6f49 */ if (!fZ) goto L_004f6f49;
L_004f6f3c:; BB(0x004f6f3c);
    /* 004f6f3c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f6f3f: mov cx, word ptr [ebp - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004f6f43: mov word ptr [eax + 0x2e], cx */ W16((u32)(r_eax+0x2eu), (u16)r_ecx);
    /* 004f6f47: jmp 0x4f6f77 */ goto L_004f6f77;
L_004f6f49:; BB(0x004f6f49);
    /* 004f6f49: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f6f4d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f6f50: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 004f6f53: movsx edx, word ptr [ecx + edx*2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+r_edx*2));
    /* 004f6f57: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f6f5a: movsx ecx, word ptr [eax + 0x2e] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x2eu));
    /* 004f6f5e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f6f61: mov eax, dword ptr [eax + 0x4c] */ r_eax = R32((u32)(r_eax+0x4cu));
    /* 004f6f64: movsx ecx, word ptr [eax + ecx*2] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+r_ecx*2));
    /* 004f6f68: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f6f6a: jle 0x4f6f77 */ if ((fZ||fS!=fO)) goto L_004f6f77;
L_004f6f6c:; BB(0x004f6f6c);
    /* 004f6f6c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f6f6f: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004f6f73: mov word ptr [edx + 0x2e], ax */ W16((u32)(r_edx+0x2eu), (u16)r_eax);
L_004f6f77:; BB(0x004f6f77);
    /* 004f6f77: jmp 0x4f6ed5 */ goto L_004f6ed5;
L_004f6f7c:; BB(0x004f6f7c);
    /* 004f6f7c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f6f7f: mov dx, word ptr [ecx + 0x2e] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+0x2eu))) & 0xffffu);
    /* 004f6f83: mov word ptr [ebp - 4], dx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_edx);
    /* 004f6f87: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f6f8a: movsx ecx, word ptr [eax + 0x2e] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x2eu));
    /* 004f6f8e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f6f91: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 004f6f94: movzx ecx, byte ptr [eax + ecx] */ r_ecx = (u32)R8((u32)(r_eax+r_ecx));
    /* 004f6f98: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f6f9a: jne 0x4f6faa */ if (!fZ) goto L_004f6faa;
L_004f6f9c:; BB(0x004f6f9c);
    /* 004f6f9c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f6f9f: mov ax, word ptr [edx + 0x2e] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x2eu))) & 0xffffu);
    /* 004f6fa3: jmp 0x4f7043 */ goto L_004f7043;
L_004f6faa:; BB(0x004f6faa);
    /* 004f6faa: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004f6fae: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f6fb2: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 004f6fb6: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f6fba: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f6fbd: movsx eax, word ptr [edx + 6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x6u));
    /* 004f6fc1: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f6fc3: jne 0x4f6fcb */ if (!fZ) goto L_004f6fcb;
L_004f6fc5:; BB(0x004f6fc5);
    /* 004f6fc5: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
L_004f6fcb:; BB(0x004f6fcb);
    /* 004f6fcb: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f6fcf: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f6fd2: movsx eax, word ptr [edx + 0x2e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x2eu));
    /* 004f6fd6: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f6fd8: je 0x4f7028 */ if (fZ) goto L_004f7028;
L_004f6fda:; BB(0x004f6fda);
    /* 004f6fda: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f6fde: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f6fe1: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 004f6fe4: movzx ecx, byte ptr [eax + ecx] */ r_ecx = (u32)R8((u32)(r_eax+r_ecx));
    /* 004f6fe8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f6fea: jne 0x4f6faa */ if (!fZ) goto L_004f6faa;
L_004f6fec:; BB(0x004f6fec);
    /* 004f6fec: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f6ff0: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f6ff3: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 004f6ff6: movzx edx, byte ptr [ecx + edx] */ r_edx = (u32)R8((u32)(r_ecx+r_edx));
    /* 004f6ffa: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f6ffc: jne 0x4f6faa */ if (!fZ) goto L_004f6faa;
L_004f6ffe:; BB(0x004f6ffe);
    /* 004f6ffe: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f7002: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f7005: mov edx, dword ptr [ecx + 0x68] */ r_edx = R32((u32)(r_ecx+0x68u));
    /* 004f7008: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f700b: mov edx, dword ptr [edx + eax*4] */ r_edx = R32((u32)(r_edx+r_eax*4));
    /* 004f700e: cmp edx, dword ptr [ecx + 0x24] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x24u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7011: jne 0x4f6faa */ if (!fZ) goto L_004f6faa;
L_004f7013:; BB(0x004f7013);
    /* 004f7013: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f7017: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f701a: mov edx, dword ptr [ecx + 0x6c] */ r_edx = R32((u32)(r_ecx+0x6cu));
    /* 004f701d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f7020: mov edx, dword ptr [edx + eax*4] */ r_edx = R32((u32)(r_edx+r_eax*4));
    /* 004f7023: cmp edx, dword ptr [ecx + 0x28] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x28u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7026: jne 0x4f6faa */ if (!fZ) goto L_004f6faa;
L_004f7028:; BB(0x004f7028);
    /* 004f7028: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f702c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f702f: movsx edx, word ptr [ecx + 0x2e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x2eu));
    /* 004f7033: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7035: jne 0x4f703f */ if (!fZ) goto L_004f703f;
L_004f7037:; BB(0x004f7037);
    /* 004f7037: or ax, 0xffff */ {  u32 a = (u16)r_eax; u32 b = 0xffffu; u32 r = (a | b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f703b: jmp 0x4f7043 */ goto L_004f7043;
L_004f703f:; BB(0x004f703f);
    /* 004f703f: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
L_004f7043:; BB(0x004f7043);
    /* 004f7043: mov esp, ebp */ r_esp = r_ebp;
    /* 004f7045: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f7046: ret  */ FN_RET(0x004f6e70); r_esp += 4; return;
}

void f_004f7050(void) /* PokerPot::func_004f7050 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f7050);
    /* 004f7050: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f7051: mov ebp, esp */ r_ebp = r_esp;
    /* 004f7053: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004f7055: push 0x6a2649 */ { u32 v = 0x6a2649u; r_esp -= 4; W32(r_esp, v); }
    /* 004f705a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004f7060: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f7061: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f7062: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 004f7067: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f7069: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f706a: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 004f706d: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 004f7073: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 004f7076: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004f707d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004f7080: movzx ecx, byte ptr [eax + 1] */ r_ecx = (u32)R8((u32)(r_eax+0x1u));
    /* 004f7084: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7086: jne 0x4f709f */ if (!fZ) goto L_004f709f;
L_004f7088:; BB(0x004f7088);
    /* 004f7088: push 0x361 */ { u32 v = 0x361u; r_esp -= 4; W32(r_esp, v); }
    /* 004f708d: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f7092: push 0x6bfe6c */ { u32 v = 0x6bfe6cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f7097: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f709cu); f_005e9f20();
    /* 004f709c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f709f:; BB(0x004f709f);
    /* 004f709f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004f70a2: movzx ecx, byte ptr [eax + 3] */ r_ecx = (u32)R8((u32)(r_eax+0x3u));
    /* 004f70a6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f70a8: jne 0x4f70c1 */ if (!fZ) goto L_004f70c1;
L_004f70aa:; BB(0x004f70aa);
    /* 004f70aa: push 0x362 */ { u32 v = 0x362u; r_esp -= 4; W32(r_esp, v); }
    /* 004f70af: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f70b4: push 0x6c0138 */ { u32 v = 0x6c0138u; r_esp -= 4; W32(r_esp, v); }
    /* 004f70b9: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f70beu); f_005e9f20();
    /* 004f70be: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f70c1:; BB(0x004f70c1);
    /* 004f70c1: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f70c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004f70c7: jge 0x4f70e0 */ if ((fS==fO)) goto L_004f70e0;
L_004f70c9:; BB(0x004f70c9);
    /* 004f70c9: push 0x363 */ { u32 v = 0x363u; r_esp -= 4; W32(r_esp, v); }
    /* 004f70ce: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f70d3: push 0x6c0230 */ { u32 v = 0x6c0230u; r_esp -= 4; W32(r_esp, v); }
    /* 004f70d8: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f70ddu); f_005e9f20();
    /* 004f70dd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f70e0:; BB(0x004f70e0);
    /* 004f70e0: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f70e4: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004f70e7: movsx ecx, word ptr [eax + 6] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x6u));
    /* 004f70eb: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f70ed: jl 0x4f7106 */ if ((fS!=fO)) goto L_004f7106;
L_004f70ef:; BB(0x004f70ef);
    /* 004f70ef: push 0x364 */ { u32 v = 0x364u; r_esp -= 4; W32(r_esp, v); }
    /* 004f70f4: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f70f9: push 0x6c020c */ { u32 v = 0x6c020cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f70fe: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f7103u); f_005e9f20();
    /* 004f7103: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f7106:; BB(0x004f7106);
    /* 004f7106: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f710a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004f710d: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 004f7110: movzx eax, byte ptr [edx + eax] */ r_eax = (u32)R8((u32)(r_edx+r_eax));
    /* 004f7114: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7116: je 0x4f712f */ if (fZ) goto L_004f712f;
L_004f7118:; BB(0x004f7118);
    /* 004f7118: push 0x365 */ { u32 v = 0x365u; r_esp -= 4; W32(r_esp, v); }
    /* 004f711d: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f7122: push 0x6c01f0 */ { u32 v = 0x6c01f0u; r_esp -= 4; W32(r_esp, v); }
    /* 004f7127: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f712cu); f_005e9f20();
    /* 004f712c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f712f:; BB(0x004f712f);
    /* 004f712f: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f7133: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004f7136: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 004f7139: movzx edx, byte ptr [ecx + edx] */ r_edx = (u32)R8((u32)(r_ecx+r_edx));
    /* 004f713d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f713f: je 0x4f7158 */ if (fZ) goto L_004f7158;
L_004f7141:; BB(0x004f7141);
    /* 004f7141: push 0x366 */ { u32 v = 0x366u; r_esp -= 4; W32(r_esp, v); }
    /* 004f7146: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f714b: push 0x6c01cc */ { u32 v = 0x6c01ccu; r_esp -= 4; W32(r_esp, v); }
    /* 004f7150: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f7155u); f_005e9f20();
    /* 004f7155: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f7158:; BB(0x004f7158);
    /* 004f7158: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f715c: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004f715f: mov eax, dword ptr [edx + 0x68] */ r_eax = R32((u32)(r_edx+0x68u));
    /* 004f7162: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004f7165: mov eax, dword ptr [eax + ecx*4] */ r_eax = R32((u32)(r_eax+r_ecx*4));
    /* 004f7168: cmp eax, dword ptr [edx + 0x24] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x24u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f716b: je 0x4f7184 */ if (fZ) goto L_004f7184;
L_004f716d:; BB(0x004f716d);
    /* 004f716d: push 0x367 */ { u32 v = 0x367u; r_esp -= 4; W32(r_esp, v); }
    /* 004f7172: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f7177: push 0x6c0194 */ { u32 v = 0x6c0194u; r_esp -= 4; W32(r_esp, v); }
    /* 004f717c: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f7181u); f_005e9f20();
    /* 004f7181: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f7184:; BB(0x004f7184);
    /* 004f7184: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f7188: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004f718b: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 004f718e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004f7191: mov ecx, dword ptr [ecx + edx*4] */ r_ecx = R32((u32)(r_ecx+r_edx*4));
    /* 004f7194: cmp ecx, dword ptr [eax + 0x28] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x28u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7197: je 0x4f71b0 */ if (fZ) goto L_004f71b0;
L_004f7199:; BB(0x004f7199);
    /* 004f7199: push 0x368 */ { u32 v = 0x368u; r_esp -= 4; W32(r_esp, v); }
    /* 004f719e: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f71a3: push 0x6c0150 */ { u32 v = 0x6c0150u; r_esp -= 4; W32(r_esp, v); }
    /* 004f71a8: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f71adu); f_005e9f20();
    /* 004f71ad: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f71b0:; BB(0x004f71b0);
    /* 004f71b0: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f71b4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004f71b7: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 004f71ba: mov byte ptr [eax + edx], 1 */ W8((u32)(r_eax+r_edx), 0x1u);
    /* 004f71be: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f71c2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004f71c5: mov edx, dword ptr [ecx + 0x7c] */ r_edx = R32((u32)(r_ecx+0x7cu));
    /* 004f71c8: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 004f71cb: mov dword ptr [edx + eax*4], ecx */ W32((u32)(r_edx+r_eax*4), r_ecx);
    /* 004f71ce: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f71d2: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004f71d5: mov ecx, dword ptr [eax + 0x80] */ r_ecx = R32((u32)(r_eax+0x80u));
    /* 004f71db: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004f71de: mov dword ptr [ecx + edx*4], eax */ W32((u32)(r_ecx+r_edx*4), r_eax);
    /* 004f71e1: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f71e5: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004f71e8: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 004f71ee: mov dword ptr [eax + ecx*4], 0 */ W32((u32)(r_eax+r_ecx*4), 0x0u);
    /* 004f71f5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004f71fc: lea ecx, [ebp + 0xc] */ r_ecx = (u32)(r_ebp+0xcu);
    /* 004f71ff: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x4f7204u); f_004a20f0();
    /* 004f7204: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f7207: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004f720e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f720f: mov esp, ebp */ r_esp = r_ebp;
    /* 004f7211: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f7212: ret 8 */ FN_RET(0x004f7050); r_esp += 12; return;
}

void f_004f7220(void) /* PokerPot::func_004f7220 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f7220);
    /* 004f7220: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f7221: mov ebp, esp */ r_ebp = r_esp;
    /* 004f7223: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004f7225: push 0x6a2674 */ { u32 v = 0x6a2674u; r_esp -= 4; W32(r_esp, v); }
    /* 004f722a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004f7230: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f7231: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f7232: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 004f7237: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f7239: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f723a: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 004f723d: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 004f7243: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 004f7246: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004f724d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004f7250: movzx ecx, byte ptr [eax + 1] */ r_ecx = (u32)R8((u32)(r_eax+0x1u));
    /* 004f7254: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7256: jne 0x4f726f */ if (!fZ) goto L_004f726f;
L_004f7258:; BB(0x004f7258);
    /* 004f7258: push 0x377 */ { u32 v = 0x377u; r_esp -= 4; W32(r_esp, v); }
    /* 004f725d: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f7262: push 0x6bfe6c */ { u32 v = 0x6bfe6cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f7267: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f726cu); f_005e9f20();
    /* 004f726c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f726f:; BB(0x004f726f);
    /* 004f726f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004f7272: movzx ecx, byte ptr [eax + 3] */ r_ecx = (u32)R8((u32)(r_eax+0x3u));
    /* 004f7276: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7278: jne 0x4f7291 */ if (!fZ) goto L_004f7291;
L_004f727a:; BB(0x004f727a);
    /* 004f727a: push 0x378 */ { u32 v = 0x378u; r_esp -= 4; W32(r_esp, v); }
    /* 004f727f: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f7284: push 0x6c0138 */ { u32 v = 0x6c0138u; r_esp -= 4; W32(r_esp, v); }
    /* 004f7289: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f728eu); f_005e9f20();
    /* 004f728e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f7291:; BB(0x004f7291);
    /* 004f7291: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f7295: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004f7297: jge 0x4f72b0 */ if ((fS==fO)) goto L_004f72b0;
L_004f7299:; BB(0x004f7299);
    /* 004f7299: push 0x379 */ { u32 v = 0x379u; r_esp -= 4; W32(r_esp, v); }
    /* 004f729e: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f72a3: push 0x6c0230 */ { u32 v = 0x6c0230u; r_esp -= 4; W32(r_esp, v); }
    /* 004f72a8: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f72adu); f_005e9f20();
    /* 004f72ad: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f72b0:; BB(0x004f72b0);
    /* 004f72b0: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f72b4: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004f72b7: movsx ecx, word ptr [eax + 6] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x6u));
    /* 004f72bb: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f72bd: jl 0x4f72d6 */ if ((fS!=fO)) goto L_004f72d6;
L_004f72bf:; BB(0x004f72bf);
    /* 004f72bf: push 0x37a */ { u32 v = 0x37au; r_esp -= 4; W32(r_esp, v); }
    /* 004f72c4: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f72c9: push 0x6c020c */ { u32 v = 0x6c020cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f72ce: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f72d3u); f_005e9f20();
    /* 004f72d3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f72d6:; BB(0x004f72d6);
    /* 004f72d6: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f72da: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004f72dd: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 004f72e0: movzx eax, byte ptr [edx + eax] */ r_eax = (u32)R8((u32)(r_edx+r_eax));
    /* 004f72e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f72e6: je 0x4f72ff */ if (fZ) goto L_004f72ff;
L_004f72e8:; BB(0x004f72e8);
    /* 004f72e8: push 0x37b */ { u32 v = 0x37bu; r_esp -= 4; W32(r_esp, v); }
    /* 004f72ed: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f72f2: push 0x6c01f0 */ { u32 v = 0x6c01f0u; r_esp -= 4; W32(r_esp, v); }
    /* 004f72f7: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f72fcu); f_005e9f20();
    /* 004f72fc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f72ff:; BB(0x004f72ff);
    /* 004f72ff: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f7303: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004f7306: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 004f7309: movzx edx, byte ptr [ecx + edx] */ r_edx = (u32)R8((u32)(r_ecx+r_edx));
    /* 004f730d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f730f: je 0x4f7328 */ if (fZ) goto L_004f7328;
L_004f7311:; BB(0x004f7311);
    /* 004f7311: push 0x37c */ { u32 v = 0x37cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f7316: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f731b: push 0x6c01cc */ { u32 v = 0x6c01ccu; r_esp -= 4; W32(r_esp, v); }
    /* 004f7320: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f7325u); f_005e9f20();
    /* 004f7325: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f7328:; BB(0x004f7328);
    /* 004f7328: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f732c: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004f732f: mov eax, dword ptr [edx + 0x68] */ r_eax = R32((u32)(r_edx+0x68u));
    /* 004f7332: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004f7335: mov eax, dword ptr [eax + ecx*4] */ r_eax = R32((u32)(r_eax+r_ecx*4));
    /* 004f7338: cmp eax, dword ptr [edx + 0x24] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x24u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f733b: je 0x4f7354 */ if (fZ) goto L_004f7354;
L_004f733d:; BB(0x004f733d);
    /* 004f733d: push 0x37d */ { u32 v = 0x37du; r_esp -= 4; W32(r_esp, v); }
    /* 004f7342: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f7347: push 0x6c0194 */ { u32 v = 0x6c0194u; r_esp -= 4; W32(r_esp, v); }
    /* 004f734c: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f7351u); f_005e9f20();
    /* 004f7351: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f7354:; BB(0x004f7354);
    /* 004f7354: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f7358: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004f735b: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 004f735e: mov byte ptr [edx + ecx], 1 */ W8((u32)(r_edx+r_ecx), 0x1u);
    /* 004f7362: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f7366: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004f7369: mov ecx, dword ptr [eax + 0x7c] */ r_ecx = R32((u32)(r_eax+0x7cu));
    /* 004f736c: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004f736f: mov dword ptr [ecx + edx*4], eax */ W32((u32)(r_ecx+r_edx*4), r_eax);
    /* 004f7372: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f7376: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004f7379: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 004f737f: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 004f7382: mov dword ptr [eax + ecx*4], edx */ W32((u32)(r_eax+r_ecx*4), r_edx);
    /* 004f7385: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f7389: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004f738c: mov edx, dword ptr [ecx + 0x84] */ r_edx = R32((u32)(r_ecx+0x84u));
    /* 004f7392: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 004f7395: mov dword ptr [edx + eax*4], ecx */ W32((u32)(r_edx+r_eax*4), r_ecx);
    /* 004f7398: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004f739c: lea ecx, [ebp + 0xc] */ r_ecx = (u32)(r_ebp+0xcu);
    /* 004f739f: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x4f73a4u); f_004a20f0();
    /* 004f73a4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004f73ab: lea ecx, [ebp + 0x10] */ r_ecx = (u32)(r_ebp+0x10u);
    /* 004f73ae: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x4f73b3u); f_004a20f0();
    /* 004f73b3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f73b6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004f73bd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f73be: mov esp, ebp */ r_esp = r_ebp;
    /* 004f73c0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f73c1: ret 0x10 */ FN_RET(0x004f7220); r_esp += 20; return;
}

void f_004f73d0(void) /* PokerPot::func_004f73d0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f73d0);
    /* 004f73d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f73d1: mov ebp, esp */ r_ebp = r_esp;
    /* 004f73d3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004f73d5: push 0x6a2697 */ { u32 v = 0x6a2697u; r_esp -= 4; W32(r_esp, v); }
    /* 004f73da: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004f73e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f73e1: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f73e4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 004f73e9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f73eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f73ec: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 004f73ef: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 004f73f5: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 004f73f8: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 004f73fb: movzx ecx, byte ptr [eax + 1] */ r_ecx = (u32)R8((u32)(r_eax+0x1u));
    /* 004f73ff: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7401: jne 0x4f741a */ if (!fZ) goto L_004f741a;
L_004f7403:; BB(0x004f7403);
    /* 004f7403: push 0x389 */ { u32 v = 0x389u; r_esp -= 4; W32(r_esp, v); }
    /* 004f7408: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f740d: push 0x6bfe6c */ { u32 v = 0x6bfe6cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f7412: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f7417u); f_005e9f20();
    /* 004f7417: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f741a:; BB(0x004f741a);
    /* 004f741a: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 004f741d: movzx ecx, byte ptr [eax + 3] */ r_ecx = (u32)R8((u32)(r_eax+0x3u));
    /* 004f7421: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7423: jne 0x4f743c */ if (!fZ) goto L_004f743c;
L_004f7425:; BB(0x004f7425);
    /* 004f7425: push 0x38a */ { u32 v = 0x38au; r_esp -= 4; W32(r_esp, v); }
    /* 004f742a: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f742f: push 0x6c0138 */ { u32 v = 0x6c0138u; r_esp -= 4; W32(r_esp, v); }
    /* 004f7434: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f7439u); f_005e9f20();
    /* 004f7439: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f743c:; BB(0x004f743c);
    /* 004f743c: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004f743f: call 0x4f6e70 */ r_esp -= 4; W32(r_esp, 0x4f7444u); f_004f6e70();
    /* 004f7444: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 004f7447: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f744a: je 0x4f7463 */ if (fZ) goto L_004f7463;
L_004f744c:; BB(0x004f744c);
    /* 004f744c: push 0x38b */ { u32 v = 0x38bu; r_esp -= 4; W32(r_esp, v); }
    /* 004f7451: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f7456: push 0x6c027c */ { u32 v = 0x6c027cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f745b: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f7460u); f_005e9f20();
    /* 004f7460: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f7463:; BB(0x004f7463);
    /* 004f7463: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 004f7466: mov byte ptr [edx + 4], 0 */ W8((u32)(r_edx+0x4u), 0x0u);
    /* 004f746a: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 004f746d: call 0x4a20d0 */ r_esp -= 4; W32(r_esp, 0x4f7472u); f_004a20d0();
    /* 004f7472: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004f7479: movzx eax, byte ptr [ebp + 8] */ r_eax = (u32)R8((u32)(r_ebp+0x8u));
    /* 004f747d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f747f: je 0x4f74ab */ if (fZ) goto L_004f74ab;
L_004f7481:; BB(0x004f7481);
    /* 004f7481: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 004f7486: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 004f748b: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 004f7490: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 004f7495: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 004f749a: mov ecx, dword ptr [0x791390] */ r_ecx = R32((u32)(0x791390u));
    /* 004f74a0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f74a1: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 004f74a4: call 0x4a2100 */ r_esp -= 4; W32(r_esp, 0x4f74a9u); f_004a2100();
    /* 004f74a9: jmp 0x4f74d4 */ goto L_004f74d4;
L_004f74ab:; BB(0x004f74ab);
    /* 004f74ab: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 004f74b0: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 004f74b5: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 004f74ba: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 004f74bf: mov edx, dword ptr [0x7913c8] */ r_edx = R32((u32)(0x7913c8u));
    /* 004f74c5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f74c6: mov eax, dword ptr [0x7913cc] */ r_eax = R32((u32)(0x7913ccu));
    /* 004f74cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f74cc: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 004f74cf: call 0x4a2100 */ r_esp -= 4; W32(r_esp, 0x4f74d4u); f_004a2100();
L_004f74d4:; BB(0x004f74d4);
    /* 004f74d4: mov word ptr [ebp - 0x20], 0 */ W16((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 004f74da: mov word ptr [ebp - 0x18], 0xffff */ W16((u32)(r_ebp+0xffffffe8u), 0xffffu);
    /* 004f74e0: mov word ptr [ebp - 0x10], 0 */ W16((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 004f74e6: jmp 0x4f74f4 */ goto L_004f74f4;
L_004f74e8:; BB(0x004f74e8);
    /* 004f74e8: mov cx, word ptr [ebp - 0x10] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff0u))) & 0xffffu);
    /* 004f74ec: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f74f0: mov word ptr [ebp - 0x10], cx */ W16((u32)(r_ebp+0xfffffff0u), (u16)r_ecx);
L_004f74f4:; BB(0x004f74f4);
    /* 004f74f4: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004f74f8: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 004f74fb: movsx ecx, word ptr [eax + 6] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x6u));
    /* 004f74ff: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f7501: jge 0x4f7651 */ if ((fS==fO)) goto L_004f7651;
L_004f7507:; BB(0x004f7507);
    /* 004f7507: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004f750b: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 004f750e: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 004f7511: mov byte ptr [edx + ecx], 1 */ W8((u32)(r_edx+r_ecx), 0x1u);
    /* 004f7515: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004f7519: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 004f751c: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 004f751f: movzx edx, byte ptr [ecx + edx] */ r_edx = (u32)R8((u32)(r_ecx+r_edx));
    /* 004f7523: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7525: jne 0x4f764c */ if (!fZ) goto L_004f764c;
L_004f752b:; BB(0x004f752b);
    /* 004f752b: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004f752f: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004f7532: mov edx, dword ptr [ecx + 0x68] */ r_edx = R32((u32)(r_ecx+0x68u));
    /* 004f7535: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004f7538: mov edx, dword ptr [edx + eax*4] */ r_edx = R32((u32)(r_edx+r_eax*4));
    /* 004f753b: cmp edx, dword ptr [ecx + 0x24] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x24u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f753e: jne 0x4f764c */ if (!fZ) goto L_004f764c;
L_004f7544:; BB(0x004f7544);
    /* 004f7544: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004f7548: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004f754b: mov edx, dword ptr [ecx + 0x6c] */ r_edx = R32((u32)(r_ecx+0x6cu));
    /* 004f754e: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004f7551: mov edx, dword ptr [edx + eax*4] */ r_edx = R32((u32)(r_edx+r_eax*4));
    /* 004f7554: cmp edx, dword ptr [ecx + 0x28] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x28u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7557: jne 0x4f764c */ if (!fZ) goto L_004f764c;
L_004f755d:; BB(0x004f755d);
    /* 004f755d: movzx eax, byte ptr [ebp + 8] */ r_eax = (u32)R8((u32)(r_ebp+0x8u));
    /* 004f7561: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7563: je 0x4f75d5 */ if (fZ) goto L_004f75d5;
L_004f7565:; BB(0x004f7565);
    /* 004f7565: movsx ecx, word ptr [ebp - 0x20] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe0u));
    /* 004f7569: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f756b: je 0x4f758a */ if (fZ) goto L_004f758a;
L_004f756d:; BB(0x004f756d);
    /* 004f756d: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004f7571: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 004f7574: mov ecx, dword ptr [eax + 0x7c] */ r_ecx = R32((u32)(r_eax+0x7cu));
    /* 004f7577: lea edx, [ecx + edx*4] */ r_edx = (u32)(r_ecx+r_edx*4);
    /* 004f757a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f757b: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 004f757e: call 0x4a2550 */ r_esp -= 4; W32(r_esp, 0x4f7583u); f_004a2550();
    /* 004f7583: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004f7586: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7588: je 0x4f75aa */ if (fZ) goto L_004f75aa;
L_004f758a:; BB(0x004f758a);
    /* 004f758a: mov word ptr [ebp - 0x20], 1 */ W16((u32)(r_ebp+0xffffffe0u), 0x1u);
    /* 004f7590: mov cx, word ptr [ebp - 0x10] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff0u))) & 0xffffu);
    /* 004f7594: mov word ptr [ebp - 0x18], cx */ W16((u32)(r_ebp+0xffffffe8u), (u16)r_ecx);
    /* 004f7598: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004f759c: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 004f759f: mov ecx, dword ptr [eax + 0x7c] */ r_ecx = R32((u32)(r_eax+0x7cu));
    /* 004f75a2: mov edx, dword ptr [ecx + edx*4] */ r_edx = R32((u32)(r_ecx+r_edx*4));
    /* 004f75a5: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 004f75a8: jmp 0x4f75d3 */ goto L_004f75d3;
L_004f75aa:; BB(0x004f75aa);
    /* 004f75aa: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004f75ae: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004f75b1: mov edx, dword ptr [ecx + 0x7c] */ r_edx = R32((u32)(r_ecx+0x7cu));
    /* 004f75b4: lea eax, [edx + eax*4] */ r_eax = (u32)(r_edx+r_eax*4);
    /* 004f75b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f75b8: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 004f75bb: call 0x4a2340 */ r_esp -= 4; W32(r_esp, 0x4f75c0u); f_004a2340();
    /* 004f75c0: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004f75c3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f75c5: je 0x4f75d3 */ if (fZ) goto L_004f75d3;
L_004f75c7:; BB(0x004f75c7);
    /* 004f75c7: mov dx, word ptr [ebp - 0x20] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe0u))) & 0xffffu);
    /* 004f75cb: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f75cf: mov word ptr [ebp - 0x20], dx */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_edx);
L_004f75d3:; BB(0x004f75d3);
    /* 004f75d3: jmp 0x4f764c */ goto L_004f764c;
L_004f75d5:; BB(0x004f75d5);
    /* 004f75d5: movsx eax, word ptr [ebp - 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe0u));
    /* 004f75d9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f75db: je 0x4f75fd */ if (fZ) goto L_004f75fd;
L_004f75dd:; BB(0x004f75dd);
    /* 004f75dd: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004f75e1: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 004f75e4: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 004f75ea: lea ecx, [eax + ecx*4] */ r_ecx = (u32)(r_eax+r_ecx*4);
    /* 004f75ed: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f75ee: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 004f75f1: call 0x4a2440 */ r_esp -= 4; W32(r_esp, 0x4f75f6u); f_004a2440();
    /* 004f75f6: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004f75f9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f75fb: je 0x4f7620 */ if (fZ) goto L_004f7620;
L_004f75fd:; BB(0x004f75fd);
    /* 004f75fd: mov word ptr [ebp - 0x20], 1 */ W16((u32)(r_ebp+0xffffffe0u), 0x1u);
    /* 004f7603: mov ax, word ptr [ebp - 0x10] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff0u))) & 0xffffu);
    /* 004f7607: mov word ptr [ebp - 0x18], ax */ W16((u32)(r_ebp+0xffffffe8u), (u16)r_eax);
    /* 004f760b: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004f760f: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 004f7612: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 004f7618: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 004f761b: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004f761e: jmp 0x4f764c */ goto L_004f764c;
L_004f7620:; BB(0x004f7620);
    /* 004f7620: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004f7624: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 004f7627: mov ecx, dword ptr [eax + 0x80] */ r_ecx = R32((u32)(r_eax+0x80u));
    /* 004f762d: lea edx, [ecx + edx*4] */ r_edx = (u32)(r_ecx+r_edx*4);
    /* 004f7630: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f7631: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 004f7634: call 0x4a2340 */ r_esp -= 4; W32(r_esp, 0x4f7639u); f_004a2340();
    /* 004f7639: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004f763c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f763e: je 0x4f764c */ if (fZ) goto L_004f764c;
L_004f7640:; BB(0x004f7640);
    /* 004f7640: mov cx, word ptr [ebp - 0x20] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe0u))) & 0xffffu);
    /* 004f7644: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f7648: mov word ptr [ebp - 0x20], cx */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_ecx);
L_004f764c:; BB(0x004f764c);
    /* 004f764c: jmp 0x4f74e8 */ goto L_004f74e8;
L_004f7651:; BB(0x004f7651);
    /* 004f7651: movsx edx, word ptr [ebp - 0x18] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe8u));
    /* 004f7655: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004f7657: jge 0x4f7670 */ if ((fS==fO)) goto L_004f7670;
L_004f7659:; BB(0x004f7659);
    /* 004f7659: push 0x3b6 */ { u32 v = 0x3b6u; r_esp -= 4; W32(r_esp, v); }
    /* 004f765e: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f7663: push 0x6c0260 */ { u32 v = 0x6c0260u; r_esp -= 4; W32(r_esp, v); }
    /* 004f7668: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f766du); f_005e9f20();
    /* 004f766d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f7670:; BB(0x004f7670);
    /* 004f7670: movsx ecx, word ptr [ebp - 0x20] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe0u));
    /* 004f7674: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004f7676: jge 0x4f768f */ if ((fS==fO)) goto L_004f768f;
L_004f7678:; BB(0x004f7678);
    /* 004f7678: push 0x3b7 */ { u32 v = 0x3b7u; r_esp -= 4; W32(r_esp, v); }
    /* 004f767d: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f7682: push 0x6c0248 */ { u32 v = 0x6c0248u; r_esp -= 4; W32(r_esp, v); }
    /* 004f7687: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f768cu); f_005e9f20();
    /* 004f768c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f768f:; BB(0x004f768f);
    /* 004f768f: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004f7692: call 0x4f9580 */ r_esp -= 4; W32(r_esp, 0x4f7697u); f_004f9580();
    /* 004f7697: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004f769a: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 004f769d: mov byte ptr [eax + 5], 1 */ W8((u32)(r_eax+0x5u), 0x1u);
    /* 004f76a1: movsx ecx, word ptr [ebp - 0x20] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe0u));
    /* 004f76a5: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f76a8: jne 0x4f76df */ if (!fZ) goto L_004f76df;
L_004f76aa:; BB(0x004f76aa);
    /* 004f76aa: movsx edx, word ptr [ebp - 0x18] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe8u));
    /* 004f76ae: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 004f76b1: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 004f76b4: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004f76b7: mov dword ptr [ecx + edx*4], eax */ W32((u32)(r_ecx+r_edx*4), r_eax);
    /* 004f76ba: mov cx, word ptr [ebp - 0x18] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe8u))) & 0xffffu);
    /* 004f76be: mov word ptr [ebp - 0x2e], cx */ W16((u32)(r_ebp+0xffffffd2u), (u16)r_ecx);
    /* 004f76c2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004f76c9: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 004f76cc: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x4f76d1u); f_004a20f0();
    /* 004f76d1: mov ax, word ptr [ebp - 0x2e] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffd2u))) & 0xffffu);
    /* 004f76d5: jmp 0x4f788d */ goto L_004f788d;
L_004f76df:; BB(0x004f76df);
    /* 004f76df: movsx ecx, word ptr [ebp - 0x20] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe0u));
    /* 004f76e3: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004f76e6: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004f76e7: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x004f76e7, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x004f76e7, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 004f76e9: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 004f76ec: movsx ecx, word ptr [ebp - 0x20] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe0u));
    /* 004f76f0: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004f76f3: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004f76f4: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x004f76f4, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x004f76f4, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 004f76f6: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 004f76f9: mov dx, word ptr [ebp - 0x18] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe8u))) & 0xffffu);
    /* 004f76fd: mov word ptr [ebp - 0x28], dx */ W16((u32)(r_ebp+0xffffffd8u), (u16)r_edx);
    /* 004f7701: mov word ptr [ebp - 0x10], 0 */ W16((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 004f7707: jmp 0x4f7715 */ goto L_004f7715;
L_004f7709:; BB(0x004f7709);
    /* 004f7709: mov ax, word ptr [ebp - 0x10] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff0u))) & 0xffffu);
    /* 004f770d: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f7711: mov word ptr [ebp - 0x10], ax */ W16((u32)(r_ebp+0xfffffff0u), (u16)r_eax);
L_004f7715:; BB(0x004f7715);
    /* 004f7715: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004f7719: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 004f771c: movsx eax, word ptr [edx + 6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x6u));
    /* 004f7720: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f7722: jge 0x4f7846 */ if ((fS==fO)) goto L_004f7846;
L_004f7728:; BB(0x004f7728);
    /* 004f7728: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004f772c: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 004f772f: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 004f7732: movzx ecx, byte ptr [eax + ecx] */ r_ecx = (u32)R8((u32)(r_eax+r_ecx));
    /* 004f7736: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7738: jne 0x4f7841 */ if (!fZ) goto L_004f7841;
L_004f773e:; BB(0x004f773e);
    /* 004f773e: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004f7742: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 004f7745: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 004f7748: movzx edx, byte ptr [ecx + edx] */ r_edx = (u32)R8((u32)(r_ecx+r_edx));
    /* 004f774c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f774e: je 0x4f7841 */ if (fZ) goto L_004f7841;
L_004f7754:; BB(0x004f7754);
    /* 004f7754: movzx eax, byte ptr [ebp + 8] */ r_eax = (u32)R8((u32)(r_ebp+0x8u));
    /* 004f7758: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f775a: je 0x4f77ce */ if (fZ) goto L_004f77ce;
L_004f775c:; BB(0x004f775c);
    /* 004f775c: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 004f775f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f7760: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004f7764: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 004f7767: mov ecx, dword ptr [eax + 0x7c] */ r_ecx = R32((u32)(r_eax+0x7cu));
    /* 004f776a: lea ecx, [ecx + edx*4] */ r_ecx = (u32)(r_ecx+r_edx*4);
    /* 004f776d: call 0x4a2340 */ r_esp -= 4; W32(r_esp, 0x4f7772u); f_004a2340();
    /* 004f7772: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004f7775: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7777: je 0x4f77cc */ if (fZ) goto L_004f77cc;
L_004f7779:; BB(0x004f7779);
    /* 004f7779: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004f777d: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004f7780: mov edx, dword ptr [ecx + 0x70] */ r_edx = R32((u32)(r_ecx+0x70u));
    /* 004f7783: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 004f7786: add eax, dword ptr [ebp - 0x2c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffd4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f7789: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004f778d: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 004f7790: mov edx, dword ptr [edx + 0x70] */ r_edx = R32((u32)(r_edx+0x70u));
    /* 004f7793: mov dword ptr [edx + ecx*4], eax */ W32((u32)(r_edx+r_ecx*4), r_eax);
    /* 004f7796: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004f779a: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004f779d: mov edx, dword ptr [ecx + 0x4c] */ r_edx = R32((u32)(r_ecx+0x4cu));
    /* 004f77a0: movsx eax, word ptr [edx + eax*2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+r_eax*2));
    /* 004f77a4: movsx ecx, word ptr [ebp - 0x28] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd8u));
    /* 004f77a8: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 004f77ab: mov edx, dword ptr [edx + 0x4c] */ r_edx = R32((u32)(r_edx+0x4cu));
    /* 004f77ae: movsx ecx, word ptr [edx + ecx*2] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx+r_ecx*2));
    /* 004f77b2: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f77b4: jle 0x4f77be */ if ((fZ||fS!=fO)) goto L_004f77be;
L_004f77b6:; BB(0x004f77b6);
    /* 004f77b6: mov dx, word ptr [ebp - 0x10] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff0u))) & 0xffffu);
    /* 004f77ba: mov word ptr [ebp - 0x28], dx */ W16((u32)(r_ebp+0xffffffd8u), (u16)r_edx);
L_004f77be:; BB(0x004f77be);
    /* 004f77be: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004f77c2: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004f77c5: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 004f77c8: mov byte ptr [eax + edx], 0 */ W8((u32)(r_eax+r_edx), 0x0u);
L_004f77cc:; BB(0x004f77cc);
    /* 004f77cc: jmp 0x4f7841 */ goto L_004f7841;
L_004f77ce:; BB(0x004f77ce);
    /* 004f77ce: lea eax, [ebp - 0x14] */ r_eax = (u32)(r_ebp+0xffffffecu);
    /* 004f77d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f77d2: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004f77d6: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 004f77d9: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 004f77df: lea ecx, [eax + ecx*4] */ r_ecx = (u32)(r_eax+r_ecx*4);
    /* 004f77e2: call 0x4a2340 */ r_esp -= 4; W32(r_esp, 0x4f77e7u); f_004a2340();
    /* 004f77e7: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004f77ea: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f77ec: je 0x4f7841 */ if (fZ) goto L_004f7841;
L_004f77ee:; BB(0x004f77ee);
    /* 004f77ee: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004f77f2: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 004f77f5: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 004f77f8: mov edx, dword ptr [ecx + edx*4] */ r_edx = R32((u32)(r_ecx+r_edx*4));
    /* 004f77fb: add edx, dword ptr [ebp - 0x2c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffd4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f77fe: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004f7802: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004f7805: mov ecx, dword ptr [ecx + 0x70] */ r_ecx = R32((u32)(r_ecx+0x70u));
    /* 004f7808: mov dword ptr [ecx + eax*4], edx */ W32((u32)(r_ecx+r_eax*4), r_edx);
    /* 004f780b: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004f780f: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 004f7812: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 004f7815: movsx edx, word ptr [ecx + edx*2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+r_edx*2));
    /* 004f7819: movsx eax, word ptr [ebp - 0x28] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd8u));
    /* 004f781d: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004f7820: mov ecx, dword ptr [ecx + 0x4c] */ r_ecx = R32((u32)(r_ecx+0x4cu));
    /* 004f7823: movsx eax, word ptr [ecx + eax*2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+r_eax*2));
    /* 004f7827: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f7829: jle 0x4f7833 */ if ((fZ||fS!=fO)) goto L_004f7833;
L_004f782b:; BB(0x004f782b);
    /* 004f782b: mov cx, word ptr [ebp - 0x10] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff0u))) & 0xffffu);
    /* 004f782f: mov word ptr [ebp - 0x28], cx */ W16((u32)(r_ebp+0xffffffd8u), (u16)r_ecx);
L_004f7833:; BB(0x004f7833);
    /* 004f7833: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004f7837: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 004f783a: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 004f783d: mov byte ptr [edx + ecx], 0 */ W8((u32)(r_edx+r_ecx), 0x0u);
L_004f7841:; BB(0x004f7841);
    /* 004f7841: jmp 0x4f7709 */ goto L_004f7709;
L_004f7846:; BB(0x004f7846);
    /* 004f7846: movsx edx, word ptr [ebp - 0x28] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd8u));
    /* 004f784a: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 004f784d: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 004f7850: mov edx, dword ptr [ecx + edx*4] */ r_edx = R32((u32)(r_ecx+r_edx*4));
    /* 004f7853: add edx, dword ptr [ebp - 0x24] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f7856: movsx eax, word ptr [ebp - 0x28] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd8u));
    /* 004f785a: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004f785d: mov ecx, dword ptr [ecx + 0x70] */ r_ecx = R32((u32)(r_ecx+0x70u));
    /* 004f7860: mov dword ptr [ecx + eax*4], edx */ W32((u32)(r_ecx+r_eax*4), r_edx);
    /* 004f7863: mov word ptr [ebp - 0x30], 0xfffc */ W16((u32)(r_ebp+0xffffffd0u), 0xfffcu);
    /* 004f7869: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004f7870: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 004f7873: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x4f7878u); f_004a20f0();
    /* 004f7878: mov ax, word ptr [ebp - 0x30] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffd0u))) & 0xffffu);
    /* 004f787c: jmp 0x4f788d */ goto L_004f788d;
L_004f788d:; BB(0x004f788d);
    /* 004f788d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f7890: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004f7897: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f7898: mov esp, ebp */ r_esp = r_ebp;
    /* 004f789a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f789b: ret 4 */ FN_RET(0x004f73d0); r_esp += 8; return;
}

void f_004f78a0(void) /* PokerPot::func_004f78a0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f78a0);
    /* 004f78a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f78a1: mov ebp, esp */ r_ebp = r_esp;
    /* 004f78a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f78a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004f78a7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f78aa: movzx ecx, byte ptr [eax + 1] */ r_ecx = (u32)R8((u32)(r_eax+0x1u));
    /* 004f78ae: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f78b0: jne 0x4f78c9 */ if (!fZ) goto L_004f78c9;
L_004f78b2:; BB(0x004f78b2);
    /* 004f78b2: push 0x3e9 */ { u32 v = 0x3e9u; r_esp -= 4; W32(r_esp, v); }
    /* 004f78b7: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f78bc: push 0x6bfe6c */ { u32 v = 0x6bfe6cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f78c1: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f78c6u); f_005e9f20();
    /* 004f78c6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f78c9:; BB(0x004f78c9);
    /* 004f78c9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f78cc: movzx ecx, byte ptr [eax + 3] */ r_ecx = (u32)R8((u32)(r_eax+0x3u));
    /* 004f78d0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f78d2: jne 0x4f78eb */ if (!fZ) goto L_004f78eb;
L_004f78d4:; BB(0x004f78d4);
    /* 004f78d4: push 0x3ea */ { u32 v = 0x3eau; r_esp -= 4; W32(r_esp, v); }
    /* 004f78d9: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f78de: push 0x6c0138 */ { u32 v = 0x6c0138u; r_esp -= 4; W32(r_esp, v); }
    /* 004f78e3: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f78e8u); f_005e9f20();
    /* 004f78e8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f78eb:; BB(0x004f78eb);
    /* 004f78eb: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f78ef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004f78f1: jge 0x4f790a */ if ((fS==fO)) goto L_004f790a;
L_004f78f3:; BB(0x004f78f3);
    /* 004f78f3: push 0x3eb */ { u32 v = 0x3ebu; r_esp -= 4; W32(r_esp, v); }
    /* 004f78f8: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f78fd: push 0x6c0230 */ { u32 v = 0x6c0230u; r_esp -= 4; W32(r_esp, v); }
    /* 004f7902: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f7907u); f_005e9f20();
    /* 004f7907: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f790a:; BB(0x004f790a);
    /* 004f790a: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f790e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f7911: movsx ecx, word ptr [eax + 6] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x6u));
    /* 004f7915: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f7917: jl 0x4f7930 */ if ((fS!=fO)) goto L_004f7930;
L_004f7919:; BB(0x004f7919);
    /* 004f7919: push 0x3ec */ { u32 v = 0x3ecu; r_esp -= 4; W32(r_esp, v); }
    /* 004f791e: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f7923: push 0x6c020c */ { u32 v = 0x6c020cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f7928: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f792du); f_005e9f20();
    /* 004f792d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f7930:; BB(0x004f7930);
    /* 004f7930: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f7933: movzx ecx, byte ptr [eax + 5] */ r_ecx = (u32)R8((u32)(r_eax+0x5u));
    /* 004f7937: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7939: jne 0x4f7952 */ if (!fZ) goto L_004f7952;
L_004f793b:; BB(0x004f793b);
    /* 004f793b: push 0x3ed */ { u32 v = 0x3edu; r_esp -= 4; W32(r_esp, v); }
    /* 004f7940: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f7945: push 0x6c02e0 */ { u32 v = 0x6c02e0u; r_esp -= 4; W32(r_esp, v); }
    /* 004f794a: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f794fu); f_005e9f20();
    /* 004f794f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f7952:; BB(0x004f7952);
    /* 004f7952: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f7955: movzx ecx, byte ptr [eax + 4] */ r_ecx = (u32)R8((u32)(r_eax+0x4u));
    /* 004f7959: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f795b: je 0x4f7974 */ if (fZ) goto L_004f7974;
L_004f795d:; BB(0x004f795d);
    /* 004f795d: push 0x3ee */ { u32 v = 0x3eeu; r_esp -= 4; W32(r_esp, v); }
    /* 004f7962: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f7967: push 0x6c02c4 */ { u32 v = 0x6c02c4u; r_esp -= 4; W32(r_esp, v); }
    /* 004f796c: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f7971u); f_005e9f20();
    /* 004f7971: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f7974:; BB(0x004f7974);
    /* 004f7974: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f7978: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f797b: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 004f797e: movzx eax, byte ptr [edx + eax] */ r_eax = (u32)R8((u32)(r_edx+r_eax));
    /* 004f7982: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7984: jne 0x4f799d */ if (!fZ) goto L_004f799d;
L_004f7986:; BB(0x004f7986);
    /* 004f7986: push 0x3ef */ { u32 v = 0x3efu; r_esp -= 4; W32(r_esp, v); }
    /* 004f798b: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f7990: push 0x6c02a0 */ { u32 v = 0x6c02a0u; r_esp -= 4; W32(r_esp, v); }
    /* 004f7995: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f799au); f_005e9f20();
    /* 004f799a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f799d:; BB(0x004f799d);
    /* 004f799d: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f79a1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f79a4: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 004f79a7: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 004f79aa: mov esp, ebp */ r_esp = r_ebp;
    /* 004f79ac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f79ad: ret 4 */ FN_RET(0x004f78a0); r_esp += 8; return;
}

void f_004f79b0(void) /* PokerPot::func_004f79b0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f79b0);
    /* 004f79b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f79b1: mov ebp, esp */ r_ebp = r_esp;
    /* 004f79b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f79b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004f79b7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f79ba: movzx ecx, byte ptr [eax + 1] */ r_ecx = (u32)R8((u32)(r_eax+0x1u));
    /* 004f79be: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f79c0: jne 0x4f79d9 */ if (!fZ) goto L_004f79d9;
L_004f79c2:; BB(0x004f79c2);
    /* 004f79c2: push 0x3f9 */ { u32 v = 0x3f9u; r_esp -= 4; W32(r_esp, v); }
    /* 004f79c7: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f79cc: push 0x6bfe6c */ { u32 v = 0x6bfe6cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f79d1: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f79d6u); f_005e9f20();
    /* 004f79d6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f79d9:; BB(0x004f79d9);
    /* 004f79d9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f79dc: movzx ecx, byte ptr [eax + 3] */ r_ecx = (u32)R8((u32)(r_eax+0x3u));
    /* 004f79e0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f79e2: jne 0x4f79fb */ if (!fZ) goto L_004f79fb;
L_004f79e4:; BB(0x004f79e4);
    /* 004f79e4: push 0x3fa */ { u32 v = 0x3fau; r_esp -= 4; W32(r_esp, v); }
    /* 004f79e9: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f79ee: push 0x6c0138 */ { u32 v = 0x6c0138u; r_esp -= 4; W32(r_esp, v); }
    /* 004f79f3: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f79f8u); f_005e9f20();
    /* 004f79f8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f79fb:; BB(0x004f79fb);
    /* 004f79fb: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f79ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004f7a01: jge 0x4f7a1a */ if ((fS==fO)) goto L_004f7a1a;
L_004f7a03:; BB(0x004f7a03);
    /* 004f7a03: push 0x3fb */ { u32 v = 0x3fbu; r_esp -= 4; W32(r_esp, v); }
    /* 004f7a08: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f7a0d: push 0x6c0230 */ { u32 v = 0x6c0230u; r_esp -= 4; W32(r_esp, v); }
    /* 004f7a12: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f7a17u); f_005e9f20();
    /* 004f7a17: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f7a1a:; BB(0x004f7a1a);
    /* 004f7a1a: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f7a1e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f7a21: movsx ecx, word ptr [eax + 6] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x6u));
    /* 004f7a25: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f7a27: jl 0x4f7a40 */ if ((fS!=fO)) goto L_004f7a40;
L_004f7a29:; BB(0x004f7a29);
    /* 004f7a29: push 0x3fc */ { u32 v = 0x3fcu; r_esp -= 4; W32(r_esp, v); }
    /* 004f7a2e: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f7a33: push 0x6c020c */ { u32 v = 0x6c020cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f7a38: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f7a3du); f_005e9f20();
    /* 004f7a3d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f7a40:; BB(0x004f7a40);
    /* 004f7a40: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f7a43: movzx ecx, byte ptr [eax + 5] */ r_ecx = (u32)R8((u32)(r_eax+0x5u));
    /* 004f7a47: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7a49: jne 0x4f7a62 */ if (!fZ) goto L_004f7a62;
L_004f7a4b:; BB(0x004f7a4b);
    /* 004f7a4b: push 0x3fd */ { u32 v = 0x3fdu; r_esp -= 4; W32(r_esp, v); }
    /* 004f7a50: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f7a55: push 0x6c02e0 */ { u32 v = 0x6c02e0u; r_esp -= 4; W32(r_esp, v); }
    /* 004f7a5a: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f7a5fu); f_005e9f20();
    /* 004f7a5f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f7a62:; BB(0x004f7a62);
    /* 004f7a62: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f7a65: movzx ecx, byte ptr [eax + 4] */ r_ecx = (u32)R8((u32)(r_eax+0x4u));
    /* 004f7a69: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7a6b: jne 0x4f7a84 */ if (!fZ) goto L_004f7a84;
L_004f7a6d:; BB(0x004f7a6d);
    /* 004f7a6d: push 0x3fe */ { u32 v = 0x3feu; r_esp -= 4; W32(r_esp, v); }
    /* 004f7a72: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f7a77: push 0x6c02f4 */ { u32 v = 0x6c02f4u; r_esp -= 4; W32(r_esp, v); }
    /* 004f7a7c: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f7a81u); f_005e9f20();
    /* 004f7a81: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f7a84:; BB(0x004f7a84);
    /* 004f7a84: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f7a88: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f7a8b: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 004f7a8e: movzx eax, byte ptr [edx + eax] */ r_eax = (u32)R8((u32)(r_edx+r_eax));
    /* 004f7a92: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7a94: jne 0x4f7aad */ if (!fZ) goto L_004f7aad;
L_004f7a96:; BB(0x004f7a96);
    /* 004f7a96: push 0x3ff */ { u32 v = 0x3ffu; r_esp -= 4; W32(r_esp, v); }
    /* 004f7a9b: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f7aa0: push 0x6c02a0 */ { u32 v = 0x6c02a0u; r_esp -= 4; W32(r_esp, v); }
    /* 004f7aa5: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f7aaau); f_005e9f20();
    /* 004f7aaa: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f7aad:; BB(0x004f7aad);
    /* 004f7aad: movzx edx, byte ptr [ebp + 0xc] */ r_edx = (u32)R8((u32)(r_ebp+0xcu));
    /* 004f7ab1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7ab3: je 0x4f7ac6 */ if (fZ) goto L_004f7ac6;
L_004f7ab5:; BB(0x004f7ab5);
    /* 004f7ab5: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f7ab9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f7abc: mov edx, dword ptr [ecx + 0x74] */ r_edx = R32((u32)(r_ecx+0x74u));
    /* 004f7abf: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 004f7ac2: jmp 0x4f7ad3 */ goto L_004f7ad3;
L_004f7ac6:; BB(0x004f7ac6);
    /* 004f7ac6: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004f7aca: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f7acd: mov edx, dword ptr [ecx + 0x78] */ r_edx = R32((u32)(r_ecx+0x78u));
    /* 004f7ad0: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
L_004f7ad3:; BB(0x004f7ad3);
    /* 004f7ad3: mov esp, ebp */ r_esp = r_ebp;
    /* 004f7ad5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f7ad6: ret 8 */ FN_RET(0x004f79b0); r_esp += 12; return;
}

void f_004f7ae0(void) /* PokerPot::func_004f7ae0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f7ae0);
    /* 004f7ae0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f7ae1: mov ebp, esp */ r_ebp = r_esp;
    /* 004f7ae3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f7ae6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004f7ae9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f7aec: movzx ecx, byte ptr [eax + 1] */ r_ecx = (u32)R8((u32)(r_eax+0x1u));
    /* 004f7af0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7af2: jne 0x4f7b0b */ if (!fZ) goto L_004f7b0b;
L_004f7af4:; BB(0x004f7af4);
    /* 004f7af4: push 0x40a */ { u32 v = 0x40au; r_esp -= 4; W32(r_esp, v); }
    /* 004f7af9: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f7afe: push 0x6bfe6c */ { u32 v = 0x6bfe6cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f7b03: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f7b08u); f_005e9f20();
    /* 004f7b08: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f7b0b:; BB(0x004f7b0b);
    /* 004f7b0b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f7b0e: movzx ecx, byte ptr [eax + 3] */ r_ecx = (u32)R8((u32)(r_eax+0x3u));
    /* 004f7b12: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7b14: jne 0x4f7b2d */ if (!fZ) goto L_004f7b2d;
L_004f7b16:; BB(0x004f7b16);
    /* 004f7b16: push 0x40b */ { u32 v = 0x40bu; r_esp -= 4; W32(r_esp, v); }
    /* 004f7b1b: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f7b20: push 0x6c0138 */ { u32 v = 0x6c0138u; r_esp -= 4; W32(r_esp, v); }
    /* 004f7b25: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f7b2au); f_005e9f20();
    /* 004f7b2a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f7b2d:; BB(0x004f7b2d);
    /* 004f7b2d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f7b30: movzx ecx, byte ptr [eax + 5] */ r_ecx = (u32)R8((u32)(r_eax+0x5u));
    /* 004f7b34: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7b36: jne 0x4f7b4f */ if (!fZ) goto L_004f7b4f;
L_004f7b38:; BB(0x004f7b38);
    /* 004f7b38: push 0x40c */ { u32 v = 0x40cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f7b3d: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f7b42: push 0x6c02e0 */ { u32 v = 0x6c02e0u; r_esp -= 4; W32(r_esp, v); }
    /* 004f7b47: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f7b4cu); f_005e9f20();
    /* 004f7b4c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f7b4f:; BB(0x004f7b4f);
    /* 004f7b4f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f7b52: movzx ecx, byte ptr [eax + 4] */ r_ecx = (u32)R8((u32)(r_eax+0x4u));
    /* 004f7b56: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7b58: je 0x4f7b71 */ if (fZ) goto L_004f7b71;
L_004f7b5a:; BB(0x004f7b5a);
    /* 004f7b5a: push 0x40d */ { u32 v = 0x40du; r_esp -= 4; W32(r_esp, v); }
    /* 004f7b5f: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f7b64: push 0x6c02c4 */ { u32 v = 0x6c02c4u; r_esp -= 4; W32(r_esp, v); }
    /* 004f7b69: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f7b6eu); f_005e9f20();
    /* 004f7b6e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f7b71:; BB(0x004f7b71);
    /* 004f7b71: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004f7b77: jmp 0x4f7b85 */ goto L_004f7b85;
L_004f7b79:; BB(0x004f7b79);
    /* 004f7b79: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004f7b7d: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f7b81: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_004f7b85:; BB(0x004f7b85);
    /* 004f7b85: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f7b89: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f7b8c: movsx eax, word ptr [edx + 6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x6u));
    /* 004f7b90: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f7b92: jge 0x4f7bbc */ if ((fS==fO)) goto L_004f7bbc;
L_004f7b94:; BB(0x004f7b94);
    /* 004f7b94: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f7b98: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f7b9b: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 004f7b9e: movzx ecx, byte ptr [eax + ecx] */ r_ecx = (u32)R8((u32)(r_eax+r_ecx));
    /* 004f7ba2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7ba4: jne 0x4f7bba */ if (!fZ) goto L_004f7bba;
L_004f7ba6:; BB(0x004f7ba6);
    /* 004f7ba6: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f7baa: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f7bad: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 004f7bb0: mov byte ptr [edx + ecx], 1 */ W8((u32)(r_edx+r_ecx), 0x1u);
    /* 004f7bb4: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004f7bb8: jmp 0x4f7bc0 */ goto L_004f7bc0;
L_004f7bba:; BB(0x004f7bba);
    /* 004f7bba: jmp 0x4f7b79 */ goto L_004f7b79;
L_004f7bbc:; BB(0x004f7bbc);
    /* 004f7bbc: or ax, 0xffff */ {  u32 a = (u16)r_eax; u32 b = 0xffffu; u32 r = (a | b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
L_004f7bc0:; BB(0x004f7bc0);
    /* 004f7bc0: mov esp, ebp */ r_esp = r_ebp;
    /* 004f7bc2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f7bc3: ret  */ FN_RET(0x004f7ae0); r_esp += 4; return;
}

void f_004f7bd0(void) /* PokerPot::func_004f7bd0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f7bd0);
    /* 004f7bd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f7bd1: mov ebp, esp */ r_ebp = r_esp;
    /* 004f7bd3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004f7bd5: push 0x6a26ca */ { u32 v = 0x6a26cau; r_esp -= 4; W32(r_esp, v); }
    /* 004f7bda: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004f7be0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f7be1: sub esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f7be4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 004f7be9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f7beb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f7bec: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 004f7bef: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 004f7bf5: mov dword ptr [ebp - 0x64], ecx */ W32((u32)(r_ebp+0xffffff9cu), r_ecx);
    /* 004f7bf8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004f7bff: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f7c02: movzx ecx, byte ptr [eax + 1] */ r_ecx = (u32)R8((u32)(r_eax+0x1u));
    /* 004f7c06: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7c08: jne 0x4f7c21 */ if (!fZ) goto L_004f7c21;
L_004f7c0a:; BB(0x004f7c0a);
    /* 004f7c0a: push 0x420 */ { u32 v = 0x420u; r_esp -= 4; W32(r_esp, v); }
    /* 004f7c0f: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f7c14: push 0x6bfe6c */ { u32 v = 0x6bfe6cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f7c19: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f7c1eu); f_005e9f20();
    /* 004f7c1e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f7c21:; BB(0x004f7c21);
    /* 004f7c21: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f7c24: movzx ecx, byte ptr [eax + 3] */ r_ecx = (u32)R8((u32)(r_eax+0x3u));
    /* 004f7c28: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7c2a: jne 0x4f7c43 */ if (!fZ) goto L_004f7c43;
L_004f7c2c:; BB(0x004f7c2c);
    /* 004f7c2c: push 0x421 */ { u32 v = 0x421u; r_esp -= 4; W32(r_esp, v); }
    /* 004f7c31: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f7c36: push 0x6c0138 */ { u32 v = 0x6c0138u; r_esp -= 4; W32(r_esp, v); }
    /* 004f7c3b: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f7c40u); f_005e9f20();
    /* 004f7c40: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f7c43:; BB(0x004f7c43);
    /* 004f7c43: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f7c46: call 0x4f6e70 */ r_esp -= 4; W32(r_esp, 0x4f7c4bu); f_004f6e70();
    /* 004f7c4b: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 004f7c4e: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7c51: je 0x4f7c6a */ if (fZ) goto L_004f7c6a;
L_004f7c53:; BB(0x004f7c53);
    /* 004f7c53: push 0x422 */ { u32 v = 0x422u; r_esp -= 4; W32(r_esp, v); }
    /* 004f7c58: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f7c5d: push 0x6c027c */ { u32 v = 0x6c027cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f7c62: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f7c67u); f_005e9f20();
    /* 004f7c67: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f7c6a:; BB(0x004f7c6a);
    /* 004f7c6a: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f7c6d: mov byte ptr [edx + 5], 1 */ W8((u32)(r_edx+0x5u), 0x1u);
    /* 004f7c71: lea ecx, [ebp - 0x34] */ r_ecx = (u32)(r_ebp+0xffffffccu);
    /* 004f7c74: call 0x4a20d0 */ r_esp -= 4; W32(r_esp, 0x4f7c79u); f_004a20d0();
    /* 004f7c79: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004f7c7d: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 004f7c82: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 004f7c87: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 004f7c8c: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 004f7c91: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 004f7c96: mov eax, dword ptr [0x791390] */ r_eax = R32((u32)(0x791390u));
    /* 004f7c9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f7c9c: lea ecx, [ebp - 0x34] */ r_ecx = (u32)(r_ebp+0xffffffccu);
    /* 004f7c9f: call 0x4a2100 */ r_esp -= 4; W32(r_esp, 0x4f7ca4u); f_004a2100();
    /* 004f7ca4: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 004f7ca7: call 0x4a20d0 */ r_esp -= 4; W32(r_esp, 0x4f7cacu); f_004a20d0();
    /* 004f7cac: mov byte ptr [ebp - 4], 2 */ W8((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 004f7cb0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004f7cb3: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004f7cb6: mov word ptr [ebp - 0x30], 0 */ W16((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 004f7cbc: mov word ptr [ebp - 0x1c], 0 */ W16((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 004f7cc2: mov word ptr [ebp - 0x24], 0 */ W16((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004f7cc8: jmp 0x4f7cd6 */ goto L_004f7cd6;
L_004f7cca:; BB(0x004f7cca);
    /* 004f7cca: mov dx, word ptr [ebp - 0x24] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffdcu))) & 0xffffu);
    /* 004f7cce: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f7cd2: mov word ptr [ebp - 0x24], dx */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_edx);
L_004f7cd6:; BB(0x004f7cd6);
    /* 004f7cd6: movsx eax, word ptr [ebp - 0x24] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f7cda: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f7cdd: movsx edx, word ptr [ecx + 6] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x6u));
    /* 004f7ce1: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f7ce3: jge 0x4f7de7 */ if ((fS==fO)) goto L_004f7de7;
L_004f7ce9:; BB(0x004f7ce9);
    /* 004f7ce9: movsx eax, word ptr [ebp - 0x24] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f7ced: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f7cf0: mov edx, dword ptr [ecx + 0x44] */ r_edx = R32((u32)(r_ecx+0x44u));
    /* 004f7cf3: mov byte ptr [eax + edx], 0 */ W8((u32)(r_eax+r_edx), 0x0u);
    /* 004f7cf7: movsx eax, word ptr [ebp - 0x24] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f7cfb: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f7cfe: mov edx, dword ptr [ecx + 0x48] */ r_edx = R32((u32)(r_ecx+0x48u));
    /* 004f7d01: mov byte ptr [eax + edx], 0 */ W8((u32)(r_eax+r_edx), 0x0u);
    /* 004f7d05: movsx eax, word ptr [ebp - 0x24] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f7d09: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f7d0c: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 004f7d0f: movzx eax, byte ptr [edx + eax] */ r_eax = (u32)R8((u32)(r_edx+r_eax));
    /* 004f7d13: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7d15: jne 0x4f7de2 */ if (!fZ) goto L_004f7de2;
L_004f7d1b:; BB(0x004f7d1b);
    /* 004f7d1b: movsx ecx, word ptr [ebp - 0x24] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f7d1f: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f7d22: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 004f7d25: movzx ecx, byte ptr [eax + ecx] */ r_ecx = (u32)R8((u32)(r_eax+r_ecx));
    /* 004f7d29: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7d2b: je 0x4f7de2 */ if (fZ) goto L_004f7de2;
L_004f7d31:; BB(0x004f7d31);
    /* 004f7d31: mov dx, word ptr [ebp - 0x30] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffd0u))) & 0xffffu);
    /* 004f7d35: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f7d39: mov word ptr [ebp - 0x30], dx */ W16((u32)(r_ebp+0xffffffd0u), (u16)r_edx);
    /* 004f7d3d: movsx eax, word ptr [ebp - 0x24] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f7d41: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f7d44: mov edx, dword ptr [ecx + 0x84] */ r_edx = R32((u32)(r_ecx+0x84u));
    /* 004f7d4a: cmp dword ptr [edx + eax*4], 2 */ {  u32 a = R32((u32)(r_edx+r_eax*4)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7d4e: je 0x4f7d7d */ if (fZ) goto L_004f7d7d;
L_004f7d50:; BB(0x004f7d50);
    /* 004f7d50: lea eax, [ebp - 0x34] */ r_eax = (u32)(r_ebp+0xffffffccu);
    /* 004f7d53: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f7d54: movsx ecx, word ptr [ebp - 0x24] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f7d58: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f7d5b: mov eax, dword ptr [edx + 0x7c] */ r_eax = R32((u32)(r_edx+0x7cu));
    /* 004f7d5e: lea ecx, [eax + ecx*4] */ r_ecx = (u32)(r_eax+r_ecx*4);
    /* 004f7d61: call 0x4a2440 */ r_esp -= 4; W32(r_esp, 0x4f7d66u); f_004a2440();
    /* 004f7d66: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004f7d69: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7d6b: je 0x4f7d7d */ if (fZ) goto L_004f7d7d;
L_004f7d6d:; BB(0x004f7d6d);
    /* 004f7d6d: movsx edx, word ptr [ebp - 0x24] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f7d71: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f7d74: mov ecx, dword ptr [eax + 0x7c] */ r_ecx = R32((u32)(r_eax+0x7cu));
    /* 004f7d77: mov edx, dword ptr [ecx + edx*4] */ r_edx = R32((u32)(r_ecx+r_edx*4));
    /* 004f7d7a: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
L_004f7d7d:; BB(0x004f7d7d);
    /* 004f7d7d: movsx eax, word ptr [ebp - 0x24] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f7d81: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f7d84: mov edx, dword ptr [ecx + 0x84] */ r_edx = R32((u32)(r_ecx+0x84u));
    /* 004f7d8a: cmp dword ptr [edx + eax*4], 1 */ {  u32 a = R32((u32)(r_edx+r_eax*4)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7d8e: je 0x4f7dc3 */ if (fZ) goto L_004f7dc3;
L_004f7d90:; BB(0x004f7d90);
    /* 004f7d90: lea eax, [ebp - 0x14] */ r_eax = (u32)(r_ebp+0xffffffecu);
    /* 004f7d93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f7d94: movsx ecx, word ptr [ebp - 0x24] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f7d98: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f7d9b: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 004f7da1: lea ecx, [eax + ecx*4] */ r_ecx = (u32)(r_eax+r_ecx*4);
    /* 004f7da4: call 0x4a2550 */ r_esp -= 4; W32(r_esp, 0x4f7da9u); f_004a2550();
    /* 004f7da9: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004f7dac: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7dae: je 0x4f7dc3 */ if (fZ) goto L_004f7dc3;
L_004f7db0:; BB(0x004f7db0);
    /* 004f7db0: movsx edx, word ptr [ebp - 0x24] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f7db4: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f7db7: mov ecx, dword ptr [eax + 0x80] */ r_ecx = R32((u32)(r_eax+0x80u));
    /* 004f7dbd: mov edx, dword ptr [ecx + edx*4] */ r_edx = R32((u32)(r_ecx+r_edx*4));
    /* 004f7dc0: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
L_004f7dc3:; BB(0x004f7dc3);
    /* 004f7dc3: movsx eax, word ptr [ebp - 0x24] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f7dc7: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f7dca: mov edx, dword ptr [ecx + 0x84] */ r_edx = R32((u32)(r_ecx+0x84u));
    /* 004f7dd0: cmp dword ptr [edx + eax*4], 3 */ {  u32 a = R32((u32)(r_edx+r_eax*4)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7dd4: jne 0x4f7de2 */ if (!fZ) goto L_004f7de2;
L_004f7dd6:; BB(0x004f7dd6);
    /* 004f7dd6: mov ax, word ptr [ebp - 0x1c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe4u))) & 0xffffu);
    /* 004f7dda: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f7dde: mov word ptr [ebp - 0x1c], ax */ W16((u32)(r_ebp+0xffffffe4u), (u16)r_eax);
L_004f7de2:; BB(0x004f7de2);
    /* 004f7de2: jmp 0x4f7cca */ goto L_004f7cca;
L_004f7de7:; BB(0x004f7de7);
    /* 004f7de7: movsx ecx, word ptr [ebp - 0x1c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 004f7deb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f7ded: jle 0x4f8023 */ if ((fZ||fS!=fO)) goto L_004f8023;
L_004f7df3:; BB(0x004f7df3);
    /* 004f7df3: movsx edx, word ptr [ebp - 0x1c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 004f7df7: movsx eax, word ptr [ebp - 0x30] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd0u));
    /* 004f7dfb: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7dfd: je 0x4f8023 */ if (fZ) goto L_004f8023;
L_004f7e03:; BB(0x004f7e03);
    /* 004f7e03: mov word ptr [ebp - 0x24], 0 */ W16((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004f7e09: jmp 0x4f7e17 */ goto L_004f7e17;
L_004f7e0b:; BB(0x004f7e0b);
    /* 004f7e0b: mov cx, word ptr [ebp - 0x24] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffdcu))) & 0xffffu);
    /* 004f7e0f: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f7e13: mov word ptr [ebp - 0x24], cx */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_ecx);
L_004f7e17:; BB(0x004f7e17);
    /* 004f7e17: movsx edx, word ptr [ebp - 0x24] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f7e1b: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f7e1e: movsx ecx, word ptr [eax + 6] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x6u));
    /* 004f7e22: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f7e24: jge 0x4f7f17 */ if ((fS==fO)) goto L_004f7f17;
L_004f7e2a:; BB(0x004f7e2a);
    /* 004f7e2a: movsx edx, word ptr [ebp - 0x24] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f7e2e: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f7e31: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 004f7e34: movzx edx, byte ptr [ecx + edx] */ r_edx = (u32)R8((u32)(r_ecx+r_edx));
    /* 004f7e38: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7e3a: jne 0x4f7f12 */ if (!fZ) goto L_004f7f12;
L_004f7e40:; BB(0x004f7e40);
    /* 004f7e40: movsx eax, word ptr [ebp - 0x24] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f7e44: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f7e47: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 004f7e4a: movzx eax, byte ptr [edx + eax] */ r_eax = (u32)R8((u32)(r_edx+r_eax));
    /* 004f7e4e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7e50: je 0x4f7f12 */ if (fZ) goto L_004f7f12;
L_004f7e56:; BB(0x004f7e56);
    /* 004f7e56: movsx ecx, word ptr [ebp - 0x24] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f7e5a: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f7e5d: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 004f7e63: cmp dword ptr [eax + ecx*4], 3 */ {  u32 a = R32((u32)(r_eax+r_ecx*4)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7e67: jne 0x4f7f12 */ if (!fZ) goto L_004f7f12;
L_004f7e6d:; BB(0x004f7e6d);
    /* 004f7e6d: lea ecx, [ebp - 0x34] */ r_ecx = (u32)(r_ebp+0xffffffccu);
    /* 004f7e70: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f7e71: movsx edx, word ptr [ebp - 0x24] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f7e75: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f7e78: mov ecx, dword ptr [eax + 0x7c] */ r_ecx = R32((u32)(r_eax+0x7cu));
    /* 004f7e7b: lea ecx, [ecx + edx*4] */ r_ecx = (u32)(r_ecx+r_edx*4);
    /* 004f7e7e: call 0x4a23c0 */ r_esp -= 4; W32(r_esp, 0x4f7e83u); f_004a23c0();
    /* 004f7e83: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004f7e86: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7e88: jne 0x4f7eaa */ if (!fZ) goto L_004f7eaa;
L_004f7e8a:; BB(0x004f7e8a);
    /* 004f7e8a: lea eax, [ebp - 0x14] */ r_eax = (u32)(r_ebp+0xffffffecu);
    /* 004f7e8d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f7e8e: movsx ecx, word ptr [ebp - 0x24] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f7e92: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f7e95: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 004f7e9b: lea ecx, [eax + ecx*4] */ r_ecx = (u32)(r_eax+r_ecx*4);
    /* 004f7e9e: call 0x4a23c0 */ r_esp -= 4; W32(r_esp, 0x4f7ea3u); f_004a23c0();
    /* 004f7ea3: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004f7ea6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7ea8: je 0x4f7f12 */ if (fZ) goto L_004f7f12;
L_004f7eaa:; BB(0x004f7eaa);
    /* 004f7eaa: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 004f7eaf: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 004f7eb4: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 004f7eb9: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 004f7ebe: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 004f7ec3: mov edx, dword ptr [0x791390] */ r_edx = R32((u32)(0x791390u));
    /* 004f7ec9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f7eca: movsx eax, word ptr [ebp - 0x24] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f7ece: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f7ed1: mov edx, dword ptr [ecx + 0x7c] */ r_edx = R32((u32)(r_ecx+0x7cu));
    /* 004f7ed4: lea ecx, [edx + eax*4] */ r_ecx = (u32)(r_edx+r_eax*4);
    /* 004f7ed7: call 0x4a2100 */ r_esp -= 4; W32(r_esp, 0x4f7edcu); f_004a2100();
    /* 004f7edc: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 004f7ee1: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 004f7ee6: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 004f7eeb: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 004f7ef0: mov eax, dword ptr [0x7913c8] */ r_eax = R32((u32)(0x7913c8u));
    /* 004f7ef5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f7ef6: mov ecx, dword ptr [0x7913cc] */ r_ecx = R32((u32)(0x7913ccu));
    /* 004f7efc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f7efd: movsx edx, word ptr [ebp - 0x24] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f7f01: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f7f04: mov ecx, dword ptr [eax + 0x80] */ r_ecx = R32((u32)(r_eax+0x80u));
    /* 004f7f0a: lea ecx, [ecx + edx*4] */ r_ecx = (u32)(r_ecx+r_edx*4);
    /* 004f7f0d: call 0x4a2100 */ r_esp -= 4; W32(r_esp, 0x4f7f12u); f_004a2100();
L_004f7f12:; BB(0x004f7f12);
    /* 004f7f12: jmp 0x4f7e0b */ goto L_004f7e0b;
L_004f7f17:; BB(0x004f7f17);
    /* 004f7f17: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 004f7f1c: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 004f7f21: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 004f7f26: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 004f7f2b: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 004f7f30: mov edx, dword ptr [0x791390] */ r_edx = R32((u32)(0x791390u));
    /* 004f7f36: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f7f37: lea ecx, [ebp - 0x34] */ r_ecx = (u32)(r_ebp+0xffffffccu);
    /* 004f7f3a: call 0x4a2100 */ r_esp -= 4; W32(r_esp, 0x4f7f3fu); f_004a2100();
    /* 004f7f3f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004f7f42: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004f7f45: mov word ptr [ebp - 0x24], 0 */ W16((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004f7f4b: jmp 0x4f7f59 */ goto L_004f7f59;
L_004f7f4d:; BB(0x004f7f4d);
    /* 004f7f4d: mov cx, word ptr [ebp - 0x24] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffdcu))) & 0xffffu);
    /* 004f7f51: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f7f55: mov word ptr [ebp - 0x24], cx */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_ecx);
L_004f7f59:; BB(0x004f7f59);
    /* 004f7f59: movsx edx, word ptr [ebp - 0x24] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f7f5d: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f7f60: movsx ecx, word ptr [eax + 6] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x6u));
    /* 004f7f64: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f7f66: jge 0x4f8023 */ if ((fS==fO)) goto L_004f8023;
L_004f7f6c:; BB(0x004f7f6c);
    /* 004f7f6c: movsx edx, word ptr [ebp - 0x24] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f7f70: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f7f73: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 004f7f76: movzx edx, byte ptr [ecx + edx] */ r_edx = (u32)R8((u32)(r_ecx+r_edx));
    /* 004f7f7a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7f7c: jne 0x4f801e */ if (!fZ) goto L_004f801e;
L_004f7f82:; BB(0x004f7f82);
    /* 004f7f82: movsx eax, word ptr [ebp - 0x24] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f7f86: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f7f89: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 004f7f8c: movzx eax, byte ptr [edx + eax] */ r_eax = (u32)R8((u32)(r_edx+r_eax));
    /* 004f7f90: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7f92: je 0x4f801e */ if (fZ) goto L_004f801e;
L_004f7f98:; BB(0x004f7f98);
    /* 004f7f98: movsx ecx, word ptr [ebp - 0x24] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f7f9c: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f7f9f: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 004f7fa5: cmp dword ptr [eax + ecx*4], 2 */ {  u32 a = R32((u32)(r_eax+r_ecx*4)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7fa9: je 0x4f7fd8 */ if (fZ) goto L_004f7fd8;
L_004f7fab:; BB(0x004f7fab);
    /* 004f7fab: lea ecx, [ebp - 0x34] */ r_ecx = (u32)(r_ebp+0xffffffccu);
    /* 004f7fae: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f7faf: movsx edx, word ptr [ebp - 0x24] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f7fb3: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f7fb6: mov ecx, dword ptr [eax + 0x7c] */ r_ecx = R32((u32)(r_eax+0x7cu));
    /* 004f7fb9: lea ecx, [ecx + edx*4] */ r_ecx = (u32)(r_ecx+r_edx*4);
    /* 004f7fbc: call 0x4a2440 */ r_esp -= 4; W32(r_esp, 0x4f7fc1u); f_004a2440();
    /* 004f7fc1: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004f7fc4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7fc6: je 0x4f7fd8 */ if (fZ) goto L_004f7fd8;
L_004f7fc8:; BB(0x004f7fc8);
    /* 004f7fc8: movsx eax, word ptr [ebp - 0x24] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f7fcc: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f7fcf: mov edx, dword ptr [ecx + 0x7c] */ r_edx = R32((u32)(r_ecx+0x7cu));
    /* 004f7fd2: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 004f7fd5: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
L_004f7fd8:; BB(0x004f7fd8);
    /* 004f7fd8: movsx ecx, word ptr [ebp - 0x24] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f7fdc: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f7fdf: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 004f7fe5: cmp dword ptr [eax + ecx*4], 1 */ {  u32 a = R32((u32)(r_eax+r_ecx*4)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f7fe9: je 0x4f801e */ if (fZ) goto L_004f801e;
L_004f7feb:; BB(0x004f7feb);
    /* 004f7feb: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 004f7fee: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f7fef: movsx edx, word ptr [ebp - 0x24] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f7ff3: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f7ff6: mov ecx, dword ptr [eax + 0x80] */ r_ecx = R32((u32)(r_eax+0x80u));
    /* 004f7ffc: lea ecx, [ecx + edx*4] */ r_ecx = (u32)(r_ecx+r_edx*4);
    /* 004f7fff: call 0x4a2550 */ r_esp -= 4; W32(r_esp, 0x4f8004u); f_004a2550();
    /* 004f8004: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004f8007: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8009: je 0x4f801e */ if (fZ) goto L_004f801e;
L_004f800b:; BB(0x004f800b);
    /* 004f800b: movsx eax, word ptr [ebp - 0x24] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f800f: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f8012: mov edx, dword ptr [ecx + 0x80] */ r_edx = R32((u32)(r_ecx+0x80u));
    /* 004f8018: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 004f801b: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_004f801e:; BB(0x004f801e);
    /* 004f801e: jmp 0x4f7f4d */ goto L_004f7f4d;
L_004f8023:; BB(0x004f8023);
    /* 004f8023: mov word ptr [ebp - 0x10], 0 */ W16((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 004f8029: mov word ptr [ebp - 0x2c], 0 */ W16((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 004f802f: mov word ptr [ebp - 0x18], 0xffff */ W16((u32)(r_ebp+0xffffffe8u), 0xffffu);
    /* 004f8035: mov word ptr [ebp - 0x28], 0xffff */ W16((u32)(r_ebp+0xffffffd8u), 0xffffu);
    /* 004f803b: mov word ptr [ebp - 0x24], 0 */ W16((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004f8041: jmp 0x4f804f */ goto L_004f804f;
L_004f8043:; BB(0x004f8043);
    /* 004f8043: mov cx, word ptr [ebp - 0x24] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffdcu))) & 0xffffu);
    /* 004f8047: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f804b: mov word ptr [ebp - 0x24], cx */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_ecx);
L_004f804f:; BB(0x004f804f);
    /* 004f804f: movsx edx, word ptr [ebp - 0x24] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f8053: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f8056: movsx ecx, word ptr [eax + 6] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x6u));
    /* 004f805a: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f805c: jge 0x4f81bc */ if ((fS==fO)) goto L_004f81bc;
L_004f8062:; BB(0x004f8062);
    /* 004f8062: movsx edx, word ptr [ebp - 0x24] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f8066: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f8069: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 004f806c: movzx edx, byte ptr [ecx + edx] */ r_edx = (u32)R8((u32)(r_ecx+r_edx));
    /* 004f8070: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8072: jne 0x4f81b7 */ if (!fZ) goto L_004f81b7;
L_004f8078:; BB(0x004f8078);
    /* 004f8078: movsx eax, word ptr [ebp - 0x24] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f807c: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f807f: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 004f8082: movzx eax, byte ptr [edx + eax] */ r_eax = (u32)R8((u32)(r_edx+r_eax));
    /* 004f8086: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8088: je 0x4f81b7 */ if (fZ) goto L_004f81b7;
L_004f808e:; BB(0x004f808e);
    /* 004f808e: lea ecx, [ebp - 0x34] */ r_ecx = (u32)(r_ebp+0xffffffccu);
    /* 004f8091: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f8092: movsx edx, word ptr [ebp - 0x24] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f8096: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f8099: mov ecx, dword ptr [eax + 0x7c] */ r_ecx = R32((u32)(r_eax+0x7cu));
    /* 004f809c: lea ecx, [ecx + edx*4] */ r_ecx = (u32)(r_ecx+r_edx*4);
    /* 004f809f: call 0x4a2340 */ r_esp -= 4; W32(r_esp, 0x4f80a4u); f_004a2340();
    /* 004f80a4: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004f80a7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f80a9: je 0x4f80e5 */ if (fZ) goto L_004f80e5;
L_004f80ab:; BB(0x004f80ab);
    /* 004f80ab: movsx eax, word ptr [ebp - 0x24] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f80af: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f80b2: mov edx, dword ptr [ecx + 0x84] */ r_edx = R32((u32)(r_ecx+0x84u));
    /* 004f80b8: cmp dword ptr [edx + eax*4], 0 */ {  u32 a = R32((u32)(r_edx+r_eax*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f80bc: je 0x4f80d1 */ if (fZ) goto L_004f80d1;
L_004f80be:; BB(0x004f80be);
    /* 004f80be: movsx eax, word ptr [ebp - 0x24] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f80c2: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f80c5: mov edx, dword ptr [ecx + 0x84] */ r_edx = R32((u32)(r_ecx+0x84u));
    /* 004f80cb: cmp dword ptr [edx + eax*4], 1 */ {  u32 a = R32((u32)(r_edx+r_eax*4)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f80cf: jne 0x4f80e5 */ if (!fZ) goto L_004f80e5;
L_004f80d1:; BB(0x004f80d1);
    /* 004f80d1: mov ax, word ptr [ebp - 0x10] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff0u))) & 0xffffu);
    /* 004f80d5: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f80d9: mov word ptr [ebp - 0x10], ax */ W16((u32)(r_ebp+0xfffffff0u), (u16)r_eax);
    /* 004f80dd: mov cx, word ptr [ebp - 0x24] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffdcu))) & 0xffffu);
    /* 004f80e1: mov word ptr [ebp - 0x18], cx */ W16((u32)(r_ebp+0xffffffe8u), (u16)r_ecx);
L_004f80e5:; BB(0x004f80e5);
    /* 004f80e5: lea edx, [ebp - 0x14] */ r_edx = (u32)(r_ebp+0xffffffecu);
    /* 004f80e8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f80e9: movsx eax, word ptr [ebp - 0x24] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f80ed: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f80f0: mov edx, dword ptr [ecx + 0x80] */ r_edx = R32((u32)(r_ecx+0x80u));
    /* 004f80f6: lea ecx, [edx + eax*4] */ r_ecx = (u32)(r_edx+r_eax*4);
    /* 004f80f9: call 0x4a2340 */ r_esp -= 4; W32(r_esp, 0x4f80feu); f_004a2340();
    /* 004f80fe: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004f8101: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8103: je 0x4f813f */ if (fZ) goto L_004f813f;
L_004f8105:; BB(0x004f8105);
    /* 004f8105: movsx ecx, word ptr [ebp - 0x24] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f8109: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f810c: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 004f8112: cmp dword ptr [eax + ecx*4], 0 */ {  u32 a = R32((u32)(r_eax+r_ecx*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8116: je 0x4f812b */ if (fZ) goto L_004f812b;
L_004f8118:; BB(0x004f8118);
    /* 004f8118: movsx ecx, word ptr [ebp - 0x24] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f811c: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f811f: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 004f8125: cmp dword ptr [eax + ecx*4], 2 */ {  u32 a = R32((u32)(r_eax+r_ecx*4)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8129: jne 0x4f813f */ if (!fZ) goto L_004f813f;
L_004f812b:; BB(0x004f812b);
    /* 004f812b: mov cx, word ptr [ebp - 0x2c] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffd4u))) & 0xffffu);
    /* 004f812f: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f8133: mov word ptr [ebp - 0x2c], cx */ W16((u32)(r_ebp+0xffffffd4u), (u16)r_ecx);
    /* 004f8137: mov dx, word ptr [ebp - 0x24] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffdcu))) & 0xffffu);
    /* 004f813b: mov word ptr [ebp - 0x28], dx */ W16((u32)(r_ebp+0xffffffd8u), (u16)r_edx);
L_004f813f:; BB(0x004f813f);
    /* 004f813f: lea eax, [ebp - 0x34] */ r_eax = (u32)(r_ebp+0xffffffccu);
    /* 004f8142: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f8143: movsx ecx, word ptr [ebp - 0x24] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f8147: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f814a: mov eax, dword ptr [edx + 0x7c] */ r_eax = R32((u32)(r_edx+0x7cu));
    /* 004f814d: lea ecx, [eax + ecx*4] */ r_ecx = (u32)(r_eax+r_ecx*4);
    /* 004f8150: call 0x4a2340 */ r_esp -= 4; W32(r_esp, 0x4f8155u); f_004a2340();
    /* 004f8155: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004f8158: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f815a: je 0x4f81b7 */ if (fZ) goto L_004f81b7;
L_004f815c:; BB(0x004f815c);
    /* 004f815c: lea edx, [ebp - 0x14] */ r_edx = (u32)(r_ebp+0xffffffecu);
    /* 004f815f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f8160: movsx eax, word ptr [ebp - 0x24] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f8164: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f8167: mov edx, dword ptr [ecx + 0x80] */ r_edx = R32((u32)(r_ecx+0x80u));
    /* 004f816d: lea ecx, [edx + eax*4] */ r_ecx = (u32)(r_edx+r_eax*4);
    /* 004f8170: call 0x4a2340 */ r_esp -= 4; W32(r_esp, 0x4f8175u); f_004a2340();
    /* 004f8175: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004f8178: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f817a: je 0x4f81b7 */ if (fZ) goto L_004f81b7;
L_004f817c:; BB(0x004f817c);
    /* 004f817c: movsx ecx, word ptr [ebp - 0x24] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f8180: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f8183: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 004f8189: cmp dword ptr [eax + ecx*4], 3 */ {  u32 a = R32((u32)(r_eax+r_ecx*4)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f818d: jne 0x4f81b7 */ if (!fZ) goto L_004f81b7;
L_004f818f:; BB(0x004f818f);
    /* 004f818f: mov cx, word ptr [ebp - 0x10] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff0u))) & 0xffffu);
    /* 004f8193: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f8197: mov word ptr [ebp - 0x10], cx */ W16((u32)(r_ebp+0xfffffff0u), (u16)r_ecx);
    /* 004f819b: mov dx, word ptr [ebp - 0x24] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffdcu))) & 0xffffu);
    /* 004f819f: mov word ptr [ebp - 0x18], dx */ W16((u32)(r_ebp+0xffffffe8u), (u16)r_edx);
    /* 004f81a3: mov ax, word ptr [ebp - 0x2c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffd4u))) & 0xffffu);
    /* 004f81a7: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f81ab: mov word ptr [ebp - 0x2c], ax */ W16((u32)(r_ebp+0xffffffd4u), (u16)r_eax);
    /* 004f81af: mov cx, word ptr [ebp - 0x24] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffdcu))) & 0xffffu);
    /* 004f81b3: mov word ptr [ebp - 0x28], cx */ W16((u32)(r_ebp+0xffffffd8u), (u16)r_ecx);
L_004f81b7:; BB(0x004f81b7);
    /* 004f81b7: jmp 0x4f8043 */ goto L_004f8043;
L_004f81bc:; BB(0x004f81bc);
    /* 004f81bc: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f81bf: mov byte ptr [edx + 4], 1 */ W8((u32)(r_edx+0x4u), 0x1u);
    /* 004f81c3: mov byte ptr [ebp - 0x1d], 0 */ W8((u32)(r_ebp+0xffffffe3u), 0x0u);
    /* 004f81c7: movsx eax, word ptr [ebp - 0x2c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd4u));
    /* 004f81cb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f81cd: jne 0x4f8382 */ if (!fZ) goto L_004f8382;
L_004f81d3:; BB(0x004f81d3);
    /* 004f81d3: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004f81d7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f81d9: jne 0x4f8382 */ if (!fZ) goto L_004f8382;
L_004f81df:; BB(0x004f81df);
    /* 004f81df: movsx edx, word ptr [ebp - 0x18] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe8u));
    /* 004f81e3: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f81e6: je 0x4f81ff */ if (fZ) goto L_004f81ff;
L_004f81e8:; BB(0x004f81e8);
    /* 004f81e8: push 0x493 */ { u32 v = 0x493u; r_esp -= 4; W32(r_esp, v); }
    /* 004f81ed: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f81f2: push 0x6c0378 */ { u32 v = 0x6c0378u; r_esp -= 4; W32(r_esp, v); }
    /* 004f81f7: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f81fcu); f_005e9f20();
    /* 004f81fc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f81ff:; BB(0x004f81ff);
    /* 004f81ff: movsx ecx, word ptr [ebp - 0x28] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd8u));
    /* 004f8203: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8206: je 0x4f821f */ if (fZ) goto L_004f821f;
L_004f8208:; BB(0x004f8208);
    /* 004f8208: push 0x494 */ { u32 v = 0x494u; r_esp -= 4; W32(r_esp, v); }
    /* 004f820d: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f8212: push 0x6c0360 */ { u32 v = 0x6c0360u; r_esp -= 4; W32(r_esp, v); }
    /* 004f8217: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f821cu); f_005e9f20();
    /* 004f821c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f821f:; BB(0x004f821f);
    /* 004f821f: mov byte ptr [ebp - 0x1d], 1 */ W8((u32)(r_ebp+0xffffffe3u), 0x1u);
    /* 004f8223: mov word ptr [ebp - 0x24], 0 */ W16((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004f8229: jmp 0x4f8237 */ goto L_004f8237;
L_004f822b:; BB(0x004f822b);
    /* 004f822b: mov ax, word ptr [ebp - 0x24] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffdcu))) & 0xffffu);
    /* 004f822f: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f8233: mov word ptr [ebp - 0x24], ax */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_eax);
L_004f8237:; BB(0x004f8237);
    /* 004f8237: movsx ecx, word ptr [ebp - 0x24] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f823b: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f823e: movsx eax, word ptr [edx + 6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x6u));
    /* 004f8242: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f8244: jge 0x4f8306 */ if ((fS==fO)) goto L_004f8306;
L_004f824a:; BB(0x004f824a);
    /* 004f824a: movsx ecx, word ptr [ebp - 0x24] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f824e: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f8251: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 004f8254: movzx ecx, byte ptr [eax + ecx] */ r_ecx = (u32)R8((u32)(r_eax+r_ecx));
    /* 004f8258: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f825a: jne 0x4f8301 */ if (!fZ) goto L_004f8301;
L_004f8260:; BB(0x004f8260);
    /* 004f8260: movsx edx, word ptr [ebp - 0x24] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f8264: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f8267: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 004f826a: movzx edx, byte ptr [ecx + edx] */ r_edx = (u32)R8((u32)(r_ecx+r_edx));
    /* 004f826e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8270: je 0x4f8301 */ if (fZ) goto L_004f8301;
L_004f8276:; BB(0x004f8276);
    /* 004f8276: lea eax, [ebp - 0x34] */ r_eax = (u32)(r_ebp+0xffffffccu);
    /* 004f8279: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f827a: movsx ecx, word ptr [ebp - 0x24] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f827e: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f8281: mov eax, dword ptr [edx + 0x7c] */ r_eax = R32((u32)(r_edx+0x7cu));
    /* 004f8284: lea ecx, [eax + ecx*4] */ r_ecx = (u32)(r_eax+r_ecx*4);
    /* 004f8287: call 0x4a2340 */ r_esp -= 4; W32(r_esp, 0x4f828cu); f_004a2340();
    /* 004f828c: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004f828f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8291: je 0x4f82ba */ if (fZ) goto L_004f82ba;
L_004f8293:; BB(0x004f8293);
    /* 004f8293: movsx edx, word ptr [ebp - 0x24] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f8297: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f829a: mov ecx, dword ptr [eax + 0x84] */ r_ecx = R32((u32)(r_eax+0x84u));
    /* 004f82a0: cmp dword ptr [ecx + edx*4], 3 */ {  u32 a = R32((u32)(r_ecx+r_edx*4)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f82a4: jne 0x4f82ba */ if (!fZ) goto L_004f82ba;
L_004f82a6:; BB(0x004f82a6);
    /* 004f82a6: mov dx, word ptr [ebp - 0x10] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff0u))) & 0xffffu);
    /* 004f82aa: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f82ae: mov word ptr [ebp - 0x10], dx */ W16((u32)(r_ebp+0xfffffff0u), (u16)r_edx);
    /* 004f82b2: mov ax, word ptr [ebp - 0x24] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffdcu))) & 0xffffu);
    /* 004f82b6: mov word ptr [ebp - 0x18], ax */ W16((u32)(r_ebp+0xffffffe8u), (u16)r_eax);
L_004f82ba:; BB(0x004f82ba);
    /* 004f82ba: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 004f82bd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f82be: movsx edx, word ptr [ebp - 0x24] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f82c2: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f82c5: mov ecx, dword ptr [eax + 0x80] */ r_ecx = R32((u32)(r_eax+0x80u));
    /* 004f82cb: lea ecx, [ecx + edx*4] */ r_ecx = (u32)(r_ecx+r_edx*4);
    /* 004f82ce: call 0x4a2340 */ r_esp -= 4; W32(r_esp, 0x4f82d3u); f_004a2340();
    /* 004f82d3: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004f82d6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f82d8: je 0x4f8301 */ if (fZ) goto L_004f8301;
L_004f82da:; BB(0x004f82da);
    /* 004f82da: movsx eax, word ptr [ebp - 0x24] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f82de: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f82e1: mov edx, dword ptr [ecx + 0x84] */ r_edx = R32((u32)(r_ecx+0x84u));
    /* 004f82e7: cmp dword ptr [edx + eax*4], 3 */ {  u32 a = R32((u32)(r_edx+r_eax*4)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f82eb: jne 0x4f8301 */ if (!fZ) goto L_004f8301;
L_004f82ed:; BB(0x004f82ed);
    /* 004f82ed: mov ax, word ptr [ebp - 0x2c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffd4u))) & 0xffffu);
    /* 004f82f1: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f82f5: mov word ptr [ebp - 0x2c], ax */ W16((u32)(r_ebp+0xffffffd4u), (u16)r_eax);
    /* 004f82f9: mov cx, word ptr [ebp - 0x24] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffdcu))) & 0xffffu);
    /* 004f82fd: mov word ptr [ebp - 0x28], cx */ W16((u32)(r_ebp+0xffffffd8u), (u16)r_ecx);
L_004f8301:; BB(0x004f8301);
    /* 004f8301: jmp 0x4f822b */ goto L_004f822b;
L_004f8306:; BB(0x004f8306);
    /* 004f8306: movsx edx, word ptr [ebp - 0x18] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe8u));
    /* 004f830a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004f830c: jge 0x4f8325 */ if ((fS==fO)) goto L_004f8325;
L_004f830e:; BB(0x004f830e);
    /* 004f830e: push 0x4a8 */ { u32 v = 0x4a8u; r_esp -= 4; W32(r_esp, v); }
    /* 004f8313: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f8318: push 0x6c0348 */ { u32 v = 0x6c0348u; r_esp -= 4; W32(r_esp, v); }
    /* 004f831d: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f8322u); f_005e9f20();
    /* 004f8322: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f8325:; BB(0x004f8325);
    /* 004f8325: movsx ecx, word ptr [ebp - 0x28] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd8u));
    /* 004f8329: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004f832b: jge 0x4f8344 */ if ((fS==fO)) goto L_004f8344;
L_004f832d:; BB(0x004f832d);
    /* 004f832d: push 0x4a9 */ { u32 v = 0x4a9u; r_esp -= 4; W32(r_esp, v); }
    /* 004f8332: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f8337: push 0x6c0330 */ { u32 v = 0x6c0330u; r_esp -= 4; W32(r_esp, v); }
    /* 004f833c: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f8341u); f_005e9f20();
    /* 004f8341: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f8344:; BB(0x004f8344);
    /* 004f8344: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004f8348: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f834a: jg 0x4f8363 */ if ((!fZ&&fS==fO)) goto L_004f8363;
L_004f834c:; BB(0x004f834c);
    /* 004f834c: push 0x4aa */ { u32 v = 0x4aau; r_esp -= 4; W32(r_esp, v); }
    /* 004f8351: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f8356: push 0x6c0320 */ { u32 v = 0x6c0320u; r_esp -= 4; W32(r_esp, v); }
    /* 004f835b: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f8360u); f_005e9f20();
    /* 004f8360: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f8363:; BB(0x004f8363);
    /* 004f8363: movsx edx, word ptr [ebp - 0x2c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd4u));
    /* 004f8367: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f8369: jg 0x4f8382 */ if ((!fZ&&fS==fO)) goto L_004f8382;
L_004f836b:; BB(0x004f836b);
    /* 004f836b: push 0x4ab */ { u32 v = 0x4abu; r_esp -= 4; W32(r_esp, v); }
    /* 004f8370: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f8375: push 0x6c0310 */ { u32 v = 0x6c0310u; r_esp -= 4; W32(r_esp, v); }
    /* 004f837a: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f837fu); f_005e9f20();
    /* 004f837f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f8382:; BB(0x004f8382);
    /* 004f8382: movsx ecx, word ptr [ebp - 0x2c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd4u));
    /* 004f8386: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8388: jne 0x4f851f */ if (!fZ) goto L_004f851f;
L_004f838e:; BB(0x004f838e);
    /* 004f838e: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f8391: call 0x4f9580 */ r_esp -= 4; W32(r_esp, 0x4f8396u); f_004f9580();
    /* 004f8396: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 004f8399: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004f839d: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 004f83a0: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004f83a1: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x004f83a1, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x004f83a1, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 004f83a3: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 004f83a6: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004f83aa: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 004f83ad: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004f83ae: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x004f83ae, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x004f83ae, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 004f83b0: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 004f83b3: movsx edx, word ptr [ebp - 0x18] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe8u));
    /* 004f83b7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004f83b9: jge 0x4f83d2 */ if ((fS==fO)) goto L_004f83d2;
L_004f83bb:; BB(0x004f83bb);
    /* 004f83bb: push 0x4b4 */ { u32 v = 0x4b4u; r_esp -= 4; W32(r_esp, v); }
    /* 004f83c0: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f83c5: push 0x6c0348 */ { u32 v = 0x6c0348u; r_esp -= 4; W32(r_esp, v); }
    /* 004f83ca: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f83cfu); f_005e9f20();
    /* 004f83cf: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f83d2:; BB(0x004f83d2);
    /* 004f83d2: movsx ecx, word ptr [ebp - 0x18] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe8u));
    /* 004f83d6: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f83d9: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 004f83dc: mov byte ptr [ecx + eax], 1 */ W8((u32)(r_ecx+r_eax), 0x1u);
    /* 004f83e0: movsx ecx, word ptr [ebp - 0x18] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe8u));
    /* 004f83e4: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f83e7: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 004f83ea: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 004f83ed: add ecx, dword ptr [ebp - 0x3c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffc4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f83f0: movsx edx, word ptr [ebp - 0x18] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe8u));
    /* 004f83f4: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f83f7: mov eax, dword ptr [eax + 0x74] */ r_eax = R32((u32)(r_eax+0x74u));
    /* 004f83fa: mov dword ptr [eax + edx*4], ecx */ W32((u32)(r_eax+r_edx*4), r_ecx);
    /* 004f83fd: mov cx, word ptr [ebp - 0x18] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe8u))) & 0xffffu);
    /* 004f8401: mov word ptr [ebp - 0x40], cx */ W16((u32)(r_ebp+0xffffffc0u), (u16)r_ecx);
    /* 004f8405: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004f8409: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f840c: jle 0x4f84fd */ if ((fZ||fS!=fO)) goto L_004f84fd;
L_004f8412:; BB(0x004f8412);
    /* 004f8412: mov word ptr [ebp - 0x24], 0 */ W16((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004f8418: jmp 0x4f8426 */ goto L_004f8426;
L_004f841a:; BB(0x004f841a);
    /* 004f841a: mov ax, word ptr [ebp - 0x24] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffdcu))) & 0xffffu);
    /* 004f841e: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f8422: mov word ptr [ebp - 0x24], ax */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_eax);
L_004f8426:; BB(0x004f8426);
    /* 004f8426: movsx ecx, word ptr [ebp - 0x24] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f842a: movsx edx, word ptr [ebp - 0x18] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe8u));
    /* 004f842e: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f8430: jge 0x4f84fd */ if ((fS==fO)) goto L_004f84fd;
L_004f8436:; BB(0x004f8436);
    /* 004f8436: movsx eax, word ptr [ebp - 0x24] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f843a: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f843d: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 004f8440: movzx eax, byte ptr [edx + eax] */ r_eax = (u32)R8((u32)(r_edx+r_eax));
    /* 004f8444: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8446: jne 0x4f84f8 */ if (!fZ) goto L_004f84f8;
L_004f844c:; BB(0x004f844c);
    /* 004f844c: movsx ecx, word ptr [ebp - 0x24] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f8450: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f8453: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 004f8456: movzx ecx, byte ptr [eax + ecx] */ r_ecx = (u32)R8((u32)(r_eax+r_ecx));
    /* 004f845a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f845c: je 0x4f84f8 */ if (fZ) goto L_004f84f8;
L_004f8462:; BB(0x004f8462);
    /* 004f8462: lea edx, [ebp - 0x34] */ r_edx = (u32)(r_ebp+0xffffffccu);
    /* 004f8465: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f8466: movsx eax, word ptr [ebp - 0x24] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f846a: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f846d: mov edx, dword ptr [ecx + 0x7c] */ r_edx = R32((u32)(r_ecx+0x7cu));
    /* 004f8470: lea ecx, [edx + eax*4] */ r_ecx = (u32)(r_edx+r_eax*4);
    /* 004f8473: call 0x4a2340 */ r_esp -= 4; W32(r_esp, 0x4f8478u); f_004a2340();
    /* 004f8478: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004f847b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f847d: je 0x4f84f8 */ if (fZ) goto L_004f84f8;
L_004f847f:; BB(0x004f847f);
    /* 004f847f: movsx ecx, word ptr [ebp - 0x24] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f8483: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f8486: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 004f848c: cmp dword ptr [eax + ecx*4], 0 */ {  u32 a = R32((u32)(r_eax+r_ecx*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8490: je 0x4f84a5 */ if (fZ) goto L_004f84a5;
L_004f8492:; BB(0x004f8492);
    /* 004f8492: movsx ecx, word ptr [ebp - 0x24] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f8496: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f8499: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 004f849f: cmp dword ptr [eax + ecx*4], 1 */ {  u32 a = R32((u32)(r_eax+r_ecx*4)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f84a3: jne 0x4f84f8 */ if (!fZ) goto L_004f84f8;
L_004f84a5:; BB(0x004f84a5);
    /* 004f84a5: movsx ecx, word ptr [ebp - 0x24] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f84a9: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f84ac: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 004f84af: mov byte ptr [ecx + eax], 1 */ W8((u32)(r_ecx+r_eax), 0x1u);
    /* 004f84b3: movsx ecx, word ptr [ebp - 0x24] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f84b7: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f84ba: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 004f84bd: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 004f84c0: add ecx, dword ptr [ebp - 0x3c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffc4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f84c3: movsx edx, word ptr [ebp - 0x24] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f84c7: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f84ca: mov eax, dword ptr [eax + 0x74] */ r_eax = R32((u32)(r_eax+0x74u));
    /* 004f84cd: mov dword ptr [eax + edx*4], ecx */ W32((u32)(r_eax+r_edx*4), r_ecx);
    /* 004f84d0: movsx ecx, word ptr [ebp - 0x24] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f84d4: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f84d7: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 004f84da: movsx ecx, word ptr [eax + ecx*2] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+r_ecx*2));
    /* 004f84de: movsx edx, word ptr [ebp - 0x40] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc0u));
    /* 004f84e2: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f84e5: mov eax, dword ptr [eax + 0x4c] */ r_eax = R32((u32)(r_eax+0x4cu));
    /* 004f84e8: movsx edx, word ptr [eax + edx*2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+r_edx*2));
    /* 004f84ec: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f84ee: jle 0x4f84f8 */ if ((fZ||fS!=fO)) goto L_004f84f8;
L_004f84f0:; BB(0x004f84f0);
    /* 004f84f0: mov ax, word ptr [ebp - 0x24] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffdcu))) & 0xffffu);
    /* 004f84f4: mov word ptr [ebp - 0x40], ax */ W16((u32)(r_ebp+0xffffffc0u), (u16)r_eax);
L_004f84f8:; BB(0x004f84f8);
    /* 004f84f8: jmp 0x4f841a */ goto L_004f841a;
L_004f84fd:; BB(0x004f84fd);
    /* 004f84fd: movsx ecx, word ptr [ebp - 0x40] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc0u));
    /* 004f8501: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f8504: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 004f8507: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 004f850a: add ecx, dword ptr [ebp - 0x38] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffc8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f850d: movsx edx, word ptr [ebp - 0x40] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc0u));
    /* 004f8511: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f8514: mov eax, dword ptr [eax + 0x74] */ r_eax = R32((u32)(r_eax+0x74u));
    /* 004f8517: mov dword ptr [eax + edx*4], ecx */ W32((u32)(r_eax+r_edx*4), r_ecx);
    /* 004f851a: jmp 0x4f8bf1 */ goto L_004f8bf1;
L_004f851f:; BB(0x004f851f);
    /* 004f851f: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004f8523: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8525: jne 0x4f86bf */ if (!fZ) goto L_004f86bf;
L_004f852b:; BB(0x004f852b);
    /* 004f852b: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f852e: call 0x4f9580 */ r_esp -= 4; W32(r_esp, 0x4f8533u); f_004f9580();
    /* 004f8533: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 004f8536: movsx ecx, word ptr [ebp - 0x2c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd4u));
    /* 004f853a: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 004f853d: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004f853e: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x004f853e, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x004f853e, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 004f8540: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 004f8543: movsx ecx, word ptr [ebp - 0x2c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd4u));
    /* 004f8547: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 004f854a: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004f854b: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x004f854b, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x004f854b, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 004f854d: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 004f8550: movsx edx, word ptr [ebp - 0x28] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd8u));
    /* 004f8554: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004f8556: jge 0x4f856f */ if ((fS==fO)) goto L_004f856f;
L_004f8558:; BB(0x004f8558);
    /* 004f8558: push 0x4d2 */ { u32 v = 0x4d2u; r_esp -= 4; W32(r_esp, v); }
    /* 004f855d: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f8562: push 0x6c0330 */ { u32 v = 0x6c0330u; r_esp -= 4; W32(r_esp, v); }
    /* 004f8567: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f856cu); f_005e9f20();
    /* 004f856c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f856f:; BB(0x004f856f);
    /* 004f856f: movsx ecx, word ptr [ebp - 0x28] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd8u));
    /* 004f8573: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f8576: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 004f8579: mov byte ptr [ecx + eax], 1 */ W8((u32)(r_ecx+r_eax), 0x1u);
    /* 004f857d: movsx ecx, word ptr [ebp - 0x28] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd8u));
    /* 004f8581: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f8584: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 004f8587: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 004f858a: add ecx, dword ptr [ebp - 0x44] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffbcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f858d: movsx edx, word ptr [ebp - 0x28] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd8u));
    /* 004f8591: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f8594: mov eax, dword ptr [eax + 0x78] */ r_eax = R32((u32)(r_eax+0x78u));
    /* 004f8597: mov dword ptr [eax + edx*4], ecx */ W32((u32)(r_eax+r_edx*4), r_ecx);
    /* 004f859a: mov cx, word ptr [ebp - 0x28] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffd8u))) & 0xffffu);
    /* 004f859e: mov word ptr [ebp - 0x4c], cx */ W16((u32)(r_ebp+0xffffffb4u), (u16)r_ecx);
    /* 004f85a2: movsx edx, word ptr [ebp - 0x2c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd4u));
    /* 004f85a6: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f85a9: jle 0x4f869d */ if ((fZ||fS!=fO)) goto L_004f869d;
L_004f85af:; BB(0x004f85af);
    /* 004f85af: mov word ptr [ebp - 0x24], 0 */ W16((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004f85b5: jmp 0x4f85c3 */ goto L_004f85c3;
L_004f85b7:; BB(0x004f85b7);
    /* 004f85b7: mov ax, word ptr [ebp - 0x24] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffdcu))) & 0xffffu);
    /* 004f85bb: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f85bf: mov word ptr [ebp - 0x24], ax */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_eax);
L_004f85c3:; BB(0x004f85c3);
    /* 004f85c3: movsx ecx, word ptr [ebp - 0x24] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f85c7: movsx edx, word ptr [ebp - 0x28] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd8u));
    /* 004f85cb: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f85cd: jge 0x4f869d */ if ((fS==fO)) goto L_004f869d;
L_004f85d3:; BB(0x004f85d3);
    /* 004f85d3: movsx eax, word ptr [ebp - 0x24] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f85d7: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f85da: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 004f85dd: movzx eax, byte ptr [edx + eax] */ r_eax = (u32)R8((u32)(r_edx+r_eax));
    /* 004f85e1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f85e3: jne 0x4f8698 */ if (!fZ) goto L_004f8698;
L_004f85e9:; BB(0x004f85e9);
    /* 004f85e9: movsx ecx, word ptr [ebp - 0x24] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f85ed: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f85f0: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 004f85f3: movzx ecx, byte ptr [eax + ecx] */ r_ecx = (u32)R8((u32)(r_eax+r_ecx));
    /* 004f85f7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f85f9: je 0x4f8698 */ if (fZ) goto L_004f8698;
L_004f85ff:; BB(0x004f85ff);
    /* 004f85ff: lea edx, [ebp - 0x14] */ r_edx = (u32)(r_ebp+0xffffffecu);
    /* 004f8602: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f8603: movsx eax, word ptr [ebp - 0x24] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f8607: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f860a: mov edx, dword ptr [ecx + 0x80] */ r_edx = R32((u32)(r_ecx+0x80u));
    /* 004f8610: lea ecx, [edx + eax*4] */ r_ecx = (u32)(r_edx+r_eax*4);
    /* 004f8613: call 0x4a2340 */ r_esp -= 4; W32(r_esp, 0x4f8618u); f_004a2340();
    /* 004f8618: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004f861b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f861d: je 0x4f8698 */ if (fZ) goto L_004f8698;
L_004f861f:; BB(0x004f861f);
    /* 004f861f: movsx ecx, word ptr [ebp - 0x24] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f8623: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f8626: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 004f862c: cmp dword ptr [eax + ecx*4], 0 */ {  u32 a = R32((u32)(r_eax+r_ecx*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8630: je 0x4f8645 */ if (fZ) goto L_004f8645;
L_004f8632:; BB(0x004f8632);
    /* 004f8632: movsx ecx, word ptr [ebp - 0x24] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f8636: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f8639: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 004f863f: cmp dword ptr [eax + ecx*4], 2 */ {  u32 a = R32((u32)(r_eax+r_ecx*4)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8643: jne 0x4f8698 */ if (!fZ) goto L_004f8698;
L_004f8645:; BB(0x004f8645);
    /* 004f8645: movsx ecx, word ptr [ebp - 0x24] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f8649: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f864c: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 004f864f: mov byte ptr [ecx + eax], 1 */ W8((u32)(r_ecx+r_eax), 0x1u);
    /* 004f8653: movsx ecx, word ptr [ebp - 0x24] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f8657: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f865a: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 004f865d: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 004f8660: add ecx, dword ptr [ebp - 0x44] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffbcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f8663: movsx edx, word ptr [ebp - 0x24] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f8667: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f866a: mov eax, dword ptr [eax + 0x78] */ r_eax = R32((u32)(r_eax+0x78u));
    /* 004f866d: mov dword ptr [eax + edx*4], ecx */ W32((u32)(r_eax+r_edx*4), r_ecx);
    /* 004f8670: movsx ecx, word ptr [ebp - 0x24] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f8674: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f8677: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 004f867a: movsx ecx, word ptr [eax + ecx*2] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+r_ecx*2));
    /* 004f867e: movsx edx, word ptr [ebp - 0x4c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffb4u));
    /* 004f8682: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f8685: mov eax, dword ptr [eax + 0x4c] */ r_eax = R32((u32)(r_eax+0x4cu));
    /* 004f8688: movsx edx, word ptr [eax + edx*2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+r_edx*2));
    /* 004f868c: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f868e: jle 0x4f8698 */ if ((fZ||fS!=fO)) goto L_004f8698;
L_004f8690:; BB(0x004f8690);
    /* 004f8690: mov ax, word ptr [ebp - 0x24] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffdcu))) & 0xffffu);
    /* 004f8694: mov word ptr [ebp - 0x4c], ax */ W16((u32)(r_ebp+0xffffffb4u), (u16)r_eax);
L_004f8698:; BB(0x004f8698);
    /* 004f8698: jmp 0x4f85b7 */ goto L_004f85b7;
L_004f869d:; BB(0x004f869d);
    /* 004f869d: movsx ecx, word ptr [ebp - 0x4c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffb4u));
    /* 004f86a1: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f86a4: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 004f86a7: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 004f86aa: add ecx, dword ptr [ebp - 0x48] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffb8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f86ad: movsx edx, word ptr [ebp - 0x4c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffb4u));
    /* 004f86b1: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f86b4: mov eax, dword ptr [eax + 0x78] */ r_eax = R32((u32)(r_eax+0x78u));
    /* 004f86b7: mov dword ptr [eax + edx*4], ecx */ W32((u32)(r_eax+r_edx*4), r_ecx);
    /* 004f86ba: jmp 0x4f8bf1 */ goto L_004f8bf1;
L_004f86bf:; BB(0x004f86bf);
    /* 004f86bf: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f86c2: call 0x4f9580 */ r_esp -= 4; W32(r_esp, 0x4f86c7u); f_004f9580();
    /* 004f86c7: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 004f86ca: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 004f86cd: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004f86ce: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004f86d0: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004f86d2: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 004f86d5: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 004f86d8: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 004f86db: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 004f86de: and edx, 0x80000001 */ {  u32 a = r_edx; u32 b = 0x80000001u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fS = ((r >> 31) & 1); }
    /* 004f86e4: jns 0x4f86eb */ if (!fS) goto L_004f86eb;
L_004f86e6:; BB(0x004f86e6);
    /* 004f86e6: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004f86e7: or edx, 0xfffffffe */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004f86ea: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_004f86eb:; BB(0x004f86eb);
    /* 004f86eb: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 004f86ee: movsx ecx, word ptr [ebp - 0x2c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd4u));
    /* 004f86f2: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 004f86f5: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004f86f6: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x004f86f6, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x004f86f6, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 004f86f8: add edx, dword ptr [ebp - 0x54] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffacu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f86fb: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 004f86fe: movsx ecx, word ptr [ebp - 0x2c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd4u));
    /* 004f8702: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 004f8705: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004f8706: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x004f8706, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x004f8706, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 004f8708: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 004f870b: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004f870f: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8712: je 0x4f871d */ if (fZ) goto L_004f871d;
L_004f8714:; BB(0x004f8714);
    /* 004f8714: movsx eax, word ptr [ebp - 0x2c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd4u));
    /* 004f8718: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f871b: je 0x4f8728 */ if (fZ) goto L_004f8728;
L_004f871d:; BB(0x004f871d);
    /* 004f871d: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 004f8720: add ecx, dword ptr [ebp - 0x54] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffacu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f8723: mov dword ptr [ebp - 0x58], ecx */ W32((u32)(r_ebp+0xffffffa8u), r_ecx);
    /* 004f8726: jmp 0x4f8731 */ goto L_004f8731;
L_004f8728:; BB(0x004f8728);
    /* 004f8728: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 004f872b: add edx, dword ptr [ebp - 0x54] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffacu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f872e: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
L_004f8731:; BB(0x004f8731);
    /* 004f8731: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004f8735: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 004f8738: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004f8739: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x004f8739, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x004f8739, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 004f873b: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 004f873e: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004f8742: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 004f8745: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004f8746: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x004f8746, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x004f8746, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 004f8748: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 004f874b: movsx edx, word ptr [ebp - 0x18] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe8u));
    /* 004f874f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004f8751: jge 0x4f876a */ if ((fS==fO)) goto L_004f876a;
L_004f8753:; BB(0x004f8753);
    /* 004f8753: push 0x4f9 */ { u32 v = 0x4f9u; r_esp -= 4; W32(r_esp, v); }
    /* 004f8758: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f875d: push 0x6c0348 */ { u32 v = 0x6c0348u; r_esp -= 4; W32(r_esp, v); }
    /* 004f8762: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f8767u); f_005e9f20();
    /* 004f8767: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f876a:; BB(0x004f876a);
    /* 004f876a: movsx ecx, word ptr [ebp - 0x18] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe8u));
    /* 004f876e: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f8771: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 004f8774: mov byte ptr [ecx + eax], 1 */ W8((u32)(r_ecx+r_eax), 0x1u);
    /* 004f8778: movsx ecx, word ptr [ebp - 0x18] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe8u));
    /* 004f877c: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f877f: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 004f8782: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 004f8785: add ecx, dword ptr [ebp - 0x58] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffa8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f8788: movsx edx, word ptr [ebp - 0x18] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe8u));
    /* 004f878c: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f878f: mov eax, dword ptr [eax + 0x74] */ r_eax = R32((u32)(r_eax+0x74u));
    /* 004f8792: mov dword ptr [eax + edx*4], ecx */ W32((u32)(r_eax+r_edx*4), r_ecx);
    /* 004f8795: mov cx, word ptr [ebp - 0x18] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe8u))) & 0xffffu);
    /* 004f8799: mov word ptr [ebp - 0x5c], cx */ W16((u32)(r_ebp+0xffffffa4u), (u16)r_ecx);
    /* 004f879d: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004f87a1: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f87a4: jle 0x4f89d0 */ if ((fZ||fS!=fO)) goto L_004f89d0;
L_004f87aa:; BB(0x004f87aa);
    /* 004f87aa: mov word ptr [ebp - 0x24], 0 */ W16((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004f87b0: jmp 0x4f87be */ goto L_004f87be;
L_004f87b2:; BB(0x004f87b2);
    /* 004f87b2: mov ax, word ptr [ebp - 0x24] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffdcu))) & 0xffffu);
    /* 004f87b6: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f87ba: mov word ptr [ebp - 0x24], ax */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_eax);
L_004f87be:; BB(0x004f87be);
    /* 004f87be: movsx ecx, word ptr [ebp - 0x24] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f87c2: movsx edx, word ptr [ebp - 0x18] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe8u));
    /* 004f87c6: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f87c8: jge 0x4f89d0 */ if ((fS==fO)) goto L_004f89d0;
L_004f87ce:; BB(0x004f87ce);
    /* 004f87ce: movsx eax, word ptr [ebp - 0x24] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f87d2: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f87d5: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 004f87d8: movzx eax, byte ptr [edx + eax] */ r_eax = (u32)R8((u32)(r_edx+r_eax));
    /* 004f87dc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f87de: jne 0x4f89cb */ if (!fZ) goto L_004f89cb;
L_004f87e4:; BB(0x004f87e4);
    /* 004f87e4: movsx ecx, word ptr [ebp - 0x24] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f87e8: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f87eb: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 004f87ee: movzx ecx, byte ptr [eax + ecx] */ r_ecx = (u32)R8((u32)(r_eax+r_ecx));
    /* 004f87f2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f87f4: je 0x4f89cb */ if (fZ) goto L_004f89cb;
L_004f87fa:; BB(0x004f87fa);
    /* 004f87fa: movzx edx, byte ptr [ebp - 0x1d] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffe3u));
    /* 004f87fe: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8800: jne 0x4f8948 */ if (!fZ) goto L_004f8948;
L_004f8806:; BB(0x004f8806);
    /* 004f8806: lea eax, [ebp - 0x34] */ r_eax = (u32)(r_ebp+0xffffffccu);
    /* 004f8809: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f880a: movsx ecx, word ptr [ebp - 0x24] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f880e: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f8811: mov eax, dword ptr [edx + 0x7c] */ r_eax = R32((u32)(r_edx+0x7cu));
    /* 004f8814: lea ecx, [eax + ecx*4] */ r_ecx = (u32)(r_eax+r_ecx*4);
    /* 004f8817: call 0x4a2340 */ r_esp -= 4; W32(r_esp, 0x4f881cu); f_004a2340();
    /* 004f881c: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004f881f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8821: je 0x4f889c */ if (fZ) goto L_004f889c;
L_004f8823:; BB(0x004f8823);
    /* 004f8823: movsx edx, word ptr [ebp - 0x24] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f8827: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f882a: mov ecx, dword ptr [eax + 0x84] */ r_ecx = R32((u32)(r_eax+0x84u));
    /* 004f8830: cmp dword ptr [ecx + edx*4], 0 */ {  u32 a = R32((u32)(r_ecx+r_edx*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8834: je 0x4f8849 */ if (fZ) goto L_004f8849;
L_004f8836:; BB(0x004f8836);
    /* 004f8836: movsx edx, word ptr [ebp - 0x24] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f883a: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f883d: mov ecx, dword ptr [eax + 0x84] */ r_ecx = R32((u32)(r_eax+0x84u));
    /* 004f8843: cmp dword ptr [ecx + edx*4], 1 */ {  u32 a = R32((u32)(r_ecx+r_edx*4)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8847: jne 0x4f889c */ if (!fZ) goto L_004f889c;
L_004f8849:; BB(0x004f8849);
    /* 004f8849: movsx edx, word ptr [ebp - 0x24] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f884d: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f8850: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 004f8853: mov byte ptr [edx + ecx], 1 */ W8((u32)(r_edx+r_ecx), 0x1u);
    /* 004f8857: movsx edx, word ptr [ebp - 0x24] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f885b: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f885e: mov ecx, dword ptr [eax + 0x74] */ r_ecx = R32((u32)(r_eax+0x74u));
    /* 004f8861: mov edx, dword ptr [ecx + edx*4] */ r_edx = R32((u32)(r_ecx+r_edx*4));
    /* 004f8864: add edx, dword ptr [ebp - 0x58] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffa8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f8867: movsx eax, word ptr [ebp - 0x24] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f886b: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f886e: mov ecx, dword ptr [ecx + 0x74] */ r_ecx = R32((u32)(r_ecx+0x74u));
    /* 004f8871: mov dword ptr [ecx + eax*4], edx */ W32((u32)(r_ecx+r_eax*4), r_edx);
    /* 004f8874: movsx edx, word ptr [ebp - 0x24] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f8878: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f887b: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 004f887e: movsx edx, word ptr [ecx + edx*2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+r_edx*2));
    /* 004f8882: movsx eax, word ptr [ebp - 0x5c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffa4u));
    /* 004f8886: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f8889: mov ecx, dword ptr [ecx + 0x4c] */ r_ecx = R32((u32)(r_ecx+0x4cu));
    /* 004f888c: movsx eax, word ptr [ecx + eax*2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+r_eax*2));
    /* 004f8890: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f8892: jle 0x4f889c */ if ((fZ||fS!=fO)) goto L_004f889c;
L_004f8894:; BB(0x004f8894);
    /* 004f8894: mov cx, word ptr [ebp - 0x24] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffdcu))) & 0xffffu);
    /* 004f8898: mov word ptr [ebp - 0x5c], cx */ W16((u32)(r_ebp+0xffffffa4u), (u16)r_ecx);
L_004f889c:; BB(0x004f889c);
    /* 004f889c: lea edx, [ebp - 0x34] */ r_edx = (u32)(r_ebp+0xffffffccu);
    /* 004f889f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f88a0: movsx eax, word ptr [ebp - 0x24] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f88a4: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f88a7: mov edx, dword ptr [ecx + 0x7c] */ r_edx = R32((u32)(r_ecx+0x7cu));
    /* 004f88aa: lea ecx, [edx + eax*4] */ r_ecx = (u32)(r_edx+r_eax*4);
    /* 004f88ad: call 0x4a2340 */ r_esp -= 4; W32(r_esp, 0x4f88b2u); f_004a2340();
    /* 004f88b2: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004f88b5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f88b7: je 0x4f8943 */ if (fZ) goto L_004f8943;
L_004f88bd:; BB(0x004f88bd);
    /* 004f88bd: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 004f88c0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f88c1: movsx edx, word ptr [ebp - 0x24] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f88c5: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f88c8: mov ecx, dword ptr [eax + 0x80] */ r_ecx = R32((u32)(r_eax+0x80u));
    /* 004f88ce: lea ecx, [ecx + edx*4] */ r_ecx = (u32)(r_ecx+r_edx*4);
    /* 004f88d1: call 0x4a2340 */ r_esp -= 4; W32(r_esp, 0x4f88d6u); f_004a2340();
    /* 004f88d6: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004f88d9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f88db: je 0x4f8943 */ if (fZ) goto L_004f8943;
L_004f88dd:; BB(0x004f88dd);
    /* 004f88dd: movsx eax, word ptr [ebp - 0x24] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f88e1: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f88e4: mov edx, dword ptr [ecx + 0x84] */ r_edx = R32((u32)(r_ecx+0x84u));
    /* 004f88ea: cmp dword ptr [edx + eax*4], 3 */ {  u32 a = R32((u32)(r_edx+r_eax*4)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f88ee: jne 0x4f8943 */ if (!fZ) goto L_004f8943;
L_004f88f0:; BB(0x004f88f0);
    /* 004f88f0: movsx eax, word ptr [ebp - 0x24] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f88f4: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f88f7: mov edx, dword ptr [ecx + 0x44] */ r_edx = R32((u32)(r_ecx+0x44u));
    /* 004f88fa: mov byte ptr [eax + edx], 1 */ W8((u32)(r_eax+r_edx), 0x1u);
    /* 004f88fe: movsx eax, word ptr [ebp - 0x24] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f8902: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f8905: mov edx, dword ptr [ecx + 0x74] */ r_edx = R32((u32)(r_ecx+0x74u));
    /* 004f8908: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 004f890b: add eax, dword ptr [ebp - 0x58] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffa8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f890e: movsx ecx, word ptr [ebp - 0x24] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f8912: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f8915: mov edx, dword ptr [edx + 0x74] */ r_edx = R32((u32)(r_edx+0x74u));
    /* 004f8918: mov dword ptr [edx + ecx*4], eax */ W32((u32)(r_edx+r_ecx*4), r_eax);
    /* 004f891b: movsx eax, word ptr [ebp - 0x24] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f891f: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f8922: mov edx, dword ptr [ecx + 0x4c] */ r_edx = R32((u32)(r_ecx+0x4cu));
    /* 004f8925: movsx eax, word ptr [edx + eax*2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+r_eax*2));
    /* 004f8929: movsx ecx, word ptr [ebp - 0x5c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffa4u));
    /* 004f892d: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f8930: mov edx, dword ptr [edx + 0x4c] */ r_edx = R32((u32)(r_edx+0x4cu));
    /* 004f8933: movsx ecx, word ptr [edx + ecx*2] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx+r_ecx*2));
    /* 004f8937: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f8939: jle 0x4f8943 */ if ((fZ||fS!=fO)) goto L_004f8943;
L_004f893b:; BB(0x004f893b);
    /* 004f893b: mov dx, word ptr [ebp - 0x24] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffdcu))) & 0xffffu);
    /* 004f893f: mov word ptr [ebp - 0x5c], dx */ W16((u32)(r_ebp+0xffffffa4u), (u16)r_edx);
L_004f8943:; BB(0x004f8943);
    /* 004f8943: jmp 0x4f89cb */ goto L_004f89cb;
L_004f8948:; BB(0x004f8948);
    /* 004f8948: lea eax, [ebp - 0x34] */ r_eax = (u32)(r_ebp+0xffffffccu);
    /* 004f894b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f894c: movsx ecx, word ptr [ebp - 0x24] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f8950: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f8953: mov eax, dword ptr [edx + 0x7c] */ r_eax = R32((u32)(r_edx+0x7cu));
    /* 004f8956: lea ecx, [eax + ecx*4] */ r_ecx = (u32)(r_eax+r_ecx*4);
    /* 004f8959: call 0x4a2340 */ r_esp -= 4; W32(r_esp, 0x4f895eu); f_004a2340();
    /* 004f895e: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004f8961: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8963: je 0x4f89cb */ if (fZ) goto L_004f89cb;
L_004f8965:; BB(0x004f8965);
    /* 004f8965: movsx edx, word ptr [ebp - 0x24] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f8969: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f896c: mov ecx, dword ptr [eax + 0x84] */ r_ecx = R32((u32)(r_eax+0x84u));
    /* 004f8972: cmp dword ptr [ecx + edx*4], 3 */ {  u32 a = R32((u32)(r_ecx+r_edx*4)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8976: jne 0x4f89cb */ if (!fZ) goto L_004f89cb;
L_004f8978:; BB(0x004f8978);
    /* 004f8978: movsx edx, word ptr [ebp - 0x24] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f897c: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f897f: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 004f8982: mov byte ptr [edx + ecx], 1 */ W8((u32)(r_edx+r_ecx), 0x1u);
    /* 004f8986: movsx edx, word ptr [ebp - 0x24] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f898a: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f898d: mov ecx, dword ptr [eax + 0x74] */ r_ecx = R32((u32)(r_eax+0x74u));
    /* 004f8990: mov edx, dword ptr [ecx + edx*4] */ r_edx = R32((u32)(r_ecx+r_edx*4));
    /* 004f8993: add edx, dword ptr [ebp - 0x58] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffa8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f8996: movsx eax, word ptr [ebp - 0x24] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f899a: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f899d: mov ecx, dword ptr [ecx + 0x74] */ r_ecx = R32((u32)(r_ecx+0x74u));
    /* 004f89a0: mov dword ptr [ecx + eax*4], edx */ W32((u32)(r_ecx+r_eax*4), r_edx);
    /* 004f89a3: movsx edx, word ptr [ebp - 0x24] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f89a7: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f89aa: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 004f89ad: movsx edx, word ptr [ecx + edx*2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+r_edx*2));
    /* 004f89b1: movsx eax, word ptr [ebp - 0x5c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffa4u));
    /* 004f89b5: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f89b8: mov ecx, dword ptr [ecx + 0x4c] */ r_ecx = R32((u32)(r_ecx+0x4cu));
    /* 004f89bb: movsx eax, word ptr [ecx + eax*2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+r_eax*2));
    /* 004f89bf: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f89c1: jle 0x4f89cb */ if ((fZ||fS!=fO)) goto L_004f89cb;
L_004f89c3:; BB(0x004f89c3);
    /* 004f89c3: mov cx, word ptr [ebp - 0x24] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffdcu))) & 0xffffu);
    /* 004f89c7: mov word ptr [ebp - 0x5c], cx */ W16((u32)(r_ebp+0xffffffa4u), (u16)r_ecx);
L_004f89cb:; BB(0x004f89cb);
    /* 004f89cb: jmp 0x4f87b2 */ goto L_004f87b2;
L_004f89d0:; BB(0x004f89d0);
    /* 004f89d0: movsx edx, word ptr [ebp - 0x5c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffa4u));
    /* 004f89d4: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f89d7: mov ecx, dword ptr [eax + 0x74] */ r_ecx = R32((u32)(r_eax+0x74u));
    /* 004f89da: mov edx, dword ptr [ecx + edx*4] */ r_edx = R32((u32)(r_ecx+r_edx*4));
    /* 004f89dd: add edx, dword ptr [ebp - 0x54] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffacu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f89e0: movsx eax, word ptr [ebp - 0x5c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffa4u));
    /* 004f89e4: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f89e7: mov ecx, dword ptr [ecx + 0x74] */ r_ecx = R32((u32)(r_ecx+0x74u));
    /* 004f89ea: mov dword ptr [ecx + eax*4], edx */ W32((u32)(r_ecx+r_eax*4), r_edx);
    /* 004f89ed: movsx edx, word ptr [ebp - 0x28] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd8u));
    /* 004f89f1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004f89f3: jge 0x4f8a0c */ if ((fS==fO)) goto L_004f8a0c;
L_004f89f5:; BB(0x004f89f5);
    /* 004f89f5: push 0x528 */ { u32 v = 0x528u; r_esp -= 4; W32(r_esp, v); }
    /* 004f89fa: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f89ff: push 0x6c0330 */ { u32 v = 0x6c0330u; r_esp -= 4; W32(r_esp, v); }
    /* 004f8a04: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f8a09u); f_005e9f20();
    /* 004f8a09: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f8a0c:; BB(0x004f8a0c);
    /* 004f8a0c: movsx ecx, word ptr [ebp - 0x28] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd8u));
    /* 004f8a10: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f8a13: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 004f8a16: mov byte ptr [ecx + eax], 1 */ W8((u32)(r_ecx+r_eax), 0x1u);
    /* 004f8a1a: movsx ecx, word ptr [ebp - 0x28] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd8u));
    /* 004f8a1e: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f8a21: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 004f8a24: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 004f8a27: add ecx, dword ptr [ebp - 0x50] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffb0u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f8a2a: movsx edx, word ptr [ebp - 0x28] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd8u));
    /* 004f8a2e: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f8a31: mov eax, dword ptr [eax + 0x78] */ r_eax = R32((u32)(r_eax+0x78u));
    /* 004f8a34: mov dword ptr [eax + edx*4], ecx */ W32((u32)(r_eax+r_edx*4), r_ecx);
    /* 004f8a37: movsx ecx, word ptr [ebp - 0x2c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd4u));
    /* 004f8a3b: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f8a3e: jle 0x4f8bf1 */ if ((fZ||fS!=fO)) goto L_004f8bf1;
L_004f8a44:; BB(0x004f8a44);
    /* 004f8a44: mov word ptr [ebp - 0x24], 0 */ W16((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004f8a4a: jmp 0x4f8a58 */ goto L_004f8a58;
L_004f8a4c:; BB(0x004f8a4c);
    /* 004f8a4c: mov dx, word ptr [ebp - 0x24] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffdcu))) & 0xffffu);
    /* 004f8a50: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f8a54: mov word ptr [ebp - 0x24], dx */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_edx);
L_004f8a58:; BB(0x004f8a58);
    /* 004f8a58: movsx eax, word ptr [ebp - 0x24] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f8a5c: movsx ecx, word ptr [ebp - 0x28] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd8u));
    /* 004f8a60: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f8a62: jge 0x4f8bf1 */ if ((fS==fO)) goto L_004f8bf1;
L_004f8a68:; BB(0x004f8a68);
    /* 004f8a68: movsx edx, word ptr [ebp - 0x24] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f8a6c: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f8a6f: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 004f8a72: movzx edx, byte ptr [ecx + edx] */ r_edx = (u32)R8((u32)(r_ecx+r_edx));
    /* 004f8a76: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8a78: jne 0x4f8bec */ if (!fZ) goto L_004f8bec;
L_004f8a7e:; BB(0x004f8a7e);
    /* 004f8a7e: movsx eax, word ptr [ebp - 0x24] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f8a82: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f8a85: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 004f8a88: movzx eax, byte ptr [edx + eax] */ r_eax = (u32)R8((u32)(r_edx+r_eax));
    /* 004f8a8c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8a8e: je 0x4f8bec */ if (fZ) goto L_004f8bec;
L_004f8a94:; BB(0x004f8a94);
    /* 004f8a94: movzx ecx, byte ptr [ebp - 0x1d] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffe3u));
    /* 004f8a98: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8a9a: jne 0x4f8b8e */ if (!fZ) goto L_004f8b8e;
L_004f8aa0:; BB(0x004f8aa0);
    /* 004f8aa0: lea edx, [ebp - 0x14] */ r_edx = (u32)(r_ebp+0xffffffecu);
    /* 004f8aa3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f8aa4: movsx eax, word ptr [ebp - 0x24] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f8aa8: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f8aab: mov edx, dword ptr [ecx + 0x80] */ r_edx = R32((u32)(r_ecx+0x80u));
    /* 004f8ab1: lea ecx, [edx + eax*4] */ r_ecx = (u32)(r_edx+r_eax*4);
    /* 004f8ab4: call 0x4a2340 */ r_esp -= 4; W32(r_esp, 0x4f8ab9u); f_004a2340();
    /* 004f8ab9: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004f8abc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8abe: je 0x4f8b11 */ if (fZ) goto L_004f8b11;
L_004f8ac0:; BB(0x004f8ac0);
    /* 004f8ac0: movsx ecx, word ptr [ebp - 0x24] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f8ac4: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f8ac7: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 004f8acd: cmp dword ptr [eax + ecx*4], 0 */ {  u32 a = R32((u32)(r_eax+r_ecx*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8ad1: je 0x4f8ae6 */ if (fZ) goto L_004f8ae6;
L_004f8ad3:; BB(0x004f8ad3);
    /* 004f8ad3: movsx ecx, word ptr [ebp - 0x24] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f8ad7: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f8ada: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 004f8ae0: cmp dword ptr [eax + ecx*4], 2 */ {  u32 a = R32((u32)(r_eax+r_ecx*4)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8ae4: jne 0x4f8b11 */ if (!fZ) goto L_004f8b11;
L_004f8ae6:; BB(0x004f8ae6);
    /* 004f8ae6: movsx ecx, word ptr [ebp - 0x24] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f8aea: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f8aed: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 004f8af0: mov byte ptr [ecx + eax], 1 */ W8((u32)(r_ecx+r_eax), 0x1u);
    /* 004f8af4: movsx ecx, word ptr [ebp - 0x24] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f8af8: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f8afb: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 004f8afe: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 004f8b01: add ecx, dword ptr [ebp - 0x50] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffb0u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f8b04: movsx edx, word ptr [ebp - 0x24] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f8b08: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f8b0b: mov eax, dword ptr [eax + 0x78] */ r_eax = R32((u32)(r_eax+0x78u));
    /* 004f8b0e: mov dword ptr [eax + edx*4], ecx */ W32((u32)(r_eax+r_edx*4), r_ecx);
L_004f8b11:; BB(0x004f8b11);
    /* 004f8b11: lea ecx, [ebp - 0x34] */ r_ecx = (u32)(r_ebp+0xffffffccu);
    /* 004f8b14: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f8b15: movsx edx, word ptr [ebp - 0x24] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f8b19: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f8b1c: mov ecx, dword ptr [eax + 0x7c] */ r_ecx = R32((u32)(r_eax+0x7cu));
    /* 004f8b1f: lea ecx, [ecx + edx*4] */ r_ecx = (u32)(r_ecx+r_edx*4);
    /* 004f8b22: call 0x4a2340 */ r_esp -= 4; W32(r_esp, 0x4f8b27u); f_004a2340();
    /* 004f8b27: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004f8b2a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8b2c: je 0x4f8b8c */ if (fZ) goto L_004f8b8c;
L_004f8b2e:; BB(0x004f8b2e);
    /* 004f8b2e: lea eax, [ebp - 0x14] */ r_eax = (u32)(r_ebp+0xffffffecu);
    /* 004f8b31: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f8b32: movsx ecx, word ptr [ebp - 0x24] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f8b36: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f8b39: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 004f8b3f: lea ecx, [eax + ecx*4] */ r_ecx = (u32)(r_eax+r_ecx*4);
    /* 004f8b42: call 0x4a2340 */ r_esp -= 4; W32(r_esp, 0x4f8b47u); f_004a2340();
    /* 004f8b47: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004f8b4a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8b4c: je 0x4f8b8c */ if (fZ) goto L_004f8b8c;
L_004f8b4e:; BB(0x004f8b4e);
    /* 004f8b4e: movsx edx, word ptr [ebp - 0x24] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f8b52: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f8b55: mov ecx, dword ptr [eax + 0x84] */ r_ecx = R32((u32)(r_eax+0x84u));
    /* 004f8b5b: cmp dword ptr [ecx + edx*4], 3 */ {  u32 a = R32((u32)(r_ecx+r_edx*4)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8b5f: jne 0x4f8b8c */ if (!fZ) goto L_004f8b8c;
L_004f8b61:; BB(0x004f8b61);
    /* 004f8b61: movsx edx, word ptr [ebp - 0x24] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f8b65: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f8b68: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 004f8b6b: mov byte ptr [edx + ecx], 1 */ W8((u32)(r_edx+r_ecx), 0x1u);
    /* 004f8b6f: movsx edx, word ptr [ebp - 0x24] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f8b73: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f8b76: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 004f8b79: mov edx, dword ptr [ecx + edx*4] */ r_edx = R32((u32)(r_ecx+r_edx*4));
    /* 004f8b7c: add edx, dword ptr [ebp - 0x50] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffb0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f8b7f: movsx eax, word ptr [ebp - 0x24] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f8b83: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f8b86: mov ecx, dword ptr [ecx + 0x78] */ r_ecx = R32((u32)(r_ecx+0x78u));
    /* 004f8b89: mov dword ptr [ecx + eax*4], edx */ W32((u32)(r_ecx+r_eax*4), r_edx);
L_004f8b8c:; BB(0x004f8b8c);
    /* 004f8b8c: jmp 0x4f8bec */ goto L_004f8bec;
L_004f8b8e:; BB(0x004f8b8e);
    /* 004f8b8e: lea edx, [ebp - 0x14] */ r_edx = (u32)(r_ebp+0xffffffecu);
    /* 004f8b91: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f8b92: movsx eax, word ptr [ebp - 0x24] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f8b96: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f8b99: mov edx, dword ptr [ecx + 0x80] */ r_edx = R32((u32)(r_ecx+0x80u));
    /* 004f8b9f: lea ecx, [edx + eax*4] */ r_ecx = (u32)(r_edx+r_eax*4);
    /* 004f8ba2: call 0x4a2340 */ r_esp -= 4; W32(r_esp, 0x4f8ba7u); f_004a2340();
    /* 004f8ba7: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004f8baa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8bac: je 0x4f8bec */ if (fZ) goto L_004f8bec;
L_004f8bae:; BB(0x004f8bae);
    /* 004f8bae: movsx ecx, word ptr [ebp - 0x24] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f8bb2: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f8bb5: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 004f8bbb: cmp dword ptr [eax + ecx*4], 3 */ {  u32 a = R32((u32)(r_eax+r_ecx*4)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8bbf: jne 0x4f8bec */ if (!fZ) goto L_004f8bec;
L_004f8bc1:; BB(0x004f8bc1);
    /* 004f8bc1: movsx ecx, word ptr [ebp - 0x24] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f8bc5: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f8bc8: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 004f8bcb: mov byte ptr [ecx + eax], 1 */ W8((u32)(r_ecx+r_eax), 0x1u);
    /* 004f8bcf: movsx ecx, word ptr [ebp - 0x24] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f8bd3: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f8bd6: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 004f8bd9: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 004f8bdc: add ecx, dword ptr [ebp - 0x50] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffb0u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f8bdf: movsx edx, word ptr [ebp - 0x24] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004f8be3: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 004f8be6: mov eax, dword ptr [eax + 0x78] */ r_eax = R32((u32)(r_eax+0x78u));
    /* 004f8be9: mov dword ptr [eax + edx*4], ecx */ W32((u32)(r_eax+r_edx*4), r_ecx);
L_004f8bec:; BB(0x004f8bec);
    /* 004f8bec: jmp 0x4f8a4c */ goto L_004f8a4c;
L_004f8bf1:; BB(0x004f8bf1);
    /* 004f8bf1: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004f8bf5: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 004f8bf8: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x4f8bfdu); f_004a20f0();
    /* 004f8bfd: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004f8c01: lea ecx, [ebp - 0x34] */ r_ecx = (u32)(r_ebp+0xffffffccu);
    /* 004f8c04: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x4f8c09u); f_004a20f0();
    /* 004f8c09: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004f8c10: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 004f8c13: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x4f8c18u); f_004a20f0();
    /* 004f8c18: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f8c1b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004f8c22: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f8c23: mov esp, ebp */ r_esp = r_ebp;
    /* 004f8c25: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f8c26: ret 4 */ FN_RET(0x004f7bd0); r_esp += 8; return;
}

void f_004f8c30(void) /* PokerPot::func_004f8c30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f8c30);
    /* 004f8c30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f8c31: mov ebp, esp */ r_ebp = r_esp;
    /* 004f8c33: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f8c36: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 004f8c39: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004f8c3c: movzx ecx, byte ptr [eax + 1] */ r_ecx = (u32)R8((u32)(r_eax+0x1u));
    /* 004f8c40: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8c42: jne 0x4f8c5b */ if (!fZ) goto L_004f8c5b;
L_004f8c44:; BB(0x004f8c44);
    /* 004f8c44: push 0x555 */ { u32 v = 0x555u; r_esp -= 4; W32(r_esp, v); }
    /* 004f8c49: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f8c4e: push 0x6bfe6c */ { u32 v = 0x6bfe6cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f8c53: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f8c58u); f_005e9f20();
    /* 004f8c58: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f8c5b:; BB(0x004f8c5b);
    /* 004f8c5b: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004f8c5e: movzx ecx, byte ptr [eax + 3] */ r_ecx = (u32)R8((u32)(r_eax+0x3u));
    /* 004f8c62: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8c64: jne 0x4f8c7d */ if (!fZ) goto L_004f8c7d;
L_004f8c66:; BB(0x004f8c66);
    /* 004f8c66: push 0x556 */ { u32 v = 0x556u; r_esp -= 4; W32(r_esp, v); }
    /* 004f8c6b: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f8c70: push 0x6c0138 */ { u32 v = 0x6c0138u; r_esp -= 4; W32(r_esp, v); }
    /* 004f8c75: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f8c7au); f_005e9f20();
    /* 004f8c7a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f8c7d:; BB(0x004f8c7d);
    /* 004f8c7d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004f8c80: movzx ecx, byte ptr [eax + 5] */ r_ecx = (u32)R8((u32)(r_eax+0x5u));
    /* 004f8c84: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8c86: jne 0x4f8c9f */ if (!fZ) goto L_004f8c9f;
L_004f8c88:; BB(0x004f8c88);
    /* 004f8c88: push 0x557 */ { u32 v = 0x557u; r_esp -= 4; W32(r_esp, v); }
    /* 004f8c8d: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f8c92: push 0x6c02e0 */ { u32 v = 0x6c02e0u; r_esp -= 4; W32(r_esp, v); }
    /* 004f8c97: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f8c9cu); f_005e9f20();
    /* 004f8c9c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f8c9f:; BB(0x004f8c9f);
    /* 004f8c9f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004f8ca2: movzx ecx, byte ptr [eax + 4] */ r_ecx = (u32)R8((u32)(r_eax+0x4u));
    /* 004f8ca6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8ca8: jne 0x4f8cc1 */ if (!fZ) goto L_004f8cc1;
L_004f8caa:; BB(0x004f8caa);
    /* 004f8caa: push 0x558 */ { u32 v = 0x558u; r_esp -= 4; W32(r_esp, v); }
    /* 004f8caf: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f8cb4: push 0x6c02f4 */ { u32 v = 0x6c02f4u; r_esp -= 4; W32(r_esp, v); }
    /* 004f8cb9: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f8cbeu); f_005e9f20();
    /* 004f8cbe: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f8cc1:; BB(0x004f8cc1);
    /* 004f8cc1: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004f8cc7: mov word ptr [ebp - 0xc], 0xffff */ W16((u32)(r_ebp+0xfffffff4u), 0xffffu);
    /* 004f8ccd: mov word ptr [ebp - 8], 0 */ W16((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 004f8cd3: jmp 0x4f8ce1 */ goto L_004f8ce1;
L_004f8cd5:; BB(0x004f8cd5);
    /* 004f8cd5: mov ax, word ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 004f8cd9: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f8cdd: mov word ptr [ebp - 8], ax */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_eax);
L_004f8ce1:; BB(0x004f8ce1);
    /* 004f8ce1: movsx ecx, word ptr [ebp - 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 004f8ce5: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004f8ce8: movsx eax, word ptr [edx + 6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x6u));
    /* 004f8cec: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f8cee: jge 0x4f8d61 */ if ((fS==fO)) goto L_004f8d61;
L_004f8cf0:; BB(0x004f8cf0);
    /* 004f8cf0: movsx ecx, word ptr [ebp - 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 004f8cf4: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004f8cf7: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 004f8cfa: movzx ecx, byte ptr [eax + ecx] */ r_ecx = (u32)R8((u32)(r_eax+r_ecx));
    /* 004f8cfe: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8d00: jne 0x4f8d5c */ if (!fZ) goto L_004f8d5c;
L_004f8d02:; BB(0x004f8d02);
    /* 004f8d02: movsx edx, word ptr [ebp - 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 004f8d06: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004f8d09: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 004f8d0c: movzx edx, byte ptr [ecx + edx] */ r_edx = (u32)R8((u32)(r_ecx+r_edx));
    /* 004f8d10: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8d12: je 0x4f8d5c */ if (fZ) goto L_004f8d5c;
L_004f8d14:; BB(0x004f8d14);
    /* 004f8d14: movzx eax, byte ptr [ebp + 8] */ r_eax = (u32)R8((u32)(r_ebp+0x8u));
    /* 004f8d18: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8d1a: je 0x4f8d2e */ if (fZ) goto L_004f8d2e;
L_004f8d1c:; BB(0x004f8d1c);
    /* 004f8d1c: movsx ecx, word ptr [ebp - 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 004f8d20: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004f8d23: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 004f8d26: movzx ecx, byte ptr [eax + ecx] */ r_ecx = (u32)R8((u32)(r_eax+r_ecx));
    /* 004f8d2a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8d2c: jne 0x4f8d48 */ if (!fZ) goto L_004f8d48;
L_004f8d2e:; BB(0x004f8d2e);
    /* 004f8d2e: movzx edx, byte ptr [ebp + 8] */ r_edx = (u32)R8((u32)(r_ebp+0x8u));
    /* 004f8d32: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8d34: jne 0x4f8d5c */ if (!fZ) goto L_004f8d5c;
L_004f8d36:; BB(0x004f8d36);
    /* 004f8d36: movsx eax, word ptr [ebp - 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 004f8d3a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004f8d3d: mov edx, dword ptr [ecx + 0x48] */ r_edx = R32((u32)(r_ecx+0x48u));
    /* 004f8d40: movzx eax, byte ptr [edx + eax] */ r_eax = (u32)R8((u32)(r_edx+r_eax));
    /* 004f8d44: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8d46: je 0x4f8d5c */ if (fZ) goto L_004f8d5c;
L_004f8d48:; BB(0x004f8d48);
    /* 004f8d48: mov cx, word ptr [ebp - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004f8d4c: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f8d50: mov word ptr [ebp - 4], cx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_ecx);
    /* 004f8d54: mov dx, word ptr [ebp - 8] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 004f8d58: mov word ptr [ebp - 0xc], dx */ W16((u32)(r_ebp+0xfffffff4u), (u16)r_edx);
L_004f8d5c:; BB(0x004f8d5c);
    /* 004f8d5c: jmp 0x4f8cd5 */ goto L_004f8cd5;
L_004f8d61:; BB(0x004f8d61);
    /* 004f8d61: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f8d65: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8d67: jne 0x4f8d71 */ if (!fZ) goto L_004f8d71;
L_004f8d69:; BB(0x004f8d69);
    /* 004f8d69: mov ax, 0xfffb */ r_eax = (r_eax & 0xffff0000u) | ((0xfffbu) & 0xffffu);
    /* 004f8d6d: jmp 0x4f8d86 */ goto L_004f8d86;
L_004f8d71:; BB(0x004f8d71);
    /* 004f8d71: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f8d75: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8d78: jne 0x4f8d82 */ if (!fZ) goto L_004f8d82;
L_004f8d7a:; BB(0x004f8d7a);
    /* 004f8d7a: mov ax, word ptr [ebp - 0xc] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff4u))) & 0xffffu);
    /* 004f8d7e: jmp 0x4f8d86 */ goto L_004f8d86;
L_004f8d82:; BB(0x004f8d82);
    /* 004f8d82: mov ax, 0xfffc */ r_eax = (r_eax & 0xffff0000u) | ((0xfffcu) & 0xffffu);
L_004f8d86:; BB(0x004f8d86);
    /* 004f8d86: mov esp, ebp */ r_esp = r_ebp;
    /* 004f8d88: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f8d89: ret 4 */ FN_RET(0x004f8c30); r_esp += 8; return;
}

void f_004f8d90(void) /* PokerPot::func_004f8d90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f8d90);
    /* 004f8d90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f8d91: mov ebp, esp */ r_ebp = r_esp;
    /* 004f8d93: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f8d96: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004f8d99: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f8d9c: movzx ecx, byte ptr [eax + 1] */ r_ecx = (u32)R8((u32)(r_eax+0x1u));
    /* 004f8da0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8da2: jne 0x4f8dbb */ if (!fZ) goto L_004f8dbb;
L_004f8da4:; BB(0x004f8da4);
    /* 004f8da4: push 0x573 */ { u32 v = 0x573u; r_esp -= 4; W32(r_esp, v); }
    /* 004f8da9: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f8dae: push 0x6bfe6c */ { u32 v = 0x6bfe6cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f8db3: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f8db8u); f_005e9f20();
    /* 004f8db8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f8dbb:; BB(0x004f8dbb);
    /* 004f8dbb: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f8dbe: movzx ecx, byte ptr [eax + 3] */ r_ecx = (u32)R8((u32)(r_eax+0x3u));
    /* 004f8dc2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8dc4: jne 0x4f8ddd */ if (!fZ) goto L_004f8ddd;
L_004f8dc6:; BB(0x004f8dc6);
    /* 004f8dc6: push 0x574 */ { u32 v = 0x574u; r_esp -= 4; W32(r_esp, v); }
    /* 004f8dcb: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f8dd0: push 0x6c0138 */ { u32 v = 0x6c0138u; r_esp -= 4; W32(r_esp, v); }
    /* 004f8dd5: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f8ddau); f_005e9f20();
    /* 004f8dda: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f8ddd:; BB(0x004f8ddd);
    /* 004f8ddd: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f8de0: movzx ecx, byte ptr [eax + 5] */ r_ecx = (u32)R8((u32)(r_eax+0x5u));
    /* 004f8de4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8de6: jne 0x4f8dff */ if (!fZ) goto L_004f8dff;
L_004f8de8:; BB(0x004f8de8);
    /* 004f8de8: push 0x575 */ { u32 v = 0x575u; r_esp -= 4; W32(r_esp, v); }
    /* 004f8ded: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f8df2: push 0x6c02e0 */ { u32 v = 0x6c02e0u; r_esp -= 4; W32(r_esp, v); }
    /* 004f8df7: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f8dfcu); f_005e9f20();
    /* 004f8dfc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f8dff:; BB(0x004f8dff);
    /* 004f8dff: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f8e02: movzx ecx, byte ptr [eax + 4] */ r_ecx = (u32)R8((u32)(r_eax+0x4u));
    /* 004f8e06: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8e08: jne 0x4f8e21 */ if (!fZ) goto L_004f8e21;
L_004f8e0a:; BB(0x004f8e0a);
    /* 004f8e0a: push 0x576 */ { u32 v = 0x576u; r_esp -= 4; W32(r_esp, v); }
    /* 004f8e0f: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f8e14: push 0x6c02f4 */ { u32 v = 0x6c02f4u; r_esp -= 4; W32(r_esp, v); }
    /* 004f8e19: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f8e1eu); f_005e9f20();
    /* 004f8e1e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f8e21:; BB(0x004f8e21);
    /* 004f8e21: mov word ptr [ebp - 8], 0xffff */ W16((u32)(r_ebp+0xfffffff8u), 0xffffu);
    /* 004f8e27: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004f8e2d: jmp 0x4f8e3b */ goto L_004f8e3b;
L_004f8e2f:; BB(0x004f8e2f);
    /* 004f8e2f: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004f8e33: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f8e37: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_004f8e3b:; BB(0x004f8e3b);
    /* 004f8e3b: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f8e3f: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f8e42: movsx eax, word ptr [edx + 6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x6u));
    /* 004f8e46: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f8e48: jge 0x4f8eae */ if ((fS==fO)) goto L_004f8eae;
L_004f8e4a:; BB(0x004f8e4a);
    /* 004f8e4a: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f8e4e: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f8e51: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 004f8e54: movzx ecx, byte ptr [eax + ecx] */ r_ecx = (u32)R8((u32)(r_eax+r_ecx));
    /* 004f8e58: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8e5a: jne 0x4f8eac */ if (!fZ) goto L_004f8eac;
L_004f8e5c:; BB(0x004f8e5c);
    /* 004f8e5c: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f8e60: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f8e63: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 004f8e66: movzx edx, byte ptr [ecx + edx] */ r_edx = (u32)R8((u32)(r_ecx+r_edx));
    /* 004f8e6a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8e6c: je 0x4f8eac */ if (fZ) goto L_004f8eac;
L_004f8e6e:; BB(0x004f8e6e);
    /* 004f8e6e: movzx eax, byte ptr [ebp + 8] */ r_eax = (u32)R8((u32)(r_ebp+0x8u));
    /* 004f8e72: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8e74: je 0x4f8e88 */ if (fZ) goto L_004f8e88;
L_004f8e76:; BB(0x004f8e76);
    /* 004f8e76: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f8e7a: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f8e7d: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 004f8e80: movzx ecx, byte ptr [eax + ecx] */ r_ecx = (u32)R8((u32)(r_eax+r_ecx));
    /* 004f8e84: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8e86: jne 0x4f8ea2 */ if (!fZ) goto L_004f8ea2;
L_004f8e88:; BB(0x004f8e88);
    /* 004f8e88: movzx edx, byte ptr [ebp + 8] */ r_edx = (u32)R8((u32)(r_ebp+0x8u));
    /* 004f8e8c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8e8e: jne 0x4f8eac */ if (!fZ) goto L_004f8eac;
L_004f8e90:; BB(0x004f8e90);
    /* 004f8e90: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f8e94: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f8e97: mov edx, dword ptr [ecx + 0x48] */ r_edx = R32((u32)(r_ecx+0x48u));
    /* 004f8e9a: movzx eax, byte ptr [edx + eax] */ r_eax = (u32)R8((u32)(r_edx+r_eax));
    /* 004f8e9e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8ea0: je 0x4f8eac */ if (fZ) goto L_004f8eac;
L_004f8ea2:; BB(0x004f8ea2);
    /* 004f8ea2: mov cx, word ptr [ebp - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004f8ea6: mov word ptr [ebp - 8], cx */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_ecx);
    /* 004f8eaa: jmp 0x4f8eae */ goto L_004f8eae;
L_004f8eac:; BB(0x004f8eac);
    /* 004f8eac: jmp 0x4f8e2f */ goto L_004f8e2f;
L_004f8eae:; BB(0x004f8eae);
    /* 004f8eae: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f8eb2: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f8eb5: movsx ecx, word ptr [eax + 6] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x6u));
    /* 004f8eb9: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8ebb: jne 0x4f8ec5 */ if (!fZ) goto L_004f8ec5;
L_004f8ebd:; BB(0x004f8ebd);
    /* 004f8ebd: or ax, 0xffff */ {  u32 a = (u16)r_eax; u32 b = 0xffffu; u32 r = (a | b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f8ec1: jmp 0x4f8f0e */ goto L_004f8f0e;
L_004f8ec5:; BB(0x004f8ec5);
    /* 004f8ec5: movsx edx, word ptr [ebp - 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 004f8ec9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004f8ecb: jge 0x4f8ee4 */ if ((fS==fO)) goto L_004f8ee4;
L_004f8ecd:; BB(0x004f8ecd);
    /* 004f8ecd: push 0x588 */ { u32 v = 0x588u; r_esp -= 4; W32(r_esp, v); }
    /* 004f8ed2: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f8ed7: push 0x6c0390 */ { u32 v = 0x6c0390u; r_esp -= 4; W32(r_esp, v); }
    /* 004f8edc: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f8ee1u); f_005e9f20();
    /* 004f8ee1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f8ee4:; BB(0x004f8ee4);
    /* 004f8ee4: movzx ecx, byte ptr [ebp + 8] */ r_ecx = (u32)R8((u32)(r_ebp+0x8u));
    /* 004f8ee8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8eea: je 0x4f8efc */ if (fZ) goto L_004f8efc;
L_004f8eec:; BB(0x004f8eec);
    /* 004f8eec: movsx edx, word ptr [ebp - 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 004f8ef0: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f8ef3: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 004f8ef6: mov byte ptr [edx + ecx], 0 */ W8((u32)(r_edx+r_ecx), 0x0u);
    /* 004f8efa: jmp 0x4f8f0a */ goto L_004f8f0a;
L_004f8efc:; BB(0x004f8efc);
    /* 004f8efc: movsx edx, word ptr [ebp - 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 004f8f00: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f8f03: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 004f8f06: mov byte ptr [edx + ecx], 0 */ W8((u32)(r_edx+r_ecx), 0x0u);
L_004f8f0a:; BB(0x004f8f0a);
    /* 004f8f0a: mov ax, word ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
L_004f8f0e:; BB(0x004f8f0e);
    /* 004f8f0e: mov esp, ebp */ r_esp = r_ebp;
    /* 004f8f10: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f8f11: ret 4 */ FN_RET(0x004f8d90); r_esp += 8; return;
}

void f_004f8f20(void) /* PokerPot::func_004f8f20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f8f20);
    /* 004f8f20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f8f21: mov ebp, esp */ r_ebp = r_esp;
    /* 004f8f23: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f8f26: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004f8f29: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f8f2c: mov cx, word ptr [eax + 8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+0x8u))) & 0xffffu);
    /* 004f8f30: mov word ptr [ebp - 4], cx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_ecx);
    /* 004f8f34: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f8f37: mov ax, word ptr [edx + 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x8u))) & 0xffffu);
    /* 004f8f3b: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f8f3f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f8f42: mov word ptr [ecx + 8], ax */ W16((u32)(r_ecx+0x8u), (u16)r_eax);
    /* 004f8f46: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f8f49: movsx eax, word ptr [edx + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x8u));
    /* 004f8f4d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f8f50: movsx edx, word ptr [ecx + 6] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x6u));
    /* 004f8f54: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8f56: jne 0x4f8f61 */ if (!fZ) goto L_004f8f61;
L_004f8f58:; BB(0x004f8f58);
    /* 004f8f58: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f8f5b: mov word ptr [eax + 8], 0 */ W16((u32)(r_eax+0x8u), 0x0u);
L_004f8f61:; BB(0x004f8f61);
    /* 004f8f61: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f8f64: movsx edx, word ptr [ecx + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x8u));
    /* 004f8f68: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f8f6c: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8f6e: je 0x4f8fc9 */ if (fZ) goto L_004f8fc9;
L_004f8f70:; BB(0x004f8f70);
    /* 004f8f70: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f8f73: movsx edx, word ptr [ecx + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x8u));
    /* 004f8f77: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f8f7a: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 004f8f7d: movzx edx, byte ptr [ecx + edx] */ r_edx = (u32)R8((u32)(r_ecx+r_edx));
    /* 004f8f81: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8f83: jne 0x4f8f9a */ if (!fZ) goto L_004f8f9a;
L_004f8f85:; BB(0x004f8f85);
    /* 004f8f85: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f8f88: movsx ecx, word ptr [eax + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x8u));
    /* 004f8f8c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f8f8f: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 004f8f92: movzx ecx, byte ptr [eax + ecx] */ r_ecx = (u32)R8((u32)(r_eax+r_ecx));
    /* 004f8f96: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8f98: je 0x4f8fc9 */ if (fZ) goto L_004f8fc9;
L_004f8f9a:; BB(0x004f8f9a);
    /* 004f8f9a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f8f9d: mov ax, word ptr [edx + 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x8u))) & 0xffffu);
    /* 004f8fa1: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f8fa5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f8fa8: mov word ptr [ecx + 8], ax */ W16((u32)(r_ecx+0x8u), (u16)r_eax);
    /* 004f8fac: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f8faf: movsx eax, word ptr [edx + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x8u));
    /* 004f8fb3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f8fb6: movsx edx, word ptr [ecx + 6] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x6u));
    /* 004f8fba: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8fbc: jne 0x4f8fc7 */ if (!fZ) goto L_004f8fc7;
L_004f8fbe:; BB(0x004f8fbe);
    /* 004f8fbe: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f8fc1: mov word ptr [eax + 8], 0 */ W16((u32)(r_eax+0x8u), 0x0u);
L_004f8fc7:; BB(0x004f8fc7);
    /* 004f8fc7: jmp 0x4f8f61 */ goto L_004f8f61;
L_004f8fc9:; BB(0x004f8fc9);
    /* 004f8fc9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f8fcc: movsx edx, word ptr [ecx + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x8u));
    /* 004f8fd0: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f8fd4: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8fd6: je 0x4f8fe3 */ if (fZ) goto L_004f8fe3;
L_004f8fd8:; BB(0x004f8fd8);
    /* 004f8fd8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f8fdb: mov ax, word ptr [ecx + 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ecx+0x8u))) & 0xffffu);
    /* 004f8fdf: jmp 0x4f9046 */ goto L_004f9046;
L_004f8fe3:; BB(0x004f8fe3);
    /* 004f8fe3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f8fe6: call 0x4f91a0 */ r_esp -= 4; W32(r_esp, 0x4f8febu); f_004f91a0();
    /* 004f8feb: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 004f8fee: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8ff1: jne 0x4f9001 */ if (!fZ) goto L_004f9001;
L_004f8ff3:; BB(0x004f8ff3);
    /* 004f8ff3: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f8ff6: mov byte ptr [eax], 0 */ W8((u32)(r_eax), 0x0u);
    /* 004f8ff9: mov ax, 0xfffe */ r_eax = (r_eax & 0xffff0000u) | ((0xfffeu) & 0xffffu);
    /* 004f8ffd: jmp 0x4f9046 */ goto L_004f9046;
L_004f9001:; BB(0x004f9001);
    /* 004f9001: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f9004: call 0x4f9110 */ r_esp -= 4; W32(r_esp, 0x4f9009u); f_004f9110();
    /* 004f9009: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 004f900c: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f900f: jg 0x4f9027 */ if ((!fZ&&fS==fO)) goto L_004f9027;
L_004f9011:; BB(0x004f9011);
    /* 004f9011: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f9014: mov byte ptr [edx], 0 */ W8((u32)(r_edx), 0x0u);
    /* 004f9017: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004f901a: call 0x4f9220 */ r_esp -= 4; W32(r_esp, 0x4f901fu); f_004f9220();
    /* 004f901f: mov ax, 0xfffd */ r_eax = (r_eax & 0xffff0000u) | ((0xfffdu) & 0xffffu);
    /* 004f9023: jmp 0x4f9046 */ goto L_004f9046;
L_004f9027:; BB(0x004f9027);
    /* 004f9027: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 004f9029: jne 0x4f9042 */ if (!fZ) goto L_004f9042;
L_004f902b:; BB(0x004f902b);
    /* 004f902b: push 0x5b0 */ { u32 v = 0x5b0u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9030: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9035: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 004f903a: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f903fu); f_005e9f20();
    /* 004f903f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f9042:; BB(0x004f9042);
    /* 004f9042: mov ax, 0xfffe */ r_eax = (r_eax & 0xffff0000u) | ((0xfffeu) & 0xffffu);
L_004f9046:; BB(0x004f9046);
    /* 004f9046: mov esp, ebp */ r_esp = r_ebp;
    /* 004f9048: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f9049: ret  */ FN_RET(0x004f8f20); r_esp += 4; return;
}

void f_004f9110(void) /* PokerPot::func_004f9110 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f9110);
    /* 004f9110: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f9111: mov ebp, esp */ r_ebp = r_esp;
    /* 004f9113: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f9116: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004f9119: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f911c: movzx ecx, byte ptr [eax + 1] */ r_ecx = (u32)R8((u32)(r_eax+0x1u));
    /* 004f9120: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9122: jne 0x4f913b */ if (!fZ) goto L_004f913b;
L_004f9124:; BB(0x004f9124);
    /* 004f9124: push 0x5ca */ { u32 v = 0x5cau; r_esp -= 4; W32(r_esp, v); }
    /* 004f9129: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f912e: push 0x6bfe6c */ { u32 v = 0x6bfe6cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f9133: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f9138u); f_005e9f20();
    /* 004f9138: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f913b:; BB(0x004f913b);
    /* 004f913b: mov word ptr [ebp - 8], 0 */ W16((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 004f9141: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004f9147: jmp 0x4f9155 */ goto L_004f9155;
L_004f9149:; BB(0x004f9149);
    /* 004f9149: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004f914d: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f9151: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_004f9155:; BB(0x004f9155);
    /* 004f9155: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f9159: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f915c: movsx eax, word ptr [edx + 6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x6u));
    /* 004f9160: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9162: jge 0x4f9196 */ if ((fS==fO)) goto L_004f9196;
L_004f9164:; BB(0x004f9164);
    /* 004f9164: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f9168: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f916b: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 004f916e: movzx ecx, byte ptr [eax + ecx] */ r_ecx = (u32)R8((u32)(r_eax+r_ecx));
    /* 004f9172: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9174: jne 0x4f9194 */ if (!fZ) goto L_004f9194;
L_004f9176:; BB(0x004f9176);
    /* 004f9176: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f917a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f917d: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 004f9180: movzx edx, byte ptr [ecx + edx] */ r_edx = (u32)R8((u32)(r_ecx+r_edx));
    /* 004f9184: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9186: jne 0x4f9194 */ if (!fZ) goto L_004f9194;
L_004f9188:; BB(0x004f9188);
    /* 004f9188: mov ax, word ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 004f918c: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f9190: mov word ptr [ebp - 8], ax */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_eax);
L_004f9194:; BB(0x004f9194);
    /* 004f9194: jmp 0x4f9149 */ goto L_004f9149;
L_004f9196:; BB(0x004f9196);
    /* 004f9196: mov ax, word ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 004f919a: mov esp, ebp */ r_esp = r_ebp;
    /* 004f919c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f919d: ret  */ FN_RET(0x004f9110); r_esp += 4; return;
}

void f_004f91a0(void) /* PokerPot::func_004f91a0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f91a0);
    /* 004f91a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f91a1: mov ebp, esp */ r_ebp = r_esp;
    /* 004f91a3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f91a6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004f91a9: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f91ac: movzx ecx, byte ptr [eax + 1] */ r_ecx = (u32)R8((u32)(r_eax+0x1u));
    /* 004f91b0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f91b2: jne 0x4f91cb */ if (!fZ) goto L_004f91cb;
L_004f91b4:; BB(0x004f91b4);
    /* 004f91b4: push 0x5d9 */ { u32 v = 0x5d9u; r_esp -= 4; W32(r_esp, v); }
    /* 004f91b9: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f91be: push 0x6bfe6c */ { u32 v = 0x6bfe6cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f91c3: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f91c8u); f_005e9f20();
    /* 004f91c8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f91cb:; BB(0x004f91cb);
    /* 004f91cb: mov word ptr [ebp - 8], 0 */ W16((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 004f91d1: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004f91d7: jmp 0x4f91e5 */ goto L_004f91e5;
L_004f91d9:; BB(0x004f91d9);
    /* 004f91d9: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004f91dd: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f91e1: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_004f91e5:; BB(0x004f91e5);
    /* 004f91e5: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f91e9: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f91ec: movsx eax, word ptr [edx + 6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x6u));
    /* 004f91f0: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f91f2: jge 0x4f9214 */ if ((fS==fO)) goto L_004f9214;
L_004f91f4:; BB(0x004f91f4);
    /* 004f91f4: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f91f8: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f91fb: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 004f91fe: movzx ecx, byte ptr [eax + ecx] */ r_ecx = (u32)R8((u32)(r_eax+r_ecx));
    /* 004f9202: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9204: jne 0x4f9212 */ if (!fZ) goto L_004f9212;
L_004f9206:; BB(0x004f9206);
    /* 004f9206: mov dx, word ptr [ebp - 8] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 004f920a: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f920e: mov word ptr [ebp - 8], dx */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_edx);
L_004f9212:; BB(0x004f9212);
    /* 004f9212: jmp 0x4f91d9 */ goto L_004f91d9;
L_004f9214:; BB(0x004f9214);
    /* 004f9214: mov ax, word ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 004f9218: mov esp, ebp */ r_esp = r_ebp;
    /* 004f921a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f921b: ret  */ FN_RET(0x004f91a0); r_esp += 4; return;
}

void f_004f9220(void) /* PokerPot::func_004f9220 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f9220);
    /* 004f9220: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f9221: mov ebp, esp */ r_ebp = r_esp;
    /* 004f9223: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f9226: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004f9227: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004f922a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f922d: movzx ecx, byte ptr [eax + 1] */ r_ecx = (u32)R8((u32)(r_eax+0x1u));
    /* 004f9231: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9233: jne 0x4f924c */ if (!fZ) goto L_004f924c;
L_004f9235:; BB(0x004f9235);
    /* 004f9235: push 0x5e7 */ { u32 v = 0x5e7u; r_esp -= 4; W32(r_esp, v); }
    /* 004f923a: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f923f: push 0x6bfe6c */ { u32 v = 0x6bfe6cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f9244: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f9249u); f_005e9f20();
    /* 004f9249: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f924c:; BB(0x004f924c);
    /* 004f924c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f924f: call 0x4f9110 */ r_esp -= 4; W32(r_esp, 0x4f9254u); f_004f9110();
    /* 004f9254: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 004f9257: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f925a: jle 0x4f9273 */ if ((fZ||fS!=fO)) goto L_004f9273;
L_004f925c:; BB(0x004f925c);
    /* 004f925c: push 0x5e8 */ { u32 v = 0x5e8u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9261: push 0x6bfe08 */ { u32 v = 0x6bfe08u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9266: push 0x6c00b0 */ { u32 v = 0x6c00b0u; r_esp -= 4; W32(r_esp, v); }
    /* 004f926b: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4f9270u); f_005e9f20();
    /* 004f9270: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f9273:; BB(0x004f9273);
    /* 004f9273: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 004f927a: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 004f9281: mov word ptr [ebp - 0x18], 0 */ W16((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 004f9287: jmp 0x4f9295 */ goto L_004f9295;
L_004f9289:; BB(0x004f9289);
    /* 004f9289: mov dx, word ptr [ebp - 0x18] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe8u))) & 0xffffu);
    /* 004f928d: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f9291: mov word ptr [ebp - 0x18], dx */ W16((u32)(r_ebp+0xffffffe8u), (u16)r_edx);
L_004f9295:; BB(0x004f9295);
    /* 004f9295: movsx eax, word ptr [ebp - 0x18] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe8u));
    /* 004f9299: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f929c: movsx edx, word ptr [ecx + 6] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x6u));
    /* 004f92a0: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f92a2: jge 0x4f931c */ if ((fS==fO)) goto L_004f931c;
L_004f92a4:; BB(0x004f92a4);
    /* 004f92a4: movsx eax, word ptr [ebp - 0x18] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe8u));
    /* 004f92a8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f92ab: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 004f92ae: movzx eax, byte ptr [edx + eax] */ r_eax = (u32)R8((u32)(r_edx+r_eax));
    /* 004f92b2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f92b4: jne 0x4f9317 */ if (!fZ) goto L_004f9317;
L_004f92b6:; BB(0x004f92b6);
    /* 004f92b6: movsx ecx, word ptr [ebp - 0x18] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe8u));
    /* 004f92ba: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f92bd: mov eax, dword ptr [edx + 0x68] */ r_eax = R32((u32)(r_edx+0x68u));
    /* 004f92c0: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 004f92c3: cmp ecx, dword ptr [ebp - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f92c6: jg 0x4f92ec */ if ((!fZ&&fS==fO)) goto L_004f92ec;
L_004f92c8:; BB(0x004f92c8);
    /* 004f92c8: movsx edx, word ptr [ebp - 0x18] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe8u));
    /* 004f92cc: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f92cf: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 004f92d2: mov edx, dword ptr [ecx + edx*4] */ r_edx = R32((u32)(r_ecx+r_edx*4));
    /* 004f92d5: cmp edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f92d8: jne 0x4f9317 */ if (!fZ) goto L_004f9317;
L_004f92da:; BB(0x004f92da);
    /* 004f92da: movsx eax, word ptr [ebp - 0x18] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe8u));
    /* 004f92de: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f92e1: mov edx, dword ptr [ecx + 0x6c] */ r_edx = R32((u32)(r_ecx+0x6cu));
    /* 004f92e4: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 004f92e7: cmp eax, dword ptr [ebp - 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f92ea: jle 0x4f9317 */ if ((fZ||fS!=fO)) goto L_004f9317;
L_004f92ec:; BB(0x004f92ec);
    /* 004f92ec: movsx ecx, word ptr [ebp - 0x18] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe8u));
    /* 004f92f0: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f92f3: mov eax, dword ptr [edx + 0x68] */ r_eax = R32((u32)(r_edx+0x68u));
    /* 004f92f6: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 004f92f9: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 004f92fc: movsx edx, word ptr [ebp - 0x18] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe8u));
    /* 004f9300: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f9303: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 004f9306: mov edx, dword ptr [ecx + edx*4] */ r_edx = R32((u32)(r_ecx+r_edx*4));
    /* 004f9309: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 004f930c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f930f: mov cx, word ptr [ebp - 0x18] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe8u))) & 0xffffu);
    /* 004f9313: mov word ptr [eax + 0x20], cx */ W16((u32)(r_eax+0x20u), (u16)r_ecx);
L_004f9317:; BB(0x004f9317);
    /* 004f9317: jmp 0x4f9289 */ goto L_004f9289;
L_004f931c:; BB(0x004f931c);
    /* 004f931c: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 004f9323: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 004f932a: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004f9330: mov word ptr [ebp - 0x18], 0 */ W16((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 004f9336: jmp 0x4f9344 */ goto L_004f9344;
L_004f9338:; BB(0x004f9338);
    /* 004f9338: mov dx, word ptr [ebp - 0x18] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe8u))) & 0xffffu);
    /* 004f933c: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f9340: mov word ptr [ebp - 0x18], dx */ W16((u32)(r_ebp+0xffffffe8u), (u16)r_edx);
L_004f9344:; BB(0x004f9344);
    /* 004f9344: movsx eax, word ptr [ebp - 0x18] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe8u));
    /* 004f9348: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f934b: movsx edx, word ptr [ecx + 6] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x6u));
    /* 004f934f: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9351: jge 0x4f93dd */ if ((fS==fO)) goto L_004f93dd;
L_004f9357:; BB(0x004f9357);
    /* 004f9357: movsx eax, word ptr [ebp - 0x18] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe8u));
    /* 004f935b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f935e: movsx edx, word ptr [ecx + 0x20] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x20u));
    /* 004f9362: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9364: jne 0x4f9368 */ if (!fZ) goto L_004f9368;
L_004f9366:; BB(0x004f9366);
    /* 004f9366: jmp 0x4f9338 */ goto L_004f9338;
L_004f9368:; BB(0x004f9368);
    /* 004f9368: movsx eax, word ptr [ebp - 0x18] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe8u));
    /* 004f936c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f936f: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 004f9372: movzx eax, byte ptr [edx + eax] */ r_eax = (u32)R8((u32)(r_edx+r_eax));
    /* 004f9376: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9378: jne 0x4f93d8 */ if (!fZ) goto L_004f93d8;
L_004f937a:; BB(0x004f937a);
    /* 004f937a: movsx ecx, word ptr [ebp - 0x18] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe8u));
    /* 004f937e: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f9381: mov eax, dword ptr [edx + 0x68] */ r_eax = R32((u32)(r_edx+0x68u));
    /* 004f9384: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 004f9387: cmp ecx, dword ptr [ebp - 0x1c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f938a: jg 0x4f93b0 */ if ((!fZ&&fS==fO)) goto L_004f93b0;
L_004f938c:; BB(0x004f938c);
    /* 004f938c: movsx edx, word ptr [ebp - 0x18] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe8u));
    /* 004f9390: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f9393: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 004f9396: mov edx, dword ptr [ecx + edx*4] */ r_edx = R32((u32)(r_ecx+r_edx*4));
    /* 004f9399: cmp edx, dword ptr [ebp - 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f939c: jne 0x4f93d8 */ if (!fZ) goto L_004f93d8;
L_004f939e:; BB(0x004f939e);
    /* 004f939e: movsx eax, word ptr [ebp - 0x18] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe8u));
    /* 004f93a2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f93a5: mov edx, dword ptr [ecx + 0x6c] */ r_edx = R32((u32)(r_ecx+0x6cu));
    /* 004f93a8: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 004f93ab: cmp eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f93ae: jle 0x4f93d8 */ if ((fZ||fS!=fO)) goto L_004f93d8;
L_004f93b0:; BB(0x004f93b0);
    /* 004f93b0: movsx ecx, word ptr [ebp - 0x18] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe8u));
    /* 004f93b4: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f93b7: mov eax, dword ptr [edx + 0x68] */ r_eax = R32((u32)(r_edx+0x68u));
    /* 004f93ba: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 004f93bd: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 004f93c0: movsx edx, word ptr [ebp - 0x18] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe8u));
    /* 004f93c4: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f93c7: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 004f93ca: mov edx, dword ptr [ecx + edx*4] */ r_edx = R32((u32)(r_ecx+r_edx*4));
    /* 004f93cd: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 004f93d0: mov ax, word ptr [ebp - 0x18] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe8u))) & 0xffffu);
    /* 004f93d4: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_004f93d8:; BB(0x004f93d8);
    /* 004f93d8: jmp 0x4f9338 */ goto L_004f9338;
L_004f93dd:; BB(0x004f93dd);
    /* 004f93dd: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f93e0: movsx edx, word ptr [ecx + 0x20] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x20u));
    /* 004f93e4: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f93e7: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 004f93ea: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f93ee: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f93f1: mov esi, dword ptr [esi + 0x68] */ r_esi = R32((u32)(r_esi+0x68u));
    /* 004f93f4: mov ecx, dword ptr [ecx + edx*4] */ r_ecx = R32((u32)(r_ecx+r_edx*4));
    /* 004f93f7: sub ecx, dword ptr [esi + eax*4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esi+r_eax*4)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004f93fa: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f93fd: mov dword ptr [edx + 0x1c], ecx */ W32((u32)(r_edx+0x1cu), r_ecx);
    /* 004f9400: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f9403: movsx ecx, word ptr [eax + 0x20] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x20u));
    /* 004f9407: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f940a: mov eax, dword ptr [edx + 0x68] */ r_eax = R32((u32)(r_edx+0x68u));
    /* 004f940d: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f9410: mov eax, dword ptr [eax + ecx*4] */ r_eax = R32((u32)(r_eax+r_ecx*4));
    /* 004f9413: sub eax, dword ptr [edx + 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x1cu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004f9416: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f9419: movsx edx, word ptr [ecx + 0x20] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x20u));
    /* 004f941d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f9420: mov ecx, dword ptr [ecx + 0x68] */ r_ecx = R32((u32)(r_ecx+0x68u));
    /* 004f9423: mov dword ptr [ecx + edx*4], eax */ W32((u32)(r_ecx+r_edx*4), r_eax);
    /* 004f9426: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f9429: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f942c: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 004f942f: sub ecx, dword ptr [eax + 0x1c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x1cu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9432: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f9435: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 004f9438: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f943b: movsx ecx, word ptr [eax + 0x20] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x20u));
    /* 004f943f: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f9442: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 004f9445: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004f9449: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f944c: mov esi, dword ptr [esi + 0x6c] */ r_esi = R32((u32)(r_esi+0x6cu));
    /* 004f944f: mov eax, dword ptr [eax + ecx*4] */ r_eax = R32((u32)(r_eax+r_ecx*4));
    /* 004f9452: sub eax, dword ptr [esi + edx*4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+r_edx*4)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004f9455: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004f9458: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f945b: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 004f945e: sub edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004f9461: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f9464: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 004f9467: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f946a: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 004f946d: sub edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004f9470: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f9473: mov dword ptr [eax + 0x10], edx */ W32((u32)(r_eax+0x10u), r_edx);
    /* 004f9476: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f9479: movsx edx, word ptr [ecx + 0x20] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x20u));
    /* 004f947d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f9480: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 004f9483: mov edx, dword ptr [ecx + edx*4] */ r_edx = R32((u32)(r_ecx+r_edx*4));
    /* 004f9486: sub edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004f9489: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f948c: movsx ecx, word ptr [eax + 0x20] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x20u));
    /* 004f9490: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f9493: mov eax, dword ptr [eax + 0x6c] */ r_eax = R32((u32)(r_eax+0x6cu));
    /* 004f9496: mov dword ptr [eax + ecx*4], edx */ W32((u32)(r_eax+r_ecx*4), r_edx);
    /* 004f9499: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f949c: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 004f949f: add edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f94a2: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f94a5: mov dword ptr [eax + 0x1c], edx */ W32((u32)(r_eax+0x1cu), r_edx);
    /* 004f94a8: mov word ptr [ebp - 0x18], 0 */ W16((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 004f94ae: jmp 0x4f94bc */ goto L_004f94bc;
L_004f94b0:; BB(0x004f94b0);
    /* 004f94b0: mov cx, word ptr [ebp - 0x18] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe8u))) & 0xffffu);
    /* 004f94b4: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004f94b8: mov word ptr [ebp - 0x18], cx */ W16((u32)(r_ebp+0xffffffe8u), (u16)r_ecx);
L_004f94bc:; BB(0x004f94bc);
    /* 004f94bc: movsx edx, word ptr [ebp - 0x18] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe8u));
    /* 004f94c0: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f94c3: movsx ecx, word ptr [eax + 6] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x6u));
    /* 004f94c7: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f94c9: jge 0x4f957a */ if ((fS==fO)) goto L_004f957a;
L_004f94cf:; BB(0x004f94cf);
    /* 004f94cf: movsx edx, word ptr [ebp - 0x18] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe8u));
    /* 004f94d3: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f94d6: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 004f94d9: movzx edx, byte ptr [ecx + edx] */ r_edx = (u32)R8((u32)(r_ecx+r_edx));
    /* 004f94dd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f94df: je 0x4f9575 */ if (fZ) goto L_004f9575;
L_004f94e5:; BB(0x004f94e5);
    /* 004f94e5: movsx eax, word ptr [ebp - 0x18] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe8u));
    /* 004f94e9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f94ec: mov edx, dword ptr [ecx + 0x68] */ r_edx = R32((u32)(r_ecx+0x68u));
    /* 004f94ef: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f94f2: movsx ecx, word ptr [ecx + 0x20] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ecx+0x20u));
    /* 004f94f6: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f94f9: mov esi, dword ptr [esi + 0x68] */ r_esi = R32((u32)(r_esi+0x68u));
    /* 004f94fc: mov edx, dword ptr [edx + eax*4] */ r_edx = R32((u32)(r_edx+r_eax*4));
    /* 004f94ff: cmp edx, dword ptr [esi + ecx*4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esi+r_ecx*4)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9502: jle 0x4f9575 */ if ((fZ||fS!=fO)) goto L_004f9575;
L_004f9504:; BB(0x004f9504);
    /* 004f9504: movsx eax, word ptr [ebp - 0x18] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe8u));
    /* 004f9508: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f950b: mov edx, dword ptr [ecx + 0x68] */ r_edx = R32((u32)(r_ecx+0x68u));
    /* 004f950e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f9511: movsx ecx, word ptr [ecx + 0x20] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ecx+0x20u));
    /* 004f9515: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f9518: mov esi, dword ptr [esi + 0x68] */ r_esi = R32((u32)(r_esi+0x68u));
    /* 004f951b: mov edx, dword ptr [edx + eax*4] */ r_edx = R32((u32)(r_edx+r_eax*4));
    /* 004f951e: sub edx, dword ptr [esi + ecx*4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esi+r_ecx*4)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004f9521: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f9524: add edx, dword ptr [eax + 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x1cu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f9527: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f952a: mov dword ptr [ecx + 0x1c], edx */ W32((u32)(r_ecx+0x1cu), r_edx);
    /* 004f952d: movsx edx, word ptr [ebp - 0x18] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe8u));
    /* 004f9531: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f9534: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 004f9537: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f953a: movsx eax, word ptr [eax + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x20u));
    /* 004f953e: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f9541: mov esi, dword ptr [esi + 0x68] */ r_esi = R32((u32)(r_esi+0x68u));
    /* 004f9544: mov ecx, dword ptr [ecx + edx*4] */ r_ecx = R32((u32)(r_ecx+r_edx*4));
    /* 004f9547: sub ecx, dword ptr [esi + eax*4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esi+r_eax*4)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004f954a: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f954d: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 004f9550: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004f9552: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f9555: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 004f9558: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f955b: movsx eax, word ptr [edx + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x20u));
    /* 004f955f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f9562: mov edx, dword ptr [ecx + 0x68] */ r_edx = R32((u32)(r_ecx+0x68u));
    /* 004f9565: movsx ecx, word ptr [ebp - 0x18] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe8u));
    /* 004f9569: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f956c: mov esi, dword ptr [esi + 0x68] */ r_esi = R32((u32)(r_esi+0x68u));
    /* 004f956f: mov edx, dword ptr [edx + eax*4] */ r_edx = R32((u32)(r_edx+r_eax*4));
    /* 004f9572: mov dword ptr [esi + ecx*4], edx */ W32((u32)(r_esi+r_ecx*4), r_edx);
L_004f9575:; BB(0x004f9575);
    /* 004f9575: jmp 0x4f94b0 */ goto L_004f94b0;
L_004f957a:; BB(0x004f957a);
    /* 004f957a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f957b: mov esp, ebp */ r_esp = r_ebp;
    /* 004f957d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f957e: ret  */ FN_RET(0x004f9220); r_esp += 4; return;
}

