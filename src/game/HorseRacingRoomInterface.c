#include "protos.h"

void f_00444480(void) /* HorseRacingRoomInterface::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00444480);
    /* 00444480: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00444481: mov ebp, esp */ r_ebp = r_esp;
    /* 00444483: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00444484: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00444487: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044448a: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x44448fu); f_005e9e20();
    /* 0044448f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444492: mov dword ptr [eax], 0x6b3374 */ W32((u32)(r_eax), 0x6b3374u);
    /* 00444498: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044449b: mov dword ptr [ecx], 0x6b874c */ W32((u32)(r_ecx), 0x6b874cu);
    /* 004444a1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004444a4: mov esp, ebp */ r_esp = r_ebp;
    /* 004444a6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004444a7: ret  */ FN_RET(0x00444480); r_esp += 4; return;
}

void f_004444b0(void) /* HorseRacingRoomInterface::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004444b0);
    /* 004444b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004444b1: mov ebp, esp */ r_ebp = r_esp;
    /* 004444b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004444b5: push 0x69eb7b */ { u32 v = 0x69eb7bu; r_esp -= 4; W32(r_esp, v); }
    /* 004444ba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004444c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004444c1: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004444c4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 004444c9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004444cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004444cc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 004444cf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 004444d5: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 004444d8: push 0x90 */ { u32 v = 0x90u; r_esp -= 4; W32(r_esp, v); }
    /* 004444dd: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x4444e2u); f_00686d82();
    /* 004444e2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004444e5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004444e8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004444ef: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004444f3: je 0x444502 */ if (fZ) goto L_00444502;
L_004444f5:; BB(0x004444f5);
    /* 004444f5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004444f8: call 0x443c50 */ r_esp -= 4; W32(r_esp, 0x4444fdu); f_00443c50();
    /* 004444fd: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00444500: jmp 0x444509 */ goto L_00444509;
L_00444502:; BB(0x00444502);
    /* 00444502: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_00444509:; BB(0x00444509);
    /* 00444509: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0044450c: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0044450f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00444516: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00444519: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044451c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00444523: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00444524: mov esp, ebp */ r_esp = r_ebp;
    /* 00444526: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00444527: ret  */ FN_RET(0x004444b0); r_esp += 4; return;
}

void f_00444530(void) /* HorseRacingRoomInterface::vfunc3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00444530);
    /* 00444530: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00444531: mov ebp, esp */ r_ebp = r_esp;
    /* 00444533: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00444534: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00444537: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044453b: jne 0x444541 */ if (!fZ) goto L_00444541;
L_0044453d:; BB(0x0044453d);
    /* 0044453d: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0044453f: jmp 0x44455d */ goto L_0044455d;
L_00444541:; BB(0x00444541);
    /* 00444541: push 0x6b8304 */ { u32 v = 0x6b8304u; r_esp -= 4; W32(r_esp, v); }
    /* 00444546: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x44454bu); f_00630f40();
    /* 0044454b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044454e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044454f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00444552: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00444553: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x444558u); f_00686d8e();
    /* 00444558: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044455b: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_0044455d:; BB(0x0044455d);
    /* 0044455d: mov esp, ebp */ r_esp = r_ebp;
    /* 0044455f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00444560: ret 4 */ FN_RET(0x00444530); r_esp += 8; return;
}

void f_00444590(void) /* HorseRacingRoomInterface::vfunc4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00444590);
    /* 00444590: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00444591: mov ebp, esp */ r_ebp = r_esp;
    /* 00444593: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00444594: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00444597: mov eax, 0x30f728 */ r_eax = 0x30f728u;
    /* 0044459c: mov esp, ebp */ r_esp = r_ebp;
    /* 0044459e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044459f: ret  */ FN_RET(0x00444590); r_esp += 4; return;
}

void f_004445a0(void) /* HorseRacingRoomInterface::vfunc5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004445a0);
    /* 004445a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004445a1: mov ebp, esp */ r_ebp = r_esp;
    /* 004445a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004445a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004445a7: mov eax, 0x6b88a4 */ r_eax = 0x6b88a4u;
    /* 004445ac: mov esp, ebp */ r_esp = r_ebp;
    /* 004445ae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004445af: ret  */ FN_RET(0x004445a0); r_esp += 4; return;
}

void f_004445c0(void) /* HorseRacingRoomInterface::vfunc7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004445c0);
    /* 004445c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004445c1: mov ebp, esp */ r_ebp = r_esp;
    /* 004445c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004445c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004445c7: mov eax, 0x713b0c */ r_eax = 0x713b0cu;
    /* 004445cc: mov esp, ebp */ r_esp = r_ebp;
    /* 004445ce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004445cf: ret  */ FN_RET(0x004445c0); r_esp += 4; return;
}

void f_004445d0(void) /* HorseRacingRoomInterface::vfunc8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004445d0);
    /* 004445d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004445d1: mov ebp, esp */ r_ebp = r_esp;
    /* 004445d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004445d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004445d7: mov eax, 0x713b14 */ r_eax = 0x713b14u;
    /* 004445dc: mov esp, ebp */ r_esp = r_ebp;
    /* 004445de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004445df: ret  */ FN_RET(0x004445d0); r_esp += 4; return;
}

void f_00444600(void) /* HorseRacingRoomInterface::vfunc11 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00444600);
    /* 00444600: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00444601: mov ebp, esp */ r_ebp = r_esp;
    /* 00444603: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00444604: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00444607: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044460b: jne 0x444611 */ if (!fZ) goto L_00444611;
L_0044460d:; BB(0x0044460d);
    /* 0044460d: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0044460f: jmp 0x444658 */ goto L_00444658;
L_00444611:; BB(0x00444611);
    /* 00444611: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00444614: mov dword ptr [eax], 1 */ W32((u32)(r_eax), 0x1u);
    /* 0044461a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044461d: mov dword ptr [ecx + 4], 1 */ W32((u32)(r_ecx+0x4u), 0x1u);
    /* 00444624: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00444627: mov dword ptr [edx + 8], 1 */ W32((u32)(r_edx+0x8u), 0x1u);
    /* 0044462e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00444631: mov dword ptr [eax + 0xc], 1 */ W32((u32)(r_eax+0xcu), 0x1u);
    /* 00444638: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044463b: mov dword ptr [ecx + 0x10], 1 */ W32((u32)(r_ecx+0x10u), 0x1u);
    /* 00444642: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00444645: mov dword ptr [edx + 0x14], 0 */ W32((u32)(r_edx+0x14u), 0x0u);
    /* 0044464c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044464f: mov dword ptr [eax + 0x18], 0 */ W32((u32)(r_eax+0x18u), 0x0u);
    /* 00444656: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_00444658:; BB(0x00444658);
    /* 00444658: mov esp, ebp */ r_esp = r_ebp;
    /* 0044465a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044465b: ret 8 */ FN_RET(0x00444600); r_esp += 12; return;
}

void f_00444660(void) /* HorseRacingRoomInterface::vfunc12 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00444660);
    /* 00444660: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00444661: mov ebp, esp */ r_ebp = r_esp;
    /* 00444663: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00444664: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00444667: mov eax, 0xc */ r_eax = 0xcu;
    /* 0044466c: mov esp, ebp */ r_esp = r_ebp;
    /* 0044466e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044466f: ret  */ FN_RET(0x00444660); r_esp += 4; return;
}

void f_00444670(void) /* HorseRacingRoomInterface::vfunc13 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00444670);
    /* 00444670: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00444671: mov ebp, esp */ r_ebp = r_esp;
    /* 00444673: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00444676: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00444679: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044467d: jne 0x444683 */ if (!fZ) goto L_00444683;
L_0044467f:; BB(0x0044467f);
    /* 0044467f: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00444681: jmp 0x444691 */ goto L_00444691;
L_00444683:; BB(0x00444683);
    /* 00444683: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00444686: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00444689: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044468c: mov byte ptr [ecx], 1 */ W8((u32)(r_ecx), 0x1u);
    /* 0044468f: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_00444691:; BB(0x00444691);
    /* 00444691: mov esp, ebp */ r_esp = r_ebp;
    /* 00444693: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00444694: ret 4 */ FN_RET(0x00444670); r_esp += 8; return;
}

void f_004446a0(void) /* HorseRacingRoomInterface::vfunc14 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004446a0);
    /* 004446a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004446a1: mov ebp, esp */ r_ebp = r_esp;
    /* 004446a3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004446a6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004446a9: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004446ab: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 004446b1: call 0x5de600 */ r_esp -= 4; W32(r_esp, 0x4446b6u); f_005de600();
    /* 004446b6: mov ecx, eax */ r_ecx = r_eax;
    /* 004446b8: call 0x63aae0 */ r_esp -= 4; W32(r_esp, 0x4446bdu); f_0063aae0();
    /* 004446bd: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004446c0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004446c3: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004446c6: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004446ca: je 0x4446d2 */ if (fZ) goto L_004446d2;
L_004446cc:; BB(0x004446cc);
    /* 004446cc: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004446d0: jne 0x4446d6 */ if (!fZ) goto L_004446d6;
L_004446d2:; BB(0x004446d2);
    /* 004446d2: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004446d4: jmp 0x4446e2 */ goto L_004446e2;
L_004446d6:; BB(0x004446d6);
    /* 004446d6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004446d9: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004446dc: mov al, byte ptr [edx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 004446de: mov byte ptr [ecx], al */ W8((u32)(r_ecx), (u8)r_eax);
    /* 004446e0: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_004446e2:; BB(0x004446e2);
    /* 004446e2: mov esp, ebp */ r_esp = r_ebp;
    /* 004446e4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004446e5: ret 4 */ FN_RET(0x004446a0); r_esp += 8; return;
}

void f_004446f0(void) /* HorseRacingRoomInterface::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004446f0);
    /* 004446f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004446f1: mov ebp, esp */ r_ebp = r_esp;
    /* 004446f3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004446f6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004446f9: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004446fd: jne 0x444703 */ if (!fZ) goto L_00444703;
L_004446ff:; BB(0x004446ff);
    /* 004446ff: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00444701: jmp 0x44471f */ goto L_0044471f;
L_00444703:; BB(0x00444703);
    /* 00444703: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00444706: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00444709: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044470c: mov dword ptr [ecx + 4], 0 */ W32((u32)(r_ecx+0x4u), 0x0u);
    /* 00444713: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444716: mov dword ptr [edx + 8], 0 */ W32((u32)(r_edx+0x8u), 0x0u);
    /* 0044471d: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_0044471f:; BB(0x0044471f);
    /* 0044471f: mov esp, ebp */ r_esp = r_ebp;
    /* 00444721: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00444722: ret 4 */ FN_RET(0x004446f0); r_esp += 8; return;
}

void f_00444750(void) /* HorseRacingRoomInterface::vfunc38 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00444750);
    /* 00444750: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00444751: mov ebp, esp */ r_ebp = r_esp;
    /* 00444753: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00444756: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00444759: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0044475b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044475e: call 0x63aae0 */ r_esp -= 4; W32(r_esp, 0x444763u); f_0063aae0();
    /* 00444763: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00444766: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00444769: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0044476b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044476e: add ecx, dword ptr [edx + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00444771: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00444774: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00444776: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00444779: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0044477c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044477f: add edx, dword ptr [eax + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00444782: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00444785: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 00444788: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0044478b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0044478d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444790: add eax, dword ptr [ecx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00444793: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00444796: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00444798: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0044479b: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0044479e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004447a1: add ecx, dword ptr [edx + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004447a4: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 004447a7: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 004447aa: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004447ac: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 004447b2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004447b4: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 004447ba: mov eax, dword ptr [edx + 0x33c] */ r_eax = R32((u32)(r_edx+0x33cu));
    /* 004447c0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4447c2u); call_ind(t); }
    /* 004447c2: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004447c5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004447c7: je 0x444847 */ if (fZ) goto L_00444847;
L_004447c9:; BB(0x004447c9);
    /* 004447c9: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 004447cf: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x4447d4u); f_005f3bf0();
    /* 004447d4: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004447d7: jne 0x444847 */ if (!fZ) goto L_00444847;
L_004447d9:; BB(0x004447d9);
    /* 004447d9: lea edx, [ebp - 0xc] */ r_edx = (u32)(r_ebp+0xfffffff4u);
    /* 004447dc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004447dd: lea eax, [ebp - 0x14] */ r_eax = (u32)(r_ebp+0xffffffecu);
    /* 004447e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004447e1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004447e4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004447e5: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 004447eb: call 0x5e0c40 */ r_esp -= 4; W32(r_esp, 0x4447f0u); f_005e0c40();
    /* 004447f0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004447f3: add edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004447f6: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004447f9: add edx, dword ptr [eax] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004447fb: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 004447fe: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 00444800: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00444803: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00444806: add eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00444809: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0044480c: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0044480f: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00444812: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00444814: add eax, dword ptr [ebp - 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00444817: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0044481a: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 0044481c: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0044481f: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00444822: add eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00444825: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00444828: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0044482b: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0044482e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00444830: add eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00444833: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00444836: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 00444838: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0044483b: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0044483e: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00444841: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00444844: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
L_00444847:; BB(0x00444847);
    /* 00444847: mov esp, ebp */ r_esp = r_ebp;
    /* 00444849: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044484a: ret 0x10 */ FN_RET(0x00444750); r_esp += 20; return;
}

void f_00444850(void) /* HorseRacingRoomInterface::vfunc21 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00444850);
    /* 00444850: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00444851: mov ebp, esp */ r_ebp = r_esp;
    /* 00444853: sub esp, 0x68 */ {  u32 a = r_esp; u32 b = 0x68u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00444856: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0044485b: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0044485d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00444860: mov dword ptr [ebp - 0x68], ecx */ W32((u32)(r_ebp+0xffffff98u), r_ecx);
    /* 00444863: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00444865: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00444868: call 0x63aae0 */ r_esp -= 4; W32(r_esp, 0x44486du); f_0063aae0();
    /* 0044486d: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00444870: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00444872: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00444874: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x444879u); f_0064c8a0();
    /* 00444879: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044487c: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 0044487f: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 00444882: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 00444885: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00444888: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0044488b: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 0044488e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00444890: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00444892: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x444897u); f_0064c8a0();
    /* 00444897: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044489a: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 0044489d: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 004448a0: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 004448a3: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 004448a6: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 004448a9: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 004448ac: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 004448af: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004448b0: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004448b3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004448b4: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 004448ba: call 0x5e0690 */ r_esp -= 4; W32(r_esp, 0x4448bfu); f_005e0690();
    /* 004448bf: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 004448c5: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x4448cau); f_005f3bf0();
    /* 004448ca: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004448cd: jne 0x4448e6 */ if (!fZ) goto L_004448e6;
L_004448cf:; BB(0x004448cf);
    /* 004448cf: lea eax, [ebp - 0x44] */ r_eax = (u32)(r_ebp+0xffffffbcu);
    /* 004448d2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004448d3: lea ecx, [ebp - 0x4c] */ r_ecx = (u32)(r_ebp+0xffffffb4u);
    /* 004448d6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004448d7: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 004448da: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004448db: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 004448e1: call 0x5e0c40 */ r_esp -= 4; W32(r_esp, 0x4448e6u); f_005e0c40();
L_004448e6:; BB(0x004448e6);
    /* 004448e6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004448e8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004448ea: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004448ec: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 004448ef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004448f0: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004448f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004448f4: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 004448f7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004448f8: lea eax, [ebp - 0x64] */ r_eax = (u32)(r_ebp+0xffffff9cu);
    /* 004448fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004448fc: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 004448ff: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00444902: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x444907u); f_0064c5c0();
    /* 00444907: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0044490a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044490b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0044490d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044490e: call 0x64c8d0 */ r_esp -= 4; W32(r_esp, 0x444913u); f_0064c8d0();
    /* 00444913: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00444916: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 00444919: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044491a: push 0x6b3590 */ { u32 v = 0x6b3590u; r_esp -= 4; W32(r_esp, v); }
    /* 0044491f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x444924u); f_00630f40();
    /* 00444924: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00444927: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00444928: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044492a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044492d: call 0x654390 */ r_esp -= 4; W32(r_esp, 0x444932u); f_00654390();
    /* 00444932: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00444934: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00444937: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00444939: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x44493eu); f_00686d72();
    /* 0044493e: mov esp, ebp */ r_esp = r_ebp;
    /* 00444940: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00444941: ret 8 */ FN_RET(0x00444850); r_esp += 12; return;
}

void f_00444950(void) /* HorseRacingRoomInterface::vfunc22 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00444950);
    /* 00444950: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00444951: mov ebp, esp */ r_ebp = r_esp;
    /* 00444953: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00444954: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00444957: push 0x6b35b0 */ { u32 v = 0x6b35b0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044495c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0044495e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00444961: call 0x5fb5a0 */ r_esp -= 4; W32(r_esp, 0x444966u); f_005fb5a0();
    /* 00444966: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00444968: mov esp, ebp */ r_esp = r_ebp;
    /* 0044496a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044496b: ret 4 */ FN_RET(0x00444950); r_esp += 8; return;
}

void f_00444970(void) /* HorseRacingRoomInterface::vfunc23 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00444970);
    /* 00444970: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00444971: mov ebp, esp */ r_ebp = r_esp;
    /* 00444973: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00444974: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00444977: cmp dword ptr [ebp + 8], 0x30f728 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x30f728u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044497e: jne 0x444991 */ if (!fZ) goto L_00444991;
L_00444980:; BB(0x00444980);
    /* 00444980: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00444982: mov ecx, dword ptr [0x163069c] */ r_ecx = R32((u32)(0x163069cu));
    /* 00444988: call 0x653bd0 */ r_esp -= 4; W32(r_esp, 0x44498du); f_00653bd0();
    /* 0044498d: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0044498f: jmp 0x444993 */ goto L_00444993;
L_00444991:; BB(0x00444991);
    /* 00444991: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_00444993:; BB(0x00444993);
    /* 00444993: mov esp, ebp */ r_esp = r_ebp;
    /* 00444995: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00444996: ret 4 */ FN_RET(0x00444970); r_esp += 8; return;
}

void f_004449a0(void) /* HorseRacingRoomInterface::vfunc24 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004449a0);
    /* 004449a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004449a1: mov ebp, esp */ r_ebp = r_esp;
    /* 004449a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004449a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004449a7: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004449a9: mov esp, ebp */ r_esp = r_ebp;
    /* 004449ab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004449ac: ret 4 */ FN_RET(0x004449a0); r_esp += 8; return;
}

void f_004449b0(void) /* HorseRacingRoomInterface::vfunc25 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004449b0);
    /* 004449b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004449b1: mov ebp, esp */ r_ebp = r_esp;
    /* 004449b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004449b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004449b7: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004449b9: mov esp, ebp */ r_esp = r_ebp;
    /* 004449bb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004449bc: ret 4 */ FN_RET(0x004449b0); r_esp += 8; return;
}

void f_004449c0(void) /* HorseRacingRoomInterface::vfunc27 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004449c0);
    /* 004449c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004449c1: mov ebp, esp */ r_ebp = r_esp;
    /* 004449c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004449c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004449c7: mov eax, 0x713b18 */ r_eax = 0x713b18u;
    /* 004449cc: mov esp, ebp */ r_esp = r_ebp;
    /* 004449ce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004449cf: ret  */ FN_RET(0x004449c0); r_esp += 4; return;
}

void f_004449e0(void) /* HorseRacingRoomInterface::vfunc29 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004449e0);
    /* 004449e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004449e1: mov ebp, esp */ r_ebp = r_esp;
    /* 004449e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004449e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004449e7: mov eax, 0x713930 */ r_eax = 0x713930u;
    /* 004449ec: mov esp, ebp */ r_esp = r_ebp;
    /* 004449ee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004449ef: ret  */ FN_RET(0x004449e0); r_esp += 4; return;
}

void f_004449f0(void) /* HorseRacingRoomInterface::vfunc30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004449f0);
    /* 004449f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004449f1: mov ebp, esp */ r_ebp = r_esp;
    /* 004449f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004449f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004449f7: mov eax, 0x713ac4 */ r_eax = 0x713ac4u;
    /* 004449fc: mov esp, ebp */ r_esp = r_ebp;
    /* 004449fe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004449ff: ret  */ FN_RET(0x004449f0); r_esp += 4; return;
}

void f_00444a00(void) /* HorseRacingRoomInterface::vfunc31 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00444a00);
    /* 00444a00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00444a01: mov ebp, esp */ r_ebp = r_esp;
    /* 00444a03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00444a04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00444a07: cmp dword ptr [ebp + 8], 0x30f728 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x30f728u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00444a0e: jne 0x444a2d */ if (!fZ) goto L_00444a2d;
L_00444a10:; BB(0x00444a10);
    /* 00444a10: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00444a12: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00444a14: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 00444a19: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00444a1b: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00444a21: mov eax, dword ptr [edx + 0x334] */ r_eax = R32((u32)(r_edx+0x334u));
    /* 00444a27: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x444a29u); call_ind(t); }
    /* 00444a29: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00444a2b: jmp 0x444a2f */ goto L_00444a2f;
L_00444a2d:; BB(0x00444a2d);
    /* 00444a2d: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_00444a2f:; BB(0x00444a2f);
    /* 00444a2f: mov esp, ebp */ r_esp = r_ebp;
    /* 00444a31: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00444a32: ret 8 */ FN_RET(0x00444a00); r_esp += 12; return;
}

