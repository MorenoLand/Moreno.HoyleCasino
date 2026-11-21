#include "protos.h"

void f_0041e570(void) /* CaribbeanStudDisplay::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041e570);
    /* 0041e570: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041e571: mov ebp, esp */ r_ebp = r_esp;
    /* 0041e573: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041e576: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0041e579: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041e57c: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x41e581u); f_005e9e20();
    /* 0041e581: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041e584: mov dword ptr [eax], 0x6b5bd0 */ W32((u32)(r_eax), 0x6b5bd0u);
    /* 0041e58a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0041e591: jmp 0x41e59c */ goto L_0041e59c;
L_0041e593:; BB(0x0041e593);
    /* 0041e593: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041e596: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0041e599: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0041e59c:; BB(0x0041e59c);
    /* 0041e59c: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041e5a0: jge 0x41e5c0 */ if ((fS==fO)) goto L_0041e5c0;
L_0041e5a2:; BB(0x0041e5a2);
    /* 0041e5a2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041e5a5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041e5a8: mov dword ptr [eax + edx*4 + 4], 0 */ W32((u32)(r_eax+r_edx*4+0x4u), 0x0u);
    /* 0041e5b0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041e5b3: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041e5b6: mov dword ptr [edx + ecx*4 + 0x64], 0 */ W32((u32)(r_edx+r_ecx*4+0x64u), 0x0u);
    /* 0041e5be: jmp 0x41e593 */ goto L_0041e593;
L_0041e5c0:; BB(0x0041e5c0);
    /* 0041e5c0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0041e5c7: jmp 0x41e5d2 */ goto L_0041e5d2;
L_0041e5c9:; BB(0x0041e5c9);
    /* 0041e5c9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041e5cc: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041e5cf: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0041e5d2:; BB(0x0041e5d2);
    /* 0041e5d2: cmp dword ptr [ebp - 4], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041e5d6: jge 0x41e5e8 */ if ((fS==fO)) goto L_0041e5e8;
L_0041e5d8:; BB(0x0041e5d8);
    /* 0041e5d8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041e5db: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041e5de: mov dword ptr [edx + ecx*4 + 0x18], 0 */ W32((u32)(r_edx+r_ecx*4+0x18u), 0x0u);
    /* 0041e5e6: jmp 0x41e5c9 */ goto L_0041e5c9;
L_0041e5e8:; BB(0x0041e5e8);
    /* 0041e5e8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0041e5ef: jmp 0x41e5fa */ goto L_0041e5fa;
L_0041e5f1:; BB(0x0041e5f1);
    /* 0041e5f1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041e5f4: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041e5f7: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0041e5fa:; BB(0x0041e5fa);
    /* 0041e5fa: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041e5fe: jge 0x41e61e */ if ((fS==fO)) goto L_0041e61e;
L_0041e600:; BB(0x0041e600);
    /* 0041e600: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041e603: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041e606: mov dword ptr [edx + ecx*4 + 0x44], 0 */ W32((u32)(r_edx+r_ecx*4+0x44u), 0x0u);
    /* 0041e60e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041e611: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041e614: mov dword ptr [ecx + eax*4 + 0x54], 0 */ W32((u32)(r_ecx+r_eax*4+0x54u), 0x0u);
    /* 0041e61c: jmp 0x41e5f1 */ goto L_0041e5f1;
L_0041e61e:; BB(0x0041e61e);
    /* 0041e61e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041e621: mov dword ptr [edx + 0x38], 0 */ W32((u32)(r_edx+0x38u), 0x0u);
    /* 0041e628: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041e62b: mov dword ptr [eax + 0x78], 0 */ W32((u32)(r_eax+0x78u), 0x0u);
    /* 0041e632: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041e635: mov dword ptr [ecx + 0x7c], 0 */ W32((u32)(r_ecx+0x7cu), 0x0u);
    /* 0041e63c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041e63f: mov dword ptr [edx + 0x3c], 0 */ W32((u32)(r_edx+0x3cu), 0x0u);
    /* 0041e646: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041e649: mov dword ptr [eax + 0x40], 0 */ W32((u32)(r_eax+0x40u), 0x0u);
    /* 0041e650: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041e653: mov esp, ebp */ r_esp = r_ebp;
    /* 0041e655: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041e656: ret  */ FN_RET(0x0041e570); r_esp += 4; return;
}

void f_0041e660(void) /* CaribbeanStudDisplay::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041e660);
    /* 0041e660: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041e661: mov ebp, esp */ r_ebp = r_esp;
    /* 0041e663: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0041e665: push 0x69def8 */ { u32 v = 0x69def8u; r_esp -= 4; W32(r_esp, v); }
    /* 0041e66a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0041e670: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041e671: sub esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041e677: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0041e67c: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0041e67e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041e67f: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0041e682: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0041e688: mov dword ptr [ebp - 0x64], ecx */ W32((u32)(r_ebp+0xffffff9cu), r_ecx);
    /* 0041e68b: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 0041e68e: mov dword ptr [eax], 0x6b5bd0 */ W32((u32)(r_eax), 0x6b5bd0u);
    /* 0041e694: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0041e69b: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0041e6a2: jmp 0x41e6ad */ goto L_0041e6ad;
L_0041e6a4:; BB(0x0041e6a4);
    /* 0041e6a4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041e6a7: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0041e6aa: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0041e6ad:; BB(0x0041e6ad);
    /* 0041e6ad: cmp dword ptr [ebp - 0x10], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041e6b1: jge 0x41e71b */ if ((fS==fO)) goto L_0041e71b;
L_0041e6b3:; BB(0x0041e6b3);
    /* 0041e6b3: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041e6b6: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 0041e6b9: mov ecx, dword ptr [eax + edx*4 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 0041e6bd: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0041e6c0: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0041e6c3: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0041e6c6: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041e6ca: je 0x41e6df */ if (fZ) goto L_0041e6df;
L_0041e6cc:; BB(0x0041e6cc);
    /* 0041e6cc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041e6ce: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0041e6d1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0041e6d3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0041e6d6: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0041e6d8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x41e6dau); call_ind(t); }
    /* 0041e6da: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 0041e6dd: jmp 0x41e6e6 */ goto L_0041e6e6;
L_0041e6df:; BB(0x0041e6df);
    /* 0041e6df: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
L_0041e6e6:; BB(0x0041e6e6);
    /* 0041e6e6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041e6e9: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0041e6ec: mov eax, dword ptr [edx + ecx*4 + 0x64] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x64u));
    /* 0041e6f0: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0041e6f3: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0041e6f6: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0041e6f9: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041e6fd: je 0x41e712 */ if (fZ) goto L_0041e712;
L_0041e6ff:; BB(0x0041e6ff);
    /* 0041e6ff: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041e701: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0041e704: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0041e706: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0041e709: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0041e70b: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x41e70du); call_ind(t); }
    /* 0041e70d: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 0041e710: jmp 0x41e719 */ goto L_0041e719;
L_0041e712:; BB(0x0041e712);
    /* 0041e712: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
L_0041e719:; BB(0x0041e719);
    /* 0041e719: jmp 0x41e6a4 */ goto L_0041e6a4;
L_0041e71b:; BB(0x0041e71b);
    /* 0041e71b: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0041e722: jmp 0x41e72d */ goto L_0041e72d;
L_0041e724:; BB(0x0041e724);
    /* 0041e724: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041e727: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041e72a: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_0041e72d:; BB(0x0041e72d);
    /* 0041e72d: cmp dword ptr [ebp - 0x10], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041e731: jge 0x41e768 */ if ((fS==fO)) goto L_0041e768;
L_0041e733:; BB(0x0041e733);
    /* 0041e733: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041e736: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0041e739: mov eax, dword ptr [edx + ecx*4 + 0x18] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x18u));
    /* 0041e73d: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0041e740: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0041e743: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0041e746: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041e74a: je 0x41e75f */ if (fZ) goto L_0041e75f;
L_0041e74c:; BB(0x0041e74c);
    /* 0041e74c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041e74e: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0041e751: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0041e753: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0041e756: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0041e758: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x41e75au); call_ind(t); }
    /* 0041e75a: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 0041e75d: jmp 0x41e766 */ goto L_0041e766;
L_0041e75f:; BB(0x0041e75f);
    /* 0041e75f: mov dword ptr [ebp - 0x70], 0 */ W32((u32)(r_ebp+0xffffff90u), 0x0u);
L_0041e766:; BB(0x0041e766);
    /* 0041e766: jmp 0x41e724 */ goto L_0041e724;
L_0041e768:; BB(0x0041e768);
    /* 0041e768: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0041e76f: jmp 0x41e77a */ goto L_0041e77a;
L_0041e771:; BB(0x0041e771);
    /* 0041e771: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041e774: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041e777: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_0041e77a:; BB(0x0041e77a);
    /* 0041e77a: cmp dword ptr [ebp - 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041e77e: jge 0x41e7e8 */ if ((fS==fO)) goto L_0041e7e8;
L_0041e780:; BB(0x0041e780);
    /* 0041e780: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041e783: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0041e786: mov eax, dword ptr [edx + ecx*4 + 0x44] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x44u));
    /* 0041e78a: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0041e78d: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0041e790: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0041e793: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041e797: je 0x41e7ac */ if (fZ) goto L_0041e7ac;
L_0041e799:; BB(0x0041e799);
    /* 0041e799: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041e79b: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0041e79e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0041e7a0: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0041e7a3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0041e7a5: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x41e7a7u); call_ind(t); }
    /* 0041e7a7: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 0041e7aa: jmp 0x41e7b3 */ goto L_0041e7b3;
L_0041e7ac:; BB(0x0041e7ac);
    /* 0041e7ac: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
L_0041e7b3:; BB(0x0041e7b3);
    /* 0041e7b3: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041e7b6: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0041e7b9: mov edx, dword ptr [ecx + eax*4 + 0x54] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x54u));
    /* 0041e7bd: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 0041e7c0: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0041e7c3: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0041e7c6: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041e7ca: je 0x41e7df */ if (fZ) goto L_0041e7df;
L_0041e7cc:; BB(0x0041e7cc);
    /* 0041e7cc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041e7ce: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0041e7d1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0041e7d3: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0041e7d6: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0041e7d8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x41e7dau); call_ind(t); }
    /* 0041e7da: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 0041e7dd: jmp 0x41e7e6 */ goto L_0041e7e6;
L_0041e7df:; BB(0x0041e7df);
    /* 0041e7df: mov dword ptr [ebp - 0x78], 0 */ W32((u32)(r_ebp+0xffffff88u), 0x0u);
L_0041e7e6:; BB(0x0041e7e6);
    /* 0041e7e6: jmp 0x41e771 */ goto L_0041e771;
L_0041e7e8:; BB(0x0041e7e8);
    /* 0041e7e8: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0041e7eb: mov edx, dword ptr [ecx + 0x38] */ r_edx = R32((u32)(r_ecx+0x38u));
    /* 0041e7ee: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 0041e7f1: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0041e7f4: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0041e7f7: cmp dword ptr [ebp - 0x3c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041e7fb: je 0x41e810 */ if (fZ) goto L_0041e810;
L_0041e7fd:; BB(0x0041e7fd);
    /* 0041e7fd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041e7ff: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0041e802: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0041e804: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0041e807: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0041e809: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x41e80bu); call_ind(t); }
    /* 0041e80b: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 0041e80e: jmp 0x41e817 */ goto L_0041e817;
L_0041e810:; BB(0x0041e810);
    /* 0041e810: mov dword ptr [ebp - 0x7c], 0 */ W32((u32)(r_ebp+0xffffff84u), 0x0u);
L_0041e817:; BB(0x0041e817);
    /* 0041e817: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0041e81a: mov edx, dword ptr [ecx + 0x78] */ r_edx = R32((u32)(r_ecx+0x78u));
    /* 0041e81d: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 0041e820: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0041e823: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0041e826: cmp dword ptr [ebp - 0x44], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041e82a: je 0x41e83f */ if (fZ) goto L_0041e83f;
L_0041e82c:; BB(0x0041e82c);
    /* 0041e82c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041e82e: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0041e831: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0041e833: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0041e836: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0041e838: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x41e83au); call_ind(t); }
    /* 0041e83a: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 0041e83d: jmp 0x41e846 */ goto L_0041e846;
L_0041e83f:; BB(0x0041e83f);
    /* 0041e83f: mov dword ptr [ebp - 0x80], 0 */ W32((u32)(r_ebp+0xffffff80u), 0x0u);
L_0041e846:; BB(0x0041e846);
    /* 0041e846: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0041e849: mov edx, dword ptr [ecx + 0x7c] */ r_edx = R32((u32)(r_ecx+0x7cu));
    /* 0041e84c: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 0041e84f: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 0041e852: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0041e855: cmp dword ptr [ebp - 0x4c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041e859: je 0x41e871 */ if (fZ) goto L_0041e871;
L_0041e85b:; BB(0x0041e85b);
    /* 0041e85b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041e85d: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0041e860: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0041e862: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0041e865: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0041e867: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x41e869u); call_ind(t); }
    /* 0041e869: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 0041e86f: jmp 0x41e87b */ goto L_0041e87b;
L_0041e871:; BB(0x0041e871);
    /* 0041e871: mov dword ptr [ebp - 0x84], 0 */ W32((u32)(r_ebp+0xffffff7cu), 0x0u);
L_0041e87b:; BB(0x0041e87b);
    /* 0041e87b: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0041e87e: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 0041e881: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 0041e884: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0041e887: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 0041e88a: cmp dword ptr [ebp - 0x54], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffacu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041e88e: je 0x41e8a6 */ if (fZ) goto L_0041e8a6;
L_0041e890:; BB(0x0041e890);
    /* 0041e890: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041e892: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0041e895: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0041e897: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0041e89a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0041e89c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x41e89eu); call_ind(t); }
    /* 0041e89e: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 0041e8a4: jmp 0x41e8b0 */ goto L_0041e8b0;
L_0041e8a6:; BB(0x0041e8a6);
    /* 0041e8a6: mov dword ptr [ebp - 0x88], 0 */ W32((u32)(r_ebp+0xffffff78u), 0x0u);
L_0041e8b0:; BB(0x0041e8b0);
    /* 0041e8b0: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0041e8b3: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 0041e8b6: mov dword ptr [ebp - 0x60], edx */ W32((u32)(r_ebp+0xffffffa0u), r_edx);
    /* 0041e8b9: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 0041e8bc: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 0041e8bf: cmp dword ptr [ebp - 0x5c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041e8c3: je 0x41e8db */ if (fZ) goto L_0041e8db;
L_0041e8c5:; BB(0x0041e8c5);
    /* 0041e8c5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041e8c7: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0041e8ca: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0041e8cc: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0041e8cf: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0041e8d1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x41e8d3u); call_ind(t); }
    /* 0041e8d3: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 0041e8d9: jmp 0x41e8e5 */ goto L_0041e8e5;
L_0041e8db:; BB(0x0041e8db);
    /* 0041e8db: mov dword ptr [ebp - 0x8c], 0 */ W32((u32)(r_ebp+0xffffff74u), 0x0u);
L_0041e8e5:; BB(0x0041e8e5);
    /* 0041e8e5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0041e8ec: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0041e8ef: call 0x5e9e40 */ r_esp -= 4; W32(r_esp, 0x41e8f4u); f_005e9e40();
    /* 0041e8f4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041e8f7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0041e8fe: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0041e8ff: mov esp, ebp */ r_esp = r_ebp;
    /* 0041e901: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041e902: ret  */ FN_RET(0x0041e660); r_esp += 4; return;
}

