#include "protos.h"

void f_00569270(void) /* sub_569270 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00569270);
    /* 00569270: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00569271: mov ebp, esp */ r_ebp = r_esp;
    /* 00569273: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00569276: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00569279: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00569280: jmp 0x56928b */ goto L_0056928b;
L_00569282:; BB(0x00569282);
    /* 00569282: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00569285: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00569288: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0056928b:; BB(0x0056928b);
    /* 0056928b: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056928f: jge 0x5692a0 */ if ((fS==fO)) goto L_005692a0;
L_00569291:; BB(0x00569291);
    /* 00569291: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00569294: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00569297: mov word ptr [edx + ecx*2 + 0x1a], 0 */ W16((u32)(r_edx+r_ecx*2+0x1au), 0x0u);
    /* 0056929e: jmp 0x569282 */ goto L_00569282;
L_005692a0:; BB(0x005692a0);
    /* 005692a0: mov esp, ebp */ r_esp = r_ebp;
    /* 005692a2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005692a3: ret  */ FN_RET(0x00569270); r_esp += 4; return;
}

void f_005692b0(void) /* sub_5692B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005692b0);
    /* 005692b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005692b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005692b3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005692b6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005692b7: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005692ba: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005692c1: jmp 0x5692cc */ goto L_005692cc;
L_005692c3:; BB(0x005692c3);
    /* 005692c3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005692c6: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005692c9: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005692cc:; BB(0x005692cc);
    /* 005692cc: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005692d0: jge 0x5692ea */ if ((fS==fO)) goto L_005692ea;
L_005692d2:; BB(0x005692d2);
    /* 005692d2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005692d5: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005692d8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005692db: mov esi, dword ptr [ebp - 8] */ r_esi = R32((u32)(r_ebp+0xfffffff8u));
    /* 005692de: mov ax, word ptr [esi + eax*2 + 0x24] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_esi+r_eax*2+0x24u))) & 0xffffu);
    /* 005692e3: mov word ptr [edx + ecx*2 + 0x1a], ax */ W16((u32)(r_edx+r_ecx*2+0x1au), (u16)r_eax);
    /* 005692e8: jmp 0x5692c3 */ goto L_005692c3;
L_005692ea:; BB(0x005692ea);
    /* 005692ea: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005692eb: mov esp, ebp */ r_esp = r_ebp;
    /* 005692ed: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005692ee: ret  */ FN_RET(0x005692b0); r_esp += 4; return;
}

void f_005692f0(void) /* sub_5692F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005692f0);
    /* 005692f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005692f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005692f3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005692f6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005692f9: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00569300: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00569307: jmp 0x569312 */ goto L_00569312;
L_00569309:; BB(0x00569309);
    /* 00569309: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056930c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0056930f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00569312:; BB(0x00569312);
    /* 00569312: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00569316: jge 0x569332 */ if ((fS==fO)) goto L_00569332;
L_00569318:; BB(0x00569318);
    /* 00569318: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056931b: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056931e: movzx eax, word ptr [edx + ecx*2 + 0x24] */ r_eax = (u32)R16((u32)(r_edx+r_ecx*2+0x24u));
    /* 00569323: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00569325: je 0x569330 */ if (fZ) goto L_00569330;
L_00569327:; BB(0x00569327);
    /* 00569327: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056932a: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0056932d: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_00569330:; BB(0x00569330);
    /* 00569330: jmp 0x569309 */ goto L_00569309;
L_00569332:; BB(0x00569332);
    /* 00569332: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00569335: mov esp, ebp */ r_esp = r_ebp;
    /* 00569337: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00569338: ret  */ FN_RET(0x005692f0); r_esp += 4; return;
}

void f_00569340(void) /* sub_569340 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00569340);
    /* 00569340: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00569341: mov ebp, esp */ r_ebp = r_esp;
    /* 00569343: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00569346: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00569347: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0056934a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056934d: call 0x5692f0 */ r_esp -= 4; W32(r_esp, 0x569352u); f_005692f0();
    /* 00569352: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00569354: jne 0x569366 */ if (!fZ) goto L_00569366;
L_00569356:; BB(0x00569356);
    /* 00569356: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00569359: mov cx, word ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 0056935d: mov word ptr [eax + 0x24], cx */ W16((u32)(r_eax+0x24u), (u16)r_ecx);
    /* 00569361: jmp 0x569457 */ goto L_00569457;
L_00569366:; BB(0x00569366);
    /* 00569366: mov dx, word ptr [ebp + 8] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 0056936a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056936b: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x569370u); f_00641280();
    /* 00569370: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00569373: mov esi, eax */ r_esi = r_eax;
    /* 00569375: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00569378: mov cx, word ptr [eax + 0x24] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+0x24u))) & 0xffffu);
    /* 0056937c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056937d: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x569382u); f_00641280();
    /* 00569382: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00569385: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00569387: jg 0x5693c9 */ if ((!fZ&&fS==fO)) goto L_005693c9;
L_00569389:; BB(0x00569389);
    /* 00569389: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 00569390: jmp 0x56939b */ goto L_0056939b;
L_00569392:; BB(0x00569392);
    /* 00569392: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00569395: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00569398: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0056939b:; BB(0x0056939b);
    /* 0056939b: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056939f: jle 0x5693b9 */ if ((fZ||fS!=fO)) goto L_005693b9;
L_005693a1:; BB(0x005693a1);
    /* 005693a1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005693a4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005693a7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005693aa: mov esi, dword ptr [ebp - 0xc] */ r_esi = R32((u32)(r_ebp+0xfffffff4u));
    /* 005693ad: mov dx, word ptr [esi + edx*2 + 0x22] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_esi+r_edx*2+0x22u))) & 0xffffu);
    /* 005693b2: mov word ptr [ecx + eax*2 + 0x24], dx */ W16((u32)(r_ecx+r_eax*2+0x24u), (u16)r_edx);
    /* 005693b7: jmp 0x569392 */ goto L_00569392;
L_005693b9:; BB(0x005693b9);
    /* 005693b9: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005693bc: mov cx, word ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 005693c0: mov word ptr [eax + 0x24], cx */ W16((u32)(r_eax+0x24u), (u16)r_ecx);
    /* 005693c4: jmp 0x569457 */ goto L_00569457;
L_005693c9:; BB(0x005693c9);
    /* 005693c9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005693cc: call 0x5692f0 */ r_esp -= 4; W32(r_esp, 0x5693d1u); f_005692f0();
    /* 005693d1: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005693d4: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005693d7: jmp 0x5693e2 */ goto L_005693e2;
L_005693d9:; BB(0x005693d9);
    /* 005693d9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005693dc: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005693df: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_005693e2:; BB(0x005693e2);
    /* 005693e2: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005693e6: jle 0x569457 */ if ((fZ||fS!=fO)) goto L_00569457;
L_005693e8:; BB(0x005693e8);
    /* 005693e8: mov ax, word ptr [ebp + 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 005693ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005693ed: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x5693f2u); f_00641280();
    /* 005693f2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005693f5: mov esi, eax */ r_esi = r_eax;
    /* 005693f7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005693fa: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005693fd: mov ax, word ptr [edx + ecx*2 + 0x24] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x24u))) & 0xffffu);
    /* 00569402: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00569403: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x569408u); f_00641280();
    /* 00569408: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056940b: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056940d: jl 0x569455 */ if ((fS!=fO)) goto L_00569455;
L_0056940f:; BB(0x0056940f);
    /* 0056940f: mov dword ptr [ebp - 8], 4 */ W32((u32)(r_ebp+0xfffffff8u), 0x4u);
    /* 00569416: jmp 0x569421 */ goto L_00569421;
L_00569418:; BB(0x00569418);
    /* 00569418: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056941b: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0056941e: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_00569421:; BB(0x00569421);
    /* 00569421: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00569424: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00569427: cmp dword ptr [ebp - 8], edx */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056942a: jle 0x569444 */ if ((fZ||fS!=fO)) goto L_00569444;
L_0056942c:; BB(0x0056942c);
    /* 0056942c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056942f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00569432: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00569435: mov esi, dword ptr [ebp - 0xc] */ r_esi = R32((u32)(r_ebp+0xfffffff4u));
    /* 00569438: mov dx, word ptr [esi + edx*2 + 0x22] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_esi+r_edx*2+0x22u))) & 0xffffu);
    /* 0056943d: mov word ptr [ecx + eax*2 + 0x24], dx */ W16((u32)(r_ecx+r_eax*2+0x24u), (u16)r_edx);
    /* 00569442: jmp 0x569418 */ goto L_00569418;
L_00569444:; BB(0x00569444);
    /* 00569444: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00569447: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056944a: mov dx, word ptr [ebp + 8] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 0056944e: mov word ptr [ecx + eax*2 + 0x26], dx */ W16((u32)(r_ecx+r_eax*2+0x26u), (u16)r_edx);
    /* 00569453: jmp 0x569457 */ goto L_00569457;
L_00569455:; BB(0x00569455);
    /* 00569455: jmp 0x5693d9 */ goto L_005693d9;
L_00569457:; BB(0x00569457);
    /* 00569457: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00569458: mov esp, ebp */ r_esp = r_ebp;
    /* 0056945a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056945b: ret 4 */ FN_RET(0x00569340); r_esp += 8; return;
}

void f_00569460(void) /* sub_569460 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00569460);
    /* 00569460: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00569461: mov ebp, esp */ r_ebp = r_esp;
    /* 00569463: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00569466: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00569467: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0056946a: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 00569471: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00569478: jmp 0x569483 */ goto L_00569483;
L_0056947a:; BB(0x0056947a);
    /* 0056947a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056947d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00569480: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_00569483:; BB(0x00569483);
    /* 00569483: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00569487: jge 0x5694de */ if ((fS==fO)) goto L_005694de;
L_00569489:; BB(0x00569489);
    /* 00569489: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056948c: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056948f: movzx eax, word ptr [edx + ecx*2 + 0x24] */ r_eax = (u32)R16((u32)(r_edx+r_ecx*2+0x24u));
    /* 00569494: movzx ecx, word ptr [ebp + 8] */ r_ecx = (u32)R16((u32)(r_ebp+0x8u));
    /* 00569498: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056949a: jne 0x5694dc */ if (!fZ) goto L_005694dc;
L_0056949c:; BB(0x0056949c);
    /* 0056949c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056949f: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005694a2: jmp 0x5694ad */ goto L_005694ad;
L_005694a4:; BB(0x005694a4);
    /* 005694a4: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005694a7: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005694aa: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_005694ad:; BB(0x005694ad);
    /* 005694ad: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005694b0: cmp ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005694b3: jge 0x5694cd */ if ((fS==fO)) goto L_005694cd;
L_005694b5:; BB(0x005694b5);
    /* 005694b5: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005694b8: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005694bb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005694be: mov esi, dword ptr [ebp - 0x10] */ r_esi = R32((u32)(r_ebp+0xfffffff0u));
    /* 005694c1: mov cx, word ptr [esi + ecx*2 + 0x26] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_esi+r_ecx*2+0x26u))) & 0xffffu);
    /* 005694c6: mov word ptr [eax + edx*2 + 0x24], cx */ W16((u32)(r_eax+r_edx*2+0x24u), (u16)r_ecx);
    /* 005694cb: jmp 0x5694a4 */ goto L_005694a4;
L_005694cd:; BB(0x005694cd);
    /* 005694cd: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005694d0: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005694d3: mov word ptr [eax + edx*2 + 0x24], 0 */ W16((u32)(r_eax+r_edx*2+0x24u), 0x0u);
    /* 005694da: jmp 0x5694de */ goto L_005694de;
L_005694dc:; BB(0x005694dc);
    /* 005694dc: jmp 0x56947a */ goto L_0056947a;
L_005694de:; BB(0x005694de);
    /* 005694de: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005694df: mov esp, ebp */ r_esp = r_ebp;
    /* 005694e1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005694e2: ret 4 */ FN_RET(0x00569460); r_esp += 8; return;
}

void f_005694f0(void) /* sub_5694F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005694f0);
    /* 005694f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005694f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005694f3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005694f6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005694f9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00569500: jmp 0x56950b */ goto L_0056950b;
L_00569502:; BB(0x00569502);
    /* 00569502: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00569505: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00569508: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0056950b:; BB(0x0056950b);
    /* 0056950b: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056950f: jge 0x569576 */ if ((fS==fO)) goto L_00569576;
L_00569511:; BB(0x00569511);
    /* 00569511: mov cx, word ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 00569515: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00569516: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00569519: call 0x568840 */ r_esp -= 4; W32(r_esp, 0x56951eu); f_00568840();
    /* 0056951e: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00569521: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00569523: je 0x56953e */ if (fZ) goto L_0056953e;
L_00569525:; BB(0x00569525);
    /* 00569525: mov ax, word ptr [ebp + 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 00569529: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056952a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056952d: call 0x568f20 */ r_esp -= 4; W32(r_esp, 0x569532u); f_00568f20();
    /* 00569532: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00569535: mov word ptr [ecx + eax*2 + 0x1a], 0 */ W16((u32)(r_ecx+r_eax*2+0x1au), 0x0u);
    /* 0056953c: jmp 0x56954b */ goto L_0056954b;
L_0056953e:; BB(0x0056953e);
    /* 0056953e: mov dx, word ptr [ebp + 8] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 00569542: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00569543: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00569546: call 0x568ed0 */ r_esp -= 4; W32(r_esp, 0x56954bu); f_00568ed0();
L_0056954b:; BB(0x0056954b);
    /* 0056954b: mov ecx, dword ptr [0x793440] */ r_ecx = R32((u32)(0x793440u));
    /* 00569551: call 0x561e20 */ r_esp -= 4; W32(r_esp, 0x569556u); f_00561e20();
    /* 00569556: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00569559: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0056955c: call 0x56ace0 */ r_esp -= 4; W32(r_esp, 0x569561u); f_0056ace0();
    /* 00569561: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00569563: mov ecx, dword ptr [0x793440] */ r_ecx = R32((u32)(0x793440u));
    /* 00569569: mov ecx, dword ptr [ecx + 0xb8] */ r_ecx = R32((u32)(r_ecx+0xb8u));
    /* 0056956f: call 0x5645c0 */ r_esp -= 4; W32(r_esp, 0x569574u); f_005645c0();
    /* 00569574: jmp 0x569502 */ goto L_00569502;
L_00569576:; BB(0x00569576);
    /* 00569576: mov esp, ebp */ r_esp = r_ebp;
    /* 00569578: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00569579: ret 4 */ FN_RET(0x005694f0); r_esp += 8; return;
}

void f_00569580(void) /* sub_569580 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00569580);
    /* 00569580: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00569581: mov ebp, esp */ r_ebp = r_esp;
    /* 00569583: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00569586: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00569587: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0056958a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00569591: jmp 0x56959c */ goto L_0056959c;
L_00569593:; BB(0x00569593);
    /* 00569593: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00569596: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00569599: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0056959c:; BB(0x0056959c);
    /* 0056959c: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005695a0: jge 0x569635 */ if ((fS==fO)) goto L_00569635;
L_005695a6:; BB(0x005695a6);
    /* 005695a6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005695a9: mov edx, dword ptr [0x793440] */ r_edx = R32((u32)(0x793440u));
    /* 005695af: mov eax, dword ptr [edx + ecx*4 + 8] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 005695b3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005695b6: mov edx, dword ptr [0x793440] */ r_edx = R32((u32)(0x793440u));
    /* 005695bc: mov ecx, dword ptr [edx + ecx*4 + 8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 005695c0: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005695c2: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 005695c5: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5695c7u); call_ind(t); }
    /* 005695c7: mov esi, eax */ r_esi = r_eax;
    /* 005695c9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005695cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005695cd: mov ecx, dword ptr [0x793440] */ r_ecx = R32((u32)(0x793440u));
    /* 005695d3: call 0x560340 */ r_esp -= 4; W32(r_esp, 0x5695d8u); f_00560340();
    /* 005695d8: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005695da: jne 0x569630 */ if (!fZ) goto L_00569630;
L_005695dc:; BB(0x005695dc);
    /* 005695dc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005695de: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005695df: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 005695e5: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005695e8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005695e9: fld1  */ FPUSH(1.0);
    /* 005695eb: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005695ee: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005695f0: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005695f2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005695f4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005695f6: push 0x31225e */ { u32 v = 0x31225eu; r_esp -= 4; W32(r_esp, v); }
    /* 005695fb: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00569601: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00569603: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00569609: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 0056960f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x569611u); call_ind(t); }
    /* 00569611: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00569614: mov edx, dword ptr [0x793440] */ r_edx = R32((u32)(0x793440u));
    /* 0056961a: mov eax, dword ptr [edx + ecx*4 + 8] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 0056961e: mov cx, word ptr [eax + 0x190] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+0x190u))) & 0xffffu);
    /* 00569625: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00569626: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00569629: call 0x5694f0 */ r_esp -= 4; W32(r_esp, 0x56962eu); f_005694f0();
    /* 0056962e: jmp 0x569635 */ goto L_00569635;
L_00569630:; BB(0x00569630);
    /* 00569630: jmp 0x569593 */ goto L_00569593;
L_00569635:; BB(0x00569635);
    /* 00569635: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00569636: mov esp, ebp */ r_esp = r_ebp;
    /* 00569638: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00569639: ret 4 */ FN_RET(0x00569580); r_esp += 8; return;
}

void f_00569640(void) /* sub_569640 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00569640);
    /* 00569640: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00569641: mov ebp, esp */ r_ebp = r_esp;
    /* 00569643: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00569646: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00569649: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056964c: call 0x5687b0 */ r_esp -= 4; W32(r_esp, 0x569651u); f_005687b0();
    /* 00569651: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00569654: mov byte ptr [eax + 0x2e], 1 */ W8((u32)(r_eax+0x2eu), 0x1u);
    /* 00569658: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056965b: mov dword ptr [ecx + 0x14], 2 */ W32((u32)(r_ecx+0x14u), 0x2u);
    /* 00569662: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00569669: jmp 0x569674 */ goto L_00569674;
L_0056966b:; BB(0x0056966b);
    /* 0056966b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056966e: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00569671: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00569674:; BB(0x00569674);
    /* 00569674: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00569678: jge 0x5696ac */ if ((fS==fO)) goto L_005696ac;
L_0056967a:; BB(0x0056967a);
    /* 0056967a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056967d: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 00569680: call 0x6436c0 */ r_esp -= 4; W32(r_esp, 0x569685u); f_006436c0();
    /* 00569685: mov word ptr [ebp - 8], ax */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_eax);
    /* 00569689: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056968c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056968d: mov dx, word ptr [ebp - 8] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 00569691: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00569692: mov ecx, dword ptr [0x793440] */ r_ecx = R32((u32)(0x793440u));
    /* 00569698: call 0x5624a0 */ r_esp -= 4; W32(r_esp, 0x56969du); f_005624a0();
    /* 0056969d: mov ax, word ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 005696a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005696a2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005696a5: call 0x569340 */ r_esp -= 4; W32(r_esp, 0x5696aau); f_00569340();
    /* 005696aa: jmp 0x56966b */ goto L_0056966b;
L_005696ac:; BB(0x005696ac);
    /* 005696ac: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005696af: call 0x569780 */ r_esp -= 4; W32(r_esp, 0x5696b4u); f_00569780();
    /* 005696b4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005696b7: mov byte ptr [ecx + 0x2e], 0 */ W8((u32)(r_ecx+0x2eu), 0x0u);
    /* 005696bb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005696be: call 0x5687b0 */ r_esp -= 4; W32(r_esp, 0x5696c3u); f_005687b0();
    /* 005696c3: mov esp, ebp */ r_esp = r_ebp;
    /* 005696c5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005696c6: ret  */ FN_RET(0x00569640); r_esp += 4; return;
}

void f_005696d0(void) /* sub_5696D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005696d0);
    /* 005696d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005696d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005696d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005696d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005696d7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005696da: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005696dd: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005696e0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005696e3: mov dword ptr [edx + 0x14], ecx */ W32((u32)(r_edx+0x14u), r_ecx);
    /* 005696e6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005696e9: cmp dword ptr [eax + 0x14], 1 */ {  u32 a = R32((u32)(r_eax+0x14u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005696ed: jne 0x569740 */ if (!fZ) goto L_00569740;
L_005696ef:; BB(0x005696ef);
    /* 005696ef: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005696f2: call 0x569fe0 */ r_esp -= 4; W32(r_esp, 0x5696f7u); f_00569fe0();
    /* 005696f7: push 0x746c70 */ { u32 v = 0x746c70u; r_esp -= 4; W32(r_esp, v); }
    /* 005696fc: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 005696fe: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 00569704: call 0x57ab80 */ r_esp -= 4; W32(r_esp, 0x569709u); f_0057ab80();
    /* 00569709: mov ecx, dword ptr [0x793444] */ r_ecx = R32((u32)(0x793444u));
    /* 0056970f: call 0x55ef80 */ r_esp -= 4; W32(r_esp, 0x569714u); f_0055ef80();
    /* 00569714: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00569716: push 0x1391 */ { u32 v = 0x1391u; r_esp -= 4; W32(r_esp, v); }
    /* 0056971b: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00569721: call 0x5f2b20 */ r_esp -= 4; W32(r_esp, 0x569726u); f_005f2b20();
    /* 00569726: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00569728: mov ecx, dword ptr [0x793440] */ r_ecx = R32((u32)(0x793440u));
    /* 0056972e: call 0x561d10 */ r_esp -= 4; W32(r_esp, 0x569733u); f_00561d10();
    /* 00569733: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00569735: mov ecx, dword ptr [0x793440] */ r_ecx = R32((u32)(0x793440u));
    /* 0056973b: call 0x561d40 */ r_esp -= 4; W32(r_esp, 0x569740u); f_00561d40();
L_00569740:; BB(0x00569740);
    /* 00569740: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00569743: cmp dword ptr [ecx + 0x14], 2 */ {  u32 a = R32((u32)(r_ecx+0x14u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00569747: jne 0x56977a */ if (!fZ) goto L_0056977a;
L_00569749:; BB(0x00569749);
    /* 00569749: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056974c: call 0x569780 */ r_esp -= 4; W32(r_esp, 0x569751u); f_00569780();
    /* 00569751: push 0x745460 */ { u32 v = 0x745460u; r_esp -= 4; W32(r_esp, v); }
    /* 00569756: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00569758: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 0056975e: call 0x57ab80 */ r_esp -= 4; W32(r_esp, 0x569763u); f_0057ab80();
    /* 00569763: push 0x1391 */ { u32 v = 0x1391u; r_esp -= 4; W32(r_esp, v); }
    /* 00569768: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0056976e: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x569773u); f_005f2ba0();
    /* 00569773: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00569776: mov byte ptr [edx + 0x3c], 1 */ W8((u32)(r_edx+0x3cu), 0x1u);
L_0056977a:; BB(0x0056977a);
    /* 0056977a: mov esp, ebp */ r_esp = r_ebp;
    /* 0056977c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056977d: ret  */ FN_RET(0x005696d0); r_esp += 4; return;
}

void f_00569780(void) /* sub_569780 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00569780);
    /* 00569780: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00569781: mov ebp, esp */ r_ebp = r_esp;
    /* 00569783: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00569786: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00569789: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00569790: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00569797: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0056979a: call 0x569fe0 */ r_esp -= 4; W32(r_esp, 0x56979fu); f_00569fe0();
    /* 0056979f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005697a0: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005697a3: call 0x5698c0 */ r_esp -= 4; W32(r_esp, 0x5697a8u); f_005698c0();
    /* 005697a8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005697ab: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005697ae: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 005697b1: call 0x56b800 */ r_esp -= 4; W32(r_esp, 0x5697b6u); f_0056b800();
    /* 005697b6: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005697b9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005697bc: add ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005697bf: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005697c2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005697c5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005697c6: mov ecx, dword ptr [0x793440] */ r_ecx = R32((u32)(0x793440u));
    /* 005697cc: call 0x5620c0 */ r_esp -= 4; W32(r_esp, 0x5697d1u); f_005620c0();
    /* 005697d1: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005697d4: mov dword ptr [eax + 0x14], 0 */ W32((u32)(r_eax+0x14u), 0x0u);
    /* 005697db: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005697de: movzx edx, byte ptr [ecx + 0x2e] */ r_edx = (u32)R8((u32)(r_ecx+0x2eu));
    /* 005697e2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005697e4: jne 0x5697fe */ if (!fZ) goto L_005697fe;
L_005697e6:; BB(0x005697e6);
    /* 005697e6: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005697e9: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005697ec: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005697ef: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005697f2: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005697f5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005697f6: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005697f9: call 0x5d0a20 */ r_esp -= 4; W32(r_esp, 0x5697feu); f_005d0a20();
L_005697fe:; BB(0x005697fe);
    /* 005697fe: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00569801: mov dword ptr [eax + 8], 0 */ W32((u32)(r_eax+0x8u), 0x0u);
    /* 00569808: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0056980b: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0056980e: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00569811: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00569814: call 0x5d0aa0 */ r_esp -= 4; W32(r_esp, 0x569819u); f_005d0aa0();
    /* 00569819: imul eax, dword ptr [ebp - 0x10] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xfffffff0u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0056981d: cmp eax, 0x5f5e100 */ {  u32 a = r_eax; u32 b = 0x5f5e100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00569822: jle 0x56986b */ if ((fZ||fS!=fO)) goto L_0056986b;
L_00569824:; BB(0x00569824);
    /* 00569824: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00569827: call 0x5d13e0 */ r_esp -= 4; W32(r_esp, 0x56982cu); f_005d13e0();
    /* 0056982c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056982e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056982f: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 00569835: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00569838: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00569839: fld1  */ FPUSH(1.0);
    /* 0056983b: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0056983e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00569840: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00569842: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00569844: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00569846: push 0x18a88 */ { u32 v = 0x18a88u; r_esp -= 4; W32(r_esp, v); }
    /* 0056984b: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00569850: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00569852: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00569858: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 0056985e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x569860u); call_ind(t); }
    /* 00569860: mov ecx, dword ptr [0x793440] */ r_ecx = R32((u32)(0x793440u));
    /* 00569866: call 0x561950 */ r_esp -= 4; W32(r_esp, 0x56986bu); f_00561950();
L_0056986b:; BB(0x0056986b);
    /* 0056986b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056986d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00569870: call 0x568450 */ r_esp -= 4; W32(r_esp, 0x569875u); f_00568450();
    /* 00569875: mov ecx, dword ptr [0x793440] */ r_ecx = R32((u32)(0x793440u));
    /* 0056987b: call 0x561950 */ r_esp -= 4; W32(r_esp, 0x569880u); f_00561950();
    /* 00569880: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00569883: movzx edx, byte ptr [ecx + 0x2e] */ r_edx = (u32)R8((u32)(r_ecx+0x2eu));
    /* 00569887: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00569889: jne 0x5698bc */ if (!fZ) goto L_005698bc;
L_0056988b:; BB(0x0056988b);
    /* 0056988b: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00569890: mov cl, byte ptr [eax + 0x25] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x25u))) & 0xffu);
    /* 00569893: mov byte ptr [ebp - 0x11], cl */ W8((u32)(r_ebp+0xffffffefu), (u8)r_ecx);
    /* 00569896: movzx edx, byte ptr [ebp - 0x11] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffefu));
    /* 0056989a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056989c: je 0x5698bc */ if (fZ) goto L_005698bc;
L_0056989e:; BB(0x0056989e);
    /* 0056989e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005698a0: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 005698a2: mov eax, dword ptr [0x793438] */ r_eax = R32((u32)(0x793438u));
    /* 005698a7: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005698aa: mov edx, dword ptr [0x793438] */ r_edx = R32((u32)(0x793438u));
    /* 005698b0: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005698b3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005698b5: mov ecx, eax */ r_ecx = r_eax;
    /* 005698b7: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005698ba: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5698bcu); call_ind(t); }
L_005698bc:; BB(0x005698bc);
    /* 005698bc: mov esp, ebp */ r_esp = r_ebp;
    /* 005698be: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005698bf: ret  */ FN_RET(0x00569780); r_esp += 4; return;
}

void f_005698c0(void) /* sub_5698C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005698c0);
    /* 005698c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005698c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005698c3: sub esp, 0x1c8 */ {  u32 a = r_esp; u32 b = 0x1c8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005698c9: mov dword ptr [ebp - 0x1c0], ecx */ W32((u32)(r_ebp+0xfffffe40u), r_ecx);
    /* 005698cf: mov dword ptr [ebp - 0x194], 0xfa */ W32((u32)(r_ebp+0xfffffe6cu), 0xfau);
    /* 005698d9: mov dword ptr [ebp - 0x190], 0x32 */ W32((u32)(r_ebp+0xfffffe70u), 0x32u);
    /* 005698e3: mov dword ptr [ebp - 0x18c], 0x19 */ W32((u32)(r_ebp+0xfffffe74u), 0x19u);
    /* 005698ed: mov dword ptr [ebp - 0x188], 9 */ W32((u32)(r_ebp+0xfffffe78u), 0x9u);
    /* 005698f7: mov dword ptr [ebp - 0x184], 6 */ W32((u32)(r_ebp+0xfffffe7cu), 0x6u);
    /* 00569901: mov dword ptr [ebp - 0x180], 4 */ W32((u32)(r_ebp+0xfffffe80u), 0x4u);
    /* 0056990b: mov dword ptr [ebp - 0x17c], 3 */ W32((u32)(r_ebp+0xfffffe84u), 0x3u);
    /* 00569915: mov dword ptr [ebp - 0x178], 2 */ W32((u32)(r_ebp+0xfffffe88u), 0x2u);
    /* 0056991f: mov dword ptr [ebp - 0x174], 1 */ W32((u32)(r_ebp+0xfffffe8cu), 0x1u);
    /* 00569929: mov dword ptr [ebp - 0xf8], 0xfa */ W32((u32)(r_ebp+0xffffff08u), 0xfau);
    /* 00569933: mov dword ptr [ebp - 0xf4], 0x32 */ W32((u32)(r_ebp+0xffffff0cu), 0x32u);
    /* 0056993d: mov dword ptr [ebp - 0xf0], 0x19 */ W32((u32)(r_ebp+0xffffff10u), 0x19u);
    /* 00569947: mov dword ptr [ebp - 0xec], 6 */ W32((u32)(r_ebp+0xffffff14u), 0x6u);
    /* 00569951: mov dword ptr [ebp - 0xe8], 5 */ W32((u32)(r_ebp+0xffffff18u), 0x5u);
    /* 0056995b: mov dword ptr [ebp - 0xe4], 4 */ W32((u32)(r_ebp+0xffffff1cu), 0x4u);
    /* 00569965: mov dword ptr [ebp - 0xe0], 3 */ W32((u32)(r_ebp+0xffffff20u), 0x3u);
    /* 0056996f: mov dword ptr [ebp - 0xdc], 2 */ W32((u32)(r_ebp+0xffffff24u), 0x2u);
    /* 00569979: mov dword ptr [ebp - 0xd8], 1 */ W32((u32)(r_ebp+0xffffff28u), 0x1u);
    /* 00569983: mov dword ptr [ebp - 0x2c], 0x177 */ W32((u32)(r_ebp+0xffffffd4u), 0x177u);
    /* 0056998a: mov dword ptr [ebp - 0x28], 0x4b */ W32((u32)(r_ebp+0xffffffd8u), 0x4bu);
    /* 00569991: mov dword ptr [ebp - 0x24], 0x50 */ W32((u32)(r_ebp+0xffffffdcu), 0x50u);
    /* 00569998: mov dword ptr [ebp - 0x20], 0x28 */ W32((u32)(r_ebp+0xffffffe0u), 0x28u);
    /* 0056999f: mov dword ptr [ebp - 0x1c], 0x19 */ W32((u32)(r_ebp+0xffffffe4u), 0x19u);
    /* 005699a6: mov dword ptr [ebp - 0x18], 8 */ W32((u32)(r_ebp+0xffffffe8u), 0x8u);
    /* 005699ad: mov dword ptr [ebp - 0x14], 6 */ W32((u32)(r_ebp+0xffffffecu), 0x6u);
    /* 005699b4: mov dword ptr [ebp - 0x10], 4 */ W32((u32)(r_ebp+0xfffffff0u), 0x4u);
    /* 005699bb: mov dword ptr [ebp - 0xc], 2 */ W32((u32)(r_ebp+0xfffffff4u), 0x2u);
    /* 005699c2: mov dword ptr [ebp - 8], 2 */ W32((u32)(r_ebp+0xfffffff8u), 0x2u);
    /* 005699c9: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005699d0: mov dword ptr [ebp - 0x170], 0xfa */ W32((u32)(r_ebp+0xfffffe90u), 0xfau);
    /* 005699da: mov dword ptr [ebp - 0x16c], 0x32 */ W32((u32)(r_ebp+0xfffffe94u), 0x32u);
    /* 005699e4: mov dword ptr [ebp - 0x168], 0x19 */ W32((u32)(r_ebp+0xfffffe98u), 0x19u);
    /* 005699ee: mov dword ptr [ebp - 0x164], 6 */ W32((u32)(r_ebp+0xfffffe9cu), 0x6u);
    /* 005699f8: mov dword ptr [ebp - 0x160], 5 */ W32((u32)(r_ebp+0xfffffea0u), 0x5u);
    /* 00569a02: mov dword ptr [ebp - 0x15c], 4 */ W32((u32)(r_ebp+0xfffffea4u), 0x4u);
    /* 00569a0c: mov dword ptr [ebp - 0x158], 3 */ W32((u32)(r_ebp+0xfffffea8u), 0x3u);
    /* 00569a16: mov dword ptr [ebp - 0x154], 2 */ W32((u32)(r_ebp+0xfffffeacu), 0x2u);
    /* 00569a20: mov dword ptr [ebp - 0x150], 1 */ W32((u32)(r_ebp+0xfffffeb0u), 0x1u);
    /* 00569a2a: mov dword ptr [ebp - 0x1b8], 0xfa */ W32((u32)(r_ebp+0xfffffe48u), 0xfau);
    /* 00569a34: mov dword ptr [ebp - 0x1b4], 0x32 */ W32((u32)(r_ebp+0xfffffe4cu), 0x32u);
    /* 00569a3e: mov dword ptr [ebp - 0x1b0], 0x19 */ W32((u32)(r_ebp+0xfffffe50u), 0x19u);
    /* 00569a48: mov dword ptr [ebp - 0x1ac], 9 */ W32((u32)(r_ebp+0xfffffe54u), 0x9u);
    /* 00569a52: mov dword ptr [ebp - 0x1a8], 6 */ W32((u32)(r_ebp+0xfffffe58u), 0x6u);
    /* 00569a5c: mov dword ptr [ebp - 0x1a4], 4 */ W32((u32)(r_ebp+0xfffffe5cu), 0x4u);
    /* 00569a66: mov dword ptr [ebp - 0x1a0], 3 */ W32((u32)(r_ebp+0xfffffe60u), 0x3u);
    /* 00569a70: mov dword ptr [ebp - 0x19c], 1 */ W32((u32)(r_ebp+0xfffffe64u), 0x1u);
    /* 00569a7a: mov dword ptr [ebp - 0x198], 1 */ W32((u32)(r_ebp+0xfffffe68u), 0x1u);
    /* 00569a84: mov dword ptr [ebp - 0xd4], 0x1f4 */ W32((u32)(r_ebp+0xffffff2cu), 0x1f4u);
    /* 00569a8e: mov dword ptr [ebp - 0xd0], 0x64 */ W32((u32)(r_ebp+0xffffff30u), 0x64u);
    /* 00569a98: mov dword ptr [ebp - 0xcc], 0x19 */ W32((u32)(r_ebp+0xffffff34u), 0x19u);
    /* 00569aa2: mov dword ptr [ebp - 0xc8], 0x10 */ W32((u32)(r_ebp+0xffffff38u), 0x10u);
    /* 00569aac: mov dword ptr [ebp - 0xc4], 0xd */ W32((u32)(r_ebp+0xffffff3cu), 0xdu);
    /* 00569ab6: mov dword ptr [ebp - 0xc0], 4 */ W32((u32)(r_ebp+0xffffff40u), 0x4u);
    /* 00569ac0: mov dword ptr [ebp - 0xbc], 3 */ W32((u32)(r_ebp+0xffffff44u), 0x3u);
    /* 00569aca: mov dword ptr [ebp - 0xb8], 2 */ W32((u32)(r_ebp+0xffffff48u), 0x2u);
    /* 00569ad4: mov dword ptr [ebp - 0xb4], 2 */ W32((u32)(r_ebp+0xffffff4cu), 0x2u);
    /* 00569ade: mov dword ptr [ebp - 0xb0], 1 */ W32((u32)(r_ebp+0xffffff50u), 0x1u);
    /* 00569ae8: mov dword ptr [ebp - 0xa8], 0x177 */ W32((u32)(r_ebp+0xffffff58u), 0x177u);
    /* 00569af2: mov dword ptr [ebp - 0xa4], 0x4b */ W32((u32)(r_ebp+0xffffff5cu), 0x4bu);
    /* 00569afc: mov dword ptr [ebp - 0xa0], 0x19 */ W32((u32)(r_ebp+0xffffff60u), 0x19u);
    /* 00569b06: mov dword ptr [ebp - 0x9c], 0xf */ W32((u32)(r_ebp+0xffffff64u), 0xfu);
    /* 00569b10: mov dword ptr [ebp - 0x98], 0xb */ W32((u32)(r_ebp+0xffffff68u), 0xbu);
    /* 00569b1a: mov dword ptr [ebp - 0x94], 4 */ W32((u32)(r_ebp+0xffffff6cu), 0x4u);
    /* 00569b24: mov dword ptr [ebp - 0x90], 3 */ W32((u32)(r_ebp+0xffffff70u), 0x3u);
    /* 00569b2e: mov dword ptr [ebp - 0x8c], 2 */ W32((u32)(r_ebp+0xffffff74u), 0x2u);
    /* 00569b38: mov dword ptr [ebp - 0x88], 2 */ W32((u32)(r_ebp+0xffffff78u), 0x2u);
    /* 00569b42: mov dword ptr [ebp - 0x84], 1 */ W32((u32)(r_ebp+0xffffff7cu), 0x1u);
    /* 00569b4c: mov dword ptr [ebp - 0x80], 0x1f4 */ W32((u32)(r_ebp+0xffffff80u), 0x1f4u);
    /* 00569b53: mov dword ptr [ebp - 0x7c], 0x64 */ W32((u32)(r_ebp+0xffffff84u), 0x64u);
    /* 00569b5a: mov dword ptr [ebp - 0x78], 0x14 */ W32((u32)(r_ebp+0xffffff88u), 0x14u);
    /* 00569b61: mov dword ptr [ebp - 0x74], 0xa */ W32((u32)(r_ebp+0xffffff8cu), 0xau);
    /* 00569b68: mov dword ptr [ebp - 0x70], 8 */ W32((u32)(r_ebp+0xffffff90u), 0x8u);
    /* 00569b6f: mov dword ptr [ebp - 0x6c], 4 */ W32((u32)(r_ebp+0xffffff94u), 0x4u);
    /* 00569b76: mov dword ptr [ebp - 0x68], 4 */ W32((u32)(r_ebp+0xffffff98u), 0x4u);
    /* 00569b7d: mov dword ptr [ebp - 0x64], 2 */ W32((u32)(r_ebp+0xffffff9cu), 0x2u);
    /* 00569b84: mov dword ptr [ebp - 0x60], 2 */ W32((u32)(r_ebp+0xffffffa0u), 0x2u);
    /* 00569b8b: mov dword ptr [ebp - 0x5c], 1 */ W32((u32)(r_ebp+0xffffffa4u), 0x1u);
    /* 00569b92: mov dword ptr [ebp - 0x58], 0x3e8 */ W32((u32)(r_ebp+0xffffffa8u), 0x3e8u);
    /* 00569b99: mov dword ptr [ebp - 0x54], 0xc8 */ W32((u32)(r_ebp+0xffffffacu), 0xc8u);
    /* 00569ba0: mov dword ptr [ebp - 0x50], 0x64 */ W32((u32)(r_ebp+0xffffffb0u), 0x64u);
    /* 00569ba7: mov dword ptr [ebp - 0x4c], 0x32 */ W32((u32)(r_ebp+0xffffffb4u), 0x32u);
    /* 00569bae: mov dword ptr [ebp - 0x48], 0x11 */ W32((u32)(r_ebp+0xffffffb8u), 0x11u);
    /* 00569bb5: mov dword ptr [ebp - 0x44], 7 */ W32((u32)(r_ebp+0xffffffbcu), 0x7u);
    /* 00569bbc: mov dword ptr [ebp - 0x40], 5 */ W32((u32)(r_ebp+0xffffffc0u), 0x5u);
    /* 00569bc3: mov dword ptr [ebp - 0x3c], 3 */ W32((u32)(r_ebp+0xffffffc4u), 0x3u);
    /* 00569bca: mov dword ptr [ebp - 0x38], 2 */ W32((u32)(r_ebp+0xffffffc8u), 0x2u);
    /* 00569bd1: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 00569bd8: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 00569bdf: mov dword ptr [ebp - 0x14c], 0x1f4 */ W32((u32)(r_ebp+0xfffffeb4u), 0x1f4u);
    /* 00569be9: mov dword ptr [ebp - 0x148], 0x64 */ W32((u32)(r_ebp+0xfffffeb8u), 0x64u);
    /* 00569bf3: mov dword ptr [ebp - 0x144], 0x32 */ W32((u32)(r_ebp+0xfffffebcu), 0x32u);
    /* 00569bfd: mov dword ptr [ebp - 0x140], 0x32 */ W32((u32)(r_ebp+0xfffffec0u), 0x32u);
    /* 00569c07: mov dword ptr [ebp - 0x13c], 0x14 */ W32((u32)(r_ebp+0xfffffec4u), 0x14u);
    /* 00569c11: mov dword ptr [ebp - 0x138], 8 */ W32((u32)(r_ebp+0xfffffec8u), 0x8u);
    /* 00569c1b: mov dword ptr [ebp - 0x134], 5 */ W32((u32)(r_ebp+0xfffffeccu), 0x5u);
    /* 00569c25: mov dword ptr [ebp - 0x130], 4 */ W32((u32)(r_ebp+0xfffffed0u), 0x4u);
    /* 00569c2f: mov dword ptr [ebp - 0x12c], 2 */ W32((u32)(r_ebp+0xfffffed4u), 0x2u);
    /* 00569c39: mov dword ptr [ebp - 0x128], 1 */ W32((u32)(r_ebp+0xfffffed8u), 0x1u);
    /* 00569c43: mov dword ptr [ebp - 0x124], 0xfa0 */ W32((u32)(r_ebp+0xfffffedcu), 0xfa0u);
    /* 00569c4d: mov dword ptr [ebp - 0x120], 0x320 */ W32((u32)(r_ebp+0xfffffee0u), 0x320u);
    /* 00569c57: mov dword ptr [ebp - 0x11c], 0x19 */ W32((u32)(r_ebp+0xfffffee4u), 0x19u);
    /* 00569c61: mov dword ptr [ebp - 0x118], 0xc */ W32((u32)(r_ebp+0xfffffee8u), 0xcu);
    /* 00569c6b: mov dword ptr [ebp - 0x114], 9 */ W32((u32)(r_ebp+0xfffffeecu), 0x9u);
    /* 00569c75: mov dword ptr [ebp - 0x110], 6 */ W32((u32)(r_ebp+0xfffffef0u), 0x6u);
    /* 00569c7f: mov dword ptr [ebp - 0x10c], 3 */ W32((u32)(r_ebp+0xfffffef4u), 0x3u);
    /* 00569c89: mov dword ptr [ebp - 0x108], 3 */ W32((u32)(r_ebp+0xfffffef8u), 0x3u);
    /* 00569c93: mov dword ptr [ebp - 0x104], 3 */ W32((u32)(r_ebp+0xfffffefcu), 0x3u);
    /* 00569c9d: mov dword ptr [ebp - 0x100], 2 */ W32((u32)(r_ebp+0xffffff00u), 0x2u);
    /* 00569ca7: mov dword ptr [ebp - 0xfc], 1 */ W32((u32)(r_ebp+0xffffff04u), 0x1u);
    /* 00569cb1: mov eax, dword ptr [ebp - 0x1c0] */ r_eax = R32((u32)(r_ebp+0xfffffe40u));
    /* 00569cb7: movzx ecx, byte ptr [eax + 0x2e] */ r_ecx = (u32)R8((u32)(r_eax+0x2eu));
    /* 00569cbb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00569cbd: je 0x569ccb */ if (fZ) goto L_00569ccb;
L_00569cbf:; BB(0x00569cbf);
    /* 00569cbf: mov dword ptr [ebp - 0x1c4], 1 */ W32((u32)(r_ebp+0xfffffe3cu), 0x1u);
    /* 00569cc9: jmp 0x569cda */ goto L_00569cda;
L_00569ccb:; BB(0x00569ccb);
    /* 00569ccb: mov edx, dword ptr [ebp - 0x1c0] */ r_edx = R32((u32)(r_ebp+0xfffffe40u));
    /* 00569cd1: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00569cd4: mov dword ptr [ebp - 0x1c4], eax */ W32((u32)(r_ebp+0xfffffe3cu), r_eax);
L_00569cda:; BB(0x00569cda);
    /* 00569cda: mov ecx, dword ptr [ebp - 0x1c4] */ r_ecx = R32((u32)(r_ebp+0xfffffe3cu));
    /* 00569ce0: mov dword ptr [ebp - 0xac], ecx */ W32((u32)(r_ebp+0xffffff54u), r_ecx);
    /* 00569ce6: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00569cea: jge 0x569cf3 */ if ((fS==fO)) goto L_00569cf3;
L_00569cec:; BB(0x00569cec);
    /* 00569cec: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00569cee: jmp 0x569ec8 */ goto L_00569ec8;
L_00569cf3:; BB(0x00569cf3);
    /* 00569cf3: mov edx, dword ptr [ebp - 0x1bc] */ r_edx = R32((u32)(r_ebp+0xfffffe44u));
    /* 00569cf9: mov dword ptr [ebp - 0x1c8], edx */ W32((u32)(r_ebp+0xfffffe38u), r_edx);
    /* 00569cff: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 00569d04: mov ecx, dword ptr [eax + 0x4f14] */ r_ecx = R32((u32)(r_eax+0x4f14u));
    /* 00569d0a: mov dword ptr [ebp - 0x1c8], ecx */ W32((u32)(r_ebp+0xfffffe38u), r_ecx);
    /* 00569d10: cmp dword ptr [ebp - 0x1c8], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffe38u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00569d17: ja 0x569ec6 */ if ((!fC&&!fZ)) goto L_00569ec6;
L_00569d1d:; BB(0x00569d1d);
    /* 00569d1d: mov edx, dword ptr [ebp - 0x1c8] */ r_edx = R32((u32)(r_ebp+0xfffffe38u));
    /* 00569d23: jmp dword ptr [edx*4 + 0x569ed0] */ { u32 t = R32((u32)(r_edx*4+0x569ed0u)); switch (t) { case 0x569d2au: goto L_00569d2a; case 0x569d59u: goto L_00569d59; case 0x569d88u: goto L_00569d88; case 0x569db4u: goto L_00569db4; case 0x569de3u: goto L_00569de3; case 0x569e12u: goto L_00569e12; case 0x569e41u: goto L_00569e41; case 0x569e6au: goto L_00569e6a; case 0x569e90u: goto L_00569e90; case 0x569ea0u: goto L_00569ea0; case 0x569eb3u: goto L_00569eb3; default: UNSUP(0x00569d23, "jump table entry is not a known target"); } }
L_00569d2a:; BB(0x00569d2a);
    /* 00569d2a: cmp dword ptr [ebp - 0xac], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffff54u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00569d31: jne 0x569d43 */ if (!fZ) goto L_00569d43;
L_00569d33:; BB(0x00569d33);
    /* 00569d33: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00569d37: jne 0x569d43 */ if (!fZ) goto L_00569d43;
L_00569d39:; BB(0x00569d39);
    /* 00569d39: mov eax, 0x1388 */ r_eax = 0x1388u;
    /* 00569d3e: jmp 0x569ec8 */ goto L_00569ec8;
L_00569d43:; BB(0x00569d43);
    /* 00569d43: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00569d46: mov eax, dword ptr [ebp + eax*4 - 0x194] */ r_eax = R32((u32)(r_ebp+r_eax*4+0xfffffe6cu));
    /* 00569d4d: imul eax, dword ptr [ebp - 0xac] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xffffff54u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00569d54: jmp 0x569ec8 */ goto L_00569ec8;
L_00569d59:; BB(0x00569d59);
    /* 00569d59: cmp dword ptr [ebp - 0xac], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffff54u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00569d60: jne 0x569d72 */ if (!fZ) goto L_00569d72;
L_00569d62:; BB(0x00569d62);
    /* 00569d62: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00569d66: jne 0x569d72 */ if (!fZ) goto L_00569d72;
L_00569d68:; BB(0x00569d68);
    /* 00569d68: mov eax, 0x1388 */ r_eax = 0x1388u;
    /* 00569d6d: jmp 0x569ec8 */ goto L_00569ec8;
L_00569d72:; BB(0x00569d72);
    /* 00569d72: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00569d75: mov eax, dword ptr [ebp + ecx*4 - 0xf8] */ r_eax = R32((u32)(r_ebp+r_ecx*4+0xffffff08u));
    /* 00569d7c: imul eax, dword ptr [ebp - 0xac] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xffffff54u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00569d83: jmp 0x569ec8 */ goto L_00569ec8;
L_00569d88:; BB(0x00569d88);
    /* 00569d88: cmp dword ptr [ebp - 0xac], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffff54u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00569d8f: jne 0x569da1 */ if (!fZ) goto L_00569da1;
L_00569d91:; BB(0x00569d91);
    /* 00569d91: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00569d95: jne 0x569da1 */ if (!fZ) goto L_00569da1;
L_00569d97:; BB(0x00569d97);
    /* 00569d97: mov eax, 0x9c4 */ r_eax = 0x9c4u;
    /* 00569d9c: jmp 0x569ec8 */ goto L_00569ec8;
L_00569da1:; BB(0x00569da1);
    /* 00569da1: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00569da4: mov eax, dword ptr [ebp + edx*4 - 0x2c] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffffd4u));
    /* 00569da8: imul eax, dword ptr [ebp - 0xac] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xffffff54u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00569daf: jmp 0x569ec8 */ goto L_00569ec8;
L_00569db4:; BB(0x00569db4);
    /* 00569db4: cmp dword ptr [ebp - 0xac], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffff54u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00569dbb: jne 0x569dcd */ if (!fZ) goto L_00569dcd;
L_00569dbd:; BB(0x00569dbd);
    /* 00569dbd: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00569dc1: jne 0x569dcd */ if (!fZ) goto L_00569dcd;
L_00569dc3:; BB(0x00569dc3);
    /* 00569dc3: mov eax, 0xfa0 */ r_eax = 0xfa0u;
    /* 00569dc8: jmp 0x569ec8 */ goto L_00569ec8;
L_00569dcd:; BB(0x00569dcd);
    /* 00569dcd: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00569dd0: mov eax, dword ptr [ebp + eax*4 - 0x170] */ r_eax = R32((u32)(r_ebp+r_eax*4+0xfffffe90u));
    /* 00569dd7: imul eax, dword ptr [ebp - 0xac] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xffffff54u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00569dde: jmp 0x569ec8 */ goto L_00569ec8;
L_00569de3:; BB(0x00569de3);
    /* 00569de3: cmp dword ptr [ebp - 0xac], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffff54u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00569dea: jne 0x569dfc */ if (!fZ) goto L_00569dfc;
L_00569dec:; BB(0x00569dec);
    /* 00569dec: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00569df0: jne 0x569dfc */ if (!fZ) goto L_00569dfc;
L_00569df2:; BB(0x00569df2);
    /* 00569df2: mov eax, 0xfa0 */ r_eax = 0xfa0u;
    /* 00569df7: jmp 0x569ec8 */ goto L_00569ec8;
L_00569dfc:; BB(0x00569dfc);
    /* 00569dfc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00569dff: mov eax, dword ptr [ebp + ecx*4 - 0x1b8] */ r_eax = R32((u32)(r_ebp+r_ecx*4+0xfffffe48u));
    /* 00569e06: imul eax, dword ptr [ebp - 0xac] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xffffff54u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00569e0d: jmp 0x569ec8 */ goto L_00569ec8;
L_00569e12:; BB(0x00569e12);
    /* 00569e12: cmp dword ptr [ebp - 0xac], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffff54u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00569e19: jne 0x569e2b */ if (!fZ) goto L_00569e2b;
L_00569e1b:; BB(0x00569e1b);
    /* 00569e1b: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00569e1f: jne 0x569e2b */ if (!fZ) goto L_00569e2b;
L_00569e21:; BB(0x00569e21);
    /* 00569e21: mov eax, 0xfa0 */ r_eax = 0xfa0u;
    /* 00569e26: jmp 0x569ec8 */ goto L_00569ec8;
L_00569e2b:; BB(0x00569e2b);
    /* 00569e2b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00569e2e: mov eax, dword ptr [ebp + edx*4 - 0xd4] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffff2cu));
    /* 00569e35: imul eax, dword ptr [ebp - 0xac] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xffffff54u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00569e3c: jmp 0x569ec8 */ goto L_00569ec8;
L_00569e41:; BB(0x00569e41);
    /* 00569e41: cmp dword ptr [ebp - 0xac], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffff54u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00569e48: jne 0x569e57 */ if (!fZ) goto L_00569e57;
L_00569e4a:; BB(0x00569e4a);
    /* 00569e4a: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00569e4e: jne 0x569e57 */ if (!fZ) goto L_00569e57;
L_00569e50:; BB(0x00569e50);
    /* 00569e50: mov eax, 0xfa0 */ r_eax = 0xfa0u;
    /* 00569e55: jmp 0x569ec8 */ goto L_00569ec8;
L_00569e57:; BB(0x00569e57);
    /* 00569e57: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00569e5a: mov eax, dword ptr [ebp + eax*4 - 0xa8] */ r_eax = R32((u32)(r_ebp+r_eax*4+0xffffff58u));
    /* 00569e61: imul eax, dword ptr [ebp - 0xac] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xffffff54u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00569e68: jmp 0x569ec8 */ goto L_00569ec8;
L_00569e6a:; BB(0x00569e6a);
    /* 00569e6a: cmp dword ptr [ebp - 0xac], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffff54u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00569e71: jne 0x569e80 */ if (!fZ) goto L_00569e80;
L_00569e73:; BB(0x00569e73);
    /* 00569e73: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00569e77: jne 0x569e80 */ if (!fZ) goto L_00569e80;
L_00569e79:; BB(0x00569e79);
    /* 00569e79: mov eax, 0xfa0 */ r_eax = 0xfa0u;
    /* 00569e7e: jmp 0x569ec8 */ goto L_00569ec8;
L_00569e80:; BB(0x00569e80);
    /* 00569e80: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00569e83: mov eax, dword ptr [ebp + ecx*4 - 0x80] */ r_eax = R32((u32)(r_ebp+r_ecx*4+0xffffff80u));
    /* 00569e87: imul eax, dword ptr [ebp - 0xac] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xffffff54u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00569e8e: jmp 0x569ec8 */ goto L_00569ec8;
L_00569e90:; BB(0x00569e90);
    /* 00569e90: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00569e93: mov eax, dword ptr [ebp + edx*4 - 0x58] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffffa8u));
    /* 00569e97: imul eax, dword ptr [ebp - 0xac] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xffffff54u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00569e9e: jmp 0x569ec8 */ goto L_00569ec8;
L_00569ea0:; BB(0x00569ea0);
    /* 00569ea0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00569ea3: mov eax, dword ptr [ebp + eax*4 - 0x14c] */ r_eax = R32((u32)(r_ebp+r_eax*4+0xfffffeb4u));
    /* 00569eaa: imul eax, dword ptr [ebp - 0xac] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xffffff54u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00569eb1: jmp 0x569ec8 */ goto L_00569ec8;
L_00569eb3:; BB(0x00569eb3);
    /* 00569eb3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00569eb6: mov eax, dword ptr [ebp + ecx*4 - 0x124] */ r_eax = R32((u32)(r_ebp+r_ecx*4+0xfffffedcu));
    /* 00569ebd: imul eax, dword ptr [ebp - 0xac] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xffffff54u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00569ec4: jmp 0x569ec8 */ goto L_00569ec8;
L_00569ec6:; BB(0x00569ec6);
    /* 00569ec6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00569ec8:; BB(0x00569ec8);
    /* 00569ec8: mov esp, ebp */ r_esp = r_ebp;
    /* 00569eca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00569ecb: ret 4 */ FN_RET(0x005698c0); r_esp += 8; return;
}

void f_00569f00(void) /* sub_569F00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00569f00);
    /* 00569f00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00569f01: mov ebp, esp */ r_ebp = r_esp;
    /* 00569f03: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00569f06: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00569f09: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00569f0d: jne 0x569f16 */ if (!fZ) goto L_00569f16;
L_00569f0f:; BB(0x00569f0f);
    /* 00569f0f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00569f11: jmp 0x569fce */ goto L_00569fce;
L_00569f16:; BB(0x00569f16);
    /* 00569f16: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00569f19: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00569f1c: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00569f22: mov edx, dword ptr [ecx + 0x4f14] */ r_edx = R32((u32)(r_ecx+0x4f14u));
    /* 00569f28: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00569f2b: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00569f2f: je 0x569f42 */ if (fZ) goto L_00569f42;
L_00569f31:; BB(0x00569f31);
    /* 00569f31: cmp dword ptr [ebp - 0xc], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00569f35: je 0x569f70 */ if (fZ) goto L_00569f70;
L_00569f37:; BB(0x00569f37);
    /* 00569f37: cmp dword ptr [ebp - 0xc], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00569f3b: je 0x569f9e */ if (fZ) goto L_00569f9e;
L_00569f3d:; BB(0x00569f3d);
    /* 00569f3d: jmp 0x569fcc */ goto L_00569fcc;
L_00569f42:; BB(0x00569f42);
    /* 00569f42: cmp dword ptr [ebp + 8], 3 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00569f46: jg 0x569f4f */ if ((!fZ&&fS==fO)) goto L_00569f4f;
L_00569f48:; BB(0x00569f48);
    /* 00569f48: mov eax, 0x31226b */ r_eax = 0x31226bu;
    /* 00569f4d: jmp 0x569fce */ goto L_00569fce;
L_00569f4f:; BB(0x00569f4f);
    /* 00569f4f: cmp dword ptr [ebp + 8], 5 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00569f53: jg 0x569f5c */ if ((!fZ&&fS==fO)) goto L_00569f5c;
L_00569f55:; BB(0x00569f55);
    /* 00569f55: mov eax, 0x31226a */ r_eax = 0x31226au;
    /* 00569f5a: jmp 0x569fce */ goto L_00569fce;
L_00569f5c:; BB(0x00569f5c);
    /* 00569f5c: cmp dword ptr [ebp + 8], 8 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00569f60: jg 0x569f69 */ if ((!fZ&&fS==fO)) goto L_00569f69;
L_00569f62:; BB(0x00569f62);
    /* 00569f62: mov eax, 0x312269 */ r_eax = 0x312269u;
    /* 00569f67: jmp 0x569fce */ goto L_00569fce;
L_00569f69:; BB(0x00569f69);
    /* 00569f69: mov eax, 0x312268 */ r_eax = 0x312268u;
    /* 00569f6e: jmp 0x569fce */ goto L_00569fce;
L_00569f70:; BB(0x00569f70);
    /* 00569f70: cmp dword ptr [ebp + 8], 2 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00569f74: jg 0x569f7d */ if ((!fZ&&fS==fO)) goto L_00569f7d;
L_00569f76:; BB(0x00569f76);
    /* 00569f76: mov eax, 0x31226b */ r_eax = 0x31226bu;
    /* 00569f7b: jmp 0x569fce */ goto L_00569fce;
L_00569f7d:; BB(0x00569f7d);
    /* 00569f7d: cmp dword ptr [ebp + 8], 5 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00569f81: jg 0x569f8a */ if ((!fZ&&fS==fO)) goto L_00569f8a;
L_00569f83:; BB(0x00569f83);
    /* 00569f83: mov eax, 0x31226a */ r_eax = 0x31226au;
    /* 00569f88: jmp 0x569fce */ goto L_00569fce;
L_00569f8a:; BB(0x00569f8a);
    /* 00569f8a: cmp dword ptr [ebp + 8], 9 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00569f8e: jg 0x569f97 */ if ((!fZ&&fS==fO)) goto L_00569f97;
L_00569f90:; BB(0x00569f90);
    /* 00569f90: mov eax, 0x312269 */ r_eax = 0x312269u;
    /* 00569f95: jmp 0x569fce */ goto L_00569fce;
L_00569f97:; BB(0x00569f97);
    /* 00569f97: mov eax, 0x312268 */ r_eax = 0x312268u;
    /* 00569f9c: jmp 0x569fce */ goto L_00569fce;
L_00569f9e:; BB(0x00569f9e);
    /* 00569f9e: cmp dword ptr [ebp + 8], 2 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00569fa2: jg 0x569fab */ if ((!fZ&&fS==fO)) goto L_00569fab;
L_00569fa4:; BB(0x00569fa4);
    /* 00569fa4: mov eax, 0x31226b */ r_eax = 0x31226bu;
    /* 00569fa9: jmp 0x569fce */ goto L_00569fce;
L_00569fab:; BB(0x00569fab);
    /* 00569fab: cmp dword ptr [ebp + 8], 5 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00569faf: jg 0x569fb8 */ if ((!fZ&&fS==fO)) goto L_00569fb8;
L_00569fb1:; BB(0x00569fb1);
    /* 00569fb1: mov eax, 0x31226a */ r_eax = 0x31226au;
    /* 00569fb6: jmp 0x569fce */ goto L_00569fce;
L_00569fb8:; BB(0x00569fb8);
    /* 00569fb8: cmp dword ptr [ebp + 8], 9 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00569fbc: jg 0x569fc5 */ if ((!fZ&&fS==fO)) goto L_00569fc5;
L_00569fbe:; BB(0x00569fbe);
    /* 00569fbe: mov eax, 0x312269 */ r_eax = 0x312269u;
    /* 00569fc3: jmp 0x569fce */ goto L_00569fce;
L_00569fc5:; BB(0x00569fc5);
    /* 00569fc5: mov eax, 0x312268 */ r_eax = 0x312268u;
    /* 00569fca: jmp 0x569fce */ goto L_00569fce;
L_00569fcc:; BB(0x00569fcc);
    /* 00569fcc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00569fce:; BB(0x00569fce);
    /* 00569fce: mov esp, ebp */ r_esp = r_ebp;
    /* 00569fd0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00569fd1: ret 4 */ FN_RET(0x00569f00); r_esp += 8; return;
}

void f_00569fe0(void) /* sub_569FE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00569fe0);
    /* 00569fe0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00569fe1: mov ebp, esp */ r_ebp = r_esp;
    /* 00569fe3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00569fe6: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00569fe9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00569ff0: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 00569ff5: mov ecx, dword ptr [eax + 0x4f14] */ r_ecx = R32((u32)(r_eax+0x4f14u));
    /* 00569ffb: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00569ffe: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056a001: add edx, 0x24 */ {  u32 a = r_edx; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0056a004: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056a005: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056a008: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056a009: mov ecx, dword ptr [0x793444] */ r_ecx = R32((u32)(0x793444u));
    /* 0056a00f: call 0x5592a0 */ r_esp -= 4; W32(r_esp, 0x56a014u); f_005592a0();
    /* 0056a014: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0056a017: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056a01b: jne 0x56a024 */ if (!fZ) goto L_0056a024;
L_0056a01d:; BB(0x0056a01d);
    /* 0056a01d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056a020: mov byte ptr [ecx + 0x2f], 1 */ W8((u32)(r_ecx+0x2fu), 0x1u);
L_0056a024:; BB(0x0056a024);
    /* 0056a024: mov ecx, dword ptr [0x793440] */ r_ecx = R32((u32)(0x793440u));
    /* 0056a02a: call 0x561e20 */ r_esp -= 4; W32(r_esp, 0x56a02fu); f_00561e20();
    /* 0056a02f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056a032: cmp dword ptr [edx + 0x14], 1 */ {  u32 a = R32((u32)(r_edx+0x14u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056a036: jne 0x56a05c */ if (!fZ) goto L_0056a05c;
L_0056a038:; BB(0x0056a038);
    /* 0056a038: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 0056a03d: mov ecx, dword ptr [eax + 0x4f14] */ r_ecx = R32((u32)(r_eax+0x4f14u));
    /* 0056a043: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0056a046: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056a049: add edx, 0x24 */ {  u32 a = r_edx; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0056a04c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056a04d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056a050: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056a051: mov ecx, dword ptr [0x793444] */ r_ecx = R32((u32)(0x793444u));
    /* 0056a057: call 0x55a4e0 */ r_esp -= 4; W32(r_esp, 0x56a05cu); f_0055a4e0();
L_0056a05c:; BB(0x0056a05c);
    /* 0056a05c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056a05f: mov esp, ebp */ r_esp = r_ebp;
    /* 0056a061: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056a062: ret  */ FN_RET(0x00569fe0); r_esp += 4; return;
}

