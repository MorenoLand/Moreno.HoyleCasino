#include "protos.h"

void f_004171d0(void) /* BlackjackSettingsHelpText::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004171d0);
    /* 004171d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004171d1: mov ebp, esp */ r_ebp = r_esp;
    /* 004171d3: sub esp, 0x84 */ {  u32 a = r_esp; u32 b = 0x84u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004171d9: mov dword ptr [ebp - 0x84], ecx */ W32((u32)(r_ebp+0xffffff7cu), r_ecx);
    /* 004171df: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004171e6: cmp dword ptr [0x163068c], 0 */ {  u32 a = R32((u32)(0x163068cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004171ed: jne 0x4171f4 */ if (!fZ) goto L_004171f4;
L_004171ef:; BB(0x004171ef);
    /* 004171ef: jmp 0x417610 */ goto L_00417610;
L_004171f4:; BB(0x004171f4);
    /* 004171f4: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 004171f6: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 004171fc: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x417201u); f_005fb5e0();
    /* 00417201: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 00417204: mov dword ptr [ebp - 0x7c], 0 */ W32((u32)(r_ebp+0xffffff84u), 0x0u);
    /* 0041720b: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 0041720d: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 00417213: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x417218u); f_005fb5e0();
    /* 00417218: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 0041721b: mov dword ptr [ebp - 0x74], 1 */ W32((u32)(r_ebp+0xffffff8cu), 0x1u);
    /* 00417222: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 00417224: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 0041722a: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x41722fu); f_005fb5e0();
    /* 0041722f: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 00417232: mov dword ptr [ebp - 0x6c], 2 */ W32((u32)(r_ebp+0xffffff94u), 0x2u);
    /* 00417239: push 0x35 */ { u32 v = 0x35u; r_esp -= 4; W32(r_esp, v); }
    /* 0041723b: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 00417241: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x417246u); f_005fb5e0();
    /* 00417246: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 00417249: mov dword ptr [ebp - 0x64], 3 */ W32((u32)(r_ebp+0xffffff9cu), 0x3u);
    /* 00417250: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00417252: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 00417258: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x41725du); f_005fb5e0();
    /* 0041725d: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 00417260: mov dword ptr [ebp - 0x5c], 4 */ W32((u32)(r_ebp+0xffffffa4u), 0x4u);
    /* 00417267: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 00417269: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 0041726f: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x417274u); f_005fb350();
    /* 00417274: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 00417277: mov dword ptr [ebp - 0x54], 5 */ W32((u32)(r_ebp+0xffffffacu), 0x5u);
    /* 0041727e: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 00417280: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 00417286: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x41728bu); f_005fb350();
    /* 0041728b: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 0041728e: mov dword ptr [ebp - 0x4c], 6 */ W32((u32)(r_ebp+0xffffffb4u), 0x6u);
    /* 00417295: push 0x39 */ { u32 v = 0x39u; r_esp -= 4; W32(r_esp, v); }
    /* 00417297: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 0041729d: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x4172a2u); f_005fb350();
    /* 004172a2: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 004172a5: mov dword ptr [ebp - 0x44], 7 */ W32((u32)(r_ebp+0xffffffbcu), 0x7u);
    /* 004172ac: push 0x3a */ { u32 v = 0x3au; r_esp -= 4; W32(r_esp, v); }
    /* 004172ae: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 004172b4: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x4172b9u); f_005fb350();
    /* 004172b9: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 004172bc: mov dword ptr [ebp - 0x3c], 8 */ W32((u32)(r_ebp+0xffffffc4u), 0x8u);
    /* 004172c3: push 0x3b */ { u32 v = 0x3bu; r_esp -= 4; W32(r_esp, v); }
    /* 004172c5: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 004172cb: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x4172d0u); f_005fb350();
    /* 004172d0: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 004172d3: mov dword ptr [ebp - 0x34], 9 */ W32((u32)(r_ebp+0xffffffccu), 0x9u);
    /* 004172da: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 004172dc: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 004172e2: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x4172e7u); f_005fb350();
    /* 004172e7: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 004172ea: mov dword ptr [ebp - 0x2c], 0xa */ W32((u32)(r_ebp+0xffffffd4u), 0xau);
    /* 004172f1: push 0x3d */ { u32 v = 0x3du; r_esp -= 4; W32(r_esp, v); }
    /* 004172f3: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 004172f9: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x4172feu); f_005fb350();
    /* 004172fe: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00417301: mov dword ptr [ebp - 0x24], 0xb */ W32((u32)(r_ebp+0xffffffdcu), 0xbu);
    /* 00417308: push 0x3e */ { u32 v = 0x3eu; r_esp -= 4; W32(r_esp, v); }
    /* 0041730a: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 00417310: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x417315u); f_005fb350();
    /* 00417315: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00417318: mov dword ptr [ebp - 0x1c], 0xc */ W32((u32)(r_ebp+0xffffffe4u), 0xcu);
    /* 0041731f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00417321: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 00417327: call 0x5fb860 */ r_esp -= 4; W32(r_esp, 0x41732cu); f_005fb860();
    /* 0041732c: mov eax, dword ptr [eax + 0x4c] */ r_eax = R32((u32)(r_eax+0x4cu));
    /* 0041732f: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00417332: mov dword ptr [ebp - 0x14], 0xd */ W32((u32)(r_ebp+0xffffffecu), 0xdu);
    /* 00417339: mov dword ptr [ebp - 0xc], 0xe */ W32((u32)(r_ebp+0xfffffff4u), 0xeu);
    /* 00417340: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00417347: jmp 0x417352 */ goto L_00417352;
L_00417349:; BB(0x00417349);
    /* 00417349: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041734c: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0041734f: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_00417352:; BB(0x00417352);
    /* 00417352: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00417355: cmp edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00417358: jge 0x417395 */ if ((fS==fO)) goto L_00417395;
L_0041735a:; BB(0x0041735a);
    /* 0041735a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041735d: cmp dword ptr [ebp + eax*8 - 0x80], 0 */ {  u32 a = R32((u32)(r_ebp+r_eax*8+0xffffff80u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417362: je 0x417393 */ if (fZ) goto L_00417393;
L_00417364:; BB(0x00417364);
    /* 00417364: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00417367: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00417368: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041736b: mov eax, dword ptr [ebp + edx*8 - 0x80] */ r_eax = R32((u32)(r_ebp+r_edx*8+0xffffff80u));
    /* 0041736f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00417372: mov ecx, dword ptr [ebp + ecx*8 - 0x80] */ r_ecx = R32((u32)(r_ebp+r_ecx*8+0xffffff80u));
    /* 00417376: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00417378: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 0041737e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x417380u); call_ind(t); }
    /* 00417380: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00417383: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417385: je 0x417393 */ if (fZ) goto L_00417393;
L_00417387:; BB(0x00417387);
    /* 00417387: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041738a: mov eax, dword ptr [ebp + edx*8 - 0x7c] */ r_eax = R32((u32)(r_ebp+r_edx*8+0xffffff84u));
    /* 0041738e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00417391: jmp 0x417395 */ goto L_00417395;
L_00417393:; BB(0x00417393);
    /* 00417393: jmp 0x417349 */ goto L_00417349;
L_00417395:; BB(0x00417395);
    /* 00417395: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417399: jne 0x4173c4 */ if (!fZ) goto L_004173c4;
L_0041739b:; BB(0x0041739b);
    /* 0041739b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041739e: cmp dword ptr [ecx + 0x18], 3 */ {  u32 a = R32((u32)(r_ecx+0x18u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004173a2: jne 0x4173bf */ if (!fZ) goto L_004173bf;
L_004173a4:; BB(0x004173a4);
    /* 004173a4: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 004173a9: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 004173af: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004173b1: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 004173b7: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 004173bd: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4173bfu); call_ind(t); }
L_004173bf:; BB(0x004173bf);
    /* 004173bf: jmp 0x417610 */ goto L_00417610;
L_004173c4:; BB(0x004173c4);
    /* 004173c4: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004173c8: jne 0x4173ee */ if (!fZ) goto L_004173ee;
L_004173ca:; BB(0x004173ca);
    /* 004173ca: push 0x6b45b8 */ { u32 v = 0x6b45b8u; r_esp -= 4; W32(r_esp, v); }
    /* 004173cf: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4173d4u); f_00630f40();
    /* 004173d4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004173d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004173d8: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 004173de: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004173e0: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 004173e6: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004173ec: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4173eeu); call_ind(t); }
L_004173ee:; BB(0x004173ee);
    /* 004173ee: cmp dword ptr [ebp - 4], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004173f2: jne 0x417418 */ if (!fZ) goto L_00417418;
L_004173f4:; BB(0x004173f4);
    /* 004173f4: push 0x6b45a0 */ { u32 v = 0x6b45a0u; r_esp -= 4; W32(r_esp, v); }
    /* 004173f9: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4173feu); f_00630f40();
    /* 004173fe: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00417401: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00417402: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 00417408: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0041740a: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 00417410: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00417416: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x417418u); call_ind(t); }
L_00417418:; BB(0x00417418);
    /* 00417418: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041741c: jne 0x417442 */ if (!fZ) goto L_00417442;
L_0041741e:; BB(0x0041741e);
    /* 0041741e: push 0x6b4588 */ { u32 v = 0x6b4588u; r_esp -= 4; W32(r_esp, v); }
    /* 00417423: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x417428u); f_00630f40();
    /* 00417428: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041742b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041742c: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 00417432: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00417434: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0041743a: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00417440: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x417442u); call_ind(t); }
L_00417442:; BB(0x00417442);
    /* 00417442: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417446: jne 0x41746c */ if (!fZ) goto L_0041746c;
L_00417448:; BB(0x00417448);
    /* 00417448: push 0x6b4570 */ { u32 v = 0x6b4570u; r_esp -= 4; W32(r_esp, v); }
    /* 0041744d: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x417452u); f_00630f40();
    /* 00417452: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00417455: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00417456: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0041745c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0041745e: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 00417464: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0041746a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x41746cu); call_ind(t); }
L_0041746c:; BB(0x0041746c);
    /* 0041746c: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417470: jne 0x417496 */ if (!fZ) goto L_00417496;
L_00417472:; BB(0x00417472);
    /* 00417472: push 0x6b4558 */ { u32 v = 0x6b4558u; r_esp -= 4; W32(r_esp, v); }
    /* 00417477: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41747cu); f_00630f40();
    /* 0041747c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041747f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00417480: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 00417486: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00417488: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0041748e: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00417494: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x417496u); call_ind(t); }
L_00417496:; BB(0x00417496);
    /* 00417496: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041749a: jne 0x4174c0 */ if (!fZ) goto L_004174c0;
L_0041749c:; BB(0x0041749c);
    /* 0041749c: push 0x6b4540 */ { u32 v = 0x6b4540u; r_esp -= 4; W32(r_esp, v); }
    /* 004174a1: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4174a6u); f_00630f40();
    /* 004174a6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004174a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004174aa: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 004174b0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004174b2: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 004174b8: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004174be: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4174c0u); call_ind(t); }
L_004174c0:; BB(0x004174c0);
    /* 004174c0: cmp dword ptr [ebp - 4], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004174c4: jne 0x4174ea */ if (!fZ) goto L_004174ea;
L_004174c6:; BB(0x004174c6);
    /* 004174c6: push 0x6b4528 */ { u32 v = 0x6b4528u; r_esp -= 4; W32(r_esp, v); }
    /* 004174cb: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4174d0u); f_00630f40();
    /* 004174d0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004174d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004174d4: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 004174da: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004174dc: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 004174e2: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004174e8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4174eau); call_ind(t); }
L_004174ea:; BB(0x004174ea);
    /* 004174ea: cmp dword ptr [ebp - 4], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004174ee: jne 0x417514 */ if (!fZ) goto L_00417514;
L_004174f0:; BB(0x004174f0);
    /* 004174f0: push 0x6b4510 */ { u32 v = 0x6b4510u; r_esp -= 4; W32(r_esp, v); }
    /* 004174f5: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4174fau); f_00630f40();
    /* 004174fa: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004174fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004174fe: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 00417504: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00417506: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0041750c: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00417512: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x417514u); call_ind(t); }
L_00417514:; BB(0x00417514);
    /* 00417514: cmp dword ptr [ebp - 4], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417518: jne 0x41753e */ if (!fZ) goto L_0041753e;
L_0041751a:; BB(0x0041751a);
    /* 0041751a: push 0x6b44f8 */ { u32 v = 0x6b44f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0041751f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x417524u); f_00630f40();
    /* 00417524: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00417527: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00417528: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0041752e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00417530: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 00417536: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0041753c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x41753eu); call_ind(t); }
L_0041753e:; BB(0x0041753e);
    /* 0041753e: cmp dword ptr [ebp - 4], 9 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417542: jne 0x417568 */ if (!fZ) goto L_00417568;
L_00417544:; BB(0x00417544);
    /* 00417544: push 0x6b44dc */ { u32 v = 0x6b44dcu; r_esp -= 4; W32(r_esp, v); }
    /* 00417549: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41754eu); f_00630f40();
    /* 0041754e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00417551: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00417552: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 00417558: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0041755a: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 00417560: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00417566: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x417568u); call_ind(t); }
L_00417568:; BB(0x00417568);
    /* 00417568: cmp dword ptr [ebp - 4], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041756c: jne 0x417592 */ if (!fZ) goto L_00417592;
L_0041756e:; BB(0x0041756e);
    /* 0041756e: push 0x6b44c0 */ { u32 v = 0x6b44c0u; r_esp -= 4; W32(r_esp, v); }
    /* 00417573: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x417578u); f_00630f40();
    /* 00417578: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041757b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041757c: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 00417582: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00417584: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0041758a: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00417590: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x417592u); call_ind(t); }
L_00417592:; BB(0x00417592);
    /* 00417592: cmp dword ptr [ebp - 4], 0xb */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417596: jne 0x4175bc */ if (!fZ) goto L_004175bc;
L_00417598:; BB(0x00417598);
    /* 00417598: push 0x6b44a4 */ { u32 v = 0x6b44a4u; r_esp -= 4; W32(r_esp, v); }
    /* 0041759d: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4175a2u); f_00630f40();
    /* 004175a2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004175a5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004175a6: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 004175ac: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004175ae: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 004175b4: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004175ba: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4175bcu); call_ind(t); }
L_004175bc:; BB(0x004175bc);
    /* 004175bc: cmp dword ptr [ebp - 4], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004175c0: jne 0x4175e6 */ if (!fZ) goto L_004175e6;
L_004175c2:; BB(0x004175c2);
    /* 004175c2: push 0x6b4488 */ { u32 v = 0x6b4488u; r_esp -= 4; W32(r_esp, v); }
    /* 004175c7: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4175ccu); f_00630f40();
    /* 004175cc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004175cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004175d0: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 004175d6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004175d8: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 004175de: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004175e4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4175e6u); call_ind(t); }
L_004175e6:; BB(0x004175e6);
    /* 004175e6: cmp dword ptr [ebp - 4], 0xd */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004175ea: jne 0x417610 */ if (!fZ) goto L_00417610;
L_004175ec:; BB(0x004175ec);
    /* 004175ec: push 0x6b446c */ { u32 v = 0x6b446cu; r_esp -= 4; W32(r_esp, v); }
    /* 004175f1: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4175f6u); f_00630f40();
    /* 004175f6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004175f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004175fa: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 00417600: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00417602: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 00417608: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0041760e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x417610u); call_ind(t); }
L_00417610:; BB(0x00417610);
    /* 00417610: mov esp, ebp */ r_esp = r_ebp;
    /* 00417612: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00417613: ret 4 */ FN_RET(0x004171d0); r_esp += 8; return;
}

