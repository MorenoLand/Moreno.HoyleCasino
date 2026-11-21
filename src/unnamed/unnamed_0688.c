#include "protos.h"

void f_00688440(void) /* sub_688440 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00688440);
    /* 00688440: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00688441: mov ebp, esp */ r_ebp = r_esp;
    /* 00688443: sub esp, 0x7e0 */ {  u32 a = r_esp; u32 b = 0x7e0u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00688449: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0068844e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00688450: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00688453: lea eax, [ebp + 0x10] */ r_eax = (u32)(r_ebp+0x10u);
    /* 00688456: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00688459: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068845c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068845d: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00688460: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00688461: lea eax, [ebp - 0x7e0] */ r_eax = (u32)(r_ebp+0xfffff820u);
    /* 00688467: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00688468: call dword ptr [0x6b23e0] */ { u32 t = R32((u32)(0x6b23e0u)); r_esp -= 4; W32(r_esp, 0x68846eu); call_ind(t); }
    /* 0068846e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00688475: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00688477: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 0068847a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068847b: lea edx, [ebp - 0x7e0] */ r_edx = (u32)(r_ebp+0xfffff820u);
    /* 00688481: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00688482: call dword ptr [0x6b205c] */ { u32 t = R32((u32)(0x6b205cu)); r_esp -= 4; W32(r_esp, 0x688488u); call_ind(t); }
    /* 00688488: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00688489: lea eax, [ebp - 0x7e0] */ r_eax = (u32)(r_ebp+0xfffff820u);
    /* 0068848f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00688490: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00688493: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00688494: call dword ptr [0x6b2060] */ { u32 t = R32((u32)(0x6b2060u)); r_esp -= 4; W32(r_esp, 0x68849au); call_ind(t); }
    /* 0068849a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0068849d: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0068849f: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x6884a4u); f_00686d72();
    /* 006884a4: mov esp, ebp */ r_esp = r_ebp;
    /* 006884a6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006884a7: ret  */ FN_RET(0x00688440); r_esp += 4; return;
}

void f_006884b0(void) /* sub_6884B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006884b0);
    /* 006884b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006884b1: mov ebp, esp */ r_ebp = r_esp;
    /* 006884b3: sub esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006884b6: push 0x6e5220 */ { u32 v = 0x6e5220u; r_esp -= 4; W32(r_esp, v); }
    /* 006884bb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006884be: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006884bf: call 0x688440 */ r_esp -= 4; W32(r_esp, 0x6884c4u); f_00688440();
    /* 006884c4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006884c7: lea ecx, [ebp - 0x28] */ r_ecx = (u32)(r_ebp+0xffffffd8u);
    /* 006884ca: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006884cb: call dword ptr [0x6b2058] */ { u32 t = R32((u32)(0x6b2058u)); r_esp -= 4; W32(r_esp, 0x6884d1u); call_ind(t); }
    /* 006884d1: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006884d4: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 006884d7: mov eax, 0x40000000 */ r_eax = 0x40000000u;
    /* 006884dc: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006884de: div dword ptr [ebp - 0x30] */ { u32 d = R32((u32)(r_ebp+0xffffffd0u)); if (!d) UNSUP(0x006884de, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x006884de, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 006884e1: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 006884e4: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 006884e7: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 006884ee: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_006884f5:; BB(0x006884f5);
    /* 006884f5: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 006884f8: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006884fb: jae 0x688579 */ if (!fC) goto L_00688579;
L_006884fd:; BB(0x006884fd);
    /* 006884fd: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 006884ff: lea ecx, [ebp - 0x50] */ r_ecx = (u32)(r_ebp+0xffffffb0u);
    /* 00688502: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00688503: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00688506: imul edx, dword ptr [ebp - 0x30] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ebp+0xffffffd0u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0068850a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068850b: call dword ptr [0x6b2070] */ { u32 t = R32((u32)(0x6b2070u)); r_esp -= 4; W32(r_esp, 0x688511u); call_ind(t); }
    /* 00688511: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00688513: je 0x688564 */ if (fZ) goto L_00688564;
L_00688515:; BB(0x00688515);
    /* 00688515: cmp dword ptr [ebp - 0x44], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00688519: jbe 0x688552 */ if ((fC||fZ)) goto L_00688552;
L_0068851b:; BB(0x0068851b);
    /* 0068851b: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0068851e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00688520: div dword ptr [ebp - 0x30] */ { u32 d = R32((u32)(r_ebp+0xffffffd0u)); if (!d) UNSUP(0x00688520, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x00688520, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00688523: add eax, dword ptr [ebp - 0x2c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffd4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00688526: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00688529: cmp dword ptr [ebp - 0x40], 0x1000 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00688530: jne 0x688550 */ if (!fZ) goto L_00688550;
L_00688532:; BB(0x00688532);
    /* 00688532: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00688535: cmp eax, dword ptr [ebp - 0x34] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffccu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00688538: jbe 0x688550 */ if ((fC||fZ)) goto L_00688550;
L_0068853a:; BB(0x0068853a);
    /* 0068853a: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0068853d: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 00688540: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00688543: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00688544: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00688547: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00688548: call 0x688580 */ r_esp -= 4; W32(r_esp, 0x68854du); f_00688580();
    /* 0068854d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00688550:; BB(0x00688550);
    /* 00688550: jmp 0x688562 */ goto L_00688562;
L_00688552:; BB(0x00688552);
    /* 00688552: mov eax, 0x10000 */ r_eax = 0x10000u;
    /* 00688557: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00688559: div dword ptr [ebp - 0x30] */ { u32 d = R32((u32)(r_ebp+0xffffffd0u)); if (!d) UNSUP(0x00688559, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x00688559, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0068855c: add eax, dword ptr [ebp - 0x2c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffd4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068855f: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
L_00688562:; BB(0x00688562);
    /* 00688562: jmp 0x688574 */ goto L_00688574;
L_00688564:; BB(0x00688564);
    /* 00688564: mov eax, 0x10000 */ r_eax = 0x10000u;
    /* 00688569: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0068856b: div dword ptr [ebp - 0x30] */ { u32 d = R32((u32)(r_ebp+0xffffffd0u)); if (!d) UNSUP(0x0068856b, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x0068856b, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0068856e: add eax, dword ptr [ebp - 0x2c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffd4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00688571: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
L_00688574:; BB(0x00688574);
    /* 00688574: jmp 0x6884f5 */ goto L_006884f5;
L_00688579:; BB(0x00688579);
    /* 00688579: mov esp, ebp */ r_esp = r_ebp;
    /* 0068857b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068857c: ret  */ FN_RET(0x006884b0); r_esp += 4; return;
}

void f_00688580(void) /* sub_688580 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00688580);
    /* 00688580: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00688581: mov ebp, esp */ r_ebp = r_esp;
    /* 00688583: push -2 */ { u32 v = 0xfffffffeu; r_esp -= 4; W32(r_esp, v); }
    /* 00688585: push 0x702b80 */ { u32 v = 0x702b80u; r_esp -= 4; W32(r_esp, v); }
    /* 0068858a: push 0x68736b */ { u32 v = 0x68736bu; r_esp -= 4; W32(r_esp, v); }
    /* 0068858f: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00688595: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00688596: add esp, 0xfffffe64 */ {  u32 a = r_esp; u32 b = 0xfffffe64u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068859c: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 006885a1: xor dword ptr [ebp - 8], eax */ { u32 ad = (u32)(r_ebp+0xfffffff8u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; W32(ad, r);  }
    /* 006885a4: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006885a6: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 006885a9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006885aa: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006885ab: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006885ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006885ad: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 006885b0: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 006885b6: mov dword ptr [ebp - 0x18], esp */ W32((u32)(r_ebp+0xffffffe8u), r_esp);
    /* 006885b9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006885c0: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 006885c5: lea eax, [ebp - 0x128] */ r_eax = (u32)(r_ebp+0xfffffed8u);
    /* 006885cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006885cc: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 006885cf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006885d0: call dword ptr [0x6b20cc] */ { u32 t = R32((u32)(0x6b20ccu)); r_esp -= 4; W32(r_esp, 0x6885d6u); call_ind(t); }
    /* 006885d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 006885d8: jbe 0x68873b */ if ((fC||fZ)) goto L_0068873b;
L_006885de:; BB(0x006885de);
    /* 006885de: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 006885e1: mov dword ptr [ebp - 0x1a4], edx */ W32((u32)(r_ebp+0xfffffe5cu), r_edx);
    /* 006885e7: mov eax, dword ptr [ebp - 0x1a4] */ r_eax = R32((u32)(r_ebp+0xfffffe5cu));
    /* 006885ed: movzx ecx, word ptr [eax] */ r_ecx = (u32)R16((u32)(r_eax));
    /* 006885f0: cmp ecx, 0x5a4d */ {  u32 a = r_ecx; u32 b = 0x5a4du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006885f6: je 0x688604 */ if (fZ) goto L_00688604;
L_006885f8:; BB(0x006885f8);
    /* 006885f8: mov dword ptr [ebp - 4], 0xfffffffe */ W32((u32)(r_ebp+0xfffffffcu), 0xfffffffeu);
    /* 006885ff: jmp 0x688754 */ goto L_00688754;
L_00688604:; BB(0x00688604);
    /* 00688604: mov edx, dword ptr [ebp - 0x1a4] */ r_edx = R32((u32)(r_ebp+0xfffffe5cu));
    /* 0068860a: mov eax, dword ptr [ebp - 0x1a4] */ r_eax = R32((u32)(r_ebp+0xfffffe5cu));
    /* 00688610: add eax, dword ptr [edx + 0x3c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x3cu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00688613: mov dword ptr [ebp - 0x12c], eax */ W32((u32)(r_ebp+0xfffffed4u), r_eax);
    /* 00688619: mov ecx, dword ptr [ebp - 0x12c] */ r_ecx = R32((u32)(r_ebp+0xfffffed4u));
    /* 0068861f: cmp dword ptr [ecx], 0x4550 */ {  u32 a = R32((u32)(r_ecx)); u32 b = 0x4550u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00688625: je 0x688633 */ if (fZ) goto L_00688633;
L_00688627:; BB(0x00688627);
    /* 00688627: mov dword ptr [ebp - 4], 0xfffffffe */ W32((u32)(r_ebp+0xfffffffcu), 0xfffffffeu);
    /* 0068862e: jmp 0x688754 */ goto L_00688754;
L_00688633:; BB(0x00688633);
    /* 00688633: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00688635: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 0068863a: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0068863c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0068863e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00688640: push 0x80000000 */ { u32 v = 0x80000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00688645: lea edx, [ebp - 0x128] */ r_edx = (u32)(r_ebp+0xfffffed8u);
    /* 0068864b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068864c: call dword ptr [0x6b2068] */ { u32 t = R32((u32)(0x6b2068u)); r_esp -= 4; W32(r_esp, 0x688652u); call_ind(t); }
    /* 00688652: mov dword ptr [ebp - 0x19c], eax */ W32((u32)(r_ebp+0xfffffe64u), r_eax);
    /* 00688658: mov al, byte ptr [0x6b27f8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0x6b27f8u))) & 0xffu);
    /* 0068865d: mov byte ptr [ebp - 0x198], al */ W8((u32)(r_ebp+0xfffffe68u), (u8)r_eax);
    /* 00688663: push 0x63 */ { u32 v = 0x63u; r_esp -= 4; W32(r_esp, v); }
    /* 00688665: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00688667: lea ecx, [ebp - 0x197] */ r_ecx = (u32)(r_ebp+0xfffffe69u);
    /* 0068866d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068866e: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x688673u); f_00686fa2();
    /* 00688673: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00688676: mov dword ptr [ebp - 0x1a0], 0 */ W32((u32)(r_ebp+0xfffffe60u), 0x0u);
    /* 00688680: cmp dword ptr [ebp - 0x19c], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffe64u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00688687: je 0x688707 */ if (fZ) goto L_00688707;
L_00688689:; BB(0x00688689);
    /* 00688689: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0068868b: mov edx, dword ptr [ebp - 0x19c] */ r_edx = R32((u32)(r_ebp+0xfffffe64u));
    /* 00688691: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00688692: call dword ptr [0x6b2050] */ { u32 t = R32((u32)(0x6b2050u)); r_esp -= 4; W32(r_esp, 0x688698u); call_ind(t); }
    /* 00688698: mov dword ptr [ebp - 0x1a0], eax */ W32((u32)(r_ebp+0xfffffe60u), r_eax);
    /* 0068869e: lea eax, [ebp - 0x1ac] */ r_eax = (u32)(r_ebp+0xfffffe54u);
    /* 006886a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006886a5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006886a7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006886a9: mov ecx, dword ptr [ebp - 0x19c] */ r_ecx = R32((u32)(r_ebp+0xfffffe64u));
    /* 006886af: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006886b0: call dword ptr [0x6b2054] */ { u32 t = R32((u32)(0x6b2054u)); r_esp -= 4; W32(r_esp, 0x6886b6u); call_ind(t); }
    /* 006886b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006886b8: je 0x6886fa */ if (fZ) goto L_006886fa;
L_006886ba:; BB(0x006886ba);
    /* 006886ba: push 0x6e5294 */ { u32 v = 0x6e5294u; r_esp -= 4; W32(r_esp, v); }
    /* 006886bf: lea edx, [ebp - 0x198] */ r_edx = (u32)(r_ebp+0xfffffe68u);
    /* 006886c5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006886c6: call dword ptr [0x6b2438] */ { u32 t = R32((u32)(0x6b2438u)); r_esp -= 4; W32(r_esp, 0x6886ccu); call_ind(t); }
    /* 006886cc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006886cf: mov eax, dword ptr [ebp - 0x1a8] */ r_eax = R32((u32)(r_ebp+0xfffffe58u));
    /* 006886d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006886d6: mov ecx, dword ptr [ebp - 0x1ac] */ r_ecx = R32((u32)(r_ebp+0xfffffe54u));
    /* 006886dc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006886dd: lea edx, [ebp - 0x198] */ r_edx = (u32)(r_ebp+0xfffffe68u);
    /* 006886e3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006886e4: call dword ptr [0x6b205c] */ { u32 t = R32((u32)(0x6b205cu)); r_esp -= 4; W32(r_esp, 0x6886eau); call_ind(t); }
    /* 006886ea: lea eax, [ebp + eax - 0x198] */ r_eax = (u32)(r_ebp+r_eax+0xfffffe68u);
    /* 006886f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006886f2: call 0x688770 */ r_esp -= 4; W32(r_esp, 0x6886f7u); f_00688770();
    /* 006886f7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006886fa:; BB(0x006886fa);
    /* 006886fa: mov ecx, dword ptr [ebp - 0x19c] */ r_ecx = R32((u32)(r_ebp+0xfffffe64u));
    /* 00688700: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00688701: call dword ptr [0x6b20ac] */ { u32 t = R32((u32)(0x6b20acu)); r_esp -= 4; W32(r_esp, 0x688707u); call_ind(t); }
L_00688707:; BB(0x00688707);
    /* 00688707: lea edx, [ebp - 0x198] */ r_edx = (u32)(r_ebp+0xfffffe68u);
    /* 0068870d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068870e: mov eax, dword ptr [ebp - 0x12c] */ r_eax = R32((u32)(r_ebp+0xfffffed4u));
    /* 00688714: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00688717: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00688718: mov edx, dword ptr [ebp - 0x1a0] */ r_edx = R32((u32)(r_ebp+0xfffffe60u));
    /* 0068871e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068871f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00688722: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00688723: lea ecx, [ebp - 0x128] */ r_ecx = (u32)(r_ebp+0xfffffed8u);
    /* 00688729: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068872a: push 0x6e5268 */ { u32 v = 0x6e5268u; r_esp -= 4; W32(r_esp, v); }
    /* 0068872f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00688732: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00688733: call 0x688440 */ r_esp -= 4; W32(r_esp, 0x688738u); f_00688440();
    /* 00688738: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0068873b:; BB(0x0068873b);
    /* 0068873b: mov dword ptr [ebp - 4], 0xfffffffe */ W32((u32)(r_ebp+0xfffffffcu), 0xfffffffeu);
    /* 00688742: jmp 0x688754 */ goto L_00688754;
L_00688754:; BB(0x00688754);
    /* 00688754: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00688757: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0068875e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068875f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00688760: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00688761: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00688762: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00688765: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00688767: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x68876cu); f_00686d72();
    /* 0068876c: mov esp, ebp */ r_esp = r_ebp;
    /* 0068876e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068876f: ret  */ FN_RET(0x00688580); r_esp += 4; return;
}

void f_00688770(void) /* sub_688770 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00688770);
    /* 00688770: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00688771: mov ebp, esp */ r_ebp = r_esp;
    /* 00688773: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00688776: lea eax, [ebp + 0xc] */ r_eax = (u32)(r_ebp+0xcu);
    /* 00688779: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068877a: lea ecx, [ebp + 0xc] */ r_ecx = (u32)(r_ebp+0xcu);
    /* 0068877d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068877e: call dword ptr [0x6b2048] */ { u32 t = R32((u32)(0x6b2048u)); r_esp -= 4; W32(r_esp, 0x688784u); call_ind(t); }
    /* 00688784: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00688786: je 0x688811 */ if (fZ) goto L_00688811;
L_0068878c:; BB(0x0068878c);
    /* 0068878c: lea edx, [ebp - 4] */ r_edx = (u32)(r_ebp+0xfffffffcu);
    /* 0068878f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00688790: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 00688793: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00688794: lea ecx, [ebp + 0xc] */ r_ecx = (u32)(r_ebp+0xcu);
    /* 00688797: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00688798: call dword ptr [0x6b204c] */ { u32 t = R32((u32)(0x6b204cu)); r_esp -= 4; W32(r_esp, 0x68879eu); call_ind(t); }
    /* 0068879e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006887a0: je 0x688811 */ if (fZ) goto L_00688811;
L_006887a2:; BB(0x006887a2);
    /* 006887a2: movzx edx, word ptr [ebp - 4] */ r_edx = (u32)R16((u32)(r_ebp+0xfffffffcu));
    /* 006887a6: and edx, 0x1f */ {  u32 a = r_edx; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 006887a9: shl edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 006887ab: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006887ac: movzx eax, word ptr [ebp - 4] */ r_eax = (u32)R16((u32)(r_ebp+0xfffffffcu));
    /* 006887b0: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 006887b1: and edx, 0x1f */ {  u32 a = r_edx; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 006887b4: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006887b6: sar eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 006887b9: and eax, 0x3f */ {  u32 a = r_eax; u32 b = 0x3fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006887bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006887bd: movzx eax, word ptr [ebp - 4] */ r_eax = (u32)R16((u32)(r_ebp+0xfffffffcu));
    /* 006887c1: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 006887c2: and edx, 0x7ff */ {  u32 a = r_edx; u32 b = 0x7ffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 006887c8: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006887ca: sar eax, 0xb */ { u32 c = (11u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 006887cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006887ce: movzx eax, word ptr [ebp - 8] */ r_eax = (u32)R16((u32)(r_ebp+0xfffffff8u));
    /* 006887d2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 006887d3: and edx, 0x1ff */ {  u32 a = r_edx; u32 b = 0x1ffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 006887d9: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006887db: sar eax, 9 */ { u32 c = (9u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 006887de: add eax, 0x7bc */ {  u32 a = r_eax; u32 b = 0x7bcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006887e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006887e4: movzx eax, word ptr [ebp - 8] */ r_eax = (u32)R16((u32)(r_ebp+0xfffffff8u));
    /* 006887e8: and eax, 0x1f */ {  u32 a = r_eax; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006887eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006887ec: movzx eax, word ptr [ebp - 8] */ r_eax = (u32)R16((u32)(r_ebp+0xfffffff8u));
    /* 006887f0: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 006887f1: and edx, 0x1f */ {  u32 a = r_edx; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 006887f4: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006887f6: sar eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 006887f9: and eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006887fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006887fd: push 0x6e52a8 */ { u32 v = 0x6e52a8u; r_esp -= 4; W32(r_esp, v); }
    /* 00688802: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00688805: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00688806: call dword ptr [0x6b2438] */ { u32 t = R32((u32)(0x6b2438u)); r_esp -= 4; W32(r_esp, 0x68880cu); call_ind(t); }
    /* 0068880c: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068880f: jmp 0x688817 */ goto L_00688817;
L_00688811:; BB(0x00688811);
    /* 00688811: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00688814: mov byte ptr [edx], 0 */ W8((u32)(r_edx), 0x0u);
L_00688817:; BB(0x00688817);
    /* 00688817: mov esp, ebp */ r_esp = r_ebp;
    /* 00688819: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068881a: ret  */ FN_RET(0x00688770); r_esp += 4; return;
}

void f_00688820(void) /* sub_688820 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00688820);
    /* 00688820: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00688821: mov ebp, esp */ r_ebp = r_esp;
    /* 00688823: sub esp, 0x290 */ {  u32 a = r_esp; u32 b = 0x290u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00688829: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0068882e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00688830: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00688833: lea eax, [ebp - 0x1c8] */ r_eax = (u32)(r_ebp+0xfffffe38u);
    /* 00688839: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068883a: call dword ptr [0x6b207c] */ { u32 t = R32((u32)(0x6b207cu)); r_esp -= 4; W32(r_esp, 0x688840u); call_ind(t); }
    /* 00688840: mov ecx, dword ptr [ebp - 0x1c4] */ r_ecx = R32((u32)(r_ebp+0xfffffe3cu));
    /* 00688846: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00688847: mov edx, dword ptr [ebp - 0x1c8] */ r_edx = R32((u32)(r_ebp+0xfffffe38u));
    /* 0068884d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068884e: lea eax, [ebp - 0x98] */ r_eax = (u32)(r_ebp+0xffffff68u);
    /* 00688854: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00688855: call 0x688770 */ r_esp -= 4; W32(r_esp, 0x68885au); f_00688770();
    /* 0068885a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068885d: lea ecx, [ebp - 0x98] */ r_ecx = (u32)(r_ebp+0xffffff68u);
    /* 00688863: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00688864: push 0x6e5310 */ { u32 v = 0x6e5310u; r_esp -= 4; W32(r_esp, v); }
    /* 00688869: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0068886c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068886d: call 0x688440 */ r_esp -= 4; W32(r_esp, 0x688872u); f_00688440();
    /* 00688872: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00688875: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 0068887a: lea eax, [ebp - 0x1a0] */ r_eax = (u32)(r_ebp+0xfffffe60u);
    /* 00688880: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00688881: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00688883: call dword ptr [0x6b20cc] */ { u32 t = R32((u32)(0x6b20ccu)); r_esp -= 4; W32(r_esp, 0x688889u); call_ind(t); }
    /* 00688889: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 0068888b: ja 0x68889f */ if ((!fC&&!fZ)) goto L_0068889f;
L_0068888d:; BB(0x0068888d);
    /* 0068888d: push 0x6e5214 */ { u32 v = 0x6e5214u; r_esp -= 4; W32(r_esp, v); }
    /* 00688892: lea ecx, [ebp - 0x1a0] */ r_ecx = (u32)(r_ebp+0xfffffe60u);
    /* 00688898: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00688899: call dword ptr [0x6b20c0] */ { u32 t = R32((u32)(0x6b20c0u)); r_esp -= 4; W32(r_esp, 0x68889fu); call_ind(t); }
L_0068889f:; BB(0x0068889f);
    /* 0068889f: mov dword ptr [ebp - 0x28], 0xc8 */ W32((u32)(r_ebp+0xffffffd8u), 0xc8u);
    /* 006888a6: push 0x6e5214 */ { u32 v = 0x6e5214u; r_esp -= 4; W32(r_esp, v); }
    /* 006888ab: lea edx, [ebp - 0x290] */ r_edx = (u32)(r_ebp+0xfffffd70u);
    /* 006888b1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006888b2: call dword ptr [0x6b20c0] */ { u32 t = R32((u32)(0x6b20c0u)); r_esp -= 4; W32(r_esp, 0x6888b8u); call_ind(t); }
    /* 006888b8: lea eax, [ebp - 0x290] */ r_eax = (u32)(r_ebp+0xfffffd70u);
    /* 006888be: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006888bf: lea ecx, [ebp - 0x1a0] */ r_ecx = (u32)(r_ebp+0xfffffe60u);
    /* 006888c5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006888c6: push 0x6e52fc */ { u32 v = 0x6e52fcu; r_esp -= 4; W32(r_esp, v); }
    /* 006888cb: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006888ce: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006888cf: call 0x688440 */ r_esp -= 4; W32(r_esp, 0x6888d4u); f_00688440();
    /* 006888d4: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006888d7: lea eax, [ebp - 0x24] */ r_eax = (u32)(r_ebp+0xffffffdcu);
    /* 006888da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006888db: call dword ptr [0x6b2058] */ { u32 t = R32((u32)(0x6b2058u)); r_esp -= 4; W32(r_esp, 0x6888e1u); call_ind(t); }
    /* 006888e1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006888e4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006888e5: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006888e8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006888e9: push 0x6e52e0 */ { u32 v = 0x6e52e0u; r_esp -= 4; W32(r_esp, v); }
    /* 006888ee: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006888f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006888f2: call 0x688440 */ r_esp -= 4; W32(r_esp, 0x6888f7u); f_00688440();
    /* 006888f7: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006888fa: mov dword ptr [ebp - 0x1c0], 0x20 */ W32((u32)(r_ebp+0xfffffe40u), 0x20u);
    /* 00688904: lea ecx, [ebp - 0x1c0] */ r_ecx = (u32)(r_ebp+0xfffffe40u);
    /* 0068890a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068890b: call dword ptr [0x6b20c8] */ { u32 t = R32((u32)(0x6b20c8u)); r_esp -= 4; W32(r_esp, 0x688911u); call_ind(t); }
    /* 00688911: mov edx, dword ptr [ebp - 0x1b8] */ r_edx = R32((u32)(r_ebp+0xfffffe48u));
    /* 00688917: add edx, 0xfffff */ {  u32 a = r_edx; u32 b = 0xfffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0068891d: shr edx, 0x14 */ { u32 c = (20u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00688920: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00688921: push 0x6e52c0 */ { u32 v = 0x6e52c0u; r_esp -= 4; W32(r_esp, v); }
    /* 00688926: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00688929: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068892a: call 0x688440 */ r_esp -= 4; W32(r_esp, 0x68892fu); f_00688440();
    /* 0068892f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00688932: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00688935: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00688937: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x68893cu); f_00686d72();
    /* 0068893c: mov esp, ebp */ r_esp = r_ebp;
    /* 0068893e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068893f: ret  */ FN_RET(0x00688820); r_esp += 4; return;
}

void f_00688940(void) /* sub_688940 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00688940);
    /* 00688940: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00688941: mov ebp, esp */ r_ebp = r_esp;
    /* 00688943: sub esp, 0xc4 */ {  u32 a = r_esp; u32 b = 0xc4u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00688949: mov dword ptr [ebp - 0xc0], 0x40010005 */ W32((u32)(r_ebp+0xffffff40u), 0x40010005u);
    /* 00688953: mov dword ptr [ebp - 0xbc], 0x6e554c */ W32((u32)(r_ebp+0xffffff44u), 0x6e554cu);
    /* 0068895d: mov dword ptr [ebp - 0xb8], 0x40010008 */ W32((u32)(r_ebp+0xffffff48u), 0x40010008u);
    /* 00688967: mov dword ptr [ebp - 0xb4], 0x6e553c */ W32((u32)(r_ebp+0xffffff4cu), 0x6e553cu);
    /* 00688971: mov dword ptr [ebp - 0xb0], 0x80000002 */ W32((u32)(r_ebp+0xffffff50u), 0x80000002u);
    /* 0068897b: mov dword ptr [ebp - 0xac], 0x6e5524 */ W32((u32)(r_ebp+0xffffff54u), 0x6e5524u);
    /* 00688985: mov dword ptr [ebp - 0xa8], 0x80000003 */ W32((u32)(r_ebp+0xffffff58u), 0x80000003u);
    /* 0068898f: mov dword ptr [ebp - 0xa4], 0x6e5514 */ W32((u32)(r_ebp+0xffffff5cu), 0x6e5514u);
    /* 00688999: mov dword ptr [ebp - 0xa0], 0xc0000005 */ W32((u32)(r_ebp+0xffffff60u), 0xc0000005u);
    /* 006889a3: mov dword ptr [ebp - 0x9c], 0x6e5500 */ W32((u32)(r_ebp+0xffffff64u), 0x6e5500u);
    /* 006889ad: mov dword ptr [ebp - 0x98], 0xc0000006 */ W32((u32)(r_ebp+0xffffff68u), 0xc0000006u);
    /* 006889b7: mov dword ptr [ebp - 0x94], 0x6e54ec */ W32((u32)(r_ebp+0xffffff6cu), 0x6e54ecu);
    /* 006889c1: mov dword ptr [ebp - 0x90], 0xc0000017 */ W32((u32)(r_ebp+0xffffff70u), 0xc0000017u);
    /* 006889cb: mov dword ptr [ebp - 0x8c], 0x6e54e0 */ W32((u32)(r_ebp+0xffffff74u), 0x6e54e0u);
    /* 006889d5: mov dword ptr [ebp - 0x88], 0xc000001d */ W32((u32)(r_ebp+0xffffff78u), 0xc000001du);
    /* 006889df: mov dword ptr [ebp - 0x84], 0x6e54c8 */ W32((u32)(r_ebp+0xffffff7cu), 0x6e54c8u);
    /* 006889e9: mov dword ptr [ebp - 0x80], 0xc0000025 */ W32((u32)(r_ebp+0xffffff80u), 0xc0000025u);
    /* 006889f0: mov dword ptr [ebp - 0x7c], 0x6e54ac */ W32((u32)(r_ebp+0xffffff84u), 0x6e54acu);
    /* 006889f7: mov dword ptr [ebp - 0x78], 0xc0000026 */ W32((u32)(r_ebp+0xffffff88u), 0xc0000026u);
    /* 006889fe: mov dword ptr [ebp - 0x74], 0x6e5494 */ W32((u32)(r_ebp+0xffffff8cu), 0x6e5494u);
    /* 00688a05: mov dword ptr [ebp - 0x70], 0xc000008c */ W32((u32)(r_ebp+0xffffff90u), 0xc000008cu);
    /* 00688a0c: mov dword ptr [ebp - 0x6c], 0x6e547c */ W32((u32)(r_ebp+0xffffff94u), 0x6e547cu);
    /* 00688a13: mov dword ptr [ebp - 0x68], 0xc000008d */ W32((u32)(r_ebp+0xffffff98u), 0xc000008du);
    /* 00688a1a: mov dword ptr [ebp - 0x64], 0x6e5460 */ W32((u32)(r_ebp+0xffffff9cu), 0x6e5460u);
    /* 00688a21: mov dword ptr [ebp - 0x60], 0xc000008e */ W32((u32)(r_ebp+0xffffffa0u), 0xc000008eu);
    /* 00688a28: mov dword ptr [ebp - 0x5c], 0x6e5448 */ W32((u32)(r_ebp+0xffffffa4u), 0x6e5448u);
    /* 00688a2f: mov dword ptr [ebp - 0x58], 0xc000008f */ W32((u32)(r_ebp+0xffffffa8u), 0xc000008fu);
    /* 00688a36: mov dword ptr [ebp - 0x54], 0x6e5430 */ W32((u32)(r_ebp+0xffffffacu), 0x6e5430u);
    /* 00688a3d: mov dword ptr [ebp - 0x50], 0xc0000090 */ W32((u32)(r_ebp+0xffffffb0u), 0xc0000090u);
    /* 00688a44: mov dword ptr [ebp - 0x4c], 0x6e5414 */ W32((u32)(r_ebp+0xffffffb4u), 0x6e5414u);
    /* 00688a4b: mov dword ptr [ebp - 0x48], 0xc0000091 */ W32((u32)(r_ebp+0xffffffb8u), 0xc0000091u);
    /* 00688a52: mov dword ptr [ebp - 0x44], 0x6e5400 */ W32((u32)(r_ebp+0xffffffbcu), 0x6e5400u);
    /* 00688a59: mov dword ptr [ebp - 0x40], 0xc0000092 */ W32((u32)(r_ebp+0xffffffc0u), 0xc0000092u);
    /* 00688a60: mov dword ptr [ebp - 0x3c], 0x6e53ec */ W32((u32)(r_ebp+0xffffffc4u), 0x6e53ecu);
    /* 00688a67: mov dword ptr [ebp - 0x38], 0xc0000093 */ W32((u32)(r_ebp+0xffffffc8u), 0xc0000093u);
    /* 00688a6e: mov dword ptr [ebp - 0x34], 0x6e53d8 */ W32((u32)(r_ebp+0xffffffccu), 0x6e53d8u);
    /* 00688a75: mov dword ptr [ebp - 0x30], 0xc0000094 */ W32((u32)(r_ebp+0xffffffd0u), 0xc0000094u);
    /* 00688a7c: mov dword ptr [ebp - 0x2c], 0x6e53bc */ W32((u32)(r_ebp+0xffffffd4u), 0x6e53bcu);
    /* 00688a83: mov dword ptr [ebp - 0x28], 0xc0000095 */ W32((u32)(r_ebp+0xffffffd8u), 0xc0000095u);
    /* 00688a8a: mov dword ptr [ebp - 0x24], 0x6e53a8 */ W32((u32)(r_ebp+0xffffffdcu), 0x6e53a8u);
    /* 00688a91: mov dword ptr [ebp - 0x20], 0xc0000096 */ W32((u32)(r_ebp+0xffffffe0u), 0xc0000096u);
    /* 00688a98: mov dword ptr [ebp - 0x1c], 0x6e538c */ W32((u32)(r_ebp+0xffffffe4u), 0x6e538cu);
    /* 00688a9f: mov dword ptr [ebp - 0x18], 0xc00000fd */ W32((u32)(r_ebp+0xffffffe8u), 0xc00000fdu);
    /* 00688aa6: mov dword ptr [ebp - 0x14], 0x6e5378 */ W32((u32)(r_ebp+0xffffffecu), 0x6e5378u);
    /* 00688aad: mov dword ptr [ebp - 0x10], 0xc0000142 */ W32((u32)(r_ebp+0xfffffff0u), 0xc0000142u);
    /* 00688ab4: mov dword ptr [ebp - 0xc], 0x6e535c */ W32((u32)(r_ebp+0xfffffff4u), 0x6e535cu);
    /* 00688abb: mov dword ptr [ebp - 8], 0xe06d7363 */ W32((u32)(r_ebp+0xfffffff8u), 0xe06d7363u);
    /* 00688ac2: mov dword ptr [ebp - 4], 0x6e5340 */ W32((u32)(r_ebp+0xfffffffcu), 0x6e5340u);
    /* 00688ac9: mov dword ptr [ebp - 0xc4], 0 */ W32((u32)(r_ebp+0xffffff3cu), 0x0u);
    /* 00688ad3: jmp 0x688ae4 */ goto L_00688ae4;
L_00688ad5:; BB(0x00688ad5);
    /* 00688ad5: mov eax, dword ptr [ebp - 0xc4] */ r_eax = R32((u32)(r_ebp+0xffffff3cu));
    /* 00688adb: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00688ade: mov dword ptr [ebp - 0xc4], eax */ W32((u32)(r_ebp+0xffffff3cu), r_eax);
L_00688ae4:; BB(0x00688ae4);
    /* 00688ae4: cmp dword ptr [ebp - 0xc4], 0x18 */ {  u32 a = R32((u32)(r_ebp+0xffffff3cu)); u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00688aeb: jae 0x688b10 */ if (!fC) goto L_00688b10;
L_00688aed:; BB(0x00688aed);
    /* 00688aed: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 00688af3: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00688af6: cmp edx, dword ptr [ebp + ecx*8 - 0xc0] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+r_ecx*8+0xffffff40u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00688afd: jne 0x688b0e */ if (!fZ) goto L_00688b0e;
L_00688aff:; BB(0x00688aff);
    /* 00688aff: mov eax, dword ptr [ebp - 0xc4] */ r_eax = R32((u32)(r_ebp+0xffffff3cu));
    /* 00688b05: mov eax, dword ptr [ebp + eax*8 - 0xbc] */ r_eax = R32((u32)(r_ebp+r_eax*8+0xffffff44u));
    /* 00688b0c: jmp 0x688b15 */ goto L_00688b15;
L_00688b0e:; BB(0x00688b0e);
    /* 00688b0e: jmp 0x688ad5 */ goto L_00688ad5;
L_00688b10:; BB(0x00688b10);
    /* 00688b10: mov eax, 0x6e5328 */ r_eax = 0x6e5328u;
L_00688b15:; BB(0x00688b15);
    /* 00688b15: mov esp, ebp */ r_esp = r_ebp;
    /* 00688b17: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00688b18: ret  */ FN_RET(0x00688940); r_esp += 4; return;
}

void f_00688b20(void) /* sub_688B20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00688b20);
    /* 00688b20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00688b21: mov ebp, esp */ r_ebp = r_esp;
    /* 00688b23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00688b24: push 0x5c */ { u32 v = 0x5cu; r_esp -= 4; W32(r_esp, v); }
    /* 00688b26: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00688b29: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00688b2a: call dword ptr [0x6b2264] */ { u32 t = R32((u32)(0x6b2264u)); r_esp -= 4; W32(r_esp, 0x688b30u); call_ind(t); }
    /* 00688b30: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00688b33: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00688b36: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00688b3a: je 0x688b47 */ if (fZ) goto L_00688b47;
L_00688b3c:; BB(0x00688b3c);
    /* 00688b3c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00688b3f: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00688b42: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00688b45: jmp 0x688b4d */ goto L_00688b4d;
L_00688b47:; BB(0x00688b47);
    /* 00688b47: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00688b4a: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00688b4d:; BB(0x00688b4d);
    /* 00688b4d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00688b50: mov esp, ebp */ r_esp = r_ebp;
    /* 00688b52: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00688b53: ret  */ FN_RET(0x00688b20); r_esp += 4; return;
}

void f_00688d40(void) /* sub_688D40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00688d40);
    /* 00688d40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00688d41: mov ebp, esp */ r_ebp = r_esp;
    /* 00688d43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00688d44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00688d47: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00688d4a: add eax, 0x107 */ {  u32 a = r_eax; u32 b = 0x107u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00688d4f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00688d50: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00688d53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00688d54: call dword ptr [0x6b21e4] */ { u32 t = R32((u32)(0x6b21e4u)); r_esp -= 4; W32(r_esp, 0x688d5au); call_ind(t); }
    /* 00688d5a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00688d5d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00688d5f: je 0x688d6e */ if (fZ) goto L_00688d6e;
L_00688d61:; BB(0x00688d61);
    /* 00688d61: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00688d64: mov dword ptr [edx + 0x210], 0 */ W32((u32)(r_edx+0x210u), 0x0u);
L_00688d6e:; BB(0x00688d6e);
    /* 00688d6e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00688d71: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00688d72: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00688d77: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00688d7a: call 0x607890 */ r_esp -= 4; W32(r_esp, 0x688d7fu); f_00607890();
    /* 00688d7f: mov esp, ebp */ r_esp = r_ebp;
    /* 00688d81: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00688d82: ret 4 */ FN_RET(0x00688d40); r_esp += 8; return;
}

void f_00688d90(void) /* sub_688D90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00688d90);
    /* 00688d90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00688d91: mov ebp, esp */ r_ebp = r_esp;
    /* 00688d93: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00688d96: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00688d99: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00688d9c: cmp dword ptr [eax + 0x208], 0 */ {  u32 a = R32((u32)(r_eax+0x208u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00688da3: je 0x688dcb */ if (fZ) goto L_00688dcb;
L_00688da5:; BB(0x00688da5);
    /* 00688da5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00688da8: mov edx, dword ptr [ecx + 0x208] */ r_edx = R32((u32)(r_ecx+0x208u));
    /* 00688dae: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00688db1: mov ecx, dword ptr [eax + 0x208] */ r_ecx = R32((u32)(r_eax+0x208u));
    /* 00688db7: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00688db9: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00688dbc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x688dbeu); call_ind(t); }
    /* 00688dbe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00688dc0: je 0x688dcb */ if (fZ) goto L_00688dcb;
L_00688dc2:; BB(0x00688dc2);
    /* 00688dc2: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 00688dc9: jmp 0x688dd2 */ goto L_00688dd2;
L_00688dcb:; BB(0x00688dcb);
    /* 00688dcb: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_00688dd2:; BB(0x00688dd2);
    /* 00688dd2: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 00688dd5: mov esp, ebp */ r_esp = r_ebp;
    /* 00688dd7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00688dd8: ret  */ FN_RET(0x00688d90); r_esp += 4; return;
}

void f_00688f10(void) /* sub_688F10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00688f10);
    /* 00688f10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00688f11: mov ebp, esp */ r_ebp = r_esp;
    /* 00688f13: sub esp, 0x254 */ {  u32 a = r_esp; u32 b = 0x254u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00688f19: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00688f1e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00688f20: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00688f23: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00688f24: mov dword ptr [ebp - 0x254], ecx */ W32((u32)(r_ebp+0xfffffdacu), r_ecx);
    /* 00688f2a: mov eax, dword ptr [ebp - 0x254] */ r_eax = R32((u32)(r_ebp+0xfffffdacu));
    /* 00688f30: cmp dword ptr [eax + 0x210], 0 */ {  u32 a = R32((u32)(r_eax+0x210u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00688f37: jne 0x68927b */ if (!fZ) goto L_0068927b;
L_00688f3d:; BB(0x00688f3d);
    /* 00688f3d: push 0x105 */ { u32 v = 0x105u; r_esp -= 4; W32(r_esp, v); }
    /* 00688f42: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00688f44: lea ecx, [ebp - 0x240] */ r_ecx = (u32)(r_ebp+0xfffffdc0u);
    /* 00688f4a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00688f4b: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x688f50u); f_00686fa2();
    /* 00688f50: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00688f53: push 0x105 */ { u32 v = 0x105u; r_esp -= 4; W32(r_esp, v); }
    /* 00688f58: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00688f5a: lea edx, [ebp - 0x110] */ r_edx = (u32)(r_ebp+0xfffffef0u);
    /* 00688f60: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00688f61: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x688f66u); f_00686fa2();
    /* 00688f66: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00688f69: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 00688f6e: push 0x6e55b4 */ { u32 v = 0x6e55b4u; r_esp -= 4; W32(r_esp, v); }
    /* 00688f73: lea eax, [ebp - 0x124] */ r_eax = (u32)(r_ebp+0xfffffedcu);
    /* 00688f79: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00688f7a: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x688f80u); call_ind(t); }
    /* 00688f80: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00688f83: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 00688f88: push 0x6e55ac */ { u32 v = 0x6e55acu; r_esp -= 4; W32(r_esp, v); }
    /* 00688f8d: lea ecx, [ebp - 0x138] */ r_ecx = (u32)(r_ebp+0xfffffec8u);
    /* 00688f93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00688f94: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x688f9au); call_ind(t); }
    /* 00688f9a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00688f9d: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00688fa1: je 0x688fad */ if (fZ) goto L_00688fad;
L_00688fa3:; BB(0x00688fa3);
    /* 00688fa3: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00688fa6: movsx eax, byte ptr [edx] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx));
    /* 00688fa9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00688fab: jne 0x688fb4 */ if (!fZ) goto L_00688fb4;
L_00688fad:; BB(0x00688fad);
    /* 00688fad: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00688faf: jmp 0x689299 */ goto L_00689299;
L_00688fb4:; BB(0x00688fb4);
    /* 00688fb4: mov ecx, dword ptr [ebp - 0x254] */ r_ecx = R32((u32)(r_ebp+0xfffffdacu));
    /* 00688fba: mov edx, dword ptr [ecx + 0x208] */ r_edx = R32((u32)(r_ecx+0x208u));
    /* 00688fc0: mov eax, dword ptr [ebp - 0x254] */ r_eax = R32((u32)(r_ebp+0xfffffdacu));
    /* 00688fc6: mov ecx, dword ptr [eax + 0x208] */ r_ecx = R32((u32)(r_eax+0x208u));
    /* 00688fcc: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00688fce: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00688fd1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x688fd3u); call_ind(t); }
    /* 00688fd3: mov ecx, dword ptr [ebp - 0x254] */ r_ecx = R32((u32)(r_ebp+0xfffffdacu));
    /* 00688fd9: mov dword ptr [ecx + 0x20c], eax */ W32((u32)(r_ecx+0x20cu), r_eax);
L_00688fdf:; BB(0x00688fdf);
    /* 00688fdf: mov byte ptr [ebp - 0x240], 0 */ W8((u32)(r_ebp+0xfffffdc0u), 0x0u);
    /* 00688fe6: lea edx, [ebp - 0x240] */ r_edx = (u32)(r_ebp+0xfffffdc0u);
    /* 00688fec: mov dword ptr [ebp - 0x244], edx */ W32((u32)(r_ebp+0xfffffdbcu), r_edx);
    /* 00688ff2: mov eax, dword ptr [ebp - 0x254] */ r_eax = R32((u32)(r_ebp+0xfffffdacu));
    /* 00688ff8: mov ecx, dword ptr [eax + 0x208] */ r_ecx = R32((u32)(r_eax+0x208u));
    /* 00688ffe: mov edx, dword ptr [ebp - 0x254] */ r_edx = R32((u32)(r_ebp+0xfffffdacu));
    /* 00689004: mov eax, dword ptr [edx + 0x208] */ r_eax = R32((u32)(r_edx+0x208u));
    /* 0068900a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0068900c: mov ecx, eax */ r_ecx = r_eax;
    /* 0068900e: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00689011: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x689013u); call_ind(t); }
    /* 00689013: mov esi, eax */ r_esi = r_eax;
    /* 00689015: mov ecx, dword ptr [ebp - 0x254] */ r_ecx = R32((u32)(r_ebp+0xfffffdacu));
    /* 0068901b: mov ecx, dword ptr [ecx + 0x208] */ r_ecx = R32((u32)(r_ecx+0x208u));
    /* 00689021: call 0x61ed80 */ r_esp -= 4; W32(r_esp, 0x689026u); f_0061ed80();
    /* 00689026: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00689028: mov dword ptr [ebp - 0x24c], esi */ W32((u32)(r_ebp+0xfffffdb4u), r_esi);
L_0068902e:; BB(0x0068902e);
    /* 0068902e: mov edx, dword ptr [ebp - 0x254] */ r_edx = R32((u32)(r_ebp+0xfffffdacu));
    /* 00689034: mov eax, dword ptr [edx + 0x20c] */ r_eax = R32((u32)(r_edx+0x20cu));
    /* 0068903a: movsx ecx, byte ptr [eax] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 0068903d: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00689040: je 0x6890ac */ if (fZ) goto L_006890ac;
L_00689042:; BB(0x00689042);
    /* 00689042: mov edx, dword ptr [ebp - 0x254] */ r_edx = R32((u32)(r_ebp+0xfffffdacu));
    /* 00689048: mov eax, dword ptr [edx + 0x20c] */ r_eax = R32((u32)(r_edx+0x20cu));
    /* 0068904e: movsx ecx, byte ptr [eax] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 00689051: cmp ecx, 0xd */ {  u32 a = r_ecx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00689054: je 0x6890ac */ if (fZ) goto L_006890ac;
L_00689056:; BB(0x00689056);
    /* 00689056: mov edx, dword ptr [ebp - 0x254] */ r_edx = R32((u32)(r_ebp+0xfffffdacu));
    /* 0068905c: mov eax, dword ptr [edx + 0x20c] */ r_eax = R32((u32)(r_edx+0x20cu));
    /* 00689062: cmp eax, dword ptr [ebp - 0x24c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffdb4u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00689068: jae 0x6890ac */ if (!fC) goto L_006890ac;
L_0068906a:; BB(0x0068906a);
    /* 0068906a: mov ecx, dword ptr [ebp - 0x254] */ r_ecx = R32((u32)(r_ebp+0xfffffdacu));
    /* 00689070: mov edx, dword ptr [ecx + 0x20c] */ r_edx = R32((u32)(r_ecx+0x20cu));
    /* 00689076: mov eax, dword ptr [ebp - 0x244] */ r_eax = R32((u32)(r_ebp+0xfffffdbcu));
    /* 0068907c: mov cl, byte ptr [edx] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 0068907e: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 00689080: mov edx, dword ptr [ebp - 0x244] */ r_edx = R32((u32)(r_ebp+0xfffffdbcu));
    /* 00689086: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00689089: mov dword ptr [ebp - 0x244], edx */ W32((u32)(r_ebp+0xfffffdbcu), r_edx);
    /* 0068908f: mov eax, dword ptr [ebp - 0x254] */ r_eax = R32((u32)(r_ebp+0xfffffdacu));
    /* 00689095: mov ecx, dword ptr [eax + 0x20c] */ r_ecx = R32((u32)(r_eax+0x20cu));
    /* 0068909b: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0068909e: mov edx, dword ptr [ebp - 0x254] */ r_edx = R32((u32)(r_ebp+0xfffffdacu));
    /* 006890a4: mov dword ptr [edx + 0x20c], ecx */ W32((u32)(r_edx+0x20cu), r_ecx);
    /* 006890aa: jmp 0x68902e */ goto L_0068902e;
L_006890ac:; BB(0x006890ac);
    /* 006890ac: mov eax, dword ptr [ebp - 0x244] */ r_eax = R32((u32)(r_ebp+0xfffffdbcu));
    /* 006890b2: mov byte ptr [eax], 0 */ W8((u32)(r_eax), 0x0u);
    /* 006890b5: mov ecx, dword ptr [ebp - 0x244] */ r_ecx = R32((u32)(r_ebp+0xfffffdbcu));
    /* 006890bb: lea edx, [ebp - 0x240] */ r_edx = (u32)(r_ebp+0xfffffdc0u);
    /* 006890c1: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 006890c3: mov dword ptr [ebp - 0x248], ecx */ W32((u32)(r_ebp+0xfffffdb8u), r_ecx);
    /* 006890c9: je 0x6890d4 */ if (fZ) goto L_006890d4;
L_006890cb:; BB(0x006890cb);
    /* 006890cb: cmp dword ptr [ebp - 0x248], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffdb8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006890d2: jne 0x6890db */ if (!fZ) goto L_006890db;
L_006890d4:; BB(0x006890d4);
    /* 006890d4: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006890d6: jmp 0x689299 */ goto L_00689299;
L_006890db:; BB(0x006890db);
    /* 006890db: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006890df: je 0x689107 */ if (fZ) goto L_00689107;
L_006890e1:; BB(0x006890e1);
    /* 006890e1: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006890e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006890e5: lea ecx, [ebp - 0x240] */ r_ecx = (u32)(r_ebp+0xfffffdc0u);
    /* 006890eb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006890ec: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x6890f1u); f_00686ecc();
    /* 006890f1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006890f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006890f5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006890f7: lea edx, [ebp - 0x240] */ r_edx = (u32)(r_ebp+0xfffffdc0u);
    /* 006890fd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006890fe: call dword ptr [0x6b2260] */ { u32 t = R32((u32)(0x6b2260u)); r_esp -= 4; W32(r_esp, 0x689104u); call_ind(t); }
    /* 00689104: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00689107:; BB(0x00689107);
    /* 00689107: mov byte ptr [ebp - 0x110], 0 */ W8((u32)(r_ebp+0xfffffef0u), 0x0u);
L_0068910e:; BB(0x0068910e);
    /* 0068910e: mov eax, dword ptr [ebp - 0x254] */ r_eax = R32((u32)(r_ebp+0xfffffdacu));
    /* 00689114: mov ecx, dword ptr [eax + 0x20c] */ r_ecx = R32((u32)(r_eax+0x20cu));
    /* 0068911a: movsx edx, byte ptr [ecx] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx));
    /* 0068911d: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00689120: je 0x68914a */ if (fZ) goto L_0068914a;
L_00689122:; BB(0x00689122);
    /* 00689122: mov eax, dword ptr [ebp - 0x254] */ r_eax = R32((u32)(r_ebp+0xfffffdacu));
    /* 00689128: mov ecx, dword ptr [eax + 0x20c] */ r_ecx = R32((u32)(r_eax+0x20cu));
    /* 0068912e: movsx edx, byte ptr [ecx] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx));
    /* 00689131: cmp edx, 0xd */ {  u32 a = r_edx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00689134: jne 0x689167 */ if (!fZ) goto L_00689167;
L_00689136:; BB(0x00689136);
    /* 00689136: mov eax, dword ptr [ebp - 0x254] */ r_eax = R32((u32)(r_ebp+0xfffffdacu));
    /* 0068913c: mov ecx, dword ptr [eax + 0x20c] */ r_ecx = R32((u32)(r_eax+0x20cu));
    /* 00689142: cmp ecx, dword ptr [ebp - 0x24c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffdb4u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00689148: jae 0x689167 */ if (!fC) goto L_00689167;
L_0068914a:; BB(0x0068914a);
    /* 0068914a: mov edx, dword ptr [ebp - 0x254] */ r_edx = R32((u32)(r_ebp+0xfffffdacu));
    /* 00689150: mov eax, dword ptr [edx + 0x20c] */ r_eax = R32((u32)(r_edx+0x20cu));
    /* 00689156: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00689159: mov ecx, dword ptr [ebp - 0x254] */ r_ecx = R32((u32)(r_ebp+0xfffffdacu));
    /* 0068915f: mov dword ptr [ecx + 0x20c], eax */ W32((u32)(r_ecx+0x20cu), r_eax);
    /* 00689165: jmp 0x68910e */ goto L_0068910e;
L_00689167:; BB(0x00689167);
    /* 00689167: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068916b: je 0x6891a5 */ if (fZ) goto L_006891a5;
L_0068916d:; BB(0x0068916d);
    /* 0068916d: cmp dword ptr [ebp - 0x248], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffdb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00689174: je 0x6891a5 */ if (fZ) goto L_006891a5;
L_00689176:; BB(0x00689176);
    /* 00689176: cmp dword ptr [ebp - 0x248], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffdb8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068917d: je 0x6891a5 */ if (fZ) goto L_006891a5;
L_0068917f:; BB(0x0068917f);
    /* 0068917f: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00689182: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00689183: lea eax, [ebp - 0x110] */ r_eax = (u32)(r_ebp+0xfffffef0u);
    /* 00689189: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068918a: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x68918fu); f_00686ecc();
    /* 0068918f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00689192: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00689193: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00689195: lea ecx, [ebp - 0x110] */ r_ecx = (u32)(r_ebp+0xfffffef0u);
    /* 0068919b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068919c: call dword ptr [0x6b2260] */ { u32 t = R32((u32)(0x6b2260u)); r_esp -= 4; W32(r_esp, 0x6891a2u); call_ind(t); }
    /* 006891a2: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006891a5:; BB(0x006891a5);
    /* 006891a5: lea edx, [ebp - 0x240] */ r_edx = (u32)(r_ebp+0xfffffdc0u);
    /* 006891ab: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006891ac: mov ecx, dword ptr [ebp - 0x254] */ r_ecx = R32((u32)(r_ebp+0xfffffdacu));
    /* 006891b2: call 0x6896c0 */ r_esp -= 4; W32(r_esp, 0x6891b7u); f_006896c0();
    /* 006891b7: movsx eax, byte ptr [ebp - 0x240] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffdc0u));
    /* 006891be: cmp eax, 0x3b */ {  u32 a = r_eax; u32 b = 0x3bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006891c1: jne 0x6891c5 */ if (!fZ) goto L_006891c5;
L_006891c3:; BB(0x006891c3);
    /* 006891c3: jmp 0x689231 */ goto L_00689231;
L_006891c5:; BB(0x006891c5);
    /* 006891c5: movsx ecx, byte ptr [ebp - 0x240] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffdc0u));
    /* 006891cc: cmp ecx, 0x5b */ {  u32 a = r_ecx; u32 b = 0x5bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006891cf: jne 0x689231 */ if (!fZ) goto L_00689231;
L_006891d1:; BB(0x006891d1);
    /* 006891d1: push 0x5d */ { u32 v = 0x5du; r_esp -= 4; W32(r_esp, v); }
    /* 006891d3: lea edx, [ebp - 0x23f] */ r_edx = (u32)(r_ebp+0xfffffdc1u);
    /* 006891d9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006891da: call dword ptr [0x6b22b8] */ { u32 t = R32((u32)(0x6b22b8u)); r_esp -= 4; W32(r_esp, 0x6891e0u); call_ind(t); }
    /* 006891e0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006891e3: mov dword ptr [ebp - 0x250], eax */ W32((u32)(r_ebp+0xfffffdb0u), r_eax);
    /* 006891e9: cmp dword ptr [ebp - 0x250], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffdb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006891f0: jne 0x6891f4 */ if (!fZ) goto L_006891f4;
L_006891f2:; BB(0x006891f2);
    /* 006891f2: jmp 0x689231 */ goto L_00689231;
L_006891f4:; BB(0x006891f4);
    /* 006891f4: mov eax, dword ptr [ebp - 0x250] */ r_eax = R32((u32)(r_ebp+0xfffffdb0u));
    /* 006891fa: mov byte ptr [eax], 0 */ W8((u32)(r_eax), 0x0u);
    /* 006891fd: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00689200: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00689201: lea edx, [ebp - 0x23f] */ r_edx = (u32)(r_ebp+0xfffffdc1u);
    /* 00689207: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00689208: call dword ptr [0x6b21e4] */ { u32 t = R32((u32)(0x6b21e4u)); r_esp -= 4; W32(r_esp, 0x68920eu); call_ind(t); }
    /* 0068920e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00689211: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00689213: jne 0x689231 */ if (!fZ) goto L_00689231;
L_00689215:; BB(0x00689215);
    /* 00689215: mov eax, dword ptr [ebp - 0x254] */ r_eax = R32((u32)(r_ebp+0xfffffdacu));
    /* 0068921b: mov ecx, dword ptr [ebp - 0x254] */ r_ecx = R32((u32)(r_ebp+0xfffffdacu));
    /* 00689221: mov edx, dword ptr [ecx + 0x20c] */ r_edx = R32((u32)(r_ecx+0x20cu));
    /* 00689227: mov dword ptr [eax + 0x210], edx */ W32((u32)(r_eax+0x210u), r_edx);
    /* 0068922d: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0068922f: jmp 0x689299 */ goto L_00689299;
L_00689231:; BB(0x00689231);
    /* 00689231: mov eax, dword ptr [ebp - 0x254] */ r_eax = R32((u32)(r_ebp+0xfffffdacu));
    /* 00689237: mov ecx, dword ptr [eax + 0x208] */ r_ecx = R32((u32)(r_eax+0x208u));
    /* 0068923d: mov edx, dword ptr [ebp - 0x254] */ r_edx = R32((u32)(r_ebp+0xfffffdacu));
    /* 00689243: mov eax, dword ptr [edx + 0x208] */ r_eax = R32((u32)(r_edx+0x208u));
    /* 00689249: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0068924b: mov ecx, eax */ r_ecx = r_eax;
    /* 0068924d: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00689250: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x689252u); call_ind(t); }
    /* 00689252: mov esi, eax */ r_esi = r_eax;
    /* 00689254: mov ecx, dword ptr [ebp - 0x254] */ r_ecx = R32((u32)(r_ebp+0xfffffdacu));
    /* 0068925a: mov ecx, dword ptr [ecx + 0x208] */ r_ecx = R32((u32)(r_ecx+0x208u));
    /* 00689260: call 0x61ed80 */ r_esp -= 4; W32(r_esp, 0x689265u); f_0061ed80();
    /* 00689265: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00689267: mov edx, dword ptr [ebp - 0x254] */ r_edx = R32((u32)(r_ebp+0xfffffdacu));
    /* 0068926d: cmp dword ptr [edx + 0x20c], esi */ {  u32 a = R32((u32)(r_edx+0x20cu)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00689273: jb 0x688fdf */ if (fC) goto L_00688fdf;
L_00689279:; BB(0x00689279);
    /* 00689279: jmp 0x689297 */ goto L_00689297;
L_0068927b:; BB(0x0068927b);
    /* 0068927b: mov eax, dword ptr [ebp - 0x254] */ r_eax = R32((u32)(r_ebp+0xfffffdacu));
    /* 00689281: mov ecx, dword ptr [ebp - 0x254] */ r_ecx = R32((u32)(r_ebp+0xfffffdacu));
    /* 00689287: mov edx, dword ptr [ecx + 0x210] */ r_edx = R32((u32)(r_ecx+0x210u));
    /* 0068928d: mov dword ptr [eax + 0x20c], edx */ W32((u32)(r_eax+0x20cu), r_edx);
    /* 00689293: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00689295: jmp 0x689299 */ goto L_00689299;
L_00689297:; BB(0x00689297);
    /* 00689297: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_00689299:; BB(0x00689299);
    /* 00689299: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068929a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068929d: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0068929f: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x6892a4u); f_00686d72();
    /* 006892a4: mov esp, ebp */ r_esp = r_ebp;
    /* 006892a6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006892a7: ret 8 */ FN_RET(0x00688f10); r_esp += 12; return;
}

