#include "protos.h"

void f_00618330(void) /* sub_618330 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00618330);
    /* 00618330: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00618331: mov ebp, esp */ r_ebp = r_esp;
    /* 00618333: sub esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00618336: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00618339: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 0061833f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00618342: add ecx, dword ptr [ebp + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00618345: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00618348: cmp dword ptr [ebp + 0x18], 0x80 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061834f: je 0x618375 */ if (fZ) goto L_00618375;
L_00618351:; BB(0x00618351);
    /* 00618351: cmp dword ptr [ebp + 0x18], 0x82 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0x82u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618358: je 0x618375 */ if (fZ) goto L_00618375;
L_0061835a:; BB(0x0061835a);
    /* 0061835a: cmp dword ptr [ebp + 0x18], 0x84 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0x84u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618361: je 0x618375 */ if (fZ) goto L_00618375;
L_00618363:; BB(0x00618363);
    /* 00618363: cmp dword ptr [ebp + 0x18], 0x88 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0x88u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061836a: je 0x618375 */ if (fZ) goto L_00618375;
L_0061836c:; BB(0x0061836c);
    /* 0061836c: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 00618373: jmp 0x61837c */ goto L_0061837c;
L_00618375:; BB(0x00618375);
    /* 00618375: mov dword ptr [ebp - 0x20], 1 */ W32((u32)(r_ebp+0xffffffe0u), 0x1u);
L_0061837c:; BB(0x0061837c);
    /* 0061837c: movzx edx, byte ptr [ebp - 0x20] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffe0u));
    /* 00618380: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618382: je 0x618390 */ if (fZ) goto L_00618390;
L_00618384:; BB(0x00618384);
    /* 00618384: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00618387: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061838a: add eax, dword ptr [ebp - 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061838d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_00618390:; BB(0x00618390);
    /* 00618390: mov dword ptr [ebp - 0xc], 0x15ede10 */ W32((u32)(r_ebp+0xfffffff4u), 0x15ede10u);
L_00618397:; BB(0x00618397);
    /* 00618397: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061839a: cmp ecx, dword ptr [ebp - 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0061839d: jae 0x618d79 */ if (!fC) goto L_00618d79;
L_006183a3:; BB(0x006183a3);
    /* 006183a3: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 006183aa: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 006183ad: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006183ae: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 006183b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006183b2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006183b5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006183b6: call 0x617b70 */ r_esp -= 4; W32(r_esp, 0x6183bbu); f_00617b70();
    /* 006183bb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006183be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006183c0: je 0x6184d9 */ if (fZ) goto L_006184d9;
L_006183c6:; BB(0x006183c6);
    /* 006183c6: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006183c9: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006183cc: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
    /* 006183cf: cmp dword ptr [ebp + 0x18], 0x80 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006183d6: je 0x6183fc */ if (fZ) goto L_006183fc;
L_006183d8:; BB(0x006183d8);
    /* 006183d8: cmp dword ptr [ebp + 0x18], 0x82 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0x82u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006183df: je 0x6183fc */ if (fZ) goto L_006183fc;
L_006183e1:; BB(0x006183e1);
    /* 006183e1: cmp dword ptr [ebp + 0x18], 0x84 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0x84u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006183e8: je 0x6183fc */ if (fZ) goto L_006183fc;
L_006183ea:; BB(0x006183ea);
    /* 006183ea: cmp dword ptr [ebp + 0x18], 0x88 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0x88u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006183f1: je 0x6183fc */ if (fZ) goto L_006183fc;
L_006183f3:; BB(0x006183f3);
    /* 006183f3: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006183fa: jmp 0x618403 */ goto L_00618403;
L_006183fc:; BB(0x006183fc);
    /* 006183fc: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
L_00618403:; BB(0x00618403);
    /* 00618403: movzx eax, byte ptr [ebp - 0x24] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffdcu));
    /* 00618407: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618409: je 0x618414 */ if (fZ) goto L_00618414;
L_0061840b:; BB(0x0061840b);
    /* 0061840b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061840e: add ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00618411: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
L_00618414:; BB(0x00618414);
    /* 00618414: cmp dword ptr [ebp + 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618418: je 0x618423 */ if (fZ) goto L_00618423;
L_0061841a:; BB(0x0061841a);
    /* 0061841a: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0061841d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00618420: mov dword ptr [ebp + 0x14], edx */ W32((u32)(r_ebp+0x14u), r_edx);
L_00618423:; BB(0x00618423);
    /* 00618423: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00618426: cmp eax, dword ptr [ebp - 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00618429: jae 0x6184b2 */ if (!fC) goto L_006184b2;
L_0061842f:; BB(0x0061842f);
    /* 0061842f: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 00618432: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00618433: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 00618436: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00618437: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061843a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061843b: call 0x617b70 */ r_esp -= 4; W32(r_esp, 0x618440u); f_00617b70();
    /* 00618440: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00618443: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618445: je 0x6184b2 */ if (fZ) goto L_006184b2;
L_00618447:; BB(0x00618447);
    /* 00618447: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061844a: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061844d: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 00618450: cmp dword ptr [ebp + 0x18], 0x80 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618457: je 0x61847d */ if (fZ) goto L_0061847d;
L_00618459:; BB(0x00618459);
    /* 00618459: cmp dword ptr [ebp + 0x18], 0x82 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0x82u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618460: je 0x61847d */ if (fZ) goto L_0061847d;
L_00618462:; BB(0x00618462);
    /* 00618462: cmp dword ptr [ebp + 0x18], 0x84 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0x84u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618469: je 0x61847d */ if (fZ) goto L_0061847d;
L_0061846b:; BB(0x0061846b);
    /* 0061846b: cmp dword ptr [ebp + 0x18], 0x88 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0x88u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618472: je 0x61847d */ if (fZ) goto L_0061847d;
L_00618474:; BB(0x00618474);
    /* 00618474: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0061847b: jmp 0x618484 */ goto L_00618484;
L_0061847d:; BB(0x0061847d);
    /* 0061847d: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
L_00618484:; BB(0x00618484);
    /* 00618484: movzx edx, byte ptr [ebp - 0x28] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffd8u));
    /* 00618488: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061848a: je 0x618495 */ if (fZ) goto L_00618495;
L_0061848c:; BB(0x0061848c);
    /* 0061848c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061848f: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00618492: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
L_00618495:; BB(0x00618495);
    /* 00618495: cmp dword ptr [ebp + 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618499: je 0x6184a4 */ if (fZ) goto L_006184a4;
L_0061849b:; BB(0x0061849b);
    /* 0061849b: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0061849e: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006184a1: mov dword ptr [ebp + 0x14], ecx */ W32((u32)(r_ebp+0x14u), r_ecx);
L_006184a4:; BB(0x006184a4);
    /* 006184a4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006184a7: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006184aa: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 006184ad: jmp 0x618423 */ goto L_00618423;
L_006184b2:; BB(0x006184b2);
    /* 006184b2: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 006184b5: mov byte ptr [eax], 1 */ W8((u32)(r_eax), 0x1u);
    /* 006184b8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006184bb: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006184be: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 006184c1: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006184c4: mov ax, word ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 006184c8: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 006184cb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006184ce: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006184d1: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 006184d4: jmp 0x618d74 */ goto L_00618d74;
L_006184d9:; BB(0x006184d9);
    /* 006184d9: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 006184dc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006184dd: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006184e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006184e1: call 0x617cf0 */ r_esp -= 4; W32(r_esp, 0x6184e6u); f_00617cf0();
    /* 006184e6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006184e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006184eb: je 0x618755 */ if (fZ) goto L_00618755;
L_006184f1:; BB(0x006184f1);
    /* 006184f1: cmp dword ptr [ebp + 0x18], 0x80 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006184f8: je 0x61851e */ if (fZ) goto L_0061851e;
L_006184fa:; BB(0x006184fa);
    /* 006184fa: cmp dword ptr [ebp + 0x18], 0x82 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0x82u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618501: je 0x61851e */ if (fZ) goto L_0061851e;
L_00618503:; BB(0x00618503);
    /* 00618503: cmp dword ptr [ebp + 0x18], 0x84 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0x84u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061850a: je 0x61851e */ if (fZ) goto L_0061851e;
L_0061850c:; BB(0x0061850c);
    /* 0061850c: cmp dword ptr [ebp + 0x18], 0x88 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0x88u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618513: je 0x61851e */ if (fZ) goto L_0061851e;
L_00618515:; BB(0x00618515);
    /* 00618515: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0061851c: jmp 0x618525 */ goto L_00618525;
L_0061851e:; BB(0x0061851e);
    /* 0061851e: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
L_00618525:; BB(0x00618525);
    /* 00618525: movzx ecx, byte ptr [ebp - 0x2c] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffd4u));
    /* 00618529: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061852b: je 0x618535 */ if (fZ) goto L_00618535;
L_0061852d:; BB(0x0061852d);
    /* 0061852d: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00618530: mov byte ptr [edx], 0x84 */ W8((u32)(r_edx), 0x84u);
    /* 00618533: jmp 0x61853b */ goto L_0061853b;
L_00618535:; BB(0x00618535);
    /* 00618535: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00618538: mov byte ptr [eax], 4 */ W8((u32)(r_eax), 0x4u);
L_0061853b:; BB(0x0061853b);
    /* 0061853b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061853e: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00618541: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00618544: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00618547: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0061854a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061854d: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00618550: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00618553: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 0061855a: jmp 0x618565 */ goto L_00618565;
L_0061855c:; BB(0x0061855c);
    /* 0061855c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061855f: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00618562: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
L_00618565:; BB(0x00618565);
    /* 00618565: cmp dword ptr [ebp + 0x18], 0x80 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061856c: je 0x618592 */ if (fZ) goto L_00618592;
L_0061856e:; BB(0x0061856e);
    /* 0061856e: cmp dword ptr [ebp + 0x18], 0x82 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0x82u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618575: je 0x618592 */ if (fZ) goto L_00618592;
L_00618577:; BB(0x00618577);
    /* 00618577: cmp dword ptr [ebp + 0x18], 0x84 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0x84u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061857e: je 0x618592 */ if (fZ) goto L_00618592;
L_00618580:; BB(0x00618580);
    /* 00618580: cmp dword ptr [ebp + 0x18], 0x88 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0x88u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618587: je 0x618592 */ if (fZ) goto L_00618592;
L_00618589:; BB(0x00618589);
    /* 00618589: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00618590: jmp 0x618599 */ goto L_00618599;
L_00618592:; BB(0x00618592);
    /* 00618592: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
L_00618599:; BB(0x00618599);
    /* 00618599: movzx edx, byte ptr [ebp - 0x30] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffd0u));
    /* 0061859d: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); fC = (b != 0); }
    /* 0061859f: sbb edx, edx */ { u32 c = fC; u32 a = r_edx; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
    /* 006185a1: and edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 006185a4: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006185a7: cmp dword ptr [ebp - 0x18], edx */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006185aa: jge 0x6185ca */ if ((fS==fO)) goto L_006185ca;
L_006185ac:; BB(0x006185ac);
    /* 006185ac: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 006185af: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006185b2: mov dl, byte ptr [ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 006185b4: mov byte ptr [eax], dl */ W8((u32)(r_eax), (u8)r_edx);
    /* 006185b6: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 006185b9: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006185bc: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 006185bf: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006185c2: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006185c5: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 006185c8: jmp 0x61855c */ goto L_0061855c;
L_006185ca:; BB(0x006185ca);
    /* 006185ca: cmp dword ptr [ebp + 0x18], 0x80 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006185d1: je 0x6185f7 */ if (fZ) goto L_006185f7;
L_006185d3:; BB(0x006185d3);
    /* 006185d3: cmp dword ptr [ebp + 0x18], 0x82 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0x82u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006185da: je 0x6185f7 */ if (fZ) goto L_006185f7;
L_006185dc:; BB(0x006185dc);
    /* 006185dc: cmp dword ptr [ebp + 0x18], 0x84 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0x84u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006185e3: je 0x6185f7 */ if (fZ) goto L_006185f7;
L_006185e5:; BB(0x006185e5);
    /* 006185e5: cmp dword ptr [ebp + 0x18], 0x88 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0x88u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006185ec: je 0x6185f7 */ if (fZ) goto L_006185f7;
L_006185ee:; BB(0x006185ee);
    /* 006185ee: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 006185f5: jmp 0x6185fe */ goto L_006185fe;
L_006185f7:; BB(0x006185f7);
    /* 006185f7: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
L_006185fe:; BB(0x006185fe);
    /* 006185fe: movzx edx, byte ptr [ebp - 0x34] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffccu));
    /* 00618602: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618604: je 0x61860f */ if (fZ) goto L_0061860f;
L_00618606:; BB(0x00618606);
    /* 00618606: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00618609: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061860c: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
L_0061860f:; BB(0x0061860f);
    /* 0061860f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00618612: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 00618615: mov al, byte ptr [edx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 00618617: mov byte ptr [ecx], al */ W8((u32)(r_ecx), (u8)r_eax);
    /* 00618619: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061861c: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061861f: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00618622: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 00618625: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00618628: mov dword ptr [ebp + 0x14], edx */ W32((u32)(r_ebp+0x14u), r_edx);
L_0061862b:; BB(0x0061862b);
    /* 0061862b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061862e: cmp eax, dword ptr [ebp - 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00618631: jae 0x618735 */ if (!fC) goto L_00618735;
L_00618637:; BB(0x00618637);
    /* 00618637: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0061863a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061863b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061863e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061863f: call 0x617cf0 */ r_esp -= 4; W32(r_esp, 0x618644u); f_00617cf0();
    /* 00618644: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00618647: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618649: je 0x618735 */ if (fZ) goto L_00618735;
L_0061864f:; BB(0x0061864f);
    /* 0061864f: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 00618656: jmp 0x618661 */ goto L_00618661;
L_00618658:; BB(0x00618658);
    /* 00618658: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061865b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061865e: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_00618661:; BB(0x00618661);
    /* 00618661: cmp dword ptr [ebp + 0x18], 0x80 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618668: je 0x61868e */ if (fZ) goto L_0061868e;
L_0061866a:; BB(0x0061866a);
    /* 0061866a: cmp dword ptr [ebp + 0x18], 0x82 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0x82u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618671: je 0x61868e */ if (fZ) goto L_0061868e;
L_00618673:; BB(0x00618673);
    /* 00618673: cmp dword ptr [ebp + 0x18], 0x84 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0x84u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061867a: je 0x61868e */ if (fZ) goto L_0061868e;
L_0061867c:; BB(0x0061867c);
    /* 0061867c: cmp dword ptr [ebp + 0x18], 0x88 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0x88u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618683: je 0x61868e */ if (fZ) goto L_0061868e;
L_00618685:; BB(0x00618685);
    /* 00618685: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 0061868c: jmp 0x618695 */ goto L_00618695;
L_0061868e:; BB(0x0061868e);
    /* 0061868e: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
L_00618695:; BB(0x00618695);
    /* 00618695: movzx ecx, byte ptr [ebp - 0x38] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffc8u));
    /* 00618699: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 0061869b: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 0061869d: and ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 006186a0: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006186a3: cmp dword ptr [ebp - 0x18], ecx */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006186a6: jge 0x6186c6 */ if ((fS==fO)) goto L_006186c6;
L_006186a8:; BB(0x006186a8);
    /* 006186a8: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006186ab: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006186ae: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 006186b0: mov byte ptr [edx], cl */ W8((u32)(r_edx), (u8)r_ecx);
    /* 006186b2: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006186b5: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006186b8: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 006186bb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006186be: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006186c1: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 006186c4: jmp 0x618658 */ goto L_00618658;
L_006186c6:; BB(0x006186c6);
    /* 006186c6: cmp dword ptr [ebp + 0x18], 0x80 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006186cd: je 0x6186f3 */ if (fZ) goto L_006186f3;
L_006186cf:; BB(0x006186cf);
    /* 006186cf: cmp dword ptr [ebp + 0x18], 0x82 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0x82u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006186d6: je 0x6186f3 */ if (fZ) goto L_006186f3;
L_006186d8:; BB(0x006186d8);
    /* 006186d8: cmp dword ptr [ebp + 0x18], 0x84 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0x84u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006186df: je 0x6186f3 */ if (fZ) goto L_006186f3;
L_006186e1:; BB(0x006186e1);
    /* 006186e1: cmp dword ptr [ebp + 0x18], 0x88 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0x88u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006186e8: je 0x6186f3 */ if (fZ) goto L_006186f3;
L_006186ea:; BB(0x006186ea);
    /* 006186ea: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 006186f1: jmp 0x6186fa */ goto L_006186fa;
L_006186f3:; BB(0x006186f3);
    /* 006186f3: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
L_006186fa:; BB(0x006186fa);
    /* 006186fa: movzx ecx, byte ptr [ebp - 0x3c] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffc4u));
    /* 006186fe: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618700: je 0x61870b */ if (fZ) goto L_0061870b;
L_00618702:; BB(0x00618702);
    /* 00618702: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00618705: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00618708: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
L_0061870b:; BB(0x0061870b);
    /* 0061870b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061870e: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00618711: mov dl, byte ptr [ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 00618713: mov byte ptr [eax], dl */ W8((u32)(r_eax), (u8)r_edx);
    /* 00618715: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00618718: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061871b: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0061871e: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00618721: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00618724: mov dword ptr [ebp + 0x14], ecx */ W32((u32)(r_ebp+0x14u), r_ecx);
    /* 00618727: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061872a: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061872d: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00618730: jmp 0x61862b */ goto L_0061862b;
L_00618735:; BB(0x00618735);
    /* 00618735: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00618738: mov cl, byte ptr [ebp - 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0061873b: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 0061873d: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00618740: mov ax, word ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 00618744: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 00618747: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061874a: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061874d: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00618750: jmp 0x618d74 */ goto L_00618d74;
L_00618755:; BB(0x00618755);
    /* 00618755: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 00618758: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00618759: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0061875c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061875d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00618760: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00618761: call 0x617c30 */ r_esp -= 4; W32(r_esp, 0x618766u); f_00617c30();
    /* 00618766: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00618769: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061876b: je 0x618d74 */ if (fZ) goto L_00618d74;
L_00618771:; BB(0x00618771);
    /* 00618771: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 00618774: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 00618777: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0061877a: sub eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0061877d: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00618780: cmp dword ptr [ebp - 0x40], 0x32 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00618784: ja 0x618797 */ if ((!fC&&!fZ)) goto L_00618797;
L_00618786:; BB(0x00618786);
    /* 00618786: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00618789: movzx edx, byte ptr [ecx + 0x618dc4] */ r_edx = (u32)R8((u32)(r_ecx+0x618dc4u));
    /* 00618790: jmp dword ptr [edx*4 + 0x618dbc] */ { u32 t = R32((u32)(r_edx*4+0x618dbcu)); switch (t) { case 0x618cbau: goto L_00618cba; case 0x618797u: goto L_00618797; default: UNSUP(0x00618790, "jump table entry is not a known target"); } }
L_00618797:; BB(0x00618797);
    /* 00618797: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 0061879a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061879b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061879e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061879f: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 006187a2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006187a3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006187a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006187a7: call 0x617d20 */ r_esp -= 4; W32(r_esp, 0x6187acu); f_00617d20();
    /* 006187ac: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006187af: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006187b1: jne 0x618a25 */ if (!fZ) goto L_00618a25;
L_006187b7:; BB(0x006187b7);
    /* 006187b7: cmp dword ptr [ebp + 0x18], 0x80 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006187be: je 0x6187e4 */ if (fZ) goto L_006187e4;
L_006187c0:; BB(0x006187c0);
    /* 006187c0: cmp dword ptr [ebp + 0x18], 0x82 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0x82u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006187c7: je 0x6187e4 */ if (fZ) goto L_006187e4;
L_006187c9:; BB(0x006187c9);
    /* 006187c9: cmp dword ptr [ebp + 0x18], 0x84 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0x84u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006187d0: je 0x6187e4 */ if (fZ) goto L_006187e4;
L_006187d2:; BB(0x006187d2);
    /* 006187d2: cmp dword ptr [ebp + 0x18], 0x88 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0x88u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006187d9: je 0x6187e4 */ if (fZ) goto L_006187e4;
L_006187db:; BB(0x006187db);
    /* 006187db: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 006187e2: jmp 0x6187eb */ goto L_006187eb;
L_006187e4:; BB(0x006187e4);
    /* 006187e4: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
L_006187eb:; BB(0x006187eb);
    /* 006187eb: movzx ecx, byte ptr [ebp - 0x44] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffbcu));
    /* 006187ef: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006187f1: je 0x6187fb */ if (fZ) goto L_006187fb;
L_006187f3:; BB(0x006187f3);
    /* 006187f3: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006187f6: mov byte ptr [edx], 0x82 */ W8((u32)(r_edx), 0x82u);
    /* 006187f9: jmp 0x618801 */ goto L_00618801;
L_006187fb:; BB(0x006187fb);
    /* 006187fb: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 006187fe: mov byte ptr [eax], 2 */ W8((u32)(r_eax), 0x2u);
L_00618801:; BB(0x00618801);
    /* 00618801: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00618804: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00618807: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0061880a: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061880d: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00618810: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00618813: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00618816: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00618819: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 00618820: jmp 0x61882b */ goto L_0061882b;
L_00618822:; BB(0x00618822);
    /* 00618822: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00618825: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00618828: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
L_0061882b:; BB(0x0061882b);
    /* 0061882b: cmp dword ptr [ebp + 0x18], 0x80 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618832: je 0x618858 */ if (fZ) goto L_00618858;
L_00618834:; BB(0x00618834);
    /* 00618834: cmp dword ptr [ebp + 0x18], 0x82 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0x82u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061883b: je 0x618858 */ if (fZ) goto L_00618858;
L_0061883d:; BB(0x0061883d);
    /* 0061883d: cmp dword ptr [ebp + 0x18], 0x84 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0x84u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618844: je 0x618858 */ if (fZ) goto L_00618858;
L_00618846:; BB(0x00618846);
    /* 00618846: cmp dword ptr [ebp + 0x18], 0x88 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0x88u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061884d: je 0x618858 */ if (fZ) goto L_00618858;
L_0061884f:; BB(0x0061884f);
    /* 0061884f: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 00618856: jmp 0x61885f */ goto L_0061885f;
L_00618858:; BB(0x00618858);
    /* 00618858: mov dword ptr [ebp - 0x48], 1 */ W32((u32)(r_ebp+0xffffffb8u), 0x1u);
L_0061885f:; BB(0x0061885f);
    /* 0061885f: movzx edx, byte ptr [ebp - 0x48] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffb8u));
    /* 00618863: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); fC = (b != 0); }
    /* 00618865: sbb edx, edx */ { u32 c = fC; u32 a = r_edx; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
    /* 00618867: and edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0061886a: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061886d: cmp dword ptr [ebp - 0x18], edx */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00618870: jge 0x618890 */ if ((fS==fO)) goto L_00618890;
L_00618872:; BB(0x00618872);
    /* 00618872: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00618875: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00618878: mov dl, byte ptr [ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 0061887a: mov byte ptr [eax], dl */ W8((u32)(r_eax), (u8)r_edx);
    /* 0061887c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061887f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00618882: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00618885: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00618888: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061888b: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 0061888e: jmp 0x618822 */ goto L_00618822;
L_00618890:; BB(0x00618890);
    /* 00618890: cmp dword ptr [ebp + 0x18], 0x80 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618897: je 0x6188bd */ if (fZ) goto L_006188bd;
L_00618899:; BB(0x00618899);
    /* 00618899: cmp dword ptr [ebp + 0x18], 0x82 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0x82u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006188a0: je 0x6188bd */ if (fZ) goto L_006188bd;
L_006188a2:; BB(0x006188a2);
    /* 006188a2: cmp dword ptr [ebp + 0x18], 0x84 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0x84u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006188a9: je 0x6188bd */ if (fZ) goto L_006188bd;
L_006188ab:; BB(0x006188ab);
    /* 006188ab: cmp dword ptr [ebp + 0x18], 0x88 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0x88u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006188b2: je 0x6188bd */ if (fZ) goto L_006188bd;
L_006188b4:; BB(0x006188b4);
    /* 006188b4: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 006188bb: jmp 0x6188c4 */ goto L_006188c4;
L_006188bd:; BB(0x006188bd);
    /* 006188bd: mov dword ptr [ebp - 0x4c], 1 */ W32((u32)(r_ebp+0xffffffb4u), 0x1u);
L_006188c4:; BB(0x006188c4);
    /* 006188c4: movzx edx, byte ptr [ebp - 0x4c] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffb4u));
    /* 006188c8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006188ca: je 0x6188d5 */ if (fZ) goto L_006188d5;
L_006188cc:; BB(0x006188cc);
    /* 006188cc: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006188cf: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006188d2: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
L_006188d5:; BB(0x006188d5);
    /* 006188d5: cmp dword ptr [ebp + 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006188d9: je 0x6188e4 */ if (fZ) goto L_006188e4;
L_006188db:; BB(0x006188db);
    /* 006188db: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 006188de: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006188e1: mov dword ptr [ebp + 0x14], ecx */ W32((u32)(r_ebp+0x14u), r_ecx);
L_006188e4:; BB(0x006188e4);
    /* 006188e4: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006188e7: cmp edx, dword ptr [ebp - 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006188ea: jae 0x618a05 */ if (!fC) goto L_00618a05;
L_006188f0:; BB(0x006188f0);
    /* 006188f0: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 006188f3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006188f4: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 006188f7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006188f8: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006188fb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006188fc: call 0x617c30 */ r_esp -= 4; W32(r_esp, 0x618901u); f_00617c30();
    /* 00618901: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00618904: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618906: je 0x618a05 */ if (fZ) goto L_00618a05;
L_0061890c:; BB(0x0061890c);
    /* 0061890c: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 0061890f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00618910: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00618913: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00618914: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 00618917: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00618918: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061891b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061891c: call 0x617d20 */ r_esp -= 4; W32(r_esp, 0x618921u); f_00617d20();
    /* 00618921: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00618924: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618926: jne 0x618a05 */ if (!fZ) goto L_00618a05;
L_0061892c:; BB(0x0061892c);
    /* 0061892c: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 00618933: jmp 0x61893e */ goto L_0061893e;
L_00618935:; BB(0x00618935);
    /* 00618935: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00618938: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061893b: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
L_0061893e:; BB(0x0061893e);
    /* 0061893e: cmp dword ptr [ebp + 0x18], 0x80 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618945: je 0x61896b */ if (fZ) goto L_0061896b;
L_00618947:; BB(0x00618947);
    /* 00618947: cmp dword ptr [ebp + 0x18], 0x82 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0x82u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061894e: je 0x61896b */ if (fZ) goto L_0061896b;
L_00618950:; BB(0x00618950);
    /* 00618950: cmp dword ptr [ebp + 0x18], 0x84 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0x84u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618957: je 0x61896b */ if (fZ) goto L_0061896b;
L_00618959:; BB(0x00618959);
    /* 00618959: cmp dword ptr [ebp + 0x18], 0x88 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0x88u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618960: je 0x61896b */ if (fZ) goto L_0061896b;
L_00618962:; BB(0x00618962);
    /* 00618962: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 00618969: jmp 0x618972 */ goto L_00618972;
L_0061896b:; BB(0x0061896b);
    /* 0061896b: mov dword ptr [ebp - 0x50], 1 */ W32((u32)(r_ebp+0xffffffb0u), 0x1u);
L_00618972:; BB(0x00618972);
    /* 00618972: movzx edx, byte ptr [ebp - 0x50] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffb0u));
    /* 00618976: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); fC = (b != 0); }
    /* 00618978: sbb edx, edx */ { u32 c = fC; u32 a = r_edx; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
    /* 0061897a: and edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0061897d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00618980: cmp dword ptr [ebp - 0x18], edx */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00618983: jge 0x6189a3 */ if ((fS==fO)) goto L_006189a3;
L_00618985:; BB(0x00618985);
    /* 00618985: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00618988: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061898b: mov dl, byte ptr [ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 0061898d: mov byte ptr [eax], dl */ W8((u32)(r_eax), (u8)r_edx);
    /* 0061898f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00618992: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00618995: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00618998: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061899b: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061899e: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 006189a1: jmp 0x618935 */ goto L_00618935;
L_006189a3:; BB(0x006189a3);
    /* 006189a3: cmp dword ptr [ebp + 0x18], 0x80 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006189aa: je 0x6189d0 */ if (fZ) goto L_006189d0;
L_006189ac:; BB(0x006189ac);
    /* 006189ac: cmp dword ptr [ebp + 0x18], 0x82 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0x82u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006189b3: je 0x6189d0 */ if (fZ) goto L_006189d0;
L_006189b5:; BB(0x006189b5);
    /* 006189b5: cmp dword ptr [ebp + 0x18], 0x84 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0x84u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006189bc: je 0x6189d0 */ if (fZ) goto L_006189d0;
L_006189be:; BB(0x006189be);
    /* 006189be: cmp dword ptr [ebp + 0x18], 0x88 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0x88u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006189c5: je 0x6189d0 */ if (fZ) goto L_006189d0;
L_006189c7:; BB(0x006189c7);
    /* 006189c7: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 006189ce: jmp 0x6189d7 */ goto L_006189d7;
L_006189d0:; BB(0x006189d0);
    /* 006189d0: mov dword ptr [ebp - 0x54], 1 */ W32((u32)(r_ebp+0xffffffacu), 0x1u);
L_006189d7:; BB(0x006189d7);
    /* 006189d7: movzx edx, byte ptr [ebp - 0x54] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffacu));
    /* 006189db: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006189dd: je 0x6189e8 */ if (fZ) goto L_006189e8;
L_006189df:; BB(0x006189df);
    /* 006189df: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006189e2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006189e5: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
L_006189e8:; BB(0x006189e8);
    /* 006189e8: cmp dword ptr [ebp + 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006189ec: je 0x6189f7 */ if (fZ) goto L_006189f7;
L_006189ee:; BB(0x006189ee);
    /* 006189ee: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 006189f1: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006189f4: mov dword ptr [ebp + 0x14], ecx */ W32((u32)(r_ebp+0x14u), r_ecx);
L_006189f7:; BB(0x006189f7);
    /* 006189f7: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006189fa: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006189fd: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00618a00: jmp 0x6188e4 */ goto L_006188e4;
L_00618a05:; BB(0x00618a05);
    /* 00618a05: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00618a08: mov cl, byte ptr [ebp - 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 00618a0b: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 00618a0d: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00618a10: mov ax, word ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 00618a14: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 00618a17: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00618a1a: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00618a1d: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00618a20: jmp 0x618cb5 */ goto L_00618cb5;
L_00618a25:; BB(0x00618a25);
    /* 00618a25: cmp dword ptr [ebp + 0x18], 0x80 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618a2c: je 0x618a52 */ if (fZ) goto L_00618a52;
L_00618a2e:; BB(0x00618a2e);
    /* 00618a2e: cmp dword ptr [ebp + 0x18], 0x82 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0x82u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618a35: je 0x618a52 */ if (fZ) goto L_00618a52;
L_00618a37:; BB(0x00618a37);
    /* 00618a37: cmp dword ptr [ebp + 0x18], 0x84 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0x84u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618a3e: je 0x618a52 */ if (fZ) goto L_00618a52;
L_00618a40:; BB(0x00618a40);
    /* 00618a40: cmp dword ptr [ebp + 0x18], 0x88 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0x88u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618a47: je 0x618a52 */ if (fZ) goto L_00618a52;
L_00618a49:; BB(0x00618a49);
    /* 00618a49: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 00618a50: jmp 0x618a59 */ goto L_00618a59;
L_00618a52:; BB(0x00618a52);
    /* 00618a52: mov dword ptr [ebp - 0x58], 1 */ W32((u32)(r_ebp+0xffffffa8u), 0x1u);
L_00618a59:; BB(0x00618a59);
    /* 00618a59: movzx edx, byte ptr [ebp - 0x58] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffa8u));
    /* 00618a5d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618a5f: je 0x618a69 */ if (fZ) goto L_00618a69;
L_00618a61:; BB(0x00618a61);
    /* 00618a61: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00618a64: mov byte ptr [eax], 0x88 */ W8((u32)(r_eax), 0x88u);
    /* 00618a67: jmp 0x618a6f */ goto L_00618a6f;
L_00618a69:; BB(0x00618a69);
    /* 00618a69: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00618a6c: mov byte ptr [ecx], 8 */ W8((u32)(r_ecx), 0x8u);
L_00618a6f:; BB(0x00618a6f);
    /* 00618a6f: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00618a72: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00618a75: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00618a78: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00618a7b: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00618a7e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00618a81: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00618a84: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 00618a87: cmp dword ptr [ebp + 0x18], 0x80 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618a8e: je 0x618ab4 */ if (fZ) goto L_00618ab4;
L_00618a90:; BB(0x00618a90);
    /* 00618a90: cmp dword ptr [ebp + 0x18], 0x82 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0x82u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618a97: je 0x618ab4 */ if (fZ) goto L_00618ab4;
L_00618a99:; BB(0x00618a99);
    /* 00618a99: cmp dword ptr [ebp + 0x18], 0x84 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0x84u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618aa0: je 0x618ab4 */ if (fZ) goto L_00618ab4;
L_00618aa2:; BB(0x00618aa2);
    /* 00618aa2: cmp dword ptr [ebp + 0x18], 0x88 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0x88u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618aa9: je 0x618ab4 */ if (fZ) goto L_00618ab4;
L_00618aab:; BB(0x00618aab);
    /* 00618aab: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
    /* 00618ab2: jmp 0x618abb */ goto L_00618abb;
L_00618ab4:; BB(0x00618ab4);
    /* 00618ab4: mov dword ptr [ebp - 0x5c], 1 */ W32((u32)(r_ebp+0xffffffa4u), 0x1u);
L_00618abb:; BB(0x00618abb);
    /* 00618abb: movzx edx, byte ptr [ebp - 0x5c] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffa4u));
    /* 00618abf: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618ac1: je 0x618acc */ if (fZ) goto L_00618acc;
L_00618ac3:; BB(0x00618ac3);
    /* 00618ac3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00618ac6: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00618ac9: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
L_00618acc:; BB(0x00618acc);
    /* 00618acc: cmp dword ptr [ebp + 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618ad0: je 0x618adb */ if (fZ) goto L_00618adb;
L_00618ad2:; BB(0x00618ad2);
    /* 00618ad2: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00618ad5: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00618ad8: mov dword ptr [ebp + 0x14], ecx */ W32((u32)(r_ebp+0x14u), r_ecx);
L_00618adb:; BB(0x00618adb);
    /* 00618adb: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00618ade: cmp edx, dword ptr [ebp - 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00618ae1: jae 0x618be6 */ if (!fC) goto L_00618be6;
L_00618ae7:; BB(0x00618ae7);
    /* 00618ae7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00618aea: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 00618aed: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00618af0: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 00618af3: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618af5: jne 0x618be6 */ if (!fZ) goto L_00618be6;
L_00618afb:; BB(0x00618afb);
    /* 00618afb: cmp dword ptr [ebp + 0x18], 0x80 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618b02: je 0x618b28 */ if (fZ) goto L_00618b28;
L_00618b04:; BB(0x00618b04);
    /* 00618b04: cmp dword ptr [ebp + 0x18], 0x82 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0x82u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618b0b: je 0x618b28 */ if (fZ) goto L_00618b28;
L_00618b0d:; BB(0x00618b0d);
    /* 00618b0d: cmp dword ptr [ebp + 0x18], 0x84 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0x84u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618b14: je 0x618b28 */ if (fZ) goto L_00618b28;
L_00618b16:; BB(0x00618b16);
    /* 00618b16: cmp dword ptr [ebp + 0x18], 0x88 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0x88u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618b1d: je 0x618b28 */ if (fZ) goto L_00618b28;
L_00618b1f:; BB(0x00618b1f);
    /* 00618b1f: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
    /* 00618b26: jmp 0x618b2f */ goto L_00618b2f;
L_00618b28:; BB(0x00618b28);
    /* 00618b28: mov dword ptr [ebp - 0x60], 1 */ W32((u32)(r_ebp+0xffffffa0u), 0x1u);
L_00618b2f:; BB(0x00618b2f);
    /* 00618b2f: movzx ecx, byte ptr [ebp - 0x60] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffa0u));
    /* 00618b33: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618b35: je 0x618b63 */ if (fZ) goto L_00618b63;
L_00618b37:; BB(0x00618b37);
    /* 00618b37: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00618b3a: movzx eax, byte ptr [edx + 1] */ r_eax = (u32)R8((u32)(r_edx+0x1u));
    /* 00618b3e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00618b41: movzx edx, byte ptr [ecx + 1] */ r_edx = (u32)R8((u32)(r_ecx+0x1u));
    /* 00618b45: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618b47: jne 0x618be6 */ if (!fZ) goto L_00618be6;
L_00618b4d:; BB(0x00618b4d);
    /* 00618b4d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00618b50: movzx ecx, byte ptr [eax + 2] */ r_ecx = (u32)R8((u32)(r_eax+0x2u));
    /* 00618b54: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00618b57: movzx eax, byte ptr [edx + 2] */ r_eax = (u32)R8((u32)(r_edx+0x2u));
    /* 00618b5b: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618b5d: jne 0x618be6 */ if (!fZ) goto L_00618be6;
L_00618b63:; BB(0x00618b63);
    /* 00618b63: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 00618b66: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00618b67: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 00618b6a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00618b6b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00618b6e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00618b6f: call 0x617c30 */ r_esp -= 4; W32(r_esp, 0x618b74u); f_00617c30();
    /* 00618b74: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00618b77: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618b79: je 0x618be6 */ if (fZ) goto L_00618be6;
L_00618b7b:; BB(0x00618b7b);
    /* 00618b7b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00618b7e: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00618b81: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 00618b84: cmp dword ptr [ebp + 0x18], 0x80 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618b8b: je 0x618bb1 */ if (fZ) goto L_00618bb1;
L_00618b8d:; BB(0x00618b8d);
    /* 00618b8d: cmp dword ptr [ebp + 0x18], 0x82 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0x82u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618b94: je 0x618bb1 */ if (fZ) goto L_00618bb1;
L_00618b96:; BB(0x00618b96);
    /* 00618b96: cmp dword ptr [ebp + 0x18], 0x84 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0x84u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618b9d: je 0x618bb1 */ if (fZ) goto L_00618bb1;
L_00618b9f:; BB(0x00618b9f);
    /* 00618b9f: cmp dword ptr [ebp + 0x18], 0x88 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0x88u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618ba6: je 0x618bb1 */ if (fZ) goto L_00618bb1;
L_00618ba8:; BB(0x00618ba8);
    /* 00618ba8: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
    /* 00618baf: jmp 0x618bb8 */ goto L_00618bb8;
L_00618bb1:; BB(0x00618bb1);
    /* 00618bb1: mov dword ptr [ebp - 0x64], 1 */ W32((u32)(r_ebp+0xffffff9cu), 0x1u);
L_00618bb8:; BB(0x00618bb8);
    /* 00618bb8: movzx edx, byte ptr [ebp - 0x64] */ r_edx = (u32)R8((u32)(r_ebp+0xffffff9cu));
    /* 00618bbc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618bbe: je 0x618bc9 */ if (fZ) goto L_00618bc9;
L_00618bc0:; BB(0x00618bc0);
    /* 00618bc0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00618bc3: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00618bc6: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
L_00618bc9:; BB(0x00618bc9);
    /* 00618bc9: cmp dword ptr [ebp + 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618bcd: je 0x618bd8 */ if (fZ) goto L_00618bd8;
L_00618bcf:; BB(0x00618bcf);
    /* 00618bcf: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00618bd2: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00618bd5: mov dword ptr [ebp + 0x14], ecx */ W32((u32)(r_ebp+0x14u), r_ecx);
L_00618bd8:; BB(0x00618bd8);
    /* 00618bd8: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00618bdb: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00618bde: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00618be1: jmp 0x618adb */ goto L_00618adb;
L_00618be6:; BB(0x00618be6);
    /* 00618be6: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00618be9: mov cx, word ptr [ebp - 8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 00618bed: mov word ptr [eax], cx */ W16((u32)(r_eax), (u16)r_ecx);
    /* 00618bf0: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00618bf3: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00618bf6: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00618bf9: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 00618c00: jmp 0x618c0b */ goto L_00618c0b;
L_00618c02:; BB(0x00618c02);
    /* 00618c02: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00618c05: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00618c08: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_00618c0b:; BB(0x00618c0b);
    /* 00618c0b: cmp dword ptr [ebp + 0x18], 0x80 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618c12: je 0x618c38 */ if (fZ) goto L_00618c38;
L_00618c14:; BB(0x00618c14);
    /* 00618c14: cmp dword ptr [ebp + 0x18], 0x82 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0x82u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618c1b: je 0x618c38 */ if (fZ) goto L_00618c38;
L_00618c1d:; BB(0x00618c1d);
    /* 00618c1d: cmp dword ptr [ebp + 0x18], 0x84 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0x84u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618c24: je 0x618c38 */ if (fZ) goto L_00618c38;
L_00618c26:; BB(0x00618c26);
    /* 00618c26: cmp dword ptr [ebp + 0x18], 0x88 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0x88u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618c2d: je 0x618c38 */ if (fZ) goto L_00618c38;
L_00618c2f:; BB(0x00618c2f);
    /* 00618c2f: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
    /* 00618c36: jmp 0x618c3f */ goto L_00618c3f;
L_00618c38:; BB(0x00618c38);
    /* 00618c38: mov dword ptr [ebp - 0x68], 1 */ W32((u32)(r_ebp+0xffffff98u), 0x1u);
L_00618c3f:; BB(0x00618c3f);
    /* 00618c3f: movzx ecx, byte ptr [ebp - 0x68] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffff98u));
    /* 00618c43: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 00618c45: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 00618c47: and ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00618c4a: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00618c4d: cmp dword ptr [ebp - 0x18], ecx */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00618c50: jge 0x618c70 */ if ((fS==fO)) goto L_00618c70;
L_00618c52:; BB(0x00618c52);
    /* 00618c52: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00618c55: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00618c58: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 00618c5a: mov byte ptr [edx], cl */ W8((u32)(r_edx), (u8)r_ecx);
    /* 00618c5c: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00618c5f: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00618c62: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00618c65: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00618c68: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00618c6b: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00618c6e: jmp 0x618c02 */ goto L_00618c02;
L_00618c70:; BB(0x00618c70);
    /* 00618c70: cmp dword ptr [ebp + 0x18], 0x80 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618c77: je 0x618c9d */ if (fZ) goto L_00618c9d;
L_00618c79:; BB(0x00618c79);
    /* 00618c79: cmp dword ptr [ebp + 0x18], 0x82 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0x82u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618c80: je 0x618c9d */ if (fZ) goto L_00618c9d;
L_00618c82:; BB(0x00618c82);
    /* 00618c82: cmp dword ptr [ebp + 0x18], 0x84 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0x84u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618c89: je 0x618c9d */ if (fZ) goto L_00618c9d;
L_00618c8b:; BB(0x00618c8b);
    /* 00618c8b: cmp dword ptr [ebp + 0x18], 0x88 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0x88u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618c92: je 0x618c9d */ if (fZ) goto L_00618c9d;
L_00618c94:; BB(0x00618c94);
    /* 00618c94: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
    /* 00618c9b: jmp 0x618ca4 */ goto L_00618ca4;
L_00618c9d:; BB(0x00618c9d);
    /* 00618c9d: mov dword ptr [ebp - 0x6c], 1 */ W32((u32)(r_ebp+0xffffff94u), 0x1u);
L_00618ca4:; BB(0x00618ca4);
    /* 00618ca4: movzx ecx, byte ptr [ebp - 0x6c] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffff94u));
    /* 00618ca8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618caa: je 0x618cb5 */ if (fZ) goto L_00618cb5;
L_00618cac:; BB(0x00618cac);
    /* 00618cac: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00618caf: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00618cb2: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
L_00618cb5:; BB(0x00618cb5);
    /* 00618cb5: jmp 0x618d74 */ goto L_00618d74;
L_00618cba:; BB(0x00618cba);
    /* 00618cba: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00618cbd: mov cl, byte ptr [ebp + 0x18] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x18u))) & 0xffu);
    /* 00618cc0: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 00618cc2: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00618cc5: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00618cc8: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00618ccb: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00618cce: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00618cd1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00618cd4: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00618cd7: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00618cda: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00618cdd: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00618ce0: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 00618ce2: mov byte ptr [edx], cl */ W8((u32)(r_edx), (u8)r_ecx);
    /* 00618ce4: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00618ce7: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00618cea: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00618ced: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00618cf0: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00618cf3: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 00618cf6: cmp dword ptr [ebp + 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618cfa: je 0x618d05 */ if (fZ) goto L_00618d05;
L_00618cfc:; BB(0x00618cfc);
    /* 00618cfc: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00618cff: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00618d02: mov dword ptr [ebp + 0x14], ecx */ W32((u32)(r_ebp+0x14u), r_ecx);
L_00618d05:; BB(0x00618d05);
    /* 00618d05: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00618d08: cmp edx, dword ptr [ebp - 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00618d0b: jae 0x618d59 */ if (!fC) goto L_00618d59;
L_00618d0d:; BB(0x00618d0d);
    /* 00618d0d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00618d0f: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00618d12: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00618d13: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00618d16: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00618d17: call 0x617c30 */ r_esp -= 4; W32(r_esp, 0x618d1cu); f_00617c30();
    /* 00618d1c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00618d1f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618d21: je 0x618d59 */ if (fZ) goto L_00618d59;
L_00618d23:; BB(0x00618d23);
    /* 00618d23: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00618d26: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00618d29: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 00618d2b: mov byte ptr [edx], cl */ W8((u32)(r_edx), (u8)r_ecx);
    /* 00618d2d: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00618d30: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00618d33: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00618d36: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00618d39: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00618d3c: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 00618d3f: cmp dword ptr [ebp + 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618d43: je 0x618d4e */ if (fZ) goto L_00618d4e;
L_00618d45:; BB(0x00618d45);
    /* 00618d45: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00618d48: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00618d4b: mov dword ptr [ebp + 0x14], ecx */ W32((u32)(r_ebp+0x14u), r_ecx);
L_00618d4e:; BB(0x00618d4e);
    /* 00618d4e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00618d51: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00618d54: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00618d57: jmp 0x618d05 */ goto L_00618d05;
L_00618d59:; BB(0x00618d59);
    /* 00618d59: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00618d5c: mov cl, byte ptr [ebp - 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 00618d5f: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 00618d61: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00618d64: mov ax, word ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 00618d68: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 00618d6b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00618d6e: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00618d71: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_00618d74:; BB(0x00618d74);
    /* 00618d74: jmp 0x618397 */ goto L_00618397;
L_00618d79:; BB(0x00618d79);
    /* 00618d79: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00618d7c: sub edx, 0x15ede10 */ {  u32 a = r_edx; u32 b = 0x15ede10u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00618d82: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00618d85: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 00618d87: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00618d8a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00618d8c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00618d8d: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x618d92u); f_00686d82();
    /* 00618d92: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00618d95: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00618d98: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00618d9b: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00618d9e: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00618da1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00618da3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00618da4: push 0x15ede10 */ { u32 v = 0x15ede10u; r_esp -= 4; W32(r_esp, v); }
    /* 00618da9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00618dac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00618dad: call 0x686fde */ r_esp -= 4; W32(r_esp, 0x618db2u); f_00686fde();
    /* 00618db2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00618db5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00618db8: mov esp, ebp */ r_esp = r_ebp;
    /* 00618dba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00618dbb: ret  */ FN_RET(0x00618330); r_esp += 4; return;
}

void f_00618e00(void) /* sub_618E00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00618e00);
    /* 00618e00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00618e01: mov ebp, esp */ r_ebp = r_esp;
    /* 00618e03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00618e04: mov eax, dword ptr [0x75f538] */ r_eax = R32((u32)(0x75f538u));
    /* 00618e09: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618e0c: jne 0x618e22 */ if (!fZ) goto L_00618e22;
L_00618e0e:; BB(0x00618e0e);
    /* 00618e0e: mov dword ptr [0x15ede08], 0x15ed608 */ W32((u32)(0x15ede08u), 0x15ed608u);
    /* 00618e18: jmp 0x618ec3 */ goto L_00618ec3;
L_00618e22:; BB(0x00618e22);
    /* 00618e22: mov ecx, dword ptr [0x75f53c] */ r_ecx = R32((u32)(0x75f53cu));
    /* 00618e28: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00618e2b: jne 0x618e41 */ if (!fZ) goto L_00618e41;
L_00618e2d:; BB(0x00618e2d);
    /* 00618e2d: mov dword ptr [0x15ede08], 0x15eda08 */ W32((u32)(0x15ede08u), 0x15eda08u);
    /* 00618e37: jmp 0x618ec3 */ goto L_00618ec3;
L_00618e41:; BB(0x00618e41);
    /* 00618e41: mov edx, dword ptr [0x75f540] */ r_edx = R32((u32)(0x75f540u));
    /* 00618e47: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00618e4a: mov dword ptr [0x75f540], edx */ W32((u32)(0x75f540u), r_edx);
    /* 00618e50: mov eax, dword ptr [0x75f540] */ r_eax = R32((u32)(0x75f540u));
    /* 00618e55: and eax, 0x80000001 */ {  u32 a = r_eax; u32 b = 0x80000001u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fS = ((r >> 31) & 1); }
    /* 00618e5a: jns 0x618e61 */ if (!fS) goto L_00618e61;
L_00618e5c:; BB(0x00618e5c);
    /* 00618e5c: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00618e5d: or eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00618e60: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00618e61:; BB(0x00618e61);
    /* 00618e61: mov dword ptr [0x75f540], eax */ W32((u32)(0x75f540u), r_eax);
    /* 00618e66: mov ecx, dword ptr [0x75f540] */ r_ecx = R32((u32)(0x75f540u));
    /* 00618e6c: shl ecx, 0xa */ { u32 c = (10u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00618e6f: add ecx, 0x15ed608 */ {  u32 a = r_ecx; u32 b = 0x15ed608u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00618e75: mov dword ptr [0x15ede08], ecx */ W32((u32)(0x15ede08u), r_ecx);
    /* 00618e7b: mov edx, dword ptr [0x75f540] */ r_edx = R32((u32)(0x75f540u));
    /* 00618e81: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00618e84: mov dword ptr [edx*4 + 0x75f538], eax */ W32((u32)(r_edx*4+0x75f538u), r_eax);
    /* 00618e8b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00618e92: jmp 0x618e9d */ goto L_00618e9d;
L_00618e94:; BB(0x00618e94);
    /* 00618e94: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00618e97: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00618e9a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00618e9d:; BB(0x00618e9d);
    /* 00618e9d: cmp dword ptr [ebp - 4], 0x100 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00618ea4: jge 0x618ec3 */ if ((fS==fO)) goto L_00618ec3;
L_00618ea6:; BB(0x00618ea6);
    /* 00618ea6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00618ea9: imul eax, dword ptr [ebp + 8] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0x8u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00618ead: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00618eae: mov ecx, 0xff */ r_ecx = 0xffu;
    /* 00618eb3: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00618eb3, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00618eb3, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00618eb5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00618eb8: mov ecx, dword ptr [0x15ede08] */ r_ecx = R32((u32)(0x15ede08u));
    /* 00618ebe: mov dword ptr [ecx + edx*4], eax */ W32((u32)(r_ecx+r_edx*4), r_eax);
    /* 00618ec1: jmp 0x618e94 */ goto L_00618e94;
L_00618ec3:; BB(0x00618ec3);
    /* 00618ec3: mov esp, ebp */ r_esp = r_ebp;
    /* 00618ec5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00618ec6: ret  */ FN_RET(0x00618e00); r_esp += 4; return;
}

void f_00618ed0(void) /* sub_618ED0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00618ed0);
    /* 00618ed0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00618ed1: mov ebp, esp */ r_ebp = r_esp;
    /* 00618ed3: sub esp, 0xd8 */ {  u32 a = r_esp; u32 b = 0xd8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00618ed9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00618eda: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00618edb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00618edc: mov dword ptr [ebp - 0xc], 4 */ W32((u32)(r_ebp+0xfffffff4u), 0x4u);
    /* 00618ee3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00618ee6: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 00618ee9: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00618eec: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00618eef: mov ax, word ptr [edx + 1] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x1u))) & 0xffffu);
    /* 00618ef3: mov word ptr [ebp - 0x28], ax */ W16((u32)(r_ebp+0xffffffd8u), (u16)r_eax);
    /* 00618ef7: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00618efa: add ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00618efd: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
L_00618f00:; BB(0x00618f00);
    /* 00618f00: movzx edx, word ptr [ebp - 0x28] */ r_edx = (u32)R16((u32)(r_ebp+0xffffffd8u));
    /* 00618f04: cmp dword ptr [ebp + 0x10], edx */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00618f07: jl 0x618fda */ if ((fS!=fO)) goto L_00618fda;
L_00618f0d:; BB(0x00618f0d);
    /* 00618f0d: movzx eax, word ptr [ebp - 0x28] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffd8u));
    /* 00618f11: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00618f13: jle 0x618fda */ if ((fZ||fS!=fO)) goto L_00618fda;
L_00618f19:; BB(0x00618f19);
    /* 00618f19: movzx ecx, word ptr [ebp - 0x28] */ r_ecx = (u32)R16((u32)(r_ebp+0xffffffd8u));
    /* 00618f1d: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00618f20: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00618f22: mov dword ptr [ebp + 0x10], edx */ W32((u32)(r_ebp+0x10u), r_edx);
    /* 00618f25: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00618f28: mov dword ptr [ebp - 0xd0], eax */ W32((u32)(r_ebp+0xffffff30u), r_eax);
    /* 00618f2e: mov ecx, dword ptr [ebp - 0xd0] */ r_ecx = R32((u32)(r_ebp+0xffffff30u));
    /* 00618f34: sub ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00618f37: mov dword ptr [ebp - 0xd0], ecx */ W32((u32)(r_ebp+0xffffff30u), r_ecx);
    /* 00618f3d: cmp dword ptr [ebp - 0xd0], 0x86 */ {  u32 a = R32((u32)(r_ebp+0xffffff30u)); u32 b = 0x86u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00618f47: ja 0x618fb8 */ if ((!fC&&!fZ)) goto L_00618fb8;
L_00618f49:; BB(0x00618f49);
    /* 00618f49: mov edx, dword ptr [ebp - 0xd0] */ r_edx = R32((u32)(r_ebp+0xffffff30u));
    /* 00618f4f: movzx eax, byte ptr [edx + 0x619c18] */ r_eax = (u32)R8((u32)(r_edx+0x619c18u));
    /* 00618f56: jmp dword ptr [eax*4 + 0x619bf8] */ { u32 t = R32((u32)(r_eax*4+0x619bf8u)); switch (t) { case 0x618f6eu: goto L_00618f6e; case 0x618f89u: goto L_00618f89; case 0x618fa3u: goto L_00618fa3; case 0x618faeu: goto L_00618fae; case 0x618f5fu: goto L_00618f5f; case 0x618f7au: goto L_00618f7a; case 0x618f98u: goto L_00618f98; case 0x618fb8u: goto L_00618fb8; default: UNSUP(0x00618f56, "jump table entry is not a known target"); } }
L_00618f5f:; BB(0x00618f5f);
    /* 00618f5f: movzx ecx, word ptr [ebp - 0x28] */ r_ecx = (u32)R16((u32)(r_ebp+0xffffffd8u));
    /* 00618f63: imul ecx, ecx, 3 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x3u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00618f66: add ecx, dword ptr [ebp + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00618f69: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 00618f6c: jmp 0x618fb8 */ goto L_00618fb8;
L_00618f6e:; BB(0x00618f6e);
    /* 00618f6e: movzx edx, word ptr [ebp - 0x28] */ r_edx = (u32)R16((u32)(r_ebp+0xffffffd8u));
    /* 00618f72: add edx, dword ptr [ebp + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00618f75: mov dword ptr [ebp + 0xc], edx */ W32((u32)(r_ebp+0xcu), r_edx);
    /* 00618f78: jmp 0x618fb8 */ goto L_00618fb8;
L_00618f7a:; BB(0x00618f7a);
    /* 00618f7a: movzx eax, word ptr [ebp - 0x28] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffd8u));
    /* 00618f7e: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00618f81: lea edx, [ecx + eax*4] */ r_edx = (u32)(r_ecx+r_eax*4);
    /* 00618f84: mov dword ptr [ebp + 0xc], edx */ W32((u32)(r_ebp+0xcu), r_edx);
    /* 00618f87: jmp 0x618fb8 */ goto L_00618fb8;
L_00618f89:; BB(0x00618f89);
    /* 00618f89: movzx eax, word ptr [ebp - 0x28] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffd8u));
    /* 00618f8d: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00618f90: lea edx, [ecx + eax*2] */ r_edx = (u32)(r_ecx+r_eax*2);
    /* 00618f93: mov dword ptr [ebp + 0xc], edx */ W32((u32)(r_ebp+0xcu), r_edx);
    /* 00618f96: jmp 0x618fb8 */ goto L_00618fb8;
L_00618f98:; BB(0x00618f98);
    /* 00618f98: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00618f9b: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00618f9e: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
    /* 00618fa1: jmp 0x618fb8 */ goto L_00618fb8;
L_00618fa3:; BB(0x00618fa3);
    /* 00618fa3: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00618fa6: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00618fa9: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 00618fac: jmp 0x618fb8 */ goto L_00618fb8;
L_00618fae:; BB(0x00618fae);
    /* 00618fae: movzx edx, word ptr [ebp - 0x28] */ r_edx = (u32)R16((u32)(r_ebp+0xffffffd8u));
    /* 00618fb2: add edx, dword ptr [ebp + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00618fb5: mov dword ptr [ebp + 0xc], edx */ W32((u32)(r_ebp+0xcu), r_edx);
L_00618fb8:; BB(0x00618fb8);
    /* 00618fb8: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00618fbb: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 00618fbe: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00618fc1: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00618fc4: mov ax, word ptr [edx + 1] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x1u))) & 0xffffu);
    /* 00618fc8: mov word ptr [ebp - 0x28], ax */ W16((u32)(r_ebp+0xffffffd8u), (u16)r_eax);
    /* 00618fcc: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00618fcf: add ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00618fd2: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 00618fd5: jmp 0x618f00 */ goto L_00618f00;
L_00618fda:; BB(0x00618fda);
    /* 00618fda: cmp dword ptr [ebp + 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00618fde: jle 0x619bf1 */ if ((fZ||fS!=fO)) goto L_00619bf1;
L_00618fe4:; BB(0x00618fe4);
    /* 00618fe4: movzx edx, word ptr [ebp - 0x28] */ r_edx = (u32)R16((u32)(r_ebp+0xffffffd8u));
    /* 00618fe8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00618fea: jle 0x619bf1 */ if ((fZ||fS!=fO)) goto L_00619bf1;
L_00618ff0:; BB(0x00618ff0);
    /* 00618ff0: movzx eax, word ptr [ebp - 0x28] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffd8u));
    /* 00618ff4: sub eax, dword ptr [ebp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00618ff7: mov word ptr [ebp - 0x28], ax */ W16((u32)(r_ebp+0xffffffd8u), (u16)r_eax);
    /* 00618ffb: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00618ffe: mov dword ptr [ebp - 0xd4], ecx */ W32((u32)(r_ebp+0xffffff2cu), r_ecx);
    /* 00619004: mov edx, dword ptr [ebp - 0xd4] */ r_edx = R32((u32)(r_ebp+0xffffff2cu));
    /* 0061900a: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0061900d: mov dword ptr [ebp - 0xd4], edx */ W32((u32)(r_ebp+0xffffff2cu), r_edx);
    /* 00619013: cmp dword ptr [ebp - 0xd4], 0x87 */ {  u32 a = R32((u32)(r_ebp+0xffffff2cu)); u32 b = 0x87u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0061901d: ja 0x619bbd */ if ((!fC&&!fZ)) goto L_00619bbd;
L_00619023:; BB(0x00619023);
    /* 00619023: mov eax, dword ptr [ebp - 0xd4] */ r_eax = R32((u32)(r_ebp+0xffffff2cu));
    /* 00619029: movzx ecx, byte ptr [eax + 0x619cd4] */ r_ecx = (u32)R8((u32)(r_eax+0x619cd4u));
    /* 00619030: jmp dword ptr [ecx*4 + 0x619ca0] */ { u32 t = R32((u32)(r_ecx*4+0x619ca0u)); switch (t) { case 0x619037u: goto L_00619037; case 0x619063u: goto L_00619063; case 0x619312u: goto L_00619312; case 0x619797u: goto L_00619797; case 0x619a14u: goto L_00619a14; case 0x619a93u: goto L_00619a93; case 0x619916u: goto L_00619916; case 0x619995u: goto L_00619995; case 0x619b12u: goto L_00619b12; case 0x61923bu: goto L_0061923b; case 0x619561u: goto L_00619561; case 0x61984bu: goto L_0061984b; case 0x619bbdu: goto L_00619bbd; default: UNSUP(0x00619030, "jump table entry is not a known target"); } }
L_00619037:; BB(0x00619037);
    /* 00619037: movzx edx, word ptr [ebp - 0x28] */ r_edx = (u32)R16((u32)(r_ebp+0xffffffd8u));
    /* 0061903b: cmp dword ptr [ebp + 0x14], edx */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061903e: jle 0x619057 */ if ((fZ||fS!=fO)) goto L_00619057;
L_00619040:; BB(0x00619040);
    /* 00619040: mov dword ptr [ebp + 0x10], 0 */ W32((u32)(r_ebp+0x10u), 0x0u);
    /* 00619047: movzx eax, word ptr [ebp - 0x28] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffd8u));
    /* 0061904b: imul eax, dword ptr [ebp - 0xc] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xfffffff4u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061904f: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00619052: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 00619055: jmp 0x61905e */ goto L_0061905e;
L_00619057:; BB(0x00619057);
    /* 00619057: mov dword ptr [ebp + 0x14], 0 */ W32((u32)(r_ebp+0x14u), 0x0u);
L_0061905e:; BB(0x0061905e);
    /* 0061905e: jmp 0x619bbd */ goto L_00619bbd;
L_00619063:; BB(0x00619063);
    /* 00619063: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00619066: add ecx, dword ptr [ebp + 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00619069: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 0061906c: movzx edx, word ptr [ebp - 0x28] */ r_edx = (u32)R16((u32)(r_ebp+0xffffffd8u));
    /* 00619070: cmp dword ptr [ebp + 0x14], edx */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00619073: jle 0x619085 */ if ((fZ||fS!=fO)) goto L_00619085;
L_00619075:; BB(0x00619075);
    /* 00619075: movzx eax, word ptr [ebp - 0x28] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffd8u));
    /* 00619079: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0061907c: mov dword ptr [ebp + 0x10], 0 */ W32((u32)(r_ebp+0x10u), 0x0u);
    /* 00619083: jmp 0x619092 */ goto L_00619092;
L_00619085:; BB(0x00619085);
    /* 00619085: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00619088: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0061908b: mov dword ptr [ebp + 0x14], 0 */ W32((u32)(r_ebp+0x14u), 0x0u);
L_00619092:; BB(0x00619092);
    /* 00619092: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00619095: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 00619098: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061909b: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0061909e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006190a1: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 006190a4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006190a7: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 006190aa: mov dword ptr [ebp - 0xd8], edx */ W32((u32)(r_ebp+0xffffff28u), r_edx);
    /* 006190b0: cmp dword ptr [ebp - 0xd8], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffff28u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006190b7: je 0x61915d */ if (fZ) goto L_0061915d;
L_006190bd:; BB(0x006190bd);
    /* 006190bd: cmp dword ptr [ebp - 0xd8], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff28u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006190c4: je 0x619122 */ if (fZ) goto L_00619122;
L_006190c6:; BB(0x006190c6);
    /* 006190c6: cmp dword ptr [ebp - 0xd8], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff28u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006190cd: je 0x6190d4 */ if (fZ) goto L_006190d4;
L_006190cf:; BB(0x006190cf);
    /* 006190cf: jmp 0x619180 */ goto L_00619180;
L_006190d4:; BB(0x006190d4);
    /* 006190d4: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006190d7: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 006190da: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006190dd: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 006190e0: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 006190e3: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 006190e5: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 006190e8: movzx eax, byte ptr [edx + 1] */ r_eax = (u32)R8((u32)(r_edx+0x1u));
    /* 006190ec: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006190ef: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 006190f2: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 006190f5: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006190f8: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 006190fb: movzx edx, byte ptr [ecx + 2] */ r_edx = (u32)R8((u32)(r_ecx+0x2u));
    /* 006190ff: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00619102: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 00619105: mov edx, dword ptr [ecx + edx*4] */ r_edx = R32((u32)(r_ecx+r_edx*4));
    /* 00619108: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 0061910b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061910e: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00619111: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00619114: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 00619117: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0061911a: add ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061911d: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 00619120: jmp 0x619180 */ goto L_00619180;
L_00619122:; BB(0x00619122);
    /* 00619122: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00619125: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 00619128: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0061912b: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 0061912e: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 00619131: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 00619133: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00619136: movzx edx, byte ptr [ecx + 1] */ r_edx = (u32)R8((u32)(r_ecx+0x1u));
    /* 0061913a: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0061913d: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 00619140: mov edx, dword ptr [ecx + edx*4] */ r_edx = R32((u32)(r_ecx+r_edx*4));
    /* 00619143: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00619146: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00619149: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061914c: lea edx, [ecx + eax*2] */ r_edx = (u32)(r_ecx+r_eax*2);
    /* 0061914f: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
    /* 00619152: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00619155: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00619158: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
    /* 0061915b: jmp 0x619180 */ goto L_00619180;
L_0061915d:; BB(0x0061915d);
    /* 0061915d: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00619160: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 00619163: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00619166: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 00619169: mov edx, dword ptr [ecx + edx*4] */ r_edx = R32((u32)(r_ecx+r_edx*4));
    /* 0061916c: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0061916e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00619171: add eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00619174: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 00619177: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0061917a: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061917d: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
L_00619180:; BB(0x00619180);
    /* 00619180: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00619183: and edx, 0xfffffffc */ {  u32 a = r_edx; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00619186: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00619189: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061918c: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0061918f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00619192: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00619194: je 0x6191e0 */ if (fZ) goto L_006191e0;
L_00619196:; BB(0x00619196);
    /* 00619196: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 00619199: mov ebx, dword ptr [ebp + 0x18] */ r_ebx = R32((u32)(r_ebp+0x18u));
    /* 0061919c: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0061919f: nop  */ ;
L_006191a0:; BB(0x006191a0);
    /* 006191a0: movzx ecx, byte ptr [esi] */ r_ecx = (u32)R8((u32)(r_esi));
    /* 006191a3: movzx eax, byte ptr [esi + 1] */ r_eax = (u32)R8((u32)(r_esi+0x1u));
    /* 006191a7: mov ecx, dword ptr [ebx + ecx*4] */ r_ecx = R32((u32)(r_ebx+r_ecx*4));
    /* 006191aa: mov eax, dword ptr [ebx + eax*4] */ r_eax = R32((u32)(r_ebx+r_eax*4));
    /* 006191ad: mov dword ptr [edi], ecx */ W32((u32)(r_edi), r_ecx);
    /* 006191af: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 006191b2: movzx ecx, byte ptr [esi + 2] */ r_ecx = (u32)R8((u32)(r_esi+0x2u));
    /* 006191b6: movzx eax, byte ptr [esi + 3] */ r_eax = (u32)R8((u32)(r_esi+0x3u));
    /* 006191ba: mov ecx, dword ptr [ebx + ecx*4] */ r_ecx = R32((u32)(r_ebx+r_ecx*4));
    /* 006191bd: mov eax, dword ptr [ebx + eax*4] */ r_eax = R32((u32)(r_ebx+r_eax*4));
    /* 006191c0: mov dword ptr [edi + 8], ecx */ W32((u32)(r_edi+0x8u), r_ecx);
    /* 006191c3: mov dword ptr [edi + 0xc], eax */ W32((u32)(r_edi+0xcu), r_eax);
    /* 006191c6: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006191c9: add edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006191cc: sub edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006191cf: jg 0x6191a0 */ if ((!fZ&&fS==fO)) goto L_006191a0;
L_006191d1:; BB(0x006191d1);
    /* 006191d1: jmp 0x6191e0 */ goto L_006191e0;
L_006191e0:; BB(0x006191e0);
    /* 006191e0: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 006191e3: add ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006191e6: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 006191e9: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006191ec: imul edx, dword ptr [ebp - 8] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ebp+0xfffffff8u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006191f0: add edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006191f3: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
    /* 006191f6: movzx eax, byte ptr [0x7960cd] */ r_eax = (u32)R8((u32)(0x7960cdu));
    /* 006191fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006191ff: je 0x619236 */ if (fZ) goto L_00619236;
L_00619201:; BB(0x00619201);
    /* 00619201: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00619204: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 00619207: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061920a: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 0061920d: jmp 0x619218 */ goto L_00619218;
L_0061920f:; BB(0x0061920f);
    /* 0061920f: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00619212: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00619215: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
L_00619218:; BB(0x00619218);
    /* 00619218: cmp dword ptr [ebp - 0x38], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061921c: jle 0x619236 */ if ((fZ||fS!=fO)) goto L_00619236;
L_0061921e:; BB(0x0061921e);
    /* 0061921e: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00619221: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 00619224: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00619227: mov byte ptr [edx + 3], 0xff */ W8((u32)(r_edx+0x3u), 0xffu);
    /* 0061922b: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0061922e: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00619231: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00619234: jmp 0x61920f */ goto L_0061920f;
L_00619236:; BB(0x00619236);
    /* 00619236: jmp 0x619bbd */ goto L_00619bbd;
L_0061923b:; BB(0x0061923b);
    /* 0061923b: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0061923e: imul ecx, ecx, 3 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x3u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00619241: add ecx, dword ptr [ebp + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00619244: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 00619247: movzx edx, word ptr [ebp - 0x28] */ r_edx = (u32)R16((u32)(r_ebp+0xffffffd8u));
    /* 0061924b: cmp dword ptr [ebp + 0x14], edx */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061924e: jle 0x619260 */ if ((fZ||fS!=fO)) goto L_00619260;
L_00619250:; BB(0x00619250);
    /* 00619250: movzx eax, word ptr [ebp - 0x28] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffd8u));
    /* 00619254: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00619257: mov dword ptr [ebp + 0x10], 0 */ W32((u32)(r_ebp+0x10u), 0x0u);
    /* 0061925e: jmp 0x61926d */ goto L_0061926d;
L_00619260:; BB(0x00619260);
    /* 00619260: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00619263: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00619266: mov dword ptr [ebp + 0x14], 0 */ W32((u32)(r_ebp+0x14u), 0x0u);
L_0061926d:; BB(0x0061926d);
    /* 0061926d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00619270: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 00619273: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00619276: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00619279: mov byte ptr [ebp - 0x29], 0xff */ W8((u32)(r_ebp+0xffffffd7u), 0xffu);
    /* 0061927d: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00619284: jmp 0x61928f */ goto L_0061928f;
L_00619286:; BB(0x00619286);
    /* 00619286: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00619289: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061928c: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0061928f:; BB(0x0061928f);
    /* 0061928f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00619292: cmp edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00619295: jge 0x6192cd */ if ((fS==fO)) goto L_006192cd;
L_00619297:; BB(0x00619297);
    /* 00619297: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0061929a: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 0061929c: mov byte ptr [ebp - 0x2c], cl */ W8((u32)(r_ebp+0xffffffd4u), (u8)r_ecx);
    /* 0061929f: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 006192a2: mov al, byte ptr [edx + 1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x1u))) & 0xffu);
    /* 006192a5: mov byte ptr [ebp - 0x2b], al */ W8((u32)(r_ebp+0xffffffd5u), (u8)r_eax);
    /* 006192a8: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 006192ab: mov dl, byte ptr [ecx + 2] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x2u))) & 0xffu);
    /* 006192ae: mov byte ptr [ebp - 0x2a], dl */ W8((u32)(r_ebp+0xffffffd6u), (u8)r_edx);
    /* 006192b1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006192b4: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 006192b7: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 006192b9: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006192bc: add edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006192bf: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
    /* 006192c2: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006192c5: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006192c8: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
    /* 006192cb: jmp 0x619286 */ goto L_00619286;
L_006192cd:; BB(0x006192cd);
    /* 006192cd: movzx ecx, byte ptr [0x7960cd] */ r_ecx = (u32)R8((u32)(0x7960cdu));
    /* 006192d4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006192d6: je 0x61930d */ if (fZ) goto L_0061930d;
L_006192d8:; BB(0x006192d8);
    /* 006192d8: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006192db: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 006192de: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006192e1: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 006192e4: jmp 0x6192ef */ goto L_006192ef;
L_006192e6:; BB(0x006192e6);
    /* 006192e6: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 006192e9: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006192ec: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
L_006192ef:; BB(0x006192ef);
    /* 006192ef: cmp dword ptr [ebp - 0x44], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006192f3: jle 0x61930d */ if ((fZ||fS!=fO)) goto L_0061930d;
L_006192f5:; BB(0x006192f5);
    /* 006192f5: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 006192f8: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 006192fb: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 006192fe: mov byte ptr [eax + 3], 0xff */ W8((u32)(r_eax+0x3u), 0xffu);
    /* 00619302: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00619305: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00619308: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 0061930b: jmp 0x6192e6 */ goto L_006192e6;
L_0061930d:; BB(0x0061930d);
    /* 0061930d: jmp 0x619bbd */ goto L_00619bbd;
L_00619312:; BB(0x00619312);
    /* 00619312: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00619315: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00619318: lea ecx, [eax + edx*2] */ r_ecx = (u32)(r_eax+r_edx*2);
    /* 0061931b: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 0061931e: movzx edx, word ptr [ebp - 0x28] */ r_edx = (u32)R16((u32)(r_ebp+0xffffffd8u));
    /* 00619322: cmp dword ptr [ebp + 0x14], edx */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00619325: jle 0x619337 */ if ((fZ||fS!=fO)) goto L_00619337;
L_00619327:; BB(0x00619327);
    /* 00619327: movzx eax, word ptr [ebp - 0x28] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffd8u));
    /* 0061932b: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0061932e: mov dword ptr [ebp + 0x10], 0 */ W32((u32)(r_ebp+0x10u), 0x0u);
    /* 00619335: jmp 0x619344 */ goto L_00619344;
L_00619337:; BB(0x00619337);
    /* 00619337: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0061933a: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0061933d: mov dword ptr [ebp + 0x14], 0 */ W32((u32)(r_ebp+0x14u), 0x0u);
L_00619344:; BB(0x00619344);
    /* 00619344: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00619347: shl edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00619349: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0061934c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061934f: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00619352: movzx ecx, byte ptr [0x7960cd] */ r_ecx = (u32)R8((u32)(0x7960cdu));
    /* 00619359: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061935b: je 0x61946d */ if (fZ) goto L_0061946d;
L_00619361:; BB(0x00619361);
    /* 00619361: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00619368: jmp 0x619373 */ goto L_00619373;
L_0061936a:; BB(0x0061936a);
    /* 0061936a: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061936d: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00619370: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_00619373:; BB(0x00619373);
    /* 00619373: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00619376: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00619379: jge 0x619468 */ if ((fS==fO)) goto L_00619468;
L_0061937f:; BB(0x0061937f);
    /* 0061937f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00619382: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00619383: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00619385: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00619387: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0061938a: lea edx, [ecx + eax*4] */ r_edx = (u32)(r_ecx+r_eax*4);
    /* 0061938d: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00619390: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00619393: add eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00619396: movzx ecx, byte ptr [eax + 1] */ r_ecx = (u32)R8((u32)(r_eax+0x1u));
    /* 0061939a: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 0061939d: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 006193a0: add edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006193a3: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 006193a6: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 006193a9: mov edx, dword ptr [ecx + eax*4] */ r_edx = R32((u32)(r_ecx+r_eax*4));
    /* 006193ac: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 006193af: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 006193b2: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 006193b5: mov esi, dword ptr [esi] */ r_esi = R32((u32)(r_esi));
    /* 006193b7: mov ebx, edi */ r_ebx = r_edi;
    /* 006193b9: mov edx, edi */ r_edx = r_edi;
    /* 006193bb: mov eax, esi */ r_eax = r_esi;
    /* 006193bd: mov ecx, esi */ r_ecx = r_esi;
    /* 006193bf: and ebx, 0xff00 */ {  u32 a = r_ebx; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 006193c5: and edx, 0xff0000 */ {  u32 a = r_edx; u32 b = 0xff0000u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 006193cb: sar ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 006193ce: sar edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006193d1: and eax, 0xff00 */ {  u32 a = r_eax; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006193d6: and ecx, 0xff0000 */ {  u32 a = r_ecx; u32 b = 0xff0000u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 006193dc: sar eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 006193df: sar ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 006193e2: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006193e4: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006193e6: imul eax, dword ptr [ebp - 0x4c] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xffffffb4u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006193ea: imul ecx, dword ptr [ebp - 0x4c] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xffffffb4u)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006193ee: sar eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 006193f1: sar ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 006193f4: mov ebx, esi */ r_ebx = r_esi;
    /* 006193f6: mov edx, esi */ r_edx = r_esi;
    /* 006193f8: and ebx, 0xff00 */ {  u32 a = r_ebx; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 006193fe: sar edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00619401: sar ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 00619404: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00619406: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00619408: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0061940e: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00619414: mov eax, esi */ r_eax = r_esi;
    /* 00619416: shl ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 00619419: sub esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0061941b: shl edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0061941e: imul esi, dword ptr [ebp - 0x4c] */ { i64 t = (i64)(i32)r_esi * (i64)(i32)R32((u32)(r_ebp+0xffffffb4u)); r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00619422: or ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 00619424: sar esi, 8 */ { u32 c = (8u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 00619427: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 0061942a: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0061942c: or ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0061942e: mov dword ptr [edi], ebx */ W32((u32)(r_edi), r_ebx);
    /* 00619430: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00619433: add eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00619436: mov cl, byte ptr [eax + 1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x1u))) & 0xffu);
    /* 00619439: mov byte ptr [ebp - 0x4d], cl */ W8((u32)(r_ebp+0xffffffb3u), (u8)r_ecx);
    /* 0061943c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061943f: movzx eax, byte ptr [edx + 3] */ r_eax = (u32)R8((u32)(r_edx+0x3u));
    /* 00619443: mov ecx, 0xff */ r_ecx = 0xffu;
    /* 00619448: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0061944a: movzx edx, byte ptr [ebp - 0x4d] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffb3u));
    /* 0061944e: imul ecx, edx */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_edx; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00619451: sar ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00619454: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00619457: movzx edx, byte ptr [eax + 3] */ r_edx = (u32)R8((u32)(r_eax+0x3u));
    /* 0061945b: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061945d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00619460: mov byte ptr [eax + 3], dl */ W8((u32)(r_eax+0x3u), (u8)r_edx);
    /* 00619463: jmp 0x61936a */ goto L_0061936a;
L_00619468:; BB(0x00619468);
    /* 00619468: jmp 0x619541 */ goto L_00619541;
L_0061946d:; BB(0x0061946d);
    /* 0061946d: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00619474: jmp 0x61947f */ goto L_0061947f;
L_00619476:; BB(0x00619476);
    /* 00619476: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00619479: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061947c: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0061947f:; BB(0x0061947f);
    /* 0061947f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00619482: cmp edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00619485: jge 0x619541 */ if ((fS==fO)) goto L_00619541;
L_0061948b:; BB(0x0061948b);
    /* 0061948b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0061948e: add eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00619491: movzx ecx, byte ptr [eax + 1] */ r_ecx = (u32)R8((u32)(r_eax+0x1u));
    /* 00619495: mov dword ptr [ebp - 0x5c], ecx */ W32((u32)(r_ebp+0xffffffa4u), r_ecx);
    /* 00619498: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0061949b: add edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061949e: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 006194a1: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 006194a4: mov edx, dword ptr [ecx + eax*4] */ r_edx = R32((u32)(r_ecx+r_eax*4));
    /* 006194a7: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 006194aa: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 006194ad: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 006194ae: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006194b0: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 006194b2: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006194b5: lea edx, [ecx + eax*4] */ r_edx = (u32)(r_ecx+r_eax*4);
    /* 006194b8: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 006194bb: mov esi, dword ptr [ebp - 0x54] */ r_esi = R32((u32)(r_ebp+0xffffffacu));
    /* 006194be: mov edi, dword ptr [ebp - 0x58] */ r_edi = R32((u32)(r_ebp+0xffffffa8u));
    /* 006194c1: mov esi, dword ptr [esi] */ r_esi = R32((u32)(r_esi));
    /* 006194c3: mov ebx, edi */ r_ebx = r_edi;
    /* 006194c5: mov edx, edi */ r_edx = r_edi;
    /* 006194c7: mov eax, esi */ r_eax = r_esi;
    /* 006194c9: mov ecx, esi */ r_ecx = r_esi;
    /* 006194cb: and ebx, 0xff00 */ {  u32 a = r_ebx; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 006194d1: and edx, 0xff0000 */ {  u32 a = r_edx; u32 b = 0xff0000u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 006194d7: sar ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 006194da: sar edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006194dd: and eax, 0xff00 */ {  u32 a = r_eax; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006194e2: and ecx, 0xff0000 */ {  u32 a = r_ecx; u32 b = 0xff0000u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 006194e8: sar eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 006194eb: sar ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 006194ee: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006194f0: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006194f2: imul eax, dword ptr [ebp - 0x5c] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xffffffa4u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006194f6: imul ecx, dword ptr [ebp - 0x5c] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xffffffa4u)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006194fa: sar eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 006194fd: sar ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00619500: mov ebx, esi */ r_ebx = r_esi;
    /* 00619502: mov edx, esi */ r_edx = r_esi;
    /* 00619504: and ebx, 0xff00 */ {  u32 a = r_ebx; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0061950a: sar edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0061950d: sar ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 00619510: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00619512: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00619514: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0061951a: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00619520: mov eax, esi */ r_eax = r_esi;
    /* 00619522: shl ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 00619525: sub esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00619527: shl edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0061952a: imul esi, dword ptr [ebp - 0x5c] */ { i64 t = (i64)(i32)r_esi * (i64)(i32)R32((u32)(r_ebp+0xffffffa4u)); r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061952e: or ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 00619530: sar esi, 8 */ { u32 c = (8u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 00619533: mov edi, dword ptr [ebp - 0x54] */ r_edi = R32((u32)(r_ebp+0xffffffacu));
    /* 00619536: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00619538: or ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0061953a: mov dword ptr [edi], ebx */ W32((u32)(r_edi), r_ebx);
    /* 0061953c: jmp 0x619476 */ goto L_00619476;
L_00619541:; BB(0x00619541);
    /* 00619541: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00619544: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00619547: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
    /* 0061954a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061954d: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0061954e: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00619550: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00619552: imul eax, dword ptr [ebp - 0xc] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xfffffff4u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00619556: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00619559: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 0061955c: jmp 0x619bbd */ goto L_00619bbd;
L_00619561:; BB(0x00619561);
    /* 00619561: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00619564: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00619567: lea eax, [edx + ecx*4] */ r_eax = (u32)(r_edx+r_ecx*4);
    /* 0061956a: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
    /* 0061956d: movzx ecx, word ptr [ebp - 0x28] */ r_ecx = (u32)R16((u32)(r_ebp+0xffffffd8u));
    /* 00619571: cmp dword ptr [ebp + 0x14], ecx */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00619574: jle 0x619586 */ if ((fZ||fS!=fO)) goto L_00619586;
L_00619576:; BB(0x00619576);
    /* 00619576: movzx edx, word ptr [ebp - 0x28] */ r_edx = (u32)R16((u32)(r_ebp+0xffffffd8u));
    /* 0061957a: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0061957d: mov dword ptr [ebp + 0x10], 0 */ W32((u32)(r_ebp+0x10u), 0x0u);
    /* 00619584: jmp 0x619593 */ goto L_00619593;
L_00619586:; BB(0x00619586);
    /* 00619586: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00619589: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0061958c: mov dword ptr [ebp + 0x14], 0 */ W32((u32)(r_ebp+0x14u), 0x0u);
L_00619593:; BB(0x00619593);
    /* 00619593: mov byte ptr [ebp - 0x29], 0xff */ W8((u32)(r_ebp+0xffffffd7u), 0xffu);
    /* 00619597: movzx ecx, byte ptr [0x7960cd] */ r_ecx = (u32)R8((u32)(0x7960cdu));
    /* 0061959e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006195a0: je 0x6196b2 */ if (fZ) goto L_006196b2;
L_006195a6:; BB(0x006195a6);
    /* 006195a6: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 006195ad: jmp 0x6195b8 */ goto L_006195b8;
L_006195af:; BB(0x006195af);
    /* 006195af: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006195b2: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006195b5: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_006195b8:; BB(0x006195b8);
    /* 006195b8: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 006195bb: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006195be: jge 0x6196ad */ if ((fS==fO)) goto L_006196ad;
L_006195c4:; BB(0x006195c4);
    /* 006195c4: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 006195c7: mov dl, byte ptr [ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 006195c9: mov byte ptr [ebp - 0x2c], dl */ W8((u32)(r_ebp+0xffffffd4u), (u8)r_edx);
    /* 006195cc: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006195cf: mov cl, byte ptr [eax + 1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x1u))) & 0xffu);
    /* 006195d2: mov byte ptr [ebp - 0x2b], cl */ W8((u32)(r_ebp+0xffffffd5u), (u8)r_ecx);
    /* 006195d5: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 006195d8: mov al, byte ptr [edx + 2] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x2u))) & 0xffu);
    /* 006195db: mov byte ptr [ebp - 0x2a], al */ W8((u32)(r_ebp+0xffffffd6u), (u8)r_eax);
    /* 006195de: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 006195e1: mov dl, byte ptr [ecx + 3] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x3u))) & 0xffu);
    /* 006195e4: mov byte ptr [ebp - 1], dl */ W8((u32)(r_ebp+0xffffffffu), (u8)r_edx);
    /* 006195e7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006195ea: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006195ed: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
    /* 006195f0: movzx ecx, byte ptr [ebp - 1] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 006195f4: mov dword ptr [ebp - 0x60], ecx */ W32((u32)(r_ebp+0xffffffa0u), r_ecx);
    /* 006195f7: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 006195fa: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006195fd: mov esi, dword ptr [esi] */ r_esi = R32((u32)(r_esi));
    /* 006195ff: mov ebx, edi */ r_ebx = r_edi;
    /* 00619601: mov edx, edi */ r_edx = r_edi;
    /* 00619603: mov eax, esi */ r_eax = r_esi;
    /* 00619605: mov ecx, esi */ r_ecx = r_esi;
    /* 00619607: and ebx, 0xff00 */ {  u32 a = r_ebx; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0061960d: and edx, 0xff0000 */ {  u32 a = r_edx; u32 b = 0xff0000u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00619613: sar ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 00619616: sar edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00619619: and eax, 0xff00 */ {  u32 a = r_eax; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0061961e: and ecx, 0xff0000 */ {  u32 a = r_ecx; u32 b = 0xff0000u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00619624: sar eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00619627: sar ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0061962a: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0061962c: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0061962e: imul eax, dword ptr [ebp - 0x60] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xffffffa0u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00619632: imul ecx, dword ptr [ebp - 0x60] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xffffffa0u)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00619636: sar eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00619639: sar ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0061963c: mov ebx, esi */ r_ebx = r_esi;
    /* 0061963e: mov edx, esi */ r_edx = r_esi;
    /* 00619640: and ebx, 0xff00 */ {  u32 a = r_ebx; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00619646: sar edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00619649: sar ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 0061964c: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0061964e: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00619650: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00619656: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0061965c: mov eax, esi */ r_eax = r_esi;
    /* 0061965e: shl ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 00619661: sub esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00619663: shl edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00619666: imul esi, dword ptr [ebp - 0x60] */ { i64 t = (i64)(i32)r_esi * (i64)(i32)R32((u32)(r_ebp+0xffffffa0u)); r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061966a: or ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0061966c: sar esi, 8 */ { u32 c = (8u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 0061966f: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 00619672: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00619674: or ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 00619676: mov dword ptr [edi], ebx */ W32((u32)(r_edi), r_ebx);
    /* 00619678: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061967b: movzx eax, byte ptr [edx + 3] */ r_eax = (u32)R8((u32)(r_edx+0x3u));
    /* 0061967f: mov ecx, 0xff */ r_ecx = 0xffu;
    /* 00619684: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00619686: movzx edx, byte ptr [ebp - 1] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 0061968a: imul ecx, edx */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_edx; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061968d: sar ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00619690: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00619693: movzx edx, byte ptr [eax + 3] */ r_edx = (u32)R8((u32)(r_eax+0x3u));
    /* 00619697: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00619699: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061969c: mov byte ptr [eax + 3], dl */ W8((u32)(r_eax+0x3u), (u8)r_edx);
    /* 0061969f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006196a2: add ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006196a5: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 006196a8: jmp 0x6195af */ goto L_006195af;
L_006196ad:; BB(0x006196ad);
    /* 006196ad: jmp 0x619792 */ goto L_00619792;
L_006196b2:; BB(0x006196b2);
    /* 006196b2: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 006196b9: jmp 0x6196c4 */ goto L_006196c4;
L_006196bb:; BB(0x006196bb);
    /* 006196bb: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006196be: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006196c1: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_006196c4:; BB(0x006196c4);
    /* 006196c4: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 006196c7: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006196ca: jge 0x619792 */ if ((fS==fO)) goto L_00619792;
L_006196d0:; BB(0x006196d0);
    /* 006196d0: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 006196d3: mov dl, byte ptr [ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 006196d5: mov byte ptr [ebp - 0x2c], dl */ W8((u32)(r_ebp+0xffffffd4u), (u8)r_edx);
    /* 006196d8: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006196db: mov cl, byte ptr [eax + 1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x1u))) & 0xffu);
    /* 006196de: mov byte ptr [ebp - 0x2b], cl */ W8((u32)(r_ebp+0xffffffd5u), (u8)r_ecx);
    /* 006196e1: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 006196e4: mov al, byte ptr [edx + 2] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x2u))) & 0xffu);
    /* 006196e7: mov byte ptr [ebp - 0x2a], al */ W8((u32)(r_ebp+0xffffffd6u), (u8)r_eax);
    /* 006196ea: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 006196ed: mov dl, byte ptr [ecx + 3] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x3u))) & 0xffu);
    /* 006196f0: mov byte ptr [ebp - 1], dl */ W8((u32)(r_ebp+0xffffffffu), (u8)r_edx);
    /* 006196f3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006196f6: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006196f9: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
    /* 006196fc: movzx ecx, byte ptr [ebp - 1] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 00619700: mov dword ptr [ebp - 0x64], ecx */ W32((u32)(r_ebp+0xffffff9cu), r_ecx);
    /* 00619703: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 00619706: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 00619709: mov esi, dword ptr [esi] */ r_esi = R32((u32)(r_esi));
    /* 0061970b: mov ebx, edi */ r_ebx = r_edi;
    /* 0061970d: mov edx, edi */ r_edx = r_edi;
    /* 0061970f: mov eax, esi */ r_eax = r_esi;
    /* 00619711: mov ecx, esi */ r_ecx = r_esi;
    /* 00619713: and ebx, 0xff00 */ {  u32 a = r_ebx; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00619719: and edx, 0xff0000 */ {  u32 a = r_edx; u32 b = 0xff0000u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0061971f: sar ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 00619722: sar edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00619725: and eax, 0xff00 */ {  u32 a = r_eax; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0061972a: and ecx, 0xff0000 */ {  u32 a = r_ecx; u32 b = 0xff0000u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00619730: sar eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00619733: sar ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00619736: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00619738: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0061973a: imul eax, dword ptr [ebp - 0x64] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xffffff9cu)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061973e: imul ecx, dword ptr [ebp - 0x64] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xffffff9cu)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00619742: sar eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00619745: sar ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00619748: mov ebx, esi */ r_ebx = r_esi;
    /* 0061974a: mov edx, esi */ r_edx = r_esi;
    /* 0061974c: and ebx, 0xff00 */ {  u32 a = r_ebx; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00619752: sar edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00619755: sar ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 00619758: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0061975a: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0061975c: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00619762: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00619768: mov eax, esi */ r_eax = r_esi;
    /* 0061976a: shl ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 0061976d: sub esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0061976f: shl edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00619772: imul esi, dword ptr [ebp - 0x64] */ { i64 t = (i64)(i32)r_esi * (i64)(i32)R32((u32)(r_ebp+0xffffff9cu)); r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00619776: or ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 00619778: sar esi, 8 */ { u32 c = (8u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 0061977b: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 0061977e: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00619780: or ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 00619782: mov dword ptr [edi], ebx */ W32((u32)(r_edi), r_ebx);
    /* 00619784: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00619787: add edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061978a: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
    /* 0061978d: jmp 0x6196bb */ goto L_006196bb;
L_00619792:; BB(0x00619792);
    /* 00619792: jmp 0x619bbd */ goto L_00619bbd;
L_00619797:; BB(0x00619797);
    /* 00619797: movzx eax, word ptr [ebp - 0x28] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffd8u));
    /* 0061979b: cmp dword ptr [ebp + 0x14], eax */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061979e: jle 0x6197b0 */ if ((fZ||fS!=fO)) goto L_006197b0;
L_006197a0:; BB(0x006197a0);
    /* 006197a0: movzx ecx, word ptr [ebp - 0x28] */ r_ecx = (u32)R16((u32)(r_ebp+0xffffffd8u));
    /* 006197a4: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 006197a7: mov dword ptr [ebp + 0x10], 0 */ W32((u32)(r_ebp+0x10u), 0x0u);
    /* 006197ae: jmp 0x6197bd */ goto L_006197bd;
L_006197b0:; BB(0x006197b0);
    /* 006197b0: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 006197b3: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 006197b6: mov dword ptr [ebp + 0x14], 0 */ W32((u32)(r_ebp+0x14u), 0x0u);
L_006197bd:; BB(0x006197bd);
    /* 006197bd: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 006197c0: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 006197c3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006197c6: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 006197c9: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006197cc: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 006197cf: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006197d2: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 006197d5: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 006197d8: mov eax, dword ptr [edx + ecx*4] */ r_eax = R32((u32)(r_edx+r_ecx*4));
    /* 006197db: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 006197de: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006197e1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006197e3: je 0x6197f0 */ if (fZ) goto L_006197f0;
L_006197e5:; BB(0x006197e5);
    /* 006197e5: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 006197e8: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006197eb: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 006197ed: lea ecx, [ecx] */ r_ecx = (u32)(r_ecx);
L_006197f0:; BB(0x006197f0);
    /* 006197f0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006197f3: imul ecx, dword ptr [ebp - 8] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xfffffff8u)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006197f7: add ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006197fa: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 006197fd: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00619800: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00619803: mov dword ptr [ebp + 0xc], edx */ W32((u32)(r_ebp+0xcu), r_edx);
    /* 00619806: movzx eax, byte ptr [0x7960cd] */ r_eax = (u32)R8((u32)(0x7960cdu));
    /* 0061980d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061980f: je 0x619846 */ if (fZ) goto L_00619846;
L_00619811:; BB(0x00619811);
    /* 00619811: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00619814: mov dword ptr [ebp - 0x70], ecx */ W32((u32)(r_ebp+0xffffff90u), r_ecx);
    /* 00619817: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061981a: mov dword ptr [ebp - 0x6c], edx */ W32((u32)(r_ebp+0xffffff94u), r_edx);
    /* 0061981d: jmp 0x619828 */ goto L_00619828;
L_0061981f:; BB(0x0061981f);
    /* 0061981f: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 00619822: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00619825: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
L_00619828:; BB(0x00619828);
    /* 00619828: cmp dword ptr [ebp - 0x70], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061982c: jle 0x619846 */ if ((fZ||fS!=fO)) goto L_00619846;
L_0061982e:; BB(0x0061982e);
    /* 0061982e: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 00619831: mov dword ptr [ebp - 0x68], ecx */ W32((u32)(r_ebp+0xffffff98u), r_ecx);
    /* 00619834: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 00619837: mov byte ptr [edx + 3], 0xff */ W8((u32)(r_edx+0x3u), 0xffu);
    /* 0061983b: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 0061983e: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00619841: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 00619844: jmp 0x61981f */ goto L_0061981f;
L_00619846:; BB(0x00619846);
    /* 00619846: jmp 0x619bbd */ goto L_00619bbd;
L_0061984b:; BB(0x0061984b);
    /* 0061984b: movzx ecx, word ptr [ebp - 0x28] */ r_ecx = (u32)R16((u32)(r_ebp+0xffffffd8u));
    /* 0061984f: cmp dword ptr [ebp + 0x14], ecx */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00619852: jle 0x619864 */ if ((fZ||fS!=fO)) goto L_00619864;
L_00619854:; BB(0x00619854);
    /* 00619854: movzx edx, word ptr [ebp - 0x28] */ r_edx = (u32)R16((u32)(r_ebp+0xffffffd8u));
    /* 00619858: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0061985b: mov dword ptr [ebp + 0x10], 0 */ W32((u32)(r_ebp+0x10u), 0x0u);
    /* 00619862: jmp 0x619871 */ goto L_00619871;
L_00619864:; BB(0x00619864);
    /* 00619864: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00619867: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0061986a: mov dword ptr [ebp + 0x14], 0 */ W32((u32)(r_ebp+0x14u), 0x0u);
L_00619871:; BB(0x00619871);
    /* 00619871: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00619874: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00619877: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061987a: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0061987d: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00619880: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 00619882: mov byte ptr [ebp - 0x2c], cl */ W8((u32)(r_ebp+0xffffffd4u), (u8)r_ecx);
    /* 00619885: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00619888: mov al, byte ptr [edx + 1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x1u))) & 0xffu);
    /* 0061988b: mov byte ptr [ebp - 0x2b], al */ W8((u32)(r_ebp+0xffffffd5u), (u8)r_eax);
    /* 0061988e: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00619891: mov dl, byte ptr [ecx + 2] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x2u))) & 0xffu);
    /* 00619894: mov byte ptr [ebp - 0x2a], dl */ W8((u32)(r_ebp+0xffffffd6u), (u8)r_edx);
    /* 00619897: mov byte ptr [ebp - 0x29], 0xff */ W8((u32)(r_ebp+0xffffffd7u), 0xffu);
    /* 0061989b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0061989e: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006198a1: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
    /* 006198a4: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 006198ab: jmp 0x6198b6 */ goto L_006198b6;
L_006198ad:; BB(0x006198ad);
    /* 006198ad: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006198b0: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006198b3: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_006198b6:; BB(0x006198b6);
    /* 006198b6: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006198b9: cmp edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006198bc: jge 0x6198d1 */ if ((fS==fO)) goto L_006198d1;
L_006198be:; BB(0x006198be);
    /* 006198be: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006198c1: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 006198c4: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 006198c6: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006198c9: add edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006198cc: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
    /* 006198cf: jmp 0x6198ad */ goto L_006198ad;
L_006198d1:; BB(0x006198d1);
    /* 006198d1: movzx eax, byte ptr [0x7960cd] */ r_eax = (u32)R8((u32)(0x7960cdu));
    /* 006198d8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006198da: je 0x619911 */ if (fZ) goto L_00619911;
L_006198dc:; BB(0x006198dc);
    /* 006198dc: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006198df: mov dword ptr [ebp - 0x7c], ecx */ W32((u32)(r_ebp+0xffffff84u), r_ecx);
    /* 006198e2: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006198e5: mov dword ptr [ebp - 0x78], edx */ W32((u32)(r_ebp+0xffffff88u), r_edx);
    /* 006198e8: jmp 0x6198f3 */ goto L_006198f3;
L_006198ea:; BB(0x006198ea);
    /* 006198ea: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 006198ed: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006198f0: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
L_006198f3:; BB(0x006198f3);
    /* 006198f3: cmp dword ptr [ebp - 0x7c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff84u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006198f7: jle 0x619911 */ if ((fZ||fS!=fO)) goto L_00619911;
L_006198f9:; BB(0x006198f9);
    /* 006198f9: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 006198fc: mov dword ptr [ebp - 0x74], ecx */ W32((u32)(r_ebp+0xffffff8cu), r_ecx);
    /* 006198ff: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 00619902: mov byte ptr [edx + 3], 0xff */ W8((u32)(r_edx+0x3u), 0xffu);
    /* 00619906: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 00619909: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061990c: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 0061990f: jmp 0x6198ea */ goto L_006198ea;
L_00619911:; BB(0x00619911);
    /* 00619911: jmp 0x619bbd */ goto L_00619bbd;
L_00619916:; BB(0x00619916);
    /* 00619916: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00619919: add ecx, dword ptr [ebp + 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061991c: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 0061991f: movzx edx, word ptr [ebp - 0x28] */ r_edx = (u32)R16((u32)(r_ebp+0xffffffd8u));
    /* 00619923: cmp dword ptr [ebp + 0x14], edx */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00619926: jle 0x619938 */ if ((fZ||fS!=fO)) goto L_00619938;
L_00619928:; BB(0x00619928);
    /* 00619928: movzx eax, word ptr [ebp - 0x28] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffd8u));
    /* 0061992c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0061992f: mov dword ptr [ebp + 0x10], 0 */ W32((u32)(r_ebp+0x10u), 0x0u);
    /* 00619936: jmp 0x619945 */ goto L_00619945;
L_00619938:; BB(0x00619938);
    /* 00619938: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0061993b: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0061993e: mov dword ptr [ebp + 0x14], 0 */ W32((u32)(r_ebp+0x14u), 0x0u);
L_00619945:; BB(0x00619945);
    /* 00619945: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0061994c: jmp 0x619957 */ goto L_00619957;
L_0061994e:; BB(0x0061994e);
    /* 0061994e: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00619951: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00619954: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_00619957:; BB(0x00619957);
    /* 00619957: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061995a: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061995d: jge 0x619990 */ if ((fS==fO)) goto L_00619990;
L_0061995f:; BB(0x0061995f);
    /* 0061995f: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 00619962: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00619963: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00619966: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 00619969: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 0061996c: mov edx, dword ptr [ecx + eax*4] */ r_edx = R32((u32)(r_ecx+r_eax*4));
    /* 0061996f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00619970: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00619973: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00619974: call 0x61d520 */ r_esp -= 4; W32(r_esp, 0x619979u); f_0061d520();
    /* 00619979: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061997c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061997f: add ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00619982: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 00619985: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00619988: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061998b: mov dword ptr [ebp + 0xc], edx */ W32((u32)(r_ebp+0xcu), r_edx);
    /* 0061998e: jmp 0x61994e */ goto L_0061994e;
L_00619990:; BB(0x00619990);
    /* 00619990: jmp 0x619bbd */ goto L_00619bbd;
L_00619995:; BB(0x00619995);
    /* 00619995: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00619998: add eax, dword ptr [ebp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061999b: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
    /* 0061999e: movzx ecx, word ptr [ebp - 0x28] */ r_ecx = (u32)R16((u32)(r_ebp+0xffffffd8u));
    /* 006199a2: cmp dword ptr [ebp + 0x14], ecx */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006199a5: jle 0x6199b7 */ if ((fZ||fS!=fO)) goto L_006199b7;
L_006199a7:; BB(0x006199a7);
    /* 006199a7: movzx edx, word ptr [ebp - 0x28] */ r_edx = (u32)R16((u32)(r_ebp+0xffffffd8u));
    /* 006199ab: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 006199ae: mov dword ptr [ebp + 0x10], 0 */ W32((u32)(r_ebp+0x10u), 0x0u);
    /* 006199b5: jmp 0x6199c4 */ goto L_006199c4;
L_006199b7:; BB(0x006199b7);
    /* 006199b7: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 006199ba: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 006199bd: mov dword ptr [ebp + 0x14], 0 */ W32((u32)(r_ebp+0x14u), 0x0u);
L_006199c4:; BB(0x006199c4);
    /* 006199c4: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 006199cb: jmp 0x6199d6 */ goto L_006199d6;
L_006199cd:; BB(0x006199cd);
    /* 006199cd: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006199d0: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006199d3: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_006199d6:; BB(0x006199d6);
    /* 006199d6: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006199d9: cmp edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006199dc: jge 0x619a0f */ if ((fS==fO)) goto L_00619a0f;
L_006199de:; BB(0x006199de);
    /* 006199de: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 006199e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006199e2: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 006199e5: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 006199e8: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 006199eb: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 006199ee: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006199ef: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006199f2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006199f3: call 0x61d6a0 */ r_esp -= 4; W32(r_esp, 0x6199f8u); f_0061d6a0();
    /* 006199f8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006199fb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006199fe: add eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00619a01: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 00619a04: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00619a07: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00619a0a: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 00619a0d: jmp 0x6199cd */ goto L_006199cd;
L_00619a0f:; BB(0x00619a0f);
    /* 00619a0f: jmp 0x619bbd */ goto L_00619bbd;
L_00619a14:; BB(0x00619a14);
    /* 00619a14: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00619a17: add edx, dword ptr [ebp + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00619a1a: mov dword ptr [ebp + 0xc], edx */ W32((u32)(r_ebp+0xcu), r_edx);
    /* 00619a1d: movzx eax, word ptr [ebp - 0x28] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffd8u));
    /* 00619a21: cmp dword ptr [ebp + 0x14], eax */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00619a24: jle 0x619a36 */ if ((fZ||fS!=fO)) goto L_00619a36;
L_00619a26:; BB(0x00619a26);
    /* 00619a26: movzx ecx, word ptr [ebp - 0x28] */ r_ecx = (u32)R16((u32)(r_ebp+0xffffffd8u));
    /* 00619a2a: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00619a2d: mov dword ptr [ebp + 0x10], 0 */ W32((u32)(r_ebp+0x10u), 0x0u);
    /* 00619a34: jmp 0x619a43 */ goto L_00619a43;
L_00619a36:; BB(0x00619a36);
    /* 00619a36: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 00619a39: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00619a3c: mov dword ptr [ebp + 0x14], 0 */ W32((u32)(r_ebp+0x14u), 0x0u);
L_00619a43:; BB(0x00619a43);
    /* 00619a43: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00619a4a: jmp 0x619a55 */ goto L_00619a55;
L_00619a4c:; BB(0x00619a4c);
    /* 00619a4c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00619a4f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00619a52: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_00619a55:; BB(0x00619a55);
    /* 00619a55: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00619a58: cmp ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00619a5b: jge 0x619a8e */ if ((fS==fO)) goto L_00619a8e;
L_00619a5d:; BB(0x00619a5d);
    /* 00619a5d: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 00619a60: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00619a61: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00619a64: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 00619a67: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 00619a6a: mov eax, dword ptr [edx + ecx*4] */ r_eax = R32((u32)(r_edx+r_ecx*4));
    /* 00619a6d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00619a6e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00619a71: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00619a72: call 0x61d800 */ r_esp -= 4; W32(r_esp, 0x619a77u); f_0061d800();
    /* 00619a77: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00619a7a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00619a7d: add edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00619a80: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
    /* 00619a83: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00619a86: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00619a89: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
    /* 00619a8c: jmp 0x619a4c */ goto L_00619a4c;
L_00619a8e:; BB(0x00619a8e);
    /* 00619a8e: jmp 0x619bbd */ goto L_00619bbd;
L_00619a93:; BB(0x00619a93);
    /* 00619a93: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00619a96: add ecx, dword ptr [ebp + 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00619a99: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 00619a9c: movzx edx, word ptr [ebp - 0x28] */ r_edx = (u32)R16((u32)(r_ebp+0xffffffd8u));
    /* 00619aa0: cmp dword ptr [ebp + 0x14], edx */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00619aa3: jle 0x619ab5 */ if ((fZ||fS!=fO)) goto L_00619ab5;
L_00619aa5:; BB(0x00619aa5);
    /* 00619aa5: movzx eax, word ptr [ebp - 0x28] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffd8u));
    /* 00619aa9: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00619aac: mov dword ptr [ebp + 0x10], 0 */ W32((u32)(r_ebp+0x10u), 0x0u);
    /* 00619ab3: jmp 0x619ac2 */ goto L_00619ac2;
L_00619ab5:; BB(0x00619ab5);
    /* 00619ab5: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00619ab8: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00619abb: mov dword ptr [ebp + 0x14], 0 */ W32((u32)(r_ebp+0x14u), 0x0u);
L_00619ac2:; BB(0x00619ac2);
    /* 00619ac2: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00619ac9: jmp 0x619ad4 */ goto L_00619ad4;
L_00619acb:; BB(0x00619acb);
    /* 00619acb: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00619ace: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00619ad1: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_00619ad4:; BB(0x00619ad4);
    /* 00619ad4: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00619ad7: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00619ada: jge 0x619b0d */ if ((fS==fO)) goto L_00619b0d;
L_00619adc:; BB(0x00619adc);
    /* 00619adc: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 00619adf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00619ae0: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00619ae3: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 00619ae6: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 00619ae9: mov edx, dword ptr [ecx + eax*4] */ r_edx = R32((u32)(r_ecx+r_eax*4));
    /* 00619aec: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00619aed: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00619af0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00619af1: call 0x61da70 */ r_esp -= 4; W32(r_esp, 0x619af6u); f_0061da70();
    /* 00619af6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00619af9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00619afc: add ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00619aff: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 00619b02: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00619b05: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00619b08: mov dword ptr [ebp + 0xc], edx */ W32((u32)(r_ebp+0xcu), r_edx);
    /* 00619b0b: jmp 0x619acb */ goto L_00619acb;
L_00619b0d:; BB(0x00619b0d);
    /* 00619b0d: jmp 0x619bbd */ goto L_00619bbd;
L_00619b12:; BB(0x00619b12);
    /* 00619b12: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00619b15: add eax, dword ptr [ebp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00619b18: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
    /* 00619b1b: movzx ecx, word ptr [ebp - 0x28] */ r_ecx = (u32)R16((u32)(r_ebp+0xffffffd8u));
    /* 00619b1f: cmp dword ptr [ebp + 0x14], ecx */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00619b22: jle 0x619b34 */ if ((fZ||fS!=fO)) goto L_00619b34;
L_00619b24:; BB(0x00619b24);
    /* 00619b24: movzx edx, word ptr [ebp - 0x28] */ r_edx = (u32)R16((u32)(r_ebp+0xffffffd8u));
    /* 00619b28: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00619b2b: mov dword ptr [ebp + 0x10], 0 */ W32((u32)(r_ebp+0x10u), 0x0u);
    /* 00619b32: jmp 0x619b41 */ goto L_00619b41;
L_00619b34:; BB(0x00619b34);
    /* 00619b34: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00619b37: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00619b3a: mov dword ptr [ebp + 0x14], 0 */ W32((u32)(r_ebp+0x14u), 0x0u);
L_00619b41:; BB(0x00619b41);
    /* 00619b41: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00619b48: jmp 0x619b53 */ goto L_00619b53;
L_00619b4a:; BB(0x00619b4a);
    /* 00619b4a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00619b4d: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00619b50: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_00619b53:; BB(0x00619b53);
    /* 00619b53: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00619b56: cmp edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00619b59: jge 0x619bbd */ if ((fS==fO)) goto L_00619bbd;
L_00619b5b:; BB(0x00619b5b);
    /* 00619b5b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00619b5e: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 00619b61: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 00619b64: mov eax, dword ptr [edx + ecx*4] */ r_eax = R32((u32)(r_edx+r_ecx*4));
    /* 00619b67: mov dword ptr [ebp - 0xcc], eax */ W32((u32)(r_ebp+0xffffff34u), r_eax);
    /* 00619b6d: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 00619b73: mov dword ptr [ebp - 0xb0], ecx */ W32((u32)(r_ebp+0xffffff50u), r_ecx);
    /* 00619b79: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 00619b7c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00619b7d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00619b80: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00619b82: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00619b83: lea edx, [ebp - 0xb0] */ r_edx = (u32)(r_ebp+0xffffff50u);
    /* 00619b89: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00619b8a: call 0x61d6a0 */ r_esp -= 4; W32(r_esp, 0x619b8fu); f_0061d6a0();
    /* 00619b8f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00619b92: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 00619b95: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00619b96: mov ecx, dword ptr [ebp - 0xb0] */ r_ecx = R32((u32)(r_ebp+0xffffff50u));
    /* 00619b9c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00619b9d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00619ba0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00619ba1: call 0x61d520 */ r_esp -= 4; W32(r_esp, 0x619ba6u); f_0061d520();
    /* 00619ba6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00619ba9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00619bac: add eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00619baf: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 00619bb2: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00619bb5: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00619bb8: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 00619bbb: jmp 0x619b4a */ goto L_00619b4a;
L_00619bbd:; BB(0x00619bbd);
    /* 00619bbd: cmp dword ptr [ebp + 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00619bc1: je 0x619bec */ if (fZ) goto L_00619bec;
L_00619bc3:; BB(0x00619bc3);
    /* 00619bc3: movzx edx, word ptr [ebp - 0x28] */ r_edx = (u32)R16((u32)(r_ebp+0xffffffd8u));
    /* 00619bc7: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00619bca: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00619bcc: mov dword ptr [ebp + 0x14], eax */ W32((u32)(r_ebp+0x14u), r_eax);
    /* 00619bcf: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00619bd2: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 00619bd5: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00619bd8: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00619bdb: mov cx, word ptr [eax + 1] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+0x1u))) & 0xffffu);
    /* 00619bdf: mov word ptr [ebp - 0x28], cx */ W16((u32)(r_ebp+0xffffffd8u), (u16)r_ecx);
    /* 00619be3: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00619be6: add edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00619be9: mov dword ptr [ebp + 0xc], edx */ W32((u32)(r_ebp+0xcu), r_edx);
L_00619bec:; BB(0x00619bec);
    /* 00619bec: jmp 0x618fda */ goto L_00618fda;
L_00619bf1:; BB(0x00619bf1);
    /* 00619bf1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00619bf2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00619bf3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00619bf4: mov esp, ebp */ r_esp = r_ebp;
    /* 00619bf6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00619bf7: ret  */ FN_RET(0x00618ed0); r_esp += 4; return;
}

