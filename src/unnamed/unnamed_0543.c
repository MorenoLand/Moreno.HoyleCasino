#include "protos.h"

void f_00543500(void) /* sub_543500 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00543500);
    /* 00543500: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00543501: mov ebp, esp */ r_ebp = r_esp;
    /* 00543503: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00543505: push 0x6a4f33 */ { u32 v = 0x6a4f33u; r_esp -= 4; W32(r_esp, v); }
    /* 0054350a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00543510: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00543511: sub esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00543517: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0054351c: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0054351e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054351f: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00543522: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00543528: mov dword ptr [ebp - 0x88], ecx */ W32((u32)(r_ebp+0xffffff78u), r_ecx);
    /* 0054352e: push 0x6c65d0 */ { u32 v = 0x6c65d0u; r_esp -= 4; W32(r_esp, v); }
    /* 00543533: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x543538u); f_00630f40();
    /* 00543538: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054353b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054353c: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00543542: call 0x5f38b0 */ r_esp -= 4; W32(r_esp, 0x543547u); f_005f38b0();
    /* 00543547: push 0x311668 */ { u32 v = 0x311668u; r_esp -= 4; W32(r_esp, v); }
    /* 0054354c: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00543552: call 0x5f1ad0 */ r_esp -= 4; W32(r_esp, 0x543557u); f_005f1ad0();
    /* 00543557: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 0054355c: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x543561u); f_00686d82();
    /* 00543561: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00543564: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00543567: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0054356e: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00543572: je 0x543584 */ if (fZ) goto L_00543584;
L_00543574:; BB(0x00543574);
    /* 00543574: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00543577: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x54357cu); f_005f5bf0();
    /* 0054357c: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 00543582: jmp 0x54358e */ goto L_0054358e;
L_00543584:; BB(0x00543584);
    /* 00543584: mov dword ptr [ebp - 0x8c], 0 */ W32((u32)(r_ebp+0xffffff74u), 0x0u);
L_0054358e:; BB(0x0054358e);
    /* 0054358e: mov eax, dword ptr [ebp - 0x8c] */ r_eax = R32((u32)(r_ebp+0xffffff74u));
    /* 00543594: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00543597: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0054359e: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 005435a4: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005435a7: mov dword ptr [ecx + 0xb8], edx */ W32((u32)(r_ecx+0xb8u), r_edx);
    /* 005435ad: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005435af: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005435b1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005435b3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005435b5: push 0x3116e0 */ { u32 v = 0x3116e0u; r_esp -= 4; W32(r_esp, v); }
    /* 005435ba: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 005435c0: mov ecx, dword ptr [eax + 0xb8] */ r_ecx = R32((u32)(r_eax+0xb8u));
    /* 005435c6: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x5435cbu); f_005eae80();
    /* 005435cb: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 005435d0: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5435d5u); f_00686d82();
    /* 005435d5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005435d8: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005435db: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005435e2: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005435e6: je 0x5435f8 */ if (fZ) goto L_005435f8;
L_005435e8:; BB(0x005435e8);
    /* 005435e8: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005435eb: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x5435f0u); f_005f5bf0();
    /* 005435f0: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 005435f6: jmp 0x543602 */ goto L_00543602;
L_005435f8:; BB(0x005435f8);
    /* 005435f8: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
L_00543602:; BB(0x00543602);
    /* 00543602: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 00543608: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0054360b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00543612: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 00543618: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0054361b: mov dword ptr [edx + 0xbc], eax */ W32((u32)(r_edx+0xbcu), r_eax);
    /* 00543621: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00543623: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 00543625: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00543627: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00543629: push 0x3116e1 */ { u32 v = 0x3116e1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054362e: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 00543634: mov ecx, dword ptr [ecx + 0xbc] */ r_ecx = R32((u32)(r_ecx+0xbcu));
    /* 0054363a: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x54363fu); f_005eae80();
    /* 0054363f: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 00543645: mov eax, dword ptr [edx + 0xbc] */ r_eax = R32((u32)(r_edx+0xbcu));
    /* 0054364b: mov dword ptr [eax + 0x178], 0 */ W32((u32)(r_eax+0x178u), 0x0u);
    /* 00543655: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00543657: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x54365cu); f_00686d82();
    /* 0054365c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054365f: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00543662: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00543669: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054366d: je 0x54367f */ if (fZ) goto L_0054367f;
L_0054366f:; BB(0x0054366f);
    /* 0054366f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00543672: call 0x5465a0 */ r_esp -= 4; W32(r_esp, 0x543677u); f_005465a0();
    /* 00543677: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 0054367d: jmp 0x543689 */ goto L_00543689;
L_0054367f:; BB(0x0054367f);
    /* 0054367f: mov dword ptr [ebp - 0x94], 0 */ W32((u32)(r_ebp+0xffffff6cu), 0x0u);
L_00543689:; BB(0x00543689);
    /* 00543689: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 0054368f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00543692: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00543699: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 0054369f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005436a2: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 005436a5: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 005436a7: push 0x18e */ { u32 v = 0x18eu; r_esp -= 4; W32(r_esp, v); }
    /* 005436ac: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 005436ae: push 0x183 */ { u32 v = 0x183u; r_esp -= 4; W32(r_esp, v); }
    /* 005436b3: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 005436b9: mov ecx, dword ptr [ecx + 0x38] */ r_ecx = R32((u32)(r_ecx+0x38u));
    /* 005436bc: call 0x546660 */ r_esp -= 4; W32(r_esp, 0x5436c1u); f_00546660();
    /* 005436c1: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005436c3: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5436c8u); f_00686d82();
    /* 005436c8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005436cb: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005436ce: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 005436d5: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005436d9: je 0x5436eb */ if (fZ) goto L_005436eb;
L_005436db:; BB(0x005436db);
    /* 005436db: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005436de: call 0x5465a0 */ r_esp -= 4; W32(r_esp, 0x5436e3u); f_005465a0();
    /* 005436e3: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 005436e9: jmp 0x5436f5 */ goto L_005436f5;
L_005436eb:; BB(0x005436eb);
    /* 005436eb: mov dword ptr [ebp - 0x98], 0 */ W32((u32)(r_ebp+0xffffff68u), 0x0u);
L_005436f5:; BB(0x005436f5);
    /* 005436f5: mov edx, dword ptr [ebp - 0x98] */ r_edx = R32((u32)(r_ebp+0xffffff68u));
    /* 005436fb: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 005436fe: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00543705: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0054370b: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0054370e: mov dword ptr [eax + 0x3c], ecx */ W32((u32)(r_eax+0x3cu), r_ecx);
    /* 00543711: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 00543713: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 00543718: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 0054371a: push 0xb5 */ { u32 v = 0xb5u; r_esp -= 4; W32(r_esp, v); }
    /* 0054371f: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 00543725: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 00543728: call 0x546660 */ r_esp -= 4; W32(r_esp, 0x54372du); f_00546660();
    /* 0054372d: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0054372f: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x543734u); f_00686d82();
    /* 00543734: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00543737: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0054373a: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 00543741: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00543745: je 0x543757 */ if (fZ) goto L_00543757;
L_00543747:; BB(0x00543747);
    /* 00543747: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0054374a: call 0x5465a0 */ r_esp -= 4; W32(r_esp, 0x54374fu); f_005465a0();
    /* 0054374f: mov dword ptr [ebp - 0x9c], eax */ W32((u32)(r_ebp+0xffffff64u), r_eax);
    /* 00543755: jmp 0x543761 */ goto L_00543761;
L_00543757:; BB(0x00543757);
    /* 00543757: mov dword ptr [ebp - 0x9c], 0 */ W32((u32)(r_ebp+0xffffff64u), 0x0u);
L_00543761:; BB(0x00543761);
    /* 00543761: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 00543767: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0054376a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00543771: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 00543777: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0054377a: mov dword ptr [ecx + 0x40], edx */ W32((u32)(r_ecx+0x40u), r_edx);
    /* 0054377d: push 0xcb */ { u32 v = 0xcbu; r_esp -= 4; W32(r_esp, v); }
    /* 00543782: push 0x4f */ { u32 v = 0x4fu; r_esp -= 4; W32(r_esp, v); }
    /* 00543784: push 0xcb */ { u32 v = 0xcbu; r_esp -= 4; W32(r_esp, v); }
    /* 00543789: push 0x44 */ { u32 v = 0x44u; r_esp -= 4; W32(r_esp, v); }
    /* 0054378b: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 00543791: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 00543794: call 0x546660 */ r_esp -= 4; W32(r_esp, 0x543799u); f_00546660();
    /* 00543799: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0054379b: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5437a0u); f_00686d82();
    /* 005437a0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005437a3: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005437a6: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 005437ad: cmp dword ptr [ebp - 0x3c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005437b1: je 0x5437c3 */ if (fZ) goto L_005437c3;
L_005437b3:; BB(0x005437b3);
    /* 005437b3: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005437b6: call 0x546110 */ r_esp -= 4; W32(r_esp, 0x5437bbu); f_00546110();
    /* 005437bb: mov dword ptr [ebp - 0xa0], eax */ W32((u32)(r_ebp+0xffffff60u), r_eax);
    /* 005437c1: jmp 0x5437cd */ goto L_005437cd;
L_005437c3:; BB(0x005437c3);
    /* 005437c3: mov dword ptr [ebp - 0xa0], 0 */ W32((u32)(r_ebp+0xffffff60u), 0x0u);
L_005437cd:; BB(0x005437cd);
    /* 005437cd: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 005437d3: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 005437d6: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005437dd: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 005437e3: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005437e6: mov dword ptr [edx + 0xb0], eax */ W32((u32)(r_edx+0xb0u), r_eax);
    /* 005437ec: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005437ee: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005437f0: push 0x149 */ { u32 v = 0x149u; r_esp -= 4; W32(r_esp, v); }
    /* 005437f5: push 0x51 */ { u32 v = 0x51u; r_esp -= 4; W32(r_esp, v); }
    /* 005437f7: push 0x31167c */ { u32 v = 0x31167cu; r_esp -= 4; W32(r_esp, v); }
    /* 005437fc: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 00543802: mov ecx, dword ptr [ecx + 0xb0] */ r_ecx = R32((u32)(r_ecx+0xb0u));
    /* 00543808: call 0x5461f0 */ r_esp -= 4; W32(r_esp, 0x54380du); f_005461f0();
    /* 0054380d: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 00543813: mov ecx, dword ptr [edx + 0xb0] */ r_ecx = R32((u32)(r_edx+0xb0u));
    /* 00543819: call 0x546360 */ r_esp -= 4; W32(r_esp, 0x54381eu); f_00546360();
    /* 0054381e: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00543820: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x543825u); f_00686d82();
    /* 00543825: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00543828: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0054382b: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 00543832: cmp dword ptr [ebp - 0x44], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00543836: je 0x543848 */ if (fZ) goto L_00543848;
L_00543838:; BB(0x00543838);
    /* 00543838: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0054383b: call 0x546110 */ r_esp -= 4; W32(r_esp, 0x543840u); f_00546110();
    /* 00543840: mov dword ptr [ebp - 0xa4], eax */ W32((u32)(r_ebp+0xffffff5cu), r_eax);
    /* 00543846: jmp 0x543852 */ goto L_00543852;
L_00543848:; BB(0x00543848);
    /* 00543848: mov dword ptr [ebp - 0xa4], 0 */ W32((u32)(r_ebp+0xffffff5cu), 0x0u);
L_00543852:; BB(0x00543852);
    /* 00543852: mov eax, dword ptr [ebp - 0xa4] */ r_eax = R32((u32)(r_ebp+0xffffff5cu));
    /* 00543858: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0054385b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00543862: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 00543868: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0054386b: mov dword ptr [ecx + 0xb4], edx */ W32((u32)(r_ecx+0xb4u), r_edx);
    /* 00543871: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00543873: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00543875: push 0x149 */ { u32 v = 0x149u; r_esp -= 4; W32(r_esp, v); }
    /* 0054387a: push 0x195 */ { u32 v = 0x195u; r_esp -= 4; W32(r_esp, v); }
    /* 0054387f: push 0x31167d */ { u32 v = 0x31167du; r_esp -= 4; W32(r_esp, v); }
    /* 00543884: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0054388a: mov ecx, dword ptr [eax + 0xb4] */ r_ecx = R32((u32)(r_eax+0xb4u));
    /* 00543890: call 0x5461f0 */ r_esp -= 4; W32(r_esp, 0x543895u); f_005461f0();
    /* 00543895: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0054389b: mov ecx, dword ptr [ecx + 0xb4] */ r_ecx = R32((u32)(r_ecx+0xb4u));
    /* 005438a1: call 0x546360 */ r_esp -= 4; W32(r_esp, 0x5438a6u); f_00546360();
    /* 005438a6: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 005438ab: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5438b0u); f_00686d82();
    /* 005438b0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005438b3: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 005438b6: mov dword ptr [ebp - 4], 7 */ W32((u32)(r_ebp+0xfffffffcu), 0x7u);
    /* 005438bd: cmp dword ptr [ebp - 0x4c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005438c1: je 0x5438d3 */ if (fZ) goto L_005438d3;
L_005438c3:; BB(0x005438c3);
    /* 005438c3: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005438c6: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x5438cbu); f_005eaaf0();
    /* 005438cb: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 005438d1: jmp 0x5438dd */ goto L_005438dd;
L_005438d3:; BB(0x005438d3);
    /* 005438d3: mov dword ptr [ebp - 0xa8], 0 */ W32((u32)(r_ebp+0xffffff58u), 0x0u);
L_005438dd:; BB(0x005438dd);
    /* 005438dd: mov edx, dword ptr [ebp - 0xa8] */ r_edx = R32((u32)(r_ebp+0xffffff58u));
    /* 005438e3: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 005438e6: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005438ed: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 005438f3: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005438f6: mov dword ptr [eax + 0x1c], ecx */ W32((u32)(r_eax+0x1cu), r_ecx);
    /* 005438f9: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005438fb: push 0x258 */ { u32 v = 0x258u; r_esp -= 4; W32(r_esp, v); }
    /* 00543900: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00543902: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00543904: push 0x3116cd */ { u32 v = 0x3116cdu; r_esp -= 4; W32(r_esp, v); }
    /* 00543909: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 0054390f: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 00543912: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x543917u); f_005eae80();
    /* 00543917: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0054391d: call 0x543d50 */ r_esp -= 4; W32(r_esp, 0x543922u); f_00543d50();
    /* 00543922: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00543923: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 00543929: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 0054392c: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 00543932: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00543935: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00543937: mov ecx, eax */ r_ecx = r_eax;
    /* 00543939: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0054393f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x543941u); call_ind(t); }
    /* 00543941: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 00543947: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 0054394a: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 00543950: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 00543953: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00543955: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00543958: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x54395au); call_ind(t); }
    /* 0054395a: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 0054395f: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x543964u); f_00686d82();
    /* 00543964: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00543967: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 0054396a: mov dword ptr [ebp - 4], 8 */ W32((u32)(r_ebp+0xfffffffcu), 0x8u);
    /* 00543971: cmp dword ptr [ebp - 0x54], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffacu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00543975: je 0x543987 */ if (fZ) goto L_00543987;
L_00543977:; BB(0x00543977);
    /* 00543977: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0054397a: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x54397fu); f_005eaaf0();
    /* 0054397f: mov dword ptr [ebp - 0xac], eax */ W32((u32)(r_ebp+0xffffff54u), r_eax);
    /* 00543985: jmp 0x543991 */ goto L_00543991;
L_00543987:; BB(0x00543987);
    /* 00543987: mov dword ptr [ebp - 0xac], 0 */ W32((u32)(r_ebp+0xffffff54u), 0x0u);
L_00543991:; BB(0x00543991);
    /* 00543991: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 00543997: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 0054399a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005439a1: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 005439a7: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 005439aa: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 005439ad: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005439af: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005439b1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005439b3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005439b5: push 0x3116ce */ { u32 v = 0x3116ceu; r_esp -= 4; W32(r_esp, v); }
    /* 005439ba: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 005439c0: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 005439c3: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x5439c8u); f_005eae80();
    /* 005439c8: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 005439ce: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 005439d1: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 005439d7: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 005439da: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005439dc: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005439df: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5439e1u); call_ind(t); }
    /* 005439e1: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 005439e6: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5439ebu); f_00686d82();
    /* 005439eb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005439ee: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 005439f1: mov dword ptr [ebp - 4], 9 */ W32((u32)(r_ebp+0xfffffffcu), 0x9u);
    /* 005439f8: cmp dword ptr [ebp - 0x5c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005439fc: je 0x543a0e */ if (fZ) goto L_00543a0e;
L_005439fe:; BB(0x005439fe);
    /* 005439fe: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00543a01: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x543a06u); f_005f5bf0();
    /* 00543a06: mov dword ptr [ebp - 0xb0], eax */ W32((u32)(r_ebp+0xffffff50u), r_eax);
    /* 00543a0c: jmp 0x543a18 */ goto L_00543a18;
L_00543a0e:; BB(0x00543a0e);
    /* 00543a0e: mov dword ptr [ebp - 0xb0], 0 */ W32((u32)(r_ebp+0xffffff50u), 0x0u);
L_00543a18:; BB(0x00543a18);
    /* 00543a18: mov ecx, dword ptr [ebp - 0xb0] */ r_ecx = R32((u32)(r_ebp+0xffffff50u));
    /* 00543a1e: mov dword ptr [ebp - 0x58], ecx */ W32((u32)(r_ebp+0xffffffa8u), r_ecx);
    /* 00543a21: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00543a28: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 00543a2e: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00543a31: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 00543a34: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00543a3a: mov edx, dword ptr [ecx + 0x4f14] */ r_edx = R32((u32)(r_ecx+0x4f14u));
    /* 00543a40: mov dword ptr [ebp - 0x80], edx */ W32((u32)(r_ebp+0xffffff80u), r_edx);
    /* 00543a43: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00543a45: push 0x1f4 */ { u32 v = 0x1f4u; r_esp -= 4; W32(r_esp, v); }
    /* 00543a4a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00543a4c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00543a4e: mov eax, dword ptr [ebp - 0x80] */ r_eax = R32((u32)(r_ebp+0xffffff80u));
    /* 00543a51: mov ecx, dword ptr [eax*8 + 0x73b5c0] */ r_ecx = R32((u32)(r_eax*8+0x73b5c0u));
    /* 00543a58: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00543a59: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 00543a5f: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 00543a62: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x543a67u); f_005eae80();
    /* 00543a67: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 00543a6d: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 00543a70: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 00543a76: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 00543a79: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00543a7b: mov ecx, eax */ r_ecx = r_eax;
    /* 00543a7d: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00543a80: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x543a82u); call_ind(t); }
    /* 00543a82: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 00543a87: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x543a8cu); f_00686d82();
    /* 00543a8c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00543a8f: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 00543a92: mov dword ptr [ebp - 4], 0xa */ W32((u32)(r_ebp+0xfffffffcu), 0xau);
    /* 00543a99: cmp dword ptr [ebp - 0x64], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff9cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00543a9d: je 0x543aaf */ if (fZ) goto L_00543aaf;
L_00543a9f:; BB(0x00543a9f);
    /* 00543a9f: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 00543aa2: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x543aa7u); f_005eaaf0();
    /* 00543aa7: mov dword ptr [ebp - 0xb4], eax */ W32((u32)(r_ebp+0xffffff4cu), r_eax);
    /* 00543aad: jmp 0x543ab9 */ goto L_00543ab9;
L_00543aaf:; BB(0x00543aaf);
    /* 00543aaf: mov dword ptr [ebp - 0xb4], 0 */ W32((u32)(r_ebp+0xffffff4cu), 0x0u);
L_00543ab9:; BB(0x00543ab9);
    /* 00543ab9: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00543abf: mov dword ptr [ebp - 0x60], ecx */ W32((u32)(r_ebp+0xffffffa0u), r_ecx);
    /* 00543ac2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00543ac9: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 00543acf: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 00543ad2: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 00543ad5: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00543adb: mov edx, dword ptr [ecx + 0x4f14] */ r_edx = R32((u32)(r_ecx+0x4f14u));
    /* 00543ae1: mov dword ptr [ebp - 0x84], edx */ W32((u32)(r_ebp+0xffffff7cu), r_edx);
    /* 00543ae7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00543ae9: push 0x1f4 */ { u32 v = 0x1f4u; r_esp -= 4; W32(r_esp, v); }
    /* 00543aee: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00543af0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00543af2: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 00543af8: mov ecx, dword ptr [eax*8 + 0x73b5c4] */ r_ecx = R32((u32)(r_eax*8+0x73b5c4u));
    /* 00543aff: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00543b00: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 00543b06: mov ecx, dword ptr [edx + 0x28] */ r_ecx = R32((u32)(r_edx+0x28u));
    /* 00543b09: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x543b0eu); f_005eae80();
    /* 00543b0e: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 00543b14: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 00543b17: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 00543b1d: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 00543b20: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00543b22: mov ecx, eax */ r_ecx = r_eax;
    /* 00543b24: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00543b27: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x543b29u); call_ind(t); }
    /* 00543b29: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 00543b2e: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x543b33u); f_00686d82();
    /* 00543b33: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00543b36: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 00543b39: mov dword ptr [ebp - 4], 0xb */ W32((u32)(r_ebp+0xfffffffcu), 0xbu);
    /* 00543b40: cmp dword ptr [ebp - 0x6c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff94u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00543b44: je 0x543b56 */ if (fZ) goto L_00543b56;
L_00543b46:; BB(0x00543b46);
    /* 00543b46: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 00543b49: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x543b4eu); f_005f5bf0();
    /* 00543b4e: mov dword ptr [ebp - 0xb8], eax */ W32((u32)(r_ebp+0xffffff48u), r_eax);
    /* 00543b54: jmp 0x543b60 */ goto L_00543b60;
L_00543b56:; BB(0x00543b56);
    /* 00543b56: mov dword ptr [ebp - 0xb8], 0 */ W32((u32)(r_ebp+0xffffff48u), 0x0u);
L_00543b60:; BB(0x00543b60);
    /* 00543b60: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 00543b66: mov dword ptr [ebp - 0x68], ecx */ W32((u32)(r_ebp+0xffffff98u), r_ecx);
    /* 00543b69: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00543b70: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 00543b76: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 00543b79: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 00543b7c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00543b7e: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00543b80: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00543b82: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00543b84: push 0x311682 */ { u32 v = 0x311682u; r_esp -= 4; W32(r_esp, v); }
    /* 00543b89: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 00543b8f: mov ecx, dword ptr [ecx + 0x2c] */ r_ecx = R32((u32)(r_ecx+0x2cu));
    /* 00543b92: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x543b97u); f_005eae80();
    /* 00543b97: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 00543b9d: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 00543ba0: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 00543ba6: mov ecx, dword ptr [ecx + 0x2c] */ r_ecx = R32((u32)(r_ecx+0x2cu));
    /* 00543ba9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00543bab: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00543bae: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x543bb0u); call_ind(t); }
    /* 00543bb0: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 00543bb5: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x543bbau); f_00686d82();
    /* 00543bba: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00543bbd: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 00543bc0: mov dword ptr [ebp - 4], 0xc */ W32((u32)(r_ebp+0xfffffffcu), 0xcu);
    /* 00543bc7: cmp dword ptr [ebp - 0x74], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00543bcb: je 0x543bdd */ if (fZ) goto L_00543bdd;
L_00543bcd:; BB(0x00543bcd);
    /* 00543bcd: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 00543bd0: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x543bd5u); f_005f5bf0();
    /* 00543bd5: mov dword ptr [ebp - 0xbc], eax */ W32((u32)(r_ebp+0xffffff44u), r_eax);
    /* 00543bdb: jmp 0x543be7 */ goto L_00543be7;
L_00543bdd:; BB(0x00543bdd);
    /* 00543bdd: mov dword ptr [ebp - 0xbc], 0 */ W32((u32)(r_ebp+0xffffff44u), 0x0u);
L_00543be7:; BB(0x00543be7);
    /* 00543be7: mov ecx, dword ptr [ebp - 0xbc] */ r_ecx = R32((u32)(r_ebp+0xffffff44u));
    /* 00543bed: mov dword ptr [ebp - 0x70], ecx */ W32((u32)(r_ebp+0xffffff90u), r_ecx);
    /* 00543bf0: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00543bf7: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 00543bfd: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 00543c00: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 00543c03: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00543c05: push 0x1f4 */ { u32 v = 0x1f4u; r_esp -= 4; W32(r_esp, v); }
    /* 00543c0a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00543c0c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00543c0e: push 0x3116ea */ { u32 v = 0x3116eau; r_esp -= 4; W32(r_esp, v); }
    /* 00543c13: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 00543c19: mov ecx, dword ptr [ecx + 0x30] */ r_ecx = R32((u32)(r_ecx+0x30u));
    /* 00543c1c: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x543c21u); f_005eae80();
    /* 00543c21: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 00543c27: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 00543c2a: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 00543c30: mov ecx, dword ptr [ecx + 0x30] */ r_ecx = R32((u32)(r_ecx+0x30u));
    /* 00543c33: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00543c35: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00543c38: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x543c3au); call_ind(t); }
    /* 00543c3a: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 00543c3f: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x543c44u); f_00686d82();
    /* 00543c44: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00543c47: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 00543c4a: mov dword ptr [ebp - 4], 0xd */ W32((u32)(r_ebp+0xfffffffcu), 0xdu);
    /* 00543c51: cmp dword ptr [ebp - 0x7c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff84u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00543c55: je 0x543c67 */ if (fZ) goto L_00543c67;
L_00543c57:; BB(0x00543c57);
    /* 00543c57: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 00543c5a: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x543c5fu); f_005eaaf0();
    /* 00543c5f: mov dword ptr [ebp - 0xc0], eax */ W32((u32)(r_ebp+0xffffff40u), r_eax);
    /* 00543c65: jmp 0x543c71 */ goto L_00543c71;
L_00543c67:; BB(0x00543c67);
    /* 00543c67: mov dword ptr [ebp - 0xc0], 0 */ W32((u32)(r_ebp+0xffffff40u), 0x0u);
L_00543c71:; BB(0x00543c71);
    /* 00543c71: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 00543c77: mov dword ptr [ebp - 0x78], ecx */ W32((u32)(r_ebp+0xffffff88u), r_ecx);
    /* 00543c7a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00543c81: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 00543c87: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 00543c8a: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 00543c8d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00543c8f: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00543c91: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00543c93: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00543c95: push 0x3116f4 */ { u32 v = 0x3116f4u; r_esp -= 4; W32(r_esp, v); }
    /* 00543c9a: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 00543ca0: mov ecx, dword ptr [ecx + 0x34] */ r_ecx = R32((u32)(r_ecx+0x34u));
    /* 00543ca3: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x543ca8u); f_005eae80();
    /* 00543ca8: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 00543cae: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 00543cb1: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 00543cb7: mov ecx, dword ptr [ecx + 0x34] */ r_ecx = R32((u32)(r_ecx+0x34u));
    /* 00543cba: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00543cbc: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00543cbf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x543cc1u); call_ind(t); }
    /* 00543cc1: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 00543cc7: call 0x543dd0 */ r_esp -= 4; W32(r_esp, 0x543cccu); f_00543dd0();
    /* 00543ccc: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 00543cd2: call 0x543f00 */ r_esp -= 4; W32(r_esp, 0x543cd7u); f_00543f00();
    /* 00543cd7: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 00543cdd: call 0x5443d0 */ r_esp -= 4; W32(r_esp, 0x543ce2u); f_005443d0();
    /* 00543ce2: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 00543ce8: call 0x544490 */ r_esp -= 4; W32(r_esp, 0x543cedu); f_00544490();
    /* 00543ced: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 00543cf3: call 0x544620 */ r_esp -= 4; W32(r_esp, 0x543cf8u); f_00544620();
    /* 00543cf8: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 00543cfe: call 0x544d20 */ r_esp -= 4; W32(r_esp, 0x543d03u); f_00544d20();
    /* 00543d03: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00543d06: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00543d0d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00543d0e: mov esp, ebp */ r_esp = r_ebp;
    /* 00543d10: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00543d11: ret  */ FN_RET(0x00543500); r_esp += 4; return;
}

void f_00543d20(void) /* sub_543D20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00543d20);
    /* 00543d20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00543d21: mov ebp, esp */ r_ebp = r_esp;
    /* 00543d23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00543d24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00543d27: movzx eax, byte ptr [ebp + 0xc] */ r_eax = (u32)R8((u32)(r_ebp+0xcu));
    /* 00543d2b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00543d2d: jne 0x543d3b */ if (!fZ) goto L_00543d3b;
L_00543d2f:; BB(0x00543d2f);
    /* 00543d2f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00543d32: mov eax, dword ptr [ecx*4 + 0x73b3fc] */ r_eax = R32((u32)(r_ecx*4+0x73b3fcu));
    /* 00543d39: jmp 0x543d45 */ goto L_00543d45;
L_00543d3b:; BB(0x00543d3b);
    /* 00543d3b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00543d3e: mov eax, dword ptr [edx*4 + 0x73b3f0] */ r_eax = R32((u32)(r_edx*4+0x73b3f0u));
L_00543d45:; BB(0x00543d45);
    /* 00543d45: mov esp, ebp */ r_esp = r_ebp;
    /* 00543d47: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00543d48: ret 8 */ FN_RET(0x00543d20); r_esp += 12; return;
}

void f_00543d50(void) /* sub_543D50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00543d50);
    /* 00543d50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00543d51: mov ebp, esp */ r_ebp = r_esp;
    /* 00543d53: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00543d56: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00543d59: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00543d60: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 00543d65: mov ecx, dword ptr [eax + 0x4f10] */ r_ecx = R32((u32)(r_eax+0x4f10u));
    /* 00543d6b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00543d6e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00543d71: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00543d74: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00543d77: sub eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00543d7a: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00543d7d: cmp dword ptr [ebp - 0xc], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00543d81: ja 0x543da6 */ if ((!fC&&!fZ)) goto L_00543da6;
L_00543d83:; BB(0x00543d83);
    /* 00543d83: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00543d86: jmp dword ptr [ecx*4 + 0x543dac] */ { u32 t = R32((u32)(r_ecx*4+0x543dacu)); switch (t) { case 0x543d8du: goto L_00543d8d; case 0x543d91u: goto L_00543d91; case 0x543da6u: goto L_00543da6; case 0x543d98u: goto L_00543d98; case 0x543d9fu: goto L_00543d9f; default: UNSUP(0x00543d86, "jump table entry is not a known target"); } }
L_00543d8d:; BB(0x00543d8d);
    /* 00543d8d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00543d8f: jmp 0x543da8 */ goto L_00543da8;
L_00543d91:; BB(0x00543d91);
    /* 00543d91: mov eax, 1 */ r_eax = 0x1u;
    /* 00543d96: jmp 0x543da8 */ goto L_00543da8;
L_00543d98:; BB(0x00543d98);
    /* 00543d98: mov eax, 2 */ r_eax = 0x2u;
    /* 00543d9d: jmp 0x543da8 */ goto L_00543da8;
L_00543d9f:; BB(0x00543d9f);
    /* 00543d9f: mov eax, 3 */ r_eax = 0x3u;
    /* 00543da4: jmp 0x543da8 */ goto L_00543da8;
L_00543da6:; BB(0x00543da6);
    /* 00543da6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00543da8:; BB(0x00543da8);
    /* 00543da8: mov esp, ebp */ r_esp = r_ebp;
    /* 00543daa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00543dab: ret  */ FN_RET(0x00543d50); r_esp += 4; return;
}

void f_00543dd0(void) /* sub_543DD0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00543dd0);
    /* 00543dd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00543dd1: mov ebp, esp */ r_ebp = r_esp;
    /* 00543dd3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00543dd5: push 0x6a4f5c */ { u32 v = 0x6a4f5cu; r_esp -= 4; W32(r_esp, v); }
    /* 00543dda: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00543de0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00543de1: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00543de4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00543de9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00543deb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00543dec: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00543def: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00543df5: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00543df8: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00543dff: jmp 0x543e0a */ goto L_00543e0a;
L_00543e01:; BB(0x00543e01);
    /* 00543e01: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00543e04: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00543e07: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_00543e0a:; BB(0x00543e0a);
    /* 00543e0a: cmp dword ptr [ebp - 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00543e0e: jge 0x543eea */ if ((fS==fO)) goto L_00543eea;
L_00543e14:; BB(0x00543e14);
    /* 00543e14: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 00543e1b: jmp 0x543e26 */ goto L_00543e26;
L_00543e1d:; BB(0x00543e1d);
    /* 00543e1d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00543e20: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00543e23: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
L_00543e26:; BB(0x00543e26);
    /* 00543e26: cmp dword ptr [ebp - 0x14], 6 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00543e2a: jge 0x543ee5 */ if ((fS==fO)) goto L_00543ee5;
L_00543e30:; BB(0x00543e30);
    /* 00543e30: push 0x1a8 */ { u32 v = 0x1a8u; r_esp -= 4; W32(r_esp, v); }
    /* 00543e35: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x543e3au); f_00686d82();
    /* 00543e3a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00543e3d: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00543e40: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00543e47: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00543e4b: je 0x543e5a */ if (fZ) goto L_00543e5a;
L_00543e4d:; BB(0x00543e4d);
    /* 00543e4d: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00543e50: call 0x545f70 */ r_esp -= 4; W32(r_esp, 0x543e55u); f_00545f70();
    /* 00543e55: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00543e58: jmp 0x543e61 */ goto L_00543e61;
L_00543e5a:; BB(0x00543e5a);
    /* 00543e5a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00543e61:; BB(0x00543e61);
    /* 00543e61: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00543e64: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00543e67: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00543e6e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00543e71: imul eax, eax, 0x18 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x18u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00543e74: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00543e77: lea edx, [ecx + eax + 0x44] */ r_edx = (u32)(r_ecx+r_eax+0x44u);
    /* 00543e7b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00543e7e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00543e81: mov dword ptr [edx + eax*4], ecx */ W32((u32)(r_edx+r_eax*4), r_ecx);
    /* 00543e84: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00543e86: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00543e88: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00543e8a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00543e8c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00543e8e: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00543e91: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00543e92: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00543e95: call 0x543d20 */ r_esp -= 4; W32(r_esp, 0x543e9au); f_00543d20();
    /* 00543e9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00543e9b: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00543e9e: imul eax, eax, 0x18 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x18u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00543ea1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00543ea4: lea edx, [ecx + eax + 0x44] */ r_edx = (u32)(r_ecx+r_eax+0x44u);
    /* 00543ea8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00543eab: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 00543eae: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x543eb3u); f_005eae80();
    /* 00543eb3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00543eb6: imul ecx, ecx, 0x18 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x18u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00543eb9: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00543ebc: lea eax, [edx + ecx + 0x44] */ r_eax = (u32)(r_edx+r_ecx+0x44u);
    /* 00543ec0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00543ec3: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 00543ec6: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00543ec9: imul eax, eax, 0x18 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x18u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00543ecc: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00543ecf: lea eax, [ecx + eax + 0x44] */ r_eax = (u32)(r_ecx+r_eax+0x44u);
    /* 00543ed3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00543ed6: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 00543ed9: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00543edb: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00543ede: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x543ee0u); call_ind(t); }
    /* 00543ee0: jmp 0x543e1d */ goto L_00543e1d;
L_00543ee5:; BB(0x00543ee5);
    /* 00543ee5: jmp 0x543e01 */ goto L_00543e01;
L_00543eea:; BB(0x00543eea);
    /* 00543eea: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00543eed: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00543ef4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00543ef5: mov esp, ebp */ r_esp = r_ebp;
    /* 00543ef7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00543ef8: ret  */ FN_RET(0x00543dd0); r_esp += 4; return;
}

void f_00543f00(void) /* sub_543F00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00543f00);
    /* 00543f00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00543f01: mov ebp, esp */ r_ebp = r_esp;
    /* 00543f03: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00543f05: push 0x6a4f82 */ { u32 v = 0x6a4f82u; r_esp -= 4; W32(r_esp, v); }
    /* 00543f0a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00543f10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00543f11: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00543f14: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00543f19: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00543f1b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00543f1c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00543f1f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00543f25: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00543f28: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00543f2f: jmp 0x543f3a */ goto L_00543f3a;
L_00543f31:; BB(0x00543f31);
    /* 00543f31: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00543f34: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00543f37: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_00543f3a:; BB(0x00543f3a);
    /* 00543f3a: cmp dword ptr [ebp - 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00543f3e: jge 0x543fac */ if ((fS==fO)) goto L_00543fac;
L_00543f40:; BB(0x00543f40);
    /* 00543f40: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 00543f45: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x543f4au); f_00686d82();
    /* 00543f4a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00543f4d: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00543f50: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00543f57: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00543f5b: je 0x543f6a */ if (fZ) goto L_00543f6a;
L_00543f5d:; BB(0x00543f5d);
    /* 00543f5d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00543f60: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x543f65u); f_005f5bf0();
    /* 00543f65: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00543f68: jmp 0x543f71 */ goto L_00543f71;
L_00543f6a:; BB(0x00543f6a);
    /* 00543f6a: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_00543f71:; BB(0x00543f71);
    /* 00543f71: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00543f74: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00543f77: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00543f7e: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00543f81: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00543f84: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00543f87: mov dword ptr [eax + edx*4 + 0x10], ecx */ W32((u32)(r_eax+r_edx*4+0x10u), r_ecx);
    /* 00543f8b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00543f8d: push 0x190 */ { u32 v = 0x190u; r_esp -= 4; W32(r_esp, v); }
    /* 00543f92: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00543f94: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00543f96: push 0x3116cf */ { u32 v = 0x3116cfu; r_esp -= 4; W32(r_esp, v); }
    /* 00543f9b: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00543f9e: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00543fa1: mov ecx, dword ptr [eax + edx*4 + 0x10] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x10u));
    /* 00543fa5: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x543faau); f_005eae80();
    /* 00543faa: jmp 0x543f31 */ goto L_00543f31;
L_00543fac:; BB(0x00543fac);
    /* 00543fac: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00543faf: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00543fb6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00543fb7: mov esp, ebp */ r_esp = r_ebp;
    /* 00543fb9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00543fba: ret  */ FN_RET(0x00543f00); r_esp += 4; return;
}

void f_00543fc0(void) /* sub_543FC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00543fc0);
    /* 00543fc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00543fc1: mov ebp, esp */ r_ebp = r_esp;
    /* 00543fc3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00543fc6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00543fc9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00543fd0: jmp 0x543fdb */ goto L_00543fdb;
L_00543fd2:; BB(0x00543fd2);
    /* 00543fd2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00543fd5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00543fd8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00543fdb:; BB(0x00543fdb);
    /* 00543fdb: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00543fdf: jge 0x544042 */ if ((fS==fO)) goto L_00544042;
L_00543fe1:; BB(0x00543fe1);
    /* 00543fe1: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00543fe8: jmp 0x543ff3 */ goto L_00543ff3;
L_00543fea:; BB(0x00543fea);
    /* 00543fea: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00543fed: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00543ff0: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_00543ff3:; BB(0x00543ff3);
    /* 00543ff3: cmp dword ptr [ebp - 8], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00543ff7: jge 0x544040 */ if ((fS==fO)) goto L_00544040;
L_00543ff9:; BB(0x00543ff9);
    /* 00543ff9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00543ffc: imul edx, edx, 0x18 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x18u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00543fff: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00544002: lea ecx, [eax + edx + 0x44] */ r_ecx = (u32)(r_eax+r_edx+0x44u);
    /* 00544006: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00544009: cmp dword ptr [ecx + edx*4], 0 */ {  u32 a = R32((u32)(r_ecx+r_edx*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054400d: je 0x54403e */ if (fZ) goto L_0054403e;
L_0054400f:; BB(0x0054400f);
    /* 0054400f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00544012: imul eax, eax, 0x18 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x18u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00544015: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00544018: lea edx, [ecx + eax + 0x44] */ r_edx = (u32)(r_ecx+r_eax+0x44u);
    /* 0054401c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054401f: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 00544022: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00544025: imul edx, edx, 0x18 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x18u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00544028: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054402b: lea edx, [eax + edx + 0x44] */ r_edx = (u32)(r_eax+r_edx+0x44u);
    /* 0054402f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00544032: mov edx, dword ptr [edx + eax*4] */ r_edx = R32((u32)(r_edx+r_eax*4));
    /* 00544035: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00544037: mov ecx, edx */ r_ecx = r_edx;
    /* 00544039: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 0054403c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x54403eu); call_ind(t); }
L_0054403e:; BB(0x0054403e);
    /* 0054403e: jmp 0x543fea */ goto L_00543fea;
L_00544040:; BB(0x00544040);
    /* 00544040: jmp 0x543fd2 */ goto L_00543fd2;
L_00544042:; BB(0x00544042);
    /* 00544042: mov esp, ebp */ r_esp = r_ebp;
    /* 00544044: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00544045: ret  */ FN_RET(0x00543fc0); r_esp += 4; return;
}

