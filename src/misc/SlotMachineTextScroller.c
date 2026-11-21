#include "protos.h"

void f_00531150(void) /* SlotMachineTextScroller::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00531150);
    /* 00531150: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00531151: mov ebp, esp */ r_ebp = r_esp;
    /* 00531153: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00531155: push 0x6a4789 */ { u32 v = 0x6a4789u; r_esp -= 4; W32(r_esp, v); }
    /* 0053115a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00531160: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00531161: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00531164: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00531169: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0053116b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053116c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0053116f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00531175: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00531178: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053117b: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x531180u); f_005f5bf0();
    /* 00531180: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00531187: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053118a: mov dword ptr [eax], 0x6c3e54 */ W32((u32)(r_eax), 0x6c3e54u);
    /* 00531190: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00531193: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00531196: mov dword ptr [ecx + 0x10], edx */ W32((u32)(r_ecx+0x10u), r_edx);
    /* 00531199: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053119c: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0053119f: mov dword ptr [eax + 0x14], ecx */ W32((u32)(r_eax+0x14u), r_ecx);
    /* 005311a2: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005311a5: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005311a8: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 005311ab: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005311ae: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 005311b1: mov dword ptr [ecx + 0x1c], edx */ W32((u32)(r_ecx+0x1cu), r_edx);
    /* 005311b4: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005311b7: mov byte ptr [eax + 0x184], 0 */ W8((u32)(r_eax+0x184u), 0x0u);
    /* 005311be: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 005311c3: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5311c8u); f_00686d82();
    /* 005311c8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005311cb: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005311ce: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005311d2: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005311d6: je 0x5311e5 */ if (fZ) goto L_005311e5;
L_005311d8:; BB(0x005311d8);
    /* 005311d8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005311db: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x5311e0u); f_005ec5a0();
    /* 005311e0: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005311e3: jmp 0x5311ec */ goto L_005311ec;
L_005311e5:; BB(0x005311e5);
    /* 005311e5: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_005311ec:; BB(0x005311ec);
    /* 005311ec: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005311ef: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005311f2: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005311f6: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005311f9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005311fc: mov dword ptr [edx + 0x188], eax */ W32((u32)(r_edx+0x188u), r_eax);
    /* 00531202: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00531204: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 00531206: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 00531209: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053120a: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053120d: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 00531210: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00531211: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00531214: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 00531217: add edx, 0x1e */ {  u32 a = r_edx; u32 b = 0x1eu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0053121a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053121b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053121e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00531221: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 00531224: sub edx, dword ptr [ecx + 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x14u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00531227: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00531228: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 0053122d: push 0x35 */ { u32 v = 0x35u; r_esp -= 4; W32(r_esp, v); }
    /* 0053122f: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00531234: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00531237: mov ecx, dword ptr [eax + 0x188] */ r_ecx = R32((u32)(r_eax+0x188u));
    /* 0053123d: call 0x5ec8f0 */ r_esp -= 4; W32(r_esp, 0x531242u); f_005ec8f0();
    /* 00531242: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00531245: mov dword ptr [ecx + 0x198], 0xffffffff */ W32((u32)(r_ecx+0x198u), 0xffffffffu);
    /* 0053124f: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00531252: mov byte ptr [edx + 0x1c0], 0 */ W8((u32)(r_edx+0x1c0u), 0x0u);
    /* 00531259: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053125c: mov dword ptr [eax + 0x19c], 0 */ W32((u32)(r_eax+0x19cu), 0x0u);
    /* 00531266: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00531269: mov dword ptr [ecx + 0x178], 0x14 */ W32((u32)(r_ecx+0x178u), 0x14u);
    /* 00531273: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00531276: mov dword ptr [edx + 0x1a0], 0 */ W32((u32)(r_edx+0x1a0u), 0x0u);
    /* 00531280: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00531283: mov dword ptr [eax + 0x1a4], 0 */ W32((u32)(r_eax+0x1a4u), 0x0u);
    /* 0053128d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00531290: mov dword ptr [ecx + 0x18c], 0 */ W32((u32)(r_ecx+0x18cu), 0x0u);
    /* 0053129a: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053129d: mov dword ptr [edx + 0x1b8], 0 */ W32((u32)(r_edx+0x1b8u), 0x0u);
    /* 005312a7: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005312aa: mov dword ptr [eax + 0x1bc], 0 */ W32((u32)(r_eax+0x1bcu), 0x0u);
    /* 005312b4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005312b7: call 0x5f5cc0 */ r_esp -= 4; W32(r_esp, 0x5312bcu); f_005f5cc0();
    /* 005312bc: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005312bf: call 0x5315f0 */ r_esp -= 4; W32(r_esp, 0x5312c4u); f_005315f0();
    /* 005312c4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005312cb: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005312ce: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005312d1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005312d8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005312d9: mov esp, ebp */ r_esp = r_ebp;
    /* 005312db: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005312dc: ret 0x14 */ FN_RET(0x00531150); r_esp += 24; return;
}

void f_005312e0(void) /* SlotMachineTextScroller::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005312e0);
    /* 005312e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005312e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005312e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005312e5: push 0x6a47ac */ { u32 v = 0x6a47acu; r_esp -= 4; W32(r_esp, v); }
    /* 005312ea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005312f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005312f1: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005312f4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005312f9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005312fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005312fc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005312ff: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00531305: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00531308: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053130b: mov dword ptr [eax], 0x6c3e54 */ W32((u32)(r_eax), 0x6c3e54u);
    /* 00531311: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00531318: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053131b: cmp dword ptr [ecx + 0x188], 0 */ {  u32 a = R32((u32)(r_ecx+0x188u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00531322: je 0x531363 */ if (fZ) goto L_00531363;
L_00531324:; BB(0x00531324);
    /* 00531324: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00531327: mov eax, dword ptr [edx + 0x188] */ r_eax = R32((u32)(r_edx+0x188u));
    /* 0053132d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00531330: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00531333: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00531336: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053133a: je 0x53134f */ if (fZ) goto L_0053134f;
L_0053133c:; BB(0x0053133c);
    /* 0053133c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0053133e: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00531341: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00531343: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00531346: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00531348: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x53134au); call_ind(t); }
    /* 0053134a: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0053134d: jmp 0x531356 */ goto L_00531356;
L_0053134f:; BB(0x0053134f);
    /* 0053134f: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_00531356:; BB(0x00531356);
    /* 00531356: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00531359: mov dword ptr [eax + 0x188], 0 */ W32((u32)(r_eax+0x188u), 0x0u);
L_00531363:; BB(0x00531363);
    /* 00531363: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0053136a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053136d: call 0x5f5c40 */ r_esp -= 4; W32(r_esp, 0x531372u); f_005f5c40();
    /* 00531372: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00531375: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0053137c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0053137d: mov esp, ebp */ r_esp = r_ebp;
    /* 0053137f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00531380: ret  */ FN_RET(0x005312e0); r_esp += 4; return;
}

void f_00531390(void) /* SlotMachineTextScroller::vfunc46 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00531390);
    /* 00531390: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00531391: mov ebp, esp */ r_ebp = r_esp;
    /* 00531393: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00531394: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00531395: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00531398: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053139b: movzx ecx, byte ptr [eax + 0x24] */ r_ecx = (u32)R8((u32)(r_eax+0x24u));
    /* 0053139f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005313a1: je 0x5313a8 */ if (fZ) goto L_005313a8;
L_005313a3:; BB(0x005313a3);
    /* 005313a3: jmp 0x5315e2 */ goto L_005315e2;
L_005313a8:; BB(0x005313a8);
    /* 005313a8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005313ab: movzx eax, byte ptr [edx + 0x1c0] */ r_eax = (u32)R8((u32)(r_edx+0x1c0u));
    /* 005313b2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005313b4: je 0x53145f */ if (fZ) goto L_0053145f;
L_005313ba:; BB(0x005313ba);
    /* 005313ba: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005313bd: call 0x531db0 */ r_esp -= 4; W32(r_esp, 0x5313c2u); f_00531db0();
    /* 005313c2: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005313c5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005313c7: je 0x531427 */ if (fZ) goto L_00531427;
L_005313c9:; BB(0x005313c9);
    /* 005313c9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005313cc: mov ecx, dword ptr [edx + 0x188] */ r_ecx = R32((u32)(r_edx+0x188u));
    /* 005313d2: call 0x5f54c0 */ r_esp -= 4; W32(r_esp, 0x5313d7u); f_005f54c0();
    /* 005313d7: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005313da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005313dc: je 0x53140e */ if (fZ) goto L_0053140e;
L_005313de:; BB(0x005313de);
    /* 005313de: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005313e1: mov edx, dword ptr [ecx + 0x188] */ r_edx = R32((u32)(r_ecx+0x188u));
    /* 005313e7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005313ea: mov ecx, dword ptr [eax + 0x188] */ r_ecx = R32((u32)(r_eax+0x188u));
    /* 005313f0: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005313f2: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005313f5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5313f7u); call_ind(t); }
    /* 005313f7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005313fa: mov edx, dword ptr [ecx + 0x1a0] */ r_edx = R32((u32)(r_ecx+0x1a0u));
    /* 00531400: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00531403: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00531406: mov dword ptr [eax + 0x1a0], edx */ W32((u32)(r_eax+0x1a0u), r_edx);
    /* 0053140c: jmp 0x531427 */ goto L_00531427;
L_0053140e:; BB(0x0053140e);
    /* 0053140e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00531411: mov edx, dword ptr [ecx + 0x188] */ r_edx = R32((u32)(r_ecx+0x188u));
    /* 00531417: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053141a: mov ecx, dword ptr [eax + 0x188] */ r_ecx = R32((u32)(r_eax+0x188u));
    /* 00531420: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00531422: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00531425: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x531427u); call_ind(t); }
L_00531427:; BB(0x00531427);
    /* 00531427: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053142a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053142d: mov eax, dword ptr [ecx + 0x1a0] */ r_eax = R32((u32)(r_ecx+0x1a0u));
    /* 00531433: cmp eax, dword ptr [edx + 0x1a4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x1a4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00531439: jl 0x53145a */ if ((fS!=fO)) goto L_0053145a;
L_0053143b:; BB(0x0053143b);
    /* 0053143b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053143e: mov byte ptr [ecx + 0x1c0], 0 */ W8((u32)(r_ecx+0x1c0u), 0x0u);
    /* 00531445: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00531448: mov dword ptr [edx + 0x1a0], 0 */ W32((u32)(r_edx+0x1a0u), 0x0u);
    /* 00531452: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00531455: call 0x531620 */ r_esp -= 4; W32(r_esp, 0x53145au); f_00531620();
L_0053145a:; BB(0x0053145a);
    /* 0053145a: jmp 0x5315e2 */ goto L_005315e2;
L_0053145f:; BB(0x0053145f);
    /* 0053145f: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00531465: call 0x5f3e50 */ r_esp -= 4; W32(r_esp, 0x53146au); f_005f3e50();
    /* 0053146a: and eax, 0x80000007 */ {  u32 a = r_eax; u32 b = 0x80000007u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fS = ((r >> 31) & 1); }
    /* 0053146f: jns 0x531476 */ if (!fS) goto L_00531476;
L_00531471:; BB(0x00531471);
    /* 00531471: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00531472: or eax, 0xfffffff8 */ {  u32 a = r_eax; u32 b = 0xfffffff8u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00531475: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00531476:; BB(0x00531476);
    /* 00531476: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00531478: jne 0x5315e2 */ if (!fZ) goto L_005315e2;
L_0053147e:; BB(0x0053147e);
    /* 0053147e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00531481: cmp dword ptr [eax + 0x18c], 3 */ {  u32 a = R32((u32)(r_eax+0x18cu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00531488: jne 0x53157d */ if (!fZ) goto L_0053157d;
L_0053148e:; BB(0x0053148e);
    /* 0053148e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00531491: mov esi, dword ptr [ecx + 0x1b8] */ r_esi = R32((u32)(r_ecx+0x1b8u));
    /* 00531497: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053149a: add esi, dword ptr [edx + 0x1bc] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edx+0x1bcu)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005314a0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005314a3: call 0x531e30 */ r_esp -= 4; W32(r_esp, 0x5314a8u); f_00531e30();
    /* 005314a8: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005314aa: jle 0x53157d */ if ((fZ||fS!=fO)) goto L_0053157d;
L_005314b0:; BB(0x005314b0);
    /* 005314b0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005314b3: call 0x531e00 */ r_esp -= 4; W32(r_esp, 0x5314b8u); f_00531e00();
    /* 005314b8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005314bb: add eax, 0x1a8 */ {  u32 a = r_eax; u32 b = 0x1a8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005314c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005314c1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005314c4: mov edx, dword ptr [ecx + 0x188] */ r_edx = R32((u32)(r_ecx+0x188u));
    /* 005314ca: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005314cd: mov ecx, dword ptr [eax + 0x188] */ r_ecx = R32((u32)(r_eax+0x188u));
    /* 005314d3: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005314d5: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 005314db: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5314ddu); call_ind(t); }
    /* 005314dd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005314e0: mov ecx, dword ptr [ecx + 0x188] */ r_ecx = R32((u32)(r_ecx+0x188u));
    /* 005314e6: call 0x5ef050 */ r_esp -= 4; W32(r_esp, 0x5314ebu); f_005ef050();
    /* 005314eb: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005314ee: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005314f1: mov dword ptr [edx + 0x190], eax */ W32((u32)(r_edx+0x190u), r_eax);
    /* 005314f7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005314fa: mov ecx, dword ptr [eax + 0x190] */ r_ecx = R32((u32)(r_eax+0x190u));
    /* 00531500: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00531501: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00531504: mov ecx, dword ptr [edx + 0x188] */ r_ecx = R32((u32)(r_edx+0x188u));
    /* 0053150a: call 0x5ecc60 */ r_esp -= 4; W32(r_esp, 0x53150fu); f_005ecc60();
    /* 0053150f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00531512: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00531515: mov eax, dword ptr [eax + 0x18] */ r_eax = R32((u32)(r_eax+0x18u));
    /* 00531518: sub eax, dword ptr [ecx + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x10u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0053151b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053151e: sub eax, dword ptr [edx + 0x190] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x190u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00531524: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00531525: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00531527: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00531529: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053152c: add eax, dword ptr [ecx + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x10u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0053152f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00531532: mov dword ptr [edx + 0x194], eax */ W32((u32)(r_edx+0x194u), r_eax);
    /* 00531538: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053153b: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0053153e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053153f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00531542: mov eax, dword ptr [edx + 0x194] */ r_eax = R32((u32)(r_edx+0x194u));
    /* 00531548: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00531549: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053154c: mov edx, dword ptr [ecx + 0x188] */ r_edx = R32((u32)(r_ecx+0x188u));
    /* 00531552: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00531555: mov ecx, dword ptr [eax + 0x188] */ r_ecx = R32((u32)(r_eax+0x188u));
    /* 0053155b: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0053155d: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00531560: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x531562u); call_ind(t); }
    /* 00531562: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00531565: mov edx, dword ptr [ecx + 0x188] */ r_edx = R32((u32)(r_ecx+0x188u));
    /* 0053156b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053156e: mov ecx, dword ptr [eax + 0x188] */ r_ecx = R32((u32)(r_eax+0x188u));
    /* 00531574: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00531576: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00531579: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53157bu); call_ind(t); }
    /* 0053157b: jmp 0x5315e2 */ goto L_005315e2;
L_0053157d:; BB(0x0053157d);
    /* 0053157d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00531580: mov edx, dword ptr [ecx + 0x194] */ r_edx = R32((u32)(r_ecx+0x194u));
    /* 00531586: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00531589: add edx, dword ptr [eax + 0x190] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x190u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0053158f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00531592: cmp edx, dword ptr [ecx + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x10u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00531595: jle 0x5315da */ if ((fZ||fS!=fO)) goto L_005315da;
L_00531597:; BB(0x00531597);
    /* 00531597: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053159a: mov eax, dword ptr [edx + 0x194] */ r_eax = R32((u32)(r_edx+0x194u));
    /* 005315a0: sub eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005315a3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005315a6: mov dword ptr [ecx + 0x194], eax */ W32((u32)(r_ecx+0x194u), r_eax);
    /* 005315ac: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005315af: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 005315b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005315b3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005315b6: mov edx, dword ptr [ecx + 0x194] */ r_edx = R32((u32)(r_ecx+0x194u));
    /* 005315bc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005315bd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005315c0: mov ecx, dword ptr [eax + 0x188] */ r_ecx = R32((u32)(r_eax+0x188u));
    /* 005315c6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005315c9: mov eax, dword ptr [edx + 0x188] */ r_eax = R32((u32)(r_edx+0x188u));
    /* 005315cf: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005315d1: mov ecx, eax */ r_ecx = r_eax;
    /* 005315d3: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005315d6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5315d8u); call_ind(t); }
    /* 005315d8: jmp 0x5315e2 */ goto L_005315e2;
L_005315da:; BB(0x005315da);
    /* 005315da: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005315dd: call 0x531620 */ r_esp -= 4; W32(r_esp, 0x5315e2u); f_00531620();
L_005315e2:; BB(0x005315e2);
    /* 005315e2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005315e3: mov esp, ebp */ r_esp = r_ebp;
    /* 005315e5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005315e6: ret  */ FN_RET(0x00531390); r_esp += 4; return;
}

void f_005315f0(void) /* SlotMachineTextScroller::vfunc28 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005315f0);
    /* 005315f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005315f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005315f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005315f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005315f7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005315fa: call 0x5eb5a0 */ r_esp -= 4; W32(r_esp, 0x5315ffu); f_005eb5a0();
    /* 005315ff: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00531602: mov ecx, dword ptr [eax + 0x188] */ r_ecx = R32((u32)(r_eax+0x188u));
    /* 00531608: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053160b: mov eax, dword ptr [edx + 0x188] */ r_eax = R32((u32)(r_edx+0x188u));
    /* 00531611: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00531613: mov ecx, eax */ r_ecx = r_eax;
    /* 00531615: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00531618: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53161au); call_ind(t); }
    /* 0053161a: mov esp, ebp */ r_esp = r_ebp;
    /* 0053161c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053161d: ret  */ FN_RET(0x005315f0); r_esp += 4; return;
}

