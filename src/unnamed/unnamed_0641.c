#include "protos.h"

void f_00641230(void) /* sub_641230 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00641230);
    /* 00641230: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00641231: mov ebp, esp */ r_ebp = r_esp;
    /* 00641233: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00641236: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00641239: or eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0064123c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064123d: ret  */ FN_RET(0x00641230); r_esp += 4; return;
}

void f_00641280(void) /* sub_641280 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00641280);
    /* 00641280: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00641281: mov ebp, esp */ r_ebp = r_esp;
    /* 00641283: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 00641287: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0064128c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064128d: ret  */ FN_RET(0x00641280); r_esp += 4; return;
}

void f_00641290(void) /* sub_641290 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00641290);
    /* 00641290: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00641291: mov ebp, esp */ r_ebp = r_esp;
    /* 00641293: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 00641297: and eax, 0xff00 */ {  u32 a = r_eax; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0064129c: shr eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0064129f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006412a0: ret  */ FN_RET(0x00641290); r_esp += 4; return;
}

void f_006412e0(void) /* sub_6412E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006412e0);
    /* 006412e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006412e1: mov ebp, esp */ r_ebp = r_esp;
    /* 006412e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006412e4: mov ax, word ptr [ebp + 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 006412e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006412e9: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x6412eeu); f_00641290();
    /* 006412ee: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006412f1: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006412f4: je 0x641311 */ if (fZ) goto L_00641311;
L_006412f6:; BB(0x006412f6);
    /* 006412f6: mov cx, word ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 006412fa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006412fb: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x641300u); f_00641290();
    /* 00641300: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00641303: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00641306: je 0x641311 */ if (fZ) goto L_00641311;
L_00641308:; BB(0x00641308);
    /* 00641308: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0064130f: jmp 0x641318 */ goto L_00641318;
L_00641311:; BB(0x00641311);
    /* 00641311: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
L_00641318:; BB(0x00641318);
    /* 00641318: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064131b: mov esp, ebp */ r_esp = r_ebp;
    /* 0064131d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064131e: ret  */ FN_RET(0x006412e0); r_esp += 4; return;
}

void f_006413c0(void) /* sub_6413C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006413c0);
    /* 006413c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006413c1: mov ebp, esp */ r_ebp = r_esp;
    /* 006413c3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006413c6: movzx eax, byte ptr [ebp + 0x14] */ r_eax = (u32)R8((u32)(r_ebp+0x14u));
    /* 006413ca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006413cc: je 0x641479 */ if (fZ) goto L_00641479;
L_006413d2:; BB(0x006413d2);
    /* 006413d2: cmp dword ptr [ebp + 0x10], 5 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006413d6: jne 0x6413f3 */ if (!fZ) goto L_006413f3;
L_006413d8:; BB(0x006413d8);
    /* 006413d8: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 006413db: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006413dc: push 0x6b4e68 */ { u32 v = 0x6b4e68u; r_esp -= 4; W32(r_esp, v); }
    /* 006413e1: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006413e4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006413e5: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x6413ebu); call_ind(t); }
    /* 006413eb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006413ee: jmp 0x641474 */ goto L_00641474;
L_006413f3:; BB(0x006413f3);
    /* 006413f3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006413f6: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 006413f9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006413fc: sub ecx, 0xb */ {  u32 a = r_ecx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006413ff: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00641402: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00641406: ja 0x64145e */ if ((!fC&&!fZ)) goto L_0064145e;
L_00641408:; BB(0x00641408);
    /* 00641408: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064140b: jmp dword ptr [edx*4 + 0x6415c0] */ { u32 t = R32((u32)(r_edx*4+0x6415c0u)); switch (t) { case 0x64144bu: goto L_0064144b; case 0x641438u: goto L_00641438; case 0x641425u: goto L_00641425; case 0x641412u: goto L_00641412; case 0x6414a3u: goto L_006414a3; case 0x6414efu: goto L_006414ef; case 0x6414dcu: goto L_006414dc; case 0x6414c9u: goto L_006414c9; case 0x6414b6u: goto L_006414b6; case 0x641502u: goto L_00641502; case 0x641515u: goto L_00641515; default: UNSUP(0x0064140b, "jump table entry is not a known target"); } }
L_00641412:; BB(0x00641412);
    /* 00641412: push 0x6bb090 */ { u32 v = 0x6bb090u; r_esp -= 4; W32(r_esp, v); }
    /* 00641417: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0064141a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064141b: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x641420u); f_00686d8e();
    /* 00641420: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00641423: jmp 0x641474 */ goto L_00641474;
L_00641425:; BB(0x00641425);
    /* 00641425: push 0x6dc3bc */ { u32 v = 0x6dc3bcu; r_esp -= 4; W32(r_esp, v); }
    /* 0064142a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0064142d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064142e: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x641433u); f_00686d8e();
    /* 00641433: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00641436: jmp 0x641474 */ goto L_00641474;
L_00641438:; BB(0x00641438);
    /* 00641438: push 0x6dc3b8 */ { u32 v = 0x6dc3b8u; r_esp -= 4; W32(r_esp, v); }
    /* 0064143d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00641440: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00641441: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x641446u); f_00686d8e();
    /* 00641446: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00641449: jmp 0x641474 */ goto L_00641474;
L_0064144b:; BB(0x0064144b);
    /* 0064144b: push 0x6dc3b4 */ { u32 v = 0x6dc3b4u; r_esp -= 4; W32(r_esp, v); }
    /* 00641450: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00641453: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00641454: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x641459u); f_00686d8e();
    /* 00641459: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064145c: jmp 0x641474 */ goto L_00641474;
L_0064145e:; BB(0x0064145e);
    /* 0064145e: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00641461: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00641462: push 0x6b4e68 */ { u32 v = 0x6b4e68u; r_esp -= 4; W32(r_esp, v); }
    /* 00641467: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0064146a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064146b: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x641471u); call_ind(t); }
    /* 00641471: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00641474:; BB(0x00641474);
    /* 00641474: jmp 0x64152b */ goto L_0064152b;
L_00641479:; BB(0x00641479);
    /* 00641479: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0064147c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0064147f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00641482: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00641485: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00641488: cmp dword ptr [ebp - 8], 0xe */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0064148c: ja 0x641515 */ if ((!fC&&!fZ)) goto L_00641515;
L_00641492:; BB(0x00641492);
    /* 00641492: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00641495: movzx eax, byte ptr [edx + 0x6415ec] */ r_eax = (u32)R8((u32)(r_edx+0x6415ecu));
    /* 0064149c: jmp dword ptr [eax*4 + 0x6415d0] */ { u32 t = R32((u32)(r_eax*4+0x6415d0u)); switch (t) { case 0x641412u: goto L_00641412; case 0x641425u: goto L_00641425; case 0x641438u: goto L_00641438; case 0x64144bu: goto L_0064144b; case 0x6414a3u: goto L_006414a3; case 0x6414efu: goto L_006414ef; case 0x6414dcu: goto L_006414dc; case 0x6414c9u: goto L_006414c9; case 0x6414b6u: goto L_006414b6; case 0x641502u: goto L_00641502; case 0x641515u: goto L_00641515; default: UNSUP(0x0064149c, "jump table entry is not a known target"); } }
L_006414a3:; BB(0x006414a3);
    /* 006414a3: push 0x6dc3b0 */ { u32 v = 0x6dc3b0u; r_esp -= 4; W32(r_esp, v); }
    /* 006414a8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006414ab: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006414ac: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x6414b1u); f_00686d8e();
    /* 006414b1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006414b4: jmp 0x64152b */ goto L_0064152b;
L_006414b6:; BB(0x006414b6);
    /* 006414b6: push 0x6dc3b0 */ { u32 v = 0x6dc3b0u; r_esp -= 4; W32(r_esp, v); }
    /* 006414bb: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006414be: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006414bf: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x6414c4u); f_00686d8e();
    /* 006414c4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006414c7: jmp 0x64152b */ goto L_0064152b;
L_006414c9:; BB(0x006414c9);
    /* 006414c9: push 0x6dc3ac */ { u32 v = 0x6dc3acu; r_esp -= 4; W32(r_esp, v); }
    /* 006414ce: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006414d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006414d2: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x6414d7u); f_00686d8e();
    /* 006414d7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006414da: jmp 0x64152b */ goto L_0064152b;
L_006414dc:; BB(0x006414dc);
    /* 006414dc: push 0x6dc3a8 */ { u32 v = 0x6dc3a8u; r_esp -= 4; W32(r_esp, v); }
    /* 006414e1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006414e4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006414e5: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x6414eau); f_00686d8e();
    /* 006414ea: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006414ed: jmp 0x64152b */ goto L_0064152b;
L_006414ef:; BB(0x006414ef);
    /* 006414ef: push 0x6dc3a4 */ { u32 v = 0x6dc3a4u; r_esp -= 4; W32(r_esp, v); }
    /* 006414f4: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006414f7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006414f8: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x6414fdu); f_00686d8e();
    /* 006414fd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00641500: jmp 0x64152b */ goto L_0064152b;
L_00641502:; BB(0x00641502);
    /* 00641502: push 0x6dc3a0 */ { u32 v = 0x6dc3a0u; r_esp -= 4; W32(r_esp, v); }
    /* 00641507: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0064150a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064150b: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x641510u); f_00686d8e();
    /* 00641510: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00641513: jmp 0x64152b */ goto L_0064152b;
L_00641515:; BB(0x00641515);
    /* 00641515: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00641518: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00641519: push 0x6b4e68 */ { u32 v = 0x6b4e68u; r_esp -= 4; W32(r_esp, v); }
    /* 0064151e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00641521: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00641522: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x641528u); call_ind(t); }
    /* 00641528: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0064152b:; BB(0x0064152b);
    /* 0064152b: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0064152e: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00641531: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00641534: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00641537: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0064153a: cmp dword ptr [ebp - 0xc], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0064153e: ja 0x6415ba */ if ((!fC&&!fZ)) goto L_006415ba;
L_00641540:; BB(0x00641540);
    /* 00641540: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00641543: jmp dword ptr [edx*4 + 0x6415fc] */ { u32 t = R32((u32)(r_edx*4+0x6415fcu)); switch (t) { case 0x64154au: goto L_0064154a; case 0x64155du: goto L_0064155d; case 0x641570u: goto L_00641570; case 0x641583u: goto L_00641583; case 0x641596u: goto L_00641596; case 0x6415a9u: goto L_006415a9; default: UNSUP(0x00641543, "jump table entry is not a known target"); } }
L_0064154a:; BB(0x0064154a);
    /* 0064154a: push 0x6dc3b8 */ { u32 v = 0x6dc3b8u; r_esp -= 4; W32(r_esp, v); }
    /* 0064154f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00641552: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00641553: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x641558u); f_00686ec6();
    /* 00641558: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064155b: jmp 0x6415ba */ goto L_006415ba;
L_0064155d:; BB(0x0064155d);
    /* 0064155d: push 0x6dc3bc */ { u32 v = 0x6dc3bcu; r_esp -= 4; W32(r_esp, v); }
    /* 00641562: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00641565: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00641566: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x64156bu); f_00686ec6();
    /* 0064156b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064156e: jmp 0x6415ba */ goto L_006415ba;
L_00641570:; BB(0x00641570);
    /* 00641570: push 0x6dc39c */ { u32 v = 0x6dc39cu; r_esp -= 4; W32(r_esp, v); }
    /* 00641575: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00641578: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00641579: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x64157eu); f_00686ec6();
    /* 0064157e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00641581: jmp 0x6415ba */ goto L_006415ba;
L_00641583:; BB(0x00641583);
    /* 00641583: push 0x6dc398 */ { u32 v = 0x6dc398u; r_esp -= 4; W32(r_esp, v); }
    /* 00641588: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0064158b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064158c: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x641591u); f_00686ec6();
    /* 00641591: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00641594: jmp 0x6415ba */ goto L_006415ba;
L_00641596:; BB(0x00641596);
    /* 00641596: push 0x6dc394 */ { u32 v = 0x6dc394u; r_esp -= 4; W32(r_esp, v); }
    /* 0064159b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0064159e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064159f: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x6415a4u); f_00686ec6();
    /* 006415a4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006415a7: jmp 0x6415ba */ goto L_006415ba;
L_006415a9:; BB(0x006415a9);
    /* 006415a9: push 0x6dc390 */ { u32 v = 0x6dc390u; r_esp -= 4; W32(r_esp, v); }
    /* 006415ae: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006415b1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006415b2: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x6415b7u); f_00686ec6();
    /* 006415b7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006415ba:; BB(0x006415ba);
    /* 006415ba: mov esp, ebp */ r_esp = r_ebp;
    /* 006415bc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006415bd: ret  */ FN_RET(0x006413c0); r_esp += 4; return;
}

void f_00641930(void) /* sub_641930 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00641930);
    /* 00641930: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00641931: mov ebp, esp */ r_ebp = r_esp;
    /* 00641933: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00641934: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00641935: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0064193c: jmp 0x641947 */ goto L_00641947;
L_0064193e:; BB(0x0064193e);
    /* 0064193e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00641941: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00641944: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00641947:; BB(0x00641947);
    /* 00641947: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064194a: cmp ecx, dword ptr [ebp + 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064194d: jge 0x641965 */ if ((fS==fO)) goto L_00641965;
L_0064194f:; BB(0x0064194f);
    /* 0064194f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00641952: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00641955: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00641958: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 0064195b: mov cx, word ptr [esi + ecx*2] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_esi+r_ecx*2))) & 0xffffu);
    /* 0064195f: mov word ptr [eax + edx*2], cx */ W16((u32)(r_eax+r_edx*2), (u16)r_ecx);
    /* 00641963: jmp 0x64193e */ goto L_0064193e;
L_00641965:; BB(0x00641965);
    /* 00641965: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00641966: mov esp, ebp */ r_esp = r_ebp;
    /* 00641968: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00641969: ret  */ FN_RET(0x00641930); r_esp += 4; return;
}

void f_00641e20(void) /* sub_641E20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00641e20);
    /* 00641e20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00641e21: mov ebp, esp */ r_ebp = r_esp;
    /* 00641e23: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00641e26: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00641e27: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00641e2e: jmp 0x641e39 */ goto L_00641e39;
L_00641e30:; BB(0x00641e30);
    /* 00641e30: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00641e33: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00641e36: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00641e39:; BB(0x00641e39);
    /* 00641e39: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00641e3c: cmp ecx, dword ptr [ebp + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00641e3f: jge 0x641ebd */ if ((fS==fO)) goto L_00641ebd;
L_00641e41:; BB(0x00641e41);
    /* 00641e41: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00641e48: jmp 0x641e53 */ goto L_00641e53;
L_00641e4a:; BB(0x00641e4a);
    /* 00641e4a: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00641e4d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00641e50: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_00641e53:; BB(0x00641e53);
    /* 00641e53: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00641e56: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00641e59: cmp dword ptr [ebp - 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00641e5c: jge 0x641eb8 */ if ((fS==fO)) goto L_00641eb8;
L_00641e5e:; BB(0x00641e5e);
    /* 00641e5e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00641e61: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00641e64: mov ax, word ptr [edx + ecx*2 + 2] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x2u))) & 0xffffu);
    /* 00641e69: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00641e6a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00641e6d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00641e70: mov ax, word ptr [edx + ecx*2] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2))) & 0xffffu);
    /* 00641e74: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00641e75: call 0x642c20 */ r_esp -= 4; W32(r_esp, 0x641e7au); f_00642c20();
    /* 00641e7a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00641e7d: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00641e80: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00641e82: je 0x641eb6 */ if (fZ) goto L_00641eb6;
L_00641e84:; BB(0x00641e84);
    /* 00641e84: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00641e87: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00641e8a: mov cx, word ptr [eax + edx*2] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2))) & 0xffffu);
    /* 00641e8e: mov word ptr [ebp - 8], cx */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_ecx);
    /* 00641e92: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00641e95: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00641e98: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00641e9b: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 00641e9e: mov cx, word ptr [esi + ecx*2 + 2] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_esi+r_ecx*2+0x2u))) & 0xffffu);
    /* 00641ea3: mov word ptr [eax + edx*2], cx */ W16((u32)(r_eax+r_edx*2), (u16)r_ecx);
    /* 00641ea7: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00641eaa: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00641ead: mov cx, word ptr [ebp - 8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 00641eb1: mov word ptr [eax + edx*2 + 2], cx */ W16((u32)(r_eax+r_edx*2+0x2u), (u16)r_ecx);
L_00641eb6:; BB(0x00641eb6);
    /* 00641eb6: jmp 0x641e4a */ goto L_00641e4a;
L_00641eb8:; BB(0x00641eb8);
    /* 00641eb8: jmp 0x641e30 */ goto L_00641e30;
L_00641ebd:; BB(0x00641ebd);
    /* 00641ebd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00641ebe: mov esp, ebp */ r_esp = r_ebp;
    /* 00641ec0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00641ec1: ret  */ FN_RET(0x00641e20); r_esp += 4; return;
}

void f_00641ed0(void) /* sub_641ED0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00641ed0);
    /* 00641ed0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00641ed1: mov ebp, esp */ r_ebp = r_esp;
    /* 00641ed3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00641ed6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00641ed7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00641ede: jmp 0x641ee9 */ goto L_00641ee9;
L_00641ee0:; BB(0x00641ee0);
    /* 00641ee0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00641ee3: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00641ee6: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00641ee9:; BB(0x00641ee9);
    /* 00641ee9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00641eec: cmp ecx, dword ptr [ebp + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00641eef: jge 0x641f6d */ if ((fS==fO)) goto L_00641f6d;
L_00641ef1:; BB(0x00641ef1);
    /* 00641ef1: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00641ef8: jmp 0x641f03 */ goto L_00641f03;
L_00641efa:; BB(0x00641efa);
    /* 00641efa: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00641efd: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00641f00: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_00641f03:; BB(0x00641f03);
    /* 00641f03: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00641f06: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00641f09: cmp dword ptr [ebp - 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00641f0c: jge 0x641f68 */ if ((fS==fO)) goto L_00641f68;
L_00641f0e:; BB(0x00641f0e);
    /* 00641f0e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00641f11: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00641f14: mov ax, word ptr [edx + ecx*2 + 2] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x2u))) & 0xffffu);
    /* 00641f19: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00641f1a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00641f1d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00641f20: mov ax, word ptr [edx + ecx*2] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2))) & 0xffffu);
    /* 00641f24: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00641f25: call 0x642c20 */ r_esp -= 4; W32(r_esp, 0x641f2au); f_00642c20();
    /* 00641f2a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00641f2d: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00641f30: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00641f32: jne 0x641f66 */ if (!fZ) goto L_00641f66;
L_00641f34:; BB(0x00641f34);
    /* 00641f34: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00641f37: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00641f3a: mov cx, word ptr [eax + edx*2] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2))) & 0xffffu);
    /* 00641f3e: mov word ptr [ebp - 8], cx */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_ecx);
    /* 00641f42: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00641f45: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00641f48: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00641f4b: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 00641f4e: mov cx, word ptr [esi + ecx*2 + 2] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_esi+r_ecx*2+0x2u))) & 0xffffu);
    /* 00641f53: mov word ptr [eax + edx*2], cx */ W16((u32)(r_eax+r_edx*2), (u16)r_ecx);
    /* 00641f57: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00641f5a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00641f5d: mov cx, word ptr [ebp - 8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 00641f61: mov word ptr [eax + edx*2 + 2], cx */ W16((u32)(r_eax+r_edx*2+0x2u), (u16)r_ecx);
L_00641f66:; BB(0x00641f66);
    /* 00641f66: jmp 0x641efa */ goto L_00641efa;
L_00641f68:; BB(0x00641f68);
    /* 00641f68: jmp 0x641ee0 */ goto L_00641ee0;
L_00641f6d:; BB(0x00641f6d);
    /* 00641f6d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00641f6e: mov esp, ebp */ r_esp = r_ebp;
    /* 00641f70: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00641f71: ret  */ FN_RET(0x00641ed0); r_esp += 4; return;
}

