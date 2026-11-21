#include "protos.h"

void f_005de170(void) /* sub_5DE170 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005de170);
    /* 005de170: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005de171: mov ebp, esp */ r_ebp = r_esp;
    /* 005de173: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005de176: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005de179: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005de180: jmp 0x5de18b */ goto L_005de18b;
L_005de182:; BB(0x005de182);
    /* 005de182: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005de185: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005de188: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005de18b:; BB(0x005de18b);
    /* 005de18b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005de191: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005de193: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005de199: mov eax, dword ptr [edx + 0x10c] */ r_eax = R32((u32)(r_edx+0x10cu));
    /* 005de19f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5de1a1u); call_ind(t); }
    /* 005de1a1: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005de1a4: jge 0x5de1ed */ if ((fS==fO)) goto L_005de1ed;
L_005de1a6:; BB(0x005de1a6);
    /* 005de1a6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005de1a9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005de1aa: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5de1afu); f_005dcb00();
    /* 005de1af: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005de1b2: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005de1b5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005de1b8: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5de1bdu); f_0063aac0();
    /* 005de1bd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005de1bf: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005de1c2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005de1c4: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005de1c8: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 005de1cb: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005de1ce: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005de1d0: jne 0x5de1eb */ if (!fZ) goto L_005de1eb;
L_005de1d2:; BB(0x005de1d2);
    /* 005de1d2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005de1d5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005de1d6: mov eax, dword ptr [0x7947e4] */ r_eax = R32((u32)(0x7947e4u));
    /* 005de1db: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005de1dd: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005de1e3: mov eax, dword ptr [edx + 0x290] */ r_eax = R32((u32)(r_edx+0x290u));
    /* 005de1e9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5de1ebu); call_ind(t); }
L_005de1eb:; BB(0x005de1eb);
    /* 005de1eb: jmp 0x5de182 */ goto L_005de182;
L_005de1ed:; BB(0x005de1ed);
    /* 005de1ed: mov esp, ebp */ r_esp = r_ebp;
    /* 005de1ef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005de1f0: ret  */ FN_RET(0x005de170); r_esp += 4; return;
}

void f_005de200(void) /* sub_5DE200 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005de200);
    /* 005de200: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005de201: mov ebp, esp */ r_ebp = r_esp;
    /* 005de203: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005de204: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005de207: cmp dword ptr [0x7947e4], 0 */ {  u32 a = R32((u32)(0x7947e4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005de20e: je 0x5de21f */ if (fZ) goto L_005de21f;
L_005de210:; BB(0x005de210);
    /* 005de210: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005de213: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005de214: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005de21a: call 0x5d8f50 */ r_esp -= 4; W32(r_esp, 0x5de21fu); f_005d8f50();
L_005de21f:; BB(0x005de21f);
    /* 005de21f: mov esp, ebp */ r_esp = r_ebp;
    /* 005de221: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005de222: ret 4 */ FN_RET(0x005de200); r_esp += 8; return;
}

void f_005de230(void) /* sub_5DE230 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005de230);
    /* 005de230: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005de231: mov ebp, esp */ r_ebp = r_esp;
    /* 005de233: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005de235: push 0x6a9552 */ { u32 v = 0x6a9552u; r_esp -= 4; W32(r_esp, v); }
    /* 005de23a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005de240: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005de241: sub esp, 0x514 */ {  u32 a = r_esp; u32 b = 0x514u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005de247: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005de24c: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005de24e: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005de251: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005de252: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005de255: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005de25b: mov dword ptr [ebp - 0x520], ecx */ W32((u32)(r_ebp+0xfffffae0u), r_ecx);
    /* 005de261: lea ecx, [ebp - 0x50c] */ r_ecx = (u32)(r_ebp+0xfffffaf4u);
    /* 005de267: call 0x5d4cf0 */ r_esp -= 4; W32(r_esp, 0x5de26cu); f_005d4cf0();
    /* 005de26c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005de273: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005de276: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005de277: mov ecx, dword ptr [ebp - 0x520] */ r_ecx = R32((u32)(r_ebp+0xfffffae0u));
    /* 005de27d: call 0x6368b0 */ r_esp -= 4; W32(r_esp, 0x5de282u); f_006368b0();
    /* 005de282: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005de285: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005de287: je 0x5de2ae */ if (fZ) goto L_005de2ae;
L_005de289:; BB(0x005de289);
    /* 005de289: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005de28c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005de28d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005de290: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005de291: mov ecx, dword ptr [ebp - 0x520] */ r_ecx = R32((u32)(r_ebp+0xfffffae0u));
    /* 005de297: call 0x6369b0 */ r_esp -= 4; W32(r_esp, 0x5de29cu); f_006369b0();
    /* 005de29c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005de29d: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5de2a2u); f_005dcb00();
    /* 005de2a2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005de2a5: mov ecx, eax */ r_ecx = r_eax;
    /* 005de2a7: call 0x5d5ac0 */ r_esp -= 4; W32(r_esp, 0x5de2acu); f_005d5ac0();
    /* 005de2ac: jmp 0x5de2e5 */ goto L_005de2e5;
L_005de2ae:; BB(0x005de2ae);
    /* 005de2ae: lea ecx, [ebp - 0x51c] */ r_ecx = (u32)(r_ebp+0xfffffae4u);
    /* 005de2b4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005de2b5: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005de2b8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005de2b9: mov ecx, dword ptr [ebp - 0x520] */ r_ecx = R32((u32)(r_ebp+0xfffffae0u));
    /* 005de2bf: call 0x635f30 */ r_esp -= 4; W32(r_esp, 0x5de2c4u); f_00635f30();
    /* 005de2c4: lea eax, [ebp - 0x51c] */ r_eax = (u32)(r_ebp+0xfffffae4u);
    /* 005de2ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005de2cb: lea ecx, [ebp - 0x50c] */ r_ecx = (u32)(r_ebp+0xfffffaf4u);
    /* 005de2d1: call 0x63ab10 */ r_esp -= 4; W32(r_esp, 0x5de2d6u); f_0063ab10();
    /* 005de2d6: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005de2d9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005de2da: lea ecx, [ebp - 0x50c] */ r_ecx = (u32)(r_ebp+0xfffffaf4u);
    /* 005de2e0: call 0x5d5ac0 */ r_esp -= 4; W32(r_esp, 0x5de2e5u); f_005d5ac0();
L_005de2e5:; BB(0x005de2e5);
    /* 005de2e5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005de2ec: lea ecx, [ebp - 0x50c] */ r_ecx = (u32)(r_ebp+0xfffffaf4u);
    /* 005de2f2: call 0x5d4f50 */ r_esp -= 4; W32(r_esp, 0x5de2f7u); f_005d4f50();
    /* 005de2f7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005de2fa: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005de301: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005de302: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005de305: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005de307: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x5de30cu); f_00686d72();
    /* 005de30c: mov esp, ebp */ r_esp = r_ebp;
    /* 005de30e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005de30f: ret 8 */ FN_RET(0x005de230); r_esp += 12; return;
}

void f_005de320(void) /* sub_5DE320 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005de320);
    /* 005de320: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005de321: mov ebp, esp */ r_ebp = r_esp;
    /* 005de323: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005de326: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 005de329: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 005de330: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005de334: jl 0x5de350 */ if ((fS!=fO)) goto L_005de350;
L_005de336:; BB(0x005de336);
    /* 005de336: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005de33b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005de33d: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005de343: mov eax, dword ptr [edx + 0x10c] */ r_eax = R32((u32)(r_edx+0x10cu));
    /* 005de349: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5de34bu); call_ind(t); }
    /* 005de34b: cmp dword ptr [ebp + 8], eax */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005de34e: jl 0x5de357 */ if ((fS!=fO)) goto L_005de357;
L_005de350:; BB(0x005de350);
    /* 005de350: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005de352: jmp 0x5de440 */ goto L_005de440;
L_005de357:; BB(0x005de357);
    /* 005de357: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005de35e: jmp 0x5de369 */ goto L_005de369;
L_005de360:; BB(0x005de360);
    /* 005de360: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005de363: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005de366: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005de369:; BB(0x005de369);
    /* 005de369: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 005de36f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005de371: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005de377: mov edx, dword ptr [eax + 0x10c] */ r_edx = R32((u32)(r_eax+0x10cu));
    /* 005de37d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5de37fu); call_ind(t); }
    /* 005de37f: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005de382: jge 0x5de43d */ if ((fS==fO)) goto L_005de43d;
L_005de388:; BB(0x005de388);
    /* 005de388: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005de38b: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005de38e: je 0x5de438 */ if (fZ) goto L_005de438;
L_005de394:; BB(0x005de394);
    /* 005de394: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005de397: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005de398: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5de39du); f_005dcb00();
    /* 005de39d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005de3a0: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005de3a3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005de3a6: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5de3abu); f_0063aac0();
    /* 005de3ab: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005de3ad: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005de3b0: cmp dword ptr [ebp - 0xc], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005de3b4: je 0x5de3d2 */ if (fZ) goto L_005de3d2;
L_005de3b6:; BB(0x005de3b6);
    /* 005de3b6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005de3b9: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5de3beu); f_0063aac0();
    /* 005de3be: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005de3c0: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005de3c3: cmp dword ptr [ebp - 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005de3c7: je 0x5de3d2 */ if (fZ) goto L_005de3d2;
L_005de3c9:; BB(0x005de3c9);
    /* 005de3c9: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 005de3d0: jmp 0x5de3d9 */ goto L_005de3d9;
L_005de3d2:; BB(0x005de3d2);
    /* 005de3d2: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
L_005de3d9:; BB(0x005de3d9);
    /* 005de3d9: movzx ecx, byte ptr [ebp - 0x2c] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffd4u));
    /* 005de3dd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005de3df: je 0x5de438 */ if (fZ) goto L_005de438;
L_005de3e1:; BB(0x005de3e1);
    /* 005de3e1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005de3e4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005de3e5: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5de3eau); f_005dcb00();
    /* 005de3ea: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005de3ed: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005de3f0: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005de3f3: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5de3f8u); f_0063aac0();
    /* 005de3f8: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005de3fb: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005de3fe: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005de401: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005de402: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5de407u); f_005dcb00();
    /* 005de407: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005de40a: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005de40d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005de410: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5de415u); f_0063aac0();
    /* 005de415: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005de418: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005de41b: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005de41e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005de41f: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005de422: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005de423: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x5de428u); f_00686ec0();
    /* 005de428: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005de42b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005de42d: jne 0x5de438 */ if (!fZ) goto L_005de438;
L_005de42f:; BB(0x005de42f);
    /* 005de42f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005de432: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005de435: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_005de438:; BB(0x005de438);
    /* 005de438: jmp 0x5de360 */ goto L_005de360;
L_005de43d:; BB(0x005de43d);
    /* 005de43d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
L_005de440:; BB(0x005de440);
    /* 005de440: mov esp, ebp */ r_esp = r_ebp;
    /* 005de442: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005de443: ret 4 */ FN_RET(0x005de320); r_esp += 8; return;
}

void f_005de600(void) /* sub_5DE600 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005de600);
    /* 005de600: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005de601: mov ebp, esp */ r_ebp = r_esp;
    /* 005de603: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005de604: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005de607: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005de60a: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x5de60fu); f_006375b0();
    /* 005de60f: mov esp, ebp */ r_esp = r_ebp;
    /* 005de611: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005de612: ret  */ FN_RET(0x005de600); r_esp += 4; return;
}

void f_005de620(void) /* sub_5DE620 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005de620);
    /* 005de620: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005de621: mov ebp, esp */ r_ebp = r_esp;
    /* 005de623: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005de625: push 0x6a9585 */ { u32 v = 0x6a9585u; r_esp -= 4; W32(r_esp, v); }
    /* 005de62a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005de630: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005de631: sub esp, 0x53c */ {  u32 a = r_esp; u32 b = 0x53cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005de637: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005de63c: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005de63e: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005de641: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005de642: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005de645: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005de64b: mov dword ptr [ebp - 0x548], ecx */ W32((u32)(r_ebp+0xfffffab8u), r_ecx);
    /* 005de651: lea ecx, [ebp - 0x50c] */ r_ecx = (u32)(r_ebp+0xfffffaf4u);
    /* 005de657: call 0x5d4cf0 */ r_esp -= 4; W32(r_esp, 0x5de65cu); f_005d4cf0();
    /* 005de65c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005de663: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005de666: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005de667: mov ecx, dword ptr [ebp - 0x548] */ r_ecx = R32((u32)(r_ebp+0xfffffab8u));
    /* 005de66d: call 0x6368b0 */ r_esp -= 4; W32(r_esp, 0x5de672u); f_006368b0();
    /* 005de672: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005de675: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005de677: je 0x5de768 */ if (fZ) goto L_005de768;
L_005de67d:; BB(0x005de67d);
    /* 005de67d: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 005de67f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005de682: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005de683: mov ecx, dword ptr [ebp - 0x548] */ r_ecx = R32((u32)(r_ebp+0xfffffab8u));
    /* 005de689: call 0x6369b0 */ r_esp -= 4; W32(r_esp, 0x5de68eu); f_006369b0();
    /* 005de68e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005de68f: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5de694u); f_005dcb00();
    /* 005de694: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005de697: mov ecx, eax */ r_ecx = r_eax;
    /* 005de699: call 0x63aae0 */ r_esp -= 4; W32(r_esp, 0x5de69eu); f_0063aae0();
    /* 005de69e: mov dword ptr [ebp - 0x510], eax */ W32((u32)(r_ebp+0xfffffaf0u), r_eax);
    /* 005de6a4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005de6a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005de6a8: mov ecx, dword ptr [ebp - 0x548] */ r_ecx = R32((u32)(r_ebp+0xfffffab8u));
    /* 005de6ae: call 0x6369b0 */ r_esp -= 4; W32(r_esp, 0x5de6b3u); f_006369b0();
    /* 005de6b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005de6b4: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5de6b9u); f_005dcb00();
    /* 005de6b9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005de6bc: mov ecx, eax */ r_ecx = r_eax;
    /* 005de6be: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x5de6c3u); f_005d5a50();
    /* 005de6c3: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005de6c6: sub eax, dword ptr [ecx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005de6c8: mov dword ptr [ebp - 0x514], eax */ W32((u32)(r_ebp+0xfffffaecu), r_eax);
    /* 005de6ce: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005de6d0: mov edx, dword ptr [ebp - 0x514] */ r_edx = R32((u32)(r_ebp+0xfffffaecu));
    /* 005de6d6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005de6d7: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5de6dcu); f_0064c8a0();
    /* 005de6dc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005de6df: mov dword ptr [ebp - 0x52c], eax */ W32((u32)(r_ebp+0xfffffad4u), r_eax);
    /* 005de6e5: mov dword ptr [ebp - 0x528], edx */ W32((u32)(r_ebp+0xfffffad8u), r_edx);
    /* 005de6eb: mov eax, dword ptr [ebp - 0x528] */ r_eax = R32((u32)(r_ebp+0xfffffad8u));
    /* 005de6f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005de6f2: mov ecx, dword ptr [ebp - 0x52c] */ r_ecx = R32((u32)(r_ebp+0xfffffad4u));
    /* 005de6f8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005de6f9: lea edx, [ebp - 0x534] */ r_edx = (u32)(r_ebp+0xfffffaccu);
    /* 005de6ff: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005de700: mov ecx, dword ptr [ebp - 0x510] */ r_ecx = R32((u32)(r_ebp+0xfffffaf0u));
    /* 005de706: call 0x64c630 */ r_esp -= 4; W32(r_esp, 0x5de70bu); f_0064c630();
    /* 005de70b: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005de70d: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005de710: mov eax, dword ptr [ebp - 0x510] */ r_eax = R32((u32)(r_ebp+0xfffffaf0u));
    /* 005de716: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 005de718: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 005de71b: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005de71e: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005de721: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005de722: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005de724: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005de725: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005de728: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005de729: mov ecx, dword ptr [ebp - 0x548] */ r_ecx = R32((u32)(r_ebp+0xfffffab8u));
    /* 005de72f: call 0x6369b0 */ r_esp -= 4; W32(r_esp, 0x5de734u); f_006369b0();
    /* 005de734: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005de735: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5de73au); f_005dcb00();
    /* 005de73a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005de73d: mov ecx, eax */ r_ecx = r_eax;
    /* 005de73f: call 0x5d5af0 */ r_esp -= 4; W32(r_esp, 0x5de744u); f_005d5af0();
    /* 005de744: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005de747: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005de748: mov ecx, dword ptr [ebp - 0x548] */ r_ecx = R32((u32)(r_ebp+0xfffffab8u));
    /* 005de74e: call 0x6369b0 */ r_esp -= 4; W32(r_esp, 0x5de753u); f_006369b0();
    /* 005de753: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005de754: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5de759u); f_005dcb00();
    /* 005de759: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005de75c: mov ecx, eax */ r_ecx = r_eax;
    /* 005de75e: call 0x63b0a0 */ r_esp -= 4; W32(r_esp, 0x5de763u); f_0063b0a0();
    /* 005de763: jmp 0x5de831 */ goto L_005de831;
L_005de768:; BB(0x005de768);
    /* 005de768: lea eax, [ebp - 0x524] */ r_eax = (u32)(r_ebp+0xfffffadcu);
    /* 005de76e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005de76f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005de772: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005de773: mov ecx, dword ptr [ebp - 0x548] */ r_ecx = R32((u32)(r_ebp+0xfffffab8u));
    /* 005de779: call 0x635f30 */ r_esp -= 4; W32(r_esp, 0x5de77eu); f_00635f30();
    /* 005de77e: lea edx, [ebp - 0x524] */ r_edx = (u32)(r_ebp+0xfffffadcu);
    /* 005de784: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005de785: lea ecx, [ebp - 0x50c] */ r_ecx = (u32)(r_ebp+0xfffffaf4u);
    /* 005de78b: call 0x63ab10 */ r_esp -= 4; W32(r_esp, 0x5de790u); f_0063ab10();
    /* 005de790: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005de793: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005de795: je 0x5de831 */ if (fZ) goto L_005de831;
L_005de79b:; BB(0x005de79b);
    /* 005de79b: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 005de79d: lea ecx, [ebp - 0x50c] */ r_ecx = (u32)(r_ebp+0xfffffaf4u);
    /* 005de7a3: call 0x63aae0 */ r_esp -= 4; W32(r_esp, 0x5de7a8u); f_0063aae0();
    /* 005de7a8: mov dword ptr [ebp - 0x510], eax */ W32((u32)(r_ebp+0xfffffaf0u), r_eax);
    /* 005de7ae: lea ecx, [ebp - 0x50c] */ r_ecx = (u32)(r_ebp+0xfffffaf4u);
    /* 005de7b4: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x5de7b9u); f_005d5a50();
    /* 005de7b9: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005de7bc: sub eax, dword ptr [ecx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005de7be: mov dword ptr [ebp - 0x514], eax */ W32((u32)(r_ebp+0xfffffaecu), r_eax);
    /* 005de7c4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005de7c6: mov edx, dword ptr [ebp - 0x514] */ r_edx = R32((u32)(r_ebp+0xfffffaecu));
    /* 005de7cc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005de7cd: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5de7d2u); f_0064c8a0();
    /* 005de7d2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005de7d5: mov dword ptr [ebp - 0x53c], eax */ W32((u32)(r_ebp+0xfffffac4u), r_eax);
    /* 005de7db: mov dword ptr [ebp - 0x538], edx */ W32((u32)(r_ebp+0xfffffac8u), r_edx);
    /* 005de7e1: mov eax, dword ptr [ebp - 0x538] */ r_eax = R32((u32)(r_ebp+0xfffffac8u));
    /* 005de7e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005de7e8: mov ecx, dword ptr [ebp - 0x53c] */ r_ecx = R32((u32)(r_ebp+0xfffffac4u));
    /* 005de7ee: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005de7ef: lea edx, [ebp - 0x544] */ r_edx = (u32)(r_ebp+0xfffffabcu);
    /* 005de7f5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005de7f6: mov ecx, dword ptr [ebp - 0x510] */ r_ecx = R32((u32)(r_ebp+0xfffffaf0u));
    /* 005de7fc: call 0x64c630 */ r_esp -= 4; W32(r_esp, 0x5de801u); f_0064c630();
    /* 005de801: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005de803: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005de806: mov eax, dword ptr [ebp - 0x510] */ r_eax = R32((u32)(r_ebp+0xfffffaf0u));
    /* 005de80c: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 005de80e: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 005de811: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005de814: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005de817: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005de818: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005de81a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005de81b: lea ecx, [ebp - 0x50c] */ r_ecx = (u32)(r_ebp+0xfffffaf4u);
    /* 005de821: call 0x5d5af0 */ r_esp -= 4; W32(r_esp, 0x5de826u); f_005d5af0();
    /* 005de826: lea ecx, [ebp - 0x50c] */ r_ecx = (u32)(r_ebp+0xfffffaf4u);
    /* 005de82c: call 0x63b0a0 */ r_esp -= 4; W32(r_esp, 0x5de831u); f_0063b0a0();
L_005de831:; BB(0x005de831);
    /* 005de831: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005de838: lea ecx, [ebp - 0x50c] */ r_ecx = (u32)(r_ebp+0xfffffaf4u);
    /* 005de83e: call 0x5d4f50 */ r_esp -= 4; W32(r_esp, 0x5de843u); f_005d4f50();
    /* 005de843: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005de846: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005de84d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005de84e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005de851: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005de853: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x5de858u); f_00686d72();
    /* 005de858: mov esp, ebp */ r_esp = r_ebp;
    /* 005de85a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005de85b: ret 8 */ FN_RET(0x005de620); r_esp += 12; return;
}

void f_005de860(void) /* sub_5DE860 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005de860);
    /* 005de860: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005de861: mov ebp, esp */ r_ebp = r_esp;
    /* 005de863: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005de864: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005de867: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005de86a: call 0x5de600 */ r_esp -= 4; W32(r_esp, 0x5de86fu); f_005de600();
    /* 005de86f: mov ecx, eax */ r_ecx = r_eax;
    /* 005de871: call 0x5d5460 */ r_esp -= 4; W32(r_esp, 0x5de876u); f_005d5460();
    /* 005de876: mov esp, ebp */ r_esp = r_ebp;
    /* 005de878: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005de879: ret  */ FN_RET(0x005de860); r_esp += 4; return;
}

