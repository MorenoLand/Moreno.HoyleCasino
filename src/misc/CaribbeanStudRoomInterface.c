#include "protos.h"

void f_00425350(void) /* CaribbeanStudRoomInterface::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00425350);
    /* 00425350: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00425351: mov ebp, esp */ r_ebp = r_esp;
    /* 00425353: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00425354: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00425357: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042535a: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x42535fu); f_005e9e20();
    /* 0042535f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00425362: mov dword ptr [eax], 0x6b3374 */ W32((u32)(r_eax), 0x6b3374u);
    /* 00425368: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042536b: mov dword ptr [ecx], 0x6b65c4 */ W32((u32)(r_ecx), 0x6b65c4u);
    /* 00425371: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00425374: mov esp, ebp */ r_esp = r_ebp;
    /* 00425376: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00425377: ret  */ FN_RET(0x00425350); r_esp += 4; return;
}

void f_00425380(void) /* CaribbeanStudRoomInterface::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00425380);
    /* 00425380: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00425381: mov ebp, esp */ r_ebp = r_esp;
    /* 00425383: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00425385: push 0x69e35b */ { u32 v = 0x69e35bu; r_esp -= 4; W32(r_esp, v); }
    /* 0042538a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00425390: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00425391: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00425394: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00425399: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042539b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042539c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0042539f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 004253a5: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 004253a8: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 004253ad: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x4253b2u); f_00686d82();
    /* 004253b2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004253b5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004253b8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004253bf: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004253c3: je 0x4253d2 */ if (fZ) goto L_004253d2;
L_004253c5:; BB(0x004253c5);
    /* 004253c5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004253c8: call 0x423cc0 */ r_esp -= 4; W32(r_esp, 0x4253cdu); f_00423cc0();
    /* 004253cd: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004253d0: jmp 0x4253d9 */ goto L_004253d9;
L_004253d2:; BB(0x004253d2);
    /* 004253d2: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_004253d9:; BB(0x004253d9);
    /* 004253d9: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004253dc: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 004253df: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004253e6: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004253e9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004253ec: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004253f3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004253f4: mov esp, ebp */ r_esp = r_ebp;
    /* 004253f6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004253f7: ret  */ FN_RET(0x00425380); r_esp += 4; return;
}

void f_00425400(void) /* CaribbeanStudRoomInterface::vfunc3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00425400);
    /* 00425400: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00425401: mov ebp, esp */ r_ebp = r_esp;
    /* 00425403: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00425404: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00425407: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042540b: jne 0x425411 */ if (!fZ) goto L_00425411;
L_0042540d:; BB(0x0042540d);
    /* 0042540d: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0042540f: jmp 0x42542d */ goto L_0042542d;
L_00425411:; BB(0x00425411);
    /* 00425411: push 0x6b671c */ { u32 v = 0x6b671cu; r_esp -= 4; W32(r_esp, v); }
    /* 00425416: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x42541bu); f_00630f40();
    /* 0042541b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042541e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042541f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00425422: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00425423: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x425428u); f_00686d8e();
    /* 00425428: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042542b: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_0042542d:; BB(0x0042542d);
    /* 0042542d: mov esp, ebp */ r_esp = r_ebp;
    /* 0042542f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00425430: ret 4 */ FN_RET(0x00425400); r_esp += 8; return;
}

void f_00425460(void) /* CaribbeanStudRoomInterface::vfunc4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00425460);
    /* 00425460: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00425461: mov ebp, esp */ r_ebp = r_esp;
    /* 00425463: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00425464: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00425467: mov eax, 0x3106c8 */ r_eax = 0x3106c8u;
    /* 0042546c: mov esp, ebp */ r_esp = r_ebp;
    /* 0042546e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042546f: ret  */ FN_RET(0x00425460); r_esp += 4; return;
}

void f_00425470(void) /* CaribbeanStudRoomInterface::vfunc5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00425470);
    /* 00425470: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00425471: mov ebp, esp */ r_ebp = r_esp;
    /* 00425473: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00425474: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00425477: mov eax, 0x6b6734 */ r_eax = 0x6b6734u;
    /* 0042547c: mov esp, ebp */ r_esp = r_ebp;
    /* 0042547e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042547f: ret  */ FN_RET(0x00425470); r_esp += 4; return;
}

void f_00425490(void) /* CaribbeanStudRoomInterface::vfunc7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00425490);
    /* 00425490: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00425491: mov ebp, esp */ r_ebp = r_esp;
    /* 00425493: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00425494: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00425497: mov eax, 0x710524 */ r_eax = 0x710524u;
    /* 0042549c: mov esp, ebp */ r_esp = r_ebp;
    /* 0042549e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042549f: ret  */ FN_RET(0x00425490); r_esp += 4; return;
}

void f_004254a0(void) /* CaribbeanStudRoomInterface::vfunc8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004254a0);
    /* 004254a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004254a1: mov ebp, esp */ r_ebp = r_esp;
    /* 004254a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004254a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004254a7: mov eax, 0x71052c */ r_eax = 0x71052cu;
    /* 004254ac: mov esp, ebp */ r_esp = r_ebp;
    /* 004254ae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004254af: ret  */ FN_RET(0x004254a0); r_esp += 4; return;
}

void f_004254d0(void) /* CaribbeanStudRoomInterface::vfunc11 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004254d0);
    /* 004254d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004254d1: mov ebp, esp */ r_ebp = r_esp;
    /* 004254d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004254d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004254d7: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004254db: jne 0x4254e1 */ if (!fZ) goto L_004254e1;
L_004254dd:; BB(0x004254dd);
    /* 004254dd: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004254df: jmp 0x425528 */ goto L_00425528;
L_004254e1:; BB(0x004254e1);
    /* 004254e1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004254e4: mov dword ptr [eax], 4 */ W32((u32)(r_eax), 0x4u);
    /* 004254ea: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004254ed: mov dword ptr [ecx + 4], 1 */ W32((u32)(r_ecx+0x4u), 0x1u);
    /* 004254f4: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004254f7: mov dword ptr [edx + 8], 4 */ W32((u32)(r_edx+0x8u), 0x4u);
    /* 004254fe: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00425501: mov dword ptr [eax + 0xc], 1 */ W32((u32)(r_eax+0xcu), 0x1u);
    /* 00425508: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042550b: mov dword ptr [ecx + 0x10], 4 */ W32((u32)(r_ecx+0x10u), 0x4u);
    /* 00425512: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00425515: mov dword ptr [edx + 0x14], 0 */ W32((u32)(r_edx+0x14u), 0x0u);
    /* 0042551c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042551f: mov dword ptr [eax + 0x18], 3 */ W32((u32)(r_eax+0x18u), 0x3u);
    /* 00425526: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_00425528:; BB(0x00425528);
    /* 00425528: mov esp, ebp */ r_esp = r_ebp;
    /* 0042552a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042552b: ret 8 */ FN_RET(0x004254d0); r_esp += 12; return;
}

void f_00425530(void) /* CaribbeanStudRoomInterface::vfunc12 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00425530);
    /* 00425530: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00425531: mov ebp, esp */ r_ebp = r_esp;
    /* 00425533: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00425534: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00425537: mov eax, 0x14 */ r_eax = 0x14u;
    /* 0042553c: mov esp, ebp */ r_esp = r_ebp;
    /* 0042553e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042553f: ret  */ FN_RET(0x00425530); r_esp += 4; return;
}

void f_00425540(void) /* CaribbeanStudRoomInterface::vfunc13 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00425540);
    /* 00425540: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00425541: mov ebp, esp */ r_ebp = r_esp;
    /* 00425543: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00425546: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00425549: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042554d: jne 0x425553 */ if (!fZ) goto L_00425553;
L_0042554f:; BB(0x0042554f);
    /* 0042554f: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00425551: jmp 0x425568 */ goto L_00425568;
L_00425553:; BB(0x00425553);
    /* 00425553: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00425556: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00425559: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042555c: mov byte ptr [ecx], 1 */ W8((u32)(r_ecx), 0x1u);
    /* 0042555f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00425562: mov byte ptr [edx + 1], 1 */ W8((u32)(r_edx+0x1u), 0x1u);
    /* 00425566: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_00425568:; BB(0x00425568);
    /* 00425568: mov esp, ebp */ r_esp = r_ebp;
    /* 0042556a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042556b: ret 4 */ FN_RET(0x00425540); r_esp += 8; return;
}

void f_00425570(void) /* CaribbeanStudRoomInterface::vfunc14 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00425570);
    /* 00425570: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00425571: mov ebp, esp */ r_ebp = r_esp;
    /* 00425573: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00425576: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00425579: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0042557b: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00425581: call 0x5de600 */ r_esp -= 4; W32(r_esp, 0x425586u); f_005de600();
    /* 00425586: mov ecx, eax */ r_ecx = r_eax;
    /* 00425588: call 0x63aae0 */ r_esp -= 4; W32(r_esp, 0x42558du); f_0063aae0();
    /* 0042558d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00425590: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00425593: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00425596: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042559a: je 0x4255a2 */ if (fZ) goto L_004255a2;
L_0042559c:; BB(0x0042559c);
    /* 0042559c: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004255a0: jne 0x4255a6 */ if (!fZ) goto L_004255a6;
L_004255a2:; BB(0x004255a2);
    /* 004255a2: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004255a4: jmp 0x4255be */ goto L_004255be;
L_004255a6:; BB(0x004255a6);
    /* 004255a6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004255a9: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004255ac: mov al, byte ptr [edx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 004255ae: mov byte ptr [ecx], al */ W8((u32)(r_ecx), (u8)r_eax);
    /* 004255b0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004255b3: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004255b6: mov al, byte ptr [edx + 1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x1u))) & 0xffu);
    /* 004255b9: mov byte ptr [ecx + 1], al */ W8((u32)(r_ecx+0x1u), (u8)r_eax);
    /* 004255bc: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_004255be:; BB(0x004255be);
    /* 004255be: mov esp, ebp */ r_esp = r_ebp;
    /* 004255c0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004255c1: ret 4 */ FN_RET(0x00425570); r_esp += 8; return;
}

void f_004255d0(void) /* CaribbeanStudRoomInterface::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004255d0);
    /* 004255d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004255d1: mov ebp, esp */ r_ebp = r_esp;
    /* 004255d3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004255d6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004255d9: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004255dd: jne 0x4255e3 */ if (!fZ) goto L_004255e3;
L_004255df:; BB(0x004255df);
    /* 004255df: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004255e1: jmp 0x425613 */ goto L_00425613;
L_004255e3:; BB(0x004255e3);
    /* 004255e3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004255e6: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004255e9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004255ec: mov dword ptr [ecx + 4], 0 */ W32((u32)(r_ecx+0x4u), 0x0u);
    /* 004255f3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004255f6: mov dword ptr [edx + 8], 0 */ W32((u32)(r_edx+0x8u), 0x0u);
    /* 004255fd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00425600: mov dword ptr [eax + 0xc], 0 */ W32((u32)(r_eax+0xcu), 0x0u);
    /* 00425607: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042560a: mov dword ptr [ecx + 0x10], 0 */ W32((u32)(r_ecx+0x10u), 0x0u);
    /* 00425611: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_00425613:; BB(0x00425613);
    /* 00425613: mov esp, ebp */ r_esp = r_ebp;
    /* 00425615: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00425616: ret 4 */ FN_RET(0x004255d0); r_esp += 8; return;
}

void f_00425640(void) /* CaribbeanStudRoomInterface::vfunc38 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00425640);
    /* 00425640: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00425641: mov ebp, esp */ r_ebp = r_esp;
    /* 00425643: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00425646: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00425649: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0042564b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042564e: call 0x63aae0 */ r_esp -= 4; W32(r_esp, 0x425653u); f_0063aae0();
    /* 00425653: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00425656: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00425659: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0042565c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042565f: add ecx, dword ptr [edx + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0xcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00425662: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00425665: add ecx, dword ptr [eax] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00425667: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0042566a: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 0042566c: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0042566f: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00425672: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00425675: add ecx, dword ptr [edx + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00425678: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0042567b: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 0042567e: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00425681: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00425683: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00425686: add edx, dword ptr [eax + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00425689: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0042568c: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0042568e: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00425691: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00425694: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00425697: add eax, dword ptr [ecx + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042569a: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0042569d: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 004256a0: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 004256a3: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 004256a5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004256a8: add ecx, dword ptr [edx + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0xcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004256ab: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 004256ae: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 004256b0: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 004256b3: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 004256b6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004256b9: add edx, dword ptr [eax + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x10u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004256bc: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 004256bf: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 004256c2: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004256c4: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 004256ca: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004256cc: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 004256d2: mov edx, dword ptr [eax + 0x33c] */ r_edx = R32((u32)(r_eax+0x33cu));
    /* 004256d8: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4256dau); call_ind(t); }
    /* 004256da: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004256dd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004256df: je 0x42575f */ if (fZ) goto L_0042575f;
L_004256e1:; BB(0x004256e1);
    /* 004256e1: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 004256e7: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x4256ecu); f_005f3bf0();
    /* 004256ec: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004256ef: jne 0x42575f */ if (!fZ) goto L_0042575f;
L_004256f1:; BB(0x004256f1);
    /* 004256f1: lea ecx, [ebp - 0xc] */ r_ecx = (u32)(r_ebp+0xfffffff4u);
    /* 004256f4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004256f5: lea edx, [ebp - 0x14] */ r_edx = (u32)(r_ebp+0xffffffecu);
    /* 004256f8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004256f9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004256fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004256fd: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00425703: call 0x5e0c40 */ r_esp -= 4; W32(r_esp, 0x425708u); f_005e0c40();
    /* 00425708: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0042570b: add ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0042570e: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00425711: add ecx, dword ptr [edx] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00425713: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00425716: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00425718: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0042571b: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0042571e: add edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00425721: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00425724: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00425727: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0042572a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0042572c: add edx, dword ptr [ebp - 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0042572f: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00425732: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 00425734: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00425737: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0042573a: add edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0042573d: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00425740: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00425743: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00425746: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00425748: add edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0042574b: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0042574e: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 00425750: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00425753: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00425756: add edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00425759: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0042575c: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
L_0042575f:; BB(0x0042575f);
    /* 0042575f: mov esp, ebp */ r_esp = r_ebp;
    /* 00425761: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00425762: ret 0x10 */ FN_RET(0x00425640); r_esp += 20; return;
}

void f_00425770(void) /* CaribbeanStudRoomInterface::vfunc21 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00425770);
    /* 00425770: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00425771: mov ebp, esp */ r_ebp = r_esp;
    /* 00425773: sub esp, 0x88 */ {  u32 a = r_esp; u32 b = 0x88u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00425779: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0042577e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00425780: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00425783: mov dword ptr [ebp - 0x88], ecx */ W32((u32)(r_ebp+0xffffff78u), r_ecx);
    /* 00425789: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0042578b: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0042578e: call 0x63aae0 */ r_esp -= 4; W32(r_esp, 0x425793u); f_0063aae0();
    /* 00425793: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00425796: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00425798: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042579a: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x42579fu); f_0064c8a0();
    /* 0042579f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004257a2: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 004257a5: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 004257a8: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 004257ab: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 004257ae: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 004257b1: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 004257b4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004257b6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004257b8: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x4257bdu); f_0064c8a0();
    /* 004257bd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004257c0: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 004257c3: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 004257c6: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 004257c9: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 004257cc: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 004257cf: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 004257d2: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 004257d5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004257d6: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004257d9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004257da: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 004257e0: call 0x5e0690 */ r_esp -= 4; W32(r_esp, 0x4257e5u); f_005e0690();
    /* 004257e5: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 004257eb: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x4257f0u); f_005f3bf0();
    /* 004257f0: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004257f3: jne 0x42580c */ if (!fZ) goto L_0042580c;
L_004257f5:; BB(0x004257f5);
    /* 004257f5: lea eax, [ebp - 0x44] */ r_eax = (u32)(r_ebp+0xffffffbcu);
    /* 004257f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004257f9: lea ecx, [ebp - 0x4c] */ r_ecx = (u32)(r_ebp+0xffffffb4u);
    /* 004257fc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004257fd: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00425800: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00425801: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00425807: call 0x5e0c40 */ r_esp -= 4; W32(r_esp, 0x42580cu); f_005e0c40();
L_0042580c:; BB(0x0042580c);
    /* 0042580c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0042580e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00425810: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00425812: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 00425815: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00425816: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00425819: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042581a: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0042581d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042581e: lea eax, [ebp - 0x74] */ r_eax = (u32)(r_ebp+0xffffff8cu);
    /* 00425821: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00425822: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00425825: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00425826: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00425829: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042582a: lea eax, [ebp - 0x6c] */ r_eax = (u32)(r_ebp+0xffffff94u);
    /* 0042582d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042582e: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00425831: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 00425834: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00425835: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 00425838: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00425839: lea ecx, [ebp - 0x64] */ r_ecx = (u32)(r_ebp+0xffffff9cu);
    /* 0042583c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042583d: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00425840: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00425843: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x425848u); f_0064c5c0();
    /* 00425848: mov ecx, eax */ r_ecx = r_eax;
    /* 0042584a: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x42584fu); f_0064c5c0();
    /* 0042584f: mov ecx, eax */ r_ecx = r_eax;
    /* 00425851: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x425856u); f_0064c5c0();
    /* 00425856: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00425859: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042585a: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0042585c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042585d: call 0x64c8d0 */ r_esp -= 4; W32(r_esp, 0x425862u); f_0064c8d0();
    /* 00425862: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00425865: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 00425868: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00425869: push 0x6b3590 */ { u32 v = 0x6b3590u; r_esp -= 4; W32(r_esp, v); }
    /* 0042586e: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x425873u); f_00630f40();
    /* 00425873: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00425876: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00425877: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00425879: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042587c: call 0x654390 */ r_esp -= 4; W32(r_esp, 0x425881u); f_00654390();
    /* 00425881: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00425883: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00425885: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00425887: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 0042588a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042588b: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0042588e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042588f: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00425892: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00425893: lea edx, [ebp - 0x7c] */ r_edx = (u32)(r_ebp+0xffffff84u);
    /* 00425896: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00425897: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0042589a: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0042589d: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x4258a2u); f_0064c5c0();
    /* 004258a2: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 004258a5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004258a6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004258a8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004258a9: call 0x64c8d0 */ r_esp -= 4; W32(r_esp, 0x4258aeu); f_0064c8d0();
    /* 004258ae: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004258b1: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 004258b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004258b5: push 0x6b356c */ { u32 v = 0x6b356cu; r_esp -= 4; W32(r_esp, v); }
    /* 004258ba: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4258bfu); f_00630f40();
    /* 004258bf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004258c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004258c3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004258c5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004258c8: call 0x654390 */ r_esp -= 4; W32(r_esp, 0x4258cdu); f_00654390();
    /* 004258cd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004258cf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004258d1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004258d3: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 004258d6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004258d7: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004258da: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004258db: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 004258de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004258df: lea ecx, [ebp - 0x84] */ r_ecx = (u32)(r_ebp+0xffffff7cu);
    /* 004258e5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004258e6: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 004258e9: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004258ec: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x4258f1u); f_0064c5c0();
    /* 004258f1: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 004258f4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004258f5: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 004258f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004258f8: call 0x64c8d0 */ r_esp -= 4; W32(r_esp, 0x4258fdu); f_0064c8d0();
    /* 004258fd: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00425900: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 00425903: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00425904: push 0x6b3548 */ { u32 v = 0x6b3548u; r_esp -= 4; W32(r_esp, v); }
    /* 00425909: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x42590eu); f_00630f40();
    /* 0042590e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00425911: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00425912: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00425914: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00425917: call 0x654390 */ r_esp -= 4; W32(r_esp, 0x42591cu); f_00654390();
    /* 0042591c: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0042591e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00425921: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00425923: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x425928u); f_00686d72();
    /* 00425928: mov esp, ebp */ r_esp = r_ebp;
    /* 0042592a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042592b: ret 8 */ FN_RET(0x00425770); r_esp += 12; return;
}

void f_00425930(void) /* CaribbeanStudRoomInterface::vfunc22 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00425930);
    /* 00425930: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00425931: mov ebp, esp */ r_ebp = r_esp;
    /* 00425933: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00425934: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00425937: push 0x6b35b0 */ { u32 v = 0x6b35b0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042593c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0042593e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00425941: call 0x5fb5a0 */ r_esp -= 4; W32(r_esp, 0x425946u); f_005fb5a0();
    /* 00425946: push 0x6b35b0 */ { u32 v = 0x6b35b0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042594b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0042594d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00425950: call 0x5fb5a0 */ r_esp -= 4; W32(r_esp, 0x425955u); f_005fb5a0();
    /* 00425955: push 0x6b35b0 */ { u32 v = 0x6b35b0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042595a: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0042595c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042595f: call 0x5fb5a0 */ r_esp -= 4; W32(r_esp, 0x425964u); f_005fb5a0();
    /* 00425964: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00425966: mov esp, ebp */ r_esp = r_ebp;
    /* 00425968: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00425969: ret 4 */ FN_RET(0x00425930); r_esp += 8; return;
}

void f_00425970(void) /* CaribbeanStudRoomInterface::vfunc23 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00425970);
    /* 00425970: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00425971: mov ebp, esp */ r_ebp = r_esp;
    /* 00425973: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00425974: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00425977: cmp dword ptr [ebp + 8], 0x3106c8 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3106c8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042597e: jne 0x425991 */ if (!fZ) goto L_00425991;
L_00425980:; BB(0x00425980);
    /* 00425980: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00425982: mov ecx, dword ptr [0x163069c] */ r_ecx = R32((u32)(0x163069cu));
    /* 00425988: call 0x653bd0 */ r_esp -= 4; W32(r_esp, 0x42598du); f_00653bd0();
    /* 0042598d: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0042598f: jmp 0x425993 */ goto L_00425993;
L_00425991:; BB(0x00425991);
    /* 00425991: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_00425993:; BB(0x00425993);
    /* 00425993: mov esp, ebp */ r_esp = r_ebp;
    /* 00425995: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00425996: ret 4 */ FN_RET(0x00425970); r_esp += 8; return;
}

void f_004259a0(void) /* CaribbeanStudRoomInterface::vfunc24 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004259a0);
    /* 004259a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004259a1: mov ebp, esp */ r_ebp = r_esp;
    /* 004259a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004259a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004259a7: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004259a9: mov esp, ebp */ r_esp = r_ebp;
    /* 004259ab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004259ac: ret 4 */ FN_RET(0x004259a0); r_esp += 8; return;
}

void f_004259b0(void) /* CaribbeanStudRoomInterface::vfunc25 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004259b0);
    /* 004259b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004259b1: mov ebp, esp */ r_ebp = r_esp;
    /* 004259b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004259b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004259b7: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004259b9: mov esp, ebp */ r_esp = r_ebp;
    /* 004259bb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004259bc: ret 4 */ FN_RET(0x004259b0); r_esp += 8; return;
}

void f_004259c0(void) /* CaribbeanStudRoomInterface::vfunc27 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004259c0);
    /* 004259c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004259c1: mov ebp, esp */ r_ebp = r_esp;
    /* 004259c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004259c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004259c7: mov eax, 0x710530 */ r_eax = 0x710530u;
    /* 004259cc: mov esp, ebp */ r_esp = r_ebp;
    /* 004259ce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004259cf: ret  */ FN_RET(0x004259c0); r_esp += 4; return;
}

void f_004259d0(void) /* CaribbeanStudRoomInterface::vfunc28 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004259d0);
    /* 004259d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004259d1: mov ebp, esp */ r_ebp = r_esp;
    /* 004259d3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004259d5: push 0x69e384 */ { u32 v = 0x69e384u; r_esp -= 4; W32(r_esp, v); }
    /* 004259da: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004259e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004259e1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004259e2: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 004259e7: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004259e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004259ea: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 004259ed: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 004259f3: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 004259f6: mov eax, dword ptr [0x790368] */ r_eax = R32((u32)(0x790368u));
    /* 004259fb: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 004259fe: jne 0x425a69 */ if (!fZ) goto L_00425a69;
L_00425a00:; BB(0x00425a00);
    /* 00425a00: mov ecx, dword ptr [0x790368] */ r_ecx = R32((u32)(0x790368u));
    /* 00425a06: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00425a09: mov dword ptr [0x790368], ecx */ W32((u32)(0x790368u), r_ecx);
    /* 00425a0f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00425a16: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 00425a1c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00425a1e: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00425a24: mov edx, dword ptr [eax + 0x23c] */ r_edx = R32((u32)(r_eax+0x23cu));
    /* 00425a2a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x425a2cu); call_ind(t); }
    /* 00425a2c: mov dword ptr [0x710554], eax */ W32((u32)(0x710554u), r_eax);
    /* 00425a31: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 00425a36: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00425a38: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00425a3e: mov eax, dword ptr [edx + 0x23c] */ r_eax = R32((u32)(r_edx+0x23cu));
    /* 00425a44: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x425a46u); call_ind(t); }
    /* 00425a46: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00425a47: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00425a4d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00425a4f: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00425a55: mov eax, dword ptr [edx + 0x244] */ r_eax = R32((u32)(r_edx+0x244u));
    /* 00425a5b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x425a5du); call_ind(t); }
    /* 00425a5d: mov dword ptr [0x710558], eax */ W32((u32)(0x710558u), r_eax);
    /* 00425a62: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_00425a69:; BB(0x00425a69);
    /* 00425a69: cmp dword ptr [ebp + 8], 0x3106c9 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3106c9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00425a70: jne 0x425a7b */ if (!fZ) goto L_00425a7b;
L_00425a72:; BB(0x00425a72);
    /* 00425a72: mov eax, 0x710550 */ r_eax = 0x710550u;
    /* 00425a77: jmp 0x425a7d */ goto L_00425a7d;
L_00425a7b:; BB(0x00425a7b);
    /* 00425a7b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00425a7d:; BB(0x00425a7d);
    /* 00425a7d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00425a80: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00425a87: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00425a88: mov esp, ebp */ r_esp = r_ebp;
    /* 00425a8a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00425a8b: ret 4 */ FN_RET(0x004259d0); r_esp += 8; return;
}

void f_00425a90(void) /* CaribbeanStudRoomInterface::vfunc29 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00425a90);
    /* 00425a90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00425a91: mov ebp, esp */ r_ebp = r_esp;
    /* 00425a93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00425a94: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00425a97: mov eax, 0x70ff98 */ r_eax = 0x70ff98u;
    /* 00425a9c: mov esp, ebp */ r_esp = r_ebp;
    /* 00425a9e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00425a9f: ret  */ FN_RET(0x00425a90); r_esp += 4; return;
}

void f_00425aa0(void) /* CaribbeanStudRoomInterface::vfunc30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00425aa0);
    /* 00425aa0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00425aa1: mov ebp, esp */ r_ebp = r_esp;
    /* 00425aa3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00425aa4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00425aa7: mov eax, 0x710458 */ r_eax = 0x710458u;
    /* 00425aac: mov esp, ebp */ r_esp = r_ebp;
    /* 00425aae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00425aaf: ret  */ FN_RET(0x00425aa0); r_esp += 4; return;
}

void f_00425ab0(void) /* CaribbeanStudRoomInterface::vfunc31 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00425ab0);
    /* 00425ab0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00425ab1: mov ebp, esp */ r_ebp = r_esp;
    /* 00425ab3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00425ab6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00425ab9: cmp dword ptr [ebp + 0xc], 0x3106c8 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x3106c8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00425ac0: jne 0x425b86 */ if (!fZ) goto L_00425b86;
L_00425ac6:; BB(0x00425ac6);
    /* 00425ac6: cmp dword ptr [ebp + 8], 0x1397 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1397u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00425acd: jne 0x425ae5 */ if (!fZ) goto L_00425ae5;
L_00425acf:; BB(0x00425acf);
    /* 00425acf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00425ad1: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00425ad3: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 00425ad9: call 0x5dbd00 */ r_esp -= 4; W32(r_esp, 0x425adeu); f_005dbd00();
    /* 00425ade: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00425ae0: jmp 0x425baf */ goto L_00425baf;
L_00425ae5:; BB(0x00425ae5);
    /* 00425ae5: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00425aeb: call 0x5e2f90 */ r_esp -= 4; W32(r_esp, 0x425af0u); f_005e2f90();
    /* 00425af0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00425af3: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00425af6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00425af9: sub ecx, 0x1392 */ {  u32 a = r_ecx; u32 b = 0x1392u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00425aff: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00425b02: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00425b06: ja 0x425b56 */ if ((!fC&&!fZ)) goto L_00425b56;
L_00425b08:; BB(0x00425b08);
    /* 00425b08: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00425b0b: jmp dword ptr [edx*4 + 0x425bb8] */ { u32 t = R32((u32)(r_edx*4+0x425bb8u)); switch (t) { case 0x425b12u: goto L_00425b12; case 0x425b23u: goto L_00425b23; case 0x425b35u: goto L_00425b35; case 0x425b47u: goto L_00425b47; default: UNSUP(0x00425b0b, "jump table entry is not a known target"); } }
L_00425b12:; BB(0x00425b12);
    /* 00425b12: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 00425b17: mov dword ptr [eax + 0x4f0c], 5 */ W32((u32)(r_eax+0x4f0cu), 0x5u);
    /* 00425b21: jmp 0x425b56 */ goto L_00425b56;
L_00425b23:; BB(0x00425b23);
    /* 00425b23: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00425b29: mov dword ptr [ecx + 0x4f0c], 0xa */ W32((u32)(r_ecx+0x4f0cu), 0xau);
    /* 00425b33: jmp 0x425b56 */ goto L_00425b56;
L_00425b35:; BB(0x00425b35);
    /* 00425b35: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 00425b3b: mov dword ptr [edx + 0x4f0c], 0x19 */ W32((u32)(r_edx+0x4f0cu), 0x19u);
    /* 00425b45: jmp 0x425b56 */ goto L_00425b56;
L_00425b47:; BB(0x00425b47);
    /* 00425b47: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 00425b4c: mov dword ptr [eax + 0x4f0c], 0x64 */ W32((u32)(r_eax+0x4f0cu), 0x64u);
L_00425b56:; BB(0x00425b56);
    /* 00425b56: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00425b58: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00425b5a: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00425b60: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00425b62: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00425b68: mov eax, dword ptr [edx + 0x334] */ r_eax = R32((u32)(r_edx+0x334u));
    /* 00425b6e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x425b70u); call_ind(t); }
    /* 00425b70: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00425b73: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00425b75: jne 0x425b82 */ if (!fZ) goto L_00425b82;
L_00425b77:; BB(0x00425b77);
    /* 00425b77: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00425b7d: call 0x5e3130 */ r_esp -= 4; W32(r_esp, 0x425b82u); f_005e3130();
L_00425b82:; BB(0x00425b82);
    /* 00425b82: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00425b84: jmp 0x425baf */ goto L_00425baf;
L_00425b86:; BB(0x00425b86);
    /* 00425b86: cmp dword ptr [ebp + 8], 0x3106c8 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3106c8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00425b8d: jne 0x425bad */ if (!fZ) goto L_00425bad;
L_00425b8f:; BB(0x00425b8f);
    /* 00425b8f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00425b91: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00425b93: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 00425b99: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00425b9b: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00425ba1: mov edx, dword ptr [eax + 0x334] */ r_edx = R32((u32)(r_eax+0x334u));
    /* 00425ba7: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x425ba9u); call_ind(t); }
    /* 00425ba9: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00425bab: jmp 0x425baf */ goto L_00425baf;
L_00425bad:; BB(0x00425bad);
    /* 00425bad: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_00425baf:; BB(0x00425baf);
    /* 00425baf: mov esp, ebp */ r_esp = r_ebp;
    /* 00425bb1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00425bb2: ret 8 */ FN_RET(0x00425ab0); r_esp += 12; return;
}

