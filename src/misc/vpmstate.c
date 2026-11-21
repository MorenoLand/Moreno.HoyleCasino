#include "protos.h"

void f_00568450(void) /* vpmstate::func_00568450 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00568450);
    /* 00568450: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00568451: mov ebp, esp */ r_ebp = r_esp;
    /* 00568453: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00568456: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00568459: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0056845c: cmp dword ptr [eax + 0x34], 0 */ {  u32 a = R32((u32)(r_eax+0x34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00568460: jne 0x568476 */ if (!fZ) goto L_00568476;
L_00568462:; BB(0x00568462);
    /* 00568462: push 0x41 */ { u32 v = 0x41u; r_esp -= 4; W32(r_esp, v); }
    /* 00568464: push 0x6ca1a4 */ { u32 v = 0x6ca1a4u; r_esp -= 4; W32(r_esp, v); }
    /* 00568469: push 0x6ca198 */ { u32 v = 0x6ca198u; r_esp -= 4; W32(r_esp, v); }
    /* 0056846e: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x568473u); f_005e9f20();
    /* 00568473: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00568476:; BB(0x00568476);
    /* 00568476: mov dword ptr [ebp - 0x20], 1 */ W32((u32)(r_ebp+0xffffffe0u), 0x1u);
    /* 0056847d: mov dword ptr [ebp - 0x1c], 5 */ W32((u32)(r_ebp+0xffffffe4u), 0x5u);
    /* 00568484: mov dword ptr [ebp - 0x18], 0xa */ W32((u32)(r_ebp+0xffffffe8u), 0xau);
    /* 0056848b: mov dword ptr [ebp - 0x14], 0x19 */ W32((u32)(r_ebp+0xffffffecu), 0x19u);
    /* 00568492: mov dword ptr [ebp - 0x10], 0x32 */ W32((u32)(r_ebp+0xfffffff0u), 0x32u);
    /* 00568499: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005684a0: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005684a3: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 005684a6: call 0x56b910 */ r_esp -= 4; W32(r_esp, 0x5684abu); f_0056b910();
    /* 005684ab: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005684ae: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 005684b5: jmp 0x5684c0 */ goto L_005684c0;
L_005684b7:; BB(0x005684b7);
    /* 005684b7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005684ba: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005684bd: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005684c0:; BB(0x005684c0);
    /* 005684c0: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005684c4: jl 0x568500 */ if ((fS!=fO)) goto L_00568500;
L_005684c6:; BB(0x005684c6);
    /* 005684c6: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 005684c9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005684ca: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005684cd: mov eax, dword ptr [ebp + edx*4 - 0x20] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffffe0u));
    /* 005684d1: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005684d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005684d5: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005684d8: mov ecx, dword ptr [ecx + 0x34] */ r_ecx = R32((u32)(r_ecx+0x34u));
    /* 005684db: call 0x56a7a0 */ r_esp -= 4; W32(r_esp, 0x5684e0u); f_0056a7a0();
    /* 005684e0: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005684e3: call 0x56a5d0 */ r_esp -= 4; W32(r_esp, 0x5684e8u); f_0056a5d0();
    /* 005684e8: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005684eb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005684ed: je 0x5684fe */ if (fZ) goto L_005684fe;
L_005684ef:; BB(0x005684ef);
    /* 005684ef: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005684f2: mov ecx, dword ptr [ebp + eax*4 - 0x20] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffe0u));
    /* 005684f6: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005684f9: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005684fc: jmp 0x568500 */ goto L_00568500;
L_005684fe:; BB(0x005684fe);
    /* 005684fe: jmp 0x5684b7 */ goto L_005684b7;
L_00568500:; BB(0x00568500);
    /* 00568500: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00568503: cmp edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00568506: jge 0x56851b */ if ((fS==fO)) goto L_0056851b;
L_00568508:; BB(0x00568508);
    /* 00568508: mov al, byte ptr [ebp + 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 0056850b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056850c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056850f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00568510: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00568513: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 00568516: call 0x56a7a0 */ r_esp -= 4; W32(r_esp, 0x56851bu); f_0056a7a0();
L_0056851b:; BB(0x0056851b);
    /* 0056851b: mov esp, ebp */ r_esp = r_ebp;
    /* 0056851d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056851e: ret 4 */ FN_RET(0x00568450); r_esp += 8; return;
}

void f_00568530(void) /* vpmstate::func_00568530 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00568530);
    /* 00568530: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00568531: mov ebp, esp */ r_ebp = r_esp;
    /* 00568533: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00568536: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00568539: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056853c: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0056853f: call 0x56b910 */ r_esp -= 4; W32(r_esp, 0x568544u); f_0056b910();
    /* 00568544: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00568547: mov byte ptr [ebp - 5], 0 */ W8((u32)(r_ebp+0xfffffffbu), 0x0u);
    /* 0056854b: cmp dword ptr [ebp + 8], 1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056854f: je 0x56857d */ if (fZ) goto L_0056857d;
L_00568551:; BB(0x00568551);
    /* 00568551: cmp dword ptr [ebp + 8], 5 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00568555: je 0x56857d */ if (fZ) goto L_0056857d;
L_00568557:; BB(0x00568557);
    /* 00568557: cmp dword ptr [ebp + 8], 0xa */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056855b: je 0x56857d */ if (fZ) goto L_0056857d;
L_0056855d:; BB(0x0056855d);
    /* 0056855d: cmp dword ptr [ebp + 8], 0x19 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00568561: je 0x56857d */ if (fZ) goto L_0056857d;
L_00568563:; BB(0x00568563);
    /* 00568563: cmp dword ptr [ebp + 8], 0x32 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00568567: je 0x56857d */ if (fZ) goto L_0056857d;
L_00568569:; BB(0x00568569);
    /* 00568569: push 0x5d */ { u32 v = 0x5du; r_esp -= 4; W32(r_esp, v); }
    /* 0056856b: push 0x6ca1a4 */ { u32 v = 0x6ca1a4u; r_esp -= 4; W32(r_esp, v); }
    /* 00568570: push 0x6ca1c0 */ { u32 v = 0x6ca1c0u; r_esp -= 4; W32(r_esp, v); }
    /* 00568575: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x56857au); f_005e9f20();
    /* 0056857a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0056857d:; BB(0x0056857d);
    /* 0056857d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056857f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00568582: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00568585: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00568586: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00568589: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0056858c: call 0x56a7a0 */ r_esp -= 4; W32(r_esp, 0x568591u); f_0056a7a0();
    /* 00568591: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00568594: call 0x56a5d0 */ r_esp -= 4; W32(r_esp, 0x568599u); f_0056a5d0();
    /* 00568599: mov byte ptr [ebp - 5], al */ W8((u32)(r_ebp+0xfffffffbu), (u8)r_eax);
    /* 0056859c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056859e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005685a1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005685a2: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005685a5: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 005685a8: call 0x56a7a0 */ r_esp -= 4; W32(r_esp, 0x5685adu); f_0056a7a0();
    /* 005685ad: mov al, byte ptr [ebp - 5] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffffbu))) & 0xffu);
    /* 005685b0: mov esp, ebp */ r_esp = r_ebp;
    /* 005685b2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005685b3: ret 4 */ FN_RET(0x00568530); r_esp += 8; return;
}

void f_0056aed0(void) /* vpmstate::func_0056aed0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0056aed0);
    /* 0056aed0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056aed1: mov ebp, esp */ r_ebp = r_esp;
    /* 0056aed3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056aed6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0056aed9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0056aedc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056aedd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056aee0: call 0x56afb0 */ r_esp -= 4; W32(r_esp, 0x56aee5u); f_0056afb0();
    /* 0056aee5: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0056aee8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056aeea: jne 0x56af03 */ if (!fZ) goto L_0056af03;
L_0056aeec:; BB(0x0056aeec);
    /* 0056aeec: push 0x4c6 */ { u32 v = 0x4c6u; r_esp -= 4; W32(r_esp, v); }
    /* 0056aef1: push 0x6ca1a4 */ { u32 v = 0x6ca1a4u; r_esp -= 4; W32(r_esp, v); }
    /* 0056aef6: push 0x6ca23c */ { u32 v = 0x6ca23cu; r_esp -= 4; W32(r_esp, v); }
    /* 0056aefb: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x56af00u); f_005e9f20();
    /* 0056af00: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0056af03:; BB(0x0056af03);
    /* 0056af03: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0056af0a: jmp 0x56af15 */ goto L_0056af15;
L_0056af0c:; BB(0x0056af0c);
    /* 0056af0c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056af0f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0056af12: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0056af15:; BB(0x0056af15);
    /* 0056af15: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056af19: jge 0x56af7b */ if ((fS==fO)) goto L_0056af7b;
L_0056af1b:; BB(0x0056af1b);
    /* 0056af1b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0056af1e: imul ecx, ecx, 0xa */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xau; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0056af21: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056af24: lea eax, [edx + ecx + 0xf6] */ r_eax = (u32)(r_edx+r_ecx+0xf6u);
    /* 0056af2b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056af2e: movzx edx, word ptr [eax + ecx*2] */ r_edx = (u32)R16((u32)(r_eax+r_ecx*2));
    /* 0056af32: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056af34: jne 0x56af79 */ if (!fZ) goto L_0056af79;
L_0056af36:; BB(0x0056af36);
    /* 0056af36: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0056af39: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056af3c: mov ecx, dword ptr [ecx + eax*4 + 0x2e8] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x2e8u));
    /* 0056af43: call 0x6436c0 */ r_esp -= 4; W32(r_esp, 0x56af48u); f_006436c0();
    /* 0056af48: mov word ptr [ebp - 8], ax */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_eax);
    /* 0056af4c: mov dx, word ptr [ebp - 8] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 0056af50: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056af51: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0056af54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056af55: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056af58: call 0x56ab30 */ r_esp -= 4; W32(r_esp, 0x56af5du); f_0056ab30();
    /* 0056af5d: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0056af60: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056af62: jne 0x56af36 */ if (!fZ) goto L_0056af36;
L_0056af64:; BB(0x0056af64);
    /* 0056af64: mov dx, word ptr [ebp - 8] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 0056af68: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056af69: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056af6c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056af6d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0056af70: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056af71: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056af74: call 0x56b460 */ r_esp -= 4; W32(r_esp, 0x56af79u); f_0056b460();
L_0056af79:; BB(0x0056af79);
    /* 0056af79: jmp 0x56af0c */ goto L_0056af0c;
L_0056af7b:; BB(0x0056af7b);
    /* 0056af7b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0056af7e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056af7f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056af82: call 0x56afb0 */ r_esp -= 4; W32(r_esp, 0x56af87u); f_0056afb0();
    /* 0056af87: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0056af8a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056af8c: jne 0x56afa5 */ if (!fZ) goto L_0056afa5;
L_0056af8e:; BB(0x0056af8e);
    /* 0056af8e: push 0x4d4 */ { u32 v = 0x4d4u; r_esp -= 4; W32(r_esp, v); }
    /* 0056af93: push 0x6ca1a4 */ { u32 v = 0x6ca1a4u; r_esp -= 4; W32(r_esp, v); }
    /* 0056af98: push 0x6ca23c */ { u32 v = 0x6ca23cu; r_esp -= 4; W32(r_esp, v); }
    /* 0056af9d: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x56afa2u); f_005e9f20();
    /* 0056afa2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0056afa5:; BB(0x0056afa5);
    /* 0056afa5: mov esp, ebp */ r_esp = r_ebp;
    /* 0056afa7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056afa8: ret 4 */ FN_RET(0x0056aed0); r_esp += 8; return;
}

