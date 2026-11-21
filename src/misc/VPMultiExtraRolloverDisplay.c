#include "protos.h"

void f_00563580(void) /* VPMultiExtraRolloverDisplay::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00563580);
    /* 00563580: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00563581: mov ebp, esp */ r_ebp = r_esp;
    /* 00563583: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00563586: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00563589: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056358c: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x563591u); f_005e9e20();
    /* 00563591: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00563594: mov dword ptr [eax], 0x6c9908 */ W32((u32)(r_eax), 0x6c9908u);
    /* 0056359a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056359d: mov dword ptr [ecx + 4], 0 */ W32((u32)(r_ecx+0x4u), 0x0u);
    /* 005635a4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005635ab: jmp 0x5635b6 */ goto L_005635b6;
L_005635ad:; BB(0x005635ad);
    /* 005635ad: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005635b0: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005635b3: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_005635b6:; BB(0x005635b6);
    /* 005635b6: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005635ba: jge 0x5635cc */ if ((fS==fO)) goto L_005635cc;
L_005635bc:; BB(0x005635bc);
    /* 005635bc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005635bf: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005635c2: mov dword ptr [ecx + eax*4 + 8], 0 */ W32((u32)(r_ecx+r_eax*4+0x8u), 0x0u);
    /* 005635ca: jmp 0x5635ad */ goto L_005635ad;
L_005635cc:; BB(0x005635cc);
    /* 005635cc: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005635cf: mov dword ptr [edx + 0x1c], 0 */ W32((u32)(r_edx+0x1cu), 0x0u);
    /* 005635d6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005635d9: mov byte ptr [eax + 0x20], 0 */ W8((u32)(r_eax+0x20u), 0x0u);
    /* 005635dd: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005635e0: mov esp, ebp */ r_esp = r_ebp;
    /* 005635e2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005635e3: ret  */ FN_RET(0x00563580); r_esp += 4; return;
}

void f_005635f0(void) /* VPMultiExtraRolloverDisplay::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005635f0);
    /* 005635f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005635f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005635f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005635f5: push 0x6a5a38 */ { u32 v = 0x6a5a38u; r_esp -= 4; W32(r_esp, v); }
    /* 005635fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00563600: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00563601: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00563604: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00563609: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0056360b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056360c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0056360f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00563615: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00563618: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0056361b: mov dword ptr [eax], 0x6c9908 */ W32((u32)(r_eax), 0x6c9908u);
    /* 00563621: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00563628: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0056362b: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0056362e: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00563631: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00563634: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00563637: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056363b: je 0x563650 */ if (fZ) goto L_00563650;
L_0056363d:; BB(0x0056363d);
    /* 0056363d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0056363f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00563642: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00563644: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00563647: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00563649: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56364bu); call_ind(t); }
    /* 0056364b: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0056364e: jmp 0x563657 */ goto L_00563657;
L_00563650:; BB(0x00563650);
    /* 00563650: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_00563657:; BB(0x00563657);
    /* 00563657: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0056365e: jmp 0x563669 */ goto L_00563669;
L_00563660:; BB(0x00563660);
    /* 00563660: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00563663: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00563666: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_00563669:; BB(0x00563669);
    /* 00563669: cmp dword ptr [ebp - 0x10], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056366d: jge 0x5636a4 */ if ((fS==fO)) goto L_005636a4;
L_0056366f:; BB(0x0056366f);
    /* 0056366f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00563672: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00563675: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 00563679: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0056367c: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0056367f: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00563682: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00563686: je 0x56369b */ if (fZ) goto L_0056369b;
L_00563688:; BB(0x00563688);
    /* 00563688: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0056368a: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0056368d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0056368f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00563692: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00563694: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x563696u); call_ind(t); }
    /* 00563696: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00563699: jmp 0x5636a2 */ goto L_005636a2;
L_0056369b:; BB(0x0056369b);
    /* 0056369b: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_005636a2:; BB(0x005636a2);
    /* 005636a2: jmp 0x563660 */ goto L_00563660;
L_005636a4:; BB(0x005636a4);
    /* 005636a4: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005636a7: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 005636aa: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 005636ad: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005636b0: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005636b3: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005636b7: je 0x5636df */ if (fZ) goto L_005636df;
L_005636b9:; BB(0x005636b9);
    /* 005636b9: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005636bc: call 0x566720 */ r_esp -= 4; W32(r_esp, 0x5636c1u); f_00566720();
    /* 005636c1: mov ecx, 1 */ r_ecx = 0x1u;
    /* 005636c6: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 005636c9: je 0x5636d7 */ if (fZ) goto L_005636d7;
L_005636cb:; BB(0x005636cb);
    /* 005636cb: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005636ce: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005636cf: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5636d4u); f_00686cae();
    /* 005636d4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005636d7:; BB(0x005636d7);
    /* 005636d7: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005636da: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005636dd: jmp 0x5636e6 */ goto L_005636e6;
L_005636df:; BB(0x005636df);
    /* 005636df: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_005636e6:; BB(0x005636e6);
    /* 005636e6: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005636ed: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005636f0: call 0x5e9e40 */ r_esp -= 4; W32(r_esp, 0x5636f5u); f_005e9e40();
    /* 005636f5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005636f8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005636ff: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00563700: mov esp, ebp */ r_esp = r_ebp;
    /* 00563702: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00563703: ret  */ FN_RET(0x005635f0); r_esp += 4; return;
}

