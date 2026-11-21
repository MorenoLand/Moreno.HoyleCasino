#include "protos.h"

void f_00433490(void) /* CrapsSettingsHelpText::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00433490);
    /* 00433490: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00433491: mov ebp, esp */ r_ebp = r_esp;
    /* 00433493: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00433496: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 00433499: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004334a0: cmp dword ptr [0x163068c], 0 */ {  u32 a = R32((u32)(0x163068cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004334a7: jne 0x4334ae */ if (!fZ) goto L_004334ae;
L_004334a9:; BB(0x004334a9);
    /* 004334a9: jmp 0x4336d0 */ goto L_004336d0;
L_004334ae:; BB(0x004334ae);
    /* 004334ae: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 004334b0: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 004334b6: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x4334bbu); f_005fb5e0();
    /* 004334bb: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 004334be: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 004334c5: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 004334c7: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 004334cd: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x4334d2u); f_005fb350();
    /* 004334d2: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 004334d5: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 004334dc: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 004334de: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 004334e4: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x4334e9u); f_005fb350();
    /* 004334e9: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 004334ec: mov dword ptr [ebp - 0x30], 2 */ W32((u32)(r_ebp+0xffffffd0u), 0x2u);
    /* 004334f3: push 0x35 */ { u32 v = 0x35u; r_esp -= 4; W32(r_esp, v); }
    /* 004334f5: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 004334fb: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x433500u); f_005fb350();
    /* 00433500: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00433503: mov dword ptr [ebp - 0x28], 3 */ W32((u32)(r_ebp+0xffffffd8u), 0x3u);
    /* 0043350a: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 0043350c: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 00433512: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x433517u); f_005fb350();
    /* 00433517: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0043351a: mov dword ptr [ebp - 0x20], 4 */ W32((u32)(r_ebp+0xffffffe0u), 0x4u);
    /* 00433521: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 00433523: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 00433529: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x43352eu); f_005fb350();
    /* 0043352e: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00433531: mov dword ptr [ebp - 0x18], 5 */ W32((u32)(r_ebp+0xffffffe8u), 0x5u);
    /* 00433538: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 0043353a: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 00433540: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x433545u); f_005fb350();
    /* 00433545: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00433548: mov dword ptr [ebp - 0x10], 6 */ W32((u32)(r_ebp+0xfffffff0u), 0x6u);
    /* 0043354f: mov dword ptr [ebp - 0xc], 7 */ W32((u32)(r_ebp+0xfffffff4u), 0x7u);
    /* 00433556: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0043355d: jmp 0x433568 */ goto L_00433568;
L_0043355f:; BB(0x0043355f);
    /* 0043355f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00433562: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00433565: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_00433568:; BB(0x00433568);
    /* 00433568: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043356b: cmp ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043356e: jge 0x4335ab */ if ((fS==fO)) goto L_004335ab;
L_00433570:; BB(0x00433570);
    /* 00433570: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00433573: cmp dword ptr [ebp + edx*8 - 0x44], 0 */ {  u32 a = R32((u32)(r_ebp+r_edx*8+0xffffffbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00433578: je 0x4335a9 */ if (fZ) goto L_004335a9;
L_0043357a:; BB(0x0043357a);
    /* 0043357a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043357d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043357e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00433581: mov edx, dword ptr [ebp + ecx*8 - 0x44] */ r_edx = R32((u32)(r_ebp+r_ecx*8+0xffffffbcu));
    /* 00433585: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00433588: mov ecx, dword ptr [ebp + eax*8 - 0x44] */ r_ecx = R32((u32)(r_ebp+r_eax*8+0xffffffbcu));
    /* 0043358c: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0043358e: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 00433594: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x433596u); call_ind(t); }
    /* 00433596: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00433599: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043359b: je 0x4335a9 */ if (fZ) goto L_004335a9;
L_0043359d:; BB(0x0043359d);
    /* 0043359d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004335a0: mov eax, dword ptr [ebp + edx*8 - 0x40] */ r_eax = R32((u32)(r_ebp+r_edx*8+0xffffffc0u));
    /* 004335a4: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004335a7: jmp 0x4335ab */ goto L_004335ab;
L_004335a9:; BB(0x004335a9);
    /* 004335a9: jmp 0x43355f */ goto L_0043355f;
L_004335ab:; BB(0x004335ab);
    /* 004335ab: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004335af: jne 0x4335d4 */ if (!fZ) goto L_004335d4;
L_004335b1:; BB(0x004335b1);
    /* 004335b1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004335b4: cmp dword ptr [ecx + 0x18], 3 */ {  u32 a = R32((u32)(r_ecx+0x18u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004335b8: jne 0x4335cf */ if (!fZ) goto L_004335cf;
L_004335ba:; BB(0x004335ba);
    /* 004335ba: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 004335bf: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004335c2: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004335c4: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004335c7: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 004335cd: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4335cfu); call_ind(t); }
L_004335cf:; BB(0x004335cf);
    /* 004335cf: jmp 0x4336d0 */ goto L_004336d0;
L_004335d4:; BB(0x004335d4);
    /* 004335d4: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004335d8: jne 0x4335f8 */ if (!fZ) goto L_004335f8;
L_004335da:; BB(0x004335da);
    /* 004335da: push 0x6b7c98 */ { u32 v = 0x6b7c98u; r_esp -= 4; W32(r_esp, v); }
    /* 004335df: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4335e4u); f_00630f40();
    /* 004335e4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004335e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004335e8: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 004335eb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004335ed: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004335f0: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004335f6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4335f8u); call_ind(t); }
L_004335f8:; BB(0x004335f8);
    /* 004335f8: cmp dword ptr [ebp - 4], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004335fc: jne 0x43361c */ if (!fZ) goto L_0043361c;
L_004335fe:; BB(0x004335fe);
    /* 004335fe: push 0x6b7c84 */ { u32 v = 0x6b7c84u; r_esp -= 4; W32(r_esp, v); }
    /* 00433603: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x433608u); f_00630f40();
    /* 00433608: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043360b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043360c: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0043360f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00433611: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00433614: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0043361a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x43361cu); call_ind(t); }
L_0043361c:; BB(0x0043361c);
    /* 0043361c: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00433620: jne 0x433640 */ if (!fZ) goto L_00433640;
L_00433622:; BB(0x00433622);
    /* 00433622: push 0x6b7c70 */ { u32 v = 0x6b7c70u; r_esp -= 4; W32(r_esp, v); }
    /* 00433627: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x43362cu); f_00630f40();
    /* 0043362c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043362f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00433630: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00433633: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00433635: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00433638: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0043363e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x433640u); call_ind(t); }
L_00433640:; BB(0x00433640);
    /* 00433640: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00433644: jne 0x433664 */ if (!fZ) goto L_00433664;
L_00433646:; BB(0x00433646);
    /* 00433646: push 0x6b7c5c */ { u32 v = 0x6b7c5cu; r_esp -= 4; W32(r_esp, v); }
    /* 0043364b: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x433650u); f_00630f40();
    /* 00433650: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00433653: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00433654: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00433657: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00433659: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0043365c: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00433662: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x433664u); call_ind(t); }
L_00433664:; BB(0x00433664);
    /* 00433664: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00433668: jne 0x433688 */ if (!fZ) goto L_00433688;
L_0043366a:; BB(0x0043366a);
    /* 0043366a: push 0x6b7c48 */ { u32 v = 0x6b7c48u; r_esp -= 4; W32(r_esp, v); }
    /* 0043366f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x433674u); f_00630f40();
    /* 00433674: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00433677: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00433678: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0043367b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043367d: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00433680: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00433686: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x433688u); call_ind(t); }
L_00433688:; BB(0x00433688);
    /* 00433688: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043368c: jne 0x4336ac */ if (!fZ) goto L_004336ac;
L_0043368e:; BB(0x0043368e);
    /* 0043368e: push 0x6b7c34 */ { u32 v = 0x6b7c34u; r_esp -= 4; W32(r_esp, v); }
    /* 00433693: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x433698u); f_00630f40();
    /* 00433698: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043369b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043369c: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0043369f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004336a1: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004336a4: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004336aa: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4336acu); call_ind(t); }
L_004336ac:; BB(0x004336ac);
    /* 004336ac: cmp dword ptr [ebp - 4], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004336b0: jne 0x4336d0 */ if (!fZ) goto L_004336d0;
L_004336b2:; BB(0x004336b2);
    /* 004336b2: push 0x6b7c20 */ { u32 v = 0x6b7c20u; r_esp -= 4; W32(r_esp, v); }
    /* 004336b7: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4336bcu); f_00630f40();
    /* 004336bc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004336bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004336c0: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004336c3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004336c5: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004336c8: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004336ce: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4336d0u); call_ind(t); }
L_004336d0:; BB(0x004336d0);
    /* 004336d0: mov esp, ebp */ r_esp = r_ebp;
    /* 004336d2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004336d3: ret 4 */ FN_RET(0x00433490); r_esp += 8; return;
}

