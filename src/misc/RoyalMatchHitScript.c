#include "protos.h"

void f_005ab8a0(void) /* RoyalMatchHitScript::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ab8a0);
    /* 005ab8a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ab8a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005ab8a3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ab8a5: push 0x6a7bdc */ { u32 v = 0x6a7bdcu; r_esp -= 4; W32(r_esp, v); }
    /* 005ab8aa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ab8b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ab8b1: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ab8b4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005ab8b9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005ab8bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ab8bc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005ab8bf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005ab8c5: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005ab8c8: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005ab8cb: call 0x5fc360 */ r_esp -= 4; W32(r_esp, 0x5ab8d0u); f_005fc360();
    /* 005ab8d0: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005ab8d3: cmp dword ptr [ebp - 0x28], 6 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005ab8d7: ja 0x5abc98 */ if ((!fC&&!fZ)) goto L_005abc98;
L_005ab8dd:; BB(0x005ab8dd);
    /* 005ab8dd: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005ab8e0: jmp dword ptr [eax*4 + 0x5abcc4] */ { u32 t = R32((u32)(r_eax*4+0x5abcc4u)); switch (t) { case 0x5ab8e7u: goto L_005ab8e7; case 0x5ab90au: goto L_005ab90a; case 0x5ab97cu: goto L_005ab97c; case 0x5ab9fdu: goto L_005ab9fd; case 0x5abaf5u: goto L_005abaf5; case 0x5abb3au: goto L_005abb3a; case 0x5abc6bu: goto L_005abc6b; default: UNSUP(0x005ab8e0, "jump table entry is not a known target"); } }
L_005ab8e7:; BB(0x005ab8e7);
    /* 005ab8e7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ab8e9: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005ab8ec: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005ab8ee: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005ab8f1: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005ab8f4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ab8f6u); call_ind(t); }
    /* 005ab8f6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ab8f8: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005ab8fb: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005ab8fd: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005ab900: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 005ab903: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ab905u); call_ind(t); }
    /* 005ab905: jmp 0x5abcb3 */ goto L_005abcb3;
L_005ab90a:; BB(0x005ab90a);
    /* 005ab90a: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005ab90c: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005ab90f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005ab911: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005ab914: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005ab917: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ab919u); call_ind(t); }
    /* 005ab919: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005ab91f: mov edx, dword ptr [ecx + 0x57c] */ r_edx = R32((u32)(r_ecx+0x57cu));
    /* 005ab925: mov eax, dword ptr [edx + 0x808] */ r_eax = R32((u32)(r_edx+0x808u));
    /* 005ab92b: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005ab92e: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ab932: jge 0x5ab93f */ if ((fS==fO)) goto L_005ab93f;
L_005ab934:; BB(0x005ab934);
    /* 005ab934: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005ab93a: call 0x5b7f70 */ r_esp -= 4; W32(r_esp, 0x5ab93fu); f_005b7f70();
L_005ab93f:; BB(0x005ab93f);
    /* 005ab93f: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005ab945: cmp dword ptr [ecx + 0x5bc], 2 */ {  u32 a = R32((u32)(r_ecx+0x5bcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ab94c: jne 0x5ab968 */ if (!fZ) goto L_005ab968;
L_005ab94e:; BB(0x005ab94e);
    /* 005ab94e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ab950: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005ab953: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ab954: push 0xcc1a */ { u32 v = 0xcc1au; r_esp -= 4; W32(r_esp, v); }
    /* 005ab959: mov eax, dword ptr [0x7935f8] */ r_eax = R32((u32)(0x7935f8u));
    /* 005ab95e: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 005ab961: call 0x5cd7c0 */ r_esp -= 4; W32(r_esp, 0x5ab966u); f_005cd7c0();
    /* 005ab966: jmp 0x5ab977 */ goto L_005ab977;
L_005ab968:; BB(0x005ab968);
    /* 005ab968: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ab96a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005ab96d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005ab96f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005ab972: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 005ab975: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ab977u); call_ind(t); }
L_005ab977:; BB(0x005ab977);
    /* 005ab977: jmp 0x5abcb3 */ goto L_005abcb3;
L_005ab97c:; BB(0x005ab97c);
    /* 005ab97c: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005ab97e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005ab981: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005ab983: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005ab986: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005ab989: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ab98bu); call_ind(t); }
    /* 005ab98b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005ab98e: call 0x5abce0 */ r_esp -= 4; W32(r_esp, 0x5ab993u); f_005abce0();
    /* 005ab993: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005ab996: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ab998: je 0x5ab9e9 */ if (fZ) goto L_005ab9e9;
L_005ab99a:; BB(0x005ab99a);
    /* 005ab99a: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 005ab99c: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5ab9a1u); f_00686d82();
    /* 005ab9a1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ab9a4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005ab9a7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005ab9ae: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ab9b2: je 0x5ab9c7 */ if (fZ) goto L_005ab9c7;
L_005ab9b4:; BB(0x005ab9b4);
    /* 005ab9b4: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005ab9b7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ab9b8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ab9ba: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ab9bd: call 0x5aa670 */ r_esp -= 4; W32(r_esp, 0x5ab9c2u); f_005aa670();
    /* 005ab9c2: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005ab9c5: jmp 0x5ab9ce */ goto L_005ab9ce;
L_005ab9c7:; BB(0x005ab9c7);
    /* 005ab9c7: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_005ab9ce:; BB(0x005ab9ce);
    /* 005ab9ce: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005ab9d1: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005ab9d4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005ab9db: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ab9de: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ab9df: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005ab9e2: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x5ab9e7u); f_005fc420();
    /* 005ab9e7: jmp 0x5ab9f8 */ goto L_005ab9f8;
L_005ab9e9:; BB(0x005ab9e9);
    /* 005ab9e9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ab9eb: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005ab9ee: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005ab9f0: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005ab9f3: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 005ab9f6: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5ab9f8u); call_ind(t); }
L_005ab9f8:; BB(0x005ab9f8);
    /* 005ab9f8: jmp 0x5abcb3 */ goto L_005abcb3;
L_005ab9fd:; BB(0x005ab9fd);
    /* 005ab9fd: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005ab9ff: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005aba02: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005aba04: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005aba07: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005aba0a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5aba0cu); call_ind(t); }
    /* 005aba0c: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005aba0f: call 0x5abce0 */ r_esp -= 4; W32(r_esp, 0x5aba14u); f_005abce0();
    /* 005aba14: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005aba17: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aba19: je 0x5aba71 */ if (fZ) goto L_005aba71;
L_005aba1b:; BB(0x005aba1b);
    /* 005aba1b: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 005aba1d: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5aba22u); f_00686d82();
    /* 005aba22: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005aba25: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005aba28: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005aba2f: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aba33: je 0x5aba4f */ if (fZ) goto L_005aba4f;
L_005aba35:; BB(0x005aba35);
    /* 005aba35: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005aba38: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005aba39: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005aba3b: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005aba3e: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 005aba41: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005aba42: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005aba45: call 0x5aadf0 */ r_esp -= 4; W32(r_esp, 0x5aba4au); f_005aadf0();
    /* 005aba4a: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005aba4d: jmp 0x5aba56 */ goto L_005aba56;
L_005aba4f:; BB(0x005aba4f);
    /* 005aba4f: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_005aba56:; BB(0x005aba56);
    /* 005aba56: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005aba59: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005aba5c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005aba63: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005aba66: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aba67: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005aba6a: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x5aba6fu); f_005fc420();
    /* 005aba6f: jmp 0x5abaf0 */ goto L_005abaf0;
L_005aba71:; BB(0x005aba71);
    /* 005aba71: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005aba73: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005aba79: mov ecx, dword ptr [ecx + 0x57c] */ r_ecx = R32((u32)(r_ecx+0x57cu));
    /* 005aba7f: call 0x6436c0 */ r_esp -= 4; W32(r_esp, 0x5aba84u); f_006436c0();
    /* 005aba84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aba85: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005aba88: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 005aba8b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aba8c: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005aba92: call 0x5b31b0 */ r_esp -= 4; W32(r_esp, 0x5aba97u); f_005b31b0();
    /* 005aba97: mov ecx, dword ptr [0x7935f8] */ r_ecx = R32((u32)(0x7935f8u));
    /* 005aba9d: call 0x5a7ea0 */ r_esp -= 4; W32(r_esp, 0x5abaa2u); f_005a7ea0();
    /* 005abaa2: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005abaa8: call 0x5b6740 */ r_esp -= 4; W32(r_esp, 0x5abaadu); f_005b6740();
    /* 005abaad: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005abab0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005abab2: je 0x5abae1 */ if (fZ) goto L_005abae1;
L_005abab4:; BB(0x005abab4);
    /* 005abab4: push 0x13b1 */ { u32 v = 0x13b1u; r_esp -= 4; W32(r_esp, v); }
    /* 005abab9: mov edx, dword ptr [0x7935f8] */ r_edx = R32((u32)(0x7935f8u));
    /* 005ababf: mov ecx, dword ptr [edx + 0x44] */ r_ecx = R32((u32)(r_edx+0x44u));
    /* 005abac2: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x5abac7u); f_005eaf00();
    /* 005abac7: mov eax, dword ptr [0x7935f8] */ r_eax = R32((u32)(0x7935f8u));
    /* 005abacc: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 005abacf: mov edx, dword ptr [0x7935f8] */ r_edx = R32((u32)(0x7935f8u));
    /* 005abad5: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005abad8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005abada: mov ecx, eax */ r_ecx = r_eax;
    /* 005abadc: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005abadf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5abae1u); call_ind(t); }
L_005abae1:; BB(0x005abae1);
    /* 005abae1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005abae3: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005abae6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005abae8: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005abaeb: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 005abaee: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5abaf0u); call_ind(t); }
L_005abaf0:; BB(0x005abaf0);
    /* 005abaf0: jmp 0x5abcb3 */ goto L_005abcb3;
L_005abaf5:; BB(0x005abaf5);
    /* 005abaf5: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005abaf7: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005abafa: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005abafc: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005abaff: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005abb02: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5abb04u); call_ind(t); }
    /* 005abb04: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005abb07: call 0x5abce0 */ r_esp -= 4; W32(r_esp, 0x5abb0cu); f_005abce0();
    /* 005abb0c: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005abb0f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005abb11: je 0x5abb26 */ if (fZ) goto L_005abb26;
L_005abb13:; BB(0x005abb13);
    /* 005abb13: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005abb16: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005abb17: mov eax, dword ptr [0x7935f8] */ r_eax = R32((u32)(0x7935f8u));
    /* 005abb1c: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 005abb1f: call 0x5aa380 */ r_esp -= 4; W32(r_esp, 0x5abb24u); f_005aa380();
    /* 005abb24: jmp 0x5abb35 */ goto L_005abb35;
L_005abb26:; BB(0x005abb26);
    /* 005abb26: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005abb28: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005abb2b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005abb2d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005abb30: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 005abb33: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5abb35u); call_ind(t); }
L_005abb35:; BB(0x005abb35);
    /* 005abb35: jmp 0x5abcb3 */ goto L_005abcb3;
L_005abb3a:; BB(0x005abb3a);
    /* 005abb3a: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005abb3c: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005abb3f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005abb41: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005abb44: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005abb47: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5abb49u); call_ind(t); }
    /* 005abb49: mov ecx, dword ptr [0x7935f8] */ r_ecx = R32((u32)(0x7935f8u));
    /* 005abb4f: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 005abb52: mov eax, dword ptr [0x7935f8] */ r_eax = R32((u32)(0x7935f8u));
    /* 005abb57: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 005abb5a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005abb5c: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005abb5f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5abb61u); call_ind(t); }
    /* 005abb61: mov ecx, dword ptr [0x7935f8] */ r_ecx = R32((u32)(0x7935f8u));
    /* 005abb67: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 005abb6a: mov eax, dword ptr [0x7935f8] */ r_eax = R32((u32)(0x7935f8u));
    /* 005abb6f: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 005abb72: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005abb74: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005abb77: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5abb79u); call_ind(t); }
    /* 005abb79: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005abb7f: mov byte ptr [ecx + 0x5c0], 0 */ W8((u32)(r_ecx+0x5c0u), 0x0u);
    /* 005abb86: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005abb88: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005abb8b: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 005abb8e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005abb8f: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005abb95: call 0x5b3300 */ r_esp -= 4; W32(r_esp, 0x5abb9au); f_005b3300();
    /* 005abb9a: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005abb9d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005abb9f: je 0x5abc09 */ if (fZ) goto L_005abc09;
L_005abba1:; BB(0x005abba1);
    /* 005abba1: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005abba4: cmp dword ptr [edx + 0x24], 4 */ {  u32 a = R32((u32)(r_edx+0x24u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005abba8: jne 0x5abbc5 */ if (!fZ) goto L_005abbc5;
L_005abbaa:; BB(0x005abbaa);
    /* 005abbaa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005abbac: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005abbaf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005abbb0: push 0xcb9d */ { u32 v = 0xcb9du; r_esp -= 4; W32(r_esp, v); }
    /* 005abbb5: mov ecx, dword ptr [0x7935f8] */ r_ecx = R32((u32)(0x7935f8u));
    /* 005abbbb: mov ecx, dword ptr [ecx + 0x2c] */ r_ecx = R32((u32)(r_ecx+0x2cu));
    /* 005abbbe: call 0x5cd7c0 */ r_esp -= 4; W32(r_esp, 0x5abbc3u); f_005cd7c0();
    /* 005abbc3: jmp 0x5abc07 */ goto L_005abc07;
L_005abbc5:; BB(0x005abbc5);
    /* 005abbc5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005abbc7: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005abbca: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 005abbcd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005abbce: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005abbd4: call 0x5b4e50 */ r_esp -= 4; W32(r_esp, 0x5abbd9u); f_005b4e50();
    /* 005abbd9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005abbda: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005abbdd: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 005abbe0: mov eax, dword ptr [0x7935f8] */ r_eax = R32((u32)(0x7935f8u));
    /* 005abbe5: mov ecx, dword ptr [eax + edx*4 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 005abbe9: call 0x5ac560 */ r_esp -= 4; W32(r_esp, 0x5abbeeu); f_005ac560();
    /* 005abbee: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005abbf0: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005abbf3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005abbf4: push 0xcc65 */ { u32 v = 0xcc65u; r_esp -= 4; W32(r_esp, v); }
    /* 005abbf9: mov edx, dword ptr [0x7935f8] */ r_edx = R32((u32)(0x7935f8u));
    /* 005abbff: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 005abc02: call 0x5cd7c0 */ r_esp -= 4; W32(r_esp, 0x5abc07u); f_005cd7c0();
L_005abc07:; BB(0x005abc07);
    /* 005abc07: jmp 0x5abc69 */ goto L_005abc69;
L_005abc09:; BB(0x005abc09);
    /* 005abc09: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005abc0c: cmp dword ptr [eax + 0x24], 4 */ {  u32 a = R32((u32)(r_eax+0x24u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005abc10: je 0x5abc5a */ if (fZ) goto L_005abc5a;
L_005abc12:; BB(0x005abc12);
    /* 005abc12: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005abc18: cmp dword ptr [ecx + 0x5bc], 2 */ {  u32 a = R32((u32)(r_ecx+0x5bcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005abc1f: je 0x5abc5a */ if (fZ) goto L_005abc5a;
L_005abc21:; BB(0x005abc21);
    /* 005abc21: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005abc24: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 005abc27: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005abc28: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005abc2e: call 0x5b6170 */ r_esp -= 4; W32(r_esp, 0x5abc33u); f_005b6170();
    /* 005abc33: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005abc36: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005abc38: jne 0x5abc5a */ if (!fZ) goto L_005abc5a;
L_005abc3a:; BB(0x005abc3a);
    /* 005abc3a: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005abc3c: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 005abc3e: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005abc44: call 0x5b7310 */ r_esp -= 4; W32(r_esp, 0x5abc49u); f_005b7310();
    /* 005abc49: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005abc4c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005abc4d: mov ecx, dword ptr [0x7935fc] */ r_ecx = R32((u32)(0x7935fcu));
    /* 005abc53: call 0x5ad620 */ r_esp -= 4; W32(r_esp, 0x5abc58u); f_005ad620();
    /* 005abc58: jmp 0x5abc69 */ goto L_005abc69;
L_005abc5a:; BB(0x005abc5a);
    /* 005abc5a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005abc5c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005abc5f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005abc61: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005abc64: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 005abc67: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5abc69u); call_ind(t); }
L_005abc69:; BB(0x005abc69);
    /* 005abc69: jmp 0x5abcb3 */ goto L_005abcb3;
L_005abc6b:; BB(0x005abc6b);
    /* 005abc6b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005abc6e: cmp dword ptr [ecx + 0x10], 0 */ {  u32 a = R32((u32)(r_ecx+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005abc72: je 0x5abc96 */ if (fZ) goto L_005abc96;
L_005abc74:; BB(0x005abc74);
    /* 005abc74: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005abc76: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005abc79: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005abc7c: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005abc7f: mov ecx, dword ptr [ecx + 0x10] */ r_ecx = R32((u32)(r_ecx+0x10u));
    /* 005abc82: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005abc84: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 005abc87: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5abc89u); call_ind(t); }
    /* 005abc89: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005abc8b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005abc8e: mov ecx, dword ptr [ecx + 0x10] */ r_ecx = R32((u32)(r_ecx+0x10u));
    /* 005abc91: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x5abc96u); f_005fc420();
L_005abc96:; BB(0x005abc96);
    /* 005abc96: jmp 0x5abcb3 */ goto L_005abcb3;
L_005abc98:; BB(0x005abc98);
    /* 005abc98: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 005abc9a: jne 0x5abcb3 */ if (!fZ) goto L_005abcb3;
L_005abc9c:; BB(0x005abc9c);
    /* 005abc9c: push 0x618 */ { u32 v = 0x618u; r_esp -= 4; W32(r_esp, v); }
    /* 005abca1: push 0x6cf934 */ { u32 v = 0x6cf934u; r_esp -= 4; W32(r_esp, v); }
    /* 005abca6: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 005abcab: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5abcb0u); f_005e9f20();
    /* 005abcb0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005abcb3:; BB(0x005abcb3);
    /* 005abcb3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005abcb6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005abcbd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005abcbe: mov esp, ebp */ r_esp = r_ebp;
    /* 005abcc0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005abcc1: ret  */ FN_RET(0x005ab8a0); r_esp += 4; return;
}

