#include "protos.h"

void f_0051f340(void) /* PokerTournamentRoom::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0051f340);
    /* 0051f340: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051f341: mov ebp, esp */ r_ebp = r_esp;
    /* 0051f343: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051f345: push 0x6a3deb */ { u32 v = 0x6a3debu; r_esp -= 4; W32(r_esp, v); }
    /* 0051f34a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0051f350: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051f351: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051f354: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0051f359: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0051f35b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051f35c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0051f35f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0051f365: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0051f368: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0051f36b: mov dword ptr [eax], 0x6c27ac */ W32((u32)(r_eax), 0x6c27acu);
    /* 0051f371: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0051f378: mov dword ptr [0x793160], 0 */ W32((u32)(0x793160u), 0x0u);
    /* 0051f382: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0051f389: jmp 0x51f394 */ goto L_0051f394;
L_0051f38b:; BB(0x0051f38b);
    /* 0051f38b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0051f38e: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051f391: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0051f394:; BB(0x0051f394);
    /* 0051f394: cmp dword ptr [ebp - 0x10], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051f398: jge 0x51f3f3 */ if ((fS==fO)) goto L_0051f3f3;
L_0051f39a:; BB(0x0051f39a);
    /* 0051f39a: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0051f39d: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0051f3a0: cmp dword ptr [eax + edx*4 + 0x94], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x94u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051f3a8: je 0x51f3f1 */ if (fZ) goto L_0051f3f1;
L_0051f3aa:; BB(0x0051f3aa);
    /* 0051f3aa: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0051f3ad: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0051f3b0: mov eax, dword ptr [edx + ecx*4 + 0x94] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x94u));
    /* 0051f3b7: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0051f3ba: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0051f3bd: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0051f3c0: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051f3c4: je 0x51f3d9 */ if (fZ) goto L_0051f3d9;
L_0051f3c6:; BB(0x0051f3c6);
    /* 0051f3c6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051f3c8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0051f3cb: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0051f3cd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0051f3d0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0051f3d2: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x51f3d4u); call_ind(t); }
    /* 0051f3d4: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0051f3d7: jmp 0x51f3e0 */ goto L_0051f3e0;
L_0051f3d9:; BB(0x0051f3d9);
    /* 0051f3d9: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_0051f3e0:; BB(0x0051f3e0);
    /* 0051f3e0: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0051f3e3: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0051f3e6: mov dword ptr [ecx + eax*4 + 0x94], 0 */ W32((u32)(r_ecx+r_eax*4+0x94u), 0x0u);
L_0051f3f1:; BB(0x0051f3f1);
    /* 0051f3f1: jmp 0x51f38b */ goto L_0051f38b;
L_0051f3f3:; BB(0x0051f3f3);
    /* 0051f3f3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0051f3fa: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0051f3fd: call 0x5d7bd0 */ r_esp -= 4; W32(r_esp, 0x51f402u); f_005d7bd0();
    /* 0051f402: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0051f405: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0051f40c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0051f40d: mov esp, ebp */ r_esp = r_ebp;
    /* 0051f40f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051f410: ret  */ FN_RET(0x0051f340); r_esp += 4; return;
}

void f_0051f480(void) /* PokerTournamentRoom::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0051f480);
    /* 0051f480: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051f481: mov ebp, esp */ r_ebp = r_esp;
    /* 0051f483: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051f485: push 0x6a3e11 */ { u32 v = 0x6a3e11u; r_esp -= 4; W32(r_esp, v); }
    /* 0051f48a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0051f490: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051f491: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051f494: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0051f499: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0051f49b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051f49c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0051f49f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0051f4a5: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0051f4a8: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0051f4ab: call 0x5d8230 */ r_esp -= 4; W32(r_esp, 0x51f4b0u); f_005d8230();
    /* 0051f4b0: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051f4b2: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x51f4b7u); f_00686d82();
    /* 0051f4b7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051f4ba: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0051f4bd: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0051f4c4: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051f4c8: je 0x51f4e5 */ if (fZ) goto L_0051f4e5;
L_0051f4ca:; BB(0x0051f4ca);
    /* 0051f4ca: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051f4cc: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0051f4cf: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x51f4d4u); f_005fc0d0();
    /* 0051f4d4: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0051f4d7: mov dword ptr [eax], 0x6c2ac8 */ W32((u32)(r_eax), 0x6c2ac8u);
    /* 0051f4dd: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0051f4e0: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0051f4e3: jmp 0x51f4ec */ goto L_0051f4ec;
L_0051f4e5:; BB(0x0051f4e5);
    /* 0051f4e5: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_0051f4ec:; BB(0x0051f4ec);
    /* 0051f4ec: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0051f4ef: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0051f4f2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0051f4f9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0051f4fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051f4fd: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0051f500: call 0x5f1b70 */ r_esp -= 4; W32(r_esp, 0x51f505u); f_005f1b70();
    /* 0051f505: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0051f50b: mov edx, dword ptr [ecx + 0x4f20] */ r_edx = R32((u32)(r_ecx+0x4f20u));
    /* 0051f511: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051f512: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0051f515: call 0x51f550 */ r_esp -= 4; W32(r_esp, 0x51f51au); f_0051f550();
    /* 0051f51a: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0051f51d: cmp dword ptr [ebp - 0x10], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051f521: je 0x51f534 */ if (fZ) goto L_0051f534;
L_0051f523:; BB(0x0051f523);
    /* 0051f523: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0051f526: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051f527: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0051f52a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0051f52c: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0051f52f: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 0051f532: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x51f534u); call_ind(t); }
L_0051f534:; BB(0x0051f534);
    /* 0051f534: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0051f537: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0051f53e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0051f53f: mov esp, ebp */ r_esp = r_ebp;
    /* 0051f541: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051f542: ret  */ FN_RET(0x0051f480); r_esp += 4; return;
}

void f_0051f5d0(void) /* PokerTournamentRoom::vfunc5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0051f5d0);
    /* 0051f5d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051f5d1: mov ebp, esp */ r_ebp = r_esp;
    /* 0051f5d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051f5d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0051f5d7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0051f5da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051f5db: call 0x5204a0 */ r_esp -= 4; W32(r_esp, 0x51f5e0u); f_005204a0();
    /* 0051f5e0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051f5e3: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051f5e6: jne 0x51f5f6 */ if (!fZ) goto L_0051f5f6;
L_0051f5e8:; BB(0x0051f5e8);
    /* 0051f5e8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0051f5eb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051f5ec: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051f5ef: call 0x520010 */ r_esp -= 4; W32(r_esp, 0x51f5f4u); f_00520010();
    /* 0051f5f4: jmp 0x51f602 */ goto L_0051f602;
L_0051f5f6:; BB(0x0051f5f6);
    /* 0051f5f6: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0051f5f9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051f5fa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051f5fd: call 0x520140 */ r_esp -= 4; W32(r_esp, 0x51f602u); f_00520140();
L_0051f602:; BB(0x0051f602);
    /* 0051f602: mov esp, ebp */ r_esp = r_ebp;
    /* 0051f604: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051f605: ret 4 */ FN_RET(0x0051f5d0); r_esp += 8; return;
}

void f_0051feb0(void) /* PokerTournamentRoom::vfunc12 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0051feb0);
    /* 0051feb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051feb1: mov ebp, esp */ r_ebp = r_esp;
    /* 0051feb3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051feb6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0051feb9: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0051febc: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0051febf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0051fec2: sub ecx, 0x186a1 */ {  u32 a = r_ecx; u32 b = 0x186a1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0051fec8: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0051fecb: cmp dword ptr [ebp - 0xc], 0x36 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x36u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0051fecf: ja 0x51ffa2 */ if ((!fC&&!fZ)) goto L_0051ffa2;
L_0051fed5:; BB(0x0051fed5);
    /* 0051fed5: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0051fed8: movzx eax, byte ptr [edx + 0x51ffcc] */ r_eax = (u32)R8((u32)(r_edx+0x51ffccu));
    /* 0051fedf: jmp dword ptr [eax*4 + 0x51ffb8] */ { u32 t = R32((u32)(r_eax*4+0x51ffb8u)); switch (t) { case 0x51fee6u: goto L_0051fee6; case 0x51ff37u: goto L_0051ff37; case 0x51ff4fu: goto L_0051ff4f; case 0x51ff87u: goto L_0051ff87; case 0x51ffa2u: goto L_0051ffa2; default: UNSUP(0x0051fedf, "jump table entry is not a known target"); } }
L_0051fee6:; BB(0x0051fee6);
    /* 0051fee6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051fee8: push 0x186a6 */ { u32 v = 0x186a6u; r_esp -= 4; W32(r_esp, v); }
    /* 0051feed: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0051fef0: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x51fef5u); f_005fe640();
    /* 0051fef5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051fef7: push 0x186a9 */ { u32 v = 0x186a9u; r_esp -= 4; W32(r_esp, v); }
    /* 0051fefc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0051feff: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x51ff04u); f_005fe640();
    /* 0051ff04: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ff06: push 0x186a7 */ { u32 v = 0x186a7u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ff0b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0051ff0e: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x51ff13u); f_005fe640();
    /* 0051ff13: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ff15: push 0x186a8 */ { u32 v = 0x186a8u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ff1a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0051ff1d: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x51ff22u); f_005fe640();
    /* 0051ff22: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ff24: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051ff26: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051ff28: push 0x1399 */ { u32 v = 0x1399u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ff2d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0051ff30: call 0x5fe240 */ r_esp -= 4; W32(r_esp, 0x51ff35u); f_005fe240();
    /* 0051ff35: jmp 0x51ffa2 */ goto L_0051ffa2;
L_0051ff37:; BB(0x0051ff37);
    /* 0051ff37: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0051ff3a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051ff3b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0051ff3e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051ff3f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051ff42: call 0x5d8670 */ r_esp -= 4; W32(r_esp, 0x51ff47u); f_005d8670();
    /* 0051ff47: mov byte ptr [ebp - 1], al */ W8((u32)(r_ebp+0xffffffffu), (u8)r_eax);
    /* 0051ff4a: mov al, byte ptr [ebp - 1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffffu))) & 0xffu);
    /* 0051ff4d: jmp 0x51ffb2 */ goto L_0051ffb2;
L_0051ff4f:; BB(0x0051ff4f);
    /* 0051ff4f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ff51: push -2 */ { u32 v = 0xfffffffeu; r_esp -= 4; W32(r_esp, v); }
    /* 0051ff53: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0051ff56: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x51ff5bu); f_005fe640();
    /* 0051ff5b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ff5d: push -2 */ { u32 v = 0xfffffffeu; r_esp -= 4; W32(r_esp, v); }
    /* 0051ff5f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0051ff62: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x51ff67u); f_005fe640();
    /* 0051ff67: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ff69: push 0x186c6 */ { u32 v = 0x186c6u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ff6e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0051ff71: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x51ff76u); f_005fe640();
    /* 0051ff76: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ff78: push 0x186c5 */ { u32 v = 0x186c5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ff7d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0051ff80: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x51ff85u); f_005fe640();
    /* 0051ff85: jmp 0x51ffa2 */ goto L_0051ffa2;
L_0051ff87:; BB(0x0051ff87);
    /* 0051ff87: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ff89: push 0x186da */ { u32 v = 0x186dau; r_esp -= 4; W32(r_esp, v); }
    /* 0051ff8e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0051ff91: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x51ff96u); f_005fe640();
    /* 0051ff96: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ff98: push -2 */ { u32 v = 0xfffffffeu; r_esp -= 4; W32(r_esp, v); }
    /* 0051ff9a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0051ff9d: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x51ffa2u); f_005fe640();
L_0051ffa2:; BB(0x0051ffa2);
    /* 0051ffa2: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0051ffa5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051ffa6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0051ffa9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051ffaa: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051ffad: call 0x5d8670 */ r_esp -= 4; W32(r_esp, 0x51ffb2u); f_005d8670();
L_0051ffb2:; BB(0x0051ffb2);
    /* 0051ffb2: mov esp, ebp */ r_esp = r_ebp;
    /* 0051ffb4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051ffb5: ret 8 */ FN_RET(0x0051feb0); r_esp += 12; return;
}

void f_00520280(void) /* PokerTournamentRoom::vfunc99 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00520280);
    /* 00520280: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00520281: mov ebp, esp */ r_ebp = r_esp;
    /* 00520283: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00520284: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00520287: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00520289: call 0x519d40 */ r_esp -= 4; W32(r_esp, 0x52028eu); f_00519d40();
    /* 0052028e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00520291: mov esp, ebp */ r_esp = r_ebp;
    /* 00520293: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00520294: ret  */ FN_RET(0x00520280); r_esp += 4; return;
}

