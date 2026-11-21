#include "protos.h"

void f_006131b0(void) /* VWindow::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006131b0);
    /* 006131b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006131b1: mov ebp, esp */ r_ebp = r_esp;
    /* 006131b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006131b5: push 0x6ab048 */ { u32 v = 0x6ab048u; r_esp -= 4; W32(r_esp, v); }
    /* 006131ba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006131c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006131c1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006131c2: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 006131c7: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006131c9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006131ca: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 006131cd: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 006131d3: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 006131d6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006131d9: call 0x62aea0 */ r_esp -= 4; W32(r_esp, 0x6131deu); f_0062aea0();
    /* 006131de: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006131e5: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 006131e8: mov dword ptr [eax], 0x6d84dc */ W32((u32)(r_eax), 0x6d84dcu);
    /* 006131ee: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006131f1: add ecx, 0x60 */ {  u32 a = r_ecx; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006131f4: call 0x62a870 */ r_esp -= 4; W32(r_esp, 0x6131f9u); f_0062a870();
    /* 006131f9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006131fc: mov dword ptr [ecx + 0x50], 0 */ W32((u32)(r_ecx+0x50u), 0x0u);
    /* 00613203: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00613206: mov dword ptr [edx + 0x48], 0 */ W32((u32)(r_edx+0x48u), 0x0u);
    /* 0061320d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00613210: mov dword ptr [eax + 0x4c], 0 */ W32((u32)(r_eax+0x4cu), 0x0u);
    /* 00613217: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00613219: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061321b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061321e: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00613221: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00613222: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x613227u); f_00686fa2();
    /* 00613227: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061322a: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0061322c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061322e: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00613231: add edx, 0x18 */ {  u32 a = r_edx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00613234: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00613235: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x61323au); f_00686fa2();
    /* 0061323a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061323d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00613240: mov byte ptr [eax + 0x80], 0 */ W8((u32)(r_eax+0x80u), 0x0u);
    /* 00613247: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061324a: mov dword ptr [ecx + 0x84], 0 */ W32((u32)(r_ecx+0x84u), 0x0u);
    /* 00613254: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00613257: mov byte ptr [edx + 0x88], 1 */ W8((u32)(r_edx+0x88u), 0x1u);
    /* 0061325e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00613261: mov byte ptr [eax + 0x58], 1 */ W8((u32)(r_eax+0x58u), 0x1u);
    /* 00613265: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00613268: mov byte ptr [ecx + 0x59], 0 */ W8((u32)(r_ecx+0x59u), 0x0u);
    /* 0061326c: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061326f: mov byte ptr [edx + 0x5a], 1 */ W8((u32)(r_edx+0x5au), 0x1u);
    /* 00613273: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00613276: mov byte ptr [eax + 0x5b], 0 */ W8((u32)(r_eax+0x5bu), 0x0u);
    /* 0061327a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061327d: mov byte ptr [ecx + 0x5c], 0 */ W8((u32)(r_ecx+0x5cu), 0x0u);
    /* 00613281: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00613288: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061328b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061328e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00613295: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00613296: mov esp, ebp */ r_esp = r_ebp;
    /* 00613298: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00613299: ret  */ FN_RET(0x006131b0); r_esp += 4; return;
}

void f_006132a0(void) /* VWindow::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006132a0);
    /* 006132a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006132a1: mov ebp, esp */ r_ebp = r_esp;
    /* 006132a3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006132a5: push 0x6ab076 */ { u32 v = 0x6ab076u; r_esp -= 4; W32(r_esp, v); }
    /* 006132aa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006132b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006132b1: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006132b4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 006132b9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006132bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006132bc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 006132bf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 006132c5: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 006132c8: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006132cb: mov dword ptr [eax], 0x6d84dc */ W32((u32)(r_eax), 0x6d84dcu);
    /* 006132d1: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006132d8: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006132db: call 0x613da0 */ r_esp -= 4; W32(r_esp, 0x6132e0u); f_00613da0();
    /* 006132e0: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006132e3: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 006132e6: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 006132e9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006132ec: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 006132ef: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006132f3: je 0x613308 */ if (fZ) goto L_00613308;
L_006132f5:; BB(0x006132f5);
    /* 006132f5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006132f7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006132fa: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006132fc: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006132ff: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00613301: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x613303u); call_ind(t); }
    /* 00613303: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00613306: jmp 0x61330f */ goto L_0061330f;
L_00613308:; BB(0x00613308);
    /* 00613308: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_0061330f:; BB(0x0061330f);
    /* 0061330f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00613312: mov edx, dword ptr [ecx + 0x84] */ r_edx = R32((u32)(r_ecx+0x84u));
    /* 00613318: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0061331b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061331e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061331f: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x613324u); f_00686cae();
    /* 00613324: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00613327: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061332b: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0061332e: add ecx, 0x60 */ {  u32 a = r_ecx; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00613331: call 0x62a900 */ r_esp -= 4; W32(r_esp, 0x613336u); f_0062a900();
    /* 00613336: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0061333d: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00613340: call 0x62aef0 */ r_esp -= 4; W32(r_esp, 0x613345u); f_0062aef0();
    /* 00613345: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00613348: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061334f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00613350: mov esp, ebp */ r_esp = r_ebp;
    /* 00613352: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00613353: ret  */ FN_RET(0x006132a0); r_esp += 4; return;
}

void f_00613360(void) /* VWindow::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00613360);
    /* 00613360: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00613361: mov ebp, esp */ r_ebp = r_esp;
    /* 00613363: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00613365: push 0x6ab09c */ { u32 v = 0x6ab09cu; r_esp -= 4; W32(r_esp, v); }
    /* 0061336a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00613370: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00613371: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00613374: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00613379: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061337b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061337c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0061337f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00613385: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00613388: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0061338b: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0061338e: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 00613391: sub edx, dword ptr [ecx + 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x18u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00613394: cmp edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00613397: jne 0x6133af */ if (!fZ) goto L_006133af;
L_00613399:; BB(0x00613399);
    /* 00613399: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0061339c: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0061339f: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 006133a2: sub edx, dword ptr [ecx + 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x1cu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006133a5: cmp edx, dword ptr [ebp + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006133a8: jne 0x6133af */ if (!fZ) goto L_006133af;
L_006133aa:; BB(0x006133aa);
    /* 006133aa: jmp 0x61348a */ goto L_0061348a;
L_006133af:; BB(0x006133af);
    /* 006133af: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 006133b2: add eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006133b5: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006133b8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006133bb: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 006133c1: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006133c4: mov dword ptr [edx + 4], 0 */ W32((u32)(r_edx+0x4u), 0x0u);
    /* 006133cb: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006133ce: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006133d1: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 006133d4: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006133d7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006133da: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 006133dd: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006133e0: add ecx, 0x28 */ {  u32 a = r_ecx; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006133e3: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006133e6: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006133e9: mov dword ptr [edx], 0 */ W32((u32)(r_edx), 0x0u);
    /* 006133ef: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006133f2: mov dword ptr [eax + 4], 0 */ W32((u32)(r_eax+0x4u), 0x0u);
    /* 006133f9: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006133fc: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006133ff: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00613402: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00613405: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00613408: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 0061340b: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0061340e: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 00613411: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00613414: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00613417: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0061341a: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061341e: je 0x613433 */ if (fZ) goto L_00613433;
L_00613420:; BB(0x00613420);
    /* 00613420: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00613422: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00613425: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00613427: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061342a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0061342c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x61342eu); call_ind(t); }
    /* 0061342e: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00613431: jmp 0x61343a */ goto L_0061343a;
L_00613433:; BB(0x00613433);
    /* 00613433: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0061343a:; BB(0x0061343a);
    /* 0061343a: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0061343c: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x613441u); f_00686d82();
    /* 00613441: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00613444: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00613447: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061344e: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00613452: je 0x61346d */ if (fZ) goto L_0061346d;
L_00613454:; BB(0x00613454);
    /* 00613454: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00613456: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00613458: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0061345b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061345c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061345f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00613460: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00613463: call 0x623700 */ r_esp -= 4; W32(r_esp, 0x613468u); f_00623700();
    /* 00613468: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0061346b: jmp 0x613474 */ goto L_00613474;
L_0061346d:; BB(0x0061346d);
    /* 0061346d: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_00613474:; BB(0x00613474);
    /* 00613474: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00613477: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0061347a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00613481: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00613484: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00613487: mov dword ptr [eax + 0x50], ecx */ W32((u32)(r_eax+0x50u), r_ecx);
L_0061348a:; BB(0x0061348a);
    /* 0061348a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061348d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00613494: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00613495: mov esp, ebp */ r_esp = r_ebp;
    /* 00613497: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00613498: ret 8 */ FN_RET(0x00613360); r_esp += 12; return;
}

void f_006134a0(void) /* VWindow::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006134a0);
    /* 006134a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006134a1: mov ebp, esp */ r_ebp = r_esp;
    /* 006134a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006134a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006134a7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006134aa: mov byte ptr [eax + 0x80], 1 */ W8((u32)(r_eax+0x80u), 0x1u);
    /* 006134b1: mov esp, ebp */ r_esp = r_ebp;
    /* 006134b3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006134b4: ret  */ FN_RET(0x006134a0); r_esp += 4; return;
}

void f_006134c0(void) /* VWindow::vfunc3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006134c0);
    /* 006134c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006134c1: mov ebp, esp */ r_ebp = r_esp;
    /* 006134c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006134c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006134c7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006134ca: mov byte ptr [eax + 0x80], 0 */ W8((u32)(r_eax+0x80u), 0x0u);
    /* 006134d1: mov esp, ebp */ r_esp = r_ebp;
    /* 006134d3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006134d4: ret  */ FN_RET(0x006134c0); r_esp += 4; return;
}

void f_00613640(void) /* VWindow::vfunc14 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00613640);
    /* 00613640: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00613641: mov ebp, esp */ r_ebp = r_esp;
    /* 00613643: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00613644: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00613647: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061364a: call 0x613600 */ r_esp -= 4; W32(r_esp, 0x61364fu); f_00613600();
    /* 0061364f: mov esp, ebp */ r_esp = r_ebp;
    /* 00613651: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00613652: ret  */ FN_RET(0x00613640); r_esp += 4; return;
}

void f_00613660(void) /* VWindow::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00613660);
    /* 00613660: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00613661: mov ebp, esp */ r_ebp = r_esp;
    /* 00613663: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00613664: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00613667: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061366a: call 0x613600 */ r_esp -= 4; W32(r_esp, 0x61366fu); f_00613600();
    /* 0061366f: mov esp, ebp */ r_esp = r_ebp;
    /* 00613671: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00613672: ret  */ FN_RET(0x00613660); r_esp += 4; return;
}

void f_00613680(void) /* VWindow::vfunc5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00613680);
    /* 00613680: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00613681: mov ebp, esp */ r_ebp = r_esp;
    /* 00613683: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00613685: push 0x6ab0d5 */ { u32 v = 0x6ab0d5u; r_esp -= 4; W32(r_esp, v); }
    /* 0061368a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00613690: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00613691: sub esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00613697: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0061369c: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061369e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061369f: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 006136a2: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 006136a8: mov dword ptr [ebp - 0x7c], ecx */ W32((u32)(r_ebp+0xffffff84u), r_ecx);
    /* 006136ab: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006136ae: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006136b1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006136b3: cmp edx, dword ptr [ecx + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006136b6: jl 0x6136be */ if ((fS!=fO)) goto L_006136be;
L_006136b8:; BB(0x006136b8);
    /* 006136b8: mov byte ptr [ebp - 0x5d], 1 */ W8((u32)(r_ebp+0xffffffa3u), 0x1u);
    /* 006136bc: jmp 0x6136d6 */ goto L_006136d6;
L_006136be:; BB(0x006136be);
    /* 006136be: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006136c1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006136c4: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 006136c7: cmp edx, dword ptr [ecx + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006136ca: jl 0x6136d2 */ if ((fS!=fO)) goto L_006136d2;
L_006136cc:; BB(0x006136cc);
    /* 006136cc: mov byte ptr [ebp - 0x5d], 1 */ W8((u32)(r_ebp+0xffffffa3u), 0x1u);
    /* 006136d0: jmp 0x6136d6 */ goto L_006136d6;
L_006136d2:; BB(0x006136d2);
    /* 006136d2: mov byte ptr [ebp - 0x5d], 0 */ W8((u32)(r_ebp+0xffffffa3u), 0x0u);
L_006136d6:; BB(0x006136d6);
    /* 006136d6: movzx eax, byte ptr [ebp - 0x5d] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffa3u));
    /* 006136da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006136dc: je 0x6136e3 */ if (fZ) goto L_006136e3;
L_006136de:; BB(0x006136de);
    /* 006136de: jmp 0x613a4c */ goto L_00613a4c;
L_006136e3:; BB(0x006136e3);
    /* 006136e3: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 006136e6: movzx edx, byte ptr [ecx + 0x80] */ r_edx = (u32)R8((u32)(r_ecx+0x80u));
    /* 006136ed: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006136ef: jne 0x6136f6 */ if (!fZ) goto L_006136f6;
L_006136f1:; BB(0x006136f1);
    /* 006136f1: jmp 0x613a4c */ goto L_00613a4c;
L_006136f6:; BB(0x006136f6);
    /* 006136f6: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 006136f8: call 0x612ef0 */ r_esp -= 4; W32(r_esp, 0x6136fdu); f_00612ef0();
    /* 006136fd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00613700: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00613703: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061370a: cmp dword ptr [ebp - 0x44], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061370e: je 0x613729 */ if (fZ) goto L_00613729;
L_00613710:; BB(0x00613710);
    /* 00613710: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00613713: call 0x62aea0 */ r_esp -= 4; W32(r_esp, 0x613718u); f_0062aea0();
    /* 00613718: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0061371b: mov dword ptr [eax], 0x6d8520 */ W32((u32)(r_eax), 0x6d8520u);
    /* 00613721: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00613724: mov dword ptr [ebp - 0x80], ecx */ W32((u32)(r_ebp+0xffffff80u), r_ecx);
    /* 00613727: jmp 0x613730 */ goto L_00613730;
L_00613729:; BB(0x00613729);
    /* 00613729: mov dword ptr [ebp - 0x80], 0 */ W32((u32)(r_ebp+0xffffff80u), 0x0u);
L_00613730:; BB(0x00613730);
    /* 00613730: mov edx, dword ptr [ebp - 0x80] */ r_edx = R32((u32)(r_ebp+0xffffff80u));
    /* 00613733: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 00613736: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0061373d: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00613740: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00613743: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00613746: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00613749: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061374c: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0061374e: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00613750: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 00613753: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00613756: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 00613759: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 0061375c: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 0061375f: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 00613762: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00613765: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00613766: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 00613769: add ecx, 0x60 */ {  u32 a = r_ecx; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061376c: call 0x62aa20 */ r_esp -= 4; W32(r_esp, 0x613771u); f_0062aa20();
    /* 00613771: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 00613778: jmp 0x613783 */ goto L_00613783;
L_0061377a:; BB(0x0061377a);
    /* 0061377a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061377d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00613780: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_00613783:; BB(0x00613783);
    /* 00613783: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 00613786: add ecx, 0x60 */ {  u32 a = r_ecx; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00613789: call 0x62ae50 */ r_esp -= 4; W32(r_esp, 0x61378eu); f_0062ae50();
    /* 0061378e: sub eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00613791: cmp dword ptr [ebp - 0x20], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00613794: jg 0x6138f6 */ if ((!fZ&&fS==fO)) goto L_006138f6;
L_0061379a:; BB(0x0061379a);
    /* 0061379a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061379d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061379e: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 006137a1: add ecx, 0x60 */ {  u32 a = r_ecx; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006137a4: call 0x62ade0 */ r_esp -= 4; W32(r_esp, 0x6137a9u); f_0062ade0();
    /* 006137a9: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 006137ac: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 006137af: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006137b2: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 006137b5: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 006137b8: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 006137bb: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 006137be: sub edx, dword ptr [ecx + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006137c1: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 006137c4: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 006137c7: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 006137ca: sub eax, dword ptr [ecx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006137cc: imul eax, edx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edx; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006137cf: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 006137d2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006137d5: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006137d8: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 006137db: jmp 0x6137e6 */ goto L_006137e6;
L_006137dd:; BB(0x006137dd);
    /* 006137dd: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 006137e0: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006137e3: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
L_006137e6:; BB(0x006137e6);
    /* 006137e6: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 006137e9: add ecx, 0x60 */ {  u32 a = r_ecx; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006137ec: call 0x62ae50 */ r_esp -= 4; W32(r_esp, 0x6137f1u); f_0062ae50();
    /* 006137f1: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006137f4: cmp dword ptr [ebp - 0x3c], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006137f7: jg 0x6138f1 */ if ((!fZ&&fS==fO)) goto L_006138f1;
L_006137fd:; BB(0x006137fd);
    /* 006137fd: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00613800: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00613801: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 00613804: add ecx, 0x60 */ {  u32 a = r_ecx; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00613807: call 0x62ade0 */ r_esp -= 4; W32(r_esp, 0x61380cu); f_0062ade0();
    /* 0061380c: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0061380f: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00613812: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00613815: mov dword ptr [ebp - 0x68], ecx */ W32((u32)(r_ebp+0xffffff98u), r_ecx);
    /* 00613818: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 0061381b: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0061381e: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 00613821: sub ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00613824: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 00613827: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0061382a: mov edx, dword ptr [edx + 8] */ r_edx = R32((u32)(r_edx+0x8u));
    /* 0061382d: sub edx, dword ptr [eax] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0061382f: imul edx, ecx */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_ecx; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00613832: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 00613835: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00613838: add eax, dword ptr [ebp - 0x28] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffd8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061383b: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0061383e: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00613841: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00613844: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00613845: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00613848: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061384b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061384c: lea eax, [ebp - 0x1c] */ r_eax = (u32)(r_ebp+0xffffffe4u);
    /* 0061384f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00613850: call 0x614450 */ r_esp -= 4; W32(r_esp, 0x613855u); f_00614450();
    /* 00613855: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00613858: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0061385b: sar ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0061385e: add ecx, dword ptr [ebp - 0x30] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffd0u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00613861: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00613864: sub edx, dword ptr [ebp - 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00613867: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0061386a: sub eax, dword ptr [ebp - 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0061386d: imul eax, edx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edx; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00613870: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00613872: jge 0x6138ec */ if ((fS==fO)) goto L_006138ec;
L_00613874:; BB(0x00613874);
    /* 00613874: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00613877: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061387a: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0061387d: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0061387f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00613882: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00613885: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00613888: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 0061388b: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061388e: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 00613891: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00613894: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00613895: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 00613898: add ecx, 0x60 */ {  u32 a = r_ecx; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061389b: call 0x62ab60 */ r_esp -= 4; W32(r_esp, 0x6138a0u); f_0062ab60();
    /* 006138a0: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 006138a3: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 006138a6: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 006138a9: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 006138ac: cmp dword ptr [ebp - 0x48], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006138b0: je 0x6138c8 */ if (fZ) goto L_006138c8;
L_006138b2:; BB(0x006138b2);
    /* 006138b2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006138b4: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 006138b7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006138b9: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 006138bc: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006138be: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6138c0u); call_ind(t); }
    /* 006138c0: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 006138c6: jmp 0x6138d2 */ goto L_006138d2;
L_006138c8:; BB(0x006138c8);
    /* 006138c8: mov dword ptr [ebp - 0x84], 0 */ W32((u32)(r_ebp+0xffffff7cu), 0x0u);
L_006138d2:; BB(0x006138d2);
    /* 006138d2: mov dword ptr [ebp - 0x20], 0xffffffff */ W32((u32)(r_ebp+0xffffffe0u), 0xffffffffu);
    /* 006138d9: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 006138dc: add ecx, 0x60 */ {  u32 a = r_ecx; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006138df: call 0x62ae50 */ r_esp -= 4; W32(r_esp, 0x6138e4u); f_0062ae50();
    /* 006138e4: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 006138e7: jmp 0x6137dd */ goto L_006137dd;
L_006138ec:; BB(0x006138ec);
    /* 006138ec: jmp 0x6137dd */ goto L_006137dd;
L_006138f1:; BB(0x006138f1);
    /* 006138f1: jmp 0x61377a */ goto L_0061377a;
L_006138f6:; BB(0x006138f6);
    /* 006138f6: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 006138f9: add ecx, 0x60 */ {  u32 a = r_ecx; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006138fc: call 0x62ae50 */ r_esp -= 4; W32(r_esp, 0x613901u); f_0062ae50();
    /* 00613901: cmp eax, 0x1e */ {  u32 a = r_eax; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00613904: jle 0x613a4c */ if ((fZ||fS!=fO)) goto L_00613a4c;
L_0061390a:; BB(0x0061390a);
    /* 0061390a: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 0061390d: add ecx, 0x60 */ {  u32 a = r_ecx; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00613910: call 0x62ae50 */ r_esp -= 4; W32(r_esp, 0x613915u); f_0062ae50();
    /* 00613915: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00613917: je 0x61396c */ if (fZ) goto L_0061396c;
L_00613919:; BB(0x00613919);
    /* 00613919: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061391b: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 0061391e: add ecx, 0x60 */ {  u32 a = r_ecx; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00613921: call 0x62ade0 */ r_esp -= 4; W32(r_esp, 0x613926u); f_0062ade0();
    /* 00613926: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00613929: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0061392c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061392d: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 00613930: add ecx, 0x60 */ {  u32 a = r_ecx; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00613933: call 0x62ab60 */ r_esp -= 4; W32(r_esp, 0x613938u); f_0062ab60();
    /* 00613938: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0061393b: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 0061393e: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 00613941: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 00613944: cmp dword ptr [ebp - 0x50], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00613948: je 0x613960 */ if (fZ) goto L_00613960;
L_0061394a:; BB(0x0061394a);
    /* 0061394a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061394c: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0061394f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00613951: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00613954: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00613956: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x613958u); call_ind(t); }
    /* 00613958: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 0061395e: jmp 0x61396a */ goto L_0061396a;
L_00613960:; BB(0x00613960);
    /* 00613960: mov dword ptr [ebp - 0x88], 0 */ W32((u32)(r_ebp+0xffffff78u), 0x0u);
L_0061396a:; BB(0x0061396a);
    /* 0061396a: jmp 0x61390a */ goto L_0061390a;
L_0061396c:; BB(0x0061396c);
    /* 0061396c: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0061396e: call 0x612ef0 */ r_esp -= 4; W32(r_esp, 0x613973u); f_00612ef0();
    /* 00613973: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00613976: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 00613979: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00613980: cmp dword ptr [ebp - 0x5c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00613984: je 0x6139a2 */ if (fZ) goto L_006139a2;
L_00613986:; BB(0x00613986);
    /* 00613986: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00613989: call 0x62aea0 */ r_esp -= 4; W32(r_esp, 0x61398eu); f_0062aea0();
    /* 0061398e: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00613991: mov dword ptr [ecx], 0x6d8520 */ W32((u32)(r_ecx), 0x6d8520u);
    /* 00613997: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0061399a: mov dword ptr [ebp - 0x8c], edx */ W32((u32)(r_ebp+0xffffff74u), r_edx);
    /* 006139a0: jmp 0x6139ac */ goto L_006139ac;
L_006139a2:; BB(0x006139a2);
    /* 006139a2: mov dword ptr [ebp - 0x8c], 0 */ W32((u32)(r_ebp+0xffffff74u), 0x0u);
L_006139ac:; BB(0x006139ac);
    /* 006139ac: mov eax, dword ptr [ebp - 0x8c] */ r_eax = R32((u32)(r_ebp+0xffffff74u));
    /* 006139b2: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 006139b5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006139bc: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 006139bf: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006139c2: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 006139c5: add edx, 0x18 */ {  u32 a = r_edx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006139c8: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006139cb: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006139ce: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 006139d0: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 006139d2: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 006139d5: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 006139d8: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 006139db: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 006139de: mov edx, dword ptr [edx + 0xc] */ r_edx = R32((u32)(r_edx+0xcu));
    /* 006139e1: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 006139e4: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 006139e7: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 006139ea: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006139ec: mov dword ptr [ebp - 0x78], ecx */ W32((u32)(r_ebp+0xffffff88u), r_ecx);
    /* 006139ef: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 006139f2: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 006139f5: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006139f7: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 006139fa: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006139fd: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00613a00: mov dword ptr [ebp - 0x70], ecx */ W32((u32)(r_ebp+0xffffff90u), r_ecx);
    /* 00613a03: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 00613a06: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00613a08: add eax, dword ptr [ebp - 0x74] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffff8cu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00613a0b: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 00613a0e: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 00613a10: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 00613a13: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00613a16: add eax, dword ptr [ebp - 0x78] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffff88u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00613a19: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 00613a1c: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00613a1f: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 00613a22: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00613a25: add eax, dword ptr [ebp - 0x74] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffff8cu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00613a28: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 00613a2b: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 00613a2e: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 00613a31: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 00613a34: add eax, dword ptr [ebp - 0x78] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffff88u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00613a37: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 00613a3a: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 00613a3d: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00613a40: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00613a41: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 00613a44: add ecx, 0x60 */ {  u32 a = r_ecx; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00613a47: call 0x62aa20 */ r_esp -= 4; W32(r_esp, 0x613a4cu); f_0062aa20();
L_00613a4c:; BB(0x00613a4c);
    /* 00613a4c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00613a4f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00613a56: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00613a57: mov esp, ebp */ r_esp = r_ebp;
    /* 00613a59: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00613a5a: ret 4 */ FN_RET(0x00613680); r_esp += 8; return;
}

void f_00614030(void) /* VWindow::vfunc7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00614030);
    /* 00614030: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00614031: mov ebp, esp */ r_ebp = r_esp;
    /* 00614033: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00614036: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00614039: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061403c: cmp dword ptr [eax + 0x84], 0 */ {  u32 a = R32((u32)(r_eax+0x84u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00614043: je 0x61405d */ if (fZ) goto L_0061405d;
L_00614045:; BB(0x00614045);
    /* 00614045: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00614048: mov edx, dword ptr [ecx + 0x84] */ r_edx = R32((u32)(r_ecx+0x84u));
    /* 0061404e: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00614051: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00614054: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00614055: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x61405au); f_00686cae();
    /* 0061405a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0061405d:; BB(0x0061405d);
    /* 0061405d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00614060: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00614061: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x614066u); f_00686ecc();
    /* 00614066: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00614069: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061406c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061406d: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x614072u); f_00686d82();
    /* 00614072: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00614075: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00614078: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061407b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061407e: mov dword ptr [edx + 0x84], eax */ W32((u32)(r_edx+0x84u), r_eax);
    /* 00614084: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00614087: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00614088: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061408b: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 00614091: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00614092: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x614097u); f_00686d8e();
    /* 00614097: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061409a: mov esp, ebp */ r_esp = r_ebp;
    /* 0061409c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061409d: ret 4 */ FN_RET(0x00614030); r_esp += 8; return;
}

