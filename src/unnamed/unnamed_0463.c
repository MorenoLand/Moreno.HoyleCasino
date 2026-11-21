#include "protos.h"

void f_00463570(void) /* sub_463570 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00463570);
    /* 00463570: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00463571: mov ebp, esp */ r_ebp = r_esp;
    /* 00463573: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00463576: mov word ptr [ebp - 8], 0 */ W16((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0046357c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00463583: jmp 0x46358e */ goto L_0046358e;
L_00463585:; BB(0x00463585);
    /* 00463585: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00463588: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0046358b: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0046358e:; BB(0x0046358e);
    /* 0046358e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00463591: cmp ecx, dword ptr [ebp + 0x20] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x20u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00463594: jge 0x4635fb */ if ((fS==fO)) goto L_004635fb;
L_00463596:; BB(0x00463596);
    /* 00463596: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00463599: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0046359c: mov cx, word ptr [eax + edx*2] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2))) & 0xffffu);
    /* 004635a0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004635a1: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x4635a6u); f_00641290();
    /* 004635a6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004635a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004635aa: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004635ad: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004635b0: mov cx, word ptr [eax + edx*2] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2))) & 0xffffu);
    /* 004635b4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004635b5: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x4635bau); f_00641280();
    /* 004635ba: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004635bd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004635be: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 004635c1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004635c2: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004635c5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004635c6: call 0x642430 */ r_esp -= 4; W32(r_esp, 0x4635cbu); f_00642430();
    /* 004635cb: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004635ce: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004635d1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004635d3: je 0x4635f9 */ if (fZ) goto L_004635f9;
L_004635d5:; BB(0x004635d5);
    /* 004635d5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004635d8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004635db: mov cx, word ptr [eax + edx*2] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2))) & 0xffffu);
    /* 004635df: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004635e0: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 004635e3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004635e4: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004635e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004635e8: call 0x642210 */ r_esp -= 4; W32(r_esp, 0x4635edu); f_00642210();
    /* 004635ed: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004635f0: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 004635f3: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004635f6: mov dword ptr [ebp + 0x10], ecx */ W32((u32)(r_ebp+0x10u), r_ecx);
L_004635f9:; BB(0x004635f9);
    /* 004635f9: jmp 0x463585 */ goto L_00463585;
L_004635fb:; BB(0x004635fb);
    /* 004635fb: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 004635fe: cmp edx, dword ptr [ebp + 0x20] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x20u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00463601: jge 0x463608 */ if ((fS==fO)) goto L_00463608;
L_00463603:; BB(0x00463603);
    /* 00463603: jmp 0x463702 */ goto L_00463702;
L_00463608:; BB(0x00463608);
    /* 00463608: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0046360b: cmp eax, dword ptr [ebp + 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x20u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046360e: jle 0x4636ac */ if ((fZ||fS!=fO)) goto L_004636ac;
L_00463614:; BB(0x00463614);
    /* 00463614: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0046361b: jmp 0x463626 */ goto L_00463626;
L_0046361d:; BB(0x0046361d);
    /* 0046361d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00463620: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00463623: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00463626:; BB(0x00463626);
    /* 00463626: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00463629: cmp edx, dword ptr [ebp + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046362c: jge 0x4636aa */ if ((fS==fO)) goto L_004636aa;
L_0046362e:; BB(0x0046362e);
    /* 0046362e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00463631: cmp eax, dword ptr [ebp + 0x24] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x24u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00463634: jge 0x463638 */ if ((fS==fO)) goto L_00463638;
L_00463636:; BB(0x00463636);
    /* 00463636: jmp 0x46361d */ goto L_0046361d;
L_00463638:; BB(0x00463638);
    /* 00463638: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046363b: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0046363e: mov ax, word ptr [edx + ecx*2] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2))) & 0xffffu);
    /* 00463642: mov word ptr [ebp - 8], ax */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_eax);
    /* 00463646: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00463649: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0046364c: mov ax, word ptr [edx + ecx*2] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2))) & 0xffffu);
    /* 00463650: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00463651: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00463654: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00463655: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00463658: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00463659: call 0x642210 */ r_esp -= 4; W32(r_esp, 0x46365eu); f_00642210();
    /* 0046365e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00463661: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00463664: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00463665: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 00463668: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00463669: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 0046366c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046366d: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 00463670: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00463671: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00463674: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00463675: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00463678: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0046367b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046367c: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0046367f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00463680: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00463683: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00463684: call 0x463570 */ r_esp -= 4; W32(r_esp, 0x463689u); f_00463570();
    /* 00463689: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046368c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046368f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00463690: mov ax, word ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 00463694: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00463695: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00463698: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00463699: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0046369c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046369d: call 0x642130 */ r_esp -= 4; W32(r_esp, 0x4636a2u); f_00642130();
    /* 004636a2: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004636a5: jmp 0x46361d */ goto L_0046361d;
L_004636aa:; BB(0x004636aa);
    /* 004636aa: jmp 0x463702 */ goto L_00463702;
L_004636ac:; BB(0x004636ac);
    /* 004636ac: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 004636af: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004636b0: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 004636b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004636b4: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004636b7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004636b8: call 0x462da0 */ r_esp -= 4; W32(r_esp, 0x4636bdu); f_00462da0();
    /* 004636bd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004636c0: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 004636c3: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004636c7: je 0x4636e6 */ if (fZ) goto L_004636e6;
L_004636c9:; BB(0x004636c9);
    /* 004636c9: cmp dword ptr [ebp - 0xc], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004636cd: je 0x4636d7 */ if (fZ) goto L_004636d7;
L_004636cf:; BB(0x004636cf);
    /* 004636cf: cmp dword ptr [ebp - 0xc], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004636d3: je 0x4636f5 */ if (fZ) goto L_004636f5;
L_004636d5:; BB(0x004636d5);
    /* 004636d5: jmp 0x463702 */ goto L_00463702;
L_004636d7:; BB(0x004636d7);
    /* 004636d7: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 004636da: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 004636dc: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004636df: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 004636e2: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 004636e4: jmp 0x463702 */ goto L_00463702;
L_004636e6:; BB(0x004636e6);
    /* 004636e6: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 004636e9: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 004636eb: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004636ee: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 004636f1: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 004636f3: jmp 0x463702 */ goto L_00463702;
L_004636f5:; BB(0x004636f5);
    /* 004636f5: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 004636f8: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 004636fa: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004636fd: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 00463700: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
L_00463702:; BB(0x00463702);
    /* 00463702: mov esp, ebp */ r_esp = r_ebp;
    /* 00463704: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00463705: ret  */ FN_RET(0x00463570); r_esp += 4; return;
}

void f_00463710(void) /* sub_463710 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00463710);
    /* 00463710: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00463711: mov ebp, esp */ r_ebp = r_esp;
    /* 00463713: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00463714: cmp dword ptr [ebp + 0xc], 5 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00463718: je 0x46371e */ if (fZ) goto L_0046371e;
L_0046371a:; BB(0x0046371a);
    /* 0046371a: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0046371c: jmp 0x46375a */ goto L_0046375a;
L_0046371e:; BB(0x0046371e);
    /* 0046371e: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00463720: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00463723: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00463724: call 0x463760 */ r_esp -= 4; W32(r_esp, 0x463729u); f_00463760();
    /* 00463729: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046372c: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0046372f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00463731: je 0x463750 */ if (fZ) goto L_00463750;
L_00463733:; BB(0x00463733);
    /* 00463733: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00463736: mov ax, word ptr [edx] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx))) & 0xffffu);
    /* 00463739: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046373a: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x46373fu); f_00641280();
    /* 0046373f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00463742: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00463745: jne 0x463750 */ if (!fZ) goto L_00463750;
L_00463747:; BB(0x00463747);
    /* 00463747: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0046374e: jmp 0x463757 */ goto L_00463757;
L_00463750:; BB(0x00463750);
    /* 00463750: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_00463757:; BB(0x00463757);
    /* 00463757: mov al, byte ptr [ebp - 4] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffffcu))) & 0xffu);
L_0046375a:; BB(0x0046375a);
    /* 0046375a: mov esp, ebp */ r_esp = r_ebp;
    /* 0046375c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046375d: ret  */ FN_RET(0x00463710); r_esp += 4; return;
}

void f_00463760(void) /* sub_463760 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00463760);
    /* 00463760: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00463761: mov ebp, esp */ r_ebp = r_esp;
    /* 00463763: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00463764: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00463767: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00463768: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0046376b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046376c: call 0x4638a0 */ r_esp -= 4; W32(r_esp, 0x463771u); f_004638a0();
    /* 00463771: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00463774: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00463777: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00463779: je 0x46379b */ if (fZ) goto L_0046379b;
L_0046377b:; BB(0x0046377b);
    /* 0046377b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0046377e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046377f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00463782: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00463783: call 0x463840 */ r_esp -= 4; W32(r_esp, 0x463788u); f_00463840();
    /* 00463788: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046378b: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0046378e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00463790: je 0x46379b */ if (fZ) goto L_0046379b;
L_00463792:; BB(0x00463792);
    /* 00463792: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00463799: jmp 0x4637a2 */ goto L_004637a2;
L_0046379b:; BB(0x0046379b);
    /* 0046379b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_004637a2:; BB(0x004637a2);
    /* 004637a2: mov al, byte ptr [ebp - 4] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffffcu))) & 0xffu);
    /* 004637a5: mov esp, ebp */ r_esp = r_ebp;
    /* 004637a7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004637a8: ret  */ FN_RET(0x00463760); r_esp += 4; return;
}

void f_004637b0(void) /* sub_4637B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004637b0);
    /* 004637b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004637b1: mov ebp, esp */ r_ebp = r_esp;
    /* 004637b3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004637b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004637b7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004637ba: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004637bb: call 0x463aa0 */ r_esp -= 4; W32(r_esp, 0x4637c0u); f_00463aa0();
    /* 004637c0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004637c3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004637c5: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004637c8: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 004637cb: mov al, dl */ r_eax = (r_eax & 0xffffff00u) | (((u8)r_edx) & 0xffu);
    /* 004637cd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004637ce: ret  */ FN_RET(0x004637b0); r_esp += 4; return;
}

void f_004637d0(void) /* sub_4637D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004637d0);
    /* 004637d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004637d1: mov ebp, esp */ r_ebp = r_esp;
    /* 004637d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004637d4: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004637d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004637d8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004637db: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004637dc: call 0x463940 */ r_esp -= 4; W32(r_esp, 0x4637e1u); f_00463940();
    /* 004637e1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004637e4: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004637e7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004637e9: je 0x463834 */ if (fZ) goto L_00463834;
L_004637eb:; BB(0x004637eb);
    /* 004637eb: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004637f2: jmp 0x4637fd */ goto L_004637fd;
L_004637f4:; BB(0x004637f4);
    /* 004637f4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004637f7: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004637fa: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_004637fd:; BB(0x004637fd);
    /* 004637fd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00463800: cmp ecx, dword ptr [ebp + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00463803: jge 0x463834 */ if ((fS==fO)) goto L_00463834;
L_00463805:; BB(0x00463805);
    /* 00463805: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00463808: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00463809: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046380c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0046380f: mov dx, word ptr [ecx + eax*2] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2))) & 0xffffu);
    /* 00463813: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00463814: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x463819u); f_00641280();
    /* 00463819: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046381c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046381d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00463820: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00463821: call 0x463a40 */ r_esp -= 4; W32(r_esp, 0x463826u); f_00463a40();
    /* 00463826: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00463829: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046382c: jne 0x463832 */ if (!fZ) goto L_00463832;
L_0046382e:; BB(0x0046382e);
    /* 0046382e: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00463830: jmp 0x463836 */ goto L_00463836;
L_00463832:; BB(0x00463832);
    /* 00463832: jmp 0x4637f4 */ goto L_004637f4;
L_00463834:; BB(0x00463834);
    /* 00463834: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_00463836:; BB(0x00463836);
    /* 00463836: mov esp, ebp */ r_esp = r_ebp;
    /* 00463838: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00463839: ret  */ FN_RET(0x004637d0); r_esp += 4; return;
}

void f_00463840(void) /* sub_463840 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00463840);
    /* 00463840: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00463841: mov ebp, esp */ r_ebp = r_esp;
    /* 00463843: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00463846: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00463849: mov cx, word ptr [eax] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax))) & 0xffffu);
    /* 0046384c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046384d: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x463852u); f_00641290();
    /* 00463852: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00463855: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00463858: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0046385f: jmp 0x46386a */ goto L_0046386a;
L_00463861:; BB(0x00463861);
    /* 00463861: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00463864: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00463867: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0046386a:; BB(0x0046386a);
    /* 0046386a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046386d: cmp eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00463870: jge 0x463894 */ if ((fS==fO)) goto L_00463894;
L_00463872:; BB(0x00463872);
    /* 00463872: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00463875: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00463878: mov ax, word ptr [edx + ecx*2] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2))) & 0xffffu);
    /* 0046387c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046387d: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x463882u); f_00641290();
    /* 00463882: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00463885: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00463888: jne 0x46388e */ if (!fZ) goto L_0046388e;
L_0046388a:; BB(0x0046388a);
    /* 0046388a: jmp 0x463861 */ goto L_00463861;
L_0046388e:; BB(0x0046388e);
    /* 0046388e: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00463890: jmp 0x463896 */ goto L_00463896;
L_00463894:; BB(0x00463894);
    /* 00463894: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_00463896:; BB(0x00463896);
    /* 00463896: mov esp, ebp */ r_esp = r_ebp;
    /* 00463898: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00463899: ret  */ FN_RET(0x00463840); r_esp += 4; return;
}

void f_004638a0(void) /* sub_4638A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004638a0);
    /* 004638a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004638a1: mov ebp, esp */ r_ebp = r_esp;
    /* 004638a3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004638a6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004638a9: mov cx, word ptr [eax] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax))) & 0xffffu);
    /* 004638ac: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004638ad: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x4638b2u); f_00641280();
    /* 004638b2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004638b5: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004638b8: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004638bf: jmp 0x4638ca */ goto L_004638ca;
L_004638c1:; BB(0x004638c1);
    /* 004638c1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004638c4: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004638c7: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_004638ca:; BB(0x004638ca);
    /* 004638ca: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004638cd: cmp eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004638d0: jge 0x46392b */ if ((fS==fO)) goto L_0046392b;
L_004638d2:; BB(0x004638d2);
    /* 004638d2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004638d5: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004638d8: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004638db: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004638de: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004638e1: mov cx, word ptr [eax + edx*2] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2))) & 0xffffu);
    /* 004638e5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004638e6: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x4638ebu); f_00641280();
    /* 004638eb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004638ee: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004638f1: je 0x463921 */ if (fZ) goto L_00463921;
L_004638f3:; BB(0x004638f3);
    /* 004638f3: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 004638f6: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004638f9: cmp dword ptr [ebp - 4], edx */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004638fc: jne 0x463925 */ if (!fZ) goto L_00463925;
L_004638fe:; BB(0x004638fe);
    /* 004638fe: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00463901: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00463904: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00463907: jne 0x463925 */ if (!fZ) goto L_00463925;
L_00463909:; BB(0x00463909);
    /* 00463909: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046390c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0046390f: mov ax, word ptr [edx + ecx*2] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2))) & 0xffffu);
    /* 00463913: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00463914: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x463919u); f_00641280();
    /* 00463919: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046391c: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046391f: jne 0x463925 */ if (!fZ) goto L_00463925;
L_00463921:; BB(0x00463921);
    /* 00463921: jmp 0x4638c1 */ goto L_004638c1;
L_00463925:; BB(0x00463925);
    /* 00463925: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00463927: jmp 0x46392d */ goto L_0046392d;
L_0046392b:; BB(0x0046392b);
    /* 0046392b: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_0046392d:; BB(0x0046392d);
    /* 0046392d: mov esp, ebp */ r_esp = r_ebp;
    /* 0046392f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00463930: ret  */ FN_RET(0x004638a0); r_esp += 4; return;
}

void f_00463940(void) /* sub_463940 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00463940);
    /* 00463940: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00463941: mov ebp, esp */ r_ebp = r_esp;
    /* 00463943: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00463946: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00463947: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0046394a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046394b: call 0x463aa0 */ r_esp -= 4; W32(r_esp, 0x463950u); f_00463aa0();
    /* 00463950: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00463953: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00463955: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00463958: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0046395b: mov al, dl */ r_eax = (r_eax & 0xffffff00u) | (((u8)r_edx) & 0xffu);
    /* 0046395d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046395e: ret  */ FN_RET(0x00463940); r_esp += 4; return;
}

void f_00463960(void) /* sub_463960 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00463960);
    /* 00463960: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00463961: mov ebp, esp */ r_ebp = r_esp;
    /* 00463963: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00463966: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0046396d: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00463974: jmp 0x46397f */ goto L_0046397f;
L_00463976:; BB(0x00463976);
    /* 00463976: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00463979: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0046397c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0046397f:; BB(0x0046397f);
    /* 0046397f: cmp dword ptr [ebp - 4], 0xe */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00463983: jg 0x4639a9 */ if ((!fZ&&fS==fO)) goto L_004639a9;
L_00463985:; BB(0x00463985);
    /* 00463985: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00463988: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00463989: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046398c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046398d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00463990: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00463991: call 0x463a40 */ r_esp -= 4; W32(r_esp, 0x463996u); f_00463a40();
    /* 00463996: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00463999: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046399c: jne 0x4639a7 */ if (!fZ) goto L_004639a7;
L_0046399e:; BB(0x0046399e);
    /* 0046399e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004639a1: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004639a4: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_004639a7:; BB(0x004639a7);
    /* 004639a7: jmp 0x463976 */ goto L_00463976;
L_004639a9:; BB(0x004639a9);
    /* 004639a9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004639ab: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004639af: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 004639b2: mov esp, ebp */ r_esp = r_ebp;
    /* 004639b4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004639b5: ret  */ FN_RET(0x00463960); r_esp += 4; return;
}

void f_004639c0(void) /* sub_4639C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004639c0);
    /* 004639c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004639c1: mov ebp, esp */ r_ebp = r_esp;
    /* 004639c3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004639c6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004639c7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004639ca: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004639cb: call 0x463aa0 */ r_esp -= 4; W32(r_esp, 0x4639d0u); f_00463aa0();
    /* 004639d0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004639d3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004639d5: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004639d8: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 004639db: mov al, dl */ r_eax = (r_eax & 0xffffff00u) | (((u8)r_edx) & 0xffu);
    /* 004639dd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004639de: ret  */ FN_RET(0x004639c0); r_esp += 4; return;
}

void f_004639e0(void) /* sub_4639E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004639e0);
    /* 004639e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004639e1: mov ebp, esp */ r_ebp = r_esp;
    /* 004639e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004639e4: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004639e6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004639e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004639ea: call 0x4639c0 */ r_esp -= 4; W32(r_esp, 0x4639efu); f_004639c0();
    /* 004639ef: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004639f2: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004639f5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004639f7: jne 0x4639fd */ if (!fZ) goto L_004639fd;
L_004639f9:; BB(0x004639f9);
    /* 004639f9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004639fb: jmp 0x463a37 */ goto L_00463a37;
L_004639fd:; BB(0x004639fd);
    /* 004639fd: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00463a04: jmp 0x463a0f */ goto L_00463a0f;
L_00463a06:; BB(0x00463a06);
    /* 00463a06: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00463a09: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00463a0c: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00463a0f:; BB(0x00463a0f);
    /* 00463a0f: cmp dword ptr [ebp - 4], 0xf */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00463a13: jge 0x463a35 */ if ((fS==fO)) goto L_00463a35;
L_00463a15:; BB(0x00463a15);
    /* 00463a15: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00463a18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00463a19: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00463a1c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00463a1d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00463a20: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00463a21: call 0x463a40 */ r_esp -= 4; W32(r_esp, 0x463a26u); f_00463a40();
    /* 00463a26: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00463a29: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00463a2c: jne 0x463a33 */ if (!fZ) goto L_00463a33;
L_00463a2e:; BB(0x00463a2e);
    /* 00463a2e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00463a31: jmp 0x463a37 */ goto L_00463a37;
L_00463a33:; BB(0x00463a33);
    /* 00463a33: jmp 0x463a06 */ goto L_00463a06;
L_00463a35:; BB(0x00463a35);
    /* 00463a35: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00463a37:; BB(0x00463a37);
    /* 00463a37: mov esp, ebp */ r_esp = r_ebp;
    /* 00463a39: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00463a3a: ret  */ FN_RET(0x004639e0); r_esp += 4; return;
}

void f_00463a40(void) /* sub_463A40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00463a40);
    /* 00463a40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00463a41: mov ebp, esp */ r_ebp = r_esp;
    /* 00463a43: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00463a46: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00463a4d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00463a54: jmp 0x463a5f */ goto L_00463a5f;
L_00463a56:; BB(0x00463a56);
    /* 00463a56: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00463a59: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00463a5c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00463a5f:; BB(0x00463a5f);
    /* 00463a5f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00463a62: cmp ecx, dword ptr [ebp + 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00463a65: jge 0x463a8a */ if ((fS==fO)) goto L_00463a8a;
L_00463a67:; BB(0x00463a67);
    /* 00463a67: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00463a6a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00463a6d: mov cx, word ptr [eax + edx*2] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2))) & 0xffffu);
    /* 00463a71: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00463a72: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x463a77u); f_00641280();
    /* 00463a77: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00463a7a: cmp eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00463a7d: jne 0x463a88 */ if (!fZ) goto L_00463a88;
L_00463a7f:; BB(0x00463a7f);
    /* 00463a7f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00463a82: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00463a85: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_00463a88:; BB(0x00463a88);
    /* 00463a88: jmp 0x463a56 */ goto L_00463a56;
L_00463a8a:; BB(0x00463a8a);
    /* 00463a8a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00463a8d: mov esp, ebp */ r_esp = r_ebp;
    /* 00463a8f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00463a90: ret  */ FN_RET(0x00463a40); r_esp += 4; return;
}

void f_00463aa0(void) /* sub_463AA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00463aa0);
    /* 00463aa0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00463aa1: mov ebp, esp */ r_ebp = r_esp;
    /* 00463aa3: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00463aa6: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
    /* 00463aad: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 00463ab4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00463abb: jmp 0x463ac6 */ goto L_00463ac6;
L_00463abd:; BB(0x00463abd);
    /* 00463abd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00463ac0: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00463ac3: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00463ac6:; BB(0x00463ac6);
    /* 00463ac6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00463ac9: cmp ecx, dword ptr [ebp + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00463acc: jge 0x463b45 */ if ((fS==fO)) goto L_00463b45;
L_00463ace:; BB(0x00463ace);
    /* 00463ace: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00463ad1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00463ad4: mov cx, word ptr [eax + edx*2] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2))) & 0xffffu);
    /* 00463ad8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00463ad9: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x463adeu); f_00641280();
    /* 00463ade: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00463ae1: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00463ae4: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 00463aeb: jmp 0x463af6 */ goto L_00463af6;
L_00463aed:; BB(0x00463aed);
    /* 00463aed: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00463af0: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00463af3: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
L_00463af6:; BB(0x00463af6);
    /* 00463af6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00463af9: cmp eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00463afc: jge 0x463b2b */ if ((fS==fO)) goto L_00463b2b;
L_00463afe:; BB(0x00463afe);
    /* 00463afe: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00463b01: cmp ecx, dword ptr [ebp - 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00463b04: jne 0x463b08 */ if (!fZ) goto L_00463b08;
L_00463b06:; BB(0x00463b06);
    /* 00463b06: jmp 0x463aed */ goto L_00463aed;
L_00463b08:; BB(0x00463b08);
    /* 00463b08: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00463b0b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00463b0e: mov cx, word ptr [eax + edx*2] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2))) & 0xffffu);
    /* 00463b12: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00463b13: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x463b18u); f_00641280();
    /* 00463b18: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00463b1b: cmp dword ptr [ebp - 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00463b1e: jne 0x463b29 */ if (!fZ) goto L_00463b29;
L_00463b20:; BB(0x00463b20);
    /* 00463b20: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00463b23: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00463b26: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_00463b29:; BB(0x00463b29);
    /* 00463b29: jmp 0x463aed */ goto L_00463aed;
L_00463b2b:; BB(0x00463b2b);
    /* 00463b2b: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00463b2e: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00463b31: jle 0x463b39 */ if ((fZ||fS!=fO)) goto L_00463b39;
L_00463b33:; BB(0x00463b33);
    /* 00463b33: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00463b36: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_00463b39:; BB(0x00463b39);
    /* 00463b39: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
    /* 00463b40: jmp 0x463abd */ goto L_00463abd;
L_00463b45:; BB(0x00463b45);
    /* 00463b45: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00463b48: mov esp, ebp */ r_esp = r_ebp;
    /* 00463b4a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00463b4b: ret  */ FN_RET(0x00463aa0); r_esp += 4; return;
}

void f_00463b90(void) /* sub_463B90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00463b90);
    /* 00463b90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00463b91: mov ebp, esp */ r_ebp = r_esp;
    /* 00463b93: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00463b95: push 0x69f3db */ { u32 v = 0x69f3dbu; r_esp -= 4; W32(r_esp, v); }
    /* 00463b9a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00463ba0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00463ba1: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00463ba4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00463ba9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00463bab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00463bac: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00463baf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00463bb5: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00463bb8: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00463bbb: cmp dword ptr [eax + 8], 0 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00463bbf: jne 0x463c08 */ if (!fZ) goto L_00463c08;
L_00463bc1:; BB(0x00463bc1);
    /* 00463bc1: push 0x190 */ { u32 v = 0x190u; r_esp -= 4; W32(r_esp, v); }
    /* 00463bc6: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x463bcbu); f_00686d82();
    /* 00463bcb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00463bce: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00463bd1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00463bd8: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00463bdc: je 0x463beb */ if (fZ) goto L_00463beb;
L_00463bde:; BB(0x00463bde);
    /* 00463bde: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00463be1: call 0x463b50 */ r_esp -= 4; W32(r_esp, 0x463be6u); f_00463b50();
    /* 00463be6: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00463be9: jmp 0x463bf2 */ goto L_00463bf2;
L_00463beb:; BB(0x00463beb);
    /* 00463beb: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_00463bf2:; BB(0x00463bf2);
    /* 00463bf2: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00463bf5: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00463bf8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00463bff: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00463c02: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00463c05: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
L_00463c08:; BB(0x00463c08);
    /* 00463c08: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00463c0b: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00463c0e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00463c11: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00463c14: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00463c16: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00463c19: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x463c1bu); call_ind(t); }
    /* 00463c1b: push 0x186a1 */ { u32 v = 0x186a1u; r_esp -= 4; W32(r_esp, v); }
    /* 00463c20: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00463c23: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 00463c26: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x463c2bu); f_005eaf00();
    /* 00463c2b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00463c2d: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00463c30: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00463c33: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00463c36: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 00463c39: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00463c3b: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00463c41: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x463c43u); call_ind(t); }
    /* 00463c43: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00463c46: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00463c49: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00463c4c: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00463c4f: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00463c51: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00463c54: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x463c56u); call_ind(t); }
    /* 00463c56: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00463c59: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00463c60: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00463c61: mov esp, ebp */ r_esp = r_ebp;
    /* 00463c63: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00463c64: ret  */ FN_RET(0x00463b90); r_esp += 4; return;
}

void f_00463d40(void) /* sub_463D40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00463d40);
    /* 00463d40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00463d41: mov ebp, esp */ r_ebp = r_esp;
    /* 00463d43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00463d44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00463d47: push 0x186a1 */ { u32 v = 0x186a1u; r_esp -= 4; W32(r_esp, v); }
    /* 00463d4c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00463d4f: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00463d52: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x463d57u); f_005eaf00();
    /* 00463d57: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00463d5a: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 00463d5d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00463d5e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00463d61: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00463d64: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00463d67: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00463d6a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00463d6c: mov ecx, eax */ r_ecx = r_eax;
    /* 00463d6e: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00463d74: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x463d76u); call_ind(t); }
    /* 00463d76: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 00463d78: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00463d7b: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00463d7e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00463d81: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00463d84: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00463d86: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00463d89: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x463d8bu); call_ind(t); }
    /* 00463d8b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00463d8e: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00463d91: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00463d94: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00463d97: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00463d99: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00463d9c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x463d9eu); call_ind(t); }
    /* 00463d9e: mov esp, ebp */ r_esp = r_ebp;
    /* 00463da0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00463da1: ret  */ FN_RET(0x00463d40); r_esp += 4; return;
}

void f_00463db0(void) /* sub_463DB0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00463db0);
    /* 00463db0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00463db1: mov ebp, esp */ r_ebp = r_esp;
    /* 00463db3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00463db4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00463db7: push 0x186a1 */ { u32 v = 0x186a1u; r_esp -= 4; W32(r_esp, v); }
    /* 00463dbc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00463dbf: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00463dc2: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x463dc7u); f_005eaf00();
    /* 00463dc7: push 0x35 */ { u32 v = 0x35u; r_esp -= 4; W32(r_esp, v); }
    /* 00463dc9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00463dcc: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00463dcf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00463dd2: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00463dd5: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00463dd7: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00463ddd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x463ddfu); call_ind(t); }
    /* 00463ddf: movzx ecx, byte ptr [ebp + 8] */ r_ecx = (u32)R8((u32)(r_ebp+0x8u));
    /* 00463de3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00463de5: je 0x463dfe */ if (fZ) goto L_00463dfe;
L_00463de7:; BB(0x00463de7);
    /* 00463de7: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 00463de9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00463dec: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00463def: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00463df2: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 00463df5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00463df7: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00463dfa: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x463dfcu); call_ind(t); }
    /* 00463dfc: jmp 0x463e13 */ goto L_00463e13;
L_00463dfe:; BB(0x00463dfe);
    /* 00463dfe: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00463e00: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00463e03: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00463e06: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00463e09: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00463e0c: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00463e0e: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00463e11: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x463e13u); call_ind(t); }
L_00463e13:; BB(0x00463e13);
    /* 00463e13: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00463e16: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00463e19: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00463e1c: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00463e1f: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00463e21: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00463e24: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x463e26u); call_ind(t); }
    /* 00463e26: mov esp, ebp */ r_esp = r_ebp;
    /* 00463e28: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00463e29: ret 4 */ FN_RET(0x00463db0); r_esp += 8; return;
}

void f_00463f80(void) /* sub_463F80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00463f80);
    /* 00463f80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00463f81: mov ebp, esp */ r_ebp = r_esp;
    /* 00463f83: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00463f86: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00463f89: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00463f8c: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 00463f8f: mov edx, dword ptr [0x7907a4] */ r_edx = R32((u32)(0x7907a4u));
    /* 00463f95: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 00463f98: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00463f9a: jl 0x463fb0 */ if ((fS!=fO)) goto L_00463fb0;
L_00463f9c:; BB(0x00463f9c);
    /* 00463f9c: mov ecx, dword ptr [0x7913c8] */ r_ecx = R32((u32)(0x7913c8u));
    /* 00463fa2: mov dl, byte ptr [ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 00463fa4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00463fa7: mov byte ptr [eax], dl */ W8((u32)(r_eax), (u8)r_edx);
    /* 00463fa9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00463fac: jmp 0x463fc7 */ goto L_00463fc7;
L_00463fb0:; BB(0x00463fb0);
    /* 00463fb0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00463fb3: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 00463fb6: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00463fb9: mov byte ptr [ebp - 1], dl */ W8((u32)(r_ebp+0xffffffffu), (u8)r_edx);
    /* 00463fbc: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00463fbf: mov cl, byte ptr [ebp - 1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffffu))) & 0xffu);
    /* 00463fc2: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 00463fc4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
L_00463fc7:; BB(0x00463fc7);
    /* 00463fc7: mov esp, ebp */ r_esp = r_ebp;
    /* 00463fc9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00463fca: ret 4 */ FN_RET(0x00463f80); r_esp += 8; return;
}

void f_00463fd0(void) /* sub_463FD0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00463fd0);
    /* 00463fd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00463fd1: mov ebp, esp */ r_ebp = r_esp;
    /* 00463fd3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00463fd6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00463fd9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00463fdc: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 00463fdf: mov edx, dword ptr [0x79077c] */ r_edx = R32((u32)(0x79077cu));
    /* 00463fe5: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 00463fe8: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00463fea: jne 0x464000 */ if (!fZ) goto L_00464000;
L_00463fec:; BB(0x00463fec);
    /* 00463fec: mov ecx, dword ptr [0x7913e0] */ r_ecx = R32((u32)(0x7913e0u));
    /* 00463ff2: mov dl, byte ptr [ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 00463ff4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00463ff7: mov byte ptr [eax], dl */ W8((u32)(r_eax), (u8)r_edx);
    /* 00463ff9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00463ffc: jmp 0x46403d */ goto L_0046403d;
L_00464000:; BB(0x00464000);
    /* 00464000: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00464003: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 00464006: mov eax, dword ptr [0x7907a4] */ r_eax = R32((u32)(0x7907a4u));
    /* 0046400b: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 0046400e: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00464010: jl 0x464026 */ if ((fS!=fO)) goto L_00464026;
L_00464012:; BB(0x00464012);
    /* 00464012: mov edx, dword ptr [0x7913b4] */ r_edx = R32((u32)(0x7913b4u));
    /* 00464018: mov al, byte ptr [edx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 0046401a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0046401d: mov byte ptr [ecx], al */ W8((u32)(r_ecx), (u8)r_eax);
    /* 0046401f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00464022: jmp 0x46403d */ goto L_0046403d;
L_00464026:; BB(0x00464026);
    /* 00464026: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00464029: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 0046402c: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0046402f: mov byte ptr [ebp - 1], al */ W8((u32)(r_ebp+0xffffffffu), (u8)r_eax);
    /* 00464032: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00464035: mov dl, byte ptr [ebp - 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffffu))) & 0xffu);
    /* 00464038: mov byte ptr [ecx], dl */ W8((u32)(r_ecx), (u8)r_edx);
    /* 0046403a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
L_0046403d:; BB(0x0046403d);
    /* 0046403d: mov esp, ebp */ r_esp = r_ebp;
    /* 0046403f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00464040: ret 4 */ FN_RET(0x00463fd0); r_esp += 8; return;
}

