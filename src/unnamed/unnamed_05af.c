#include "protos.h"

void f_005af020(void) /* sub_5AF020 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005af020);
    /* 005af020: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005af021: mov ebp, esp */ r_ebp = r_esp;
    /* 005af023: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005af026: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005af029: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005af02c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005af02d: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005af033: call 0x5b4e50 */ r_esp -= 4; W32(r_esp, 0x5af038u); f_005b4e50();
    /* 005af038: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005af03b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005af03e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005af03f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005af042: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005af043: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005af049: call 0x5b5830 */ r_esp -= 4; W32(r_esp, 0x5af04eu); f_005b5830();
    /* 005af04e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005af051: jne 0x5af068 */ if (!fZ) goto L_005af068;
L_005af053:; BB(0x005af053);
    /* 005af053: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005af055: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005af057: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005af05a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005af05b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005af05e: call 0x5ad1f0 */ r_esp -= 4; W32(r_esp, 0x5af063u); f_005ad1f0();
    /* 005af063: jmp 0x5af1a4 */ goto L_005af1a4;
L_005af068:; BB(0x005af068);
    /* 005af068: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005af06b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005af06c: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5af071u); f_005dcb00();
    /* 005af071: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005af074: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005af077: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005af07a: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5af07fu); f_0063aac0();
    /* 005af07f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005af081: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005af084: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005af088: je 0x5af0a6 */ if (fZ) goto L_005af0a6;
L_005af08a:; BB(0x005af08a);
    /* 005af08a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005af08d: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5af092u); f_0063aac0();
    /* 005af092: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005af094: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005af097: cmp dword ptr [ebp - 0xc], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005af09b: je 0x5af0a6 */ if (fZ) goto L_005af0a6;
L_005af09d:; BB(0x005af09d);
    /* 005af09d: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 005af0a4: jmp 0x5af0ad */ goto L_005af0ad;
L_005af0a6:; BB(0x005af0a6);
    /* 005af0a6: mov dword ptr [ebp - 0x18], 1 */ W32((u32)(r_ebp+0xffffffe8u), 0x1u);
L_005af0ad:; BB(0x005af0ad);
    /* 005af0ad: movzx ecx, byte ptr [ebp - 0x18] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffe8u));
    /* 005af0b1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005af0b3: je 0x5af115 */ if (fZ) goto L_005af115;
L_005af0b5:; BB(0x005af0b5);
    /* 005af0b5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005af0b8: mov byte ptr [edx + 5], 0 */ W8((u32)(r_edx+0x5u), 0x0u);
    /* 005af0bc: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005af0be: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005af0c4: call 0x5df700 */ r_esp -= 4; W32(r_esp, 0x5af0c9u); f_005df700();
    /* 005af0c9: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005af0cc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005af0ce: je 0x5af0fa */ if (fZ) goto L_005af0fa;
L_005af0d0:; BB(0x005af0d0);
    /* 005af0d0: push 0x756258 */ { u32 v = 0x756258u; r_esp -= 4; W32(r_esp, v); }
    /* 005af0d5: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 005af0d7: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 005af0dd: call 0x57ab80 */ r_esp -= 4; W32(r_esp, 0x5af0e2u); f_0057ab80();
    /* 005af0e2: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005af0e8: call 0x5b74a0 */ r_esp -= 4; W32(r_esp, 0x5af0edu); f_005b74a0();
    /* 005af0ed: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005af0f3: call 0x5b7600 */ r_esp -= 4; W32(r_esp, 0x5af0f8u); f_005b7600();
    /* 005af0f8: jmp 0x5af105 */ goto L_005af105;
L_005af0fa:; BB(0x005af0fa);
    /* 005af0fa: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 005af100: call 0x57ae30 */ r_esp -= 4; W32(r_esp, 0x5af105u); f_0057ae30();
L_005af105:; BB(0x005af105);
    /* 005af105: mov ecx, dword ptr [0x7935f8] */ r_ecx = R32((u32)(0x7935f8u));
    /* 005af10b: call 0x5a80d0 */ r_esp -= 4; W32(r_esp, 0x5af110u); f_005a80d0();
    /* 005af110: jmp 0x5af1a4 */ goto L_005af1a4;
L_005af115:; BB(0x005af115);
    /* 005af115: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 005af11b: call 0x57ae30 */ r_esp -= 4; W32(r_esp, 0x5af120u); f_0057ae30();
    /* 005af120: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005af126: cmp dword ptr [ecx + 0x5bc], -1 */ {  u32 a = R32((u32)(r_ecx+0x5bcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005af12d: jne 0x5af14a */ if (!fZ) goto L_005af14a;
L_005af12f:; BB(0x005af12f);
    /* 005af12f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005af132: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005af133: mov ecx, dword ptr [0x7935f4] */ r_ecx = R32((u32)(0x7935f4u));
    /* 005af139: call 0x5a4b20 */ r_esp -= 4; W32(r_esp, 0x5af13eu); f_005a4b20();
    /* 005af13e: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005af144: mov dword ptr [ecx + 0x5bc], eax */ W32((u32)(r_ecx+0x5bcu), r_eax);
L_005af14a:; BB(0x005af14a);
    /* 005af14a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005af14d: movzx eax, byte ptr [edx + 0xc] */ r_eax = (u32)R8((u32)(r_edx+0xcu));
    /* 005af151: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005af153: jne 0x5af18d */ if (!fZ) goto L_005af18d;
L_005af155:; BB(0x005af155);
    /* 005af155: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005af158: mov byte ptr [ecx + 0xc], 1 */ W8((u32)(r_ecx+0xcu), 0x1u);
    /* 005af15c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005af15f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005af160: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005af162: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005af168: call 0x5b7310 */ r_esp -= 4; W32(r_esp, 0x5af16du); f_005b7310();
    /* 005af16d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005af16f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005af171: mov eax, dword ptr [0x793600] */ r_eax = R32((u32)(0x793600u));
    /* 005af176: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005af179: mov edx, dword ptr [0x793600] */ r_edx = R32((u32)(0x793600u));
    /* 005af17f: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005af182: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005af184: mov ecx, eax */ r_ecx = r_eax;
    /* 005af186: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005af189: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5af18bu); call_ind(t); }
    /* 005af18b: jmp 0x5af1a4 */ goto L_005af1a4;
L_005af18d:; BB(0x005af18d);
    /* 005af18d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005af190: mov byte ptr [ecx + 0xc], 0 */ W8((u32)(r_ecx+0xcu), 0x0u);
    /* 005af194: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005af196: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005af198: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005af19b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005af19c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005af19f: call 0x5ad1f0 */ r_esp -= 4; W32(r_esp, 0x5af1a4u); f_005ad1f0();
L_005af1a4:; BB(0x005af1a4);
    /* 005af1a4: mov esp, ebp */ r_esp = r_ebp;
    /* 005af1a6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005af1a7: ret 4 */ FN_RET(0x005af020); r_esp += 8; return;
}

void f_005af1b0(void) /* sub_5AF1B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005af1b0);
    /* 005af1b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005af1b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005af1b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005af1b5: push 0x6a7ce2 */ { u32 v = 0x6a7ce2u; r_esp -= 4; W32(r_esp, v); }
    /* 005af1ba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005af1c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005af1c1: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005af1c4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005af1c9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005af1cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005af1cc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005af1cf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005af1d5: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 005af1d8: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005af1dd: mov cl, byte ptr [eax + 0x25] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x25u))) & 0xffu);
    /* 005af1e0: mov byte ptr [ebp - 0x19], cl */ W8((u32)(r_ebp+0xffffffe7u), (u8)r_ecx);
    /* 005af1e3: movzx edx, byte ptr [ebp - 0x19] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffe7u));
    /* 005af1e7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005af1e9: je 0x5af1f6 */ if (fZ) goto L_005af1f6;
L_005af1eb:; BB(0x005af1eb);
    /* 005af1eb: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005af1f1: call 0x5b7220 */ r_esp -= 4; W32(r_esp, 0x5af1f6u); f_005b7220();
L_005af1f6:; BB(0x005af1f6);
    /* 005af1f6: mov ecx, dword ptr [0x7935f8] */ r_ecx = R32((u32)(0x7935f8u));
    /* 005af1fc: call 0x5a7ea0 */ r_esp -= 4; W32(r_esp, 0x5af201u); f_005a7ea0();
    /* 005af201: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005af203: mov ecx, dword ptr [0x7935f8] */ r_ecx = R32((u32)(0x7935f8u));
    /* 005af209: call 0x5a8730 */ r_esp -= 4; W32(r_esp, 0x5af20eu); f_005a8730();
    /* 005af20e: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005af214: call 0x5b5240 */ r_esp -= 4; W32(r_esp, 0x5af219u); f_005b5240();
    /* 005af219: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005af21c: je 0x5af22d */ if (fZ) goto L_005af22d;
L_005af21e:; BB(0x005af21e);
    /* 005af21e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005af220: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005af223: call 0x5ad620 */ r_esp -= 4; W32(r_esp, 0x5af228u); f_005ad620();
    /* 005af228: jmp 0x5af83f */ goto L_005af83f;
L_005af22d:; BB(0x005af22d);
    /* 005af22d: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 005af230: movzx ecx, byte ptr [eax + 7] */ r_ecx = (u32)R8((u32)(r_eax+0x7u));
    /* 005af234: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005af236: jne 0x5af271 */ if (!fZ) goto L_005af271;
L_005af238:; BB(0x005af238);
    /* 005af238: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005af23b: mov byte ptr [edx + 7], 1 */ W8((u32)(r_edx+0x7u), 0x1u);
    /* 005af23f: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005af241: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 005af243: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005af249: call 0x5b7310 */ r_esp -= 4; W32(r_esp, 0x5af24eu); f_005b7310();
    /* 005af24e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005af250: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005af252: mov eax, dword ptr [0x793600] */ r_eax = R32((u32)(0x793600u));
    /* 005af257: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005af25a: mov edx, dword ptr [0x793600] */ r_edx = R32((u32)(0x793600u));
    /* 005af260: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005af263: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005af265: mov ecx, eax */ r_ecx = r_eax;
    /* 005af267: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005af26a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5af26cu); call_ind(t); }
    /* 005af26c: jmp 0x5af83f */ goto L_005af83f;
L_005af271:; BB(0x005af271);
    /* 005af271: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005af277: call 0x5b5380 */ r_esp -= 4; W32(r_esp, 0x5af27cu); f_005b5380();
    /* 005af27c: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005af27f: cmp dword ptr [ebp - 0x10], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005af283: je 0x5af2ee */ if (fZ) goto L_005af2ee;
L_005af285:; BB(0x005af285);
    /* 005af285: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005af288: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005af289: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5af28eu); f_005dcb00();
    /* 005af28e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005af291: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005af294: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005af297: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5af29cu); f_0063aac0();
    /* 005af29c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005af29e: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 005af2a1: cmp dword ptr [ebp - 0x20], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005af2a5: je 0x5af2c3 */ if (fZ) goto L_005af2c3;
L_005af2a7:; BB(0x005af2a7);
    /* 005af2a7: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005af2aa: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5af2afu); f_0063aac0();
    /* 005af2af: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005af2b1: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005af2b4: cmp dword ptr [ebp - 0x24], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005af2b8: je 0x5af2c3 */ if (fZ) goto L_005af2c3;
L_005af2ba:; BB(0x005af2ba);
    /* 005af2ba: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 005af2c1: jmp 0x5af2ca */ goto L_005af2ca;
L_005af2c3:; BB(0x005af2c3);
    /* 005af2c3: mov dword ptr [ebp - 0x40], 1 */ W32((u32)(r_ebp+0xffffffc0u), 0x1u);
L_005af2ca:; BB(0x005af2ca);
    /* 005af2ca: mov cl, byte ptr [ebp - 0x40] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffc0u))) & 0xffu);
    /* 005af2cd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005af2ce: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005af2d1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005af2d2: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005af2d8: call 0x5b70e0 */ r_esp -= 4; W32(r_esp, 0x5af2ddu); f_005b70e0();
    /* 005af2dd: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005af2e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005af2e1: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005af2e4: call 0x5aeb60 */ r_esp -= 4; W32(r_esp, 0x5af2e9u); f_005aeb60();
    /* 005af2e9: jmp 0x5af83f */ goto L_005af83f;
L_005af2ee:; BB(0x005af2ee);
    /* 005af2ee: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005af2f1: movzx edx, byte ptr [ecx + 0x18] */ r_edx = (u32)R8((u32)(r_ecx+0x18u));
    /* 005af2f5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005af2f7: jne 0x5af30b */ if (!fZ) goto L_005af30b;
L_005af2f9:; BB(0x005af2f9);
    /* 005af2f9: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005af2ff: call 0x5b6f40 */ r_esp -= 4; W32(r_esp, 0x5af304u); f_005b6f40();
    /* 005af304: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 005af307: mov byte ptr [eax + 0x18], 1 */ W8((u32)(r_eax+0x18u), 0x1u);
L_005af30b:; BB(0x005af30b);
    /* 005af30b: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005af311: call 0x5b64c0 */ r_esp -= 4; W32(r_esp, 0x5af316u); f_005b64c0();
    /* 005af316: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005af319: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005af31b: jne 0x5af33e */ if (!fZ) goto L_005af33e;
L_005af31d:; BB(0x005af31d);
    /* 005af31d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005af31f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005af321: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005af327: call 0x5b70e0 */ r_esp -= 4; W32(r_esp, 0x5af32cu); f_005b70e0();
    /* 005af32c: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 005af331: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005af334: call 0x5aef40 */ r_esp -= 4; W32(r_esp, 0x5af339u); f_005aef40();
    /* 005af339: jmp 0x5af83f */ goto L_005af83f;
L_005af33e:; BB(0x005af33e);
    /* 005af33e: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005af344: call 0x5b66c0 */ r_esp -= 4; W32(r_esp, 0x5af349u); f_005b66c0();
    /* 005af349: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005af34c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005af34e: je 0x5af36c */ if (fZ) goto L_005af36c;
L_005af350:; BB(0x005af350);
    /* 005af350: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005af352: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005af354: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005af35a: call 0x5b70e0 */ r_esp -= 4; W32(r_esp, 0x5af35fu); f_005b70e0();
    /* 005af35f: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005af362: call 0x5ad0a0 */ r_esp -= 4; W32(r_esp, 0x5af367u); f_005ad0a0();
    /* 005af367: jmp 0x5af83f */ goto L_005af83f;
L_005af36c:; BB(0x005af36c);
    /* 005af36c: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005af372: call 0x5b56c0 */ r_esp -= 4; W32(r_esp, 0x5af377u); f_005b56c0();
    /* 005af377: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005af37a: cmp dword ptr [ebp - 0x10], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005af37e: je 0x5af3c2 */ if (fZ) goto L_005af3c2;
L_005af380:; BB(0x005af380);
    /* 005af380: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005af382: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005af385: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005af386: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005af38c: call 0x5b70e0 */ r_esp -= 4; W32(r_esp, 0x5af391u); f_005b70e0();
    /* 005af391: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005af394: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005af395: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005af39b: call 0x5b3b60 */ r_esp -= 4; W32(r_esp, 0x5af3a0u); f_005b3b60();
    /* 005af3a0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005af3a2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005af3a4: mov edx, dword ptr [0x793600] */ r_edx = R32((u32)(0x793600u));
    /* 005af3aa: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005af3ad: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005af3b3: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 005af3b6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005af3b8: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005af3bb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5af3bdu); call_ind(t); }
    /* 005af3bd: jmp 0x5af83f */ goto L_005af83f;
L_005af3c2:; BB(0x005af3c2);
    /* 005af3c2: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005af3c8: movzx edx, byte ptr [ecx + 0x678] */ r_edx = (u32)R8((u32)(r_ecx+0x678u));
    /* 005af3cf: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005af3d1: jne 0x5af3f2 */ if (!fZ) goto L_005af3f2;
L_005af3d3:; BB(0x005af3d3);
    /* 005af3d3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005af3d5: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005af3d7: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005af3dd: call 0x5b70e0 */ r_esp -= 4; W32(r_esp, 0x5af3e2u); f_005b70e0();
    /* 005af3e2: mov ecx, dword ptr [0x7935f8] */ r_ecx = R32((u32)(0x7935f8u));
    /* 005af3e8: call 0x5a86d0 */ r_esp -= 4; W32(r_esp, 0x5af3edu); f_005a86d0();
    /* 005af3ed: jmp 0x5af83f */ goto L_005af83f;
L_005af3f2:; BB(0x005af3f2);
    /* 005af3f2: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005af3f8: call 0x5b5460 */ r_esp -= 4; W32(r_esp, 0x5af3fdu); f_005b5460();
    /* 005af3fd: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005af400: cmp dword ptr [ebp - 0x10], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005af404: je 0x5af428 */ if (fZ) goto L_005af428;
L_005af406:; BB(0x005af406);
    /* 005af406: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005af408: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005af40b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005af40c: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005af412: call 0x5b70e0 */ r_esp -= 4; W32(r_esp, 0x5af417u); f_005b70e0();
    /* 005af417: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005af41a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005af41b: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005af41e: call 0x5acf90 */ r_esp -= 4; W32(r_esp, 0x5af423u); f_005acf90();
    /* 005af423: jmp 0x5af83f */ goto L_005af83f;
L_005af428:; BB(0x005af428);
    /* 005af428: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005af42e: call 0x5b3850 */ r_esp -= 4; W32(r_esp, 0x5af433u); f_005b3850();
    /* 005af433: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005af436: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005af438: je 0x5af456 */ if (fZ) goto L_005af456;
L_005af43a:; BB(0x005af43a);
    /* 005af43a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005af43c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005af43e: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005af444: call 0x5b70e0 */ r_esp -= 4; W32(r_esp, 0x5af449u); f_005b70e0();
    /* 005af449: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005af44c: call 0x5ad500 */ r_esp -= 4; W32(r_esp, 0x5af451u); f_005ad500();
    /* 005af451: jmp 0x5af83f */ goto L_005af83f;
L_005af456:; BB(0x005af456);
    /* 005af456: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005af45c: call 0x5b57c0 */ r_esp -= 4; W32(r_esp, 0x5af461u); f_005b57c0();
    /* 005af461: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005af464: cmp dword ptr [ebp - 0x10], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005af468: je 0x5af4ac */ if (fZ) goto L_005af4ac;
L_005af46a:; BB(0x005af46a);
    /* 005af46a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005af46c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005af46f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005af470: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005af476: call 0x5b70e0 */ r_esp -= 4; W32(r_esp, 0x5af47bu); f_005b70e0();
    /* 005af47b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005af47e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005af47f: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005af485: call 0x5b3df0 */ r_esp -= 4; W32(r_esp, 0x5af48au); f_005b3df0();
    /* 005af48a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005af48c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005af48e: mov edx, dword ptr [0x793600] */ r_edx = R32((u32)(0x793600u));
    /* 005af494: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005af497: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005af49d: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 005af4a0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005af4a2: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005af4a5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5af4a7u); call_ind(t); }
    /* 005af4a7: jmp 0x5af83f */ goto L_005af83f;
L_005af4ac:; BB(0x005af4ac);
    /* 005af4ac: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005af4b2: call 0x5b5730 */ r_esp -= 4; W32(r_esp, 0x5af4b7u); f_005b5730();
    /* 005af4b7: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005af4ba: cmp dword ptr [ebp - 0x10], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005af4be: je 0x5af522 */ if (fZ) goto L_005af522;
L_005af4c0:; BB(0x005af4c0);
    /* 005af4c0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005af4c2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005af4c5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005af4c6: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005af4cc: call 0x5b70e0 */ r_esp -= 4; W32(r_esp, 0x5af4d1u); f_005b70e0();
    /* 005af4d1: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005af4d4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005af4d5: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005af4db: call 0x5b6040 */ r_esp -= 4; W32(r_esp, 0x5af4e0u); f_005b6040();
    /* 005af4e0: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005af4e3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005af4e5: je 0x5af4f8 */ if (fZ) goto L_005af4f8;
L_005af4e7:; BB(0x005af4e7);
    /* 005af4e7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005af4ea: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005af4eb: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005af4ee: call 0x5aea50 */ r_esp -= 4; W32(r_esp, 0x5af4f3u); f_005aea50();
    /* 005af4f3: jmp 0x5af83f */ goto L_005af83f;
L_005af4f8:; BB(0x005af4f8);
    /* 005af4f8: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005af4fb: movzx eax, byte ptr [edx + 0xd] */ r_eax = (u32)R8((u32)(r_edx+0xdu));
    /* 005af4ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005af501: jne 0x5af511 */ if (!fZ) goto L_005af511;
L_005af503:; BB(0x005af503);
    /* 005af503: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005af506: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005af507: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005af50a: call 0x5af020 */ r_esp -= 4; W32(r_esp, 0x5af50fu); f_005af020();
    /* 005af50f: jmp 0x5af51d */ goto L_005af51d;
L_005af511:; BB(0x005af511);
    /* 005af511: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005af514: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005af515: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005af518: call 0x5aee50 */ r_esp -= 4; W32(r_esp, 0x5af51du); f_005aee50();
L_005af51d:; BB(0x005af51d);
    /* 005af51d: jmp 0x5af83f */ goto L_005af83f;
L_005af522:; BB(0x005af522);
    /* 005af522: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005af524: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005af526: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005af52c: call 0x5b70e0 */ r_esp -= 4; W32(r_esp, 0x5af531u); f_005b70e0();
    /* 005af531: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005af537: call 0x5b6530 */ r_esp -= 4; W32(r_esp, 0x5af53cu); f_005b6530();
    /* 005af53c: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005af53f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005af541: jne 0x5af607 */ if (!fZ) goto L_005af607;
L_005af547:; BB(0x005af547);
    /* 005af547: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005af54a: movzx edx, byte ptr [ecx + 0xf] */ r_edx = (u32)R8((u32)(r_ecx+0xfu));
    /* 005af54e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005af550: jne 0x5af589 */ if (!fZ) goto L_005af589;
L_005af552:; BB(0x005af552);
    /* 005af552: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 005af555: mov byte ptr [eax + 0xf], 1 */ W8((u32)(r_eax+0xfu), 0x1u);
    /* 005af559: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005af55b: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 005af55d: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005af563: call 0x5b7310 */ r_esp -= 4; W32(r_esp, 0x5af568u); f_005b7310();
    /* 005af568: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005af56a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005af56c: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005af572: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005af575: mov eax, dword ptr [0x793600] */ r_eax = R32((u32)(0x793600u));
    /* 005af57a: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005af57d: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005af57f: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005af582: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5af584u); call_ind(t); }
    /* 005af584: jmp 0x5af83f */ goto L_005af83f;
L_005af589:; BB(0x005af589);
    /* 005af589: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005af58c: mov byte ptr [ecx + 0xf], 0 */ W8((u32)(r_ecx+0xfu), 0x0u);
    /* 005af590: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005af592: mov edx, dword ptr [0x793600] */ r_edx = R32((u32)(0x793600u));
    /* 005af598: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005af59b: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005af5a1: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 005af5a4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005af5a6: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005af5a9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5af5abu); call_ind(t); }
    /* 005af5ab: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 005af5ad: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5af5b2u); f_00686d82();
    /* 005af5b2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005af5b5: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005af5b8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005af5bf: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005af5c3: je 0x5af5dc */ if (fZ) goto L_005af5dc;
L_005af5c5:; BB(0x005af5c5);
    /* 005af5c5: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005af5cb: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005af5ce: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005af5cf: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005af5d2: call 0x5ab7f0 */ r_esp -= 4; W32(r_esp, 0x5af5d7u); f_005ab7f0();
    /* 005af5d7: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 005af5da: jmp 0x5af5e3 */ goto L_005af5e3;
L_005af5dc:; BB(0x005af5dc);
    /* 005af5dc: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_005af5e3:; BB(0x005af5e3);
    /* 005af5e3: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 005af5e6: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005af5e9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005af5f0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005af5f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005af5f4: mov edx, dword ptr [0x793600] */ r_edx = R32((u32)(0x793600u));
    /* 005af5fa: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 005af5fd: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x5af602u); f_005fc420();
    /* 005af602: jmp 0x5af83f */ goto L_005af83f;
L_005af607:; BB(0x005af607);
    /* 005af607: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 005af60a: movzx ecx, byte ptr [eax + 0xf] */ r_ecx = (u32)R8((u32)(r_eax+0xfu));
    /* 005af60e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005af610: jne 0x5af65f */ if (!fZ) goto L_005af65f;
L_005af612:; BB(0x005af612);
    /* 005af612: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005af614: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005af616: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005af61c: call 0x5b3300 */ r_esp -= 4; W32(r_esp, 0x5af621u); f_005b3300();
    /* 005af621: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005af624: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005af626: jne 0x5af65f */ if (!fZ) goto L_005af65f;
L_005af628:; BB(0x005af628);
    /* 005af628: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 005af62b: mov byte ptr [eax + 0xf], 1 */ W8((u32)(r_eax+0xfu), 0x1u);
    /* 005af62f: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005af631: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 005af633: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005af639: call 0x5b7310 */ r_esp -= 4; W32(r_esp, 0x5af63eu); f_005b7310();
    /* 005af63e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005af640: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005af642: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005af648: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005af64b: mov eax, dword ptr [0x793600] */ r_eax = R32((u32)(0x793600u));
    /* 005af650: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005af653: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005af655: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005af658: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5af65au); call_ind(t); }
    /* 005af65a: jmp 0x5af83f */ goto L_005af83f;
L_005af65f:; BB(0x005af65f);
    /* 005af65f: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005af665: call 0x5b5620 */ r_esp -= 4; W32(r_esp, 0x5af66au); f_005b5620();
    /* 005af66a: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005af66d: cmp dword ptr [ebp - 0x10], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005af671: je 0x5af7b0 */ if (fZ) goto L_005af7b0;
L_005af677:; BB(0x005af677);
    /* 005af677: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005af679: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005af67c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005af67d: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005af683: call 0x5b70e0 */ r_esp -= 4; W32(r_esp, 0x5af688u); f_005b70e0();
    /* 005af688: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005af68b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005af68c: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005af692: call 0x5b3870 */ r_esp -= 4; W32(r_esp, 0x5af697u); f_005b3870();
    /* 005af697: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 005af69a: movzx ecx, byte ptr [eax + 0x11] */ r_ecx = (u32)R8((u32)(r_eax+0x11u));
    /* 005af69e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005af6a0: jne 0x5af6db */ if (!fZ) goto L_005af6db;
L_005af6a2:; BB(0x005af6a2);
    /* 005af6a2: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005af6a5: mov byte ptr [edx + 0x11], 1 */ W8((u32)(r_edx+0x11u), 0x1u);
    /* 005af6a9: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005af6ab: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005af6ad: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005af6b3: call 0x5b7310 */ r_esp -= 4; W32(r_esp, 0x5af6b8u); f_005b7310();
    /* 005af6b8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005af6ba: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005af6bc: mov eax, dword ptr [0x793600] */ r_eax = R32((u32)(0x793600u));
    /* 005af6c1: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005af6c4: mov edx, dword ptr [0x793600] */ r_edx = R32((u32)(0x793600u));
    /* 005af6ca: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005af6cd: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005af6cf: mov ecx, eax */ r_ecx = r_eax;
    /* 005af6d1: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005af6d4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5af6d6u); call_ind(t); }
    /* 005af6d6: jmp 0x5af83f */ goto L_005af83f;
L_005af6db:; BB(0x005af6db);
    /* 005af6db: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005af6de: movzx edx, byte ptr [ecx + 0x12] */ r_edx = (u32)R8((u32)(r_ecx+0x12u));
    /* 005af6e2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005af6e4: jne 0x5af77f */ if (!fZ) goto L_005af77f;
L_005af6ea:; BB(0x005af6ea);
    /* 005af6ea: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 005af6ed: mov byte ptr [eax + 0x12], 1 */ W8((u32)(r_eax+0x12u), 0x1u);
    /* 005af6f1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005af6f4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005af6f5: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5af6fau); f_005dcb00();
    /* 005af6fa: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005af6fd: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 005af700: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005af703: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5af708u); f_0063aac0();
    /* 005af708: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005af70a: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 005af70d: cmp dword ptr [ebp - 0x2c], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005af711: je 0x5af72f */ if (fZ) goto L_005af72f;
L_005af713:; BB(0x005af713);
    /* 005af713: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005af716: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5af71bu); f_0063aac0();
    /* 005af71b: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005af71d: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005af720: cmp dword ptr [ebp - 0x30], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005af724: je 0x5af72f */ if (fZ) goto L_005af72f;
L_005af726:; BB(0x005af726);
    /* 005af726: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 005af72d: jmp 0x5af736 */ goto L_005af736;
L_005af72f:; BB(0x005af72f);
    /* 005af72f: mov dword ptr [ebp - 0x48], 1 */ W32((u32)(r_ebp+0xffffffb8u), 0x1u);
L_005af736:; BB(0x005af736);
    /* 005af736: movzx ecx, byte ptr [ebp - 0x48] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffb8u));
    /* 005af73a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005af73c: je 0x5af747 */ if (fZ) goto L_005af747;
L_005af73e:; BB(0x005af73e);
    /* 005af73e: mov dword ptr [ebp - 0x4c], 0xffffffff */ W32((u32)(r_ebp+0xffffffb4u), 0xffffffffu);
    /* 005af745: jmp 0x5af74d */ goto L_005af74d;
L_005af747:; BB(0x005af747);
    /* 005af747: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005af74a: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
L_005af74d:; BB(0x005af74d);
    /* 005af74d: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005af750: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005af751: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005af753: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005af759: call 0x5b7310 */ r_esp -= 4; W32(r_esp, 0x5af75eu); f_005b7310();
    /* 005af75e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005af760: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005af762: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005af768: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005af76b: mov eax, dword ptr [0x793600] */ r_eax = R32((u32)(0x793600u));
    /* 005af770: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005af773: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005af775: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005af778: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5af77au); call_ind(t); }
    /* 005af77a: jmp 0x5af83f */ goto L_005af83f;
L_005af77f:; BB(0x005af77f);
    /* 005af77f: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005af782: mov byte ptr [ecx + 0x11], 0 */ W8((u32)(r_ecx+0x11u), 0x0u);
    /* 005af786: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005af789: mov byte ptr [edx + 0x12], 0 */ W8((u32)(r_edx+0x12u), 0x0u);
    /* 005af78d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005af78f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005af791: mov eax, dword ptr [0x793600] */ r_eax = R32((u32)(0x793600u));
    /* 005af796: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005af799: mov edx, dword ptr [0x793600] */ r_edx = R32((u32)(0x793600u));
    /* 005af79f: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005af7a2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005af7a4: mov ecx, eax */ r_ecx = r_eax;
    /* 005af7a6: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005af7a9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5af7abu); call_ind(t); }
    /* 005af7ab: jmp 0x5af83f */ goto L_005af83f;
L_005af7b0:; BB(0x005af7b0);
    /* 005af7b0: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005af7b6: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x5af7bbu); f_005da7b0();
    /* 005af7bb: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005af7be: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005af7c0: je 0x5af802 */ if (fZ) goto L_005af802;
L_005af7c2:; BB(0x005af7c2);
    /* 005af7c2: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005af7c5: movzx eax, byte ptr [edx + 0x13] */ r_eax = (u32)R8((u32)(r_edx+0x13u));
    /* 005af7c9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005af7cb: jne 0x5af802 */ if (!fZ) goto L_005af802;
L_005af7cd:; BB(0x005af7cd);
    /* 005af7cd: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005af7d0: mov byte ptr [ecx + 0x13], 1 */ W8((u32)(r_ecx+0x13u), 0x1u);
    /* 005af7d4: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005af7d6: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005af7d8: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005af7de: call 0x5b7310 */ r_esp -= 4; W32(r_esp, 0x5af7e3u); f_005b7310();
    /* 005af7e3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005af7e5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005af7e7: mov edx, dword ptr [0x793600] */ r_edx = R32((u32)(0x793600u));
    /* 005af7ed: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005af7f0: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005af7f6: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 005af7f9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005af7fb: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005af7fe: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5af800u); call_ind(t); }
    /* 005af800: jmp 0x5af83f */ goto L_005af83f;
L_005af802:; BB(0x005af802);
    /* 005af802: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005af804: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005af806: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005af80c: call 0x5b70e0 */ r_esp -= 4; W32(r_esp, 0x5af811u); f_005b70e0();
    /* 005af811: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005af817: mov dl, byte ptr [ecx + 0x25] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x25u))) & 0xffu);
    /* 005af81a: mov byte ptr [ebp - 0x35], dl */ W8((u32)(r_ebp+0xffffffcbu), (u8)r_edx);
    /* 005af81d: movzx eax, byte ptr [ebp - 0x35] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffcbu));
    /* 005af821: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005af823: je 0x5af834 */ if (fZ) goto L_005af834;
L_005af825:; BB(0x005af825);
    /* 005af825: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 005af82a: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005af82d: call 0x5aef40 */ r_esp -= 4; W32(r_esp, 0x5af832u); f_005aef40();
    /* 005af832: jmp 0x5af83f */ goto L_005af83f;
L_005af834:; BB(0x005af834);
    /* 005af834: mov ecx, dword ptr [0x7935f8] */ r_ecx = R32((u32)(0x7935f8u));
    /* 005af83a: call 0x5a8590 */ r_esp -= 4; W32(r_esp, 0x5af83fu); f_005a8590();
L_005af83f:; BB(0x005af83f);
    /* 005af83f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005af842: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005af849: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005af84a: mov esp, ebp */ r_esp = r_ebp;
    /* 005af84c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005af84d: ret  */ FN_RET(0x005af1b0); r_esp += 4; return;
}

