#include "protos.h"

void f_00548130(void) /* VideoBlackjackRoomInterface::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00548130);
    /* 00548130: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00548131: mov ebp, esp */ r_ebp = r_esp;
    /* 00548133: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00548134: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00548137: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054813a: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x54813fu); f_005e9e20();
    /* 0054813f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00548142: mov dword ptr [eax], 0x6b3374 */ W32((u32)(r_eax), 0x6b3374u);
    /* 00548148: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054814b: mov dword ptr [ecx], 0x6c6e04 */ W32((u32)(r_ecx), 0x6c6e04u);
    /* 00548151: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00548154: mov esp, ebp */ r_esp = r_ebp;
    /* 00548156: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00548157: ret  */ FN_RET(0x00548130); r_esp += 4; return;
}

void f_00548160(void) /* VideoBlackjackRoomInterface::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00548160);
    /* 00548160: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00548161: mov ebp, esp */ r_ebp = r_esp;
    /* 00548163: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00548165: push 0x6a524b */ { u32 v = 0x6a524bu; r_esp -= 4; W32(r_esp, v); }
    /* 0054816a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00548170: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00548171: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00548174: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00548179: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0054817b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054817c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0054817f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00548185: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00548188: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 0054818d: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x548192u); f_00686d82();
    /* 00548192: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00548195: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00548198: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0054819f: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005481a3: je 0x5481b2 */ if (fZ) goto L_005481b2;
L_005481a5:; BB(0x005481a5);
    /* 005481a5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005481a8: call 0x547450 */ r_esp -= 4; W32(r_esp, 0x5481adu); f_00547450();
    /* 005481ad: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005481b0: jmp 0x5481b9 */ goto L_005481b9;
L_005481b2:; BB(0x005481b2);
    /* 005481b2: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_005481b9:; BB(0x005481b9);
    /* 005481b9: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005481bc: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005481bf: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005481c6: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005481c9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005481cc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005481d3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005481d4: mov esp, ebp */ r_esp = r_ebp;
    /* 005481d6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005481d7: ret  */ FN_RET(0x00548160); r_esp += 4; return;
}

void f_005481e0(void) /* VideoBlackjackRoomInterface::vfunc3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005481e0);
    /* 005481e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005481e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005481e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005481e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005481e7: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005481eb: jne 0x5481f1 */ if (!fZ) goto L_005481f1;
L_005481ed:; BB(0x005481ed);
    /* 005481ed: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005481ef: jmp 0x54820d */ goto L_0054820d;
L_005481f1:; BB(0x005481f1);
    /* 005481f1: push 0x6c65d0 */ { u32 v = 0x6c65d0u; r_esp -= 4; W32(r_esp, v); }
    /* 005481f6: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5481fbu); f_00630f40();
    /* 005481fb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005481fe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005481ff: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00548202: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00548203: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x548208u); f_00686d8e();
    /* 00548208: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054820b: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_0054820d:; BB(0x0054820d);
    /* 0054820d: mov esp, ebp */ r_esp = r_ebp;
    /* 0054820f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00548210: ret 4 */ FN_RET(0x005481e0); r_esp += 8; return;
}

void f_00548240(void) /* VideoBlackjackRoomInterface::vfunc4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00548240);
    /* 00548240: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00548241: mov ebp, esp */ r_ebp = r_esp;
    /* 00548243: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00548244: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00548247: mov eax, 0x311668 */ r_eax = 0x311668u;
    /* 0054824c: mov esp, ebp */ r_esp = r_ebp;
    /* 0054824e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054824f: ret  */ FN_RET(0x00548240); r_esp += 4; return;
}

void f_00548250(void) /* VideoBlackjackRoomInterface::vfunc5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00548250);
    /* 00548250: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00548251: mov ebp, esp */ r_ebp = r_esp;
    /* 00548253: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00548254: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00548257: mov eax, 0x6c6f60 */ r_eax = 0x6c6f60u;
    /* 0054825c: mov esp, ebp */ r_esp = r_ebp;
    /* 0054825e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054825f: ret  */ FN_RET(0x00548250); r_esp += 4; return;
}

void f_00548270(void) /* VideoBlackjackRoomInterface::vfunc7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00548270);
    /* 00548270: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00548271: mov ebp, esp */ r_ebp = r_esp;
    /* 00548273: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00548274: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00548277: mov eax, 0x73bf44 */ r_eax = 0x73bf44u;
    /* 0054827c: mov esp, ebp */ r_esp = r_ebp;
    /* 0054827e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054827f: ret  */ FN_RET(0x00548270); r_esp += 4; return;
}

void f_00548280(void) /* VideoBlackjackRoomInterface::vfunc8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00548280);
    /* 00548280: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00548281: mov ebp, esp */ r_ebp = r_esp;
    /* 00548283: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00548284: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00548287: mov eax, 0x73bf50 */ r_eax = 0x73bf50u;
    /* 0054828c: mov esp, ebp */ r_esp = r_ebp;
    /* 0054828e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054828f: ret  */ FN_RET(0x00548280); r_esp += 4; return;
}

void f_005482b0(void) /* VideoBlackjackRoomInterface::vfunc11 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005482b0);
    /* 005482b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005482b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005482b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005482b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005482b7: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005482bb: jne 0x5482c1 */ if (!fZ) goto L_005482c1;
L_005482bd:; BB(0x005482bd);
    /* 005482bd: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005482bf: jmp 0x548308 */ goto L_00548308;
L_005482c1:; BB(0x005482c1);
    /* 005482c1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005482c4: mov dword ptr [eax], 1 */ W32((u32)(r_eax), 0x1u);
    /* 005482ca: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005482cd: mov dword ptr [ecx + 4], 1 */ W32((u32)(r_ecx+0x4u), 0x1u);
    /* 005482d4: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005482d7: mov dword ptr [edx + 8], 1 */ W32((u32)(r_edx+0x8u), 0x1u);
    /* 005482de: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005482e1: mov dword ptr [eax + 0xc], 1 */ W32((u32)(r_eax+0xcu), 0x1u);
    /* 005482e8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005482eb: mov dword ptr [ecx + 0x10], 1 */ W32((u32)(r_ecx+0x10u), 0x1u);
    /* 005482f2: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005482f5: mov dword ptr [edx + 0x14], 0 */ W32((u32)(r_edx+0x14u), 0x0u);
    /* 005482fc: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005482ff: mov dword ptr [eax + 0x18], 0 */ W32((u32)(r_eax+0x18u), 0x0u);
    /* 00548306: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_00548308:; BB(0x00548308);
    /* 00548308: mov esp, ebp */ r_esp = r_ebp;
    /* 0054830a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054830b: ret 8 */ FN_RET(0x005482b0); r_esp += 12; return;
}

void f_00548310(void) /* VideoBlackjackRoomInterface::vfunc12 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00548310);
    /* 00548310: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00548311: mov ebp, esp */ r_ebp = r_esp;
    /* 00548313: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00548314: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00548317: mov eax, 8 */ r_eax = 0x8u;
    /* 0054831c: mov esp, ebp */ r_esp = r_ebp;
    /* 0054831e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054831f: ret  */ FN_RET(0x00548310); r_esp += 4; return;
}

void f_00548340(void) /* VideoBlackjackRoomInterface::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00548340);
    /* 00548340: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00548341: mov ebp, esp */ r_ebp = r_esp;
    /* 00548343: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00548346: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00548349: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054834d: jne 0x548353 */ if (!fZ) goto L_00548353;
L_0054834f:; BB(0x0054834f);
    /* 0054834f: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00548351: jmp 0x54836e */ goto L_0054836e;
L_00548353:; BB(0x00548353);
    /* 00548353: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00548356: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00548359: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054835c: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 00548362: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00548365: mov dword ptr [edx + 4], 0 */ W32((u32)(r_edx+0x4u), 0x0u);
    /* 0054836c: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_0054836e:; BB(0x0054836e);
    /* 0054836e: mov esp, ebp */ r_esp = r_ebp;
    /* 00548370: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00548371: ret 4 */ FN_RET(0x00548340); r_esp += 8; return;
}

void f_00548390(void) /* VideoBlackjackRoomInterface::vfunc20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00548390);
    /* 00548390: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00548391: mov ebp, esp */ r_ebp = r_esp;
    /* 00548393: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00548394: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00548397: mov eax, 0xf */ r_eax = 0xfu;
    /* 0054839c: mov esp, ebp */ r_esp = r_ebp;
    /* 0054839e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054839f: ret  */ FN_RET(0x00548390); r_esp += 4; return;
}

void f_005483a0(void) /* VideoBlackjackRoomInterface::vfunc38 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005483a0);
    /* 005483a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005483a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005483a3: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005483a6: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005483a9: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 005483ab: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005483ae: call 0x63aae0 */ r_esp -= 4; W32(r_esp, 0x5483b3u); f_0063aae0();
    /* 005483b3: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005483b6: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005483b9: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005483bb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005483be: add ecx, dword ptr [edx] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005483c0: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005483c3: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 005483c5: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005483c8: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005483cb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005483ce: add edx, dword ptr [eax + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005483d1: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005483d4: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 005483d7: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005483da: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005483dc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005483df: add eax, dword ptr [ecx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005483e1: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005483e4: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 005483e6: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005483e9: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005483ec: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005483ef: add ecx, dword ptr [edx + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005483f2: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005483f5: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 005483f8: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005483fa: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00548400: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00548402: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00548408: mov eax, dword ptr [edx + 0x33c] */ r_eax = R32((u32)(r_edx+0x33cu));
    /* 0054840e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x548410u); call_ind(t); }
    /* 00548410: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00548413: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00548415: je 0x548495 */ if (fZ) goto L_00548495;
L_00548417:; BB(0x00548417);
    /* 00548417: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0054841d: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x548422u); f_005f3bf0();
    /* 00548422: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00548425: jne 0x548495 */ if (!fZ) goto L_00548495;
L_00548427:; BB(0x00548427);
    /* 00548427: lea edx, [ebp - 0xc] */ r_edx = (u32)(r_ebp+0xfffffff4u);
    /* 0054842a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054842b: lea eax, [ebp - 0x14] */ r_eax = (u32)(r_ebp+0xffffffecu);
    /* 0054842e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054842f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00548432: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00548433: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00548439: call 0x5e0c40 */ r_esp -= 4; W32(r_esp, 0x54843eu); f_005e0c40();
    /* 0054843e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00548441: add edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00548444: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00548447: add edx, dword ptr [eax] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00548449: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0054844c: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0054844e: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00548451: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00548454: add eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00548457: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0054845a: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0054845d: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00548460: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00548462: add eax, dword ptr [ebp - 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00548465: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00548468: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 0054846a: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0054846d: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00548470: add eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00548473: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00548476: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00548479: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0054847c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0054847e: add eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00548481: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00548484: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 00548486: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 00548489: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0054848c: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054848f: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00548492: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
L_00548495:; BB(0x00548495);
    /* 00548495: mov esp, ebp */ r_esp = r_ebp;
    /* 00548497: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00548498: ret 0x10 */ FN_RET(0x005483a0); r_esp += 20; return;
}

void f_005484a0(void) /* VideoBlackjackRoomInterface::vfunc21 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005484a0);
    /* 005484a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005484a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005484a3: sub esp, 0x68 */ {  u32 a = r_esp; u32 b = 0x68u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005484a6: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005484ab: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005484ad: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005484b0: mov dword ptr [ebp - 0x68], ecx */ W32((u32)(r_ebp+0xffffff98u), r_ecx);
    /* 005484b3: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 005484b5: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005484b8: call 0x63aae0 */ r_esp -= 4; W32(r_esp, 0x5484bdu); f_0063aae0();
    /* 005484bd: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005484c0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005484c2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005484c4: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5484c9u); f_0064c8a0();
    /* 005484c9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005484cc: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 005484cf: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 005484d2: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005484d5: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 005484d8: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005484db: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 005484de: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005484e0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005484e2: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5484e7u); f_0064c8a0();
    /* 005484e7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005484ea: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 005484ed: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 005484f0: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005484f3: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 005484f6: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 005484f9: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 005484fc: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005484ff: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00548500: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00548503: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00548504: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0054850a: call 0x5e0690 */ r_esp -= 4; W32(r_esp, 0x54850fu); f_005e0690();
    /* 0054850f: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00548515: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x54851au); f_005f3bf0();
    /* 0054851a: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054851d: jne 0x548536 */ if (!fZ) goto L_00548536;
L_0054851f:; BB(0x0054851f);
    /* 0054851f: lea eax, [ebp - 0x44] */ r_eax = (u32)(r_ebp+0xffffffbcu);
    /* 00548522: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00548523: lea ecx, [ebp - 0x4c] */ r_ecx = (u32)(r_ebp+0xffffffb4u);
    /* 00548526: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00548527: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0054852a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054852b: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00548531: call 0x5e0c40 */ r_esp -= 4; W32(r_esp, 0x548536u); f_005e0c40();
L_00548536:; BB(0x00548536);
    /* 00548536: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00548538: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054853a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054853c: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 0054853f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00548540: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00548543: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00548544: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00548547: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00548548: lea eax, [ebp - 0x64] */ r_eax = (u32)(r_ebp+0xffffff9cu);
    /* 0054854b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054854c: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0054854f: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x548554u); f_0064c5c0();
    /* 00548554: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00548557: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00548558: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0054855a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054855b: call 0x64c8d0 */ r_esp -= 4; W32(r_esp, 0x548560u); f_0064c8d0();
    /* 00548560: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00548563: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 00548566: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00548567: push 0x6b3590 */ { u32 v = 0x6b3590u; r_esp -= 4; W32(r_esp, v); }
    /* 0054856c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x548571u); f_00630f40();
    /* 00548571: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00548574: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00548575: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00548577: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0054857a: call 0x654390 */ r_esp -= 4; W32(r_esp, 0x54857fu); f_00654390();
    /* 0054857f: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00548581: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00548584: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00548586: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x54858bu); f_00686d72();
    /* 0054858b: mov esp, ebp */ r_esp = r_ebp;
    /* 0054858d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054858e: ret 8 */ FN_RET(0x005484a0); r_esp += 12; return;
}

void f_005485a0(void) /* VideoBlackjackRoomInterface::vfunc22 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005485a0);
    /* 005485a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005485a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005485a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005485a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005485a7: push 0x6b35b0 */ { u32 v = 0x6b35b0u; r_esp -= 4; W32(r_esp, v); }
    /* 005485ac: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005485ae: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005485b1: call 0x5fb5a0 */ r_esp -= 4; W32(r_esp, 0x5485b6u); f_005fb5a0();
    /* 005485b6: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005485b8: mov esp, ebp */ r_esp = r_ebp;
    /* 005485ba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005485bb: ret 4 */ FN_RET(0x005485a0); r_esp += 8; return;
}

void f_005485c0(void) /* VideoBlackjackRoomInterface::vfunc23 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005485c0);
    /* 005485c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005485c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005485c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005485c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005485c7: cmp dword ptr [ebp + 8], 0x311668 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x311668u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005485ce: jne 0x5485e1 */ if (!fZ) goto L_005485e1;
L_005485d0:; BB(0x005485d0);
    /* 005485d0: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 005485d2: mov ecx, dword ptr [0x163069c] */ r_ecx = R32((u32)(0x163069cu));
    /* 005485d8: call 0x653bd0 */ r_esp -= 4; W32(r_esp, 0x5485ddu); f_00653bd0();
    /* 005485dd: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005485df: jmp 0x5485e3 */ goto L_005485e3;
L_005485e1:; BB(0x005485e1);
    /* 005485e1: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_005485e3:; BB(0x005485e3);
    /* 005485e3: mov esp, ebp */ r_esp = r_ebp;
    /* 005485e5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005485e6: ret 4 */ FN_RET(0x005485c0); r_esp += 8; return;
}

void f_005485f0(void) /* VideoBlackjackRoomInterface::vfunc24 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005485f0);
    /* 005485f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005485f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005485f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005485f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005485f7: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005485f9: mov esp, ebp */ r_esp = r_ebp;
    /* 005485fb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005485fc: ret 4 */ FN_RET(0x005485f0); r_esp += 8; return;
}

void f_00548600(void) /* VideoBlackjackRoomInterface::vfunc25 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00548600);
    /* 00548600: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00548601: mov ebp, esp */ r_ebp = r_esp;
    /* 00548603: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00548604: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00548607: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00548609: mov esp, ebp */ r_esp = r_ebp;
    /* 0054860b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054860c: ret 4 */ FN_RET(0x00548600); r_esp += 8; return;
}

void f_00548610(void) /* VideoBlackjackRoomInterface::vfunc27 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00548610);
    /* 00548610: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00548611: mov ebp, esp */ r_ebp = r_esp;
    /* 00548613: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00548614: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00548617: mov eax, 0x73bf54 */ r_eax = 0x73bf54u;
    /* 0054861c: mov esp, ebp */ r_esp = r_ebp;
    /* 0054861e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054861f: ret  */ FN_RET(0x00548610); r_esp += 4; return;
}

void f_00548620(void) /* VideoBlackjackRoomInterface::vfunc28 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00548620);
    /* 00548620: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00548621: mov ebp, esp */ r_ebp = r_esp;
    /* 00548623: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00548625: push 0x6a5274 */ { u32 v = 0x6a5274u; r_esp -= 4; W32(r_esp, v); }
    /* 0054862a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00548630: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00548631: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00548632: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00548637: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00548639: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054863a: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0054863d: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00548643: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00548646: mov eax, dword ptr [0x793414] */ r_eax = R32((u32)(0x793414u));
    /* 0054864b: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0054864e: jne 0x5486b9 */ if (!fZ) goto L_005486b9;
L_00548650:; BB(0x00548650);
    /* 00548650: mov ecx, dword ptr [0x793414] */ r_ecx = R32((u32)(0x793414u));
    /* 00548656: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00548659: mov dword ptr [0x793414], ecx */ W32((u32)(0x793414u), r_ecx);
    /* 0054865f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00548666: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 0054866c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0054866e: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00548674: mov edx, dword ptr [eax + 0x23c] */ r_edx = R32((u32)(r_eax+0x23cu));
    /* 0054867a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x54867cu); call_ind(t); }
    /* 0054867c: mov dword ptr [0x73bf78], eax */ W32((u32)(0x73bf78u), r_eax);
    /* 00548681: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 00548686: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00548688: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0054868e: mov eax, dword ptr [edx + 0x23c] */ r_eax = R32((u32)(r_edx+0x23cu));
    /* 00548694: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x548696u); call_ind(t); }
    /* 00548696: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00548697: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0054869d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0054869f: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005486a5: mov eax, dword ptr [edx + 0x244] */ r_eax = R32((u32)(r_edx+0x244u));
    /* 005486ab: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5486adu); call_ind(t); }
    /* 005486ad: mov dword ptr [0x73bf7c], eax */ W32((u32)(0x73bf7cu), r_eax);
    /* 005486b2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_005486b9:; BB(0x005486b9);
    /* 005486b9: cmp dword ptr [ebp + 8], 0x311669 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x311669u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005486c0: jne 0x5486cb */ if (!fZ) goto L_005486cb;
L_005486c2:; BB(0x005486c2);
    /* 005486c2: mov eax, 0x73bf74 */ r_eax = 0x73bf74u;
    /* 005486c7: jmp 0x5486cd */ goto L_005486cd;
L_005486cb:; BB(0x005486cb);
    /* 005486cb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005486cd:; BB(0x005486cd);
    /* 005486cd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005486d0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005486d7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005486d8: mov esp, ebp */ r_esp = r_ebp;
    /* 005486da: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005486db: ret 4 */ FN_RET(0x00548620); r_esp += 8; return;
}

void f_005486e0(void) /* VideoBlackjackRoomInterface::vfunc29 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005486e0);
    /* 005486e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005486e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005486e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005486e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005486e7: mov eax, 0x73b620 */ r_eax = 0x73b620u;
    /* 005486ec: mov esp, ebp */ r_esp = r_ebp;
    /* 005486ee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005486ef: ret  */ FN_RET(0x005486e0); r_esp += 4; return;
}

void f_005486f0(void) /* VideoBlackjackRoomInterface::vfunc30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005486f0);
    /* 005486f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005486f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005486f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005486f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005486f7: mov eax, 0x73be08 */ r_eax = 0x73be08u;
    /* 005486fc: mov esp, ebp */ r_esp = r_ebp;
    /* 005486fe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005486ff: ret  */ FN_RET(0x005486f0); r_esp += 4; return;
}

void f_00548700(void) /* VideoBlackjackRoomInterface::vfunc31 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00548700);
    /* 00548700: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00548701: mov ebp, esp */ r_ebp = r_esp;
    /* 00548703: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00548706: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00548709: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0054870c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054870d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00548710: call 0x5487a0 */ r_esp -= 4; W32(r_esp, 0x548715u); f_005487a0();
    /* 00548715: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00548718: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054871c: jne 0x548722 */ if (!fZ) goto L_00548722;
L_0054871e:; BB(0x0054871e);
    /* 0054871e: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00548720: jmp 0x54878d */ goto L_0054878d;
L_00548722:; BB(0x00548722);
    /* 00548722: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00548728: call 0x5de170 */ r_esp -= 4; W32(r_esp, 0x54872du); f_005de170();
    /* 0054872d: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00548733: call 0x5e2f90 */ r_esp -= 4; W32(r_esp, 0x548738u); f_005e2f90();
    /* 00548738: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0054873e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00548741: mov dword ptr [ecx + 0x4f14], edx */ W32((u32)(r_ecx+0x4f14u), r_edx);
    /* 00548747: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0054874a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054874b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054874e: call 0x5487e0 */ r_esp -= 4; W32(r_esp, 0x548753u); f_005487e0();
    /* 00548753: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00548759: mov dword ptr [ecx + 0x4f10], eax */ W32((u32)(r_ecx+0x4f10u), r_eax);
    /* 0054875f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00548761: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00548763: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 00548769: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0054876b: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00548771: mov edx, dword ptr [eax + 0x334] */ r_edx = R32((u32)(r_eax+0x334u));
    /* 00548777: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x548779u); call_ind(t); }
    /* 00548779: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0054877c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054877e: jne 0x54878b */ if (!fZ) goto L_0054878b;
L_00548780:; BB(0x00548780);
    /* 00548780: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00548786: call 0x5e3130 */ r_esp -= 4; W32(r_esp, 0x54878bu); f_005e3130();
L_0054878b:; BB(0x0054878b);
    /* 0054878b: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_0054878d:; BB(0x0054878d);
    /* 0054878d: mov esp, ebp */ r_esp = r_ebp;
    /* 0054878f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00548790: ret 8 */ FN_RET(0x00548700); r_esp += 12; return;
}

void f_00548850(void) /* VideoBlackjackRoomInterface::vfunc86 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00548850);
    /* 00548850: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00548851: mov ebp, esp */ r_ebp = r_esp;
    /* 00548853: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00548856: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00548859: mov dword ptr [ebp - 8], 0x280 */ W32((u32)(r_ebp+0xfffffff8u), 0x280u);
    /* 00548860: mov dword ptr [ebp - 4], 0x1e0 */ W32((u32)(r_ebp+0xfffffffcu), 0x1e0u);
    /* 00548867: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0054886a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054886d: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0054886f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00548872: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00548875: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00548878: mov esp, ebp */ r_esp = r_ebp;
    /* 0054887a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054887b: ret 4 */ FN_RET(0x00548850); r_esp += 8; return;
}

