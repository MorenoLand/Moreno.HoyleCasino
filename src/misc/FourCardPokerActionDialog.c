#include "protos.h"

void f_00592300(void) /* FourCardPokerActionDialog::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00592300);
    /* 00592300: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00592301: mov ebp, esp */ r_ebp = r_esp;
    /* 00592303: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00592304: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00592307: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00592309: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059230b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059230e: call 0x5f71f0 */ r_esp -= 4; W32(r_esp, 0x592313u); f_005f71f0();
    /* 00592313: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00592316: mov dword ptr [eax], 0x6ce1ec */ W32((u32)(r_eax), 0x6ce1ecu);
    /* 0059231c: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 00592322: mov byte ptr [ecx + 0x12c], 1 */ W8((u32)(r_ecx+0x12cu), 0x1u);
    /* 00592329: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059232c: mov esp, ebp */ r_esp = r_ebp;
    /* 0059232e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059232f: ret  */ FN_RET(0x00592300); r_esp += 4; return;
}

void f_00592330(void) /* FourCardPokerActionDialog::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00592330);
    /* 00592330: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00592331: mov ebp, esp */ r_ebp = r_esp;
    /* 00592333: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00592334: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00592337: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059233a: mov dword ptr [eax], 0x6ce1ec */ W32((u32)(r_eax), 0x6ce1ecu);
    /* 00592340: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 00592346: mov byte ptr [ecx + 0x12c], 0 */ W8((u32)(r_ecx+0x12cu), 0x0u);
    /* 0059234d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00592350: call 0x5f7260 */ r_esp -= 4; W32(r_esp, 0x592355u); f_005f7260();
    /* 00592355: mov esp, ebp */ r_esp = r_ebp;
    /* 00592357: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00592358: ret  */ FN_RET(0x00592330); r_esp += 4; return;
}

void f_00592360(void) /* FourCardPokerActionDialog::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00592360);
    /* 00592360: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00592361: mov ebp, esp */ r_ebp = r_esp;
    /* 00592363: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00592365: push 0x6a7112 */ { u32 v = 0x6a7112u; r_esp -= 4; W32(r_esp, v); }
    /* 0059236a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00592370: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00592371: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00592374: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00592379: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0059237b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059237c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0059237f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00592385: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00592388: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059238c: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0059238f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00592390: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 00592396: call 0x597d30 */ r_esp -= 4; W32(r_esp, 0x59239bu); f_00597d30();
    /* 0059239b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059239c: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 005923a2: call 0x598750 */ r_esp -= 4; W32(r_esp, 0x5923a7u); f_00598750();
    /* 005923a7: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005923aa: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005923ac: je 0x5923b3 */ if (fZ) goto L_005923b3;
L_005923ae:; BB(0x005923ae);
    /* 005923ae: jmp 0x59246f */ goto L_0059246f;
L_005923b3:; BB(0x005923b3);
    /* 005923b3: cmp dword ptr [ebp + 8], 1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005923b7: jne 0x592413 */ if (!fZ) goto L_00592413;
L_005923b9:; BB(0x005923b9);
    /* 005923b9: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 005923bf: call 0x597d30 */ r_esp -= 4; W32(r_esp, 0x5923c4u); f_00597d30();
    /* 005923c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005923c5: lea edx, [ebp - 0x14] */ r_edx = (u32)(r_ebp+0xffffffecu);
    /* 005923c8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005923c9: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 005923cf: call 0x597d30 */ r_esp -= 4; W32(r_esp, 0x5923d4u); f_00597d30();
    /* 005923d4: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005923d7: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 005923dd: mov ecx, dword ptr [ecx + eax*4 + 8] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 005923e1: call 0x5cb880 */ r_esp -= 4; W32(r_esp, 0x5923e6u); f_005cb880();
    /* 005923e6: cmp dword ptr [eax], 0 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005923e9: jne 0x592413 */ if (!fZ) goto L_00592413;
L_005923eb:; BB(0x005923eb);
    /* 005923eb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005923ed: push 0x6b6940 */ { u32 v = 0x6b6940u; r_esp -= 4; W32(r_esp, v); }
    /* 005923f2: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5923f7u); f_00630f40();
    /* 005923f7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005923fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005923fb: push 0x6ce22c */ { u32 v = 0x6ce22cu; r_esp -= 4; W32(r_esp, v); }
    /* 00592400: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x592405u); f_00630f40();
    /* 00592405: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00592408: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00592409: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x59240eu); f_0062ff10();
    /* 0059240e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00592411: jmp 0x59246f */ goto L_0059246f;
L_00592413:; BB(0x00592413);
    /* 00592413: mov ecx, dword ptr [0x79359c] */ r_ecx = R32((u32)(0x79359cu));
    /* 00592419: call 0x590fe0 */ r_esp -= 4; W32(r_esp, 0x59241eu); f_00590fe0();
    /* 0059241e: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00592420: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x592425u); f_00686d82();
    /* 00592425: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00592428: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0059242b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00592432: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00592436: je 0x592449 */ if (fZ) goto L_00592449;
L_00592438:; BB(0x00592438);
    /* 00592438: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0059243b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059243c: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0059243f: call 0x5943d0 */ r_esp -= 4; W32(r_esp, 0x592444u); f_005943d0();
    /* 00592444: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00592447: jmp 0x592450 */ goto L_00592450;
L_00592449:; BB(0x00592449);
    /* 00592449: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00592450:; BB(0x00592450);
    /* 00592450: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00592453: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00592456: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0059245d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00592460: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00592461: mov edx, dword ptr [0x7935a4] */ r_edx = R32((u32)(0x7935a4u));
    /* 00592467: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 0059246a: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x59246fu); f_005fc420();
L_0059246f:; BB(0x0059246f);
    /* 0059246f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00592472: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00592479: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059247a: mov esp, ebp */ r_esp = r_ebp;
    /* 0059247c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059247d: ret 4 */ FN_RET(0x00592360); r_esp += 8; return;
}

void f_00592480(void) /* FourCardPokerActionDialog::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00592480);
    /* 00592480: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00592481: mov ebp, esp */ r_ebp = r_esp;
    /* 00592483: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00592484: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00592487: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0059248a: movzx ecx, byte ptr [eax + 4] */ r_ecx = (u32)R8((u32)(r_eax+0x4u));
    /* 0059248e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00592490: jne 0x5924a1 */ if (!fZ) goto L_005924a1;
L_00592492:; BB(0x00592492);
    /* 00592492: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00592495: call 0x5f88f0 */ r_esp -= 4; W32(r_esp, 0x59249au); f_005f88f0();
    /* 0059249a: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0059249d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059249f: je 0x5924a6 */ if (fZ) goto L_005924a6;
L_005924a1:; BB(0x005924a1);
    /* 005924a1: jmp 0x59259c */ goto L_0059259c;
L_005924a6:; BB(0x005924a6);
    /* 005924a6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005924a9: cmp dword ptr [eax + 0x18], 4 */ {  u32 a = R32((u32)(r_eax+0x18u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005924ad: jne 0x592590 */ if (!fZ) goto L_00592590;
L_005924b3:; BB(0x005924b3);
    /* 005924b3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005924b6: movsx edx, byte ptr [ecx + 0x14] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x14u));
    /* 005924ba: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005924bb: call dword ptr [0x6b2224] */ { u32 t = R32((u32)(0x6b2224u)); r_esp -= 4; W32(r_esp, 0x5924c1u); call_ind(t); }
    /* 005924c1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005924c4: cmp eax, 0x74 */ {  u32 a = r_eax; u32 b = 0x74u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005924c7: jne 0x5924e0 */ if (!fZ) goto L_005924e0;
L_005924c9:; BB(0x005924c9);
    /* 005924c9: mov ecx, dword ptr [0x7935a4] */ r_ecx = R32((u32)(0x7935a4u));
    /* 005924cf: call 0x5db240 */ r_esp -= 4; W32(r_esp, 0x5924d4u); f_005db240();
    /* 005924d4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005924d7: mov byte ptr [eax + 4], 1 */ W8((u32)(r_eax+0x4u), 0x1u);
    /* 005924db: jmp 0x592590 */ goto L_00592590;
L_005924e0:; BB(0x005924e0);
    /* 005924e0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005924e3: movsx edx, byte ptr [ecx + 0x14] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x14u));
    /* 005924e7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005924e8: call dword ptr [0x6b2224] */ { u32 t = R32((u32)(0x6b2224u)); r_esp -= 4; W32(r_esp, 0x5924eeu); call_ind(t); }
    /* 005924ee: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005924f1: cmp eax, 0x66 */ {  u32 a = r_eax; u32 b = 0x66u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005924f4: jne 0x59252e */ if (!fZ) goto L_0059252e;
L_005924f6:; BB(0x005924f6);
    /* 005924f6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005924f8: push 0x314d1b */ { u32 v = 0x314d1bu; r_esp -= 4; W32(r_esp, v); }
    /* 005924fd: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00592503: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x592508u); f_005f2a60();
    /* 00592508: mov ecx, eax */ r_ecx = r_eax;
    /* 0059250a: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x59250fu); f_006026d0();
    /* 0059250f: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00592512: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00592514: je 0x59252e */ if (fZ) goto L_0059252e;
L_00592516:; BB(0x00592516);
    /* 00592516: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00592518: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059251b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0059251d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00592520: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00592523: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x592525u); call_ind(t); }
    /* 00592525: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00592528: mov byte ptr [ecx + 4], 1 */ W8((u32)(r_ecx+0x4u), 0x1u);
    /* 0059252c: jmp 0x592590 */ goto L_00592590;
L_0059252e:; BB(0x0059252e);
    /* 0059252e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00592531: movsx eax, byte ptr [edx + 0x14] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x14u));
    /* 00592535: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00592536: call dword ptr [0x6b2224] */ { u32 t = R32((u32)(0x6b2224u)); r_esp -= 4; W32(r_esp, 0x59253cu); call_ind(t); }
    /* 0059253c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059253f: cmp eax, 0x63 */ {  u32 a = r_eax; u32 b = 0x63u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00592542: je 0x59255a */ if (fZ) goto L_0059255a;
L_00592544:; BB(0x00592544);
    /* 00592544: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00592547: movsx edx, byte ptr [ecx + 0x14] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x14u));
    /* 0059254b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059254c: call dword ptr [0x6b2224] */ { u32 t = R32((u32)(0x6b2224u)); r_esp -= 4; W32(r_esp, 0x592552u); call_ind(t); }
    /* 00592552: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00592555: cmp eax, 0x70 */ {  u32 a = r_eax; u32 b = 0x70u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00592558: jne 0x592590 */ if (!fZ) goto L_00592590;
L_0059255a:; BB(0x0059255a);
    /* 0059255a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059255c: push 0x314d1c */ { u32 v = 0x314d1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00592561: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00592567: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x59256cu); f_005f2a60();
    /* 0059256c: mov ecx, eax */ r_ecx = r_eax;
    /* 0059256e: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x592573u); f_006026d0();
    /* 00592573: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00592576: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00592578: je 0x592590 */ if (fZ) goto L_00592590;
L_0059257a:; BB(0x0059257a);
    /* 0059257a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0059257c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059257f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00592581: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00592584: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00592587: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x592589u); call_ind(t); }
    /* 00592589: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0059258c: mov byte ptr [ecx + 4], 1 */ W8((u32)(r_ecx+0x4u), 0x1u);
L_00592590:; BB(0x00592590);
    /* 00592590: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00592593: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00592594: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00592597: call 0x5f72f0 */ r_esp -= 4; W32(r_esp, 0x59259cu); f_005f72f0();
L_0059259c:; BB(0x0059259c);
    /* 0059259c: mov esp, ebp */ r_esp = r_ebp;
    /* 0059259e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059259f: ret 4 */ FN_RET(0x00592480); r_esp += 8; return;
}

void f_005925b0(void) /* FourCardPokerActionDialog::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005925b0);
    /* 005925b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005925b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005925b3: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005925b6: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005925b9: mov dword ptr [ebp - 0xc], 0x6ce1cc */ W32((u32)(r_ebp+0xfffffff4u), 0x6ce1ccu);
    /* 005925c0: mov dword ptr [ebp - 8], 0x6ce250 */ W32((u32)(r_ebp+0xfffffff8u), 0x6ce250u);
    /* 005925c7: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 005925ce: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
    /* 005925d5: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 005925db: call 0x597d30 */ r_esp -= 4; W32(r_esp, 0x5925e0u); f_00597d30();
    /* 005925e0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005925e3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005925e5: push 0x424 */ { u32 v = 0x424u; r_esp -= 4; W32(r_esp, v); }
    /* 005925ea: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005925ed: call 0x5f83d0 */ r_esp -= 4; W32(r_esp, 0x5925f2u); f_005f83d0();
    /* 005925f2: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 005925f4: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005925f7: call 0x5f89d0 */ r_esp -= 4; W32(r_esp, 0x5925fcu); f_005f89d0();
    /* 005925fc: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005925fe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00592600: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 00592602: push 0x6b6084 */ { u32 v = 0x6b6084u; r_esp -= 4; W32(r_esp, v); }
    /* 00592607: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x59260cu); f_00630f40();
    /* 0059260c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059260f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00592610: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00592613: call 0x5f73e0 */ r_esp -= 4; W32(r_esp, 0x592618u); f_005f73e0();
    /* 00592618: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 0059261f: jmp 0x59262a */ goto L_0059262a;
L_00592621:; BB(0x00592621);
    /* 00592621: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00592624: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00592627: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_0059262a:; BB(0x0059262a);
    /* 0059262a: cmp dword ptr [ebp - 0x18], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059262e: jge 0x592687 */ if ((fS==fO)) goto L_00592687;
L_00592630:; BB(0x00592630);
    /* 00592630: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00592632: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00592634: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 00592636: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 00592638: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 0059263a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0059263d: mov edx, dword ptr [ebp + ecx*4 - 0xc] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xfffffff4u));
    /* 00592641: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00592642: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x592647u); f_00630f40();
    /* 00592647: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059264a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059264b: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0059264d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00592650: imul eax, eax, 0x23 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x23u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00592653: add eax, 0x26 */ {  u32 a = r_eax; u32 b = 0x26u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00592656: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00592657: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00592659: push 0x30d4de */ { u32 v = 0x30d4deu; r_esp -= 4; W32(r_esp, v); }
    /* 0059265e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00592661: mov edx, dword ptr [ebp + ecx*4 - 0x14] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffecu));
    /* 00592665: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00592666: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00592668: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0059266b: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x592670u); f_005f9de0();
    /* 00592670: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00592672: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00592675: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00592676: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00592679: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x59267eu); f_005fb300();
    /* 0059267e: mov ecx, eax */ r_ecx = r_eax;
    /* 00592680: call 0x5eb700 */ r_esp -= 4; W32(r_esp, 0x592685u); f_005eb700();
    /* 00592685: jmp 0x592621 */ goto L_00592621;
L_00592687:; BB(0x00592687);
    /* 00592687: mov esp, ebp */ r_esp = r_ebp;
    /* 00592689: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059268a: ret  */ FN_RET(0x005925b0); r_esp += 4; return;
}

