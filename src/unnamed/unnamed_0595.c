#include "protos.h"

void f_005951f0(void) /* sub_5951F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005951f0);
    /* 005951f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005951f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005951f3: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005951f6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005951f7: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 005951fa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005951fc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005951fe: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x595203u); f_0064c8a0();
    /* 00595203: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00595206: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00595209: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0059520c: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0059520f: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00595212: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00595215: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00595218: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059521a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059521c: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x595221u); f_0064c8a0();
    /* 00595221: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00595224: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00595227: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0059522a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0059522d: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00595230: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00595233: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00595236: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00595239: imul ecx, ecx, 3 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x3u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0059523c: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0059523f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00595242: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00595243: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x595248u); f_005dcb00();
    /* 00595248: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059524b: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0059524e: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00595251: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x595256u); f_0063aac0();
    /* 00595256: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00595258: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0059525b: cmp dword ptr [ebp - 0x28], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059525f: je 0x59527d */ if (fZ) goto L_0059527d;
L_00595261:; BB(0x00595261);
    /* 00595261: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00595264: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x595269u); f_0063aac0();
    /* 00595269: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0059526b: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0059526e: cmp dword ptr [ebp - 0x2c], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00595272: je 0x59527d */ if (fZ) goto L_0059527d;
L_00595274:; BB(0x00595274);
    /* 00595274: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 0059527b: jmp 0x595284 */ goto L_00595284;
L_0059527d:; BB(0x0059527d);
    /* 0059527d: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
L_00595284:; BB(0x00595284);
    /* 00595284: movzx edx, byte ptr [ebp - 0x44] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffbcu));
    /* 00595288: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059528a: je 0x595375 */ if (fZ) goto L_00595375;
L_00595290:; BB(0x00595290);
    /* 00595290: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00595292: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00595298: call 0x5df700 */ r_esp -= 4; W32(r_esp, 0x59529du); f_005df700();
    /* 0059529d: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005952a0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005952a2: je 0x5952b8 */ if (fZ) goto L_005952b8;
L_005952a4:; BB(0x005952a4);
    /* 005952a4: push 0x74c170 */ { u32 v = 0x74c170u; r_esp -= 4; W32(r_esp, v); }
    /* 005952a9: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 005952ab: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 005952b1: call 0x57ab80 */ r_esp -= 4; W32(r_esp, 0x5952b6u); f_0057ab80();
    /* 005952b6: jmp 0x5952c3 */ goto L_005952c3;
L_005952b8:; BB(0x005952b8);
    /* 005952b8: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 005952be: call 0x57ae30 */ r_esp -= 4; W32(r_esp, 0x5952c3u); f_0057ae30();
L_005952c3:; BB(0x005952c3);
    /* 005952c3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005952c6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005952c7: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 005952cd: call 0x598470 */ r_esp -= 4; W32(r_esp, 0x5952d2u); f_00598470();
    /* 005952d2: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005952d5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005952d7: jne 0x59535e */ if (!fZ) goto L_0059535e;
L_005952dd:; BB(0x005952dd);
    /* 005952dd: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005952e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005952e1: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5952e6u); f_005dcb00();
    /* 005952e6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005952e9: mov ecx, eax */ r_ecx = r_eax;
    /* 005952eb: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x5952f0u); f_005d5a50();
    /* 005952f0: mov esi, eax */ r_esi = r_eax;
    /* 005952f2: mov ecx, dword ptr [0x7935a4] */ r_ecx = R32((u32)(0x7935a4u));
    /* 005952f8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005952fa: mov ecx, dword ptr [0x7935a4] */ r_ecx = R32((u32)(0x7935a4u));
    /* 00595300: mov eax, dword ptr [edx + 0x2b0] */ r_eax = R32((u32)(r_edx+0x2b0u));
    /* 00595306: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x595308u); call_ind(t); }
    /* 00595308: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059530a: jge 0x59535e */ if ((fS==fO)) goto L_0059535e;
L_0059530c:; BB(0x0059530c);
    /* 0059530c: mov ecx, dword ptr [0x7935a4] */ r_ecx = R32((u32)(0x7935a4u));
    /* 00595312: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x595317u); f_005da7b0();
    /* 00595317: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0059531a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059531c: je 0x595344 */ if (fZ) goto L_00595344;
L_0059531e:; BB(0x0059531e);
    /* 0059531e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00595321: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00595322: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x595327u); f_005dcb00();
    /* 00595327: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059532a: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0059532d: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00595330: mov byte ptr [eax + 0x4a1], 1 */ W8((u32)(r_eax+0x4a1u), 0x1u);
    /* 00595337: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0059533a: call 0x595790 */ r_esp -= 4; W32(r_esp, 0x59533fu); f_00595790();
    /* 0059533f: jmp 0x5954f4 */ goto L_005954f4;
L_00595344:; BB(0x00595344);
    /* 00595344: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00595347: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00595348: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x59534du); f_005dcb00();
    /* 0059534d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00595350: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00595351: mov ecx, dword ptr [0x7935a4] */ r_ecx = R32((u32)(0x7935a4u));
    /* 00595357: call 0x5dbb70 */ r_esp -= 4; W32(r_esp, 0x59535cu); f_005dbb70();
    /* 0059535c: jmp 0x595370 */ goto L_00595370;
L_0059535e:; BB(0x0059535e);
    /* 0059535e: push 0xaf */ { u32 v = 0xafu; r_esp -= 4; W32(r_esp, v); }
    /* 00595363: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00595365: mov ecx, dword ptr [0x7935a4] */ r_ecx = R32((u32)(0x7935a4u));
    /* 0059536b: call 0x5db7d0 */ r_esp -= 4; W32(r_esp, 0x595370u); f_005db7d0();
L_00595370:; BB(0x00595370);
    /* 00595370: jmp 0x5954f4 */ goto L_005954f4;
L_00595375:; BB(0x00595375);
    /* 00595375: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00595378: movzx eax, byte ptr [edx + 7] */ r_eax = (u32)R8((u32)(r_edx+0x7u));
    /* 0059537c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059537e: jne 0x5953a5 */ if (!fZ) goto L_005953a5;
L_00595380:; BB(0x00595380);
    /* 00595380: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00595383: mov byte ptr [ecx + 7], 1 */ W8((u32)(r_ecx+0x7u), 0x1u);
    /* 00595387: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00595389: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0059538f: call 0x637810 */ r_esp -= 4; W32(r_esp, 0x595394u); f_00637810();
    /* 00595394: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00595395: mov ecx, dword ptr [0x7935a4] */ r_ecx = R32((u32)(0x7935a4u));
    /* 0059539b: call 0x5da360 */ r_esp -= 4; W32(r_esp, 0x5953a0u); f_005da360();
    /* 005953a0: jmp 0x5954f4 */ goto L_005954f4;
L_005953a5:; BB(0x005953a5);
    /* 005953a5: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005953a8: mov byte ptr [edx + 7], 0 */ W8((u32)(r_edx+0x7u), 0x0u);
    /* 005953ac: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 005953b2: call 0x57ae30 */ r_esp -= 4; W32(r_esp, 0x5953b7u); f_0057ae30();
    /* 005953b7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005953ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005953bb: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5953c0u); f_005dcb00();
    /* 005953c0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005953c3: mov ecx, eax */ r_ecx = r_eax;
    /* 005953c5: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x5953cau); f_005d5a50();
    /* 005953ca: mov esi, eax */ r_esi = r_eax;
    /* 005953cc: mov ecx, dword ptr [0x7935a4] */ r_ecx = R32((u32)(0x7935a4u));
    /* 005953d2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005953d4: mov ecx, dword ptr [0x7935a4] */ r_ecx = R32((u32)(0x7935a4u));
    /* 005953da: mov eax, dword ptr [edx + 0x2b0] */ r_eax = R32((u32)(r_edx+0x2b0u));
    /* 005953e0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5953e2u); call_ind(t); }
    /* 005953e2: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005953e4: jl 0x59549b */ if ((fS!=fO)) goto L_0059549b;
L_005953ea:; BB(0x005953ea);
    /* 005953ea: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 005953ed: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005953ee: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 005953f1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005953f2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005953f5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005953f6: mov ecx, dword ptr [0x793598] */ r_ecx = R32((u32)(0x793598u));
    /* 005953fc: call 0x58fef0 */ r_esp -= 4; W32(r_esp, 0x595401u); f_0058fef0();
    /* 00595401: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00595405: jle 0x595433 */ if ((fZ||fS!=fO)) goto L_00595433;
L_00595407:; BB(0x00595407);
    /* 00595407: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00595409: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059540b: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 0059540e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059540f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00595412: mov eax, dword ptr [0x7935a8] */ r_eax = R32((u32)(0x7935a8u));
    /* 00595417: mov ecx, dword ptr [eax + edx*4 + 0x10] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x10u));
    /* 0059541b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0059541e: mov eax, dword ptr [0x7935a8] */ r_eax = R32((u32)(0x7935a8u));
    /* 00595423: mov edx, dword ptr [eax + edx*4 + 0x10] */ r_edx = R32((u32)(r_eax+r_edx*4+0x10u));
    /* 00595427: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00595429: mov ecx, edx */ r_ecx = r_edx;
    /* 0059542b: mov edx, dword ptr [eax + 0xc4] */ r_edx = R32((u32)(r_eax+0xc4u));
    /* 00595431: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x595433u); call_ind(t); }
L_00595433:; BB(0x00595433);
    /* 00595433: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00595437: jle 0x595465 */ if ((fZ||fS!=fO)) goto L_00595465;
L_00595439:; BB(0x00595439);
    /* 00595439: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0059543b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059543d: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 00595440: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00595441: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00595444: mov edx, dword ptr [0x7935a8] */ r_edx = R32((u32)(0x7935a8u));
    /* 0059544a: mov eax, dword ptr [edx + ecx*4 + 0xc] */ r_eax = R32((u32)(r_edx+r_ecx*4+0xcu));
    /* 0059544e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00595451: mov edx, dword ptr [0x7935a8] */ r_edx = R32((u32)(0x7935a8u));
    /* 00595457: mov ecx, dword ptr [edx + ecx*4 + 0xc] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0xcu));
    /* 0059545b: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0059545d: mov edx, dword ptr [eax + 0xc4] */ r_edx = R32((u32)(r_eax+0xc4u));
    /* 00595463: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x595465u); call_ind(t); }
L_00595465:; BB(0x00595465);
    /* 00595465: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 0059546b: call 0x597d00 */ r_esp -= 4; W32(r_esp, 0x595470u); f_00597d00();
    /* 00595470: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00595473: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00595476: mov byte ptr [eax + 0x4a0], 1 */ W8((u32)(r_eax+0x4a0u), 0x1u);
    /* 0059547d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059547f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00595481: mov ecx, dword ptr [0x7935a4] */ r_ecx = R32((u32)(0x7935a4u));
    /* 00595487: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0059548a: mov eax, dword ptr [0x7935a4] */ r_eax = R32((u32)(0x7935a4u));
    /* 0059548f: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00595492: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00595494: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00595497: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x595499u); call_ind(t); }
    /* 00595499: jmp 0x5954f4 */ goto L_005954f4;
L_0059549b:; BB(0x0059549b);
    /* 0059549b: mov ecx, dword ptr [0x7935a4] */ r_ecx = R32((u32)(0x7935a4u));
    /* 005954a1: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x5954a6u); f_005da7b0();
    /* 005954a6: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005954a9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005954ab: je 0x5954c8 */ if (fZ) goto L_005954c8;
L_005954ad:; BB(0x005954ad);
    /* 005954ad: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005954b0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005954b1: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5954b6u); f_005dcb00();
    /* 005954b6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005954b9: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005954bc: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 005954bf: mov byte ptr [eax + 0x4a1], 1 */ W8((u32)(r_eax+0x4a1u), 0x1u);
    /* 005954c6: jmp 0x5954d7 */ goto L_005954d7;
L_005954c8:; BB(0x005954c8);
    /* 005954c8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005954cb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005954cc: mov ecx, dword ptr [0x7935a4] */ r_ecx = R32((u32)(0x7935a4u));
    /* 005954d2: call 0x5d9570 */ r_esp -= 4; W32(r_esp, 0x5954d7u); f_005d9570();
L_005954d7:; BB(0x005954d7);
    /* 005954d7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005954d9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005954db: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 005954e1: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005954e4: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 005954ea: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 005954ed: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005954ef: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005954f2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5954f4u); call_ind(t); }
L_005954f4:; BB(0x005954f4);
    /* 005954f4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005954f5: mov esp, ebp */ r_esp = r_ebp;
    /* 005954f7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005954f8: ret 4 */ FN_RET(0x005951f0); r_esp += 8; return;
}

void f_00595500(void) /* sub_595500 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00595500);
    /* 00595500: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00595501: mov ebp, esp */ r_ebp = r_esp;
    /* 00595503: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00595506: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00595509: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0059550b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0059550e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059550f: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 00595515: call 0x599570 */ r_esp -= 4; W32(r_esp, 0x59551au); f_00599570();
    /* 0059551a: mov ecx, dword ptr [0x79359c] */ r_ecx = R32((u32)(0x79359cu));
    /* 00595520: call 0x591a70 */ r_esp -= 4; W32(r_esp, 0x595525u); f_00591a70();
    /* 00595525: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00595528: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00595529: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 0059552f: call 0x598810 */ r_esp -= 4; W32(r_esp, 0x595534u); f_00598810();
    /* 00595534: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00595537: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00595538: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x59553du); f_005dcb00();
    /* 0059553d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00595540: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00595543: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00595546: mov byte ptr [eax + 0x4a2], 1 */ W8((u32)(r_eax+0x4a2u), 0x1u);
    /* 0059554d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0059554f: mov ecx, dword ptr [0x7935a4] */ r_ecx = R32((u32)(0x7935a4u));
    /* 00595555: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00595558: mov eax, dword ptr [0x7935a4] */ r_eax = R32((u32)(0x7935a4u));
    /* 0059555d: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00595560: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00595562: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00595565: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x595567u); call_ind(t); }
    /* 00595567: mov esp, ebp */ r_esp = r_ebp;
    /* 00595569: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059556a: ret 4 */ FN_RET(0x00595500); r_esp += 8; return;
}

void f_00595570(void) /* sub_595570 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00595570);
    /* 00595570: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00595571: mov ebp, esp */ r_ebp = r_esp;
    /* 00595573: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00595576: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00595579: mov byte ptr [ebp - 1], 0 */ W8((u32)(r_ebp+0xffffffffu), 0x0u);
    /* 0059557d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00595580: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00595581: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x595586u); f_005dcb00();
    /* 00595586: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00595589: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0059558c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0059558f: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x595594u); f_0063aac0();
    /* 00595594: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00595596: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00595599: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059559d: je 0x5955bb */ if (fZ) goto L_005955bb;
L_0059559f:; BB(0x0059559f);
    /* 0059559f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005955a2: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5955a7u); f_0063aac0();
    /* 005955a7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005955a9: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005955ac: cmp dword ptr [ebp - 0xc], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005955b0: je 0x5955bb */ if (fZ) goto L_005955bb;
L_005955b2:; BB(0x005955b2);
    /* 005955b2: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 005955b9: jmp 0x5955c2 */ goto L_005955c2;
L_005955bb:; BB(0x005955bb);
    /* 005955bb: mov dword ptr [ebp - 0x18], 1 */ W32((u32)(r_ebp+0xffffffe8u), 0x1u);
L_005955c2:; BB(0x005955c2);
    /* 005955c2: movzx eax, byte ptr [ebp - 0x18] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffe8u));
    /* 005955c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005955c8: je 0x59562f */ if (fZ) goto L_0059562f;
L_005955ca:; BB(0x005955ca);
    /* 005955ca: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005955cc: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005955d2: call 0x5df700 */ r_esp -= 4; W32(r_esp, 0x5955d7u); f_005df700();
    /* 005955d7: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005955da: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005955dc: je 0x595601 */ if (fZ) goto L_00595601;
L_005955de:; BB(0x005955de);
    /* 005955de: push 0x74d980 */ { u32 v = 0x74d980u; r_esp -= 4; W32(r_esp, v); }
    /* 005955e3: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 005955e5: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 005955eb: call 0x57ab80 */ r_esp -= 4; W32(r_esp, 0x5955f0u); f_0057ab80();
    /* 005955f0: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005955f3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005955f4: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 005955fa: call 0x599590 */ r_esp -= 4; W32(r_esp, 0x5955ffu); f_00599590();
    /* 005955ff: jmp 0x59560c */ goto L_0059560c;
L_00595601:; BB(0x00595601);
    /* 00595601: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 00595607: call 0x57ae30 */ r_esp -= 4; W32(r_esp, 0x59560cu); f_0057ae30();
L_0059560c:; BB(0x0059560c);
    /* 0059560c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0059560e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00595611: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00595612: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 00595618: call 0x599570 */ r_esp -= 4; W32(r_esp, 0x59561du); f_00599570();
    /* 0059561d: mov ecx, dword ptr [0x79359c] */ r_ecx = R32((u32)(0x79359cu));
    /* 00595623: call 0x591fa0 */ r_esp -= 4; W32(r_esp, 0x595628u); f_00591fa0();
    /* 00595628: jmp 0x5956db */ goto L_005956db;
L_0059562f:; BB(0x0059562f);
    /* 0059562f: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 00595635: call 0x57ae30 */ r_esp -= 4; W32(r_esp, 0x59563au); f_0057ae30();
    /* 0059563a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0059563d: movzx edx, byte ptr [ecx + 8] */ r_edx = (u32)R8((u32)(r_ecx+0x8u));
    /* 00595641: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00595643: jne 0x595667 */ if (!fZ) goto L_00595667;
L_00595645:; BB(0x00595645);
    /* 00595645: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00595648: mov byte ptr [eax + 8], 1 */ W8((u32)(r_eax+0x8u), 0x1u);
    /* 0059564c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0059564e: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00595654: call 0x637810 */ r_esp -= 4; W32(r_esp, 0x595659u); f_00637810();
    /* 00595659: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059565a: mov ecx, dword ptr [0x7935a4] */ r_ecx = R32((u32)(0x7935a4u));
    /* 00595660: call 0x5da360 */ r_esp -= 4; W32(r_esp, 0x595665u); f_005da360();
    /* 00595665: jmp 0x5956db */ goto L_005956db;
L_00595667:; BB(0x00595667);
    /* 00595667: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0059566a: mov byte ptr [ecx + 8], 0 */ W8((u32)(r_ecx+0x8u), 0x0u);
    /* 0059566e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00595671: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00595672: mov ecx, dword ptr [0x793598] */ r_ecx = R32((u32)(0x793598u));
    /* 00595678: call 0x590850 */ r_esp -= 4; W32(r_esp, 0x59567du); f_00590850();
    /* 0059567d: mov byte ptr [ebp - 1], al */ W8((u32)(r_ebp+0xffffffffu), (u8)r_eax);
    /* 00595680: mov al, byte ptr [ebp - 1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffffu))) & 0xffu);
    /* 00595683: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00595684: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00595687: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00595688: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 0059568e: call 0x5997f0 */ r_esp -= 4; W32(r_esp, 0x595693u); f_005997f0();
    /* 00595693: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00595696: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00595697: movzx eax, byte ptr [ebp - 1] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 0059569b: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 0059569d: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 0059569f: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005956a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005956a2: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 005956a8: call 0x5994c0 */ r_esp -= 4; W32(r_esp, 0x5956adu); f_005994c0();
    /* 005956ad: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005956af: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005956b2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005956b3: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 005956b9: call 0x5994a0 */ r_esp -= 4; W32(r_esp, 0x5956beu); f_005994a0();
    /* 005956be: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005956c0: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005956c2: mov edx, dword ptr [0x7935a4] */ r_edx = R32((u32)(0x7935a4u));
    /* 005956c8: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005956cb: mov ecx, dword ptr [0x7935a4] */ r_ecx = R32((u32)(0x7935a4u));
    /* 005956d1: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 005956d4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005956d6: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005956d9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5956dbu); call_ind(t); }
L_005956db:; BB(0x005956db);
    /* 005956db: mov esp, ebp */ r_esp = r_ebp;
    /* 005956dd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005956de: ret 4 */ FN_RET(0x00595570); r_esp += 8; return;
}

void f_005956f0(void) /* sub_5956F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005956f0);
    /* 005956f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005956f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005956f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005956f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005956f7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005956fa: mov byte ptr [eax + 4], 0 */ W8((u32)(r_eax+0x4u), 0x0u);
    /* 005956fe: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00595701: mov byte ptr [ecx + 5], 0 */ W8((u32)(r_ecx+0x5u), 0x0u);
    /* 00595705: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00595708: mov byte ptr [edx + 7], 0 */ W8((u32)(r_edx+0x7u), 0x0u);
    /* 0059570c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059570f: mov byte ptr [eax + 8], 0 */ W8((u32)(r_eax+0x8u), 0x0u);
    /* 00595713: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00595716: mov byte ptr [ecx + 9], 0 */ W8((u32)(r_ecx+0x9u), 0x0u);
    /* 0059571a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059571d: mov byte ptr [edx + 6], 0 */ W8((u32)(r_edx+0x6u), 0x0u);
    /* 00595721: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00595724: mov byte ptr [eax + 0xa], 0 */ W8((u32)(r_eax+0xau), 0x0u);
    /* 00595728: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059572b: mov byte ptr [ecx + 0xb], 0 */ W8((u32)(r_ecx+0xbu), 0x0u);
    /* 0059572f: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00595733: jne 0x595762 */ if (!fZ) goto L_00595762;
L_00595735:; BB(0x00595735);
    /* 00595735: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 0059573b: call 0x599210 */ r_esp -= 4; W32(r_esp, 0x595740u); f_00599210();
    /* 00595740: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00595743: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00595744: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00595746: mov eax, dword ptr [0x7935a4] */ r_eax = R32((u32)(0x7935a4u));
    /* 0059574b: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0059574e: mov edx, dword ptr [0x7935a4] */ r_edx = R32((u32)(0x7935a4u));
    /* 00595754: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00595757: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00595759: mov ecx, eax */ r_ecx = r_eax;
    /* 0059575b: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0059575e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x595760u); call_ind(t); }
    /* 00595760: jmp 0x595784 */ goto L_00595784;
L_00595762:; BB(0x00595762);
    /* 00595762: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00595765: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00595766: push 0x1f4 */ { u32 v = 0x1f4u; r_esp -= 4; W32(r_esp, v); }
    /* 0059576b: mov edx, dword ptr [0x7935a4] */ r_edx = R32((u32)(0x7935a4u));
    /* 00595771: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00595774: mov ecx, dword ptr [0x7935a4] */ r_ecx = R32((u32)(0x7935a4u));
    /* 0059577a: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0059577d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0059577f: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00595782: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x595784u); call_ind(t); }
L_00595784:; BB(0x00595784);
    /* 00595784: mov esp, ebp */ r_esp = r_ebp;
    /* 00595786: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00595787: ret 4 */ FN_RET(0x005956f0); r_esp += 8; return;
}

void f_00595790(void) /* sub_595790 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00595790);
    /* 00595790: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00595791: mov ebp, esp */ r_ebp = r_esp;
    /* 00595793: sub esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00595796: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 00595799: mov ecx, dword ptr [0x79359c] */ r_ecx = R32((u32)(0x79359cu));
    /* 0059579f: call 0x591a70 */ r_esp -= 4; W32(r_esp, 0x5957a4u); f_00591a70();
    /* 005957a4: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 005957aa: call 0x597fb0 */ r_esp -= 4; W32(r_esp, 0x5957afu); f_00597fb0();
    /* 005957af: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005957b2: je 0x5957c1 */ if (fZ) goto L_005957c1;
L_005957b4:; BB(0x005957b4);
    /* 005957b4: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005957b7: call 0x5948c0 */ r_esp -= 4; W32(r_esp, 0x5957bcu); f_005948c0();
    /* 005957bc: jmp 0x595c6e */ goto L_00595c6e;
L_005957c1:; BB(0x005957c1);
    /* 005957c1: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 005957c4: movzx ecx, byte ptr [eax + 4] */ r_ecx = (u32)R8((u32)(r_eax+0x4u));
    /* 005957c8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005957ca: jne 0x595805 */ if (!fZ) goto L_00595805;
L_005957cc:; BB(0x005957cc);
    /* 005957cc: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005957cf: mov byte ptr [edx + 4], 1 */ W8((u32)(r_edx+0x4u), 0x1u);
    /* 005957d3: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005957d5: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005957d7: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 005957dd: call 0x5994c0 */ r_esp -= 4; W32(r_esp, 0x5957e2u); f_005994c0();
    /* 005957e2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005957e4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005957e6: mov eax, dword ptr [0x7935a4] */ r_eax = R32((u32)(0x7935a4u));
    /* 005957eb: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005957ee: mov edx, dword ptr [0x7935a4] */ r_edx = R32((u32)(0x7935a4u));
    /* 005957f4: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005957f7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005957f9: mov ecx, eax */ r_ecx = r_eax;
    /* 005957fb: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005957fe: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x595800u); call_ind(t); }
    /* 00595800: jmp 0x595c6e */ goto L_00595c6e;
L_00595805:; BB(0x00595805);
    /* 00595805: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 0059580b: call 0x5981b0 */ r_esp -= 4; W32(r_esp, 0x595810u); f_005981b0();
    /* 00595810: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00595813: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00595819: mov dl, byte ptr [ecx + 0x25] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x25u))) & 0xffu);
    /* 0059581c: mov byte ptr [ebp - 5], dl */ W8((u32)(r_ebp+0xfffffffbu), (u8)r_edx);
    /* 0059581f: movzx eax, byte ptr [ebp - 5] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffffbu));
    /* 00595823: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00595825: je 0x5958a1 */ if (fZ) goto L_005958a1;
L_00595827:; BB(0x00595827);
    /* 00595827: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059582b: je 0x5958a1 */ if (fZ) goto L_005958a1;
L_0059582d:; BB(0x0059582d);
    /* 0059582d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00595830: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00595831: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x595836u); f_005dcb00();
    /* 00595836: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00595839: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0059583c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0059583f: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x595844u); f_0063aac0();
    /* 00595844: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00595846: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00595849: cmp dword ptr [ebp - 0xc], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059584d: je 0x59586b */ if (fZ) goto L_0059586b;
L_0059584f:; BB(0x0059584f);
    /* 0059584f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00595852: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x595857u); f_0063aac0();
    /* 00595857: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00595859: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0059585c: cmp dword ptr [ebp - 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00595860: je 0x59586b */ if (fZ) goto L_0059586b;
L_00595862:; BB(0x00595862);
    /* 00595862: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 00595869: jmp 0x595872 */ goto L_00595872;
L_0059586b:; BB(0x0059586b);
    /* 0059586b: mov dword ptr [ebp - 0x48], 1 */ W32((u32)(r_ebp+0xffffffb8u), 0x1u);
L_00595872:; BB(0x00595872);
    /* 00595872: movzx ecx, byte ptr [ebp - 0x48] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffb8u));
    /* 00595876: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00595878: je 0x5958a1 */ if (fZ) goto L_005958a1;
L_0059587a:; BB(0x0059587a);
    /* 0059587a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059587d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059587e: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x595883u); f_005dcb00();
    /* 00595883: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00595886: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00595889: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0059588c: mov byte ptr [eax + 0x4a1], 1 */ W8((u32)(r_eax+0x4a1u), 0x1u);
    /* 00595893: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 00595899: call 0x5981b0 */ r_esp -= 4; W32(r_esp, 0x59589eu); f_005981b0();
    /* 0059589e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005958a1:; BB(0x005958a1);
    /* 005958a1: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005958a5: je 0x595910 */ if (fZ) goto L_00595910;
L_005958a7:; BB(0x005958a7);
    /* 005958a7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005958aa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005958ab: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5958b0u); f_005dcb00();
    /* 005958b0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005958b3: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005958b6: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005958b9: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5958beu); f_0063aac0();
    /* 005958be: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005958c0: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005958c3: cmp dword ptr [ebp - 0x1c], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005958c7: je 0x5958e5 */ if (fZ) goto L_005958e5;
L_005958c9:; BB(0x005958c9);
    /* 005958c9: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005958cc: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5958d1u); f_0063aac0();
    /* 005958d1: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005958d3: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005958d6: cmp dword ptr [ebp - 0x20], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005958da: je 0x5958e5 */ if (fZ) goto L_005958e5;
L_005958dc:; BB(0x005958dc);
    /* 005958dc: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 005958e3: jmp 0x5958ec */ goto L_005958ec;
L_005958e5:; BB(0x005958e5);
    /* 005958e5: mov dword ptr [ebp - 0x4c], 1 */ W32((u32)(r_ebp+0xffffffb4u), 0x1u);
L_005958ec:; BB(0x005958ec);
    /* 005958ec: mov cl, byte ptr [ebp - 0x4c] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffb4u))) & 0xffu);
    /* 005958ef: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005958f0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005958f3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005958f4: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 005958fa: call 0x599450 */ r_esp -= 4; W32(r_esp, 0x5958ffu); f_00599450();
    /* 005958ff: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00595902: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00595903: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00595906: call 0x5951f0 */ r_esp -= 4; W32(r_esp, 0x59590bu); f_005951f0();
    /* 0059590b: jmp 0x595c6e */ goto L_00595c6e;
L_00595910:; BB(0x00595910);
    /* 00595910: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00595913: movzx edx, byte ptr [ecx + 0xb] */ r_edx = (u32)R8((u32)(r_ecx+0xbu));
    /* 00595917: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00595919: jne 0x59592d */ if (!fZ) goto L_0059592d;
L_0059591b:; BB(0x0059591b);
    /* 0059591b: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 00595921: call 0x599360 */ r_esp -= 4; W32(r_esp, 0x595926u); f_00599360();
    /* 00595926: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00595929: mov byte ptr [eax + 0xb], 1 */ W8((u32)(r_eax+0xbu), 0x1u);
L_0059592d:; BB(0x0059592d);
    /* 0059592d: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00595930: movzx edx, byte ptr [ecx + 5] */ r_edx = (u32)R8((u32)(r_ecx+0x5u));
    /* 00595934: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00595936: jne 0x59596f */ if (!fZ) goto L_0059596f;
L_00595938:; BB(0x00595938);
    /* 00595938: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0059593b: mov byte ptr [eax + 5], 1 */ W8((u32)(r_eax+0x5u), 0x1u);
    /* 0059593f: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00595941: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00595943: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 00595949: call 0x5994c0 */ r_esp -= 4; W32(r_esp, 0x59594eu); f_005994c0();
    /* 0059594e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00595950: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00595952: mov ecx, dword ptr [0x7935a4] */ r_ecx = R32((u32)(0x7935a4u));
    /* 00595958: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0059595b: mov eax, dword ptr [0x7935a4] */ r_eax = R32((u32)(0x7935a4u));
    /* 00595960: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00595963: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00595965: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00595968: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59596au); call_ind(t); }
    /* 0059596a: jmp 0x595c6e */ goto L_00595c6e;
L_0059596f:; BB(0x0059596f);
    /* 0059596f: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 00595975: call 0x5986c0 */ r_esp -= 4; W32(r_esp, 0x59597au); f_005986c0();
    /* 0059597a: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0059597d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059597f: je 0x5959a8 */ if (fZ) goto L_005959a8;
L_00595981:; BB(0x00595981);
    /* 00595981: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00595987: call 0x5f2870 */ r_esp -= 4; W32(r_esp, 0x59598cu); f_005f2870();
    /* 0059598c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059598e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00595990: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 00595996: call 0x599450 */ r_esp -= 4; W32(r_esp, 0x59599bu); f_00599450();
    /* 0059599b: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0059599e: call 0x594830 */ r_esp -= 4; W32(r_esp, 0x5959a3u); f_00594830();
    /* 005959a3: jmp 0x595c6e */ goto L_00595c6e;
L_005959a8:; BB(0x005959a8);
    /* 005959a8: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 005959ae: call 0x598290 */ r_esp -= 4; W32(r_esp, 0x5959b3u); f_00598290();
    /* 005959b3: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005959b6: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005959ba: je 0x595a32 */ if (fZ) goto L_00595a32;
L_005959bc:; BB(0x005959bc);
    /* 005959bc: mov edx, dword ptr [0x7935a8] */ r_edx = R32((u32)(0x7935a8u));
    /* 005959c2: mov byte ptr [edx + 0x116], 0 */ W8((u32)(r_edx+0x116u), 0x0u);
    /* 005959c9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005959cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005959cd: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5959d2u); f_005dcb00();
    /* 005959d2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005959d5: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005959d8: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005959db: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5959e0u); f_0063aac0();
    /* 005959e0: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005959e2: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 005959e5: cmp dword ptr [ebp - 0x28], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005959e9: je 0x595a07 */ if (fZ) goto L_00595a07;
L_005959eb:; BB(0x005959eb);
    /* 005959eb: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005959ee: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5959f3u); f_0063aac0();
    /* 005959f3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005959f5: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 005959f8: cmp dword ptr [ebp - 0x2c], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005959fc: je 0x595a07 */ if (fZ) goto L_00595a07;
L_005959fe:; BB(0x005959fe);
    /* 005959fe: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 00595a05: jmp 0x595a0e */ goto L_00595a0e;
L_00595a07:; BB(0x00595a07);
    /* 00595a07: mov dword ptr [ebp - 0x50], 1 */ W32((u32)(r_ebp+0xffffffb0u), 0x1u);
L_00595a0e:; BB(0x00595a0e);
    /* 00595a0e: mov al, byte ptr [ebp - 0x50] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffb0u))) & 0xffu);
    /* 00595a11: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00595a12: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00595a15: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00595a16: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 00595a1c: call 0x599450 */ r_esp -= 4; W32(r_esp, 0x595a21u); f_00599450();
    /* 00595a21: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00595a24: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00595a25: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00595a28: call 0x595570 */ r_esp -= 4; W32(r_esp, 0x595a2du); f_00595570();
    /* 00595a2d: jmp 0x595c6e */ goto L_00595c6e;
L_00595a32:; BB(0x00595a32);
    /* 00595a32: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00595a35: movzx ecx, byte ptr [eax + 6] */ r_ecx = (u32)R8((u32)(r_eax+0x6u));
    /* 00595a39: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00595a3b: jne 0x595a76 */ if (!fZ) goto L_00595a76;
L_00595a3d:; BB(0x00595a3d);
    /* 00595a3d: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00595a40: mov byte ptr [edx + 6], 1 */ W8((u32)(r_edx+0x6u), 0x1u);
    /* 00595a44: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00595a46: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00595a48: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 00595a4e: call 0x599570 */ r_esp -= 4; W32(r_esp, 0x595a53u); f_00599570();
    /* 00595a53: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00595a55: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00595a57: mov eax, dword ptr [0x7935a4] */ r_eax = R32((u32)(0x7935a4u));
    /* 00595a5c: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00595a5f: mov edx, dword ptr [0x7935a4] */ r_edx = R32((u32)(0x7935a4u));
    /* 00595a65: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00595a68: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00595a6a: mov ecx, eax */ r_ecx = r_eax;
    /* 00595a6c: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00595a6f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x595a71u); call_ind(t); }
    /* 00595a71: jmp 0x595c6e */ goto L_00595c6e;
L_00595a76:; BB(0x00595a76);
    /* 00595a76: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 00595a7c: call 0x597fe0 */ r_esp -= 4; W32(r_esp, 0x595a81u); f_00597fe0();
    /* 00595a81: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00595a84: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00595a88: je 0x595b9d */ if (fZ) goto L_00595b9d;
L_00595a8e:; BB(0x00595a8e);
    /* 00595a8e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00595a90: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00595a93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00595a94: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 00595a9a: call 0x599450 */ r_esp -= 4; W32(r_esp, 0x595a9fu); f_00599450();
    /* 00595a9f: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00595aa2: movzx eax, byte ptr [edx + 0xa] */ r_eax = (u32)R8((u32)(r_edx+0xau));
    /* 00595aa6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00595aa8: jne 0x595afa */ if (!fZ) goto L_00595afa;
L_00595aaa:; BB(0x00595aaa);
    /* 00595aaa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00595aad: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00595aae: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 00595ab4: call 0x599a70 */ r_esp -= 4; W32(r_esp, 0x595ab9u); f_00599a70();
    /* 00595ab9: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00595abc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00595abe: je 0x595afa */ if (fZ) goto L_00595afa;
L_00595ac0:; BB(0x00595ac0);
    /* 00595ac0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00595ac2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00595ac5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00595ac6: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 00595acc: call 0x599570 */ r_esp -= 4; W32(r_esp, 0x595ad1u); f_00599570();
    /* 00595ad1: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00595ad4: mov byte ptr [ecx + 0xa], 1 */ W8((u32)(r_ecx+0xau), 0x1u);
    /* 00595ad8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00595ada: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00595adc: mov edx, dword ptr [0x7935a4] */ r_edx = R32((u32)(0x7935a4u));
    /* 00595ae2: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00595ae5: mov ecx, dword ptr [0x7935a4] */ r_ecx = R32((u32)(0x7935a4u));
    /* 00595aeb: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00595aee: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00595af0: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00595af3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x595af5u); call_ind(t); }
    /* 00595af5: jmp 0x595c6e */ goto L_00595c6e;
L_00595afa:; BB(0x00595afa);
    /* 00595afa: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00595afd: mov byte ptr [ecx + 0xa], 0 */ W8((u32)(r_ecx+0xau), 0x0u);
    /* 00595b01: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00595b04: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00595b05: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00595b08: call 0x595500 */ r_esp -= 4; W32(r_esp, 0x595b0du); f_00595500();
    /* 00595b0d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00595b10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00595b11: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x595b16u); f_005dcb00();
    /* 00595b16: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00595b19: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00595b1c: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00595b1f: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x595b24u); f_0063aac0();
    /* 00595b24: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00595b26: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 00595b29: cmp dword ptr [ebp - 0x34], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00595b2d: je 0x595b4b */ if (fZ) goto L_00595b4b;
L_00595b2f:; BB(0x00595b2f);
    /* 00595b2f: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00595b32: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x595b37u); f_0063aac0();
    /* 00595b37: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00595b39: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 00595b3c: cmp dword ptr [ebp - 0x38], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00595b40: je 0x595b4b */ if (fZ) goto L_00595b4b;
L_00595b42:; BB(0x00595b42);
    /* 00595b42: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 00595b49: jmp 0x595b52 */ goto L_00595b52;
L_00595b4b:; BB(0x00595b4b);
    /* 00595b4b: mov dword ptr [ebp - 0x54], 1 */ W32((u32)(r_ebp+0xffffffacu), 0x1u);
L_00595b52:; BB(0x00595b52);
    /* 00595b52: movzx eax, byte ptr [ebp - 0x54] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffacu));
    /* 00595b56: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00595b58: je 0x595b63 */ if (fZ) goto L_00595b63;
L_00595b5a:; BB(0x00595b5a);
    /* 00595b5a: mov dword ptr [ebp - 0x58], 0xffffffff */ W32((u32)(r_ebp+0xffffffa8u), 0xffffffffu);
    /* 00595b61: jmp 0x595b69 */ goto L_00595b69;
L_00595b63:; BB(0x00595b63);
    /* 00595b63: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00595b66: mov dword ptr [ebp - 0x58], ecx */ W32((u32)(r_ebp+0xffffffa8u), r_ecx);
L_00595b69:; BB(0x00595b69);
    /* 00595b69: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00595b6c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00595b6d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00595b6f: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 00595b75: call 0x5994c0 */ r_esp -= 4; W32(r_esp, 0x595b7au); f_005994c0();
    /* 00595b7a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00595b7c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00595b7e: mov eax, dword ptr [0x7935a4] */ r_eax = R32((u32)(0x7935a4u));
    /* 00595b83: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00595b86: mov edx, dword ptr [0x7935a4] */ r_edx = R32((u32)(0x7935a4u));
    /* 00595b8c: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00595b8f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00595b91: mov ecx, eax */ r_ecx = r_eax;
    /* 00595b93: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00595b96: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x595b98u); call_ind(t); }
    /* 00595b98: jmp 0x595c6e */ goto L_00595c6e;
L_00595b9d:; BB(0x00595b9d);
    /* 00595b9d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00595b9f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00595ba1: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 00595ba7: call 0x599450 */ r_esp -= 4; W32(r_esp, 0x595bacu); f_00599450();
    /* 00595bac: mov ecx, dword ptr [0x7935a4] */ r_ecx = R32((u32)(0x7935a4u));
    /* 00595bb2: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x595bb7u); f_005da7b0();
    /* 00595bb7: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00595bba: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00595bbc: je 0x595bfe */ if (fZ) goto L_00595bfe;
L_00595bbe:; BB(0x00595bbe);
    /* 00595bbe: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00595bc1: movzx eax, byte ptr [edx + 9] */ r_eax = (u32)R8((u32)(r_edx+0x9u));
    /* 00595bc5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00595bc7: jne 0x595bfe */ if (!fZ) goto L_00595bfe;
L_00595bc9:; BB(0x00595bc9);
    /* 00595bc9: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00595bcc: mov byte ptr [ecx + 9], 1 */ W8((u32)(r_ecx+0x9u), 0x1u);
    /* 00595bd0: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00595bd2: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00595bd4: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 00595bda: call 0x5994c0 */ r_esp -= 4; W32(r_esp, 0x595bdfu); f_005994c0();
    /* 00595bdf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00595be1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00595be3: mov edx, dword ptr [0x7935a4] */ r_edx = R32((u32)(0x7935a4u));
    /* 00595be9: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00595bec: mov ecx, dword ptr [0x7935a4] */ r_ecx = R32((u32)(0x7935a4u));
    /* 00595bf2: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00595bf5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00595bf7: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00595bfa: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x595bfcu); call_ind(t); }
    /* 00595bfc: jmp 0x595c6e */ goto L_00595c6e;
L_00595bfe:; BB(0x00595bfe);
    /* 00595bfe: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00595c00: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 00595c06: call 0x5997a0 */ r_esp -= 4; W32(r_esp, 0x595c0bu); f_005997a0();
    /* 00595c0b: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00595c0e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00595c10: jne 0x595c40 */ if (!fZ) goto L_00595c40;
L_00595c12:; BB(0x00595c12);
    /* 00595c12: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00595c14: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00595c16: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 00595c1c: call 0x599570 */ r_esp -= 4; W32(r_esp, 0x595c21u); f_00599570();
    /* 00595c21: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00595c23: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00595c25: mov edx, dword ptr [0x7935a4] */ r_edx = R32((u32)(0x7935a4u));
    /* 00595c2b: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00595c2e: mov ecx, dword ptr [0x7935a4] */ r_ecx = R32((u32)(0x7935a4u));
    /* 00595c34: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00595c37: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00595c39: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00595c3c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x595c3eu); call_ind(t); }
    /* 00595c3e: jmp 0x595c6e */ goto L_00595c6e;
L_00595c40:; BB(0x00595c40);
    /* 00595c40: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00595c46: mov dl, byte ptr [ecx + 0x25] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x25u))) & 0xffu);
    /* 00595c49: mov byte ptr [ebp - 0x3d], dl */ W8((u32)(r_ebp+0xffffffc3u), (u8)r_edx);
    /* 00595c4c: movzx eax, byte ptr [ebp - 0x3d] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffc3u));
    /* 00595c50: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00595c52: je 0x595c63 */ if (fZ) goto L_00595c63;
L_00595c54:; BB(0x00595c54);
    /* 00595c54: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 00595c59: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00595c5c: call 0x5956f0 */ r_esp -= 4; W32(r_esp, 0x595c61u); f_005956f0();
    /* 00595c61: jmp 0x595c6e */ goto L_00595c6e;
L_00595c63:; BB(0x00595c63);
    /* 00595c63: mov ecx, dword ptr [0x79359c] */ r_ecx = R32((u32)(0x79359cu));
    /* 00595c69: call 0x5921b0 */ r_esp -= 4; W32(r_esp, 0x595c6eu); f_005921b0();
L_00595c6e:; BB(0x00595c6e);
    /* 00595c6e: mov esp, ebp */ r_esp = r_ebp;
    /* 00595c70: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00595c71: ret  */ FN_RET(0x00595790); r_esp += 4; return;
}

