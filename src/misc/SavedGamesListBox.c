#include "protos.h"

void f_00674390(void) /* SavedGamesListBox::vfunc50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00674390);
    /* 00674390: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00674391: mov ebp, esp */ r_ebp = r_esp;
    /* 00674393: sub esp, 0x15c */ {  u32 a = r_esp; u32 b = 0x15cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00674399: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0067439e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006743a0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 006743a3: mov dword ptr [ebp - 0x150], ecx */ W32((u32)(r_ebp+0xfffffeb0u), r_ecx);
    /* 006743a9: lea eax, [ebp - 0x138] */ r_eax = (u32)(r_ebp+0xfffffec8u);
    /* 006743af: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006743b0: mov ecx, dword ptr [0x16306d0] */ r_ecx = R32((u32)(0x16306d0u));
    /* 006743b6: call 0x673cb0 */ r_esp -= 4; W32(r_esp, 0x6743bbu); f_00673cb0();
    /* 006743bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006743bc: call dword ptr [0x6b2168] */ { u32 t = R32((u32)(0x6b2168u)); r_esp -= 4; W32(r_esp, 0x6743c2u); call_ind(t); }
    /* 006743c2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006743c5: mov dword ptr [ebp - 0x13c], eax */ W32((u32)(r_ebp+0xfffffec4u), r_eax);
    /* 006743cb: lea ecx, [ebp - 0x118] */ r_ecx = (u32)(r_ebp+0xfffffee8u);
    /* 006743d1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006743d2: call dword ptr [0x6b2298] */ { u32 t = R32((u32)(0x6b2298u)); r_esp -= 4; W32(r_esp, 0x6743d8u); call_ind(t); }
    /* 006743d8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006743db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006743dc: push 0x6e17c8 */ { u32 v = 0x6e17c8u; r_esp -= 4; W32(r_esp, v); }
    /* 006743e1: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 006743e6: lea edx, [ebp - 0x108] */ r_edx = (u32)(r_ebp+0xfffffef8u);
    /* 006743ec: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006743ed: call dword ptr [0x6b216c] */ { u32 t = R32((u32)(0x6b216cu)); r_esp -= 4; W32(r_esp, 0x6743f3u); call_ind(t); }
    /* 006743f3: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006743f6: lea eax, [ebp - 0x108] */ r_eax = (u32)(r_ebp+0xfffffef8u);
    /* 006743fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006743fd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006743ff: mov ecx, dword ptr [0x16306d0] */ r_ecx = R32((u32)(0x16306d0u));
    /* 00674405: call 0x5fb5a0 */ r_esp -= 4; W32(r_esp, 0x67440au); f_005fb5a0();
    /* 0067440a: push 0x6e17b0 */ { u32 v = 0x6e17b0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067440f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x674414u); f_00630f40();
    /* 00674414: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00674417: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00674418: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067441a: mov ecx, dword ptr [0x16306d0] */ r_ecx = R32((u32)(0x16306d0u));
    /* 00674420: call 0x5fb5a0 */ r_esp -= 4; W32(r_esp, 0x674425u); f_005fb5a0();
    /* 00674425: mov ecx, dword ptr [ebp - 0x150] */ r_ecx = R32((u32)(r_ebp+0xfffffeb0u));
    /* 0067442b: call 0x5e4390 */ r_esp -= 4; W32(r_esp, 0x674430u); f_005e4390();
    /* 00674430: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00674432: je 0x67444e */ if (fZ) goto L_0067444e;
L_00674434:; BB(0x00674434);
    /* 00674434: mov ecx, dword ptr [ebp - 0x150] */ r_ecx = R32((u32)(r_ebp+0xfffffeb0u));
    /* 0067443a: call 0x5e4390 */ r_esp -= 4; W32(r_esp, 0x67443fu); f_005e4390();
    /* 0067443f: mov ecx, eax */ r_ecx = r_eax;
    /* 00674441: call 0x629c70 */ r_esp -= 4; W32(r_esp, 0x674446u); f_00629c70();
    /* 00674446: mov dword ptr [ebp - 0x154], eax */ W32((u32)(r_ebp+0xfffffeacu), r_eax);
    /* 0067444c: jmp 0x674458 */ goto L_00674458;
L_0067444e:; BB(0x0067444e);
    /* 0067444e: mov dword ptr [ebp - 0x154], 0 */ W32((u32)(r_ebp+0xfffffeacu), 0x0u);
L_00674458:; BB(0x00674458);
    /* 00674458: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0067445e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067445f: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00674461: mov ecx, dword ptr [0x16306d0] */ r_ecx = R32((u32)(0x16306d0u));
    /* 00674467: call 0x5fb5a0 */ r_esp -= 4; W32(r_esp, 0x67446cu); f_005fb5a0();
    /* 0067446c: mov edx, dword ptr [0x16306d0] */ r_edx = R32((u32)(0x16306d0u));
    /* 00674472: movzx eax, byte ptr [edx + 0x1c4] */ r_eax = (u32)R8((u32)(r_edx+0x1c4u));
    /* 00674479: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067447b: je 0x6744e2 */ if (fZ) goto L_006744e2;
L_0067447d:; BB(0x0067447d);
    /* 0067447d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067447f: mov ecx, dword ptr [0x16306d0] */ r_ecx = R32((u32)(0x16306d0u));
    /* 00674485: call 0x5fb810 */ r_esp -= 4; W32(r_esp, 0x67448au); f_005fb810();
    /* 0067448a: mov dword ptr [ebp - 0x158], eax */ W32((u32)(r_ebp+0xfffffea8u), r_eax);
    /* 00674490: mov ecx, dword ptr [ebp - 0x150] */ r_ecx = R32((u32)(r_ebp+0xfffffeb0u));
    /* 00674496: call 0x5e4390 */ r_esp -= 4; W32(r_esp, 0x67449bu); f_005e4390();
    /* 0067449b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067449d: je 0x6744b9 */ if (fZ) goto L_006744b9;
L_0067449f:; BB(0x0067449f);
    /* 0067449f: mov ecx, dword ptr [ebp - 0x150] */ r_ecx = R32((u32)(r_ebp+0xfffffeb0u));
    /* 006744a5: call 0x5e4390 */ r_esp -= 4; W32(r_esp, 0x6744aau); f_005e4390();
    /* 006744aa: mov ecx, eax */ r_ecx = r_eax;
    /* 006744ac: call 0x629c70 */ r_esp -= 4; W32(r_esp, 0x6744b1u); f_00629c70();
    /* 006744b1: mov dword ptr [ebp - 0x15c], eax */ W32((u32)(r_ebp+0xfffffea4u), r_eax);
    /* 006744b7: jmp 0x6744c3 */ goto L_006744c3;
L_006744b9:; BB(0x006744b9);
    /* 006744b9: mov dword ptr [ebp - 0x15c], 0 */ W32((u32)(r_ebp+0xfffffea4u), 0x0u);
L_006744c3:; BB(0x006744c3);
    /* 006744c3: mov ecx, dword ptr [ebp - 0x15c] */ r_ecx = R32((u32)(r_ebp+0xfffffea4u));
    /* 006744c9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006744ca: mov edx, dword ptr [ebp - 0x158] */ r_edx = R32((u32)(r_ebp+0xfffffea8u));
    /* 006744d0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006744d2: mov ecx, dword ptr [ebp - 0x158] */ r_ecx = R32((u32)(r_ebp+0xfffffea8u));
    /* 006744d8: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 006744de: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6744e0u); call_ind(t); }
    /* 006744e0: jmp 0x6744f2 */ goto L_006744f2;
L_006744e2:; BB(0x006744e2);
    /* 006744e2: mov eax, dword ptr [0x16306d0] */ r_eax = R32((u32)(0x16306d0u));
    /* 006744e7: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 006744ed: call 0x674160 */ r_esp -= 4; W32(r_esp, 0x6744f2u); f_00674160();
L_006744f2:; BB(0x006744f2);
    /* 006744f2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006744f5: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006744f7: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x6744fcu); f_00686d72();
    /* 006744fc: mov esp, ebp */ r_esp = r_ebp;
    /* 006744fe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006744ff: ret  */ FN_RET(0x00674390); r_esp += 4; return;
}

void f_006748b0(void) /* SavedGamesListBox::vfunc0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006748b0);
    /* 006748b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006748b1: mov ebp, esp */ r_ebp = r_esp;
    /* 006748b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006748b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006748b7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006748ba: mov dword ptr [eax], 0x6e1564 */ W32((u32)(r_eax), 0x6e1564u);
    /* 006748c0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006748c3: call 0x628220 */ r_esp -= 4; W32(r_esp, 0x6748c8u); f_00628220();
    /* 006748c8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006748cb: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 006748ce: je 0x6748dc */ if (fZ) goto L_006748dc;
L_006748d0:; BB(0x006748d0);
    /* 006748d0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006748d3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006748d4: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x6748d9u); f_00686cae();
    /* 006748d9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006748dc:; BB(0x006748dc);
    /* 006748dc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006748df: mov esp, ebp */ r_esp = r_ebp;
    /* 006748e1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006748e2: ret 4 */ FN_RET(0x006748b0); r_esp += 8; return;
}

